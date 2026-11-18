// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// TObjectPtr<UPhysicalMaterial> @ 147bb8000

TObjectPtr<UPhysicalMaterial> * __thiscall
TObjectPtr<UPhysicalMaterial>::TObjectPtr<UPhysicalMaterial>
          (TObjectPtr<UPhysicalMaterial> *this,TObjectPtr<UPhysicalMaterial> *param_1)

{
  UPhysicalMaterial *pUVar1;
  
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  (this->field0_0x0).DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPhysicalMaterial *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return this;
}

// TObjectPtr<ULightMapTexture2D> @ 147ea3600

TObjectPtr<ULightMapTexture2D> * __thiscall
TObjectPtr<ULightMapTexture2D>::TObjectPtr<ULightMapTexture2D>(TObjectPtr<ULightMapTexture2D> *this)

{
  (this->field0_0x0).DebugPtr = (ULightMapTexture2D *)0x0;
  return this;
}

// TObjectPtr<ULightMapVirtualTexture2D> @ 147ea3620

TObjectPtr<ULightMapVirtualTexture2D> * __thiscall
TObjectPtr<ULightMapVirtualTexture2D>::TObjectPtr<ULightMapVirtualTexture2D>
          (TObjectPtr<ULightMapVirtualTexture2D> *this)

{
  (this->field0_0x0).DebugPtr = (ULightMapVirtualTexture2D *)0x0;
  return this;
}

// operator= @ 148625c20

TObjectPtr<UAnimSequence> * __thiscall
TObjectPtr<UAnimSequence>::operator=
          (TObjectPtr<UAnimSequence> *this,TObjectPtr<UAnimSequence> *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     ((param_1->field0_0x0).DebugPtr != (UAnimSequence *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)(param_1->field0_0x0).DebugPtr);
  }
  this->field0_0x0 = param_1->field0_0x0;
  return this;
}

// TObjectPtr<ULineBatchComponent> @ 1489b2d40

TObjectPtr<ULineBatchComponent> * __thiscall
TObjectPtr<ULineBatchComponent>::TObjectPtr<ULineBatchComponent>
          (TObjectPtr<ULineBatchComponent> *this)

{
  (this->field0_0x0).DebugPtr = (ULineBatchComponent *)0x0;
  return this;
}

