// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LensComponent
// Functions: 1

// TScriptInterface<IBlendableInterface><UMaterialInstanceDynamic> @ 14d74ca70

TScriptInterface<IBlendableInterface> * __thiscall
TScriptInterface<IBlendableInterface>::
TScriptInterface<IBlendableInterface><UMaterialInstanceDynamic>
          (TScriptInterface<IBlendableInterface> *this,TObjectPtr<UMaterialInstanceDynamic> param_1)

{
  UObject *pUVar1;
  longlong lVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  pUVar1 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(UObject **)this = pUVar1;
  lVar2 = *(longlong *)param_1.field0_0x0 + 0x28;
  if (*(longlong *)param_1.field0_0x0 == 0) {
    lVar2 = 0;
  }
  *(longlong *)&this->field_0x8 = lVar2;
  return this;
}

