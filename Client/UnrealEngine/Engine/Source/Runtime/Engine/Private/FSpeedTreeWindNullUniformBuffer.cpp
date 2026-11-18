// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// InitRHI @ 147e8c2c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSpeedTreeWindNullUniformBuffer::InitRHI
          (FSpeedTreeWindNullUniformBuffer *this,FRHICommandListBase *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FSpeedTreeUniformParameters *pFVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  FSpeedTreeUniformParameters *pFVar8;
  longlong lVar9;
  FSpeedTreeUniformParameters local_268;
  
  FSpeedTreeUniformParameters::FSpeedTreeUniformParameters(&local_268);
  memset(&local_268,0,0x260);
  puVar6 = *(undefined8 **)&this->field_0x30;
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = FMemory::Malloc(0x260,0x10);
    *(undefined8 **)&this->field_0x30 = puVar6;
  }
  lVar9 = 4;
  pFVar5 = &local_268;
  do {
    pFVar8 = pFVar5;
    puVar7 = puVar6;
    uVar1 = *(undefined8 *)((longlong)&(pFVar8->WindVector).field0_0x0 + 8);
    uVar2 = *(undefined8 *)&(pFVar8->WindGlobal).field0_0x0;
    uVar3 = *(undefined8 *)((longlong)&(pFVar8->WindGlobal).field0_0x0 + 8);
    *puVar7 = *(undefined8 *)&(pFVar8->WindVector).field0_0x0;
    puVar7[1] = uVar1;
    uVar1 = *(undefined8 *)&(pFVar8->WindBranch).field0_0x0;
    uVar4 = *(undefined8 *)((longlong)&(pFVar8->WindBranch).field0_0x0 + 8);
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    uVar2 = *(undefined8 *)&(pFVar8->WindBranchTwitch).field0_0x0;
    uVar3 = *(undefined8 *)((longlong)&(pFVar8->WindBranchTwitch).field0_0x0 + 8);
    puVar7[4] = uVar1;
    puVar7[5] = uVar4;
    uVar1 = *(undefined8 *)&(pFVar8->WindBranchWhip).field0_0x0;
    uVar4 = *(undefined8 *)((longlong)&(pFVar8->WindBranchWhip).field0_0x0 + 8);
    puVar7[6] = uVar2;
    puVar7[7] = uVar3;
    uVar2 = *(undefined8 *)&(pFVar8->WindBranchAnchor).field0_0x0;
    uVar3 = *(undefined8 *)((longlong)&(pFVar8->WindBranchAnchor).field0_0x0 + 8);
    puVar7[8] = uVar1;
    puVar7[9] = uVar4;
    uVar1 = *(undefined8 *)&(pFVar8->WindBranchAdherences).field0_0x0;
    uVar4 = *(undefined8 *)((longlong)&(pFVar8->WindBranchAdherences).field0_0x0 + 8);
    puVar7[10] = uVar2;
    puVar7[0xb] = uVar3;
    uVar2 = *(undefined8 *)&(pFVar8->WindTurbulences).field0_0x0;
    uVar3 = *(undefined8 *)((longlong)&(pFVar8->WindTurbulences).field0_0x0 + 8);
    puVar7[0xc] = uVar1;
    puVar7[0xd] = uVar4;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = uVar3;
    lVar9 = lVar9 + -1;
    puVar6 = puVar7 + 0x10;
    pFVar5 = (FSpeedTreeUniformParameters *)&pFVar8->WindLeaf1Ripple;
  } while (lVar9 != 0);
  uVar1 = *(undefined8 *)((longlong)&(pFVar8->WindLeaf1Ripple).field0_0x0 + 8);
  uVar2 = *(undefined8 *)&(pFVar8->WindLeaf1Tumble).field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&(pFVar8->WindLeaf1Tumble).field0_0x0 + 8);
  puVar7[0x10] = *(undefined8 *)&(pFVar8->WindLeaf1Ripple).field0_0x0;
  puVar7[0x11] = uVar1;
  uVar1 = *(undefined8 *)&(pFVar8->WindLeaf1Twitch).field0_0x0;
  uVar4 = *(undefined8 *)((longlong)&(pFVar8->WindLeaf1Twitch).field0_0x0 + 8);
  puVar7[0x12] = uVar2;
  puVar7[0x13] = uVar3;
  uVar2 = *(undefined8 *)&(pFVar8->WindLeaf2Ripple).field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&(pFVar8->WindLeaf2Ripple).field0_0x0 + 8);
  puVar7[0x14] = uVar1;
  puVar7[0x15] = uVar4;
  uVar1 = *(undefined8 *)&(pFVar8->WindLeaf2Tumble).field0_0x0;
  uVar4 = *(undefined8 *)((longlong)&(pFVar8->WindLeaf2Tumble).field0_0x0 + 8);
  puVar7[0x16] = uVar2;
  puVar7[0x17] = uVar3;
  uVar2 = *(undefined8 *)&(pFVar8->WindLeaf2Twitch).field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&(pFVar8->WindLeaf2Twitch).field0_0x0 + 8);
  puVar7[0x18] = uVar1;
  puVar7[0x19] = uVar4;
  puVar7[0x1a] = uVar2;
  puVar7[0x1b] = uVar3;
  TUniformBuffer<FSpeedTreeUniformParameters>::InitRHI
            ((TUniformBuffer<FSpeedTreeUniformParameters> *)this,param_1);
  return;
}

