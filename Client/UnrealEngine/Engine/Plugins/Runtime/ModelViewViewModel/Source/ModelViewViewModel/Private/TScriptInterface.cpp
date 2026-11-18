// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 1

// TScriptInterface<INotifyFieldValueChanged><UObject> @ 14a73b700

TScriptInterface<INotifyFieldValueChanged> * __thiscall
TScriptInterface<INotifyFieldValueChanged>::TScriptInterface<INotifyFieldValueChanged><UObject>
          (TScriptInterface<INotifyFieldValueChanged> *this,TObjectPtr<UObject> param_1)

{
  UObject *pUVar1;
  UObjectBaseUtility *this_00;
  UClass *pUVar2;
  void *pvVar3;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  pUVar1 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(UObject **)this = pUVar1;
  this_00 = *(UObjectBaseUtility **)param_1.field0_0x0;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar2 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
    pvVar3 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar2);
    *(void **)&this->field_0x8 = pvVar3;
    return this;
  }
  *(undefined8 *)&this->field_0x8 = 0;
  return this;
}

