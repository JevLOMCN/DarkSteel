// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 8

// GetTestFlags @ 1423741c0

EAutomationTestFlags __thiscall FBoneWeightsTestBasic::GetTestFlags(FBoneWeightsTestBasic *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1423741d0

bool __thiscall FBoneWeightsTestBasic::IsStressTest(FBoneWeightsTestBasic *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1423741e0

uint __thiscall FBoneWeightsTestBasic::GetRequiredDeviceNum(FBoneWeightsTestBasic *this)

{
  return 1;
}

// GetTestSourceFileName @ 1423741f0

FString * __thiscall
FBoneWeightsTestBasic::GetTestSourceFileName
          (FBoneWeightsTestBasic *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\Tests\\BoneWeightsTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142374220

int __thiscall FBoneWeightsTestBasic::GetTestSourceFileLine(FBoneWeightsTestBasic *this)

{
  return 0x5c;
}

// GetTests @ 142374230

/* WARNING: Removing unreachable block (ram,0x00014237431d) */
/* WARNING: Removing unreachable block (ram,0x0001423743e8) */

void __thiscall
FBoneWeightsTestBasic::GetTests
          (FBoneWeightsTestBasic *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.AnimationCore.BoneWeights.Basic");
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

// RunTest @ 142374410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall FBoneWeightsTestBasic::RunTest(FBoneWeightsTestBasic *this,FString *param_1)

{
  ushort uVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  undefined1 uVar9;
  FBoneWeight *pFVar10;
  longlong lVar11;
  ForElementType<UE::AnimationCore::FBoneWeight> _Dst;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStackY_668 [32];
  FIdentityFunctor local_618;
  FBoneWeight local_610;
  FBoneWeight local_608;
  EBoneWeightNormalizeType local_600 [3];
  undefined2 local_5f4;
  FBoneWeightsSettings local_5f0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_5e0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_5d8;
  FBoneWeightsSettings local_5d0;
  FBoneWeightsSettings local_5c0;
  FBoneWeightsSettings local_5b0;
  FBoneWeightsSettings local_5a0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_590;
  FBoneWeightsSettings local_588;
  FBoneWeightsSettings local_578;
  FBoneWeightsSettings local_568;
  FBoneWeightsSettings local_558;
  FBoneWeightsSettings local_548;
  FBoneWeightsSettings local_538;
  FBoneWeightsSettings local_528;
  FBoneWeightsSettings local_518;
  FBoneWeightsSettings local_508;
  FBoneWeightsSettings local_4f8;
  FString local_4e8;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_4d8;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_4d0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_4c8;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_4c0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_4b8;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_4b0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_4a8;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_4a0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_498;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_490;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_488;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_480;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_478;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_470;
  code *local_468;
  code *local_460;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_458;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_450;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_448;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_440;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_438;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_430;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_428;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_420;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_418;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_410;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_408;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_400;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_3f8;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_3f0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_3e8;
  FString local_3e0;
  ForElementType<UE::AnimationCore::FBoneWeight> local_3c8;
  int local_390;
  int local_38c;
  ForElementType<UE::AnimationCore::FBoneWeight> local_388;
  int local_350;
  int local_34c;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_348;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_308;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_2c8;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_288;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_248;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_208;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_1c8;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_188;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_148;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_108;
  ForElementType<UE::AnimationCore::FBoneWeight> local_c8;
  int local_90;
  int local_8c;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_668;
  bVar8 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"FBoneWeights::FBoneWeights",0,0);
  if ((bVar8) &&
     (bVar8 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,L"FBoneWeights::FBoneWeights",0,0), bVar8)) {
    uVar16 = 0;
    local_34c = 0xc;
    local_388.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    uVar17 = 0;
    local_350 = 0;
    local_5c0.bHasDefaultBoneIndex = false;
    local_5c0.bBlendZeroInfluence = true;
    local_5c0._14_2_ = 0;
    local_5c0.NormalizeType = Always;
    local_5c0.MaxWeightCount = 0xc;
    local_5c0.WeightThreshold = 1;
    local_5c0.DefaultBoneIndex = 0;
    local_610.BoneIndex = 0;
    local_610.RawWeight = 0xffff;
    local_5e0.Container =
         (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
          *)&local_388;
    if ((&local_388 <= (ForElementType<UE::AnimationCore::FBoneWeight> *)&local_610) &&
       ((&local_610 < &local_388.SecondaryData &&
        (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar8)))) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return (bool)uVar9;
    }
    if (local_350 == local_34c) {
      local_350 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                            (0x204,&local_388,&local_34c);
    }
    local_468 = UE::AnimationCore::FBoneWeight::DescSortByWeightPredicate;
    FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_388;
    if (local_388.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FVar12 = local_388.SecondaryData;
    }
    lVar11 = (longlong)local_350;
    local_350 = local_350 + 1;
    *(FBoneWeight *)((longlong)FVar12 + lVar11 * 4) = local_610;
    FVar12 = local_388.SecondaryData;
    if (local_388.SecondaryData == (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_388;
    }
    AlgoImpl::
    IntroSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_>
              ((FBoneWeight *)FVar12,local_350,local_618,
               (TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>
                )&local_468);
    UE::AnimationCore::
    TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
    ::NormalizeWeights(&local_5e0,Always);
    bVar8 = UE::AnimationCore::
            TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
            ::CullWeights(&local_5e0,&local_5c0);
    if (bVar8) {
      UE::AnimationCore::
      TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
      ::NormalizeWeights(&local_5e0,Always);
    }
    bVar8 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,L"FBoneWeights::SetBoneWeight",local_350,1);
    FVar12 = local_388.SecondaryData;
    if (bVar8) {
      lVar11 = (longlong)local_350;
      local_c8.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_388;
      if (local_388.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FVar12 = local_388.SecondaryData;
      }
      local_90 = local_350;
      if (local_350 == 0) {
        local_8c = 0xc;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                  (4,2,local_350,0,&local_c8,local_350,&local_8c);
        _Dst = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_c8;
        if (local_c8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          _Dst = local_c8.SecondaryData;
        }
        memcpy((void *)_Dst,(void *)FVar12,lVar11 << 2);
      }
      bVar8 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,L"FBoneWeights::SetBoneWeight",local_90,1);
      if (bVar8) {
        if (local_c8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FMemory::Free((void *)local_c8.SecondaryData);
        }
        if (local_388.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FMemory::Free((void *)local_388.SecondaryData);
        }
        local_3c8.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
        local_390 = 0;
        local_38c = 0xc;
        local_5b0.bHasDefaultBoneIndex = false;
        local_5b0.bBlendZeroInfluence = true;
        local_5b0._14_2_ = 0;
        local_5b0.NormalizeType = Always;
        local_5b0.MaxWeightCount = 0xc;
        local_5b0.WeightThreshold = 1;
        local_5b0.DefaultBoneIndex = 0;
        local_608.BoneIndex = 0;
        local_608.RawWeight = 0xffff;
        local_5d8.Container =
             (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
              *)&local_3c8;
        if (((&local_3c8 <= (ForElementType<UE::AnimationCore::FBoneWeight> *)&local_608) &&
            (&local_608 < &local_3c8.SecondaryData)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar2 = (code *)swi(3);
          uVar9 = (*pcVar2)();
          return (bool)uVar9;
        }
        if (local_390 == local_38c) {
          local_390 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                                (0x204,&local_3c8,&local_38c);
        }
        local_460 = UE::AnimationCore::FBoneWeight::DescSortByWeightPredicate;
        FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_3c8;
        if (local_3c8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar12 = local_3c8.SecondaryData;
        }
        lVar11 = (longlong)local_390;
        local_390 = local_390 + 1;
        *(FBoneWeight *)((longlong)FVar12 + lVar11 * 4) = local_608;
        FVar12 = local_3c8.SecondaryData;
        if (local_3c8.SecondaryData == (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_3c8;
        }
        AlgoImpl::
        IntroSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_>
                  ((FBoneWeight *)FVar12,local_390,local_618,
                   (TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>
                    )&local_460);
        UE::AnimationCore::
        TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
        ::NormalizeWeights(&local_5d8,Always);
        bVar8 = UE::AnimationCore::
                TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                ::CullWeights(&local_5d8,&local_5b0);
        if (bVar8) {
          UE::AnimationCore::
          TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
          ::NormalizeWeights(&local_5d8,Always);
        }
        bVar8 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,L"FBoneWeights::SetBoneWeight",local_390,1);
        FVar12 = local_3c8.SecondaryData;
        if (bVar8) {
          if ((local_390 < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar2 = (code *)swi(3);
            uVar9 = (*pcVar2)();
            return (bool)uVar9;
          }
          fVar7 = __real_37800080;
          fVar4 = __real_3f800000;
          fVar3 = __real_38d1b717;
          FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_3c8;
          if (local_3c8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar12 = local_3c8.SecondaryData;
          }
          uVar1 = *(ushort *)((longlong)FVar12 + 2);
          bVar8 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,L"FBoneWeights::SetBoneWeight",
                             (float)uVar1 * __real_37800080,__real_3f800000,__real_38d1b717);
          FVar12 = local_3c8.SecondaryData;
          if (bVar8) {
            if (uVar1 == 0xffff) {
              if (local_3c8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                FMemory::Free((void *)local_3c8.SecondaryData);
              }
              local_458.Container = &local_108;
              local_588.MaxWeightCount = 0xc;
              local_588.WeightThreshold = 1;
              local_588.DefaultBoneIndex = 0;
              local_588.bHasDefaultBoneIndex = false;
              local_588.bBlendZeroInfluence = true;
              local_588.NormalizeType = AboveOne;
              local_108.AllocatorInstance.SecondaryData =
                   (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
              local_108.ArrayNum = 0;
              local_108.ArrayMax = 0xc;
              UE::AnimationCore::
              TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
              ::
              AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                        (&local_458,(FBoneWeight)0xffff0000,&local_588);
              local_450.Container = &local_108;
              UE::AnimationCore::
              TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
              ::
              AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                        (&local_450,(FBoneWeight)0xffff0001,&local_588);
              bVar8 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,
                                 L"FBoneWeights::SetBoneWeight[MaxWNormalize=AboveOne]",
                                 local_108.ArrayNum,2);
              FVar12 = local_108.AllocatorInstance.SecondaryData;
              if (bVar8) {
                if ((local_108.ArrayNum < 1) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar2 = (code *)swi(3);
                  uVar9 = (*pcVar2)();
                  return (bool)uVar9;
                }
                FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_108;
                if (local_108.AllocatorInstance.SecondaryData !=
                    (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                  FVar12 = local_108.AllocatorInstance.SecondaryData;
                }
                bVar8 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,
                                   L"FBoneWeights::SetBoneWeight[MaxWNormalize=AboveOne]",
                                   (float)*(ushort *)((longlong)FVar12 + 2) * fVar7,__real_3f000000,
                                   fVar3);
                FVar12 = local_108.AllocatorInstance.SecondaryData;
                if (bVar8) {
                  if (local_108.AllocatorInstance.SecondaryData !=
                      (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                    FMemory::Free((void *)local_108.AllocatorInstance.SecondaryData);
                  }
                  local_448.Container = &local_148;
                  local_578.MaxWeightCount = 0xc;
                  local_578.WeightThreshold = 1;
                  local_578.DefaultBoneIndex = 0;
                  local_578.bHasDefaultBoneIndex = false;
                  local_578.bBlendZeroInfluence = true;
                  local_578.NormalizeType = Always;
                  local_148.AllocatorInstance.SecondaryData =
                       (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
                  local_148.ArrayNum = 0;
                  local_148.ArrayMax = 0xc;
                  UE::AnimationCore::
                  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                  ::
                  AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                            (&local_448,(FBoneWeight)0x40000000,&local_578);
                  local_438.Container = &local_148;
                  UE::AnimationCore::
                  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                  ::
                  AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                            (&local_438,(FBoneWeight)0x40000001,&local_578);
                  bVar8 = FAutomationTestBase::TestEqual
                                    ((FAutomationTestBase *)this,
                                     L"FBoneWeights::SetBoneWeight[Normalize=Always]",
                                     local_148.ArrayNum,2);
                  FVar12 = local_148.AllocatorInstance.SecondaryData;
                  if (bVar8) {
                    if ((local_148.ArrayNum < 1) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar2 = (code *)swi(3);
                      uVar9 = (*pcVar2)();
                      return (bool)uVar9;
                    }
                    fVar6 = __real_3f4ccccd;
                    FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_148;
                    if (local_148.AllocatorInstance.SecondaryData !=
                        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                      FVar12 = local_148.AllocatorInstance.SecondaryData;
                    }
                    bVar8 = FAutomationTestBase::TestEqual
                                      ((FAutomationTestBase *)this,
                                       L"FBoneWeights::SetBoneWeight[Normalize=Always]",
                                       (float)*(ushort *)((longlong)FVar12 + 2) * fVar7,
                                       __real_3f4ccccd,fVar3);
                    FVar12 = local_148.AllocatorInstance.SecondaryData;
                    if (bVar8) {
                      if (local_148.AllocatorInstance.SecondaryData !=
                          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                        FMemory::Free((void *)local_148.AllocatorInstance.SecondaryData);
                      }
                      local_430.Container = &local_188;
                      local_568.MaxWeightCount = 0xc;
                      local_568.WeightThreshold = 1;
                      local_568.DefaultBoneIndex = 0;
                      local_568.bHasDefaultBoneIndex = false;
                      local_568.bBlendZeroInfluence = true;
                      local_568.NormalizeType = None;
                      local_188.AllocatorInstance.SecondaryData =
                           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
                      local_188.ArrayNum = 0;
                      local_188.ArrayMax = 0xc;
                      UE::AnimationCore::
                      TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                      ::
                      AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                (&local_430,(FBoneWeight)0x40000000,&local_568);
                      local_428.Container = &local_188;
                      UE::AnimationCore::
                      TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                      ::
                      AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                (&local_428,(FBoneWeight)0x40000001,&local_568);
                      bVar8 = FAutomationTestBase::TestEqual
                                        ((FAutomationTestBase *)this,
                                         L"FBoneWeights::SetBoneWeight[Normalize=None]",
                                         local_188.ArrayNum,2);
                      FVar12 = local_188.AllocatorInstance.SecondaryData;
                      if (bVar8) {
                        if ((local_188.ArrayNum < 1) &&
                           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar8)) {
                          pcVar2 = (code *)swi(3);
                          uVar9 = (*pcVar2)();
                          return (bool)uVar9;
                        }
                        fVar5 = __real_3e800000;
                        FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_188;
                        if (local_188.AllocatorInstance.SecondaryData !=
                            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                          FVar12 = local_188.AllocatorInstance.SecondaryData;
                        }
                        bVar8 = FAutomationTestBase::TestEqual
                                          ((FAutomationTestBase *)this,
                                           L"FBoneWeights::SetBoneWeight[Normalize=None]",
                                           (float)*(ushort *)((longlong)FVar12 + 2) * fVar7,
                                           __real_3e800000,fVar3);
                        FVar12 = local_188.AllocatorInstance.SecondaryData;
                        if (bVar8) {
                          if (local_188.AllocatorInstance.SecondaryData !=
                              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                            FMemory::Free((void *)local_188.AllocatorInstance.SecondaryData);
                          }
                          local_420.Container = &local_2c8;
                          local_5a0.MaxWeightCount = 0xc;
                          local_5a0.WeightThreshold = 1;
                          local_5a0.DefaultBoneIndex = 0;
                          local_5a0.bHasDefaultBoneIndex = false;
                          local_5a0.bBlendZeroInfluence = true;
                          local_5a0.NormalizeType = AboveOne;
                          local_2c8.AllocatorInstance.SecondaryData =
                               (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
                          local_2c8.ArrayNum = 0;
                          local_2c8.ArrayMax = 0xc;
                          UE::AnimationCore::
                          TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                          ::
                          AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                    (&local_420,(FBoneWeight)0x40000000,&local_5a0);
                          local_418.Container = &local_2c8;
                          UE::AnimationCore::
                          TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                          ::
                          AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                    (&local_418,(FBoneWeight)0x40000001,&local_5a0);
                          bVar8 = FAutomationTestBase::TestEqual
                                            ((FAutomationTestBase *)this,
                                             L"FBoneWeights::SetBoneWeight[Normalize=AboveOne, Overwrite]"
                                             ,local_2c8.ArrayNum,2);
                          FVar12 = local_2c8.AllocatorInstance.SecondaryData;
                          if (bVar8) {
                            if ((local_2c8.ArrayNum < 1) &&
                               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                  ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                              pcVar2 = (code *)swi(3);
                              uVar9 = (*pcVar2)();
                              return (bool)uVar9;
                            }
                            FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_2c8;
                            if (local_2c8.AllocatorInstance.SecondaryData !=
                                (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                              FVar12 = local_2c8.AllocatorInstance.SecondaryData;
                            }
                            bVar8 = FAutomationTestBase::TestEqual
                                              ((FAutomationTestBase *)this,
                                               L"FBoneWeights::SetBoneWeight[Normalize=AboveOne, Overwrite]"
                                               ,(float)*(ushort *)((longlong)FVar12 + 2) * fVar7,
                                               fVar5,fVar3);
                            FVar12 = local_2c8.AllocatorInstance.SecondaryData;
                            if (bVar8) {
                              local_410.Container = &local_2c8;
                              UE::AnimationCore::
                              TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                              ::
                              AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                        (&local_410,(FBoneWeight)0xffff0001,&local_5a0);
                              if ((local_2c8.ArrayNum < 1) &&
                                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                pcVar2 = (code *)swi(3);
                                uVar9 = (*pcVar2)();
                                return (bool)uVar9;
                              }
                              FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_2c8;
                              if (local_2c8.AllocatorInstance.SecondaryData !=
                                  (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                                FVar12 = local_2c8.AllocatorInstance.SecondaryData;
                              }
                              bVar8 = FAutomationTestBase::TestEqual
                                                ((FAutomationTestBase *)this,
                                                 L"FBoneWeights::SetBoneWeight[Normalize=AboveOne, Overwrite]"
                                                 ,(float)*(ushort *)((longlong)FVar12 + 2) * fVar7,
                                                 fVar6,fVar3);
                              FVar12 = local_2c8.AllocatorInstance.SecondaryData;
                              if (bVar8) {
                                if (local_2c8.AllocatorInstance.SecondaryData !=
                                    (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                                  FMemory::Free((void *)local_2c8.AllocatorInstance.SecondaryData);
                                }
                                local_408.Container = &local_208;
                                local_518.MaxWeightCount = 0xc;
                                local_518.WeightThreshold = 1;
                                local_518.DefaultBoneIndex = 0;
                                local_518.bHasDefaultBoneIndex = false;
                                local_518.bBlendZeroInfluence = true;
                                local_508.MaxWeightCount = 0xc;
                                local_508.WeightThreshold = 1;
                                local_508.DefaultBoneIndex = 0;
                                local_508.bHasDefaultBoneIndex = false;
                                local_508.bBlendZeroInfluence = true;
                                local_518.NormalizeType = None;
                                local_508.NormalizeType = Always;
                                local_208.AllocatorInstance.SecondaryData =
                                     (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
                                local_208.ArrayNum = 0;
                                local_208.ArrayMax = 0xc;
                                uVar15 = uVar16;
                                do {
                                  uVar13 = 0xffff0000;
                                  if (uVar15 != 0) {
                                    uVar13 = 0x20000;
                                  }
                                  UE::AnimationCore::
                                  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                  ::
                                  AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                            (&local_408,(FBoneWeight)(uVar13 | uVar15 & 0xffff),
                                             &local_518);
                                  uVar15 = uVar15 + 1;
                                } while (uVar15 < 0xc);
                                local_590.Container = &local_208;
                                UE::AnimationCore::
                                TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                ::NormalizeWeights(&local_590,Always);
                                bVar8 = UE::AnimationCore::
                                        TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                        ::CullWeights(&local_590,&local_508);
                                if (bVar8) {
                                  UE::AnimationCore::
                                  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                  ::NormalizeWeights(&local_590,Always);
                                }
                                bVar8 = FAutomationTestBase::TestEqual
                                                  ((FAutomationTestBase *)this,
                                                                                                      
                                                  L"FBoneWeights::SetBoneWeight[Normalize=Always, Distribute]"
                                                  ,local_208.ArrayNum,0xc);
                                FVar12 = local_208.AllocatorInstance.SecondaryData;
                                if (bVar8) {
                                  uVar15 = uVar16;
                                  if (0 < local_208.ArrayNum) {
                                    do {
                                      pFVar10 = UE::AnimationCore::FBoneWeights::operator[]
                                                          ((FBoneWeights *)&local_208,uVar16);
                                      uVar17 = uVar15 + pFVar10->RawWeight;
                                      if (0 < (int)uVar16) {
                                        ::FString::PrintfImpl(&local_4e8,L"%s[%d]");
                                        pFVar10 = UE::AnimationCore::FBoneWeights::operator[]
                                                            ((FBoneWeights *)&local_208,uVar16);
                                        FVar14.Data = (FScriptContainerElement *)L"";
                                        if (local_4e8.Data.ArrayNum != 0) {
                                          FVar14.Data = local_4e8.Data.AllocatorInstance.Data;
                                        }
                                        bVar8 = FAutomationTestBase::TestEqual
                                                          ((FAutomationTestBase *)this,
                                                           (wchar_t *)FVar14.Data,
                                                           (uint)pFVar10->RawWeight,2);
                                        if (!bVar8) {
                                          FVar12 = local_208.AllocatorInstance.SecondaryData;
                                          if (local_4e8.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
                                            FVar12 = local_208.AllocatorInstance.SecondaryData;
                                          }
                                          goto LAB_1423746f3;
                                        }
                                        if (local_4e8.Data.AllocatorInstance.Data !=
                                            (FScriptContainerElement *)0x0) {
                                          FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
                                        }
                                      }
                                      uVar16 = uVar16 + 1;
                                      uVar15 = uVar17;
                                    } while ((int)uVar16 < local_208.ArrayNum);
                                  }
                                  bVar8 = FAutomationTestBase::TestEqual
                                                    ((FAutomationTestBase *)this,
                                                                                                          
                                                  L"FBoneWeights::SetBoneWeight[Normalize=Always, Distribute]"
                                                  ,uVar17,0xffff);
                                  FVar12 = local_208.AllocatorInstance.SecondaryData;
                                  if (bVar8) {
                                    if (local_208.AllocatorInstance.SecondaryData !=
                                        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                                      FMemory::Free((void *)local_208.AllocatorInstance.
                                                            SecondaryData);
                                    }
                                    local_400.Container = &local_1c8;
                                    local_558.MaxWeightCount = 0xc;
                                    local_558.WeightThreshold = 1;
                                    local_558.DefaultBoneIndex = 0;
                                    local_558.bHasDefaultBoneIndex = false;
                                    local_558.bBlendZeroInfluence = true;
                                    local_558.NormalizeType = None;
                                    local_1c8.AllocatorInstance.SecondaryData =
                                         (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
                                    local_1c8.ArrayNum = 0;
                                    local_1c8.ArrayMax = 0xc;
                                    UE::AnimationCore::
                                    TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                    ::
                                    AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                              (&local_400,(FBoneWeight)0x40000000,&local_558);
                                    local_3f8.Container = &local_1c8;
                                    UE::AnimationCore::
                                    TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                    ::
                                    AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                              (&local_3f8,(FBoneWeight)0x80000001,&local_558);
                                    bVar8 = FAutomationTestBase::TestEqual
                                                      ((FAutomationTestBase *)this,
                                                       L"FBoneWeights::SetBoneWeight[Ordering]",
                                                       local_1c8.ArrayNum,2);
                                    FVar12 = local_1c8.AllocatorInstance.SecondaryData;
                                    if (bVar8) {
                                      if ((local_1c8.ArrayNum < 1) &&
                                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                            ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                        pcVar2 = (code *)swi(3);
                                        uVar9 = (*pcVar2)();
                                        return (bool)uVar9;
                                      }
                                      FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                                               &local_1c8;
                                      if (local_1c8.AllocatorInstance.SecondaryData !=
                                          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                                        FVar12 = local_1c8.AllocatorInstance.SecondaryData;
                                      }
                                      bVar8 = FAutomationTestBase::TestEqual
                                                        ((FAutomationTestBase *)this,
                                                         L"FBoneWeights::SetBoneWeight[Ordering]",
                                                         (uint)*(ushort *)FVar12,1);
                                      FVar12 = local_1c8.AllocatorInstance.SecondaryData;
                                      if (bVar8) {
                                        if (local_1c8.AllocatorInstance.SecondaryData !=
                                            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                                          FMemory::Free((void *)local_1c8.AllocatorInstance.
                                                                SecondaryData);
                                        }
                                        local_3f0.Container = &local_308;
                                        local_600[2]._0_2_ = 1;
                                        local_600[2]._2_2_ = 0;
                                        local_5f4._0_1_ = false;
                                        local_5f4._1_1_ = true;
                                        local_600[1] = 3;
                                        local_600[0] = None;
                                        local_308.AllocatorInstance.SecondaryData =
                                             (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
                                        local_308.ArrayNum = 0;
                                        local_308.ArrayMax = 0xc;
                                        UE::AnimationCore::
                                        TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                        ::
                                        AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                                  (&local_3f0,(FBoneWeight)0x40000000,
                                                   (FBoneWeightsSettings *)local_600);
                                        local_3e8.Container = &local_308;
                                        UE::AnimationCore::
                                        TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                        ::
                                        AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                                  (&local_3e8,(FBoneWeight)0x33330001,
                                                   (FBoneWeightsSettings *)local_600);
                                        local_4d8.Container = &local_308;
                                        UE::AnimationCore::
                                        TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                        ::
                                        AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                                  (&local_4d8,(FBoneWeight)0x26660002,
                                                   (FBoneWeightsSettings *)local_600);
                                        local_4d0.Container = &local_308;
                                        UE::AnimationCore::
                                        TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                        ::
                                        AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                                  (&local_4d0,(FBoneWeight)0x199a0003,
                                                   (FBoneWeightsSettings *)local_600);
                                        local_4c8.Container = &local_308;
                                        UE::AnimationCore::
                                        TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                        ::
                                        AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                                  (&local_4c8,(FBoneWeight)0xccd0004,
                                                   (FBoneWeightsSettings *)local_600);
                                        bVar8 = FAutomationTestBase::TestEqual
                                                          ((FAutomationTestBase *)this,
                                                                                                                      
                                                  L"FBoneWeights::SetBoneWeight[MaxWeights]",
                                                  local_308.ArrayNum,3);
                                        FVar12 = local_308.AllocatorInstance.SecondaryData;
                                        if (bVar8) {
                                          if ((local_308.ArrayNum < 3) &&
                                             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                                ("(Index >= 0) & (Index < ArrayNum)"
                                                                 ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                            pcVar2 = (code *)swi(3);
                                            uVar9 = (*pcVar2)();
                                            return (bool)uVar9;
                                          }
                                          FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                                                   &local_308;
                                          if (local_308.AllocatorInstance.SecondaryData !=
                                              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                                            FVar12 = local_308.AllocatorInstance.SecondaryData;
                                          }
                                          bVar8 = FAutomationTestBase::TestEqual
                                                            ((FAutomationTestBase *)this,
                                                                                                                          
                                                  L"FBoneWeights::SetBoneWeight[MaxWeights]",
                                                  (uint)((FBoneWeight *)((longlong)FVar12 + 8))->
                                                        BoneIndex,2);
                                          FVar12 = local_308.AllocatorInstance.SecondaryData;
                                          if (bVar8) {
                                            local_4c0.Container = &local_308;
                                            UE::AnimationCore::
                                            TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                            ::
                                            AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                                      (&local_4c0,(FBoneWeight)0x2b850005,
                                                       (FBoneWeightsSettings *)local_600);
                                            bVar8 = FAutomationTestBase::TestEqual
                                                              ((FAutomationTestBase *)this,
                                                                                                                              
                                                  L"FBoneWeights::SetBoneWeight[MaxWeights]",
                                                  local_308.ArrayNum,3);
                                            FVar12 = local_308.AllocatorInstance.SecondaryData;
                                            if (bVar8) {
                                              if ((local_308.ArrayNum < 3) &&
                                                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                                    (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                                pcVar2 = (code *)swi(3);
                                                uVar9 = (*pcVar2)();
                                                return (bool)uVar9;
                                              }
                                              FVar12 = (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)
                                                  &local_308;
                                              if (local_308.AllocatorInstance.SecondaryData !=
                                                  (ForElementType<UE::AnimationCore::FBoneWeight>)
                                                  0x0) {
                                                FVar12 = local_308.AllocatorInstance.SecondaryData;
                                              }
                                              bVar8 = FAutomationTestBase::TestEqual
                                                                ((FAutomationTestBase *)this,
                                                                                                                                  
                                                  L"FBoneWeights::SetBoneWeight[MaxWeights]",
                                                  (uint)((FBoneWeight *)((longlong)FVar12 + 8))->
                                                        BoneIndex,5);
                                              FVar12 = local_308.AllocatorInstance.SecondaryData;
                                              if (bVar8) {
                                                if (local_308.AllocatorInstance.SecondaryData !=
                                                    (ForElementType<UE::AnimationCore::FBoneWeight>)
                                                    0x0) {
                                                  FMemory::Free((void *)local_308.AllocatorInstance.
                                                                        SecondaryData);
                                                }
                                                local_480.Container = &local_348;
                                                local_5f0.MaxWeightCount = 0xc;
                                                local_5f0.WeightThreshold = 0x6666;
                                                local_5f0.DefaultBoneIndex = 0;
                                                local_5f0.bHasDefaultBoneIndex = false;
                                                local_5f0.bBlendZeroInfluence = true;
                                                local_5f0.NormalizeType = None;
                                                local_348.AllocatorInstance.SecondaryData =
                                                     (ForElementType<UE::AnimationCore::FBoneWeight>
                                                     )0x0;
                                                local_348.ArrayNum = 0;
                                                local_348.ArrayMax = 0xc;
                                                UE::AnimationCore::
                                                TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                                ::
                                                AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                                          (&local_480,(FBoneWeight)0xffff0000,
                                                           &local_5f0);
                                                local_4b8.Container = &local_348;
                                                UE::AnimationCore::
                                                TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                                ::
                                                AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                                          (&local_4b8,(FBoneWeight)0xbfff0001,
                                                           &local_5f0);
                                                local_4b0.Container = &local_348;
                                                UE::AnimationCore::
                                                TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                                ::
                                                AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                                          (&local_4b0,(FBoneWeight)0x80000002,
                                                           &local_5f0);
                                                bVar8 = FAutomationTestBase::TestEqual
                                                                  ((FAutomationTestBase *)this,
                                                                                                                                      
                                                  L"FBoneWeights::SetBoneWeight[Threshold, Normalize=None]"
                                                  ,local_348.ArrayNum,3);
                                                FVar12 = local_348.AllocatorInstance.SecondaryData;
                                                if (bVar8) {
                                                  pFVar10 = UE::AnimationCore::FBoneWeights::
                                                            operator[]((FBoneWeights *)&local_348,2)
                                                  ;
                                                  bVar8 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                                                                                          
                                                  L"FBoneWeights::SetBoneWeight[Threshold, Normalize=None]"
                                                  ,(uint)pFVar10->BoneIndex,2);
                                                  FVar12 = local_348.AllocatorInstance.SecondaryData
                                                  ;
                                                  if (bVar8) {
                                                    local_4a8.Container = &local_348;
                                                    UE::AnimationCore::
                                                                                                        
                                                  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                                  ::
                                                  AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                                            (&local_4a8,(FBoneWeight)0x40000003,
                                                             &local_5f0);
                                                  bVar8 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                                                                                          
                                                  L"FBoneWeights::SetBoneWeight[Threshold, Normalize=None]"
                                                  ,local_348.ArrayNum,3);
                                                  FVar12 = local_348.AllocatorInstance.SecondaryData
                                                  ;
                                                  if (bVar8) {
                                                    pFVar10 = UE::AnimationCore::FBoneWeights::
                                                              operator[]((FBoneWeights *)&local_348,
                                                                         2);
                                                    bVar8 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                                                                                              
                                                  L"FBoneWeights::SetBoneWeight[Threshold, Normalize=None]"
                                                  ,(uint)pFVar10->BoneIndex,2);
                                                  FVar12 = local_348.AllocatorInstance.SecondaryData
                                                  ;
                                                  if (bVar8) {
                                                    local_4a0.Container = &local_348;
                                                    UE::AnimationCore::
                                                                                                        
                                                  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                                  ::
                                                  AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                                            (&local_4a0,(FBoneWeight)0x73330004,
                                                             &local_5f0);
                                                  bVar8 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                                                                                          
                                                  L"FBoneWeights::SetBoneWeight[Threshold, Normalize=None]"
                                                  ,local_348.ArrayNum,4);
                                                  FVar12 = local_348.AllocatorInstance.SecondaryData
                                                  ;
                                                  if (bVar8) {
                                                    pFVar10 = UE::AnimationCore::FBoneWeights::
                                                              operator[]((FBoneWeights *)&local_348,
                                                                         3);
                                                    bVar8 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                                                                                              
                                                  L"FBoneWeights::SetBoneWeight[Threshold, Normalize=None]"
                                                  ,(uint)pFVar10->BoneIndex,4);
                                                  FVar12 = local_348.AllocatorInstance.SecondaryData
                                                  ;
                                                  if (bVar8) {
                                                    local_498.Container = &local_348;
                                                    UE::AnimationCore::
                                                                                                        
                                                  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                                  ::
                                                  AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                                            (&local_498,(FBoneWeight)0x199a0001,
                                                             &local_5f0);
                                                  bVar8 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                                                                                          
                                                  L"FBoneWeights::SetBoneWeight[Threshold, Normalize=None]"
                                                  ,local_348.ArrayNum,3);
                                                  FVar12 = local_348.AllocatorInstance.SecondaryData
                                                  ;
                                                  if (bVar8) {
                                                    pFVar10 = UE::AnimationCore::FBoneWeights::
                                                              operator[]((FBoneWeights *)&local_348,
                                                                         2);
                                                    bVar8 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                                                                                              
                                                  L"FBoneWeights::SetBoneWeight[Threshold, Normalize=None]"
                                                  ,(uint)pFVar10->BoneIndex,4);
                                                  FVar12 = local_348.AllocatorInstance.SecondaryData
                                                  ;
                                                  if (bVar8) {
                                                    if (local_348.AllocatorInstance.SecondaryData !=
                                                        (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ) {
                                                    FMemory::Free((void *)local_348.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                  }
                                                  local_490.Container = &local_288;
                                                  local_5d0.MaxWeightCount = 0xc;
                                                  local_5d0.WeightThreshold = 0x4000;
                                                  local_5d0.DefaultBoneIndex = 0;
                                                  local_5d0.bHasDefaultBoneIndex = false;
                                                  local_5d0.bBlendZeroInfluence = true;
                                                  local_5d0.NormalizeType = Always;
                                                  local_288.AllocatorInstance.SecondaryData =
                                                       (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ;
                                                  local_288.ArrayNum = 0;
                                                  local_288.ArrayMax = 0xc;
                                                  UE::AnimationCore::
                                                  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                                  ::
                                                  AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                                            (&local_490,(FBoneWeight)0xffff0000,
                                                             &local_5d0);
                                                  bVar8 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                                                                                          
                                                  L"FBoneWeights::SetBoneWeight[Threshold, Normalize=Always]"
                                                  ,local_288.ArrayNum,1);
                                                  FVar12 = local_288.AllocatorInstance.SecondaryData
                                                  ;
                                                  if (bVar8) {
                                                    pFVar10 = UE::AnimationCore::FBoneWeights::
                                                              operator[]((FBoneWeights *)&local_288,
                                                                         0);
                                                    bVar8 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                                                                                              
                                                  L"FBoneWeights::SetBoneWeight[Threshold, Normalize=Always]"
                                                  ,(uint)pFVar10->BoneIndex,0);
                                                  FVar12 = local_288.AllocatorInstance.SecondaryData
                                                  ;
                                                  if (bVar8) {
                                                    local_488.Container = &local_288;
                                                    UE::AnimationCore::
                                                                                                        
                                                  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                                  ::
                                                  AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                                            (&local_488,(FBoneWeight)0x80000001,
                                                             &local_5d0);
                                                  bVar8 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                                                                                          
                                                  L"FBoneWeights::SetBoneWeight[Threshold, Normalize=Always]"
                                                  ,local_288.ArrayNum,2);
                                                  FVar12 = local_288.AllocatorInstance.SecondaryData
                                                  ;
                                                  if (bVar8) {
                                                    pFVar10 = UE::AnimationCore::FBoneWeights::
                                                              operator[]((FBoneWeights *)&local_288,
                                                                         1);
                                                    bVar8 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                                                                                              
                                                  L"FBoneWeights::SetBoneWeight[Threshold, Normalize=Always]"
                                                  ,(uint)pFVar10->BoneIndex,1);
                                                  FVar12 = local_288.AllocatorInstance.SecondaryData
                                                  ;
                                                  if (bVar8) {
                                                    local_440.Container = &local_288;
                                                    UE::AnimationCore::
                                                                                                        
                                                  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                                  ::
                                                  AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                                            (&local_440,(FBoneWeight)0x40000002,
                                                             &local_5d0);
                                                  bVar8 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                                                                                          
                                                  L"FBoneWeights::SetBoneWeight[Threshold, Normalize=Always]"
                                                  ,local_288.ArrayNum,2);
                                                  FVar12 = local_288.AllocatorInstance.SecondaryData
                                                  ;
                                                  if (bVar8) {
                                                    pFVar10 = UE::AnimationCore::FBoneWeights::
                                                              operator[]((FBoneWeights *)&local_288,
                                                                         1);
                                                    bVar8 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                                                                                              
                                                  L"FBoneWeights::SetBoneWeight[Threshold, Normalize=Always]"
                                                  ,(uint)pFVar10->BoneIndex,1);
                                                  FVar12 = local_288.AllocatorInstance.SecondaryData
                                                  ;
                                                  if (bVar8) {
                                                    if (local_288.AllocatorInstance.SecondaryData !=
                                                        (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ) {
                                                    FMemory::Free((void *)local_288.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                  }
                                                  local_478.Container = &local_248;
                                                  local_248.AllocatorInstance.SecondaryData =
                                                       (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ;
                                                  local_248.ArrayNum = 0;
                                                  local_248.ArrayMax = 0xc;
                                                  local_548.bHasDefaultBoneIndex = false;
                                                  local_548.bBlendZeroInfluence = true;
                                                  local_548._14_2_ = 0;
                                                  local_548.NormalizeType = Always;
                                                  local_548.MaxWeightCount = 0xc;
                                                  local_548.WeightThreshold = 1;
                                                  local_548.DefaultBoneIndex = 0;
                                                  UE::AnimationCore::
                                                  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                                  ::
                                                  AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                                            (&local_478,(FBoneWeight)0x80000000,
                                                             &local_548);
                                                  local_470.Container = &local_248;
                                                  local_538.bHasDefaultBoneIndex = false;
                                                  local_538.bBlendZeroInfluence = true;
                                                  local_538._14_2_ = 0;
                                                  local_538.NormalizeType = Always;
                                                  local_538.MaxWeightCount = 0xc;
                                                  local_538.WeightThreshold = 1;
                                                  local_538.DefaultBoneIndex = 0;
                                                  UE::AnimationCore::
                                                  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                                  ::
                                                  AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                                            (&local_470,(FBoneWeight)0x80000001,
                                                             &local_538);
                                                  bVar8 = FAutomationTestBase::TestEqual
                                                                    ((FAutomationTestBase *)this,
                                                                                                                                          
                                                  L"FBoneWeights::RemoveBoneWeight",
                                                  local_248.ArrayNum,2);
                                                  FVar12 = local_248.AllocatorInstance.SecondaryData
                                                  ;
                                                  if (bVar8) {
                                                    local_528.bHasDefaultBoneIndex = false;
                                                    local_528.bBlendZeroInfluence = true;
                                                    local_528._14_2_ = 0;
                                                    local_528.NormalizeType = Always;
                                                    local_528.MaxWeightCount = 0xc;
                                                    local_528.WeightThreshold = 1;
                                                    local_528.DefaultBoneIndex = 0;
                                                    UE::AnimationCore::FBoneWeights::
                                                    RemoveBoneWeight((FBoneWeights *)&local_248,2,
                                                                     &local_528);
                                                    bVar8 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                                                                                              
                                                  L"FBoneWeights::RemoveBoneWeight",
                                                  local_248.ArrayNum,2);
                                                  FVar12 = local_248.AllocatorInstance.SecondaryData
                                                  ;
                                                  if (bVar8) {
                                                    local_4f8.MaxWeightCount = 0xc;
                                                    local_4f8.WeightThreshold = 1;
                                                    local_4f8.DefaultBoneIndex = 0;
                                                    local_4f8.bHasDefaultBoneIndex = false;
                                                    local_4f8.bBlendZeroInfluence = true;
                                                    local_4f8.NormalizeType = Always;
                                                    UE::AnimationCore::FBoneWeights::
                                                    RemoveBoneWeight((FBoneWeights *)&local_248,0,
                                                                     &local_4f8);
                                                    bVar8 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                                                                                              
                                                  L"FBoneWeights::RemoveBoneWeight",
                                                  local_248.ArrayNum,1);
                                                  FVar12 = local_248.AllocatorInstance.SecondaryData
                                                  ;
                                                  if (bVar8) {
                                                    pFVar10 = UE::AnimationCore::FBoneWeights::
                                                              operator[]((FBoneWeights *)&local_248,
                                                                         0);
                                                    bVar8 = FAutomationTestBase::TestEqual
                                                                      ((FAutomationTestBase *)this,
                                                                                                                                              
                                                  L"FBoneWeights::RemoveBoneWeight",
                                                  (float)pFVar10->RawWeight * fVar7,fVar4,fVar3);
                                                  FVar12 = local_248.AllocatorInstance.SecondaryData
                                                  ;
                                                  if (bVar8) {
                                                    if (local_248.AllocatorInstance.SecondaryData !=
                                                        (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ) {
                                                    FMemory::Free((void *)local_248.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                  }
                                                  return true;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              pcVar2 = *(code **)(*(longlong *)this + 0x28);
              ::FString::PrintfImpl(&local_3e0,L"%s: The two values are not equal.");
              (*pcVar2)(this,&local_3e0,0);
              FVar12 = local_3c8.SecondaryData;
              if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
                FVar12 = local_3c8.SecondaryData;
              }
            }
          }
        }
      }
      else {
        FVar12 = local_388.SecondaryData;
        if (local_c8.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FMemory::Free((void *)local_c8.SecondaryData);
          FVar12 = local_388.SecondaryData;
        }
      }
    }
LAB_1423746f3:
    if (FVar12 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FMemory::Free((void *)FVar12);
    }
  }
  return false;
}

// GetBeautifiedTestName @ 142375ac0

FString * __thiscall
FBoneWeightsTestBasic::GetBeautifiedTestName
          (FBoneWeightsTestBasic *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.AnimationCore.BoneWeights.Basic");
  return __return_storage_ptr__;
}

