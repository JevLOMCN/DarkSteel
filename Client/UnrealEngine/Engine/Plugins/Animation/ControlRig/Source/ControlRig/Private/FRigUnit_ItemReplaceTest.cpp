// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// GetTestFlags @ 14a4d6c20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

EAutomationTestFlags __thiscall
FRigUnit_ItemReplaceTest::GetTestFlags(FRigUnit_ItemReplaceTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a4d6d20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigUnit_ItemReplaceTest::IsStressTest(FRigUnit_ItemReplaceTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a4d6d30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall FRigUnit_ItemReplaceTest::GetRequiredDeviceNum(FRigUnit_ItemReplaceTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a4d6d40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_ItemReplaceTest::GetTestSourceFileName
          (FRigUnit_ItemReplaceTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Execution\\RigUnit_Item.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a4d6d70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall FRigUnit_ItemReplaceTest::GetTestSourceFileLine(FRigUnit_ItemReplaceTest *this)

{
  return 0x3a;
}

// GetTests @ 14a4d6fe0

/* WARNING: Removing unreachable block (ram,0x00014a4d70cd) */
/* WARNING: Removing unreachable block (ram,0x00014a4d7198) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ItemReplaceTest::GetTests
          (FRigUnit_ItemReplaceTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"ControlRig.Units.FRigUnit_ItemReplace");
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

// RunTest @ 14a4d7210

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigUnit_ItemReplaceTest::RunTest(FRigUnit_ItemReplaceTest *this,FString *param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  URigHierarchy *this_00;
  UClass *pUVar4;
  uint local_18;
  
  (**(code **)(this->_padding_ + 0x100))();
  this_00 = (URigHierarchy *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->_padding_);
  if (this_00 != (URigHierarchy *)0x0) {
    pUVar4 = Z_Construct_UClass_URigHierarchy_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_14a4d726f;
  }
  this_00 = (URigHierarchy *)0x0;
LAB_14a4d726f:
  URigHierarchy::Reset(this_00);
  local_18 = local_18 & 0xffffff00;
  (this->Unit).Old.ComparisonIndex = 0;
  (this->Unit).Old.Number = 0;
  (this->Unit).New.ComparisonIndex = 0;
  (this->Unit).New.Number = 0;
  uVar2 = (ulonglong)local_18;
  (this->Unit).Item.Type = (char)uVar2;
  *(int3 *)&(this->Unit).Item.field_0x1 = (int3)(uVar2 >> 8);
  (this->Unit).Item.Name.ComparisonIndex = (FNameEntryId)(int)(uVar2 >> 0x20);
  (this->Unit).Result.Type = (char)uVar2;
  *(int3 *)&(this->Unit).Result.field_0x1 = (int3)(uVar2 >> 8);
  (this->Unit).Result.Name.ComparisonIndex = (FNameEntryId)(int)(uVar2 >> 0x20);
  (this->Unit).Item.Name.Number = 0;
  (this->Unit).Result.Name.Number = 0;
                    /* WARNING: Could not recover jumptable at 0x00014a4d72d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar3;
}

// RunControlRigUnitTest @ 14a4d7390

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
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
FRigUnit_ItemReplaceTest::RunControlRigUnitTest(FRigUnit_ItemReplaceTest *this,FString *param_1)

{
  FRigVMExecuteContext *pFVar1;
  code *pcVar2;
  undefined3 uVar3;
  FNameEntryId FVar4;
  FName *pFVar5;
  FName *pFVar6;
  undefined8 uVar7;
  FName local_res8;
  FString local_38;
  
  pFVar5 = ::FName::FName(&local_res8,L"OldItemName");
  (this->Unit).Item.Name = *pFVar5;
  (this->Unit).Item.Type = Bone;
  pFVar5 = ::FName::FName(&local_res8,L"Old");
  (this->Unit).Old = *pFVar5;
  pFVar6 = ::FName::FName(&local_res8,L"New");
  pFVar5 = &(this->Unit).Result.Name;
  (this->Unit).New = *pFVar6;
  uVar3 = *(undefined3 *)&(this->Unit).Item.field_0x1;
  FVar4.Value = (this->Unit).Item.Name.ComparisonIndex.Value;
  pFVar1 = (FRigVMExecuteContext *)this->_padding_;
  (this->Unit).Result.Type = (this->Unit).Item.Type;
  *(undefined3 *)&(this->Unit).Result.field_0x1 = uVar3;
  (this->Unit).Result.Name.ComparisonIndex = (FNameEntryId)FVar4.Value;
  (this->Unit).Result.Name.Number = (this->Unit).Item.Name.Number;
  FRigVMFunction_NameReplace::StaticExecute
            (pFVar1,&(this->Unit).Item.Name,&(this->Unit).Old,&(this->Unit).New,pFVar5);
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_38,L"unexpected result");
  ::FName::FName(&local_res8,L"NewItemName");
  if ((*pFVar5 == local_res8) && ((this->Unit).Result.Type == Bone)) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  (*pcVar2)(this,uVar7,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_res8,L"OldItemName");
  (this->Unit).Item.Name = *pFVar6;
  (this->Unit).Item.Type = Bone;
  pFVar6 = ::FName::FName(&local_res8,L"Old");
  (this->Unit).Old = *pFVar6;
  pFVar1 = (FRigVMExecuteContext *)this->_padding_;
  (this->Unit).New.ComparisonIndex = 0;
  (this->Unit).New.Number = 0;
  uVar3 = *(undefined3 *)&(this->Unit).Item.field_0x1;
  FVar4.Value = (this->Unit).Item.Name.ComparisonIndex.Value;
  (this->Unit).Result.Type = (this->Unit).Item.Type;
  *(undefined3 *)&(this->Unit).Result.field_0x1 = uVar3;
  (this->Unit).Result.Name.ComparisonIndex = (FNameEntryId)FVar4.Value;
  (this->Unit).Result.Name.Number = (this->Unit).Item.Name.Number;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FRigVMFunction_NameReplace::StaticExecute
            (pFVar1,&(this->Unit).Item.Name,&(this->Unit).Old,&(this->Unit).New,pFVar5);
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_38,L"unexpected result when New is None");
  ::FName::FName(&local_res8,L"ItemName");
  if ((*pFVar5 == local_res8) && ((this->Unit).Result.Type == Bone)) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  (*pcVar2)(this,uVar7,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar5 = ::FName::FName(&local_res8,L"OldItemName");
  (this->Unit).Item.Name = *pFVar5;
  (this->Unit).Item.Type = Bone;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->Unit).Old.ComparisonIndex = 0;
  (this->Unit).Old.Number = 0;
  pFVar5 = ::FName::FName(&local_res8,L"New");
  (this->Unit).New = *pFVar5;
  uVar3 = *(undefined3 *)&(this->Unit).Item.field_0x1;
  FVar4.Value = (this->Unit).Item.Name.ComparisonIndex.Value;
  pFVar1 = (FRigVMExecuteContext *)this->_padding_;
  (this->Unit).Result.Type = (this->Unit).Item.Type;
  *(undefined3 *)&(this->Unit).Result.field_0x1 = uVar3;
  (this->Unit).Result.Name.ComparisonIndex = (FNameEntryId)FVar4.Value;
  (this->Unit).Result.Name.Number = (this->Unit).Item.Name.Number;
  FRigVMFunction_NameReplace::StaticExecute
            (pFVar1,&(this->Unit).Item.Name,&(this->Unit).Old,&(this->Unit).New,
             &(this->Unit).Result.Name);
  pcVar2 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(&local_38,L"unexpected result when Old is None");
  ::FName::FName(&local_res8,L"OldItemName");
  if (((this->Unit).Result.Name == local_res8) && ((this->Unit).Result.Type == Bone)) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  (*pcVar2)(this,uVar7,&local_38,0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a4d76c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigUnit_ItemReplaceTest::GetBeautifiedTestName
          (FRigUnit_ItemReplaceTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ControlRig.Units.FRigUnit_ItemReplace");
  return __return_storage_ptr__;
}

