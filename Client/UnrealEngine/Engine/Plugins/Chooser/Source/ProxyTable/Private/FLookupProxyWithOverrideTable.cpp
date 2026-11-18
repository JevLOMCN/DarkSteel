// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProxyTable
// Functions: 3

// StaticStruct @ 14cf253e0

UScriptStruct * __cdecl FLookupProxyWithOverrideTable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProxyTable();
    Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable,(UObject *)pUVar1,
                         L"LookupProxyWithOverrideTable");
  }
  return Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.OuterSingleton;
}

// ChooseMulti @ 14cf25420

EIteratorStatus __thiscall
FLookupProxyWithOverrideTable::ChooseMulti
          (FLookupProxyWithOverrideTable *this,FChooserEvaluationContext *param_1,
          TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *param_2)

{
  UProxyTable *this_00;
  EIteratorStatus EVar1;
  TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
  *pTVar2;
  undefined1 local_28 [32];
  
  if (((this->Proxy).field0_0x0.DebugPtr == (UProxyAsset *)0x0) ||
     (this_00 = (this->OverrideProxyTable).field0_0x0.DebugPtr, this_00 == (UProxyTable *)0x0)) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    EVar1 = Continue;
  }
  else {
    pTVar2 = TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             ::
             TDelegate<enum_FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                       (local_28,param_2);
    EVar1 = UProxyTable::FindProxyObjectMulti
                      (this_00,&((this->Proxy).field0_0x0.DebugPtr)->Guid,param_1,pTVar2);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  }
  return EVar1;
}

// ChooseObject @ 14cf254b0

UObject * __thiscall
FLookupProxyWithOverrideTable::ChooseObject
          (FLookupProxyWithOverrideTable *this,FChooserEvaluationContext *param_1)

{
  UProxyAsset *pUVar1;
  UProxyTable *this_00;
  UObject *pUVar2;
  
  pUVar1 = (this->Proxy).field0_0x0.DebugPtr;
  if ((pUVar1 != (UProxyAsset *)0x0) &&
     (this_00 = (this->OverrideProxyTable).field0_0x0.DebugPtr, this_00 != (UProxyTable *)0x0)) {
    pUVar2 = UProxyTable::FindProxyObject(this_00,&pUVar1->Guid,param_1);
    return pUVar2;
  }
  return (UObject *)0x0;
}

