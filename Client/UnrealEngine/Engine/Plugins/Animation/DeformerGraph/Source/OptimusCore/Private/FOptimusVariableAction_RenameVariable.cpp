// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// StaticStruct @ 14e10f490

UScriptStruct * __cdecl FOptimusVariableAction_RenameVariable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusVariableAction_RenameVariable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusVariableAction_RenameVariable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusVariableAction_RenameVariable,
                         (UObject *)pUVar1,L"OptimusVariableAction_RenameVariable");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusVariableAction_RenameVariable.OuterSingleton;
}

// Do @ 14e10f6b0

bool __thiscall
FOptimusVariableAction_RenameVariable::Do
          (FOptimusVariableAction_RenameVariable *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  bool bVar2;
  UOptimusDeformer *this_00;
  UClass *pUVar3;
  UOptimusVariableDescription *pUVar4;
  
  if (param_1 != (IOptimusPathResolver *)0x0) {
    this_00 = (UOptimusDeformer *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (this_00 != (UOptimusDeformer *)0x0) {
      pUVar3 = UOptimusDeformer::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) goto LAB_14e10f6f8;
    }
  }
  this_00 = (UOptimusDeformer *)0x0;
LAB_14e10f6f8:
  pUVar4 = (UOptimusVariableDescription *)
           (**(code **)(this_00->_padding_ + 0x38))(&this_00->_padding_,this->OldName);
  if (pUVar4 != (UOptimusVariableDescription *)0x0) {
    bVar2 = UOptimusDeformer::RenameVariableDirect(this_00,pUVar4,this->NewName);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// Undo @ 14e10f740

bool __thiscall
FOptimusVariableAction_RenameVariable::Undo
          (FOptimusVariableAction_RenameVariable *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  bool bVar2;
  UOptimusDeformer *this_00;
  UClass *pUVar3;
  UOptimusVariableDescription *pUVar4;
  
  if (param_1 != (IOptimusPathResolver *)0x0) {
    this_00 = (UOptimusDeformer *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (this_00 != (UOptimusDeformer *)0x0) {
      pUVar3 = UOptimusDeformer::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) goto LAB_14e10f788;
    }
  }
  this_00 = (UOptimusDeformer *)0x0;
LAB_14e10f788:
  pUVar4 = (UOptimusVariableDescription *)
           (**(code **)(this_00->_padding_ + 0x38))(&this_00->_padding_,this->NewName);
  if (pUVar4 != (UOptimusVariableDescription *)0x0) {
    bVar2 = UOptimusDeformer::RenameVariableDirect(this_00,pUVar4,this->OldName);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// FOptimusVariableAction_RenameVariable @ 14e157010

FOptimusVariableAction_RenameVariable * __thiscall
FOptimusVariableAction_RenameVariable::FOptimusVariableAction_RenameVariable
          (FOptimusVariableAction_RenameVariable *this,UOptimusVariableDescription *param_1,
          FName param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  FOptimusVariableAction_RenameVariable *pFVar4;
  FString *pFVar5;
  FName *this_00;
  wchar_t *pwVar6;
  FString local_18;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusVariableAction_RenameVariable__6B_;
  this_00 = &this->NewName;
  (this->OldName).ComparisonIndex = 0;
  (this->OldName).Number = 0;
  this_00->ComparisonIndex = 0;
  this_00->Number = 0;
  if (param_1 == (UOptimusVariableDescription *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5431583799081172851>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusVariableActions.cpp"
                       ,0x8d,"InVariable");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FOptimusVariableAction_RenameVariable *)(*pcVar1)();
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
               (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152e08b18,pwVar6);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

