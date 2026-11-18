// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// IsValid @ 1451e2be0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FTranslucencyPassResources::IsValid(FTranslucencyPassResources *this)

{
  if ((0 < *(int *)((longlong)&(this->ViewRect).field0_0x0 + 8) -
           *(int *)&(this->ViewRect).field0_0x0) &&
     (0 < *(int *)((longlong)&(this->ViewRect).field0_0x0 + 0xc) -
          *(int *)((longlong)&(this->ViewRect).field0_0x0 + 4))) {
    return true;
  }
  return false;
}

// FTranslucencyPassResources @ 14574f110

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FTranslucencyPassResources * __thiscall
FTranslucencyPassResources::FTranslucencyPassResources(FTranslucencyPassResources *this)

{
  *(undefined8 *)this = 7;
  *(undefined8 *)((longlong)&(this->ViewRect).field0_0x0._s_0.Min.field0_0x0 + 4) = 0;
  *(undefined4 *)((longlong)&(this->ViewRect).field0_0x0 + 0xc) = 0;
  (this->ColorTexture).Target = (FRDGTexture *)0x0;
  (this->ColorTexture).Resolve = (FRDGTexture *)0x0;
  (this->ColorModulateTexture).Target = (FRDGTexture *)0x0;
  (this->ColorModulateTexture).Resolve = (FRDGTexture *)0x0;
  (this->DepthTexture).Target = (FRDGTexture *)0x0;
  (this->DepthTexture).Resolve = (FRDGTexture *)0x0;
  return this;
}

