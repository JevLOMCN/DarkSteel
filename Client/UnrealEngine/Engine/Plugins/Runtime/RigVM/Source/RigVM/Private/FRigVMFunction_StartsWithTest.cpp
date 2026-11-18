// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 9

// GetTestFlags @ 14a155950

EAutomationTestFlags __thiscall
FRigVMFunction_StartsWithTest::GetTestFlags(FRigVMFunction_StartsWithTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a1559c0

bool __thiscall FRigVMFunction_StartsWithTest::IsStressTest(FRigVMFunction_StartsWithTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a1559d0

uint __thiscall
FRigVMFunction_StartsWithTest::GetRequiredDeviceNum(FRigVMFunction_StartsWithTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a155a80

FString * __thiscall
FRigVMFunction_StartsWithTest::GetTestSourceFileName
          (FRigVMFunction_StartsWithTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMFunction_Name.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a155ac0

int __thiscall
FRigVMFunction_StartsWithTest::GetTestSourceFileLine(FRigVMFunction_StartsWithTest *this)

{
  return 0xca;
}

// GetTests @ 14a155b70

/* WARNING: Removing unreachable block (ram,0x00014a155c5d) */
/* WARNING: Removing unreachable block (ram,0x00014a155d28) */

void __thiscall
FRigVMFunction_StartsWithTest::GetTests
          (FRigVMFunction_StartsWithTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"RigVM.RigVMFunctions.FRigVMFunction_StartsWith");
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

// RunTest @ 14a155e50

bool __thiscall
FRigVMFunction_StartsWithTest::RunTest(FRigVMFunction_StartsWithTest *this,FString *param_1)

{
  undefined1 uVar1;
  
  (**(code **)(this->_padding_ + 0x100))();
  (this->Unit).Name.ComparisonIndex = 0;
  (this->Unit).Name.Number = 0;
  (this->Unit).Start.ComparisonIndex = 0;
  (this->Unit).Start.Number = 0;
  (this->Unit).Result = false;
                    /* WARNING: Could not recover jumptable at 0x00014a155e92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar1;
}

// RunRigVMStructTest @ 14a155eb0

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
FRigVMFunction_StartsWithTest::RunRigVMStructTest
          (FRigVMFunction_StartsWithTest *this,FString *param_1)

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
  (this->Unit).Start = local_res18;
  FRigVMFunction_StartsWith::StaticExecute
            (pFVar1,&(this->Unit).Name,&(this->Unit).Start,&(this->Unit).Result);
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_38,L"unexpected name startswith result");
  (*pcVar2)(this,(this->Unit).Result == true,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar1 = (FRigVMExecuteContext *)this->_padding_;
  (this->Unit).Name = local_res8[0];
  (this->Unit).Start = local_res20;
  FRigVMFunction_StartsWith::StaticExecute
            (pFVar1,&(this->Unit).Name,&(this->Unit).Start,&(this->Unit).Result);
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_38,L"unexpected name startswith result");
  (*pcVar2)(this,(this->Unit).Result == false,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a156090

FString * __thiscall
FRigVMFunction_StartsWithTest::GetBeautifiedTestName
          (FRigVMFunction_StartsWithTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"RigVM.RigVMFunctions.FRigVMFunction_StartsWith");
  return __return_storage_ptr__;
}

