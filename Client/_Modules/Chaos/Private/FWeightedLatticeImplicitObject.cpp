// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 15

// FWeightedLatticeImplicitObject @ 143eb1360

FWeightedLatticeImplicitObject * __thiscall
Chaos::FWeightedLatticeImplicitObject::FWeightedLatticeImplicitObject
          (FWeightedLatticeImplicitObject *this,FWeightedLatticeImplicitObject *param_1)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  uchar uVar16;
  
  uVar16 = FImplicitObject::GetType((FImplicitObject *)param_1);
  FImplicitObject::FImplicitObject((FImplicitObject *)this,2,uVar16);
  this->_padding_ = (longlong)&___7FWeightedLatticeImplicitObject_Chaos__6B_;
  pTVar2 = &this->UsedBones;
  uVar15 = *(undefined8 *)&(param_1->Grid).field_0x8;
  piVar1 = &(this->UsedBones).ArrayMax;
  *(undefined8 *)&this->Grid = *(undefined8 *)&param_1->Grid;
  *(undefined8 *)&(this->Grid).field_0x8 = uVar15;
  uVar15 = *(undefined8 *)&(param_1->Grid).field_0x18;
  *(undefined8 *)&(this->Grid).field_0x10 = *(undefined8 *)&(param_1->Grid).field_0x10;
  *(undefined8 *)&(this->Grid).field_0x18 = uVar15;
  uVar15 = *(undefined8 *)&(param_1->Grid).field_0x28;
  *(undefined8 *)&(this->Grid).field_0x20 = *(undefined8 *)&(param_1->Grid).field_0x20;
  *(undefined8 *)&(this->Grid).field_0x28 = uVar15;
  uVar15 = *(undefined8 *)&(param_1->Grid).field_0x38;
  *(undefined8 *)&(this->Grid).field_0x30 = *(undefined8 *)&(param_1->Grid).field_0x30;
  *(undefined8 *)&(this->Grid).field_0x38 = uVar15;
  uVar15 = *(undefined8 *)&(param_1->Grid).field_0x48;
  *(undefined8 *)&(this->Grid).field_0x40 = *(undefined8 *)&(param_1->Grid).field_0x40;
  *(undefined8 *)&(this->Grid).field_0x48 = uVar15;
  *(undefined8 *)&(this->Grid).field_0x50 = *(undefined8 *)&(param_1->Grid).field_0x50;
  *(undefined8 *)&(this->BoneData).field_0x10 = 0;
  *(undefined8 *)&(this->BoneData).field_0x18 = 0;
  *(undefined8 *)&this->BoneData = 0;
  *(undefined4 *)&(this->BoneData).field_0x8 = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->UsedBones).ArrayNum;
  pFVar6 = (param_1->UsedBones).AllocatorInstance.Data;
  (this->UsedBones).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 3);
  }
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[3];
  pTVar3 = &this->ReferenceRelativeTransforms;
  piVar1 = &(this->ReferenceRelativeTransforms).ArrayMax;
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ReferenceRootTransform).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar8,0);
  auVar10._0_8_ = (double)fVar7;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  *(undefined1 (*) [16])(this->ReferenceRootTransform).Rotation.ZW.m128d_f64 = auVar10;
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ReferenceRootTransform).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar8,0);
  auVar12._0_8_ = (double)fVar7;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  *(undefined1 (*) [16])(this->ReferenceRootTransform).Translation.ZW.m128d_f64 = auVar12;
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ReferenceRootTransform).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar8,0);
  auVar14._0_8_ = (double)fVar7;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  *(undefined1 (*) [16])(this->ReferenceRootTransform).Scale3D.ZW.m128d_f64 = auVar14;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->ReferenceRelativeTransforms).ArrayNum;
  pFVar6 = (param_1->ReferenceRelativeTransforms).AllocatorInstance.Data;
  (this->ReferenceRelativeTransforms).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x60);
  }
  *(undefined8 *)&(this->EmptyCells).field_0x10 = 0;
  pTVar4 = &this->SolverBoneIndices;
  *(undefined8 *)&(this->EmptyCells).field_0x18 = 0;
  piVar1 = &(this->SolverBoneIndices).ArrayMax;
  *(undefined8 *)&this->EmptyCells = 0;
  *(undefined4 *)&(this->EmptyCells).field_0x8 = 0;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->SolverBoneIndices).ArrayNum;
  pFVar6 = (param_1->SolverBoneIndices).AllocatorInstance.Data;
  (this->SolverBoneIndices).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  uVar15 = *(undefined8 *)&(param_1->LocalBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(this->LocalBoundingBox).MMin = *(undefined8 *)&(param_1->LocalBoundingBox).MMin;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x8 = uVar15;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x10 =
       *(undefined8 *)&(param_1->LocalBoundingBox).MMin.field_0x10;
  uVar15 = *(undefined8 *)&(param_1->LocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(this->LocalBoundingBox).MMax = *(undefined8 *)&(param_1->LocalBoundingBox).MMax;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x8 = uVar15;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x10 =
       *(undefined8 *)&(param_1->LocalBoundingBox).MMax.field_0x10;
  *(undefined8 *)&(this->DeformedPoints).field_0x10 = 0;
  *(undefined8 *)&(this->DeformedPoints).field_0x18 = 0;
  *(undefined8 *)&this->DeformedPoints = 0;
  *(undefined4 *)&(this->DeformedPoints).field_0x8 = 0;
  (this->Spatial)._padding_ = 0;
  (this->Spatial)._padding_ = 0;
  (this->Spatial)._padding_ = 0;
  (this->Spatial)._padding_ = 0;
  *(undefined4 *)&(this->Spatial)._padding_ = 0;
  *(undefined8 *)&(this->Spatial).UsedLods = 0;
  *(undefined8 *)&(this->Spatial).UsedLods.field_0x8 = 0;
  *(undefined8 *)&(this->Spatial).UsedLods.field_0x20 = 0;
  *(undefined4 *)&(this->Spatial).UsedLods.field_0x28 = 0;
  *(undefined4 *)&(this->Spatial).UsedLods.field_0x2c = 0x80;
  *(undefined4 *)&(this->Spatial).UsedLods.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Spatial).UsedLods.field_0x34 = 0;
  *(undefined8 *)&(this->Spatial).UsedLods.field_0x40 = 0;
  *(undefined4 *)&(this->Spatial).UsedLods.field_0x48 = 0;
  (this->Spatial).Bounds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Spatial).Bounds.ArrayNum = 0;
  (this->Spatial).Bounds.ArrayMax = 0;
  this->bSpatialDirty = true;
  *(undefined8 *)&this->BoneData = *(undefined8 *)&param_1->BoneData;
  *(undefined4 *)&(this->BoneData).field_0x8 = *(undefined4 *)&(param_1->BoneData).field_0x8;
  TArray<Chaos::FWeightedLatticeInfluenceData,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Chaos::FWeightedLatticeInfluenceData,TSizedDefaultAllocator<32>_> *)
             &(this->BoneData).field_0x10,
             (TArray<Chaos::FWeightedLatticeInfluenceData,TSizedDefaultAllocator<32>_> *)
             &(param_1->BoneData).field_0x10);
  *(undefined8 *)&this->DeformedPoints = *(undefined8 *)&param_1->DeformedPoints;
  *(undefined4 *)&(this->DeformedPoints).field_0x8 =
       *(undefined4 *)&(param_1->DeformedPoints).field_0x8;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)
             &(this->DeformedPoints).field_0x10,
             (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)
             &(param_1->DeformedPoints).field_0x10);
  *(undefined8 *)&this->EmptyCells = *(undefined8 *)&param_1->EmptyCells;
  *(undefined4 *)&(this->EmptyCells).field_0x8 = *(undefined4 *)&(param_1->EmptyCells).field_0x8;
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<bool,TSizedDefaultAllocator<32>_> *)&(this->EmptyCells).field_0x10,
             (TArray<bool,TSizedDefaultAllocator<32>_> *)&(param_1->EmptyCells).field_0x10);
  if (param_1->bSpatialDirty == false) {
    UpdateSpatialHierarchy(this,0.0);
  }
  this->bSpatialDirty = param_1->bSpatialDirty;
  return this;
}

// FWeightedLatticeImplicitObject @ 143eb1730

FWeightedLatticeImplicitObject * __thiscall
Chaos::FWeightedLatticeImplicitObject::FWeightedLatticeImplicitObject
          (FWeightedLatticeImplicitObject *this,int param_1,uchar param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,param_1,param_2 | 0x20);
  this->_padding_ = (longlong)&___7FWeightedLatticeImplicitObject_Chaos__6B_;
  *(undefined8 *)&(this->BoneData).field_0x18 = 0;
  *(undefined8 *)&(this->BoneData).field_0x10 = 0;
  *(undefined8 *)&this->BoneData = 0;
  *(undefined4 *)&(this->BoneData).field_0x8 = 0;
  (this->UsedBones).ArrayNum = 0;
  (this->UsedBones).ArrayMax = 0;
  (this->UsedBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ReferenceRootTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ReferenceRootTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->ReferenceRootTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ReferenceRootTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ReferenceRootTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ReferenceRootTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->ReferenceRootTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ReferenceRootTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ReferenceRootTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ReferenceRootTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->ReferenceRootTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->ReferenceRootTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->ReferenceRelativeTransforms).ArrayNum = 0;
  (this->ReferenceRelativeTransforms).ArrayMax = 0;
  *(undefined8 *)&(this->EmptyCells).field_0x18 = 0;
  (this->ReferenceRelativeTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->EmptyCells).field_0x10 = 0;
  *(undefined8 *)&this->EmptyCells = 0;
  *(undefined4 *)&(this->EmptyCells).field_0x8 = 0;
  (this->SolverBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SolverBoneIndices).ArrayNum = 0;
  (this->SolverBoneIndices).ArrayMax = 0;
  *(undefined8 *)&(this->DeformedPoints).field_0x10 = 0;
  *(undefined8 *)&(this->DeformedPoints).field_0x18 = 0;
  *(undefined8 *)&(this->LocalBoundingBox).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x10 = 0xffefffffffffffff;
  *(undefined8 *)&this->DeformedPoints = 0;
  *(undefined4 *)&(this->DeformedPoints).field_0x8 = 0;
  (this->Spatial)._padding_ = 0;
  (this->Spatial)._padding_ = 0;
  (this->Spatial)._padding_ = 0;
  (this->Spatial)._padding_ = 0;
  *(undefined4 *)&(this->Spatial)._padding_ = 0;
  *(undefined8 *)&(this->Spatial).UsedLods = 0;
  *(undefined8 *)&(this->Spatial).UsedLods.field_0x8 = 0;
  *(undefined8 *)&(this->Spatial).UsedLods.field_0x20 = 0;
  *(undefined4 *)&(this->Spatial).UsedLods.field_0x28 = 0;
  *(undefined4 *)&(this->Spatial).UsedLods.field_0x2c = 0x80;
  *(undefined4 *)&(this->Spatial).UsedLods.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Spatial).UsedLods.field_0x34 = 0;
  *(undefined8 *)&(this->Spatial).UsedLods.field_0x40 = 0;
  *(undefined4 *)&(this->Spatial).UsedLods.field_0x48 = 0;
  (this->Spatial).Bounds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Spatial).Bounds.ArrayNum = 0;
  (this->Spatial).Bounds.ArrayMax = 0;
  this->bSpatialDirty = true;
  return this;
}

// FWeightedLatticeImplicitObject @ 143eb18f0

FWeightedLatticeImplicitObject * __thiscall
Chaos::FWeightedLatticeImplicitObject::FWeightedLatticeImplicitObject
          (FWeightedLatticeImplicitObject *this,FWeightedLatticeImplicitObject *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  uchar uVar10;
  
  uVar10 = FImplicitObject::GetType((FImplicitObject *)param_1);
  FImplicitObject::FImplicitObject((FImplicitObject *)this,2,uVar10);
  this->_padding_ = (longlong)&___7FWeightedLatticeImplicitObject_Chaos__6B_;
  uVar9 = *(undefined8 *)&(param_1->Grid).field_0x8;
  *(undefined8 *)&this->Grid = *(undefined8 *)&param_1->Grid;
  *(undefined8 *)&(this->Grid).field_0x8 = uVar9;
  uVar9 = *(undefined8 *)&(param_1->Grid).field_0x18;
  *(undefined8 *)&(this->Grid).field_0x10 = *(undefined8 *)&(param_1->Grid).field_0x10;
  *(undefined8 *)&(this->Grid).field_0x18 = uVar9;
  uVar9 = *(undefined8 *)&(param_1->Grid).field_0x28;
  *(undefined8 *)&(this->Grid).field_0x20 = *(undefined8 *)&(param_1->Grid).field_0x20;
  *(undefined8 *)&(this->Grid).field_0x28 = uVar9;
  uVar9 = *(undefined8 *)&(param_1->Grid).field_0x38;
  *(undefined8 *)&(this->Grid).field_0x30 = *(undefined8 *)&(param_1->Grid).field_0x30;
  *(undefined8 *)&(this->Grid).field_0x38 = uVar9;
  uVar9 = *(undefined8 *)&(param_1->Grid).field_0x48;
  *(undefined8 *)&(this->Grid).field_0x40 = *(undefined8 *)&(param_1->Grid).field_0x40;
  *(undefined8 *)&(this->Grid).field_0x48 = uVar9;
  *(undefined8 *)&(this->Grid).field_0x50 = *(undefined8 *)&(param_1->Grid).field_0x50;
  *(undefined8 *)&this->BoneData = *(undefined8 *)&param_1->BoneData;
  *(undefined4 *)&(this->BoneData).field_0x8 = *(undefined4 *)&(param_1->BoneData).field_0x8;
  *(undefined8 *)&(this->BoneData).field_0x10 = 0;
  *(undefined8 *)&(this->BoneData).field_0x10 = *(undefined8 *)&(param_1->BoneData).field_0x10;
  *(undefined8 *)&(param_1->BoneData).field_0x10 = 0;
  *(undefined4 *)&(this->BoneData).field_0x18 = *(undefined4 *)&(param_1->BoneData).field_0x18;
  *(undefined4 *)&(this->BoneData).field_0x1c = *(undefined4 *)&(param_1->BoneData).field_0x1c;
  *(undefined8 *)&(param_1->BoneData).field_0x18 = 0;
  (this->UsedBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedBones).AllocatorInstance.Data = (param_1->UsedBones).AllocatorInstance.Data;
  (param_1->UsedBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedBones).ArrayNum = (param_1->UsedBones).ArrayNum;
  (this->UsedBones).ArrayMax = (param_1->UsedBones).ArrayMax;
  (param_1->UsedBones).ArrayNum = 0;
  (param_1->UsedBones).ArrayMax = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ReferenceRootTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ReferenceRootTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ReferenceRootTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ReferenceRootTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ReferenceRootTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ReferenceRootTransform).Scale3D.ZW.m128d_f64 = auVar8;
  (this->ReferenceRelativeTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferenceRelativeTransforms).AllocatorInstance.Data =
       (param_1->ReferenceRelativeTransforms).AllocatorInstance.Data;
  (param_1->ReferenceRelativeTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferenceRelativeTransforms).ArrayNum = (param_1->ReferenceRelativeTransforms).ArrayNum;
  (this->ReferenceRelativeTransforms).ArrayMax = (param_1->ReferenceRelativeTransforms).ArrayMax;
  (param_1->ReferenceRelativeTransforms).ArrayNum = 0;
  (param_1->ReferenceRelativeTransforms).ArrayMax = 0;
  *(undefined8 *)&this->EmptyCells = *(undefined8 *)&param_1->EmptyCells;
  *(undefined4 *)&(this->EmptyCells).field_0x8 = *(undefined4 *)&(param_1->EmptyCells).field_0x8;
  *(undefined8 *)&(this->EmptyCells).field_0x10 = 0;
  *(undefined8 *)&(this->EmptyCells).field_0x10 = *(undefined8 *)&(param_1->EmptyCells).field_0x10;
  *(undefined8 *)&(param_1->EmptyCells).field_0x10 = 0;
  *(undefined4 *)&(this->EmptyCells).field_0x18 = *(undefined4 *)&(param_1->EmptyCells).field_0x18;
  *(undefined4 *)&(this->EmptyCells).field_0x1c = *(undefined4 *)&(param_1->EmptyCells).field_0x1c;
  *(undefined8 *)&(param_1->EmptyCells).field_0x18 = 0;
  (this->SolverBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SolverBoneIndices).ArrayNum = 0;
  (this->SolverBoneIndices).ArrayMax = 0;
  uVar9 = *(undefined8 *)&(param_1->LocalBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(this->LocalBoundingBox).MMin = *(undefined8 *)&(param_1->LocalBoundingBox).MMin;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x8 = uVar9;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x10 =
       *(undefined8 *)&(param_1->LocalBoundingBox).MMin.field_0x10;
  uVar9 = *(undefined8 *)&(param_1->LocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(this->LocalBoundingBox).MMax = *(undefined8 *)&(param_1->LocalBoundingBox).MMax;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x8 = uVar9;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x10 =
       *(undefined8 *)&(param_1->LocalBoundingBox).MMax.field_0x10;
  *(undefined8 *)&this->DeformedPoints = *(undefined8 *)&param_1->DeformedPoints;
  *(undefined4 *)&(this->DeformedPoints).field_0x8 =
       *(undefined4 *)&(param_1->DeformedPoints).field_0x8;
  *(undefined8 *)&(this->DeformedPoints).field_0x10 = 0;
  *(undefined8 *)&(this->DeformedPoints).field_0x10 =
       *(undefined8 *)&(param_1->DeformedPoints).field_0x10;
  *(undefined8 *)&(param_1->DeformedPoints).field_0x10 = 0;
  *(undefined4 *)&(this->DeformedPoints).field_0x18 =
       *(undefined4 *)&(param_1->DeformedPoints).field_0x18;
  *(undefined4 *)&(this->DeformedPoints).field_0x1c =
       *(undefined4 *)&(param_1->DeformedPoints).field_0x1c;
  *(undefined8 *)&(param_1->DeformedPoints).field_0x18 = 0;
  (this->Spatial)._padding_ = 0;
  (this->Spatial)._padding_ = 0;
  (this->Spatial)._padding_ = 0;
  (this->Spatial)._padding_ = 0;
  *(undefined4 *)&(this->Spatial)._padding_ = 0;
  *(undefined8 *)&(this->Spatial).UsedLods = 0;
  *(undefined8 *)&(this->Spatial).UsedLods.field_0x8 = 0;
  *(undefined8 *)&(this->Spatial).UsedLods.field_0x20 = 0;
  *(undefined4 *)&(this->Spatial).UsedLods.field_0x28 = 0;
  *(undefined4 *)&(this->Spatial).UsedLods.field_0x2c = 0x80;
  *(undefined4 *)&(this->Spatial).UsedLods.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Spatial).UsedLods.field_0x34 = 0;
  *(undefined8 *)&(this->Spatial).UsedLods.field_0x40 = 0;
  *(undefined4 *)&(this->Spatial).UsedLods.field_0x48 = 0;
  (this->Spatial).Bounds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Spatial).Bounds.ArrayNum = 0;
  (this->Spatial).Bounds.ArrayMax = 0;
  this->bSpatialDirty = true;
  return this;
}

// FWeightedLatticeImplicitObject @ 143eb1c00

FWeightedLatticeImplicitObject * __thiscall
Chaos::FWeightedLatticeImplicitObject::FWeightedLatticeImplicitObject
          (FWeightedLatticeImplicitObject *this,int param_1,uchar param_2,
          TUniformGrid<double,3> *param_3,TArrayND<Chaos::FWeightedLatticeInfluenceData,3> *param_4,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_5,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_6)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,param_1,param_2 | 0x20);
  this->_padding_ = (longlong)&___7FWeightedLatticeImplicitObject_Chaos__6B_;
  uVar9 = *(undefined8 *)&param_3->field_0x8;
  *(undefined8 *)&this->Grid = *(undefined8 *)param_3;
  *(undefined8 *)&(this->Grid).field_0x8 = uVar9;
  uVar9 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->Grid).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->Grid).field_0x18 = uVar9;
  uVar9 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&(this->Grid).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  *(undefined8 *)&(this->Grid).field_0x28 = uVar9;
  uVar9 = *(undefined8 *)&param_3->field_0x38;
  *(undefined8 *)&(this->Grid).field_0x30 = *(undefined8 *)&param_3->field_0x30;
  *(undefined8 *)&(this->Grid).field_0x38 = uVar9;
  uVar9 = *(undefined8 *)&param_3->field_0x48;
  *(undefined8 *)&(this->Grid).field_0x40 = *(undefined8 *)&param_3->field_0x40;
  *(undefined8 *)&(this->Grid).field_0x48 = uVar9;
  *(undefined8 *)&(this->Grid).field_0x50 = *(undefined8 *)&param_3->field_0x50;
  *(undefined8 *)&this->BoneData = *(undefined8 *)param_4;
  *(undefined4 *)&(this->BoneData).field_0x8 = *(undefined4 *)&param_4->field_0x8;
  *(undefined8 *)&(this->BoneData).field_0x10 = 0;
  *(undefined8 *)&(this->BoneData).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&param_4->field_0x10 = 0;
  *(undefined4 *)&(this->BoneData).field_0x18 = *(undefined4 *)&param_4->field_0x18;
  *(undefined4 *)&(this->BoneData).field_0x1c = *(undefined4 *)&param_4->field_0x1c;
  *(undefined8 *)&param_4->field_0x18 = 0;
  (this->UsedBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedBones).AllocatorInstance.Data = (param_5->AllocatorInstance).Data;
  (param_5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->UsedBones).ArrayNum = param_5->ArrayNum;
  (this->UsedBones).ArrayMax = param_5->ArrayMax;
  param_5->ArrayNum = 0;
  param_5->ArrayMax = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ReferenceRootTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ReferenceRootTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ReferenceRootTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ReferenceRootTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ReferenceRootTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ReferenceRootTransform).Scale3D.ZW.m128d_f64 = auVar8;
  (this->ReferenceRelativeTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferenceRelativeTransforms).AllocatorInstance.Data = (param_6->AllocatorInstance).Data;
  (param_6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ReferenceRelativeTransforms).ArrayNum = param_6->ArrayNum;
  (this->ReferenceRelativeTransforms).ArrayMax = param_6->ArrayMax;
  param_6->ArrayNum = 0;
  param_6->ArrayMax = 0;
  *(undefined8 *)&(this->EmptyCells).field_0x18 = 0;
  *(undefined8 *)&(this->EmptyCells).field_0x10 = 0;
  *(undefined8 *)&this->EmptyCells = 0;
  *(undefined4 *)&(this->EmptyCells).field_0x8 = 0;
  (this->SolverBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SolverBoneIndices).ArrayNum = 0;
  (this->SolverBoneIndices).ArrayMax = 0;
  *(undefined8 *)&(this->LocalBoundingBox).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->DeformedPoints).field_0x10 = 0;
  *(undefined8 *)&(this->DeformedPoints).field_0x18 = 0;
  *(undefined8 *)&(this->LocalBoundingBox).MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x10 = 0xffefffffffffffff;
  *(undefined8 *)&this->DeformedPoints = 0;
  *(undefined4 *)&(this->DeformedPoints).field_0x8 = 0;
  (this->Spatial)._padding_ = 0;
  (this->Spatial)._padding_ = 0;
  (this->Spatial)._padding_ = 0;
  (this->Spatial)._padding_ = 0;
  *(undefined4 *)&(this->Spatial)._padding_ = 0;
  *(undefined8 *)&(this->Spatial).UsedLods = 0;
  *(undefined8 *)&(this->Spatial).UsedLods.field_0x8 = 0;
  *(undefined8 *)&(this->Spatial).UsedLods.field_0x20 = 0;
  *(undefined4 *)&(this->Spatial).UsedLods.field_0x28 = 0;
  *(undefined4 *)&(this->Spatial).UsedLods.field_0x2c = 0x80;
  *(undefined4 *)&(this->Spatial).UsedLods.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Spatial).UsedLods.field_0x34 = 0;
  *(undefined8 *)&(this->Spatial).UsedLods.field_0x40 = 0;
  *(undefined4 *)&(this->Spatial).UsedLods.field_0x48 = 0;
  (this->Spatial).Bounds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Spatial).Bounds.ArrayNum = 0;
  (this->Spatial).Bounds.ArrayMax = 0;
  this->bSpatialDirty = true;
  SetEmptyCells(this);
  InitializeDeformedPoints(this);
  this->bSpatialDirty = true;
  return this;
}

// ~FWeightedLatticeImplicitObject @ 143eb21b0

void __thiscall
Chaos::FWeightedLatticeImplicitObject::~FWeightedLatticeImplicitObject
          (FWeightedLatticeImplicitObject *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->Spatial).Bounds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->Spatial).UsedLods.field_0x48 = 0;
  pvVar2 = *(void **)&(this->Spatial).UsedLods.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Spatial).UsedLods);
  pvVar2 = (void *)(this->Spatial)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->Spatial)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->DeformedPoints).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->SolverBoneIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->EmptyCells).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->ReferenceRelativeTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UsedBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->BoneData).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)this);
  return;
}

// BoundingBox @ 143eb7d70

TAABB<double,3> * __thiscall
Chaos::FWeightedLatticeImplicitObject::BoundingBox
          (FWeightedLatticeImplicitObject *this,TAABB<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x8;
  uVar1 = *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&(this->LocalBoundingBox).MMin;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&(this->LocalBoundingBox).MMax;
  uVar3 = *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMax = uVar2;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar3;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = uVar1;
  return __return_storage_ptr__;
}

// DeformPoints @ 143ebabe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FWeightedLatticeImplicitObject::DeformPoints
          (FWeightedLatticeImplicitObject *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ushort uVar7;
  code *pcVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  uint uVar30;
  int iVar31;
  ushort *puVar32;
  int iVar33;
  ulonglong uVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  undefined4 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auStack_228 [32];
  ulonglong local_208;
  longlong local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  int local_1e0;
  FScriptContainerElement *local_1d8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_1d0;
  undefined4 local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  FWeightedLatticeImplicitObject *local_198;
  undefined1 local_188 [16];
  undefined8 local_140;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d0.ArrayNum = 0;
  local_1d0.ArrayMax = 0;
  local_198 = this;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_1d0,param_1->ArrayNum,Default);
  uVar27 = 0;
  if (0 < param_1->ArrayNum) {
    lVar26 = 0;
    do {
      iVar25 = (this->ReferenceRelativeTransforms).ArrayNum;
      uVar30 = ~uVar27 >> 0x1f;
      uVar28 = 0;
      if ((int)uVar27 < iVar25) {
        uVar28 = uVar30;
      }
      if (uVar28 == 0) {
        local_208 = (ulonglong)(int)uVar27;
        local_200 = (longlong)iVar25;
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar21) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      local_1d8 = (this->ReferenceRelativeTransforms).AllocatorInstance.Data;
      uVar34 = (ulonglong)(int)uVar27;
      uVar28 = 0;
      if ((int)uVar27 < param_1->ArrayNum) {
        uVar28 = uVar30;
      }
      if ((uVar28 == 0) &&
         (local_208 = uVar34, local_200 = (longlong)param_1->ArrayNum,
         bVar21 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_138.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_138.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_138.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_138.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_138.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_138.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_138.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_138.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_138.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_138.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_138.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_138.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply
                (&local_138,(TTransform<double> *)(local_1d8 + uVar34 * 0x60),
                 (TTransform<double> *)((param_1->AllocatorInstance).Data + uVar34 * 0x60));
      dVar41 = local_138.Translation.ZW.m128d_f64[1];
      dVar42 = local_138.Translation.ZW.m128d_f64[0];
      dVar40 = local_138.Translation.XY.m128d_f64[1];
      dVar35 = local_138.Translation.XY.m128d_f64[0];
      dVar5 = local_138.Rotation.ZW.m128d_f64[1];
      dVar4 = local_138.Rotation.ZW.m128d_f64[0];
      dVar6 = local_138.Rotation.XY.m128d_f64[1];
      dVar13 = local_138.Rotation.XY.m128d_f64[0];
      uVar28 = 0;
      if ((int)uVar27 < local_1d0.ArrayNum) {
        uVar28 = uVar30;
      }
      uVar50 = local_138.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar14 = local_138.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar15 = local_138.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar16 = local_138.Scale3D.XY.m128d_f64[1]._4_4_;
      uVar17 = local_138.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar18 = local_138.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar19 = local_138.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar20 = local_138.Scale3D.ZW.m128d_f64[1]._4_4_;
      if ((uVar28 == 0) &&
         (local_208 = uVar34, local_200 = (longlong)local_1d0.ArrayNum,
         bVar21 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar27 = uVar27 + 1;
      *(double *)(local_1d0.AllocatorInstance.Data + lVar26) = dVar13;
      *(double *)(local_1d0.AllocatorInstance.Data + lVar26 + 8) = dVar6;
      *(double *)(local_1d0.AllocatorInstance.Data + lVar26 + 0x10) = dVar4;
      *(double *)(local_1d0.AllocatorInstance.Data + lVar26 + 0x10 + 8) = dVar5;
      *(double *)(local_1d0.AllocatorInstance.Data + lVar26 + 0x20) = dVar35;
      *(double *)(local_1d0.AllocatorInstance.Data + lVar26 + 0x20 + 8) = dVar40;
      *(double *)(local_1d0.AllocatorInstance.Data + lVar26 + 0x30) = dVar42;
      *(double *)(local_1d0.AllocatorInstance.Data + lVar26 + 0x30 + 8) = dVar41;
      pFVar2 = local_1d0.AllocatorInstance.Data + lVar26 + 0x40;
      *(undefined4 *)pFVar2 = uVar50;
      *(undefined4 *)(pFVar2 + 4) = uVar14;
      *(undefined4 *)(pFVar2 + 8) = uVar15;
      *(undefined4 *)(pFVar2 + 0xc) = uVar16;
      pFVar2 = local_1d0.AllocatorInstance.Data + lVar26 + 0x50;
      *(undefined4 *)pFVar2 = uVar17;
      *(undefined4 *)(pFVar2 + 4) = uVar18;
      *(undefined4 *)(pFVar2 + 8) = uVar19;
      *(undefined4 *)(pFVar2 + 0xc) = uVar20;
      lVar26 = lVar26 + 0x60;
    } while ((int)uVar27 < param_1->ArrayNum);
  }
  uVar12 = _UNK_1508ffb58;
  uVar11 = ___xmm_ffefffffffffffffffefffffffffffff;
  uVar10 = __real_ffefffffffffffff;
  iVar25 = *(int *)&(this->Grid).field_0x30 + 1;
  iVar23 = *(int *)&(this->Grid).field_0x34 + 1;
  iVar22 = *(int *)&(this->Grid).field_0x38 + 1;
  local_140 = __real_ffefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x10 = 0x7fefffffffffffff;
  local_1e0 = 0;
  *(undefined8 *)&(this->LocalBoundingBox).MMax = uVar11;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x8 = uVar12;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x10 = uVar10;
  dVar13 = __real_3c9cd2b291f7d440;
  local_1bc = iVar22;
  local_1b8 = iVar23;
  local_1b4 = iVar25;
  if (0 < iVar25) {
    do {
      iVar33 = 0;
      iVar31 = local_1e0;
      if (0 < iVar23) {
        do {
          iVar25 = 0;
          if (0 < iVar22) {
            do {
              iVar23 = *(int *)&(this->BoneData).field_0x18;
              uVar28 = (iVar31 * *(int *)&(this->BoneData).field_0x4 + iVar33) *
                       *(int *)&(this->BoneData).field_0x8 + iVar25;
              uVar27 = 0;
              if ((int)uVar28 < iVar23) {
                uVar27 = ~uVar28 >> 0x1f;
              }
              if (uVar27 == 0) {
                local_208 = (ulonglong)(int)uVar28;
                local_200 = (longlong)iVar23;
                bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar21) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              lVar26 = *(longlong *)&(this->BoneData).field_0x10;
              lVar29 = (longlong)(int)uVar28 * 0x4c;
              if (*(char *)(lVar29 + lVar26) == '\0') {
                iVar23 = *(int *)&(this->DeformedPoints).field_0x18;
                uVar28 = (iVar31 * *(int *)&(this->DeformedPoints).field_0x4 + iVar33) *
                         *(int *)&(this->DeformedPoints).field_0x8 + iVar25;
                uVar27 = 0;
                if ((int)uVar28 < iVar23) {
                  uVar27 = ~uVar28 >> 0x1f;
                }
                if (uVar27 == 0) {
                  local_208 = (ulonglong)(int)uVar28;
                  local_200 = (longlong)iVar23;
                  bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar21) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                dVar4 = *(double *)&(this->LocalBoundingBox).MMin;
                dVar5 = *(double *)&(this->LocalBoundingBox).MMin.field_0x8;
                dVar35 = *(double *)&(this->LocalBoundingBox).MMin.field_0x10;
                lVar29 = (longlong)(int)uVar28;
                lVar26 = *(longlong *)&(this->DeformedPoints).field_0x10;
                dVar6 = *(double *)(lVar26 + lVar29 * 0x18);
                if (dVar6 <= dVar4) {
                  dVar4 = dVar6;
                }
                dVar6 = *(double *)(lVar26 + 8 + lVar29 * 0x18);
                if (dVar6 <= dVar5) {
                  dVar5 = dVar6;
                }
                dVar6 = *(double *)(lVar26 + 0x10 + lVar29 * 0x18);
                if (dVar6 <= dVar35) {
                  dVar35 = dVar6;
                }
                *(double *)&(this->LocalBoundingBox).MMin = dVar4;
                *(double *)&(this->LocalBoundingBox).MMin.field_0x8 = dVar5;
                *(double *)&(this->LocalBoundingBox).MMin.field_0x10 = dVar35;
                dVar6 = *(double *)&(this->LocalBoundingBox).MMax.field_0x10;
                dVar4 = *(double *)&(this->LocalBoundingBox).MMax.field_0x8;
                dVar5 = *(double *)(lVar26 + 0x10 + lVar29 * 0x18);
                if (dVar6 <= dVar5) {
                  dVar6 = dVar5;
                }
                dVar5 = *(double *)(lVar26 + 8 + lVar29 * 0x18);
                if (dVar4 <= dVar5) {
                  dVar4 = dVar5;
                }
                dVar5 = *(double *)(lVar26 + lVar29 * 0x18);
              }
              else {
                local_1e8 = 0.0;
                local_1c0 = 0;
                local_1f8 = 0.0;
                dStack_1f0 = 0.0;
                local_1b0 = *(double *)&this->Grid +
                            (double)iVar31 * *(double *)&(this->Grid).field_0x40;
                dStack_1a8 = *(double *)&(this->Grid).field_0x8 +
                             (double)iVar33 * *(double *)&(this->Grid).field_0x48;
                local_1a0 = *(double *)&(this->Grid).field_0x10 +
                            (double)iVar25 * *(double *)&(this->Grid).field_0x50;
                if (*(char *)(lVar29 + lVar26) != '\0') {
                  iVar23 = 0;
                  local_1d8 = (FScriptContainerElement *)(lVar26 + 0x1c + lVar29);
                  puVar32 = (ushort *)(lVar26 + 2 + lVar29);
                  do {
                    dVar5 = local_1e8;
                    dVar4 = dStack_1f0;
                    dVar6 = local_1f8;
                    uVar7 = *puVar32;
                    if ((local_1d0.ArrayNum <= (int)(uint)uVar7) &&
                       (local_208 = (ulonglong)uVar7, local_200 = (longlong)local_1d0.ArrayNum,
                       bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar21)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    iVar23 = iVar23 + 1;
                    lVar24 = (ulonglong)uVar7 * 0x60;
                    puVar32 = puVar32 + 1;
                    auVar38 = *(undefined1 (*) [16])
                               (local_1d0.AllocatorInstance.Data + lVar24 + 0x10);
                    dVar39 = auVar38._0_8_;
                    dVar42 = local_1a0 *
                             *(double *)(local_1d0.AllocatorInstance.Data + lVar24 + 0x50);
                    dVar41 = *(double *)(local_1d0.AllocatorInstance.Data + lVar24 + 0x50 + 8) * 0.0
                    ;
                    auVar44 = *(undefined1 (*) [16])(local_1d0.AllocatorInstance.Data + lVar24);
                    dVar9 = *(double *)(local_1d0.AllocatorInstance.Data + lVar24 + 0x18);
                    dVar35 = *(double *)(local_1d0.AllocatorInstance.Data + lVar24 + 0x40) *
                             local_1b0;
                    dVar40 = *(double *)(local_1d0.AllocatorInstance.Data + lVar24 + 0x40 + 8) *
                             dStack_1a8;
                    uVar50 = (undefined4)((ulonglong)dVar40 >> 0x20);
                    local_188 = *(undefined1 (*) [16])(local_1d0.AllocatorInstance.Data + lVar24);
                    auVar43 = blendpd(local_188,auVar38,2);
                    auVar51._8_4_ = SUB84(dVar40,0);
                    auVar51._0_8_ = dVar35;
                    auVar51._12_4_ = uVar50;
                    auVar52._0_8_ = auVar51._8_8_ * local_188._0_8_ - local_188._8_8_ * dVar35;
                    auVar52._8_8_ = dVar42 * local_188._8_8_ - dVar39 * dVar40;
                    auVar45._8_4_ = SUB84(dVar40,0);
                    auVar45._0_8_ = dVar35;
                    auVar45._12_4_ = uVar50;
                    auVar36._8_4_ = SUB84(dVar41,0);
                    auVar36._0_8_ = dVar42;
                    auVar36._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
                    auVar36 = blendpd(auVar45,auVar36,2);
                    auVar37._0_8_ = auVar36._0_8_ * dVar39 - auVar43._0_8_ * dVar42;
                    auVar37._8_8_ = auVar36._8_8_ * auVar38._8_8_ - auVar43._8_8_ * dVar41;
                    auVar36 = blendpd(auVar52,auVar37,2);
                    dVar48 = auVar52._8_8_ + auVar52._8_8_;
                    dVar49 = auVar37._0_8_ + auVar37._0_8_;
                    auVar53._0_8_ = auVar36._0_8_ + auVar36._0_8_;
                    auVar53._8_8_ = auVar36._8_8_ + auVar36._8_8_;
                    auVar46._8_4_ = SUB84(dVar49,0);
                    auVar46._0_8_ = dVar48;
                    uVar50 = (undefined4)((ulonglong)dVar49 >> 0x20);
                    auVar46._12_4_ = uVar50;
                    auVar43._8_4_ = SUB84(dVar49,0);
                    auVar43._0_8_ = dVar48;
                    auVar43._12_4_ = uVar50;
                    auVar36 = blendpd(auVar43,auVar53,2);
                    auVar47._0_8_ = auVar46._8_8_ * auVar44._0_8_ - auVar44._8_8_ * dVar48;
                    auVar47._8_8_ = auVar53._0_8_ * auVar44._8_8_ - dVar39 * dVar49;
                    auVar45 = blendpd(auVar44,auVar38,2);
                    auVar44._0_8_ = auVar36._0_8_ * dVar39 - auVar45._0_8_ * auVar53._0_8_;
                    auVar44._8_8_ = auVar36._8_8_ * auVar38._8_8_ - auVar45._8_8_ * auVar53._8_8_;
                    auVar38._8_4_ = SUB84(auVar47._8_8_,0);
                    auVar38._0_8_ = auVar47._0_8_;
                    auVar38._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
                    auVar36 = blendpd(auVar47,auVar44,2);
                    fVar3 = *(float *)local_1d8;
                    local_1d8 = local_1d8 + 4;
                    dVar41 = (double)fVar3;
                    local_1f8 = dVar6 + dVar41 * (dVar48 * dVar9 + dVar35 + auVar38._8_8_ +
                                                 *(double *)
                                                  (local_1d0.AllocatorInstance.Data + lVar24 + 0x20)
                                                 );
                    dStack_1f0 = dVar4 + dVar41 * (dVar49 * dVar9 + dVar40 + auVar44._0_8_ +
                                                  *(double *)
                                                   (local_1d0.AllocatorInstance.Data + lVar24 + 0x20
                                                   + 8));
                    local_1e8 = dVar5 + dVar41 * (auVar53._0_8_ * dVar9 + dVar42 + auVar36._0_8_ +
                                                 *(double *)
                                                  (local_1d0.AllocatorInstance.Data + lVar24 + 0x30)
                                                 );
                    this = local_198;
                    iVar31 = local_1e0;
                  } while (iVar23 < (int)(uint)*(byte *)(lVar29 + lVar26));
                }
                dVar5 = local_1e8;
                dVar4 = dStack_1f0;
                dVar6 = local_1f8;
                iVar23 = *(int *)&(this->DeformedPoints).field_0x18;
                uVar28 = (iVar31 * *(int *)&(this->DeformedPoints).field_0x4 + iVar33) *
                         *(int *)&(this->DeformedPoints).field_0x8 + iVar25;
                uVar27 = 0;
                if ((int)uVar28 < iVar23) {
                  uVar27 = ~uVar28 >> 0x1f;
                }
                if (uVar27 == 0) {
                  local_208 = (ulonglong)(int)uVar28;
                  local_200 = (longlong)iVar23;
                  bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar21) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                lVar29 = (longlong)(int)uVar28;
                lVar26 = *(longlong *)&(this->DeformedPoints).field_0x10;
                dVar42 = dVar4 - *(double *)(lVar26 + 8 + lVar29 * 0x18);
                dVar40 = dVar6 - *(double *)(lVar26 + lVar29 * 0x18);
                dVar35 = dVar5 - *(double *)(lVar26 + 0x10 + lVar29 * 0x18);
                this->bSpatialDirty = dVar13 < dVar42 * dVar42 + dVar40 * dVar40 + dVar35 * dVar35;
                iVar23 = *(int *)&(this->DeformedPoints).field_0x18;
                uVar28 = (iVar31 * *(int *)&(this->DeformedPoints).field_0x4 + iVar33) *
                         *(int *)&(this->DeformedPoints).field_0x8 + iVar25;
                uVar27 = 0;
                if ((int)uVar28 < iVar23) {
                  uVar27 = ~uVar28 >> 0x1f;
                }
                if (uVar27 == 0) {
                  local_208 = (ulonglong)(int)uVar28;
                  local_200 = (longlong)iVar23;
                  bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar21) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                lVar26 = *(longlong *)&(this->DeformedPoints).field_0x10;
                pdVar1 = (double *)(lVar26 + (longlong)(int)uVar28 * 0x18);
                *pdVar1 = dVar6;
                pdVar1[1] = dVar4;
                *(double *)(lVar26 + 0x10 + (longlong)(int)uVar28 * 0x18) = local_1e8;
                dVar35 = *(double *)&(this->LocalBoundingBox).MMin.field_0x8;
                dVar40 = *(double *)&(this->LocalBoundingBox).MMin.field_0x10;
                if (dVar4 <= dVar35) {
                  dVar35 = dVar4;
                }
                dVar4 = *(double *)&(this->LocalBoundingBox).MMin;
                if (dVar4 <= dVar6) {
                  dVar6 = dVar4;
                }
                if (dVar5 <= dVar40) {
                  dVar40 = dVar5;
                }
                *(double *)&(this->LocalBoundingBox).MMin = dVar6;
                *(double *)&(this->LocalBoundingBox).MMin.field_0x8 = dVar35;
                *(double *)&(this->LocalBoundingBox).MMin.field_0x10 = dVar40;
                dVar6 = *(double *)&(this->LocalBoundingBox).MMax.field_0x10;
                dVar4 = *(double *)&(this->LocalBoundingBox).MMax.field_0x8;
                if (dVar6 <= local_1e8) {
                  dVar6 = local_1e8;
                }
                dVar5 = local_1f8;
                if (dVar4 <= dStack_1f0) {
                  dVar4 = dStack_1f0;
                }
              }
              dVar35 = *(double *)&(this->LocalBoundingBox).MMax;
              if (dVar5 <= dVar35) {
                dVar5 = dVar35;
              }
              iVar25 = iVar25 + 1;
              *(double *)&(this->LocalBoundingBox).MMax = dVar5;
              *(double *)&(this->LocalBoundingBox).MMax.field_0x8 = dVar4;
              *(double *)&(this->LocalBoundingBox).MMax.field_0x10 = dVar6;
              iVar23 = local_1b8;
              iVar22 = local_1bc;
            } while (iVar25 < local_1bc);
          }
          iVar33 = iVar33 + 1;
          iVar25 = local_1b4;
        } while (iVar33 < iVar23);
      }
      local_1e0 = iVar31 + 1;
    } while (local_1e0 < iVar25);
  }
  if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.AllocatorInstance.Data);
  }
  return;
}

// FinalizeConstruction @ 143ebd8b0

void __thiscall
Chaos::FWeightedLatticeImplicitObject::FinalizeConstruction(FWeightedLatticeImplicitObject *this)

{
  SetEmptyCells(this);
  InitializeDeformedPoints(this);
  this->bSpatialDirty = true;
  return;
}

// GetDeformedPoint @ 143ec0930

TVector<double,3> * __thiscall
Chaos::FWeightedLatticeImplicitObject::GetDeformedPoint
          (FWeightedLatticeImplicitObject *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  TVector<double,3> *pTVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  TVector<int,3>_u_0 local_98;
  double local_88;
  double local_80;
  double local_78;
  FEmbeddingCoordinate local_58;
  
  iVar1 = *(int *)&(this->Grid).field_0x30;
  iVar8 = (int)((*(double *)param_1 - *(double *)&this->Grid) / *(double *)&(this->Grid).field_0x40)
  ;
  iVar9 = (int)((*(double *)&param_1->field_0x8 - *(double *)&(this->Grid).field_0x8) /
               *(double *)&(this->Grid).field_0x48);
  iVar7 = (int)((*(double *)&param_1->field_0x10 - *(double *)&(this->Grid).field_0x10) /
               *(double *)&(this->Grid).field_0x50);
  if (iVar8 < iVar1) {
    if (iVar8 < 0) {
      iVar8 = 0;
    }
  }
  else {
    iVar8 = iVar1 + -1;
  }
  iVar1 = *(int *)&(this->Grid).field_0x34;
  if (iVar9 < iVar1) {
    if (iVar9 < 0) {
      iVar9 = 0;
    }
  }
  else {
    iVar9 = iVar1 + -1;
  }
  iVar1 = *(int *)&(this->Grid).field_0x38;
  if (iVar7 < iVar1) {
    if (iVar7 < 0) {
      iVar7 = 0;
    }
  }
  else {
    iVar7 = iVar1 + -1;
  }
  uVar10 = (iVar8 * *(int *)&(this->EmptyCells).field_0x4 + iVar9) *
           *(int *)&(this->EmptyCells).field_0x8 + iVar7;
  uVar6 = 0;
  if ((int)uVar10 < *(int *)&(this->EmptyCells).field_0x18) {
    uVar6 = ~uVar10 >> 0x1f;
  }
  local_98._s_0.X = iVar8;
  local_98._s_0.Y = iVar9;
  local_98._s_0.Z = iVar7;
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TVector<double,3> *)(*pcVar2)();
      return pTVar5;
    }
  }
  if (*(char *)((longlong)(int)uVar10 + *(longlong *)&(this->EmptyCells).field_0x10) == '\0') {
    local_88 = (*(double *)param_1 -
               ((double)iVar8 * *(double *)&(this->Grid).field_0x40 + *(double *)&this->Grid)) /
               *(double *)&(this->Grid).field_0x40;
    if (__real_3ff0000000000000 <= local_88) {
      local_88 = __real_3ff0000000000000;
    }
    if (local_88 <= 0.0) {
      local_88 = 0.0;
    }
    local_80 = (*(double *)&param_1->field_0x8 -
               ((double)iVar9 * *(double *)&(this->Grid).field_0x48 +
               *(double *)&(this->Grid).field_0x8)) / *(double *)&(this->Grid).field_0x48;
    if (__real_3ff0000000000000 <= local_80) {
      local_80 = __real_3ff0000000000000;
    }
    if (local_80 <= 0.0) {
      local_80 = 0.0;
    }
    local_78 = (*(double *)&param_1->field_0x10 -
               ((double)iVar7 * *(double *)&(this->Grid).field_0x50 +
               *(double *)&(this->Grid).field_0x10)) / *(double *)&(this->Grid).field_0x50;
    if (__real_3ff0000000000000 <= local_78) {
      local_78 = __real_3ff0000000000000;
    }
    if (local_78 <= 0.0) {
      local_78 = 0.0;
    }
    FEmbeddingCoordinate::FEmbeddingCoordinate
              (&local_58,(TVector<int,3> *)&local_98._s_0,(TVector<double,3> *)&local_88);
    FEmbeddingCoordinate::DeformedPosition(&local_58,__return_storage_ptr__,&this->DeformedPoints);
  }
  else {
    uVar3 = *(undefined8 *)&param_1->field_0x8;
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  }
  return __return_storage_ptr__;
}

// GetEmbeddingCoordinates @ 143ec0c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FWeightedLatticeImplicitObject::GetEmbeddingCoordinates
          (FWeightedLatticeImplicitObject *this,TVector<double,3> *param_1,
          TArray<Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate,TSizedDefaultAllocator<32>_>
          *param_2,bool param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  TArray<Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate,TSizedDefaultAllocator<32>_>
  *pTVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  longlong lVar18;
  double *pdVar19;
  longlong lVar20;
  TVector<double,3> *pTVar21;
  TVector<double,3> *pTVar22;
  ulonglong uVar23;
  ForElementType<FSetElementId> FVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  ForAnyElementType FVar30;
  int *piVar31;
  int iVar32;
  uint uVar33;
  TVector<double,3> *pTVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  FScriptContainerElement *pFVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined1 auVar47 [16];
  undefined1 auStackY_908 [32];
  undefined1 local_8b7;
  char local_8b6;
  undefined1 local_8b5;
  undefined1 local_8b4 [4];
  ForAnyElementType local_8b0;
  int local_8a8;
  int local_8a4;
  uint local_8a0 [2];
  FScriptContainerElement *local_898;
  int local_890;
  int iStack_88c;
  int local_888;
  ulonglong local_880;
  FScriptContainerElement *local_878;
  FScriptContainerElement *local_870;
  TVector<double,3> *local_868;
  undefined1 local_860;
  undefined1 local_85f [7];
  TVector<double>_u_0 local_858;
  TVector<double>_u_0 local_840;
  ulonglong local_828;
  TArray<Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate,TSizedDefaultAllocator<32>_>
  *local_820;
  FScriptContainerElement *local_818;
  double local_810;
  longlong local_808;
  FScriptContainerElement *local_800;
  TVector<double>_u_0 local_7f8;
  TVector<double>_u_0 local_7e0;
  FScriptContainerElement *local_7c8;
  undefined1 local_7b8 [16];
  TArray<int,TSizedDefaultAllocator<32>_> local_7a8;
  TVector<double>_u_0 local_798;
  TVector<double>_u_0 local_780;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined1 local_758 [24];
  TArray<int,TSizedDefaultAllocator<32>_> local_740;
  TArray<int,TSizedDefaultAllocator<32>_> local_730;
  double local_720;
  double dStack_718;
  double local_710;
  double local_708;
  double dStack_700;
  double local_6f8;
  double local_6f0 [6];
  code *local_6c0;
  undefined1 *local_6b8;
  FScriptContainerElement *local_6a8;
  int iStack_6a0;
  undefined4 uStack_69c;
  code *local_698;
  undefined1 *local_690;
  undefined8 local_688;
  undefined8 uStack_680;
  ulonglong local_678;
  undefined8 uStack_670;
  double local_668;
  undefined8 uStack_660;
  int local_658;
  int iStack_654;
  int iStack_650;
  int iStack_64c;
  TVector<double,4> local_648;
  int iStack_628;
  int iStack_624;
  undefined1 local_620 [24];
  undefined1 local_608 [16];
  double local_5f8;
  double local_5f0;
  double local_5e8;
  double local_5e0;
  TVector<double>_u_0 local_5d8;
  double local_5c0;
  double local_5b8;
  double local_5b0;
  double local_5a8;
  double local_5a0;
  double local_598;
  TVector<double,4> local_588;
  TVector<double,4> local_568;
  double local_548;
  double local_540;
  double local_538;
  double local_530;
  double local_528;
  double local_520;
  double local_518;
  double local_510;
  double local_508;
  double local_500;
  double local_4f8;
  double local_4f0;
  double local_4e8;
  double local_4e0;
  double local_4d8;
  TVector<double,3> local_4c8;
  TVector<double,3> local_4b0;
  undefined1 local_498 [24];
  TVector<double,3> local_480;
  TArray<int,TSizedDefaultAllocator<32>_> local_468;
  TArrayView<int_const_,int> local_458 [2];
  double local_438;
  double local_420;
  double local_418;
  double dStack_410;
  double local_408;
  double local_400;
  double dStack_3f8;
  double local_3f0;
  FVectorAABB local_3e8;
  FVectorAABB local_3a8;
  undefined1 local_368 [16];
  double local_358;
  undefined8 uStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  undefined8 uStack_330;
  undefined1 local_328 [16];
  double local_318;
  undefined8 uStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  undefined8 uStack_2f0;
  TVector<double,3> local_2e8;
  TVector<double,3> local_2d0;
  TVector<double,3> local_2b8;
  TVector<double,3> local_2a0;
  TVector<double,3> local_288;
  TVector<double,3> local_270;
  double local_248;
  double local_230;
  double local_218;
  double local_200;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_1f8;
  TTetrahedron<double> local_1a8;
  TTetrahedron<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_908;
  iVar29 = 0;
  local_828 = local_828 & 0xffffffff00000000;
  local_8b6 = param_3;
  local_868 = param_1;
  local_820 = param_2;
  if ((this->bSpatialDirty != false) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bSpatialDirty",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\WeightedLatticeImplicitObject.cpp"
                          ,0x18a,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  do {
    dVar35 = UE::Math::TVector<double>::Component((TVector<double> *)&this->LocalBoundingBox,iVar29)
    ;
    dVar36 = UE::Math::TVector<double>::Component((TVector<double> *)param_1,iVar29);
    if (dVar36 < dVar35) {
LAB_143ec0d3e:
      bVar12 = false;
      if (!param_3) {
        return false;
      }
      local_740.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pTVar17 = &local_740;
      local_740.ArrayNum = 0;
      local_740.ArrayMax = 0;
      bVar9 = false;
      bVar14 = true;
      goto LAB_143ec0d69;
    }
    dVar35 = UE::Math::TVector<double>::Component
                       ((TVector<double> *)&(this->LocalBoundingBox).MMax,iVar29);
    dVar36 = UE::Math::TVector<double>::Component((TVector<double> *)param_1,iVar29);
    if (dVar35 < dVar36) goto LAB_143ec0d3e;
    iVar29 = iVar29 + 1;
  } while (iVar29 < 3);
  bVar12 = true;
  pTVar17 = THierarchicalSpatialHash<int,double>::FindAllIntersections
                      (&this->Spatial,&local_468,param_1);
  bVar9 = true;
  bVar14 = false;
LAB_143ec0d69:
  local_8b0.Data = (pTVar17->AllocatorInstance).Data;
  (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_8a8 = pTVar17->ArrayNum;
  local_8a4 = pTVar17->ArrayMax;
  pTVar17->ArrayNum = 0;
  pTVar17->ArrayMax = 0;
  if ((bVar14) && (local_740.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_740.AllocatorInstance.Data);
  }
  if ((bVar9) && (local_468.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_468.AllocatorInstance.Data);
  }
  dVar35 = __real_3ff0000000000000;
  uVar23 = (ulonglong)local_8a8;
  local_878 = (FScriptContainerElement *)CONCAT44(local_878._4_4_,local_8a8);
  local_800 = local_8b0.Data + uVar23 * 4;
  FVar30.Data = local_8b0.Data;
  while( true ) {
    pFVar38 = local_800;
    iVar29 = 0;
    local_898 = FVar30.Data;
    if (local_8a8 != (int)uVar23) {
      local_8b7 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_8b7);
    }
    pTVar34 = local_868;
    dVar37 = __real_3f1a36e2e0000000;
    auVar47 = ___xmm_80000000000000008000000000000000;
    dVar36 = __real_bff0000000000000;
    if (FVar30.Data == pFVar38) break;
    iVar16 = *(int *)&(this->Grid).field_0x38;
    piVar31 = &FEmbeddingCoordinate::OddIndexTetrahedraOffsets[0].V[3].field0_0x0._s_0.Y;
    iVar32 = iVar16 * *(int *)&(this->Grid).field_0x34;
    iVar15 = *(int *)FVar30.Data / iVar32;
    iVar25 = *(int *)FVar30.Data - iVar15 * iVar32;
    iVar32 = iVar25 / iVar16;
    iVar25 = iVar25 - iVar16 * iVar32;
    local_890 = iVar15;
    iStack_88c = iVar32;
    local_888 = iVar25;
    if ((iVar32 + iVar25 + iVar15 & 1U) == 0) {
      piVar31 = &FEmbeddingCoordinate::EvenIndexTetrahedraOffsets[0].V[3].field0_0x0._s_0.Y;
    }
    do {
      uVar33 = ((((TVector<int,3>_u_0_s_0 *)(piVar31 + -1))->X + iVar15) *
                *(int *)&(this->DeformedPoints).field_0x4 + iVar32 + *piVar31) *
               *(int *)&(this->DeformedPoints).field_0x8 + piVar31[1] + iVar25;
      uVar26 = 0;
      if ((int)uVar33 < *(int *)&(this->DeformedPoints).field_0x18) {
        uVar26 = ~uVar33 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      local_880 = (longlong)(int)uVar33 * 3;
      local_808 = *(longlong *)&(this->DeformedPoints).field_0x10;
      uVar33 = ((piVar31[-4] + iVar15) * *(int *)&(this->DeformedPoints).field_0x4 + piVar31[-3] +
               iVar32) * *(int *)&(this->DeformedPoints).field_0x8 + piVar31[-2] + iVar25;
      uVar26 = 0;
      if ((int)uVar33 < *(int *)&(this->DeformedPoints).field_0x18) {
        uVar26 = ~uVar33 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      local_828 = (longlong)(int)uVar33 * 3;
      local_870 = *(FScriptContainerElement **)&(this->DeformedPoints).field_0x10;
      uVar33 = ((piVar31[-7] + iVar15) * *(int *)&(this->DeformedPoints).field_0x4 + piVar31[-6] +
               iVar32) * *(int *)&(this->DeformedPoints).field_0x8 + piVar31[-5] + iVar25;
      uVar26 = 0;
      if ((int)uVar33 < *(int *)&(this->DeformedPoints).field_0x18) {
        uVar26 = ~uVar33 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      local_810 = (double)((longlong)(int)uVar33 * 3);
      local_818 = *(FScriptContainerElement **)&(this->DeformedPoints).field_0x10;
      uVar33 = ((piVar31[-10] + iVar15) * *(int *)&(this->DeformedPoints).field_0x4 + piVar31[-9] +
               iVar32) * *(int *)&(this->DeformedPoints).field_0x8 + piVar31[-8] + iVar25;
      uVar26 = 0;
      if ((int)uVar33 < *(int *)&(this->DeformedPoints).field_0x18) {
        uVar26 = ~uVar33 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      lVar18 = *(longlong *)&(this->DeformedPoints).field_0x10;
      pdVar19 = (double *)(lVar18 + (longlong)(int)uVar33 * 0x18);
      local_248 = *(double *)(lVar18 + 0x10 + (longlong)(int)uVar33 * 0x18);
      local_230 = *(double *)(local_818 + (longlong)local_810 * 8 + 0x10);
      local_218 = *(double *)(local_870 + local_828 * 8 + 0x10);
      pdVar1 = (double *)(local_808 + local_880 * 8);
      local_508 = *pdVar1;
      local_4f0 = pdVar1[1];
      local_200 = *(double *)(local_808 + 0x10 + local_880 * 8);
      local_4e8 = local_248 - local_200;
      local_4e0 = local_230 - local_200;
      local_4d8 = local_218 - local_200;
      local_5a8 = *(double *)local_868 - local_508;
      local_5a0 = *(double *)&local_868->field_0x8 - local_4f0;
      local_598 = *(double *)&local_868->field_0x10 - local_200;
      local_518 = *pdVar19 - local_508;
      local_500 = pdVar19[1] - local_4f0;
      local_510 = *(double *)(local_818 + (longlong)local_810 * 8) - local_508;
      local_4f8 = *(double *)(local_818 + (longlong)local_810 * 8 + 8) - local_4f0;
      local_508 = *(double *)(local_870 + local_828 * 8) - local_508;
      local_4f0 = *(double *)(local_870 + local_828 * 8 + 8) - local_4f0;
      RowMaj3x3RobustSolveLinearSystem<double,Chaos::TVector<double,3>_>
                ((TVector<double,3> *)local_608,&local_518,(TVector<double,3> *)&local_5a8);
      dVar36 = local_5f8;
      uVar6 = local_608._8_8_;
      uVar5 = local_608._0_8_;
      param_2 = local_820;
      if ((((0.0 <= (double)local_608._0_8_) && (0.0 <= (double)local_608._8_8_)) &&
          (0.0 <= local_5f8)) &&
         ((double)local_608._8_8_ + (double)local_608._0_8_ + local_5f8 <= dVar35)) {
        iVar16 = local_820->ArrayNum;
        if (iVar16 == local_820->ArrayMax) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&local_820->AllocatorInstance,&local_820->ArrayMax);
        }
        param_2->ArrayNum = iVar16 + 1;
        lVar18 = (longlong)iVar16;
        pFVar38 = (param_2->AllocatorInstance).Data;
        *(ulonglong *)(pFVar38 + lVar18 * 0x28) = CONCAT44(iStack_88c,local_890);
        *(undefined8 *)(pFVar38 + lVar18 * 0x28 + 0x10) = uVar5;
        *(undefined8 *)(pFVar38 + lVar18 * 0x28 + 0x10 + 8) = uVar6;
        *(int *)(pFVar38 + lVar18 * 0x28 + 8) = iVar25;
        *(double *)(pFVar38 + lVar18 * 0x28 + 0x20) = dVar36;
        *(int *)(pFVar38 + lVar18 * 0x28 + 0xc) = iVar29;
      }
      iVar29 = iVar29 + 1;
      piVar31 = piVar31 + 0xc;
    } while (iVar29 < 5);
    uVar23 = (ulonglong)local_878 & 0xffffffff;
    FVar30.Data = local_898 + 4;
  }
  if ((0 < param_2->ArrayNum) || (local_8b6 == '\0')) {
    bVar12 = 0 < param_2->ArrayNum;
    goto LAB_143ec2cb1;
  }
  local_7b8 = ___xmm_80000000000000008000000000000000;
  local_810 = 0.0;
  if (bVar12) {
    dVar35 = 0.0;
  }
  else {
    dVar35 = *(double *)local_868;
    dVar3 = *(double *)&local_868->field_0x10;
    dVar7 = *(double *)&local_868->field_0x8;
    local_420 = *(double *)&(this->LocalBoundingBox).MMin.field_0x10;
    local_798._s_0.Z = *(double *)&(this->LocalBoundingBox).MMin.field_0x10 - dVar3;
    local_798._s_0.Y = *(double *)&(this->LocalBoundingBox).MMin.field_0x8 - dVar7;
    local_780._s_0.Z = dVar3 - *(double *)&(this->LocalBoundingBox).MMax.field_0x10;
    local_780._s_0.Y = dVar7 - *(double *)&(this->LocalBoundingBox).MMax.field_0x8;
    local_780._s_0.X = dVar35 - *(double *)&(this->LocalBoundingBox).MMax;
    local_798._s_0.X = *(double *)&(this->LocalBoundingBox).MMin - dVar35;
    local_438 = *(double *)&(this->LocalBoundingBox).MMax.field_0x10;
    uVar26 = (uint)__xmm_80000000000000008000000000000000;
    uVar33 = __xmm_80000000000000008000000000000000._4_4_;
    if ((((*(double *)&(this->LocalBoundingBox).MMax < dVar35) ||
         (*(double *)&(this->LocalBoundingBox).MMax.field_0x8 < dVar7)) || (local_438 < dVar3)) ||
       (((dVar35 < *(double *)&(this->LocalBoundingBox).MMin ||
         (dVar7 < *(double *)&(this->LocalBoundingBox).MMin.field_0x8)) || (dVar3 < local_420)))) {
      dVar35 = UE::Math::TVector<double>::Component((TVector<double> *)&local_780._s_0,0);
      if (dVar35 <= 0.0) {
        dVar35 = UE::Math::TVector<double>::Component((TVector<double> *)&local_798._s_0,0);
        if (dVar35 <= 0.0) {
          pdVar19 = UE::Math::TVector<double>::Component((TVector<double> *)&local_858._s_0,0);
          *pdVar19 = 0.0;
        }
        else {
          dVar35 = UE::Math::TVector<double>::Component((TVector<double> *)&local_798._s_0,0);
          pdVar19 = UE::Math::TVector<double>::Component((TVector<double> *)&local_858._s_0,0);
          *pdVar19 = (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) ^ uVar33,
                                      SUB84(dVar35,0) ^ uVar26);
        }
      }
      else {
        local_858._s_0.X =
             UE::Math::TVector<double>::Component((TVector<double> *)&local_780._s_0,0);
      }
      dVar35 = UE::Math::TVector<double>::Component((TVector<double> *)&local_780._s_0,1);
      if (dVar35 <= 0.0) {
        dVar35 = UE::Math::TVector<double>::Component((TVector<double> *)&local_798._s_0,1);
        if (dVar35 <= 0.0) {
          pdVar19 = UE::Math::TVector<double>::Component((TVector<double> *)&local_858._s_0,1);
          *pdVar19 = 0.0;
        }
        else {
          dVar35 = UE::Math::TVector<double>::Component((TVector<double> *)&local_798._s_0,1);
          pdVar19 = UE::Math::TVector<double>::Component((TVector<double> *)&local_858._s_0,1);
          *pdVar19 = (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) ^ uVar33,
                                      SUB84(dVar35,0) ^ uVar26);
        }
      }
      else {
        local_858._s_0.Y =
             UE::Math::TVector<double>::Component((TVector<double> *)&local_780._s_0,1);
      }
      dVar35 = UE::Math::TVector<double>::Component((TVector<double> *)&local_780._s_0,2);
      if (dVar35 <= 0.0) {
        dVar35 = UE::Math::TVector<double>::Component((TVector<double> *)&local_798._s_0,2);
        if (dVar35 <= 0.0) {
          pdVar19 = UE::Math::TVector<double>::Component((TVector<double> *)&local_858._s_0,2);
          *pdVar19 = 0.0;
        }
        else {
          dVar35 = UE::Math::TVector<double>::Component((TVector<double> *)&local_798._s_0,2);
          pdVar19 = UE::Math::TVector<double>::Component((TVector<double> *)&local_858._s_0,2);
          *pdVar19 = (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) ^ uVar33,
                                      SUB84(dVar35,0) ^ uVar26);
        }
      }
      else {
        local_858._s_0.Z =
             UE::Math::TVector<double>::Component((TVector<double> *)&local_780._s_0,2);
      }
      dVar35 = TVector<double,3>::SafeNormalize((TVector<double,3> *)&local_858._s_0,dVar37);
      if (dVar35 < dVar37) {
        if (local_858._s_0.X <= 0.0) {
          if (local_858._s_0.X < 0.0) {
            local_858._s_0.X = dVar36;
          }
        }
        else {
          local_858._s_0.X = __real_3ff0000000000000;
        }
        if (local_858._s_0.Y <= 0.0) {
          if (local_858._s_0.Y < 0.0) {
            local_858._s_0.Y = dVar36;
          }
        }
        else {
          local_858._s_0.Y = __real_3ff0000000000000;
        }
        if (local_858._s_0.Z <= 0.0) {
          if (local_858._s_0.Z < 0.0) {
            local_858._s_0.Z = dVar36;
          }
        }
        else {
          local_858._s_0.Z = __real_3ff0000000000000;
        }
        UE::Math::TVector<double>::Normalize
                  ((TVector<double> *)&local_858._s_0,__real_3e45798ee0000000);
      }
    }
    else {
      dVar36 = local_798._s_0.Y;
      if (local_798._s_0.Y <= local_780._s_0.Y) {
        dVar36 = local_780._s_0.Y;
      }
      dVar35 = local_780._s_0.X;
      if (local_780._s_0.X <= local_798._s_0.X) {
        dVar35 = local_798._s_0.X;
      }
      dVar37 = local_798._s_0.Z;
      if (local_798._s_0.Z <= local_780._s_0.Z) {
        dVar37 = local_780._s_0.Z;
      }
      if (dVar35 <= dVar36) {
        if (dVar36 <= dVar37) goto LAB_143ec1483;
        dVar35 = dVar36;
        iVar16 = 1;
      }
      else {
        iVar16 = iVar29;
        if (dVar35 <= dVar37) {
LAB_143ec1483:
          dVar35 = dVar37;
          iVar16 = 2;
        }
      }
      dVar36 = UE::Math::TVector<double>::Component((TVector<double> *)&local_780._s_0,iVar16);
      dVar37 = UE::Math::TVector<double>::Component((TVector<double> *)&local_798._s_0,iVar16);
      if (dVar36 <= dVar37) {
        pTVar22 = TVector<double,3>::AxisVector(&local_2d0,iVar16);
        local_4c8._0_4_ = *(uint *)pTVar22 ^ uVar26;
        local_4c8._4_4_ = *(uint *)&pTVar22->field_0x4 ^ uVar33;
        local_4c8._8_4_ = *(uint *)&pTVar22->field_0x8 ^ auVar47._8_4_;
        local_4c8._12_4_ = *(uint *)&pTVar22->field_0xc ^ auVar47._12_4_;
        pTVar21 = &local_4c8;
        local_4c8._16_4_ = (uint)*(undefined8 *)&pTVar22->field_0x10 ^ uVar26;
        local_4c8._20_4_ = (uint)((ulonglong)*(undefined8 *)&pTVar22->field_0x10 >> 0x20) ^ uVar33;
      }
      else {
        pTVar21 = TVector<double,3>::AxisVector(&local_2e8,iVar16);
      }
      local_858._s_0.X = (double)*(undefined8 *)pTVar21;
      local_858._s_0.Y = (double)*(undefined8 *)&pTVar21->field_0x8;
      local_858._s_0.Z = (double)*(undefined8 *)&pTVar21->field_0x10;
    }
  }
  dVar36 = *(double *)&(this->Grid).field_0x48;
  uVar39 = SUB84(dVar36,0);
  uVar40 = (undefined4)((ulonglong)dVar36 >> 0x20);
  dVar37 = *(double *)&(this->Grid).field_0x40;
  if (dVar36 <= dVar37) {
    uVar39 = SUB84(dVar37,0);
    uVar40 = (undefined4)((ulonglong)dVar37 >> 0x20);
  }
  dVar36 = *(double *)&(this->Grid).field_0x50;
  if ((double)CONCAT44(uVar40,uVar39) <= dVar36) {
    uVar39 = SUB84(dVar36,0);
    uVar40 = (undefined4)((ulonglong)dVar36 >> 0x20);
  }
  dVar36 = (double)CONCAT44(uVar40,uVar39);
  while (local_8a8 == 0) {
    if (4 < iVar29) {
      if (iVar29 == 5) {
        bVar12 = true;
        uVar26 = *(int *)&(this->Grid).field_0x38 * *(int *)&(this->Grid).field_0x34 *
                 *(int *)&(this->Grid).field_0x30;
        if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
        }
        if (local_8a4 < (int)uVar26) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar26,&local_8b0,0,&local_8a4);
        }
        local_8a0[0] = 0;
        if (0 < (int)uVar26) {
          do {
            uVar33 = local_8a0[0];
            uVar27 = 0;
            if ((int)local_8a0[0] < *(int *)&(this->EmptyCells).field_0x18) {
              uVar27 = ~local_8a0[0] >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar4 = (code *)swi(3);
              uVar13 = (*pcVar4)();
              return (bool)uVar13;
            }
            if (*(char *)((longlong)(int)uVar33 + *(longlong *)&(this->EmptyCells).field_0x10) ==
                '\0') {
              if (((local_8b0.Data <= (FScriptContainerElement *)local_8a0) &&
                  ((FScriptContainerElement *)local_8a0 < local_8b0.Data + (longlong)local_8a4 * 4))
                 && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar14)) {
                pcVar4 = (code *)swi(3);
                uVar13 = (*pcVar4)();
                return (bool)uVar13;
              }
              if (local_8a8 == local_8a4) {
                local_8a8 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&local_8b0,&local_8a4);
              }
              lVar18 = (longlong)local_8a8;
              local_8a8 = local_8a8 + 1;
              *(uint *)(local_8b0.Data + lVar18 * 4) = local_8a0[0];
            }
            local_8a0[0] = local_8a0[0] + 1;
          } while ((int)local_8a0[0] < (int)uVar26);
        }
        goto LAB_143ec185f;
      }
      break;
    }
    local_690 = &local_860;
    local_698 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::THierarchicalSpatialHash<int,double>::FindAllIntersections'::__l2::<lambda_1>,bool,int>
                ::Call;
    dVar36 = dVar36 + dVar36;
    local_810 = dVar36 + dVar35;
    dStack_718 = *(double *)&pTVar34->field_0x8 - local_810;
    dStack_700 = *(double *)&pTVar34->field_0x8 + local_810;
    local_720 = *(double *)pTVar34 - local_810;
    local_710 = *(double *)&pTVar34->field_0x10 - local_810;
    local_708 = *(double *)pTVar34 + local_810;
    local_6f8 = *(double *)&pTVar34->field_0x10 + local_810;
    uVar39 = (undefined4)((ulonglong)dStack_718 >> 0x20);
    uStack_330 = 0;
    local_3e8.Max.ZW.m128d_f64[1] = 0.0;
    local_368._8_4_ = SUB84(dStack_718,0);
    local_368._0_8_ = local_720;
    local_368._12_4_ = uVar39;
    uStack_350 = 0;
    local_3e8.Min.XY.m128d_f64[1]._0_4_ = SUB84(dStack_718,0);
    local_3e8.Min.XY.m128d_f64[0] = local_720;
    local_3e8.Min.XY.m128d_f64[1]._4_4_ = uVar39;
    local_3e8.Min.ZW.m128d_f64[1] = 0.0;
    local_3e8.Min.ZW.m128d_f64[0] = local_710;
    local_3e8.Max.XY.m128d_f64[0] = local_708;
    local_3e8.Max.XY.m128d_f64[1] = dStack_700;
    local_3e8.Max.ZW.m128d_f64[0] = local_6f8;
    local_358 = local_710;
    local_348 = local_708;
    dStack_340 = dStack_700;
    local_338 = local_6f8;
    THierarchicalSpatialHash<int,double>::FindAllIntersections
              (&this->Spatial,&local_7a8,&local_3e8,(TFunctionRef<bool___cdecl(int)> *)&local_698);
    if (local_8b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8b0.Data);
    }
    local_8b0.Data = local_7a8.AllocatorInstance.Data;
    iVar29 = iVar29 + 1;
    local_8a8 = local_7a8.ArrayNum;
    local_8a4 = local_7a8.ArrayMax;
    local_7a8.ArrayNum = 0;
    local_7a8.ArrayMax = 0;
    local_7a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  bVar12 = false;
LAB_143ec185f:
  uVar23 = (ulonglong)local_8a8;
  local_898 = __real_7fefffffffffffff;
  local_7c8 = local_8b0.Data + uVar23 * 4;
  local_828 = CONCAT44(local_828._4_4_,local_8a8);
  local_768 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_760 = _UNK_15060db28;
  FVar30.Data = local_8b0.Data;
  while( true ) {
    pFVar8 = local_7c8;
    pFVar38 = local_898;
    local_818 = FVar30.Data;
    if (local_8a8 != (int)uVar23) {
      local_8b5 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_8b5);
    }
    if (FVar30.Data == pFVar8) break;
    iVar29 = *(int *)&(this->Grid).field_0x38;
    iVar16 = iVar29 * *(int *)&(this->Grid).field_0x34;
    local_688 = ___xmm_7fefffffffffffff7fefffffffffffff;
    uStack_680 = _UNK_150a9e648;
    uVar45 = (undefined4)_UNK_150a9e648;
    uVar46 = (undefined4)((ulonglong)_UNK_150a9e648 >> 0x20);
    uVar41 = (undefined4)___xmm_7fefffffffffffff7fefffffffffffff;
    uVar42 = (undefined4)((ulonglong)___xmm_7fefffffffffffff7fefffffffffffff >> 0x20);
    pFVar38 = (FScriptContainerElement *)((longlong)*(int *)FVar30.Data / (longlong)iVar16);
    local_678 = ___xmm_ffefffffffffffff7fefffffffffffff;
    uStack_670 = _UNK_150a9e6d8;
    iVar15 = (int)pFVar38;
    local_870 = (FScriptContainerElement *)CONCAT44(local_870._4_4_,iVar15);
    uVar43 = (undefined4)_UNK_150a9e6d8;
    uVar44 = (undefined4)((ulonglong)_UNK_150a9e6d8 >> 0x20);
    auVar47._8_8_ = 0;
    auVar47._0_8_ = ___xmm_ffefffffffffffff7fefffffffffffff;
    local_668 = ___xmm_ffefffffffffffffffefffffffffffff;
    uStack_660 = _UNK_1508ffb58;
    uVar39 = (undefined4)_UNK_1508ffb58;
    uVar40 = (undefined4)((ulonglong)_UNK_1508ffb58 >> 0x20);
    iVar16 = *(int *)FVar30.Data - iVar16 * iVar15;
    uVar23 = (longlong)iVar16 / (longlong)iVar29;
    iVar32 = (int)uVar23;
    uVar23 = uVar23 & 0xffffffff;
    local_880 = CONCAT44(local_880._4_4_,iVar32);
    iVar16 = iVar16 - iVar29 * iVar32;
    local_878 = (FScriptContainerElement *)CONCAT44(local_878._4_4_,iVar16);
    iVar29 = 0;
    dVar35 = ___xmm_ffefffffffffffffffefffffffffffff;
    do {
      iVar32 = 0;
      do {
        iVar25 = 0;
        do {
          uVar33 = ((iVar29 + iVar15) * *(int *)&(this->DeformedPoints).field_0x4 + iVar32 +
                   (int)uVar23) * *(int *)&(this->DeformedPoints).field_0x8 + iVar25 + iVar16;
          uVar26 = 0;
          if ((int)uVar33 < *(int *)&(this->DeformedPoints).field_0x18) {
            uVar26 = ~uVar33 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            uVar13 = (*pcVar4)();
            return (bool)uVar13;
          }
          pTVar34 = local_868;
          lVar20 = (longlong)(int)uVar33;
          iVar25 = iVar25 + 1;
          lVar18 = *(longlong *)&(this->DeformedPoints).field_0x10;
          dVar36 = *(double *)(lVar18 + 0x10 + lVar20 * 0x18);
          if (dVar36 <= auVar47._0_8_) {
            auVar47._0_8_ = dVar36;
          }
          dVar36 = *(double *)(lVar18 + 8 + lVar20 * 0x18);
          if (dVar36 <= (double)CONCAT44(uVar46,uVar45)) {
            uVar45 = SUB84(dVar36,0);
            uVar46 = (undefined4)((ulonglong)dVar36 >> 0x20);
          }
          dVar36 = *(double *)(lVar18 + lVar20 * 0x18);
          if (dVar36 <= (double)CONCAT44(uVar42,uVar41)) {
            uVar41 = SUB84(dVar36,0);
            uVar42 = (undefined4)((ulonglong)dVar36 >> 0x20);
          }
          dVar36 = *(double *)(lVar18 + 0x10 + lVar20 * 0x18);
          if ((double)CONCAT44(uVar40,uVar39) <= dVar36) {
            uVar39 = SUB84(dVar36,0);
            uVar40 = (undefined4)((ulonglong)dVar36 >> 0x20);
          }
          dVar36 = *(double *)(lVar18 + 8 + lVar20 * 0x18);
          if (dVar35 <= dVar36) {
            dVar35 = dVar36;
          }
          dVar36 = *(double *)(lVar18 + lVar20 * 0x18);
          if ((double)CONCAT44(uVar44,uVar43) <= dVar36) {
            uVar43 = SUB84(dVar36,0);
            uVar44 = (undefined4)((ulonglong)dVar36 >> 0x20);
          }
          uVar23 = local_880 & 0xffffffff;
        } while (iVar25 < 2);
        iVar32 = iVar32 + 1;
      } while (iVar32 < 2);
      iVar29 = iVar29 + 1;
    } while (iVar29 < 2);
    dVar36 = *(double *)local_868;
    dVar37 = *(double *)&local_868->field_0x10;
    local_6f0[3] = (double)CONCAT44(uVar42,uVar41) - dVar36;
    dVar3 = *(double *)&local_868->field_0x8;
    local_6f0[5] = auVar47._0_8_ - dVar37;
    local_6f0[4] = (double)CONCAT44(uVar46,uVar45) - dVar3;
    local_6f0[2] = dVar37 - (double)CONCAT44(uVar40,uVar39);
    local_6f0[1] = dVar3 - dVar35;
    local_6f0[0] = dVar36 - (double)CONCAT44(uVar44,uVar43);
    if ((((double)CONCAT44(uVar44,uVar43) <= dVar36 && dVar36 != (double)CONCAT44(uVar44,uVar43)) ||
        (dVar35 < dVar3)) ||
       (((double)CONCAT44(uVar40,uVar39) <= dVar37 && dVar37 != (double)CONCAT44(uVar40,uVar39) ||
        (((dVar36 < (double)CONCAT44(uVar42,uVar41) || (dVar3 < (double)CONCAT44(uVar46,uVar45))) ||
         (dVar37 < auVar47._0_8_)))))) {
      lVar18 = 0;
      do {
        dVar35 = *(double *)((longlong)local_6f0 + lVar18);
        if (dVar35 <= 0.0) {
          dVar35 = *(double *)((longlong)local_6f0 + lVar18 + 0x18);
          if (dVar35 <= 0.0) {
            dVar35 = 0.0;
          }
          else {
            dVar35 = (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) ^ local_7b8._4_4_,
                                      SUB84(dVar35,0) ^ local_7b8._0_4_);
          }
        }
        *(double *)((longlong)&local_7f8 + lVar18) = dVar35;
        lVar18 = lVar18 + 8;
      } while (lVar18 < 0x18);
      dVar35 = TVector<double,3>::SafeNormalize
                         ((TVector<double,3> *)&local_7f8._s_0,__real_3f1a36e2e0000000);
      if (dVar35 < __real_3f1a36e2e0000000) {
        if (local_7f8._s_0.X <= 0.0) {
          if (local_7f8._s_0.X < 0.0) {
            local_7f8._s_0.X = __real_bff0000000000000;
          }
        }
        else {
          local_7f8._s_0.X = __real_3ff0000000000000;
        }
        if (local_7f8._s_0.Y <= 0.0) {
          if (local_7f8._s_0.Y < 0.0) {
            local_7f8._s_0.Y = __real_bff0000000000000;
          }
        }
        else {
          local_7f8._s_0.Y = __real_3ff0000000000000;
        }
        if (local_7f8._s_0.Z <= 0.0) {
          if (local_7f8._s_0.Z < 0.0) {
            local_7f8._s_0.Z = __real_bff0000000000000;
          }
        }
        else {
          local_7f8._s_0.Z = __real_3ff0000000000000;
        }
        UE::Math::TVector<double>::Normalize
                  ((TVector<double> *)&local_7f8._s_0,__real_3e45798ee0000000);
      }
    }
    else {
      dVar35 = local_6f0[4];
      if (local_6f0[4] <= local_6f0[1]) {
        dVar35 = local_6f0[1];
      }
      dVar36 = local_6f0[0];
      if (local_6f0[0] <= local_6f0[3]) {
        dVar36 = local_6f0[3];
      }
      dVar37 = local_6f0[5];
      if (local_6f0[5] <= local_6f0[2]) {
        dVar37 = local_6f0[2];
      }
      if (dVar36 <= dVar35) {
        if (dVar35 <= dVar37) goto LAB_143ec1cb6;
        lVar18 = 1;
      }
      else if (dVar36 <= dVar37) {
LAB_143ec1cb6:
        lVar18 = 2;
        dVar35 = dVar37;
      }
      else {
        lVar18 = 0;
        dVar35 = dVar36;
      }
      if (local_6f0[lVar18] <= local_6f0[lVar18 + 3]) {
        pTVar22 = TVector<double,3>::AxisVector(&local_288,(int)lVar18);
        local_4b0._0_4_ = *(uint *)pTVar22 ^ local_7b8._0_4_;
        local_4b0._4_4_ = *(uint *)&pTVar22->field_0x4 ^ local_7b8._4_4_;
        local_4b0._8_4_ = *(uint *)&pTVar22->field_0x8 ^ local_7b8._8_4_;
        local_4b0._12_4_ = *(uint *)&pTVar22->field_0xc ^ local_7b8._12_4_;
        pTVar21 = &local_4b0;
        local_4b0._16_4_ = (uint)*(undefined8 *)&pTVar22->field_0x10 ^ local_7b8._0_4_;
        local_4b0._20_4_ =
             (uint)((ulonglong)*(undefined8 *)&pTVar22->field_0x10 >> 0x20) ^ local_7b8._4_4_;
      }
      else {
        pTVar21 = TVector<double,3>::AxisVector(&local_2b8,(int)lVar18);
      }
      local_7f8._s_0.X = (double)*(undefined8 *)pTVar21;
      local_7f8._s_0.Y = (double)*(undefined8 *)&pTVar21->field_0x8;
      local_7f8._s_0.Z = (double)*(undefined8 *)&pTVar21->field_0x10;
    }
    pFVar8 = local_898;
    if (dVar35 * dVar35 <= (double)local_898) {
      piVar31 = &FEmbeddingCoordinate::OddIndexTetrahedraOffsets[0].V[3].field0_0x0._s_0.Y;
      iVar32 = 0;
      iVar29 = (int)local_880;
      if (((int)local_880 + iVar15 + iVar16 & 1U) == 0) {
        piVar31 = &FEmbeddingCoordinate::EvenIndexTetrahedraOffsets[0].V[3].field0_0x0._s_0.Y;
      }
      do {
        uVar33 = ((((TVector<int,3>_u_0_s_0 *)(piVar31 + -1))->X + (int)pFVar38) *
                  *(int *)&(this->DeformedPoints).field_0x4 + *piVar31 + iVar29) *
                 *(int *)&(this->DeformedPoints).field_0x8 + piVar31[1] + iVar16;
        uVar26 = 0;
        if ((int)uVar33 < *(int *)&(this->DeformedPoints).field_0x18) {
          uVar26 = ~uVar33 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return (bool)uVar13;
        }
        local_808 = (longlong)(int)uVar33 * 3;
        local_898 = *(FScriptContainerElement **)&(this->DeformedPoints).field_0x10;
        uVar33 = ((piVar31[-4] + (int)pFVar38) * *(int *)&(this->DeformedPoints).field_0x4 +
                  piVar31[-3] + iVar29) * *(int *)&(this->DeformedPoints).field_0x8 + piVar31[-2] +
                 iVar16;
        uVar26 = 0;
        if ((int)uVar33 < *(int *)&(this->DeformedPoints).field_0x18) {
          uVar26 = ~uVar33 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return (bool)uVar13;
        }
        local_800 = *(FScriptContainerElement **)&(this->DeformedPoints).field_0x10;
        uVar27 = ((piVar31[-7] + (int)local_870) * *(int *)&(this->DeformedPoints).field_0x4 +
                  piVar31[-6] + iVar29) * *(int *)&(this->DeformedPoints).field_0x8 + piVar31[-5] +
                 iVar16;
        uVar26 = 0;
        if ((int)uVar27 < *(int *)&(this->DeformedPoints).field_0x18) {
          uVar26 = ~uVar27 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return (bool)uVar13;
        }
        lVar18 = *(longlong *)&(this->DeformedPoints).field_0x10;
        uVar28 = ((piVar31[-10] + (int)local_870) * *(int *)&(this->DeformedPoints).field_0x4 +
                  piVar31[-9] + (int)local_880) * *(int *)&(this->DeformedPoints).field_0x8 +
                 piVar31[-8] + (int)local_878;
        uVar26 = 0;
        if ((int)uVar28 < *(int *)&(this->DeformedPoints).field_0x18) {
          uVar26 = ~uVar28 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return (bool)uVar13;
        }
        pTVar34 = local_868;
        lVar20 = *(longlong *)&(this->DeformedPoints).field_0x10;
        puVar2 = (undefined8 *)(lVar20 + (longlong)(int)uVar28 * 0x18);
        local_1a8.X[0]._0_8_ = *puVar2;
        local_1a8.X[0]._8_8_ = puVar2[1];
        local_1a8.X[0]._16_8_ = *(undefined8 *)(lVar20 + 0x10 + (longlong)(int)uVar28 * 0x18);
        puVar2 = (undefined8 *)(lVar18 + (longlong)(int)uVar27 * 0x18);
        local_1a8.X[1]._0_8_ = *puVar2;
        local_1a8.X[1]._8_8_ = puVar2[1];
        local_1a8.X[1]._16_8_ = *(undefined8 *)(lVar18 + 0x10 + (longlong)(int)uVar27 * 0x18);
        local_1a8.X[2]._0_8_ = *(undefined8 *)(local_800 + (longlong)(int)uVar33 * 0x18);
        local_1a8.X[2]._8_8_ = *(undefined8 *)(local_800 + (longlong)(int)uVar33 * 0x18 + 8);
        local_1a8.X[2]._16_8_ = *(undefined8 *)(local_800 + (longlong)(int)uVar33 * 0x18 + 0x10);
        local_1a8.X[3]._0_8_ = *(undefined8 *)(local_898 + local_808 * 8);
        local_1a8.X[3]._8_8_ = *(undefined8 *)(local_898 + local_808 * 8 + 8);
        local_1a8.X[3]._16_8_ = *(undefined8 *)(local_898 + local_808 * 8 + 0x10);
        local_568._0_8_ = 0;
        local_568._8_8_ = 0;
        local_568._16_8_ = ___xmm_3ff00000000000000000000000000000;
        local_568._24_8_ = _UNK_15061cbc8;
        TTetrahedron<double>::FindClosestPointAndBary
                  (&local_1a8,(TVector<double,3> *)&local_5f0,local_868,&local_568,0.0);
        dVar36 = *(double *)&pTVar34->field_0x8 - local_5e8;
        dVar35 = *(double *)&pTVar34->field_0x10 - local_5e0;
        pFVar38 = (FScriptContainerElement *)
                  (dVar36 * dVar36 +
                   (*(double *)pTVar34 - local_5f0) * (*(double *)pTVar34 - local_5f0) +
                  dVar35 * dVar35);
        if ((double)pFVar38 < (double)pFVar8) {
          local_648._24_4_ = (int)local_870;
          local_648._28_4_ = (int)local_880;
          iStack_628 = (int)local_878;
          iStack_624 = iVar32;
          local_768 = CONCAT44((int)local_880,(int)local_870);
          uStack_760 = CONCAT44(iVar32,(int)local_878);
          local_620._0_8_ = local_568._0_8_;
          local_620._8_8_ = local_568._8_8_;
          local_758._0_8_ = local_568._0_8_;
          local_758._8_8_ = local_568._8_8_;
          local_620._16_8_ = local_568._16_8_;
          local_758._16_8_ = local_568._16_8_;
          pFVar8 = pFVar38;
        }
        iVar32 = iVar32 + 1;
        piVar31 = piVar31 + 0xc;
        iVar16 = (int)local_878;
        iVar29 = (int)local_880;
        pFVar38 = local_870;
      } while (iVar32 < 5);
    }
    local_898 = pFVar8;
    uVar23 = local_828 & 0xffffffff;
    FVar30.Data = local_818 + 4;
  }
  if ((uStack_760._4_4_ == -1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ClosestPointCoord.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\WeightedLatticeImplicitObject.cpp"
                          ,0x1ee,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  if ((!bVar12) && (local_810 * local_810 < (double)pFVar38)) {
    local_418 = *(double *)pTVar34;
    dStack_410 = *(double *)&pTVar34->field_0x8;
    local_6b8 = local_85f;
    local_408 = *(double *)&pTVar34->field_0x10;
    local_3a8.Max.XY.m128d_f64[1] = SQRT((double)pFVar38);
    local_6c0 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::THierarchicalSpatialHash<int,double>::FindAllIntersections'::__l2::<lambda_1>,bool,int>
                ::Call;
    local_3a8.Min.ZW.m128d_f64[0] = local_408 - local_3a8.Max.XY.m128d_f64[1];
    uVar39 = SUB84(dStack_410 - local_3a8.Max.XY.m128d_f64[1],0);
    uVar40 = (undefined4)((ulonglong)(dStack_410 - local_3a8.Max.XY.m128d_f64[1]) >> 0x20);
    local_328._8_4_ = uVar39;
    local_328._0_8_ = local_418 - local_3a8.Max.XY.m128d_f64[1];
    local_328._12_4_ = uVar40;
    uStack_310 = 0;
    local_3a8.Max.XY.m128d_f64[0] = local_3a8.Max.XY.m128d_f64[1] + local_418;
    local_3a8.Min.XY.m128d_f64[1]._0_4_ = uVar39;
    local_3a8.Min.XY.m128d_f64[0] = local_418 - local_3a8.Max.XY.m128d_f64[1];
    local_3a8.Min.XY.m128d_f64[1]._4_4_ = uVar40;
    local_3a8.Max.ZW.m128d_f64[0] = local_3a8.Max.XY.m128d_f64[1] + local_408;
    local_3a8.Max.XY.m128d_f64[1] = local_3a8.Max.XY.m128d_f64[1] + dStack_410;
    local_3a8.Min.ZW.m128d_f64[1] = 0.0;
    uStack_2f0 = 0;
    local_3a8.Max.ZW.m128d_f64[1] = 0.0;
    local_400 = local_418;
    dStack_3f8 = dStack_410;
    local_3f0 = local_408;
    local_318 = local_3a8.Min.ZW.m128d_f64[0];
    local_308 = local_3a8.Max.XY.m128d_f64[0];
    dStack_300 = local_3a8.Max.XY.m128d_f64[1];
    local_2f8 = local_3a8.Max.ZW.m128d_f64[0];
    THierarchicalSpatialHash<int,double>::FindAllIntersections
              (&this->Spatial,&local_730,&local_3a8,(TFunctionRef<bool___cdecl(int)> *)&local_6c0);
    iStack_6a0 = local_8a8;
    local_6a8 = local_8b0.Data;
    if ((local_8a8 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar4 = (code *)swi(3);
      uVar13 = (*pcVar4)();
      return (bool)uVar13;
    }
    local_458[0]._12_4_ = uStack_69c;
    local_458[0].ArrayNum = iStack_6a0;
    local_458[0].DataPtr = (int *)local_6a8;
    local_1f8.Elements._0_8_ = 0;
    local_1f8.Elements._8_8_ = 0;
    local_1f8.Elements._32_8_ = 0;
    local_1f8.Elements._40_4_ = 0;
    local_1f8.Elements._44_4_ = 0x80;
    local_1f8.Elements._48_4_ = 0xffffffff;
    local_1f8.Elements._52_4_ = 0;
    local_1f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_1f8.HashSize = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append(&local_1f8,local_458);
    uVar23 = (ulonglong)local_730.ArrayNum;
    local_828 = CONCAT44(local_828._4_4_,local_730.ArrayNum);
    pFVar38 = local_730.AllocatorInstance.Data + uVar23 * 4;
    FVar30.Data = local_730.AllocatorInstance.Data;
    local_870 = pFVar38;
    while( true ) {
      local_878 = FVar30.Data;
      if (local_730.ArrayNum != (int)uVar23) {
        local_8b4[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_8b4);
      }
      if (FVar30.Data == pFVar38) break;
      uVar26 = *(uint *)FVar30.Data;
      if (local_1f8.Elements._8_4_ != local_1f8.Elements._52_4_) {
        FVar24 = (ForElementType<FSetElementId>)&local_1f8.Hash;
        if (local_1f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar24 = local_1f8.Hash.SecondaryData;
        }
        for (iVar29 = *(int *)((longlong)FVar24 + (ulonglong)(local_1f8.HashSize - 1U & uVar26) * 4)
            ; iVar29 != -1; iVar29 = *(int *)(local_1f8.Elements._0_8_ + 4 + (longlong)iVar29 * 0xc)
            ) {
          pFVar8 = local_898;
          if (*(uint *)(local_1f8.Elements._0_8_ + (longlong)iVar29 * 0xc) == uVar26)
          goto LAB_143ec2b59;
        }
      }
      iVar29 = *(int *)&(this->Grid).field_0x38;
      iVar15 = iVar29 * *(int *)&(this->Grid).field_0x34;
      iVar16 = (int)uVar26 / iVar15;
      iVar32 = uVar26 - iVar15 * iVar16;
      iVar15 = iVar32 / iVar29;
      local_7e0._s_0.Y = (double)CONCAT44(iVar15,iVar16);
      iVar32 = iVar32 - iVar29 * iVar15;
      local_7e0._16_4_ = iVar32;
      local_498._16_8_ = local_7e0._s_0.Z;
      local_7e0._s_0.X = (double)this;
      local_498._0_8_ = this;
      local_498._8_8_ = local_7e0._s_0.Y;
      FWeightedLatticeBvEntry::BoundingBox
                ((FWeightedLatticeBvEntry *)local_498,(TAABB<double,3> *)&local_548);
      dVar35 = *(double *)pTVar34;
      dVar36 = *(double *)&pTVar34->field_0x10;
      dVar37 = *(double *)&pTVar34->field_0x8;
      dVar3 = local_538 - dVar36;
      uVar6 = dVar36 - local_520;
      local_5d8._s_0.X = dVar35 - local_530;
      uVar5 = dVar37 - local_528;
      local_7e0._s_0.X = local_548 - dVar35;
      dVar7 = local_540 - dVar37;
      local_7e0._s_0.Y = dVar7;
      local_7e0._s_0.Z = dVar3;
      local_5d8._s_0.Y = (double)uVar5;
      local_5d8._s_0.Z = (double)uVar6;
      if (((((local_530 < dVar35) || (local_528 < dVar37)) || (local_520 < dVar36)) ||
          ((dVar35 < local_548 || (dVar37 < local_540)))) || (dVar36 < local_538)) {
        uVar11 = local_5d8._s_0.X;
        if (local_5d8._s_0.X <= 0.0) {
          if (local_7e0._s_0.X <= 0.0) {
            local_840._s_0.X = 0.0;
            uVar11 = local_840._s_0.X;
            goto LAB_143ec2694;
          }
          dVar35 = UE::Math::TVector<double>::Component((TVector<double> *)&local_7e0._s_0,0);
          local_840._s_0.X =
               (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) ^ local_7b8._4_4_,
                                SUB84(dVar35,0) ^ local_7b8._0_4_);
          uVar26 = local_7b8._0_4_;
          uVar33 = local_7b8._4_4_;
        }
        else {
LAB_143ec2694:
          local_840._s_0.X = (double)uVar11;
          uVar26 = local_7b8._0_4_;
          uVar33 = local_7b8._4_4_;
        }
        if ((double)uVar5 <= 0.0) {
          if (dVar7 <= 0.0) {
            local_840._s_0.Y = 0.0;
            uVar5 = local_840._s_0.Y;
          }
          else {
            dVar35 = UE::Math::TVector<double>::Component((TVector<double> *)&local_7e0._s_0,1);
            uVar5 = CONCAT44((uint)((ulonglong)dVar35 >> 0x20) ^ uVar33,SUB84(dVar35,0) ^ uVar26);
          }
        }
        local_840._s_0.Y = (double)uVar5;
        if ((double)uVar6 <= 0.0) {
          if (dVar3 <= 0.0) {
            local_840._s_0.Z = 0.0;
            uVar6 = local_840._s_0.Z;
          }
          else {
            dVar35 = UE::Math::TVector<double>::Component((TVector<double> *)&local_7e0._s_0,2);
            uVar6 = CONCAT44((uint)((ulonglong)dVar35 >> 0x20) ^ uVar33,SUB84(dVar35,0) ^ uVar26);
          }
        }
        local_840._s_0.Z = (double)uVar6;
        dVar35 = TVector<double,3>::SafeNormalize
                           ((TVector<double,3> *)&local_840._s_0,__real_3f1a36e2e0000000);
        if (dVar35 < __real_3f1a36e2e0000000) {
          if (local_840._s_0.X <= 0.0) {
            if (local_840._s_0.X < 0.0) {
              local_840._s_0.X = __real_bff0000000000000;
            }
          }
          else {
            local_840._s_0.X = __real_3ff0000000000000;
          }
          if (local_840._s_0.Y <= 0.0) {
            if (local_840._s_0.Y < 0.0) {
              local_840._s_0.Y = __real_bff0000000000000;
            }
          }
          else {
            local_840._s_0.Y = __real_3ff0000000000000;
          }
          if (local_840._s_0.Z <= 0.0) {
            if (local_840._s_0.Z < 0.0) {
              local_840._s_0.Z = __real_bff0000000000000;
            }
          }
          else {
            local_840._s_0.Z = __real_3ff0000000000000;
          }
          UE::Math::TVector<double>::Normalize
                    ((TVector<double> *)&local_840._s_0,__real_3e45798ee0000000);
        }
      }
      else {
        dVar35 = (double)uVar5;
        if ((double)uVar5 <= dVar7) {
          dVar35 = dVar7;
        }
        dVar36 = local_5d8._s_0.X;
        if (local_5d8._s_0.X <= local_7e0._s_0.X) {
          dVar36 = local_7e0._s_0.X;
        }
        if (dVar3 <= (double)uVar6) {
          dVar3 = (double)uVar6;
        }
        if (dVar36 <= dVar35) {
          if (dVar35 <= dVar3) goto LAB_143ec25d5;
          iVar29 = 1;
        }
        else if (dVar36 <= dVar3) {
LAB_143ec25d5:
          iVar29 = 2;
          dVar35 = dVar3;
        }
        else {
          iVar29 = 0;
          dVar35 = dVar36;
        }
        dVar36 = UE::Math::TVector<double>::Component((TVector<double> *)&local_5d8._s_0,iVar29);
        dVar37 = UE::Math::TVector<double>::Component((TVector<double> *)&local_7e0._s_0,iVar29);
        if (dVar36 <= dVar37) {
          pTVar22 = TVector<double,3>::AxisVector(&local_270,iVar29);
          local_480._0_4_ = *(uint *)pTVar22 ^ local_7b8._0_4_;
          local_480._4_4_ = *(uint *)&pTVar22->field_0x4 ^ local_7b8._4_4_;
          local_480._8_4_ = *(uint *)&pTVar22->field_0x8 ^ local_7b8._8_4_;
          local_480._12_4_ = *(uint *)&pTVar22->field_0xc ^ local_7b8._12_4_;
          pTVar21 = &local_480;
          local_480._16_4_ = (uint)*(undefined8 *)&pTVar22->field_0x10 ^ local_7b8._0_4_;
          local_480._20_4_ =
               (uint)((ulonglong)*(undefined8 *)&pTVar22->field_0x10 >> 0x20) ^ local_7b8._4_4_;
        }
        else {
          pTVar21 = TVector<double,3>::AxisVector(&local_2a0,iVar29);
        }
        local_840._s_0.X = (double)*(undefined8 *)pTVar21;
        local_840._s_0.Y = (double)*(undefined8 *)&pTVar21->field_0x8;
        local_840._s_0.Z = (double)*(undefined8 *)&pTVar21->field_0x10;
        FVar30.Data = local_878;
      }
      pFVar8 = local_898;
      if (dVar35 * dVar35 <= (double)local_898) {
        piVar31 = &FEmbeddingCoordinate::OddIndexTetrahedraOffsets[0].V[3].field0_0x0._s_0.Y;
        iVar29 = 0;
        if ((iVar16 + iVar15 + iVar32 & 1U) == 0) {
          piVar31 = &FEmbeddingCoordinate::EvenIndexTetrahedraOffsets[0].V[3].field0_0x0._s_0.Y;
          iVar29 = 0;
        }
        do {
          uVar33 = ((((TVector<int,3>_u_0_s_0 *)(piVar31 + -1))->X + iVar16) *
                    *(int *)&(this->DeformedPoints).field_0x4 + *piVar31 + iVar15) *
                   *(int *)&(this->DeformedPoints).field_0x8 + piVar31[1] + iVar32;
          uVar26 = 0;
          if ((int)uVar33 < *(int *)&(this->DeformedPoints).field_0x18) {
            uVar26 = ~uVar33 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            uVar13 = (*pcVar4)();
            return (bool)uVar13;
          }
          local_818 = (FScriptContainerElement *)((longlong)(int)uVar33 * 3);
          local_898 = *(FScriptContainerElement **)&(this->DeformedPoints).field_0x10;
          uVar33 = ((piVar31[-4] + iVar16) * *(int *)&(this->DeformedPoints).field_0x4 + piVar31[-3]
                   + iVar15) * *(int *)&(this->DeformedPoints).field_0x8 + piVar31[-2] + iVar32;
          uVar26 = 0;
          if ((int)uVar33 < *(int *)&(this->DeformedPoints).field_0x18) {
            uVar26 = ~uVar33 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            uVar13 = (*pcVar4)();
            return (bool)uVar13;
          }
          local_808 = (longlong)(int)uVar33 * 3;
          local_810 = *(double *)&(this->DeformedPoints).field_0x10;
          uVar33 = ((piVar31[-7] + iVar16) * *(int *)&(this->DeformedPoints).field_0x4 + piVar31[-6]
                   + iVar15) * *(int *)&(this->DeformedPoints).field_0x8 + piVar31[-5] + iVar32;
          uVar26 = 0;
          if ((int)uVar33 < *(int *)&(this->DeformedPoints).field_0x18) {
            uVar26 = ~uVar33 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            uVar13 = (*pcVar4)();
            return (bool)uVar13;
          }
          local_7c8 = (FScriptContainerElement *)((longlong)(int)uVar33 * 3);
          local_800 = *(FScriptContainerElement **)&(this->DeformedPoints).field_0x10;
          uVar33 = ((piVar31[-10] + iVar16) * *(int *)&(this->DeformedPoints).field_0x4 +
                    piVar31[-9] + iVar15) * *(int *)&(this->DeformedPoints).field_0x8 + piVar31[-8]
                   + iVar32;
          uVar26 = 0;
          if ((int)uVar33 < *(int *)&(this->DeformedPoints).field_0x18) {
            uVar26 = ~uVar33 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            uVar13 = (*pcVar4)();
            return (bool)uVar13;
          }
          pTVar34 = local_868;
          lVar18 = *(longlong *)&(this->DeformedPoints).field_0x10;
          puVar2 = (undefined8 *)(lVar18 + (longlong)(int)uVar33 * 0x18);
          local_148.X[0]._0_8_ = *puVar2;
          local_148.X[0]._8_8_ = puVar2[1];
          local_148.X[0]._16_8_ = *(undefined8 *)(lVar18 + 0x10 + (longlong)(int)uVar33 * 0x18);
          local_148.X[1]._0_8_ = *(undefined8 *)(local_800 + (longlong)local_7c8 * 8);
          local_148.X[1]._8_8_ = *(undefined8 *)(local_800 + (longlong)local_7c8 * 8 + 8);
          local_148.X[1]._16_8_ = *(undefined8 *)(local_800 + (longlong)local_7c8 * 8 + 0x10);
          puVar2 = (undefined8 *)((longlong)local_810 + local_808 * 8);
          local_148.X[2]._0_8_ = *puVar2;
          local_148.X[2]._8_8_ = puVar2[1];
          local_148.X[2]._16_8_ = *(undefined8 *)((longlong)local_810 + 0x10 + local_808 * 8);
          local_148.X[3]._0_8_ = *(undefined8 *)(local_898 + (longlong)local_818 * 8);
          local_148.X[3]._8_8_ = *(undefined8 *)(local_898 + (longlong)local_818 * 8 + 8);
          local_148.X[3]._16_8_ = *(undefined8 *)(local_898 + (longlong)local_818 * 8 + 0x10);
          local_588._0_8_ = 0;
          local_588._8_8_ = 0;
          local_588._16_8_ = ___xmm_3ff00000000000000000000000000000;
          local_588._24_8_ = _UNK_15061cbc8;
          TTetrahedron<double>::FindClosestPointAndBary
                    (&local_148,(TVector<double,3> *)&local_5c0,local_868,&local_588,0.0);
          dVar36 = *(double *)&pTVar34->field_0x8 - local_5b8;
          dVar35 = *(double *)&pTVar34->field_0x10 - local_5b0;
          pFVar38 = (FScriptContainerElement *)
                    (dVar36 * dVar36 +
                     (*(double *)pTVar34 - local_5c0) * (*(double *)pTVar34 - local_5c0) +
                    dVar35 * dVar35);
          if ((double)pFVar38 < (double)pFVar8) {
            local_658 = iVar16;
            iStack_654 = iVar15;
            iStack_650 = iVar32;
            iStack_64c = iVar29;
            local_768 = CONCAT44(iVar15,iVar16);
            uStack_760 = CONCAT44(iVar29,iVar32);
            local_648._0_8_ = local_588._0_8_;
            local_648._8_8_ = local_588._8_8_;
            local_758._0_8_ = local_588._0_8_;
            local_758._8_8_ = local_588._8_8_;
            local_648._16_8_ = local_588._16_8_;
            local_758._16_8_ = local_588._16_8_;
            pFVar8 = pFVar38;
          }
          iVar29 = iVar29 + 1;
          piVar31 = piVar31 + 0xc;
          pFVar38 = local_870;
          FVar30.Data = local_878;
          pTVar34 = local_868;
        } while (iVar29 < 5);
      }
LAB_143ec2b59:
      local_898 = pFVar8;
      uVar23 = local_828 & 0xffffffff;
      FVar30.Data = FVar30.Data + 4;
    }
    local_1f8.HashSize = 0;
    if (local_1f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1f8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1f8.Elements);
    if (local_730.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_730.AllocatorInstance.Data);
    }
  }
  if ((uStack_760._4_4_ == -1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ClosestPointCoord.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\WeightedLatticeImplicitObject.cpp"
                          ,0x21a,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  pTVar10 = local_820;
  pFVar38 = (local_820->AllocatorInstance).Data;
  piVar31 = &local_820->ArrayMax;
  if (((pFVar38 <= (FScriptContainerElement *)&local_768) &&
      ((FScriptContainerElement *)&local_768 < pFVar38 + (longlong)*piVar31 * 0x28)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  iVar29 = pTVar10->ArrayNum;
  if (iVar29 == *piVar31) {
    iVar29 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&pTVar10->AllocatorInstance,piVar31);
  }
  bVar12 = true;
  pTVar10->ArrayNum = iVar29 + 1;
  lVar18 = (longlong)iVar29;
  pFVar38 = (pTVar10->AllocatorInstance).Data;
  *(undefined8 *)(pFVar38 + lVar18 * 0x28) = local_768;
  *(undefined8 *)(pFVar38 + lVar18 * 0x28 + 8) = uStack_760;
  *(undefined8 *)(pFVar38 + lVar18 * 0x28 + 0x10) = local_758._0_8_;
  *(undefined8 *)(pFVar38 + lVar18 * 0x28 + 0x10 + 8) = local_758._8_8_;
  *(undefined8 *)(pFVar38 + lVar18 * 0x28 + 0x20) = local_758._16_8_;
LAB_143ec2cb1:
  if (local_8b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b0.Data);
  }
  return bVar12;
}

// GetTypeHashHelper @ 143ec3ce0

uint __thiscall
Chaos::FWeightedLatticeImplicitObject::GetTypeHashHelper
          (FWeightedLatticeImplicitObject *this,uint param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  ushort *puVar15;
  ulonglong uVar16;
  
  iVar4 = *(int *)&(this->BoneData).field_0x18;
  puVar10 = *(ushort **)&(this->BoneData).field_0x10;
  if ((iVar4 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return uVar7;
  }
  puVar9 = puVar10 + (longlong)iVar4 * 0x26;
  for (; puVar10 != puVar9; puVar10 = puVar10 + 0x26) {
    bVar2 = (byte)*puVar10;
    uVar7 = (uint)bVar2;
    if (bVar2 != 0) {
      puVar14 = (uint *)(puVar10 + 0xe);
      uVar16 = (ulonglong)bVar2;
      puVar15 = puVar10;
      do {
        puVar15 = puVar15 + 1;
        uVar3 = *puVar15;
        uVar12 = uVar7 - uVar3 ^ (uint)(uVar3 >> 0xd);
        uVar7 = (-0x61c88647 - uVar12) - (uint)uVar3 ^ uVar12 << 8;
        uVar8 = (uVar3 - uVar7) - uVar12 ^ uVar7 >> 0xd;
        uVar13 = (uVar12 - uVar8) - uVar7 ^ uVar8 >> 0xc;
        uVar7 = (uVar7 - uVar13) - uVar8 ^ uVar13 << 0x10;
        uVar12 = (uVar8 - uVar7) - uVar13 ^ uVar7 >> 5;
        uVar13 = (uVar13 - uVar12) - uVar7 ^ uVar12 >> 3;
        uVar8 = (uVar7 - uVar13) - uVar12 ^ uVar13 << 10;
        uVar7 = *puVar14;
        uVar12 = ((uVar12 - uVar8) - uVar13 ^ uVar8 >> 0xf) - uVar7 ^ uVar7 >> 0xd;
        uVar8 = (-0x61c88647 - uVar12) - uVar7 ^ uVar12 << 8;
        uVar13 = (uVar7 - uVar8) - uVar12 ^ uVar8 >> 0xd;
        uVar12 = (uVar12 - uVar8) - uVar13 ^ uVar13 >> 0xc;
        uVar7 = (uVar8 - uVar12) - uVar13 ^ uVar12 << 0x10;
        uVar13 = (uVar13 - uVar7) - uVar12 ^ uVar7 >> 5;
        uVar8 = (uVar12 - uVar13) - uVar7 ^ uVar13 >> 3;
        puVar14 = puVar14 + 1;
        uVar7 = (uVar7 - uVar8) - uVar13 ^ uVar8 << 10;
        uVar7 = (uVar13 - uVar7) - uVar8 ^ uVar7 >> 0xf;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    uVar12 = param_1 - uVar7 ^ uVar7 >> 0xd;
    uVar8 = (-0x61c88647 - uVar7) - uVar12 ^ uVar12 << 8;
    uVar13 = (uVar7 - uVar8) - uVar12 ^ uVar8 >> 0xd;
    uVar7 = (uVar12 - uVar13) - uVar8 ^ uVar13 >> 0xc;
    uVar8 = (uVar8 - uVar7) - uVar13 ^ uVar7 << 0x10;
    uVar12 = (uVar13 - uVar8) - uVar7 ^ uVar8 >> 5;
    uVar7 = (uVar7 - uVar12) - uVar8 ^ uVar12 >> 3;
    uVar8 = (uVar8 - uVar7) - uVar12 ^ uVar7 << 10;
    param_1 = (uVar12 - uVar8) - uVar7 ^ uVar8 >> 0xf;
  }
  iVar4 = *(int *)&(this->DeformedPoints).field_0x18;
  puVar11 = *(undefined8 **)&(this->DeformedPoints).field_0x10;
  if ((iVar4 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return uVar7;
  }
  puVar1 = puVar11 + (longlong)iVar4 * 3;
  for (; puVar11 != puVar1; puVar11 = puVar11 + 3) {
    uVar12 = (int)((ulonglong)puVar11[2] >> 0x20) * 0x17 + (int)puVar11[2];
    uVar8 = ((int)((ulonglong)puVar11[1] >> 0x20) * 0x17 - uVar12) + (int)puVar11[1] ^ uVar12 >> 0xd
    ;
    uVar7 = (-0x61c88647 - uVar8) - uVar12 ^ uVar8 << 8;
    uVar12 = (uVar12 - uVar7) - uVar8 ^ uVar7 >> 0xd;
    uVar8 = (uVar8 - uVar12) - uVar7 ^ uVar12 >> 0xc;
    uVar7 = (uVar7 - uVar8) - uVar12 ^ uVar8 << 0x10;
    uVar12 = (uVar12 - uVar7) - uVar8 ^ uVar7 >> 5;
    uVar8 = (uVar8 - uVar12) - uVar7 ^ uVar12 >> 3;
    uVar7 = (uVar7 - uVar8) - uVar12 ^ uVar8 << 10;
    uVar12 = (uVar12 - uVar7) - uVar8 ^ uVar7 >> 0xf;
    uVar8 = ((int)((ulonglong)*puVar11 >> 0x20) * 0x17 - uVar12) + (int)*puVar11 ^ uVar12 >> 0xd;
    uVar7 = (-0x61c88647 - uVar8) - uVar12 ^ uVar8 << 8;
    uVar12 = (uVar12 - uVar7) - uVar8 ^ uVar7 >> 0xd;
    uVar8 = (uVar8 - uVar12) - uVar7 ^ uVar12 >> 0xc;
    uVar7 = (uVar7 - uVar8) - uVar12 ^ uVar8 << 0x10;
    uVar12 = (uVar12 - uVar7) - uVar8 ^ uVar7 >> 5;
    uVar8 = (uVar8 - uVar12) - uVar7 ^ uVar12 >> 3;
    uVar7 = (uVar7 - uVar8) - uVar12 ^ uVar8 << 10;
    uVar12 = (uVar12 - uVar7) - uVar8 ^ uVar7 >> 0xf;
    uVar7 = param_1 - uVar12 ^ uVar12 >> 0xd;
    uVar8 = (-0x61c88647 - uVar7) - uVar12 ^ uVar7 << 8;
    uVar12 = (uVar12 - uVar8) - uVar7 ^ uVar8 >> 0xd;
    uVar7 = (uVar7 - uVar12) - uVar8 ^ uVar12 >> 0xc;
    uVar8 = (uVar8 - uVar7) - uVar12 ^ uVar7 << 0x10;
    uVar12 = (uVar12 - uVar8) - uVar7 ^ uVar8 >> 5;
    uVar7 = (uVar7 - uVar12) - uVar8 ^ uVar12 >> 3;
    uVar8 = (uVar8 - uVar7) - uVar12 ^ uVar7 << 10;
    param_1 = (uVar12 - uVar8) - uVar7 ^ uVar8 >> 0xf;
  }
  return param_1;
}

// InitializeDeformedPoints @ 143ec47c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FWeightedLatticeImplicitObject::InitializeDeformedPoints
          (FWeightedLatticeImplicitObject *this)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  double dVar24;
  
  iVar16 = *(int *)&(this->Grid).field_0x38 + 1;
  *(ulonglong *)&this->DeformedPoints =
       CONCAT44(*(int *)&(this->Grid).field_0x34 + 1,*(int *)&(this->Grid).field_0x30 + 1);
  *(int *)&(this->DeformedPoints).field_0x8 = iVar16;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)
             &(this->DeformedPoints).field_0x10,
             iVar16 * *(int *)&(this->DeformedPoints).field_0x4 * *(int *)&this->DeformedPoints,
             Default);
  iVar23 = 0;
  iVar21 = *(int *)&(this->Grid).field_0x30 + 1;
  iVar16 = *(int *)&(this->Grid).field_0x34 + 1;
  iVar22 = *(int *)&(this->Grid).field_0x38 + 1;
  if (0 < iVar21) {
    do {
      iVar19 = 0;
      if (0 < iVar16) {
        do {
          iVar18 = 0;
          if (0 < iVar22) {
            do {
              dVar10 = *(double *)&this->Grid;
              dVar11 = *(double *)&(this->Grid).field_0x8;
              dVar2 = *(double *)&(this->Grid).field_0x10;
              dVar3 = *(double *)&(this->Grid).field_0x40;
              dVar4 = *(double *)&(this->Grid).field_0x48;
              uVar20 = (iVar23 * *(int *)&(this->DeformedPoints).field_0x4 + iVar19) *
                       *(int *)&(this->DeformedPoints).field_0x8 + iVar18;
              dVar24 = (double)iVar18;
              uVar17 = 0;
              if ((int)uVar20 < *(int *)&(this->DeformedPoints).field_0x18) {
                uVar17 = ~uVar20 >> 0x1f;
              }
              dVar5 = *(double *)&(this->Grid).field_0x50;
              if ((uVar17 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar18 = iVar18 + 1;
              lVar8 = *(longlong *)&(this->DeformedPoints).field_0x10;
              pdVar1 = (double *)(lVar8 + (longlong)(int)uVar20 * 0x18);
              *pdVar1 = dVar10 + (double)iVar23 * dVar3;
              pdVar1[1] = dVar11 + (double)iVar19 * dVar4;
              *(double *)(lVar8 + 0x10 + (longlong)(int)uVar20 * 0x18) = dVar2 + dVar24 * dVar5;
            } while (iVar18 < iVar22);
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 < iVar16);
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 < iVar21);
  }
  uVar12 = *(undefined8 *)&(this->Grid).field_0x8;
  uVar13 = *(undefined8 *)&(this->Grid).field_0x18;
  uVar14 = *(undefined8 *)&(this->Grid).field_0x20;
  uVar6 = *(undefined8 *)&(this->Grid).field_0x10;
  uVar7 = *(undefined8 *)&(this->Grid).field_0x28;
  *(undefined8 *)&(this->LocalBoundingBox).MMin = *(undefined8 *)&this->Grid;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x8 = uVar12;
  *(undefined8 *)&(this->LocalBoundingBox).MMax = uVar13;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x8 = uVar14;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x10 = uVar6;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x10 = uVar7;
  return;
}

// Serialize @ 143ecc4a0

void __thiscall
Chaos::FWeightedLatticeImplicitObject::Serialize
          (FWeightedLatticeImplicitObject *this,FChaosArchive *param_1)

{
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  SerializeReal<double,3>((FArchive *)param_1,(TVector<double,3> *)&this->Grid);
  SerializeReal<double,3>((FArchive *)param_1,(TVector<double,3> *)&(this->Grid).field_0x18);
  operator<<<int,3>((FArchive *)param_1,(TVector<int,3> *)&(this->Grid).field_0x30);
  SerializeReal<double,3>((FArchive *)param_1,(TVector<double,3> *)&(this->Grid).field_0x40);
  operator<<<int,3>((FArchive *)param_1,(TVector<int,3> *)&this->BoneData);
  operator<<<Chaos::FWeightedLatticeInfluenceData_TSizedDefaultAllocator<32>_>
            (param_1,(TArray<Chaos::FWeightedLatticeInfluenceData,TSizedDefaultAllocator<32>_> *)
                     &(this->BoneData).field_0x10);
  operator<<<FName,TSizedDefaultAllocator<32>_>(param_1,&this->UsedBones);
  UE::Math::operator<<((FArchive *)param_1,&this->ReferenceRootTransform);
  operator<<<UE::Math::TTransform<double>_TSizedDefaultAllocator<32>_>
            (param_1,&this->ReferenceRelativeTransforms);
  if ((param_1->_padding_ & 1) != 0) {
    SetEmptyCells(this);
    InitializeDeformedPoints(this);
    this->bSpatialDirty = true;
  }
  return;
}

// SetEmptyCells @ 143ecca60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FWeightedLatticeImplicitObject::SetEmptyCells(FWeightedLatticeImplicitObject *this)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int local_48;
  int iStack_44;
  
  iVar3 = *(int *)&(this->Grid).field_0x38;
  *(undefined8 *)&this->EmptyCells = *(undefined8 *)&(this->Grid).field_0x30;
  *(int *)&(this->EmptyCells).field_0x8 = iVar3;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<bool,TSizedDefaultAllocator<32>_> *)&(this->EmptyCells).field_0x10,
             iVar3 * *(int *)&(this->EmptyCells).field_0x4 * *(int *)&this->EmptyCells,Default);
  uVar2 = *(undefined8 *)&(this->Grid).field_0x30;
  iVar11 = 0;
  iVar3 = *(int *)&(this->Grid).field_0x38;
  local_48 = (int)uVar2;
  if (0 < local_48) {
    iStack_44 = (int)((ulonglong)uVar2 >> 0x20);
    do {
      iVar10 = 0;
      if (0 < iStack_44) {
        do {
          iVar7 = 0;
          if (0 < iVar3) {
            do {
              uVar9 = (iVar11 * *(int *)&(this->BoneData).field_0x4 + iVar10) *
                      *(int *)&(this->BoneData).field_0x8 + iVar7;
              uVar6 = 0;
              if ((int)uVar9 < *(int *)&(this->BoneData).field_0x18) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (*(char *)((longlong)(int)uVar9 * 0x4c + *(longlong *)&(this->BoneData).field_0x10)
                  == '\0') {
LAB_143eccee4:
                uVar8 = 1;
              }
              else {
                uVar9 = (iVar11 * *(int *)&(this->BoneData).field_0x4 + iVar10) *
                        *(int *)&(this->BoneData).field_0x8 + 1 + iVar7;
                uVar6 = 0;
                if ((int)uVar9 < *(int *)&(this->BoneData).field_0x18) {
                  uVar6 = ~uVar9 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (*(char *)((longlong)(int)uVar9 * 0x4c +
                             *(longlong *)&(this->BoneData).field_0x10) == '\0') goto LAB_143eccee4;
                uVar9 = (iVar11 * *(int *)&(this->BoneData).field_0x4 + 1 + iVar10) *
                        *(int *)&(this->BoneData).field_0x8 + iVar7;
                uVar6 = 0;
                if ((int)uVar9 < *(int *)&(this->BoneData).field_0x18) {
                  uVar6 = ~uVar9 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (*(char *)((longlong)(int)uVar9 * 0x4c +
                             *(longlong *)&(this->BoneData).field_0x10) == '\0') goto LAB_143eccee4;
                uVar9 = (iVar11 * *(int *)&(this->BoneData).field_0x4 + 1 + iVar10) *
                        *(int *)&(this->BoneData).field_0x8 + 1 + iVar7;
                uVar6 = 0;
                if ((int)uVar9 < *(int *)&(this->BoneData).field_0x18) {
                  uVar6 = ~uVar9 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (*(char *)((longlong)(int)uVar9 * 0x4c +
                             *(longlong *)&(this->BoneData).field_0x10) == '\0') goto LAB_143eccee4;
                iVar1 = iVar11 + 1;
                uVar9 = (iVar1 * *(int *)&(this->BoneData).field_0x4 + iVar10) *
                        *(int *)&(this->BoneData).field_0x8 + iVar7;
                uVar6 = 0;
                if ((int)uVar9 < *(int *)&(this->BoneData).field_0x18) {
                  uVar6 = ~uVar9 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (*(char *)((longlong)(int)uVar9 * 0x4c +
                             *(longlong *)&(this->BoneData).field_0x10) == '\0') goto LAB_143eccee4;
                uVar9 = (iVar1 * *(int *)&(this->BoneData).field_0x4 + iVar10) *
                        *(int *)&(this->BoneData).field_0x8 + 1 + iVar7;
                uVar6 = 0;
                if ((int)uVar9 < *(int *)&(this->BoneData).field_0x18) {
                  uVar6 = ~uVar9 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (*(char *)((longlong)(int)uVar9 * 0x4c +
                             *(longlong *)&(this->BoneData).field_0x10) == '\0') goto LAB_143eccee4;
                uVar9 = (iVar1 * *(int *)&(this->BoneData).field_0x4 + 1 + iVar10) *
                        *(int *)&(this->BoneData).field_0x8 + iVar7;
                uVar6 = 0;
                if ((int)uVar9 < *(int *)&(this->BoneData).field_0x18) {
                  uVar6 = ~uVar9 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (*(char *)((longlong)(int)uVar9 * 0x4c +
                             *(longlong *)&(this->BoneData).field_0x10) == '\0') goto LAB_143eccee4;
                uVar9 = (iVar1 * *(int *)&(this->BoneData).field_0x4 + 1 + iVar10) *
                        *(int *)&(this->BoneData).field_0x8 + 1 + iVar7;
                uVar6 = 0;
                if ((int)uVar9 < *(int *)&(this->BoneData).field_0x18) {
                  uVar6 = ~uVar9 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (*(char *)((longlong)(int)uVar9 * 0x4c +
                             *(longlong *)&(this->BoneData).field_0x10) == '\0') goto LAB_143eccee4;
                uVar8 = 0;
              }
              uVar9 = (iVar11 * *(int *)&(this->EmptyCells).field_0x4 + iVar10) *
                      *(int *)&(this->EmptyCells).field_0x8 + iVar7;
              uVar6 = 0;
              if ((int)uVar9 < *(int *)&(this->EmptyCells).field_0x18) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar7 = iVar7 + 1;
              *(undefined1 *)((longlong)(int)uVar9 + *(longlong *)&(this->EmptyCells).field_0x10) =
                   uVar8;
            } while (iVar7 < iVar3);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iStack_44);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < local_48);
  }
  return;
}

// UpdateSpatialHierarchy @ 143ed6720

void __thiscall
Chaos::FWeightedLatticeImplicitObject::UpdateSpatialHierarchy
          (FWeightedLatticeImplicitObject *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  TArray<Chaos::FWeightedLatticeBvEntry,TSizedDefaultAllocator<32>_> local_58;
  FWeightedLatticeImplicitObject *local_48;
  int iStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  
  if (this->bSpatialDirty != false) {
    iVar7 = 0;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    uVar6 = *(int *)&(this->Grid).field_0x38 * *(int *)&(this->Grid).field_0x34 *
            *(int *)&(this->Grid).field_0x30;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if (0 < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar6,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
    }
    iVar9 = iVar7;
    if (0 < *(int *)&(this->Grid).field_0x30) {
      do {
        iVar8 = iVar7;
        if (0 < *(int *)&(this->Grid).field_0x34) {
          do {
            iVar5 = iVar7;
            if (0 < *(int *)&(this->Grid).field_0x38) {
              do {
                uVar4 = (iVar9 * *(int *)&(this->EmptyCells).field_0x4 + iVar8) *
                        *(int *)&(this->EmptyCells).field_0x8 + iVar5;
                uVar6 = 0;
                if ((int)uVar4 < *(int *)&(this->EmptyCells).field_0x18) {
                  uVar6 = ~uVar4 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar2)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                if (*(char *)((longlong)(int)uVar4 + *(longlong *)&(this->EmptyCells).field_0x10) ==
                    '\0') {
                  local_48 = this;
                  iStack_40 = iVar9;
                  iStack_3c = iVar8;
                  local_38 = iVar5;
                  if (((local_58.AllocatorInstance.Data <= (FScriptContainerElement *)&local_48) &&
                      ((FScriptContainerElement *)&local_48 <
                       local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 0x18)) &&
                     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar2)) {
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  if (local_58.ArrayNum == local_58.ArrayMax) {
                    local_58.ArrayNum =
                         UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,&local_58.AllocatorInstance,&local_58.ArrayMax);
                  }
                  lVar3 = (longlong)local_58.ArrayNum;
                  local_58.ArrayNum = local_58.ArrayNum + 1;
                  *(FWeightedLatticeImplicitObject **)
                   (local_58.AllocatorInstance.Data + lVar3 * 0x18) = local_48;
                  *(ulonglong *)(local_58.AllocatorInstance.Data + lVar3 * 0x18 + 8) =
                       CONCAT44(iStack_3c,iStack_40);
                  *(ulonglong *)(local_58.AllocatorInstance.Data + lVar3 * 0x18 + 0x10) =
                       CONCAT44(uStack_34,local_38);
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < *(int *)&(this->Grid).field_0x38);
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)&(this->Grid).field_0x34);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)&(this->Grid).field_0x30);
    }
    THierarchicalSpatialHash<int,double>::
    Initialize<TArray<Chaos::FWeightedLatticeBvEntry,TSizedDefaultAllocator<32>_>_>
              (&this->Spatial,&local_58,param_1);
    this->bSpatialDirty = false;
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  return;
}

