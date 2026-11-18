// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 1

// ~FRHITextureInitializer @ 14ea974c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRHITextureInitializer::~FRHITextureInitializer(FRHITextureInitializer *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((this->CommandList != (FRHICommandListBase *)0x0) && (this->Texture != (FRHITexture *)0x0)) {
    RemovePendingTextureUpload(this);
  }
  if (*(longlong *)&this->GetSubresourceCallback != 0) {
    plVar1 = *(longlong **)&(this->GetSubresourceCallback).field_0x28;
    plVar2 = (longlong *)&(this->GetSubresourceCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->FinalizeCallback != 0) {
    plVar1 = *(longlong **)&(this->FinalizeCallback).field_0x28;
    plVar2 = (longlong *)&(this->FinalizeCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

