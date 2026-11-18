// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 8

// GetTestFlags @ 142376730

EAutomationTestFlags __thiscall FBoneWeightsTestBlend::GetTestFlags(FBoneWeightsTestBlend *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 142376740

bool __thiscall FBoneWeightsTestBlend::IsStressTest(FBoneWeightsTestBlend *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142376750

uint __thiscall FBoneWeightsTestBlend::GetRequiredDeviceNum(FBoneWeightsTestBlend *this)

{
  return 1;
}

// GetTestSourceFileName @ 142376760

FString * __thiscall
FBoneWeightsTestBlend::GetTestSourceFileName
          (FBoneWeightsTestBlend *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\Tests\\BoneWeightsTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142376790

int __thiscall FBoneWeightsTestBlend::GetTestSourceFileLine(FBoneWeightsTestBlend *this)

{
  return 0x1b7;
}

// GetTests @ 1423767a0

/* WARNING: Removing unreachable block (ram,0x00014237688d) */
/* WARNING: Removing unreachable block (ram,0x000142376958) */

void __thiscall
FBoneWeightsTestBlend::GetTests
          (FBoneWeightsTestBlend *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.AnimationCore.BoneWeights.Blend");
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

// RunTest @ 142376980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FBoneWeightsTestBlend::RunTest(FBoneWeightsTestBlend *this,FString *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  bool bVar10;
  undefined1 uVar11;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar12;
  FBoneWeight *pFVar13;
  undefined1 auStackY_ac8 [32];
  FBoneWeightsSettings local_a88;
  FBoneWeightsSettings local_a78;
  FSimpleWeight local_a68;
  FSimpleWeight local_a60;
  FSimpleWeight local_a58;
  FSimpleWeight local_a50;
  FSimpleWeight local_a48;
  FBoneWeightsSettings local_a40;
  FBoneWeightsSettings local_a30;
  FBoneWeightsSettings local_a20;
  FBoneWeightsSettings local_a10;
  FBoneWeightsSettings local_a00;
  FBoneWeightsSettings local_9f0;
  FBoneWeightsSettings local_9e0;
  FSimpleWeight local_9d0;
  undefined4 local_9c8;
  undefined4 local_9c4;
  FSimpleWeight local_9c0;
  undefined4 local_9b8;
  undefined4 local_9b4;
  FSimpleWeight local_9b0;
  undefined4 local_9a8;
  undefined4 local_9a4;
  FSimpleWeight local_9a0;
  undefined4 local_998;
  undefined4 local_994;
  FSimpleWeight local_990;
  undefined4 local_988;
  undefined4 local_984;
  FSimpleWeight local_980;
  undefined4 local_978;
  undefined4 local_974;
  FSimpleWeight local_970;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_968;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_960;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_958;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_950;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_948;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_940;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_938;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_930;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_928;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_920;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_918;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_910;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_908;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_900;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_8f8;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_8f0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_8e8;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_8e0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_8d8;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_8d0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_8c8;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_8c0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_8b8;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_8b0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_8a8;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_8a0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_898;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_890;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_888 [2];
  initializer_list<FSimpleWeight> local_878;
  initializer_list<FSimpleWeight> local_868;
  initializer_list<FSimpleWeight> local_858;
  initializer_list<FSimpleWeight> local_848;
  initializer_list<FSimpleWeight> local_838;
  initializer_list<FSimpleWeight> local_828;
  initializer_list<FSimpleWeight> local_818;
  initializer_list<FSimpleWeight> local_808;
  initializer_list<FSimpleWeight> local_7f8;
  initializer_list<FSimpleWeight> local_7e8;
  initializer_list<FSimpleWeight> local_7d8;
  initializer_list<FSimpleWeight> local_7c8;
  initializer_list<FSimpleWeight> local_7b8;
  initializer_list<FSimpleWeight> local_7a8;
  initializer_list<FSimpleWeight> local_798;
  initializer_list<FSimpleWeight> local_788;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_778;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_738;
  FSimpleWeight local_6f8;
  undefined4 local_6f0;
  undefined4 local_6ec;
  undefined4 local_6e8;
  undefined4 local_6e4;
  FSimpleWeight local_6e0;
  undefined4 local_6d8;
  undefined4 local_6d4;
  undefined4 local_6d0;
  undefined4 local_6cc;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_6c8;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_688;
  FBoneWeights local_648;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_608;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_5c8;
  undefined1 local_588 [48];
  void *local_558;
  int local_550;
  undefined4 local_54c;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_548;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_508;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_4c8;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_488;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_448;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_408;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_3c8;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_388;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_348;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_308;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_2c8;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_288;
  FBoneWeights local_248;
  FBoneWeights local_208;
  FBoneWeights local_1c8;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_188;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_148;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_108;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_c8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_ac8;
  local_7a8._First = (FSimpleWeight *)0x0;
  local_7a8._Last = (FSimpleWeight *)0x0;
  CreateWeights((FBoneWeights *)&local_288,&local_7a8);
  local_798._First = (FSimpleWeight *)0x0;
  local_798._Last = (FSimpleWeight *)0x0;
  CreateWeights((FBoneWeights *)&local_2c8,&local_798);
  fVar4 = __real_3f000000;
  local_970 = (FSimpleWeight)local_588;
  local_888[0].Container = &local_288;
  local_a40.bHasDefaultBoneIndex = false;
  local_a40.bBlendZeroInfluence = true;
  local_a40._14_2_ = 0;
  local_890.Container = &local_2c8;
  local_a40.NormalizeType = Always;
  local_a40.MaxWeightCount = 0xc;
  local_558 = (void *)0x0;
  local_a40.WeightThreshold = 1;
  local_a40.DefaultBoneIndex = 0;
  local_550 = 0;
  local_54c = 0xc;
  UE::AnimationCore::
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  ::
  Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
            ((TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
              *)&local_970,local_888,&local_890,__real_3f000000,&local_a40);
  bVar10 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,L"FBoneWeights::Blend[Both Empty]",local_550,0);
  if (bVar10) {
    if (local_558 != (void *)0x0) {
      FMemory::Free(local_558);
    }
    if (local_2c8.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FMemory::Free((void *)local_2c8.AllocatorInstance.SecondaryData);
    }
    if (local_288.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FMemory::Free((void *)local_288.AllocatorInstance.SecondaryData);
    }
    local_788._First = (FSimpleWeight *)0x0;
    local_788._Last = (FSimpleWeight *)0x0;
    CreateWeights((FBoneWeights *)&local_308,&local_788);
    fVar7 = __real_3f19999a;
    local_878._First = &local_a68;
    local_878._Last = &local_a60;
    local_a68.Index = 0;
    local_a68.Weight = 0.6;
    CreateWeights((FBoneWeights *)&local_c8,&local_878);
    fVar5 = __real_3e800000;
    local_868._First = &local_9d0;
    local_868._Last = &local_9c0;
    local_9d0.Index = 1;
    local_9d0.Weight = 0.5;
    local_9c8 = 2;
    local_9c4 = 0x3e800000;
    CreateWeights((FBoneWeights *)&local_108,&local_868);
    local_958.Container = &local_508;
    local_a30.bHasDefaultBoneIndex = false;
    local_a30.bBlendZeroInfluence = true;
    local_a30._14_2_ = 0;
    local_960.Container = &local_308;
    local_a30.NormalizeType = Always;
    local_968.Container = &local_c8;
    local_a30.MaxWeightCount = 0xc;
    local_a30.WeightThreshold = 1;
    local_a30.DefaultBoneIndex = 0;
    local_508.AllocatorInstance.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    local_508.ArrayNum = 0;
    local_508.ArrayMax = 0xc;
    UE::AnimationCore::
    TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
    ::
    Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
              (&local_958,&local_960,&local_968,fVar4,&local_a30);
    bVar10 = FAutomationTestBase::TestEqual
                       ((FAutomationTestBase *)this,L"FBoneWeights::Blend[One Empty]",
                        local_508.ArrayNum,1);
    if (bVar10) {
      local_948.Container = &local_548;
      local_a20.bHasDefaultBoneIndex = false;
      local_a20.bBlendZeroInfluence = true;
      local_a20._14_2_ = 0;
      local_950.Container = &local_108;
      local_a20.NormalizeType = Always;
      local_898.Container = &local_308;
      local_a20.MaxWeightCount = 0xc;
      local_a20.WeightThreshold = 1;
      local_a20.DefaultBoneIndex = 0;
      local_548.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      local_548.ArrayNum = 0;
      local_548.ArrayMax = 0xc;
      UE::AnimationCore::
      TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
      ::
      Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                (&local_948,&local_950,&local_898,fVar4,&local_a20);
      bVar10 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,L"FBoneWeights::Blend[One Empty]",
                          local_548.ArrayNum,2);
      if (bVar10) {
        if (local_548.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FMemory::Free((void *)local_548.AllocatorInstance.SecondaryData);
        }
        if (local_508.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FMemory::Free((void *)local_508.AllocatorInstance.SecondaryData);
        }
        if (local_108.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FMemory::Free((void *)local_108.AllocatorInstance.SecondaryData);
        }
        if (local_c8.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
        }
        if (local_308.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FMemory::Free((void *)local_308.AllocatorInstance.SecondaryData);
        }
        local_858._First = &local_a60;
        local_a60.Index = 0;
        local_858._Last = &local_a58;
        local_a60.Weight = 0.6;
        CreateWeights((FBoneWeights *)&local_148,&local_858);
        local_848._First = &local_a58;
        local_a58.Index = 1;
        local_848._Last = &local_a50;
        local_a58.Weight = 0.4;
        CreateWeights((FBoneWeights *)&local_188,&local_848);
        local_930.Container = &local_688;
        local_a10.bHasDefaultBoneIndex = false;
        local_a10.bBlendZeroInfluence = true;
        local_a10._14_2_ = 0;
        local_938.Container = &local_148;
        local_a10.NormalizeType = Always;
        local_940.Container = &local_188;
        local_a10.MaxWeightCount = 0xc;
        local_a10.WeightThreshold = 1;
        local_a10.DefaultBoneIndex = 0;
        local_688.AllocatorInstance.SecondaryData =
             (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
        local_688.ArrayNum = 0;
        local_688.ArrayMax = 0xc;
        UE::AnimationCore::
        TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
        ::
        Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                  (&local_930,&local_938,&local_940,fVar4,&local_a10);
        bVar10 = FAutomationTestBase::TestEqual
                           ((FAutomationTestBase *)this,L"FBoneWeights::Blend[One Each, Disjoint]",
                            local_688.ArrayNum,2);
        if (bVar10) {
          if ((local_688.ArrayNum < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar1 = (code *)swi(3);
            uVar11 = (*pcVar1)();
            return (bool)uVar11;
          }
          FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_688;
          if (local_688.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar12 = local_688.AllocatorInstance.SecondaryData;
          }
          bVar10 = FAutomationTestBase::TestEqual
                             ((FAutomationTestBase *)this,L"FBoneWeights::Blend[One Each, Disjoint]"
                              ,(uint)*(ushort *)FVar12,0);
          if (bVar10) {
            if ((local_688.ArrayNum < 2) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar1 = (code *)swi(3);
              uVar11 = (*pcVar1)();
              return (bool)uVar11;
            }
            FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_688;
            if (local_688.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FVar12 = local_688.AllocatorInstance.SecondaryData;
            }
            bVar10 = FAutomationTestBase::TestEqual
                               ((FAutomationTestBase *)this,
                                L"FBoneWeights::Blend[One Each, Disjoint]",
                                (uint)*(ushort *)((longlong)FVar12 + 4),1);
            if (bVar10) {
              if (local_688.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                FMemory::Free((void *)local_688.AllocatorInstance.SecondaryData);
              }
              if (local_188.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                FMemory::Free((void *)local_188.AllocatorInstance.SecondaryData);
              }
              if (local_148.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                FMemory::Free((void *)local_148.AllocatorInstance.SecondaryData);
              }
              local_838._First = &local_a50;
              local_a50.Index = 0;
              local_838._Last = &local_a48;
              local_a50.Weight = 0.9;
              CreateWeights((FBoneWeights *)&local_348,&local_838);
              local_828._First = &local_a48;
              local_a48.Index = 0;
              local_828._Last = (FSimpleWeight *)&local_a40;
              local_a48.Weight = 0.1;
              CreateWeights((FBoneWeights *)&local_388,&local_828);
              local_918.Container = &local_5c8;
              local_9e0.MaxWeightCount = 0xc;
              local_920.Container = &local_348;
              local_9e0.WeightThreshold = 1;
              local_9e0.DefaultBoneIndex = 0;
              local_928.Container = &local_388;
              local_9e0.bHasDefaultBoneIndex = false;
              local_9e0.bBlendZeroInfluence = true;
              local_9e0.NormalizeType = None;
              local_5c8.AllocatorInstance.SecondaryData =
                   (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
              local_5c8.ArrayNum = 0;
              local_5c8.ArrayMax = 0xc;
              UE::AnimationCore::
              TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
              ::
              Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                        (&local_918,&local_920,&local_928,fVar4,&local_9e0);
              bVar10 = FAutomationTestBase::TestEqual
                                 ((FAutomationTestBase *)this,
                                  L"FBoneWeights::Blend[One Each, Overlap]",local_5c8.ArrayNum,1);
              if (bVar10) {
                if ((local_5c8.ArrayNum < 1) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar1 = (code *)swi(3);
                  uVar11 = (*pcVar1)();
                  return (bool)uVar11;
                }
                fVar8 = __real_37800080;
                fVar2 = __real_38d1b717;
                FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_5c8;
                if (local_5c8.AllocatorInstance.SecondaryData !=
                    (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                  FVar12 = local_5c8.AllocatorInstance.SecondaryData;
                }
                bVar10 = FAutomationTestBase::TestEqual
                                   ((FAutomationTestBase *)this,
                                    L"FBoneWeights::Blend[One Each, Overlap]",
                                    (float)*(ushort *)((longlong)FVar12 + 2) * __real_37800080,fVar4
                                    ,__real_38d1b717);
                if (bVar10) {
                  local_900.Container = &local_608;
                  local_a00.MaxWeightCount = 0xc;
                  local_908.Container = &local_348;
                  local_a00.WeightThreshold = 1;
                  local_a00.DefaultBoneIndex = 0;
                  local_910.Container = &local_388;
                  local_a00.bHasDefaultBoneIndex = false;
                  local_a00.bBlendZeroInfluence = true;
                  local_a00.NormalizeType = Always;
                  local_608.AllocatorInstance.SecondaryData =
                       (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
                  local_608.ArrayNum = 0;
                  local_608.ArrayMax = 0xc;
                  UE::AnimationCore::
                  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                  ::
                  Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                            (&local_900,&local_908,&local_910,fVar4,&local_a00);
                  bVar10 = FAutomationTestBase::TestEqual
                                     ((FAutomationTestBase *)this,
                                      L"FBoneWeights::Blend[One Each, Overlap]",local_608.ArrayNum,1
                                     );
                  if (bVar10) {
                    if ((local_608.ArrayNum < 1) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar1 = (code *)swi(3);
                      uVar11 = (*pcVar1)();
                      return (bool)uVar11;
                    }
                    fVar3 = __real_3f800000;
                    FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_608;
                    if (local_608.AllocatorInstance.SecondaryData !=
                        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                      FVar12 = local_608.AllocatorInstance.SecondaryData;
                    }
                    bVar10 = FAutomationTestBase::TestEqual
                                       ((FAutomationTestBase *)this,
                                        L"FBoneWeights::Blend[One Each, Overlap]",
                                        (float)*(ushort *)((longlong)FVar12 + 2) * fVar8,
                                        __real_3f800000,fVar2);
                    if (bVar10) {
                      if (local_608.AllocatorInstance.SecondaryData !=
                          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                        FMemory::Free((void *)local_608.AllocatorInstance.SecondaryData);
                      }
                      if (local_5c8.AllocatorInstance.SecondaryData !=
                          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                        FMemory::Free((void *)local_5c8.AllocatorInstance.SecondaryData);
                      }
                      if (local_388.AllocatorInstance.SecondaryData !=
                          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                        FMemory::Free((void *)local_388.AllocatorInstance.SecondaryData);
                      }
                      if (local_348.AllocatorInstance.SecondaryData !=
                          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                        FMemory::Free((void *)local_348.AllocatorInstance.SecondaryData);
                      }
                      local_818._First = &local_9c0;
                      local_9c0.Index = 0;
                      local_818._Last = &local_9b0;
                      local_9c0.Weight = 1.0;
                      local_9b8 = 1;
                      local_9b4 = 0x3f000000;
                      CreateWeights((FBoneWeights *)&local_3c8,&local_818);
                      local_808._First = &local_9b0;
                      local_9b0.Index = 1;
                      local_808._Last = &local_9a0;
                      local_9b0.Weight = 0.5;
                      local_9a8 = 2;
                      local_9a4 = 0x3e800000;
                      CreateWeights((FBoneWeights *)&local_408,&local_808);
                      local_8e8.Container = &local_778;
                      local_a88.MaxWeightCount = 0xc;
                      local_8f0.Container = &local_3c8;
                      local_a88.WeightThreshold = 1;
                      local_a88.DefaultBoneIndex = 0;
                      local_8f8.Container = &local_408;
                      local_a88.bHasDefaultBoneIndex = false;
                      local_a88.bBlendZeroInfluence = false;
                      local_a88.NormalizeType = None;
                      local_778.AllocatorInstance.SecondaryData =
                           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
                      local_778.ArrayNum = 0;
                      local_778.ArrayMax = 0xc;
                      UE::AnimationCore::
                      TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                      ::
                      Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                (&local_8e8,&local_8f0,&local_8f8,fVar4,&local_a88);
                      bVar10 = FAutomationTestBase::TestEqual
                                         ((FAutomationTestBase *)this,
                                          L"FBoneWeights::Blend[Two Each, One Overlap]",
                                          local_778.ArrayNum,3);
                      if (bVar10) {
                        if ((local_778.ArrayNum < 1) &&
                           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar10)) {
                          pcVar1 = (code *)swi(3);
                          uVar11 = (*pcVar1)();
                          return (bool)uVar11;
                        }
                        FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_778;
                        if (local_778.AllocatorInstance.SecondaryData !=
                            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                          FVar12 = local_778.AllocatorInstance.SecondaryData;
                        }
                        bVar10 = FAutomationTestBase::TestEqual
                                           ((FAutomationTestBase *)this,
                                            L"FBoneWeights::Blend[Two Each, One Overlap]",
                                            (uint)*(ushort *)FVar12,0);
                        if (bVar10) {
                          if ((local_778.ArrayNum < 1) &&
                             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar10)) {
                            pcVar1 = (code *)swi(3);
                            uVar11 = (*pcVar1)();
                            return (bool)uVar11;
                          }
                          FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_778;
                          if (local_778.AllocatorInstance.SecondaryData !=
                              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                            FVar12 = local_778.AllocatorInstance.SecondaryData;
                          }
                          bVar10 = FAutomationTestBase::TestEqual
                                             ((FAutomationTestBase *)this,
                                              L"FBoneWeights::Blend[Two Each, One Overlap]",
                                              (float)*(ushort *)((longlong)FVar12 + 2) * fVar8,fVar3
                                              ,fVar2);
                          if (bVar10) {
                            if ((local_778.ArrayNum < 2) &&
                               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                              pcVar1 = (code *)swi(3);
                              uVar11 = (*pcVar1)();
                              return (bool)uVar11;
                            }
                            FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_778;
                            if (local_778.AllocatorInstance.SecondaryData !=
                                (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                              FVar12 = local_778.AllocatorInstance.SecondaryData;
                            }
                            bVar10 = FAutomationTestBase::TestEqual
                                               ((FAutomationTestBase *)this,
                                                L"FBoneWeights::Blend[Two Each, One Overlap]",
                                                (uint)*(ushort *)((longlong)FVar12 + 4),1);
                            if (bVar10) {
                              if ((local_778.ArrayNum < 2) &&
                                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                pcVar1 = (code *)swi(3);
                                uVar11 = (*pcVar1)();
                                return (bool)uVar11;
                              }
                              FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_778;
                              if (local_778.AllocatorInstance.SecondaryData !=
                                  (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                                FVar12 = local_778.AllocatorInstance.SecondaryData;
                              }
                              bVar10 = FAutomationTestBase::TestEqual
                                                 ((FAutomationTestBase *)this,
                                                  L"FBoneWeights::Blend[Two Each, One Overlap]",
                                                  (float)*(ushort *)((longlong)FVar12 + 6) * fVar8,
                                                  fVar4,fVar2);
                              if (bVar10) {
                                if ((local_778.ArrayNum < 3) &&
                                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                  pcVar1 = (code *)swi(3);
                                  uVar11 = (*pcVar1)();
                                  return (bool)uVar11;
                                }
                                FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_778;
                                if (local_778.AllocatorInstance.SecondaryData !=
                                    (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                                  FVar12 = local_778.AllocatorInstance.SecondaryData;
                                }
                                bVar10 = FAutomationTestBase::TestEqual
                                                   ((FAutomationTestBase *)this,
                                                    L"FBoneWeights::Blend[Two Each, One Overlap]",
                                                    (uint)*(ushort *)((longlong)FVar12 + 8),2);
                                if (bVar10) {
                                  if ((local_778.ArrayNum < 3) &&
                                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                    pcVar1 = (code *)swi(3);
                                    uVar11 = (*pcVar1)();
                                    return (bool)uVar11;
                                  }
                                  FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                                           &local_778;
                                  if (local_778.AllocatorInstance.SecondaryData !=
                                      (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                                    FVar12 = local_778.AllocatorInstance.SecondaryData;
                                  }
                                  bVar10 = FAutomationTestBase::TestEqual
                                                     ((FAutomationTestBase *)this,
                                                      L"FBoneWeights::Blend[Two Each, One Overlap]",
                                                      (float)*(ushort *)((longlong)FVar12 + 10) *
                                                      fVar8,fVar5,fVar2);
                                  fVar3 = __real_3e99999a;
                                  if (bVar10) {
                                    local_8d0.Container = &local_6c8;
                                    local_8d8.Container = &local_3c8;
                                    local_a88.bBlendZeroInfluence = true;
                                    local_8e0.Container = &local_408;
                                    local_6c8.AllocatorInstance.SecondaryData =
                                         (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
                                    local_6c8.ArrayNum = 0;
                                    local_6c8.ArrayMax = 0xc;
                                    UE::AnimationCore::
                                    TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                    ::
                                    Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                              (&local_8d0,&local_8d8,&local_8e0,__real_3e99999a,
                                               &local_a88);
                                    if (local_6c8.AllocatorInstance.SecondaryData ==
                                        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                                      local_778.AllocatorInstance.InlineData[0] =
                                           local_6c8.AllocatorInstance.InlineData[0];
                                      local_778.AllocatorInstance.InlineData[1] =
                                           local_6c8.AllocatorInstance.InlineData[1];
                                      local_778.AllocatorInstance.InlineData[2] =
                                           local_6c8.AllocatorInstance.InlineData[2];
                                      local_778.AllocatorInstance.InlineData[3] =
                                           local_6c8.AllocatorInstance.InlineData[3];
                                      local_778.AllocatorInstance.InlineData[4] =
                                           local_6c8.AllocatorInstance.InlineData[4];
                                      local_778.AllocatorInstance.InlineData[5] =
                                           local_6c8.AllocatorInstance.InlineData[5];
                                      local_778.AllocatorInstance.InlineData[6] =
                                           local_6c8.AllocatorInstance.InlineData[6];
                                      local_778.AllocatorInstance.InlineData[7] =
                                           local_6c8.AllocatorInstance.InlineData[7];
                                      local_778.AllocatorInstance.InlineData[8] =
                                           local_6c8.AllocatorInstance.InlineData[8];
                                      local_778.AllocatorInstance.InlineData[9] =
                                           local_6c8.AllocatorInstance.InlineData[9];
                                      local_778.AllocatorInstance.InlineData[10] =
                                           local_6c8.AllocatorInstance.InlineData[10];
                                      local_778.AllocatorInstance.InlineData[0xb] =
                                           local_6c8.AllocatorInstance.InlineData[0xb];
                                      local_778.AllocatorInstance.InlineData[0xc] =
                                           local_6c8.AllocatorInstance.InlineData[0xc];
                                      local_778.AllocatorInstance.InlineData[0xd] =
                                           local_6c8.AllocatorInstance.InlineData[0xd];
                                      local_778.AllocatorInstance.InlineData[0xe] =
                                           local_6c8.AllocatorInstance.InlineData[0xe];
                                      local_778.AllocatorInstance.InlineData[0xf] =
                                           local_6c8.AllocatorInstance.InlineData[0xf];
                                      local_778.AllocatorInstance.InlineData[0x20] =
                                           local_6c8.AllocatorInstance.InlineData[0x20];
                                      local_778.AllocatorInstance.InlineData[0x21] =
                                           local_6c8.AllocatorInstance.InlineData[0x21];
                                      local_778.AllocatorInstance.InlineData[0x22] =
                                           local_6c8.AllocatorInstance.InlineData[0x22];
                                      local_778.AllocatorInstance.InlineData[0x23] =
                                           local_6c8.AllocatorInstance.InlineData[0x23];
                                      local_778.AllocatorInstance.InlineData[0x24] =
                                           local_6c8.AllocatorInstance.InlineData[0x24];
                                      local_778.AllocatorInstance.InlineData[0x25] =
                                           local_6c8.AllocatorInstance.InlineData[0x25];
                                      local_778.AllocatorInstance.InlineData[0x26] =
                                           local_6c8.AllocatorInstance.InlineData[0x26];
                                      local_778.AllocatorInstance.InlineData[0x27] =
                                           local_6c8.AllocatorInstance.InlineData[0x27];
                                      local_778.AllocatorInstance.InlineData[0x28] =
                                           local_6c8.AllocatorInstance.InlineData[0x28];
                                      local_778.AllocatorInstance.InlineData[0x29] =
                                           local_6c8.AllocatorInstance.InlineData[0x29];
                                      local_778.AllocatorInstance.InlineData[0x2a] =
                                           local_6c8.AllocatorInstance.InlineData[0x2a];
                                      local_778.AllocatorInstance.InlineData[0x2b] =
                                           local_6c8.AllocatorInstance.InlineData[0x2b];
                                      local_778.AllocatorInstance.InlineData[0x2c] =
                                           local_6c8.AllocatorInstance.InlineData[0x2c];
                                      local_778.AllocatorInstance.InlineData[0x2d] =
                                           local_6c8.AllocatorInstance.InlineData[0x2d];
                                      local_778.AllocatorInstance.InlineData[0x2e] =
                                           local_6c8.AllocatorInstance.InlineData[0x2e];
                                      local_778.AllocatorInstance.InlineData[0x2f] =
                                           local_6c8.AllocatorInstance.InlineData[0x2f];
                                      local_778.AllocatorInstance.InlineData[0x10] =
                                           local_6c8.AllocatorInstance.InlineData[0x10];
                                      local_778.AllocatorInstance.InlineData[0x11] =
                                           local_6c8.AllocatorInstance.InlineData[0x11];
                                      local_778.AllocatorInstance.InlineData[0x12] =
                                           local_6c8.AllocatorInstance.InlineData[0x12];
                                      local_778.AllocatorInstance.InlineData[0x13] =
                                           local_6c8.AllocatorInstance.InlineData[0x13];
                                      local_778.AllocatorInstance.InlineData[0x14] =
                                           local_6c8.AllocatorInstance.InlineData[0x14];
                                      local_778.AllocatorInstance.InlineData[0x15] =
                                           local_6c8.AllocatorInstance.InlineData[0x15];
                                      local_778.AllocatorInstance.InlineData[0x16] =
                                           local_6c8.AllocatorInstance.InlineData[0x16];
                                      local_778.AllocatorInstance.InlineData[0x17] =
                                           local_6c8.AllocatorInstance.InlineData[0x17];
                                      local_778.AllocatorInstance.InlineData[0x18] =
                                           local_6c8.AllocatorInstance.InlineData[0x18];
                                      local_778.AllocatorInstance.InlineData[0x19] =
                                           local_6c8.AllocatorInstance.InlineData[0x19];
                                      local_778.AllocatorInstance.InlineData[0x1a] =
                                           local_6c8.AllocatorInstance.InlineData[0x1a];
                                      local_778.AllocatorInstance.InlineData[0x1b] =
                                           local_6c8.AllocatorInstance.InlineData[0x1b];
                                      local_778.AllocatorInstance.InlineData[0x1c] =
                                           local_6c8.AllocatorInstance.InlineData[0x1c];
                                      local_778.AllocatorInstance.InlineData[0x1d] =
                                           local_6c8.AllocatorInstance.InlineData[0x1d];
                                      local_778.AllocatorInstance.InlineData[0x1e] =
                                           local_6c8.AllocatorInstance.InlineData[0x1e];
                                      local_778.AllocatorInstance.InlineData[0x1f] =
                                           local_6c8.AllocatorInstance.InlineData[0x1f];
                                    }
                                    FVar12 = local_6c8.AllocatorInstance.SecondaryData;
                                    if (local_778.AllocatorInstance.SecondaryData !=
                                        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                                      FMemory::Free((void *)local_778.AllocatorInstance.
                                                            SecondaryData);
                                      FVar12 = local_6c8.AllocatorInstance.SecondaryData;
                                    }
                                    iVar9 = local_6c8.ArrayNum;
                                    local_778.ArrayMax = local_6c8.ArrayMax;
                                    local_6c8.ArrayMax = 0xc;
                                    local_6c8.AllocatorInstance.SecondaryData =
                                         (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
                                    local_778.ArrayNum = local_6c8.ArrayNum;
                                    local_6c8.ArrayNum = 0;
                                    local_778.AllocatorInstance.SecondaryData = FVar12;
                                    bVar10 = FAutomationTestBase::TestEqual
                                                       ((FAutomationTestBase *)this,
                                                                                                                
                                                  L"FBoneWeights::Blend[Two Each, One Overlap]",
                                                  iVar9,3);
                                    if (bVar10) {
                                      if ((local_778.ArrayNum < 1) &&
                                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                             ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                        pcVar1 = (code *)swi(3);
                                        uVar11 = (*pcVar1)();
                                        return (bool)uVar11;
                                      }
                                      FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                                               &local_778;
                                      if (local_778.AllocatorInstance.SecondaryData !=
                                          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                                        FVar12 = local_778.AllocatorInstance.SecondaryData;
                                      }
                                      bVar10 = FAutomationTestBase::TestEqual
                                                         ((FAutomationTestBase *)this,
                                                                                                                    
                                                  L"FBoneWeights::Blend[Two Each, One Overlap]",
                                                  (uint)*(ushort *)FVar12,0);
                                      if (bVar10) {
                                        if ((local_778.ArrayNum < 1) &&
                                           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                          pcVar1 = (code *)swi(3);
                                          uVar11 = (*pcVar1)();
                                          return (bool)uVar11;
                                        }
                                        FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                                                 &local_778;
                                        if (local_778.AllocatorInstance.SecondaryData !=
                                            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                                          FVar12 = local_778.AllocatorInstance.SecondaryData;
                                        }
                                        bVar10 = FAutomationTestBase::TestEqual
                                                           ((FAutomationTestBase *)this,
                                                                                                                        
                                                  L"FBoneWeights::Blend[Two Each, One Overlap]",
                                                  (float)*(ushort *)((longlong)FVar12 + 2) * fVar8,
                                                  __real_3f333333,fVar2);
                                        if (bVar10) {
                                          if ((local_778.ArrayNum < 2) &&
                                             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                                 (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                            pcVar1 = (code *)swi(3);
                                            uVar11 = (*pcVar1)();
                                            return (bool)uVar11;
                                          }
                                          FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                                                   &local_778;
                                          if (local_778.AllocatorInstance.SecondaryData !=
                                              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                                            FVar12 = local_778.AllocatorInstance.SecondaryData;
                                          }
                                          bVar10 = FAutomationTestBase::TestEqual
                                                             ((FAutomationTestBase *)this,
                                                                                                                            
                                                  L"FBoneWeights::Blend[Two Each, One Overlap]",
                                                  (uint)*(ushort *)((longlong)FVar12 + 4),1);
                                          if (bVar10) {
                                            if ((local_778.ArrayNum < 2) &&
                                               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                                   (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                              pcVar1 = (code *)swi(3);
                                              uVar11 = (*pcVar1)();
                                              return (bool)uVar11;
                                            }
                                            FVar12 = (ForElementType<UE::AnimationCore::FBoneWeight>
                                                     )&local_778;
                                            if (local_778.AllocatorInstance.SecondaryData !=
                                                (ForElementType<UE::AnimationCore::FBoneWeight>)0x0)
                                            {
                                              FVar12 = local_778.AllocatorInstance.SecondaryData;
                                            }
                                            bVar10 = FAutomationTestBase::TestEqual
                                                               ((FAutomationTestBase *)this,
                                                                                                                                
                                                  L"FBoneWeights::Blend[Two Each, One Overlap]",
                                                  (float)*(ushort *)((longlong)FVar12 + 6) * fVar8,
                                                  fVar4,fVar2);
                                            if (bVar10) {
                                              if ((local_778.ArrayNum < 3) &&
                                                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                                     (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                                pcVar1 = (code *)swi(3);
                                                uVar11 = (*pcVar1)();
                                                return (bool)uVar11;
                                              }
                                              FVar12 = (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)
                                                  &local_778;
                                              if (local_778.AllocatorInstance.SecondaryData !=
                                                  (ForElementType<UE::AnimationCore::FBoneWeight>)
                                                  0x0) {
                                                FVar12 = local_778.AllocatorInstance.SecondaryData;
                                              }
                                              bVar10 = FAutomationTestBase::TestEqual
                                                                 ((FAutomationTestBase *)this,
                                                                                                                                    
                                                  L"FBoneWeights::Blend[Two Each, One Overlap]",
                                                  (uint)*(ushort *)((longlong)FVar12 + 8),2);
                                              if (bVar10) {
                                                if ((local_778.ArrayNum < 3) &&
                                                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                                       (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                                  pcVar1 = (code *)swi(3);
                                                  uVar11 = (*pcVar1)();
                                                  return (bool)uVar11;
                                                }
                                                FVar12 = (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)
                                                  &local_778;
                                                if (local_778.AllocatorInstance.SecondaryData !=
                                                    (ForElementType<UE::AnimationCore::FBoneWeight>)
                                                    0x0) {
                                                  FVar12 = local_778.AllocatorInstance.SecondaryData
                                                  ;
                                                }
                                                bVar10 = FAutomationTestBase::TestEqual
                                                                   ((FAutomationTestBase *)this,
                                                                                                                                        
                                                  L"FBoneWeights::Blend[Two Each, One Overlap]",
                                                  (float)*(ushort *)((longlong)FVar12 + 10) * fVar8,
                                                  __real_3d99999a,fVar2);
                                                if (bVar10) {
                                                  if (local_778.AllocatorInstance.SecondaryData !=
                                                      (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ) {
                                                    FMemory::Free((void *)local_778.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                  }
                                                  if (local_408.AllocatorInstance.SecondaryData !=
                                                      (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ) {
                                                    FMemory::Free((void *)local_408.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                  }
                                                  if (local_3c8.AllocatorInstance.SecondaryData !=
                                                      (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ) {
                                                    FMemory::Free((void *)local_3c8.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                  }
                                                  local_7f8._First = &local_9a0;
                                                  local_9a0.Index = 0;
                                                  local_7f8._Last = &local_990;
                                                  local_9a0.Weight = 1.0;
                                                  local_998 = 1;
                                                  local_994 = 0x3f000000;
                                                  CreateWeights((FBoneWeights *)&local_448,
                                                                &local_7f8);
                                                  local_7e8._First = &local_6f8;
                                                  local_6f8.Index = 0;
                                                  local_7e8._Last = &local_6e0;
                                                  local_6f8.Weight = 0.5;
                                                  local_6f0 = 2;
                                                  local_6ec = 0x3f000000;
                                                  local_6e8 = 1;
                                                  local_6e4 = 0x3e800000;
                                                  CreateWeights((FBoneWeights *)&local_488,
                                                                &local_7e8);
                                                  local_8b8.Container = &local_738;
                                                  local_a78.MaxWeightCount = 0xc;
                                                  local_8c0.Container = &local_448;
                                                  local_a78.WeightThreshold = 1;
                                                  local_a78.DefaultBoneIndex = 0;
                                                  local_8c8.Container = &local_488;
                                                  local_a78.bHasDefaultBoneIndex = false;
                                                  local_a78.bBlendZeroInfluence = false;
                                                  local_a78.NormalizeType = None;
                                                  local_738.AllocatorInstance.SecondaryData =
                                                       (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ;
                                                  local_738.ArrayNum = 0;
                                                  local_738.ArrayMax = 0xc;
                                                  UE::AnimationCore::
                                                  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                                  ::
                                                  Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                                            (&local_8b8,&local_8c0,&local_8c8,fVar4,
                                                             &local_a78);
                                                  bVar10 = FAutomationTestBase::TestEqual
                                                                     ((FAutomationTestBase *)this,
                                                                                                                                            
                                                  L"FBoneWeights::Blend[Two/Three, Two Overlap]",
                                                  local_738.ArrayNum,3);
                                                  if (bVar10) {
                                                    if ((local_738.ArrayNum < 1) &&
                                                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                                           (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                                    pcVar1 = (code *)swi(3);
                                                    uVar11 = (*pcVar1)();
                                                    return (bool)uVar11;
                                                  }
                                                  FVar12 = (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)
                                                  &local_738;
                                                  if (local_738.AllocatorInstance.SecondaryData !=
                                                      (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ) {
                                                    FVar12 = local_738.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  bVar10 = FAutomationTestBase::TestEqual
                                                                     ((FAutomationTestBase *)this,
                                                                                                                                            
                                                  L"FBoneWeights::Blend[Two/Three, Two Overlap]",
                                                  (uint)*(ushort *)FVar12,0);
                                                  if (bVar10) {
                                                    if ((local_738.ArrayNum < 1) &&
                                                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                                                           (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar10)) {
                                                    pcVar1 = (code *)swi(3);
                                                    uVar11 = (*pcVar1)();
                                                    return (bool)uVar11;
                                                  }
                                                  FVar12 = (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)
                                                  &local_738;
                                                  if (local_738.AllocatorInstance.SecondaryData !=
                                                      (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ) {
                                                    FVar12 = local_738.AllocatorInstance.
                                                             SecondaryData;
                                                  }
                                                  bVar10 = FAutomationTestBase::TestEqual
                                                                     ((FAutomationTestBase *)this,
                                                                                                                                            
                                                  L"FBoneWeights::Blend[Two/Three, Two Overlap]",
                                                  (float)*(ushort *)((longlong)FVar12 + 2) * fVar8,
                                                  __real_3f400000,fVar2);
                                                  if (bVar10) {
                                                    pFVar13 = UE::AnimationCore::FBoneWeights::
                                                              operator[]((FBoneWeights *)&local_738,
                                                                         1);
                                                    bVar10 = FAutomationTestBase::TestEqual
                                                                       ((FAutomationTestBase *)this,
                                                                                                                                                
                                                  L"FBoneWeights::Blend[Two/Three, Two Overlap]",
                                                  (uint)pFVar13->BoneIndex,2);
                                                  if (bVar10) {
                                                    pFVar13 = UE::AnimationCore::FBoneWeights::
                                                              operator[]((FBoneWeights *)&local_738,
                                                                         1);
                                                    bVar10 = FAutomationTestBase::TestEqual
                                                                       ((FAutomationTestBase *)this,
                                                                                                                                                
                                                  L"FBoneWeights::Blend[Two/Three, Two Overlap]",
                                                  (float)pFVar13->RawWeight * fVar8,fVar4,fVar2);
                                                  if (bVar10) {
                                                    pFVar13 = UE::AnimationCore::FBoneWeights::
                                                              operator[]((FBoneWeights *)&local_738,
                                                                         2);
                                                    bVar10 = FAutomationTestBase::TestEqual
                                                                       ((FAutomationTestBase *)this,
                                                                                                                                                
                                                  L"FBoneWeights::Blend[Two/Three, Two Overlap]",
                                                  (uint)pFVar13->BoneIndex,1);
                                                  if (bVar10) {
                                                    pFVar13 = UE::AnimationCore::FBoneWeights::
                                                              operator[]((FBoneWeights *)&local_738,
                                                                         2);
                                                    fVar6 = __real_3ec00000;
                                                    bVar10 = FAutomationTestBase::TestEqual
                                                                       ((FAutomationTestBase *)this,
                                                                                                                                                
                                                  L"FBoneWeights::Blend[Two/Three, Two Overlap]",
                                                  (float)pFVar13->RawWeight * fVar8,__real_3ec00000,
                                                  fVar2);
                                                  if (bVar10) {
                                                    local_8a0.Container = &local_4c8;
                                                    local_a78.bBlendZeroInfluence = true;
                                                    local_8a8.Container = &local_448;
                                                    local_4c8.AllocatorInstance.SecondaryData =
                                                         (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ;
                                                  local_8b0.Container = &local_488;
                                                  local_4c8.ArrayNum = 0;
                                                  local_4c8.ArrayMax = 0xc;
                                                  UE::AnimationCore::
                                                  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                                                  ::
                                                  Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                                                            (&local_8a0,&local_8a8,&local_8b0,fVar4,
                                                             &local_a78);
                                                  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                                                  ::operator=(&local_738,&local_4c8);
                                                  if (local_4c8.AllocatorInstance.SecondaryData !=
                                                      (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ) {
                                                    FMemory::Free((void *)local_4c8.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                  }
                                                  bVar10 = FAutomationTestBase::TestEqual
                                                                     ((FAutomationTestBase *)this,
                                                                                                                                            
                                                  L"FBoneWeights::Blend[Two/Three, Two Overlap]",
                                                  local_738.ArrayNum,3);
                                                  if (bVar10) {
                                                    pFVar13 = UE::AnimationCore::FBoneWeights::
                                                              operator[]((FBoneWeights *)&local_738,
                                                                         0);
                                                    bVar10 = FAutomationTestBase::TestEqual
                                                                       ((FAutomationTestBase *)this,
                                                                                                                                                
                                                  L"FBoneWeights::Blend[Two/Three, Two Overlap]",
                                                  (uint)pFVar13->BoneIndex,0);
                                                  if (bVar10) {
                                                    pFVar13 = UE::AnimationCore::FBoneWeights::
                                                              operator[]((FBoneWeights *)&local_738,
                                                                         0);
                                                    bVar10 = FAutomationTestBase::TestEqual
                                                                       ((FAutomationTestBase *)this,
                                                                                                                                                
                                                  L"FBoneWeights::Blend[Two/Three, Two Overlap]",
                                                  (float)pFVar13->RawWeight * fVar8,__real_3f400000,
                                                  fVar2);
                                                  if (bVar10) {
                                                    pFVar13 = UE::AnimationCore::FBoneWeights::
                                                              operator[]((FBoneWeights *)&local_738,
                                                                         1);
                                                    bVar10 = FAutomationTestBase::TestEqual
                                                                       ((FAutomationTestBase *)this,
                                                                                                                                                
                                                  L"FBoneWeights::Blend[Two/Three, Two Overlap]",
                                                  (uint)pFVar13->BoneIndex,1);
                                                  if (bVar10) {
                                                    pFVar13 = UE::AnimationCore::FBoneWeights::
                                                              operator[]((FBoneWeights *)&local_738,
                                                                         1);
                                                    bVar10 = FAutomationTestBase::TestEqual
                                                                       ((FAutomationTestBase *)this,
                                                                                                                                                
                                                  L"FBoneWeights::Blend[Two/Three, Two Overlap]",
                                                  (float)pFVar13->RawWeight * fVar8,fVar6,fVar2);
                                                  if (bVar10) {
                                                    pFVar13 = UE::AnimationCore::FBoneWeights::
                                                              operator[]((FBoneWeights *)&local_738,
                                                                         2);
                                                    bVar10 = FAutomationTestBase::TestEqual
                                                                       ((FAutomationTestBase *)this,
                                                                                                                                                
                                                  L"FBoneWeights::Blend[Two/Three, Two Overlap]",
                                                  (uint)pFVar13->BoneIndex,2);
                                                  if (bVar10) {
                                                    pFVar13 = UE::AnimationCore::FBoneWeights::
                                                              operator[]((FBoneWeights *)&local_738,
                                                                         2);
                                                    bVar10 = FAutomationTestBase::TestEqual
                                                                       ((FAutomationTestBase *)this,
                                                                                                                                                
                                                  L"FBoneWeights::Blend[Two/Three, Two Overlap]",
                                                  (float)pFVar13->RawWeight * fVar8,fVar5,fVar2);
                                                  if (bVar10) {
                                                    if (local_738.AllocatorInstance.SecondaryData !=
                                                        (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ) {
                                                    FMemory::Free((void *)local_738.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                  }
                                                  if (local_488.AllocatorInstance.SecondaryData !=
                                                      (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ) {
                                                    FMemory::Free((void *)local_488.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                  }
                                                  if (local_448.AllocatorInstance.SecondaryData !=
                                                      (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ) {
                                                    FMemory::Free((void *)local_448.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                  }
                                                  local_7d8._First = &local_990;
                                                  local_990.Index = 0;
                                                  local_7d8._Last = &local_980;
                                                  local_990.Weight = 1.0;
                                                  local_988 = 1;
                                                  local_984 = 0x3f000000;
                                                  CreateWeights(&local_1c8,&local_7d8);
                                                  local_7c8._First = &local_980;
                                                  local_980.Index = 0;
                                                  local_7c8._Last = &local_970;
                                                  local_980.Weight = 0.5;
                                                  local_978 = 2;
                                                  local_974 = 0x3f000000;
                                                  CreateWeights(&local_208,&local_7c8);
                                                  local_7b8._First = &local_6e0;
                                                  local_6e0.Index = 0;
                                                  local_7b8._Last = (FSimpleWeight *)&local_6c8;
                                                  local_6e0.Weight = 0.5;
                                                  local_6d8 = 1;
                                                  local_6d4 = 0x3f000000;
                                                  local_6d0 = 3;
                                                  local_6cc = 0x3dcccccd;
                                                  CreateWeights(&local_248,&local_7b8);
                                                  local_9f0.MaxWeightCount = 0xc;
                                                  local_9f0.WeightThreshold = 1;
                                                  local_9f0.DefaultBoneIndex = 0;
                                                  local_9f0.bHasDefaultBoneIndex = false;
                                                  local_9f0.bBlendZeroInfluence = true;
                                                  local_9f0.NormalizeType = None;
                                                  UE::AnimationCore::FBoneWeights::Blend
                                                            (&local_648,&local_1c8,&local_208,
                                                             &local_248,__real_3e4ccccd,fVar3,fVar4,
                                                             &local_9f0);
                                                  bVar10 = FAutomationTestBase::TestEqual
                                                                     ((FAutomationTestBase *)this,
                                                                                                                                            
                                                  L"FBoneWeights::Blend[Barycentric, Two/Two/Three, Two Overlap]"
                                                  ,local_648.BoneWeights.ArrayNum,4);
                                                  if (bVar10) {
                                                    pFVar13 = UE::AnimationCore::FBoneWeights::
                                                              operator[](&local_648,0);
                                                    bVar10 = FAutomationTestBase::TestEqual
                                                                       ((FAutomationTestBase *)this,
                                                                                                                                                
                                                  L"FBoneWeights::Blend[Barycentric, Two/Two/Three, Two Overlap]"
                                                  ,(uint)pFVar13->BoneIndex,0);
                                                  if (bVar10) {
                                                    pFVar13 = UE::AnimationCore::FBoneWeights::
                                                              operator[](&local_648,0);
                                                    bVar10 = FAutomationTestBase::TestEqual
                                                                       ((FAutomationTestBase *)this,
                                                                                                                                                
                                                  L"FBoneWeights::Blend[Barycentric, Two/Two/Three, Two Overlap]"
                                                  ,(float)pFVar13->RawWeight * fVar8,fVar7,fVar2);
                                                  if (bVar10) {
                                                    pFVar13 = UE::AnimationCore::FBoneWeights::
                                                              operator[](&local_648,1);
                                                    bVar10 = FAutomationTestBase::TestEqual
                                                                       ((FAutomationTestBase *)this,
                                                                                                                                                
                                                  L"FBoneWeights::Blend[Barycentric, Two/Two/Three, Two Overlap]"
                                                  ,(uint)pFVar13->BoneIndex,1);
                                                  if (bVar10) {
                                                    pFVar13 = UE::AnimationCore::FBoneWeights::
                                                              operator[](&local_648,1);
                                                    bVar10 = FAutomationTestBase::TestEqual
                                                                       ((FAutomationTestBase *)this,
                                                                                                                                                
                                                  L"FBoneWeights::Blend[Barycentric, Two/Two/Three, Two Overlap]"
                                                  ,(float)pFVar13->RawWeight * fVar8,__real_3eb33333
                                                  ,fVar2);
                                                  if (bVar10) {
                                                    pFVar13 = UE::AnimationCore::FBoneWeights::
                                                              operator[](&local_648,2);
                                                    bVar10 = FAutomationTestBase::TestEqual
                                                                       ((FAutomationTestBase *)this,
                                                                                                                                                
                                                  L"FBoneWeights::Blend[Barycentric, Two/Two/Three, Two Overlap]"
                                                  ,(uint)pFVar13->BoneIndex,2);
                                                  if (bVar10) {
                                                    pFVar13 = UE::AnimationCore::FBoneWeights::
                                                              operator[](&local_648,2);
                                                    bVar10 = FAutomationTestBase::TestEqual
                                                                       ((FAutomationTestBase *)this,
                                                                                                                                                
                                                  L"FBoneWeights::Blend[Barycentric, Two/Two/Three, Two Overlap]"
                                                  ,(float)pFVar13->RawWeight * fVar8,__real_3e19999a
                                                  ,fVar2);
                                                  if (bVar10) {
                                                    pFVar13 = UE::AnimationCore::FBoneWeights::
                                                              operator[](&local_648,3);
                                                    bVar10 = FAutomationTestBase::TestEqual
                                                                       ((FAutomationTestBase *)this,
                                                                                                                                                
                                                  L"FBoneWeights::Blend[Barycentric, Two/Two/Three, Two Overlap]"
                                                  ,(uint)pFVar13->BoneIndex,3);
                                                  if (bVar10) {
                                                    pFVar13 = UE::AnimationCore::FBoneWeights::
                                                              operator[](&local_648,3);
                                                    bVar10 = FAutomationTestBase::TestEqual
                                                                       ((FAutomationTestBase *)this,
                                                                                                                                                
                                                  L"FBoneWeights::Blend[Barycentric, Two/Two/Three, Two Overlap]"
                                                  ,(float)pFVar13->RawWeight * fVar8,__real_3d4ccccd
                                                  ,fVar2);
                                                  if (bVar10) {
                                                    if (local_648.BoneWeights.AllocatorInstance.
                                                        SecondaryData !=
                                                        (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ) {
                                                    FMemory::Free((void *)local_648.BoneWeights.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                  }
                                                  if (local_248.BoneWeights.AllocatorInstance.
                                                      SecondaryData !=
                                                      (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ) {
                                                    FMemory::Free((void *)local_248.BoneWeights.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                  }
                                                  if (local_208.BoneWeights.AllocatorInstance.
                                                      SecondaryData !=
                                                      (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ) {
                                                    FMemory::Free((void *)local_208.BoneWeights.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                  }
                                                  if (local_1c8.BoneWeights.AllocatorInstance.
                                                      SecondaryData !=
                                                      (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ) {
                                                    FMemory::Free((void *)local_1c8.BoneWeights.
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
                                                  if (local_648.BoneWeights.AllocatorInstance.
                                                      SecondaryData !=
                                                      (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ) {
                                                    FMemory::Free((void *)local_648.BoneWeights.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                  }
                                                  if (local_248.BoneWeights.AllocatorInstance.
                                                      SecondaryData !=
                                                      (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ) {
                                                    FMemory::Free((void *)local_248.BoneWeights.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                  }
                                                  local_148.AllocatorInstance.SecondaryData =
                                                       local_1c8.BoneWeights.AllocatorInstance.
                                                       SecondaryData;
                                                  if (local_208.BoneWeights.AllocatorInstance.
                                                      SecondaryData !=
                                                      (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ) {
                                                    FMemory::Free((void *)local_208.BoneWeights.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                    local_148.AllocatorInstance.SecondaryData =
                                                         local_1c8.BoneWeights.AllocatorInstance.
                                                         SecondaryData;
                                                  }
                                                  goto LAB_142376d30;
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
                                                  if (local_738.AllocatorInstance.SecondaryData !=
                                                      (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ) {
                                                    FMemory::Free((void *)local_738.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                  }
                                                  local_148.AllocatorInstance.SecondaryData =
                                                       local_448.AllocatorInstance.SecondaryData;
                                                  if (local_488.AllocatorInstance.SecondaryData !=
                                                      (
                                                  ForElementType<UE::AnimationCore::FBoneWeight>)0x0
                                                  ) {
                                                    FMemory::Free((void *)local_488.
                                                                          AllocatorInstance.
                                                                          SecondaryData);
                                                    local_148.AllocatorInstance.SecondaryData =
                                                         local_448.AllocatorInstance.SecondaryData;
                                                  }
                                                  goto LAB_142376d30;
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
                      if (local_778.AllocatorInstance.SecondaryData !=
                          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                        FMemory::Free((void *)local_778.AllocatorInstance.SecondaryData);
                      }
                      local_148.AllocatorInstance.SecondaryData =
                           local_3c8.AllocatorInstance.SecondaryData;
                      if (local_408.AllocatorInstance.SecondaryData !=
                          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                        FMemory::Free((void *)local_408.AllocatorInstance.SecondaryData);
                        local_148.AllocatorInstance.SecondaryData =
                             local_3c8.AllocatorInstance.SecondaryData;
                      }
                      goto LAB_142376d30;
                    }
                  }
                  if (local_608.AllocatorInstance.SecondaryData !=
                      (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                    FMemory::Free((void *)local_608.AllocatorInstance.SecondaryData);
                  }
                }
              }
              if (local_5c8.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                FMemory::Free((void *)local_5c8.AllocatorInstance.SecondaryData);
              }
              local_148.AllocatorInstance.SecondaryData = local_348.AllocatorInstance.SecondaryData;
              if (local_388.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                FMemory::Free((void *)local_388.AllocatorInstance.SecondaryData);
                local_148.AllocatorInstance.SecondaryData =
                     local_348.AllocatorInstance.SecondaryData;
              }
              goto LAB_142376d30;
            }
          }
        }
        if (local_688.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FMemory::Free((void *)local_688.AllocatorInstance.SecondaryData);
        }
        if (local_188.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FMemory::Free((void *)local_188.AllocatorInstance.SecondaryData);
        }
        goto LAB_142376d30;
      }
      if (local_548.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FMemory::Free((void *)local_548.AllocatorInstance.SecondaryData);
      }
    }
    if (local_508.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FMemory::Free((void *)local_508.AllocatorInstance.SecondaryData);
    }
    if (local_108.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FMemory::Free((void *)local_108.AllocatorInstance.SecondaryData);
    }
    local_148.AllocatorInstance.SecondaryData = local_308.AllocatorInstance.SecondaryData;
    if (local_c8.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
      local_148.AllocatorInstance.SecondaryData = local_308.AllocatorInstance.SecondaryData;
    }
  }
  else {
    if (local_558 != (void *)0x0) {
      FMemory::Free(local_558);
    }
    local_148.AllocatorInstance.SecondaryData = local_288.AllocatorInstance.SecondaryData;
    if (local_2c8.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FMemory::Free((void *)local_2c8.AllocatorInstance.SecondaryData);
      local_148.AllocatorInstance.SecondaryData = local_288.AllocatorInstance.SecondaryData;
    }
  }
LAB_142376d30:
  if (local_148.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FMemory::Free((void *)local_148.AllocatorInstance.SecondaryData);
  }
  return false;
}

// GetBeautifiedTestName @ 1423784f0

FString * __thiscall
FBoneWeightsTestBlend::GetBeautifiedTestName
          (FBoneWeightsTestBlend *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.AnimationCore.BoneWeights.Blend");
  return __return_storage_ptr__;
}

