// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// GetTestFlags @ 146247ae0

EAutomationTestFlags __thiscall
FMovieSceneSubSectionCoreSequenceTransformsTest::GetTestFlags
          (FMovieSceneSubSectionCoreSequenceTransformsTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146247af0

bool __thiscall
FMovieSceneSubSectionCoreSequenceTransformsTest::IsStressTest
          (FMovieSceneSubSectionCoreSequenceTransformsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146247b00

uint __thiscall
FMovieSceneSubSectionCoreSequenceTransformsTest::GetRequiredDeviceNum
          (FMovieSceneSubSectionCoreSequenceTransformsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146247b20

FString * __thiscall
FMovieSceneSubSectionCoreSequenceTransformsTest::GetTestSourceFileName
          (FMovieSceneSubSectionCoreSequenceTransformsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieSceneTransformTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146247b60

int __thiscall
FMovieSceneSubSectionCoreSequenceTransformsTest::GetTestSourceFileLine
          (FMovieSceneSubSectionCoreSequenceTransformsTest *this)

{
  return 0xb2;
}

// GetTests @ 146247bd0

/* WARNING: Removing unreachable block (ram,0x000146247cbd) */
/* WARNING: Removing unreachable block (ram,0x000146247d88) */

void __thiscall
FMovieSceneSubSectionCoreSequenceTransformsTest::GetTests
          (FMovieSceneSubSectionCoreSequenceTransformsTest *this,
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
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.Core.SequenceTransforms");
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

// RunTest @ 146247db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMovieSceneSubSectionCoreSequenceTransformsTest::RunTest
          (FMovieSceneSubSectionCoreSequenceTransformsTest *this,FString *param_1)

{
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *pTVar1;
  TRange<FFrameNumber> *pTVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [8];
  TRangeBound<FFrameNumber> TVar7;
  FMovieSceneSequenceTransform *pFVar8;
  FFrameTime FVar9;
  FMovieSceneSequenceTransform *pFVar10;
  code *pcVar11;
  undefined1 auStackY_1d8 [32];
  TArrayView<TRange<FFrameNumber>,int> local_1a8;
  FMovieSceneSequenceTransform local_198;
  undefined8 local_178;
  undefined8 local_168;
  float fStack_160;
  int iStack_15c;
  ForAnyElementType local_158;
  int local_150;
  undefined1 local_148 [8];
  float fStack_140;
  undefined4 uStack_13c;
  ForAnyElementType local_138;
  undefined8 local_130;
  undefined1 local_128 [8];
  TRangeBound<FFrameNumber> TStack_120;
  FMovieSceneSequenceTransform local_118;
  undefined1 local_f8 [16];
  TRangeBound<FFrameNumber> local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined4 local_d7;
  undefined2 local_d3;
  undefined1 local_d1;
  TRangeBound<FFrameNumber> local_d0;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined4 local_bc;
  TRange<FFrameNumber> local_b8;
  TRangeBound<FFrameNumber> local_a8;
  undefined1 local_a0;
  undefined4 local_9f;
  undefined2 local_9b;
  undefined1 local_99;
  undefined1 local_98;
  undefined4 local_97;
  undefined2 local_93;
  undefined1 local_91;
  TRangeBound<FFrameNumber> local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  TRange<FFrameNumber> local_78;
  TRangeBound<FFrameNumber> local_68;
  undefined1 local_60;
  undefined4 local_5f;
  undefined2 local_5b;
  undefined1 local_59;
  undefined1 local_58;
  undefined4 local_57;
  undefined2 local_53;
  undefined1 local_51;
  TRangeBound<FFrameNumber> local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_1a8.DataPtr = (TRange<FFrameNumber> *)CONCAT44(100,local_1a8.DataPtr._0_4_);
  local_128 = (undefined1  [8])OpenBound;
  TStack_120 = OpenBound;
  local_78.LowerBound = OpenBound;
  local_78.UpperBound = OpenBound;
  local_68 = OpenBound;
  local_50 = OpenBound;
  local_b8.LowerBound = OpenBound;
  local_b8.UpperBound = OpenBound;
  local_a8 = OpenBound;
  local_90 = OpenBound;
  local_148._0_4_ = CONCAT31(local_148._1_3_,1);
  fStack_140 = (float)((uint)fStack_140 & 0xffffff00);
  uStack_13c = 200;
  local_88 = CONCAT44(100,local_148._0_4_);
  uStack_80 = CONCAT44(200,fStack_140);
  local_168 = (FScriptContainerElement *)&local_78;
  local_1a8.ArrayNum = 4;
  local_1a8._12_4_ = 200;
  local_178 = (FMovieSceneSequenceTransform *)CONCAT44(200,(undefined4)local_178);
  fStack_160 = 5.60519e-45;
  local_59 = 0;
  local_57 = local_1a8.DataPtr._1_4_;
  local_53 = 0;
  local_51 = 0;
  local_99 = 0;
  local_97 = local_1a8.DataPtr._1_4_;
  local_93 = 0;
  local_91 = 0;
  local_118.LinearTransform.TimeScale = 1.0;
  local_118.LinearTransform.Offset.FrameNumber.Value = 0;
  local_148._0_4_ = 1.0;
  local_148._4_4_ = 0;
  fStack_140 = 0.0;
  local_60 = 1;
  local_5f = local_178._1_4_;
  local_5b = 0;
  local_58 = 1;
  local_a0 = 1;
  local_9f = local_178._1_4_;
  local_9b = 0;
  local_98 = 1;
  local_1a8.DataPtr = &local_b8;
  local_48 = local_88;
  uStack_40 = uStack_80;
  TestTransform<FMovieSceneTimeTransform>
            ((FAutomationTestBase *)this,(FMovieSceneTimeTransform *)local_148,
             (TArrayView<TRange<FFrameNumber>,int> *)&local_168,&local_1a8,L"IdentityTransform");
  DestructItems<FMovieSceneNestedSequenceTransform,int>((FMovieSceneNestedSequenceTransform *)0x0,0)
  ;
  TVar7 = TStack_120;
  auVar6 = local_128;
  local_118.LinearTransform.Offset.FrameNumber.Value = 100;
  local_118.LinearTransform.Offset.SubFrame = 0.0;
  local_e8 = OpenBound;
  local_118.LinearTransform.TimeScale = 1.0;
  local_f8._0_4_ = local_128._0_4_;
  local_f8._4_4_ = local_128._4_4_;
  local_f8._8_4_ = TStack_120._0_4_;
  local_f8._12_4_ = TStack_120.Value.Value;
  local_d0 = OpenBound;
  local_128 = (undefined1  [8])local_f8;
  local_168 = (FScriptContainerElement *)&local_78;
  local_e0._0_4_ = 1;
  local_e0._4_4_ = 300;
  local_1a8.DataPtr = (TRange<FFrameNumber> *)0xc800000064;
  local_d7 = 0xc8000000;
  TStack_120.Value.Value = uStack_13c;
  TStack_120._0_4_ = 4;
  local_d3 = 0;
  fStack_160 = 5.60519e-45;
  fStack_140 = 0.0;
  local_d1 = 0;
  local_d8 = 1;
  local_c8 = 1;
  local_c4 = 200;
  local_c0 = 0;
  local_bc = 300;
  local_148._0_4_ = 1.0;
  local_148._4_4_ = 100;
  TestTransform<FMovieSceneTimeTransform>
            ((FAutomationTestBase *)this,(FMovieSceneTimeTransform *)local_148,
             (TArrayView<TRange<FFrameNumber>,int> *)&local_168,
             (TArrayView<TRange<FFrameNumber>,int> *)local_128,L"Simple Translation");
  DestructItems<FMovieSceneNestedSequenceTransform,int>((FMovieSceneNestedSequenceTransform *)0x0,0)
  ;
  local_148._4_4_ = -200;
  fStack_140 = 0.0;
  local_1a8.DataPtr = (TRange<FFrameNumber> *)0xffffff9c;
  local_f8._4_4_ = -100;
  local_f8._8_4_ = 0.0;
  local_148._0_4_ = 12.0;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130._0_4_ = 0;
  local_130._4_4_ = 0;
  local_f8._0_4_ = 1.0;
  local_e8 = (TRangeBound<FFrameNumber>)0x0;
  local_e0._0_4_ = 0;
  local_e0._4_4_ = 0;
  FMovieSceneSequenceTransform::operator*
            ((FMovieSceneSequenceTransform *)local_148,&local_118,
             (FMovieSceneSequenceTransform *)local_f8);
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_e8,(int)local_e0);
  if (local_e8 != (TRangeBound<FFrameNumber>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_138.Data,(int)local_130);
  if ((FMovieSceneNestedSequenceTransform *)local_138.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_138.Data);
  }
  uVar5 = local_1a8.DataPtr._0_4_;
  local_1a8.DataPtr = (TRange<FFrameNumber> *)CONCAT44(1000,local_1a8.DataPtr._0_4_);
  local_9f = local_1a8.DataPtr._1_4_;
  local_9b = 3;
  local_a8 = OpenBound;
  local_90 = OpenBound;
  local_168 = (FScriptContainerElement *)&local_78;
  local_99 = 0;
  local_1a8.DataPtr = (TRange<FFrameNumber> *)CONCAT44(0xffffff38,uVar5);
  local_97 = local_1a8.DataPtr._1_4_;
  TStack_120.Value.Value = uStack_13c;
  TStack_120._0_4_ = 4;
  local_93 = 0xffff;
  fStack_160 = 5.60519e-45;
  fStack_140 = local_118.LinearTransform.Offset.SubFrame;
  local_91 = 0xff;
  local_128[0] = auVar6[0];
  local_128._1_3_ = auVar6._1_3_;
  local_128._4_4_ = auVar6._4_4_;
  local_b8.LowerBound.Type.Value = local_128[0];
  local_b8.LowerBound._1_3_ = local_128._1_3_;
  local_b8.LowerBound.Value.Value = local_128._4_4_;
  local_b8.UpperBound = TVar7;
  local_a0 = 1;
  local_98 = 1;
  local_88 = CONCAT71(local_88._1_7_,1);
  local_88 = CONCAT44(0xffffff38,(undefined4)local_88);
  uVar4 = (uint)uStack_80;
  uStack_80 = CONCAT44(1000,uVar4 & 0xffffff00);
  local_148._0_4_ = local_118.LinearTransform.TimeScale;
  local_148._4_4_ = local_118.LinearTransform.Offset.FrameNumber.Value;
  local_128 = (undefined1  [8])&local_b8;
  TestTransform<FMovieSceneTimeTransform>
            ((FAutomationTestBase *)this,(FMovieSceneTimeTransform *)local_148,
             (TArrayView<TRange<FFrameNumber>,int> *)&local_168,
             (TArrayView<TRange<FFrameNumber>,int> *)local_128,L"Simple Translation + half speed");
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_118.NestedTransforms.AllocatorInstance.Data
             ,local_118.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)local_118.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_118.NestedTransforms.AllocatorInstance.Data);
  }
  local_1a8.DataPtr = (TRange<FFrameNumber> *)0x64;
  local_f8._4_4_ = 100;
  local_f8._8_4_ = 0.0;
  local_f8._0_4_ = 0.5;
  local_e8 = (TRangeBound<FFrameNumber>)0x0;
  local_e0._0_4_ = 0;
  local_e0._4_4_ = 0;
  local_198.LinearTransform.TimeScale = 1.0;
  local_198.LinearTransform.Offset.FrameNumber.Value = 0;
  local_198.LinearTransform.Offset.SubFrame = 0.0;
  local_198.NestedTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.NestedTransforms.ArrayNum = 0;
  local_198.NestedTransforms.ArrayMax = 0;
  local_178 = (FMovieSceneSequenceTransform *)&DAT_0000000a;
  pFVar8 = FMovieSceneSequenceTransform::operator*
                     ((FMovieSceneSequenceTransform *)local_f8,
                      (FMovieSceneSequenceTransform *)&local_168,&local_198);
  local_198.LinearTransform.TimeScale = (pFVar8->LinearTransform).TimeScale;
  local_198.LinearTransform.Offset.FrameNumber.Value =
       (pFVar8->LinearTransform).Offset.FrameNumber.Value;
  pTVar1 = &pFVar8->NestedTransforms;
  local_198.LinearTransform.Offset.SubFrame = (pFVar8->LinearTransform).Offset.SubFrame;
  if (&local_198.NestedTransforms != pTVar1) {
    DestructItems<FMovieSceneNestedSequenceTransform,int>
              ((FMovieSceneNestedSequenceTransform *)
               local_198.NestedTransforms.AllocatorInstance.Data,local_198.NestedTransforms.ArrayNum
              );
    if ((FMovieSceneNestedSequenceTransform *)local_198.NestedTransforms.AllocatorInstance.Data !=
        (FMovieSceneNestedSequenceTransform *)0x0) {
      FMemory::Free(local_198.NestedTransforms.AllocatorInstance.Data);
    }
    local_198.NestedTransforms.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_198.NestedTransforms.ArrayNum = (pFVar8->NestedTransforms).ArrayNum;
    local_198.NestedTransforms.ArrayMax = (pFVar8->NestedTransforms).ArrayMax;
    (pFVar8->NestedTransforms).ArrayNum = 0;
    (pFVar8->NestedTransforms).ArrayMax = 0;
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_158.Data,local_150);
  if ((FMovieSceneNestedSequenceTransform *)local_158.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_158.Data);
  }
  FVar9 = ::operator*((FFrameTime)&local_178,local_178);
  pFVar8 = *(FMovieSceneSequenceTransform **)FVar9;
  pFVar10 = FMovieSceneSequenceTransform::operator*
                      ((FMovieSceneSequenceTransform *)local_f8,
                       (FMovieSceneSequenceTransform *)&local_168,&local_198);
  local_198.LinearTransform.TimeScale = (pFVar10->LinearTransform).TimeScale;
  local_198.LinearTransform.Offset.FrameNumber.Value =
       (pFVar10->LinearTransform).Offset.FrameNumber.Value;
  pTVar1 = &pFVar10->NestedTransforms;
  local_198.LinearTransform.Offset.SubFrame = (pFVar10->LinearTransform).Offset.SubFrame;
  if (&local_198.NestedTransforms != pTVar1) {
    DestructItems<FMovieSceneNestedSequenceTransform,int>
              ((FMovieSceneNestedSequenceTransform *)
               local_198.NestedTransforms.AllocatorInstance.Data,local_198.NestedTransforms.ArrayNum
              );
    if ((FMovieSceneNestedSequenceTransform *)local_198.NestedTransforms.AllocatorInstance.Data !=
        (FMovieSceneNestedSequenceTransform *)0x0) {
      FMemory::Free(local_198.NestedTransforms.AllocatorInstance.Data);
    }
    local_198.NestedTransforms.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_198.NestedTransforms.ArrayNum = (pFVar10->NestedTransforms).ArrayNum;
    local_198.NestedTransforms.ArrayMax = (pFVar10->NestedTransforms).ArrayMax;
    (pFVar10->NestedTransforms).ArrayNum = 0;
    (pFVar10->NestedTransforms).ArrayMax = 0;
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_158.Data,local_150);
  if ((FMovieSceneNestedSequenceTransform *)local_158.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_158.Data);
  }
  FVar9 = ::operator*((FFrameTime)&local_178,pFVar8);
  pFVar8 = *(FMovieSceneSequenceTransform **)FVar9;
  pFVar10 = FMovieSceneSequenceTransform::operator*
                      ((FMovieSceneSequenceTransform *)local_f8,
                       (FMovieSceneSequenceTransform *)&local_168,&local_198);
  local_198.LinearTransform.TimeScale = (pFVar10->LinearTransform).TimeScale;
  local_198.LinearTransform.Offset.FrameNumber.Value =
       (pFVar10->LinearTransform).Offset.FrameNumber.Value;
  pTVar1 = &pFVar10->NestedTransforms;
  local_198.LinearTransform.Offset.SubFrame = (pFVar10->LinearTransform).Offset.SubFrame;
  if (&local_198.NestedTransforms != pTVar1) {
    DestructItems<FMovieSceneNestedSequenceTransform,int>
              ((FMovieSceneNestedSequenceTransform *)
               local_198.NestedTransforms.AllocatorInstance.Data,local_198.NestedTransforms.ArrayNum
              );
    if ((FMovieSceneNestedSequenceTransform *)local_198.NestedTransforms.AllocatorInstance.Data !=
        (FMovieSceneNestedSequenceTransform *)0x0) {
      FMemory::Free(local_198.NestedTransforms.AllocatorInstance.Data);
    }
    local_198.NestedTransforms.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_198.NestedTransforms.ArrayNum = (pFVar10->NestedTransforms).ArrayNum;
    local_198.NestedTransforms.ArrayMax = (pFVar10->NestedTransforms).ArrayMax;
    (pFVar10->NestedTransforms).ArrayNum = 0;
    (pFVar10->NestedTransforms).ArrayMax = 0;
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_158.Data,local_150);
  if ((FMovieSceneNestedSequenceTransform *)local_158.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_158.Data);
  }
  FVar9 = ::operator*((FFrameTime)&local_178,pFVar8);
  pFVar8 = *(FMovieSceneSequenceTransform **)FVar9;
  pFVar10 = FMovieSceneSequenceTransform::operator*
                      ((FMovieSceneSequenceTransform *)local_f8,
                       (FMovieSceneSequenceTransform *)&local_168,&local_198);
  local_198.LinearTransform.TimeScale = (pFVar10->LinearTransform).TimeScale;
  local_198.LinearTransform.Offset.FrameNumber.Value =
       (pFVar10->LinearTransform).Offset.FrameNumber.Value;
  pTVar1 = &pFVar10->NestedTransforms;
  local_198.LinearTransform.Offset.SubFrame = (pFVar10->LinearTransform).Offset.SubFrame;
  if (&local_198.NestedTransforms != pTVar1) {
    DestructItems<FMovieSceneNestedSequenceTransform,int>
              ((FMovieSceneNestedSequenceTransform *)
               local_198.NestedTransforms.AllocatorInstance.Data,local_198.NestedTransforms.ArrayNum
              );
    if ((FMovieSceneNestedSequenceTransform *)local_198.NestedTransforms.AllocatorInstance.Data !=
        (FMovieSceneNestedSequenceTransform *)0x0) {
      FMemory::Free(local_198.NestedTransforms.AllocatorInstance.Data);
    }
    local_198.NestedTransforms.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_198.NestedTransforms.ArrayNum = (pFVar10->NestedTransforms).ArrayNum;
    local_198.NestedTransforms.ArrayMax = (pFVar10->NestedTransforms).ArrayMax;
    (pFVar10->NestedTransforms).ArrayNum = 0;
    (pFVar10->NestedTransforms).ArrayMax = 0;
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_158.Data,local_150);
  if ((FMovieSceneNestedSequenceTransform *)local_158.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_158.Data);
  }
  FVar9 = ::operator*((FFrameTime)&local_178,pFVar8);
  pFVar8 = *(FMovieSceneSequenceTransform **)FVar9;
  pFVar10 = FMovieSceneSequenceTransform::operator*
                      ((FMovieSceneSequenceTransform *)local_f8,
                       (FMovieSceneSequenceTransform *)&local_168,&local_198);
  local_198.LinearTransform.TimeScale = (pFVar10->LinearTransform).TimeScale;
  local_198.LinearTransform.Offset.FrameNumber.Value =
       (pFVar10->LinearTransform).Offset.FrameNumber.Value;
  pTVar1 = &pFVar10->NestedTransforms;
  local_198.LinearTransform.Offset.SubFrame = (pFVar10->LinearTransform).Offset.SubFrame;
  if (&local_198.NestedTransforms != pTVar1) {
    DestructItems<FMovieSceneNestedSequenceTransform,int>
              ((FMovieSceneNestedSequenceTransform *)
               local_198.NestedTransforms.AllocatorInstance.Data,local_198.NestedTransforms.ArrayNum
              );
    if ((FMovieSceneNestedSequenceTransform *)local_198.NestedTransforms.AllocatorInstance.Data !=
        (FMovieSceneNestedSequenceTransform *)0x0) {
      FMemory::Free(local_198.NestedTransforms.AllocatorInstance.Data);
    }
    local_198.NestedTransforms.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_198.NestedTransforms.ArrayNum = (pFVar10->NestedTransforms).ArrayNum;
    local_198.NestedTransforms.ArrayMax = (pFVar10->NestedTransforms).ArrayMax;
    (pFVar10->NestedTransforms).ArrayNum = 0;
    (pFVar10->NestedTransforms).ArrayMax = 0;
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_158.Data,local_150);
  if ((FMovieSceneNestedSequenceTransform *)local_158.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_158.Data);
  }
  FVar9 = ::operator*((FFrameTime)&local_178,pFVar8);
  local_128 = (undefined1  [8])&DAT_0000000a;
  pTVar2 = *(TRange<FFrameNumber> **)FVar9;
  local_178 = (FMovieSceneSequenceTransform *)pTVar2;
  ::operator*((FFrameTime)&local_1a8,(FMovieSceneSequenceTransform *)&DAT_0000000a);
  local_128 = (undefined1  [8])local_1a8.DataPtr;
  local_168 = (FScriptContainerElement *)pTVar2;
  if (((int)local_1a8.DataPtr != (int)pTVar2) ||
     (local_128._4_4_ = (undefined4)((ulonglong)local_1a8.DataPtr >> 0x20),
     local_168._4_4_ = (int)((ulonglong)pTVar2 >> 0x20),
     bVar3 = (float)local_128._4_4_ != (float)local_168._4_4_, bVar3)) {
    pcVar11 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_168,
               L"Accumulated transform does not have the same effect as separate transformations (%i+%.5f != %i+%.5f)"
              );
    (*pcVar11)(this,&local_168,0);
    if ((TRange<FFrameNumber> *)local_168 != (TRange<FFrameNumber> *)0x0) {
      FMemory::Free(local_168);
    }
  }
  FMovieSceneSequenceTransform::Inverse
            (&local_198,(FMovieSceneInverseSequenceTransform *)&local_118);
  FMovieSceneInverseSequenceTransform::TryTransformTime
            ((FMovieSceneInverseSequenceTransform *)&local_118,(TOptional<FFrameTime> *)local_148,
             (FFrameTime)local_1a8.DataPtr);
  if (fStack_140._0_1_ == false) {
    pcVar11 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_168,L"Inverse accumulated transform did not return a valid time");
  }
  else {
    local_168 = (FScriptContainerElement *)CONCAT44(local_148._4_4_,local_148._0_4_);
    local_128._0_4_ = 10;
    local_128._4_4_ = 0.0;
    if (((float)local_148._0_4_ == 1.4013e-44) && ((float)local_148._4_4_ == 0.0))
    goto LAB_14624863a;
    pcVar11 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              ((FString *)&local_168,
               L"Inverse accumulated transform does not return value back to its original value (%i+%.5f != 10)"
              );
  }
  (*pcVar11)(this,&local_168,0);
  if ((TRange<FFrameNumber> *)local_168 != (TRange<FFrameNumber> *)0x0) {
    FMemory::Free(local_168);
  }
LAB_14624863a:
  if ((FMovieSceneNestedSequenceTransform *)local_118.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_118.NestedTransforms.AllocatorInstance.Data);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_198.NestedTransforms.AllocatorInstance.Data
             ,local_198.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)local_198.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_198.NestedTransforms.AllocatorInstance.Data);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_e8,(int)local_e0);
  if (local_e8 != (TRangeBound<FFrameNumber>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  return true;
}

// GetBeautifiedTestName @ 1462488b0

FString * __thiscall
FMovieSceneSubSectionCoreSequenceTransformsTest::GetBeautifiedTestName
          (FMovieSceneSubSectionCoreSequenceTransformsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.Core.SequenceTransforms");
  return __return_storage_ptr__;
}

