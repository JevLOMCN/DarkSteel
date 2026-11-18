// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// SetBlendFactor @ 145a7cbd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRHICommandList::SetBlendFactor(FRHICommandList *this,FLinearColor *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  IRHICommandContext *pIVar2;
  undefined8 *puVar3;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar2 = FRHICommandListBase::GetContext((FRHICommandListBase *)this);
    UNRECOVERED_JUMPTABLE = *(code **)(pIVar2->_padding_ + 0x1d8);
                    /* WARNING: Could not recover jumptable at 0x000145a7cc11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pIVar2,param_1,UNRECOVERED_JUMPTABLE);
    return;
  }
  puVar3 = FMemStackBase::Alloc((FMemStackBase *)this,0x20,8);
  *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  **(undefined8 **)&this->field_0x30 = puVar3;
  *(undefined8 **)&this->field_0x30 = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &___7FRHICommandSetBlendFactor__6B_;
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  puVar3[2] = *(undefined8 *)&param_1->field0_0x0;
  puVar3[3] = uVar1;
  return;
}

