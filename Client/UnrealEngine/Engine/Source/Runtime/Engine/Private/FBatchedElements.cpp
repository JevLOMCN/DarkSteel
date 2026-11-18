// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 25

// FBatchedElements @ 147686db0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FBatchedElements * __thiscall FBatchedElements::FBatchedElements(FBatchedElements *this)

{
  uint uVar1;
  
  (this->WireTriVerts).bNeedsCPUAccess = true;
  (this->LineVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WireTriVerts)._padding_ = (longlong)&___7__TResourceArray_UFSimpleElementVertex___0A___6B_;
  (this->LineVertices).ArrayNum = 0;
  (this->LineVertices).ArrayMax = 0;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  (this->WireTris).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WireTris).ArrayNum = 0;
  (this->WireTris).ArrayMax = 0;
  (this->WireTriVerts)._padding_ = 0;
  (this->WireTriVerts)._padding_ = 0;
  (this->ThickLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ThickLines).ArrayNum = 0;
  (this->ThickLines).ArrayMax = 0;
  (this->Sprites).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sprites).ArrayNum = 0;
  (this->Sprites).ArrayMax = 0;
  this->MaxMeshIndicesAllowed = (int)((ulonglong)(longlong)GRHIGlobals.DrawUPIndexCheckCount >> 2);
  uVar1 = (uint)((ulonglong)(longlong)GRHIGlobals.DrawUPVertexCheckCount >> 6);
  (this->MeshElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshElements).ArrayNum = 0;
  (this->MeshElements).ArrayMax = 0;
  if (0xffff < uVar1) {
    uVar1 = 0xffff;
  }
  (this->MeshVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->MaxMeshVerticesAllowed = uVar1;
  (this->MeshVertices).ArrayNum = 0;
  (this->MeshVertices).ArrayMax = 0;
  return this;
}

// AddAllocationInfo @ 14768fc10

void __thiscall FBatchedElements::AddAllocationInfo(FBatchedElements *this,FAllocationInfo *param_1)

{
  param_1->NumLineVertices = param_1->NumLineVertices + (this->LineVertices).ArrayNum;
  param_1->NumPoints = param_1->NumPoints + (this->Points).ArrayNum;
  param_1->NumWireTris = param_1->NumWireTris + (this->WireTris).ArrayNum;
  param_1->NumWireTriVerts = param_1->NumWireTriVerts + (int)(this->WireTriVerts)._padding_;
  param_1->NumThickLines = param_1->NumThickLines + (this->ThickLines).ArrayNum;
  param_1->NumSprites = param_1->NumSprites + (this->Sprites).ArrayNum;
  param_1->NumMeshElements = param_1->NumMeshElements + (this->MeshElements).ArrayNum;
  param_1->NumMeshVertices = param_1->NumMeshVertices + (this->MeshVertices).ArrayNum;
  return;
}

// AddLine @ 147691200

void __thiscall
FBatchedElements::AddLine
          (FBatchedElements *this,TVector<double> *param_1,TVector<double> *param_2,
          FLinearColor *param_3,FHitProxyId param_4,float param_5,float param_6,bool param_7)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  float *pfVar4;
  undefined8 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  FScriptContainerElement *pFVar10;
  undefined8 uVar11;
  int iVar12;
  FColor FVar13;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  ulonglong uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_50;
  
  fVar17 = param_6;
  fVar16 = param_5;
  uVar11 = *(undefined8 *)&param_3->field0_0x0;
  uStack_50 = CONCAT44(0x3f800000,(int)*(undefined8 *)((longlong)&param_3->field0_0x0 + 8));
  if (param_5 == 0.0) {
    if (param_6 == 0.0) {
      iVar12 = (this->LineVertices).ArrayNum;
      if (iVar12 == (this->LineVertices).ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1040,(ForAnyElementType *)this,&(this->LineVertices).ArrayMax);
      }
      pFVar10 = (this->LineVertices).AllocatorInstance.Data;
      (this->LineVertices).ArrayNum = iVar12 + 1;
      lVar15 = (longlong)iVar12 * 0x40;
      param_5 = (float)param_4.Index;
      FVar13 = FHitProxyId::GetColor((FHitProxyId *)&param_5);
      *(undefined8 *)(pFVar10 + lVar15 + 0xc) = 0x3f800000;
      *(undefined8 *)(pFVar10 + lVar15) = 0;
      *(undefined4 *)(pFVar10 + lVar15 + 8) = 0;
      *(undefined8 *)(pFVar10 + lVar15 + 0x14) = 0;
      *(undefined4 *)(pFVar10 + lVar15 + 0x1c) = 0x3f800000;
      dVar6 = (param_1->field0_0x0)._s_0.X;
      dVar7 = (param_1->field0_0x0)._s_0.Y;
      dVar8 = (param_1->field0_0x0)._s_0.Z;
      fVar16 = (float)dVar6;
      fVar17 = (float)dVar7;
      fVar18 = (float)dVar8;
      pFVar3 = pFVar10 + lVar15;
      *(float *)pFVar3 = fVar16;
      *(float *)(pFVar3 + 4) = fVar17;
      *(float *)(pFVar3 + 8) = fVar18;
      *(undefined4 *)(pFVar3 + 0xc) = 0x3f800000;
      pFVar3 = pFVar10 + lVar15 + 0x10;
      *(float *)pFVar3 = (float)(dVar6 - (double)fVar16);
      *(float *)(pFVar3 + 4) = (float)(dVar7 - (double)fVar17);
      *(float *)(pFVar3 + 8) = (float)(dVar8 - (double)fVar18);
      *(undefined4 *)(pFVar3 + 0xc) = 0;
      fVar16 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
      *(float *)(pFVar10 + lVar15 + 0x24) =
           (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
      *(float *)(pFVar10 + lVar15 + 0x20) = fVar16;
      *(undefined8 *)(pFVar10 + lVar15 + 0x28) = uVar11;
      *(undefined8 *)(pFVar10 + lVar15 + 0x28 + 8) = uStack_50;
      *(undefined4 *)(pFVar10 + lVar15 + 0x38) =
           *(undefined4 *)CONCAT44(extraout_var,FVar13.field0_0x0);
      iVar12 = (this->LineVertices).ArrayNum;
      if (iVar12 == (this->LineVertices).ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1040,(ForAnyElementType *)this,&(this->LineVertices).ArrayMax);
      }
      pFVar10 = (this->LineVertices).AllocatorInstance.Data;
      (this->LineVertices).ArrayNum = iVar12 + 1;
      lVar15 = (longlong)iVar12 * 0x40;
      param_5 = (float)param_4.Index;
      FVar13 = FHitProxyId::GetColor((FHitProxyId *)&param_5);
      *(undefined8 *)(pFVar10 + lVar15) = 0;
      *(undefined4 *)(pFVar10 + lVar15 + 8) = 0;
      *(undefined8 *)(pFVar10 + lVar15 + 0xc) = 0x3f800000;
      *(undefined8 *)(pFVar10 + lVar15 + 0x14) = 0;
      *(undefined4 *)(pFVar10 + lVar15 + 0x1c) = 0x3f800000;
      dVar6 = (param_2->field0_0x0)._s_0.X;
      dVar7 = (param_2->field0_0x0)._s_0.Y;
      dVar8 = (param_2->field0_0x0)._s_0.Z;
      fVar16 = (float)dVar6;
      fVar17 = (float)dVar7;
      fVar18 = (float)dVar8;
      pFVar3 = pFVar10 + lVar15;
      *(float *)pFVar3 = fVar16;
      *(float *)(pFVar3 + 4) = fVar17;
      *(float *)(pFVar3 + 8) = fVar18;
      *(undefined4 *)(pFVar3 + 0xc) = 0x3f800000;
      pFVar3 = pFVar10 + lVar15 + 0x10;
      *(float *)pFVar3 = (float)(dVar6 - (double)fVar16);
      *(float *)(pFVar3 + 4) = (float)(dVar7 - (double)fVar17);
      *(float *)(pFVar3 + 8) = (float)(dVar8 - (double)fVar18);
      *(undefined4 *)(pFVar3 + 0xc) = 0;
      fVar16 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
      *(float *)(pFVar10 + lVar15 + 0x24) =
           (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
      *(float *)(pFVar10 + lVar15 + 0x20) = fVar16;
      *(undefined8 *)(pFVar10 + lVar15 + 0x28) = uVar11;
      *(undefined8 *)(pFVar10 + lVar15 + 0x28 + 8) = uStack_50;
      *(undefined4 *)(pFVar10 + lVar15 + 0x38) =
           *(undefined4 *)CONCAT44(extraout_var_00,FVar13.field0_0x0);
    }
    else {
      iVar12 = (this->WireTris).ArrayNum;
      piVar1 = &(this->WireTris).ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(this->WireTris).AllocatorInstance,piVar1);
      }
      (this->WireTris).ArrayNum = iVar12 + 1;
      plVar2 = &(this->WireTriVerts)._padding_;
      *(float *)((this->WireTris).AllocatorInstance.Data + (longlong)iVar12 * 4) = fVar17;
      iVar12 = (int)(this->WireTriVerts)._padding_;
      if (iVar12 == *(int *)((longlong)&(this->WireTriVerts)._padding_ + 4)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                           (0x1040,(ForAnyElementType *)plVar2,
                            (int *)((longlong)&(this->WireTriVerts)._padding_ + 4));
      }
      *(int *)&(this->WireTriVerts)._padding_ = iVar12 + 1;
      uVar14 = *plVar2;
      if ((uVar14 & 1) != 0) {
        uVar14 = (longlong)plVar2 + ((longlong)uVar14 >> 0x18);
      }
      lVar15 = (longlong)iVar12 * 0x40;
      param_5 = (float)param_4.Index;
      FVar13 = FHitProxyId::GetColor((FHitProxyId *)&param_5);
      *(undefined8 *)(lVar15 + 0xc + uVar14) = 0x3f800000;
      *(undefined8 *)(lVar15 + uVar14) = 0;
      *(undefined4 *)(lVar15 + 8 + uVar14) = 0;
      *(undefined8 *)(lVar15 + 0x14 + uVar14) = 0;
      *(undefined4 *)(lVar15 + 0x1c + uVar14) = 0x3f800000;
      dVar6 = (param_1->field0_0x0)._s_0.X;
      dVar7 = (param_1->field0_0x0)._s_0.Y;
      dVar8 = (param_1->field0_0x0)._s_0.Z;
      fVar16 = (float)dVar6;
      fVar17 = (float)dVar7;
      fVar18 = (float)dVar8;
      pfVar4 = (float *)(lVar15 + uVar14);
      *pfVar4 = fVar16;
      pfVar4[1] = fVar17;
      pfVar4[2] = fVar18;
      pfVar4[3] = 1.0;
      pfVar4 = (float *)(lVar15 + 0x10 + uVar14);
      *pfVar4 = (float)(dVar6 - (double)fVar16);
      pfVar4[1] = (float)(dVar7 - (double)fVar17);
      pfVar4[2] = (float)(dVar8 - (double)fVar18);
      pfVar4[3] = 0.0;
      fVar16 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
      *(float *)(lVar15 + 0x24 + uVar14) =
           (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
      *(float *)(lVar15 + 0x20 + uVar14) = fVar16;
      puVar5 = (undefined8 *)(lVar15 + 0x28 + uVar14);
      *puVar5 = uVar11;
      puVar5[1] = uStack_50;
      *(undefined4 *)(lVar15 + 0x38 + uVar14) =
           *(undefined4 *)CONCAT44(extraout_var_01,FVar13.field0_0x0);
      iVar12 = (int)(this->WireTriVerts)._padding_;
      if (iVar12 == *(int *)((longlong)&(this->WireTriVerts)._padding_ + 4)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                           (0x1040,(ForAnyElementType *)plVar2,
                            (int *)((longlong)&(this->WireTriVerts)._padding_ + 4));
      }
      *(int *)&(this->WireTriVerts)._padding_ = iVar12 + 1;
      uVar14 = *plVar2;
      if ((uVar14 & 1) != 0) {
        uVar14 = (longlong)plVar2 + ((longlong)uVar14 >> 0x18);
      }
      lVar15 = (longlong)iVar12 * 0x40;
      param_5 = (float)param_4.Index;
      FVar13 = FHitProxyId::GetColor((FHitProxyId *)&param_5);
      *(undefined8 *)(lVar15 + uVar14) = 0;
      *(undefined4 *)(lVar15 + 8 + uVar14) = 0;
      *(undefined8 *)(lVar15 + 0xc + uVar14) = 0x3f800000;
      *(undefined8 *)(lVar15 + 0x14 + uVar14) = 0;
      *(undefined4 *)(lVar15 + 0x1c + uVar14) = 0x3f800000;
      dVar6 = (param_2->field0_0x0)._s_0.X;
      dVar7 = (param_2->field0_0x0)._s_0.Y;
      dVar8 = (param_2->field0_0x0)._s_0.Z;
      fVar16 = (float)dVar6;
      fVar17 = (float)dVar7;
      fVar18 = (float)dVar8;
      pfVar4 = (float *)(lVar15 + uVar14);
      *pfVar4 = fVar16;
      pfVar4[1] = fVar17;
      pfVar4[2] = fVar18;
      pfVar4[3] = 1.0;
      pfVar4 = (float *)(lVar15 + 0x10 + uVar14);
      *pfVar4 = (float)(dVar6 - (double)fVar16);
      pfVar4[1] = (float)(dVar7 - (double)fVar17);
      pfVar4[2] = (float)(dVar8 - (double)fVar18);
      pfVar4[3] = 0.0;
      fVar16 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
      *(float *)(lVar15 + 0x24 + uVar14) =
           (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
      *(float *)(lVar15 + 0x20 + uVar14) = fVar16;
      puVar5 = (undefined8 *)(lVar15 + 0x28 + uVar14);
      *puVar5 = uVar11;
      puVar5[1] = uStack_50;
      *(undefined4 *)(lVar15 + 0x38 + uVar14) =
           *(undefined4 *)CONCAT44(extraout_var_02,FVar13.field0_0x0);
      iVar12 = (int)(this->WireTriVerts)._padding_;
      if (iVar12 == *(int *)((longlong)&(this->WireTriVerts)._padding_ + 4)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                           (0x1040,(ForAnyElementType *)plVar2,
                            (int *)((longlong)&(this->WireTriVerts)._padding_ + 4));
      }
      *(int *)&(this->WireTriVerts)._padding_ = iVar12 + 1;
      uVar14 = *plVar2;
      if ((uVar14 & 1) != 0) {
        uVar14 = (longlong)plVar2 + ((longlong)uVar14 >> 0x18);
      }
      lVar15 = (longlong)iVar12 * 0x40;
      param_5 = (float)param_4.Index;
      FVar13 = FHitProxyId::GetColor((FHitProxyId *)&param_5);
      *(undefined8 *)(lVar15 + uVar14) = 0;
      *(undefined4 *)(lVar15 + 8 + uVar14) = 0;
      *(undefined8 *)(lVar15 + 0xc + uVar14) = 0x3f800000;
      *(undefined8 *)(lVar15 + 0x14 + uVar14) = 0;
      *(undefined4 *)(lVar15 + 0x1c + uVar14) = 0x3f800000;
      dVar6 = (param_2->field0_0x0)._s_0.X;
      dVar7 = (param_2->field0_0x0)._s_0.Y;
      dVar8 = (param_2->field0_0x0)._s_0.Z;
      fVar16 = (float)dVar6;
      fVar17 = (float)dVar7;
      fVar18 = (float)dVar8;
      pfVar4 = (float *)(lVar15 + uVar14);
      *pfVar4 = fVar16;
      pfVar4[1] = fVar17;
      pfVar4[2] = fVar18;
      pfVar4[3] = 1.0;
      pfVar4 = (float *)(lVar15 + 0x10 + uVar14);
      *pfVar4 = (float)(dVar6 - (double)fVar16);
      pfVar4[1] = (float)(dVar7 - (double)fVar17);
      pfVar4[2] = (float)(dVar8 - (double)fVar18);
      pfVar4[3] = 0.0;
      fVar16 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
      *(float *)(lVar15 + 0x24 + uVar14) =
           (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
      *(float *)(lVar15 + 0x20 + uVar14) = fVar16;
      puVar5 = (undefined8 *)(lVar15 + 0x28 + uVar14);
      *puVar5 = uVar11;
      puVar5[1] = uStack_50;
      *(undefined4 *)(lVar15 + 0x38 + uVar14) =
           *(undefined4 *)CONCAT44(extraout_var_03,FVar13.field0_0x0);
    }
  }
  else {
    iVar12 = (this->ThickLines).ArrayNum;
    piVar1 = &(this->ThickLines).ArrayMax;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,&(this->ThickLines).AllocatorInstance,piVar1);
    }
    pFVar3 = (this->ThickLines).AllocatorInstance.Data;
    (this->ThickLines).ArrayNum = iVar12 + 1;
    dVar6 = (param_1->field0_0x0)._s_0.Y;
    lVar15 = (longlong)iVar12;
    *(double *)(pFVar3 + lVar15 * 0x50) = (param_1->field0_0x0)._s_0.X;
    *(double *)(pFVar3 + lVar15 * 0x50 + 8) = dVar6;
    *(double *)(pFVar3 + lVar15 * 0x50 + 0x10) = (param_1->field0_0x0)._s_0.Z;
    dVar6 = (param_2->field0_0x0)._s_0.Y;
    *(double *)(pFVar3 + lVar15 * 0x50 + 0x18) = (param_2->field0_0x0)._s_0.X;
    *(double *)(pFVar3 + lVar15 * 0x50 + 0x18 + 8) = dVar6;
    dVar6 = (param_2->field0_0x0)._s_0.Z;
    *(float *)(pFVar3 + lVar15 * 0x50 + 0x30) = fVar16;
    *(undefined8 *)(pFVar3 + lVar15 * 0x50 + 0x34) = uVar11;
    *(undefined8 *)(pFVar3 + lVar15 * 0x50 + 0x34 + 8) = uStack_50;
    *(double *)(pFVar3 + lVar15 * 0x50 + 0x28) = dVar6;
    FVar13 = FHitProxyId::GetColor(&param_4);
    uVar9 = *(undefined4 *)CONCAT44(extraout_var_04,FVar13.field0_0x0);
    *(uint *)(pFVar3 + lVar15 * 0x50 + 0x4c) = (uint)param_7;
    *(float *)(pFVar3 + lVar15 * 0x50 + 0x48) = param_6;
    *(undefined4 *)(pFVar3 + lVar15 * 0x50 + 0x44) = uVar9;
  }
  return;
}

// AddPoint @ 147692540

void __thiscall
FBatchedElements::AddPoint
          (FBatchedElements *this,TVector<double> *param_1,float param_2,FLinearColor *param_3,
          FHitProxyId param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  int iVar4;
  FColor FVar5;
  longlong lVar6;
  undefined4 extraout_var;
  undefined4 local_res18;
  FLinearColor_u_0 local_28 [2];
  
  local_28[0]._0_8_ = *(undefined8 *)&param_3->field0_0x0;
  iVar4 = (this->Points).ArrayNum;
  piVar1 = &(this->Points).ArrayMax;
  local_28[0]._s_0.B = (undefined4)*(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  local_28[0]._12_4_ = 0x3f800000;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&(this->Points).AllocatorInstance,piVar1);
  }
  lVar6 = (longlong)iVar4;
  (this->Points).ArrayNum = iVar4 + 1;
  pFVar2 = (this->Points).AllocatorInstance.Data;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  *(double *)(pFVar2 + lVar6 * 0x28) = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar2 + lVar6 * 0x28 + 8) = dVar3;
  *(double *)(pFVar2 + lVar6 * 0x28 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  *(float *)(pFVar2 + lVar6 * 0x28 + 0x18) = param_2;
  FLinearColor::ToFColorSRGB((FLinearColor *)&local_28[0]._s_0);
  *(undefined4 *)(pFVar2 + lVar6 * 0x28 + 0x1c) = local_res18;
  FVar5 = FHitProxyId::GetColor(&param_4);
  *(undefined4 *)(pFVar2 + lVar6 * 0x28 + 0x20) =
       *(undefined4 *)CONCAT44(extraout_var,FVar5.field0_0x0);
  return;
}

// AddReserveLines @ 147692cd0

void __thiscall
FBatchedElements::AddReserveLines(FBatchedElements *this,int param_1,bool param_2,bool param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_3) {
    iVar2 = (this->ThickLines).ArrayNum;
    uVar1 = iVar2 + param_1 * 2;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if ((this->ThickLines).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,uVar1,&(this->ThickLines).AllocatorInstance,iVar2,
                 &(this->ThickLines).ArrayMax);
    }
  }
  else if (param_2) {
    iVar2 = (this->WireTris).ArrayNum;
    uVar1 = iVar2 + param_1;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if ((this->WireTris).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar1,&(this->WireTris).AllocatorInstance,iVar2,&(this->WireTris).ArrayMax);
    }
    iVar2 = (int)(this->WireTriVerts)._padding_;
    uVar1 = iVar2 + param_1 * 3;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (*(int *)((longlong)&(this->WireTriVerts)._padding_ + 4) < (int)uVar1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x40,0x10,uVar1,(ForAnyElementType *)&(this->WireTriVerts)._padding_,iVar2,
                 (int *)((longlong)&(this->WireTriVerts)._padding_ + 4));
      return;
    }
  }
  else {
    iVar2 = (this->LineVertices).ArrayNum;
    uVar1 = iVar2 + param_1 * 2;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if ((this->LineVertices).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,uVar1,(ForAnyElementType *)this,iVar2,&(this->LineVertices).ArrayMax);
      return;
    }
  }
  return;
}

// AddReserveTriangles @ 147692e10

void __thiscall
FBatchedElements::AddReserveTriangles
          (FBatchedElements *this,int param_1,FTexture *param_2,ESimpleElementBlendMode param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  
  uVar5 = 0;
  if (0 < (this->MeshElements).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->MeshElements).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = (this->MeshElements).AllocatorInstance.Data;
      if ((((*(FTexture **)(pFVar7 + lVar6 + 0x18) == param_2) &&
           (*(longlong *)(pFVar7 + lVar6 + 0x20) == 0)) &&
          (*(ESimpleElementBlendMode *)(pFVar7 + lVar6 + 0x28) == param_3)) &&
         (iVar1 = *(int *)(pFVar7 + lVar6 + 0x10), iVar1 + 3 < this->MaxMeshIndicesAllowed)) {
        pFVar7 = pFVar7 + lVar6 + 8;
        uVar5 = iVar1 + param_1;
        if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
        }
        if ((int)uVar5 <= *(int *)(pFVar7 + 0xc)) {
          return;
        }
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar5,(ForAnyElementType *)pFVar7,iVar1,(int *)(pFVar7 + 0xc));
        return;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x68;
    } while ((int)uVar5 < (this->MeshElements).ArrayNum);
  }
  return;
}

// AddReserveVertices @ 147692f30

void __thiscall FBatchedElements::AddReserveVertices(FBatchedElements *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (this->MeshVertices).ArrayNum;
  uVar1 = iVar2 + param_1;
  if (-1 < (int)uVar1) {
    if ((this->MeshVertices).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,uVar1,&(this->MeshVertices).AllocatorInstance,iVar2,
                 &(this->MeshVertices).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// AddSprite @ 1476932b0

void __thiscall
FBatchedElements::AddSprite
          (FBatchedElements *this,TVector<double> *param_1,float param_2,float param_3,
          FTexture *param_4,FLinearColor *param_5,FHitProxyId param_6,float param_7,float param_8,
          float param_9,float param_10,uchar param_11,float param_12)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  FColor FVar9;
  uint uVar10;
  undefined4 extraout_var;
  longlong lVar11;
  
  if (param_4 == (FTexture *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Texture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BatchedElements.cpp"
                       ,0x1ab,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = (this->Sprites).ArrayNum;
  piVar1 = &(this->Sprites).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x858,&(this->Sprites).AllocatorInstance,piVar1);
  }
  (this->Sprites).ArrayNum = iVar8 + 1;
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  pFVar3 = (this->Sprites).AllocatorInstance.Data;
  lVar11 = (longlong)iVar8 * 0x58;
  *(double *)(pFVar3 + lVar11) = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar3 + lVar11 + 8) = dVar5;
  *(double *)(pFVar3 + lVar11 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  *(float *)(pFVar3 + lVar11 + 0x18) = param_2;
  *(float *)(pFVar3 + lVar11 + 0x1c) = param_3;
  *(FTexture **)(pFVar3 + lVar11 + 0x20) = param_4;
  uVar6 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
  *(undefined8 *)(pFVar3 + lVar11 + 0x28) = *(undefined8 *)&param_5->field0_0x0;
  *(undefined8 *)(pFVar3 + lVar11 + 0x28 + 8) = uVar6;
  FVar9 = FHitProxyId::GetColor(&param_6);
  uVar2 = *(undefined4 *)CONCAT44(extraout_var,FVar9.field0_0x0);
  *(float *)(pFVar3 + lVar11 + 0x3c) = param_7;
  *(undefined4 *)(pFVar3 + lVar11 + 0x38) = uVar2;
  if (param_8 == 0.0) {
    uVar10 = (**(code **)(param_4->_padding_ + 0x30))(param_4);
    param_8 = (float)uVar10;
  }
  *(float *)(pFVar3 + lVar11 + 0x40) = param_8;
  *(float *)(pFVar3 + lVar11 + 0x44) = param_9;
  if (param_10 == 0.0) {
    uVar10 = (**(code **)(param_4->_padding_ + 0x38))(param_4);
    param_10 = (float)uVar10;
  }
  *(float *)(pFVar3 + lVar11 + 0x4c) = param_12;
  pFVar3[lVar11 + 0x50] = (FScriptContainerElement)param_11;
  *(float *)(pFVar3 + lVar11 + 0x48) = param_10;
  return;
}

// AddTranslucentLine @ 147693430

void __thiscall
FBatchedElements::AddTranslucentLine
          (FBatchedElements *this,TVector<double> *param_1,TVector<double> *param_2,
          FLinearColor *param_3,FHitProxyId param_4,float param_5,float param_6,bool param_7)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  FColor FVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  longlong lVar11;
  undefined4 extraout_var_04;
  ulonglong uVar12;
  
  fVar8 = param_6;
  fVar7 = param_5;
  if (param_5 == 0.0) {
    if (param_6 == 0.0) {
      iVar9 = (this->LineVertices).ArrayNum;
      if (iVar9 == (this->LineVertices).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1040,(ForAnyElementType *)this,&(this->LineVertices).ArrayMax);
      }
      (this->LineVertices).ArrayNum = iVar9 + 1;
      pFVar4 = (this->LineVertices).AllocatorInstance.Data;
      param_5 = (float)param_4.Index;
      FVar10 = FHitProxyId::GetColor((FHitProxyId *)&param_5);
      FSimpleElementVertex::FSimpleElementVertex
                ((FSimpleElementVertex *)(pFVar4 + (longlong)iVar9 * 0x40),param_1,
                 &UE::Math::TVector2<double>::ZeroVector,param_3,
                 (FColor *)CONCAT44(extraout_var,FVar10.field0_0x0));
      iVar9 = (this->LineVertices).ArrayNum;
      if (iVar9 == (this->LineVertices).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1040,(ForAnyElementType *)this,&(this->LineVertices).ArrayMax);
      }
      (this->LineVertices).ArrayNum = iVar9 + 1;
      pFVar4 = (this->LineVertices).AllocatorInstance.Data;
      param_5 = (float)param_4.Index;
      FVar10 = FHitProxyId::GetColor((FHitProxyId *)&param_5);
      FSimpleElementVertex::FSimpleElementVertex
                ((FSimpleElementVertex *)(pFVar4 + (longlong)iVar9 * 0x40),param_2,
                 &UE::Math::TVector2<double>::ZeroVector,param_3,
                 (FColor *)CONCAT44(extraout_var_00,FVar10.field0_0x0));
    }
    else {
      iVar9 = (this->WireTris).ArrayNum;
      piVar1 = &(this->WireTris).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->WireTris).AllocatorInstance,piVar1);
      }
      (this->WireTris).ArrayNum = iVar9 + 1;
      plVar2 = &(this->WireTriVerts)._padding_;
      *(float *)((this->WireTris).AllocatorInstance.Data + (longlong)iVar9 * 4) = fVar8;
      iVar9 = (int)(this->WireTriVerts)._padding_;
      if (iVar9 == *(int *)((longlong)&(this->WireTriVerts)._padding_ + 4)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                          (0x1040,(ForAnyElementType *)plVar2,
                           (int *)((longlong)&(this->WireTriVerts)._padding_ + 4));
      }
      *(int *)&(this->WireTriVerts)._padding_ = iVar9 + 1;
      uVar12 = *plVar2;
      if ((uVar12 & 1) != 0) {
        uVar12 = (longlong)plVar2 + ((longlong)uVar12 >> 0x18);
      }
      param_5 = (float)param_4.Index;
      FVar10 = FHitProxyId::GetColor((FHitProxyId *)&param_5);
      FSimpleElementVertex::FSimpleElementVertex
                ((FSimpleElementVertex *)((longlong)iVar9 * 0x40 + uVar12),param_1,
                 &UE::Math::TVector2<double>::ZeroVector,param_3,
                 (FColor *)CONCAT44(extraout_var_01,FVar10.field0_0x0));
      iVar9 = (int)(this->WireTriVerts)._padding_;
      if (iVar9 == *(int *)((longlong)&(this->WireTriVerts)._padding_ + 4)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                          (0x1040,(ForAnyElementType *)plVar2,
                           (int *)((longlong)&(this->WireTriVerts)._padding_ + 4));
      }
      *(int *)&(this->WireTriVerts)._padding_ = iVar9 + 1;
      uVar12 = *plVar2;
      if ((uVar12 & 1) != 0) {
        uVar12 = (longlong)plVar2 + ((longlong)uVar12 >> 0x18);
      }
      param_5 = (float)param_4.Index;
      FVar10 = FHitProxyId::GetColor((FHitProxyId *)&param_5);
      FSimpleElementVertex::FSimpleElementVertex
                ((FSimpleElementVertex *)((longlong)iVar9 * 0x40 + uVar12),param_2,
                 &UE::Math::TVector2<double>::ZeroVector,param_3,
                 (FColor *)CONCAT44(extraout_var_02,FVar10.field0_0x0));
      iVar9 = (int)(this->WireTriVerts)._padding_;
      if (iVar9 == *(int *)((longlong)&(this->WireTriVerts)._padding_ + 4)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                          (0x1040,(ForAnyElementType *)plVar2,
                           (int *)((longlong)&(this->WireTriVerts)._padding_ + 4));
      }
      *(int *)&(this->WireTriVerts)._padding_ = iVar9 + 1;
      uVar12 = *plVar2;
      if ((uVar12 & 1) != 0) {
        uVar12 = (longlong)plVar2 + ((longlong)uVar12 >> 0x18);
      }
      param_5 = (float)param_4.Index;
      FVar10 = FHitProxyId::GetColor((FHitProxyId *)&param_5);
      FSimpleElementVertex::FSimpleElementVertex
                ((FSimpleElementVertex *)((longlong)iVar9 * 0x40 + uVar12),param_2,
                 &UE::Math::TVector2<double>::ZeroVector,param_3,
                 (FColor *)CONCAT44(extraout_var_03,FVar10.field0_0x0));
    }
  }
  else {
    iVar9 = (this->ThickLines).ArrayNum;
    if (iVar9 == (this->ThickLines).ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(this->ThickLines).AllocatorInstance,&(this->ThickLines).ArrayMax);
    }
    lVar11 = (longlong)iVar9;
    (this->ThickLines).ArrayNum = iVar9 + 1;
    dVar5 = (param_1->field0_0x0)._s_0.Y;
    pFVar4 = (this->ThickLines).AllocatorInstance.Data;
    *(double *)(pFVar4 + lVar11 * 0x50) = (param_1->field0_0x0)._s_0.X;
    *(double *)(pFVar4 + lVar11 * 0x50 + 8) = dVar5;
    *(double *)(pFVar4 + lVar11 * 0x50 + 0x10) = (param_1->field0_0x0)._s_0.Z;
    dVar5 = (param_2->field0_0x0)._s_0.Y;
    *(double *)(pFVar4 + lVar11 * 0x50 + 0x18) = (param_2->field0_0x0)._s_0.X;
    *(double *)(pFVar4 + lVar11 * 0x50 + 0x18 + 8) = dVar5;
    *(double *)(pFVar4 + lVar11 * 0x50 + 0x28) = (param_2->field0_0x0)._s_0.Z;
    *(float *)(pFVar4 + lVar11 * 0x50 + 0x30) = fVar7;
    uVar6 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
    *(undefined8 *)(pFVar4 + lVar11 * 0x50 + 0x34) = *(undefined8 *)&param_3->field0_0x0;
    *(undefined8 *)(pFVar4 + lVar11 * 0x50 + 0x34 + 8) = uVar6;
    FVar10 = FHitProxyId::GetColor(&param_4);
    uVar3 = *(undefined4 *)CONCAT44(extraout_var_04,FVar10.field0_0x0);
    *(uint *)(pFVar4 + lVar11 * 0x50 + 0x4c) = (uint)param_7;
    *(float *)(pFVar4 + lVar11 * 0x50 + 0x48) = param_6;
    *(undefined4 *)(pFVar4 + lVar11 * 0x50 + 0x44) = uVar3;
  }
  return;
}

// AddTriangle @ 1476937b0

void __thiscall
FBatchedElements::AddTriangle
          (FBatchedElements *this,int param_1,int param_2,int param_3,
          FBatchedElementParameters *param_4,ESimpleElementBlendMode param_5)

{
  FDepthFieldGlowInfo local_48;
  
  local_48.bEnableGlow = 0;
  local_48.GlowColor.field0_0x0._0_8_ = 0;
  local_48.GlowColor.field0_0x0._8_8_ = 0;
  local_48.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_48.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_48.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
  local_48.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
  AddTriangleExtensive(this,param_1,param_2,param_3,param_4,GWhiteTexture,param_5,&local_48);
  return;
}

// AddTriangle @ 147693820

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

void __thiscall
FBatchedElements::AddTriangle
          (FBatchedElements *this,int param_1,int param_2,int param_3,FTexture *param_4,
          EBlendMode param_5)

{
  ESimpleElementBlendMode EVar1;
  FDepthFieldGlowInfo local_48;
  
  EVar1 = SE_BLEND_Opaque;
  switch(param_5) {
  case BLEND_Masked:
  case BLEND_Translucent:
    EVar1 = SE_BLEND_Translucent;
    break;
  case BLEND_Additive:
    EVar1 = SE_BLEND_Additive;
    break;
  case BLEND_ColoredTransmittanceOnly:
    EVar1 = SE_BLEND_Modulate;
    break;
  case BLEND_AlphaComposite:
    EVar1 = SE_BLEND_AlphaComposite;
    break;
  case BLEND_AlphaHoldout:
    EVar1 = SE_BLEND_AlphaHoldout;
  }
  local_48.bEnableGlow = 0;
  local_48.GlowColor.field0_0x0._0_8_ = 0;
  local_48.GlowColor.field0_0x0._8_8_ = 0;
  local_48.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_48.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_48.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
  local_48.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
  AddTriangleExtensive
            (this,param_1,param_2,param_3,(FBatchedElementParameters *)0x0,param_4,EVar1,&local_48);
  return;
}

// AddTriangle @ 147693900

void __thiscall
FBatchedElements::AddTriangle
          (FBatchedElements *this,int param_1,int param_2,int param_3,FTexture *param_4,
          ESimpleElementBlendMode param_5,FDepthFieldGlowInfo *param_6)

{
  AddTriangleExtensive
            (this,param_1,param_2,param_3,(FBatchedElementParameters *)0x0,param_4,param_5,param_6);
  return;
}

// AddTriangleExtensive @ 147693940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBatchedElements::AddTriangleExtensive
          (FBatchedElements *this,int param_1,int param_2,int param_3,
          FBatchedElementParameters *param_4,FTexture *param_5,ESimpleElementBlendMode param_6,
          FDepthFieldGlowInfo *param_7)

{
  undefined1 *puVar1;
  int *piVar2;
  FBatchedElementParameters *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  short local_38;
  short local_36;
  short local_34 [6];
  
  if ((param_5 == (FTexture *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BatchedElements.cpp"
                         ,0x10c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar12 = 0;
  if (0 < (this->MeshElements).ArrayNum) {
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (this->MeshElements).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar13 = (this->MeshElements).AllocatorInstance.Data;
      if (((((*(FTexture **)(pFVar13 + lVar11 + 0x18) == param_5) &&
            (*(FBatchedElementParameters **)(pFVar13 + lVar11 + 0x20) == param_4)) &&
           (*(ESimpleElementBlendMode *)(pFVar13 + lVar11 + 0x28) == param_6)) &&
          ((*(int *)(pFVar13 + lVar11 + 0x10) + 3 < this->MaxMeshIndicesAllowed &&
           (param_7->bEnableGlow == (*(uint *)(pFVar13 + lVar11 + 0x30) & 1))))) &&
         (((*(uint *)(pFVar13 + lVar11 + 0x30) & 1) == 0 ||
          ((((*(float *)(pFVar13 + lVar11 + 0x34) == (param_7->GlowColor).field0_0x0._s_0.R &&
             (*(float *)(pFVar13 + lVar11 + 0x38) == (param_7->GlowColor).field0_0x0._s_0.G)) &&
            ((*(float *)(pFVar13 + lVar11 + 0x3c) == (param_7->GlowColor).field0_0x0._s_0.B &&
             (((*(float *)(pFVar13 + lVar11 + 0x40) == (param_7->GlowColor).field0_0x0._s_0.A &&
               (*(double *)(pFVar13 + lVar11 + 0x48) == (param_7->GlowOuterRadius).field0_0x0._s_0.X
               )) && (*(double *)(pFVar13 + lVar11 + 0x50) ==
                      (param_7->GlowOuterRadius).field0_0x0._s_0.Y)))))) &&
           ((*(double *)(pFVar13 + lVar11 + 0x58) == (param_7->GlowInnerRadius).field0_0x0._s_0.X &&
            (*(double *)(pFVar13 + lVar11 + 0x60) == (param_7->GlowInnerRadius).field0_0x0._s_0.Y)))
           ))))) {
        iVar9 = *(int *)(pFVar13 + lVar11);
        if ((-1 < param_1 - iVar9) &&
           (((iVar10 = this->MaxMeshVerticesAllowed, param_1 - iVar9 < iVar10 &&
             (-1 < param_2 - iVar9)) &&
            ((param_2 - iVar9 < iVar10 && ((-1 < param_3 - iVar9 && (param_3 - iVar9 < iVar10)))))))
           ) {
          uVar8 = 0;
          if ((int)uVar12 < (this->MeshElements).ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar13 = (this->MeshElements).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x68;
          if (pFVar13 != (FScriptContainerElement *)0x0) goto LAB_147693c8b;
          break;
        }
      }
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x68;
    } while ((int)uVar12 < (this->MeshElements).ArrayNum);
  }
  iVar9 = -(param_1 - param_2);
  if (iVar9 < 0) {
    iVar9 = param_1 - param_2;
  }
  if (iVar9 < this->MaxMeshVerticesAllowed) {
    iVar9 = -(param_1 - param_3);
    if (iVar9 < 0) {
      iVar9 = param_1 - param_3;
    }
    if (iVar9 < this->MaxMeshVerticesAllowed) {
      iVar9 = (this->MeshElements).ArrayNum;
      piVar2 = &(this->MeshElements).ArrayMax;
      if (iVar9 == *piVar2) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x868,&(this->MeshElements).AllocatorInstance,piVar2);
      }
      (this->MeshElements).ArrayNum = iVar9 + 1;
      pFVar13 = (this->MeshElements).AllocatorInstance.Data + (longlong)iVar9 * 0x68;
      DefaultConstructItems<FBatchedElements::FBatchedMeshElement,int>(pFVar13,1);
      *(FTexture **)(pFVar13 + 0x18) = param_5;
      pFVar3 = *(FBatchedElementParameters **)(pFVar13 + 0x20);
      if (pFVar3 != param_4) {
        *(FBatchedElementParameters **)(pFVar13 + 0x20) = param_4;
        if (param_4 != (FBatchedElementParameters *)0x0) {
          *(int *)&param_4->field_0x8 = *(int *)&param_4->field_0x8 + 1;
        }
        if (pFVar3 != (FBatchedElementParameters *)0x0) {
          puVar1 = &pFVar3->field_0x8;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          if (*(int *)puVar1 == 0) {
            (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
          }
        }
      }
      *(ESimpleElementBlendMode *)(pFVar13 + 0x28) = param_6;
      uVar5 = *(undefined8 *)((longlong)&(param_7->GlowColor).field0_0x0 + 4);
      iVar9 = param_2;
      if (param_1 < param_2) {
        iVar9 = param_1;
      }
      *(undefined8 *)(pFVar13 + 0x30) = *(undefined8 *)param_7;
      *(undefined8 *)(pFVar13 + 0x38) = uVar5;
      iVar10 = param_3;
      if (iVar9 < param_3) {
        iVar10 = iVar9;
      }
      dVar6 = (param_7->GlowOuterRadius).field0_0x0._s_0.X;
      *(undefined8 *)(pFVar13 + 0x40) =
           *(undefined8 *)((longlong)&(param_7->GlowColor).field0_0x0 + 0xc);
      *(double *)(pFVar13 + 0x48) = dVar6;
      dVar6 = (param_7->GlowInnerRadius).field0_0x0._s_0.X;
      *(double *)(pFVar13 + 0x50) = (param_7->GlowOuterRadius).field0_0x0._s_0.Y;
      *(double *)(pFVar13 + 0x58) = dVar6;
      *(double *)(pFVar13 + 0x60) = (param_7->GlowInnerRadius).field0_0x0._s_0.Y;
      *(int *)(pFVar13 + 4) = param_1;
      *(int *)pFVar13 = iVar10;
      if (pFVar13 == (FScriptContainerElement *)0x0) {
        return;
      }
LAB_147693c8b:
      local_38 = (short)param_1 - *(short *)pFVar13;
      if (((*(short **)(pFVar13 + 8) <= &local_38) &&
          (&local_38 < *(short **)(pFVar13 + 8) + *(int *)(pFVar13 + 0x14))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = *(int *)(pFVar13 + 0x10);
      if (iVar9 == *(int *)(pFVar13 + 0x14)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x202,(ForAnyElementType *)(pFVar13 + 8),(int *)(pFVar13 + 0x14));
      }
      *(int *)(pFVar13 + 0x10) = iVar9 + 1;
      *(short *)(*(longlong *)(pFVar13 + 8) + (longlong)iVar9 * 2) = local_38;
      local_36 = (short)param_2 - *(short *)pFVar13;
      if (((*(short **)(pFVar13 + 8) <= &local_36) &&
          (&local_36 < *(short **)(pFVar13 + 8) + *(int *)(pFVar13 + 0x14))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = *(int *)(pFVar13 + 0x10);
      if (iVar9 == *(int *)(pFVar13 + 0x14)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x202,(ForAnyElementType *)(pFVar13 + 8),(int *)(pFVar13 + 0x14));
      }
      *(int *)(pFVar13 + 0x10) = iVar9 + 1;
      *(short *)(*(longlong *)(pFVar13 + 8) + (longlong)iVar9 * 2) = local_36;
      local_34[0] = (short)param_3 - *(short *)pFVar13;
      if (((*(short **)(pFVar13 + 8) <= local_34) &&
          (local_34 < *(short **)(pFVar13 + 8) + *(int *)(pFVar13 + 0x14))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = *(int *)(pFVar13 + 0x10);
      if (iVar9 == *(int *)(pFVar13 + 0x14)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x202,(ForAnyElementType *)(pFVar13 + 8),(int *)(pFVar13 + 0x14));
      }
      *(int *)(pFVar13 + 0x10) = iVar9 + 1;
      *(short *)(*(longlong *)(pFVar13 + 8) + (longlong)iVar9 * 2) = local_34[0];
      iVar9 = *(int *)(pFVar13 + 4);
      if (*(int *)(pFVar13 + 4) < param_1) {
        iVar9 = param_1;
      }
      if (param_2 < iVar9) {
        param_2 = iVar9;
      }
      if (param_3 < param_2) {
        param_3 = param_2;
      }
      *(int *)(pFVar13 + 4) = param_3;
      return;
    }
  }
  if (2 < (byte)LogBatchedElements._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBatchedElements);
  }
  return;
}

// AddVertex @ 147693ef0

int __thiscall
FBatchedElements::AddVertex
          (FBatchedElements *this,TVector4<double> *param_1,TVector2<double> *param_2,
          FLinearColor *param_3,FHitProxyId param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (this->MeshVertices).ArrayNum;
  piVar1 = &(this->MeshVertices).ArrayMax;
  iVar3 = iVar2;
  if (iVar2 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->MeshVertices).AllocatorInstance,piVar1);
    (this->MeshVertices).ArrayNum = iVar3;
  }
  (this->MeshVertices).ArrayNum = iVar3 + 1;
  FSimpleElementVertex::FSimpleElementVertex
            ((FSimpleElementVertex *)
             ((this->MeshVertices).AllocatorInstance.Data + (longlong)iVar3 * 0x40),param_1,param_2,
             param_3,param_4);
  return iVar2;
}

// AddVertexf @ 147693f80

int __thiscall
FBatchedElements::AddVertexf
          (FBatchedElements *this,TVector4<float> *param_1,TVector2<float> *param_2,
          FLinearColor *param_3,FHitProxyId param_4)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  int iVar5;
  FColor FVar6;
  undefined4 extraout_var;
  longlong lVar7;
  
  iVar2 = (this->MeshVertices).ArrayNum;
  piVar1 = &(this->MeshVertices).ArrayMax;
  iVar5 = iVar2;
  if (iVar2 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,&(this->MeshVertices).AllocatorInstance,piVar1);
    (this->MeshVertices).ArrayNum = iVar5;
  }
  pFVar3 = (this->MeshVertices).AllocatorInstance.Data;
  (this->MeshVertices).ArrayNum = iVar5 + 1;
  lVar7 = (longlong)iVar5 * 0x40;
  FVar6 = FHitProxyId::GetColor(&param_4);
  uVar4 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)(pFVar3 + lVar7) = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)(pFVar3 + lVar7 + 8) = uVar4;
  *(undefined8 *)(pFVar3 + lVar7 + 0x10) = 0;
  *(undefined8 *)(pFVar3 + lVar7 + 0x10 + 8) = 0;
  ((TVector2<float>_u_0 *)(pFVar3 + lVar7 + 0x20))->_s_0 =
       (TVector2<float>_u_0_s_0)param_2->field0_0x0;
  uVar4 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  *(undefined8 *)(pFVar3 + lVar7 + 0x28) = *(undefined8 *)&param_3->field0_0x0;
  *(undefined8 *)(pFVar3 + lVar7 + 0x28 + 8) = uVar4;
  *(undefined4 *)(pFVar3 + lVar7 + 0x38) = *(undefined4 *)CONCAT44(extraout_var,FVar6.field0_0x0);
  return iVar2;
}

// Append @ 1476942a0

void __thiscall FBatchedElements::Append(FBatchedElements *this,FBatchedElements *param_1)

{
  TArray<FBatchedElements::FBatchedPoint,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FBatchedElements::FBatchedWireTris,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  longlong *plVar4;
  TArray<FBatchedElements::FBatchedThickLines,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FBatchedElements::FBatchedSprite,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FBatchedElements::FBatchedMeshElement,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  ulonglong uVar12;
  void *_Src;
  
  TArray<FSimpleElementVertex,TSizedDefaultAllocator<32>_>::
  Append<FSimpleElementVertex,TSizedDefaultAllocator<32>_>
            (&this->LineVertices,&param_1->LineVertices);
  pTVar1 = &this->Points;
  if (pTVar1 == &param_1->Points) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar8 = (param_1->Points).ArrayNum;
  if (iVar8 != 0) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x28,8,iVar8,&pTVar1->AllocatorInstance,&(this->Points).ArrayNum,
                        &(this->Points).ArrayMax);
    memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 0x28,
           (param_1->Points).AllocatorInstance.Data,(longlong)iVar8 * 0x28);
  }
  pTVar2 = &this->WireTris;
  if (pTVar2 == &param_1->WireTris) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar8 = (param_1->WireTris).ArrayNum;
  if (iVar8 != 0) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar8,&pTVar2->AllocatorInstance,&(this->WireTris).ArrayNum,
                        &(this->WireTris).ArrayMax);
    memcpy((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 4,
           (param_1->WireTris).AllocatorInstance.Data,(longlong)iVar8 << 2);
  }
  plVar3 = &(this->WireTriVerts)._padding_;
  plVar4 = &(param_1->WireTriVerts)._padding_;
  if (plVar3 == plVar4) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar8 = (int)(param_1->WireTriVerts)._padding_;
  if (iVar8 != 0) {
    iVar11 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                       (0x40,0x10,iVar8,(ForAnyElementType *)plVar3,
                        (int *)&(this->WireTriVerts)._padding_,
                        (int *)((longlong)&(this->WireTriVerts)._padding_ + 4));
    _Src = (void *)*plVar4;
    if (((ulonglong)_Src & 1) != 0) {
      _Src = (void *)((longlong)plVar4 + ((longlong)_Src >> 0x18));
    }
    uVar12 = *plVar3;
    if ((uVar12 & 1) != 0) {
      uVar12 = (longlong)plVar3 + ((longlong)uVar12 >> 0x18);
    }
    memcpy((void *)((longlong)iVar11 * 0x40 + uVar12),_Src,(longlong)iVar8 << 6);
  }
  pTVar5 = &this->ThickLines;
  if (pTVar5 == &param_1->ThickLines) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar8 = (param_1->ThickLines).ArrayNum;
  if (iVar8 != 0) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x50,8,iVar8,&pTVar5->AllocatorInstance,&(this->ThickLines).ArrayNum,
                        &(this->ThickLines).ArrayMax);
    memcpy((pTVar5->AllocatorInstance).Data + (longlong)iVar11 * 0x50,
           (param_1->ThickLines).AllocatorInstance.Data,(longlong)iVar8 * 0x50);
  }
  pTVar6 = &this->Sprites;
  if (pTVar6 == &param_1->Sprites) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar8 = (param_1->Sprites).ArrayNum;
  if (iVar8 != 0) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x58,8,iVar8,&pTVar6->AllocatorInstance,&(this->Sprites).ArrayNum,
                        &(this->Sprites).ArrayMax);
    memcpy((pTVar6->AllocatorInstance).Data + (longlong)iVar11 * 0x58,
           (param_1->Sprites).AllocatorInstance.Data,(longlong)iVar8 * 0x58);
  }
  pTVar7 = &this->MeshElements;
  if (pTVar7 == &param_1->MeshElements) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar8 = (param_1->MeshElements).ArrayNum;
  if (iVar8 != 0) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x68,8,iVar8,&pTVar7->AllocatorInstance,&(this->MeshElements).ArrayNum,
                        &(this->MeshElements).ArrayMax);
    ConstructItems<FBatchedElements::FBatchedMeshElement,FBatchedElements::FBatchedMeshElement,int>
              ((pTVar7->AllocatorInstance).Data + (longlong)iVar11 * 0x68,
               (FBatchedMeshElement *)(param_1->MeshElements).AllocatorInstance.Data,iVar8);
  }
  TArray<FSimpleElementVertex,TSizedDefaultAllocator<32>_>::
  Append<FSimpleElementVertex,TSizedDefaultAllocator<32>_>
            (&this->MeshVertices,&param_1->MeshVertices);
  Clear(param_1);
  return;
}

// Clear @ 147698380

void __thiscall FBatchedElements::Clear(FBatchedElements *this)

{
  int *piVar1;
  
  piVar1 = &(this->LineVertices).ArrayMax;
  (this->LineVertices).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,(ForAnyElementType *)this,0,piVar1);
  }
  piVar1 = &(this->Points).ArrayMax;
  (this->Points).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->Points).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->WireTris).ArrayMax;
  (this->WireTris).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->WireTris).AllocatorInstance,0,piVar1);
  }
  piVar1 = (int *)((longlong)&(this->WireTriVerts)._padding_ + 4);
  *(undefined4 *)&(this->WireTriVerts)._padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x40,0x10,0,(ForAnyElementType *)&(this->WireTriVerts)._padding_,0,piVar1);
  }
  piVar1 = &(this->ThickLines).ArrayMax;
  (this->ThickLines).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&(this->ThickLines).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Sprites).ArrayMax;
  (this->Sprites).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,&(this->Sprites).AllocatorInstance,0,piVar1);
  }
  DestructItems<FBatchedElements::FBatchedMeshElement,int>
            ((FBatchedMeshElement *)(this->MeshElements).AllocatorInstance.Data,
             (this->MeshElements).ArrayNum);
  piVar1 = &(this->MeshElements).ArrayMax;
  (this->MeshElements).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,&(this->MeshElements).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->MeshVertices).ArrayMax;
  (this->MeshVertices).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,&(this->MeshVertices).AllocatorInstance,0,piVar1);
  }
  return;
}

// CreateProxySceneView @ 147699c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSceneView * __cdecl
FBatchedElements::CreateProxySceneView
          (FSceneView *__return_storage_ptr__,TMatrix<double> *param_1,TIntRect<int> *param_2)

{
  ulonglong uVar1;
  undefined1 auStackY_3a8 [32];
  undefined1 local_378 [512];
  ForAnyElementType local_178;
  undefined8 local_170;
  TBitArray<FDefaultBitArrayAllocator> local_168;
  undefined4 local_148;
  undefined4 local_144;
  ForElementType<FSetElementId> local_138;
  int local_130;
  undefined1 local_128 [80];
  TIntPoint<int>_u_0 local_d8;
  float local_d0;
  float local_cc;
  TVector<double>_u_0 local_c8;
  undefined2 local_b0;
  float local_ac;
  float local_a8;
  float fStack_a4;
  undefined5 uStack_a0;
  undefined3 uStack_9b;
  undefined4 local_98;
  undefined2 local_94;
  float local_90;
  float local_8c;
  float local_88;
  TVector4<float>_u_0 local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_378._144_8_ = UE::Math::TMatrix<double>::Identity.M[3][2];
  local_378._152_8_ = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_378._272_8_ = UE::Math::TMatrix<double>::Identity.M[3][2];
  local_378._280_8_ = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_378._288_8_ = 0;
  local_378._296_8_ = 0;
  local_378._352_8_ = (FSceneViewStateInterface *)0x0;
  local_378._360_8_ = (FSceneViewStateInterface *)0x0;
  local_378._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_378._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_378._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_378._32_8_ = UE::Math::TMatrix<double>::Identity.M[0][0];
  local_378._40_8_ = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_378._48_8_ = UE::Math::TMatrix<double>::Identity.M[0][2];
  local_378._56_8_ = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_378._64_8_ = UE::Math::TMatrix<double>::Identity.M[1][0];
  local_378._72_8_ = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_378._80_8_ = UE::Math::TMatrix<double>::Identity.M[1][2];
  local_378._88_8_ = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_378._96_8_ = UE::Math::TMatrix<double>::Identity.M[2][0];
  local_378._104_8_ = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_378._112_8_ = UE::Math::TMatrix<double>::Identity.M[2][2];
  local_378._120_8_ = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_378._128_8_ = UE::Math::TMatrix<double>::Identity.M[3][0];
  local_378._136_8_ = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_378._160_8_ = UE::Math::TMatrix<double>::Identity.M[0][0];
  local_378._168_8_ = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_378._176_8_ = UE::Math::TMatrix<double>::Identity.M[0][2];
  local_378._184_8_ = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_378._192_8_ = UE::Math::TMatrix<double>::Identity.M[1][0];
  local_378._200_8_ = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_378._208_8_ = UE::Math::TMatrix<double>::Identity.M[1][2];
  local_378._216_8_ = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_378._224_8_ = UE::Math::TMatrix<double>::Identity.M[2][0];
  local_378._232_8_ = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_378._240_8_ = UE::Math::TMatrix<double>::Identity.M[2][2];
  local_378._248_8_ = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_378._256_8_ = UE::Math::TMatrix<double>::Identity.M[3][0];
  local_378._264_8_ = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_378._304_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_378._312_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_378._320_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_378._328_8_ = 0;
  local_378._336_8_ = 0;
  local_378._344_8_ = (FSceneViewFamily *)0x0;
  FSceneViewOwner::FSceneViewOwner((FSceneViewOwner *)(local_378 + 0x170),(AActor *)0x0);
  local_378._384_4_ = -1;
  local_378._392_8_ = (FViewElementDrawer *)0x0;
  local_378._400_16_ = (undefined1  [16])FLinearColor::Transparent.field0_0x0;
  local_378._416_16_ = (undefined1  [16])FLinearColor::Transparent.field0_0x0;
  local_378._448_4_ = eSSP_FULL;
  local_378._452_4_ = -1;
  local_378._432_16_ = (undefined1  [16])FLinearColor::White.field0_0x0;
  local_378._480_8_ = 0.0;
  local_378._488_8_ = 0.0;
  local_c8._s_0.X = 0.0;
  local_c8._s_0.Y = 0.0;
  local_378._456_4_ = 100.0;
  local_378._464_8_ = 0.0;
  local_378._472_8_ = 0.0;
  local_378._496_8_ = 0.0;
  local_378._504_8_ = 0.0;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  local_168.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_168.NumBits = 0;
  local_168.MaxBits = 0x80;
  local_148 = 0xffffffff;
  local_144 = 0;
  local_138 = (ForElementType<FSetElementId>)0x0;
  local_130 = 0;
  local_128._0_8_ = (void *)0x0;
  local_128._8_4_ = 0;
  local_128._12_4_ = -1;
  local_128._32_8_ = (void *)0x0;
  local_128._40_4_ = 0;
  local_128._44_4_ = 0x80;
  local_128._48_4_ = 0xffffffff;
  local_128._52_4_ = 0;
  local_128._64_8_ = (ForElementType<FSetElementId>)0x0;
  local_128._72_4_ = 0;
  local_d8 = (TIntPoint<int>_u_0)0xffffffffffffffff;
  local_d0 = 1.0;
  local_cc = -1.0;
  local_378._288_8_ = (param_2->field0_0x0)._s_0.Min.field0_0x0;
  local_378._296_8_ = (param_2->field0_0x0)._s_0.Max.field0_0x0;
  local_78._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_78._8_8_ = _UNK_15076b1f8;
  local_c8._s_0.Z = 0.0;
  local_378._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_378._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_378._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_378._48_8_ = UE::Math::TMatrix<double>::Identity.M[0][2];
  local_378._56_8_ = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_378._32_8_ = UE::Math::TMatrix<double>::Identity.M[0][0];
  local_378._40_8_ = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_378._80_8_ = UE::Math::TMatrix<double>::Identity.M[1][2];
  local_378._88_8_ = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_378._64_8_ = UE::Math::TMatrix<double>::Identity.M[1][0];
  local_378._72_8_ = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_378._112_8_ = UE::Math::TMatrix<double>::Identity.M[2][2];
  local_378._120_8_ = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_378._96_8_ = UE::Math::TMatrix<double>::Identity.M[2][0];
  local_378._104_8_ = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_378._144_8_ = UE::Math::TMatrix<double>::Identity.M[3][2];
  local_378._152_8_ = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_378._160_8_ = param_1->M[0][0];
  local_378._168_8_ = param_1->M[0][1];
  local_378._128_8_ = UE::Math::TMatrix<double>::Identity.M[3][0];
  local_378._136_8_ = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_378._176_8_ = param_1->M[0][2];
  local_378._184_8_ = param_1->M[0][3];
  local_378._192_8_ = param_1->M[1][0];
  local_378._200_8_ = param_1->M[1][1];
  local_378._208_8_ = param_1->M[1][2];
  local_378._216_8_ = param_1->M[1][3];
  local_378._224_8_ = param_1->M[2][0];
  local_378._232_8_ = param_1->M[2][1];
  local_378._240_8_ = param_1->M[2][2];
  local_378._248_8_ = param_1->M[2][3];
  local_378._256_8_ = param_1->M[3][0];
  local_378._264_8_ = param_1->M[3][1];
  local_378._272_8_ = param_1->M[3][2];
  local_378._280_8_ = param_1->M[3][3];
  local_b0._0_1_ = false;
  local_b0._1_1_ = true;
  local_ac = 90.0;
  local_a8 = (float)___xmm_00000000000000000000000042b40000;
  fStack_a4 = 1.0;
  uStack_9b = (undefined3)((ulonglong)_UNK_150ee30d8 >> 0x28);
  uStack_a0._0_4_ = 1.0;
  uStack_a0._4_1_ = false;
  local_98._0_1_ = false;
  local_98._1_1_ = false;
  local_98._2_1_ = false;
  local_98._3_1_ = false;
  local_94._0_1_ = false;
  local_94._1_1_ = false;
  local_90 = -1.0;
  local_8c = 1.0;
  local_88 = 1.0;
  local_378._328_8_ = local_378._288_8_;
  local_378._336_8_ = local_378._296_8_;
  FSceneView::FSceneView(__return_storage_ptr__,(FSceneViewInitOptions *)local_378);
  if (local_128._12_4_ != -1) {
    local_128._72_4_ = 0;
    if ((ForElementType<FSetElementId>)local_128._64_8_ != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128._64_8_);
    }
    local_128._8_4_ = 0;
    if (local_128._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
    }
    local_128._48_4_ = 0xffffffff;
    local_128._52_4_ = 0;
    local_128._40_4_ = 0;
    if (0x80 < (uint)local_128._44_4_) {
      local_128._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),0);
    }
    if ((void *)local_128._32_8_ != (void *)0x0) {
      FMemory::Free((void *)local_128._32_8_);
    }
    if ((void *)local_128._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_128._0_8_);
    }
  }
  local_130 = 0;
  if (local_138 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_138);
  }
  uVar1 = local_170 >> 0x20;
  local_170 = local_170 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_178,0,(int *)((longlong)&local_170 + 4));
  }
  local_148 = 0xffffffff;
  local_144 = 0;
  local_168.NumBits = 0;
  if (0x80 < (uint)local_168.MaxBits) {
    local_168.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_168,0);
  }
  if (local_168.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_168.AllocatorInstance.SecondaryData);
  }
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  return __return_storage_ptr__;
}

// Draw @ 1476a16e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

bool __thiscall
FBatchedElements::Draw
          (FBatchedElements *this,FRHICommandList *param_1,FMeshPassProcessorRenderState *param_2,
          Type param_3,FSceneView *param_4,bool param_5,float param_6,Type param_7,uint param_8)

{
  TResourceArray<FSimpleElementVertex,0> *pTVar1;
  FViewMatrices *pFVar2;
  TMatrix<double> *pTVar3;
  double *pdVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  FScriptContainerElement FVar8;
  FRHIBreadcrumbNode *pFVar9;
  bool bVar10;
  bool bVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  void *pvVar20;
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  ForAnyElementType FVar35;
  FRHIResource *pFVar36;
  FDFRelativeViewMatrices *pFVar37;
  FDFRelativeViewMatrices *pFVar38;
  FActivatePipelineCommand *pFVar39;
  FRHITexture *pFVar40;
  FActivatePipelineCommand *pFVar41;
  FRHITexture *pFVar42;
  bool bVar43;
  undefined1 uVar44;
  bool bVar45;
  int iVar46;
  Type TVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  ESimpleElementBlendMode EVar51;
  FDFRelativeViewMatrices *pFVar52;
  wchar_t *pwVar53;
  TVector4<double> *pTVar54;
  TArrayView<FSimpleElementVertex_const_,int> *pTVar55;
  FRHIBufferInitializer *pFVar56;
  FSimpleElementVertex *pFVar57;
  IRHICommandContext *pIVar58;
  FRHICommandBase *pFVar59;
  FDFRelativeViewMatrices *pFVar60;
  FStaticBasicLogRecord *pFVar61;
  longlong *plVar62;
  longlong lVar63;
  TVector<double>_u_0 *pTVar64;
  int iVar65;
  uint uVar66;
  longlong lVar67;
  FScriptContainerElement *pFVar68;
  longlong lVar69;
  undefined8 *puVar70;
  undefined8 *puVar71;
  int iVar72;
  uint uVar73;
  FScriptContainerElement *pFVar74;
  undefined8 *puVar75;
  TVector2<double>_u_0 *pTVar76;
  uint uVar77;
  undefined4 uVar78;
  double dVar79;
  double dVar80;
  double dVar81;
  undefined1 auVar82 [16];
  double dVar85;
  undefined1 auVar83 [16];
  double dVar86;
  undefined1 auVar84 [16];
  double dVar87;
  double dVar88;
  double dVar89;
  double dVar90;
  undefined1 auVar91 [16];
  double dVar92;
  double dVar93;
  float fVar94;
  double dVar95;
  double dVar96;
  undefined4 uVar97;
  undefined4 uVar98;
  undefined4 uVar99;
  undefined1 auStackY_17b8 [32];
  FIdentityFunctor local_1748;
  ESimpleElementBlendMode local_1744;
  uint local_1740;
  ForAnyElementType local_1738;
  int local_1730;
  int local_172c;
  uint local_1728;
  int local_1724;
  undefined8 *local_1720;
  Type local_1718;
  uint local_1714;
  uint local_1710;
  uint local_170c;
  FSceneView *local_1708;
  undefined8 *local_1700;
  FRHICommandListBase *local_16f8;
  double local_16f0;
  FRHICommandRHIThreadFence *local_16e8;
  undefined8 *local_16e0;
  undefined8 *local_16d8;
  undefined8 *local_16d0;
  undefined8 *local_16c8;
  undefined8 *local_16c0;
  undefined8 *local_16b8;
  undefined8 *local_16b0;
  double local_16a8;
  undefined8 *local_16a0;
  double local_1698;
  float local_1690;
  FLLMScope local_168c;
  undefined1 local_1688 [16];
  FRHIResource *local_1678;
  undefined1 local_1670 [16];
  TReferenceControllerBase<1> *local_1660;
  undefined1 local_1658 [16];
  undefined1 local_1648 [16];
  FActivatePipelineCommand *local_1638;
  undefined1 local_1628 [16];
  FRHICommandRHIThreadFence *local_1618;
  undefined1 local_1608 [16];
  FSharedReferencer<1> local_15f8;
  TVector<double>_u_0 local_15e8;
  TVector<double>_u_0 local_15d0;
  Type local_15b8 [2];
  TVector2<double>_u_0 local_15b0;
  undefined2 local_15a0 [2];
  undefined8 local_159c;
  undefined2 local_1594;
  undefined2 local_1590;
  undefined4 local_158c;
  float local_1588;
  undefined2 local_1584;
  double local_1580;
  FRHIBuffer *local_1578;
  FRHIResource *local_1570;
  FRHIResource *local_1568;
  FBatchedElements *local_1560;
  TVector2<double>_u_0 local_1558;
  TVector2<double>_u_0 local_1548;
  TVector<double>_u_0 local_1538;
  TVector<double>_u_0 local_1520;
  TVector2<double>_u_0 local_1508;
  TVector<double>_u_0 local_14f8;
  TVector<double>_u_0 local_14e0;
  TVector<double>_u_0 local_14c8;
  FRHITexture *local_14a8;
  FRHITexture *pFStack_14a0;
  undefined1 local_1498 [16];
  TVector2<double>_u_0 local_1488;
  TVector2<double>_u_0 local_1478;
  TVector<double>_u_0 local_1468;
  uint local_1450;
  undefined4 uStack_144c;
  undefined4 uStack_1448;
  uint uStack_1444;
  wchar_t *local_1440;
  TResourceArray<FSimpleElementVertex,0> *pTStack_1438;
  undefined4 local_1430;
  undefined4 uStack_142c;
  undefined8 uStack_1428;
  undefined8 local_1420;
  uint local_1418;
  undefined4 uStack_1414;
  uint uStack_1410;
  uint uStack_140c;
  wchar_t *local_1408;
  FRHITexture *pFStack_1400;
  undefined4 local_13f8;
  FExclusiveDepthStencil FStack_13f4;
  undefined8 uStack_13f0;
  undefined8 local_13e8;
  uint local_13e0;
  undefined4 uStack_13dc;
  undefined4 uStack_13d8;
  uint uStack_13d4;
  wchar_t *local_13d0;
  FRHIMeshShader *pFStack_13c8;
  ERHIAccess local_13c0;
  undefined4 uStack_13bc;
  FRHIGeometryShader *pFStack_13b8;
  FRHIWorkGraphShader *local_13b0;
  uint local_13a8;
  undefined4 uStack_13a4;
  undefined4 uStack_13a0;
  uint uStack_139c;
  wchar_t *local_1398;
  FRHIBreadcrumbNode *pFStack_1390;
  ERHIAccess local_1388;
  undefined4 uStack_1384;
  undefined8 uStack_1380;
  void *local_1378;
  uint local_1370;
  undefined4 uStack_136c;
  undefined4 uStack_1368;
  uint uStack_1364;
  wchar_t *local_1360;
  void *pvStack_1358;
  undefined4 local_1350;
  undefined4 uStack_134c;
  void *pvStack_1348;
  void *local_1340;
  undefined1 local_1338 [16];
  undefined1 local_1328 [16];
  undefined1 local_1318 [16];
  undefined1 local_1308 [16];
  double local_12f8;
  undefined1 local_12e8 [16];
  double local_12d8;
  double local_12d0;
  FMemScope local_12c8;
  TVector2<double>_u_0 local_12c0;
  double local_12b0;
  TVector2<double>_u_0 local_12a8;
  TVector<double>_u_0 local_1298;
  TVector<double>_u_0 local_1280;
  undefined1 local_1268 [32];
  FRHIBreadcrumbNode *local_1248;
  uint local_1240;
  TVector2<double>_u_0 local_1238;
  TVector2<double>_u_0 local_1228;
  TVector2<double>_u_0 local_1218;
  TVector2<double>_u_0 local_1208;
  TVector2<double>_u_0 local_11f8;
  TVector2<double>_u_0 local_11e8;
  TVector<double>_u_0 local_11d8;
  TVector<double>_u_0 local_11c0;
  TVector<double>_u_0 local_11a8;
  TVector<double>_u_0 local_1190;
  TVector<double>_u_0 local_1178;
  TVector<double>_u_0 local_1160;
  FSimpleElementVertex *local_1148;
  undefined8 uStack_1140;
  void *local_1138 [2];
  TVector4<double>_u_0 local_1128;
  TVector4<double>_u_0 local_1108;
  TVector4<double>_u_0 local_10e8;
  ulonglong local_10c8;
  undefined8 uStack_10c0;
  wchar_t *local_10b8;
  FRHIBreadcrumbNode *pFStack_10b0;
  undefined8 local_10a8;
  undefined1 auStack_10a0 [24];
  undefined1 auStack_1088 [16];
  undefined8 uStack_1078;
  FPerCategory local_1070;
  ulonglong local_1058;
  undefined8 uStack_1050;
  wchar_t *local_1048;
  TResourceArray<FSimpleElementVertex,0> *pTStack_1040;
  undefined8 local_1038;
  undefined8 uStack_1030;
  undefined1 local_1028 [24];
  wchar_t *local_1010;
  undefined8 uStack_1008;
  undefined8 local_1000;
  FPerCategory FStack_ff8;
  undefined1 auStack_fe0 [16];
  FRHIMeshShader *pFStack_fd0;
  FPerCategory local_fc8;
  TArrayView<FSimpleElementVertex_const_,int> local_fb0;
  TVector4<double> local_f98;
  TVector4<double> local_f78;
  TVector4<double> local_f58;
  FSimpleElementVertex local_f38;
  FSimpleElementVertex local_ef8;
  FSimpleElementVertex local_eb8;
  FSimpleElementVertex local_e78;
  FSimpleElementVertex local_e38;
  FSimpleElementVertex local_df8;
  FSimpleElementVertex local_db8;
  FSimpleElementVertex local_d78;
  FSimpleElementVertex local_d38;
  FSimpleElementVertex local_cf8;
  FSimpleElementVertex local_cb8;
  FSimpleElementVertex local_c78;
  FSimpleElementVertex local_c38;
  FSimpleElementVertex local_bf8;
  FSimpleElementVertex local_bb8;
  FSimpleElementVertex local_b78;
  FSimpleElementVertex local_b38;
  FSimpleElementVertex local_af8;
  FSimpleElementVertex local_ab8;
  FSimpleElementVertex local_a78;
  FSimpleElementVertex local_a38;
  FSimpleElementVertex local_9f8;
  FSimpleElementVertex local_9b8;
  FSimpleElementVertex local_978;
  FSimpleElementVertex local_938;
  FSimpleElementVertex local_8f8;
  FSimpleElementVertex local_8b8;
  FSimpleElementVertex local_878;
  FSimpleElementVertex local_838;
  FSimpleElementVertex local_7f8;
  FDFRelativeViewMatrices local_7b8;
  undefined1 local_568 [208];
  uint local_498;
  ulong64 local_490;
  undefined1 local_488 [48];
  FRHICommandListBase *local_458;
  FRHIBuffer *local_450;
  void *local_448;
  undefined1 local_438 [48];
  FRHICommandListBase *local_408;
  FRHIBuffer *local_400;
  undefined8 *local_3f8;
  undefined1 local_3e8 [48];
  FRHICommandListBase *local_3b8;
  FRHIBuffer *local_3b0;
  FRHIBufferInitializer local_398;
  FDFRelativeViewMatrices local_348;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_17b8;
  pFVar2 = &param_4->ViewMatrices;
  local_1708 = param_4;
  local_170c = 0;
  local_1718 = param_3;
  local_16f8 = (FRHICommandListBase *)param_1;
  local_1560 = this;
  FDFRelativeViewMatrices::Create(&local_7b8,pFVar2,pFVar2);
  lVar63 = 4;
  pFVar37 = &local_348;
  pFVar38 = &local_7b8;
  do {
    pFVar60 = pFVar38;
    pFVar52 = pFVar37;
    uVar31 = *(undefined8 *)((pFVar60->RelativeWorldToView).M[0] + 2);
    uVar32 = *(undefined8 *)(pFVar60->RelativeWorldToView).M[1];
    uVar33 = *(undefined8 *)((pFVar60->RelativeWorldToView).M[1] + 2);
    *(undefined8 *)(pFVar52->RelativeWorldToView).M[0] =
         *(undefined8 *)(pFVar60->RelativeWorldToView).M[0];
    *(undefined8 *)((pFVar52->RelativeWorldToView).M[0] + 2) = uVar31;
    uVar31 = *(undefined8 *)(pFVar60->RelativeWorldToView).M[2];
    uVar34 = *(undefined8 *)((pFVar60->RelativeWorldToView).M[2] + 2);
    *(undefined8 *)(pFVar52->RelativeWorldToView).M[1] = uVar32;
    *(undefined8 *)((pFVar52->RelativeWorldToView).M[1] + 2) = uVar33;
    uVar32 = *(undefined8 *)(pFVar60->RelativeWorldToView).M[3];
    uVar33 = *(undefined8 *)((pFVar60->RelativeWorldToView).M[3] + 2);
    *(undefined8 *)(pFVar52->RelativeWorldToView).M[2] = uVar31;
    *(undefined8 *)((pFVar52->RelativeWorldToView).M[2] + 2) = uVar34;
    uVar31 = *(undefined8 *)(pFVar60->RelativeWorldToClip).M[0];
    uVar34 = *(undefined8 *)((pFVar60->RelativeWorldToClip).M[0] + 2);
    *(undefined8 *)(pFVar52->RelativeWorldToView).M[3] = uVar32;
    *(undefined8 *)((pFVar52->RelativeWorldToView).M[3] + 2) = uVar33;
    uVar32 = *(undefined8 *)(pFVar60->RelativeWorldToClip).M[1];
    uVar33 = *(undefined8 *)((pFVar60->RelativeWorldToClip).M[1] + 2);
    *(undefined8 *)(pFVar52->RelativeWorldToClip).M[0] = uVar31;
    *(undefined8 *)((pFVar52->RelativeWorldToClip).M[0] + 2) = uVar34;
    uVar31 = *(undefined8 *)(pFVar60->RelativeWorldToClip).M[2];
    uVar34 = *(undefined8 *)((pFVar60->RelativeWorldToClip).M[2] + 2);
    *(undefined8 *)(pFVar52->RelativeWorldToClip).M[1] = uVar32;
    *(undefined8 *)((pFVar52->RelativeWorldToClip).M[1] + 2) = uVar33;
    uVar32 = *(undefined8 *)(pFVar60->RelativeWorldToClip).M[3];
    uVar33 = *(undefined8 *)((pFVar60->RelativeWorldToClip).M[3] + 2);
    *(undefined8 *)(pFVar52->RelativeWorldToClip).M[2] = uVar31;
    *(undefined8 *)((pFVar52->RelativeWorldToClip).M[2] + 2) = uVar34;
    *(undefined8 *)(pFVar52->RelativeWorldToClip).M[3] = uVar32;
    *(undefined8 *)((pFVar52->RelativeWorldToClip).M[3] + 2) = uVar33;
    lVar63 = lVar63 + -1;
    pFVar37 = (FDFRelativeViewMatrices *)&pFVar52->ViewToRelativeWorld;
    pFVar38 = (FDFRelativeViewMatrices *)&pFVar60->ViewToRelativeWorld;
  } while (lVar63 != 0);
  uVar31 = *(undefined8 *)((pFVar60->ViewToRelativeWorld).M[0] + 2);
  local_568._100_4_ = 0;
  local_568[0x68] = '\0';
  local_568[0x69] = '\0';
  local_568[0x6a] = '\0';
  local_568[0x6b] = '\0';
  uVar32 = *(undefined8 *)(pFVar60->ViewToRelativeWorld).M[1];
  uVar33 = *(undefined8 *)((pFVar60->ViewToRelativeWorld).M[1] + 2);
  local_568._108_4_ = 0;
  *(undefined8 *)(pFVar52->ViewToRelativeWorld).M[0] =
       *(undefined8 *)(pFVar60->ViewToRelativeWorld).M[0];
  *(undefined8 *)((pFVar52->ViewToRelativeWorld).M[0] + 2) = uVar31;
  local_568[0xb0] = PF_Unknown;
  uVar31 = *(undefined8 *)(pFVar60->ViewToRelativeWorld).M[2];
  uVar34 = *(undefined8 *)((pFVar60->ViewToRelativeWorld).M[2] + 2);
  local_568._184_8_ = None;
  *(undefined8 *)(pFVar52->ViewToRelativeWorld).M[1] = uVar32;
  *(undefined8 *)((pFVar52->ViewToRelativeWorld).M[1] + 2) = uVar33;
  local_568._192_4_ = 0;
  local_568._196_4_ = 0;
  uVar32 = *(undefined8 *)(pFVar60->ViewToRelativeWorld).M[3];
  uVar33 = *(undefined8 *)((pFVar60->ViewToRelativeWorld).M[3] + 2);
  local_568._200_4_ = 0;
  local_568._204_4_ = 0;
  *(undefined8 *)(pFVar52->ViewToRelativeWorld).M[2] = uVar31;
  *(undefined8 *)((pFVar52->ViewToRelativeWorld).M[2] + 2) = uVar34;
  local_498 = 1;
  uVar31 = *(undefined8 *)(pFVar60->ClipToRelativeWorld).M[0];
  uVar34 = *(undefined8 *)((pFVar60->ClipToRelativeWorld).M[0] + 2);
  local_490 = 0;
  *(undefined8 *)(pFVar52->ViewToRelativeWorld).M[3] = uVar32;
  *(undefined8 *)((pFVar52->ViewToRelativeWorld).M[3] + 2) = uVar33;
  *(undefined8 *)(pFVar52->ClipToRelativeWorld).M[0] = uVar31;
  *(undefined8 *)((pFVar52->ClipToRelativeWorld).M[0] + 2) = uVar34;
  local_1710 = *(int *)((longlong)&(param_4->UnscaledViewRect).field0_0x0 + 8) -
               *(int *)&(param_4->UnscaledViewRect).field0_0x0;
  local_1728 = *(int *)((longlong)&(param_4->UnscaledViewRect).field0_0x0 + 0xc) -
               *(int *)((longlong)&(param_4->UnscaledViewRect).field0_0x0 + 4);
  local_568._0_8_ = (FRHIVertexDeclaration *)0x0;
  local_568._8_8_ = (FRHIVertexShader *)0x0;
  local_568._16_8_ = (FRHIPixelShader *)0x0;
  local_568._24_8_ = (FRHIMeshShader *)0x0;
  local_568._32_8_ = (FRHIAmplificationShader *)0x0;
  local_568._40_8_ = (FRHIGeometryShader *)0x0;
  local_568._48_8_ = (FRHIWorkGraphShader *)0x0;
  local_568._56_8_ = (FRHIBlendState *)0x0;
  local_568._64_8_ = (FRHIRasterizerState *)0x0;
  local_568._72_8_ = (FRHIDepthStencilState *)0x0;
  local_568._80_8_ = (FRHISamplerState *)0x0;
  local_568._88_8_ = (FRHISamplerState *)0x0;
  local_568._112_8_ = None;
  local_568._120_8_ = None;
  local_568._128_8_ = None;
  local_568._136_8_ = None;
  local_568._144_8_ = None;
  local_568._152_8_ = None;
  local_568._160_8_ = None;
  local_568._168_8_ = None;
  FRHICommandList::ApplyCachedRenderTargets(param_1,(FGraphicsPipelineStateInitializer *)local_568);
  local_568._56_8_ = param_2->BlendState;
  local_568._72_8_ = param_2->DepthStencilState;
  local_1714 = param_2->StencilRef;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar53 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar53,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  dVar80 = __real_3e45798ee0000000;
  if ((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) {
    return false;
  }
  if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
      false) {
    return false;
  }
  uVar73 = (this->LineVertices).ArrayNum;
  if (((((uVar73 == 0) && ((this->Points).ArrayNum == 0)) && ((this->Sprites).ArrayNum == 0)) &&
      (((this->MeshElements).ArrayNum == 0 && ((this->ThickLines).ArrayNum == 0)))) &&
     ((this->WireTris).ArrayNum < 1)) {
    return false;
  }
  dVar88 = (param_4->ViewMatrices).InvViewProjectionMatrix.M[0][0];
  dVar17 = (param_4->ViewMatrices).InvViewProjectionMatrix.M[0][1];
  dVar89 = (param_4->ViewMatrices).InvViewProjectionMatrix.M[0][2];
  dVar13 = (param_4->ViewMatrices).InvViewProjectionMatrix.M[0][3];
  dVar14 = (param_4->ViewMatrices).InvViewProjectionMatrix.M[1][0];
  dVar81 = (param_4->ViewMatrices).InvViewProjectionMatrix.M[1][1];
  dVar90 = (param_4->ViewMatrices).InvViewProjectionMatrix.M[1][2];
  dVar93 = (param_4->ViewMatrices).InvViewProjectionMatrix.M[1][3];
  dVar79 = (param_4->ViewMatrices).InvViewProjectionMatrix.M[2][0];
  dVar85 = (param_4->ViewMatrices).InvViewProjectionMatrix.M[2][1];
  dVar87 = (param_4->ViewMatrices).InvViewProjectionMatrix.M[2][2];
  dVar95 = (param_4->ViewMatrices).InvViewProjectionMatrix.M[2][3];
  dVar92 = (param_4->ViewMatrices).InvViewProjectionMatrix.M[3][0];
  dVar96 = (param_4->ViewMatrices).InvViewProjectionMatrix.M[3][1];
  dVar23 = (param_4->ViewMatrices).InvViewProjectionMatrix.M[3][2];
  dVar24 = (param_4->ViewMatrices).InvViewProjectionMatrix.M[3][3];
  local_1128._s_0.Z =
       _UNK_150689518 * dVar90 + ___xmm_00000000000000003ff0000000000000 * dVar89 + dVar87 * 0.0 +
       dVar23 * 0.0;
  local_1128._s_0.W =
       _UNK_150689518 * dVar93 + ___xmm_00000000000000003ff0000000000000 * dVar13 + dVar95 * 0.0 +
       dVar24 * 0.0;
  dVar86 = _UNK_150689518 * dVar81 + ___xmm_00000000000000003ff0000000000000 * dVar17 + dVar85 * 0.0
           + dVar96 * 0.0;
  local_1128._8_4_ = SUB84(dVar86,0);
  local_1128._0_8_ =
       _UNK_150689518 * dVar14 + ___xmm_00000000000000003ff0000000000000 * dVar88 + dVar79 * 0.0 +
       dVar92 * 0.0;
  local_1128._12_4_ = (int)((ulonglong)dVar86 >> 0x20);
  pTVar54 = UE::Math::TVector4<double>::GetSafeNormal
                      ((TVector4<double> *)&local_1128._s_0,&local_f58,__real_3e45798ee0000000);
  local_15e8._s_0.X = (pTVar54->field0_0x0)._s_0.X;
  local_15e8._s_0.Y = (pTVar54->field0_0x0)._s_0.Y;
  local_15e8._s_0.Z = (pTVar54->field0_0x0)._s_0.Z;
  local_1108._s_0.Z =
       _UNK_15061cbc8 * dVar90 + ___xmm_3ff00000000000000000000000000000 * dVar89 + dVar87 * 0.0 +
       dVar23 * 0.0;
  local_1108._s_0.W =
       _UNK_15061cbc8 * dVar93 + ___xmm_3ff00000000000000000000000000000 * dVar13 + dVar95 * 0.0 +
       dVar24 * 0.0;
  dVar86 = _UNK_15061cbc8 * dVar81 + ___xmm_3ff00000000000000000000000000000 * dVar17 + dVar85 * 0.0
           + dVar96 * 0.0;
  local_1108._8_4_ = SUB84(dVar86,0);
  local_1108._0_8_ =
       _UNK_15061cbc8 * dVar14 + ___xmm_3ff00000000000000000000000000000 * dVar88 + dVar79 * 0.0 +
       dVar92 * 0.0;
  local_1108._12_4_ = (int)((ulonglong)dVar86 >> 0x20);
  pTVar54 = UE::Math::TVector4<double>::GetSafeNormal
                      ((TVector4<double> *)&local_1108._s_0,&local_f78,dVar80);
  local_15d0._s_0.X = (pTVar54->field0_0x0)._s_0.X;
  local_15d0._s_0.Y = (pTVar54->field0_0x0)._s_0.Y;
  local_15d0._s_0.Z = (pTVar54->field0_0x0)._s_0.Z;
  dVar86 = dVar81 * 0.0 + dVar17 * 0.0 + ___xmm_00000000000000003ff0000000000000 * dVar85 +
           _UNK_150689518 * dVar96;
  local_10e8._s_0.Z =
       dVar90 * 0.0 + dVar89 * 0.0 + ___xmm_00000000000000003ff0000000000000 * dVar87 +
       _UNK_150689518 * dVar23;
  local_10e8._s_0.W =
       dVar93 * 0.0 + dVar13 * 0.0 + ___xmm_00000000000000003ff0000000000000 * dVar95 +
       _UNK_150689518 * dVar24;
  local_10e8._8_4_ = SUB84(dVar86,0);
  local_10e8._0_8_ =
       dVar14 * 0.0 + dVar88 * 0.0 + ___xmm_00000000000000003ff0000000000000 * dVar79 +
       _UNK_150689518 * dVar92;
  local_10e8._12_4_ = (int)((ulonglong)dVar86 >> 0x20);
  UE::Math::TVector4<double>::GetSafeNormal((TVector4<double> *)&local_10e8._s_0,&local_f98,dVar80);
  fVar94 = __real_3f000000;
  local_568._64_8_ =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  local_568._96_4_ = PT_TriangleList;
  if ((((0 < (int)uVar73) || (0 < (this->Points).ArrayNum)) ||
      ((0 < (this->ThickLines).ArrayNum || (0 < (this->WireTris).ArrayNum)))) &&
     ((param_7 & OpaqueAndMasked) != None)) {
    if (0 < (int)uVar73) {
      if (0x3ffffff < uVar73) {
        if ((byte)LogBatchedElements._0_1_ < 2) {
          return false;
        }
        pFVar61 = &::LOG_Static;
        goto LAB_1476a1c80;
      }
      local_568._96_4_ = PT_LineList;
      PrepareShaders(this,param_1,(FGraphicsPipelineStateInitializer *)local_568,local_1714,
                     local_1718,SE_BLEND_Opaque,&local_348,(FBatchedElementParameters *)0x0,
                     GWhiteTexture,param_5,param_6,(FDepthFieldGlowInfo *)0x0,param_4,
                     __real_3f000000);
      pTVar55 = MakeConstArrayView<TArray<FSimpleElementVertex,TSizedDefaultAllocator<32>_>_const_&,TArray<FSimpleElementVertex,TSizedDefaultAllocator<32>_>_>
                          (&local_fb0,&this->LineVertices);
      local_1148 = pTVar55->DataPtr;
      uStack_1140._0_4_ = pTVar55->ArrayNum;
      uStack_1140._4_4_ = *(uint *)&pTVar55->field_0xc;
      UE::RHIResourceUtils::CreateVertexBufferFromArray<FSimpleElementVertex>
                ((FRHICommandListBase *)local_1688,(wchar_t *)param_1,0x50fcfb78,
                 (TArrayView<FSimpleElementVertex_const_,int> *)&DAT_00000004);
      FRHICommandList::SetStreamSource(param_1,0,(FRHIBuffer *)local_1688._0_8_,0);
      iVar72 = (int)((ulonglong)(longlong)GRHIGlobals.DrawUPVertexCheckCount >> 7) * 2;
      iVar65 = 0x10000;
      if (iVar72 < 0x10000) {
        iVar65 = iVar72;
      }
      uVar73 = 0;
      iVar72 = ((this->LineVertices).ArrayNum / 2) * 2;
      if (0 < iVar72) {
        do {
          iVar46 = iVar72 - uVar73;
          if (iVar65 < (int)(iVar72 - uVar73)) {
            iVar46 = iVar65;
          }
          FRHICommandList::DrawPrimitive(param_1,uVar73,iVar46 / 2,param_8);
          uVar73 = uVar73 + (iVar46 / 2) * 2;
          this = local_1560;
        } while ((int)uVar73 < iVar72);
      }
      uVar31 = local_1688._0_8_;
      param_4 = local_1708;
      if ((FRHIBuffer *)local_1688._0_8_ != (FRHIBuffer *)0x0) {
        local_1688._0_8_ = (FRHIBuffer *)0x0;
        FRHIResource::Release((FRHIResource *)uVar31);
        param_4 = local_1708;
        if ((FRHIBuffer *)local_1688._0_8_ != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)local_1688._0_8_);
          param_4 = local_1708;
        }
      }
    }
    local_568._96_4_ = PT_TriangleList;
    PrepareShaders(this,param_1,(FGraphicsPipelineStateInitializer *)local_568,local_1714,local_1718
                   ,SE_BLEND_Opaque,&local_348,(FBatchedElementParameters *)0x0,GWhiteTexture,
                   param_5,param_6,(FDepthFieldGlowInfo *)0x0,param_4,fVar94);
    pTVar3 = &(param_4->ViewMatrices).ViewProjectionMatrix;
    DrawPointElements(this,param_1,pTVar3,local_1710,local_1728,(TVector<double> *)&local_15e8._s_0,
                      (TVector<double> *)&local_15d0._s_0,param_8);
    if (0 < (this->ThickLines).ArrayNum) {
      uVar78 = SUB84(__real_3ff0000000000000,0);
      uVar99 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      pdVar4 = (param_4->ViewMatrices).ProjectionMatrix.M[3] + 3;
      bVar45 = __real_3ff0000000000000 != *pdVar4;
      bVar10 = *pdVar4 <= __real_3ff0000000000000;
      local_1690 = __real_3f800000;
      local_1748 = (FIdentityFunctor)(bVar10 && bVar45);
      if (!bVar10 || !bVar45) {
        local_1690 = (float)(__real_3ff0000000000000 / (pFVar2->ProjectionMatrix).M[0][0]);
      }
      local_1740 = 0;
      dVar80 = pTVar3->M[0][0];
      dVar86 = (param_4->ViewMatrices).ViewProjectionMatrix.M[0][1];
      dVar88 = (param_4->ViewMatrices).ViewProjectionMatrix.M[1][0];
      dVar17 = (param_4->ViewMatrices).ViewProjectionMatrix.M[1][1];
      dVar89 = (param_4->ViewMatrices).ViewProjectionMatrix.M[2][0];
      dVar13 = (param_4->ViewMatrices).ViewProjectionMatrix.M[2][1];
      dVar14 = (param_4->ViewMatrices).ViewProjectionMatrix.M[0][2];
      dVar81 = (param_4->ViewMatrices).ViewProjectionMatrix.M[1][2];
      auVar83 = *(undefined1 (*) [16])(param_4->ViewMatrices).ViewProjectionMatrix.M[3];
      dVar95 = auVar83._0_8_;
      dVar90 = (param_4->ViewMatrices).ViewProjectionMatrix.M[2][2];
      dVar93 = (param_4->ViewMatrices).ViewProjectionMatrix.M[3][2];
      auVar82._8_4_ = SUB84(local_15e8._s_0.Y,0);
      auVar82._0_8_ = local_15e8._s_0.Y;
      auVar82._12_4_ = (int)((ulonglong)local_15e8._8_8_ >> 0x20);
      dVar92 = auVar83._8_8_;
      dVar87 = local_15e8._s_0.Y * dVar81 + local_15e8._s_0.X * dVar14 + local_15e8._s_0.Z * dVar90
               + dVar93 * 0.0;
      dVar79 = local_15e8._s_0.Y * dVar88 + local_15e8._s_0.X * dVar80 + local_15e8._s_0.Z * dVar89
               + dVar95 * 0.0;
      dVar85 = auVar82._8_8_ * dVar17 + local_15e8._s_0.X * dVar86 + local_15e8._s_0.Z * dVar13 +
               dVar92 * 0.0;
      local_12d0 = SQRT(dVar85 * dVar85 + dVar79 * dVar79 + dVar87 * dVar87);
      auVar83._8_4_ = SUB84(local_15d0._s_0.Y,0);
      auVar83._0_8_ = local_15d0._s_0.Y;
      auVar83._12_4_ = (int)((ulonglong)local_15d0._8_8_ >> 0x20);
      dVar80 = local_15d0._s_0.Y * dVar88 + local_15d0._s_0.X * dVar80 + local_15d0._s_0.Z * dVar89
               + dVar95 * 0.0;
      dVar86 = auVar83._8_8_ * dVar17 + local_15d0._s_0.X * dVar86 + local_15d0._s_0.Z * dVar13 +
               dVar92 * 0.0;
      dVar88 = local_15d0._s_0.Y * dVar81 + local_15d0._s_0.X * dVar14 + local_15d0._s_0.Z * dVar90
               + dVar93 * 0.0;
      local_12d8 = SQRT(dVar86 * dVar86 + dVar80 * dVar80 + dVar88 * dVar88);
      iVar65 = (int)((ulonglong)(longlong)GRHIGlobals.DrawUPVertexCheckCount / 0xc0) * 3;
      local_1724 = 0x10000;
      if (iVar65 < 0x10000) {
        local_1724 = iVar65;
      }
      local_1724 = local_1724 / 0xc;
      dVar80 = 0.0;
      uVar73 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      do {
        uVar77 = 0;
        if ((int)local_1740 < (this->ThickLines).ArrayNum) {
          uVar77 = ~local_1740 >> 0x1f;
        }
        if ((uVar77 == 0) &&
           (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar43)) {
          pcVar12 = (code *)swi(3);
          uVar44 = (*pcVar12)();
          return (bool)uVar44;
        }
        iVar65 = local_1724;
        lVar63 = (longlong)dVar80 * 0x50;
        uVar77 = local_1740 + 1;
        dVar80 = (double)((longlong)dVar80 + 1);
        fVar94 = *(float *)((this->ThickLines).AllocatorInstance.Data + lVar63 + 0x48);
        if ((int)uVar77 < (this->ThickLines).ArrayNum) {
          lVar67 = (longlong)dVar80 * 0x50;
          iVar72 = 1;
          local_1728 = uVar77;
          local_16a8 = dVar80;
          do {
            uVar48 = 0;
            if ((int)uVar77 < (this->ThickLines).ArrayNum) {
              uVar48 = ~uVar77 >> 0x1f;
            }
            if ((uVar48 == 0) &&
               (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar43)) {
              pcVar12 = (code *)swi(3);
              uVar44 = (*pcVar12)();
              return (bool)uVar44;
            }
            param_1 = (FRHICommandList *)local_16f8;
            if ((fVar94 != *(float *)((this->ThickLines).AllocatorInstance.Data + lVar67 + 0x48)) ||
               (iVar65 <= iVar72)) break;
            uVar77 = uVar77 + 1;
            iVar72 = iVar72 + 1;
            dVar80 = (double)((longlong)dVar80 + 1);
            lVar67 = lVar67 + 0x50;
          } while ((int)uVar77 < (this->ThickLines).ArrayNum);
        }
        local_16a8 = dVar80;
        iVar65 = uVar77 - local_1740;
        local_1728 = uVar77;
        if ((iVar65 < 1) &&
           (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumLinesThisBatch > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BatchedElements.cpp"
                                ,0x3f2,L""), bVar43)) {
          pcVar12 = (code *)swi(3);
          uVar44 = (*pcVar12)();
          return (bool)uVar44;
        }
        local_1590._0_1_ = true;
        local_1590._1_1_ = 0;
        local_158c = 0;
        local_1584 = 0x100;
        local_1588 = fVar94;
        RHICreateRasterizerState((FRasterizerStateInitializerRHI *)&local_1570);
        fVar94 = __real_3f000000;
        local_568._64_8_ = local_1570;
        PrepareShaders(this,param_1,(FGraphicsPipelineStateInitializer *)local_568,local_1714,
                       local_1718,SE_BLEND_AlphaBlend,&local_348,(FBatchedElementParameters *)0x0,
                       GWhiteTexture,param_5,param_6,(FDepthFieldGlowInfo *)0x0,local_1708,
                       __real_3f000000);
        local_1370 = iVar65 * 0x300;
        uStack_136c = 0;
        uStack_1364 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
        uStack_1368 = 0x4004;
        auStack_10a0._16_8_ = ZEXT48(local_1370);
        auStack_1088._4_4_ = uStack_1364;
        auStack_1088._0_4_ = 0x4004;
        local_1360 = L"ThickLines";
        pvStack_1358 = (void *)0x0;
        pvStack_1348 = (void *)0x0;
        local_1350 = 8;
        auStack_1088._8_8_ = L"ThickLines";
        uStack_1078._0_4_ = 0;
        uStack_1078._4_4_ = 0;
        uStack_134c = 3;
        local_1070.Draws = 8;
        local_1070.Triangles = 3;
        local_1340 = (void *)0x0;
        local_1070.Points = 0;
        local_1070.Rectangles = 0;
        local_1070.Lines = 0;
        local_1070.Quads = 0;
        pFVar56 = FRHICommandListBase::CreateBufferInitializer
                            ((FRHICommandListBase *)param_1,(FRHIBufferInitializer *)local_3e8,
                             (FRHIBufferCreateDesc *)(auStack_10a0 + 0x10));
        TRHIBufferInitializer<FSimpleElementVertex>::TRHIBufferInitializer<FSimpleElementVertex>
                  ((TRHIBufferInitializer<FSimpleElementVertex> *)local_438,pFVar56);
        if ((local_3b8 != (FRHICommandListBase *)0x0) && (local_3b0 != (FRHIBuffer *)0x0)) {
          FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_3e8);
        }
        if (local_3e8._0_8_ != 0) {
          plVar62 = (longlong *)(local_3e8 + 0x10);
          if ((longlong *)local_3e8._40_8_ != (longlong *)0x0) {
            plVar62 = (longlong *)local_3e8._40_8_;
          }
          (**(code **)(*plVar62 + 0x10))();
        }
        local_1698 = (double)(longlong)iVar65;
        local_1744 = 0;
        if (0 < iVar65) {
          local_1700 = local_3f8 + 0x58;
          puVar75 = local_3f8 + 0x10;
          local_16b8 = local_3f8 + 0x50;
          puVar71 = local_3f8 + 8;
          local_16c0 = local_3f8 + 0x48;
          local_16c8 = local_3f8 + 0x40;
          local_16d0 = local_3f8 + 0x38;
          local_16b0 = local_3f8 + 0x30;
          local_16d8 = local_3f8 + 0x28;
          local_1720 = local_3f8 + 0x20;
          local_16e0 = local_3f8 + 0x18;
          puVar70 = local_3f8;
          do {
            uVar77 = 0;
            if ((int)local_1740 < (this->ThickLines).ArrayNum) {
              uVar77 = ~local_1740 >> 0x1f;
            }
            if ((uVar77 == 0) &&
               (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar43)) {
              pcVar12 = (code *)swi(3);
              uVar44 = (*pcVar12)();
              return (bool)uVar44;
            }
            pFVar74 = (this->ThickLines).AllocatorInstance.Data;
            dVar89 = *(double *)(pFVar74 + lVar63);
            dVar13 = *(double *)(pFVar74 + lVar63 + 8);
            dVar14 = (local_1708->ViewMatrices).ViewProjectionMatrix.M[1][2];
            dVar81 = (local_1708->ViewMatrices).ViewProjectionMatrix.M[1][3];
            dVar90 = (local_1708->ViewMatrices).ViewProjectionMatrix.M[3][0];
            dVar93 = (local_1708->ViewMatrices).ViewProjectionMatrix.M[3][1];
            dVar79 = (local_1708->ViewMatrices).ViewProjectionMatrix.M[0][0];
            dVar85 = (local_1708->ViewMatrices).ViewProjectionMatrix.M[0][1];
            dVar87 = (local_1708->ViewMatrices).ViewProjectionMatrix.M[1][0];
            dVar95 = (local_1708->ViewMatrices).ViewProjectionMatrix.M[1][1];
            dVar92 = (local_1708->ViewMatrices).ViewProjectionMatrix.M[0][2];
            dVar96 = (local_1708->ViewMatrices).ViewProjectionMatrix.M[0][3];
            dVar23 = (local_1708->ViewMatrices).ViewProjectionMatrix.M[2][2];
            dVar24 = (local_1708->ViewMatrices).ViewProjectionMatrix.M[2][3];
            dVar25 = (local_1708->ViewMatrices).ViewProjectionMatrix.M[3][2];
            dVar26 = (local_1708->ViewMatrices).ViewProjectionMatrix.M[3][3];
            dVar80 = *(double *)(pFVar74 + lVar63 + 0x10);
            dVar27 = (local_1708->ViewMatrices).ViewProjectionMatrix.M[2][0];
            dVar28 = (local_1708->ViewMatrices).ViewProjectionMatrix.M[2][1];
            local_16f0 = (double)(float)(*(uint *)(pFVar74 + lVar63 + 0x30) & uVar73);
            local_1328._8_8_ =
                 dVar13 * dVar81 + dVar89 * dVar96 + dVar80 * dVar24 +
                 (double)CONCAT44(uVar99,uVar78) * dVar26;
            dVar86 = *(double *)(pFVar74 + lVar63 + 0x28);
            dVar88 = dVar13 * dVar87 + dVar89 * dVar79 + dVar80 * dVar27 +
                     (double)CONCAT44(uVar99,uVar78) * dVar90;
            dVar17 = dVar13 * dVar95 + dVar89 * dVar85 + dVar80 * dVar28 +
                     (double)CONCAT44(uVar99,uVar78) * dVar93;
            uVar97 = SUB84(dVar17,0);
            uVar98 = (undefined4)((ulonglong)dVar17 >> 0x20);
            local_12e8._8_4_ = uVar97;
            local_12e8._0_8_ = dVar88;
            local_12e8._12_4_ = uVar98;
            auVar15._8_4_ = uVar97;
            auVar15._0_8_ = dVar88;
            auVar15._12_4_ = uVar98;
            dVar29 = *(double *)(pFVar74 + lVar63 + 0x18);
            dVar30 = *(double *)(pFVar74 + lVar63 + 0x18 + 8);
            auVar18._8_4_ = (int)local_1328._8_8_;
            auVar18._0_8_ =
                 dVar13 * dVar14 + dVar89 * dVar92 + dVar80 * dVar23 +
                 (double)CONCAT44(uVar99,uVar78) * dVar25;
            auVar18._12_4_ = (int)((ulonglong)local_1328._8_8_ >> 0x20);
            local_1608 = *(undefined1 (*) [16])(pFVar74 + lVar63 + 0x18);
            local_1658 = *(undefined1 (*) [16])(pFVar74 + lVar63);
            dVar17 = dVar30 * dVar87 + dVar29 * dVar79 + dVar86 * dVar27 +
                     (double)CONCAT44(uVar99,uVar78) * dVar90;
            pvVar20 = (void *)(dVar30 * dVar95 + dVar29 * dVar85 + dVar86 * dVar28 +
                              (double)CONCAT44(uVar99,uVar78) * dVar93);
            local_1618 = *(FRHICommandRHIThreadFence **)(pFVar74 + lVar63 + 0x10);
            local_1308._8_8_ =
                 dVar30 * dVar81 + dVar29 * dVar96 + dVar86 * dVar24 +
                 (double)CONCAT44(uVar99,uVar78) * dVar26;
            auVar19._8_4_ = (int)pvVar20;
            auVar19._0_8_ = dVar17;
            auVar19._12_4_ = (int)((ulonglong)pvVar20 >> 0x20);
            auVar16._8_4_ = (int)local_1308._8_8_;
            auVar16._0_8_ =
                 dVar30 * dVar14 + dVar29 * dVar92 + dVar86 * dVar23 +
                 (double)CONCAT44(uVar99,uVar78) * dVar25;
            auVar16._12_4_ = (int)((ulonglong)local_1308._8_8_ >> 0x20);
            local_15f8.ReferenceController =
                 *(TReferenceControllerBase<1> **)(pFVar74 + lVar63 + 0x28);
            dVar80 = (double)local_1708->NearClippingDistance + __real_3f1a36e2eb1c432d;
            local_1628._0_8_ = local_1658._0_8_;
            local_1628._8_8_ = local_1658._8_8_;
            local_1338._8_8_ = auVar15._8_8_;
            local_1318._8_8_ = auVar19._8_8_;
            local_1318 = auVar19;
            if (bVar10 && bVar45) {
              if (dVar80 <= (double)local_1328._8_8_) {
                pvVar20 = (void *)0x0;
                if (dVar80 <= (double)local_1308._8_8_) goto LAB_1476a28e8;
                auVar22._4_8_ = dVar95;
                auVar22._0_4_ = (int)((ulonglong)dVar88 >> 0x20);
                auVar84._0_8_ = auVar22._0_8_ << 0x20;
                auVar84._8_4_ = uVar97;
                auVar84._12_4_ = uVar98;
                local_1338._8_8_ = auVar84._8_8_;
                dVar80 = (dVar80 - (double)local_1308._8_8_) /
                         ((double)local_1328._8_8_ - (double)local_1308._8_8_);
                local_1308._8_8_ =
                     (double)local_1308._8_8_ +
                     ((double)local_1328._8_8_ - (double)local_1308._8_8_) * dVar80;
                local_1648._8_4_ = local_1658._8_4_;
                local_1648._0_8_ = local_1628._8_8_;
                local_1648._12_4_ = local_1658._12_4_;
                local_1498._8_8_ = 0;
                local_1498._0_8_ =
                     (double)local_1608._0_8_ +
                     ((double)local_1628._0_8_ - (double)local_1608._0_8_) * dVar80;
                pFStack_14a0 = (FRHITexture *)0x0;
                dVar17 = dVar17 + (dVar88 - dVar17) * dVar80;
                local_1318._8_8_ =
                     (double)local_1318._8_8_ +
                     ((double)local_1338._8_8_ - (double)local_1318._8_8_) * dVar80;
                local_14a8 = (FRHITexture *)
                             ((double)local_1608._8_8_ +
                             ((double)local_1628._8_8_ - (double)local_1608._8_8_) * dVar80);
                local_16e8 = local_1618;
                local_1660 = (TReferenceControllerBase<1> *)
                             (local_15f8.ReferenceController +
                             ((double)local_1618 - (double)local_15f8.ReferenceController) * dVar80)
                ;
                goto LAB_1476a2934;
              }
              auVar83 = local_1658;
              local_1498 = local_1608;
              if (dVar80 <= (double)local_1308._8_8_) {
                auVar21._4_8_ = dVar85;
                auVar21._0_4_ = local_1608._4_4_;
                auVar91._0_8_ = auVar21._0_8_ << 0x20;
                auVar91._8_4_ = local_1608._8_4_;
                auVar91._12_4_ = local_1608._12_4_;
                dVar80 = (dVar80 - (double)local_1328._8_8_) /
                         ((double)local_1308._8_8_ - (double)local_1328._8_8_);
                local_1328._8_8_ =
                     (double)local_1328._8_8_ +
                     ((double)local_1308._8_8_ - (double)local_1328._8_8_) * dVar80;
                local_1658._8_8_ = 0;
                local_1658._0_8_ =
                     (double)local_1628._0_8_ +
                     ((double)local_1608._0_8_ - (double)local_1628._0_8_) * dVar80;
                local_1648._8_8_ = 0;
                local_1648._0_8_ =
                     (double)local_1628._8_8_ +
                     ((double)auVar91._8_8_ - (double)local_1628._8_8_) * dVar80;
                dVar88 = dVar88 + (dVar17 - dVar88) * dVar80;
                local_1338._8_8_ =
                     (double)local_1338._8_8_ +
                     ((double)pvVar20 - (double)local_1338._8_8_) * dVar80;
                local_1318._8_8_ = pvVar20;
                local_14a8 = auVar91._8_8_;
                pFStack_14a0 = (FRHITexture *)local_1608._8_8_;
                local_16e8 = (FRHICommandRHIThreadFence *)
                             ((double)local_1618 +
                             ((double)local_15f8.ReferenceController - (double)local_1618) * dVar80)
                ;
                local_1660 = local_15f8.ReferenceController;
                goto LAB_1476a2934;
              }
            }
            else {
              local_1328._8_8_ = auVar18._8_8_;
              local_1308._8_8_ = auVar16._8_8_;
LAB_1476a28e8:
              pvVar20 = (void *)0x0;
              pFStack_14a0 = (FRHITexture *)0x0;
              local_1648._8_8_ = 0;
              local_1648._0_8_ = local_1628._8_8_;
              local_1498._8_8_ = 0;
              local_1498._0_8_ = local_1608._0_8_;
              local_1658._8_8_ = 0;
              local_1658._0_8_ = local_1628._0_8_;
              local_14a8 = (FRHITexture *)local_1608._8_8_;
              local_16e8 = local_1618;
              local_1660 = local_15f8.ReferenceController;
LAB_1476a2934:
              uVar78 = (undefined4)((ulonglong)pvVar20 >> 0x20);
              dVar80 = __real_3ff0000000000000;
              dVar86 = __real_3ff0000000000000;
              dVar89 = __real_3ff0000000000000;
              if (*(int *)(pFVar74 + lVar63 + 0x4c) != 0) {
                dVar80 = (double)local_1328._8_8_ * (__real_3ff0000000000000 / (double)local_1710);
                dVar86 = (double)local_1690 + (double)local_1690;
                dVar89 = (double)local_1308._8_8_ * (__real_3ff0000000000000 / (double)local_1710);
              }
              local_12f8 = __real_3ff0000000000000 / (double)local_1328._8_8_;
              local_12b0 = __real_3ff0000000000000 / (double)local_1308._8_8_;
              dVar88 = dVar17 * local_12b0 - dVar88 * local_12f8;
              dVar80 = local_16f0 * dVar86 * dVar80;
              local_16f0 = local_16f0 * dVar86 * dVar89;
              dVar86 = (double)local_1318._8_8_ * local_12b0 - (double)local_1338._8_8_ * local_12f8
              ;
              bVar43 = 0.0 <= dVar88;
              local_12e8._0_8_ = dVar80;
              local_1628._8_4_ = (int)pvVar20;
              local_1628._0_8_ = dVar88;
              local_1628._12_4_ = uVar78;
              bVar11 = 0.0 <= dVar86;
              local_1608._8_4_ = (int)pvVar20;
              local_1608._0_8_ = dVar86;
              local_1608._12_4_ = uVar78;
              local_16a0 = (undefined8 *)__real_bff0000000000000;
              if (bVar43) {
                local_16a0 = (undefined8 *)__real_3ff0000000000000;
              }
              local_1580 = __real_bff0000000000000;
              if (bVar11) {
                local_1580 = __real_3ff0000000000000;
              }
              dVar17 = dVar80 * __real_3fe0000000000000 * (double)local_16a0;
              dVar79 = dVar80 * __real_3fe0000000000000 * local_1580;
              dVar92 = dVar79 * local_15d0._s_0.Y;
              dVar96 = dVar79 * local_15d0._s_0.X;
              dVar81 = (double)local_1648._0_8_ + local_15e8._s_0.Y * dVar17;
              dVar79 = dVar79 * local_15d0._s_0.Z;
              dVar90 = (double)local_1648._0_8_ - local_15e8._s_0.Y * dVar17;
              dVar89 = local_16f0 * __real_3fe0000000000000 * (double)local_16a0;
              local_14c8._s_0.Y = dVar81 - dVar92;
              dVar95 = local_16f0 * __real_3fe0000000000000 * local_1580;
              dVar87 = dVar95 * local_15d0._s_0.Z;
              dVar13 = (double)local_16e8 + local_15e8._s_0.Z * dVar17;
              dVar85 = dVar95 * local_15d0._s_0.Y;
              dVar95 = dVar95 * local_15d0._s_0.X;
              dVar14 = (double)local_1658._0_8_ + local_15e8._s_0.X * dVar17;
              dVar93 = (double)local_1658._0_8_ - local_15e8._s_0.X * dVar17;
              local_14c8._s_0.X = dVar14 - dVar96;
              local_14c8._s_0.Z = dVar13 - dVar79;
              local_1638 = (FActivatePipelineCommand *)(dVar13 + dVar79);
              local_1298._s_0.X = dVar14 + dVar96;
              local_1538._s_0.Y = dVar90 - dVar92;
              local_1658._0_8_ = local_1298._s_0.X;
              local_1298._s_0.Y = dVar81 + dVar92;
              local_1648._0_8_ = local_1298._s_0.Y;
              local_16e8 = (FRHICommandRHIThreadFence *)
                           ((double)local_16e8 - local_15e8._s_0.Z * dVar17);
              local_1538._s_0.X = dVar93 - dVar96;
              local_14e0._s_0.X = dVar93 + dVar96;
              local_1538._s_0.Z = (double)local_16e8 - dVar79;
              local_14e0._s_0.Y = dVar90 + dVar92;
              local_14e0._s_0.Z = (double)local_16e8 + dVar79;
              dVar14 = (double)local_1660 + local_15e8._s_0.Z * dVar89;
              dVar13 = (double)local_14a8 + local_15e8._s_0.Y * dVar89;
              dVar81 = (double)local_14a8 - local_15e8._s_0.Y * dVar89;
              dVar93 = (double)local_1660 - local_15e8._s_0.Z * dVar89;
              dVar90 = (double)local_1498._0_8_ - local_15e8._s_0.X * dVar89;
              dVar17 = (double)local_1498._0_8_ + local_15e8._s_0.X * dVar89;
              local_1548._s_0.Y = (double)bVar11;
              local_1468._s_0.Y = dVar13 + dVar85;
              local_14f8._s_0.X = dVar17 - dVar95;
              local_1520._s_0.Z = dVar93 + dVar87;
              local_14f8._s_0.Y = dVar13 - dVar85;
              local_1468._s_0.X = dVar17 + dVar95;
              local_1280._s_0.Z = dVar93 - dVar87;
              local_1520._s_0.X = dVar90 + dVar95;
              local_1468._s_0.Z = dVar14 + dVar87;
              local_15b0._s_0.Y = (double)!bVar11;
              local_14f8._s_0.Z = dVar14 - dVar87;
              local_1280._s_0.X = dVar90 - dVar95;
              local_1520._s_0.Y = dVar81 + dVar85;
              local_1280._s_0.Y = dVar81 - dVar85;
              local_15b0._s_0.X = (double)!bVar43;
              local_1558._s_0.X = (double)bVar43;
              local_1558._s_0.Y = (double)(FRHIBreadcrumbNode *)local_15b0._s_0.Y;
              local_1508._s_0.X = local_15b0._s_0.X;
              pFVar39 = (FActivatePipelineCommand *)local_14e0._s_0.X;
              pFVar40 = (FRHITexture *)local_14e0._s_0.Y;
              dVar17 = local_14e0._s_0.Z;
              pFVar41 = (FActivatePipelineCommand *)local_14c8._s_0.X;
              pFVar42 = (FRHITexture *)local_14c8._s_0.Y;
              dVar89 = local_14c8._s_0.Z;
              local_1488._s_0.X = local_1558._s_0.X;
              local_1478._s_0.Y = local_1548._s_0.Y;
              local_1548._s_0.X = local_1558._s_0.X;
              local_1508._s_0.Y = local_1548._s_0.Y;
              local_1488._s_0.Y = local_15b0._s_0.Y;
              local_1478._s_0.X = local_15b0._s_0.X;
              local_1338 = auVar15;
              local_1328 = auVar18;
              local_1308 = auVar16;
              local_12c0._s_0.X = local_1558._s_0.X;
              local_12c0._s_0.Y = local_1548._s_0.Y;
              local_12a8._s_0.X = local_15b0._s_0.X;
              local_12a8._s_0.Y = local_15b0._s_0.Y;
              local_1298._s_0.Z = (double)local_1638;
              if (*(int *)(pFVar74 + lVar63 + 0x4c) == 0) {
                dVar13 = local_12b0 * local_16f0 * __real_3fe0000000000000;
                dVar80 = local_12f8 * dVar80 * __real_3fe0000000000000;
                dVar14 = dVar13 - dVar80;
                bVar43 = __real_0000000000000000 <= dVar14;
                if (!bVar43) {
                  dVar14 = dVar80 - dVar13;
                }
                local_1558._s_0.Y = local_15b0._s_0.Y;
                if (dVar14 * local_12d0 <= (double)local_16a0 * dVar88) {
                  if ((local_1580 * dVar86 < dVar14 * local_12d8) &&
                     (pFVar41 = (FActivatePipelineCommand *)local_1280._s_0.X,
                     pFVar42 = (FRHITexture *)local_1280._s_0.Y, dVar89 = local_1280._s_0.Z,
                     local_1488._s_0.X = local_15b0._s_0.X, !bVar43)) {
                    local_1520._s_0.X = local_1298._s_0.X;
                    local_1520._s_0.Y = local_1298._s_0.Y;
                    local_1520._16_8_ = local_1638;
                    local_1508._s_0.X = local_1558._s_0.X;
                    pFVar41 = (FActivatePipelineCommand *)local_14c8._s_0.X;
                    pFVar42 = (FRHITexture *)local_14c8._s_0.Y;
                    dVar89 = local_14c8._s_0.Z;
                    local_1488._s_0.X = local_1558._s_0.X;
                  }
                }
                else {
                  if (local_1580 * dVar86 < dVar14 * local_12d8) {
                    pFVar68 = pFVar74 + lVar63 + 0x44;
                    pFVar74 = pFVar74 + lVar63 + 0x34;
                    if (bVar43) {
                      pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                          (&local_db8,(TVector<double> *)&local_14f8._s_0,
                                           (TVector2<double> *)&local_1558._s_0,
                                           (FLinearColor *)pFVar74,(FColor *)pFVar68);
                      uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
                      *puVar70 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
                      puVar70[1] = uVar31;
                      uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
                      puVar70[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
                      puVar70[3] = uVar31;
                      uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
                      *(TVector2<float>_u_0 *)(puVar70 + 4) =
                           (pFVar57->TextureCoordinate).field0_0x0;
                      puVar70[5] = uVar31;
                      uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
                      puVar70[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
                      puVar70[7] = uVar31;
                      pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                          (&local_d78,(TVector<double> *)&local_1468._s_0,
                                           (TVector2<double> *)&local_1548._s_0,
                                           (FLinearColor *)pFVar74,(FColor *)pFVar68);
                      uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
                      *puVar71 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
                      puVar71[1] = uVar31;
                      uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
                      puVar71[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
                      puVar71[3] = uVar31;
                      uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
                      *(TVector2<float>_u_0 *)(puVar71 + 4) =
                           (pFVar57->TextureCoordinate).field0_0x0;
                      puVar71[5] = uVar31;
                      uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
                      puVar71[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
                      puVar71[7] = uVar31;
                      pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                          (&local_d38,(TVector<double> *)&local_1280._s_0,
                                           (TVector2<double> *)&local_12a8._s_0,
                                           (FLinearColor *)pFVar74,(FColor *)pFVar68);
                      uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
                      *puVar75 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
                      puVar75[1] = uVar31;
                      uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
                      puVar75[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
                      puVar75[3] = uVar31;
                      uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
                      *(TVector2<float>_u_0 *)(puVar75 + 4) =
                           (pFVar57->TextureCoordinate).field0_0x0;
                      puVar75[5] = uVar31;
                      uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
                      puVar75[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
                      puVar75[7] = uVar31;
                      pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                          (&local_cf8,(TVector<double> *)&local_1280._s_0,
                                           (TVector2<double> *)&local_12a8._s_0,
                                           (FLinearColor *)pFVar74,(FColor *)pFVar68);
                      uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
                      *local_16e0 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
                      local_16e0[1] = uVar31;
                      uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
                      local_16e0[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
                      local_16e0[3] = uVar31;
                      uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
                      *(TVector2<float>_u_0 *)(local_16e0 + 4) =
                           (pFVar57->TextureCoordinate).field0_0x0;
                      local_16e0[5] = uVar31;
                      uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
                      local_16e0[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
                      local_16e0[7] = uVar31;
                      pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                          (&local_cb8,(TVector<double> *)&local_1468._s_0,
                                           (TVector2<double> *)&local_1548._s_0,
                                           (FLinearColor *)pFVar74,(FColor *)pFVar68);
                      pTVar76 = &local_1508;
                      pTVar64 = &local_1520;
                      uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
                      *local_1720 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
                      local_1720[1] = uVar31;
                      uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
                      local_1720[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
                      local_1720[3] = uVar31;
                      uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
                      *(TVector2<float>_u_0 *)(local_1720 + 4) =
                           (pFVar57->TextureCoordinate).field0_0x0;
                      local_1720[5] = uVar31;
                      uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
                      local_1720[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
                      local_1720[7] = uVar31;
                      pFVar57 = &local_c78;
                    }
                    else {
                      pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                          (&local_f38,(TVector<double> *)&local_14c8._s_0,
                                           (TVector2<double> *)&local_1488._s_0,
                                           (FLinearColor *)pFVar74,(FColor *)pFVar68);
                      uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
                      *puVar70 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
                      puVar70[1] = uVar31;
                      uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
                      puVar70[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
                      puVar70[3] = uVar31;
                      uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
                      *(TVector2<float>_u_0 *)(puVar70 + 4) =
                           (pFVar57->TextureCoordinate).field0_0x0;
                      puVar70[5] = uVar31;
                      uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
                      puVar70[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
                      puVar70[7] = uVar31;
                      pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                          (&local_ef8,(TVector<double> *)&local_1298._s_0,
                                           (TVector2<double> *)&local_12c0._s_0,
                                           (FLinearColor *)pFVar74,(FColor *)pFVar68);
                      uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
                      *puVar71 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
                      puVar71[1] = uVar31;
                      uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
                      puVar71[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
                      puVar71[3] = uVar31;
                      uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
                      *(TVector2<float>_u_0 *)(puVar71 + 4) =
                           (pFVar57->TextureCoordinate).field0_0x0;
                      puVar71[5] = uVar31;
                      uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
                      puVar71[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
                      puVar71[7] = uVar31;
                      pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                          (&local_eb8,(TVector<double> *)&local_1538._s_0,
                                           (TVector2<double> *)&local_15b0._s_0,
                                           (FLinearColor *)pFVar74,(FColor *)pFVar68);
                      uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
                      *puVar75 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
                      puVar75[1] = uVar31;
                      uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
                      puVar75[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
                      puVar75[3] = uVar31;
                      uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
                      *(TVector2<float>_u_0 *)(puVar75 + 4) =
                           (pFVar57->TextureCoordinate).field0_0x0;
                      puVar75[5] = uVar31;
                      uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
                      puVar75[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
                      puVar75[7] = uVar31;
                      pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                          (&local_e78,(TVector<double> *)&local_1538._s_0,
                                           (TVector2<double> *)&local_15b0._s_0,
                                           (FLinearColor *)pFVar74,(FColor *)pFVar68);
                      uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
                      *local_16e0 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
                      local_16e0[1] = uVar31;
                      uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
                      local_16e0[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
                      local_16e0[3] = uVar31;
                      uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
                      *(TVector2<float>_u_0 *)(local_16e0 + 4) =
                           (pFVar57->TextureCoordinate).field0_0x0;
                      local_16e0[5] = uVar31;
                      uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
                      local_16e0[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
                      local_16e0[7] = uVar31;
                      pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                          (&local_e38,(TVector<double> *)&local_1298._s_0,
                                           (TVector2<double> *)&local_12c0._s_0,
                                           (FLinearColor *)pFVar74,(FColor *)pFVar68);
                      pTVar76 = &local_1478;
                      pTVar64 = &local_14e0;
                      uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
                      *local_1720 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
                      local_1720[1] = uVar31;
                      uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
                      local_1720[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
                      local_1720[3] = uVar31;
                      uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
                      *(TVector2<float>_u_0 *)(local_1720 + 4) =
                           (pFVar57->TextureCoordinate).field0_0x0;
                      local_1720[5] = uVar31;
                      uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
                      local_1720[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
                      local_1720[7] = uVar31;
                      pFVar57 = &local_df8;
                    }
                    pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                        (pFVar57,(TVector<double> *)&pTVar64->_s_0,
                                         (TVector2<double> *)&pTVar76->_s_0,(FLinearColor *)pFVar74,
                                         (FColor *)pFVar68);
                    puVar70 = puVar70 + 0x30;
                    local_16e0 = local_16e0 + 0x30;
                    puVar71 = puVar71 + 0x30;
                    local_1720 = local_1720 + 0x30;
                    puVar75 = puVar75 + 0x30;
                    uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
                    local_16b0 = local_16b0 + 0x30;
                    local_16d0 = local_16d0 + 0x30;
                    local_16c8 = local_16c8 + 0x30;
                    local_16c0 = local_16c0 + 0x30;
                    local_16b8 = local_16b8 + 0x30;
                    local_1700 = local_1700 + 0x30;
                    *local_16d8 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
                    local_16d8[1] = uVar31;
                    uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
                    local_16d8[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
                    local_16d8[3] = uVar31;
                    uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
                    *(TVector2<float>_u_0 *)(local_16d8 + 4) =
                         (pFVar57->TextureCoordinate).field0_0x0;
                    local_16d8[5] = uVar31;
                    uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
                    local_16d8[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
                    local_16d8[7] = uVar31;
                    local_16d8 = local_16d8 + 0x30;
                    local_1744 = local_1744 + 2;
                    auVar83 = local_1628;
                    auVar15 = local_1338;
                    auVar18 = local_1328;
                    auVar16 = local_1308;
                    goto LAB_1476a362e;
                  }
                  pFVar39 = (FActivatePipelineCommand *)local_1280._s_0.X;
                  pFVar40 = (FRHITexture *)local_1280._s_0.Y;
                  dVar17 = local_1280._s_0.Z;
                  local_1478._s_0.Y = local_15b0._s_0.Y;
                  if (!bVar43) {
                    local_1558._s_0.Y = local_1548._s_0.Y;
                    local_14f8._s_0.X = local_1298._s_0.X;
                    local_14f8._s_0.Y = local_1298._s_0.Y;
                    local_14f8._16_8_ = local_1638;
                    pFVar39 = (FActivatePipelineCommand *)local_14e0._s_0.X;
                    pFVar40 = (FRHITexture *)local_14e0._s_0.Y;
                    dVar17 = local_14e0._s_0.Z;
                    local_1478._s_0.Y = local_1548._s_0.Y;
                  }
                }
              }
              local_14c8._s_0.Z = dVar89;
              local_14c8._s_0.Y = (double)pFVar42;
              local_14c8._s_0.X = (double)pFVar41;
              local_14e0._s_0.Z = dVar17;
              local_14e0._s_0.Y = (double)pFVar40;
              local_14e0._s_0.X = (double)pFVar39;
              pFVar68 = pFVar74 + lVar63 + 0x34;
              pFVar74 = pFVar74 + lVar63 + 0x44;
              pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                  (&local_c38,(TVector<double> *)&local_1538._s_0,
                                   (TVector2<double> *)&local_15b0._s_0,(FLinearColor *)pFVar68,
                                   (FColor *)pFVar74);
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
              *puVar70 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
              puVar70[1] = uVar31;
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
              puVar70[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
              puVar70[3] = uVar31;
              uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
              *(TVector2<float>_u_0 *)(puVar70 + 4) = (pFVar57->TextureCoordinate).field0_0x0;
              puVar70[5] = uVar31;
              uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
              puVar70[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
              puVar70[7] = uVar31;
              pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                  (&local_bf8,(TVector<double> *)&local_14c8._s_0,
                                   (TVector2<double> *)&local_1488._s_0,(FLinearColor *)pFVar68,
                                   (FColor *)pFVar74);
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
              *puVar71 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
              puVar71[1] = uVar31;
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
              puVar71[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
              puVar71[3] = uVar31;
              uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
              *(TVector2<float>_u_0 *)(puVar71 + 4) = (pFVar57->TextureCoordinate).field0_0x0;
              puVar71[5] = uVar31;
              uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
              puVar71[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
              puVar71[7] = uVar31;
              pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                  (&local_bb8,(TVector<double> *)&local_14f8._s_0,
                                   (TVector2<double> *)&local_1558._s_0,(FLinearColor *)pFVar68,
                                   (FColor *)pFVar74);
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
              *puVar75 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
              puVar75[1] = uVar31;
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
              puVar75[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
              puVar75[3] = uVar31;
              uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
              *(TVector2<float>_u_0 *)(puVar75 + 4) = (pFVar57->TextureCoordinate).field0_0x0;
              puVar75[5] = uVar31;
              uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
              puVar75[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
              puVar75[7] = uVar31;
              pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                  (&local_b78,(TVector<double> *)&local_1538._s_0,
                                   (TVector2<double> *)&local_15b0._s_0,(FLinearColor *)pFVar68,
                                   (FColor *)pFVar74);
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
              *local_16e0 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
              local_16e0[1] = uVar31;
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
              local_16e0[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
              local_16e0[3] = uVar31;
              uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
              *(TVector2<float>_u_0 *)(local_16e0 + 4) = (pFVar57->TextureCoordinate).field0_0x0;
              local_16e0[5] = uVar31;
              uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
              local_16e0[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
              local_16e0[7] = uVar31;
              pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                  (&local_b38,(TVector<double> *)&local_1468._s_0,
                                   (TVector2<double> *)&local_1548._s_0,(FLinearColor *)pFVar68,
                                   (FColor *)pFVar74);
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
              *local_1720 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
              local_1720[1] = uVar31;
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
              local_1720[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
              local_1720[3] = uVar31;
              uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
              *(TVector2<float>_u_0 *)(local_1720 + 4) = (pFVar57->TextureCoordinate).field0_0x0;
              local_1720[5] = uVar31;
              uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
              local_1720[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
              local_1720[7] = uVar31;
              pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                  (&local_af8,(TVector<double> *)&local_14f8._s_0,
                                   (TVector2<double> *)&local_1558._s_0,(FLinearColor *)pFVar68,
                                   (FColor *)pFVar74);
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
              *local_16d8 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
              local_16d8[1] = uVar31;
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
              local_16d8[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
              local_16d8[3] = uVar31;
              uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
              *(TVector2<float>_u_0 *)(local_16d8 + 4) = (pFVar57->TextureCoordinate).field0_0x0;
              local_16d8[5] = uVar31;
              uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
              local_16d8[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
              local_16d8[7] = uVar31;
              pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                  (&local_ab8,(TVector<double> *)&local_1538._s_0,
                                   (TVector2<double> *)&local_15b0._s_0,(FLinearColor *)pFVar68,
                                   (FColor *)pFVar74);
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
              *local_16b0 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
              local_16b0[1] = uVar31;
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
              local_16b0[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
              local_16b0[3] = uVar31;
              uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
              *(TVector2<float>_u_0 *)(local_16b0 + 4) = (pFVar57->TextureCoordinate).field0_0x0;
              local_16b0[5] = uVar31;
              uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
              local_16b0[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
              local_16b0[7] = uVar31;
              pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                  (&local_a78,(TVector<double> *)&local_1520._s_0,
                                   (TVector2<double> *)&local_1508._s_0,(FLinearColor *)pFVar68,
                                   (FColor *)pFVar74);
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
              *local_16d0 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
              local_16d0[1] = uVar31;
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
              local_16d0[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
              local_16d0[3] = uVar31;
              uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
              *(TVector2<float>_u_0 *)(local_16d0 + 4) = (pFVar57->TextureCoordinate).field0_0x0;
              local_16d0[5] = uVar31;
              uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
              local_16d0[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
              local_16d0[7] = uVar31;
              pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                  (&local_a38,(TVector<double> *)&local_1468._s_0,
                                   (TVector2<double> *)&local_1548._s_0,(FLinearColor *)pFVar68,
                                   (FColor *)pFVar74);
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
              *local_16c8 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
              local_16c8[1] = uVar31;
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
              local_16c8[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
              local_16c8[3] = uVar31;
              uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
              *(TVector2<float>_u_0 *)(local_16c8 + 4) = (pFVar57->TextureCoordinate).field0_0x0;
              local_16c8[5] = uVar31;
              uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
              local_16c8[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
              local_16c8[7] = uVar31;
              pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                  (&local_9f8,(TVector<double> *)&local_1538._s_0,
                                   (TVector2<double> *)&local_15b0._s_0,(FLinearColor *)pFVar68,
                                   (FColor *)pFVar74);
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
              *local_16c0 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
              local_16c0[1] = uVar31;
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
              local_16c0[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
              local_16c0[3] = uVar31;
              uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
              *(TVector2<float>_u_0 *)(local_16c0 + 4) = (pFVar57->TextureCoordinate).field0_0x0;
              local_16c0[5] = uVar31;
              uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
              local_16c0[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
              local_16c0[7] = uVar31;
              pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                  (&local_9b8,(TVector<double> *)&local_14e0._s_0,
                                   (TVector2<double> *)&local_1478._s_0,(FLinearColor *)pFVar68,
                                   (FColor *)pFVar74);
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
              *local_16b8 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
              local_16b8[1] = uVar31;
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
              local_16b8[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
              local_16b8[3] = uVar31;
              uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
              *(TVector2<float>_u_0 *)(local_16b8 + 4) = (pFVar57->TextureCoordinate).field0_0x0;
              local_16b8[5] = uVar31;
              uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
              local_16b8[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
              local_16b8[7] = uVar31;
              pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                  (&local_978,(TVector<double> *)&local_1520._s_0,
                                   (TVector2<double> *)&local_1508._s_0,(FLinearColor *)pFVar68,
                                   (FColor *)pFVar74);
              puVar70 = puVar70 + 0x60;
              local_16e0 = local_16e0 + 0x60;
              puVar71 = puVar71 + 0x60;
              local_1720 = local_1720 + 0x60;
              puVar75 = puVar75 + 0x60;
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
              local_16d8 = local_16d8 + 0x60;
              local_16b0 = local_16b0 + 0x60;
              local_16d0 = local_16d0 + 0x60;
              local_16c8 = local_16c8 + 0x60;
              local_16c0 = local_16c0 + 0x60;
              local_16b8 = local_16b8 + 0x60;
              *local_1700 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
              local_1700[1] = uVar31;
              uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
              local_1700[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
              local_1700[3] = uVar31;
              uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
              *(TVector2<float>_u_0 *)(local_1700 + 4) = (pFVar57->TextureCoordinate).field0_0x0;
              local_1700[5] = uVar31;
              uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
              local_1700[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
              local_1700[7] = uVar31;
              local_1700 = local_1700 + 0x60;
              local_1744 = local_1744 + 4;
              auVar83 = local_1628;
              auVar15 = local_1338;
              auVar18 = local_1328;
              auVar16 = local_1308;
            }
LAB_1476a362e:
            local_1308 = auVar16;
            local_1328 = auVar18;
            local_1338 = auVar15;
            local_1628 = auVar83;
            uVar78 = SUB84(__real_3ff0000000000000,0);
            uVar99 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            local_1740 = local_1740 + 1;
            lVar63 = lVar63 + 0x50;
            local_1698 = (double)((longlong)local_1698 + -1);
            uVar73 = __xmm_7fffffff7fffffff7fffffff7fffffff;
          } while (local_1698 != 0.0);
          local_1698 = 0.0;
          param_1 = (FRHICommandList *)local_16f8;
          fVar94 = __real_3f000000;
          uVar77 = local_1728;
        }
        local_1740 = uVar77;
        FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_438);
        if (0 < (int)local_1744) {
          FRHICommandList::SetStreamSource(param_1,0,local_1578,0);
          FRHICommandList::DrawPrimitive(param_1,0,local_1744,param_8);
        }
        if (local_1578 != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)local_1578);
        }
        if ((local_408 != (FRHICommandListBase *)0x0) && (local_400 != (FRHIBuffer *)0x0)) {
          FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_438);
        }
        if (local_438._0_8_ != 0) {
          plVar62 = (longlong *)(local_438 + 0x10);
          if ((longlong *)local_438._40_8_ != (longlong *)0x0) {
            plVar62 = (longlong *)local_438._40_8_;
          }
          (**(code **)(*plVar62 + 0x10))();
        }
        if (local_1570 != (FRHIResource *)0x0) {
          FRHIResource::Release(local_1570);
        }
        dVar80 = local_16a8;
      } while ((int)local_1740 < (this->ThickLines).ArrayNum);
      local_568._64_8_ =
           TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI.Reference;
    }
    iVar65 = (this->WireTris).ArrayNum;
    if (0 < iVar65) {
      pTVar1 = &this->WireTriVerts;
      if (((int)(this->WireTriVerts)._padding_ != iVar65 * 3) &&
         (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                             ("WireTriVerts.Num() == WireTris.Num() * 3",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BatchedElements.cpp"
                              ,0x4e1,L""), bVar45)) {
        pcVar12 = (code *)swi(3);
        uVar44 = (*pcVar12)();
        return (bool)uVar44;
      }
      local_1450 = (**(code **)(pTVar1->_padding_ + 0x10))(pTVar1);
      uVar77 = 0;
      uStack_1448 = 0x4004;
      uStack_144c = 0;
      uStack_1444 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
      local_1058 = (ulonglong)local_1450;
      uStack_1050._4_4_ = uStack_1444;
      uStack_1050._0_4_ = 0x4004;
      local_1440 = L"WireTris";
      uStack_1428._0_4_ = 0;
      uStack_1428._4_4_ = 0;
      uStack_142c = 2;
      local_1048 = L"WireTris";
      local_1430 = 8;
      local_1038._0_4_ = 8;
      local_1038._4_4_ = 2;
      local_1420._0_1_ = ENoAction;
      local_1420._1_1_ = ENoAction;
      local_1420._2_6_ = 0;
      local_1028._0_4_ = 0;
      local_1028._4_4_ = 0;
      uStack_1030._0_4_ = 0;
      uStack_1030._4_4_ = 0;
      pTStack_1438 = pTVar1;
      pTStack_1040 = pTVar1;
      FRHICommandListBase::CreateBuffer
                ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)(local_1688 + 8));
      FRHICommandList::SetStreamSource(param_1,0,(FRHIBuffer *)local_1688._8_8_,0);
      uVar73 = (this->WireTris).ArrayNum;
      local_15a0[0] = 1;
      local_159c = 0;
      local_1594 = 0x100;
      iVar65 = (int)((ulonglong)(longlong)GRHIGlobals.DrawUPVertexCheckCount / 0xc0) * 3;
      iVar72 = 0x10000;
      if (iVar65 < 0x10000) {
        iVar72 = iVar65;
      }
      local_1724 = (int)(((longlong)iVar72 / 3 + ((longlong)iVar72 >> 0x3f) & 0xffffffffU) >> 0x1f)
                   + iVar72 / 3 + (iVar72 >> 0x1f);
      if (0 < (int)uVar73) {
        do {
          uVar48 = uVar73;
          if ((int)(uVar77 + local_1724) < (int)uVar73) {
            uVar48 = uVar77 + local_1724;
          }
          uVar49 = 0;
          if ((int)uVar77 < (this->WireTris).ArrayNum) {
            uVar49 = ~uVar77 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar12 = (code *)swi(3);
            uVar44 = (*pcVar12)();
            return (bool)uVar44;
          }
          uVar66 = uVar77 + 1;
          fVar5 = *(float *)((this->WireTris).AllocatorInstance.Data + (longlong)(int)uVar77 * 4);
          uVar49 = uVar48;
          if ((int)uVar66 < (int)uVar48) {
            lVar63 = (longlong)(int)uVar66 << 2;
            do {
              uVar49 = 0;
              if ((int)uVar66 < (this->WireTris).ArrayNum) {
                uVar49 = ~uVar66 >> 0x1f;
              }
              if ((uVar49 == 0) &&
                 (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar45)) {
                pcVar12 = (code *)swi(3);
                uVar44 = (*pcVar12)();
                return (bool)uVar44;
              }
              uVar49 = uVar66;
              if (fVar5 != *(float *)((this->WireTris).AllocatorInstance.Data + lVar63)) break;
              uVar66 = uVar66 + 1;
              lVar63 = lVar63 + 4;
              uVar49 = uVar48;
            } while ((int)uVar66 < (int)uVar48);
          }
          local_159c._0_4_ = fVar5;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                                   ::__l2::_thread_safe_static_guard_0__),
             `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            ::FName::FName(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                            ::__l2::LLMScope_Name1153,L"RHIMisc/CreateRasterizerState");
            _Init_thread_footer(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          FLLMScope::FLLMScope
                    (&local_168c,
                     `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                     ::__l2::LLMScope_Name1153,false,None,Default,true);
          FMemScope::FMemScope
                    (&local_12c8,
                     &`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                      ::__l2::LLMScope_Name1153,true);
          (**(code **)(GDynamicRHI->_padding_ + 0x50))(GDynamicRHI,&local_1568,local_15a0);
          FMemScope::~FMemScope(&local_12c8);
          FLLMScope::~FLLMScope(&local_168c);
          local_568._64_8_ = local_1568;
          PrepareShaders(this,param_1,(FGraphicsPipelineStateInitializer *)local_568,local_1714,
                         local_1718,SE_BLEND_Opaque,&local_348,(FBatchedElementParameters *)0x0,
                         GWhiteTexture,param_5,param_6,(FDepthFieldGlowInfo *)0x0,local_1708,fVar94)
          ;
          if ((GRHICommandList.bLatchedBypass == false) ||
             ((((FRHICommandListBase *)param_1)->PersistentState).bImmediate == '\0')) {
            pFVar59 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
            ((FRHICommandListBase *)param_1)->NumCommands =
                 ((FRHICommandListBase *)param_1)->NumCommands + 1;
            *((FRHICommandListBase *)param_1)->CommandLink = pFVar59;
            ((FRHICommandListBase *)param_1)->CommandLink = &pFVar59->Next;
            pFVar59->Next = (FRHICommandBase *)0x0;
            pFVar59->_padding_ = (longlong)&___7FRHICommandDrawPrimitive__6B_;
            *(uint *)&pFVar59[1].Next = param_8;
            *(uint *)&pFVar59[1]._padding_ = uVar77 * 3;
            *(uint *)((longlong)&pFVar59[1]._padding_ + 4) = uVar49 - uVar77;
          }
          else {
            pIVar58 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
            (**(code **)(pIVar58->_padding_ + 0x1e0))(pIVar58);
          }
          if (local_1568 != (FRHIResource *)0x0) {
            FRHIResource::Release(local_1568);
          }
          uVar77 = uVar49;
        } while ((int)uVar49 < (int)uVar73);
      }
      uVar31 = local_1688._8_8_;
      if (((FRHIBuffer *)local_1688._8_8_ != (FRHIBuffer *)0x0) &&
         (local_1688._8_8_ = (FRHIBuffer *)0x0, (FRHIBuffer *)uVar31 != (FRHIBuffer *)0x0)) {
        FRHIResource::Release((FRHIResource *)uVar31);
      }
      local_568._64_8_ =
           TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI.Reference;
      if ((FRHIBuffer *)local_1688._8_8_ != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_1688._8_8_);
      }
    }
  }
  iVar65 = (this->Sprites).ArrayNum;
  if (0 < iVar65) {
    pFVar74 = (this->Sprites).AllocatorInstance.Data;
    lVar67 = 0x58;
    local_1738.Data = (FScriptContainerElement *)0x0;
    local_1730 = iVar65;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar65,0,&local_1738,iVar65,&local_172c);
    memcpy(local_1738.Data,pFVar74,(longlong)iVar65 * 0x58);
    local_15b8[0] = param_7;
    AlgoImpl::
    IntroSortInternal<FBatchedElements::FBatchedSprite,int,FIdentityFunctor,TDereferenceWrapper<FBatchedElements::FBatchedSprite,_FBatchedElements::Draw_::__l125::FCompareSprite>_>
              ((FBatchedSprite *)local_1738.Data,local_1730,local_1748,(FCompareSprite *)local_15b8)
    ;
    uVar73 = 0;
    lVar63 = 0;
    if (0 < local_1730) {
      lVar69 = 0;
      uVar77 = uVar73;
      iVar65 = local_1730;
      do {
        uVar48 = uVar73;
        if ((int)uVar77 < iVar65) {
          uVar48 = ~uVar77 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar65 = local_1730, bVar45)) {
          pcVar12 = (code *)swi(3);
          uVar44 = (*pcVar12)();
          return (bool)uVar44;
        }
        FVar8 = local_1738.Data[lVar69 + 0x50];
        if ((FVar8 == (FScriptContainerElement)0x0) ||
           ((((char)FVar8 - 1U & 0xfa) == 0 && (FVar8 != (FScriptContainerElement)0x2)))) {
          TVar47 = OpaqueAndMasked;
        }
        else {
          TVar47 = Translucent;
        }
        if ((param_7 & TVar47) == None) break;
        uVar77 = uVar77 + 1;
        lVar69 = lVar69 + 0x58;
      } while ((int)uVar77 < iVar65);
      if (0 < (int)uVar77) {
        if (0x17fffffa < uVar77) {
          if (1 < (byte)LogBatchedElements._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u_Too_many_sprite_151742208,
                       (FLogCategoryBase *)&LogBatchedElements);
          }
          if ((FBatchedSprite *)local_1738.Data == (FBatchedSprite *)0x0) {
            return false;
          }
          FMemory::Free(local_1738.Data);
          return false;
        }
        local_1418 = uVar77 * 0x180;
        uStack_1414 = 0;
        uStack_140c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
        uStack_1410 = 0x4004;
        local_1028._8_8_ = ZEXT48(local_1418);
        local_1028._20_4_ = uStack_140c;
        local_1028._16_4_ = 0x4004;
        local_1408 = L"Sprites";
        pFStack_1400 = (FRHITexture *)0x0;
        uStack_13f0._0_1_ = None;
        uStack_13f0._1_1_ = '\0';
        uStack_13f0._2_1_ = '\0';
        uStack_13f0._3_1_ = 0;
        uStack_13f0._4_4_ = 0;
        local_13f8._0_1_ = 8;
        local_13f8._1_1_ = ENoAction;
        local_13f8._2_1_ = ENoAction;
        local_13f8._3_1_ = ENoAction;
        local_1010 = L"Sprites";
        uStack_1008._0_4_ = 0;
        uStack_1008._4_4_ = 0;
        FStack_13f4.Value = DepthWrite|DepthRead;
        local_1000._0_4_ = 8;
        local_1000._4_4_ = 3;
        local_13e8._0_4_ = 0;
        local_13e8._4_4_ = 0;
        FStack_ff8.Lines = 0;
        FStack_ff8.Quads = 0;
        FStack_ff8.Draws = 0;
        FStack_ff8.Triangles = 0;
        pFVar56 = FRHICommandListBase::CreateBufferInitializer
                            ((FRHICommandListBase *)param_1,&local_398,
                             (FRHIBufferCreateDesc *)(local_1028 + 8));
        TRHIBufferInitializer<FSimpleElementVertex>::TRHIBufferInitializer<FSimpleElementVertex>
                  ((TRHIBufferInitializer<FSimpleElementVertex> *)local_488,pFVar56);
        FRHIBufferInitializer::~FRHIBufferInitializer(&local_398);
        local_1700 = (undefined8 *)(longlong)(int)uVar77;
        if (0 < (int)uVar77) {
          local_1720 = (undefined8 *)((longlong)local_448 + 0x80);
          local_16a0 = local_1700;
          do {
            uVar48 = __xmm_80000000800000008000000080000000;
            uVar49 = 0;
            if ((int)uVar73 < local_1730) {
              uVar49 = ~uVar73 >> 0x1f;
            }
            if ((uVar49 == 0) &&
               (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar45)) {
              pcVar12 = (code *)swi(3);
              uVar44 = (*pcVar12)();
              return (bool)uVar44;
            }
            FVar35.Data = local_1738.Data;
            local_16f0 = (double)*(float *)(local_1738.Data + lVar63 + 0x18);
            local_1698 = local_15e8._s_0.Y * local_16f0;
            dVar89 = local_15e8._s_0.X * local_16f0;
            local_16f0 = local_15e8._s_0.Z * local_16f0;
            dVar80 = (double)(float)(*(uint *)(local_1738.Data + lVar63 + 0x1c) ^ uVar48);
            local_16a8 = dVar80 * local_15d0._s_0.Z;
            dVar17 = dVar80 * local_15d0._s_0.X;
            dVar80 = dVar80 * local_15d0._s_0.Y;
            uVar48 = (**(code **)(**(longlong **)(local_1738.Data + lVar63 + 0x20) + 0x30))();
            fVar94 = *(float *)(FVar35.Data + lVar63 + 0x3c);
            fVar5 = *(float *)(FVar35.Data + lVar63 + 0x40);
            uVar49 = (**(code **)(**(longlong **)(FVar35.Data + lVar63 + 0x20) + 0x30))();
            uVar66 = (**(code **)(**(longlong **)(FVar35.Data + lVar63 + 0x20) + 0x38))();
            fVar6 = *(float *)(FVar35.Data + lVar63 + 0x44);
            fVar7 = *(float *)(FVar35.Data + lVar63 + 0x48);
            uVar50 = (**(code **)(**(longlong **)(FVar35.Data + lVar63 + 0x20) + 0x38))();
            pFVar68 = FVar35.Data + lVar63 + 0x28;
            pFVar74 = FVar35.Data + lVar63 + 0x38;
            dVar86 = (double)((fVar94 + fVar5) / (float)uVar49);
            dVar88 = (double)(fVar6 / (float)uVar66);
            local_1190._s_0.X = (dVar89 + *(double *)(FVar35.Data + lVar63)) - dVar17;
            local_1190._s_0.Y = (local_1698 + *(double *)(FVar35.Data + lVar63 + 8)) - dVar80;
            local_1190._s_0.Z = (local_16f0 + *(double *)(FVar35.Data + lVar63 + 0x10)) - local_16a8
            ;
            local_1238._s_0.X = dVar86;
            local_1238._s_0.Y = dVar88;
            pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                (&local_938,(TVector<double> *)&local_1190._s_0,
                                 (TVector2<double> *)&local_1238._s_0,(FLinearColor *)pFVar68,
                                 (FColor *)pFVar74);
            dVar14 = local_16a8;
            uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
            local_1720[-0x10] = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
            local_1720[-0xf] = uVar31;
            uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
            local_1720[-0xe] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
            local_1720[-0xd] = uVar31;
            uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
            *(TVector2<float>_u_0 *)(local_1720 + -0xc) = (pFVar57->TextureCoordinate).field0_0x0;
            local_1720[-0xb] = uVar31;
            uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
            local_1720[-10] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
            local_1720[-9] = uVar31;
            dVar93 = (double)((fVar6 + fVar7) / (float)uVar50);
            local_1178._s_0.X = dVar89 + *(double *)(FVar35.Data + lVar63) + dVar17;
            local_1178._s_0.Y = local_1698 + *(double *)(FVar35.Data + lVar63 + 8) + dVar80;
            local_1178._s_0.Z = local_16f0 + *(double *)(FVar35.Data + lVar63 + 0x10) + local_16a8;
            local_1228._s_0.X = dVar86;
            local_1228._s_0.Y = dVar93;
            pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                (&local_8f8,(TVector<double> *)&local_1178._s_0,
                                 (TVector2<double> *)&local_1228._s_0,(FLinearColor *)pFVar68,
                                 (FColor *)pFVar74);
            dVar81 = local_1698;
            dVar13 = local_16f0;
            uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
            local_1720[-8] = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
            local_1720[-7] = uVar31;
            uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
            local_1720[-6] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
            local_1720[-5] = uVar31;
            uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
            *(TVector2<float>_u_0 *)(local_1720 + -4) = (pFVar57->TextureCoordinate).field0_0x0;
            local_1720[-3] = uVar31;
            uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
            local_1720[-2] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
            local_1720[-1] = uVar31;
            dVar90 = (double)(fVar94 / (float)uVar48);
            local_1160._s_0.X = (*(double *)(FVar35.Data + lVar63) - dVar89) - dVar17;
            local_1160._s_0.Y = (*(double *)(FVar35.Data + lVar63 + 8) - local_1698) - dVar80;
            local_1160._s_0.Z = (*(double *)(FVar35.Data + lVar63 + 0x10) - local_16f0) - dVar14;
            local_1218._s_0.X = dVar90;
            local_1218._s_0.Y = dVar88;
            pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                (&local_8b8,(TVector<double> *)&local_1160._s_0,
                                 (TVector2<double> *)&local_1218._s_0,(FLinearColor *)pFVar68,
                                 (FColor *)pFVar74);
            uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
            *local_1720 = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
            local_1720[1] = uVar31;
            uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
            local_1720[2] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
            local_1720[3] = uVar31;
            uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
            *(TVector2<float>_u_0 *)(local_1720 + 4) = (pFVar57->TextureCoordinate).field0_0x0;
            local_1720[5] = uVar31;
            uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
            local_1720[6] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
            local_1720[7] = uVar31;
            local_11d8._s_0.Y = dVar81 + *(double *)(FVar35.Data + lVar63 + 8) + dVar80;
            local_11d8._s_0.X = dVar89 + *(double *)(FVar35.Data + lVar63) + dVar17;
            local_11d8._s_0.Z = dVar13 + *(double *)(FVar35.Data + lVar63 + 0x10) + dVar14;
            local_1208._s_0.X = dVar86;
            local_1208._s_0.Y = dVar93;
            pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                (&local_878,(TVector<double> *)&local_11d8._s_0,
                                 (TVector2<double> *)&local_1208._s_0,(FLinearColor *)pFVar68,
                                 (FColor *)pFVar74);
            uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
            local_1720[8] = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
            local_1720[9] = uVar31;
            uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
            local_1720[10] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
            local_1720[0xb] = uVar31;
            uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
            *(TVector2<float>_u_0 *)(local_1720 + 0xc) = (pFVar57->TextureCoordinate).field0_0x0;
            local_1720[0xd] = uVar31;
            uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
            local_1720[0xe] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
            local_1720[0xf] = uVar31;
            local_11c0._s_0.X = (*(double *)(FVar35.Data + lVar63) - dVar89) - dVar17;
            local_11c0._s_0.Y = (*(double *)(FVar35.Data + lVar63 + 8) - dVar81) - dVar80;
            local_11c0._s_0.Z = (*(double *)(FVar35.Data + lVar63 + 0x10) - dVar13) - dVar14;
            local_11f8._s_0.X = dVar90;
            local_11f8._s_0.Y = dVar88;
            pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                (&local_838,(TVector<double> *)&local_11c0._s_0,
                                 (TVector2<double> *)&local_11f8._s_0,(FLinearColor *)pFVar68,
                                 (FColor *)pFVar74);
            uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
            local_1720[0x10] = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
            local_1720[0x11] = uVar31;
            uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
            local_1720[0x12] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
            local_1720[0x13] = uVar31;
            uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
            *(TVector2<float>_u_0 *)(local_1720 + 0x14) = (pFVar57->TextureCoordinate).field0_0x0;
            local_1720[0x15] = uVar31;
            uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
            local_1720[0x16] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
            local_1720[0x17] = uVar31;
            local_11a8._s_0.X = (*(double *)(FVar35.Data + lVar63) - dVar89) + dVar17;
            local_11a8._s_0.Y = (*(double *)(FVar35.Data + lVar63 + 8) - dVar81) + dVar80;
            local_11a8._s_0.Z = (*(double *)(FVar35.Data + lVar63 + 0x10) - dVar13) + dVar14;
            local_11e8._s_0.X = dVar90;
            local_11e8._s_0.Y = dVar93;
            pFVar57 = FSimpleElementVertex::FSimpleElementVertex
                                (&local_7f8,(TVector<double> *)&local_11a8._s_0,
                                 (TVector2<double> *)&local_11e8._s_0,(FLinearColor *)pFVar68,
                                 (FColor *)pFVar74);
            uVar73 = uVar73 + 1;
            lVar63 = lVar63 + 0x58;
            uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).High.field0_0x0 + 8);
            local_1720[0x18] = *(undefined8 *)&(pFVar57->Position).High.field0_0x0;
            local_1720[0x19] = uVar31;
            uVar31 = *(undefined8 *)((longlong)&(pFVar57->Position).Low.field0_0x0 + 8);
            local_1720[0x1a] = *(undefined8 *)&(pFVar57->Position).Low.field0_0x0;
            local_1720[0x1b] = uVar31;
            uVar31 = *(undefined8 *)&(pFVar57->Color).field0_0x0;
            *(TVector2<float>_u_0 *)(local_1720 + 0x1c) = (pFVar57->TextureCoordinate).field0_0x0;
            local_1720[0x1d] = uVar31;
            uVar31 = *(undefined8 *)&pFVar57->HitProxyIdColor;
            local_1720[0x1e] = *(undefined8 *)((longlong)&(pFVar57->Color).field0_0x0 + 8);
            local_1720[0x1f] = uVar31;
            local_1720 = local_1720 + 0x30;
            local_16a0 = (undefined8 *)((longlong)local_16a0 + -1);
          } while (local_16a0 != (undefined8 *)0x0);
          local_16a0 = (undefined8 *)0x0;
          param_1 = (FRHICommandList *)local_16f8;
          this = local_1560;
        }
        FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_488);
        if ((local_1730 < 1) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar45)) {
          pcVar12 = (code *)swi(3);
          uVar44 = (*pcVar12)();
          return (bool)uVar44;
        }
        local_16f8 = *(FRHICommandListBase **)(local_1738.Data + 0x20);
        if ((local_1730 < 1) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar45)) {
          pcVar12 = (code *)swi(3);
          uVar44 = (*pcVar12)();
          return (bool)uVar44;
        }
        local_1728 = 0;
        EVar51 = (ESimpleElementBlendMode)(byte)local_1738.Data[0x50];
        if ((local_1730 < 1) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar45)) {
          pcVar12 = (code *)swi(3);
          uVar44 = (*pcVar12)();
          return (bool)uVar44;
        }
        local_1724 = uVar77 + 1;
        uVar73 = 1;
        puVar75 = (undefined8 *)&DAT_00000001;
        local_1740 = 0;
        fVar94 = *(float *)(local_1738.Data + 0x4c);
        local_1710 = 6;
        puVar71 = (undefined8 *)(longlong)(int)uVar77;
        local_1744 = EVar51;
        do {
          if (puVar75 == puVar71) {
LAB_1476a45aa:
            iVar65 = (uVar73 - local_1728) * 2;
            PrepareShaders(this,param_1,(FGraphicsPipelineStateInitializer *)local_568,local_1714,
                           local_1718,local_1744,&local_348,(FBatchedElementParameters *)0x0,
                           (FTexture *)local_16f8,param_5,param_6,(FDepthFieldGlowInfo *)0x0,
                           local_1708,fVar94);
            pFVar36 = local_1678;
            if ((GRHICommandList.bLatchedBypass == false) ||
               ((((FRHICommandListBase *)param_1)->PersistentState).bImmediate == '\0')) {
              pFVar59 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
              ((FRHICommandListBase *)param_1)->NumCommands =
                   ((FRHICommandListBase *)param_1)->NumCommands + 1;
              *((FRHICommandListBase *)param_1)->CommandLink = pFVar59;
              ((FRHICommandListBase *)param_1)->CommandLink = &pFVar59->Next;
              pFVar59->Next = (FRHICommandBase *)0x0;
              pFVar59[1].Next = (FRHICommandBase *)pFVar36;
              pFVar59->_padding_ = (longlong)&___7FRHICommandSetStreamSource__6B_;
              *(undefined4 *)&pFVar59[2]._padding_ = 0;
              *(undefined4 *)&pFVar59[1]._padding_ = 0;
            }
            else {
              pIVar58 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
              (**(code **)(pIVar58->_padding_ + 0x198))(pIVar58,0,pFVar36,0);
            }
            if ((GRHICommandList.bLatchedBypass == false) ||
               ((((FRHICommandListBase *)param_1)->PersistentState).bImmediate == '\0')) {
              pFVar59 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
              ((FRHICommandListBase *)param_1)->NumCommands =
                   ((FRHICommandListBase *)param_1)->NumCommands + 1;
              *((FRHICommandListBase *)param_1)->CommandLink = pFVar59;
              ((FRHICommandListBase *)param_1)->CommandLink = &pFVar59->Next;
              pFVar59->Next = (FRHICommandBase *)0x0;
              pFVar59->_padding_ = (longlong)&___7FRHICommandDrawPrimitive__6B_;
              *(uint *)&pFVar59[1]._padding_ = local_1740;
              *(uint *)&pFVar59[1].Next = param_8;
              *(int *)((longlong)&pFVar59[1]._padding_ + 4) = iVar65;
            }
            else {
              pIVar58 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
              (**(code **)(pIVar58->_padding_ + 0x1e0))(pIVar58,local_1740,iVar65,param_8);
            }
            EVar51 = local_1744;
            if ((longlong)puVar75 < (longlong)local_1700) {
              uVar48 = ~uVar73 >> 0x1f;
              local_1740 = local_1710;
              uVar77 = 0;
              if ((int)uVar73 < local_1730) {
                uVar77 = uVar48;
              }
              local_1728 = uVar73;
              if ((uVar77 == 0) &&
                 (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar45)) {
                pcVar12 = (code *)swi(3);
                uVar44 = (*pcVar12)();
                return (bool)uVar44;
              }
              local_16f8 = *(FRHICommandListBase **)(local_1738.Data + lVar67 + 0x20);
              uVar77 = 0;
              if ((int)uVar73 < local_1730) {
                uVar77 = uVar48;
              }
              if ((uVar77 == 0) &&
                 (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar45)) {
                pcVar12 = (code *)swi(3);
                uVar44 = (*pcVar12)();
                return (bool)uVar44;
              }
              EVar51 = (ESimpleElementBlendMode)(byte)local_1738.Data[lVar67 + 0x50];
              uVar77 = 0;
              if ((int)uVar73 < local_1730) {
                uVar77 = uVar48;
              }
              if ((uVar77 == 0) &&
                 (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar45)) {
                pcVar12 = (code *)swi(3);
                uVar44 = (*pcVar12)();
                return (bool)uVar44;
              }
              fVar94 = *(float *)(local_1738.Data + lVar67 + 0x4c);
              local_1744 = EVar51;
            }
          }
          else {
            uVar48 = ~uVar73 >> 0x1f;
            uVar77 = 0;
            if ((int)uVar73 < local_1730) {
              uVar77 = uVar48;
            }
            if ((uVar77 == 0) &&
               (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar45)) {
              pcVar12 = (code *)swi(3);
              uVar44 = (*pcVar12)();
              return (bool)uVar44;
            }
            if (local_16f8 != *(FRHICommandListBase **)(local_1738.Data + lVar67 + 0x20))
            goto LAB_1476a45aa;
            uVar77 = 0;
            if ((int)uVar73 < local_1730) {
              uVar77 = uVar48;
            }
            if ((uVar77 == 0) &&
               (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar45)) {
              pcVar12 = (code *)swi(3);
              uVar44 = (*pcVar12)();
              return (bool)uVar44;
            }
            if (EVar51 != (byte)local_1738.Data[lVar67 + 0x50]) goto LAB_1476a45aa;
            uVar77 = 0;
            if ((int)uVar73 < local_1730) {
              uVar77 = uVar48;
            }
            if ((uVar77 == 0) &&
               (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar45)) {
              pcVar12 = (code *)swi(3);
              uVar44 = (*pcVar12)();
              return (bool)uVar44;
            }
            if (fVar94 != *(float *)(local_1738.Data + lVar67 + 0x4c)) goto LAB_1476a45aa;
          }
          pFVar36 = local_1678;
          local_1710 = local_1710 + 6;
          uVar73 = uVar73 + 1;
          puVar75 = (undefined8 *)((longlong)puVar75 + 1);
          lVar67 = lVar67 + 0x58;
          puVar71 = local_1700;
        } while ((int)uVar73 < local_1724);
        if (local_1678 != (FRHIResource *)0x0) {
          local_1678 = (FRHIResource *)0x0;
          FRHIResource::Release(pFVar36);
          if (local_1678 != (FRHIResource *)0x0) {
            FRHIResource::Release(local_1678);
          }
        }
        if ((local_458 != (FRHICommandListBase *)0x0) && (local_450 != (FRHIBuffer *)0x0)) {
          FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_488);
        }
        if (local_488._0_8_ != 0) {
          plVar62 = (longlong *)(local_488 + 0x10);
          if ((longlong *)local_488._40_8_ != (longlong *)0x0) {
            plVar62 = (longlong *)local_488._40_8_;
          }
          (**(code **)(*plVar62 + 0x10))();
        }
      }
    }
    if ((FBatchedSprite *)local_1738.Data != (FBatchedSprite *)0x0) {
      FMemory::Free(local_1738.Data);
    }
  }
  if ((this->MeshElements).ArrayNum < 1) {
    return true;
  }
  uVar73 = (this->MeshVertices).ArrayNum;
  if (uVar73 < 0x4000000) {
    pFVar9 = (FRHIBreadcrumbNode *)(this->MeshVertices).AllocatorInstance.Data;
    if (((int)uVar73 < 0) &&
       (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar45)) {
      pcVar12 = (code *)swi(3);
      uVar44 = (*pcVar12)();
      return (bool)uVar44;
    }
    local_1388 = RHIGetDefaultResourceState(VertexBuffer|Volatile,false);
    local_1268._0_8_ = &___7FResourceArrayUploadArrayView__6B_;
    pFStack_1390 = (FRHIBreadcrumbNode *)local_1268;
    local_13a8 = uVar73 << 6;
    uStack_139c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_1398 = L"MeshElements";
    uStack_13a4 = 0;
    local_10b8 = L"MeshElements";
    uStack_13a0 = 0x4004;
    local_10c8 = (ulonglong)local_13a8;
    uStack_10c0._4_4_ = uStack_139c;
    uStack_10c0._0_4_ = 0x4004;
    uStack_1380._0_1_ = false;
    uStack_1380._1_7_ = 0;
    uStack_1384 = 2;
    local_1378 = (void *)0x0;
    local_10a8._4_4_ = 2;
    local_10a8._0_4_ = local_1388;
    auStack_10a0._0_4_ = 0;
    auStack_10a0._4_4_ = 0;
    auStack_10a0._8_4_ = 0;
    auStack_10a0._12_4_ = 0;
    local_1268._8_8_ = pFVar9;
    local_1268._16_4_ = local_13a8;
    pFStack_10b0 = pFStack_1390;
    FRHICommandListBase::CreateBuffer
              ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)(local_1670 + 8));
    fVar94 = __real_3f000000;
    uVar73 = 0;
    local_1268._0_8_ = &___7FResourceArrayUploadInterface__6B_;
    if (0 < (this->MeshElements).ArrayNum) {
      lVar63 = 0;
      do {
        uVar77 = 0;
        if ((int)uVar73 < (this->MeshElements).ArrayNum) {
          uVar77 = ~uVar73 >> 0x1f;
        }
        if ((uVar77 == 0) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar45)) {
          pcVar12 = (code *)swi(3);
          uVar44 = (*pcVar12)();
          return (bool)uVar44;
        }
        pFVar74 = (this->MeshElements).AllocatorInstance.Data;
        iVar65 = *(int *)(pFVar74 + lVar63 + 0x28);
        if ((iVar65 == 0) || (((iVar65 - 1U & 0xfffffffa) == 0 && (iVar65 != 2)))) {
          TVar47 = OpaqueAndMasked;
        }
        else {
          TVar47 = Translucent;
        }
        if ((param_7 & TVar47) != None) {
          plVar62 = *(longlong **)(pFVar74 + lVar63 + 0x18);
          uVar77 = local_170c;
          if (plVar62 == (longlong *)0x0) {
LAB_1476a4b11:
            bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("MeshElement.Texture && MeshElement.Texture->SamplerStateRHI.GetReference()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BatchedElements.cpp"
                                ,0x5a5,L"MeshElement.Texture=%p, bInitialized=%d, name=%s");
            if (((uVar77 & 1) != 0) &&
               (local_170c = uVar77 & 0xfffffffe, local_1138[0] != (void *)0x0)) {
              FMemory::Free(local_1138[0]);
            }
            if (bVar45) {
              pcVar12 = (code *)swi(3);
              uVar44 = (*pcVar12)();
              return (bool)uVar44;
            }
          }
          else if (plVar62[5] == 0) {
            uVar77 = local_170c | 1;
            local_170c = uVar77;
            (**(code **)(*plVar62 + 0x28))(plVar62,local_1138);
            goto LAB_1476a4b11;
          }
          PrepareShaders(this,param_1,(FGraphicsPipelineStateInitializer *)local_568,local_1714,
                         local_1718,*(ESimpleElementBlendMode *)(pFVar74 + lVar63 + 0x28),&local_348
                         ,*(FBatchedElementParameters **)(pFVar74 + lVar63 + 0x20),
                         *(FTexture **)(pFVar74 + lVar63 + 0x18),param_5,param_6,
                         (FDepthFieldGlowInfo *)(pFVar74 + lVar63 + 0x30),local_1708,fVar94);
          iVar65 = *(int *)(pFVar74 + lVar63 + 0x10);
          pFVar9 = *(FRHIBreadcrumbNode **)(pFVar74 + lVar63 + 8);
          if ((iVar65 < 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar45)) {
            pcVar12 = (code *)swi(3);
            uVar44 = (*pcVar12)();
            return (bool)uVar44;
          }
          local_13c0 = RHIGetDefaultResourceState(IndexBuffer|Volatile,false);
          local_1268._24_8_ = &___7FResourceArrayUploadArrayView__6B_;
          pFStack_13c8 = (FRHIMeshShader *)(local_1268 + 0x18);
          local_13e0 = iVar65 * 2;
          local_13d0 = L"MeshElements";
          uStack_13d4 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
          pFStack_13b8 = (FRHIGeometryShader *)0x0;
          local_13b0 = (FRHIWorkGraphShader *)0x0;
          auStack_fe0._8_8_ = L"MeshElements";
          uStack_13dc = 2;
          uStack_13d8 = 0x8004;
          FStack_ff8.Rectangles = 2;
          FStack_ff8.Points = local_13e0;
          auStack_fe0._4_4_ = uStack_13d4;
          auStack_fe0._0_4_ = 0x8004;
          uStack_13bc = 2;
          local_fc8.Triangles = 2;
          local_fc8.Draws = local_13c0;
          local_fc8.Points = 0;
          local_fc8.Rectangles = 0;
          local_fc8.Lines = 0;
          local_fc8.Quads = 0;
          local_1248 = pFVar9;
          local_1240 = local_13e0;
          pFStack_fd0 = pFStack_13c8;
          FRHICommandListBase::CreateBuffer
                    ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)local_1670);
          uVar31 = local_1670._8_8_;
          iVar65 = *(int *)(pFVar74 + lVar63);
          local_1268._24_8_ = &___7FResourceArrayUploadInterface__6B_;
          if ((GRHICommandList.bLatchedBypass == false) ||
             ((((FRHICommandListBase *)param_1)->PersistentState).bImmediate == '\0')) {
            pFVar59 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
            ((FRHICommandListBase *)param_1)->NumCommands =
                 ((FRHICommandListBase *)param_1)->NumCommands + 1;
            *((FRHICommandListBase *)param_1)->CommandLink = pFVar59;
            ((FRHICommandListBase *)param_1)->CommandLink = &pFVar59->Next;
            pFVar59->Next = (FRHICommandBase *)0x0;
            pFVar59->_padding_ = (longlong)&___7FRHICommandSetStreamSource__6B_;
            *(undefined4 *)&pFVar59[1]._padding_ = 0;
            pFVar59[1].Next = (FRHICommandBase *)uVar31;
            *(int *)&pFVar59[2]._padding_ = iVar65 << 6;
          }
          else {
            pIVar58 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
            (**(code **)(pIVar58->_padding_ + 0x198))(pIVar58,0,uVar31,iVar65 << 6);
          }
          uVar31 = local_1670._0_8_;
          iVar65 = *(int *)(pFVar74 + lVar63 + 4);
          iVar72 = *(int *)(pFVar74 + lVar63 + 0x10);
          iVar46 = *(int *)(pFVar74 + lVar63);
          if ((GRHICommandList.bLatchedBypass == false) ||
             ((((FRHICommandListBase *)param_1)->PersistentState).bImmediate == '\0')) {
            pFVar59 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x30,8);
            ((FRHICommandListBase *)param_1)->NumCommands =
                 ((FRHICommandListBase *)param_1)->NumCommands + 1;
            *((FRHICommandListBase *)param_1)->CommandLink = pFVar59;
            ((FRHICommandListBase *)param_1)->CommandLink = &pFVar59->Next;
            pFVar59->Next = (FRHICommandBase *)0x0;
            pFVar59->_padding_ = (longlong)&___7FRHICommandDrawIndexedPrimitive__6B_;
            *(uint *)((longlong)&pFVar59[2].Next + 4) = param_8;
            pFVar59[1]._padding_ = uVar31;
            pFVar59[1].Next = (FRHICommandBase *)0x0;
            *(int *)&pFVar59[2]._padding_ = (iVar65 - iVar46) + 1;
            *(undefined4 *)((longlong)&pFVar59[2]._padding_ + 4) = 0;
            *(int *)&pFVar59[2].Next = iVar72 / 3;
          }
          else {
            pIVar58 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
            (**(code **)(pIVar58->_padding_ + 0x1f8))(pIVar58,uVar31,0,0);
          }
          uVar31 = local_1670._0_8_;
          if ((FMemMark *)local_1670._0_8_ != (FMemMark *)0x0) {
            local_1670._0_8_ = (FMemMark *)0x0;
            FRHIResource::Release((FRHIResource *)uVar31);
            if ((FMemMark *)local_1670._0_8_ != (FMemMark *)0x0) {
              FRHIResource::Release((FRHIResource *)local_1670._0_8_);
            }
          }
        }
        uVar73 = uVar73 + 1;
        lVar63 = lVar63 + 0x68;
      } while ((int)uVar73 < (this->MeshElements).ArrayNum);
    }
    uVar31 = local_1670._8_8_;
    if ((FRHIResource *)local_1670._8_8_ == (FRHIResource *)0x0) {
      return true;
    }
    local_1670._8_8_ = (FRHIResource *)0x0;
    FRHIResource::Release((FRHIResource *)uVar31);
    if ((FRHIResource *)local_1670._8_8_ == (FRHIResource *)0x0) {
      return true;
    }
    FRHIResource::Release((FRHIResource *)local_1670._8_8_);
    return true;
  }
  if ((byte)LogBatchedElements._0_1_ < 2) {
    return false;
  }
  pFVar61 = &::LOG_Static;
LAB_1476a1c80:
  UE::Logging::Private::BasicLog<2>(pFVar61,(FLogCategoryBase *)&LogBatchedElements);
  return false;
}

// DrawPointElements @ 1476a5130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FBatchedElements::DrawPointElements
          (FBatchedElements *this,FRHICommandList *param_1,TMatrix<double> *param_2,uint param_3,
          uint param_4,TVector<double> *param_5,TVector<double> *param_6,uint param_7)

{
  float *pfVar1;
  undefined4 *puVar2;
  FScriptContainerElement FVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  bool bVar43;
  uint uVar44;
  FRHIBufferInitializer *pFVar45;
  longlong lVar46;
  longlong *plVar47;
  uint uVar48;
  int iVar49;
  longlong lVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  uint uVar57;
  undefined1 auStack_488 [32];
  longlong local_468;
  longlong local_460;
  uint local_458;
  FRHIBuffer *local_450;
  float local_448;
  float fStack_444;
  float fStack_440;
  undefined4 uStack_43c;
  float local_438;
  float fStack_434;
  float fStack_430;
  undefined4 uStack_42c;
  float local_428;
  float fStack_424;
  float fStack_420;
  undefined4 uStack_41c;
  float local_418;
  float fStack_414;
  float fStack_410;
  undefined4 uStack_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  undefined4 uStack_3fc;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  undefined4 uStack_3ec;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  undefined4 uStack_3dc;
  float local_3d8;
  float fStack_3d4;
  float fStack_3d0;
  undefined4 uStack_3cc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  undefined4 uStack_3bc;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  undefined4 uStack_3ac;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  undefined4 uStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  undefined4 uStack_38c;
  uint local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  int iStack_37c;
  wchar_t *local_378;
  undefined8 uStack_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined8 uStack_360;
  undefined8 local_358;
  FRHICommandList *local_350;
  float local_348;
  float fStack_344;
  float fStack_340;
  undefined4 uStack_33c;
  float local_338;
  float fStack_334;
  float fStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  undefined4 uStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  undefined4 uStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  undefined4 uStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  undefined4 uStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  undefined4 uStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  FRHIBufferCreateDesc local_1c8;
  undefined1 local_188 [48];
  FRHICommandListBase *local_158;
  FRHIBuffer *local_150;
  void *local_148;
  undefined1 local_138 [48];
  FRHICommandListBase *local_108;
  FRHIBuffer *local_100;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_488;
  iVar49 = (this->Points).ArrayNum;
  if (0 < iVar49) {
    uVar44 = iVar49 * 2;
    local_458 = uVar44;
    local_350 = param_1;
    if ((uVar44 < 0x55555556) && ((uint)(iVar49 * 6) < 0x4000000)) {
      local_388 = iVar49 * 0x180;
      iStack_37c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      uVar48 = 0;
      uStack_384 = 0;
      local_378 = L"FBatchedElements_Points";
      uStack_380 = 0x4004;
      local_1c8._padding_ = (longlong)local_388;
      local_1c8._padding_ = CONCAT44(iStack_37c,0x4004);
      uStack_370 = 0;
      uStack_360 = 0;
      local_368 = 8;
      local_1c8.DebugName = L"FBatchedElements_Points";
      local_1c8.InitialData = (FResourceArrayUploadInterface *)0x0;
      uStack_364 = 3;
      local_1c8.InitialState = VertexOrIndexBuffer;
      local_1c8.InitAction = Initializer;
      local_358 = 0;
      local_1c8.OwnerName.ComparisonIndex.Value = 0;
      local_1c8.OwnerName.Number = 0;
      local_1c8.ClassName.ComparisonIndex.Value = 0;
      local_1c8.ClassName.Number = 0;
      pFVar45 = FRHICommandListBase::CreateBufferInitializer
                          ((FRHICommandListBase *)param_1,(FRHIBufferInitializer *)local_138,
                           &local_1c8);
      TRHIBufferInitializer<FSimpleElementVertex>::TRHIBufferInitializer<FSimpleElementVertex>
                ((TRHIBufferInitializer<FSimpleElementVertex> *)local_188,pFVar45);
      if ((local_108 != (FRHICommandListBase *)0x0) && (local_100 != (FRHIBuffer *)0x0)) {
        FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_138);
      }
      if (local_138._0_8_ != 0) {
        plVar47 = (longlong *)(local_138 + 0x10);
        if ((longlong *)local_138._40_8_ != (longlong *)0x0) {
          plVar47 = (longlong *)local_138._40_8_;
        }
        (**(code **)(*plVar47 + 0x10))();
      }
      fVar12 = __real_3b808081;
      dVar11 = __real_3ff0000000000000;
      if (0 < (this->Points).ArrayNum) {
        iVar49 = 2;
        lVar50 = 0;
        dVar10 = __real_3ff0000000000000 / (double)param_3;
        uVar57 = __xmm_80000000800000008000000080000000;
        uVar13 = uStack_43c;
        uVar14 = uStack_42c;
        uVar15 = uStack_41c;
        uVar16 = uStack_40c;
        uVar17 = uStack_3fc;
        uVar18 = uStack_3ec;
        uVar19 = uStack_3dc;
        uVar20 = uStack_3cc;
        uVar21 = uStack_3bc;
        uVar22 = uStack_3ac;
        uVar23 = uStack_39c;
        uVar24 = uStack_38c;
        uVar25 = uStack_33c;
        uVar26 = uStack_32c;
        uVar27 = uStack_2fc;
        uVar28 = uStack_2ec;
        uVar29 = local_2e8;
        uVar30 = uStack_2e4;
        uVar31 = uStack_2bc;
        uVar32 = uStack_2ac;
        uVar33 = uStack_27c;
        uVar34 = uStack_26c;
        uVar35 = local_268;
        uVar36 = uStack_264;
        uVar37 = uStack_23c;
        uVar38 = uStack_22c;
        uVar39 = uStack_1fc;
        uVar40 = uStack_1ec;
        uVar41 = local_1e8;
        uVar42 = uStack_1e4;
        do {
          uStack_1e4 = uVar42;
          local_1e8 = uVar41;
          uStack_1ec = uVar40;
          uStack_1fc = uVar39;
          uStack_22c = uVar38;
          uStack_23c = uVar37;
          uStack_264 = uVar36;
          local_268 = uVar35;
          uStack_26c = uVar34;
          uStack_27c = uVar33;
          uStack_2ac = uVar32;
          uStack_2bc = uVar31;
          uStack_2e4 = uVar30;
          local_2e8 = uVar29;
          uStack_2ec = uVar28;
          uStack_2fc = uVar27;
          uStack_32c = uVar26;
          uStack_33c = uVar25;
          uStack_38c = uVar24;
          uStack_39c = uVar23;
          uStack_3ac = uVar22;
          uStack_3bc = uVar21;
          uStack_3cc = uVar20;
          uStack_3dc = uVar19;
          uStack_3ec = uVar18;
          uStack_3fc = uVar17;
          uStack_40c = uVar16;
          uStack_41c = uVar15;
          uStack_42c = uVar14;
          uStack_43c = uVar13;
          iVar4 = (this->Points).ArrayNum;
          uVar44 = 0;
          if ((int)uVar48 < iVar4) {
            uVar44 = ~uVar48 >> 0x1f;
          }
          if (uVar44 == 0) {
            local_468 = (longlong)(int)uVar48;
            local_460 = (longlong)iVar4;
            bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar43) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          pFVar5 = (this->Points).AllocatorInstance.Data;
          dVar54 = (double)*(float *)(pFVar5 + lVar50 + 0x18);
          dVar53 = (double)(float)((uint)*(float *)(pFVar5 + lVar50 + 0x18) ^ uVar57);
          dVar55 = *(double *)(pFVar5 + lVar50 + 8) * param_2->M[1][3] +
                   *(double *)(pFVar5 + lVar50) * param_2->M[0][3] +
                   *(double *)(pFVar5 + lVar50 + 0x10) * param_2->M[2][3] +
                   dVar11 * param_2->M[3][3];
          dVar8 = dVar54 * (param_5->field0_0x0)._s_0.X * dVar10 * dVar55;
          dVar7 = dVar54 * (param_5->field0_0x0)._s_0.Y * dVar10 * dVar55;
          dVar9 = dVar54 * (param_5->field0_0x0)._s_0.Z * dVar10 * dVar55;
          dVar52 = dVar53 * (param_6->field0_0x0)._s_0.X * dVar10 * dVar55;
          dVar51 = (dVar8 + *(double *)(pFVar5 + lVar50)) - dVar52;
          dVar54 = dVar53 * (param_6->field0_0x0)._s_0.Y * dVar10 * dVar55;
          dVar55 = dVar53 * (param_6->field0_0x0)._s_0.Z * dVar10 * dVar55;
          local_448 = (float)dVar51;
          dVar53 = (dVar7 + *(double *)(pFVar5 + lVar50 + 8)) - dVar54;
          dVar56 = (dVar9 + *(double *)(pFVar5 + lVar50 + 0x10)) - dVar55;
          fStack_444 = (float)dVar53;
          fStack_440 = (float)dVar56;
          uStack_43c = 0x3f800000;
          uStack_33c = 0x3f800000;
          local_438 = (float)(dVar51 - (double)local_448);
          fStack_434 = (float)(dVar53 - (double)fStack_444);
          fStack_430 = (float)(dVar56 - (double)fStack_440);
          lVar46 = ((longlong)iVar49 + -2) * 0x40;
          fStack_320 = FLinearColor::sRGBToLinearTable[(byte)pFVar5[lVar50 + 0x1e]];
          uStack_42c = 0;
          uStack_32c = 0;
          fStack_31c = FLinearColor::sRGBToLinearTable[(byte)pFVar5[lVar50 + 0x1d]];
          local_318 = FLinearColor::sRGBToLinearTable[(byte)pFVar5[lVar50 + 0x1c]];
          FVar3 = pFVar5[lVar50 + 0x1f];
          fStack_310 = *(float *)(pFVar5 + lVar50 + 0x20);
          pfVar1 = (float *)(lVar46 + (longlong)local_148);
          *pfVar1 = local_448;
          pfVar1[1] = fStack_444;
          pfVar1[2] = fStack_440;
          pfVar1[3] = 1.0;
          pfVar1 = (float *)(lVar46 + 0x10 + (longlong)local_148);
          *pfVar1 = local_438;
          pfVar1[1] = fStack_434;
          pfVar1[2] = fStack_430;
          pfVar1[3] = 0.0;
          fStack_314 = (float)(byte)FVar3 * fVar12;
          puVar2 = (undefined4 *)(lVar46 + 0x20 + (longlong)local_148);
          *puVar2 = 0x3f800000;
          puVar2[1] = 0;
          puVar2[2] = fStack_320;
          puVar2[3] = fStack_31c;
          local_328 = 0x3f800000;
          pfVar1 = (float *)(lVar46 + 0x30 + (longlong)local_148);
          *pfVar1 = local_318;
          pfVar1[1] = fStack_314;
          pfVar1[2] = fStack_310;
          pfVar1[3] = fStack_30c;
          dVar53 = dVar8 + *(double *)(pFVar5 + lVar50) + dVar52;
          dVar51 = dVar7 + *(double *)(pFVar5 + lVar50 + 8) + dVar54;
          dVar56 = dVar9 + *(double *)(pFVar5 + lVar50 + 0x10) + dVar55;
          local_428 = (float)dVar53;
          fStack_424 = (float)dVar51;
          fStack_420 = (float)dVar56;
          local_418 = (float)(dVar53 - (double)local_428);
          fStack_414 = (float)(dVar51 - (double)fStack_424);
          uStack_41c = 0x3f800000;
          uStack_2fc = 0x3f800000;
          fStack_410 = (float)(dVar56 - (double)fStack_420);
          fStack_2e0 = FLinearColor::sRGBToLinearTable[(byte)pFVar5[lVar50 + 0x1e]];
          uStack_40c = 0;
          uStack_2ec = 0;
          fStack_2dc = FLinearColor::sRGBToLinearTable[(byte)pFVar5[lVar50 + 0x1d]];
          lVar46 = (longlong)iVar49 * 0x40;
          local_2d8 = FLinearColor::sRGBToLinearTable[(byte)pFVar5[lVar50 + 0x1c]];
          FVar3 = pFVar5[lVar50 + 0x1f];
          fStack_2d0 = *(float *)(pFVar5 + lVar50 + 0x20);
          pfVar1 = (float *)(lVar46 + -0x40 + (longlong)local_148);
          *pfVar1 = local_428;
          pfVar1[1] = fStack_424;
          pfVar1[2] = fStack_420;
          pfVar1[3] = 1.0;
          pfVar1 = (float *)(lVar46 + -0x30 + (longlong)local_148);
          *pfVar1 = local_418;
          pfVar1[1] = fStack_414;
          pfVar1[2] = fStack_410;
          pfVar1[3] = 0.0;
          fStack_2d4 = (float)(byte)FVar3 * fVar12;
          puVar2 = (undefined4 *)(lVar46 + -0x20 + (longlong)local_148);
          *puVar2 = 0x3f800000;
          puVar2[1] = 0x3f800000;
          puVar2[2] = fStack_2e0;
          puVar2[3] = fStack_2dc;
          local_2e8 = 0x3f800000;
          uStack_2e4 = 0x3f800000;
          pfVar1 = (float *)(lVar46 + -0x10 + (longlong)local_148);
          *pfVar1 = local_2d8;
          pfVar1[1] = fStack_2d4;
          pfVar1[2] = fStack_2d0;
          pfVar1[3] = fStack_2cc;
          dVar53 = (*(double *)(pFVar5 + lVar50) - dVar8) - dVar52;
          dVar51 = (*(double *)(pFVar5 + lVar50 + 8) - dVar7) - dVar54;
          dVar56 = (*(double *)(pFVar5 + lVar50 + 0x10) - dVar9) - dVar55;
          local_408 = (float)dVar53;
          fStack_404 = (float)dVar51;
          fStack_400 = (float)dVar56;
          local_3f8 = (float)(dVar53 - (double)local_408);
          fStack_3f4 = (float)(dVar51 - (double)fStack_404);
          uStack_3fc = 0x3f800000;
          uStack_2bc = 0x3f800000;
          fStack_3f0 = (float)(dVar56 - (double)fStack_400);
          uStack_3ec = 0;
          uStack_2ac = 0;
          lVar46 = (longlong)iVar49 * 0x40;
          fStack_2a0 = FLinearColor::sRGBToLinearTable[(byte)pFVar5[lVar50 + 0x1e]];
          fStack_29c = FLinearColor::sRGBToLinearTable[(byte)pFVar5[lVar50 + 0x1d]];
          local_298 = FLinearColor::sRGBToLinearTable[(byte)pFVar5[lVar50 + 0x1c]];
          FVar3 = pFVar5[lVar50 + 0x1f];
          fStack_290 = *(float *)(pFVar5 + lVar50 + 0x20);
          pfVar1 = (float *)(lVar46 + (longlong)local_148);
          *pfVar1 = local_408;
          pfVar1[1] = fStack_404;
          pfVar1[2] = fStack_400;
          pfVar1[3] = 1.0;
          pfVar1 = (float *)(lVar46 + 0x10 + (longlong)local_148);
          *pfVar1 = local_3f8;
          pfVar1[1] = fStack_3f4;
          pfVar1[2] = fStack_3f0;
          pfVar1[3] = 0.0;
          fStack_294 = (float)(byte)FVar3 * fVar12;
          puVar2 = (undefined4 *)(lVar46 + 0x20 + (longlong)local_148);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = fStack_2a0;
          puVar2[3] = fStack_29c;
          local_2a8 = 0;
          pfVar1 = (float *)(lVar46 + 0x30 + (longlong)local_148);
          *pfVar1 = local_298;
          pfVar1[1] = fStack_294;
          pfVar1[2] = fStack_290;
          pfVar1[3] = fStack_28c;
          dVar53 = dVar8 + *(double *)(pFVar5 + lVar50) + dVar52;
          dVar51 = dVar7 + *(double *)(pFVar5 + lVar50 + 8) + dVar54;
          dVar56 = dVar9 + *(double *)(pFVar5 + lVar50 + 0x10) + dVar55;
          local_3e8 = (float)dVar53;
          fStack_3e4 = (float)dVar51;
          fStack_3e0 = (float)dVar56;
          local_3d8 = (float)(dVar53 - (double)local_3e8);
          fStack_3d4 = (float)(dVar51 - (double)fStack_3e4);
          uStack_3dc = 0x3f800000;
          fStack_3d0 = (float)(dVar56 - (double)fStack_3e0);
          uStack_27c = 0x3f800000;
          fStack_260 = FLinearColor::sRGBToLinearTable[(byte)pFVar5[lVar50 + 0x1e]];
          uStack_3cc = 0;
          uStack_26c = 0;
          fStack_25c = FLinearColor::sRGBToLinearTable[(byte)pFVar5[lVar50 + 0x1d]];
          local_258 = FLinearColor::sRGBToLinearTable[(byte)pFVar5[lVar50 + 0x1c]];
          FVar3 = pFVar5[lVar50 + 0x1f];
          lVar46 = ((longlong)iVar49 + 1) * 0x40;
          fStack_250 = *(float *)(pFVar5 + lVar50 + 0x20);
          pfVar1 = (float *)(lVar46 + (longlong)local_148);
          *pfVar1 = local_3e8;
          pfVar1[1] = fStack_3e4;
          pfVar1[2] = fStack_3e0;
          pfVar1[3] = 1.0;
          pfVar1 = (float *)(lVar46 + 0x10 + (longlong)local_148);
          *pfVar1 = local_3d8;
          pfVar1[1] = fStack_3d4;
          pfVar1[2] = fStack_3d0;
          pfVar1[3] = 0.0;
          fStack_254 = (float)(byte)FVar3 * fVar12;
          puVar2 = (undefined4 *)(lVar46 + 0x20 + (longlong)local_148);
          *puVar2 = 0x3f800000;
          puVar2[1] = 0x3f800000;
          puVar2[2] = fStack_260;
          puVar2[3] = fStack_25c;
          local_268 = 0x3f800000;
          uStack_264 = 0x3f800000;
          pfVar1 = (float *)(lVar46 + 0x30 + (longlong)local_148);
          *pfVar1 = local_258;
          pfVar1[1] = fStack_254;
          pfVar1[2] = fStack_250;
          pfVar1[3] = fStack_24c;
          dVar53 = (*(double *)(pFVar5 + lVar50) - dVar8) - dVar52;
          dVar51 = (*(double *)(pFVar5 + lVar50 + 8) - dVar7) - dVar54;
          dVar56 = (*(double *)(pFVar5 + lVar50 + 0x10) - dVar9) - dVar55;
          local_3c8 = (float)dVar53;
          fStack_3c4 = (float)dVar51;
          fStack_3c0 = (float)dVar56;
          local_3b8 = (float)(dVar53 - (double)local_3c8);
          fStack_3b4 = (float)(dVar51 - (double)fStack_3c4);
          uStack_3bc = 0x3f800000;
          fStack_3b0 = (float)(dVar56 - (double)fStack_3c0);
          uStack_23c = 0x3f800000;
          fStack_220 = FLinearColor::sRGBToLinearTable[(byte)pFVar5[lVar50 + 0x1e]];
          uStack_3ac = 0;
          uStack_22c = 0;
          fStack_21c = FLinearColor::sRGBToLinearTable[(byte)pFVar5[lVar50 + 0x1d]];
          local_218 = FLinearColor::sRGBToLinearTable[(byte)pFVar5[lVar50 + 0x1c]];
          fStack_210 = *(float *)(pFVar5 + lVar50 + 0x20);
          fStack_214 = (float)(byte)pFVar5[lVar50 + 0x1f] * fVar12;
          lVar46 = ((longlong)iVar49 + 2) * 0x40;
          pfVar1 = (float *)(lVar46 + (longlong)local_148);
          *pfVar1 = local_3c8;
          pfVar1[1] = fStack_3c4;
          pfVar1[2] = fStack_3c0;
          pfVar1[3] = 1.0;
          pfVar1 = (float *)(lVar46 + 0x10 + (longlong)local_148);
          *pfVar1 = local_3b8;
          pfVar1[1] = fStack_3b4;
          pfVar1[2] = fStack_3b0;
          pfVar1[3] = 0.0;
          puVar2 = (undefined4 *)(lVar46 + 0x20 + (longlong)local_148);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = fStack_220;
          puVar2[3] = fStack_21c;
          local_228 = 0;
          pfVar1 = (float *)(lVar46 + 0x30 + (longlong)local_148);
          *pfVar1 = local_218;
          pfVar1[1] = fStack_214;
          pfVar1[2] = fStack_210;
          pfVar1[3] = fStack_20c;
          dVar52 = (*(double *)(pFVar5 + lVar50) - dVar8) + dVar52;
          dVar54 = (*(double *)(pFVar5 + lVar50 + 8) - dVar7) + dVar54;
          lVar46 = ((longlong)iVar49 + 3) * 0x40;
          dVar55 = (*(double *)(pFVar5 + lVar50 + 0x10) - dVar9) + dVar55;
          local_3a8 = (float)dVar52;
          fStack_3a4 = (float)dVar54;
          fStack_3a0 = (float)dVar55;
          local_398 = (float)(dVar52 - (double)local_3a8);
          fStack_394 = (float)(dVar54 - (double)fStack_3a4);
          uStack_39c = 0x3f800000;
          fStack_390 = (float)(dVar55 - (double)fStack_3a0);
          uStack_1fc = 0x3f800000;
          fStack_1e0 = FLinearColor::sRGBToLinearTable[(byte)pFVar5[lVar50 + 0x1e]];
          uStack_38c = 0;
          uStack_1ec = 0;
          fStack_1dc = FLinearColor::sRGBToLinearTable[(byte)pFVar5[lVar50 + 0x1d]];
          local_1d8 = FLinearColor::sRGBToLinearTable[(byte)pFVar5[lVar50 + 0x1c]];
          fStack_1d0 = *(float *)(pFVar5 + lVar50 + 0x20);
          fStack_1d4 = (float)(byte)pFVar5[lVar50 + 0x1f] * fVar12;
          pfVar1 = (float *)(lVar46 + (longlong)local_148);
          *pfVar1 = local_3a8;
          pfVar1[1] = fStack_3a4;
          pfVar1[2] = fStack_3a0;
          pfVar1[3] = 1.0;
          uVar57 = __xmm_80000000800000008000000080000000;
          iVar49 = iVar49 + 6;
          pfVar1 = (float *)(lVar46 + 0x10 + (longlong)local_148);
          *pfVar1 = local_398;
          pfVar1[1] = fStack_394;
          pfVar1[2] = fStack_390;
          pfVar1[3] = 0.0;
          uVar48 = uVar48 + 1;
          lVar50 = lVar50 + 0x28;
          puVar2 = (undefined4 *)(lVar46 + 0x20 + (longlong)local_148);
          *puVar2 = 0;
          puVar2[1] = 0x3f800000;
          puVar2[2] = fStack_1e0;
          puVar2[3] = fStack_1dc;
          local_1e8 = 0;
          uStack_1e4 = 0x3f800000;
          pfVar1 = (float *)(lVar46 + 0x30 + (longlong)local_148);
          *pfVar1 = local_1d8;
          pfVar1[1] = fStack_1d4;
          pfVar1[2] = fStack_1d0;
          pfVar1[3] = fStack_1cc;
          param_1 = local_350;
          uVar44 = local_458;
          uVar13 = 0x3f800000;
          uVar14 = 0;
          uVar15 = 0x3f800000;
          uVar16 = 0;
          uVar17 = 0x3f800000;
          uVar18 = 0;
          uVar19 = 0x3f800000;
          uVar20 = 0;
          uVar21 = 0x3f800000;
          uVar22 = 0;
          uVar23 = 0x3f800000;
          uVar24 = 0;
          local_348 = local_448;
          fStack_344 = fStack_444;
          fStack_340 = fStack_440;
          uVar25 = 0x3f800000;
          local_338 = local_438;
          fStack_334 = fStack_434;
          fStack_330 = fStack_430;
          uVar26 = 0;
          local_308 = local_428;
          fStack_304 = fStack_424;
          fStack_300 = fStack_420;
          uVar27 = 0x3f800000;
          local_2f8 = local_418;
          fStack_2f4 = fStack_414;
          fStack_2f0 = fStack_410;
          uVar28 = 0;
          uVar29 = 0x3f800000;
          uVar30 = 0x3f800000;
          local_2c8 = local_408;
          fStack_2c4 = fStack_404;
          fStack_2c0 = fStack_400;
          uVar31 = 0x3f800000;
          local_2b8 = local_3f8;
          fStack_2b4 = fStack_3f4;
          fStack_2b0 = fStack_3f0;
          uVar32 = 0;
          local_288 = local_3e8;
          fStack_284 = fStack_3e4;
          fStack_280 = fStack_3e0;
          uVar33 = 0x3f800000;
          local_278 = local_3d8;
          fStack_274 = fStack_3d4;
          fStack_270 = fStack_3d0;
          uVar34 = 0;
          uVar35 = 0x3f800000;
          uVar36 = 0x3f800000;
          local_248 = local_3c8;
          fStack_244 = fStack_3c4;
          fStack_240 = fStack_3c0;
          uVar37 = 0x3f800000;
          local_238 = local_3b8;
          fStack_234 = fStack_3b4;
          fStack_230 = fStack_3b0;
          uVar38 = 0;
          local_208 = local_3a8;
          fStack_204 = fStack_3a4;
          fStack_200 = fStack_3a0;
          uVar39 = 0x3f800000;
          local_1f8 = local_398;
          fStack_1f4 = fStack_394;
          fStack_1f0 = fStack_390;
          uVar40 = 0;
          uVar41 = 0;
          uVar42 = 0x3f800000;
        } while ((int)uVar48 < (this->Points).ArrayNum);
      }
      FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_188);
      FRHICommandList::SetStreamSource(param_1,0,local_450,0);
      FRHICommandList::DrawPrimitive(param_1,0,uVar44,param_7);
      if (local_450 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_450);
      }
      if ((local_158 != (FRHICommandListBase *)0x0) && (local_150 != (FRHIBuffer *)0x0)) {
        FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_188);
      }
      if (local_188._0_8_ != 0) {
        plVar47 = (longlong *)(local_188 + 0x10);
        if ((longlong *)local_188._40_8_ != (longlong *)0x0) {
          plVar47 = (longlong *)local_188._40_8_;
        }
        (**(code **)(*plVar47 + 0x10))();
      }
    }
    else if (1 < (byte)LogBatchedElements._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBatchedElements);
    }
  }
  return;
}

// PrepareShaders @ 1476be6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FBatchedElements::PrepareShaders
          (FBatchedElements *this,FRHICommandList *param_1,
          FGraphicsPipelineStateInitializer *param_2,uint param_3,Type param_4,
          ESimpleElementBlendMode param_5,FDFRelativeViewMatrices *param_6,
          FBatchedElementParameters *param_7,FTexture *param_8,bool param_9,float param_10,
          FDepthFieldGlowInfo *param_11,FSceneView *param_12,float param_13)

{
  EShaderPlatform EVar1;
  int iVar2;
  FShaderMapResource *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FDFRelativeViewMatrices *pFVar11;
  bool bVar12;
  FGlobalShaderMap *pFVar13;
  FShaderType *pFVar14;
  FName FVar15;
  FRHIVertexShader *pFVar16;
  FRHIPixelShader *pFVar17;
  FRHIBatchedShaderParameters *pFVar18;
  FRHIGraphicsShader *pFVar19;
  atomic<FRHIShader_*> aVar20;
  TRefCountPtr<FRHIBlendState> TVar21;
  FSceneView *pFVar22;
  FDFRelativeViewMatrices *pFVar23;
  uint uVar24;
  FDFRelativeViewMatrices *pFVar25;
  byte bVar26;
  FShaderMapBase *pFVar27;
  uint uVar28;
  longlong lVar29;
  FSimpleElementGammaBasePS *this_00;
  FDepthFieldGlowInfo *pFVar30;
  FDFRelativeViewMatrices *pFVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar35;
  double dVar34;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined1 auStackY_c38 [32];
  float local_bb8 [2];
  FDFRelativeViewMatrices *local_bb0;
  FDepthFieldGlowInfo *local_ba8;
  uint local_ba0 [2];
  uint local_b98 [2];
  uint local_b90 [2];
  atomic<FRHIShader_*> local_b88;
  TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable> local_b78;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_b68;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_b58;
  TShaderRefBase<FSimpleElementPS,FShaderMapPointerTable> local_b48;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_b38;
  TShaderRefBase<FSimpleElementAlphaOnlyPS,FShaderMapPointerTable> local_b28;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_b18;
  TShaderRefBase<FSimpleElementGammaAlphaOnlyPS,FShaderMapPointerTable> local_b08;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_af8;
  TShaderRefBase<FSimpleElementDistanceFieldGammaPS,FShaderMapPointerTable> local_ae8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_ad8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_ac8;
  TShaderRefBase<FSimpleElementHitProxyPS,FShaderMapPointerTable> local_ab8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_aa8;
  TShaderRefBase<FSimpleElementMaskedGammaPS<1>,FShaderMapPointerTable> local_a98;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_a88;
  TShaderRefBase<FSimpleElementMaskedGammaPS<0>,FShaderMapPointerTable> local_a78;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_a68;
  TShaderRefBase<FSimpleElementColorChannelMaskPS,FShaderMapPointerTable> local_a58;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_a48;
  undefined1 local_a38 [8];
  undefined1 local_a30 [8];
  undefined1 local_a28 [8];
  undefined1 local_a20 [8];
  undefined1 local_a18 [8];
  undefined1 local_a10 [8];
  undefined1 local_a08 [8];
  FString local_a00;
  FString local_9f0;
  FString local_9e0;
  FString local_9d0;
  FString local_9c0;
  FString local_9b0;
  FString local_9a0;
  FString local_990;
  FString local_980;
  FString local_970;
  FString local_960;
  FDepthFieldGlowInfo local_950;
  FDepthFieldGlowInfo local_918;
  FDFRelativeViewMatrices local_8d8;
  TMatrix<double> local_688;
  double local_608;
  double dStack_600;
  undefined1 local_5f8 [16];
  double local_5e8;
  double dStack_5e0;
  undefined1 local_5d8 [16];
  double local_5c8;
  double dStack_5c0;
  undefined1 local_5b8 [16];
  double local_5a8;
  double dStack_5a0;
  double local_598;
  undefined8 uStack_590;
  FDFRelativeViewMatrices local_588;
  FDFRelativeViewMatrices local_338;
  ulonglong local_e8;
  
  fVar36 = __real_3f800000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_c38;
  local_ba8 = param_11;
  local_688.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_688.M[1][1] = _UNK_15061cbc8;
  local_bb0 = param_6;
  local_688.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_688.M[0][1] = _UNK_150689518;
  local_688.M[0][2] = 0.0;
  local_688.M[0][3] = 0.0;
  local_688.M[1][2] = 0.0;
  local_688.M[1][3] = 0.0;
  local_688.M[2][0] = 0.0;
  local_688.M[2][1] = 0.0;
  local_688.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_688.M[2][3] = _UNK_150689518;
  local_688.M[3][0] = 0.0;
  local_688.M[3][1] = 0.0;
  local_688.M[3][2] = 0.0;
  local_688.M[3][3] = 0.0;
  local_b88 = (atomic<FRHIShader_*>)0x0;
  fVar32 = param_10;
  if (param_5 - SE_BLEND_RGBA_MASK_START < 0x20) {
    uVar24 = param_5 - SE_BLEND_RGBA_MASK_START;
    local_ba0[0] = uVar24 & 4;
    local_b98[0] = uVar24 & 8;
    local_b90[0] = uVar24 & 0x10;
    uVar28 = uVar24 & 2;
    uVar43 = 0;
    uVar44 = 0;
    uVar45 = 0;
    uVar46 = 0;
    if ((((local_b98[0] == 0) || ((uVar24 & 1) != 0)) || (uVar28 != 0)) || (local_ba0[0] != 0)) {
      local_bb8[0] = param_10;
      bVar26 = (local_ba0[0] != 0) + (uVar28 != 0) + ((byte)uVar24 & 1);
      SetBlendState(param_1,param_2,-(uint)(local_b98[0] != 0) & SE_BLEND_Translucent);
      uVar33 = SUB84(__real_3ff0000000000000,0);
      uVar35 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      uVar39 = 0;
      uVar40 = 0;
      if ((uVar24 & 1) != 0) {
        uVar39 = uVar33;
        uVar40 = uVar35;
      }
      uVar37 = 0;
      uVar38 = 0;
      if (uVar28 != 0) {
        uVar37 = uVar33;
        uVar38 = uVar35;
      }
      uVar41 = 0;
      uVar42 = 0;
      if (local_ba0[0] != 0) {
        uVar41 = uVar33;
        uVar42 = uVar35;
      }
      if (local_b98[0] != 0) {
        uVar45 = uVar33;
        uVar46 = uVar35;
      }
      local_688.M[1][1] = (double)CONCAT44(uVar38,uVar37);
      local_688.M[0][0] = (double)CONCAT44(uVar40,uVar39);
      local_688.M[1][2] = 0.0;
      local_688.M[2][2] = (double)CONCAT44(uVar42,uVar41);
      local_688.M[1][0] = 0.0;
      local_688.M[0][1] = 0.0;
      if ((local_b90[0] != 0) &&
         (local_688.M[1][1] = (double)CONCAT44(uVar38,uVar37),
         local_688.M[0][0] = (double)CONCAT44(uVar40,uVar39), local_688.M[1][2] = 0.0,
         local_688.M[2][2] = (double)CONCAT44(uVar42,uVar41), local_688.M[1][0] = 0.0,
         local_688.M[0][1] = 0.0, bVar26 != 0)) {
        dVar34 = __real_3ff0000000000000 / (double)bVar26;
        local_688.M[0][0] = (double)(float)((double)CONCAT44(uVar40,uVar39) * dVar34);
        local_688.M[1][1] = (double)(float)((double)CONCAT44(uVar38,uVar37) * dVar34);
        local_688.M[1][2] = (double)(float)((double)CONCAT44(uVar42,uVar41) * dVar34);
        local_688.M[2][2] = local_688.M[1][2];
        local_688.M[1][0] = local_688.M[0][0];
        local_688.M[0][1] = local_688.M[1][1];
      }
    }
    else {
      local_bb8[0] = __real_3f800000;
      SetBlendState(param_1,param_2,SE_BLEND_Opaque);
      uVar43 = SUB84(__real_3ff0000000000000,0);
      uVar44 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      local_688.M[1][1] = 0.0;
      local_688.M[0][0] = 0.0;
      local_688.M[1][2] = 0.0;
      local_688.M[2][2] = 0.0;
      local_688.M[1][0] = 0.0;
      local_688.M[0][1] = 0.0;
    }
    local_688.M[0][3] = (double)CONCAT44(uVar44,uVar43);
    local_688.M[1][3] = (double)CONCAT44(uVar44,uVar43);
    local_688.M[2][3] = (double)CONCAT44(uVar44,uVar43);
    local_688.M[3][3] = (double)CONCAT44(uVar46,uVar45);
    fVar32 = local_bb8[0];
    local_688.M[2][0] = local_688.M[1][0];
    local_688.M[2][1] = local_688.M[0][1];
  }
  local_688.M[3][2] = 0.0;
  local_688.M[3][1] = 0.0;
  local_688.M[3][0] = 0.0;
  local_688.M[0][2] = local_688.M[1][2];
  if (param_7 != (FBatchedElementParameters *)0x0) {
    local_608 = (double)(local_bb0->RelativeWorldToClip).M[0][0];
    dStack_600 = (double)(local_bb0->RelativeWorldToClip).M[0][1];
    dVar34 = (double)(local_bb0->RelativeWorldToClip).M[0][3];
    local_5f8._8_4_ = SUB84(dVar34,0);
    local_5f8._0_8_ = (double)(local_bb0->RelativeWorldToClip).M[0][2];
    local_5f8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
    local_5e8 = (double)(local_bb0->RelativeWorldToClip).M[1][0];
    dStack_5e0 = (double)(local_bb0->RelativeWorldToClip).M[1][1];
    dVar34 = (double)(local_bb0->RelativeWorldToClip).M[1][3];
    local_5d8._8_4_ = SUB84(dVar34,0);
    local_5d8._0_8_ = (double)(local_bb0->RelativeWorldToClip).M[1][2];
    local_5d8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
    local_5c8 = (double)(local_bb0->RelativeWorldToClip).M[2][0];
    dStack_5c0 = (double)(local_bb0->RelativeWorldToClip).M[2][1];
    dVar34 = (double)(local_bb0->RelativeWorldToClip).M[2][3];
    local_5b8._8_4_ = SUB84(dVar34,0);
    local_5b8._0_8_ = (double)(local_bb0->RelativeWorldToClip).M[2][2];
    local_5b8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
    dVar34 = (double)(local_bb0->RelativeWorldToClip).M[3][2];
    dVar6 = (double)(local_bb0->RelativeWorldToClip).M[3][3];
    local_5a8 = (double)(local_bb0->RelativeWorldToClip).M[3][0] +
                (double)(local_bb0->PositionHigh).field0_0x0._s_0.X;
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = dVar34;
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    dStack_5a0 = (double)(local_bb0->RelativeWorldToClip).M[3][1] +
                 (double)(local_bb0->PositionHigh).field0_0x0._s_0.Y;
    uStack_590 = auVar5._8_8_;
    local_598 = dVar34 + (double)(local_bb0->PositionHigh).field0_0x0._s_0.Z;
    (**(code **)(*(longlong *)param_7 + 8))(param_7,param_1,param_2,param_4);
    return;
  }
  lVar29 = (longlong)(int)param_4;
  pFVar13 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[lVar29]);
  pFVar14 = (FShaderType *)FSimpleElementVS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar13,&local_ad8,pFVar14,0);
  if ((FSimpleElementVS *)local_ad8.ShaderContent == (FSimpleElementVS *)0x0) {
    FVar15 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_b90);
    ::FName::ToString((FName *)FVar15,&local_a00);
    FSimpleElementVS::GetStaticType();
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_a00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a00.Data.AllocatorInstance.Data);
    }
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FSimpleElementVS::GetStaticType();
  local_b78.ShaderContent = (FSimpleElementVS *)local_ad8.ShaderContent;
  local_b78.ShaderMap = local_ad8.ShaderMap;
  (param_2->BoundShaderState).VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GSimpleElementVertexDeclaration._32_8_;
  pFVar16 = TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable>::GetVertexShader
                      (&local_b78,true);
  (param_2->BoundShaderState).VertexShaderRHI = pFVar16;
  if (param_9) {
    switch(param_5) {
    case SE_BLEND_Opaque:
    case SE_BLEND_Masked:
    case SE_BLEND_Translucent:
    case SE_BLEND_Additive:
    case SE_BLEND_Modulate:
    case SE_BLEND_MaskedDistanceField:
    case SE_BLEND_MaskedDistanceFieldShadowed:
    case SE_BLEND_TranslucentDistanceField:
    case SE_BLEND_TranslucentDistanceFieldShadowed:
    case SE_BLEND_AlphaComposite:
    case SE_BLEND_AlphaHoldout:
    case SE_BLEND_AlphaBlend:
    case SE_BLEND_TranslucentAlphaOnly:
    case SE_BLEND_TranslucentAlphaOnlyWriteAlpha:
      param_2->BlendState =
           TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
    }
    pFVar13 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[lVar29]);
    pFVar14 = (FShaderType *)FSimpleElementHitProxyPS::GetStaticType();
    FGlobalShaderMap::GetShader(pFVar13,&local_ac8,pFVar14,0);
    if ((FSimpleElementHitProxyPS *)local_ac8.ShaderContent == (FSimpleElementHitProxyPS *)0x0) {
      FVar15 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_b98);
      ::FName::ToString((FName *)FVar15,&local_9f0);
      FSimpleElementHitProxyPS::GetStaticType();
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_9f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9f0.Data.AllocatorInstance.Data);
      }
      if (bVar12) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FSimpleElementHitProxyPS::GetStaticType();
    local_ab8.ShaderContent = (FSimpleElementHitProxyPS *)local_ac8.ShaderContent;
    local_ab8.ShaderMap = local_ac8.ShaderMap;
    pFVar17 = TShaderRefBase<FSimpleElementHitProxyPS,FShaderMapPointerTable>::GetPixelShader
                        (&local_ab8,true);
    (param_2->BoundShaderState).PixelShaderRHI = pFVar17;
    SetGraphicsPipelineState(param_1,param_2,param_3,CheckApply,true);
    pFVar17 = TShaderRefBase<FSimpleElementHitProxyPS,FShaderMapPointerTable>::GetPixelShader
                        (&local_ab8,true);
    pFVar18 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
    FSimpleElementHitProxyPS::SetParameters
              ((FSimpleElementHitProxyPS *)local_ac8.ShaderContent,pFVar18,param_8);
  }
  else {
    if (param_5 == SE_BLEND_Masked) {
      param_2->BlendState =
           TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
      if (param_8->bSRGB == false) {
        pFVar13 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[lVar29]);
        pFVar14 = (FShaderType *)FSimpleElementMaskedGammaPS<0>::GetStaticType();
        FGlobalShaderMap::GetShader(pFVar13,&local_a88,pFVar14,0);
        if (CONCAT44(local_a88.ShaderContent._4_4_,local_a88.ShaderContent._0_4_) == 0) {
          FVar15 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_bb8);
          ::FName::ToString((FName *)FVar15,&local_9d0);
          FSimpleElementMaskedGammaPS<0>::GetStaticType();
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Shader.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                              ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_9d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_9d0.Data.AllocatorInstance.Data);
          }
          if (bVar12) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FSimpleElementMaskedGammaPS<0>::GetStaticType();
        local_a78.ShaderContent._0_4_ = local_a88.ShaderContent._0_4_;
        local_a78.ShaderContent._4_4_ = local_a88.ShaderContent._4_4_;
        local_a78.ShaderMap._0_4_ = local_a88.ShaderMap._0_4_;
        local_a78.ShaderMap._4_4_ = local_a88.ShaderMap._4_4_;
        pFVar17 = TShaderRefBase<FSimpleElementMaskedGammaPS<0>,FShaderMapPointerTable>::
                  GetPixelShader(&local_a78,true);
        (param_2->BoundShaderState).PixelShaderRHI = pFVar17;
        SetGraphicsPipelineState(param_1,param_2,param_3,CheckApply,true);
        pFVar19 = (FRHIGraphicsShader *)
                  TShaderRefBase<FSimpleElementMaskedGammaPS<0>,FShaderMapPointerTable>::
                  GetPixelShader(&local_a78,true);
      }
      else {
        pFVar13 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[lVar29]);
        pFVar14 = (FShaderType *)FSimpleElementMaskedGammaPS<1>::GetStaticType();
        FGlobalShaderMap::GetShader(pFVar13,&local_aa8,pFVar14,0);
        if (CONCAT44(local_aa8.ShaderContent._4_4_,local_aa8.ShaderContent._0_4_) == 0) {
          FVar15 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_ba0);
          ::FName::ToString((FName *)FVar15,&local_9e0);
          FSimpleElementMaskedGammaPS<1>::GetStaticType();
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Shader.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                              ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_9e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_9e0.Data.AllocatorInstance.Data);
          }
          if (bVar12) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FSimpleElementMaskedGammaPS<1>::GetStaticType();
        local_a98.ShaderContent._0_4_ = local_aa8.ShaderContent._0_4_;
        local_a98.ShaderContent._4_4_ = local_aa8.ShaderContent._4_4_;
        local_a98.ShaderMap._0_4_ = local_aa8.ShaderMap._0_4_;
        local_a98.ShaderMap._4_4_ = local_aa8.ShaderMap._4_4_;
        pFVar17 = TShaderRefBase<FSimpleElementMaskedGammaPS<1>,FShaderMapPointerTable>::
                  GetPixelShader(&local_a98,true);
        (param_2->BoundShaderState).PixelShaderRHI = pFVar17;
        SetGraphicsPipelineState(param_1,param_2,param_3,CheckApply,true);
        pFVar19 = (FRHIGraphicsShader *)
                  TShaderRefBase<FSimpleElementMaskedGammaPS<1>,FShaderMapPointerTable>::
                  GetPixelShader(&local_a98,true);
        local_a88.ShaderContent._0_4_ = local_aa8.ShaderContent._0_4_;
        local_a88.ShaderContent._4_4_ = local_aa8.ShaderContent._4_4_;
      }
      pFVar18 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
      FSimpleElementMaskedGammaBasePS::SetParameters
                ((FSimpleElementMaskedGammaBasePS *)
                 CONCAT44(local_a88.ShaderContent._4_4_,local_a88.ShaderContent._0_4_),pFVar18,
                 param_12,param_8,param_10,param_13,SE_BLEND_Masked);
      FRHICommandList::SetBatchedShaderParameters(param_1,pFVar19,pFVar18);
      goto LAB_1476bfa44;
    }
    if (param_5 - SE_BLEND_MaskedDistanceField < 4) {
      TVar21 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI;
      if (param_5 - SE_BLEND_TranslucentDistanceField < 2) {
        param_13 = 0.0;
        TVar21 = TStaticStateRHI<TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                 ::StaticResource.StateRHI;
      }
      param_2->BlendState = TVar21.Reference;
      pFVar13 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[lVar29]);
      pFVar14 = (FShaderType *)FSimpleElementDistanceFieldGammaPS::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar13,&local_af8,pFVar14,0);
      if ((FSimpleElementDistanceFieldGammaPS *)local_af8.ShaderContent ==
          (FSimpleElementDistanceFieldGammaPS *)0x0) {
        FVar15 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_a08);
        ::FName::ToString((FName *)FVar15,&local_960);
        FSimpleElementDistanceFieldGammaPS::GetStaticType();
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_960.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_960.Data.AllocatorInstance.Data);
        }
        if (bVar12) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FSimpleElementDistanceFieldGammaPS::GetStaticType();
      local_ae8.ShaderContent = (FSimpleElementDistanceFieldGammaPS *)local_af8.ShaderContent;
      local_ae8.ShaderMap = local_af8.ShaderMap;
      pFVar17 = TShaderRefBase<FSimpleElementDistanceFieldGammaPS,FShaderMapPointerTable>::
                GetPixelShader(&local_ae8,true);
      (param_2->BoundShaderState).PixelShaderRHI = pFVar17;
      SetGraphicsPipelineState(param_1,param_2,param_3,CheckApply,true);
      lVar29 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar29 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        uVar24 = (**(code **)(param_8->_padding_ + 0x38))(param_8);
        fVar36 = __real_bf800000;
        fVar32 = __real_bf800000 / (float)uVar24;
        uVar24 = (**(code **)(param_8->_padding_ + 0x30))(param_8);
        ShadowDirection.field0_0x0._s_0.X = (double)(fVar36 / (float)uVar24);
        ShadowDirection.field0_0x0._s_0.Y = (double)fVar32;
        _Init_thread_footer(&::_TSS0);
      }
      if ((*(int *)(lVar29 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        ShadowColor = FLinearColor::Black;
        _Init_thread_footer(&::_TSS1);
      }
      fVar36 = GBatchedElementSmoothWidth * __real_40000000;
      uVar24 = (**(code **)(param_8->_padding_ + 0x30))(param_8);
      if (local_ba8 == (FDepthFieldGlowInfo *)0x0) {
        local_950._0_4_ = local_950._0_4_ & 0xfffffffe;
        pFVar30 = &local_950;
        local_950.GlowColor.field0_0x0._0_8_ = 0;
        local_950.GlowColor.field0_0x0._8_8_ = 0;
        local_950.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
        local_950.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
        local_950.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
        local_950.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
      }
      else {
        local_918._0_8_ = *(undefined8 *)local_ba8;
        local_918.GlowColor.field0_0x0._4_8_ =
             *(undefined8 *)((longlong)&(local_ba8->GlowColor).field0_0x0 + 4);
        pFVar30 = &local_918;
        local_918._16_8_ = *(undefined8 *)((longlong)&(local_ba8->GlowColor).field0_0x0 + 0xc);
        local_918.GlowOuterRadius.field0_0x0._s_0.X = (local_ba8->GlowOuterRadius).field0_0x0._s_0.X
        ;
        local_918.GlowOuterRadius.field0_0x0._s_0.Y = (local_ba8->GlowOuterRadius).field0_0x0._s_0.Y
        ;
        local_918.GlowInnerRadius.field0_0x0._s_0.X = (local_ba8->GlowInnerRadius).field0_0x0._s_0.X
        ;
        local_918.GlowInnerRadius.field0_0x0._s_0.Y = (local_ba8->GlowInnerRadius).field0_0x0._s_0.Y
        ;
      }
      pFVar17 = TShaderRefBase<FSimpleElementDistanceFieldGammaPS,FShaderMapPointerTable>::
                GetPixelShader(&local_ae8,true);
      pFVar18 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
      FSimpleElementDistanceFieldGammaPS::SetParameters
                ((FSimpleElementDistanceFieldGammaPS *)local_af8.ShaderContent,pFVar18,param_8,
                 param_10,param_13,GBatchedElementSmoothWidth,
                 (param_5 - SE_BLEND_MaskedDistanceFieldShadowed & 0xfffffffd) == 0,&ShadowDirection
                 ,&ShadowColor,fVar36 / (float)uVar24,pFVar30,param_5);
    }
    else {
      if (param_5 - SE_BLEND_TranslucentAlphaOnly < 2) {
        SetBlendState(param_1,param_2,param_5);
        if (__real_38d1b717 <=
            (float)((uint)(param_10 - fVar36) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          pFVar13 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[lVar29]);
          pFVar14 = (FShaderType *)FSimpleElementGammaAlphaOnlyPS::GetStaticType();
          FGlobalShaderMap::GetShader(pFVar13,&local_b18,pFVar14,0);
          if ((FSimpleElementGammaBasePS *)local_b18.ShaderContent ==
              (FSimpleElementGammaBasePS *)0x0) {
            FVar15 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_a10);
            ::FName::ToString((FName *)FVar15,&local_970);
            FSimpleElementGammaAlphaOnlyPS::GetStaticType();
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Shader.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                ,0xc0,L"Failed to find shader type %s in Platform %s");
            if (local_970.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_970.Data.AllocatorInstance.Data);
            }
            if (bVar12) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          FSimpleElementGammaAlphaOnlyPS::GetStaticType();
          local_b08.ShaderContent = (FSimpleElementGammaAlphaOnlyPS *)local_b18.ShaderContent;
          local_b08.ShaderMap = local_b18.ShaderMap;
          pFVar17 = TShaderRefBase<FSimpleElementGammaAlphaOnlyPS,FShaderMapPointerTable>::
                    GetPixelShader(&local_b08,true);
          (param_2->BoundShaderState).PixelShaderRHI = pFVar17;
          SetGraphicsPipelineState(param_1,param_2,param_3,CheckApply,true);
          pFVar17 = TShaderRefBase<FSimpleElementGammaAlphaOnlyPS,FShaderMapPointerTable>::
                    GetPixelShader(&local_b08,true);
          pFVar18 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
          FSimpleElementGammaBasePS::SetParameters
                    ((FSimpleElementGammaBasePS *)local_b18.ShaderContent,pFVar18,param_12,param_8,
                     param_10,param_5);
          FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)pFVar17,pFVar18)
          ;
        }
        else {
          pFVar13 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[lVar29]);
          pFVar14 = (FShaderType *)FSimpleElementAlphaOnlyPS::GetStaticType();
          FGlobalShaderMap::GetShader(pFVar13,&local_b38,pFVar14,0);
          if ((FSimpleElementPS *)local_b38.ShaderContent == (FSimpleElementPS *)0x0) {
            FVar15 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_a18);
            ::FName::ToString((FName *)FVar15,&local_980);
            FSimpleElementAlphaOnlyPS::GetStaticType();
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Shader.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                ,0xc0,L"Failed to find shader type %s in Platform %s");
            if (local_980.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_980.Data.AllocatorInstance.Data);
            }
            if (bVar12) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          FSimpleElementAlphaOnlyPS::GetStaticType();
          local_b28.ShaderContent = (FSimpleElementAlphaOnlyPS *)local_b38.ShaderContent;
          local_b28.ShaderMap = local_b38.ShaderMap;
          pFVar17 = TShaderRefBase<FSimpleElementAlphaOnlyPS,FShaderMapPointerTable>::GetPixelShader
                              (&local_b28,true);
          (param_2->BoundShaderState).PixelShaderRHI = pFVar17;
          SetGraphicsPipelineState(param_1,param_2,param_3,CheckApply,true);
          pFVar17 = TShaderRefBase<FSimpleElementAlphaOnlyPS,FShaderMapPointerTable>::GetPixelShader
                              (&local_b28,true);
          pFVar18 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
          FSimpleElementPS::SetParameters
                    ((FSimpleElementPS *)local_b38.ShaderContent,pFVar18,param_12,param_8);
          FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)pFVar17,pFVar18)
          ;
        }
        goto LAB_1476bfa44;
      }
      if (0x1f < param_5 - SE_BLEND_RGBA_MASK_START) {
        SetBlendState(param_1,param_2,param_5);
        EVar1 = GRHIGlobals.ShaderPlatformForFeatureLevel[lVar29];
        if ((float)((uint)(param_10 - fVar36) & __xmm_7fffffff7fffffff7fffffff7fffffff) <
            __real_38d1b717) {
          pFVar13 = GetGlobalShaderMap(EVar1);
          pFVar14 = (FShaderType *)FSimpleElementPS::GetStaticType();
          FGlobalShaderMap::GetShader(pFVar13,&local_a48,pFVar14,0);
          if ((FSimpleElementPS *)local_a48.ShaderContent == (FSimpleElementPS *)0x0) {
            FVar15 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_a30);
            ::FName::ToString((FName *)FVar15,&local_9b0);
            FSimpleElementPS::GetStaticType();
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Shader.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                ,0xc0,L"Failed to find shader type %s in Platform %s");
            if (local_9b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_9b0.Data.AllocatorInstance.Data);
            }
            if (bVar12) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          FSimpleElementPS::GetStaticType();
          local_b48.ShaderContent = (FSimpleElementPS *)local_a48.ShaderContent;
          local_b48.ShaderMap = local_a48.ShaderMap;
          pFVar17 = TShaderRefBase<FSimpleElementPS,FShaderMapPointerTable>::GetPixelShader
                              (&local_b48,true);
          (param_2->BoundShaderState).PixelShaderRHI = pFVar17;
          SetGraphicsPipelineState(param_1,param_2,param_3,CheckApply,true);
          pFVar17 = TShaderRefBase<FSimpleElementPS,FShaderMapPointerTable>::GetPixelShader
                              (&local_b48,true);
          pFVar18 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
          FSimpleElementPS::SetParameters
                    ((FSimpleElementPS *)local_a48.ShaderContent,pFVar18,param_12,param_8);
          FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)pFVar17,pFVar18)
          ;
        }
        else {
          if (param_8->bSRGB == false) {
            pFVar13 = GetGlobalShaderMap(EVar1);
            pFVar14 = (FShaderType *)FSimpleElementGammaPS<0>::GetStaticType();
            FGlobalShaderMap::GetShader(pFVar13,&local_b58,pFVar14,0);
            if ((FSimpleElementGammaBasePS *)local_b58.ShaderContent ==
                (FSimpleElementGammaBasePS *)0x0) {
              FVar15 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_a20);
              ::FName::ToString((FName *)FVar15,&local_990);
              FSimpleElementGammaPS<0>::GetStaticType();
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Shader.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                  ,0xc0,L"Failed to find shader type %s in Platform %s");
              if (local_990.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_990.Data.AllocatorInstance.Data);
              }
              if (bVar12) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            FSimpleElementGammaPS<0>::GetStaticType();
            pFVar27 = local_b58.ShaderMap;
            this_00 = (FSimpleElementGammaBasePS *)local_b58.ShaderContent;
          }
          else {
            pFVar13 = GetGlobalShaderMap(EVar1);
            pFVar14 = (FShaderType *)FSimpleElementGammaPS<1>::GetStaticType();
            FGlobalShaderMap::GetShader(pFVar13,&local_b68,pFVar14,0);
            if ((FSimpleElementGammaBasePS *)local_b68.ShaderContent ==
                (FSimpleElementGammaBasePS *)0x0) {
              FVar15 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_a28);
              ::FName::ToString((FName *)FVar15,&local_9a0);
              FSimpleElementGammaPS<1>::GetStaticType();
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Shader.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                  ,0xc0,L"Failed to find shader type %s in Platform %s");
              if (local_9a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_9a0.Data.AllocatorInstance.Data);
              }
              if (bVar12) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            FSimpleElementGammaPS<1>::GetStaticType();
            pFVar27 = local_b68.ShaderMap;
            this_00 = (FSimpleElementGammaBasePS *)local_b68.ShaderContent;
          }
          aVar20 = (atomic<FRHIShader_*>)0x0;
          if (this_00 != (FSimpleElementGammaBasePS *)0x0) {
            pFVar3 = (pFVar27->Resource).Reference;
            if ((pFVar3 == (FShaderMapResource *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Resource",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                    ,0x426,L""), bVar12)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar2 = *(int *)((longlong)&this_00->_padding_ + 4);
            aVar20 = (pFVar3->RHIShaders).Ptr[iVar2];
            if ((aVar20 == (atomic<FRHIShader_*>)0x0) &&
               (aVar20 = (atomic<FRHIShader_*>)
                         FShaderMapResource::CreateShaderOrCrash(pFVar3,iVar2,true),
               aVar20 == (atomic<FRHIShader_*>)0x0)) {
              if (4 < (byte)LogShaders._0_1_) {
                if ((pFVar27->PointerTable == (FShaderMapPointerTable *)0x0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("PointerTable",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                        ,0x9b4,L""), bVar12)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                FShader::GetType((FShader *)this_00,pFVar27->PointerTable);
                UE::Logging::Private::BasicLog<5>
                          ((FStaticBasicLogRecord *)
                           &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSimpleElementGammaBasePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                            ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
              }
              aVar20 = (atomic<FRHIShader_*>)0x0;
            }
          }
          (param_2->BoundShaderState).PixelShaderRHI = (FRHIPixelShader *)aVar20;
          SetGraphicsPipelineState(param_1,param_2,param_3,CheckApply,true);
          aVar20 = (atomic<FRHIShader_*>)0x0;
          if (this_00 != (FSimpleElementGammaBasePS *)0x0) {
            pFVar3 = (pFVar27->Resource).Reference;
            if ((pFVar3 == (FShaderMapResource *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Resource",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                    ,0x426,L""), bVar12)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar2 = *(int *)((longlong)&this_00->_padding_ + 4);
            aVar20 = (pFVar3->RHIShaders).Ptr[iVar2];
            if (((aVar20 == (atomic<FRHIShader_*>)0x0) &&
                (aVar20 = (atomic<FRHIShader_*>)
                          FShaderMapResource::CreateShaderOrCrash(pFVar3,iVar2,true),
                aVar20 == (atomic<FRHIShader_*>)0x0)) &&
               (aVar20 = local_b88, 4 < (byte)LogShaders._0_1_)) {
              if ((pFVar27->PointerTable == (FShaderMapPointerTable *)0x0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("PointerTable",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                      ,0x9b4,L""), bVar12)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FShader::GetType((FShader *)this_00,pFVar27->PointerTable);
              UE::Logging::Private::BasicLog<5>
                        ((FStaticBasicLogRecord *)
                         &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSimpleElementGammaBasePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                          ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
              aVar20 = local_b88;
            }
          }
          local_b88 = aVar20;
          pFVar18 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
          FSimpleElementGammaBasePS::SetParameters
                    (this_00,pFVar18,param_12,param_8,param_10,param_5);
          FRHICommandList::SetBatchedShaderParameters
                    (param_1,(FRHIGraphicsShader *)local_b88,pFVar18);
        }
        goto LAB_1476bfa44;
      }
      pFVar13 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[lVar29]);
      pFVar14 = (FShaderType *)FSimpleElementColorChannelMaskPS::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar13,&local_a68,pFVar14,0);
      if ((FSimpleElementColorChannelMaskPS *)local_a68.ShaderContent ==
          (FSimpleElementColorChannelMaskPS *)0x0) {
        FVar15 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_a38);
        ::FName::ToString((FName *)FVar15,&local_9c0);
        FSimpleElementColorChannelMaskPS::GetStaticType();
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_9c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_9c0.Data.AllocatorInstance.Data);
        }
        if (bVar12) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FSimpleElementColorChannelMaskPS::GetStaticType();
      local_a58.ShaderContent = (FSimpleElementColorChannelMaskPS *)local_a68.ShaderContent;
      local_a58.ShaderMap = local_a68.ShaderMap;
      pFVar17 = TShaderRefBase<FSimpleElementColorChannelMaskPS,FShaderMapPointerTable>::
                GetPixelShader(&local_a58,true);
      (param_2->BoundShaderState).PixelShaderRHI = pFVar17;
      SetGraphicsPipelineState(param_1,param_2,param_3,CheckApply,true);
      pFVar17 = TShaderRefBase<FSimpleElementColorChannelMaskPS,FShaderMapPointerTable>::
                GetPixelShader(&local_a58,true);
      pFVar18 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
      FSimpleElementColorChannelMaskPS::SetParameters
                ((FSimpleElementColorChannelMaskPS *)local_a68.ShaderContent,pFVar18,param_8,
                 &local_688,fVar32);
    }
  }
  FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)pFVar17,pFVar18);
LAB_1476bfa44:
  pFVar22 = FSceneView::GetInstancedSceneView(param_12);
  if (pFVar22 == (FSceneView *)0x0) {
    lVar29 = 4;
    pFVar31 = local_bb0;
    pFVar11 = &local_338;
    do {
      pFVar25 = pFVar11;
      pFVar23 = pFVar31;
      uVar7 = *(undefined8 *)((pFVar23->RelativeWorldToView).M[0] + 2);
      uVar8 = *(undefined8 *)(pFVar23->RelativeWorldToView).M[1];
      uVar9 = *(undefined8 *)((pFVar23->RelativeWorldToView).M[1] + 2);
      *(undefined8 *)(pFVar25->RelativeWorldToView).M[0] =
           *(undefined8 *)(pFVar23->RelativeWorldToView).M[0];
      *(undefined8 *)((pFVar25->RelativeWorldToView).M[0] + 2) = uVar7;
      uVar7 = *(undefined8 *)(pFVar23->RelativeWorldToView).M[2];
      uVar10 = *(undefined8 *)((pFVar23->RelativeWorldToView).M[2] + 2);
      *(undefined8 *)(pFVar25->RelativeWorldToView).M[1] = uVar8;
      *(undefined8 *)((pFVar25->RelativeWorldToView).M[1] + 2) = uVar9;
      uVar8 = *(undefined8 *)(pFVar23->RelativeWorldToView).M[3];
      uVar9 = *(undefined8 *)((pFVar23->RelativeWorldToView).M[3] + 2);
      *(undefined8 *)(pFVar25->RelativeWorldToView).M[2] = uVar7;
      *(undefined8 *)((pFVar25->RelativeWorldToView).M[2] + 2) = uVar10;
      uVar7 = *(undefined8 *)(pFVar23->RelativeWorldToClip).M[0];
      uVar10 = *(undefined8 *)((pFVar23->RelativeWorldToClip).M[0] + 2);
      *(undefined8 *)(pFVar25->RelativeWorldToView).M[3] = uVar8;
      *(undefined8 *)((pFVar25->RelativeWorldToView).M[3] + 2) = uVar9;
      uVar8 = *(undefined8 *)(pFVar23->RelativeWorldToClip).M[1];
      uVar9 = *(undefined8 *)((pFVar23->RelativeWorldToClip).M[1] + 2);
      *(undefined8 *)(pFVar25->RelativeWorldToClip).M[0] = uVar7;
      *(undefined8 *)((pFVar25->RelativeWorldToClip).M[0] + 2) = uVar10;
      uVar7 = *(undefined8 *)(pFVar23->RelativeWorldToClip).M[2];
      uVar10 = *(undefined8 *)((pFVar23->RelativeWorldToClip).M[2] + 2);
      *(undefined8 *)(pFVar25->RelativeWorldToClip).M[1] = uVar8;
      *(undefined8 *)((pFVar25->RelativeWorldToClip).M[1] + 2) = uVar9;
      uVar8 = *(undefined8 *)(pFVar23->RelativeWorldToClip).M[3];
      uVar9 = *(undefined8 *)((pFVar23->RelativeWorldToClip).M[3] + 2);
      *(undefined8 *)(pFVar25->RelativeWorldToClip).M[2] = uVar7;
      *(undefined8 *)((pFVar25->RelativeWorldToClip).M[2] + 2) = uVar10;
      *(undefined8 *)(pFVar25->RelativeWorldToClip).M[3] = uVar8;
      *(undefined8 *)((pFVar25->RelativeWorldToClip).M[3] + 2) = uVar9;
      lVar29 = lVar29 + -1;
      pFVar31 = (FDFRelativeViewMatrices *)&pFVar23->ViewToRelativeWorld;
      pFVar11 = (FDFRelativeViewMatrices *)&pFVar25->ViewToRelativeWorld;
    } while (lVar29 != 0);
    uVar7 = *(undefined8 *)((pFVar23->ViewToRelativeWorld).M[0] + 2);
    pFVar31 = &local_338;
    uVar8 = *(undefined8 *)(pFVar23->ViewToRelativeWorld).M[1];
    uVar9 = *(undefined8 *)((pFVar23->ViewToRelativeWorld).M[1] + 2);
    *(undefined8 *)(pFVar25->ViewToRelativeWorld).M[0] =
         *(undefined8 *)(pFVar23->ViewToRelativeWorld).M[0];
    *(undefined8 *)((pFVar25->ViewToRelativeWorld).M[0] + 2) = uVar7;
    uVar7 = *(undefined8 *)(pFVar23->ViewToRelativeWorld).M[2];
    uVar10 = *(undefined8 *)((pFVar23->ViewToRelativeWorld).M[2] + 2);
    *(undefined8 *)(pFVar25->ViewToRelativeWorld).M[1] = uVar8;
    *(undefined8 *)((pFVar25->ViewToRelativeWorld).M[1] + 2) = uVar9;
    uVar8 = *(undefined8 *)(pFVar23->ViewToRelativeWorld).M[3];
    uVar9 = *(undefined8 *)((pFVar23->ViewToRelativeWorld).M[3] + 2);
    *(undefined8 *)(pFVar25->ViewToRelativeWorld).M[2] = uVar7;
    *(undefined8 *)((pFVar25->ViewToRelativeWorld).M[2] + 2) = uVar10;
    uVar7 = *(undefined8 *)(pFVar23->ClipToRelativeWorld).M[0];
    uVar10 = *(undefined8 *)((pFVar23->ClipToRelativeWorld).M[0] + 2);
    *(undefined8 *)(pFVar25->ViewToRelativeWorld).M[3] = uVar8;
    *(undefined8 *)((pFVar25->ViewToRelativeWorld).M[3] + 2) = uVar9;
    *(undefined8 *)(pFVar25->ClipToRelativeWorld).M[0] = uVar7;
    *(undefined8 *)((pFVar25->ClipToRelativeWorld).M[0] + 2) = uVar10;
  }
  else {
    FDFRelativeViewMatrices::Create(&local_8d8,&pFVar22->ViewMatrices,&pFVar22->ViewMatrices);
    lVar29 = 4;
    pFVar31 = &local_588;
    pFVar11 = &local_8d8;
    do {
      pFVar25 = pFVar11;
      pFVar23 = pFVar31;
      uVar7 = *(undefined8 *)((pFVar25->RelativeWorldToView).M[0] + 2);
      uVar8 = *(undefined8 *)(pFVar25->RelativeWorldToView).M[1];
      uVar9 = *(undefined8 *)((pFVar25->RelativeWorldToView).M[1] + 2);
      *(undefined8 *)(pFVar23->RelativeWorldToView).M[0] =
           *(undefined8 *)(pFVar25->RelativeWorldToView).M[0];
      *(undefined8 *)((pFVar23->RelativeWorldToView).M[0] + 2) = uVar7;
      uVar7 = *(undefined8 *)(pFVar25->RelativeWorldToView).M[2];
      uVar10 = *(undefined8 *)((pFVar25->RelativeWorldToView).M[2] + 2);
      *(undefined8 *)(pFVar23->RelativeWorldToView).M[1] = uVar8;
      *(undefined8 *)((pFVar23->RelativeWorldToView).M[1] + 2) = uVar9;
      uVar8 = *(undefined8 *)(pFVar25->RelativeWorldToView).M[3];
      uVar9 = *(undefined8 *)((pFVar25->RelativeWorldToView).M[3] + 2);
      *(undefined8 *)(pFVar23->RelativeWorldToView).M[2] = uVar7;
      *(undefined8 *)((pFVar23->RelativeWorldToView).M[2] + 2) = uVar10;
      uVar7 = *(undefined8 *)(pFVar25->RelativeWorldToClip).M[0];
      uVar10 = *(undefined8 *)((pFVar25->RelativeWorldToClip).M[0] + 2);
      *(undefined8 *)(pFVar23->RelativeWorldToView).M[3] = uVar8;
      *(undefined8 *)((pFVar23->RelativeWorldToView).M[3] + 2) = uVar9;
      uVar8 = *(undefined8 *)(pFVar25->RelativeWorldToClip).M[1];
      uVar9 = *(undefined8 *)((pFVar25->RelativeWorldToClip).M[1] + 2);
      *(undefined8 *)(pFVar23->RelativeWorldToClip).M[0] = uVar7;
      *(undefined8 *)((pFVar23->RelativeWorldToClip).M[0] + 2) = uVar10;
      uVar7 = *(undefined8 *)(pFVar25->RelativeWorldToClip).M[2];
      uVar10 = *(undefined8 *)((pFVar25->RelativeWorldToClip).M[2] + 2);
      *(undefined8 *)(pFVar23->RelativeWorldToClip).M[1] = uVar8;
      *(undefined8 *)((pFVar23->RelativeWorldToClip).M[1] + 2) = uVar9;
      uVar8 = *(undefined8 *)(pFVar25->RelativeWorldToClip).M[3];
      uVar9 = *(undefined8 *)((pFVar25->RelativeWorldToClip).M[3] + 2);
      *(undefined8 *)(pFVar23->RelativeWorldToClip).M[2] = uVar7;
      *(undefined8 *)((pFVar23->RelativeWorldToClip).M[2] + 2) = uVar10;
      *(undefined8 *)(pFVar23->RelativeWorldToClip).M[3] = uVar8;
      *(undefined8 *)((pFVar23->RelativeWorldToClip).M[3] + 2) = uVar9;
      lVar29 = lVar29 + -1;
      pFVar31 = (FDFRelativeViewMatrices *)&pFVar23->ViewToRelativeWorld;
      pFVar11 = (FDFRelativeViewMatrices *)&pFVar25->ViewToRelativeWorld;
    } while (lVar29 != 0);
    uVar7 = *(undefined8 *)((pFVar25->ViewToRelativeWorld).M[0] + 2);
    pFVar31 = &local_588;
    uVar8 = *(undefined8 *)(pFVar25->ViewToRelativeWorld).M[1];
    uVar9 = *(undefined8 *)((pFVar25->ViewToRelativeWorld).M[1] + 2);
    *(undefined8 *)(pFVar23->ViewToRelativeWorld).M[0] =
         *(undefined8 *)(pFVar25->ViewToRelativeWorld).M[0];
    *(undefined8 *)((pFVar23->ViewToRelativeWorld).M[0] + 2) = uVar7;
    uVar7 = *(undefined8 *)(pFVar25->ViewToRelativeWorld).M[2];
    uVar10 = *(undefined8 *)((pFVar25->ViewToRelativeWorld).M[2] + 2);
    *(undefined8 *)(pFVar23->ViewToRelativeWorld).M[1] = uVar8;
    *(undefined8 *)((pFVar23->ViewToRelativeWorld).M[1] + 2) = uVar9;
    uVar8 = *(undefined8 *)(pFVar25->ViewToRelativeWorld).M[3];
    uVar9 = *(undefined8 *)((pFVar25->ViewToRelativeWorld).M[3] + 2);
    *(undefined8 *)(pFVar23->ViewToRelativeWorld).M[2] = uVar7;
    *(undefined8 *)((pFVar23->ViewToRelativeWorld).M[2] + 2) = uVar10;
    uVar7 = *(undefined8 *)(pFVar25->ClipToRelativeWorld).M[0];
    uVar10 = *(undefined8 *)((pFVar25->ClipToRelativeWorld).M[0] + 2);
    *(undefined8 *)(pFVar23->ViewToRelativeWorld).M[3] = uVar8;
    *(undefined8 *)((pFVar23->ViewToRelativeWorld).M[3] + 2) = uVar9;
    *(undefined8 *)(pFVar23->ClipToRelativeWorld).M[0] = uVar7;
    *(undefined8 *)((pFVar23->ClipToRelativeWorld).M[0] + 2) = uVar10;
  }
  pFVar11 = local_bb0;
  pFVar16 = TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable>::GetVertexShader
                      (&local_b78,true);
  pFVar18 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  FSimpleElementVS::SetParameters(local_b78.ShaderContent,pFVar18,pFVar11,pFVar31);
  FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)pFVar16,pFVar18);
  return;
}

// Reserve @ 1476c3de0

void __thiscall FBatchedElements::Reserve(FBatchedElements *this,FAllocationInfo *param_1)

{
  uint uVar1;
  
  uVar1 = param_1->NumLineVertices;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if ((this->LineVertices).ArrayMax < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,uVar1,(ForAnyElementType *)this,(this->LineVertices).ArrayNum,
               &(this->LineVertices).ArrayMax);
  }
  uVar1 = param_1->NumPoints;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if ((this->Points).ArrayMax < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar1,&(this->Points).AllocatorInstance,(this->Points).ArrayNum,
               &(this->Points).ArrayMax);
  }
  uVar1 = param_1->NumWireTris;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if ((this->WireTris).ArrayMax < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar1,&(this->WireTris).AllocatorInstance,(this->WireTris).ArrayNum,
               &(this->WireTris).ArrayMax);
  }
  uVar1 = param_1->NumWireTriVerts;
  if (-1 < (int)uVar1) {
    if (*(int *)((longlong)&(this->WireTriVerts)._padding_ + 4) < (int)uVar1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x40,0x10,uVar1,(ForAnyElementType *)&(this->WireTriVerts)._padding_,
                 (int)(this->WireTriVerts)._padding_,
                 (int *)((longlong)&(this->WireTriVerts)._padding_ + 4));
    }
    uVar1 = param_1->NumThickLines;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if ((this->ThickLines).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,uVar1,&(this->ThickLines).AllocatorInstance,(this->ThickLines).ArrayNum,
                 &(this->ThickLines).ArrayMax);
    }
    uVar1 = param_1->NumSprites;
    if (-1 < (int)uVar1) {
      if ((this->Sprites).ArrayMax < (int)uVar1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,uVar1,&(this->Sprites).AllocatorInstance,(this->Sprites).ArrayNum,
                   &(this->Sprites).ArrayMax);
      }
      uVar1 = param_1->NumMeshElements;
      if (-1 < (int)uVar1) {
        if ((this->MeshElements).ArrayMax < (int)uVar1) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x68,8,uVar1,&(this->MeshElements).AllocatorInstance,
                     (this->MeshElements).ArrayNum,&(this->MeshElements).ArrayMax);
        }
        uVar1 = param_1->NumMeshVertices;
        if (-1 < (int)uVar1) {
          if ((this->MeshVertices).ArrayMax < (int)uVar1) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,0x10,uVar1,&(this->MeshVertices).AllocatorInstance,
                       (this->MeshVertices).ArrayNum,&(this->MeshVertices).ArrayMax);
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// ReserveTriangles @ 1476c4000

void __thiscall
FBatchedElements::ReserveTriangles
          (FBatchedElements *this,int param_1,FTexture *param_2,ESimpleElementBlendMode param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  
  uVar4 = 0;
  if (0 < (this->MeshElements).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->MeshElements).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar6 = (this->MeshElements).AllocatorInstance.Data;
      if ((((*(FTexture **)(pFVar6 + lVar5 + 0x18) == param_2) &&
           (*(longlong *)(pFVar6 + lVar5 + 0x20) == 0)) &&
          (*(ESimpleElementBlendMode *)(pFVar6 + lVar5 + 0x28) == param_3)) &&
         (*(int *)(pFVar6 + lVar5 + 0x10) + 3 < this->MaxMeshIndicesAllowed)) {
        pFVar6 = pFVar6 + lVar5 + 8;
        if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
        }
        if (param_1 <= *(int *)(pFVar6 + 0xc)) {
          return;
        }
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,param_1,(ForAnyElementType *)pFVar6,*(int *)&pFVar6[8].field_0x0,
                   (int *)(pFVar6 + 0xc));
        return;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x68;
    } while ((int)uVar4 < (this->MeshElements).ArrayNum);
  }
  return;
}

// ReserveVertices @ 1476c4120

void __thiscall FBatchedElements::ReserveVertices(FBatchedElements *this,int param_1)

{
  if (-1 < param_1) {
    if ((this->MeshVertices).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,param_1,&(this->MeshVertices).AllocatorInstance,
                 (this->MeshVertices).ArrayNum,&(this->MeshVertices).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ~FBatchedElements @ 1484bd660

void __thiscall FBatchedElements::~FBatchedElements(FBatchedElements *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->MeshVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FBatchedElements::FBatchedMeshElement,int>
            ((FBatchedMeshElement *)(this->MeshElements).AllocatorInstance.Data,
             (this->MeshElements).ArrayNum);
  pFVar1 = (this->MeshElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Sprites).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ThickLines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->WireTriVerts)._padding_);
  (this->WireTriVerts)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  pFVar1 = (this->WireTris).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Points).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LineVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

