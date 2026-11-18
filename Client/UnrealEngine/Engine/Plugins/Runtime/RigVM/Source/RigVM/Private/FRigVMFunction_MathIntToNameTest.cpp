// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 9

// GetTestFlags @ 14a142740

EAutomationTestFlags __thiscall
FRigVMFunction_MathIntToNameTest::GetTestFlags(FRigVMFunction_MathIntToNameTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a142770

bool __thiscall
FRigVMFunction_MathIntToNameTest::IsStressTest(FRigVMFunction_MathIntToNameTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a142780

uint __thiscall
FRigVMFunction_MathIntToNameTest::GetRequiredDeviceNum(FRigVMFunction_MathIntToNameTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a1427a0

FString * __thiscall
FRigVMFunction_MathIntToNameTest::GetTestSourceFileName
          (FRigVMFunction_MathIntToNameTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\Math\\RigVMFunction_MathInt.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a1427d0

int __thiscall
FRigVMFunction_MathIntToNameTest::GetTestSourceFileLine(FRigVMFunction_MathIntToNameTest *this)

{
  return 0xdc;
}

// GetTests @ 14a1428b0

/* WARNING: Removing unreachable block (ram,0x00014a14299d) */
/* WARNING: Removing unreachable block (ram,0x00014a142a68) */

void __thiscall
FRigVMFunction_MathIntToNameTest::GetTests
          (FRigVMFunction_MathIntToNameTest *this,
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
  
  ::FString::FString(&local_18,L"RigVM.RigVMFunctions.FRigVMFunction_MathIntToName");
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

// RunTest @ 14a142a90

bool __thiscall
FRigVMFunction_MathIntToNameTest::RunTest(FRigVMFunction_MathIntToNameTest *this,FString *param_1)

{
  undefined1 uVar1;
  
  (**(code **)(*(longlong *)this + 0x100))();
  (this->Unit).Number = 0;
  (this->Unit).PaddedSize = 0;
  (this->Unit).Result.ComparisonIndex = 0;
  (this->Unit).Result.Number = 0;
                    /* WARNING: Could not recover jumptable at 0x00014a142ad1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar1;
}

// RunRigVMStructTest @ 14a142b80

bool __thiscall
FRigVMFunction_MathIntToNameTest::RunRigVMStructTest
          (FRigVMFunction_MathIntToNameTest *this,FString *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  (this->Unit).Number = 0xd;
  (this->Unit).PaddedSize = 5;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_28,0xd);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_38.Data.ArrayMax = local_28.Data.ArrayMax;
  plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_38.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  local_38.Data.ArrayNum = local_28.Data.ArrayNum;
  while( true ) {
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    if (4 < iVar4) break;
    if (*(int *)(*plVar1 + 0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::Zero.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        ::Zero.Data.ArrayNum = 0;
        ::Zero.Data.ArrayMax = 0;
        ::FString::AppendInt(&::Zero,0);
        atexit(`FRigVMFunction_MathIntToString::StaticExecute'::__l7::
               _dynamic_atexit_destructor_for__Zero__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    ::FString::ConcatFF(&local_28,&::Zero,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    local_38.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_38.Data.ArrayMax = local_28.Data.ArrayMax;
    local_38.Data.ArrayNum = local_28.Data.ArrayNum;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  pFVar5 = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    pFVar5 = local_38.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)pFVar5);
  (this->Unit).Result = local_res8;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_28,L"unexpected result");
  bVar3 = ::FName::Equals((this->Unit).Result,L"00013");
  (*pcVar2)(this,bVar3,&local_28,0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a142d60

FString * __thiscall
FRigVMFunction_MathIntToNameTest::GetBeautifiedTestName
          (FRigVMFunction_MathIntToNameTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"RigVM.RigVMFunctions.FRigVMFunction_MathIntToName");
  return __return_storage_ptr__;
}

