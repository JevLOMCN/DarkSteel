// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// StaticStruct @ 14e104fb0

UScriptStruct * __cdecl FOptimusComponentBindingAction_RenameBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusComponentBindingAction_RenameBinding.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusComponentBindingAction_RenameBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RenameBinding,
                         (UObject *)pUVar1,L"OptimusComponentBindingAction_RenameBinding");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusComponentBindingAction_RenameBinding.
         OuterSingleton;
}

// Do @ 14e105000

bool __thiscall
FOptimusComponentBindingAction_RenameBinding::Do
          (FOptimusComponentBindingAction_RenameBinding *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  bool bVar2;
  UOptimusDeformer *this_00;
  UClass *pUVar3;
  UOptimusComponentSourceBinding *pUVar4;
  
  if (param_1 != (IOptimusPathResolver *)0x0) {
    this_00 = (UOptimusDeformer *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (this_00 != (UOptimusDeformer *)0x0) {
      pUVar3 = UOptimusDeformer::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) goto LAB_14e105048;
    }
  }
  this_00 = (UOptimusDeformer *)0x0;
LAB_14e105048:
  pUVar4 = (UOptimusComponentSourceBinding *)
           (**(code **)(this_00->_padding_ + 0x40))(&this_00->_padding_,this->OldName);
  if (pUVar4 != (UOptimusComponentSourceBinding *)0x0) {
    bVar2 = UOptimusDeformer::RenameComponentBindingDirect(this_00,pUVar4,this->NewName);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// Undo @ 14e105090

bool __thiscall
FOptimusComponentBindingAction_RenameBinding::Undo
          (FOptimusComponentBindingAction_RenameBinding *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  bool bVar2;
  UOptimusDeformer *this_00;
  UClass *pUVar3;
  UOptimusComponentSourceBinding *pUVar4;
  
  if (param_1 != (IOptimusPathResolver *)0x0) {
    this_00 = (UOptimusDeformer *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (this_00 != (UOptimusDeformer *)0x0) {
      pUVar3 = UOptimusDeformer::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) goto LAB_14e1050d8;
    }
  }
  this_00 = (UOptimusDeformer *)0x0;
LAB_14e1050d8:
  pUVar4 = (UOptimusComponentSourceBinding *)
           (**(code **)(this_00->_padding_ + 0x40))(&this_00->_padding_,this->NewName);
  if (pUVar4 != (UOptimusComponentSourceBinding *)0x0) {
    bVar2 = UOptimusDeformer::RenameComponentBindingDirect(this_00,pUVar4,this->OldName);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// FOptimusComponentBindingAction_RenameBinding @ 14e150c60

FOptimusComponentBindingAction_RenameBinding * __thiscall
FOptimusComponentBindingAction_RenameBinding::FOptimusComponentBindingAction_RenameBinding
          (FOptimusComponentBindingAction_RenameBinding *this,
          UOptimusComponentSourceBinding *param_1,FName param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  FOptimusComponentBindingAction_RenameBinding *pFVar4;
  FString *pFVar5;
  FName *this_00;
  wchar_t *pwVar6;
  FString local_18;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusComponentBindingAction_RenameBinding__6B_;
  this_00 = &this->NewName;
  (this->OldName).ComparisonIndex = 0;
  (this->OldName).Number = 0;
  this_00->ComparisonIndex = 0;
  this_00->Number = 0;
  if (param_1 == (UOptimusComponentSourceBinding *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2192620421386338154>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusComponentBindingActions.cpp"
                       ,0x96,"InBinding");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FOptimusComponentBindingAction_RenameBinding *)(*pcVar1)();
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
               (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152e04d90,pwVar6);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

