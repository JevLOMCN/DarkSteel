// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 8

// GetTestFlags @ 142375b30

EAutomationTestFlags __thiscall FBoneWeightsTestCreate::GetTestFlags(FBoneWeightsTestCreate *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 142375b40

bool __thiscall FBoneWeightsTestCreate::IsStressTest(FBoneWeightsTestCreate *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142375b50

uint __thiscall FBoneWeightsTestCreate::GetRequiredDeviceNum(FBoneWeightsTestCreate *this)

{
  return 1;
}

// GetTestSourceFileName @ 142375b60

FString * __thiscall
FBoneWeightsTestCreate::GetTestSourceFileName
          (FBoneWeightsTestCreate *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\Tests\\BoneWeightsTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142375b90

int __thiscall FBoneWeightsTestCreate::GetTestSourceFileLine(FBoneWeightsTestCreate *this)

{
  return 0x162;
}

// GetTests @ 142375ba0

/* WARNING: Removing unreachable block (ram,0x000142375c8d) */
/* WARNING: Removing unreachable block (ram,0x000142375d58) */

void __thiscall
FBoneWeightsTestCreate::GetTests
          (FBoneWeightsTestCreate *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.AnimationCore.BoneWeights.Create");
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

// RunTest @ 142375d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FBoneWeightsTestCreate::RunTest(FBoneWeightsTestCreate *this,FString *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ushort *puVar5;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStackY_1c8 [32];
  FIdentityFunctor local_198;
  FBoneWeight local_194;
  FBoneWeight local_190;
  FBoneWeightsSettings local_188;
  FBoneWeightsSettings local_178;
  code *local_168;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_160;
  code *local_158;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_150;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_148;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_140;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_138;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_f8;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_b8;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_78;
  ulonglong local_38;
  ulonglong uVar14;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  uVar9 = 0;
  local_f8.ArrayMax = 0xc;
  local_160.Container = &local_f8;
  local_f8.AllocatorInstance.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  local_f8.ArrayNum = 0;
  puVar5 = Influences;
  uVar11 = uVar9;
  uVar10 = uVar9;
  do {
    uVar7 = (uint)uVar11;
    uVar1 = *puVar5;
    uVar13 = uVar7;
    if (uVar1 == 0) break;
    uVar12 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar12;
    puVar5 = puVar5 + 1;
    uVar13 = uVar7 + 1;
    if (uVar1 < 0x3333) {
      uVar13 = uVar7;
    }
    uVar11 = (ulonglong)uVar13;
  } while ((int)uVar12 < 0xc);
  UE::AnimationCore::FBoneWeights::
  TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
  ::SetNum(&local_f8,uVar13);
  uVar11 = uVar9;
  uVar10 = uVar9;
  uVar14 = uVar9;
  uVar16 = uVar9;
  do {
    iVar8 = (int)uVar11;
    local_194.RawWeight = *(ushort *)((longlong)Influences + uVar10);
    if (local_194.RawWeight == 0) break;
    local_194.BoneIndex = *(ushort *)((longlong)Bones + uVar10);
    uVar15 = uVar16;
    if (0x3332 < local_194.RawWeight) {
      uVar11 = (ulonglong)(iVar8 + 1);
      uVar15 = uVar16 + 1;
      FVar6 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_f8;
      if (local_f8.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FVar6 = local_f8.AllocatorInstance.SecondaryData;
      }
      *(FBoneWeight *)((longlong)FVar6 + uVar16 * 4) = local_194;
    }
    iVar8 = (int)uVar11;
    uVar13 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar13;
    uVar10 = uVar10 + 2;
    uVar16 = uVar15;
  } while ((int)uVar13 < 0xc);
  local_168 = UE::AnimationCore::FBoneWeight::DescSortByWeightPredicate;
  FVar6 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_f8;
  if (local_f8.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FVar6 = local_f8.AllocatorInstance.SecondaryData;
  }
  AlgoImpl::
  IntroSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_>
            ((FBoneWeight *)FVar6,local_f8.ArrayNum,local_198,
             (TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>
              )&local_168);
  if (0xc < iVar8) {
    UE::AnimationCore::FBoneWeights::
    TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
    ::SetNum(&local_f8,0xc);
  }
  UE::AnimationCore::
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  ::NormalizeWeights(&local_160,Always);
  bVar3 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"FBoneWeights::Create[FSoftSkinVertex, Threshold]"
                     ,local_f8.ArrayNum,3);
  FVar6 = local_f8.AllocatorInstance.SecondaryData;
  if (bVar3) {
    if ((local_f8.ArrayNum < 3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FVar6 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_f8;
    if (local_f8.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FVar6 = local_f8.AllocatorInstance.SecondaryData;
    }
    bVar3 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,
                       L"FBoneWeights::Create[FSoftSkinVertex, Threshold]",
                       (uint)((FBoneWeight *)((longlong)FVar6 + 8))->BoneIndex,2);
    FVar6 = local_f8.AllocatorInstance.SecondaryData;
    if (bVar3) {
      if (local_f8.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FMemory::Free((void *)local_f8.AllocatorInstance.SecondaryData);
      }
      local_150.Container = &local_138;
      local_138.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      local_138.ArrayNum = 0;
      local_138.ArrayMax = 0xc;
      puVar5 = Influences;
      uVar11 = uVar9;
      uVar10 = uVar9;
      do {
        uVar7 = (uint)uVar11;
        uVar1 = *puVar5;
        uVar13 = uVar7;
        if (uVar1 == 0) break;
        uVar12 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar12;
        puVar5 = puVar5 + 1;
        uVar13 = uVar7 + 1;
        if (uVar1 == 0) {
          uVar13 = uVar7;
        }
        uVar11 = (ulonglong)uVar13;
      } while ((int)uVar12 < 0xc);
      UE::AnimationCore::FBoneWeights::
      TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
      ::SetNum(&local_138,uVar13);
      uVar11 = uVar9;
      uVar10 = uVar9;
      uVar14 = uVar9;
      do {
        iVar8 = (int)uVar9;
        local_190.RawWeight = *(ushort *)((longlong)Influences + uVar11);
        if (local_190.RawWeight == 0) break;
        local_190.BoneIndex = *(ushort *)((longlong)Bones + uVar11);
        uVar16 = uVar14;
        if (local_190.RawWeight != 0) {
          uVar9 = (ulonglong)(iVar8 + 1);
          uVar16 = uVar14 + 1;
          FVar6 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_138;
          if (local_138.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar6 = local_138.AllocatorInstance.SecondaryData;
          }
          *(FBoneWeight *)((longlong)FVar6 + uVar14 * 4) = local_190;
        }
        iVar8 = (int)uVar9;
        uVar13 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar13;
        uVar11 = uVar11 + 2;
        uVar14 = uVar16;
      } while ((int)uVar13 < 0xc);
      local_158 = UE::AnimationCore::FBoneWeight::DescSortByWeightPredicate;
      FVar6 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_138;
      if (local_138.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FVar6 = local_138.AllocatorInstance.SecondaryData;
      }
      AlgoImpl::
      IntroSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_>
                ((FBoneWeight *)FVar6,local_138.ArrayNum,local_198,
                 (TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>
                  )&local_158);
      if (2 < iVar8) {
        UE::AnimationCore::FBoneWeights::
        TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
        ::SetNum(&local_138,2);
      }
      UE::AnimationCore::
      TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
      ::NormalizeWeights(&local_150,Always);
      bVar3 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,
                         L"FBoneWeights::Create[FSoftSkinVertex, MaxWeights]",local_138.ArrayNum,2);
      FVar6 = local_138.AllocatorInstance.SecondaryData;
      if (bVar3) {
        if ((local_138.ArrayNum < 2) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        FVar6 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_138;
        if (local_138.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar6 = local_138.AllocatorInstance.SecondaryData;
        }
        bVar3 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,
                           L"FBoneWeights::Create[FSoftSkinVertex, MaxWeights]",
                           (uint)((FBoneWeight *)((longlong)FVar6 + 4))->BoneIndex,3);
        FVar6 = local_138.AllocatorInstance.SecondaryData;
        if (bVar3) {
          if (local_138.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FMemory::Free((void *)local_138.AllocatorInstance.SecondaryData);
          }
          local_148.Container = &local_78;
          local_188.NormalizeType = Always;
          local_188.MaxWeightCount = 0xc;
          local_188.WeightThreshold = 0x3333;
          local_188.DefaultBoneIndex = 0;
          local_188.bHasDefaultBoneIndex = false;
          local_188.bBlendZeroInfluence = true;
          local_78.AllocatorInstance.SecondaryData =
               (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
          local_78.ArrayNum = 0;
          local_78.ArrayMax = 0xc;
          UE::AnimationCore::
          TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
          ::
          SetBoneWeights<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                    (&local_148,Bones,Influences,4,&local_188);
          bVar3 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,L"FBoneWeights::Create[Arrays, Threshold]",
                             local_78.ArrayNum,3);
          FVar6 = local_78.AllocatorInstance.SecondaryData;
          if (bVar3) {
            if ((local_78.ArrayNum < 3) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            FVar6 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
            if (local_78.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FVar6 = local_78.AllocatorInstance.SecondaryData;
            }
            bVar3 = FAutomationTestBase::TestEqual
                              ((FAutomationTestBase *)this,
                               L"FBoneWeights::Create[Arrays, Threshold]",
                               (uint)((FBoneWeight *)((longlong)FVar6 + 8))->BoneIndex,2);
            FVar6 = local_78.AllocatorInstance.SecondaryData;
            if (bVar3) {
              if (local_78.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
              }
              local_140.Container = &local_b8;
              local_178.NormalizeType = Always;
              local_178.WeightThreshold = 1;
              local_178.DefaultBoneIndex = 0;
              local_178.bHasDefaultBoneIndex = false;
              local_178.bBlendZeroInfluence = true;
              local_178.MaxWeightCount = 2;
              local_b8.AllocatorInstance.SecondaryData =
                   (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
              local_b8.ArrayNum = 0;
              local_b8.ArrayMax = 0xc;
              UE::AnimationCore::
              TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
              ::
              SetBoneWeights<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                        (&local_140,Bones,Influences,4,&local_178);
              bVar3 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,
                                 L"FBoneWeights::Create[Arrays, MaxWeights]",local_b8.ArrayNum,2);
              FVar6 = local_b8.AllocatorInstance.SecondaryData;
              if (bVar3) {
                if ((local_b8.ArrayNum < 2) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  uVar4 = (*pcVar2)();
                  return (bool)uVar4;
                }
                FVar6 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_b8;
                if (local_b8.AllocatorInstance.SecondaryData !=
                    (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                  FVar6 = local_b8.AllocatorInstance.SecondaryData;
                }
                bVar3 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,
                                   L"FBoneWeights::Create[Arrays, MaxWeights]",
                                   (uint)((FBoneWeight *)((longlong)FVar6 + 4))->BoneIndex,3);
                FVar6 = local_b8.AllocatorInstance.SecondaryData;
                if (bVar3) {
                  if (local_b8.AllocatorInstance.SecondaryData !=
                      (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                    FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
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
  if (FVar6 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  return false;
}

// GetBeautifiedTestName @ 142376350

FString * __thiscall
FBoneWeightsTestCreate::GetBeautifiedTestName
          (FBoneWeightsTestCreate *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.AnimationCore.BoneWeights.Create");
  return __return_storage_ptr__;
}

