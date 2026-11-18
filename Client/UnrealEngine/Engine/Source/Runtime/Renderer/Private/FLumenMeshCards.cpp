// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FLumenMeshCards @ 144c1e2e0

FLumenMeshCards * __thiscall FLumenMeshCards::FLumenMeshCards(FLumenMeshCards *this)

{
  double dVar1;
  
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->LocalToWorld).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->LocalToWorld).M[0][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->LocalToWorld).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->LocalToWorld).M[0][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->LocalToWorld).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->LocalToWorld).M[1][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->LocalToWorld).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->LocalToWorld).M[1][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->LocalToWorld).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->LocalToWorld).M[2][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->LocalToWorld).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->LocalToWorld).M[2][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->LocalToWorld).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->LocalToWorld).M[3][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->LocalToWorld).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->LocalToWorld).M[3][3] = dVar1;
  (this->LocalToWorldScale).field0_0x0._s_0.X = 1.0;
  (this->LocalToWorldScale).field0_0x0._s_0.Y = 1.0;
  (this->LocalToWorldScale).field0_0x0._s_0.Z = 1.0;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->WorldToLocalRotation).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->WorldToLocalRotation).M[0][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->WorldToLocalRotation).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->WorldToLocalRotation).M[0][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->WorldToLocalRotation).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->WorldToLocalRotation).M[1][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->WorldToLocalRotation).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->WorldToLocalRotation).M[1][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->WorldToLocalRotation).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->WorldToLocalRotation).M[2][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->WorldToLocalRotation).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->WorldToLocalRotation).M[2][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->WorldToLocalRotation).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->WorldToLocalRotation).M[3][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->WorldToLocalRotation).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->WorldToLocalRotation).M[3][3] = dVar1;
  (this->LocalBounds).Min.field0_0x0._s_0.X = -1.0;
  (this->LocalBounds).Min.field0_0x0._s_0.Y = -1.0;
  (this->LocalBounds).Min.field0_0x0._s_0.Z = -1.0;
  (this->LocalBounds).Max.field0_0x0._s_0.X = -1.0;
  (this->LocalBounds).Max.field0_0x0._s_0.Y = -1.0;
  (this->LocalBounds).Max.field0_0x0._s_0.Z = -1.0;
  (this->LocalBounds).IsValid = '\x01';
  this->FirstCardIndex = 0;
  this->NumCards = 0;
  (this->ScenePrimitiveIndices).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  this->PrimitiveGroupIndex = -1;
  this->bFarField = false;
  this->bHeightfield = false;
  this->bMostlyTwoSided = false;
  this->bEmissiveLightSource = false;
  (this->ScenePrimitiveIndices).ArrayNum = 0;
  (this->ScenePrimitiveIndices).ArrayMax = 1;
  return this;
}

// operator= @ 144c1ecb0

FLumenMeshCards * __thiscall
FLumenMeshCards::operator=(FLumenMeshCards *this,FLumenMeshCards *param_1)

{
  ForElementType<int> FVar1;
  double dVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  
  dVar2 = (param_1->LocalToWorld).M[0][1];
  (this->LocalToWorld).M[0][0] = (param_1->LocalToWorld).M[0][0];
  (this->LocalToWorld).M[0][1] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[0][3];
  (this->LocalToWorld).M[0][2] = (param_1->LocalToWorld).M[0][2];
  (this->LocalToWorld).M[0][3] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[1][1];
  (this->LocalToWorld).M[1][0] = (param_1->LocalToWorld).M[1][0];
  (this->LocalToWorld).M[1][1] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[1][3];
  (this->LocalToWorld).M[1][2] = (param_1->LocalToWorld).M[1][2];
  (this->LocalToWorld).M[1][3] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[2][1];
  (this->LocalToWorld).M[2][0] = (param_1->LocalToWorld).M[2][0];
  (this->LocalToWorld).M[2][1] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[2][3];
  (this->LocalToWorld).M[2][2] = (param_1->LocalToWorld).M[2][2];
  (this->LocalToWorld).M[2][3] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[3][1];
  (this->LocalToWorld).M[3][0] = (param_1->LocalToWorld).M[3][0];
  (this->LocalToWorld).M[3][1] = dVar2;
  dVar2 = (param_1->LocalToWorld).M[3][3];
  (this->LocalToWorld).M[3][2] = (param_1->LocalToWorld).M[3][2];
  (this->LocalToWorld).M[3][3] = dVar2;
  *(undefined8 *)&(this->LocalToWorldScale).field0_0x0 =
       *(undefined8 *)&(param_1->LocalToWorldScale).field0_0x0;
  (this->LocalToWorldScale).field0_0x0._s_0.Z = (param_1->LocalToWorldScale).field0_0x0._s_0.Z;
  dVar2 = (param_1->WorldToLocalRotation).M[0][1];
  (this->WorldToLocalRotation).M[0][0] = (param_1->WorldToLocalRotation).M[0][0];
  (this->WorldToLocalRotation).M[0][1] = dVar2;
  dVar2 = (param_1->WorldToLocalRotation).M[0][3];
  (this->WorldToLocalRotation).M[0][2] = (param_1->WorldToLocalRotation).M[0][2];
  (this->WorldToLocalRotation).M[0][3] = dVar2;
  dVar2 = (param_1->WorldToLocalRotation).M[1][1];
  (this->WorldToLocalRotation).M[1][0] = (param_1->WorldToLocalRotation).M[1][0];
  (this->WorldToLocalRotation).M[1][1] = dVar2;
  dVar2 = (param_1->WorldToLocalRotation).M[1][3];
  (this->WorldToLocalRotation).M[1][2] = (param_1->WorldToLocalRotation).M[1][2];
  (this->WorldToLocalRotation).M[1][3] = dVar2;
  dVar2 = (param_1->WorldToLocalRotation).M[2][1];
  (this->WorldToLocalRotation).M[2][0] = (param_1->WorldToLocalRotation).M[2][0];
  (this->WorldToLocalRotation).M[2][1] = dVar2;
  dVar2 = (param_1->WorldToLocalRotation).M[2][3];
  (this->WorldToLocalRotation).M[2][2] = (param_1->WorldToLocalRotation).M[2][2];
  (this->WorldToLocalRotation).M[2][3] = dVar2;
  dVar2 = (param_1->WorldToLocalRotation).M[3][1];
  (this->WorldToLocalRotation).M[3][0] = (param_1->WorldToLocalRotation).M[3][0];
  (this->WorldToLocalRotation).M[3][1] = dVar2;
  dVar2 = (param_1->WorldToLocalRotation).M[3][3];
  (this->WorldToLocalRotation).M[3][2] = (param_1->WorldToLocalRotation).M[3][2];
  (this->WorldToLocalRotation).M[3][3] = dVar2;
  dVar2 = (param_1->LocalBounds).Min.field0_0x0._s_0.Y;
  (this->LocalBounds).Min.field0_0x0._s_0.X = (param_1->LocalBounds).Min.field0_0x0._s_0.X;
  (this->LocalBounds).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->LocalBounds).Max.field0_0x0._s_0.X;
  (this->LocalBounds).Min.field0_0x0._s_0.Z = (param_1->LocalBounds).Min.field0_0x0._s_0.Z;
  (this->LocalBounds).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->LocalBounds).Max.field0_0x0._s_0.Z;
  (this->LocalBounds).Max.field0_0x0._s_0.Y = (param_1->LocalBounds).Max.field0_0x0._s_0.Y;
  (this->LocalBounds).Max.field0_0x0._s_0.Z = dVar2;
  uVar3 = (param_1->LocalBounds).Pad[0];
  uVar4 = (param_1->LocalBounds).Pad[1];
  uVar5 = (param_1->LocalBounds).Pad[2];
  uVar6 = (param_1->LocalBounds).Pad[3];
  uVar7 = (param_1->LocalBounds).Pad[4];
  uVar8 = (param_1->LocalBounds).Pad[5];
  uVar9 = (param_1->LocalBounds).Pad[6];
  (this->LocalBounds).IsValid = (param_1->LocalBounds).IsValid;
  (this->LocalBounds).Pad[0] = uVar3;
  (this->LocalBounds).Pad[1] = uVar4;
  (this->LocalBounds).Pad[2] = uVar5;
  (this->LocalBounds).Pad[3] = uVar6;
  (this->LocalBounds).Pad[4] = uVar7;
  (this->LocalBounds).Pad[5] = uVar8;
  (this->LocalBounds).Pad[6] = uVar9;
  this->PrimitiveGroupIndex = param_1->PrimitiveGroupIndex;
  this->bFarField = param_1->bFarField;
  this->bHeightfield = param_1->bHeightfield;
  this->bMostlyTwoSided = param_1->bMostlyTwoSided;
  this->bEmissiveLightSource = param_1->bEmissiveLightSource;
  this->FirstCardIndex = param_1->FirstCardIndex;
  this->NumCards = param_1->NumCards;
  this->CardLookup[0] = param_1->CardLookup[0];
  this->CardLookup[1] = param_1->CardLookup[1];
  this->CardLookup[2] = param_1->CardLookup[2];
  this->CardLookup[3] = param_1->CardLookup[3];
  this->CardLookup[4] = param_1->CardLookup[4];
  this->CardLookup[5] = param_1->CardLookup[5];
  if (&this->ScenePrimitiveIndices != &param_1->ScenePrimitiveIndices) {
    if ((param_1->ScenePrimitiveIndices).AllocatorInstance.SecondaryData == (ForElementType<int>)0x0
       ) {
      *(undefined4 *)(this->ScenePrimitiveIndices).AllocatorInstance.InlineData =
           *(undefined4 *)(param_1->ScenePrimitiveIndices).AllocatorInstance.InlineData;
    }
    FVar1 = (this->ScenePrimitiveIndices).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->ScenePrimitiveIndices).AllocatorInstance.SecondaryData =
         (param_1->ScenePrimitiveIndices).AllocatorInstance.SecondaryData;
    (param_1->ScenePrimitiveIndices).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    (this->ScenePrimitiveIndices).ArrayNum = (param_1->ScenePrimitiveIndices).ArrayNum;
    (this->ScenePrimitiveIndices).ArrayMax = (param_1->ScenePrimitiveIndices).ArrayMax;
    (param_1->ScenePrimitiveIndices).ArrayNum = 0;
    (param_1->ScenePrimitiveIndices).ArrayMax = 1;
  }
  return this;
}

// Initialize @ 144c51ed0

void __thiscall
FLumenMeshCards::Initialize
          (FLumenMeshCards *this,TMatrix<double> *param_1,int param_2,uint param_3,uint param_4,
          FMeshCardsBuildData *param_5,FLumenPrimitiveGroup *param_6)

{
  double dVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  
  this->PrimitiveGroupIndex = param_2;
  dVar1 = (param_5->Bounds).Min.field0_0x0._s_0.Y;
  (this->LocalBounds).Min.field0_0x0._s_0.X = (param_5->Bounds).Min.field0_0x0._s_0.X;
  (this->LocalBounds).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_5->Bounds).Max.field0_0x0._s_0.X;
  (this->LocalBounds).Min.field0_0x0._s_0.Z = (param_5->Bounds).Min.field0_0x0._s_0.Z;
  (this->LocalBounds).Max.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_5->Bounds).Max.field0_0x0._s_0.Z;
  (this->LocalBounds).Max.field0_0x0._s_0.Y = (param_5->Bounds).Max.field0_0x0._s_0.Y;
  (this->LocalBounds).Max.field0_0x0._s_0.Z = dVar1;
  uVar2 = (param_5->Bounds).Pad[0];
  uVar3 = (param_5->Bounds).Pad[1];
  uVar4 = (param_5->Bounds).Pad[2];
  uVar5 = (param_5->Bounds).Pad[3];
  uVar6 = (param_5->Bounds).Pad[4];
  uVar7 = (param_5->Bounds).Pad[5];
  uVar8 = (param_5->Bounds).Pad[6];
  (this->LocalBounds).IsValid = (param_5->Bounds).IsValid;
  (this->LocalBounds).Pad[0] = uVar2;
  (this->LocalBounds).Pad[1] = uVar3;
  (this->LocalBounds).Pad[2] = uVar4;
  (this->LocalBounds).Pad[3] = uVar5;
  (this->LocalBounds).Pad[4] = uVar6;
  (this->LocalBounds).Pad[5] = uVar7;
  (this->LocalBounds).Pad[6] = uVar8;
  this->bMostlyTwoSided = param_5->bMostlyTwoSided;
  this->NumCards = param_4;
  this->FirstCardIndex = param_3;
  this->bFarField = param_6->bFarField;
  this->bHeightfield = param_6->bHeightfield;
  this->bEmissiveLightSource = param_6->bEmissiveLightSource;
  SetTransform(this,param_1);
  return;
}

// SetTransform @ 144c5dce0

void __thiscall FLumenMeshCards::SetTransform(FLumenMeshCards *this,TMatrix<double> *param_1)

{
  TMatrix<double> *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  TVector<double> *pTVar20;
  undefined4 uVar21;
  TVector<double> local_c8 [8];
  
  dVar1 = param_1->M[0][1];
  (this->LocalToWorld).M[0][0] = param_1->M[0][0];
  (this->LocalToWorld).M[0][1] = dVar1;
  dVar1 = param_1->M[0][3];
  (this->LocalToWorld).M[0][2] = param_1->M[0][2];
  (this->LocalToWorld).M[0][3] = dVar1;
  dVar1 = param_1->M[1][1];
  (this->LocalToWorld).M[1][0] = param_1->M[1][0];
  (this->LocalToWorld).M[1][1] = dVar1;
  dVar5 = __real_3e45798ee0000000;
  dVar1 = param_1->M[1][3];
  (this->LocalToWorld).M[1][2] = param_1->M[1][2];
  (this->LocalToWorld).M[1][3] = dVar1;
  dVar1 = param_1->M[2][1];
  (this->LocalToWorld).M[2][0] = param_1->M[2][0];
  (this->LocalToWorld).M[2][1] = dVar1;
  dVar1 = param_1->M[2][3];
  (this->LocalToWorld).M[2][2] = param_1->M[2][2];
  (this->LocalToWorld).M[2][3] = dVar1;
  dVar1 = param_1->M[3][1];
  (this->LocalToWorld).M[3][0] = param_1->M[3][0];
  (this->LocalToWorld).M[3][1] = dVar1;
  dVar1 = param_1->M[3][3];
  (this->LocalToWorld).M[3][2] = param_1->M[3][2];
  (this->LocalToWorld).M[3][3] = dVar1;
  pTVar20 = UE::Math::TMatrix<double>::GetScaleVector(&this->LocalToWorld,local_c8,dVar5);
  this_00 = &this->WorldToLocalRotation;
  dVar1 = (pTVar20->field0_0x0)._s_0.Y;
  dVar2 = (pTVar20->field0_0x0)._s_0.Z;
  (this->LocalToWorldScale).field0_0x0._s_0.X = (float)(pTVar20->field0_0x0)._s_0.X;
  (this->LocalToWorldScale).field0_0x0._s_0.Y = (float)dVar1;
  (this->LocalToWorldScale).field0_0x0._s_0.Z = (float)dVar2;
  dVar1 = (this->LocalToWorld).M[0][1];
  dVar2 = (this->LocalToWorld).M[0][2];
  dVar3 = (this->LocalToWorld).M[0][3];
  this_00->M[0][0] = (this->LocalToWorld).M[0][0];
  (this->WorldToLocalRotation).M[0][1] = dVar1;
  dVar1 = (this->LocalToWorld).M[1][0];
  dVar4 = (this->LocalToWorld).M[1][1];
  (this->WorldToLocalRotation).M[0][2] = dVar2;
  (this->WorldToLocalRotation).M[0][3] = dVar3;
  dVar2 = (this->LocalToWorld).M[1][2];
  dVar3 = (this->LocalToWorld).M[1][3];
  (this->WorldToLocalRotation).M[1][0] = dVar1;
  (this->WorldToLocalRotation).M[1][1] = dVar4;
  dVar1 = (this->LocalToWorld).M[2][0];
  dVar4 = (this->LocalToWorld).M[2][1];
  (this->WorldToLocalRotation).M[1][2] = dVar2;
  (this->WorldToLocalRotation).M[1][3] = dVar3;
  dVar2 = (this->LocalToWorld).M[2][2];
  dVar3 = (this->LocalToWorld).M[2][3];
  (this->WorldToLocalRotation).M[2][0] = dVar1;
  (this->WorldToLocalRotation).M[2][1] = dVar4;
  dVar1 = (this->LocalToWorld).M[3][0];
  dVar4 = (this->LocalToWorld).M[3][1];
  (this->WorldToLocalRotation).M[2][2] = dVar2;
  (this->WorldToLocalRotation).M[2][3] = dVar3;
  dVar2 = (this->LocalToWorld).M[3][2];
  dVar3 = (this->LocalToWorld).M[3][3];
  (this->WorldToLocalRotation).M[3][0] = dVar1;
  (this->WorldToLocalRotation).M[3][1] = dVar4;
  (this->WorldToLocalRotation).M[3][2] = dVar2;
  (this->WorldToLocalRotation).M[3][3] = dVar3;
  UE::Math::TMatrix<double>::RemoveScaling(this_00,dVar5);
  (this->WorldToLocalRotation).M[3][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar21 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uVar19 = (ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20;
  (this->WorldToLocalRotation).M[3][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorldToLocalRotation).M[3][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar1 = (this->WorldToLocalRotation).M[1][0];
  dVar2 = (this->WorldToLocalRotation).M[0][1];
  dVar3 = (this->WorldToLocalRotation).M[1][1];
  dVar4 = (this->WorldToLocalRotation).M[2][1];
  dVar5 = (this->WorldToLocalRotation).M[3][1];
  uVar11 = *(undefined4 *)((this->WorldToLocalRotation).M[0] + 2);
  uVar12 = *(undefined4 *)((longlong)(this->WorldToLocalRotation).M[0] + 0x14);
  dVar6 = (this->WorldToLocalRotation).M[1][2];
  uVar13 = *(undefined4 *)((this->WorldToLocalRotation).M[2] + 2);
  uVar14 = *(undefined4 *)((longlong)(this->WorldToLocalRotation).M[2] + 0x14);
  dVar7 = (this->WorldToLocalRotation).M[3][2];
  uVar15 = *(undefined4 *)((this->WorldToLocalRotation).M[0] + 3);
  uVar16 = *(undefined4 *)((longlong)(this->WorldToLocalRotation).M[0] + 0x1c);
  dVar8 = (this->WorldToLocalRotation).M[1][3];
  uVar17 = *(undefined4 *)((this->WorldToLocalRotation).M[2] + 3);
  uVar18 = *(undefined4 *)((longlong)(this->WorldToLocalRotation).M[2] + 0x1c);
  dVar9 = (this->WorldToLocalRotation).M[3][3];
  uVar10 = *(undefined4 *)((longlong)(this->WorldToLocalRotation).M[0] + 4);
  *(undefined4 *)this_00->M[0] = *(undefined4 *)this_00->M[0];
  *(undefined4 *)((longlong)(this->WorldToLocalRotation).M[0] + 4) = uVar10;
  *(int *)((this->WorldToLocalRotation).M[0] + 1) = SUB84(dVar1,0);
  *(int *)((longlong)(this->WorldToLocalRotation).M[0] + 0xc) = (int)((ulonglong)dVar1 >> 0x20);
  uVar10 = *(undefined4 *)((longlong)(this->WorldToLocalRotation).M[2] + 4);
  *(undefined4 *)((this->WorldToLocalRotation).M[0] + 2) =
       *(undefined4 *)(this->WorldToLocalRotation).M[2];
  *(undefined4 *)((longlong)(this->WorldToLocalRotation).M[0] + 0x14) = uVar10;
  *(undefined4 *)((this->WorldToLocalRotation).M[0] + 3) = uVar21;
  *(int *)((longlong)(this->WorldToLocalRotation).M[0] + 0x1c) = (int)uVar19;
  (this->WorldToLocalRotation).M[1][0] = dVar2;
  (this->WorldToLocalRotation).M[1][1] = dVar3;
  (this->WorldToLocalRotation).M[1][2] = dVar4;
  (this->WorldToLocalRotation).M[1][3] = dVar5;
  *(undefined4 *)(this->WorldToLocalRotation).M[2] = uVar11;
  *(undefined4 *)((longlong)(this->WorldToLocalRotation).M[2] + 4) = uVar12;
  *(int *)((this->WorldToLocalRotation).M[2] + 1) = SUB84(dVar6,0);
  *(int *)((longlong)(this->WorldToLocalRotation).M[2] + 0xc) = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined4 *)((this->WorldToLocalRotation).M[2] + 2) = uVar13;
  *(undefined4 *)((longlong)(this->WorldToLocalRotation).M[2] + 0x14) = uVar14;
  *(int *)((this->WorldToLocalRotation).M[2] + 3) = SUB84(dVar7,0);
  *(int *)((longlong)(this->WorldToLocalRotation).M[2] + 0x1c) = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined4 *)(this->WorldToLocalRotation).M[3] = uVar15;
  *(undefined4 *)((longlong)(this->WorldToLocalRotation).M[3] + 4) = uVar16;
  *(int *)((this->WorldToLocalRotation).M[3] + 1) = SUB84(dVar8,0);
  *(int *)((longlong)(this->WorldToLocalRotation).M[3] + 0xc) = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined4 *)((this->WorldToLocalRotation).M[3] + 2) = uVar17;
  *(undefined4 *)((longlong)(this->WorldToLocalRotation).M[3] + 0x14) = uVar18;
  *(int *)((this->WorldToLocalRotation).M[3] + 3) = SUB84(dVar9,0);
  *(int *)((longlong)(this->WorldToLocalRotation).M[3] + 0x1c) = (int)((ulonglong)dVar9 >> 0x20);
  return;
}

// UpdateLookup @ 144c65c80

void __thiscall
FLumenMeshCards::UpdateLookup(FLumenMeshCards *this,TSparseSpanArray<FLumenCard> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  this->CardLookup[0] = 0;
  this->CardLookup[1] = 0;
  this->CardLookup[2] = 0;
  this->CardLookup[3] = 0;
  this->CardLookup[4] = 0;
  this->CardLookup[5] = 0;
  if (this->NumCards != 0) {
    do {
      uVar5 = this->FirstCardIndex + uVar6;
      uVar3 = 0;
      if ((int)uVar5 < (param_1->Elements).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
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
      bVar4 = (byte)uVar6;
      uVar6 = uVar6 + 1;
      this->CardLookup
      [(byte)(param_1->Elements).AllocatorInstance.Data[(longlong)(int)uVar5 * 400 + 0x171]] =
           this->CardLookup
           [(byte)(param_1->Elements).AllocatorInstance.Data[(longlong)(int)uVar5 * 400 + 0x171]] |
           1 << (bVar4 & 0x1f);
    } while (uVar6 < this->NumCards);
  }
  return;
}

