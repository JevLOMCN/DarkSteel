// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 9

// GetTestFlags @ 14a1514c0

EAutomationTestFlags __thiscall
FRigVMFunction_NameReplaceTest::GetTestFlags(FRigVMFunction_NameReplaceTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a151520

bool __thiscall FRigVMFunction_NameReplaceTest::IsStressTest(FRigVMFunction_NameReplaceTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a151740

uint __thiscall
FRigVMFunction_NameReplaceTest::GetRequiredDeviceNum(FRigVMFunction_NameReplaceTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a151750

FString * __thiscall
FRigVMFunction_NameReplaceTest::GetTestSourceFileName
          (FRigVMFunction_NameReplaceTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\RigVMFunction_Name.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a1517a0

int __thiscall
FRigVMFunction_NameReplaceTest::GetTestSourceFileLine(FRigVMFunction_NameReplaceTest *this)

{
  return 0x7e;
}

// GetTests @ 14a1518f0

/* WARNING: Removing unreachable block (ram,0x00014a1519dd) */
/* WARNING: Removing unreachable block (ram,0x00014a151aa8) */

void __thiscall
FRigVMFunction_NameReplaceTest::GetTests
          (FRigVMFunction_NameReplaceTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"RigVM.RigVMFunctions.FRigVMFunction_NameReplace");
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

// RunTest @ 14a151ba0

bool __thiscall
FRigVMFunction_NameReplaceTest::RunTest(FRigVMFunction_NameReplaceTest *this,FString *param_1)

{
  undefined1 uVar1;
  
  (**(code **)(*(longlong *)this + 0x100))();
  (this->Unit).Name.ComparisonIndex = 0;
  (this->Unit).Name.Number = 0;
  (this->Unit).Old.ComparisonIndex = 0;
  (this->Unit).Old.Number = 0;
  (this->Unit).New.ComparisonIndex = 0;
  (this->Unit).New.Number = 0;
  (this->Unit).Result.ComparisonIndex = 0;
  (this->Unit).Result.Number = 0;
                    /* WARNING: Could not recover jumptable at 0x00014a151bef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar1;
}

// RunRigVMStructTest @ 14a151c00

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
FRigVMFunction_NameReplaceTest::RunRigVMStructTest
          (FRigVMFunction_NameReplaceTest *this,FString *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  FRigVMExecuteContext *pFVar5;
  code *pcVar6;
  FName local_res8;
  FName local_res18;
  undefined8 local_res20;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FString local_48;
  
  ::FName::FName(&local_68,L"Control");
  ::FName::FName(&local_60,L"Rig");
  ::FName::FName(&local_res8,L"ControlRig");
  ::FName::FName(&local_res18,L"Foo");
  ::FName::FName(&local_58,L"FooRig");
  ::FName::FName(&local_50,L"ControlFoo");
  pFVar1 = &(this->Unit).Name;
  pFVar5 = *(FRigVMExecuteContext **)&this->field_0x370;
  pFVar2 = &(this->Unit).Old;
  *pFVar1 = local_res8;
  pFVar3 = &(this->Unit).New;
  pFVar4 = &(this->Unit).Result;
  *pFVar2 = local_68;
  *pFVar3 = local_res18;
  FRigVMFunction_NameReplace::StaticExecute(pFVar5,pFVar1,pFVar2,pFVar3,pFVar4);
  pcVar6 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_48,L"unexpected name replace result");
  (*pcVar6)(this,*pFVar4 == local_58,&local_48,0);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar5 = *(FRigVMExecuteContext **)&this->field_0x370;
  *pFVar1 = local_res8;
  *pFVar2 = local_60;
  *pFVar3 = local_res18;
  FRigVMFunction_NameReplace::StaticExecute(pFVar5,pFVar1,pFVar2,pFVar3,pFVar4);
  pcVar6 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_48,L"unexpected name replace result");
  (*pcVar6)(this,*pFVar4 == local_50,&local_48,0);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar5 = *(FRigVMExecuteContext **)&this->field_0x370;
  *pFVar1 = local_res8;
  local_res20 = 0;
  pFVar2->ComparisonIndex = 0;
  pFVar2->Number = 0;
  *pFVar3 = local_res18;
  FRigVMFunction_NameReplace::StaticExecute(pFVar5,pFVar1,pFVar2,pFVar3,pFVar4);
  pcVar6 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_48,L"unexpected name replace result");
  (*pcVar6)(this,*pFVar4 == local_res8,&local_48,0);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar5 = *(FRigVMExecuteContext **)&this->field_0x370;
  *pFVar1 = local_res8;
  *pFVar2 = local_68;
  pFVar3->ComparisonIndex = 0;
  pFVar3->Number = 0;
  local_res20 = 0;
  FRigVMFunction_NameReplace::StaticExecute(pFVar5,pFVar1,pFVar2,pFVar3,pFVar4);
  pcVar6 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(&local_48,L"unexpected name replace result");
  (*pcVar6)(this,*pFVar4 == local_60,&local_48,0);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a151e70

FString * __thiscall
FRigVMFunction_NameReplaceTest::GetBeautifiedTestName
          (FRigVMFunction_NameReplaceTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"RigVM.RigVMFunctions.FRigVMFunction_NameReplace");
  return __return_storage_ptr__;
}

