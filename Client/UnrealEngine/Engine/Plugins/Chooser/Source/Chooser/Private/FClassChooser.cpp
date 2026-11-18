// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 3

// StaticStruct @ 14a875fa0

UScriptStruct * __cdecl FClassChooser::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClassChooser.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FClassChooser.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClassChooser,(UObject *)pUVar1,L"ClassChooser");
  }
  return Z_Registration_Info_UScriptStruct_FClassChooser.OuterSingleton;
}

// ChooseObject @ 14a875fe0

UObject * __thiscall
FClassChooser::ChooseObject(FClassChooser *this,FChooserEvaluationContext *param_1)

{
  return (UObject *)(this->Class).field0_0x0.DebugPtr;
}

// IterateObjects @ 14a876020

EIteratorStatus __thiscall
FClassChooser::IterateObjects
          (FClassChooser *this,FChooserEvaluationContext *param_1,
          TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *param_2)

{
  UClass *pUVar1;
  EIteratorStatus EVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  pUVar1 = (this->Class).field0_0x0.DebugPtr;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
  if (*(int *)&param_2->field_0x10 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)&param_2->field_0x8;
  }
  EVar2 = (**(code **)(*plVar3 + 0x60))(plVar3,pUVar1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return EVar2;
}

