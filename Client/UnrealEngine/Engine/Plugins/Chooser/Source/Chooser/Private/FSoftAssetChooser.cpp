// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 4

// StaticStruct @ 14a875070

UScriptStruct * __cdecl FSoftAssetChooser::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSoftAssetChooser.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FSoftAssetChooser.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSoftAssetChooser,(UObject *)pUVar1,
                         L"SoftAssetChooser");
  }
  return Z_Registration_Info_UScriptStruct_FSoftAssetChooser.OuterSingleton;
}

// ChooseObject @ 14a8750b0

void __thiscall
FSoftAssetChooser::ChooseObject
          (FSoftAssetChooser *this,FChooserEvaluationContext *param_1,
          TSoftObjectPtr<UObject> *param_2)

{
  FScriptContainerElement *pFVar1;
  FSoftObjectPath *pFVar2;
  FSoftObjectPath local_28;
  
  pFVar2 = FSoftObjectPath::FSoftObjectPath
                     (&local_28,(FSoftObjectPath *)&(this->Asset).SoftObjectPtr.field_0x8);
  *(undefined8 *)&param_2->SoftObjectPtr = 0;
  FSoftObjectPath::operator=((FSoftObjectPath *)&(param_2->SoftObjectPtr).field_0x8,pFVar2);
  pFVar1 = (pFVar2->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ChooseObject @ 14a875100

UObject * __thiscall
FSoftAssetChooser::ChooseObject(FSoftAssetChooser *this,FChooserEvaluationContext *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->Asset);
  return pUVar1;
}

// IterateObjects @ 14a875110

EIteratorStatus __thiscall
FSoftAssetChooser::IterateObjects
          (FSoftAssetChooser *this,FChooserEvaluationContext *param_1,
          TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *param_2)

{
  EIteratorStatus EVar1;
  UObject *pUVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->Asset);
  if ((pUVar2 == (UObject *)0x0) && (*(longlong *)&(this->Asset).SoftObjectPtr.field_0x8 != 0)) {
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->Asset).SoftObjectPtr.field_0x8,
               (FUObjectSerializeContext *)0x0);
    pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->Asset);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
  if (*(int *)&param_2->field_0x10 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)&param_2->field_0x8;
  }
  EVar1 = (**(code **)(*plVar3 + 0x60))(plVar3,pUVar2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return EVar1;
}

