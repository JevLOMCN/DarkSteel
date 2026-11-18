// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 1462462d0

EAutomationTestFlags __thiscall
FMovieSceneSubSectionCoreLinearTransformsTest::GetTestFlags
          (FMovieSceneSubSectionCoreLinearTransformsTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 1462462e0

bool __thiscall
FMovieSceneSubSectionCoreLinearTransformsTest::IsStressTest
          (FMovieSceneSubSectionCoreLinearTransformsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1462462f0

uint __thiscall
FMovieSceneSubSectionCoreLinearTransformsTest::GetRequiredDeviceNum
          (FMovieSceneSubSectionCoreLinearTransformsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146246300

FString * __thiscall
FMovieSceneSubSectionCoreLinearTransformsTest::GetTestSourceFileName
          (FMovieSceneSubSectionCoreLinearTransformsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieSceneTransformTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146246330

int __thiscall
FMovieSceneSubSectionCoreLinearTransformsTest::GetTestSourceFileLine
          (FMovieSceneSubSectionCoreLinearTransformsTest *this)

{
  return 0x75;
}

// GetTests @ 146246340

/* WARNING: Removing unreachable block (ram,0x00014624642d) */
/* WARNING: Removing unreachable block (ram,0x0001462464f8) */

void __thiscall
FMovieSceneSubSectionCoreLinearTransformsTest::GetTests
          (FMovieSceneSubSectionCoreLinearTransformsTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Core.LinearTransforms");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 146246520

bool __thiscall
FMovieSceneSubSectionCoreLinearTransformsTest::RunTest
          (FMovieSceneSubSectionCoreLinearTransformsTest *this,FString *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  FMovieSceneTimeTransform *pFVar9;
  FFrameNumber local_res18;
  undefined4 local_res1c;
  undefined8 local_res20;
  TArrayView<FFrameNumber,int> local_68;
  undefined1 local_58 [4];
  FFrameNumber FStack_54;
  float fStack_50;
  uint uStack_4c;
  undefined1 local_48 [4];
  FFrameNumber FStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  TArrayView<FFrameNumber,int> local_38;
  TArrayView<FFrameNumber,int> local_28;
  
  local_38.ArrayNum = 2;
  local_58 = (undefined1  [4])0x3f800000;
  FStack_54.Value = 0;
  fStack_50 = 0.0;
  local_38.DataPtr = (FFrameNumber *)&local_res20;
  local_res18.Value = 500;
  _local_48 = &local_res18;
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  local_68.DataPtr = (FFrameNumber *)&DAT_3f800000;
  local_res1c = 0x20d;
  local_res20 = 0x20d000001f4;
  fStack_40 = 2.8026e-45;
  bVar7 = TestTransform<FMovieSceneTimeTransform>
                    ((FAutomationTestBase *)this,(FMovieSceneTimeTransform *)&local_68,
                     (TArrayView<FFrameNumber,int> *)local_48,&local_38,L"IdentityTransform");
  pFVar9 = FMovieSceneTimeTransform::Inverse
                     ((FMovieSceneTimeTransform *)local_58,(FMovieSceneTimeTransform *)&local_38);
  _local_48 = &local_res18;
  local_68.DataPtr = (FFrameNumber *)&local_res20;
  local_68.ArrayNum = 2;
  local_68._12_4_ = uStack_4c;
  fStack_40 = 2.8026e-45;
  uVar1 = pFVar9->TimeScale;
  uVar4 = (pFVar9->Offset).FrameNumber;
  fStack_50 = (pFVar9->Offset).SubFrame;
  local_58 = (undefined1  [4])uVar1;
  FStack_54.Value = uVar4;
  bVar8 = TestTransform<FMovieSceneTimeTransform>
                    ((FAutomationTestBase *)this,(FMovieSceneTimeTransform *)local_58,&local_68,
                     (TArrayView<FFrameNumber,int> *)local_48,L"IdentityTransformInverse");
  if ((bVar8) && (bVar7)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  local_38.ArrayNum = 2;
  FStack_54.Value = 0;
  fStack_50 = 0.0;
  local_38.DataPtr = (FFrameNumber *)&local_res20;
  local_58 = (undefined1  [4])0x40000000;
  _local_48 = &local_res18;
  local_68._8_8_ = (ulonglong)(uint)local_68._12_4_ << 0x20;
  local_68.DataPtr = (FFrameNumber *)0x40000000;
  local_res20 = 0x41a000003e8;
  fStack_40 = 2.8026e-45;
  bVar8 = TestTransform<FMovieSceneTimeTransform>
                    ((FAutomationTestBase *)this,(FMovieSceneTimeTransform *)&local_68,
                     (TArrayView<FFrameNumber,int> *)local_48,&local_38,L"OffsetTransform");
  if ((bVar8) && (bVar7)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  pFVar9 = FMovieSceneTimeTransform::Inverse
                     ((FMovieSceneTimeTransform *)local_58,(FMovieSceneTimeTransform *)&local_38);
  _local_48 = &local_res18;
  local_68.DataPtr = (FFrameNumber *)&local_res20;
  local_68.ArrayNum = 2;
  local_68._12_4_ = uStack_4c;
  fStack_40 = 2.8026e-45;
  uVar2 = pFVar9->TimeScale;
  uVar5 = (pFVar9->Offset).FrameNumber;
  fStack_50 = (pFVar9->Offset).SubFrame;
  local_58 = (undefined1  [4])uVar2;
  FStack_54.Value = uVar5;
  bVar8 = TestTransform<FMovieSceneTimeTransform>
                    ((FAutomationTestBase *)this,(FMovieSceneTimeTransform *)local_58,&local_68,
                     (TArrayView<FFrameNumber,int> *)local_48,L"OffsetTransformInverse");
  if ((bVar8) && (bVar7)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  FStack_54.Value = -1000;
  fStack_50 = 0.0;
  local_38.ArrayNum = 2;
  local_38.DataPtr = (FFrameNumber *)&local_res20;
  _local_48 = &local_res18;
  local_68._8_8_ = (ulonglong)(uint)local_68._12_4_ << 0x20;
  local_58 = (undefined1  [4])0x40000000;
  local_68.DataPtr = (FFrameNumber *)0xfffffc1840000000;
  local_res20 = 0x3200000000;
  fStack_40 = 2.8026e-45;
  bVar8 = TestTransform<FMovieSceneTimeTransform>
                    ((FAutomationTestBase *)this,(FMovieSceneTimeTransform *)&local_68,
                     (TArrayView<FFrameNumber,int> *)local_48,&local_38,L"OffsetAndScaleTransform");
  if ((bVar8) && (bVar7)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  pFVar9 = FMovieSceneTimeTransform::Inverse
                     ((FMovieSceneTimeTransform *)local_58,(FMovieSceneTimeTransform *)&local_38);
  _local_48 = &local_res18;
  local_68.DataPtr = (FFrameNumber *)&local_res20;
  local_68._12_4_ = uStack_4c;
  local_68.ArrayNum = 2;
  fStack_40 = 2.8026e-45;
  uVar3 = pFVar9->TimeScale;
  uVar6 = (pFVar9->Offset).FrameNumber;
  fStack_50 = (pFVar9->Offset).SubFrame;
  local_58 = (undefined1  [4])uVar3;
  FStack_54.Value = uVar6;
  bVar8 = TestTransform<FMovieSceneTimeTransform>
                    ((FAutomationTestBase *)this,(FMovieSceneTimeTransform *)local_58,&local_68,
                     (TArrayView<FFrameNumber,int> *)local_48,L"OffsetAndScaleTransformInverse");
  if ((bVar8) && (bVar7)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  FStack_54.Value = -500;
  fStack_50 = 0.0;
  FStack_44.Value = 0;
  fStack_40 = 0.0;
  local_68.DataPtr = (FFrameNumber *)0x3200000000;
  local_58 = (undefined1  [4])0x3f800000;
  local_res20 = 0;
  local_48 = (undefined1  [4])0x40000000;
  ::operator*((FMovieSceneTimeTransform *)&local_38,(FMovieSceneTimeTransform *)local_48,
              (FMovieSceneTimeTransform *)local_58);
  local_28.DataPtr = (FFrameNumber *)&local_68;
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = 2;
  _local_58 = &local_res18;
  fStack_40 = (float)local_38.ArrayNum;
  fStack_50 = 2.8026e-45;
  local_48 = SUB84(local_38.DataPtr,0);
  FStack_44.Value = (int)((ulonglong)local_38.DataPtr >> 0x20);
  bVar8 = TestTransform<FMovieSceneTimeTransform>
                    ((FAutomationTestBase *)this,(FMovieSceneTimeTransform *)local_48,
                     (TArrayView<FFrameNumber,int> *)local_58,&local_28,
                     L"OffsetAndScaleTransformObtainedFromMultiplication");
  if ((bVar8) && (bVar7)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  return bVar7;
}

// GetBeautifiedTestName @ 146246920

FString * __thiscall
FMovieSceneSubSectionCoreLinearTransformsTest::GetBeautifiedTestName
          (FMovieSceneSubSectionCoreLinearTransformsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Core.LinearTransforms");
  return __return_storage_ptr__;
}

