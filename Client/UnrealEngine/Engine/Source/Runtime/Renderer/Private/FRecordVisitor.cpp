// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// AddVisualizeQuery @ 145528f80

void __thiscall
FGPUOcclusionPacket::FRecordVisitor::AddVisualizeQuery
          (FRecordVisitor *this,TBox<double> *param_1,FColor *param_2)

{
  int *piVar1;
  uint uVar2;
  TTuple<UE::Math::TBox<double>,FColor> *pTVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  int iVar18;
  undefined4 uStack_c;
  
  dVar4 = (param_1->Min).field0_0x0._s_0.X;
  dVar5 = (param_1->Min).field0_0x0._s_0.Y;
  dVar6 = (param_1->Min).field0_0x0._s_0.Z;
  dVar7 = (param_1->Max).field0_0x0._s_0.X;
  dVar8 = (param_1->Max).field0_0x0._s_0.Y;
  dVar9 = (param_1->Max).field0_0x0._s_0.Z;
  uVar10 = param_1->IsValid;
  uVar11 = param_1->Pad[0];
  uVar12 = param_1->Pad[1];
  uVar13 = param_1->Pad[2];
  uVar14 = param_1->Pad[3];
  uVar15 = param_1->Pad[4];
  uVar16 = param_1->Pad[5];
  uVar17 = param_1->Pad[6];
  uVar2 = (param_2->field0_0x0).Bits;
  piVar1 = &(this->VisualizeQueries).ArrayMax;
  iVar18 = (this->VisualizeQueries).ArrayNum;
  if (iVar18 == *piVar1) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TTuple<UE::Math::TBox<double>,FColor>_>_>
                       (0x840,&(this->VisualizeQueries).AllocatorInstance,piVar1);
  }
  (this->VisualizeQueries).ArrayNum = iVar18 + 1;
  pTVar3 = (this->VisualizeQueries).AllocatorInstance.Data;
  *(double *)(pTVar3 + iVar18) = dVar4;
  *(double *)&pTVar3[iVar18].field_0x8 = dVar5;
  *(double *)&pTVar3[iVar18].field_0x10 = dVar6;
  *(double *)(&pTVar3[iVar18].field_0x10 + 8) = dVar7;
  *(double *)&pTVar3[iVar18].field_0x20 = dVar8;
  *(double *)(&pTVar3[iVar18].field_0x20 + 8) = dVar9;
  pTVar3 = pTVar3 + iVar18;
  pTVar3->field_0x30 = uVar10;
  pTVar3->field_0x31 = uVar11;
  pTVar3->field_0x32 = uVar12;
  pTVar3->field_0x33 = uVar13;
  pTVar3->field_0x34 = uVar14;
  pTVar3->field_0x35 = uVar15;
  pTVar3->field_0x36 = uVar16;
  pTVar3->field_0x37 = uVar17;
  *(ulonglong *)(&pTVar3->field_0x30 + 8) = CONCAT44(uStack_c,uVar2);
  return;
}

