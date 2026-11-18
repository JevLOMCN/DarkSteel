// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 9

// GetTestFlags @ 14a16eb30

EAutomationTestFlags __thiscall
FRigVMFunction_GetDeltaTimeTest::GetTestFlags(FRigVMFunction_GetDeltaTimeTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a16eba0

bool __thiscall FRigVMFunction_GetDeltaTimeTest::IsStressTest(FRigVMFunction_GetDeltaTimeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a16ebf0

uint __thiscall
FRigVMFunction_GetDeltaTimeTest::GetRequiredDeviceNum(FRigVMFunction_GetDeltaTimeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a16ec10

FString * __thiscall
FRigVMFunction_GetDeltaTimeTest::GetTestSourceFileName
          (FRigVMFunction_GetDeltaTimeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\Animation\\RigVMFunction_GetDeltaTime.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a16ec40

int __thiscall
FRigVMFunction_GetDeltaTimeTest::GetTestSourceFileLine(FRigVMFunction_GetDeltaTimeTest *this)

{
  return 0xf;
}

// GetTests @ 14a16ece0

/* WARNING: Removing unreachable block (ram,0x00014a16edcd) */
/* WARNING: Removing unreachable block (ram,0x00014a16ee98) */

void __thiscall
FRigVMFunction_GetDeltaTimeTest::GetTests
          (FRigVMFunction_GetDeltaTimeTest *this,
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
  
  ::FString::FString(&local_18,L"RigVM.RigVMFunctions.FRigVMFunction_GetDeltaTime");
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

// RunTest @ 14a16eef0

bool __thiscall
FRigVMFunction_GetDeltaTimeTest::RunTest(FRigVMFunction_GetDeltaTimeTest *this,FString *param_1)

{
  undefined1 uVar1;
  
  (**(code **)(this->_padding_ + 0x100))();
  (this->Unit).Result = 0.0;
                    /* WARNING: Could not recover jumptable at 0x00014a16ef26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar1;
}

// RunRigVMStructTest @ 14a16ef80

bool __thiscall
FRigVMFunction_GetDeltaTimeTest::RunRigVMStructTest
          (FRigVMFunction_GetDeltaTimeTest *this,FString *param_1)

{
  code *pcVar1;
  FString local_18;
  
  *(undefined8 *)(this->_padding_ + 0x20) = 0x3fc999999999999a;
  (this->Unit).Result = (float)*(double *)(this->_padding_ + 0x20);
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_18,L"unexpected delta time");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_3e4ccccd) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a16f0d0

FString * __thiscall
FRigVMFunction_GetDeltaTimeTest::GetBeautifiedTestName
          (FRigVMFunction_GetDeltaTimeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"RigVM.RigVMFunctions.FRigVMFunction_GetDeltaTime");
  return __return_storage_ptr__;
}

