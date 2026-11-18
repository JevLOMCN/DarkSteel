// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FPersistentShadowState @ 1455760d0

FPersistentShadowState * __thiscall
FPersistentShadowState::FPersistentShadowState
          (FPersistentShadowState *this,FPersistentShadowState *param_1)

{
  IPooledRenderTarget *pIVar1;
  
  memcpy(this,param_1,0x880);
  (this->HZBTestViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->HZBTestViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->HZBTestViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->HZBTestViewRect).field0_0x0._s_0.Max.field0_0x0;
  (this->HZB).Reference = (IPooledRenderTarget *)0x0;
  pIVar1 = (param_1->HZB).Reference;
  (this->HZB).Reference = pIVar1;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x30))();
  }
  return this;
}

