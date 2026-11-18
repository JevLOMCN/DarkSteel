// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// StaticStruct @ 14e107700

UScriptStruct * __cdecl FOptimusResourceAction_RenameResource::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusResourceAction_RenameResource.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusResourceAction_RenameResource.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusResourceAction_RenameResource,
                         (UObject *)pUVar1,L"OptimusResourceAction_RenameResource");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusResourceAction_RenameResource.OuterSingleton;
}

// Do @ 14e107740

bool __thiscall
FOptimusResourceAction_RenameResource::Do
          (FOptimusResourceAction_RenameResource *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  UOptimusResourceDescription *pUVar2;
  UOptimusResourceContainer *pUVar3;
  UOptimusDeformer *this_00;
  
  pUVar2 = (UOptimusResourceDescription *)
           (**(code **)((longlong)*param_1 + 0x30))(param_1,this->OldName);
  if (pUVar2 != (UOptimusResourceDescription *)0x0) {
    pUVar3 = CastChecked<UOptimusResourceContainer,UObject>((UObject *)pUVar2->_padding_);
    if (pUVar3 != (UOptimusResourceContainer *)0x0) {
      this_00 = CastChecked<UOptimusDeformer,UObject>((UObject *)pUVar3->_padding_);
      if (this_00 != (UOptimusDeformer *)0x0) {
        bVar1 = UOptimusDeformer::RenameResourceDirect(this_00,pUVar2,this->NewName);
        if (bVar1) {
          return true;
        }
      }
    }
  }
  return false;
}

// Undo @ 14e1077c0

bool __thiscall
FOptimusResourceAction_RenameResource::Undo
          (FOptimusResourceAction_RenameResource *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  UOptimusResourceDescription *pUVar2;
  UOptimusResourceContainer *pUVar3;
  UOptimusDeformer *this_00;
  
  pUVar2 = (UOptimusResourceDescription *)
           (**(code **)((longlong)*param_1 + 0x30))(param_1,this->NewName);
  if (pUVar2 != (UOptimusResourceDescription *)0x0) {
    pUVar3 = CastChecked<UOptimusResourceContainer,UObject>((UObject *)pUVar2->_padding_);
    if (pUVar3 != (UOptimusResourceContainer *)0x0) {
      this_00 = CastChecked<UOptimusDeformer,UObject>((UObject *)pUVar3->_padding_);
      if (this_00 != (UOptimusDeformer *)0x0) {
        bVar1 = UOptimusDeformer::RenameResourceDirect(this_00,pUVar2,this->OldName);
        if (bVar1) {
          return true;
        }
      }
    }
  }
  return false;
}

// FOptimusResourceAction_RenameResource @ 14e156190

FOptimusResourceAction_RenameResource * __thiscall
FOptimusResourceAction_RenameResource::FOptimusResourceAction_RenameResource
          (FOptimusResourceAction_RenameResource *this,UOptimusResourceDescription *param_1,
          FName param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  FOptimusResourceAction_RenameResource *pFVar4;
  FString *pFVar5;
  FName *this_00;
  wchar_t *pwVar6;
  FString local_18;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusResourceAction_RenameResource__6B_;
  this_00 = &this->NewName;
  (this->OldName).ComparisonIndex = 0;
  (this->OldName).Number = 0;
  this_00->ComparisonIndex = 0;
  this_00->Number = 0;
  if (param_1 == (UOptimusResourceDescription *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3523978412479742102>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusResourceActions.cpp"
                       ,0x96,"InResource");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FOptimusResourceAction_RenameResource *)(*pcVar1)();
      return pFVar4;
    }
  }
  else {
    uVar2 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    (this->OldName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
    (this->OldName).Number = uVar2;
    *this_00 = param_2;
    pFVar5 = ::FName::ToString(this_00,&local_18);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    FOptimusAction::SetTitlef<wchar_t_const_*>
              ((FOptimusAction *)this,
               (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152e07ff8,pwVar6);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

