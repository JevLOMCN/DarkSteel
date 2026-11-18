// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreOnline
// Functions: 8

// GetTestFlags @ 144610a40

EAutomationTestFlags __thiscall FForeignIdRepTest::GetTestFlags(FForeignIdRepTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 144610a50

bool __thiscall FForeignIdRepTest::IsStressTest(FForeignIdRepTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 144610a60

uint __thiscall FForeignIdRepTest::GetRequiredDeviceNum(FForeignIdRepTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 144610a70

FString * __thiscall
FForeignIdRepTest::GetTestSourceFileName(FForeignIdRepTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Private\\Tests\\CoreOnlineTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 144610aa0

int __thiscall FForeignIdRepTest::GetTestSourceFileLine(FForeignIdRepTest *this)

{
  return 9;
}

// GetTests @ 144610ab0

/* WARNING: Removing unreachable block (ram,0x000144610b9d) */
/* WARNING: Removing unreachable block (ram,0x000144610c68) */

void __thiscall
FForeignIdRepTest::GetTests
          (FForeignIdRepTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Online.ForeignIdRepTest");
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

// RunTest @ 144610c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FForeignIdRepTest::RunTest(FForeignIdRepTest *this,FString *param_1)

{
  longlong lVar1;
  int iVar2;
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *pIVar3;
  longlong *plVar4;
  code *pcVar5;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> TVar6;
  int iVar7;
  undefined4 extraout_var;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *pFVar8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar9;
  uint *puVar10;
  undefined1 *puVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  FScriptContainerElement *_Buf1;
  longlong lVar14;
  undefined1 auStackY_1a8 [32];
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> local_168 [2];
  ForAnyElementType local_160;
  int local_158;
  int local_154;
  undefined1 local_150 [8];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_148;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_138;
  undefined1 local_128 [72];
  int local_e0;
  TUniquePtr<UE::Online::FOnlineForeignAccountIdRegistry,TDefaultDelete<UE::Online::FOnlineForeignAccountIdRegistry>_>
  local_d8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  _Buf1 = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  local_138.AllocatorInstance.Data._0_4_ = 0x3020100;
  local_138.AllocatorInstance.Data._4_4_ = 0x7060504;
  local_160.Data = (FScriptContainerElement *)0x0;
  local_158 = 8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,8,0,&local_160,8,&local_154);
  lVar14 = 0;
  memcpy(local_160.Data,&local_138,8);
  UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryRegistry
            ((FOnlineIdRegistryRegistry *)local_128);
  if (local_128._8_4_ != local_128._52_4_) {
    puVar11 = local_128 + 0x38;
    if ((undefined1 *)local_128._64_8_ != (undefined1 *)0x0) {
      puVar11 = (undefined1 *)local_128._64_8_;
    }
    iVar2 = *(int *)(puVar11 + (ulonglong)(local_e0 - 1U & 9) * 4);
    while (iVar2 != -1) {
      lVar1 = local_128._0_8_ + (longlong)iVar2 * 0x28;
      lVar14 = local_128._0_8_;
      if (*(char *)(local_128._0_8_ + (longlong)iVar2 * 0x28) == '\t') {
        pFVar12 = (FScriptContainerElement *)(lVar1 + 8);
        if (lVar1 == 0) {
          pFVar12 = _Buf1;
        }
        if ((pFVar12 != (FScriptContainerElement *)0x0) &&
           (plVar4 = *(longlong **)(pFVar12 + 8), plVar4 != (longlong *)0x0)) {
          puVar10 = (uint *)(**(code **)(*plVar4 + 0x20))(plVar4,local_150,&local_160);
          goto LAB_144610d84;
        }
        break;
      }
      iVar2 = *(int *)(lVar1 + 0x20);
    }
  }
  TVar6 = UE::Online::FOnlineForeignAccountIdRegistry::FromReplicationData
                    (local_d8.Ptr,(EOnlineServices)local_150,
                     (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                     CONCAT71((int7)((ulonglong)lVar14 >> 8),9));
  puVar10 = (uint *)CONCAT44(extraout_var,TVar6.Value);
LAB_144610d84:
  local_168[0].Value = *puVar10;
  pFVar8 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,0>_>
           ::Find(local_128,(EOnlineServices)(local_168[0].Value >> 0x18));
  if ((pFVar8 == (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *)0x0) ||
     (pIVar3 = pFVar8->Registry,
     pIVar3 == (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *)0x0)) {
    pTVar9 = UE::Online::FOnlineForeignAccountIdRegistry::ToReplicationData
                       (local_d8.Ptr,&local_138,local_168);
    iVar7 = 0;
    if (&local_148 != pTVar9) {
      _Buf1 = (pTVar9->AllocatorInstance).Data;
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar7 = pTVar9->ArrayNum;
      pTVar9->ArrayNum = 0;
      pTVar9->ArrayMax = 0;
    }
    if ((void *)CONCAT44(local_138.AllocatorInstance.Data._4_4_,
                         local_138.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_138.AllocatorInstance.Data._4_4_,
                                     local_138.AllocatorInstance.Data._0_4_));
    }
  }
  else {
    pTVar9 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,&local_138,local_168);
    if (&local_148 != pTVar9) {
      _Buf1 = (pTVar9->AllocatorInstance).Data;
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar7 = pTVar9->ArrayNum;
      pTVar9->ArrayNum = 0;
      pTVar9->ArrayMax = 0;
    }
    if ((void *)CONCAT44(local_138.AllocatorInstance.Data._4_4_,
                         local_138.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_138.AllocatorInstance.Data._4_4_,
                                     local_138.AllocatorInstance.Data._0_4_));
    }
  }
  if ((iVar7 == local_158) &&
     ((iVar7 == 0 || (iVar7 = memcmp(_Buf1,local_160.Data,(longlong)iVar7), iVar7 == 0)))) {
    bVar13 = true;
  }
  else {
    pcVar5 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_138,L"%s: The two values are not equal.");
    (*pcVar5)(this,&local_138,0);
    if ((void *)CONCAT44(local_138.AllocatorInstance.Data._4_4_,
                         local_138.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_138.AllocatorInstance.Data._4_4_,
                                     local_138.AllocatorInstance.Data._0_4_));
    }
    bVar13 = false;
  }
  if (_Buf1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Buf1);
  }
  UE::Online::FOnlineIdRegistryRegistry::~FOnlineIdRegistryRegistry
            ((FOnlineIdRegistryRegistry *)local_128);
  if (local_160.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data);
  }
  return bVar13;
}

// GetBeautifiedTestName @ 144610f30

FString * __thiscall
FForeignIdRepTest::GetBeautifiedTestName(FForeignIdRepTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Online.ForeignIdRepTest");
  return __return_storage_ptr__;
}

