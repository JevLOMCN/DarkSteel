// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// BeginUAVOverlap @ 1494312c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRHIComputeCommandList::BeginUAVOverlap(FRHIComputeCommandList *this)

{
  code *UNRECOVERED_JUMPTABLE;
  IRHIComputeContext *pIVar1;
  undefined8 *puVar2;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar1 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
    UNRECOVERED_JUMPTABLE = *(code **)(pIVar1->_padding_ + 0x88);
                    /* WARNING: Could not recover jumptable at 0x0001494312f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pIVar1,UNRECOVERED_JUMPTABLE);
    return;
  }
  puVar2 = FMemStackBase::Alloc((FMemStackBase *)this,0x10,8);
  *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  **(undefined8 **)&this->field_0x30 = puVar2;
  *(undefined8 **)&this->field_0x30 = puVar2 + 1;
  puVar2[1] = 0;
  *puVar2 = &___7FRHICommandBeginUAVOverlap__6B_;
  return;
}

