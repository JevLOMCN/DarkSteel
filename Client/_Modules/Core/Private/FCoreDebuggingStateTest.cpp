// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// GetTestFlags @ 141901b80

EAutomationTestFlags __thiscall FCoreDebuggingStateTest::GetTestFlags(FCoreDebuggingStateTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 141901b90

bool __thiscall FCoreDebuggingStateTest::IsStressTest(FCoreDebuggingStateTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141901ba0

uint __thiscall FCoreDebuggingStateTest::GetRequiredDeviceNum(FCoreDebuggingStateTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141901bb0

FString * __thiscall
FCoreDebuggingStateTest::GetTestSourceFileName
          (FCoreDebuggingStateTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Modules\\Tests\\VisualizerDebuggingStateTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141901be0

int __thiscall FCoreDebuggingStateTest::GetTestSourceFileLine(FCoreDebuggingStateTest *this)

{
  return 0xb;
}

// GetTests @ 141901bf0

/* WARNING: Removing unreachable block (ram,0x000141901cdd) */
/* WARNING: Removing unreachable block (ram,0x000141901da8) */

void __thiscall
FCoreDebuggingStateTest::GetTests
          (FCoreDebuggingStateTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.DebuggingState");
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

// RunTest @ 141901dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FCoreDebuggingStateTest::RunTest(FCoreDebuggingStateTest *this,FString *param_1)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  char *pcVar3;
  void **ppvVar4;
  bool bVar5;
  EVisualizerDebuggingStateResult EVar6;
  int iVar7;
  ForAnyElementType FVar8;
  undefined4 *puVar9;
  longlong lVar10;
  FVisualizerDebuggingStateImpl *pFVar11;
  undefined1 auStack_158 [32];
  FString local_138;
  FString local_128;
  FIdentityFunctor local_118;
  FString local_110;
  FVisualizerDebuggingState local_100;
  FGuid local_e8;
  FGuid local_d8;
  char *local_c8;
  undefined4 *local_c0;
  FGuid local_b8;
  char *local_a8;
  undefined4 *local_a0;
  FGuid local_98;
  char *local_88;
  undefined4 *local_80;
  FGuid local_78;
  char *local_68;
  undefined4 *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_100.GuidString = (char *)0x0;
  local_100.Ptrs = (void **)0x0;
  local_100.PimplData = ::operator_new(0x30);
  if (local_100.PimplData == (FVisualizerDebuggingStateImpl *)0x0) {
    local_100.PimplData = (FVisualizerDebuggingStateImpl *)0x0;
  }
  else {
    ((local_100.PimplData)->UniqueIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ((local_100.PimplData)->UniqueIds).ArrayNum = 0;
    ((local_100.PimplData)->UniqueIds).ArrayMax = 0;
    ((local_100.PimplData)->DebugPtrs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ((local_100.PimplData)->DebugPtrs).ArrayNum = 0;
    ((local_100.PimplData)->DebugPtrs).ArrayMax = 0;
    ((local_100.PimplData)->OrderedGuidString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    ((local_100.PimplData)->OrderedGuidString).Data.ArrayNum = 0;
    ((local_100.PimplData)->OrderedGuidString).Data.ArrayMax = 0;
  }
  local_58 = 1;
  local_a8 = "06a5fe3be35d4d2987abfeaea8c54035";
  local_a0 = &local_54;
  local_54 = 10;
  puVar9 = &local_54;
  local_50 = 100;
  local_88 = "e87d5c5d7f9948d4a051de51ecfb9b25";
  lVar10 = 2;
  local_80 = &local_50;
  local_4c = 1000;
  local_68 = "1233cca4d6ee400cad1ca3f8802ac523";
  local_60 = &local_4c;
  local_48 = 2;
  local_44 = 0x14;
  local_40 = 200;
  local_3c = 2000;
  local_d8.A = 0;
  local_d8.B = 0;
  local_d8.C = 0;
  local_d8.D = 0;
  local_c8 = "93a891b0f3404d9c9b1f51981966e1e0";
  local_b8.A = 0;
  local_b8.B = 0;
  local_b8.C = 0;
  local_b8.D = 0;
  local_98.A = 0;
  local_98.B = 0;
  local_98.C = 0;
  local_98.D = 0;
  local_78.A = 0;
  local_78.B = 0;
  local_78.C = 0;
  local_78.D = 0;
  do {
    local_c0 = puVar9 + -1;
    ::FString::FString(&local_110,local_c8);
    bVar5 = FGuid::ParseExact(&local_110,DigitsLower,&local_d8);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      EVar6 = UE::Core::FVisualizerDebuggingState::AssignImpl(&local_100,&local_d8,local_c0);
      if (EVar6 != Success) {
        pcVar1 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_138,L"There was an error registering %hs was not found!");
        (*pcVar1)(this,&local_138,0);
        FVar8.Data = local_138.Data.AllocatorInstance.Data;
        goto LAB_141901fbf;
      }
    }
    else {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_128,L"Error parsing GUID string %hs!");
      (*pcVar1)(this,&local_128,0);
      FVar8.Data = local_128.Data.AllocatorInstance.Data;
LAB_141901fbf:
      if (FVar8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar8.Data);
      }
    }
    local_a0 = puVar9;
    ::FString::FString(&local_110,local_a8);
    bVar5 = FGuid::ParseExact(&local_110,DigitsLower,&local_b8);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      EVar6 = UE::Core::FVisualizerDebuggingState::AssignImpl(&local_100,&local_b8,local_a0);
      if (EVar6 != Success) {
        pcVar1 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_138,L"There was an error registering %hs was not found!");
        (*pcVar1)(this,&local_138,0);
        FVar8.Data = local_138.Data.AllocatorInstance.Data;
        goto LAB_141902078;
      }
    }
    else {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_128,L"Error parsing GUID string %hs!");
      (*pcVar1)(this,&local_128,0);
      FVar8.Data = local_128.Data.AllocatorInstance.Data;
LAB_141902078:
      if (FVar8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar8.Data);
      }
    }
    local_80 = puVar9 + 1;
    ::FString::FString(&local_110,local_88);
    bVar5 = FGuid::ParseExact(&local_110,DigitsLower,&local_98);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      EVar6 = UE::Core::FVisualizerDebuggingState::AssignImpl(&local_100,&local_98,local_80);
      if (EVar6 != Success) {
        pcVar1 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_138,L"There was an error registering %hs was not found!");
        (*pcVar1)(this,&local_138,0);
        FVar8.Data = local_138.Data.AllocatorInstance.Data;
        goto LAB_141902135;
      }
    }
    else {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_128,L"Error parsing GUID string %hs!");
      (*pcVar1)(this,&local_128,0);
      FVar8.Data = local_128.Data.AllocatorInstance.Data;
LAB_141902135:
      if (FVar8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar8.Data);
      }
    }
    local_60 = puVar9 + 2;
    ::FString::FString(&local_110,local_68);
    bVar5 = FGuid::ParseExact(&local_110,DigitsLower,&local_78);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      EVar6 = UE::Core::FVisualizerDebuggingState::AssignImpl(&local_100,&local_78,local_60);
      if (EVar6 != Success) {
        pcVar1 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_138,L"There was an error registering %hs was not found!");
        (*pcVar1)(this,&local_138,0);
        FVar8.Data = local_138.Data.AllocatorInstance.Data;
        goto LAB_1419021f2;
      }
    }
    else {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_128,L"Error parsing GUID string %hs!");
      (*pcVar1)(this,&local_128,0);
      FVar8.Data = local_128.Data.AllocatorInstance.Data;
LAB_1419021f2:
      if (FVar8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar8.Data);
      }
    }
    pFVar11 = local_100.PimplData;
    ppvVar4 = local_100.Ptrs;
    pcVar3 = local_100.GuidString;
    puVar9 = puVar9 + 4;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  if (((local_100.GuidString == (char *)0x0) ||
      (iVar7 = AlgoImpl::IndexOfBy<TArray<FGuid,TSizedDefaultAllocator<32>_>,FGuid,FIdentityFunctor>
                         (&(local_100.PimplData)->UniqueIds,&local_d8,local_118), iVar7 == -1)) ||
     (puVar9 = ppvVar4[iVar7], puVar9 == (undefined4 *)0x0)) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_128,L"Debugging pointer for moniker %hs was not found!");
    (*pcVar1)(this,&local_128,0);
    FVar8.Data = local_128.Data.AllocatorInstance.Data;
LAB_1419022b6:
    if (FVar8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar8.Data);
    }
  }
  else if ((puVar9 != local_c0) || (puVar9 != &local_48)) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_138,L"Debugging pointer for moniker %hs was incorrect!");
    (*pcVar1)(this,&local_138,0);
    FVar8.Data = local_138.Data.AllocatorInstance.Data;
    goto LAB_1419022b6;
  }
  if (((pcVar3 == (char *)0x0) ||
      (iVar7 = AlgoImpl::IndexOfBy<TArray<FGuid,TSizedDefaultAllocator<32>_>,FGuid,FIdentityFunctor>
                         (&pFVar11->UniqueIds,&local_b8,local_118), iVar7 == -1)) ||
     (puVar9 = ppvVar4[iVar7], puVar9 == (undefined4 *)0x0)) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_128,L"Debugging pointer for moniker %hs was not found!");
    (*pcVar1)(this,&local_128,0);
    FVar8.Data = local_128.Data.AllocatorInstance.Data;
LAB_141902353:
    if (FVar8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar8.Data);
    }
  }
  else if ((puVar9 != local_a0) || (puVar9 != &local_44)) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_138,L"Debugging pointer for moniker %hs was incorrect!");
    (*pcVar1)(this,&local_138,0);
    FVar8.Data = local_138.Data.AllocatorInstance.Data;
    goto LAB_141902353;
  }
  if (((pcVar3 == (char *)0x0) ||
      (iVar7 = AlgoImpl::IndexOfBy<TArray<FGuid,TSizedDefaultAllocator<32>_>,FGuid,FIdentityFunctor>
                         (&pFVar11->UniqueIds,&local_98,local_118), iVar7 == -1)) ||
     (puVar9 = ppvVar4[iVar7], puVar9 == (undefined4 *)0x0)) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_128,L"Debugging pointer for moniker %hs was not found!");
    (*pcVar1)(this,&local_128,0);
    FVar8.Data = local_128.Data.AllocatorInstance.Data;
LAB_1419023f0:
    if (FVar8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar8.Data);
    }
  }
  else if ((puVar9 != local_80) || (puVar9 != &local_40)) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_138,L"Debugging pointer for moniker %hs was incorrect!");
    (*pcVar1)(this,&local_138,0);
    FVar8.Data = local_138.Data.AllocatorInstance.Data;
    goto LAB_1419023f0;
  }
  if (((pcVar3 == (char *)0x0) ||
      (iVar7 = AlgoImpl::IndexOfBy<TArray<FGuid,TSizedDefaultAllocator<32>_>,FGuid,FIdentityFunctor>
                         (&pFVar11->UniqueIds,&local_78,local_118), iVar7 == -1)) ||
     (puVar9 = ppvVar4[iVar7], puVar9 == (undefined4 *)0x0)) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_128,L"Debugging pointer for moniker %hs was not found!");
    (*pcVar1)(this,&local_128,0);
LAB_14190248d:
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  else if ((puVar9 != local_60) || (puVar9 != &local_3c)) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_138,L"Debugging pointer for moniker %hs was incorrect!");
    (*pcVar1)(this,&local_138,0);
    local_128.Data.AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
    goto LAB_14190248d;
  }
  local_e8.A = 0;
  local_e8.B = 0;
  local_e8.C = 0;
  local_e8.D = 0;
  ::FString::FString(&local_138,"9b1f51981966e1e006a5fe3be35d4d29");
  bVar5 = FGuid::ParseExact(&local_138,DigitsLower,&local_e8);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    EVar6 = UE::Core::FVisualizerDebuggingState::AssignImpl(&local_100,&local_e8,(void *)0x0);
    if (EVar6 == StringCollision) {
      bVar5 = true;
      pFVar11 = local_100.PimplData;
      goto LAB_141902584;
    }
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl
              (&local_138,
               L"Expected FVisualizerDebuggingState::Assign(\"%hs\") to result in a string collision but it did not"
              );
    (*pcVar1)(this,&local_138,0);
    pFVar11 = local_100.PimplData;
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
      pFVar11 = local_100.PimplData;
    }
  }
  else {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_138,L"Error parsing GUID string %hs!");
    (*pcVar1)(this,&local_138,0);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
      bVar5 = false;
      goto LAB_141902584;
    }
  }
  bVar5 = false;
LAB_141902584:
  if (pFVar11 != (FVisualizerDebuggingStateImpl *)0x0) {
    pFVar2 = (pFVar11->OrderedGuidString).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar11->DebugPtrs).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar11->UniqueIds).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar11,0x30);
  }
  return bVar5;
}

// GetBeautifiedTestName @ 141902600

FString * __thiscall
FCoreDebuggingStateTest::GetBeautifiedTestName
          (FCoreDebuggingStateTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.DebuggingState");
  return __return_storage_ptr__;
}

