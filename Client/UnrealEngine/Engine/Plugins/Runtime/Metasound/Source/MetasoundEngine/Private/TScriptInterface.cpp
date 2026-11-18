// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// TScriptInterface<IMetaSoundDocumentInterface_const_><IMetaSoundDocumentInterface> @ 14b305600

TScriptInterface<IMetaSoundDocumentInterface_const_> * __thiscall
TScriptInterface<IMetaSoundDocumentInterface_const_>::
TScriptInterface<IMetaSoundDocumentInterface_const_><IMetaSoundDocumentInterface>
          (TScriptInterface<IMetaSoundDocumentInterface_const_> *this,
          TScriptInterface<IMetaSoundDocumentInterface> *param_1)

{
  UObject *pUVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  pUVar1 = *(UObject **)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(UObject **)this = pUVar1;
  if (*(longlong *)param_1 != 0) {
    *(undefined8 *)&this->field_0x8 = *(undefined8 *)&param_1->field_0x8;
    return this;
  }
  *(undefined8 *)&this->field_0x8 = 0;
  return this;
}

