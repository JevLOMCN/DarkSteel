// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// Add @ 14d4eed60

void __thiscall
UE::StateTree::InstanceData::FEvaluationScopeInstanceContainer::FMemoryRequirementBuilder::Add
          (FMemoryRequirementBuilder *this,TNotNull<UScriptStruct_const_*> param_1)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  UPackage *pUVar5;
  int iVar6;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper,(UObject *)pUVar5
                         ,L"StateTreeInstanceObjectWrapper");
    if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14d4eeda3;
  }
  else {
LAB_14d4eeda3:
    iVar4 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton)
                 ->_padding_;
    if (((int)(param_1.Val)->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)((param_1.Val)->_padding_ + (longlong)iVar4 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton)->
         _padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14d4eee03;
  }
  iVar6 = (int)*(short *)((longlong)&(param_1.Val)->_padding_ + 4);
  lVar3 = (param_1.Val)->_padding_;
  iVar4 = (this->MemoryRequirement).Alignment;
  if (iVar4 < iVar6) {
    iVar4 = iVar6;
  }
  (this->MemoryRequirement).Alignment = iVar4;
  (this->MemoryRequirement).Size =
       ((int)lVar3 + -1 + iVar6 & -iVar6) + 4U +
       (iVar6 + (this->MemoryRequirement).Size + -1 & -iVar6);
  if (this->FirstStructAlignment < 1) {
    this->FirstStructAlignment = (int)*(short *)((longlong)&(param_1.Val)->_padding_ + 4);
  }
LAB_14d4eee03:
  piVar1 = &(this->MemoryRequirement).NumberOfElements;
  *piVar1 = *piVar1 + 1;
  return;
}

// Build @ 14d4f1380

FEvaluationScopeMemoryRequirement * __thiscall
UE::StateTree::InstanceData::FEvaluationScopeInstanceContainer::FMemoryRequirementBuilder::Build
          (FMemoryRequirementBuilder *this,FEvaluationScopeMemoryRequirement *__return_storage_ptr__
          )

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_18;
  
  iVar3 = (this->MemoryRequirement).NumberOfElements;
  if (iVar3 == 0) {
    __return_storage_ptr__->Size = 0;
    __return_storage_ptr__->Alignment = 0;
    __return_storage_ptr__->NumberOfElements = 0;
    return __return_storage_ptr__;
  }
  iVar4 = this->FirstStructAlignment;
  if (iVar4 < 1) {
    iVar4 = 8;
    (this->MemoryRequirement).Alignment = 8;
    this->FirstStructAlignment = 8;
  }
  uVar1 = (this->MemoryRequirement).Size;
  uVar2 = (this->MemoryRequirement).Alignment;
  __return_storage_ptr__->Size = uVar1 + (iVar3 * 0x18 + 3 + iVar4 & -iVar4);
  __return_storage_ptr__->Alignment = uVar2;
  __return_storage_ptr__->NumberOfElements = iVar3;
  return __return_storage_ptr__;
}

