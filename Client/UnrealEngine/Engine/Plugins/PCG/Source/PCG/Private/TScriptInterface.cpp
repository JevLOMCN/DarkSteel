// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// TScriptInterface<IPCGGenSourceBase_const_><IPCGGenSourceBase> @ 149f20260

TScriptInterface<IPCGGenSourceBase_const_> * __thiscall
TScriptInterface<IPCGGenSourceBase_const_>::
TScriptInterface<IPCGGenSourceBase_const_><IPCGGenSourceBase>
          (TScriptInterface<IPCGGenSourceBase_const_> *this,
          TScriptInterface<IPCGGenSourceBase> *param_1)

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

