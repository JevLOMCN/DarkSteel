// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// SetOnRHICommandList @ 145ecc4f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVertexInputStream::SetOnRHICommandList(FVertexInputStream *this,FRHICommandList *param_1)

{
  FRHIBuffer *pFVar1;
  undefined8 *puVar2;
  IRHICommandContext *pIVar3;
  uint uVar4;
  uint uVar5;
  uint local_28;
  undefined4 uStack_24;
  FRHIBuffer *pFStack_20;
  uint local_18;
  undefined4 uStack_14;
  
  pFVar1 = (this->field3_0x4).VertexBuffer;
  uVar5 = this->Offset;
  uVar4 = this->StreamIndex;
  if ((BADTYPE)this->bStreamSourceSlot) {
    local_28 = uVar4;
    pFStack_20 = pFVar1;
    local_18 = uVar5;
    if (((GRHICommandList.bLatchedBypass) && ((param_1->field_0x29b & 0x20) != 0)) ||
       (param_1->field_0x64 != '\0')) {
      `FRHICommandList::SetStreamSourceSlot'::__l2::<lambda_1>::operator()
                (&local_28,(FRHICommandListBase *)param_1);
    }
    else {
      puVar2 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x30,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar2;
      *(undefined8 **)&param_1->field_0x30 = puVar2 + 1;
      puVar2[1] = 0;
      *puVar2 = &
                ___7__TRHILambdaCommand_VFRHICommandList__V<lambda_1>__1__SetStreamSourceSlot_1_QEAAXIPEAVFRHIStreamSourceSlot__I_Z___6B_
      ;
      puVar2[2] = CONCAT44(uStack_24,local_28);
      puVar2[3] = pFStack_20;
      puVar2[5] = L"TRHILambdaCommand";
      puVar2[4] = CONCAT44(uStack_14,local_18);
    }
  }
  else if ((GRHICommandList.bLatchedBypass) && ((param_1->field_0x29b & 0x20) != 0)) {
    pIVar3 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar3->_padding_ + 0x198))(pIVar3,uVar4,pFVar1,uVar5);
  }
  else {
    puVar2 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar2;
    *(undefined8 **)&param_1->field_0x30 = puVar2 + 1;
    puVar2[1] = 0;
    *puVar2 = &___7FRHICommandSetStreamSource__6B_;
    *(uint *)(puVar2 + 2) = uVar4;
    puVar2[3] = pFVar1;
    *(uint *)(puVar2 + 4) = uVar5;
  }
  return;
}

