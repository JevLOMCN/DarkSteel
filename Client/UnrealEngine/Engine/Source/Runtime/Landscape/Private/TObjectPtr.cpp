// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 4

// TObjectPtr<ULandscapeComponent> @ 145f01c30

TObjectPtr<ULandscapeComponent> * __thiscall
TObjectPtr<ULandscapeComponent>::TObjectPtr<ULandscapeComponent>
          (TObjectPtr<ULandscapeComponent> *this)

{
  (this->field0_0x0).DebugPtr = (ULandscapeComponent *)0x0;
  return this;
}

// TObjectPtr<UPhysicalMaterial> @ 145f01c50

TObjectPtr<UPhysicalMaterial> * __thiscall
TObjectPtr<UPhysicalMaterial>::TObjectPtr<UPhysicalMaterial>(TObjectPtr<UPhysicalMaterial> *this)

{
  (this->field0_0x0).DebugPtr = (UPhysicalMaterial *)0x0;
  return this;
}

// TObjectPtr<ULightMapTexture2D> @ 145f407b0

TObjectPtr<ULightMapTexture2D> * __thiscall
TObjectPtr<ULightMapTexture2D>::TObjectPtr<ULightMapTexture2D>
          (TObjectPtr<ULightMapTexture2D> *this,TObjectPtr<ULightMapTexture2D> *param_1)

{
  ULightMapTexture2D *pUVar1;
  
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  (this->field0_0x0).DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (ULightMapTexture2D *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return this;
}

// TObjectPtr<ULightMapVirtualTexture2D> @ 145f407f0

TObjectPtr<ULightMapVirtualTexture2D> * __thiscall
TObjectPtr<ULightMapVirtualTexture2D>::TObjectPtr<ULightMapVirtualTexture2D>
          (TObjectPtr<ULightMapVirtualTexture2D> *this,
          TObjectPtr<ULightMapVirtualTexture2D> *param_1)

{
  ULightMapVirtualTexture2D *pUVar1;
  
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  (this->field0_0x0).DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (ULightMapVirtualTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return this;
}

