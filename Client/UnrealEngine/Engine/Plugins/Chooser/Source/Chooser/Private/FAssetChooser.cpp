// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 3

// StaticStruct @ 14a874e50

UScriptStruct * __cdecl FAssetChooser::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAssetChooser.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FAssetChooser.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAssetChooser,(UObject *)pUVar1,L"AssetChooser");
  }
  return Z_Registration_Info_UScriptStruct_FAssetChooser.OuterSingleton;
}

// ChooseObject @ 14a874e90

UObject * __thiscall
FAssetChooser::ChooseObject(FAssetChooser *this,FChooserEvaluationContext *param_1)

{
  return (this->Asset).field0_0x0.DebugPtr;
}

// IterateObjects @ 14a874ef0

EIteratorStatus __thiscall
FAssetChooser::IterateObjects
          (FAssetChooser *this,FChooserEvaluationContext *param_1,
          TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *param_2)

{
  UObject *pUVar1;
  EIteratorStatus EVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  pUVar1 = (this->Asset).field0_0x0.DebugPtr;
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

