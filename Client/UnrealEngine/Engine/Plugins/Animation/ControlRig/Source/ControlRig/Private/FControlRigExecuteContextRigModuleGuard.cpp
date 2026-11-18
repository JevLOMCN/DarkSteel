// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// FControlRigExecuteContextRigModuleGuard @ 14a50a9e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FControlRigExecuteContextRigModuleGuard * __thiscall
FControlRigExecuteContextRigModuleGuard::FControlRigExecuteContextRigModuleGuard
          (FControlRigExecuteContextRigModuleGuard *this,FControlRigExecuteContext *param_1,
          FString *param_2,FString *param_3,FString *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  this->Context = param_1;
  ::FString::FString(&this->PreviousRigModulePrefix,&param_1->RigModulePrefix);
  ::FString::FString(&this->PreviousRigParentModulePrefix,&param_1->RigParentModulePrefix);
  ::FString::FString(&this->PreviousRigRootModulePrefix,&param_1->RigRootModulePrefix);
  this->PreviousRigModulePrefixHash = param_1->RigModulePrefixHash;
  ::FString::operator=(&this->Context->RigModulePrefix,param_2);
  ::FString::operator=(&this->Context->RigParentModulePrefix,param_3);
  ::FString::operator=(&this->Context->RigRootModulePrefix,param_4);
  iVar1 = (this->Context->RigModulePrefix).Data.ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(this->Context->RigModulePrefix).Data.AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  this->Context->RigModulePrefixHash = uVar2;
  return this;
}

// FControlRigExecuteContextRigModuleGuard @ 14a50aad0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FControlRigExecuteContextRigModuleGuard * __thiscall
FControlRigExecuteContextRigModuleGuard::FControlRigExecuteContextRigModuleGuard
          (FControlRigExecuteContextRigModuleGuard *this,FControlRigExecuteContext *param_1,
          UControlRig *param_2)

{
  int iVar1;
  FControlRigExecuteContext *pFVar2;
  uint uVar3;
  FString *pFVar4;
  UModularRig *this_00;
  UClass *pUVar5;
  FRigModuleInstance *pFVar6;
  FRigModuleInstance *this_01;
  wchar_t *pwVar7;
  int iVar8;
  int iVar9;
  FName local_res8;
  FString local_18;
  
  this->Context = param_1;
  ::FString::FString(&this->PreviousRigModulePrefix,&param_1->RigModulePrefix);
  ::FString::FString(&this->PreviousRigParentModulePrefix,&param_1->RigParentModulePrefix);
  ::FString::FString(&this->PreviousRigRootModulePrefix,&param_1->RigRootModulePrefix);
  this->PreviousRigModulePrefixHash = param_1->RigModulePrefixHash;
  pFVar4 = UControlRig::GetRigModulePrefix(param_2);
  ::FString::operator=(&this->Context->RigModulePrefix,pFVar4);
  pFVar2 = this->Context;
  iVar8 = 0;
  iVar1 = (pFVar2->RigModulePrefix).Data.ArrayNum;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  ::FString::AssignRange
            (&pFVar2->RigParentModulePrefix,
             (wchar_t *)(pFVar2->RigModulePrefix).Data.AllocatorInstance.Data,iVar9);
  pFVar2 = this->Context;
  iVar1 = (pFVar2->RigModulePrefix).Data.ArrayNum;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  ::FString::AssignRange
            (&pFVar2->RigRootModulePrefix,
             (wchar_t *)(pFVar2->RigModulePrefix).Data.AllocatorInstance.Data,iVar9);
  this_00 = (UModularRig *)UControlRig::GetParentRig(param_2);
  if (this_00 != (UModularRig *)0x0) {
    pUVar5 = Z_Construct_UClass_UModularRig_NoRegister();
    iVar9 = (int)pUVar5->_padding_;
    if ((iVar9 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
        &pUVar5->_padding_)) {
      local_res8 = (FName)param_2->_padding_;
      pFVar6 = UModularRig::FindModule(this_00,&local_res8);
      if (pFVar6 != (FRigModuleInstance *)0x0) {
        this_01 = FRigModuleInstance::GetParentModule(pFVar6);
        if (this_01 != (FRigModuleInstance *)0x0) {
          pFVar4 = FRigModuleInstance::GetModulePrefix(this_01,&local_18);
          ::FString::operator=(&this->Context->RigParentModulePrefix,pFVar4);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
        }
        pFVar6 = FRigModuleInstance::GetRootModule(pFVar6);
        if (pFVar6 != (FRigModuleInstance *)0x0) {
          pFVar4 = FRigModuleInstance::GetModulePrefix(pFVar6,&local_18);
          ::FString::operator=(&this->Context->RigRootModulePrefix,pFVar4);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  iVar9 = (this->Context->RigModulePrefix).Data.ArrayNum;
  if (iVar9 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(this->Context->RigModulePrefix).Data.AllocatorInstance.Data;
    iVar8 = iVar9 + -1;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar7);
  this->Context->RigModulePrefixHash = uVar3;
  return this;
}

// ~FControlRigExecuteContextRigModuleGuard @ 14a517f10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigExecuteContextRigModuleGuard::~FControlRigExecuteContextRigModuleGuard
          (FControlRigExecuteContextRigModuleGuard *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  iVar1 = (this->PreviousRigModulePrefix).Data.ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange
            (&this->Context->RigModulePrefix,
             (wchar_t *)(this->PreviousRigModulePrefix).Data.AllocatorInstance.Data,iVar3);
  iVar1 = (this->PreviousRigParentModulePrefix).Data.ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange
            (&this->Context->RigParentModulePrefix,
             (wchar_t *)(this->PreviousRigParentModulePrefix).Data.AllocatorInstance.Data,iVar3);
  iVar1 = (this->PreviousRigRootModulePrefix).Data.ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange
            (&this->Context->RigRootModulePrefix,
             (wchar_t *)(this->PreviousRigRootModulePrefix).Data.AllocatorInstance.Data,iVar3);
  this->Context->RigModulePrefixHash = this->PreviousRigModulePrefixHash;
  pFVar2 = (this->PreviousRigRootModulePrefix).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PreviousRigParentModulePrefix).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PreviousRigModulePrefix).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

