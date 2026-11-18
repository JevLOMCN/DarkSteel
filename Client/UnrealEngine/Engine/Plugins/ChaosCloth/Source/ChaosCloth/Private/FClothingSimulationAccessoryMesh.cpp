// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 11

// FClothingSimulationAccessoryMesh @ 14db8f230

FClothingSimulationAccessoryMesh * __thiscall
Chaos::FClothingSimulationAccessoryMesh::FClothingSimulationAccessoryMesh
          (FClothingSimulationAccessoryMesh *this,FClothingSimulationMesh *param_1,FName *param_2)

{
  this->Mesh = param_1;
  this->_padding_ = (longlong)&___7FClothingSimulationAccessoryMesh_Chaos__6B_;
  this->AccessoryMeshName = *param_2;
  return this;
}

// ~FClothingSimulationAccessoryMesh @ 14db9f560

void __thiscall
Chaos::FClothingSimulationAccessoryMesh::~FClothingSimulationAccessoryMesh
          (FClothingSimulationAccessoryMesh *this)

{
  this->_padding_ = (longlong)&___7FClothingSimulationAccessoryMesh_Chaos__6B_;
  return;
}

// operator() @ 14dba8dc0

void __thiscall
`Chaos::FClothingSimulationAccessoryMesh::SkinPhysicsMesh'::__l31::<lambda_1>::operator()
          (void *this,uint param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  float fVar13;
  FClothVertBoneData *pFVar14;
  FClothVertBoneData *pFVar15;
  TVector<float> *pTVar16;
  TVector<float> *pTVar17;
  FClothVertBoneData *pFVar18;
  TVector<float,3> *pTVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  pFVar14 = TArrayView<FClothVertBoneData_const_,int>::operator[]
                      (*(TArrayView<FClothVertBoneData_const_,int> **)this,param_1);
  pFVar15 = TArrayView<FClothVertBoneData_const_,int>::operator[]
                      (*(TArrayView<FClothVertBoneData_const_,int> **)this,param_1);
  pTVar16 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                      (*(TArrayView<UE::Math::TVector<float>_const_,int> **)((longlong)this + 8),
                       param_1);
  pTVar17 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                      (*(TArrayView<UE::Math::TVector<float>_const_,int> **)((longlong)this + 0x10),
                       param_1);
  fVar35 = 0.0;
  fVar33 = 0.0;
  fVar31 = 0.0;
  fVar36 = 0.0;
  fVar34 = 0.0;
  fVar32 = 0.0;
  pFVar18 = TArrayView<FClothVertBoneData_const_,int>::operator[]
                      (*(TArrayView<FClothVertBoneData_const_,int> **)this,param_1);
  fVar21 = __real_3f800000;
  switch(pFVar18->NumInfluences) {
  default:
    fVar34 = pFVar15->BoneWeights[0xb];
    fVar36 = (pTVar16->field0_0x0)._s_0.X;
    fVar31 = (pTVar16->field0_0x0)._s_0.Y;
    fVar32 = (pTVar16->field0_0x0)._s_0.Z;
    lVar12 = *(longlong *)((longlong)this + 0x28);
    lVar20 = (longlong)
             *(int *)(*(longlong *)((longlong)this + 0x20) +
                     (ulonglong)pFVar14->BoneIndices[0xb] * 4) * 0x40;
    fVar9 = (pTVar17->field0_0x0)._s_0.Z;
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar5 = (float *)(lVar20 + 0x30 + lVar12);
    fVar23 = (pTVar17->field0_0x0)._s_0.X;
    fVar25 = (pTVar17->field0_0x0)._s_0.Y;
    pfVar2 = (float *)(lVar20 + lVar12);
    pfVar6 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar7 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar8 = (float *)(lVar20 + 0x30 + lVar12);
    fVar35 = (fVar36 * *pfVar1 + fVar31 * *pfVar3 + fVar32 * *pfVar4 + *pfVar5 * 1.0) * fVar34;
    fVar33 = (fVar36 * pfVar1[1] + fVar31 * pfVar3[1] + fVar32 * pfVar4[1] + pfVar5[1] * 1.0) *
             fVar34;
    fVar31 = (fVar36 * pfVar1[2] + fVar31 * pfVar3[2] + fVar32 * pfVar4[2] + pfVar5[2] * 1.0) *
             fVar34;
    fVar32 = (fVar23 * pfVar2[2] + fVar25 * pfVar6[2] + fVar9 * pfVar7[2] + pfVar8[2] * 0.0) *
             fVar34;
    fVar36 = (fVar23 * *pfVar2 + fVar25 * *pfVar6 + fVar9 * *pfVar7 + *pfVar8 * 0.0) * fVar34;
    fVar34 = (fVar23 * pfVar2[1] + fVar25 * pfVar6[1] + fVar9 * pfVar7[1] + pfVar8[1] * 0.0) *
             fVar34;
  case 0xb:
    fVar9 = pFVar15->BoneWeights[10];
    fVar23 = (pTVar16->field0_0x0)._s_0.X;
    fVar25 = (pTVar16->field0_0x0)._s_0.Y;
    fVar27 = (pTVar16->field0_0x0)._s_0.Z;
    lVar12 = *(longlong *)((longlong)this + 0x28);
    lVar20 = (longlong)
             *(int *)(*(longlong *)((longlong)this + 0x20) + (ulonglong)pFVar14->BoneIndices[10] * 4
                     ) * 0x40;
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar2 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x30 + lVar12);
    fVar31 = fVar31 + (fVar23 * pfVar1[2] + fVar25 * pfVar3[2] + fVar27 * pfVar2[2] +
                      pfVar4[2] * 1.0) * fVar9;
    fVar10 = (pTVar17->field0_0x0)._s_0.Z;
    fVar33 = fVar33 + (fVar23 * pfVar1[1] + fVar25 * pfVar3[1] + fVar27 * pfVar2[1] +
                      pfVar4[1] * 1.0) * fVar9;
    fVar11 = (pTVar17->field0_0x0)._s_0.Y;
    fVar35 = fVar35 + (fVar23 * *pfVar1 + fVar25 * *pfVar3 + fVar27 * *pfVar2 + *pfVar4 * 1.0) *
                      fVar9;
    fVar23 = (pTVar17->field0_0x0)._s_0.X;
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar2 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x30 + lVar12);
    fVar32 = fVar32 + (fVar23 * pfVar1[2] + fVar11 * pfVar3[2] + fVar10 * pfVar2[2] +
                      pfVar4[2] * 0.0) * fVar9;
    fVar36 = fVar36 + (fVar23 * *pfVar1 + fVar11 * *pfVar3 + fVar10 * *pfVar2 + *pfVar4 * 0.0) *
                      fVar9;
    fVar34 = fVar34 + (fVar23 * pfVar1[1] + fVar11 * pfVar3[1] + fVar10 * pfVar2[1] +
                      pfVar4[1] * 0.0) * fVar9;
  case 10:
    fVar9 = pFVar15->BoneWeights[9];
    fVar23 = (pTVar16->field0_0x0)._s_0.X;
    fVar25 = (pTVar16->field0_0x0)._s_0.Y;
    fVar27 = (pTVar16->field0_0x0)._s_0.Z;
    lVar12 = *(longlong *)((longlong)this + 0x28);
    lVar20 = (longlong)
             *(int *)(*(longlong *)((longlong)this + 0x20) + (ulonglong)pFVar14->BoneIndices[9] * 4)
             * 0x40;
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar2 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x30 + lVar12);
    fVar31 = fVar31 + (fVar23 * pfVar1[2] + fVar25 * pfVar3[2] + fVar27 * pfVar2[2] +
                      pfVar4[2] * 1.0) * fVar9;
    fVar10 = (pTVar17->field0_0x0)._s_0.Z;
    fVar33 = fVar33 + (fVar23 * pfVar1[1] + fVar25 * pfVar3[1] + fVar27 * pfVar2[1] +
                      pfVar4[1] * 1.0) * fVar9;
    fVar11 = (pTVar17->field0_0x0)._s_0.Y;
    fVar35 = fVar35 + (fVar23 * *pfVar1 + fVar25 * *pfVar3 + fVar27 * *pfVar2 + *pfVar4 * 1.0) *
                      fVar9;
    fVar23 = (pTVar17->field0_0x0)._s_0.X;
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar2 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x30 + lVar12);
    fVar32 = fVar32 + (fVar23 * pfVar1[2] + fVar11 * pfVar3[2] + fVar10 * pfVar2[2] +
                      pfVar4[2] * 0.0) * fVar9;
    fVar36 = fVar36 + (fVar23 * *pfVar1 + fVar11 * *pfVar3 + fVar10 * *pfVar2 + *pfVar4 * 0.0) *
                      fVar9;
    fVar34 = fVar34 + (fVar23 * pfVar1[1] + fVar11 * pfVar3[1] + fVar10 * pfVar2[1] +
                      pfVar4[1] * 0.0) * fVar9;
  case 9:
    fVar9 = pFVar15->BoneWeights[8];
    fVar23 = (pTVar16->field0_0x0)._s_0.X;
    fVar25 = (pTVar16->field0_0x0)._s_0.Y;
    fVar27 = (pTVar16->field0_0x0)._s_0.Z;
    lVar12 = *(longlong *)((longlong)this + 0x28);
    lVar20 = (longlong)
             *(int *)(*(longlong *)((longlong)this + 0x20) + (ulonglong)pFVar14->BoneIndices[8] * 4)
             * 0x40;
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar2 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x30 + lVar12);
    fVar31 = fVar31 + (fVar23 * pfVar1[2] + fVar25 * pfVar3[2] + fVar27 * pfVar2[2] +
                      pfVar4[2] * 1.0) * fVar9;
    fVar10 = (pTVar17->field0_0x0)._s_0.Z;
    fVar33 = fVar33 + (fVar23 * pfVar1[1] + fVar25 * pfVar3[1] + fVar27 * pfVar2[1] +
                      pfVar4[1] * 1.0) * fVar9;
    fVar11 = (pTVar17->field0_0x0)._s_0.Y;
    fVar35 = fVar35 + (fVar23 * *pfVar1 + fVar25 * *pfVar3 + fVar27 * *pfVar2 + *pfVar4 * 1.0) *
                      fVar9;
    fVar23 = (pTVar17->field0_0x0)._s_0.X;
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar2 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x30 + lVar12);
    fVar32 = fVar32 + (fVar23 * pfVar1[2] + fVar11 * pfVar3[2] + fVar10 * pfVar2[2] +
                      pfVar4[2] * 0.0) * fVar9;
    fVar36 = fVar36 + (fVar23 * *pfVar1 + fVar11 * *pfVar3 + fVar10 * *pfVar2 + *pfVar4 * 0.0) *
                      fVar9;
    fVar34 = fVar34 + (fVar23 * pfVar1[1] + fVar11 * pfVar3[1] + fVar10 * pfVar2[1] +
                      pfVar4[1] * 0.0) * fVar9;
  case 8:
    fVar9 = pFVar15->BoneWeights[7];
    fVar23 = (pTVar16->field0_0x0)._s_0.X;
    fVar25 = (pTVar16->field0_0x0)._s_0.Y;
    fVar27 = (pTVar16->field0_0x0)._s_0.Z;
    lVar12 = *(longlong *)((longlong)this + 0x28);
    lVar20 = (longlong)
             *(int *)(*(longlong *)((longlong)this + 0x20) + (ulonglong)pFVar14->BoneIndices[7] * 4)
             * 0x40;
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar2 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x30 + lVar12);
    fVar31 = fVar31 + (fVar23 * pfVar1[2] + fVar25 * pfVar3[2] + fVar27 * pfVar2[2] +
                      pfVar4[2] * 1.0) * fVar9;
    fVar10 = (pTVar17->field0_0x0)._s_0.Z;
    fVar33 = fVar33 + (fVar23 * pfVar1[1] + fVar25 * pfVar3[1] + fVar27 * pfVar2[1] +
                      pfVar4[1] * 1.0) * fVar9;
    fVar11 = (pTVar17->field0_0x0)._s_0.Y;
    fVar35 = fVar35 + (fVar23 * *pfVar1 + fVar25 * *pfVar3 + fVar27 * *pfVar2 + *pfVar4 * 1.0) *
                      fVar9;
    fVar23 = (pTVar17->field0_0x0)._s_0.X;
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar2 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x30 + lVar12);
    fVar32 = fVar32 + (fVar23 * pfVar1[2] + fVar11 * pfVar3[2] + fVar10 * pfVar2[2] +
                      pfVar4[2] * 0.0) * fVar9;
    fVar36 = fVar36 + (fVar23 * *pfVar1 + fVar11 * *pfVar3 + fVar10 * *pfVar2 + *pfVar4 * 0.0) *
                      fVar9;
    fVar34 = fVar34 + (fVar23 * pfVar1[1] + fVar11 * pfVar3[1] + fVar10 * pfVar2[1] +
                      pfVar4[1] * 0.0) * fVar9;
  case 7:
    fVar9 = pFVar15->BoneWeights[6];
    fVar23 = (pTVar16->field0_0x0)._s_0.X;
    fVar25 = (pTVar16->field0_0x0)._s_0.Y;
    fVar27 = (pTVar16->field0_0x0)._s_0.Z;
    lVar12 = *(longlong *)((longlong)this + 0x28);
    lVar20 = (longlong)
             *(int *)(*(longlong *)((longlong)this + 0x20) + (ulonglong)pFVar14->BoneIndices[6] * 4)
             * 0x40;
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar2 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x30 + lVar12);
    fVar31 = fVar31 + (fVar23 * pfVar1[2] + fVar25 * pfVar3[2] + fVar27 * pfVar2[2] +
                      pfVar4[2] * 1.0) * fVar9;
    fVar10 = (pTVar17->field0_0x0)._s_0.Z;
    fVar33 = fVar33 + (fVar23 * pfVar1[1] + fVar25 * pfVar3[1] + fVar27 * pfVar2[1] +
                      pfVar4[1] * 1.0) * fVar9;
    fVar11 = (pTVar17->field0_0x0)._s_0.Y;
    fVar35 = fVar35 + (fVar23 * *pfVar1 + fVar25 * *pfVar3 + fVar27 * *pfVar2 + *pfVar4 * 1.0) *
                      fVar9;
    fVar23 = (pTVar17->field0_0x0)._s_0.X;
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar2 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x30 + lVar12);
    fVar32 = fVar32 + (fVar23 * pfVar1[2] + fVar11 * pfVar3[2] + fVar10 * pfVar2[2] +
                      pfVar4[2] * 0.0) * fVar9;
    fVar36 = fVar36 + (fVar23 * *pfVar1 + fVar11 * *pfVar3 + fVar10 * *pfVar2 + *pfVar4 * 0.0) *
                      fVar9;
    fVar34 = fVar34 + (fVar23 * pfVar1[1] + fVar11 * pfVar3[1] + fVar10 * pfVar2[1] +
                      pfVar4[1] * 0.0) * fVar9;
  case 6:
    fVar9 = pFVar15->BoneWeights[5];
    fVar23 = (pTVar16->field0_0x0)._s_0.X;
    fVar25 = (pTVar16->field0_0x0)._s_0.Y;
    fVar27 = (pTVar16->field0_0x0)._s_0.Z;
    lVar12 = *(longlong *)((longlong)this + 0x28);
    lVar20 = (longlong)
             *(int *)(*(longlong *)((longlong)this + 0x20) + (ulonglong)pFVar14->BoneIndices[5] * 4)
             * 0x40;
    pfVar2 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x30 + lVar12);
    fVar35 = fVar35 + fVar9 * (fVar23 * *pfVar1 + fVar25 * *pfVar2 + fVar27 * *pfVar3 +
                              *pfVar4 * 1.0);
    fVar10 = (pTVar17->field0_0x0)._s_0.X;
    fVar33 = fVar33 + fVar9 * (fVar23 * pfVar1[1] + fVar25 * pfVar2[1] + fVar27 * pfVar3[1] +
                              pfVar4[1] * 1.0);
    fVar11 = (pTVar17->field0_0x0)._s_0.Y;
    fVar31 = fVar31 + fVar9 * (fVar23 * pfVar1[2] + fVar25 * pfVar2[2] + fVar27 * pfVar3[2] +
                              pfVar4[2] * 1.0);
    fVar23 = (pTVar17->field0_0x0)._s_0.Z;
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar2 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x30 + lVar12);
    fVar36 = fVar36 + fVar9 * (fVar10 * *pfVar1 + fVar11 * *pfVar2 + fVar23 * *pfVar3 +
                              *pfVar4 * 0.0);
    fVar32 = fVar32 + fVar9 * (fVar10 * pfVar1[2] + fVar11 * pfVar2[2] + fVar23 * pfVar3[2] +
                              pfVar4[2] * 0.0);
    fVar34 = fVar34 + fVar9 * (fVar10 * pfVar1[1] + fVar11 * pfVar2[1] + fVar23 * pfVar3[1] +
                              pfVar4[1] * 0.0);
  case 5:
    fVar9 = pFVar15->BoneWeights[4];
    fVar23 = (pTVar16->field0_0x0)._s_0.X;
    fVar25 = (pTVar16->field0_0x0)._s_0.Y;
    fVar27 = (pTVar16->field0_0x0)._s_0.Z;
    lVar12 = *(longlong *)((longlong)this + 0x28);
    lVar20 = (longlong)
             *(int *)(*(longlong *)((longlong)this + 0x20) + (ulonglong)pFVar14->BoneIndices[4] * 4)
             * 0x40;
    pfVar2 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x30 + lVar12);
    fVar35 = fVar35 + fVar9 * (fVar23 * *pfVar1 + fVar25 * *pfVar2 + fVar27 * *pfVar3 +
                              *pfVar4 * 1.0);
    fVar10 = (pTVar17->field0_0x0)._s_0.X;
    fVar33 = fVar33 + fVar9 * (fVar23 * pfVar1[1] + fVar25 * pfVar2[1] + fVar27 * pfVar3[1] +
                              pfVar4[1] * 1.0);
    fVar11 = (pTVar17->field0_0x0)._s_0.Y;
    fVar31 = fVar31 + fVar9 * (fVar23 * pfVar1[2] + fVar25 * pfVar2[2] + fVar27 * pfVar3[2] +
                              pfVar4[2] * 1.0);
    fVar23 = (pTVar17->field0_0x0)._s_0.Z;
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar2 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x30 + lVar12);
    fVar36 = fVar36 + fVar9 * (fVar10 * *pfVar1 + fVar11 * *pfVar2 + fVar23 * *pfVar3 +
                              *pfVar4 * 0.0);
    fVar32 = fVar32 + fVar9 * (fVar10 * pfVar1[2] + fVar11 * pfVar2[2] + fVar23 * pfVar3[2] +
                              pfVar4[2] * 0.0);
    fVar34 = fVar34 + fVar9 * (fVar10 * pfVar1[1] + fVar11 * pfVar2[1] + fVar23 * pfVar3[1] +
                              pfVar4[1] * 0.0);
  case 4:
    fVar9 = pFVar15->BoneWeights[3];
    fVar23 = (pTVar16->field0_0x0)._s_0.X;
    fVar25 = (pTVar16->field0_0x0)._s_0.Y;
    fVar27 = (pTVar16->field0_0x0)._s_0.Z;
    lVar12 = *(longlong *)((longlong)this + 0x28);
    lVar20 = (longlong)
             *(int *)(*(longlong *)((longlong)this + 0x20) + (ulonglong)pFVar14->BoneIndices[3] * 4)
             * 0x40;
    pfVar2 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x30 + lVar12);
    fVar35 = fVar35 + fVar9 * (fVar23 * *pfVar1 + fVar25 * *pfVar2 + fVar27 * *pfVar3 +
                              *pfVar4 * 1.0);
    fVar10 = (pTVar17->field0_0x0)._s_0.X;
    fVar33 = fVar33 + fVar9 * (fVar23 * pfVar1[1] + fVar25 * pfVar2[1] + fVar27 * pfVar3[1] +
                              pfVar4[1] * 1.0);
    fVar11 = (pTVar17->field0_0x0)._s_0.Y;
    fVar31 = fVar31 + fVar9 * (fVar23 * pfVar1[2] + fVar25 * pfVar2[2] + fVar27 * pfVar3[2] +
                              pfVar4[2] * 1.0);
    fVar23 = (pTVar17->field0_0x0)._s_0.Z;
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar2 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x30 + lVar12);
    fVar36 = fVar36 + fVar9 * (fVar10 * *pfVar1 + fVar11 * *pfVar2 + fVar23 * *pfVar3 +
                              *pfVar4 * 0.0);
    fVar32 = fVar32 + fVar9 * (fVar10 * pfVar1[2] + fVar11 * pfVar2[2] + fVar23 * pfVar3[2] +
                              pfVar4[2] * 0.0);
    fVar34 = fVar34 + fVar9 * (fVar10 * pfVar1[1] + fVar11 * pfVar2[1] + fVar23 * pfVar3[1] +
                              pfVar4[1] * 0.0);
  case 3:
    fVar9 = pFVar15->BoneWeights[2];
    fVar23 = (pTVar16->field0_0x0)._s_0.X;
    fVar25 = (pTVar16->field0_0x0)._s_0.Y;
    fVar27 = (pTVar16->field0_0x0)._s_0.Z;
    lVar12 = *(longlong *)((longlong)this + 0x28);
    lVar20 = (longlong)
             *(int *)(*(longlong *)((longlong)this + 0x20) + (ulonglong)pFVar14->BoneIndices[2] * 4)
             * 0x40;
    pfVar2 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x30 + lVar12);
    fVar35 = fVar35 + fVar9 * (fVar23 * *pfVar1 + fVar25 * *pfVar2 + fVar27 * *pfVar3 +
                              *pfVar4 * 1.0);
    fVar10 = (pTVar17->field0_0x0)._s_0.X;
    fVar33 = fVar33 + fVar9 * (fVar23 * pfVar1[1] + fVar25 * pfVar2[1] + fVar27 * pfVar3[1] +
                              pfVar4[1] * 1.0);
    fVar11 = (pTVar17->field0_0x0)._s_0.Y;
    fVar31 = fVar31 + fVar9 * (fVar23 * pfVar1[2] + fVar25 * pfVar2[2] + fVar27 * pfVar3[2] +
                              pfVar4[2] * 1.0);
    fVar23 = (pTVar17->field0_0x0)._s_0.Z;
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar2 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x30 + lVar12);
    fVar36 = fVar36 + fVar9 * (fVar10 * *pfVar1 + fVar11 * *pfVar2 + fVar23 * *pfVar3 +
                              *pfVar4 * 0.0);
    fVar32 = fVar32 + fVar9 * (fVar10 * pfVar1[2] + fVar11 * pfVar2[2] + fVar23 * pfVar3[2] +
                              pfVar4[2] * 0.0);
    fVar34 = fVar34 + fVar9 * (fVar10 * pfVar1[1] + fVar11 * pfVar2[1] + fVar23 * pfVar3[1] +
                              pfVar4[1] * 0.0);
  case 2:
    fVar9 = pFVar15->BoneWeights[1];
    fVar23 = (pTVar16->field0_0x0)._s_0.X;
    fVar25 = (pTVar16->field0_0x0)._s_0.Y;
    fVar27 = (pTVar16->field0_0x0)._s_0.Z;
    lVar12 = *(longlong *)((longlong)this + 0x28);
    lVar20 = (longlong)
             *(int *)(*(longlong *)((longlong)this + 0x20) + (ulonglong)pFVar14->BoneIndices[1] * 4)
             * 0x40;
    pfVar2 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x30 + lVar12);
    fVar35 = fVar35 + fVar9 * (fVar23 * *pfVar1 + fVar25 * *pfVar2 + fVar27 * *pfVar3 +
                              *pfVar4 * 1.0);
    fVar10 = (pTVar17->field0_0x0)._s_0.X;
    fVar33 = fVar33 + fVar9 * (fVar23 * pfVar1[1] + fVar25 * pfVar2[1] + fVar27 * pfVar3[1] +
                              pfVar4[1] * 1.0);
    fVar11 = (pTVar17->field0_0x0)._s_0.Y;
    fVar31 = fVar31 + fVar9 * (fVar23 * pfVar1[2] + fVar25 * pfVar2[2] + fVar27 * pfVar3[2] +
                              pfVar4[2] * 1.0);
    fVar23 = (pTVar17->field0_0x0)._s_0.Z;
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar2 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x30 + lVar12);
    fVar36 = fVar36 + fVar9 * (fVar10 * *pfVar1 + fVar11 * *pfVar2 + fVar23 * *pfVar3 +
                              *pfVar4 * 0.0);
    fVar32 = fVar32 + fVar9 * (fVar10 * pfVar1[2] + fVar11 * pfVar2[2] + fVar23 * pfVar3[2] +
                              pfVar4[2] * 0.0);
    fVar34 = fVar34 + fVar9 * (fVar10 * pfVar1[1] + fVar11 * pfVar2[1] + fVar23 * pfVar3[1] +
                              pfVar4[1] * 0.0);
  case 1:
    fVar9 = pFVar15->BoneWeights[0];
    fVar23 = (pTVar16->field0_0x0)._s_0.X;
    fVar25 = (pTVar16->field0_0x0)._s_0.Y;
    fVar27 = (pTVar16->field0_0x0)._s_0.Z;
    lVar12 = *(longlong *)((longlong)this + 0x28);
    lVar20 = (longlong)
             *(int *)(*(longlong *)((longlong)this + 0x20) + (ulonglong)pFVar14->BoneIndices[0] * 4)
             * 0x40;
    pfVar2 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x30 + lVar12);
    fVar35 = fVar35 + fVar9 * (fVar23 * *pfVar1 + fVar25 * *pfVar2 + fVar27 * *pfVar3 +
                              *pfVar4 * 1.0);
    fVar10 = (pTVar17->field0_0x0)._s_0.X;
    fVar33 = fVar33 + fVar9 * (fVar23 * pfVar1[1] + fVar25 * pfVar2[1] + fVar27 * pfVar3[1] +
                              pfVar4[1] * 1.0);
    fVar11 = (pTVar17->field0_0x0)._s_0.Y;
    fVar31 = fVar31 + fVar9 * (fVar23 * pfVar1[2] + fVar25 * pfVar2[2] + fVar27 * pfVar3[2] +
                              pfVar4[2] * 1.0);
    fVar23 = (pTVar17->field0_0x0)._s_0.Z;
    pfVar1 = (float *)(lVar20 + lVar12);
    pfVar2 = (float *)(lVar20 + 0x10 + lVar12);
    pfVar3 = (float *)(lVar20 + 0x20 + lVar12);
    pfVar4 = (float *)(lVar20 + 0x30 + lVar12);
    fVar36 = fVar36 + fVar9 * (fVar10 * *pfVar1 + fVar11 * *pfVar2 + fVar23 * *pfVar3 +
                              *pfVar4 * 0.0);
    fVar32 = fVar32 + fVar9 * (fVar10 * pfVar1[2] + fVar11 * pfVar2[2] + fVar23 * pfVar3[2] +
                              pfVar4[2] * 0.0);
    fVar34 = fVar34 + fVar9 * (fVar10 * pfVar1[1] + fVar11 * pfVar2[1] + fVar23 * pfVar3[1] +
                              pfVar4[1] * 0.0);
  case 0:
    pfVar1 = *(float **)((longlong)this + 0x18);
    fVar9 = *pfVar1;
    fVar23 = pfVar1[1];
    fVar25 = pfVar1[2];
    fVar27 = pfVar1[3];
    fVar35 = fVar35 * pfVar1[8];
    fVar33 = fVar33 * pfVar1[9];
    fVar31 = fVar31 * pfVar1[10];
    fVar22 = fVar33 * fVar9 - fVar23 * fVar35;
    fVar24 = fVar31 * fVar23 - fVar25 * fVar33;
    fVar26 = fVar35 * fVar25 - fVar9 * fVar31;
    fVar24 = fVar24 + fVar24;
    fVar26 = fVar26 + fVar26;
    fVar22 = fVar22 + fVar22;
    fVar10 = pfVar1[4];
    fVar11 = pfVar1[5];
    fVar13 = pfVar1[6];
    pTVar19 = TArrayView<Chaos::TVector<float,3>,int>::operator[]
                        (*(TArrayView<Chaos::TVector<float,3>,int> **)((longlong)this + 0x30),
                         param_1);
    *(ulonglong *)pTVar19 =
         CONCAT44(fVar27 * fVar26 + fVar33 + (fVar24 * fVar25 - fVar22 * fVar9) + fVar11,
                  fVar27 * fVar24 + fVar35 + (fVar22 * fVar23 - fVar26 * fVar25) + fVar10);
    *(float *)&pTVar19->field_0x8 =
         fVar27 * fVar22 + fVar31 + (fVar26 * fVar9 - fVar24 * fVar23) + fVar13;
    pfVar1 = *(float **)((longlong)this + 0x18);
    fVar35 = *pfVar1;
    fVar33 = pfVar1[1];
    fVar31 = pfVar1[2];
    fVar9 = pfVar1[3];
    fVar36 = fVar36 * pfVar1[8];
    fVar34 = fVar34 * pfVar1[9];
    fVar32 = fVar32 * pfVar1[10];
    fVar23 = fVar34 * fVar35 - fVar33 * fVar36;
    fVar25 = fVar32 * fVar33 - fVar31 * fVar34;
    fVar27 = fVar36 * fVar31 - fVar35 * fVar32;
    fVar25 = fVar25 + fVar25;
    fVar27 = fVar27 + fVar27;
    fVar23 = fVar23 + fVar23;
    fVar36 = fVar9 * fVar25 + fVar36 + (fVar23 * fVar33 - fVar27 * fVar31);
    fVar31 = fVar9 * fVar27 + fVar34 + (fVar25 * fVar31 - fVar23 * fVar35);
    fVar35 = fVar9 * fVar23 + fVar32 + (fVar27 * fVar35 - fVar25 * fVar33);
    fVar34 = fVar31 * fVar31 + fVar36 * fVar36 + fVar35 * fVar35;
    uVar28 = fVar35;
    uVar29 = fVar36;
    uVar30 = fVar31;
    if ((fVar34 != fVar21) &&
       (uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
       uVar29 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
       uVar30 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y, __real_322bcc77 <= fVar34))
    {
      fVar21 = fVar21 / SQRT(fVar34);
      uVar28 = fVar21 * fVar35;
      uVar29 = fVar21 * fVar36;
      uVar30 = fVar21 * fVar31;
    }
    pTVar19 = TArrayView<Chaos::TVector<float,3>,int>::operator[]
                        (*(TArrayView<Chaos::TVector<float,3>,int> **)((longlong)this + 0x38),
                         param_1);
    *(ulonglong *)pTVar19 = CONCAT44(uVar30,uVar29);
    *(undefined4 *)&pTVar19->field_0x8 = uVar28;
    return;
  }
}

// ApplyMorphTarget @ 14dbbd500

void __thiscall
Chaos::FClothingSimulationAccessoryMesh::ApplyMorphTarget
          (FClothingSimulationAccessoryMesh *this,int param_1,float param_2,
          TArrayView<Chaos::TVector<float,3>,int> *param_3,
          TArrayView<Chaos::TVector<float,3>,int> *param_4)

{
  TArrayView<int_const_,int> local_48;
  TArrayView<UE::Math::TVector<float>_const_,int> local_38;
  TArrayView<UE::Math::TVector<float>_const_,int> local_28 [2];
  
  (**(code **)(this->_padding_ + 0x48))(this,local_28,param_1);
  (**(code **)(this->_padding_ + 0x50))(this,&local_38,param_1);
  (**(code **)(this->_padding_ + 0x58))(this,&local_48,param_1);
  if ((((__real_322bcc77 < (float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
       (local_28[0].ArrayNum != 0)) && (local_28[0].ArrayNum == local_38.ArrayNum)) &&
     (local_28[0].ArrayNum == local_48.ArrayNum)) {
    Chaos::Private::ApplyMorphTargetInternal<Chaos::TVector<float,3>_>
              (param_2,local_28,&local_38,&local_48,param_3,param_4);
  }
  return;
}

// FindMorphTargetByName @ 14dbf3440

int __thiscall
Chaos::FClothingSimulationAccessoryMesh::FindMorphTargetByName
          (FClothingSimulationAccessoryMesh *this,FString *param_1)

{
  return -1;
}

// GetAllMorphTargetNames @ 14dbf6910

TArrayView<FString_const_,int> * __thiscall
Chaos::FClothingSimulationAccessoryMesh::GetAllMorphTargetNames
          (FClothingSimulationAccessoryMesh *this,
          TArrayView<FString_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (FString *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetMorphTargetIndices @ 14dbfc990

TArrayView<int_const_,int> * __thiscall
Chaos::FClothingSimulationAccessoryMesh::GetMorphTargetIndices
          (FClothingSimulationAccessoryMesh *this,TArrayView<int_const_,int> *__return_storage_ptr__
          ,int param_1)

{
  __return_storage_ptr__->DataPtr = (int *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetMorphTargetPositionDeltas @ 14dbfca00

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
Chaos::FClothingSimulationAccessoryMesh::GetMorphTargetPositionDeltas
          (FClothingSimulationAccessoryMesh *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__,int param_1)

{
  __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetMorphTargetTangentZDeltas @ 14dbfca70

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
Chaos::FClothingSimulationAccessoryMesh::GetMorphTargetTangentZDeltas
          (FClothingSimulationAccessoryMesh *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__,int param_1)

{
  __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// SkinPhysicsMesh @ 14dc1aef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClothingSimulationAccessoryMesh::SkinPhysicsMesh
          (FClothingSimulationAccessoryMesh *this,int param_1,float param_2,double param_3,
          TVector<double,3> *param_4,TArrayView<Chaos::TVector<float,3>,int> *param_5,
          TArrayView<Chaos::TVector<float,3>,int> *param_6)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  ForAnyElementType FVar20;
  bool bVar21;
  bool bVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothSkinPhysicsMesh> FVar24;
  FThreadSafeStaticStat<FStat_STAT_ClothSkinPhysMesh> FVar25;
  double *pdVar26;
  undefined8 *puVar27;
  FThreadStats *pFVar28;
  FThreadStatsPool *pFVar29;
  FColor_u_0 FVar30;
  FNameEntryId FVar31;
  FName FVar32;
  FName FVar33;
  byte bVar34;
  int iVar35;
  bool bVar36;
  uint uVar37;
  uint uVar38;
  undefined1 auStackY_388 [32];
  <lambda_1> local_328;
  undefined4 uStack_30c;
  FColor_u_0 local_308;
  uint uStack_304;
  ForAnyElementType local_300;
  undefined8 local_2f8;
  ForAnyElementType local_2f0;
  undefined8 local_2e8;
  uint local_2e0;
  uint uStack_2dc;
  FColor_u_0 local_2d8 [2];
  TArrayView<Chaos::TVector<float,3>,int> *local_2d0;
  TArrayView<Chaos::TVector<float,3>,int> *local_2c8;
  FColor_u_0 local_2c0;
  uint local_2bc;
  FName local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  FScriptContainerElement *local_298;
  undefined8 uStack_290;
  FScriptContainerElement *local_288;
  undefined8 uStack_280;
  FName local_278;
  FName local_268;
  LARGE_INTEGER local_258;
  LARGE_INTEGER local_250;
  FStatMessage local_248;
  FStatMessage local_238;
  TArrayView<UE::Math::TVector<float>,int> local_228;
  TArrayView<UE::Math::TVector<float>,int> local_218;
  TArrayView<int_const_,int> local_208;
  TArrayView<UE::Math::TVector<float>_const_,int> local_1f8;
  TArrayView<UE::Math::TVector<float>_const_,int> local_1e8;
  undefined1 local_1d8 [16];
  TArrayView<std::nullptr_t,int> local_1c8;
  code *local_1b8;
  undefined1 **local_1b0;
  undefined1 *local_1a8;
  FScriptContainerElement **local_1a0;
  FScriptContainerElement **local_198;
  float *local_190;
  undefined8 local_188;
  undefined8 local_180;
  TArrayView<Chaos::TVector<float,3>,int> *local_178;
  TArrayView<Chaos::TVector<float,3>,int> *local_170;
  FName local_168;
  FName local_160;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  undefined8 local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined1 local_110 [24];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_2d0 = param_5;
  local_2c8 = param_6;
  bVar36 = -1 < CpuChannel->Enabled;
  if (bVar36) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId90,"FClothingSimulationMesh_SkinPhysicsMesh",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationAccessoryMesh.cpp"
               ,0x5a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId90);
  }
  FVar24 = StatPtr_STAT_ChaosClothSkinPhysicsMesh;
  if (StatPtr_STAT_ChaosClothSkinPhysicsMesh ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosClothSkinPhysicsMesh>)0x0) {
    pFVar23 = ::FName::FName(&local_168,"STAT_ChaosClothSkinPhysicsMesh");
    FVar24 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothSkinPhysicsMesh>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosClothSkinPhysicsMesh,
                        *pFVar23,L"Chaos Cloth Skin Physics Mesh","STATGROUP_ChaosCloth",
                        "STATCAT_Advanced",L"ChaosCloth",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar24;
  bVar34 = 0;
  local_278.ComparisonIndex.Value = 0;
  local_278.Number = 0;
  local_328 = (<lambda_1>)0x0;
  FVar30.Bits = (uint)FVar32.ComparisonIndex.Value;
  uVar37 = FVar32.Number;
  if ((FVar30.Bits != 0) || (FVar33 = local_278, uVar37 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2d8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2d8[0]._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar34 = 1;
      local_328 = (<lambda_1>)0x1;
      if (-1 < CpuChannel->Enabled) {
        local_2c0.Bits = FVar30.Bits;
        local_2bc = uVar37;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_2c0._s_0,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationAccessoryMesh.cpp"
                   ,0x5b);
        bVar34 = 3;
        local_328 = (<lambda_1>)0x3;
      }
    }
    FVar33 = local_278;
    if (FThreadStats::bPrimaryEnable != false) {
      local_308.Bits = FVar30.Bits;
      uStack_304 = uVar37;
      FThreadStats::AddMessage(FVar32,CycleScopeStart);
      local_328 = (<lambda_1>)(bVar34 | 4);
      FVar33 = FVar32;
    }
  }
  FVar25 = StatPtr_STAT_ClothSkinPhysMesh;
  if (StatPtr_STAT_ClothSkinPhysMesh == (FThreadSafeStaticStat<FStat_STAT_ClothSkinPhysMesh>)0x0) {
    pFVar23 = ::FName::FName(&local_160,"STAT_ClothSkinPhysMesh");
    FVar25 = (FThreadSafeStaticStat<FStat_STAT_ClothSkinPhysMesh>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothSkinPhysMesh,*pFVar23,
                        L"Skin Physics Mesh","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar25;
  bVar17 = false;
  bVar19 = false;
  local_268.ComparisonIndex.Value = 0;
  local_268.Number = 0;
  FVar31 = FVar32.ComparisonIndex.Value;
  uVar37 = FVar32.Number;
  if ((FVar31.Value != 0) || (uVar37 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_308.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_308._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
      bVar17 = false;
      bVar19 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2b8.ComparisonIndex.Value = FVar31.Value;
        local_2b8.Number = uVar37;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2b8,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationAccessoryMesh.cpp"
                   ,0x5c);
        bVar17 = true;
        bVar19 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_2e0 = FVar31.Value;
      uStack_2dc = uVar37;
      FThreadStats::AddMessage(FVar32,CycleScopeStart);
      bVar18 = true;
      goto LAB_14dc1b205;
    }
  }
  bVar18 = false;
  FVar32 = local_268;
LAB_14dc1b205:
  pdVar26 = (double *)(**(code **)(this->Mesh->_padding_ + 0xc0))();
  dVar9 = *pdVar26;
  dVar10 = pdVar26[1];
  uVar37 = (uint)*(undefined8 *)&param_4->field_0x10 ^ (uint)__xmm_80000000000000008000000000000000;
  uVar38 = (uint)((ulonglong)*(undefined8 *)&param_4->field_0x10 >> 0x20) ^
           __xmm_80000000000000008000000000000000._4_4_;
  dVar11 = pdVar26[2];
  dVar12 = pdVar26[3];
  local_158 = *(uint *)param_4 ^ (uint)__xmm_80000000000000008000000000000000;
  uStack_154 = *(uint *)&param_4->field_0x4 ^ __xmm_80000000000000008000000000000000._4_4_;
  uStack_150 = *(uint *)&param_4->field_0x8 ^ _UNK_15066df78;
  uStack_14c = *(uint *)&param_4->field_0xc ^ _UNK_15066df7c;
  dVar13 = pdVar26[8];
  dVar14 = pdVar26[9];
  dVar15 = pdVar26[10];
  dVar16 = pdVar26[0xb];
  dVar2 = pdVar26[6];
  dVar4 = pdVar26[7];
  dVar3 = pdVar26[4];
  dVar7 = (double)CONCAT44(uStack_154,local_158);
  dVar5 = pdVar26[5];
  dVar8 = (double)CONCAT44(uStack_14c,uStack_150);
  local_148 = CONCAT44(uVar38,uVar37);
  if ((param_3 <= __real_3e45798ee0000000) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("LocalSpaceScale > (1.e-8f)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationAccessoryMesh.cpp"
                          ,0x60,L""), bVar21)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_140 = __real_3ff0000000000000 / param_3;
  local_f8 = (float)dVar9;
  fStack_f4 = (float)dVar10;
  fStack_f0 = (float)dVar11;
  fStack_ec = (float)dVar12;
  local_e8 = (float)((dVar7 + dVar3) * local_140);
  fStack_e4 = (float)((dVar8 + dVar5) * local_140);
  fStack_e0 = (float)(local_140 * ((double)CONCAT44(uVar38,uVar37) + dVar2));
  fStack_dc = (float)((dVar4 + 0.0) * 0.0);
  local_d8 = (float)(dVar13 * local_140);
  fStack_d4 = (float)(dVar14 * local_140);
  fStack_d0 = (float)(local_140 * dVar15);
  fStack_cc = (float)(dVar16 * 0.0);
  dStack_138 = local_140;
  local_130 = local_140;
  local_128 = local_140;
  dStack_120 = local_140;
  local_118 = local_140;
  puVar27 = (undefined8 *)(**(code **)(this->Mesh->_padding_ + 0xd0))(this->Mesh,local_110);
  local_2b0 = *puVar27;
  puVar27 = (undefined8 *)(**(code **)(this->Mesh->_padding_ + 200))();
  local_2a8 = *puVar27;
  uVar37 = (**(code **)(this->_padding_ + 8))(this);
  local_2e0 = uVar37;
  if ((uVar37 != local_2d0->ArrayNum) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumPoints == OutPositions.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationAccessoryMesh.cpp"
                          ,0x6a,L""), bVar21)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((uVar37 != local_2c8->ArrayNum) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumPoints == OutNormals.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationAccessoryMesh.cpp"
                          ,0x6b,L""), bVar21)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (**(code **)(this->_padding_ + 0x30))(this,local_1d8);
  (**(code **)(this->_padding_ + 0x18))(this,&local_298);
  (**(code **)(this->_padding_ + 0x28))(this,&local_288);
  local_2f0.Data = (FScriptContainerElement *)0x0;
  local_2e8 = 0;
  local_300.Data = (FScriptContainerElement *)0x0;
  local_2f8 = 0;
  (**(code **)(this->_padding_ + 0x48))(this,&local_1e8,param_1);
  (**(code **)(this->_padding_ + 0x50))(this,&local_1f8,param_1);
  (**(code **)(this->_padding_ + 0x58))(this,&local_208,param_1);
  if ((((__real_322bcc77 < (float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
       (local_1e8.ArrayNum != 0)) && (local_1e8.ArrayNum == local_1f8.ArrayNum)) &&
     (local_1e8.ArrayNum == local_208.ArrayNum)) {
    bVar21 = -1 < CpuChannel->Enabled;
    if (bVar21) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId122,"FClothingSimulationMesh_SkinPhysicsMesh_MorphTargets"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationAccessoryMesh.cpp"
                 ,0x7a);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId122);
    }
    iVar35 = (int)uStack_290;
    local_2e8 = CONCAT44(local_2e8._4_4_,iVar35);
    if (((iVar35 != 0) || (local_2e8._4_4_ != 0)) &&
       (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar35,local_2e8._4_4_,&local_2f0,iVar35,(int *)((longlong)&local_2e8 + 4))
       , iVar35 != 0)) {
      memcpy(local_2f0.Data,local_298,(longlong)iVar35 * 0xc);
    }
    local_2f8 = CONCAT44(local_2f8._4_4_,(int)uStack_280);
    if ((((int)uStack_280 != 0) || (local_2f8._4_4_ != 0)) &&
       (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,(int)uStack_280,local_2f8._4_4_,&local_300,(int)uStack_280,
                   (int *)((longlong)&local_2f8 + 4)), (int)uStack_280 != 0)) {
      memcpy(local_300.Data,local_288,(longlong)(int)uStack_280 * 0xc);
    }
    iVar35 = (int)local_2f8;
    local_228.DataPtr = (TVector<float> *)local_300.Data;
    if (((int)local_2f8 < 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_228.ArrayNum = iVar35;
    iVar35 = (int)local_2e8;
    local_218.DataPtr = (TVector<float> *)local_2f0.Data;
    if (((int)local_2e8 < 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_218.ArrayNum = iVar35;
    Chaos::Private::ApplyMorphTargetInternal<UE::Math::TVector<float>_>
              (param_2,&local_1e8,&local_1f8,&local_208,&local_218,&local_228);
    local_298 = local_2f0.Data;
    iVar35 = (int)local_2e8;
    if (((int)local_2e8 < 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar20.Data = local_300.Data;
    uStack_290 = CONCAT44(uStack_30c,iVar35);
    iVar35 = (int)local_2f8;
    if (((int)local_2f8 < 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uStack_280 = CONCAT44(uStack_30c,iVar35);
    local_288 = FVar20.Data;
    uVar37 = local_2e0;
    if (bVar21) {
      FCpuProfilerTrace::OutputEndEvent();
      uVar37 = local_2e0;
    }
  }
  if (bChaos_SkinPhysicsMesh_ISPC_Enabled == false) {
    local_1a8 = local_1d8;
    local_1c8.DataPtr = (void **)0x0;
    local_1a0 = &local_298;
    local_1c8.ArrayNum = 0;
    local_190 = &local_f8;
    local_188 = local_2b0;
    local_180 = local_2a8;
    local_178 = local_2d0;
    local_170 = local_2c8;
    local_1b8 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::FClothingSimulationAccessoryMesh::SkinPhysicsMesh'::__l31::<lambda_1>,void,int>
                ::Call;
    local_1b0 = &local_1a8;
    local_198 = &local_288;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",uVar37,1,(TFunctionRef<void___cdecl(int)> *)&local_1b8,local_328,
               (uint)(uVar37 < 0x1f5),&local_1c8);
  }
  else {
    ::SkinPhysicsMesh(local_2d0->DataPtr,local_2c8->DataPtr,local_298,local_288);
  }
  if (local_300.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data);
  }
  if (local_2f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data);
  }
  if (bVar19) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar18) && (FVar32 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar28 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar28 == (FThreadStats *)0x0) {
      pFVar29 = FThreadStatsPool::Get();
      pFVar28 = FThreadStatsPool::GetFromPool(pFVar29);
    }
    if (pFVar28->bWaitForExplicitFlush < pFVar28->ScopeCount) {
      local_248.NameAndInfo.Index = FVar32.ComparisonIndex.Value;
      local_248.NameAndInfo.Number = FVar32.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_258);
      local_248.StatData.Pad[4] = '\0';
      local_248.StatData.Pad[5] = '\0';
      local_248.StatData.Pad[6] = '\0';
      local_248.StatData.Pad[7] = '\0';
      local_248.StatData.Pad[0] = local_258.s.LowPart._0_1_;
      local_248.StatData.Pad[1] = local_258.s.LowPart._1_1_;
      local_248.StatData.Pad[2] = local_258.s.LowPart._2_1_;
      local_248.StatData.Pad[3] = local_258.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar28,&local_248);
      piVar1 = &pFVar28->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar28,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar28,false,false);
      }
    }
  }
  if (((byte)local_328 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (((byte)local_328 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((((byte)local_328 & 4) != 0) && (FVar33 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar28 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar28 == (FThreadStats *)0x0) {
      pFVar29 = FThreadStatsPool::Get();
      pFVar28 = FThreadStatsPool::GetFromPool(pFVar29);
    }
    if (pFVar28->bWaitForExplicitFlush < pFVar28->ScopeCount) {
      local_238.NameAndInfo.Index = FVar33.ComparisonIndex.Value;
      local_238.NameAndInfo.Number = FVar33.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_250);
      local_238.StatData.Pad[4] = '\0';
      local_238.StatData.Pad[5] = '\0';
      local_238.StatData.Pad[6] = '\0';
      local_238.StatData.Pad[7] = '\0';
      local_238.StatData.Pad[0] = local_250.s.LowPart._0_1_;
      local_238.StatData.Pad[1] = local_250.s.LowPart._1_1_;
      local_238.StatData.Pad[2] = local_250.s.LowPart._2_1_;
      local_238.StatData.Pad[3] = local_250.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar28,&local_238);
      piVar1 = &pFVar28->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar28,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar28,false,false);
      }
    }
  }
  if (bVar36) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Update @ 14dc1dbc0

void __thiscall
Chaos::FClothingSimulationAccessoryMesh::Update
          (FClothingSimulationAccessoryMesh *this,FClothingSimulationSolver *param_1,
          TArrayView<Chaos::TVector<float,3>,int> *param_2,
          TArrayView<Chaos::TVector<float,3>,int> *param_3,int param_4,float param_5)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (FClothingSimulationSolver *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationAccessoryMesh.cpp"
                       ,0xc5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SkinPhysicsMesh(this,param_4,param_5,param_1->LocalSpaceScale,&param_1->LocalSpaceLocation,param_2
                  ,param_3);
  return;
}

