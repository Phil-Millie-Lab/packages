// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
// Autogenerated from Pigeon (v16.0.4), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#import <Foundation/Foundation.h>

@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, SKPaymentTransactionStateMessage) {
  /// Indicates the transaction is being processed in App Store.
  ///
  /// You should update your UI to indicate that you are waiting for the
  /// transaction to update to another state. Never complete a transaction that
  /// is still in a purchasing state.
  SKPaymentTransactionStateMessagePurchasing = 0,
  /// The user's payment has been succesfully processed.
  ///
  /// You should provide the user the content that they purchased.
  SKPaymentTransactionStateMessagePurchased = 1,
  /// The transaction failed.
  ///
  /// Check the [PaymentTransactionWrapper.error] property from
  /// [PaymentTransactionWrapper] for details.
  SKPaymentTransactionStateMessageFailed = 2,
  /// This transaction is restoring content previously purchased by the user.
  ///
  /// The previous transaction information can be obtained in
  /// [PaymentTransactionWrapper.originalTransaction] from
  /// [PaymentTransactionWrapper].
  SKPaymentTransactionStateMessageRestored = 3,
  /// The transaction is in the queue but pending external action. Wait for
  /// another callback to get the final state.
  ///
  /// You should update your UI to indicate that you are waiting for the
  /// transaction to update to another state.
  SKPaymentTransactionStateMessageDeferred = 4,
  /// Indicates the transaction is in an unspecified state.
  SKPaymentTransactionStateMessageUnspecified = 5,
};

/// Wrapper for SKPaymentTransactionStateMessage to allow for nullability.
@interface SKPaymentTransactionStateMessageBox : NSObject
@property(nonatomic, assign) SKPaymentTransactionStateMessage value;
- (instancetype)initWithValue:(SKPaymentTransactionStateMessage)value;
@end

typedef NS_ENUM(NSUInteger, SKProductDiscountTypeMessage) {
  /// A constant indicating the discount type is an introductory offer.
  SKProductDiscountTypeMessageIntroductory = 0,
  /// A constant indicating the discount type is a promotional offer.
  SKProductDiscountTypeMessageSubscription = 1,
};

/// Wrapper for SKProductDiscountTypeMessage to allow for nullability.
@interface SKProductDiscountTypeMessageBox : NSObject
@property(nonatomic, assign) SKProductDiscountTypeMessage value;
- (instancetype)initWithValue:(SKProductDiscountTypeMessage)value;
@end

typedef NS_ENUM(NSUInteger, SKProductDiscountPaymentModeMessage) {
  /// Allows user to pay the discounted price at each payment period.
  SKProductDiscountPaymentModeMessagePayAsYouGo = 0,
  /// Allows user to pay the discounted price upfront and receive the product for the rest of time
  /// that was paid for.
  SKProductDiscountPaymentModeMessagePayUpFront = 1,
  /// User pays nothing during the discounted period.
  SKProductDiscountPaymentModeMessageFreeTrial = 2,
  /// Unspecified mode.
  SKProductDiscountPaymentModeMessageUnspecified = 3,
};

/// Wrapper for SKProductDiscountPaymentModeMessage to allow for nullability.
@interface SKProductDiscountPaymentModeMessageBox : NSObject
@property(nonatomic, assign) SKProductDiscountPaymentModeMessage value;
- (instancetype)initWithValue:(SKProductDiscountPaymentModeMessage)value;
@end

typedef NS_ENUM(NSUInteger, SKSubscriptionPeriodUnitMessage) {
  SKSubscriptionPeriodUnitMessageDay = 0,
  SKSubscriptionPeriodUnitMessageWeek = 1,
  SKSubscriptionPeriodUnitMessageMonth = 2,
  SKSubscriptionPeriodUnitMessageYear = 3,
};

/// Wrapper for SKSubscriptionPeriodUnitMessage to allow for nullability.
@interface SKSubscriptionPeriodUnitMessageBox : NSObject
@property(nonatomic, assign) SKSubscriptionPeriodUnitMessage value;
- (instancetype)initWithValue:(SKSubscriptionPeriodUnitMessage)value;
@end

@class SKPaymentTransactionMessage;
@class SKPaymentMessage;
@class SKErrorMessage;
@class SKPaymentDiscountMessage;
@class SKStorefrontMessage;
@class SKProductsResponseMessage;
@class SKProductMessage;
@class SKPriceLocaleMessage;
@class SKProductDiscountMessage;
@class SKProductSubscriptionPeriodMessage;

@interface SKPaymentTransactionMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithPayment:(SKPaymentMessage *)payment
               transactionState:(SKPaymentTransactionStateMessage)transactionState
            originalTransaction:(nullable SKPaymentTransactionMessage *)originalTransaction
           transactionTimeStamp:(nullable NSNumber *)transactionTimeStamp
          transactionIdentifier:(nullable NSString *)transactionIdentifier
                          error:(nullable SKErrorMessage *)error;
@property(nonatomic, strong) SKPaymentMessage *payment;
@property(nonatomic, assign) SKPaymentTransactionStateMessage transactionState;
@property(nonatomic, strong, nullable) SKPaymentTransactionMessage *originalTransaction;
@property(nonatomic, strong, nullable) NSNumber *transactionTimeStamp;
@property(nonatomic, copy, nullable) NSString *transactionIdentifier;
@property(nonatomic, strong, nullable) SKErrorMessage *error;
@end

@interface SKPaymentMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithProductIdentifier:(NSString *)productIdentifier
                      applicationUsername:(nullable NSString *)applicationUsername
                              requestData:(nullable NSString *)requestData
                                 quantity:(NSInteger)quantity
               simulatesAskToBuyInSandbox:(BOOL)simulatesAskToBuyInSandbox
                          paymentDiscount:(nullable SKPaymentDiscountMessage *)paymentDiscount;
@property(nonatomic, copy) NSString *productIdentifier;
@property(nonatomic, copy, nullable) NSString *applicationUsername;
@property(nonatomic, copy, nullable) NSString *requestData;
@property(nonatomic, assign) NSInteger quantity;
@property(nonatomic, assign) BOOL simulatesAskToBuyInSandbox;
@property(nonatomic, strong, nullable) SKPaymentDiscountMessage *paymentDiscount;
@end

@interface SKErrorMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithCode:(NSInteger)code
                      domain:(NSString *)domain
                    userInfo:(nullable NSDictionary<NSString *, id> *)userInfo;
@property(nonatomic, assign) NSInteger code;
@property(nonatomic, copy) NSString *domain;
@property(nonatomic, copy, nullable) NSDictionary<NSString *, id> *userInfo;
@end

@interface SKPaymentDiscountMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithIdentifier:(NSString *)identifier
                     keyIdentifier:(NSString *)keyIdentifier
                             nonce:(NSString *)nonce
                         signature:(NSString *)signature
                         timestamp:(NSInteger)timestamp;
@property(nonatomic, copy) NSString *identifier;
@property(nonatomic, copy) NSString *keyIdentifier;
@property(nonatomic, copy) NSString *nonce;
@property(nonatomic, copy) NSString *signature;
@property(nonatomic, assign) NSInteger timestamp;
@end

@interface SKStorefrontMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithCountryCode:(NSString *)countryCode identifier:(NSString *)identifier;
@property(nonatomic, copy) NSString *countryCode;
@property(nonatomic, copy) NSString *identifier;
@end

@interface SKProductsResponseMessage : NSObject
+ (instancetype)makeWithProducts:(nullable NSArray<SKProductMessage *> *)products
       invalidProductIdentifiers:(nullable NSArray<NSString *> *)invalidProductIdentifiers;
@property(nonatomic, copy, nullable) NSArray<SKProductMessage *> *products;
@property(nonatomic, copy, nullable) NSArray<NSString *> *invalidProductIdentifiers;
@end

@interface SKProductMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithProductIdentifier:(NSString *)productIdentifier
                           localizedTitle:(NSString *)localizedTitle
                     localizedDescription:(NSString *)localizedDescription
                              priceLocale:(SKPriceLocaleMessage *)priceLocale
              subscriptionGroupIdentifier:(nullable NSString *)subscriptionGroupIdentifier
                                    price:(NSString *)price
                       subscriptionPeriod:
                           (nullable SKProductSubscriptionPeriodMessage *)subscriptionPeriod
                        introductoryPrice:(nullable SKProductDiscountMessage *)introductoryPrice
                                discounts:(nullable NSArray<SKProductDiscountMessage *> *)discounts;
@property(nonatomic, copy) NSString *productIdentifier;
@property(nonatomic, copy) NSString *localizedTitle;
@property(nonatomic, copy) NSString *localizedDescription;
@property(nonatomic, strong) SKPriceLocaleMessage *priceLocale;
@property(nonatomic, copy, nullable) NSString *subscriptionGroupIdentifier;
@property(nonatomic, copy) NSString *price;
@property(nonatomic, strong, nullable) SKProductSubscriptionPeriodMessage *subscriptionPeriod;
@property(nonatomic, strong, nullable) SKProductDiscountMessage *introductoryPrice;
@property(nonatomic, copy, nullable) NSArray<SKProductDiscountMessage *> *discounts;
@end

@interface SKPriceLocaleMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithCurrencySymbol:(NSString *)currencySymbol
                          currencyCode:(NSString *)currencyCode
                           countryCode:(NSString *)countryCode;
/// The currency symbol for the locale, e.g. $ for US locale.
@property(nonatomic, copy) NSString *currencySymbol;
/// The currency code for the locale, e.g. USD for US locale.
@property(nonatomic, copy) NSString *currencyCode;
/// The country code for the locale, e.g. US for US locale.
@property(nonatomic, copy) NSString *countryCode;
@end

@interface SKProductDiscountMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithPrice:(NSString *)price
                  priceLocale:(SKPriceLocaleMessage *)priceLocale
              numberOfPeriods:(NSInteger)numberOfPeriods
                  paymentMode:(SKProductDiscountPaymentModeMessage)paymentMode
           subscriptionPeriod:(SKProductSubscriptionPeriodMessage *)subscriptionPeriod
                   identifier:(nullable NSString *)identifier
                         type:(SKProductDiscountTypeMessage)type;
@property(nonatomic, copy) NSString *price;
@property(nonatomic, strong) SKPriceLocaleMessage *priceLocale;
@property(nonatomic, assign) NSInteger numberOfPeriods;
@property(nonatomic, assign) SKProductDiscountPaymentModeMessage paymentMode;
@property(nonatomic, strong) SKProductSubscriptionPeriodMessage *subscriptionPeriod;
@property(nonatomic, copy, nullable) NSString *identifier;
@property(nonatomic, assign) SKProductDiscountTypeMessage type;
@end

@interface SKProductSubscriptionPeriodMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithNumberOfUnits:(NSInteger)numberOfUnits
                                 unit:(SKSubscriptionPeriodUnitMessage)unit;
@property(nonatomic, assign) NSInteger numberOfUnits;
@property(nonatomic, assign) SKSubscriptionPeriodUnitMessage unit;
@end

/// The codec used by InAppPurchaseAPI.
NSObject<FlutterMessageCodec> *InAppPurchaseAPIGetCodec(void);

@protocol InAppPurchaseAPI
/// Returns if the current device is able to make payments
///
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)canMakePaymentsWithError:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable NSArray<SKPaymentTransactionMessage *> *)transactionsWithError:
    (FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable SKStorefrontMessage *)storefrontWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)addPaymentPaymentMap:(NSDictionary<NSString *, id> *)paymentMap
                       error:(FlutterError *_Nullable *_Nonnull)error;
- (void)startProductRequestProductIdentifiers:(NSArray<NSString *> *)productIdentifiers
                                   completion:(void (^)(SKProductsResponseMessage *_Nullable,
                                                        FlutterError *_Nullable))completion;
- (void)finishTransactionFinishMap:(NSDictionary<NSString *, NSString *> *)finishMap
                             error:(FlutterError *_Nullable *_Nonnull)error;
- (void)restoreTransactionsApplicationUserName:(nullable NSString *)applicationUserName
                                         error:(FlutterError *_Nullable *_Nonnull)error;
- (void)presentCodeRedemptionSheetWithError:(FlutterError *_Nullable *_Nonnull)error;
- (nullable NSString *)retrieveReceiptDataWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)refreshReceiptReceiptProperties:(nullable NSDictionary<NSString *, id> *)receiptProperties
                             completion:(void (^)(FlutterError *_Nullable))completion;
- (void)startObservingPaymentQueueWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)stopObservingPaymentQueueWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)registerPaymentQueueDelegateWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)removePaymentQueueDelegateWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)showPriceConsentIfNeededWithError:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void SetUpInAppPurchaseAPI(id<FlutterBinaryMessenger> binaryMessenger,
                                  NSObject<InAppPurchaseAPI> *_Nullable api);

NS_ASSUME_NONNULL_END
