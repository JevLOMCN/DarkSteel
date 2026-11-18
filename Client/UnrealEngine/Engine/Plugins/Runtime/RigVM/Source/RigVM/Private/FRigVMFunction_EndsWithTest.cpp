// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 9

// GetTestFlags @ 14a1541a0

EAutomationTestFlags __thiscall
FRigVMFunction_EndsWithTest::GetTestFlags(FRigVMFunction_EndsWithTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a1541b0

bool __thiscall FRigVMFunction_EndsWithTest::IsStressTest(FRigVMFunction_EndsWithTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a1541f0

uint __thiscall FRigVMFunction_EndsWithTest::GetRequiredDeviceNum(FRigVMFunction_EndsWithTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a154240

FString * __thiscall
FRigVMFunction_EndsWithTest::GetTestSourceFileName
          (FRigVMFunction_EndsWithTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMFunction_Name.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a1542f0

int __thiscall FRigVMFunction_EndsWithTest::GetTestSourceFileLine(FRigVMFunction_EndsWithTest *this)

{
  return 0xac;
}

// GetTests @ 14a1543b0

/* WARNING: Removing unreachable block (ram,0x00014a15449d) */
/* WARNING: Removing unreachable block (ram,0x00014a154568) */

void __thiscall
FRigVMFunction_EndsWithTest::GetTests
          (FRigVMFunction_EndsWithTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"RigVM.RigVMFunctions.FRigVMFunction_EndsWith");
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

// RunTest @ 14a1546d0

bool __thiscall
FRigVMFunction_EndsWithTest::RunTest(FRigVMFunction_EndsWithTest *this,FString *param_1)

{
  undefined1 uVar1;
  
  (**(code **)(this->_padding_ + 0x100))();
  (this->Unit).Name.ComparisonIndex = 0;
  (this->Unit).Name.Number = 0;
  (this->Unit).Ending.ComparisonIndex = 0;
  (this->Unit).Ending.Number = 0;
  (this->Unit).Result = false;
                    /* WARNING: Could not recover jumptable at 0x00014a154712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar1;
}

// RunRigVMStructTest @ 14a154740

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FRigVMFunction_EndsWithTest::RunRigVMStructTest(FRigVMFunction_EndsWithTest *this,FString *param_1)

{
  FRigVMExecuteContext *pFVar1;
  code *pcVar2;
  FName local_res8 [2];
  FName local_res18;
  FName local_res20;
  FString local_38;
  
  ::FName::FName(&local_res18,L"Control");
  ::FName::FName(&local_res20,L"Rig");
  ::FName::FName(local_res8,L"ControlRig");
  pFVar1 = (FRigVMExecuteContext *)this->_padding_;
  (this->Unit).Name = local_res8[0];
  (this->Unit).Ending = local_res18;
  FRigVMFunction_EndsWith::StaticExecute
            (pFVar1,&(this->Unit).Name,&(this->Unit).Ending,&(this->Unit).Result);
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_38,L"unexpected name endswith result");
  (*pcVar2)(this,(this->Unit).Result == false,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar1 = (FRigVMExecuteContext *)this->_padding_;
  (this->Unit).Name = local_res8[0];
  (this->Unit).Ending = local_res20;
  FRigVMFunction_EndsWith::StaticExecute
            (pFVar1,&(this->Unit).Name,&(this->Unit).Ending,&(this->Unit).Result);
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_38,L"unexpected name endswith result");
  (*pcVar2)(this,(this->Unit).Result == true,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a154910

FString * __thiscall
FRigVMFunction_EndsWithTest::GetBeautifiedTestName
          (FRigVMFunction_EndsWithTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"RigVM.RigVMFunctions.FRigVMFunction_EndsWith");
  return __return_storage_ptr__;
}

