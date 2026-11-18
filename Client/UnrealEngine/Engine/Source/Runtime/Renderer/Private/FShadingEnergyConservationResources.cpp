// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ReleaseRHI @ 14555eae0

void __thiscall
FShadingEnergyConservationResources::ReleaseRHI(FShadingEnergyConservationResources *this)

{
  IPooledRenderTarget *pIVar1;
  
  pIVar1 = (this->GGXSpecEnergyTexture).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->GGXSpecEnergyTexture).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->GGXGlassEnergyTexture).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->GGXGlassEnergyTexture).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->ClothEnergyTexture).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->ClothEnergyTexture).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->DiffuseEnergyTexture).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->DiffuseEnergyTexture).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  return;
}

