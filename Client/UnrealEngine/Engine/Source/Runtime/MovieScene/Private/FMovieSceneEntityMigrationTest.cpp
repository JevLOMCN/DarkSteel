// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 9

// GetTestFlags @ 146258ff0

EAutomationTestFlags __thiscall
FMovieSceneEntityMigrationTest::GetTestFlags(FMovieSceneEntityMigrationTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146259000

bool __thiscall FMovieSceneEntityMigrationTest::IsStressTest(FMovieSceneEntityMigrationTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146259010

uint __thiscall
FMovieSceneEntityMigrationTest::GetRequiredDeviceNum(FMovieSceneEntityMigrationTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146259020

FString * __thiscall
FMovieSceneEntityMigrationTest::GetTestSourceFileName
          (FMovieSceneEntityMigrationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieSceneEntitySystemTypesTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146259050

int __thiscall
FMovieSceneEntityMigrationTest::GetTestSourceFileLine(FMovieSceneEntityMigrationTest *this)

{
  return 0xa4;
}

// GetTests @ 146259060

/* WARNING: Removing unreachable block (ram,0x00014625914d) */
/* WARNING: Removing unreachable block (ram,0x000146259218) */

void __thiscall
FMovieSceneEntityMigrationTest::GetTests
          (FMovieSceneEntityMigrationTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.EntitySystem.Migration");
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

// RunTest @ 146259240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieSceneEntityMigrationTest::RunTest(FMovieSceneEntityMigrationTest *this,FString *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  undefined8 uVar4;
  FComponentTypeID FVar5;
  FMovieSceneEntityID FVar6;
  EComponentHeaderLockMode EVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  ForAnyElementType FVar18;
  FMovieSceneEntityMigrationTest *pFVar19;
  bool bVar20;
  undefined1 uVar21;
  TComponentTypeID<int> TVar22;
  TComponentTypeID<FString> TVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined6 extraout_var_01;
  undefined6 extraout_var_02;
  TEntityBuilder<UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>,UE::MovieScene::TAddConditional<FString>_>
  *pTVar27;
  int *piVar28;
  FString *this_00;
  ulong64 uVar29;
  FScriptContainerElement *pFVar30;
  FComponentHeader *pFVar31;
  EMutuallyInclusiveComponentType EVar32;
  longlong lVar33;
  uint uVar34;
  uint uVar35;
  longlong lVar36;
  ulonglong uVar37;
  FComponentHeader *pFVar38;
  FScriptContainerElement FVar39;
  int iVar40;
  ulonglong uVar41;
  uint uVar42;
  int iVar43;
  uint uVar44;
  longlong lVar45;
  ushort *puVar46;
  ulonglong uVar47;
  undefined1 auStack_878 [32];
  char local_848 [8];
  ForAnyElementType local_840;
  undefined8 local_838;
  bool local_830;
  ushort local_82c [2];
  uint local_828;
  ushort local_824;
  TComponentTypeID<FString> local_822;
  longlong local_820;
  uint local_818;
  uint local_814;
  uint local_810;
  wchar_t local_80c;
  wchar_t local_80a;
  wchar_t local_808;
  wchar_t local_806 [3];
  longlong local_800;
  undefined4 local_7f8;
  FString local_7f0;
  FString local_7e0;
  FString local_7d0;
  longlong local_7c0;
  undefined1 local_7b8 [40];
  FScriptContainerElement *local_790;
  int local_788;
  int local_784;
  bool local_780;
  undefined4 local_778;
  undefined4 local_76c;
  FEntityAllocationWriteContext local_760;
  FMovieSceneEntityMigrationTest *local_758;
  FEntityRange local_750;
  FEntityValue *local_740;
  FEntityManager *local_738;
  FEntityInfo local_730;
  FEntityInfo local_718;
  FEntityInfo local_700;
  undefined8 local_6e8;
  undefined1 local_6e0;
  undefined8 local_6d8;
  undefined1 local_6d0;
  undefined8 local_6c8;
  undefined1 local_6c0;
  FString local_6b8;
  undefined8 local_6a8;
  undefined1 local_6a0;
  FMovieSceneEntityMigrationTest *local_698;
  ForAnyElementType *local_690;
  FEntityManager *local_688;
  ushort *local_680;
  ushort *local_678;
  FComponentMask local_668;
  undefined **local_630 [5];
  void *local_608;
  int local_5fc;
  void *local_5f0;
  int local_5e4;
  ushort local_5d8;
  FString local_5d0;
  FString local_5c0;
  int local_5b0;
  int iStack_5ac;
  FScriptContainerElement local_5a8;
  FMutualComponentInitializers local_5a0;
  undefined1 local_578 [80];
  void *local_528;
  undefined4 local_520;
  FMutualInclusivityGraph local_518;
  TSparseArray<UE::MovieScene::FComponentTypeInfo,FDefaultSparseArrayAllocator> local_460;
  TSparseArray<UScriptStruct_*,FDefaultSparseArrayAllocator> local_428 [5];
  FEntityManager local_308;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_878;
  local_758 = this;
  UE::MovieScene::FComponentRegistry::FComponentRegistry((FComponentRegistry *)local_578);
  UE::MovieScene::FEntityManager::FEntityManager(&local_308);
  local_738 = UE::MovieScene::GEntityManagerForDebuggingVisualizers;
  local_308.ComponentRegistry = (FComponentRegistry *)local_578;
  iVar40 = 0;
  local_6a8 = 0;
  local_6a0 = 0;
  UE::MovieScene::GEntityManagerForDebuggingVisualizers = &local_308;
  TVar22 = UE::MovieScene::FComponentRegistry::NewComponentType<int>
                     ((FComponentRegistry *)local_578,&local_80c,(FNewComponentTypeParams *)L"Int 0"
                     );
  local_6e8 = 0;
  local_6e0 = 0;
  local_82c[0] = *(ushort *)CONCAT62(extraout_var,TVar22);
  TVar22 = UE::MovieScene::FComponentRegistry::NewComponentType<int>
                     ((FComponentRegistry *)local_578,&local_80a,(FNewComponentTypeParams *)L"Int 1"
                     );
  local_6d8 = 0;
  local_6d0 = 0;
  local_82c[1] = *(undefined2 *)CONCAT62(extraout_var_00,TVar22);
  TVar23 = UE::MovieScene::FComponentRegistry::NewComponentType<FString>
                     ((FComponentRegistry *)local_578,&local_808,
                      (FNewComponentTypeParams *)L"String 0");
  local_6c8 = 0;
  local_6c0 = 0;
  local_824 = *(ushort *)CONCAT62(extraout_var_01,TVar23);
  TVar23 = UE::MovieScene::FComponentRegistry::NewComponentType<FString>
                     ((FComponentRegistry *)local_578,local_806,
                      (FNewComponentTypeParams *)L"String 1");
  fVar17 = __real_3b4a0194;
  local_818 = 0xfeedbeef;
  local_822 = *(TComponentTypeID<FString> *)CONCAT62(extraout_var_02,TVar23);
  local_690 = &local_840;
  local_688 = &local_308;
  local_680 = local_82c;
  local_678 = &local_824;
  local_840.Data = (FScriptContainerElement *)0x0;
  local_838 = 0;
  local_698 = this;
  do {
    FVar39 = SUB41(iVar40,0);
    local_830 = (bool)((byte)FVar39 >> 3 & 1);
    lVar45 = 10;
    do {
      pFVar30 = (FScriptContainerElement *)0x0;
      local_5d8 = 0xffff;
      local_5d0.Data.ArrayNum = 0;
      local_5d0.Data.ArrayMax = 0;
      local_5c0.Data.ArrayNum = 0;
      local_5c0.Data.ArrayMax = 0;
      local_5d0.Data.AllocatorInstance.Data = pFVar30;
      local_5c0.Data.AllocatorInstance.Data = pFVar30;
      uVar24 = rand();
      iVar25 = (int)((float)(uVar24 & 0x7fff) * fVar17);
      local_5b0 = 100;
      if (iVar25 < 100) {
        local_5b0 = iVar25;
      }
      uVar24 = rand();
      iVar25 = (int)((float)(uVar24 & 0x7fff) * fVar17);
      iStack_5ac = 100;
      if (iVar25 < 100) {
        iStack_5ac = iVar25;
      }
      rand();
      ::FString::PrintfImpl(&local_7e0,L"String Value %i");
      if (local_5d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5d0.Data.AllocatorInstance.Data);
      }
      local_5d0.Data.AllocatorInstance.Data = local_7e0.Data.AllocatorInstance.Data;
      local_5d0.Data.ArrayNum = local_7e0.Data.ArrayNum;
      local_5d0.Data.ArrayMax = local_7e0.Data.ArrayMax;
      local_7e0.Data.ArrayNum = 0;
      local_7e0.Data.ArrayMax = 0;
      local_7e0.Data.AllocatorInstance.Data = pFVar30;
      rand();
      ::FString::PrintfImpl(&local_7d0,L"String Value %i");
      if (local_5c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5c0.Data.AllocatorInstance.Data);
      }
      iVar26 = iStack_5ac;
      iVar25 = local_5b0;
      local_5c0.Data.AllocatorInstance.Data = local_7d0.Data.AllocatorInstance.Data;
      local_5c0.Data.ArrayNum = local_7d0.Data.ArrayNum;
      local_5c0.Data.ArrayMax = local_7d0.Data.ArrayMax;
      local_7d0.Data.ArrayNum = 0;
      local_7d0.Data.ArrayMax = 0;
      local_778 = CONCAT13(local_778._3_1_,CONCAT12(FVar39,local_82c[0])) & 0xff01ffff;
      local_76c = CONCAT13(local_76c._3_1_,CONCAT12((byte)FVar39 >> 1,local_82c[1])) & 0xff01ffff;
      local_7f8 = CONCAT13(local_7f8._3_1_,CONCAT12((byte)FVar39 >> 2,local_824)) & 0xff01ffff;
      local_7d0.Data.AllocatorInstance.Data = pFVar30;
      local_5a8 = FVar39;
      ::FString::FString(&local_7f0,&local_5d0);
      iVar43 = local_7f0.Data.ArrayMax;
      if (local_7f0.Data.ArrayMax == -1) {
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0xbd,
                            L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                           );
        if (bVar20) {
          pcVar8 = (code *)swi(3);
          uVar21 = (*pcVar8)();
          return (bool)uVar21;
        }
        iVar43 = local_7f0.Data.ArrayMax;
      }
      local_7b8._8_4_ = local_778;
      local_7b8._24_4_ = iVar26;
      local_7b8._20_4_ = local_76c;
      local_7b8._32_4_ = local_7f8;
      local_7b8[0x10] = 1;
      local_7b8._12_4_ = iVar25;
      local_7b8[0x1c] = 1;
      local_790 = (FScriptContainerElement *)0x0;
      local_788 = 0;
      local_784 = -1;
      local_780 = false;
      if (iVar43 != -1) {
        local_790 = local_7f0.Data.AllocatorInstance.Data;
        local_788 = local_7f0.Data.ArrayNum;
        local_7f0.Data.ArrayNum = 0;
        local_7f0.Data.ArrayMax = 0;
        local_7f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_784 = iVar43;
      }
      local_7b8._0_8_ =
           &
           ___7__TEntityBuilder_U__TAddConditional_H_MovieScene_UE__U123_U__TAddConditional_VFString___23__MovieScene_UE__6B_
      ;
      pTVar27 = UE::MovieScene::
                TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>_>
                ::AddConditional<FString,FString_&>
                          ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>_>
                            *)local_7b8,
                           (TEntityBuilder<UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<int>,UE::MovieScene::TAddConditional<FString>,UE::MovieScene::TAddConditional<FString>_>
                            *)local_630,local_822,&local_5c0,local_830);
      local_668.Bits.NumBits = 0;
      local_668.Bits.MaxBits = 0x180;
      local_848[0] = '\0';
      (**(code **)(*(longlong *)pTVar27 + 0x10))(pTVar27,&local_308,&local_668,local_848);
      local_5a0.Initializers.AllocatorInstance.SecondaryData =
           (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0;
      local_5a0.Initializers.ArrayNum = 0;
      local_5a0.Initializers.ArrayMax = 2;
      UE::MovieScene::FEntityAllocationWriteContext::FEntityAllocationWriteContext
                (&local_760,&local_308);
      EVar32 = Mandatory;
      if (local_848[0] != '\0') {
        EVar32 = All;
      }
      UE::MovieScene::FEntityFactories::ComputeMutuallyInclusiveComponents
                (&(local_308.ComponentRegistry)->Factories,EVar32,&local_668,&local_5a0);
      UE::MovieScene::FEntityManager::AllocateEntity(&local_308,&local_730,&local_668);
      (**(code **)(*(longlong *)pTVar27 + 0x18))(pTVar27,&local_308,&local_730);
      local_750.Allocation = local_730.Data.Allocation;
      local_750.ComponentStartOffset = local_730.Data.ComponentOffset;
      local_750.Num = 1;
      UE::MovieScene::FMutualComponentInitializers::Execute(&local_5a0,&local_750,&local_760);
      FVar6.Value = local_730.EntityID.Value;
      if (local_5a0.Initializers.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
        FMemory::Free((void *)local_5a0.Initializers.AllocatorInstance.SecondaryData);
      }
      local_5d8 = FVar6.Value;
      if ((local_5e4 != -1) && (local_5f0 != (void *)0x0)) {
        FMemory::Free(local_5f0);
      }
      if ((local_5fc != -1) && (local_608 != (void *)0x0)) {
        FMemory::Free(local_608);
      }
      local_630[0] = &___7IEntityBuilder_MovieScene_UE__6B_;
      if ((local_784 != -1) && (local_790 != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_790);
      }
      local_7b8._0_8_ = &___7IEntityBuilder_MovieScene_UE__6B_;
      iVar25 = (int)local_838;
      if ((int)local_838 == local_838._4_4_) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&local_840,(int *)((longlong)&local_838 + 4));
      }
      lVar36 = 2;
      local_838 = CONCAT44(local_838._4_4_,iVar25 + 1);
      lVar33 = (longlong)iVar25 * 0x38;
      *(ushort *)&local_840.Data[lVar33].field_0x0 = local_5d8;
      *(undefined8 *)(local_840.Data + lVar33 + 8) = 0;
      *(FScriptContainerElement **)(local_840.Data + lVar33 + 8) =
           local_5d0.Data.AllocatorInstance.Data;
      local_5d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_840.Data + lVar33 + 0x10) = local_5d0.Data.ArrayNum;
      *(int *)(local_840.Data + lVar33 + 0x14) = local_5d0.Data.ArrayMax;
      local_5d0.Data.ArrayNum = 0;
      local_5d0.Data.ArrayMax = 0;
      *(undefined8 *)(local_840.Data + lVar33 + 0x18) = 0;
      *(FScriptContainerElement **)(local_840.Data + lVar33 + 0x18) =
           local_5c0.Data.AllocatorInstance.Data;
      local_5c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_840.Data + lVar33 + 0x20) = local_5c0.Data.ArrayNum;
      *(int *)(local_840.Data + lVar33 + 0x24) = local_5c0.Data.ArrayMax;
      local_5c0.Data.ArrayNum = 0;
      local_5c0.Data.ArrayMax = 0;
      piVar28 = &local_5b0;
      *(ulonglong *)(local_840.Data + lVar33 + 0x28) = CONCAT44(iStack_5ac,local_5b0);
      local_840.Data[lVar33 + 0x30] = local_5a8;
      do {
        piVar1 = piVar28 + -4;
        piVar28 = piVar28 + -4;
        lVar36 = lVar36 + -1;
        if (*(void **)piVar1 != (void *)0x0) {
          FMemory::Free(*(void **)piVar1);
        }
        fVar16 = __real_3f800000;
      } while (lVar36 != 0);
      lVar45 = lVar45 + -1;
    } while (lVar45 != 0);
    iVar40 = iVar40 + 1;
  } while (iVar40 < 0x10);
  uVar41 = 0;
  iVar40 = (int)local_838;
  if (0 < (int)local_838 + -2) {
    uVar37 = uVar41;
    uVar47 = uVar41;
    iVar25 = 0;
    do {
      iVar43 = iVar25 + 1;
      iVar26 = 0;
      if (0 < iVar40 - iVar43) {
        local_818 = local_818 * 0xbb38435 + 0x3619636b;
        iVar26 = (int)(((float)(local_818 >> 9 | 0x3f800000) - fVar16) * (float)(iVar40 - iVar43));
      }
      iVar26 = iVar43 + iVar26;
      if (((longlong)uVar47 < 0) || (iVar26 < 0)) {
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0xce6,L"");
        if (bVar20) {
          pcVar8 = (code *)swi(3);
          uVar21 = (*pcVar8)();
          return (bool)uVar21;
        }
        iVar40 = (int)local_838;
      }
      if ((iVar40 <= iVar25) || (iVar40 <= iVar26)) {
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0xce7,L"");
        if (bVar20) {
          pcVar8 = (code *)swi(3);
          uVar21 = (*pcVar8)();
          return (bool)uVar21;
        }
        iVar40 = (int)local_838;
      }
      if (iVar25 != iVar26) {
        pFVar30 = local_840.Data + (longlong)iVar26 * 0x38;
        uVar9 = *(undefined8 *)(local_840.Data + uVar37);
        uVar10 = *(undefined8 *)(local_840.Data + uVar37 + 8);
        uVar11 = *(undefined8 *)(pFVar30 + 8);
        uVar12 = *(undefined8 *)(local_840.Data + uVar37 + 0x10);
        uVar13 = *(undefined8 *)(local_840.Data + uVar37 + 0x10 + 8);
        uVar14 = *(undefined8 *)(local_840.Data + uVar37 + 0x20);
        uVar15 = *(undefined8 *)(local_840.Data + uVar37 + 0x20 + 8);
        uVar4 = *(undefined8 *)(local_840.Data + uVar37 + 0x30);
        *(undefined8 *)(local_840.Data + uVar37) = *(undefined8 *)pFVar30;
        *(undefined8 *)(local_840.Data + uVar37 + 8) = uVar11;
        uVar11 = *(undefined8 *)(pFVar30 + 0x18);
        *(undefined8 *)(local_840.Data + uVar37 + 0x10) = *(undefined8 *)(pFVar30 + 0x10);
        *(undefined8 *)(local_840.Data + uVar37 + 0x10 + 8) = uVar11;
        *(undefined1 (*) [16])(local_840.Data + uVar37 + 0x20) =
             *(undefined1 (*) [16])(pFVar30 + 0x20);
        *(undefined8 *)(local_840.Data + uVar37 + 0x30) = *(undefined8 *)(pFVar30 + 0x30);
        *(undefined8 *)pFVar30 = uVar9;
        *(undefined8 *)(pFVar30 + 8) = uVar10;
        *(undefined8 *)(pFVar30 + 0x10) = uVar12;
        *(undefined8 *)(pFVar30 + 0x18) = uVar13;
        *(undefined8 *)(pFVar30 + 0x20) = uVar14;
        *(undefined8 *)(pFVar30 + 0x28) = uVar15;
        *(undefined8 *)(pFVar30 + 0x30) = uVar4;
        iVar40 = (int)local_838;
      }
      uVar47 = uVar47 + 1;
      uVar37 = uVar37 + 0x38;
      iVar25 = iVar43;
    } while (iVar43 < iVar40 + -2);
  }
  fVar17 = __real_41800000;
  local_828 = 0;
  if (0 < iVar40) {
    local_800 = 0;
    local_820 = 0;
    do {
      pFVar19 = local_758;
      lVar45 = local_820;
      uVar42 = (uint)uVar41;
      uVar24 = ~uVar42 >> 0x1f;
      local_818 = local_818 * 0xbb38435 + 0x3619636b;
      pcVar8 = *(code **)(*(longlong *)local_758 + 0x50);
      uVar35 = 0;
      if ((int)uVar42 < iVar40) {
        uVar35 = uVar24;
      }
      uVar34 = (uint)(((float)(local_818 >> 9 | 0x3f800000) - fVar16) * fVar17);
      local_814 = uVar24;
      if ((uVar35 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        uVar21 = (*pcVar8)();
        return (bool)uVar21;
      }
      uVar35 = uVar34 & 0xff;
      local_810 = uVar35;
      ::FString::PrintfImpl(&local_6b8,L"Mutating entity index %i from %i to %i");
      (*pcVar8)(pFVar19,&local_6b8,0,0);
      if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
      }
      uVar44 = 0;
      if ((int)uVar42 < (int)local_838) {
        uVar44 = uVar24;
      }
      if ((uVar44 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar8 = (code *)swi(3);
        uVar21 = (*pcVar8)();
        return (bool)uVar21;
      }
      uVar44 = 1;
      local_7c0 = 2;
      local_840.Data[lVar45 + 0x30] = SUB41(uVar34,0);
      lVar45 = 0;
      do {
        if ((uVar35 & uVar44) == 0) {
          FVar5.Value = local_82c[lVar45];
          uVar35 = 0;
          if ((int)uVar42 < (int)local_838) {
            uVar35 = uVar24;
          }
          if ((uVar35 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar8 = (code *)swi(3);
            uVar21 = (*pcVar8)();
            return (bool)uVar21;
          }
          UE::MovieScene::FEntityManager::RemoveComponent
                    (&local_308,(FMovieSceneEntityID)*(ushort *)(local_840.Data + local_820),FVar5);
        }
        else {
          uVar35 = 0;
          if ((int)uVar42 < (int)local_838) {
            uVar35 = uVar24;
          }
          if (uVar35 == 0) {
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar8 = (code *)swi(3);
              uVar21 = (*pcVar8)();
              return (bool)uVar21;
            }
          }
          FVar5.Value = local_82c[lVar45];
          local_740 = (FEntityValue *)local_840.Data;
          uVar24 = 0;
          if ((int)uVar42 < (int)local_838) {
            uVar24 = local_814;
          }
          if ((uVar24 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar8 = (code *)swi(3);
            uVar21 = (*pcVar8)();
            return (bool)uVar21;
          }
          FVar6.Value = *(ushort *)(local_840.Data + local_820);
          UE::MovieScene::FEntityManager::AddComponent(&local_308,FVar6,FVar5);
          UE::MovieScene::FEntityManager::GetEntity(&local_308,&local_718,FVar6);
          uVar24 = local_814;
          if (local_718.Data.Allocation != (FEntityAllocation *)0x0) {
            pFVar38 = (local_718.Data.Allocation)->ComponentHeaders;
            pFVar31 = pFVar38 + (local_718.Data.Allocation)->NumComponents;
            for (; pFVar38 != pFVar31; pFVar38 = pFVar38 + 1) {
              if ((pFVar38->ComponentType).Value == FVar5.Value) {
                if (pFVar38 != (FComponentHeader *)0x0) goto LAB_146259cf1;
                goto LAB_146259cc7;
              }
            }
            pFVar38 = (FComponentHeader *)0x0;
LAB_146259cc7:
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Header",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                ,0x2db,L"");
            if (bVar20) {
              pcVar8 = (code *)swi(3);
              uVar21 = (*pcVar8)();
              return (bool)uVar21;
            }
LAB_146259cf1:
            EVar7 = (local_718.Data.Allocation)->LockMode;
            if (EVar7 == Mutex) {
              AcquireSRWLockExclusive((PSRWLOCK)&pFVar38->ReadWriteLock);
            }
            LOCK();
            paVar2 = &pFVar38->ScheduledAccessCount;
            aVar3 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + 1);
            UNLOCK();
            if ((aVar3 != (atomic<int>)0x0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("PreviousAccessCount == 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                    ,0x487,
                                    L"Component header is still in use when it is being opened for write!"
                                   ), bVar20)) {
              pcVar8 = (code *)swi(3);
              uVar21 = (*pcVar8)();
              return (bool)uVar21;
            }
            piVar28 = UE::MovieScene::FComponentHeader::GetValuePtr
                                (pFVar38,local_718.Data.ComponentOffset);
            *piVar28 = local_740[(int)uVar42].IntValues[lVar45];
            uVar24 = local_814;
            if (pFVar38 != (FComponentHeader *)0x0) {
              uVar29 = 0;
              if (pFVar38->SerialNumber != 0) {
                uVar29 = pFVar38->SerialNumber;
              }
              pFVar38->SerialNumber = uVar29;
              LOCK();
              pFVar38->ScheduledAccessCount = (atomic<int>)((int)pFVar38->ScheduledAccessCount + -1)
              ;
              UNLOCK();
              if (EVar7 == Mutex) {
                ReleaseSRWLockExclusive((PSRWLOCK)&pFVar38->ReadWriteLock);
                uVar24 = local_814;
              }
            }
          }
        }
        lVar45 = lVar45 + 1;
        uVar44 = uVar44 << 1 | (uint)((int)uVar44 < 0);
        local_7c0 = local_7c0 + -1;
        uVar35 = local_810;
      } while (local_7c0 != 0);
      puVar46 = &local_824;
      iVar40 = 0;
      uVar24 = ~uVar42 >> 0x1f;
      lVar45 = local_820;
      lVar33 = local_820;
      do {
        if ((local_810 & 4 << ((byte)iVar40 & 0x1f)) == 0) {
          FVar5.Value = *puVar46;
          uVar35 = 0;
          if ((int)uVar41 < (int)local_838) {
            uVar35 = uVar24;
          }
          if ((uVar35 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar8 = (code *)swi(3);
            uVar21 = (*pcVar8)();
            return (bool)uVar21;
          }
          UE::MovieScene::FEntityManager::RemoveComponent
                    (&local_308,(FMovieSceneEntityID)*(ushort *)(local_840.Data + lVar45),FVar5);
        }
        else {
          uVar35 = 0;
          if ((int)uVar41 < (int)local_838) {
            uVar35 = uVar24;
          }
          if (uVar35 == 0) {
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar8 = (code *)swi(3);
              uVar21 = (*pcVar8)();
              return (bool)uVar21;
            }
          }
          FVar18.Data = local_840.Data;
          FVar5.Value = *puVar46;
          uVar35 = 0;
          if ((int)local_828 < (int)local_838) {
            uVar35 = uVar24;
          }
          if ((uVar35 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar8 = (code *)swi(3);
            uVar21 = (*pcVar8)();
            return (bool)uVar21;
          }
          FVar6.Value = *(ushort *)(local_840.Data + local_820);
          UE::MovieScene::FEntityManager::AddComponent(&local_308,FVar6,FVar5);
          UE::MovieScene::FEntityManager::GetEntity(&local_308,&local_700,FVar6);
          if (local_700.Data.Allocation != (FEntityAllocation *)0x0) {
            pFVar38 = (local_700.Data.Allocation)->ComponentHeaders;
            pFVar31 = pFVar38 + (local_700.Data.Allocation)->NumComponents;
            for (; pFVar38 != pFVar31; pFVar38 = pFVar38 + 1) {
              if ((pFVar38->ComponentType).Value == FVar5.Value) goto LAB_146259f6d;
            }
            pFVar38 = (FComponentHeader *)0x0;
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Header",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                ,0x2db,L"");
            if (bVar20) {
              pcVar8 = (code *)swi(3);
              uVar21 = (*pcVar8)();
              return (bool)uVar21;
            }
LAB_146259f6d:
            EVar7 = (local_700.Data.Allocation)->LockMode;
            if (EVar7 == Mutex) {
              AcquireSRWLockExclusive((PSRWLOCK)&pFVar38->ReadWriteLock);
            }
            LOCK();
            paVar2 = &pFVar38->ScheduledAccessCount;
            aVar3 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + 1);
            UNLOCK();
            if ((aVar3 != (atomic<int>)0x0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("PreviousAccessCount == 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                    ,0x487,
                                    L"Component header is still in use when it is being opened for write!"
                                   ), bVar20)) {
              pcVar8 = (code *)swi(3);
              uVar21 = (*pcVar8)();
              return (bool)uVar21;
            }
            this_00 = UE::MovieScene::FComponentHeader::GetValuePtr
                                (pFVar38,local_700.Data.ComponentOffset);
            iVar26 = *(int *)(FVar18.Data + lVar33 + 0x10);
            iVar25 = iVar26 + -1;
            if (iVar26 == 0) {
              iVar25 = 0;
            }
            ::FString::AssignRange(this_00,*(wchar_t **)(FVar18.Data + lVar33 + 8),iVar25);
            if (pFVar38 != (FComponentHeader *)0x0) {
              uVar29 = 0;
              if (pFVar38->SerialNumber != 0) {
                uVar29 = pFVar38->SerialNumber;
              }
              pFVar38->SerialNumber = uVar29;
              LOCK();
              pFVar38->ScheduledAccessCount = (atomic<int>)((int)pFVar38->ScheduledAccessCount + -1)
              ;
              UNLOCK();
              if (EVar7 == Mutex) {
                ReleaseSRWLockExclusive((PSRWLOCK)&pFVar38->ReadWriteLock);
              }
            }
          }
          uVar41 = (ulonglong)local_828;
          lVar45 = local_820;
        }
        iVar40 = iVar40 + 1;
        lVar33 = lVar33 + 0x10;
        puVar46 = puVar46 + 1;
      } while (iVar40 < 2);
      bVar20 = `FMovieSceneEntityMigrationTest::RunTest'::__l2::<lambda_1>::operator()(&local_698);
      iVar40 = (int)local_838;
      if (!bVar20) {
        bVar20 = false;
        goto LAB_14625a067;
      }
      local_800 = local_800 + 1;
      local_820 = lVar45 + 0x38;
      local_828 = (int)uVar41 + 1;
      uVar41 = (ulonglong)local_828;
    } while ((int)local_828 < (int)local_838);
  }
  bVar20 = true;
LAB_14625a067:
  DestructItems<_FMovieSceneEntityMigrationTest::RunTest_::__l2::FEntityValue,int>
            ((FEntityValue *)local_840.Data,iVar40);
  if ((FEntityValue *)local_840.Data != (FEntityValue *)0x0) {
    FMemory::Free(local_840.Data);
  }
  UE::MovieScene::GEntityManagerForDebuggingVisualizers = local_738;
  UE::MovieScene::FEntityManager::~FEntityManager(&local_308);
  TSparseArray<UScriptStruct_*,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UScriptStruct_*,FDefaultSparseArrayAllocator>(local_428);
  TSparseArray<UE::MovieScene::FComponentTypeInfo,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UE::MovieScene::FComponentTypeInfo,FDefaultSparseArrayAllocator>(&local_460);
  UE::MovieScene::FMutualInclusivityGraph::~FMutualInclusivityGraph(&local_518);
  local_520 = 0;
  if (local_528 != (void *)0x0) {
    FMemory::Free(local_528);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_578 + 0x10));
  DestructItems<TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>,int>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_578._0_8_,
             local_578._8_4_);
  if ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_578._0_8_ !=
      (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)0x0) {
    FMemory::Free((void *)local_578._0_8_);
  }
  return bVar20;
}

// GetBeautifiedTestName @ 14625a1b0

FString * __thiscall
FMovieSceneEntityMigrationTest::GetBeautifiedTestName
          (FMovieSceneEntityMigrationTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.EntitySystem.Migration");
  return __return_storage_ptr__;
}

// operator() @ 14629eb40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall `FMovieSceneEntityMigrationTest::RunTest'::__l2::<lambda_1>::operator()(void *this)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  FAutomationTestBase *pFVar4;
  FMovieSceneEntityID *pFVar5;
  FEntityManager *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 uVar10;
  EEntityThreadingModel EVar11;
  bool bVar12;
  uint uVar13;
  bool bVar14;
  ulonglong uVar15;
  ushort *puVar16;
  int *piVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  wchar_t *pwVar21;
  wchar_t *pwVar22;
  int *piVar23;
  bool bVar24;
  ushort *puVar25;
  undefined1 local_res10 [8];
  uint local_res18;
  undefined4 local_res20;
  undefined2 local_res24;
  ushort uStack_13e;
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FEntityInfo local_68;
  
  puVar3 = *(undefined8 **)((longlong)this + 8);
  local_res18 = *(uint *)(puVar3 + 1);
  uVar15 = (ulonglong)(int)local_res18;
  puVar25 = (ushort *)*puVar3;
  puVar16 = puVar25 + uVar15 * 0x1c;
  do {
    if (*(int *)(puVar3 + 1) != (int)uVar15) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<`FMovieSceneEntityMigrationTest::RunTest'::__l2::FEntityValue,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (puVar25 == puVar16) {
      return true;
    }
    UE::MovieScene::FEntityManager::GetEntity
              (*(FEntityManager **)((longlong)this + 0x10),&local_68,(FMovieSceneEntityID)*puVar25);
    pFVar4 = *(FAutomationTestBase **)this;
    if ((char)puVar25[0x18] == '\0') {
      bVar9 = FAutomationTestBase::TestTrue
                        (pFVar4,L"Entity Is Empty",
                         local_68.Data.Allocation == (FEntityAllocation *)0x0);
      if (!bVar9) {
        return false;
      }
    }
    else {
      if (local_68.Data.Allocation == (FEntityAllocation *)0x0) {
        pcVar7 = *(code **)(pFVar4->_padding_ + 0x28);
        ::FString::FString(&local_78,L"Entity ID has no data but should");
        (*pcVar7)(pFVar4,&local_78,0);
        local_88.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
LAB_14629f277:
        if (local_88.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return false;
        }
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
        return false;
      }
      lVar20 = (longlong)local_68.Data.ComponentOffset;
      pFVar5 = (local_68.Data.Allocation)->EntityIDs;
      uVar13 = 0;
      if (local_68.Data.ComponentOffset < (int)(uint)(local_68.Data.Allocation)->Size) {
        uVar13 = (uint)~local_68.Data.ComponentOffset >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      if (*puVar25 != pFVar5[lVar20].Value) {
        pcVar7 = *(code **)(pFVar4->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_88,L"%s: The two values are not equal.");
        (*pcVar7)(pFVar4,&local_88,0);
        goto LAB_14629f277;
      }
    }
    uVar1 = *puVar25;
    pFVar6 = *(FEntityManager **)((longlong)this + 0x10);
    uVar2 = **(ushort **)((longlong)this + 0x18);
    if ((uVar1 == 0xffff) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Entity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                           ,0x1a8,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    if (uVar2 != 0xffff) {
      uVar13 = *(uint *)(*(longlong *)&pFVar6->EntityLocations + (ulonglong)uVar1 * 8);
      local_res24 = *(undefined2 *)
                     (*(longlong *)&pFVar6->EntityLocations + 4 + (ulonglong)uVar1 * 8);
      local_res20 = uVar13;
      if ((short)uVar13 != -1) {
        lVar20 = (ulonglong)(uVar13 & 0xffff) * 0x38 + *(longlong *)&pFVar6->EntityAllocationMasks;
        if (((int)(uint)uVar2 < *(int *)(lVar20 + 0x30)) &&
           ((*(uint *)(lVar20 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0)) {
          local_res20._2_2_ = (ushort)(uVar13 >> 0x10);
          uVar15 = (ulonglong)local_res20._2_2_;
          lVar20 = *(longlong *)
                    (*(longlong *)&pFVar6->EntityAllocations + (ulonglong)(uVar13 & 0xffff) * 8);
          EVar11 = UE::MovieScene::FEntityManager::GetThreadingModel(pFVar6);
          lVar18 = *(longlong *)(lVar20 + 0x28);
          bVar9 = EVar11 != NoThreading;
          lVar20 = (ulonglong)*(ushort *)(lVar20 + 0xc) * 0x38 + lVar18;
          for (; lVar18 != lVar20; lVar18 = lVar18 + 0x38) {
            if (*(ushort *)(lVar18 + 0x36) == uVar2) {
              if (EVar11 != NoThreading) {
                AcquireSRWLockShared((PSRWLOCK)(lVar18 + 0x20));
              }
              LOCK();
              *(int *)(lVar18 + 0x30) = *(int *)(lVar18 + 0x30) + 1;
              UNLOCK();
              piVar23 = (int *)(*(longlong *)(lVar18 + 0x18) + uVar15 * 4);
              goto LAB_14629ed46;
            }
          }
        }
      }
    }
    lVar18 = 0;
    piVar23 = (int *)0x0;
    bVar9 = false;
LAB_14629ed46:
    uVar1 = *puVar25;
    pFVar6 = *(FEntityManager **)((longlong)this + 0x10);
    uVar2 = *(ushort *)(*(longlong *)((longlong)this + 0x18) + 2);
    if ((uVar1 == 0xffff) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Entity",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                            ,0x1a8,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    if ((uVar2 != 0xffff) &&
       (uVar13 = *(uint *)(*(longlong *)&pFVar6->EntityLocations + (ulonglong)uVar1 * 8),
       (short)uVar13 != -1)) {
      lVar20 = (ulonglong)(uVar13 & 0xffff) * 0x38 + *(longlong *)&pFVar6->EntityAllocationMasks;
      if (((int)(uint)uVar2 < *(int *)(lVar20 + 0x30)) &&
         ((*(uint *)(lVar20 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0)) {
        lVar20 = *(longlong *)
                  (*(longlong *)&pFVar6->EntityAllocations + (ulonglong)(uVar13 & 0xffff) * 8);
        EVar11 = UE::MovieScene::FEntityManager::GetThreadingModel(pFVar6);
        lVar19 = *(longlong *)(lVar20 + 0x28);
        bVar12 = EVar11 != NoThreading;
        lVar20 = (ulonglong)*(ushort *)(lVar20 + 0xc) * 0x38 + lVar19;
        for (; lVar19 != lVar20; lVar19 = lVar19 + 0x38) {
          if (*(ushort *)(lVar19 + 0x36) == uVar2) {
            if (EVar11 != NoThreading) {
              AcquireSRWLockShared((PSRWLOCK)(lVar19 + 0x20));
            }
            LOCK();
            *(int *)(lVar19 + 0x30) = *(int *)(lVar19 + 0x30) + 1;
            UNLOCK();
            uStack_13e = (ushort)(uVar13 >> 0x10);
            piVar17 = (int *)(*(longlong *)(lVar19 + 0x18) + (ulonglong)uStack_13e * 4);
            goto LAB_14629ee5e;
          }
        }
      }
    }
    lVar19 = 0;
    bVar12 = false;
    piVar17 = (int *)0x0;
LAB_14629ee5e:
    pFVar4 = *(FAutomationTestBase **)this;
    bVar14 = (bool)((byte)puVar25[0x18] & 1);
    bVar24 = (bool)((byte)puVar25[0x18] >> 1 & 1);
    if ((piVar23 != (int *)0x0) != bVar14) {
      pcVar7 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_98,L"%s: The two values are not equal.");
      (*pcVar7)(pFVar4,&local_98,0);
      local_a8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
LAB_14629f1de:
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      goto LAB_14629f1e8;
    }
    if ((piVar17 != (int *)0x0) != bVar24) {
      pcVar7 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_a8,L"%s: The two values are not equal.");
      (*pcVar7)(pFVar4,&local_a8,0);
      goto LAB_14629f1de;
    }
    if ((((bVar14 != false) && (piVar23 != (int *)0x0)) &&
        (bVar14 = FAutomationTestBase::TestEqual
                            (pFVar4,L"Int Value 0",*piVar23,*(int *)(puVar25 + 0x14)), !bVar14)) ||
       (((bVar24 != false && (piVar17 != (int *)0x0)) &&
        (bVar14 = FAutomationTestBase::TestEqual
                            (*(FAutomationTestBase **)this,L"Int Value 1",*piVar17,
                             *(int *)(puVar25 + 0x16)), !bVar14)))) goto LAB_14629f1e8;
    UE::MovieScene::FEntityManager::ReadComponent<FString>
              (*(FEntityManager **)((longlong)this + 0x10),
               (TComponentLock<UE::MovieScene::TReadOptional<FString>_> *)local_e0,
               (FMovieSceneEntityID)*puVar25,**(TComponentTypeID<FString> **)((longlong)this + 0x20)
              );
    UE::MovieScene::FEntityManager::ReadComponent<FString>
              (*(FEntityManager **)((longlong)this + 0x10),
               (TComponentLock<UE::MovieScene::TReadOptional<FString>_> *)local_f8,
               (FMovieSceneEntityID)*puVar25,
               *(TComponentTypeID<FString> *)(*(longlong *)((longlong)this + 0x20) + 2));
    uVar8 = local_f8._16_8_;
    pFVar4 = *(FAutomationTestBase **)this;
    bVar14 = (bool)((byte)puVar25[0x18] >> 2 & 1);
    bVar24 = (bool)((byte)puVar25[0x18] >> 3 & 1);
    if (((undefined8 *)local_e0._16_8_ != (undefined8 *)0x0) != bVar14) {
      pcVar7 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_b8,L"%s: The two values are not equal.");
      (*pcVar7)(pFVar4,&local_b8,0);
      local_c8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
LAB_14629f134:
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
LAB_14629f13e:
      if (local_f8._0_8_ != 0) {
        LOCK();
        *(int *)(local_f8._0_8_ + 0x30) = *(int *)(local_f8._0_8_ + 0x30) + -1;
        UNLOCK();
        if (local_f8._8_4_ == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_f8._0_8_ + 0x20));
        }
      }
      if (local_e0._0_8_ != 0) {
        LOCK();
        *(int *)(local_e0._0_8_ + 0x30) = *(int *)(local_e0._0_8_ + 0x30) + -1;
        UNLOCK();
        if (local_e0._8_4_ == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_e0._0_8_ + 0x20));
        }
      }
LAB_14629f1e8:
      if (lVar19 != 0) {
        LOCK();
        *(int *)(lVar19 + 0x30) = *(int *)(lVar19 + 0x30) + -1;
        UNLOCK();
        if (bVar12) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar19 + 0x20));
        }
      }
      if (lVar18 != 0) {
        LOCK();
        *(int *)(lVar18 + 0x30) = *(int *)(lVar18 + 0x30) + -1;
        UNLOCK();
        if (bVar9) {
          ReleaseSRWLockShared((PSRWLOCK)(lVar18 + 0x20));
          return false;
        }
      }
      return false;
    }
    if (((undefined8 *)local_f8._16_8_ != (undefined8 *)0x0) != bVar24) {
      pcVar7 = *(code **)(pFVar4->_padding_ + 0x28);
      ::FString::PrintfImpl(&local_c8,L"%s: The two values are not equal.");
      (*pcVar7)(pFVar4,&local_c8,0);
      goto LAB_14629f134;
    }
    if ((bVar14 != false) && ((undefined8 *)local_e0._16_8_ != (undefined8 *)0x0)) {
      if (*(int *)(puVar25 + 8) == 0) {
        pwVar22 = L"";
      }
      else {
        pwVar22 = *(wchar_t **)(puVar25 + 4);
      }
      if (*(int *)(local_e0._16_8_ + 8) == 0) {
        pwVar21 = L"";
      }
      else {
        pwVar21 = *(wchar_t **)local_e0._16_8_;
      }
      bVar14 = FAutomationTestBase::TestEqual(pFVar4,L"String Value 0",pwVar21,pwVar22);
      if (!bVar14) goto LAB_14629f13e;
    }
    if ((bVar24 != false) && ((undefined8 *)uVar8 != (undefined8 *)0x0)) {
      if (*(int *)(puVar25 + 0x10) == 0) {
        pwVar22 = L"";
      }
      else {
        pwVar22 = *(wchar_t **)(puVar25 + 0xc);
      }
      if (*(int *)(uVar8 + 8) == 0) {
        pwVar21 = L"";
      }
      else {
        pwVar21 = *(wchar_t **)uVar8;
      }
      bVar14 = FAutomationTestBase::TestEqual
                         (*(FAutomationTestBase **)this,L"String Value 1",pwVar21,pwVar22);
      if (!bVar14) goto LAB_14629f13e;
    }
    if (local_f8._0_8_ != 0) {
      LOCK();
      *(int *)(local_f8._0_8_ + 0x30) = *(int *)(local_f8._0_8_ + 0x30) + -1;
      UNLOCK();
      if (local_f8._8_4_ == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_f8._0_8_ + 0x20));
      }
    }
    if (local_e0._0_8_ != 0) {
      LOCK();
      *(int *)(local_e0._0_8_ + 0x30) = *(int *)(local_e0._0_8_ + 0x30) + -1;
      UNLOCK();
      if (local_e0._8_4_ == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_e0._0_8_ + 0x20));
      }
    }
    if (lVar19 != 0) {
      LOCK();
      *(int *)(lVar19 + 0x30) = *(int *)(lVar19 + 0x30) + -1;
      UNLOCK();
      if (bVar12) {
        ReleaseSRWLockShared((PSRWLOCK)(lVar19 + 0x20));
      }
    }
    if (lVar18 != 0) {
      LOCK();
      *(int *)(lVar18 + 0x30) = *(int *)(lVar18 + 0x30) + -1;
      UNLOCK();
      if (bVar9) {
        ReleaseSRWLockShared((PSRWLOCK)(lVar18 + 0x20));
      }
    }
    puVar25 = puVar25 + 0x1c;
    uVar15 = (ulonglong)local_res18;
  } while( true );
}

