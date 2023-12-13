// Mocks generated by Mockito 5.4.3 from annotations
// in camera_android_camerax/test/recorder_test.dart.
// Do not manually edit this file.

// ignore_for_file: no_leading_underscores_for_library_prefixes
import 'dart:async' as _i7;

import 'package:camera_android_camerax/src/camerax_library.g.dart' as _i2;
import 'package:camera_android_camerax/src/pending_recording.dart' as _i6;
import 'package:camera_android_camerax/src/quality_selector.dart' as _i4;
import 'package:camera_android_camerax/src/recording.dart' as _i3;
import 'package:mockito/mockito.dart' as _i1;

import 'test_camerax_library.g.dart' as _i5;

// ignore_for_file: type=lint
// ignore_for_file: avoid_redundant_argument_values
// ignore_for_file: avoid_setters_without_getters
// ignore_for_file: comment_references
// ignore_for_file: deprecated_member_use
// ignore_for_file: deprecated_member_use_from_same_package
// ignore_for_file: implementation_imports
// ignore_for_file: invalid_use_of_visible_for_testing_member
// ignore_for_file: prefer_const_constructors
// ignore_for_file: unnecessary_parenthesis
// ignore_for_file: camel_case_types
// ignore_for_file: subtype_of_sealed_class

class _FakeResolutionInfo_0 extends _i1.SmartFake
    implements _i2.ResolutionInfo {
  _FakeResolutionInfo_0(
    Object parent,
    Invocation parentInvocation,
  ) : super(
          parent,
          parentInvocation,
        );
}

class _FakeRecording_1 extends _i1.SmartFake implements _i3.Recording {
  _FakeRecording_1(
    Object parent,
    Invocation parentInvocation,
  ) : super(
          parent,
          parentInvocation,
        );
}

/// A class which mocks [QualitySelector].
///
/// See the documentation for Mockito's code generation for more information.
// ignore: must_be_immutable
class MockQualitySelector extends _i1.Mock implements _i4.QualitySelector {
  MockQualitySelector() {
    _i1.throwOnMissingStub(this);
  }

  @override
  List<_i2.VideoQualityData> get qualityList => (super.noSuchMethod(
        Invocation.getter(#qualityList),
        returnValue: <_i2.VideoQualityData>[],
      ) as List<_i2.VideoQualityData>);
}

/// A class which mocks [TestInstanceManagerHostApi].
///
/// See the documentation for Mockito's code generation for more information.
class MockTestInstanceManagerHostApi extends _i1.Mock
    implements _i5.TestInstanceManagerHostApi {
  MockTestInstanceManagerHostApi() {
    _i1.throwOnMissingStub(this);
  }

  @override
  void clear() => super.noSuchMethod(
        Invocation.method(
          #clear,
          [],
        ),
        returnValueForMissingStub: null,
      );
}

/// A class which mocks [TestFallbackStrategyHostApi].
///
/// See the documentation for Mockito's code generation for more information.
class MockTestFallbackStrategyHostApi extends _i1.Mock
    implements _i5.TestFallbackStrategyHostApi {
  MockTestFallbackStrategyHostApi() {
    _i1.throwOnMissingStub(this);
  }

  @override
  void create(
    int? identifier,
    _i2.VideoQuality? quality,
    _i2.VideoResolutionFallbackRule? fallbackRule,
  ) =>
      super.noSuchMethod(
        Invocation.method(
          #create,
          [
            identifier,
            quality,
            fallbackRule,
          ],
        ),
        returnValueForMissingStub: null,
      );
}

/// A class which mocks [TestRecorderHostApi].
///
/// See the documentation for Mockito's code generation for more information.
class MockTestRecorderHostApi extends _i1.Mock
    implements _i5.TestRecorderHostApi {
  MockTestRecorderHostApi() {
    _i1.throwOnMissingStub(this);
  }

  @override
  void create(
    int? identifier,
    int? aspectRatio,
    int? bitRate,
    int? qualitySelectorId,
  ) =>
      super.noSuchMethod(
        Invocation.method(
          #create,
          [
            identifier,
            aspectRatio,
            bitRate,
            qualitySelectorId,
          ],
        ),
        returnValueForMissingStub: null,
      );

  @override
  int getAspectRatio(int? identifier) => (super.noSuchMethod(
        Invocation.method(
          #getAspectRatio,
          [identifier],
        ),
        returnValue: 0,
      ) as int);

  @override
  int getTargetVideoEncodingBitRate(int? identifier) => (super.noSuchMethod(
        Invocation.method(
          #getTargetVideoEncodingBitRate,
          [identifier],
        ),
        returnValue: 0,
      ) as int);

  @override
  int prepareRecording(
    int? identifier,
    String? path,
  ) =>
      (super.noSuchMethod(
        Invocation.method(
          #prepareRecording,
          [
            identifier,
            path,
          ],
        ),
        returnValue: 0,
      ) as int);
}

/// A class which mocks [TestQualitySelectorHostApi].
///
/// See the documentation for Mockito's code generation for more information.
class MockTestQualitySelectorHostApi extends _i1.Mock
    implements _i5.TestQualitySelectorHostApi {
  MockTestQualitySelectorHostApi() {
    _i1.throwOnMissingStub(this);
  }

  @override
  void create(
    int? identifier,
    List<_i2.VideoQualityData?>? videoQualityDataList,
    int? fallbackStrategyId,
  ) =>
      super.noSuchMethod(
        Invocation.method(
          #create,
          [
            identifier,
            videoQualityDataList,
            fallbackStrategyId,
          ],
        ),
        returnValueForMissingStub: null,
      );

  @override
  _i2.ResolutionInfo getResolution(
    int? cameraInfoId,
    _i2.VideoQuality? quality,
  ) =>
      (super.noSuchMethod(
        Invocation.method(
          #getResolution,
          [
            cameraInfoId,
            quality,
          ],
        ),
        returnValue: _FakeResolutionInfo_0(
          this,
          Invocation.method(
            #getResolution,
            [
              cameraInfoId,
              quality,
            ],
          ),
        ),
      ) as _i2.ResolutionInfo);
}

/// A class which mocks [PendingRecording].
///
/// See the documentation for Mockito's code generation for more information.
// ignore: must_be_immutable
class MockPendingRecording extends _i1.Mock implements _i6.PendingRecording {
  MockPendingRecording() {
    _i1.throwOnMissingStub(this);
  }

  @override
  _i7.Future<_i3.Recording> start() => (super.noSuchMethod(
        Invocation.method(
          #start,
          [],
        ),
        returnValue: _i7.Future<_i3.Recording>.value(_FakeRecording_1(
          this,
          Invocation.method(
            #start,
            [],
          ),
        )),
      ) as _i7.Future<_i3.Recording>);
}
