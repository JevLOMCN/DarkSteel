// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 9

// GetTestFlags @ 14a14a8c0

EAutomationTestFlags __thiscall
FRigVMFunction_NameConcatTest::GetTestFlags(FRigVMFunction_NameConcatTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a14a930

bool __thiscall FRigVMFunction_NameConcatTest::IsStressTest(FRigVMFunction_NameConcatTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a14aae0

uint __thiscall
FRigVMFunction_NameConcatTest::GetRequiredDeviceNum(FRigVMFunction_NameConcatTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a14aaf0

FString * __thiscall
FRigVMFunction_NameConcatTest::GetTestSourceFileName
          (FRigVMFunction_NameConcatTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMFunction_Name.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a14ad30

int __thiscall
FRigVMFunction_NameConcatTest::GetTestSourceFileLine(FRigVMFunction_NameConcatTest *this)

{
  return 0x14;
}

// GetTests @ 14a14ade0

/* WARNING: Removing unreachable block (ram,0x00014a14aecd) */
/* WARNING: Removing unreachable block (ram,0x00014a14af98) */

void __thiscall
FRigVMFunction_NameConcatTest::GetTests
          (FRigVMFunction_NameConcatTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"RigVM.RigVMFunctions.FRigVMFunction_NameConcat");
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

// RunTest @ 14a14afe0

bool __thiscall
FRigVMFunction_NameConcatTest::RunTest(FRigVMFunction_NameConcatTest *this,FString *param_1)

{
  undefined1 uVar1;
  
  (**(code **)(this->_padding_ + 0x100))();
  (this->Unit).A.ComparisonIndex = 0;
  (this->Unit).A.Number = 0;
  (this->Unit).B.ComparisonIndex = 0;
  (this->Unit).B.Number = 0;
  (this->Unit).Result.ComparisonIndex = 0;
  (this->Unit).Result.Number = 0;
                    /* WARNING: Could not recover jumptable at 0x00014a14b023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar1;
}

// RunRigVMStructTest @ 14a14b050

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
FRigVMFunction_NameConcatTest::RunRigVMStructTest
          (FRigVMFunction_NameConcatTest *this,FString *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  FName *pFVar3;
  FRigVMExecuteContext *pFVar4;
  code *pcVar5;
  FName local_res8;
  FName local_res18;
  undefined8 local_res20;
  FName local_48;
  FString local_40;
  
  ::FName::FName(&local_res8,L"Control");
  ::FName::FName(&local_res18,L"Rig");
  ::FName::FName(&local_48,L"ControlRig");
  pFVar1 = &(this->Unit).A;
  pFVar4 = (FRigVMExecuteContext *)this->_padding_;
  pFVar2 = &(this->Unit).B;
  *pFVar1 = local_res8;
  pFVar3 = &(this->Unit).Result;
  *pFVar2 = local_res18;
  FRigVMFunction_NameConcat::StaticExecute(pFVar4,pFVar1,pFVar2,pFVar3);
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_40,L"unexpected name concat result");
  (*pcVar5)(this,*pFVar3 == local_48,&local_40,0);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  pFVar4 = (FRigVMExecuteContext *)this->_padding_;
  *pFVar1 = local_res8;
  local_res20 = 0;
  pFVar2->ComparisonIndex = 0;
  pFVar2->Number = 0;
  FRigVMFunction_NameConcat::StaticExecute(pFVar4,pFVar1,pFVar2,pFVar3);
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_40,L"unexpected name concat result");
  (*pcVar5)(this,*pFVar3 == local_res8,&local_40,0);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  pFVar4 = (FRigVMExecuteContext *)this->_padding_;
  pFVar1->ComparisonIndex = 0;
  pFVar1->Number = 0;
  *pFVar2 = local_res18;
  local_res20 = 0;
  FRigVMFunction_NameConcat::StaticExecute(pFVar4,pFVar1,pFVar2,pFVar3);
  pcVar5 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_40,L"unexpected name concat result");
  (*pcVar5)(this,*pFVar3 == local_res18,&local_40,0);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a14b210

FString * __thiscall
FRigVMFunction_NameConcatTest::GetBeautifiedTestName
          (FRigVMFunction_NameConcatTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"RigVM.RigVMFunctions.FRigVMFunction_NameConcat");
  return __return_storage_ptr__;
}

