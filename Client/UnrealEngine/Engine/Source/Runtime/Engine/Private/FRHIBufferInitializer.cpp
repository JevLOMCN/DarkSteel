// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~FRHIBufferInitializer @ 14768a680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRHIBufferInitializer::~FRHIBufferInitializer(FRHIBufferInitializer *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((this->CommandList != (FRHICommandListBase *)0x0) && (this->Buffer != (FRHIBuffer *)0x0)) {
    RemovePendingBufferUpload(this);
  }
  if (*(longlong *)&this->FinalizeCallback != 0) {
    plVar1 = *(longlong **)&(this->FinalizeCallback).field_0x28;
    plVar2 = (longlong *)&(this->FinalizeCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014768a6b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

