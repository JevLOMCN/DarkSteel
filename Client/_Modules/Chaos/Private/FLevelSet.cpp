// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 64

// FLevelSet @ 143b57170

FLevelSet * __thiscall Chaos::FLevelSet::FLevelSet(FLevelSet *this)

{
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10100;
  this->_padding_ = (longlong)&___7FLevelSet_Chaos__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)&(this->MPhi).field_0x18 = 0;
  *(undefined2 *)&this->_padding_ = 0x606;
  *(undefined8 *)&(this->MPhi).field_0x10 = 0;
  *(undefined8 *)&this->MPhi = 0;
  *(undefined4 *)&(this->MPhi).field_0x8 = 0;
  *(undefined8 *)&(this->MNormals).field_0x18 = 0;
  *(undefined8 *)&(this->MNormals).field_0x10 = 0;
  *(undefined8 *)&this->MNormals = 0;
  *(undefined4 *)&(this->MNormals).field_0x8 = 0;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10 = 0xffefffffffffffff;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax.field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax.field_0x10 = 0xffefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin.field_0x10 = 0x7fefffffffffffff;
  return this;
}

// BoundingBox @ 143b5e960

TAABB<double,3> * __thiscall
Chaos::FLevelSet::BoundingBox(FLevelSet *this,TAABB<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8;
  uVar1 = *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&(this->MLocalBoundingBox).MMin;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&(this->MLocalBoundingBox).MMax;
  uVar3 = *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMax = uVar2;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar3;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = uVar1;
  return __return_storage_ptr__;
}

// GetTypeHash @ 143b68f50

uint __thiscall Chaos::FLevelSet::GetTypeHash(FLevelSet *this)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  lVar6 = (longlong)*(int *)&(this->MPhi).field_0x18;
  uVar7 = 0;
  uVar4 = 0;
  if (0 < lVar6) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar4 < *(int *)&(this->MPhi).field_0x18) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      uVar1 = *(undefined8 *)(*(longlong *)&(this->MPhi).field_0x10 + lVar9 * 8);
      lVar9 = lVar9 + 1;
      uVar5 = (int)((ulonglong)uVar1 >> 0x20) * 0x17 + (int)uVar1;
      uVar7 = uVar7 - uVar5 ^ uVar5 >> 0xd;
      uVar8 = (-0x61c88647 - uVar7) - uVar5 ^ uVar7 << 8;
      uVar5 = (uVar5 - uVar8) - uVar7 ^ uVar8 >> 0xd;
      uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar5 >> 0xc;
      uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar7 << 0x10;
      uVar5 = (uVar5 - uVar8) - uVar7 ^ uVar8 >> 5;
      uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar5 >> 3;
      uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar7 << 10;
      uVar7 = (uVar5 - uVar8) - uVar7 ^ uVar8 >> 0xf;
    } while (lVar9 < lVar6);
  }
  return uVar7;
}

// Serialize @ 143b77300

void __thiscall Chaos::FLevelSet::Serialize(FLevelSet *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  FImplicitObject::SerializeImp((FImplicitObject *)this,param_1);
  SerializeReal<double,3>(param_1,(TVector<double,3> *)&this->MGrid);
  SerializeReal<double,3>(param_1,(TVector<double,3> *)&(this->MGrid).field_0x18);
  operator<<<int,3>(param_1,(TVector<int,3> *)&(this->MGrid).field_0x30);
  SerializeReal<double,3>(param_1,(TVector<double,3> *)&(this->MGrid).field_0x40);
  operator<<<Chaos::TArrayND<double,3>_double_3>
            (param_1,(TArrayNDBase<Chaos::TArrayND<double,3>,double,3> *)&this->MPhi);
  operator<<<Chaos::TArrayND<Chaos::TVector<double,3>,3>,Chaos::TVector<double,3>_3>
            (param_1,(TArrayNDBase<Chaos::TArrayND<Chaos::TVector<double,3>,3>,Chaos::TVector<double,3>,3>
                      *)&this->MNormals);
  TBox<double,3>::SerializeAsAABB(param_1,&this->MLocalBoundingBox);
  TBox<double,3>::SerializeAsAABB(param_1,&this->MOriginalLocalBoundingBox);
  piVar1 = &this->MBandWidth;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143b773d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return;
}

// Serialize @ 143b77400

void __thiscall Chaos::FLevelSet::Serialize(FLevelSet *this,FChaosArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  SerializeReal<double,3>((FArchive *)param_1,(TVector<double,3> *)&this->MGrid);
  SerializeReal<double,3>((FArchive *)param_1,(TVector<double,3> *)&(this->MGrid).field_0x18);
  operator<<<int,3>((FArchive *)param_1,(TVector<int,3> *)&(this->MGrid).field_0x30);
  SerializeReal<double,3>((FArchive *)param_1,(TVector<double,3> *)&(this->MGrid).field_0x40);
  operator<<<Chaos::TArrayND<double,3>_double_3>
            ((FArchive *)param_1,(TArrayNDBase<Chaos::TArrayND<double,3>,double,3> *)&this->MPhi);
  operator<<<Chaos::TArrayND<Chaos::TVector<double,3>,3>,Chaos::TVector<double,3>_3>
            ((FArchive *)param_1,
             (TArrayNDBase<Chaos::TArrayND<Chaos::TVector<double,3>,3>,Chaos::TVector<double,3>,3> *
             )&this->MNormals);
  TBox<double,3>::SerializeAsAABB((FArchive *)param_1,&this->MLocalBoundingBox);
  TBox<double,3>::SerializeAsAABB((FArchive *)param_1,&this->MOriginalLocalBoundingBox);
  piVar1 = &this->MBandWidth;
  piVar2 = *(int **)param_1->_padding_;
  if (piVar2 + 1 <= (int *)((undefined8 *)param_1->_padding_)[1]) {
    *piVar1 = *piVar2;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
    return;
  }
  if ((param_1->_padding_ & 0x10000) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143b774d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x188))(param_1,piVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)piVar1);
  return;
}

// OverlapGeomImp<Chaos::TBox<double,3>_> @ 143bc0420

bool __thiscall
Chaos::FLevelSet::OverlapGeomImp<Chaos::TBox<double,3>_>
          (FLevelSet *this,TBox<double,3> *param_1,TRigidTransform<double,3> *param_2,double param_3
          ,FMTDInfo *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar27;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_d8 [2];
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_b8;
  undefined1 local_a8 [16];
  double local_98;
  undefined1 local_90 [120];
  
  bVar9 = false;
  pFVar8 = (FScriptContainerElement *)0x0;
  if (param_4 != (FMTDInfo *)0x0) {
    *(undefined8 *)&param_4->Normal = 0;
    *(undefined8 *)&(param_4->Normal).field_0x8 = 0;
    *(undefined8 *)&(param_4->Normal).field_0x10 = 0;
    param_4->Penetration = 0.0;
  }
  iVar11 = 0;
  pTVar7 = TBox<double,3>::ComputeLocalSamplePoints(param_1,local_d8);
  if (&local_b8 != pTVar7) {
    pFVar8 = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar11 = pTVar7->ArrayNum;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
  }
  if (local_d8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8[0].AllocatorInstance.Data);
  }
  uVar27 = (uint)__xmm_80000000000000008000000000000000;
  uVar6 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  pFVar10 = pFVar8;
LAB_143bc04f2:
  do {
    if (pFVar10 == pFVar8 + (longlong)iVar11 * 0x18) {
LAB_143bc0684:
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      return bVar9;
    }
    auVar22 = *(undefined1 (*) [16])&param_2->field_0x10;
    auVar17 = *(undefined1 (*) [16])param_2;
    dVar4 = *(double *)(pFVar10 + 0x10) * *(double *)&param_2->field_0x50;
    dVar18 = *(double *)&param_2->field_0x58 * 0.0;
    dVar5 = *(double *)&param_2->field_0x18;
    dVar2 = *(double *)&param_2->field_0x40 * *(double *)pFVar10;
    dVar3 = *(double *)&param_2->field_0x48 * *(double *)(pFVar10 + 8);
    uVar23 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar13 = *(undefined1 (*) [16])param_2;
    auVar15 = blendpd(auVar13,auVar22,2);
    auVar24._8_4_ = SUB84(dVar3,0);
    auVar24._0_8_ = dVar2;
    auVar24._12_4_ = uVar23;
    dVar12 = auVar22._0_8_;
    auVar25._0_8_ = auVar24._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar2;
    auVar25._8_8_ = dVar4 * auVar13._8_8_ - dVar12 * dVar3;
    auVar19._8_4_ = SUB84(dVar3,0);
    auVar19._0_8_ = dVar2;
    auVar19._12_4_ = uVar23;
    auVar13._8_4_ = SUB84(dVar18,0);
    auVar13._0_8_ = dVar4;
    auVar13._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    auVar13 = blendpd(auVar19,auVar13,2);
    auVar14._0_8_ = auVar13._0_8_ * dVar12 - auVar15._0_8_ * dVar4;
    auVar14._8_8_ = auVar13._8_8_ * auVar22._8_8_ - auVar15._8_8_ * dVar18;
    auVar13 = blendpd(auVar25,auVar14,2);
    dVar18 = auVar25._8_8_ + auVar25._8_8_;
    dVar1 = auVar14._0_8_ + auVar14._0_8_;
    uVar23 = (undefined4)((ulonglong)dVar1 >> 0x20);
    auVar26._0_8_ = auVar13._0_8_ + auVar13._0_8_;
    auVar26._8_8_ = auVar13._8_8_ + auVar13._8_8_;
    auVar20._8_4_ = SUB84(dVar1,0);
    auVar20._0_8_ = dVar18;
    auVar20._12_4_ = uVar23;
    auVar16._8_4_ = SUB84(dVar1,0);
    auVar16._0_8_ = dVar18;
    auVar16._12_4_ = uVar23;
    auVar13 = blendpd(auVar16,auVar26,2);
    auVar21._0_8_ = auVar20._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar18;
    auVar21._8_8_ = auVar26._0_8_ * auVar17._8_8_ - dVar12 * dVar1;
    auVar15._8_4_ = SUB84(auVar21._8_8_,0);
    auVar15._0_8_ = auVar21._0_8_;
    auVar15._12_4_ = (int)((ulonglong)auVar21._8_8_ >> 0x20);
    auVar19 = blendpd(auVar17,auVar22,2);
    auVar17._0_8_ = auVar13._0_8_ * dVar12 - auVar19._0_8_ * auVar26._0_8_;
    auVar17._8_8_ = auVar13._8_8_ * auVar22._8_8_ - auVar19._8_8_ * auVar26._8_8_;
    auVar22 = blendpd(auVar21,auVar17,2);
    dVar12 = dVar1 * dVar5 + dVar3 + auVar17._0_8_ + *(double *)&param_2->field_0x28;
    local_98 = auVar26._0_8_ * dVar5 + dVar4 + auVar22._0_8_ + *(double *)&param_2->field_0x30;
    local_a8._8_4_ = SUB84(dVar12,0);
    local_a8._0_8_ = dVar18 * dVar5 + dVar2 + auVar15._8_8_ + *(double *)&param_2->field_0x20;
    local_a8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    dVar12 = PhiWithNormal(this,(TVector<double,3> *)local_a8,(TVector<double,3> *)local_90);
    if ((param_4 != (FMTDInfo *)0x0) &&
       (dVar18 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ (uint)uVar6,
                                  SUB84(dVar12,0) ^ uVar27),
       param_4->Penetration <= dVar18 && dVar18 != param_4->Penetration)) {
      bVar9 = true;
      pFVar10 = pFVar10 + 0x18;
      *(undefined8 *)&param_4->Normal = local_90._0_8_;
      *(undefined8 *)&(param_4->Normal).field_0x8 = local_90._8_8_;
      param_4->Penetration = dVar18;
      *(undefined8 *)&(param_4->Normal).field_0x10 = local_90._16_8_;
      dVar12 = *(double *)&(param_4->Normal).field_0x8;
      *(double *)&param_4->Position = dVar18 * *(double *)&param_4->Normal + (double)local_a8._0_8_;
      *(double *)&(param_4->Position).field_0x8 = dVar18 * dVar12 + (double)local_a8._8_8_;
      *(double *)&(param_4->Position).field_0x10 = dVar18 * (double)local_90._16_8_ + local_98;
      goto LAB_143bc04f2;
    }
    if (dVar12 <= 0.0) {
      bVar9 = true;
      goto LAB_143bc0684;
    }
    pFVar10 = pFVar10 + 0x18;
  } while( true );
}

// OverlapGeomImp<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> @ 143bc0710

bool __thiscall
Chaos::FLevelSet::OverlapGeomImp<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
          (FLevelSet *this,TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_1,
          TRigidTransform<double,3> *param_2,double param_3,FMTDInfo *param_4)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TBox<double,3> *this_00;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *pTVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  int iVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar33;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_e8 [2];
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_c8;
  undefined1 local_b8 [16];
  double local_a8;
  undefined1 local_a0 [120];
  
  bVar16 = false;
  pFVar13 = (FScriptContainerElement *)0x0;
  if (param_4 != (FMTDInfo *)0x0) {
    *(undefined8 *)&param_4->Normal = 0;
    *(undefined8 *)&(param_4->Normal).field_0x8 = 0;
    *(undefined8 *)&(param_4->Normal).field_0x10 = 0;
    param_4->Penetration = 0.0;
  }
  this_00 = (param_1->MObject).Reference;
  iVar17 = 0;
  if (this_00 != (TBox<double,3> *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
    LOCK();
    plVar1 = &this_00->_padding_;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar11 == 1) && (*(int *)((longlong)&this_00->_padding_ + 4) == 0)) {
      (**(code **)this_00->_padding_)(this_00,1,param_2,param_3);
    }
    pTVar14 = TBox<double,3>::ComputeLocalSamplePoints(this_00,local_e8);
    iVar17 = 0;
    if (&local_c8 != pTVar14) {
      pFVar13 = (pTVar14->AllocatorInstance).Data;
      (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar17 = pTVar14->ArrayNum;
      pTVar14->ArrayNum = 0;
      pTVar14->ArrayMax = 0;
    }
    if (local_e8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8[0].AllocatorInstance.Data);
    }
    fVar3 = *(float *)&param_1->_padding_;
    fVar4 = *(float *)((longlong)&param_1->_padding_ + 4);
    fVar5 = *(float *)&param_1->_padding_;
    for (pFVar15 = pFVar13 + 0x10; pFVar2 = pFVar15 + -0x10,
        pFVar2 != pFVar13 + (longlong)iVar17 * 0x18; pFVar15 = pFVar15 + 0x18) {
      *(double *)pFVar2 = (double)fVar3 * *(double *)pFVar2;
      *(double *)(pFVar15 + -8) = (double)fVar4 * *(double *)(pFVar15 + -8);
      *(double *)pFVar15 = (double)fVar5 * *(double *)pFVar15;
    }
  }
  uVar33 = (uint)__xmm_80000000000000008000000000000000;
  uVar12 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  pFVar15 = pFVar13;
LAB_143bc0880:
  do {
    if (pFVar15 == pFVar13 + (longlong)iVar17 * 0x18) {
LAB_143bc0a1a:
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      return bVar16;
    }
    auVar28 = *(undefined1 (*) [16])&param_2->field_0x10;
    auVar23 = *(undefined1 (*) [16])param_2;
    dVar9 = *(double *)(pFVar15 + 0x10) * *(double *)&param_2->field_0x50;
    dVar24 = *(double *)&param_2->field_0x58 * 0.0;
    dVar10 = *(double *)&param_2->field_0x18;
    dVar7 = *(double *)&param_2->field_0x40 * *(double *)pFVar15;
    dVar8 = *(double *)&param_2->field_0x48 * *(double *)(pFVar15 + 8);
    uVar29 = (undefined4)((ulonglong)dVar8 >> 0x20);
    auVar19 = *(undefined1 (*) [16])param_2;
    auVar21 = blendpd(auVar19,auVar28,2);
    auVar30._8_4_ = SUB84(dVar8,0);
    auVar30._0_8_ = dVar7;
    auVar30._12_4_ = uVar29;
    dVar18 = auVar28._0_8_;
    auVar31._0_8_ = auVar30._8_8_ * auVar19._0_8_ - auVar19._8_8_ * dVar7;
    auVar31._8_8_ = dVar9 * auVar19._8_8_ - dVar18 * dVar8;
    auVar25._8_4_ = SUB84(dVar8,0);
    auVar25._0_8_ = dVar7;
    auVar25._12_4_ = uVar29;
    auVar19._8_4_ = SUB84(dVar24,0);
    auVar19._0_8_ = dVar9;
    auVar19._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    auVar19 = blendpd(auVar25,auVar19,2);
    auVar20._0_8_ = auVar19._0_8_ * dVar18 - auVar21._0_8_ * dVar9;
    auVar20._8_8_ = auVar19._8_8_ * auVar28._8_8_ - auVar21._8_8_ * dVar24;
    auVar19 = blendpd(auVar31,auVar20,2);
    dVar24 = auVar31._8_8_ + auVar31._8_8_;
    dVar6 = auVar20._0_8_ + auVar20._0_8_;
    uVar29 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar32._0_8_ = auVar19._0_8_ + auVar19._0_8_;
    auVar32._8_8_ = auVar19._8_8_ + auVar19._8_8_;
    auVar26._8_4_ = SUB84(dVar6,0);
    auVar26._0_8_ = dVar24;
    auVar26._12_4_ = uVar29;
    auVar22._8_4_ = SUB84(dVar6,0);
    auVar22._0_8_ = dVar24;
    auVar22._12_4_ = uVar29;
    auVar19 = blendpd(auVar22,auVar32,2);
    auVar27._0_8_ = auVar26._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar24;
    auVar27._8_8_ = auVar32._0_8_ * auVar23._8_8_ - dVar18 * dVar6;
    auVar21._8_4_ = SUB84(auVar27._8_8_,0);
    auVar21._0_8_ = auVar27._0_8_;
    auVar21._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
    auVar25 = blendpd(auVar23,auVar28,2);
    auVar23._0_8_ = auVar19._0_8_ * dVar18 - auVar25._0_8_ * auVar32._0_8_;
    auVar23._8_8_ = auVar19._8_8_ * auVar28._8_8_ - auVar25._8_8_ * auVar32._8_8_;
    auVar28 = blendpd(auVar27,auVar23,2);
    dVar18 = dVar6 * dVar10 + dVar8 + auVar23._0_8_ + *(double *)&param_2->field_0x28;
    local_a8 = auVar32._0_8_ * dVar10 + dVar9 + auVar28._0_8_ + *(double *)&param_2->field_0x30;
    local_b8._8_4_ = SUB84(dVar18,0);
    local_b8._0_8_ = dVar24 * dVar10 + dVar7 + auVar21._8_8_ + *(double *)&param_2->field_0x20;
    local_b8._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    dVar18 = PhiWithNormal(this,(TVector<double,3> *)local_b8,(TVector<double,3> *)local_a0);
    if ((param_4 != (FMTDInfo *)0x0) &&
       (dVar24 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ (uint)uVar12,
                                  SUB84(dVar18,0) ^ uVar33),
       param_4->Penetration <= dVar24 && dVar24 != param_4->Penetration)) {
      bVar16 = true;
      pFVar15 = pFVar15 + 0x18;
      *(undefined8 *)&param_4->Normal = local_a0._0_8_;
      *(undefined8 *)&(param_4->Normal).field_0x8 = local_a0._8_8_;
      param_4->Penetration = dVar24;
      *(undefined8 *)&(param_4->Normal).field_0x10 = local_a0._16_8_;
      dVar18 = *(double *)&(param_4->Normal).field_0x8;
      *(double *)&param_4->Position = dVar24 * *(double *)&param_4->Normal + (double)local_b8._0_8_;
      *(double *)&(param_4->Position).field_0x8 = dVar24 * dVar18 + (double)local_b8._8_8_;
      *(double *)&(param_4->Position).field_0x10 = dVar24 * (double)local_a0._16_8_ + local_a8;
      goto LAB_143bc0880;
    }
    if (dVar18 <= 0.0) {
      bVar16 = true;
      goto LAB_143bc0a1a;
    }
    pFVar15 = pFVar15 + 0x18;
  } while( true );
}

// OverlapGeomImp<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_> @ 143bc0aa0

bool __thiscall
Chaos::FLevelSet::OverlapGeomImp<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
          (FLevelSet *this,TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_1,
          TRigidTransform<double,3> *param_2,double param_3,FMTDInfo *param_4)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TSphere<double,3> *this_00;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *pTVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  int iVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar33;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_e8 [2];
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_c8;
  undefined1 local_b8 [16];
  double local_a8;
  undefined1 local_a0 [120];
  
  bVar16 = false;
  pFVar13 = (FScriptContainerElement *)0x0;
  if (param_4 != (FMTDInfo *)0x0) {
    *(undefined8 *)&param_4->Normal = 0;
    *(undefined8 *)&(param_4->Normal).field_0x8 = 0;
    *(undefined8 *)&(param_4->Normal).field_0x10 = 0;
    param_4->Penetration = 0.0;
  }
  this_00 = (param_1->MObject).Reference;
  iVar17 = 0;
  if (this_00 != (TSphere<double,3> *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
    LOCK();
    plVar1 = &this_00->_padding_;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar11 == 1) && (*(int *)((longlong)&this_00->_padding_ + 4) == 0)) {
      (**(code **)this_00->_padding_)(this_00,1,param_2,param_3);
    }
    pTVar14 = TSphere<double,3>::ComputeLocalSamplePoints(this_00,local_e8,NumOverlapSphereSamples);
    iVar17 = 0;
    if (&local_c8 != pTVar14) {
      pFVar13 = (pTVar14->AllocatorInstance).Data;
      (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar17 = pTVar14->ArrayNum;
      pTVar14->ArrayNum = 0;
      pTVar14->ArrayMax = 0;
    }
    if (local_e8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8[0].AllocatorInstance.Data);
    }
    fVar3 = *(float *)&param_1->_padding_;
    fVar4 = *(float *)((longlong)&param_1->_padding_ + 4);
    fVar5 = *(float *)&param_1->_padding_;
    for (pFVar15 = pFVar13 + 0x10; pFVar2 = pFVar15 + -0x10,
        pFVar2 != pFVar13 + (longlong)iVar17 * 0x18; pFVar15 = pFVar15 + 0x18) {
      *(double *)pFVar2 = (double)fVar3 * *(double *)pFVar2;
      *(double *)(pFVar15 + -8) = (double)fVar4 * *(double *)(pFVar15 + -8);
      *(double *)pFVar15 = (double)fVar5 * *(double *)pFVar15;
    }
  }
  uVar33 = (uint)__xmm_80000000000000008000000000000000;
  uVar12 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  pFVar15 = pFVar13;
LAB_143bc0c17:
  do {
    if (pFVar15 == pFVar13 + (longlong)iVar17 * 0x18) {
LAB_143bc0db1:
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      return bVar16;
    }
    auVar28 = *(undefined1 (*) [16])&param_2->field_0x10;
    auVar23 = *(undefined1 (*) [16])param_2;
    dVar9 = *(double *)(pFVar15 + 0x10) * *(double *)&param_2->field_0x50;
    dVar24 = *(double *)&param_2->field_0x58 * 0.0;
    dVar10 = *(double *)&param_2->field_0x18;
    dVar7 = *(double *)&param_2->field_0x40 * *(double *)pFVar15;
    dVar8 = *(double *)&param_2->field_0x48 * *(double *)(pFVar15 + 8);
    uVar29 = (undefined4)((ulonglong)dVar8 >> 0x20);
    auVar19 = *(undefined1 (*) [16])param_2;
    auVar21 = blendpd(auVar19,auVar28,2);
    auVar30._8_4_ = SUB84(dVar8,0);
    auVar30._0_8_ = dVar7;
    auVar30._12_4_ = uVar29;
    dVar18 = auVar28._0_8_;
    auVar31._0_8_ = auVar30._8_8_ * auVar19._0_8_ - auVar19._8_8_ * dVar7;
    auVar31._8_8_ = dVar9 * auVar19._8_8_ - dVar18 * dVar8;
    auVar25._8_4_ = SUB84(dVar8,0);
    auVar25._0_8_ = dVar7;
    auVar25._12_4_ = uVar29;
    auVar19._8_4_ = SUB84(dVar24,0);
    auVar19._0_8_ = dVar9;
    auVar19._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    auVar19 = blendpd(auVar25,auVar19,2);
    auVar20._0_8_ = auVar19._0_8_ * dVar18 - auVar21._0_8_ * dVar9;
    auVar20._8_8_ = auVar19._8_8_ * auVar28._8_8_ - auVar21._8_8_ * dVar24;
    auVar19 = blendpd(auVar31,auVar20,2);
    dVar24 = auVar31._8_8_ + auVar31._8_8_;
    dVar6 = auVar20._0_8_ + auVar20._0_8_;
    uVar29 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar32._0_8_ = auVar19._0_8_ + auVar19._0_8_;
    auVar32._8_8_ = auVar19._8_8_ + auVar19._8_8_;
    auVar26._8_4_ = SUB84(dVar6,0);
    auVar26._0_8_ = dVar24;
    auVar26._12_4_ = uVar29;
    auVar22._8_4_ = SUB84(dVar6,0);
    auVar22._0_8_ = dVar24;
    auVar22._12_4_ = uVar29;
    auVar19 = blendpd(auVar22,auVar32,2);
    auVar27._0_8_ = auVar26._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar24;
    auVar27._8_8_ = auVar32._0_8_ * auVar23._8_8_ - dVar18 * dVar6;
    auVar21._8_4_ = SUB84(auVar27._8_8_,0);
    auVar21._0_8_ = auVar27._0_8_;
    auVar21._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
    auVar25 = blendpd(auVar23,auVar28,2);
    auVar23._0_8_ = auVar19._0_8_ * dVar18 - auVar25._0_8_ * auVar32._0_8_;
    auVar23._8_8_ = auVar19._8_8_ * auVar28._8_8_ - auVar25._8_8_ * auVar32._8_8_;
    auVar28 = blendpd(auVar27,auVar23,2);
    dVar18 = dVar6 * dVar10 + dVar8 + auVar23._0_8_ + *(double *)&param_2->field_0x28;
    local_a8 = auVar32._0_8_ * dVar10 + dVar9 + auVar28._0_8_ + *(double *)&param_2->field_0x30;
    local_b8._8_4_ = SUB84(dVar18,0);
    local_b8._0_8_ = dVar24 * dVar10 + dVar7 + auVar21._8_8_ + *(double *)&param_2->field_0x20;
    local_b8._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    dVar18 = PhiWithNormal(this,(TVector<double,3> *)local_b8,(TVector<double,3> *)local_a0);
    if ((param_4 != (FMTDInfo *)0x0) &&
       (dVar24 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ (uint)uVar12,
                                  SUB84(dVar18,0) ^ uVar33),
       param_4->Penetration <= dVar24 && dVar24 != param_4->Penetration)) {
      bVar16 = true;
      pFVar15 = pFVar15 + 0x18;
      *(undefined8 *)&param_4->Normal = local_a0._0_8_;
      *(undefined8 *)&(param_4->Normal).field_0x8 = local_a0._8_8_;
      param_4->Penetration = dVar24;
      *(undefined8 *)&(param_4->Normal).field_0x10 = local_a0._16_8_;
      dVar18 = *(double *)&(param_4->Normal).field_0x8;
      *(double *)&param_4->Position = dVar24 * *(double *)&param_4->Normal + (double)local_b8._0_8_;
      *(double *)&(param_4->Position).field_0x8 = dVar24 * dVar18 + (double)local_b8._8_8_;
      *(double *)&(param_4->Position).field_0x10 = dVar24 * (double)local_a0._16_8_ + local_a8;
      goto LAB_143bc0c17;
    }
    if (dVar18 <= 0.0) {
      bVar16 = true;
      goto LAB_143bc0db1;
    }
    pFVar15 = pFVar15 + 0x18;
  } while( true );
}

// OverlapGeomImp<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> @ 143bc0e30

bool __thiscall
Chaos::FLevelSet::OverlapGeomImp<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
          (FLevelSet *this,TImplicitObjectScaled<Chaos::FCapsule,1> *param_1,
          TRigidTransform<double,3> *param_2,double param_3,FMTDInfo *param_4)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FCapsule *pFVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  ulonglong uVar13;
  FMTDInfo *pFVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  bool bVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar35;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_e8;
  undefined1 local_d8 [16];
  double local_c8;
  undefined1 local_c0 [152];
  
  pFVar14 = param_4;
  bVar19 = false;
  uVar17 = 0;
  if (param_4 != (FMTDInfo *)0x0) {
    *(undefined8 *)&param_4->Normal = 0;
    *(undefined8 *)&(param_4->Normal).field_0x8 = 0;
    *(undefined8 *)&(param_4->Normal).field_0x10 = 0;
    param_4->Penetration = 0.0;
  }
  pFVar6 = (param_1->MObject).Reference;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  if (pFVar6 != (FCapsule *)0x0) {
    LOCK();
    *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
    UNLOCK();
    LOCK();
    plVar1 = &pFVar6->_padding_;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar12 == 1) && (*(int *)((longlong)&pFVar6->_padding_ + 4) == 0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1,param_2,param_3);
    }
    GetGeomSurfaceSamplesExtended(pFVar6,&local_e8);
    uVar17 = (ulonglong)local_e8.ArrayNum;
    fVar3 = *(float *)&param_1->_padding_;
    fVar4 = *(float *)((longlong)&param_1->_padding_ + 4);
    fVar5 = *(float *)&param_1->_padding_;
    for (pFVar15 = local_e8.AllocatorInstance.Data + 0x10; pFVar2 = pFVar15 + -0x10,
        pFVar2 != local_e8.AllocatorInstance.Data + uVar17 * 0x18; pFVar15 = pFVar15 + 0x18) {
      *(double *)pFVar2 = (double)fVar3 * *(double *)pFVar2;
      *(double *)(pFVar15 + -8) = (double)fVar4 * *(double *)(pFVar15 + -8);
      *(double *)pFVar15 = (double)fVar5 * *(double *)pFVar15;
    }
  }
  uVar35 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  iVar16 = (int)uVar17;
  pFVar15 = local_e8.AllocatorInstance.Data + (longlong)iVar16 * 0x18;
  FVar18.Data = local_e8.AllocatorInstance.Data;
  while( true ) {
    while( true ) {
      if ((int)uVar17 != iVar16) {
        `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&param_4);
      }
      if (FVar18.Data == pFVar15) goto LAB_143bc112d;
      auVar30 = *(undefined1 (*) [16])&param_2->field_0x10;
      auVar21 = *(undefined1 (*) [16])param_2;
      auVar25 = *(undefined1 (*) [16])param_2;
      dVar8 = *(double *)FVar18.Data * *(double *)&param_2->field_0x40;
      dVar9 = *(double *)(FVar18.Data + 8) * *(double *)&param_2->field_0x48;
      uVar31 = (undefined4)((ulonglong)dVar9 >> 0x20);
      dVar10 = *(double *)(FVar18.Data + 0x10) * *(double *)&param_2->field_0x50;
      dVar26 = *(double *)&param_2->field_0x58 * 0.0;
      dVar11 = *(double *)&param_2->field_0x18;
      auVar32._8_4_ = SUB84(dVar9,0);
      auVar32._0_8_ = dVar8;
      auVar32._12_4_ = uVar31;
      dVar20 = auVar30._0_8_;
      auVar23 = blendpd(auVar21,auVar30,2);
      auVar33._0_8_ = auVar32._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar8;
      auVar33._8_8_ = dVar10 * auVar21._8_8_ - dVar20 * dVar9;
      auVar27._8_4_ = SUB84(dVar9,0);
      auVar27._0_8_ = dVar8;
      auVar27._12_4_ = uVar31;
      auVar21._8_4_ = SUB84(dVar26,0);
      auVar21._0_8_ = dVar10;
      auVar21._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      auVar21 = blendpd(auVar27,auVar21,2);
      auVar22._0_8_ = auVar21._0_8_ * dVar20 - auVar23._0_8_ * dVar10;
      auVar22._8_8_ = auVar21._8_8_ * auVar30._8_8_ - auVar23._8_8_ * dVar26;
      auVar21 = blendpd(auVar33,auVar22,2);
      dVar26 = auVar33._8_8_ + auVar33._8_8_;
      dVar7 = auVar22._0_8_ + auVar22._0_8_;
      uVar31 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar34._0_8_ = auVar21._0_8_ + auVar21._0_8_;
      auVar34._8_8_ = auVar21._8_8_ + auVar21._8_8_;
      auVar28._8_4_ = SUB84(dVar7,0);
      auVar28._0_8_ = dVar26;
      auVar28._12_4_ = uVar31;
      auVar24._8_4_ = SUB84(dVar7,0);
      auVar24._0_8_ = dVar26;
      auVar24._12_4_ = uVar31;
      auVar21 = blendpd(auVar24,auVar34,2);
      auVar29._0_8_ = auVar28._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar26;
      auVar29._8_8_ = auVar34._0_8_ * auVar25._8_8_ - dVar20 * dVar7;
      auVar23._8_4_ = SUB84(auVar29._8_8_,0);
      auVar23._0_8_ = auVar29._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
      auVar27 = blendpd(auVar25,auVar30,2);
      auVar25._0_8_ = auVar21._0_8_ * dVar20 - auVar27._0_8_ * auVar34._0_8_;
      auVar25._8_8_ = auVar21._8_8_ * auVar30._8_8_ - auVar27._8_8_ * auVar34._8_8_;
      auVar30 = blendpd(auVar29,auVar25,2);
      dVar20 = dVar7 * dVar11 + dVar9 + auVar25._0_8_ + *(double *)&param_2->field_0x28;
      local_c8 = auVar34._0_8_ * dVar11 + dVar10 + auVar30._0_8_ + *(double *)&param_2->field_0x30;
      local_d8._8_4_ = SUB84(dVar20,0);
      local_d8._0_8_ = dVar26 * dVar11 + dVar8 + auVar23._8_8_ + *(double *)&param_2->field_0x20;
      local_d8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
      dVar20 = PhiWithNormal(this,(TVector<double,3> *)local_d8,(TVector<double,3> *)local_c0);
      if ((pFVar14 == (FMTDInfo *)0x0) ||
         (dVar26 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ (uint)uVar13,
                                    SUB84(dVar20,0) ^ uVar35),
         dVar26 < pFVar14->Penetration || dVar26 == pFVar14->Penetration)) break;
      bVar19 = true;
      FVar18.Data = FVar18.Data + 0x18;
      *(undefined8 *)&pFVar14->Normal = local_c0._0_8_;
      *(undefined8 *)&(pFVar14->Normal).field_0x8 = local_c0._8_8_;
      pFVar14->Penetration = dVar26;
      *(undefined8 *)&(pFVar14->Normal).field_0x10 = local_c0._16_8_;
      dVar20 = *(double *)&(pFVar14->Normal).field_0x8;
      *(double *)&pFVar14->Position = dVar26 * *(double *)&pFVar14->Normal + (double)local_d8._0_8_;
      *(double *)&(pFVar14->Position).field_0x8 = dVar26 * dVar20 + (double)local_d8._8_8_;
      *(double *)&(pFVar14->Position).field_0x10 = dVar26 * (double)local_c0._16_8_ + local_c8;
      uVar17 = local_e8._8_8_ & 0xffffffff;
    }
    if (dVar20 <= 0.0) break;
    FVar18.Data = FVar18.Data + 0x18;
  }
  bVar19 = true;
LAB_143bc112d:
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return bVar19;
}

// OverlapGeomImp<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> @ 143bc11c0

bool __thiscall
Chaos::FLevelSet::OverlapGeomImp<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
          (FLevelSet *this,TImplicitObjectScaled<Chaos::FConvex,1> *param_1,
          TRigidTransform<double,3> *param_2,double param_3,FMTDInfo *param_4)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FConvex *pFVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  ulonglong uVar14;
  FMTDInfo *pFVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  bool bVar18;
  ForAnyElementType FVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar35;
  undefined1 local_res10 [8];
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_e8;
  undefined1 local_d8 [16];
  double local_c8;
  undefined1 local_c0 [152];
  
  pFVar15 = param_4;
  bVar18 = false;
  if (param_4 != (FMTDInfo *)0x0) {
    *(undefined8 *)&param_4->Normal = 0;
    *(undefined8 *)&(param_4->Normal).field_0x8 = 0;
    *(undefined8 *)&(param_4->Normal).field_0x10 = 0;
    param_4->Penetration = 0.0;
  }
  pFVar7 = (param_1->MObject).Reference;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  if (pFVar7 != (FConvex *)0x0) {
    LOCK();
    *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
    UNLOCK();
    LOCK();
    plVar1 = &pFVar7->_padding_;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar13 == 1) && (*(int *)((longlong)&pFVar7->_padding_ + 4) == 0)) {
      (**(code **)pFVar7->_padding_)(pFVar7,1,param_2,param_3);
    }
    GetGeomSurfaceSamples(pFVar7,&local_e8);
    fVar4 = *(float *)&param_1->_padding_;
    fVar5 = *(float *)((longlong)&param_1->_padding_ + 4);
    fVar6 = *(float *)&param_1->_padding_;
    iVar16 = local_e8.ArrayNum;
    pFVar17 = local_e8.AllocatorInstance.Data + 0x10;
    pFVar3 = local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 0x18;
    while( true ) {
      if (local_e8.ArrayNum != iVar16) {
        `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&param_4);
      }
      pFVar2 = pFVar17 + -0x10;
      if (pFVar2 == pFVar3) break;
      *(double *)pFVar2 = (double)fVar4 * *(double *)pFVar2;
      *(double *)(pFVar17 + -8) = (double)fVar5 * *(double *)(pFVar17 + -8);
      *(double *)pFVar17 = (double)fVar6 * *(double *)pFVar17;
      pFVar17 = pFVar17 + 0x18;
    }
  }
  iVar16 = local_e8.ArrayNum;
  uVar35 = (uint)__xmm_80000000000000008000000000000000;
  uVar14 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  pFVar17 = local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 0x18;
  FVar19.Data = local_e8.AllocatorInstance.Data;
  while( true ) {
    while( true ) {
      if (local_e8.ArrayNum != iVar16) {
        `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar19.Data == pFVar17) goto LAB_143bc14c2;
      auVar30 = *(undefined1 (*) [16])&param_2->field_0x10;
      auVar21 = *(undefined1 (*) [16])param_2;
      auVar25 = *(undefined1 (*) [16])param_2;
      dVar9 = *(double *)FVar19.Data * *(double *)&param_2->field_0x40;
      dVar10 = *(double *)(FVar19.Data + 8) * *(double *)&param_2->field_0x48;
      uVar31 = (undefined4)((ulonglong)dVar10 >> 0x20);
      dVar11 = *(double *)(FVar19.Data + 0x10) * *(double *)&param_2->field_0x50;
      dVar26 = *(double *)&param_2->field_0x58 * 0.0;
      dVar12 = *(double *)&param_2->field_0x18;
      auVar32._8_4_ = SUB84(dVar10,0);
      auVar32._0_8_ = dVar9;
      auVar32._12_4_ = uVar31;
      dVar20 = auVar30._0_8_;
      auVar23 = blendpd(auVar21,auVar30,2);
      auVar33._0_8_ = auVar32._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar9;
      auVar33._8_8_ = dVar11 * auVar21._8_8_ - dVar20 * dVar10;
      auVar27._8_4_ = SUB84(dVar10,0);
      auVar27._0_8_ = dVar9;
      auVar27._12_4_ = uVar31;
      auVar21._8_4_ = SUB84(dVar26,0);
      auVar21._0_8_ = dVar11;
      auVar21._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      auVar21 = blendpd(auVar27,auVar21,2);
      auVar22._0_8_ = auVar21._0_8_ * dVar20 - auVar23._0_8_ * dVar11;
      auVar22._8_8_ = auVar21._8_8_ * auVar30._8_8_ - auVar23._8_8_ * dVar26;
      auVar21 = blendpd(auVar33,auVar22,2);
      dVar26 = auVar33._8_8_ + auVar33._8_8_;
      dVar8 = auVar22._0_8_ + auVar22._0_8_;
      uVar31 = (undefined4)((ulonglong)dVar8 >> 0x20);
      auVar34._0_8_ = auVar21._0_8_ + auVar21._0_8_;
      auVar34._8_8_ = auVar21._8_8_ + auVar21._8_8_;
      auVar28._8_4_ = SUB84(dVar8,0);
      auVar28._0_8_ = dVar26;
      auVar28._12_4_ = uVar31;
      auVar24._8_4_ = SUB84(dVar8,0);
      auVar24._0_8_ = dVar26;
      auVar24._12_4_ = uVar31;
      auVar21 = blendpd(auVar24,auVar34,2);
      auVar29._0_8_ = auVar28._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar26;
      auVar29._8_8_ = auVar34._0_8_ * auVar25._8_8_ - dVar20 * dVar8;
      auVar23._8_4_ = SUB84(auVar29._8_8_,0);
      auVar23._0_8_ = auVar29._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
      auVar27 = blendpd(auVar25,auVar30,2);
      auVar25._0_8_ = auVar21._0_8_ * dVar20 - auVar27._0_8_ * auVar34._0_8_;
      auVar25._8_8_ = auVar21._8_8_ * auVar30._8_8_ - auVar27._8_8_ * auVar34._8_8_;
      auVar30 = blendpd(auVar29,auVar25,2);
      dVar20 = dVar8 * dVar12 + dVar10 + auVar25._0_8_ + *(double *)&param_2->field_0x28;
      local_c8 = auVar34._0_8_ * dVar12 + dVar11 + auVar30._0_8_ + *(double *)&param_2->field_0x30;
      local_d8._8_4_ = SUB84(dVar20,0);
      local_d8._0_8_ = dVar26 * dVar12 + dVar9 + auVar23._8_8_ + *(double *)&param_2->field_0x20;
      local_d8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
      dVar20 = PhiWithNormal(this,(TVector<double,3> *)local_d8,(TVector<double,3> *)local_c0);
      if ((pFVar15 == (FMTDInfo *)0x0) ||
         (dVar26 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ (uint)uVar14,
                                    SUB84(dVar20,0) ^ uVar35),
         dVar26 < pFVar15->Penetration || dVar26 == pFVar15->Penetration)) break;
      bVar18 = true;
      FVar19.Data = FVar19.Data + 0x18;
      *(undefined8 *)&pFVar15->Normal = local_c0._0_8_;
      *(undefined8 *)&(pFVar15->Normal).field_0x8 = local_c0._8_8_;
      pFVar15->Penetration = dVar26;
      *(undefined8 *)&(pFVar15->Normal).field_0x10 = local_c0._16_8_;
      dVar20 = *(double *)&(pFVar15->Normal).field_0x8;
      *(double *)&pFVar15->Position = dVar26 * *(double *)&pFVar15->Normal + (double)local_d8._0_8_;
      *(double *)&(pFVar15->Position).field_0x8 = dVar26 * dVar20 + (double)local_d8._8_8_;
      *(double *)&(pFVar15->Position).field_0x10 = dVar26 * (double)local_c0._16_8_ + local_c8;
    }
    if (dVar20 <= 0.0) break;
    FVar19.Data = FVar19.Data + 0x18;
  }
  bVar18 = true;
LAB_143bc14c2:
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return bVar18;
}

// OverlapGeomImp<Chaos::TSphere<double,3>_> @ 143bc1550

bool __thiscall
Chaos::FLevelSet::OverlapGeomImp<Chaos::TSphere<double,3>_>
          (FLevelSet *this,TSphere<double,3> *param_1,TRigidTransform<double,3> *param_2,
          double param_3,FMTDInfo *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar27;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_d8 [2];
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_b8;
  undefined1 local_a8 [16];
  double local_98;
  undefined1 local_90 [120];
  
  bVar9 = false;
  pFVar8 = (FScriptContainerElement *)0x0;
  if (param_4 != (FMTDInfo *)0x0) {
    *(undefined8 *)&param_4->Normal = 0;
    *(undefined8 *)&(param_4->Normal).field_0x8 = 0;
    *(undefined8 *)&(param_4->Normal).field_0x10 = 0;
    param_4->Penetration = 0.0;
  }
  iVar11 = 0;
  pTVar7 = TSphere<double,3>::ComputeLocalSamplePoints(param_1,local_d8,NumOverlapSphereSamples);
  if (&local_b8 != pTVar7) {
    pFVar8 = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar11 = pTVar7->ArrayNum;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
  }
  if (local_d8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8[0].AllocatorInstance.Data);
  }
  uVar27 = (uint)__xmm_80000000000000008000000000000000;
  uVar6 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  pFVar10 = pFVar8;
LAB_143bc1630:
  do {
    if (pFVar10 == pFVar8 + (longlong)iVar11 * 0x18) {
LAB_143bc17c2:
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      return bVar9;
    }
    auVar22 = *(undefined1 (*) [16])&param_2->field_0x10;
    auVar17 = *(undefined1 (*) [16])param_2;
    dVar4 = *(double *)(pFVar10 + 0x10) * *(double *)&param_2->field_0x50;
    dVar18 = *(double *)&param_2->field_0x58 * 0.0;
    dVar5 = *(double *)&param_2->field_0x18;
    dVar2 = *(double *)&param_2->field_0x40 * *(double *)pFVar10;
    dVar3 = *(double *)&param_2->field_0x48 * *(double *)(pFVar10 + 8);
    uVar23 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar13 = *(undefined1 (*) [16])param_2;
    auVar15 = blendpd(auVar13,auVar22,2);
    auVar24._8_4_ = SUB84(dVar3,0);
    auVar24._0_8_ = dVar2;
    auVar24._12_4_ = uVar23;
    dVar12 = auVar22._0_8_;
    auVar25._0_8_ = auVar24._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar2;
    auVar25._8_8_ = dVar4 * auVar13._8_8_ - dVar12 * dVar3;
    auVar19._8_4_ = SUB84(dVar3,0);
    auVar19._0_8_ = dVar2;
    auVar19._12_4_ = uVar23;
    auVar13._8_4_ = SUB84(dVar18,0);
    auVar13._0_8_ = dVar4;
    auVar13._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    auVar13 = blendpd(auVar19,auVar13,2);
    auVar14._0_8_ = auVar13._0_8_ * dVar12 - auVar15._0_8_ * dVar4;
    auVar14._8_8_ = auVar13._8_8_ * auVar22._8_8_ - auVar15._8_8_ * dVar18;
    auVar13 = blendpd(auVar25,auVar14,2);
    dVar18 = auVar25._8_8_ + auVar25._8_8_;
    dVar1 = auVar14._0_8_ + auVar14._0_8_;
    uVar23 = (undefined4)((ulonglong)dVar1 >> 0x20);
    auVar26._0_8_ = auVar13._0_8_ + auVar13._0_8_;
    auVar26._8_8_ = auVar13._8_8_ + auVar13._8_8_;
    auVar20._8_4_ = SUB84(dVar1,0);
    auVar20._0_8_ = dVar18;
    auVar20._12_4_ = uVar23;
    auVar16._8_4_ = SUB84(dVar1,0);
    auVar16._0_8_ = dVar18;
    auVar16._12_4_ = uVar23;
    auVar13 = blendpd(auVar16,auVar26,2);
    auVar21._0_8_ = auVar20._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar18;
    auVar21._8_8_ = auVar26._0_8_ * auVar17._8_8_ - dVar12 * dVar1;
    auVar15._8_4_ = SUB84(auVar21._8_8_,0);
    auVar15._0_8_ = auVar21._0_8_;
    auVar15._12_4_ = (int)((ulonglong)auVar21._8_8_ >> 0x20);
    auVar19 = blendpd(auVar17,auVar22,2);
    auVar17._0_8_ = auVar13._0_8_ * dVar12 - auVar19._0_8_ * auVar26._0_8_;
    auVar17._8_8_ = auVar13._8_8_ * auVar22._8_8_ - auVar19._8_8_ * auVar26._8_8_;
    auVar22 = blendpd(auVar21,auVar17,2);
    dVar12 = dVar1 * dVar5 + dVar3 + auVar17._0_8_ + *(double *)&param_2->field_0x28;
    local_98 = auVar26._0_8_ * dVar5 + dVar4 + auVar22._0_8_ + *(double *)&param_2->field_0x30;
    local_a8._8_4_ = SUB84(dVar12,0);
    local_a8._0_8_ = dVar18 * dVar5 + dVar2 + auVar15._8_8_ + *(double *)&param_2->field_0x20;
    local_a8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    dVar12 = PhiWithNormal(this,(TVector<double,3> *)local_a8,(TVector<double,3> *)local_90);
    if ((param_4 != (FMTDInfo *)0x0) &&
       (dVar18 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ (uint)uVar6,
                                  SUB84(dVar12,0) ^ uVar27),
       param_4->Penetration <= dVar18 && dVar18 != param_4->Penetration)) {
      bVar9 = true;
      pFVar10 = pFVar10 + 0x18;
      *(undefined8 *)&param_4->Normal = local_90._0_8_;
      *(undefined8 *)&(param_4->Normal).field_0x8 = local_90._8_8_;
      param_4->Penetration = dVar18;
      *(undefined8 *)&(param_4->Normal).field_0x10 = local_90._16_8_;
      dVar12 = *(double *)&(param_4->Normal).field_0x8;
      *(double *)&param_4->Position = dVar18 * *(double *)&param_4->Normal + (double)local_a8._0_8_;
      *(double *)&(param_4->Position).field_0x8 = dVar18 * dVar12 + (double)local_a8._8_8_;
      *(double *)&(param_4->Position).field_0x10 = dVar18 * (double)local_90._16_8_ + local_98;
      goto LAB_143bc1630;
    }
    if (dVar12 <= 0.0) {
      bVar9 = true;
      goto LAB_143bc17c2;
    }
    pFVar10 = pFVar10 + 0x18;
  } while( true );
}

// OverlapGeomImp<Chaos::FCapsule> @ 143bc1840

bool __thiscall
Chaos::FLevelSet::OverlapGeomImp<Chaos::FCapsule>
          (FLevelSet *this,FCapsule *param_1,TRigidTransform<double,3> *param_2,double param_3,
          FMTDInfo *param_4)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  FMTDInfo *pFVar8;
  int iVar9;
  bool bVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_e8;
  undefined1 local_d8 [16];
  double local_c8;
  undefined1 local_c0 [152];
  
  pFVar8 = param_4;
  bVar10 = false;
  if (param_4 != (FMTDInfo *)0x0) {
    *(undefined8 *)&param_4->Normal = 0;
    *(undefined8 *)&(param_4->Normal).field_0x8 = 0;
    *(undefined8 *)&(param_4->Normal).field_0x10 = 0;
    param_4->Penetration = 0.0;
  }
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  GetGeomSurfaceSamplesExtended(param_1,&local_e8);
  iVar9 = local_e8.ArrayNum;
  uVar11 = (ulonglong)local_e8.ArrayNum;
  uVar28 = (uint)__xmm_80000000000000008000000000000000;
  uVar7 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  pFVar1 = local_e8.AllocatorInstance.Data + uVar11 * 0x18;
  FVar12.Data = local_e8.AllocatorInstance.Data;
  while( true ) {
    while( true ) {
      if ((int)uVar11 != iVar9) {
        `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&param_4);
      }
      if (FVar12.Data == pFVar1) goto LAB_143bc1aad;
      auVar23 = *(undefined1 (*) [16])&param_2->field_0x10;
      auVar14 = *(undefined1 (*) [16])param_2;
      auVar18 = *(undefined1 (*) [16])param_2;
      dVar3 = *(double *)FVar12.Data * *(double *)&param_2->field_0x40;
      dVar4 = *(double *)(FVar12.Data + 8) * *(double *)&param_2->field_0x48;
      uVar24 = (undefined4)((ulonglong)dVar4 >> 0x20);
      dVar5 = *(double *)(FVar12.Data + 0x10) * *(double *)&param_2->field_0x50;
      dVar19 = *(double *)&param_2->field_0x58 * 0.0;
      dVar6 = *(double *)&param_2->field_0x18;
      auVar25._8_4_ = SUB84(dVar4,0);
      auVar25._0_8_ = dVar3;
      auVar25._12_4_ = uVar24;
      dVar13 = auVar23._0_8_;
      auVar16 = blendpd(auVar14,auVar23,2);
      auVar26._0_8_ = auVar25._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar3;
      auVar26._8_8_ = dVar5 * auVar14._8_8_ - dVar13 * dVar4;
      auVar20._8_4_ = SUB84(dVar4,0);
      auVar20._0_8_ = dVar3;
      auVar20._12_4_ = uVar24;
      auVar14._8_4_ = SUB84(dVar19,0);
      auVar14._0_8_ = dVar5;
      auVar14._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      auVar14 = blendpd(auVar20,auVar14,2);
      auVar15._0_8_ = auVar14._0_8_ * dVar13 - auVar16._0_8_ * dVar5;
      auVar15._8_8_ = auVar14._8_8_ * auVar23._8_8_ - auVar16._8_8_ * dVar19;
      auVar14 = blendpd(auVar26,auVar15,2);
      dVar19 = auVar26._8_8_ + auVar26._8_8_;
      dVar2 = auVar15._0_8_ + auVar15._0_8_;
      uVar24 = (undefined4)((ulonglong)dVar2 >> 0x20);
      auVar27._0_8_ = auVar14._0_8_ + auVar14._0_8_;
      auVar27._8_8_ = auVar14._8_8_ + auVar14._8_8_;
      auVar21._8_4_ = SUB84(dVar2,0);
      auVar21._0_8_ = dVar19;
      auVar21._12_4_ = uVar24;
      auVar17._8_4_ = SUB84(dVar2,0);
      auVar17._0_8_ = dVar19;
      auVar17._12_4_ = uVar24;
      auVar14 = blendpd(auVar17,auVar27,2);
      auVar22._0_8_ = auVar21._8_8_ * auVar18._0_8_ - auVar18._8_8_ * dVar19;
      auVar22._8_8_ = auVar27._0_8_ * auVar18._8_8_ - dVar13 * dVar2;
      auVar16._8_4_ = SUB84(auVar22._8_8_,0);
      auVar16._0_8_ = auVar22._0_8_;
      auVar16._12_4_ = (int)((ulonglong)auVar22._8_8_ >> 0x20);
      auVar20 = blendpd(auVar18,auVar23,2);
      auVar18._0_8_ = auVar14._0_8_ * dVar13 - auVar20._0_8_ * auVar27._0_8_;
      auVar18._8_8_ = auVar14._8_8_ * auVar23._8_8_ - auVar20._8_8_ * auVar27._8_8_;
      auVar23 = blendpd(auVar22,auVar18,2);
      dVar13 = dVar2 * dVar6 + dVar4 + auVar18._0_8_ + *(double *)&param_2->field_0x28;
      local_c8 = auVar27._0_8_ * dVar6 + dVar5 + auVar23._0_8_ + *(double *)&param_2->field_0x30;
      local_d8._8_4_ = SUB84(dVar13,0);
      local_d8._0_8_ = dVar19 * dVar6 + dVar3 + auVar16._8_8_ + *(double *)&param_2->field_0x20;
      local_d8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      dVar13 = PhiWithNormal(this,(TVector<double,3> *)local_d8,(TVector<double,3> *)local_c0);
      if ((pFVar8 == (FMTDInfo *)0x0) ||
         (dVar19 = (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^ (uint)uVar7,
                                    SUB84(dVar13,0) ^ uVar28),
         dVar19 < pFVar8->Penetration || dVar19 == pFVar8->Penetration)) break;
      bVar10 = true;
      FVar12.Data = FVar12.Data + 0x18;
      *(undefined8 *)&pFVar8->Normal = local_c0._0_8_;
      *(undefined8 *)&(pFVar8->Normal).field_0x8 = local_c0._8_8_;
      pFVar8->Penetration = dVar19;
      *(undefined8 *)&(pFVar8->Normal).field_0x10 = local_c0._16_8_;
      dVar13 = *(double *)&(pFVar8->Normal).field_0x8;
      *(double *)&pFVar8->Position = dVar19 * *(double *)&pFVar8->Normal + (double)local_d8._0_8_;
      *(double *)&(pFVar8->Position).field_0x8 = dVar19 * dVar13 + (double)local_d8._8_8_;
      *(double *)&(pFVar8->Position).field_0x10 = dVar19 * (double)local_c0._16_8_ + local_c8;
      uVar11 = local_e8._8_8_ & 0xffffffff;
    }
    if (dVar13 <= 0.0) break;
    FVar12.Data = FVar12.Data + 0x18;
  }
  bVar10 = true;
LAB_143bc1aad:
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return bVar10;
}

// OverlapGeomImp<Chaos::FConvex> @ 143bc1b40

bool __thiscall
Chaos::FLevelSet::OverlapGeomImp<Chaos::FConvex>
          (FLevelSet *this,FConvex *param_1,TRigidTransform<double,3> *param_2,double param_3,
          FMTDInfo *param_4)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  FMTDInfo *pFVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  ForAnyElementType FVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_d8;
  undefined1 local_c8 [16];
  double local_b8;
  undefined1 local_b0 [152];
  
  pFVar8 = param_4;
  bVar11 = false;
  if (param_4 != (FMTDInfo *)0x0) {
    *(undefined8 *)&param_4->Normal = 0;
    *(undefined8 *)&(param_4->Normal).field_0x8 = 0;
    *(undefined8 *)&(param_4->Normal).field_0x10 = 0;
    param_4->Penetration = 0.0;
  }
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  GetGeomSurfaceSamples(param_1,&local_d8);
  iVar9 = local_d8.ArrayNum;
  uVar10 = (ulonglong)local_d8.ArrayNum;
  uVar28 = (uint)__xmm_80000000000000008000000000000000;
  uVar7 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  pFVar1 = local_d8.AllocatorInstance.Data + uVar10 * 0x18;
  FVar12.Data = local_d8.AllocatorInstance.Data;
  while( true ) {
    while( true ) {
      if ((int)uVar10 != iVar9) {
        `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&param_4);
      }
      if (FVar12.Data == pFVar1) goto LAB_143bc1da8;
      auVar23 = *(undefined1 (*) [16])&param_2->field_0x10;
      auVar14 = *(undefined1 (*) [16])param_2;
      auVar18 = *(undefined1 (*) [16])param_2;
      dVar3 = *(double *)FVar12.Data * *(double *)&param_2->field_0x40;
      dVar4 = *(double *)(FVar12.Data + 8) * *(double *)&param_2->field_0x48;
      uVar24 = (undefined4)((ulonglong)dVar4 >> 0x20);
      dVar5 = *(double *)(FVar12.Data + 0x10) * *(double *)&param_2->field_0x50;
      dVar19 = *(double *)&param_2->field_0x58 * 0.0;
      dVar6 = *(double *)&param_2->field_0x18;
      auVar25._8_4_ = SUB84(dVar4,0);
      auVar25._0_8_ = dVar3;
      auVar25._12_4_ = uVar24;
      dVar13 = auVar23._0_8_;
      auVar16 = blendpd(auVar14,auVar23,2);
      auVar26._0_8_ = auVar25._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar3;
      auVar26._8_8_ = dVar5 * auVar14._8_8_ - dVar13 * dVar4;
      auVar20._8_4_ = SUB84(dVar4,0);
      auVar20._0_8_ = dVar3;
      auVar20._12_4_ = uVar24;
      auVar14._8_4_ = SUB84(dVar19,0);
      auVar14._0_8_ = dVar5;
      auVar14._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      auVar14 = blendpd(auVar20,auVar14,2);
      auVar15._0_8_ = auVar14._0_8_ * dVar13 - auVar16._0_8_ * dVar5;
      auVar15._8_8_ = auVar14._8_8_ * auVar23._8_8_ - auVar16._8_8_ * dVar19;
      auVar14 = blendpd(auVar26,auVar15,2);
      dVar19 = auVar26._8_8_ + auVar26._8_8_;
      dVar2 = auVar15._0_8_ + auVar15._0_8_;
      uVar24 = (undefined4)((ulonglong)dVar2 >> 0x20);
      auVar27._0_8_ = auVar14._0_8_ + auVar14._0_8_;
      auVar27._8_8_ = auVar14._8_8_ + auVar14._8_8_;
      auVar21._8_4_ = SUB84(dVar2,0);
      auVar21._0_8_ = dVar19;
      auVar21._12_4_ = uVar24;
      auVar17._8_4_ = SUB84(dVar2,0);
      auVar17._0_8_ = dVar19;
      auVar17._12_4_ = uVar24;
      auVar14 = blendpd(auVar17,auVar27,2);
      auVar22._0_8_ = auVar21._8_8_ * auVar18._0_8_ - auVar18._8_8_ * dVar19;
      auVar22._8_8_ = auVar27._0_8_ * auVar18._8_8_ - dVar13 * dVar2;
      auVar16._8_4_ = SUB84(auVar22._8_8_,0);
      auVar16._0_8_ = auVar22._0_8_;
      auVar16._12_4_ = (int)((ulonglong)auVar22._8_8_ >> 0x20);
      auVar20 = blendpd(auVar18,auVar23,2);
      auVar18._0_8_ = auVar14._0_8_ * dVar13 - auVar20._0_8_ * auVar27._0_8_;
      auVar18._8_8_ = auVar14._8_8_ * auVar23._8_8_ - auVar20._8_8_ * auVar27._8_8_;
      auVar23 = blendpd(auVar22,auVar18,2);
      dVar13 = dVar2 * dVar6 + dVar4 + auVar18._0_8_ + *(double *)&param_2->field_0x28;
      local_b8 = auVar27._0_8_ * dVar6 + dVar5 + auVar23._0_8_ + *(double *)&param_2->field_0x30;
      local_c8._8_4_ = SUB84(dVar13,0);
      local_c8._0_8_ = dVar19 * dVar6 + dVar3 + auVar16._8_8_ + *(double *)&param_2->field_0x20;
      local_c8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      dVar13 = PhiWithNormal(this,(TVector<double,3> *)local_c8,(TVector<double,3> *)local_b0);
      if ((pFVar8 == (FMTDInfo *)0x0) ||
         (dVar19 = (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^ (uint)uVar7,
                                    SUB84(dVar13,0) ^ uVar28),
         dVar19 < pFVar8->Penetration || dVar19 == pFVar8->Penetration)) break;
      bVar11 = true;
      FVar12.Data = FVar12.Data + 0x18;
      *(undefined8 *)&pFVar8->Normal = local_b0._0_8_;
      *(undefined8 *)&(pFVar8->Normal).field_0x8 = local_b0._8_8_;
      pFVar8->Penetration = dVar19;
      *(undefined8 *)&(pFVar8->Normal).field_0x10 = local_b0._16_8_;
      dVar13 = *(double *)&(pFVar8->Normal).field_0x8;
      *(double *)&pFVar8->Position = dVar19 * *(double *)&pFVar8->Normal + (double)local_c8._0_8_;
      *(double *)&(pFVar8->Position).field_0x8 = dVar19 * dVar13 + (double)local_c8._8_8_;
      *(double *)&(pFVar8->Position).field_0x10 = dVar19 * (double)local_b0._16_8_ + local_b8;
      uVar10 = local_d8._8_8_ & 0xffffffff;
    }
    if (dVar13 <= 0.0) break;
    uVar10 = local_d8._8_8_ & 0xffffffff;
    FVar12.Data = FVar12.Data + 0x18;
  }
  bVar11 = true;
LAB_143bc1da8:
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  return bVar11;
}

// SweepGeomImp<Chaos::TBox<double,3>_> @ 143bc94b0

bool __thiscall
Chaos::FLevelSet::SweepGeomImp<Chaos::TBox<double,3>_>
          (FLevelSet *this,TBox<double,3> *param_1,TRigidTransform<double,3> *param_2,
          TVector<double,3> *param_3,double param_4,double *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8,double param_9,bool param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  TVector<double,3> *pTVar9;
  TVector<double,3> *pTVar10;
  int iVar11;
  TVector<double,3> *pTVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  bool bVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
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
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_178;
  FScriptContainerElement *local_168;
  undefined1 local_160 [16];
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined1 local_128 [24];
  bool local_110;
  double local_f8;
  undefined1 local_f0 [184];
  
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  GetGeomSurfaceSamples(param_1,&local_178);
  pTVar10 = param_7;
  pTVar9 = param_6;
  pdVar8 = param_5;
  dVar1 = __real_7fefffffffffffff;
  iVar11 = local_178.ArrayNum;
  uVar13 = (ulonglong)local_178.ArrayNum;
  uVar35 = 0;
  uVar36 = 0;
  uVar37 = 0;
  uVar38 = 0;
  uVar29 = 0;
  uVar30 = 0;
  uVar31 = 0;
  uVar32 = 0;
  bVar15 = false;
  *param_5 = 1.7976931348623157e+308;
  local_168 = local_178.AllocatorInstance.Data + uVar13 * 0x18;
  local_138 = 0.0;
  uVar39 = 0;
  uVar40 = 0;
  local_f8 = 0.0;
  uVar33 = 0;
  uVar34 = 0;
  FVar14.Data = local_178.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar13 != iVar11) {
      `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&param_5);
    }
    if (FVar14.Data == local_168) break;
    auVar19 = *(undefined1 (*) [16])&param_2->field_0x10;
    dVar5 = *(double *)(FVar14.Data + 0x10) * *(double *)&param_2->field_0x50;
    dVar6 = *(double *)&param_2->field_0x58 * 0.0;
    auVar21 = *(undefined1 (*) [16])param_2;
    dVar7 = *(double *)&param_2->field_0x18;
    dVar3 = *(double *)&param_2->field_0x40 * *(double *)FVar14.Data;
    dVar4 = *(double *)&param_2->field_0x48 * *(double *)(FVar14.Data + 8);
    uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
    local_128._0_16_ = *(undefined1 (*) [16])param_2;
    auVar20 = blendpd(local_128._0_16_,auVar19,2);
    auVar26._8_4_ = SUB84(dVar4,0);
    auVar26._0_8_ = dVar3;
    auVar26._12_4_ = uVar25;
    dVar16 = auVar19._0_8_;
    auVar27._0_8_ = auVar26._8_8_ * local_128._0_8_ - local_128._8_8_ * dVar3;
    auVar27._8_8_ = dVar5 * local_128._8_8_ - dVar16 * dVar4;
    auVar22._8_4_ = SUB84(dVar4,0);
    auVar22._0_8_ = dVar3;
    auVar22._12_4_ = uVar25;
    auVar17._8_4_ = SUB84(dVar6,0);
    auVar17._0_8_ = dVar5;
    auVar17._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar17 = blendpd(auVar22,auVar17,2);
    auVar18._0_8_ = auVar17._0_8_ * dVar16 - auVar20._0_8_ * dVar5;
    auVar18._8_8_ = auVar17._8_8_ * auVar19._8_8_ - auVar20._8_8_ * dVar6;
    auVar17 = blendpd(auVar27,auVar18,2);
    dVar6 = auVar27._8_8_ + auVar27._8_8_;
    dVar2 = auVar18._0_8_ + auVar18._0_8_;
    uVar25 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar28._0_8_ = auVar17._0_8_ + auVar17._0_8_;
    auVar28._8_8_ = auVar17._8_8_ + auVar17._8_8_;
    auVar23._8_4_ = SUB84(dVar2,0);
    auVar23._0_8_ = dVar6;
    auVar23._12_4_ = uVar25;
    auVar20._8_4_ = SUB84(dVar2,0);
    auVar20._0_8_ = dVar6;
    auVar20._12_4_ = uVar25;
    auVar17 = blendpd(auVar20,auVar28,2);
    auVar22 = blendpd(auVar21,auVar19,2);
    auVar24._0_8_ = auVar23._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar6;
    auVar24._8_8_ = auVar28._0_8_ * auVar21._8_8_ - dVar16 * dVar2;
    auVar21._0_8_ = auVar17._0_8_ * dVar16 - auVar22._0_8_ * auVar28._0_8_;
    auVar21._8_8_ = auVar17._8_8_ * auVar19._8_8_ - auVar22._8_8_ * auVar28._8_8_;
    auVar19._8_4_ = SUB84(auVar24._8_8_,0);
    auVar19._0_8_ = auVar24._0_8_;
    auVar19._12_4_ = (int)((ulonglong)auVar24._8_8_ >> 0x20);
    auVar17 = blendpd(auVar24,auVar21,2);
    local_148 = dVar6 * dVar7 + dVar3 + auVar19._8_8_ + *(double *)&param_2->field_0x20;
    local_140 = dVar2 * dVar7 + dVar4 + auVar21._0_8_ + *(double *)&param_2->field_0x28;
    local_160._8_4_ = SUB84(local_140,0);
    local_160._0_8_ = local_148;
    local_160._12_4_ = (int)((ulonglong)local_140 >> 0x20);
    local_150 = auVar28._0_8_ * dVar7 + dVar5 + auVar17._0_8_ + *(double *)&param_2->field_0x30;
    local_148 = param_4 * *(double *)param_3 + local_148;
    local_140 = param_4 * *(double *)&param_3->field_0x8 + local_140;
    local_138 = param_4 * *(double *)&param_3->field_0x10 + local_150;
    local_f0._16_8_ = local_150;
    FImplicitObject::FindClosestIntersection
              ((FImplicitObject *)this,(Pair<Chaos::TVector<double,3>,bool> *)local_128,
               (TVector<double,3> *)local_160,(TVector<double,3> *)&local_148,0.0);
    auVar19 = local_128._0_16_;
    if (local_110 != false) {
      uVar33 = (undefined4)local_128._16_8_;
      uVar34 = SUB84(local_128._16_8_,4);
      uVar29 = local_128._0_4_;
      uVar30 = local_128._4_4_;
      uVar31 = local_128._8_4_;
      uVar32 = local_128._12_4_;
      local_f8 = (double)local_128._16_8_;
      pTVar12 = FImplicitObject::Normal
                          ((FImplicitObject *)this,(TVector<double,3> *)local_f0,
                           (TVector<double,3> *)local_128);
      uVar35 = *(undefined4 *)pTVar12;
      uVar36 = *(undefined4 *)&pTVar12->field_0x4;
      uVar37 = *(undefined4 *)&pTVar12->field_0x8;
      uVar38 = *(undefined4 *)&pTVar12->field_0xc;
      uVar39 = (undefined4)*(undefined8 *)&pTVar12->field_0x10;
      uVar40 = (undefined4)((ulonglong)*(undefined8 *)&pTVar12->field_0x10 >> 0x20);
      if (param_4 <= 0.0) {
        dVar1 = 0.0;
      }
      else {
        dVar16 = auVar19._0_8_ - (double)local_160._0_8_;
        dVar1 = auVar19._8_8_ - (double)local_160._8_8_;
        dVar1 = SQRT(dVar16 * dVar16 + dVar1 * dVar1 +
                     (local_f8 - local_150) * (local_f8 - local_150));
      }
    }
    if (dVar1 < *pdVar8) {
      *pdVar8 = dVar1;
      bVar15 = true;
      *(undefined4 *)pTVar9 = uVar29;
      *(undefined4 *)&pTVar9->field_0x4 = uVar30;
      *(undefined4 *)&pTVar9->field_0x8 = uVar31;
      *(undefined4 *)&pTVar9->field_0xc = uVar32;
      *(ulonglong *)&pTVar9->field_0x10 = CONCAT44(uVar34,uVar33);
      *(undefined4 *)pTVar10 = uVar35;
      *(undefined4 *)&pTVar10->field_0x4 = uVar36;
      *(undefined4 *)&pTVar10->field_0x8 = uVar37;
      *(undefined4 *)&pTVar10->field_0xc = uVar38;
      *(ulonglong *)&pTVar10->field_0x10 = CONCAT44(uVar40,uVar39);
    }
    uVar13 = local_178._8_8_ & 0xffffffff;
    FVar14.Data = FVar14.Data + 0x18;
  }
  if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  return bVar15;
}

// SweepGeomImp<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> @ 143bc98b0

bool __thiscall
Chaos::FLevelSet::SweepGeomImp<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
          (FLevelSet *this,TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_1,
          TRigidTransform<double,3> *param_2,TVector<double,3> *param_3,double param_4,
          double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8,
          double param_9,bool param_10)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  TBox<double,3> *pTVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  double *pdVar16;
  TVector<double,3> *pTVar17;
  TVector<double,3> *pTVar18;
  int iVar19;
  TVector<double,3> *pTVar20;
  FScriptContainerElement *pFVar21;
  ForAnyElementType FVar22;
  bool bVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
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
  undefined4 uVar47;
  undefined4 uVar48;
  FScriptContainerElement *local_res10;
  TRigidTransform<double,3> *local_res18;
  TVector<double,3> *local_res20;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_168;
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined1 local_128 [24];
  bool local_110;
  double local_f8;
  undefined1 local_f0 [184];
  
  pTVar7 = (param_1->MObject).Reference;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  local_res18 = param_2;
  local_res20 = param_3;
  if (pTVar7 != (TBox<double,3> *)0x0) {
    LOCK();
    *(int *)&pTVar7->_padding_ = (int)pTVar7->_padding_ + 1;
    UNLOCK();
    LOCK();
    plVar1 = &pTVar7->_padding_;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar15 == 1) && (*(int *)((longlong)&pTVar7->_padding_ + 4) == 0)) {
      (**(code **)pTVar7->_padding_)(pTVar7,1);
    }
    GetGeomSurfaceSamples(pTVar7,&local_168);
    fVar4 = *(float *)&param_1->_padding_;
    fVar5 = *(float *)((longlong)&param_1->_padding_ + 4);
    fVar6 = *(float *)&param_1->_padding_;
    iVar19 = local_168.ArrayNum;
    pFVar21 = local_168.AllocatorInstance.Data + 0x10;
    pFVar3 = local_168.AllocatorInstance.Data + (longlong)local_168.ArrayNum * 0x18;
    while( true ) {
      if (local_168.ArrayNum != iVar19) {
        `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      pFVar2 = pFVar21 + -0x10;
      if (pFVar2 == pFVar3) break;
      *(double *)pFVar2 = (double)fVar4 * *(double *)pFVar2;
      *(double *)(pFVar21 + -8) = (double)fVar5 * *(double *)(pFVar21 + -8);
      *(double *)pFVar21 = (double)fVar6 * *(double *)pFVar21;
      pFVar21 = pFVar21 + 0x18;
    }
  }
  pTVar18 = param_7;
  pTVar17 = param_6;
  pdVar16 = param_5;
  dVar8 = __real_7fefffffffffffff;
  iVar19 = local_168.ArrayNum;
  uVar43 = 0;
  uVar44 = 0;
  uVar45 = 0;
  uVar46 = 0;
  uVar37 = 0;
  uVar38 = 0;
  uVar39 = 0;
  uVar40 = 0;
  *param_5 = 1.7976931348623157e+308;
  bVar23 = false;
  local_res10 = local_168.AllocatorInstance.Data + (longlong)local_168.ArrayNum * 0x18;
  local_130 = 0.0;
  uVar47 = 0;
  uVar48 = 0;
  local_f8 = 0.0;
  uVar41 = 0;
  uVar42 = 0;
  FVar22.Data = local_168.AllocatorInstance.Data;
  while( true ) {
    if (local_168.ArrayNum != iVar19) {
      `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&param_5);
    }
    if (FVar22.Data == local_res10) break;
    auVar27 = *(undefined1 (*) [16])&local_res18->field_0x10;
    dVar12 = *(double *)(FVar22.Data + 0x10) * *(double *)&local_res18->field_0x50;
    dVar13 = *(double *)&local_res18->field_0x58 * 0.0;
    auVar29 = *(undefined1 (*) [16])local_res18;
    dVar14 = *(double *)&local_res18->field_0x18;
    dVar10 = *(double *)&local_res18->field_0x40 * *(double *)FVar22.Data;
    dVar11 = *(double *)&local_res18->field_0x48 * *(double *)(FVar22.Data + 8);
    uVar33 = (undefined4)((ulonglong)dVar11 >> 0x20);
    local_128._0_16_ = *(undefined1 (*) [16])local_res18;
    auVar28 = blendpd(local_128._0_16_,auVar27,2);
    auVar34._8_4_ = SUB84(dVar11,0);
    auVar34._0_8_ = dVar10;
    auVar34._12_4_ = uVar33;
    dVar24 = auVar27._0_8_;
    auVar35._0_8_ = auVar34._8_8_ * local_128._0_8_ - local_128._8_8_ * dVar10;
    auVar35._8_8_ = dVar12 * local_128._8_8_ - dVar24 * dVar11;
    auVar30._8_4_ = SUB84(dVar11,0);
    auVar30._0_8_ = dVar10;
    auVar30._12_4_ = uVar33;
    auVar25._8_4_ = SUB84(dVar13,0);
    auVar25._0_8_ = dVar12;
    auVar25._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    auVar25 = blendpd(auVar30,auVar25,2);
    auVar26._0_8_ = auVar25._0_8_ * dVar24 - auVar28._0_8_ * dVar12;
    auVar26._8_8_ = auVar25._8_8_ * auVar27._8_8_ - auVar28._8_8_ * dVar13;
    auVar25 = blendpd(auVar35,auVar26,2);
    dVar13 = auVar35._8_8_ + auVar35._8_8_;
    dVar9 = auVar26._0_8_ + auVar26._0_8_;
    uVar33 = (undefined4)((ulonglong)dVar9 >> 0x20);
    auVar36._0_8_ = auVar25._0_8_ + auVar25._0_8_;
    auVar36._8_8_ = auVar25._8_8_ + auVar25._8_8_;
    auVar31._8_4_ = SUB84(dVar9,0);
    auVar31._0_8_ = dVar13;
    auVar31._12_4_ = uVar33;
    auVar28._8_4_ = SUB84(dVar9,0);
    auVar28._0_8_ = dVar13;
    auVar28._12_4_ = uVar33;
    auVar25 = blendpd(auVar28,auVar36,2);
    auVar30 = blendpd(auVar29,auVar27,2);
    auVar32._0_8_ = auVar31._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar13;
    auVar32._8_8_ = auVar36._0_8_ * auVar29._8_8_ - dVar24 * dVar9;
    auVar29._0_8_ = auVar25._0_8_ * dVar24 - auVar30._0_8_ * auVar36._0_8_;
    auVar29._8_8_ = auVar25._8_8_ * auVar27._8_8_ - auVar30._8_8_ * auVar36._8_8_;
    auVar27._8_4_ = SUB84(auVar32._8_8_,0);
    auVar27._0_8_ = auVar32._0_8_;
    auVar27._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
    auVar25 = blendpd(auVar32,auVar29,2);
    local_140 = dVar13 * dVar14 + dVar10 + auVar27._8_8_ + *(double *)&local_res18->field_0x20;
    local_138 = dVar9 * dVar14 + dVar11 + auVar29._0_8_ + *(double *)&local_res18->field_0x28;
    local_158._8_4_ = SUB84(local_138,0);
    local_158._0_8_ = local_140;
    local_158._12_4_ = (int)((ulonglong)local_138 >> 0x20);
    local_148 = auVar36._0_8_ * dVar14 + dVar12 + auVar25._0_8_ +
                *(double *)&local_res18->field_0x30;
    local_140 = param_4 * *(double *)local_res20 + local_140;
    local_138 = param_4 * *(double *)&local_res20->field_0x8 + local_138;
    local_130 = param_4 * *(double *)&local_res20->field_0x10 + local_148;
    local_f0._16_8_ = local_148;
    FImplicitObject::FindClosestIntersection
              ((FImplicitObject *)this,(Pair<Chaos::TVector<double,3>,bool> *)local_128,
               (TVector<double,3> *)local_158,(TVector<double,3> *)&local_140,0.0);
    auVar27 = local_128._0_16_;
    if (local_110 != false) {
      uVar41 = (undefined4)local_128._16_8_;
      uVar42 = SUB84(local_128._16_8_,4);
      uVar37 = local_128._0_4_;
      uVar38 = local_128._4_4_;
      uVar39 = local_128._8_4_;
      uVar40 = local_128._12_4_;
      local_f8 = (double)local_128._16_8_;
      pTVar20 = FImplicitObject::Normal
                          ((FImplicitObject *)this,(TVector<double,3> *)local_f0,
                           (TVector<double,3> *)local_128);
      uVar43 = *(undefined4 *)pTVar20;
      uVar44 = *(undefined4 *)&pTVar20->field_0x4;
      uVar45 = *(undefined4 *)&pTVar20->field_0x8;
      uVar46 = *(undefined4 *)&pTVar20->field_0xc;
      uVar47 = (undefined4)*(undefined8 *)&pTVar20->field_0x10;
      uVar48 = (undefined4)((ulonglong)*(undefined8 *)&pTVar20->field_0x10 >> 0x20);
      if (param_4 <= 0.0) {
        dVar8 = 0.0;
      }
      else {
        dVar24 = auVar27._0_8_ - (double)local_158._0_8_;
        dVar8 = auVar27._8_8_ - (double)local_158._8_8_;
        dVar8 = SQRT(dVar24 * dVar24 + dVar8 * dVar8 +
                     (local_f8 - local_148) * (local_f8 - local_148));
      }
    }
    if (dVar8 < *pdVar16) {
      *pdVar16 = dVar8;
      bVar23 = true;
      *(undefined4 *)pTVar17 = uVar37;
      *(undefined4 *)&pTVar17->field_0x4 = uVar38;
      *(undefined4 *)&pTVar17->field_0x8 = uVar39;
      *(undefined4 *)&pTVar17->field_0xc = uVar40;
      *(ulonglong *)&pTVar17->field_0x10 = CONCAT44(uVar42,uVar41);
      *(undefined4 *)pTVar18 = uVar43;
      *(undefined4 *)&pTVar18->field_0x4 = uVar44;
      *(undefined4 *)&pTVar18->field_0x8 = uVar45;
      *(undefined4 *)&pTVar18->field_0xc = uVar46;
      *(ulonglong *)&pTVar18->field_0x10 = CONCAT44(uVar48,uVar47);
    }
    FVar22.Data = FVar22.Data + 0x18;
  }
  if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  return bVar23;
}

// SweepGeomImp<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_> @ 143bc9d50

bool __thiscall
Chaos::FLevelSet::SweepGeomImp<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
          (FLevelSet *this,TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_1,
          TRigidTransform<double,3> *param_2,TVector<double,3> *param_3,double param_4,
          double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8,
          double param_9,bool param_10)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  TSphere<double,3> *pTVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  double *pdVar16;
  TVector<double,3> *pTVar17;
  TVector<double,3> *pTVar18;
  int iVar19;
  TVector<double,3> *pTVar20;
  FScriptContainerElement *pFVar21;
  ForAnyElementType FVar22;
  bool bVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
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
  undefined4 uVar47;
  undefined4 uVar48;
  FScriptContainerElement *local_res10;
  TRigidTransform<double,3> *local_res18;
  TVector<double,3> *local_res20;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_168;
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined1 local_128 [24];
  bool local_110;
  double local_f8;
  undefined1 local_f0 [184];
  
  pTVar7 = (param_1->MObject).Reference;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  local_res18 = param_2;
  local_res20 = param_3;
  if (pTVar7 != (TSphere<double,3> *)0x0) {
    LOCK();
    *(int *)&pTVar7->_padding_ = (int)pTVar7->_padding_ + 1;
    UNLOCK();
    LOCK();
    plVar1 = &pTVar7->_padding_;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar15 == 1) && (*(int *)((longlong)&pTVar7->_padding_ + 4) == 0)) {
      (**(code **)pTVar7->_padding_)(pTVar7,1);
    }
    GetGeomSurfaceSamples(pTVar7,&local_168);
    fVar4 = *(float *)&param_1->_padding_;
    fVar5 = *(float *)((longlong)&param_1->_padding_ + 4);
    fVar6 = *(float *)&param_1->_padding_;
    iVar19 = local_168.ArrayNum;
    pFVar21 = local_168.AllocatorInstance.Data + 0x10;
    pFVar3 = local_168.AllocatorInstance.Data + (longlong)local_168.ArrayNum * 0x18;
    while( true ) {
      if (local_168.ArrayNum != iVar19) {
        `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      pFVar2 = pFVar21 + -0x10;
      if (pFVar2 == pFVar3) break;
      *(double *)pFVar2 = (double)fVar4 * *(double *)pFVar2;
      *(double *)(pFVar21 + -8) = (double)fVar5 * *(double *)(pFVar21 + -8);
      *(double *)pFVar21 = (double)fVar6 * *(double *)pFVar21;
      pFVar21 = pFVar21 + 0x18;
    }
  }
  pTVar18 = param_7;
  pTVar17 = param_6;
  pdVar16 = param_5;
  dVar8 = __real_7fefffffffffffff;
  iVar19 = local_168.ArrayNum;
  uVar43 = 0;
  uVar44 = 0;
  uVar45 = 0;
  uVar46 = 0;
  uVar37 = 0;
  uVar38 = 0;
  uVar39 = 0;
  uVar40 = 0;
  *param_5 = 1.7976931348623157e+308;
  bVar23 = false;
  local_res10 = local_168.AllocatorInstance.Data + (longlong)local_168.ArrayNum * 0x18;
  local_130 = 0.0;
  uVar47 = 0;
  uVar48 = 0;
  local_f8 = 0.0;
  uVar41 = 0;
  uVar42 = 0;
  FVar22.Data = local_168.AllocatorInstance.Data;
  while( true ) {
    if (local_168.ArrayNum != iVar19) {
      `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&param_5);
    }
    if (FVar22.Data == local_res10) break;
    auVar27 = *(undefined1 (*) [16])&local_res18->field_0x10;
    dVar12 = *(double *)(FVar22.Data + 0x10) * *(double *)&local_res18->field_0x50;
    dVar13 = *(double *)&local_res18->field_0x58 * 0.0;
    auVar29 = *(undefined1 (*) [16])local_res18;
    dVar14 = *(double *)&local_res18->field_0x18;
    dVar10 = *(double *)&local_res18->field_0x40 * *(double *)FVar22.Data;
    dVar11 = *(double *)&local_res18->field_0x48 * *(double *)(FVar22.Data + 8);
    uVar33 = (undefined4)((ulonglong)dVar11 >> 0x20);
    local_128._0_16_ = *(undefined1 (*) [16])local_res18;
    auVar28 = blendpd(local_128._0_16_,auVar27,2);
    auVar34._8_4_ = SUB84(dVar11,0);
    auVar34._0_8_ = dVar10;
    auVar34._12_4_ = uVar33;
    dVar24 = auVar27._0_8_;
    auVar35._0_8_ = auVar34._8_8_ * local_128._0_8_ - local_128._8_8_ * dVar10;
    auVar35._8_8_ = dVar12 * local_128._8_8_ - dVar24 * dVar11;
    auVar30._8_4_ = SUB84(dVar11,0);
    auVar30._0_8_ = dVar10;
    auVar30._12_4_ = uVar33;
    auVar25._8_4_ = SUB84(dVar13,0);
    auVar25._0_8_ = dVar12;
    auVar25._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    auVar25 = blendpd(auVar30,auVar25,2);
    auVar26._0_8_ = auVar25._0_8_ * dVar24 - auVar28._0_8_ * dVar12;
    auVar26._8_8_ = auVar25._8_8_ * auVar27._8_8_ - auVar28._8_8_ * dVar13;
    auVar25 = blendpd(auVar35,auVar26,2);
    dVar13 = auVar35._8_8_ + auVar35._8_8_;
    dVar9 = auVar26._0_8_ + auVar26._0_8_;
    uVar33 = (undefined4)((ulonglong)dVar9 >> 0x20);
    auVar36._0_8_ = auVar25._0_8_ + auVar25._0_8_;
    auVar36._8_8_ = auVar25._8_8_ + auVar25._8_8_;
    auVar31._8_4_ = SUB84(dVar9,0);
    auVar31._0_8_ = dVar13;
    auVar31._12_4_ = uVar33;
    auVar28._8_4_ = SUB84(dVar9,0);
    auVar28._0_8_ = dVar13;
    auVar28._12_4_ = uVar33;
    auVar25 = blendpd(auVar28,auVar36,2);
    auVar30 = blendpd(auVar29,auVar27,2);
    auVar32._0_8_ = auVar31._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar13;
    auVar32._8_8_ = auVar36._0_8_ * auVar29._8_8_ - dVar24 * dVar9;
    auVar29._0_8_ = auVar25._0_8_ * dVar24 - auVar30._0_8_ * auVar36._0_8_;
    auVar29._8_8_ = auVar25._8_8_ * auVar27._8_8_ - auVar30._8_8_ * auVar36._8_8_;
    auVar27._8_4_ = SUB84(auVar32._8_8_,0);
    auVar27._0_8_ = auVar32._0_8_;
    auVar27._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
    auVar25 = blendpd(auVar32,auVar29,2);
    local_140 = dVar13 * dVar14 + dVar10 + auVar27._8_8_ + *(double *)&local_res18->field_0x20;
    local_138 = dVar9 * dVar14 + dVar11 + auVar29._0_8_ + *(double *)&local_res18->field_0x28;
    local_158._8_4_ = SUB84(local_138,0);
    local_158._0_8_ = local_140;
    local_158._12_4_ = (int)((ulonglong)local_138 >> 0x20);
    local_148 = auVar36._0_8_ * dVar14 + dVar12 + auVar25._0_8_ +
                *(double *)&local_res18->field_0x30;
    local_140 = param_4 * *(double *)local_res20 + local_140;
    local_138 = param_4 * *(double *)&local_res20->field_0x8 + local_138;
    local_130 = param_4 * *(double *)&local_res20->field_0x10 + local_148;
    local_f0._16_8_ = local_148;
    FImplicitObject::FindClosestIntersection
              ((FImplicitObject *)this,(Pair<Chaos::TVector<double,3>,bool> *)local_128,
               (TVector<double,3> *)local_158,(TVector<double,3> *)&local_140,0.0);
    auVar27 = local_128._0_16_;
    if (local_110 != false) {
      uVar41 = (undefined4)local_128._16_8_;
      uVar42 = SUB84(local_128._16_8_,4);
      uVar37 = local_128._0_4_;
      uVar38 = local_128._4_4_;
      uVar39 = local_128._8_4_;
      uVar40 = local_128._12_4_;
      local_f8 = (double)local_128._16_8_;
      pTVar20 = FImplicitObject::Normal
                          ((FImplicitObject *)this,(TVector<double,3> *)local_f0,
                           (TVector<double,3> *)local_128);
      uVar43 = *(undefined4 *)pTVar20;
      uVar44 = *(undefined4 *)&pTVar20->field_0x4;
      uVar45 = *(undefined4 *)&pTVar20->field_0x8;
      uVar46 = *(undefined4 *)&pTVar20->field_0xc;
      uVar47 = (undefined4)*(undefined8 *)&pTVar20->field_0x10;
      uVar48 = (undefined4)((ulonglong)*(undefined8 *)&pTVar20->field_0x10 >> 0x20);
      if (param_4 <= 0.0) {
        dVar8 = 0.0;
      }
      else {
        dVar24 = auVar27._0_8_ - (double)local_158._0_8_;
        dVar8 = auVar27._8_8_ - (double)local_158._8_8_;
        dVar8 = SQRT(dVar24 * dVar24 + dVar8 * dVar8 +
                     (local_f8 - local_148) * (local_f8 - local_148));
      }
    }
    if (dVar8 < *pdVar16) {
      *pdVar16 = dVar8;
      bVar23 = true;
      *(undefined4 *)pTVar17 = uVar37;
      *(undefined4 *)&pTVar17->field_0x4 = uVar38;
      *(undefined4 *)&pTVar17->field_0x8 = uVar39;
      *(undefined4 *)&pTVar17->field_0xc = uVar40;
      *(ulonglong *)&pTVar17->field_0x10 = CONCAT44(uVar42,uVar41);
      *(undefined4 *)pTVar18 = uVar43;
      *(undefined4 *)&pTVar18->field_0x4 = uVar44;
      *(undefined4 *)&pTVar18->field_0x8 = uVar45;
      *(undefined4 *)&pTVar18->field_0xc = uVar46;
      *(ulonglong *)&pTVar18->field_0x10 = CONCAT44(uVar48,uVar47);
    }
    FVar22.Data = FVar22.Data + 0x18;
  }
  if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  return bVar23;
}

// SweepGeomImp<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> @ 143bca1f0

bool __thiscall
Chaos::FLevelSet::SweepGeomImp<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
          (FLevelSet *this,TImplicitObjectScaled<Chaos::FCapsule,1> *param_1,
          TRigidTransform<double,3> *param_2,TVector<double,3> *param_3,double param_4,
          double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8,
          double param_9,bool param_10)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FCapsule *pFVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  double *pdVar16;
  TVector<double,3> *pTVar17;
  TVector<double,3> *pTVar18;
  int iVar19;
  TVector<double,3> *pTVar20;
  FScriptContainerElement *pFVar21;
  ForAnyElementType FVar22;
  bool bVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
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
  undefined4 uVar47;
  undefined4 uVar48;
  FScriptContainerElement *local_res10;
  TRigidTransform<double,3> *local_res18;
  TVector<double,3> *local_res20;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_168;
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined1 local_128 [24];
  bool local_110;
  double local_f8;
  undefined1 local_f0 [184];
  
  pFVar7 = (param_1->MObject).Reference;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  local_res18 = param_2;
  local_res20 = param_3;
  if (pFVar7 != (FCapsule *)0x0) {
    LOCK();
    *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
    UNLOCK();
    LOCK();
    plVar1 = &pFVar7->_padding_;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar15 == 1) && (*(int *)((longlong)&pFVar7->_padding_ + 4) == 0)) {
      (**(code **)pFVar7->_padding_)(pFVar7,1);
    }
    GetGeomSurfaceSamples(pFVar7,&local_168);
    fVar4 = *(float *)&param_1->_padding_;
    fVar5 = *(float *)((longlong)&param_1->_padding_ + 4);
    fVar6 = *(float *)&param_1->_padding_;
    iVar19 = local_168.ArrayNum;
    pFVar21 = local_168.AllocatorInstance.Data + 0x10;
    pFVar3 = local_168.AllocatorInstance.Data + (longlong)local_168.ArrayNum * 0x18;
    while( true ) {
      if (local_168.ArrayNum != iVar19) {
        `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      pFVar2 = pFVar21 + -0x10;
      if (pFVar2 == pFVar3) break;
      *(double *)pFVar2 = (double)fVar4 * *(double *)pFVar2;
      *(double *)(pFVar21 + -8) = (double)fVar5 * *(double *)(pFVar21 + -8);
      *(double *)pFVar21 = (double)fVar6 * *(double *)pFVar21;
      pFVar21 = pFVar21 + 0x18;
    }
  }
  pTVar18 = param_7;
  pTVar17 = param_6;
  pdVar16 = param_5;
  dVar8 = __real_7fefffffffffffff;
  iVar19 = local_168.ArrayNum;
  uVar43 = 0;
  uVar44 = 0;
  uVar45 = 0;
  uVar46 = 0;
  uVar37 = 0;
  uVar38 = 0;
  uVar39 = 0;
  uVar40 = 0;
  *param_5 = 1.7976931348623157e+308;
  bVar23 = false;
  local_res10 = local_168.AllocatorInstance.Data + (longlong)local_168.ArrayNum * 0x18;
  local_130 = 0.0;
  uVar47 = 0;
  uVar48 = 0;
  local_f8 = 0.0;
  uVar41 = 0;
  uVar42 = 0;
  FVar22.Data = local_168.AllocatorInstance.Data;
  while( true ) {
    if (local_168.ArrayNum != iVar19) {
      `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&param_5);
    }
    if (FVar22.Data == local_res10) break;
    auVar27 = *(undefined1 (*) [16])&local_res18->field_0x10;
    dVar12 = *(double *)(FVar22.Data + 0x10) * *(double *)&local_res18->field_0x50;
    dVar13 = *(double *)&local_res18->field_0x58 * 0.0;
    auVar29 = *(undefined1 (*) [16])local_res18;
    dVar14 = *(double *)&local_res18->field_0x18;
    dVar10 = *(double *)&local_res18->field_0x40 * *(double *)FVar22.Data;
    dVar11 = *(double *)&local_res18->field_0x48 * *(double *)(FVar22.Data + 8);
    uVar33 = (undefined4)((ulonglong)dVar11 >> 0x20);
    local_128._0_16_ = *(undefined1 (*) [16])local_res18;
    auVar28 = blendpd(local_128._0_16_,auVar27,2);
    auVar34._8_4_ = SUB84(dVar11,0);
    auVar34._0_8_ = dVar10;
    auVar34._12_4_ = uVar33;
    dVar24 = auVar27._0_8_;
    auVar35._0_8_ = auVar34._8_8_ * local_128._0_8_ - local_128._8_8_ * dVar10;
    auVar35._8_8_ = dVar12 * local_128._8_8_ - dVar24 * dVar11;
    auVar30._8_4_ = SUB84(dVar11,0);
    auVar30._0_8_ = dVar10;
    auVar30._12_4_ = uVar33;
    auVar25._8_4_ = SUB84(dVar13,0);
    auVar25._0_8_ = dVar12;
    auVar25._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    auVar25 = blendpd(auVar30,auVar25,2);
    auVar26._0_8_ = auVar25._0_8_ * dVar24 - auVar28._0_8_ * dVar12;
    auVar26._8_8_ = auVar25._8_8_ * auVar27._8_8_ - auVar28._8_8_ * dVar13;
    auVar25 = blendpd(auVar35,auVar26,2);
    dVar13 = auVar35._8_8_ + auVar35._8_8_;
    dVar9 = auVar26._0_8_ + auVar26._0_8_;
    uVar33 = (undefined4)((ulonglong)dVar9 >> 0x20);
    auVar36._0_8_ = auVar25._0_8_ + auVar25._0_8_;
    auVar36._8_8_ = auVar25._8_8_ + auVar25._8_8_;
    auVar31._8_4_ = SUB84(dVar9,0);
    auVar31._0_8_ = dVar13;
    auVar31._12_4_ = uVar33;
    auVar28._8_4_ = SUB84(dVar9,0);
    auVar28._0_8_ = dVar13;
    auVar28._12_4_ = uVar33;
    auVar25 = blendpd(auVar28,auVar36,2);
    auVar30 = blendpd(auVar29,auVar27,2);
    auVar32._0_8_ = auVar31._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar13;
    auVar32._8_8_ = auVar36._0_8_ * auVar29._8_8_ - dVar24 * dVar9;
    auVar29._0_8_ = auVar25._0_8_ * dVar24 - auVar30._0_8_ * auVar36._0_8_;
    auVar29._8_8_ = auVar25._8_8_ * auVar27._8_8_ - auVar30._8_8_ * auVar36._8_8_;
    auVar27._8_4_ = SUB84(auVar32._8_8_,0);
    auVar27._0_8_ = auVar32._0_8_;
    auVar27._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
    auVar25 = blendpd(auVar32,auVar29,2);
    local_140 = dVar13 * dVar14 + dVar10 + auVar27._8_8_ + *(double *)&local_res18->field_0x20;
    local_138 = dVar9 * dVar14 + dVar11 + auVar29._0_8_ + *(double *)&local_res18->field_0x28;
    local_158._8_4_ = SUB84(local_138,0);
    local_158._0_8_ = local_140;
    local_158._12_4_ = (int)((ulonglong)local_138 >> 0x20);
    local_148 = auVar36._0_8_ * dVar14 + dVar12 + auVar25._0_8_ +
                *(double *)&local_res18->field_0x30;
    local_140 = param_4 * *(double *)local_res20 + local_140;
    local_138 = param_4 * *(double *)&local_res20->field_0x8 + local_138;
    local_130 = param_4 * *(double *)&local_res20->field_0x10 + local_148;
    local_f0._16_8_ = local_148;
    FImplicitObject::FindClosestIntersection
              ((FImplicitObject *)this,(Pair<Chaos::TVector<double,3>,bool> *)local_128,
               (TVector<double,3> *)local_158,(TVector<double,3> *)&local_140,0.0);
    auVar27 = local_128._0_16_;
    if (local_110 != false) {
      uVar41 = (undefined4)local_128._16_8_;
      uVar42 = SUB84(local_128._16_8_,4);
      uVar37 = local_128._0_4_;
      uVar38 = local_128._4_4_;
      uVar39 = local_128._8_4_;
      uVar40 = local_128._12_4_;
      local_f8 = (double)local_128._16_8_;
      pTVar20 = FImplicitObject::Normal
                          ((FImplicitObject *)this,(TVector<double,3> *)local_f0,
                           (TVector<double,3> *)local_128);
      uVar43 = *(undefined4 *)pTVar20;
      uVar44 = *(undefined4 *)&pTVar20->field_0x4;
      uVar45 = *(undefined4 *)&pTVar20->field_0x8;
      uVar46 = *(undefined4 *)&pTVar20->field_0xc;
      uVar47 = (undefined4)*(undefined8 *)&pTVar20->field_0x10;
      uVar48 = (undefined4)((ulonglong)*(undefined8 *)&pTVar20->field_0x10 >> 0x20);
      if (param_4 <= 0.0) {
        dVar8 = 0.0;
      }
      else {
        dVar24 = auVar27._0_8_ - (double)local_158._0_8_;
        dVar8 = auVar27._8_8_ - (double)local_158._8_8_;
        dVar8 = SQRT(dVar24 * dVar24 + dVar8 * dVar8 +
                     (local_f8 - local_148) * (local_f8 - local_148));
      }
    }
    if (dVar8 < *pdVar16) {
      *pdVar16 = dVar8;
      bVar23 = true;
      *(undefined4 *)pTVar17 = uVar37;
      *(undefined4 *)&pTVar17->field_0x4 = uVar38;
      *(undefined4 *)&pTVar17->field_0x8 = uVar39;
      *(undefined4 *)&pTVar17->field_0xc = uVar40;
      *(ulonglong *)&pTVar17->field_0x10 = CONCAT44(uVar42,uVar41);
      *(undefined4 *)pTVar18 = uVar43;
      *(undefined4 *)&pTVar18->field_0x4 = uVar44;
      *(undefined4 *)&pTVar18->field_0x8 = uVar45;
      *(undefined4 *)&pTVar18->field_0xc = uVar46;
      *(ulonglong *)&pTVar18->field_0x10 = CONCAT44(uVar48,uVar47);
    }
    FVar22.Data = FVar22.Data + 0x18;
  }
  if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  return bVar23;
}

// SweepGeomImp<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> @ 143bca690

bool __thiscall
Chaos::FLevelSet::SweepGeomImp<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
          (FLevelSet *this,TImplicitObjectScaled<Chaos::FConvex,1> *param_1,
          TRigidTransform<double,3> *param_2,TVector<double,3> *param_3,double param_4,
          double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8,
          double param_9,bool param_10)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FConvex *pFVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  double *pdVar16;
  TVector<double,3> *pTVar17;
  TVector<double,3> *pTVar18;
  int iVar19;
  TVector<double,3> *pTVar20;
  FScriptContainerElement *pFVar21;
  ForAnyElementType FVar22;
  bool bVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
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
  undefined4 uVar47;
  undefined4 uVar48;
  FScriptContainerElement *local_res10;
  TRigidTransform<double,3> *local_res18;
  TVector<double,3> *local_res20;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_168;
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined1 local_128 [24];
  bool local_110;
  double local_f8;
  undefined1 local_f0 [184];
  
  pFVar7 = (param_1->MObject).Reference;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  local_res18 = param_2;
  local_res20 = param_3;
  if (pFVar7 != (FConvex *)0x0) {
    LOCK();
    *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
    UNLOCK();
    LOCK();
    plVar1 = &pFVar7->_padding_;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar15 == 1) && (*(int *)((longlong)&pFVar7->_padding_ + 4) == 0)) {
      (**(code **)pFVar7->_padding_)(pFVar7,1);
    }
    GetGeomSurfaceSamples(pFVar7,&local_168);
    fVar4 = *(float *)&param_1->_padding_;
    fVar5 = *(float *)((longlong)&param_1->_padding_ + 4);
    fVar6 = *(float *)&param_1->_padding_;
    iVar19 = local_168.ArrayNum;
    pFVar21 = local_168.AllocatorInstance.Data + 0x10;
    pFVar3 = local_168.AllocatorInstance.Data + (longlong)local_168.ArrayNum * 0x18;
    while( true ) {
      if (local_168.ArrayNum != iVar19) {
        `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      pFVar2 = pFVar21 + -0x10;
      if (pFVar2 == pFVar3) break;
      *(double *)pFVar2 = (double)fVar4 * *(double *)pFVar2;
      *(double *)(pFVar21 + -8) = (double)fVar5 * *(double *)(pFVar21 + -8);
      *(double *)pFVar21 = (double)fVar6 * *(double *)pFVar21;
      pFVar21 = pFVar21 + 0x18;
    }
  }
  pTVar18 = param_7;
  pTVar17 = param_6;
  pdVar16 = param_5;
  dVar8 = __real_7fefffffffffffff;
  iVar19 = local_168.ArrayNum;
  uVar43 = 0;
  uVar44 = 0;
  uVar45 = 0;
  uVar46 = 0;
  uVar37 = 0;
  uVar38 = 0;
  uVar39 = 0;
  uVar40 = 0;
  *param_5 = 1.7976931348623157e+308;
  bVar23 = false;
  local_res10 = local_168.AllocatorInstance.Data + (longlong)local_168.ArrayNum * 0x18;
  local_130 = 0.0;
  uVar47 = 0;
  uVar48 = 0;
  local_f8 = 0.0;
  uVar41 = 0;
  uVar42 = 0;
  FVar22.Data = local_168.AllocatorInstance.Data;
  while( true ) {
    if (local_168.ArrayNum != iVar19) {
      `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&param_5);
    }
    if (FVar22.Data == local_res10) break;
    auVar27 = *(undefined1 (*) [16])&local_res18->field_0x10;
    dVar12 = *(double *)(FVar22.Data + 0x10) * *(double *)&local_res18->field_0x50;
    dVar13 = *(double *)&local_res18->field_0x58 * 0.0;
    auVar29 = *(undefined1 (*) [16])local_res18;
    dVar14 = *(double *)&local_res18->field_0x18;
    dVar10 = *(double *)&local_res18->field_0x40 * *(double *)FVar22.Data;
    dVar11 = *(double *)&local_res18->field_0x48 * *(double *)(FVar22.Data + 8);
    uVar33 = (undefined4)((ulonglong)dVar11 >> 0x20);
    local_128._0_16_ = *(undefined1 (*) [16])local_res18;
    auVar28 = blendpd(local_128._0_16_,auVar27,2);
    auVar34._8_4_ = SUB84(dVar11,0);
    auVar34._0_8_ = dVar10;
    auVar34._12_4_ = uVar33;
    dVar24 = auVar27._0_8_;
    auVar35._0_8_ = auVar34._8_8_ * local_128._0_8_ - local_128._8_8_ * dVar10;
    auVar35._8_8_ = dVar12 * local_128._8_8_ - dVar24 * dVar11;
    auVar30._8_4_ = SUB84(dVar11,0);
    auVar30._0_8_ = dVar10;
    auVar30._12_4_ = uVar33;
    auVar25._8_4_ = SUB84(dVar13,0);
    auVar25._0_8_ = dVar12;
    auVar25._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    auVar25 = blendpd(auVar30,auVar25,2);
    auVar26._0_8_ = auVar25._0_8_ * dVar24 - auVar28._0_8_ * dVar12;
    auVar26._8_8_ = auVar25._8_8_ * auVar27._8_8_ - auVar28._8_8_ * dVar13;
    auVar25 = blendpd(auVar35,auVar26,2);
    dVar13 = auVar35._8_8_ + auVar35._8_8_;
    dVar9 = auVar26._0_8_ + auVar26._0_8_;
    uVar33 = (undefined4)((ulonglong)dVar9 >> 0x20);
    auVar36._0_8_ = auVar25._0_8_ + auVar25._0_8_;
    auVar36._8_8_ = auVar25._8_8_ + auVar25._8_8_;
    auVar31._8_4_ = SUB84(dVar9,0);
    auVar31._0_8_ = dVar13;
    auVar31._12_4_ = uVar33;
    auVar28._8_4_ = SUB84(dVar9,0);
    auVar28._0_8_ = dVar13;
    auVar28._12_4_ = uVar33;
    auVar25 = blendpd(auVar28,auVar36,2);
    auVar30 = blendpd(auVar29,auVar27,2);
    auVar32._0_8_ = auVar31._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar13;
    auVar32._8_8_ = auVar36._0_8_ * auVar29._8_8_ - dVar24 * dVar9;
    auVar29._0_8_ = auVar25._0_8_ * dVar24 - auVar30._0_8_ * auVar36._0_8_;
    auVar29._8_8_ = auVar25._8_8_ * auVar27._8_8_ - auVar30._8_8_ * auVar36._8_8_;
    auVar27._8_4_ = SUB84(auVar32._8_8_,0);
    auVar27._0_8_ = auVar32._0_8_;
    auVar27._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
    auVar25 = blendpd(auVar32,auVar29,2);
    local_140 = dVar13 * dVar14 + dVar10 + auVar27._8_8_ + *(double *)&local_res18->field_0x20;
    local_138 = dVar9 * dVar14 + dVar11 + auVar29._0_8_ + *(double *)&local_res18->field_0x28;
    local_158._8_4_ = SUB84(local_138,0);
    local_158._0_8_ = local_140;
    local_158._12_4_ = (int)((ulonglong)local_138 >> 0x20);
    local_148 = auVar36._0_8_ * dVar14 + dVar12 + auVar25._0_8_ +
                *(double *)&local_res18->field_0x30;
    local_140 = param_4 * *(double *)local_res20 + local_140;
    local_138 = param_4 * *(double *)&local_res20->field_0x8 + local_138;
    local_130 = param_4 * *(double *)&local_res20->field_0x10 + local_148;
    local_f0._16_8_ = local_148;
    FImplicitObject::FindClosestIntersection
              ((FImplicitObject *)this,(Pair<Chaos::TVector<double,3>,bool> *)local_128,
               (TVector<double,3> *)local_158,(TVector<double,3> *)&local_140,0.0);
    auVar27 = local_128._0_16_;
    if (local_110 != false) {
      uVar41 = (undefined4)local_128._16_8_;
      uVar42 = SUB84(local_128._16_8_,4);
      uVar37 = local_128._0_4_;
      uVar38 = local_128._4_4_;
      uVar39 = local_128._8_4_;
      uVar40 = local_128._12_4_;
      local_f8 = (double)local_128._16_8_;
      pTVar20 = FImplicitObject::Normal
                          ((FImplicitObject *)this,(TVector<double,3> *)local_f0,
                           (TVector<double,3> *)local_128);
      uVar43 = *(undefined4 *)pTVar20;
      uVar44 = *(undefined4 *)&pTVar20->field_0x4;
      uVar45 = *(undefined4 *)&pTVar20->field_0x8;
      uVar46 = *(undefined4 *)&pTVar20->field_0xc;
      uVar47 = (undefined4)*(undefined8 *)&pTVar20->field_0x10;
      uVar48 = (undefined4)((ulonglong)*(undefined8 *)&pTVar20->field_0x10 >> 0x20);
      if (param_4 <= 0.0) {
        dVar8 = 0.0;
      }
      else {
        dVar24 = auVar27._0_8_ - (double)local_158._0_8_;
        dVar8 = auVar27._8_8_ - (double)local_158._8_8_;
        dVar8 = SQRT(dVar24 * dVar24 + dVar8 * dVar8 +
                     (local_f8 - local_148) * (local_f8 - local_148));
      }
    }
    if (dVar8 < *pdVar16) {
      *pdVar16 = dVar8;
      bVar23 = true;
      *(undefined4 *)pTVar17 = uVar37;
      *(undefined4 *)&pTVar17->field_0x4 = uVar38;
      *(undefined4 *)&pTVar17->field_0x8 = uVar39;
      *(undefined4 *)&pTVar17->field_0xc = uVar40;
      *(ulonglong *)&pTVar17->field_0x10 = CONCAT44(uVar42,uVar41);
      *(undefined4 *)pTVar18 = uVar43;
      *(undefined4 *)&pTVar18->field_0x4 = uVar44;
      *(undefined4 *)&pTVar18->field_0x8 = uVar45;
      *(undefined4 *)&pTVar18->field_0xc = uVar46;
      *(ulonglong *)&pTVar18->field_0x10 = CONCAT44(uVar48,uVar47);
    }
    FVar22.Data = FVar22.Data + 0x18;
  }
  if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  return bVar23;
}

// SweepGeomImp<Chaos::TSphere<double,3>_> @ 143bcab30

bool __thiscall
Chaos::FLevelSet::SweepGeomImp<Chaos::TSphere<double,3>_>
          (FLevelSet *this,TSphere<double,3> *param_1,TRigidTransform<double,3> *param_2,
          TVector<double,3> *param_3,double param_4,double *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8,double param_9,bool param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  TVector<double,3> *pTVar9;
  TVector<double,3> *pTVar10;
  int iVar11;
  TVector<double,3> *pTVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  bool bVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
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
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_178;
  FScriptContainerElement *local_168;
  undefined1 local_160 [16];
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined1 local_128 [24];
  bool local_110;
  double local_f8;
  undefined1 local_f0 [184];
  
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  GetGeomSurfaceSamples(param_1,&local_178);
  pTVar10 = param_7;
  pTVar9 = param_6;
  pdVar8 = param_5;
  dVar1 = __real_7fefffffffffffff;
  iVar11 = local_178.ArrayNum;
  uVar13 = (ulonglong)local_178.ArrayNum;
  uVar35 = 0;
  uVar36 = 0;
  uVar37 = 0;
  uVar38 = 0;
  uVar29 = 0;
  uVar30 = 0;
  uVar31 = 0;
  uVar32 = 0;
  bVar15 = false;
  *param_5 = 1.7976931348623157e+308;
  local_168 = local_178.AllocatorInstance.Data + uVar13 * 0x18;
  local_138 = 0.0;
  uVar39 = 0;
  uVar40 = 0;
  local_f8 = 0.0;
  uVar33 = 0;
  uVar34 = 0;
  FVar14.Data = local_178.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar13 != iVar11) {
      `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&param_5);
    }
    if (FVar14.Data == local_168) break;
    auVar19 = *(undefined1 (*) [16])&param_2->field_0x10;
    dVar5 = *(double *)(FVar14.Data + 0x10) * *(double *)&param_2->field_0x50;
    dVar6 = *(double *)&param_2->field_0x58 * 0.0;
    auVar21 = *(undefined1 (*) [16])param_2;
    dVar7 = *(double *)&param_2->field_0x18;
    dVar3 = *(double *)&param_2->field_0x40 * *(double *)FVar14.Data;
    dVar4 = *(double *)&param_2->field_0x48 * *(double *)(FVar14.Data + 8);
    uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
    local_128._0_16_ = *(undefined1 (*) [16])param_2;
    auVar20 = blendpd(local_128._0_16_,auVar19,2);
    auVar26._8_4_ = SUB84(dVar4,0);
    auVar26._0_8_ = dVar3;
    auVar26._12_4_ = uVar25;
    dVar16 = auVar19._0_8_;
    auVar27._0_8_ = auVar26._8_8_ * local_128._0_8_ - local_128._8_8_ * dVar3;
    auVar27._8_8_ = dVar5 * local_128._8_8_ - dVar16 * dVar4;
    auVar22._8_4_ = SUB84(dVar4,0);
    auVar22._0_8_ = dVar3;
    auVar22._12_4_ = uVar25;
    auVar17._8_4_ = SUB84(dVar6,0);
    auVar17._0_8_ = dVar5;
    auVar17._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar17 = blendpd(auVar22,auVar17,2);
    auVar18._0_8_ = auVar17._0_8_ * dVar16 - auVar20._0_8_ * dVar5;
    auVar18._8_8_ = auVar17._8_8_ * auVar19._8_8_ - auVar20._8_8_ * dVar6;
    auVar17 = blendpd(auVar27,auVar18,2);
    dVar6 = auVar27._8_8_ + auVar27._8_8_;
    dVar2 = auVar18._0_8_ + auVar18._0_8_;
    uVar25 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar28._0_8_ = auVar17._0_8_ + auVar17._0_8_;
    auVar28._8_8_ = auVar17._8_8_ + auVar17._8_8_;
    auVar23._8_4_ = SUB84(dVar2,0);
    auVar23._0_8_ = dVar6;
    auVar23._12_4_ = uVar25;
    auVar20._8_4_ = SUB84(dVar2,0);
    auVar20._0_8_ = dVar6;
    auVar20._12_4_ = uVar25;
    auVar17 = blendpd(auVar20,auVar28,2);
    auVar22 = blendpd(auVar21,auVar19,2);
    auVar24._0_8_ = auVar23._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar6;
    auVar24._8_8_ = auVar28._0_8_ * auVar21._8_8_ - dVar16 * dVar2;
    auVar21._0_8_ = auVar17._0_8_ * dVar16 - auVar22._0_8_ * auVar28._0_8_;
    auVar21._8_8_ = auVar17._8_8_ * auVar19._8_8_ - auVar22._8_8_ * auVar28._8_8_;
    auVar19._8_4_ = SUB84(auVar24._8_8_,0);
    auVar19._0_8_ = auVar24._0_8_;
    auVar19._12_4_ = (int)((ulonglong)auVar24._8_8_ >> 0x20);
    auVar17 = blendpd(auVar24,auVar21,2);
    local_148 = dVar6 * dVar7 + dVar3 + auVar19._8_8_ + *(double *)&param_2->field_0x20;
    local_140 = dVar2 * dVar7 + dVar4 + auVar21._0_8_ + *(double *)&param_2->field_0x28;
    local_160._8_4_ = SUB84(local_140,0);
    local_160._0_8_ = local_148;
    local_160._12_4_ = (int)((ulonglong)local_140 >> 0x20);
    local_150 = auVar28._0_8_ * dVar7 + dVar5 + auVar17._0_8_ + *(double *)&param_2->field_0x30;
    local_148 = param_4 * *(double *)param_3 + local_148;
    local_140 = param_4 * *(double *)&param_3->field_0x8 + local_140;
    local_138 = param_4 * *(double *)&param_3->field_0x10 + local_150;
    local_f0._16_8_ = local_150;
    FImplicitObject::FindClosestIntersection
              ((FImplicitObject *)this,(Pair<Chaos::TVector<double,3>,bool> *)local_128,
               (TVector<double,3> *)local_160,(TVector<double,3> *)&local_148,0.0);
    auVar19 = local_128._0_16_;
    if (local_110 != false) {
      uVar33 = (undefined4)local_128._16_8_;
      uVar34 = SUB84(local_128._16_8_,4);
      uVar29 = local_128._0_4_;
      uVar30 = local_128._4_4_;
      uVar31 = local_128._8_4_;
      uVar32 = local_128._12_4_;
      local_f8 = (double)local_128._16_8_;
      pTVar12 = FImplicitObject::Normal
                          ((FImplicitObject *)this,(TVector<double,3> *)local_f0,
                           (TVector<double,3> *)local_128);
      uVar35 = *(undefined4 *)pTVar12;
      uVar36 = *(undefined4 *)&pTVar12->field_0x4;
      uVar37 = *(undefined4 *)&pTVar12->field_0x8;
      uVar38 = *(undefined4 *)&pTVar12->field_0xc;
      uVar39 = (undefined4)*(undefined8 *)&pTVar12->field_0x10;
      uVar40 = (undefined4)((ulonglong)*(undefined8 *)&pTVar12->field_0x10 >> 0x20);
      if (param_4 <= 0.0) {
        dVar1 = 0.0;
      }
      else {
        dVar16 = auVar19._0_8_ - (double)local_160._0_8_;
        dVar1 = auVar19._8_8_ - (double)local_160._8_8_;
        dVar1 = SQRT(dVar16 * dVar16 + dVar1 * dVar1 +
                     (local_f8 - local_150) * (local_f8 - local_150));
      }
    }
    if (dVar1 < *pdVar8) {
      *pdVar8 = dVar1;
      bVar15 = true;
      *(undefined4 *)pTVar9 = uVar29;
      *(undefined4 *)&pTVar9->field_0x4 = uVar30;
      *(undefined4 *)&pTVar9->field_0x8 = uVar31;
      *(undefined4 *)&pTVar9->field_0xc = uVar32;
      *(ulonglong *)&pTVar9->field_0x10 = CONCAT44(uVar34,uVar33);
      *(undefined4 *)pTVar10 = uVar35;
      *(undefined4 *)&pTVar10->field_0x4 = uVar36;
      *(undefined4 *)&pTVar10->field_0x8 = uVar37;
      *(undefined4 *)&pTVar10->field_0xc = uVar38;
      *(ulonglong *)&pTVar10->field_0x10 = CONCAT44(uVar40,uVar39);
    }
    uVar13 = local_178._8_8_ & 0xffffffff;
    FVar14.Data = FVar14.Data + 0x18;
  }
  if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  return bVar15;
}

// SweepGeomImp<Chaos::FCapsule> @ 143bcaf30

bool __thiscall
Chaos::FLevelSet::SweepGeomImp<Chaos::FCapsule>
          (FLevelSet *this,FCapsule *param_1,TRigidTransform<double,3> *param_2,
          TVector<double,3> *param_3,double param_4,double *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8,double param_9,bool param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  TVector<double,3> *pTVar9;
  TVector<double,3> *pTVar10;
  int iVar11;
  TVector<double,3> *pTVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  bool bVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
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
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_178;
  FScriptContainerElement *local_168;
  undefined1 local_160 [16];
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined1 local_128 [24];
  bool local_110;
  double local_f8;
  undefined1 local_f0 [184];
  
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  GetGeomSurfaceSamples(param_1,&local_178);
  pTVar10 = param_7;
  pTVar9 = param_6;
  pdVar8 = param_5;
  dVar1 = __real_7fefffffffffffff;
  iVar11 = local_178.ArrayNum;
  uVar13 = (ulonglong)local_178.ArrayNum;
  uVar35 = 0;
  uVar36 = 0;
  uVar37 = 0;
  uVar38 = 0;
  uVar29 = 0;
  uVar30 = 0;
  uVar31 = 0;
  uVar32 = 0;
  bVar15 = false;
  *param_5 = 1.7976931348623157e+308;
  local_168 = local_178.AllocatorInstance.Data + uVar13 * 0x18;
  local_138 = 0.0;
  uVar39 = 0;
  uVar40 = 0;
  local_f8 = 0.0;
  uVar33 = 0;
  uVar34 = 0;
  FVar14.Data = local_178.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar13 != iVar11) {
      `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&param_5);
    }
    if (FVar14.Data == local_168) break;
    auVar19 = *(undefined1 (*) [16])&param_2->field_0x10;
    dVar5 = *(double *)(FVar14.Data + 0x10) * *(double *)&param_2->field_0x50;
    dVar6 = *(double *)&param_2->field_0x58 * 0.0;
    auVar21 = *(undefined1 (*) [16])param_2;
    dVar7 = *(double *)&param_2->field_0x18;
    dVar3 = *(double *)&param_2->field_0x40 * *(double *)FVar14.Data;
    dVar4 = *(double *)&param_2->field_0x48 * *(double *)(FVar14.Data + 8);
    uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
    local_128._0_16_ = *(undefined1 (*) [16])param_2;
    auVar20 = blendpd(local_128._0_16_,auVar19,2);
    auVar26._8_4_ = SUB84(dVar4,0);
    auVar26._0_8_ = dVar3;
    auVar26._12_4_ = uVar25;
    dVar16 = auVar19._0_8_;
    auVar27._0_8_ = auVar26._8_8_ * local_128._0_8_ - local_128._8_8_ * dVar3;
    auVar27._8_8_ = dVar5 * local_128._8_8_ - dVar16 * dVar4;
    auVar22._8_4_ = SUB84(dVar4,0);
    auVar22._0_8_ = dVar3;
    auVar22._12_4_ = uVar25;
    auVar17._8_4_ = SUB84(dVar6,0);
    auVar17._0_8_ = dVar5;
    auVar17._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar17 = blendpd(auVar22,auVar17,2);
    auVar18._0_8_ = auVar17._0_8_ * dVar16 - auVar20._0_8_ * dVar5;
    auVar18._8_8_ = auVar17._8_8_ * auVar19._8_8_ - auVar20._8_8_ * dVar6;
    auVar17 = blendpd(auVar27,auVar18,2);
    dVar6 = auVar27._8_8_ + auVar27._8_8_;
    dVar2 = auVar18._0_8_ + auVar18._0_8_;
    uVar25 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar28._0_8_ = auVar17._0_8_ + auVar17._0_8_;
    auVar28._8_8_ = auVar17._8_8_ + auVar17._8_8_;
    auVar23._8_4_ = SUB84(dVar2,0);
    auVar23._0_8_ = dVar6;
    auVar23._12_4_ = uVar25;
    auVar20._8_4_ = SUB84(dVar2,0);
    auVar20._0_8_ = dVar6;
    auVar20._12_4_ = uVar25;
    auVar17 = blendpd(auVar20,auVar28,2);
    auVar22 = blendpd(auVar21,auVar19,2);
    auVar24._0_8_ = auVar23._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar6;
    auVar24._8_8_ = auVar28._0_8_ * auVar21._8_8_ - dVar16 * dVar2;
    auVar21._0_8_ = auVar17._0_8_ * dVar16 - auVar22._0_8_ * auVar28._0_8_;
    auVar21._8_8_ = auVar17._8_8_ * auVar19._8_8_ - auVar22._8_8_ * auVar28._8_8_;
    auVar19._8_4_ = SUB84(auVar24._8_8_,0);
    auVar19._0_8_ = auVar24._0_8_;
    auVar19._12_4_ = (int)((ulonglong)auVar24._8_8_ >> 0x20);
    auVar17 = blendpd(auVar24,auVar21,2);
    local_148 = dVar6 * dVar7 + dVar3 + auVar19._8_8_ + *(double *)&param_2->field_0x20;
    local_140 = dVar2 * dVar7 + dVar4 + auVar21._0_8_ + *(double *)&param_2->field_0x28;
    local_160._8_4_ = SUB84(local_140,0);
    local_160._0_8_ = local_148;
    local_160._12_4_ = (int)((ulonglong)local_140 >> 0x20);
    local_150 = auVar28._0_8_ * dVar7 + dVar5 + auVar17._0_8_ + *(double *)&param_2->field_0x30;
    local_148 = param_4 * *(double *)param_3 + local_148;
    local_140 = param_4 * *(double *)&param_3->field_0x8 + local_140;
    local_138 = param_4 * *(double *)&param_3->field_0x10 + local_150;
    local_f0._16_8_ = local_150;
    FImplicitObject::FindClosestIntersection
              ((FImplicitObject *)this,(Pair<Chaos::TVector<double,3>,bool> *)local_128,
               (TVector<double,3> *)local_160,(TVector<double,3> *)&local_148,0.0);
    auVar19 = local_128._0_16_;
    if (local_110 != false) {
      uVar33 = (undefined4)local_128._16_8_;
      uVar34 = SUB84(local_128._16_8_,4);
      uVar29 = local_128._0_4_;
      uVar30 = local_128._4_4_;
      uVar31 = local_128._8_4_;
      uVar32 = local_128._12_4_;
      local_f8 = (double)local_128._16_8_;
      pTVar12 = FImplicitObject::Normal
                          ((FImplicitObject *)this,(TVector<double,3> *)local_f0,
                           (TVector<double,3> *)local_128);
      uVar35 = *(undefined4 *)pTVar12;
      uVar36 = *(undefined4 *)&pTVar12->field_0x4;
      uVar37 = *(undefined4 *)&pTVar12->field_0x8;
      uVar38 = *(undefined4 *)&pTVar12->field_0xc;
      uVar39 = (undefined4)*(undefined8 *)&pTVar12->field_0x10;
      uVar40 = (undefined4)((ulonglong)*(undefined8 *)&pTVar12->field_0x10 >> 0x20);
      if (param_4 <= 0.0) {
        dVar1 = 0.0;
      }
      else {
        dVar16 = auVar19._0_8_ - (double)local_160._0_8_;
        dVar1 = auVar19._8_8_ - (double)local_160._8_8_;
        dVar1 = SQRT(dVar16 * dVar16 + dVar1 * dVar1 +
                     (local_f8 - local_150) * (local_f8 - local_150));
      }
    }
    if (dVar1 < *pdVar8) {
      *pdVar8 = dVar1;
      bVar15 = true;
      *(undefined4 *)pTVar9 = uVar29;
      *(undefined4 *)&pTVar9->field_0x4 = uVar30;
      *(undefined4 *)&pTVar9->field_0x8 = uVar31;
      *(undefined4 *)&pTVar9->field_0xc = uVar32;
      *(ulonglong *)&pTVar9->field_0x10 = CONCAT44(uVar34,uVar33);
      *(undefined4 *)pTVar10 = uVar35;
      *(undefined4 *)&pTVar10->field_0x4 = uVar36;
      *(undefined4 *)&pTVar10->field_0x8 = uVar37;
      *(undefined4 *)&pTVar10->field_0xc = uVar38;
      *(ulonglong *)&pTVar10->field_0x10 = CONCAT44(uVar40,uVar39);
    }
    uVar13 = local_178._8_8_ & 0xffffffff;
    FVar14.Data = FVar14.Data + 0x18;
  }
  if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  return bVar15;
}

// SweepGeomImp<Chaos::FConvex> @ 143bcb330

bool __thiscall
Chaos::FLevelSet::SweepGeomImp<Chaos::FConvex>
          (FLevelSet *this,FConvex *param_1,TRigidTransform<double,3> *param_2,
          TVector<double,3> *param_3,double param_4,double *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8,double param_9,bool param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  TVector<double,3> *pTVar9;
  TVector<double,3> *pTVar10;
  int iVar11;
  TVector<double,3> *pTVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  bool bVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
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
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_178;
  FScriptContainerElement *local_168;
  undefined1 local_160 [16];
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined1 local_128 [24];
  bool local_110;
  double local_f8;
  undefined1 local_f0 [184];
  
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  GetGeomSurfaceSamples(param_1,&local_178);
  pTVar10 = param_7;
  pTVar9 = param_6;
  pdVar8 = param_5;
  dVar1 = __real_7fefffffffffffff;
  iVar11 = local_178.ArrayNum;
  uVar13 = (ulonglong)local_178.ArrayNum;
  uVar35 = 0;
  uVar36 = 0;
  uVar37 = 0;
  uVar38 = 0;
  uVar29 = 0;
  uVar30 = 0;
  uVar31 = 0;
  uVar32 = 0;
  bVar15 = false;
  *param_5 = 1.7976931348623157e+308;
  local_168 = local_178.AllocatorInstance.Data + uVar13 * 0x18;
  local_138 = 0.0;
  uVar39 = 0;
  uVar40 = 0;
  local_f8 = 0.0;
  uVar33 = 0;
  uVar34 = 0;
  FVar14.Data = local_178.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar13 != iVar11) {
      `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&param_5);
    }
    if (FVar14.Data == local_168) break;
    auVar19 = *(undefined1 (*) [16])&param_2->field_0x10;
    dVar5 = *(double *)(FVar14.Data + 0x10) * *(double *)&param_2->field_0x50;
    dVar6 = *(double *)&param_2->field_0x58 * 0.0;
    auVar21 = *(undefined1 (*) [16])param_2;
    dVar7 = *(double *)&param_2->field_0x18;
    dVar3 = *(double *)&param_2->field_0x40 * *(double *)FVar14.Data;
    dVar4 = *(double *)&param_2->field_0x48 * *(double *)(FVar14.Data + 8);
    uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
    local_128._0_16_ = *(undefined1 (*) [16])param_2;
    auVar20 = blendpd(local_128._0_16_,auVar19,2);
    auVar26._8_4_ = SUB84(dVar4,0);
    auVar26._0_8_ = dVar3;
    auVar26._12_4_ = uVar25;
    dVar16 = auVar19._0_8_;
    auVar27._0_8_ = auVar26._8_8_ * local_128._0_8_ - local_128._8_8_ * dVar3;
    auVar27._8_8_ = dVar5 * local_128._8_8_ - dVar16 * dVar4;
    auVar22._8_4_ = SUB84(dVar4,0);
    auVar22._0_8_ = dVar3;
    auVar22._12_4_ = uVar25;
    auVar17._8_4_ = SUB84(dVar6,0);
    auVar17._0_8_ = dVar5;
    auVar17._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar17 = blendpd(auVar22,auVar17,2);
    auVar18._0_8_ = auVar17._0_8_ * dVar16 - auVar20._0_8_ * dVar5;
    auVar18._8_8_ = auVar17._8_8_ * auVar19._8_8_ - auVar20._8_8_ * dVar6;
    auVar17 = blendpd(auVar27,auVar18,2);
    dVar6 = auVar27._8_8_ + auVar27._8_8_;
    dVar2 = auVar18._0_8_ + auVar18._0_8_;
    uVar25 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar28._0_8_ = auVar17._0_8_ + auVar17._0_8_;
    auVar28._8_8_ = auVar17._8_8_ + auVar17._8_8_;
    auVar23._8_4_ = SUB84(dVar2,0);
    auVar23._0_8_ = dVar6;
    auVar23._12_4_ = uVar25;
    auVar20._8_4_ = SUB84(dVar2,0);
    auVar20._0_8_ = dVar6;
    auVar20._12_4_ = uVar25;
    auVar17 = blendpd(auVar20,auVar28,2);
    auVar22 = blendpd(auVar21,auVar19,2);
    auVar24._0_8_ = auVar23._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar6;
    auVar24._8_8_ = auVar28._0_8_ * auVar21._8_8_ - dVar16 * dVar2;
    auVar21._0_8_ = auVar17._0_8_ * dVar16 - auVar22._0_8_ * auVar28._0_8_;
    auVar21._8_8_ = auVar17._8_8_ * auVar19._8_8_ - auVar22._8_8_ * auVar28._8_8_;
    auVar19._8_4_ = SUB84(auVar24._8_8_,0);
    auVar19._0_8_ = auVar24._0_8_;
    auVar19._12_4_ = (int)((ulonglong)auVar24._8_8_ >> 0x20);
    auVar17 = blendpd(auVar24,auVar21,2);
    local_148 = dVar6 * dVar7 + dVar3 + auVar19._8_8_ + *(double *)&param_2->field_0x20;
    local_140 = dVar2 * dVar7 + dVar4 + auVar21._0_8_ + *(double *)&param_2->field_0x28;
    local_160._8_4_ = SUB84(local_140,0);
    local_160._0_8_ = local_148;
    local_160._12_4_ = (int)((ulonglong)local_140 >> 0x20);
    local_150 = auVar28._0_8_ * dVar7 + dVar5 + auVar17._0_8_ + *(double *)&param_2->field_0x30;
    local_148 = param_4 * *(double *)param_3 + local_148;
    local_140 = param_4 * *(double *)&param_3->field_0x8 + local_140;
    local_138 = param_4 * *(double *)&param_3->field_0x10 + local_150;
    local_f0._16_8_ = local_150;
    FImplicitObject::FindClosestIntersection
              ((FImplicitObject *)this,(Pair<Chaos::TVector<double,3>,bool> *)local_128,
               (TVector<double,3> *)local_160,(TVector<double,3> *)&local_148,0.0);
    auVar19 = local_128._0_16_;
    if (local_110 != false) {
      uVar33 = (undefined4)local_128._16_8_;
      uVar34 = SUB84(local_128._16_8_,4);
      uVar29 = local_128._0_4_;
      uVar30 = local_128._4_4_;
      uVar31 = local_128._8_4_;
      uVar32 = local_128._12_4_;
      local_f8 = (double)local_128._16_8_;
      pTVar12 = FImplicitObject::Normal
                          ((FImplicitObject *)this,(TVector<double,3> *)local_f0,
                           (TVector<double,3> *)local_128);
      uVar35 = *(undefined4 *)pTVar12;
      uVar36 = *(undefined4 *)&pTVar12->field_0x4;
      uVar37 = *(undefined4 *)&pTVar12->field_0x8;
      uVar38 = *(undefined4 *)&pTVar12->field_0xc;
      uVar39 = (undefined4)*(undefined8 *)&pTVar12->field_0x10;
      uVar40 = (undefined4)((ulonglong)*(undefined8 *)&pTVar12->field_0x10 >> 0x20);
      if (param_4 <= 0.0) {
        dVar1 = 0.0;
      }
      else {
        dVar16 = auVar19._0_8_ - (double)local_160._0_8_;
        dVar1 = auVar19._8_8_ - (double)local_160._8_8_;
        dVar1 = SQRT(dVar16 * dVar16 + dVar1 * dVar1 +
                     (local_f8 - local_150) * (local_f8 - local_150));
      }
    }
    if (dVar1 < *pdVar8) {
      *pdVar8 = dVar1;
      bVar15 = true;
      *(undefined4 *)pTVar9 = uVar29;
      *(undefined4 *)&pTVar9->field_0x4 = uVar30;
      *(undefined4 *)&pTVar9->field_0x8 = uVar31;
      *(undefined4 *)&pTVar9->field_0xc = uVar32;
      *(ulonglong *)&pTVar9->field_0x10 = CONCAT44(uVar34,uVar33);
      *(undefined4 *)pTVar10 = uVar35;
      *(undefined4 *)&pTVar10->field_0x4 = uVar36;
      *(undefined4 *)&pTVar10->field_0x8 = uVar37;
      *(undefined4 *)&pTVar10->field_0xc = uVar38;
      *(ulonglong *)&pTVar10->field_0x10 = CONCAT44(uVar40,uVar39);
    }
    uVar13 = local_178._8_8_ & 0xffffffff;
    FVar14.Data = FVar14.Data + 0x18;
  }
  if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  return bVar15;
}

// FLevelSet @ 143bde190

FLevelSet * __thiscall Chaos::FLevelSet::FLevelSet(FLevelSet *this,FLevelSet *param_1)

{
  undefined8 uVar1;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,2,'\x06');
  this->_padding_ = (longlong)&___7FLevelSet_Chaos__6B_;
  uVar1 = *(undefined8 *)&(param_1->MGrid).field_0x8;
  *(undefined8 *)&this->MGrid = *(undefined8 *)&param_1->MGrid;
  *(undefined8 *)&(this->MGrid).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->MGrid).field_0x18;
  *(undefined8 *)&(this->MGrid).field_0x10 = *(undefined8 *)&(param_1->MGrid).field_0x10;
  *(undefined8 *)&(this->MGrid).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->MGrid).field_0x28;
  *(undefined8 *)&(this->MGrid).field_0x20 = *(undefined8 *)&(param_1->MGrid).field_0x20;
  *(undefined8 *)&(this->MGrid).field_0x28 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->MGrid).field_0x38;
  *(undefined8 *)&(this->MGrid).field_0x30 = *(undefined8 *)&(param_1->MGrid).field_0x30;
  *(undefined8 *)&(this->MGrid).field_0x38 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->MGrid).field_0x48;
  *(undefined8 *)&(this->MGrid).field_0x40 = *(undefined8 *)&(param_1->MGrid).field_0x40;
  *(undefined8 *)&(this->MGrid).field_0x48 = uVar1;
  *(undefined8 *)&(this->MGrid).field_0x50 = *(undefined8 *)&(param_1->MGrid).field_0x50;
  *(undefined8 *)&this->MPhi = *(undefined8 *)&param_1->MPhi;
  *(undefined4 *)&(this->MPhi).field_0x8 = *(undefined4 *)&(param_1->MPhi).field_0x8;
  *(undefined8 *)&(this->MPhi).field_0x10 = 0;
  *(undefined8 *)&(this->MPhi).field_0x10 = *(undefined8 *)&(param_1->MPhi).field_0x10;
  *(undefined8 *)&(param_1->MPhi).field_0x10 = 0;
  *(undefined4 *)&(this->MPhi).field_0x18 = *(undefined4 *)&(param_1->MPhi).field_0x18;
  *(undefined4 *)&(this->MPhi).field_0x1c = *(undefined4 *)&(param_1->MPhi).field_0x1c;
  *(undefined8 *)&(param_1->MPhi).field_0x18 = 0;
  *(undefined8 *)&this->MNormals = *(undefined8 *)&param_1->MNormals;
  *(undefined4 *)&(this->MNormals).field_0x8 = *(undefined4 *)&(param_1->MNormals).field_0x8;
  *(undefined8 *)&(this->MNormals).field_0x10 = 0;
  *(undefined8 *)&(this->MNormals).field_0x10 = *(undefined8 *)&(param_1->MNormals).field_0x10;
  *(undefined8 *)&(param_1->MNormals).field_0x10 = 0;
  *(undefined4 *)&(this->MNormals).field_0x18 = *(undefined4 *)&(param_1->MNormals).field_0x18;
  *(undefined4 *)&(this->MNormals).field_0x1c = *(undefined4 *)&(param_1->MNormals).field_0x1c;
  *(undefined8 *)&(param_1->MNormals).field_0x18 = 0;
  uVar1 = *(undefined8 *)&(param_1->MLocalBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin = *(undefined8 *)&(param_1->MLocalBoundingBox).MMin
  ;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8 = uVar1;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10 =
       *(undefined8 *)&(param_1->MLocalBoundingBox).MMin.field_0x10;
  uVar1 = *(undefined8 *)&(param_1->MLocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax = *(undefined8 *)&(param_1->MLocalBoundingBox).MMax
  ;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8 = uVar1;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10 =
       *(undefined8 *)&(param_1->MLocalBoundingBox).MMax.field_0x10;
  uVar1 = *(undefined8 *)&(param_1->MOriginalLocalBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin =
       *(undefined8 *)&(param_1->MOriginalLocalBoundingBox).MMin;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin.field_0x8 = uVar1;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin.field_0x10 =
       *(undefined8 *)&(param_1->MOriginalLocalBoundingBox).MMin.field_0x10;
  uVar1 = *(undefined8 *)&(param_1->MOriginalLocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax =
       *(undefined8 *)&(param_1->MOriginalLocalBoundingBox).MMax;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax.field_0x8 = uVar1;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax.field_0x10 =
       *(undefined8 *)&(param_1->MOriginalLocalBoundingBox).MMax.field_0x10;
  this->MBandWidth = param_1->MBandWidth;
  return this;
}

// FLevelSet @ 143bde330

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FLevelSet * __thiscall
Chaos::FLevelSet::FLevelSet
          (FLevelSet *this,TUniformGrid<double,3> *param_1,TArrayND<double,3> *param_2,int param_3)

{
  undefined1 *this_00;
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,2,'\x06');
  this->_padding_ = (longlong)&___7FLevelSet_Chaos__6B_;
  this_00 = &(this->MNormals).field_0x10;
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&this->MGrid = *(undefined8 *)param_1;
  *(undefined8 *)&(this->MGrid).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->MGrid).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->MGrid).field_0x18 = uVar2;
  uVar2 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&(this->MGrid).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&(this->MGrid).field_0x28 = uVar2;
  uVar2 = *(undefined8 *)&param_1->field_0x38;
  *(undefined8 *)&(this->MGrid).field_0x30 = *(undefined8 *)&param_1->field_0x30;
  *(undefined8 *)&(this->MGrid).field_0x38 = uVar2;
  uVar2 = *(undefined8 *)&param_1->field_0x48;
  *(undefined8 *)&(this->MGrid).field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&(this->MGrid).field_0x48 = uVar2;
  *(undefined8 *)&(this->MGrid).field_0x50 = *(undefined8 *)&param_1->field_0x50;
  *(undefined8 *)&this->MPhi = *(undefined8 *)param_2;
  *(undefined4 *)&(this->MPhi).field_0x8 = *(undefined4 *)&param_2->field_0x8;
  *(undefined8 *)&(this->MPhi).field_0x10 = 0;
  *(undefined8 *)&(this->MPhi).field_0x10 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&param_2->field_0x10 = 0;
  *(undefined4 *)&(this->MPhi).field_0x18 = *(undefined4 *)&param_2->field_0x18;
  *(undefined4 *)&(this->MPhi).field_0x1c = *(undefined4 *)&param_2->field_0x1c;
  *(undefined8 *)&param_2->field_0x18 = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->MNormals).field_0x18 = 0;
  iVar1 = *(int *)&(this->MGrid).field_0x38;
  *(undefined8 *)&this->MNormals = *(undefined8 *)&(this->MGrid).field_0x30;
  *(int *)&(this->MNormals).field_0x8 = iVar1;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)this_00,
             iVar1 * *(int *)&(this->MNormals).field_0x4 * *(int *)&this->MNormals,Default);
  uVar2 = *(undefined8 *)&(this->MGrid).field_0x8;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin = *(undefined8 *)&this->MGrid;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8 = uVar2;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10 =
       *(undefined8 *)&(this->MGrid).field_0x10;
  uVar2 = *(undefined8 *)&(this->MGrid).field_0x20;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax = *(undefined8 *)&(this->MGrid).field_0x18;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&(this->MLocalBoundingBox).MMin;
  uVar3 = *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10 =
       *(undefined8 *)&(this->MGrid).field_0x28;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin = uVar2;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin.field_0x8 = uVar3;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin.field_0x10 =
       *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10;
  uVar2 = *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax =
       *(undefined8 *)&(this->MLocalBoundingBox).MMax;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax.field_0x8 = uVar2;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax.field_0x10 =
       *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10;
  this->MBandWidth = param_3;
  ComputeNormals(this);
  return this;
}

// FLevelSet @ 143bde4d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FLevelSet * __thiscall
Chaos::FLevelSet::FLevelSet
          (FLevelSet *this,FErrorReporter *param_1,TUniformGrid<double,3> *param_2,
          TParticles<double,3> *param_3,FTriangleMesh *param_4,int param_5)

{
  undefined1 *puVar1;
  double dVar2;
  undefined8 uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FLevelSet *pFVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  double dVar18;
  uint uVar19;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_128;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_118;
  undefined1 local_108 [16];
  TArray<bool,TSizedDefaultAllocator<32>_> local_f8;
  undefined1 local_e8 [16];
  TArray<bool,TSizedDefaultAllocator<32>_> local_d8;
  undefined1 local_c8 [16];
  TArray<bool,TSizedDefaultAllocator<32>_> local_b8;
  TArrayView<Chaos::TVector<double,3>_const_,int> local_a8;
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  int local_84;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,2,'\x06');
  uVar11 = 0;
  this->_padding_ = (longlong)&___7FLevelSet_Chaos__6B_;
  puVar1 = &(this->MPhi).field_0x10;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&this->MGrid = *(undefined8 *)param_2;
  *(undefined8 *)&(this->MGrid).field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->MGrid).field_0x10 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->MGrid).field_0x18 = uVar3;
  uVar3 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&(this->MGrid).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  *(undefined8 *)&(this->MGrid).field_0x28 = uVar3;
  uVar3 = *(undefined8 *)&param_2->field_0x38;
  *(undefined8 *)&(this->MGrid).field_0x30 = *(undefined8 *)&param_2->field_0x30;
  *(undefined8 *)&(this->MGrid).field_0x38 = uVar3;
  uVar3 = *(undefined8 *)&param_2->field_0x48;
  *(undefined8 *)&(this->MGrid).field_0x40 = *(undefined8 *)&param_2->field_0x40;
  *(undefined8 *)&(this->MGrid).field_0x48 = uVar3;
  *(undefined8 *)&(this->MGrid).field_0x50 = *(undefined8 *)&param_2->field_0x50;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->MPhi).field_0x18 = 0;
  local_90 = *(int *)&(this->MGrid).field_0x38;
  local_98 = *(undefined8 *)&(this->MGrid).field_0x30;
  *(undefined8 *)&this->MPhi = local_98;
  *(int *)&(this->MPhi).field_0x8 = local_90;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<double,TSizedDefaultAllocator<32>_> *)puVar1,
             local_90 * *(int *)&(this->MPhi).field_0x4 * *(int *)&this->MPhi,Default);
  puVar1 = &(this->MNormals).field_0x10;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->MNormals).field_0x18 = 0;
  local_84 = *(int *)&(this->MGrid).field_0x38;
  local_8c = *(undefined8 *)&(this->MGrid).field_0x30;
  *(undefined8 *)&this->MNormals = local_8c;
  *(int *)&(this->MNormals).field_0x8 = local_84;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)puVar1,
             local_84 * *(int *)&(this->MNormals).field_0x4 * *(int *)&this->MNormals,Default);
  uVar3 = *(undefined8 *)&(this->MGrid).field_0x8;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin = *(undefined8 *)&this->MGrid;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8 = uVar3;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10 =
       *(undefined8 *)&(this->MGrid).field_0x10;
  uVar3 = *(undefined8 *)&(this->MGrid).field_0x20;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax = *(undefined8 *)&(this->MGrid).field_0x18;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8 = uVar3;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10 =
       *(undefined8 *)&(this->MGrid).field_0x28;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin.field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax.field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax.field_0x10 = 0xffefffffffffffff;
  this->MBandWidth = param_5;
  if ((((*(int *)&(this->MGrid).field_0x30 < 2) || (*(int *)&(this->MGrid).field_0x34 < 2)) ||
      (*(int *)&(this->MGrid).field_0x38 < 2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MGrid.Counts()[0] > 1 && MGrid.Counts()[1] > 1 && MGrid.Counts()[2] > 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Levelset.cpp"
                         ,0x36,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FLevelSet *)(*pcVar5)();
    return pFVar8;
  }
  if (((param_4->MElements).ArrayNum == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh.GetSurfaceElements().Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Levelset.cpp"
                         ,0x37,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FLevelSet *)(*pcVar5)();
    return pFVar8;
  }
  local_a8.DataPtr = *(TVector<double,3> **)&(param_3->MX).field_0x8;
  iVar4 = *(int *)&(param_3->MX).field_0x10;
  if ((iVar4 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FLevelSet *)(*pcVar5)();
    return pFVar8;
  }
  local_a8.ArrayNum = iVar4;
  FTriangleMesh::GetFaceNormals<double>(param_4,&local_118,&local_a8,false);
  if (local_118.ArrayNum == 0) {
    FErrorReporter::ReportError(param_1,L"Normals came back empty.");
  }
  else {
    local_c8._8_4_ = *(undefined4 *)&(this->MGrid).field_0x38;
    local_c8._0_8_ = *(undefined8 *)&(this->MGrid).field_0x30;
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
              (&local_b8,SUB84(local_c8._0_8_,4) * local_c8._8_4_ * (int)local_c8._0_8_,Default);
    local_e8._8_4_ = *(undefined4 *)&(this->MGrid).field_0x38;
    local_e8._0_8_ = *(undefined8 *)&(this->MGrid).field_0x30;
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ArrayNum = 0;
    local_d8.ArrayMax = 0;
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
              (&local_d8,SUB84(local_e8._0_8_,4) * local_e8._8_4_ * (int)local_e8._0_8_,Default);
    local_108._8_4_ = *(undefined4 *)&(this->MGrid).field_0x38;
    local_108._0_8_ = *(undefined8 *)&(this->MGrid).field_0x30;
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 0;
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
              (&local_f8,SUB84(local_108._0_8_,4) * local_108._8_4_ * (int)local_108._0_8_,Default);
    local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.ArrayNum = 0;
    local_128.ArrayMax = 0;
    bVar6 = ComputeDistancesNearZeroIsocontour
                      (this,param_1,param_3,&local_118,param_4,(TArrayND<bool,3> *)local_c8,
                       (TArrayND<bool,3> *)local_e8,(TArrayND<bool,3> *)local_108,&local_128);
    if (bVar6) {
      dVar18 = *(double *)&(this->MGrid).field_0x48;
      dVar2 = *(double *)&(this->MGrid).field_0x40;
      if ((dVar2 <= dVar18) ||
         (puVar1 = &(this->MGrid).field_0x50, uVar14 = SUB84(dVar2,0),
         uVar16 = (int)((ulonglong)dVar2 >> 0x20),
         dVar2 < *(double *)puVar1 || dVar2 == *(double *)puVar1)) {
        dVar2 = *(double *)&(this->MGrid).field_0x50;
        uVar14 = SUB84(dVar2,0);
        uVar16 = (int)((ulonglong)dVar2 >> 0x20);
        if (dVar2 <= dVar18) {
          uVar14 = SUB84(dVar18,0);
          uVar16 = (int)((ulonglong)dVar18 >> 0x20);
        }
      }
      dVar18 = (double)this->MBandWidth * (double)CONCAT44(uVar16,uVar14);
      if ((dVar18 != 0.0) &&
         (uVar12 = uVar11,
         0 < *(int *)&(this->MGrid).field_0x38 * *(int *)&(this->MGrid).field_0x34 *
             *(int *)&(this->MGrid).field_0x30)) {
        do {
          uVar9 = (uint)uVar11;
          uVar7 = 0;
          if ((int)uVar9 < *(int *)&(this->MPhi).field_0x18) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar8 = (FLevelSet *)(*pcVar5)();
            return pFVar8;
          }
          dVar2 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + uVar12);
          if (dVar18 <= dVar2) {
            dVar2 = dVar18;
          }
          uVar7 = 0;
          if ((int)uVar9 < *(int *)&(this->MPhi).field_0x18) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar8 = (FLevelSet *)(*pcVar5)();
            return pFVar8;
          }
          uVar11 = (ulonglong)(uVar9 + 1);
          *(double *)(uVar12 + *(longlong *)&(this->MPhi).field_0x10) = dVar2;
          uVar12 = uVar12 + 8;
        } while ((int)(uVar9 + 1) <
                 *(int *)&(this->MGrid).field_0x38 * *(int *)&(this->MGrid).field_0x34 *
                 *(int *)&(this->MGrid).field_0x30);
      }
      uVar11 = 0;
      CorrectSign(this,(TArrayND<bool,3> *)local_c8,(TArrayND<bool,3> *)local_e8,
                  (TArrayND<bool,3> *)local_108,&local_128);
      FillWithFastMarchingMethod(this,dVar18,&local_128);
      uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      if ((dVar18 != 0.0) &&
         (0 < *(int *)&(this->MGrid).field_0x38 * *(int *)&(this->MGrid).field_0x34 *
              *(int *)&(this->MGrid).field_0x30)) {
        uVar19 = (uint)__xmm_80000000000000008000000000000000;
        uVar12 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
        uVar13 = uVar11;
        do {
          uVar10 = (uint)uVar11;
          uVar15 = 0;
          if ((int)uVar10 < *(int *)&(this->MPhi).field_0x18) {
            uVar15 = ~uVar10 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar8 = (FLevelSet *)(*pcVar5)();
            return pFVar8;
          }
          uVar3 = *(undefined8 *)(*(longlong *)&(this->MPhi).field_0x10 + uVar13);
          uVar15 = (uint)uVar3 & uVar7;
          uVar17 = (uint)((ulonglong)uVar3 >> 0x20) & uVar9;
          if (dVar18 <= (double)CONCAT44(uVar17,uVar15) && (double)CONCAT44(uVar17,uVar15) != dVar18
             ) {
            uVar15 = 0;
            if ((int)uVar10 < *(int *)&(this->MPhi).field_0x18) {
              uVar15 = ~uVar10 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              pFVar8 = (FLevelSet *)(*pcVar5)();
              return pFVar8;
            }
            dVar2 = dVar18;
            if (*(double *)(uVar13 + *(longlong *)&(this->MPhi).field_0x10) <= 0.0) {
              dVar2 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ (uint)uVar12,
                                       SUB84(dVar18,0) ^ uVar19);
            }
            uVar15 = 0;
            if ((int)uVar10 < *(int *)&(this->MPhi).field_0x18) {
              uVar15 = ~uVar10 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              pFVar8 = (FLevelSet *)(*pcVar5)();
              return pFVar8;
            }
            *(double *)(uVar13 + *(longlong *)&(this->MPhi).field_0x10) = dVar2;
          }
          uVar11 = (ulonglong)(uVar10 + 1);
          uVar13 = uVar13 + 8;
        } while ((int)(uVar10 + 1) <
                 *(int *)&(this->MGrid).field_0x38 * *(int *)&(this->MGrid).field_0x34 *
                 *(int *)&(this->MGrid).field_0x30);
      }
      ComputeNormals(this);
      ComputeConvexity(this,&local_128);
      CheckData(this,param_1,param_3,param_4,&local_118);
    }
    else {
      FErrorReporter::ReportError
                (param_1,L"Error calling FLevelSet::ComputeDistancesNearZeroIsocontour");
    }
    if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.AllocatorInstance.Data);
    }
    if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
    }
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  return this;
}

// FLevelSet @ 143bdebf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FLevelSet * __thiscall
Chaos::FLevelSet::FLevelSet
          (FLevelSet *this,FErrorReporter *param_1,TUniformGrid<double,3> *param_2,
          FImplicitObject *param_3,int param_4,bool param_5)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FLevelSet *pFVar10;
  TVector<int,3> *pTVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_f8;
  undefined1 local_e8 [16];
  TArray<double,TSizedDefaultAllocator<32>_> local_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  int local_a8;
  undefined8 local_a4;
  int local_9c;
  double local_98;
  double local_90;
  double local_88;
  TVector<int,3> local_80;
  TVector<int,3> local_74 [7];
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,2,'\x06');
  uVar14 = 0;
  this->_padding_ = (longlong)&___7FLevelSet_Chaos__6B_;
  puVar1 = &(this->MPhi).field_0x10;
  uVar4 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&this->MGrid = *(undefined8 *)param_2;
  *(undefined8 *)&(this->MGrid).field_0x8 = uVar4;
  uVar4 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->MGrid).field_0x10 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->MGrid).field_0x18 = uVar4;
  uVar4 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&(this->MGrid).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  *(undefined8 *)&(this->MGrid).field_0x28 = uVar4;
  uVar4 = *(undefined8 *)&param_2->field_0x38;
  *(undefined8 *)&(this->MGrid).field_0x30 = *(undefined8 *)&param_2->field_0x30;
  *(undefined8 *)&(this->MGrid).field_0x38 = uVar4;
  uVar4 = *(undefined8 *)&param_2->field_0x48;
  *(undefined8 *)&(this->MGrid).field_0x40 = *(undefined8 *)&param_2->field_0x40;
  *(undefined8 *)&(this->MGrid).field_0x48 = uVar4;
  *(undefined8 *)&(this->MGrid).field_0x50 = *(undefined8 *)&param_2->field_0x50;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->MPhi).field_0x18 = 0;
  local_a8 = *(int *)&(this->MGrid).field_0x38;
  local_b0 = *(undefined8 *)&(this->MGrid).field_0x30;
  *(undefined8 *)&this->MPhi = local_b0;
  *(int *)&(this->MPhi).field_0x8 = local_a8;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<double,TSizedDefaultAllocator<32>_> *)puVar1,
             local_a8 * *(int *)&(this->MPhi).field_0x4 * *(int *)&this->MPhi,Default);
  puVar1 = &(this->MNormals).field_0x10;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->MNormals).field_0x18 = 0;
  local_9c = *(int *)&(this->MGrid).field_0x38;
  local_a4 = *(undefined8 *)&(this->MGrid).field_0x30;
  *(undefined8 *)&this->MNormals = local_a4;
  *(int *)&(this->MNormals).field_0x8 = local_9c;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)puVar1,
             local_9c * *(int *)&(this->MNormals).field_0x4 * *(int *)&this->MNormals,Default);
  uVar4 = *(undefined8 *)&(this->MGrid).field_0x8;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin = *(undefined8 *)&this->MGrid;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8 = uVar4;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10 =
       *(undefined8 *)&(this->MGrid).field_0x10;
  uVar4 = *(undefined8 *)&(this->MGrid).field_0x20;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax = *(undefined8 *)&(this->MGrid).field_0x18;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8 = uVar4;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10 =
       *(undefined8 *)&(this->MGrid).field_0x28;
  (**(code **)(param_3->_padding_ + 0x90))(param_3,&this->MOriginalLocalBoundingBox);
  this->MBandWidth = param_4;
  if ((((*(int *)&(this->MGrid).field_0x30 < 2) || (*(int *)&(this->MGrid).field_0x34 < 2)) ||
      (*(int *)&(this->MGrid).field_0x38 < 2)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MGrid.Counts()[0] > 1 && MGrid.Counts()[1] > 1 && MGrid.Counts()[2] > 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Levelset.cpp"
                         ,0x71,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FLevelSet *)(*pcVar6)();
    return pFVar10;
  }
  dVar2 = __real_3fe0000000000000;
  uVar16 = 0;
  if (param_5) {
    uVar15 = uVar14;
    if (0 < *(int *)&(this->MGrid).field_0x30 * *(int *)&(this->MGrid).field_0x34 *
            *(int *)&(this->MGrid).field_0x38) {
      do {
        uVar12 = (uint)uVar14;
        pTVar11 = TUniformGrid<double,3>::GetIndex(&this->MGrid,&local_80,uVar12);
        local_90 = ((double)(pTVar11->field0_0x0)._s_0.Y + dVar2) *
                   *(double *)&(this->MGrid).field_0x48 + *(double *)&(this->MGrid).field_0x8;
        local_98 = ((double)(pTVar11->field0_0x0)._s_0.X + dVar2) *
                   *(double *)&(this->MGrid).field_0x40 + *(double *)&this->MGrid;
        local_88 = ((double)(pTVar11->field0_0x0)._s_0.Z + dVar2) *
                   *(double *)&(this->MGrid).field_0x50 + *(double *)&(this->MGrid).field_0x10;
        dVar19 = FImplicitObject::SignedDistance(param_3,(TVector<double,3> *)&local_98);
        uVar8 = uVar16;
        if ((int)uVar12 < *(int *)&(this->MPhi).field_0x18) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FLevelSet *)(*pcVar6)();
          return pFVar10;
        }
        uVar14 = (ulonglong)(uVar12 + 1);
        *(double *)(uVar15 + *(longlong *)&(this->MPhi).field_0x10) = dVar19;
        uVar15 = uVar15 + 8;
      } while ((int)(uVar12 + 1) <
               *(int *)&(this->MGrid).field_0x30 * *(int *)&(this->MGrid).field_0x34 *
               *(int *)&(this->MGrid).field_0x38);
    }
    ComputeNormals(this);
  }
  else {
    local_e8._8_4_ = *(undefined4 *)&(this->MGrid).field_0x38;
    local_c8 = *(double *)&(this->MGrid).field_0x30;
    local_e8._0_4_ = local_c8._0_4_;
    local_e8._4_4_ = (undefined4)((ulonglong)local_c8 >> 0x20);
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ArrayNum = 0;
    local_d8.ArrayMax = 0;
    TArray<double,TSizedDefaultAllocator<32>_>::SetNum
              (&local_d8,local_c8._0_4_ * local_e8._4_4_ * local_e8._8_4_,Default);
    dVar2 = __real_3fe0000000000000;
    uVar15 = uVar14;
    uVar18 = uVar14;
    if (0 < *(int *)&(this->MGrid).field_0x30 * *(int *)&(this->MGrid).field_0x34 *
            *(int *)&(this->MGrid).field_0x38) {
      do {
        uVar12 = (uint)uVar15;
        pTVar11 = TUniformGrid<double,3>::GetIndex(&this->MGrid,local_74,uVar12);
        local_c0 = ((double)(pTVar11->field0_0x0)._s_0.Y + dVar2) *
                   *(double *)&(this->MGrid).field_0x48 + *(double *)&(this->MGrid).field_0x8;
        local_c8 = ((double)(pTVar11->field0_0x0)._s_0.X + dVar2) *
                   *(double *)&(this->MGrid).field_0x40 + *(double *)&this->MGrid;
        local_b8 = ((double)(pTVar11->field0_0x0)._s_0.Z + dVar2) *
                   *(double *)&(this->MGrid).field_0x50 + *(double *)&(this->MGrid).field_0x10;
        dVar19 = FImplicitObject::SignedDistance(param_3,(TVector<double,3> *)&local_c8);
        uVar8 = uVar16;
        if ((int)uVar12 < local_d8.ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FLevelSet *)(*pcVar6)();
          return pFVar10;
        }
        *(double *)(local_d8.AllocatorInstance.Data + uVar18) = dVar19;
        uVar15 = (ulonglong)(uVar12 + 1);
        uVar18 = uVar18 + 8;
      } while ((int)(uVar12 + 1) <
               *(int *)&(this->MGrid).field_0x30 * *(int *)&(this->MGrid).field_0x34 *
               *(int *)&(this->MGrid).field_0x38);
    }
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 0;
    ComputeDistancesNearZeroIsocontour(this,param_3,(TArrayND<double,3> *)local_e8,&local_f8);
    dVar2 = *(double *)&(this->MGrid).field_0x48;
    dVar19 = *(double *)&(this->MGrid).field_0x40;
    if (((dVar19 <= dVar2) ||
        (puVar1 = &(this->MGrid).field_0x50,
        dVar19 < *(double *)puVar1 || dVar19 == *(double *)puVar1)) &&
       (dVar3 = *(double *)&(this->MGrid).field_0x50, dVar19 = dVar2, dVar2 <= dVar3)) {
      dVar19 = dVar3;
    }
    dVar19 = (double)this->MBandWidth * dVar19;
    if ((dVar19 != 0.0) &&
       (uVar15 = uVar14, uVar18 = uVar14,
       0 < *(int *)&(this->MGrid).field_0x38 * *(int *)&(this->MGrid).field_0x34 *
           *(int *)&(this->MGrid).field_0x30)) {
      do {
        uVar12 = (uint)uVar15;
        uVar8 = uVar16;
        if ((int)uVar12 < *(int *)&(this->MPhi).field_0x18) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FLevelSet *)(*pcVar6)();
          return pFVar10;
        }
        dVar2 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + uVar18);
        uVar8 = uVar16;
        if ((int)uVar12 < *(int *)&(this->MPhi).field_0x18) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if (dVar19 <= dVar2) {
          dVar2 = dVar19;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FLevelSet *)(*pcVar6)();
          return pFVar10;
        }
        *(double *)(uVar18 + *(longlong *)&(this->MPhi).field_0x10) = dVar2;
        uVar15 = (ulonglong)(uVar12 + 1);
        uVar18 = uVar18 + 8;
      } while ((int)(uVar12 + 1) <
               *(int *)&(this->MGrid).field_0x38 * *(int *)&(this->MGrid).field_0x34 *
               *(int *)&(this->MGrid).field_0x30);
    }
    uVar4 = __real_bff0000000000000;
    uVar16 = 0;
    if (0 < *(int *)&(this->MGrid).field_0x38 * *(int *)&(this->MGrid).field_0x34 *
            *(int *)&(this->MGrid).field_0x30) {
      uVar22 = (undefined4)__real_3ff0000000000000;
      uVar15 = (ulonglong)__real_3ff0000000000000 >> 0x20;
      uVar18 = uVar14;
      uVar17 = uVar14;
      do {
        uVar12 = (uint)uVar18;
        uVar8 = uVar16;
        if ((int)uVar12 < local_d8.ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FLevelSet *)(*pcVar6)();
          return pFVar10;
        }
        uVar20 = uVar22;
        uVar21 = (int)uVar15;
        if (*(double *)(local_d8.AllocatorInstance.Data + uVar17) <= 0.0) {
          if (0.0 <= *(double *)(local_d8.AllocatorInstance.Data + uVar17)) {
            uVar20 = 0;
            uVar21 = 0;
          }
          else {
            uVar20 = (int)uVar4;
            uVar21 = (int)((ulonglong)uVar4 >> 0x20);
          }
        }
        uVar8 = uVar16;
        if ((int)uVar12 < *(int *)&(this->MPhi).field_0x18) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FLevelSet *)(*pcVar6)();
          return pFVar10;
        }
        lVar5 = *(longlong *)&(this->MPhi).field_0x10;
        uVar18 = (ulonglong)(uVar12 + 1);
        *(double *)(lVar5 + uVar17) = (double)CONCAT44(uVar21,uVar20) * *(double *)(lVar5 + uVar17);
        uVar17 = uVar17 + 8;
      } while ((int)(uVar12 + 1) <
               *(int *)&(this->MGrid).field_0x38 * *(int *)&(this->MGrid).field_0x34 *
               *(int *)&(this->MGrid).field_0x30);
    }
    FillWithFastMarchingMethod(this,dVar19,&local_f8);
    uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    if ((dVar19 != 0.0) &&
       (0 < *(int *)&(this->MGrid).field_0x38 * *(int *)&(this->MGrid).field_0x34 *
            *(int *)&(this->MGrid).field_0x30)) {
      uVar23 = (uint)__xmm_80000000000000008000000000000000;
      uVar15 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
      uVar18 = uVar14;
      do {
        uVar13 = (uint)uVar14;
        uVar9 = uVar16;
        if ((int)uVar13 < *(int *)&(this->MPhi).field_0x18) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FLevelSet *)(*pcVar6)();
          return pFVar10;
        }
        uVar4 = *(undefined8 *)(*(longlong *)&(this->MPhi).field_0x10 + uVar18);
        if (dVar19 < (double)CONCAT44((uint)((ulonglong)uVar4 >> 0x20) & uVar12,(uint)uVar4 & uVar8)
           ) {
          uVar9 = uVar16;
          if ((int)uVar13 < *(int *)&(this->MPhi).field_0x18) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            pFVar10 = (FLevelSet *)(*pcVar6)();
            return pFVar10;
          }
          dVar2 = dVar19;
          if (*(double *)(uVar18 + *(longlong *)&(this->MPhi).field_0x10) <= 0.0) {
            dVar2 = (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) ^ (uint)uVar15,
                                     SUB84(dVar19,0) ^ uVar23);
          }
          uVar9 = uVar16;
          if ((int)uVar13 < *(int *)&(this->MPhi).field_0x18) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            pFVar10 = (FLevelSet *)(*pcVar6)();
            return pFVar10;
          }
          *(double *)(uVar18 + *(longlong *)&(this->MPhi).field_0x10) = dVar2;
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar18 = uVar18 + 8;
      } while ((int)(uVar13 + 1) <
               *(int *)&(this->MGrid).field_0x38 * *(int *)&(this->MGrid).field_0x34 *
               *(int *)&(this->MGrid).field_0x30);
    }
    ComputeNormals(this);
    ComputeConvexity(this,&local_f8);
    if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
    }
  }
  return this;
}

// ~FLevelSet @ 143be2d10

void __thiscall Chaos::FLevelSet::~FLevelSet(FLevelSet *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FLevelSet_Chaos__6B_;
  pvVar1 = *(void **)&(this->MNormals).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->MPhi).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)this);
  return;
}

// operator() @ 143be5c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::FLevelSet::ComputeLevelSetError'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double dVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  FLevelSet *this_00;
  TParticles<double,3> *this_01;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  TVector<double,3> *pTVar14;
  TVector<double,3> *pTVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  uint uVar22;
  uint uVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 local_98;
  int local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  
  plVar3 = *(longlong **)this;
  lVar16 = 0;
  lVar17 = (longlong)param_1;
  uVar18 = (uint)~param_1 >> 0x1f;
  uVar11 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar11 = uVar18;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *plVar3;
  local_98 = *(undefined8 *)(lVar4 + lVar17 * 0xc);
  iVar2 = *(int *)(lVar4 + 8 + lVar17 * 0xc);
  local_90 = iVar2;
  pTVar14 = Chaos::TParticles<double,3>::GetX
                      (*(TParticles<double,3> **)((longlong)this + 8),(int)local_98);
  pTVar15 = Chaos::TParticles<double,3>::GetX
                      (*(TParticles<double,3> **)((longlong)this + 8),local_98._4_4_);
  dVar19 = *(double *)&pTVar14->field_0x10;
  dVar7 = *(double *)pTVar14;
  dVar8 = *(double *)&pTVar14->field_0x8;
  dVar1 = *(double *)&pTVar15->field_0x10;
  dVar20 = *(double *)pTVar15;
  dVar21 = *(double *)&pTVar15->field_0x8;
  pTVar14 = Chaos::TParticles<double,3>::GetX(*(TParticles<double,3> **)((longlong)this + 8),iVar2);
  lVar4 = *(longlong *)((longlong)this + 0x10);
  local_78 = (dVar19 + dVar1 + *(double *)&pTVar14->field_0x10) * __real_3fd5555555555555;
  local_88 = (dVar20 + dVar7 + *(double *)pTVar14) * ___xmm_3fd55555555555553fd5555555555555;
  dStack_80 = (dVar21 + dVar8 + *(double *)&pTVar14->field_0x8) * _UNK_150aa23f8;
  Chaos::TUniformGrid<double,3>::ClampMinusHalf
            ((TUniformGrid<double,3> *)(lVar4 + 0x20),(TVector<double,3> *)&local_70,
             (TVector<double,3> *)&local_88);
  auVar23._0_8_ =
       (local_70 - local_88) * (local_70 - local_88) +
       (local_68 - dStack_80) * (local_68 - dStack_80) +
       (local_60 - local_78) * (local_60 - local_78);
  auVar23._8_8_ = 0;
  dVar19 = Chaos::TUniformGridBase<double,3>::LinearlyInterpolate<double>
                     ((TUniformGridBase<double,3> *)(lVar4 + 0x20),
                      (TArrayND<double,3> *)(lVar4 + 0x78),(TVector<double,3> *)&local_70);
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (0.0 < auVar23._0_8_) {
    auVar23 = sqrtpd(auVar23,auVar23);
    dVar19 = auVar23._0_8_ + dVar19;
  }
  if (**(double **)((longlong)this + 0x18) * __real_c000000000000000 < dVar19) {
    plVar3 = *(longlong **)((longlong)this + 0x20);
    uVar22 = SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar25 = (uint)((ulonglong)dVar19 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar12 = 0;
    uVar13 = uVar12;
    if (param_1 < (int)plVar3[1]) {
      uVar13 = uVar18;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(ulonglong *)(*plVar3 + lVar17 * 8) = CONCAT44(uVar25,uVar22);
    do {
      uVar13 = *(uint *)((longlong)&local_98 + lVar16 * 4);
      this_00 = *(FLevelSet **)((longlong)this + 0x10);
      lVar4 = *(longlong *)((longlong)this + 8);
      uVar22 = uVar12;
      if ((int)uVar13 < *(int *)(lVar4 + 0x30)) {
        uVar22 = ~uVar13 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      dVar19 = Chaos::FLevelSet::SignedDistance
                         (this_00,(TVector<double,3> *)
                                  (*(longlong *)(lVar4 + 0x28) + (longlong)(int)uVar13 * 0x18));
      plVar3 = *(longlong **)((longlong)this + 0x20);
      uVar13 = uVar12;
      if (param_1 < (int)plVar3[1]) {
        uVar13 = uVar18;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *plVar3;
      lVar16 = lVar16 + 1;
      *(double *)(lVar4 + lVar17 * 8) =
           (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & uVar9,SUB84(dVar19,0) & uVar11) +
           *(double *)(lVar4 + lVar17 * 8);
    } while (lVar16 < 3);
    plVar3 = *(longlong **)((longlong)this + 0x20);
    if (param_1 < (int)plVar3[1]) {
      uVar12 = uVar18;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar16 = *plVar3;
    this_01 = *(TParticles<double,3> **)((longlong)this + 8);
    *(double *)(lVar16 + lVar17 * 8) = *(double *)(lVar16 + lVar17 * 8) * __real_3fd0000000000000;
    pTVar14 = Chaos::TParticles<double,3>::GetX(this_01,local_90);
    pTVar15 = Chaos::TParticles<double,3>::GetX
                        (*(TParticles<double,3> **)((longlong)this + 8),(int)local_98);
    dVar19 = *(double *)pTVar14;
    auVar24._0_8_ = *(double *)&pTVar14->field_0x10 - *(double *)&pTVar15->field_0x10;
    auVar24._8_8_ = 0;
    dVar8 = *(double *)&pTVar14->field_0x8 - *(double *)&pTVar15->field_0x8;
    dVar1 = *(double *)pTVar15;
    pTVar14 = Chaos::TParticles<double,3>::GetX
                        (*(TParticles<double,3> **)((longlong)this + 8),local_98._4_4_);
    pTVar15 = Chaos::TParticles<double,3>::GetX
                        (*(TParticles<double,3> **)((longlong)this + 8),(int)local_98);
    dVar7 = *(double *)&pTVar14->field_0x10 - *(double *)&pTVar15->field_0x10;
    dVar20 = *(double *)&pTVar14->field_0x8 - *(double *)&pTVar15->field_0x8;
    plVar3 = *(longlong **)((longlong)this + 0x28);
    uVar11 = 0;
    if (param_1 < (int)plVar3[1]) {
      uVar11 = uVar18;
    }
    dVar21 = dVar20 * auVar24._0_8_ - dVar7 * dVar8;
    dVar7 = dVar7 * (dVar19 - dVar1) - (*(double *)pTVar14 - *(double *)pTVar15) * auVar24._0_8_;
    dVar19 = (*(double *)pTVar14 - *(double *)pTVar15) * dVar8 - dVar20 * (dVar19 - dVar1);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar7 * dVar7 + dVar21 * dVar21 + dVar19 * dVar19;
    auVar23 = sqrtpd(auVar24,auVar6);
    dVar19 = auVar23._0_8_ * __real_3fe0000000000000;
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(double *)(*plVar3 + lVar17 * 8) = dVar19;
  }
  return;
}

// CheckData @ 143bf3e40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Chaos::FLevelSet::CheckData
          (FLevelSet *this,FErrorReporter *param_1,TParticles<double,3> *param_2,
          FTriangleMesh *param_3,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FString *pFVar14;
  wchar_t *pwVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  FString local_1b0;
  ForAnyElementType local_1a0;
  int local_198;
  int local_194;
  FString local_190;
  double local_180;
  double local_178;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0 [9];
  
  uVar17 = 0;
  local_1b0.Data.ArrayNum = (param_1->Prefix).Data.ArrayNum;
  lVar19 = (longlong)local_1b0.Data.ArrayNum;
  pFVar5 = (param_1->Prefix).Data.AllocatorInstance.Data;
  local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_1b0.Data.ArrayNum == 0) {
    local_1b0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1b0.Data.ArrayNum,0,(ForAnyElementType *)&local_1b0,local_1b0.Data.ArrayNum
               ,&local_1b0.Data.ArrayMax);
    memcpy(local_1b0.Data.AllocatorInstance.Data,pFVar5,lVar19 * 2);
  }
  ::FString::RemoveSpacesInline(&local_1b0);
  pFVar14 = ::FString::Replace(&local_1b0,&local_110,L"|",L"_",IgnoreCase);
  if (&local_1b0 != pFVar14) {
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
    local_1b0.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
    (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.Data.ArrayNum = (pFVar14->Data).ArrayNum;
    local_1b0.Data.ArrayMax = (pFVar14->Data).ArrayMax;
    (pFVar14->Data).ArrayNum = 0;
    (pFVar14->Data).ArrayMax = 0;
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  pFVar14 = ::FString::Replace(&local_1b0,&local_100,L":",L"_",IgnoreCase);
  if (&local_1b0 != pFVar14) {
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
    local_1b0.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
    (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.Data.ArrayNum = (pFVar14->Data).ArrayNum;
    local_1b0.Data.ArrayMax = (pFVar14->Data).ArrayMax;
    (pFVar14->Data).ArrayNum = 0;
    (pFVar14->Data).ArrayMax = 0;
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChars(&local_1b0,"__",2);
  bVar9 = false;
  bVar10 = false;
  if (*(int *)&(this->MGrid).field_0x38 * *(int *)&(this->MGrid).field_0x34 *
      *(int *)&(this->MGrid).field_0x30 < 1) {
LAB_143bf4749:
    if (OutputFailedLevelSetDebugData != 0) {
      ::FString::PrintfImpl(&local_120,L"NOINTERIOR___");
      ::FString::ConcatFF(local_d0,&local_120,&local_1b0);
      OutputDebugData(this,param_1,param_2,param_4,param_3,local_d0);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
    }
    pwVar15 = L"No interior voxels (phi < 0) defined on level set";
LAB_143bf47b2:
    FErrorReporter::ReportError(param_1,pwVar15);
  }
  else {
    uVar20 = uVar17;
    uVar21 = uVar17;
    do {
      uVar18 = (uint)uVar17;
      uVar22 = ~uVar18 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar18 < *(int *)&(this->MNormals).field_0x18) {
        uVar11 = uVar22;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      lVar19 = *(longlong *)&(this->MNormals).field_0x10;
      iVar12 = _finite(*(double *)(lVar19 + uVar21));
      if (((iVar12 == 0) || (iVar12 = _finite(*(double *)(lVar19 + 8 + uVar21)), iVar12 == 0)) ||
         (iVar12 = _finite(*(double *)(lVar19 + 0x10 + uVar21)), iVar12 == 0)) {
LAB_143bf46a8:
        if (OutputFailedLevelSetDebugData != 0) {
          ::FString::PrintfImpl(&local_130,L"NANS___");
          ::FString::ConcatFF(&local_e0,&local_130,&local_1b0);
          OutputDebugData(this,param_1,param_2,param_4,param_3,&local_e0);
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
            pwVar15 = 
            L"NaNs were found in level set data.  Check input geometry and resolution settings.";
            goto LAB_143bf47b2;
          }
        }
        pwVar15 = 
        L"NaNs were found in level set data.  Check input geometry and resolution settings.";
        goto LAB_143bf47b2;
      }
      uVar13 = 0;
      uVar11 = uVar13;
      if ((int)uVar18 < *(int *)&(this->MPhi).field_0x18) {
        uVar11 = uVar22;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      iVar12 = _finite(*(double *)(*(longlong *)&(this->MPhi).field_0x10 + uVar20 * 8));
      if (iVar12 == 0) goto LAB_143bf46a8;
      uVar11 = uVar13;
      if ((int)uVar18 < *(int *)&(this->MPhi).field_0x18) {
        uVar11 = uVar22;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      iVar12 = _isnan(*(double *)(*(longlong *)&(this->MPhi).field_0x10 + uVar20 * 8));
      if (iVar12 != 0) goto LAB_143bf46a8;
      if (!bVar9) {
        uVar11 = uVar13;
        if ((int)uVar18 < *(int *)&(this->MPhi).field_0x18) {
          uVar11 = uVar22;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pdVar1 = (double *)(*(longlong *)&(this->MPhi).field_0x10 + uVar20 * 8);
        bVar9 = *pdVar1 <= 0.0 && *pdVar1 != 0.0;
      }
      if (!bVar10) {
        if ((int)uVar18 < *(int *)&(this->MPhi).field_0x18) {
          uVar13 = uVar22;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        bVar10 = 0.0 < *(double *)(*(longlong *)&(this->MPhi).field_0x10 + uVar20 * 8);
      }
      uVar17 = (ulonglong)(uVar18 + 1);
      uVar20 = uVar20 + 1;
      uVar21 = uVar21 + 0x18;
    } while ((int)(uVar18 + 1) <
             *(int *)&(this->MGrid).field_0x38 * *(int *)&(this->MGrid).field_0x34 *
             *(int *)&(this->MGrid).field_0x30);
    if (!bVar9) goto LAB_143bf4749;
    if (!bVar10) {
      if (OutputFailedLevelSetDebugData == 0) {
LAB_143bf42fb:
        pwVar15 = L"No exterior voxels (phi > 0) defined on level set";
      }
      else {
        ::FString::PrintfImpl(&local_150,L"NOEXTERIOR___");
        ::FString::ConcatFF(&local_f0,&local_150,&local_1b0);
        OutputDebugData(this,param_1,param_2,param_4,param_3,&local_f0);
        if (local_150.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
        goto LAB_143bf42fb;
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
        pwVar15 = L"No exterior voxels (phi > 0) defined on level set";
      }
      goto LAB_143bf47b2;
    }
    local_180 = 0.0;
    local_178 = 0.0;
    dVar23 = ComputeLevelSetError(this,param_2,param_4,param_3,&local_180,&local_178);
    dVar2 = *(double *)&(this->MGrid).field_0x40;
    dVar3 = *(double *)&(this->MGrid).field_0x48;
    dVar4 = *(double *)&(this->MGrid).field_0x50;
    auVar24._0_8_ = dVar2 * dVar2;
    auVar24._8_8_ = 0;
    auVar27._0_8_ = dVar3 * dVar3 + auVar24._0_8_ + dVar4 * dVar4;
    auVar27._8_8_ = 0;
    auVar24 = sqrtpd(auVar24,auVar27);
    if (((dVar23 <= (double)AvgDistErrorTolerance * auVar24._0_8_) &&
        (local_180 <= (double)AvgAngleErrorTolerance)) &&
       (local_178 <= (double)MaxDistErrorTolerance * auVar24._0_8_)) {
LAB_143bf46a1:
      bVar10 = true;
      goto LAB_143bf47bc;
    }
    if (OutputFailedLevelSetDebugData != 0) {
      ::FString::PrintfImpl(&local_140,L"AVGDIST_%f__MAXDIST_%f__ANGLE_%f___");
      ::FString::ConcatFF(&local_170,&local_140,&local_1b0);
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      FVar16.Data = local_170.Data.AllocatorInstance.Data;
      local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_190.Data.ArrayNum = local_170.Data.ArrayNum;
      if (local_170.Data.ArrayNum == 0) {
        local_190.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_170.Data.ArrayNum,0,(ForAnyElementType *)&local_190,
                   local_170.Data.ArrayNum,&local_190.Data.ArrayMax);
        memcpy(local_190.Data.AllocatorInstance.Data,FVar16.Data,
               (longlong)local_170.Data.ArrayNum * 2);
      }
      OutputDebugData(this,param_1,param_2,param_4,param_3,&local_190);
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
    }
    if (FailureOnHighError == 0) {
      if (4 < (byte)LogChaos._0_1_) {
        dVar2 = *(double *)&(this->MGrid).field_0x48;
        dVar3 = *(double *)&(this->MGrid).field_0x40;
        dVar4 = *(double *)&(this->MGrid).field_0x50;
        local_198 = (param_1->Prefix).Data.ArrayNum;
        lVar19 = (longlong)local_198;
        pFVar5 = (param_1->Prefix).Data.AllocatorInstance.Data;
        local_1a0.Data = (FScriptContainerElement *)0x0;
        auVar26._0_8_ = dVar2 * dVar2 + dVar3 * dVar3 + dVar4 * dVar4;
        auVar26._8_8_ = 0;
        sqrtpd(ZEXT816(0),auVar26);
        if (local_198 == 0) {
          local_194 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_198,0,&local_1a0,local_198,&local_194);
          memcpy(local_1a0.Data,pFVar5,lVar19 * 2);
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
        if (local_1a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data);
        }
      }
      goto LAB_143bf46a1;
    }
    dVar2 = *(double *)&(this->MGrid).field_0x48;
    dVar3 = *(double *)&(this->MGrid).field_0x40;
    dVar4 = *(double *)&(this->MGrid).field_0x50;
    auVar28._0_8_ = dVar4 * dVar4;
    auVar28._8_8_ = 0;
    auVar25._0_8_ = dVar2 * dVar2 + dVar3 * dVar3 + auVar28._0_8_;
    auVar25._8_8_ = 0;
    sqrtpd(auVar28,auVar25);
    ::FString::PrintfImpl
              (&local_160,
               L"High error for level set: AvgDistError: %f (Max: %f*%f), MaxDistError: %f (Max: %f*%f), AvgAngleError: %f (Max: %f)"
              );
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_160.Data.ArrayNum != 0) {
      FVar16.Data = local_160.Data.AllocatorInstance.Data;
    }
    FErrorReporter::ReportError(param_1,(wchar_t *)FVar16.Data);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
  }
  bVar10 = false;
LAB_143bf47bc:
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  return bVar10;
}

// ComputeConvexity @ 143bf5a30

void __thiscall
Chaos::FLevelSet::ComputeConvexity
          (FLevelSet *this,TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
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
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  code *pcVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  bool bVar32;
  bool bVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  uint uVar39;
  uint uVar40;
  FScriptContainerElement *pFVar41;
  ulonglong uVar42;
  longlong lVar43;
  uint uVar44;
  uint uVar45;
  int iVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 local_res18 [8];
  int local_res20;
  int local_130;
  
  uVar53 = (undefined4)__real_3fe0000000000000;
  uVar54 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
  uVar55 = SUB84(__real_4010000000000000,0);
  uVar56 = (undefined4)((ulonglong)__real_4010000000000000 >> 0x20);
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  iVar25 = *(int *)&(this->MGrid).field_0x38;
  iVar38 = iVar25 * *(int *)&(this->MGrid).field_0x34;
  uVar26 = param_1->ArrayNum;
  uVar42 = (ulonglong)(int)uVar26;
  pFVar41 = (param_1->AllocatorInstance).Data;
  iVar46 = iVar25 * *(int *)&(this->MGrid).field_0x34 * *(int *)&(this->MGrid).field_0x30;
  pFVar1 = pFVar41 + uVar42 * 0xc;
  local_130 = 1;
  bVar32 = true;
  local_res20 = iVar38;
  do {
    if (param_1->ArrayNum != (int)uVar42) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::TVector<int,3>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar41 == pFVar1) {
      return;
    }
    uVar40 = *(int *)(pFVar41 + 8) +
             (*(int *)&(this->MGrid).field_0x34 * *(int *)pFVar41 + *(int *)(pFVar41 + 4)) *
             *(int *)&(this->MGrid).field_0x38;
    uVar45 = ~uVar40 >> 0x1f;
    uVar39 = 0;
    if ((int)uVar40 < *(int *)&(this->MPhi).field_0x18) {
      uVar39 = uVar45;
    }
    if ((uVar39 == 0) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar33)) {
      pcVar28 = (code *)swi(3);
      (*pcVar28)();
      return;
    }
    lVar43 = (longlong)(int)uVar40;
    if (*(double *)(*(longlong *)&(this->MPhi).field_0x10 + lVar43 * 8) <= 0.0) {
      uVar39 = uVar40 + iVar38;
      uVar37 = uVar40;
      if ((int)uVar39 < iVar46) {
        uVar37 = uVar39;
      }
      uVar44 = 0;
      if ((int)uVar37 < *(int *)&(this->MPhi).field_0x18) {
        uVar44 = ~uVar37 >> 0x1f;
      }
      if ((uVar44 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      uVar44 = uVar40 - local_res20;
      dVar47 = *(double *)&(this->MGrid).field_0x40;
      uVar34 = uVar40;
      if (-1 < (int)uVar44) {
        uVar34 = uVar44;
      }
      dVar48 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar37 * 8);
      uVar37 = 0;
      if ((int)uVar34 < *(int *)&(this->MPhi).field_0x18) {
        uVar37 = ~uVar34 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      uVar37 = uVar40;
      if (-1 < (int)uVar44) {
        uVar37 = uVar44;
      }
      dVar47 = (double)CONCAT44(uVar54,uVar53) / dVar47;
      dVar48 = dVar48 - *(double *)
                         (*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar34 * 8);
      dVar31 = dVar47 * dVar48;
      uVar34 = 0;
      if ((int)uVar37 < *(int *)&(this->MPhi).field_0x18) {
        uVar34 = ~uVar37 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      dVar2 = *(double *)&(this->MGrid).field_0x40;
      uVar34 = uVar40;
      if ((int)uVar39 < iVar46) {
        uVar34 = uVar39;
      }
      dVar3 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar37 * 8);
      uVar39 = 0;
      if ((int)uVar40 < *(int *)&(this->MPhi).field_0x18) {
        uVar39 = uVar45;
      }
      if ((uVar39 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      lVar27 = *(longlong *)&(this->MPhi).field_0x10;
      uVar39 = 0;
      if ((int)uVar34 < *(int *)&(this->MPhi).field_0x18) {
        uVar39 = ~uVar34 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      dVar4 = *(double *)(lVar27 + lVar43 * 8);
      uVar39 = uVar40;
      if ((int)(iVar25 + uVar40) < iVar46) {
        uVar39 = iVar25 + uVar40;
      }
      dVar2 = ((dVar3 + *(double *)
                         (*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar34 * 8)) -
              (dVar4 + dVar4)) / (dVar2 * dVar2);
      uVar37 = 0;
      if ((int)uVar39 < *(int *)&(this->MPhi).field_0x18) {
        uVar37 = ~uVar39 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      uVar37 = uVar40 - iVar25;
      dVar3 = *(double *)&(this->MGrid).field_0x48;
      uVar34 = uVar40;
      if (-1 < (int)uVar37) {
        uVar34 = uVar37;
      }
      dVar4 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar39 * 8);
      uVar39 = 0;
      if ((int)uVar34 < *(int *)&(this->MPhi).field_0x18) {
        uVar39 = ~uVar34 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      uVar39 = uVar40;
      if (-1 < (int)uVar37) {
        uVar39 = uVar37;
      }
      dVar3 = (double)CONCAT44(uVar54,uVar53) / dVar3;
      dVar4 = dVar4 - *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar34 * 8)
      ;
      dVar30 = dVar3 * dVar4;
      uVar34 = 0;
      if ((int)uVar39 < *(int *)&(this->MPhi).field_0x18) {
        uVar34 = ~uVar39 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      dVar5 = *(double *)&(this->MGrid).field_0x48;
      dVar6 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar39 * 8);
      uVar39 = uVar40;
      if ((int)(iVar25 + uVar40) < iVar46) {
        uVar39 = iVar25 + uVar40;
      }
      uVar34 = 0;
      if ((int)uVar40 < *(int *)&(this->MPhi).field_0x18) {
        uVar34 = uVar45;
      }
      if ((uVar34 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      lVar27 = *(longlong *)&(this->MPhi).field_0x10;
      uVar34 = 0;
      if ((int)uVar39 < *(int *)&(this->MPhi).field_0x18) {
        uVar34 = ~uVar39 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      uVar34 = uVar40 + 1;
      dVar7 = *(double *)(lVar27 + lVar43 * 8);
      uVar36 = uVar40;
      if ((int)uVar34 < iVar46) {
        uVar36 = uVar34;
      }
      uVar35 = 0;
      if ((int)uVar36 < *(int *)&(this->MPhi).field_0x18) {
        uVar35 = ~uVar36 >> 0x1f;
      }
      dVar5 = ((dVar6 + *(double *)
                         (*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar39 * 8)) -
              (dVar7 + dVar7)) / (dVar5 * dVar5);
      if ((uVar35 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      uVar39 = uVar40 - 1;
      dVar6 = *(double *)&(this->MGrid).field_0x50;
      uVar35 = uVar40;
      if (-1 < (int)uVar39) {
        uVar35 = uVar39;
      }
      dVar7 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar36 * 8);
      uVar36 = 0;
      if ((int)uVar35 < *(int *)&(this->MPhi).field_0x18) {
        uVar36 = ~uVar35 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      uVar36 = uVar40;
      if (-1 < (int)uVar39) {
        uVar36 = uVar39;
      }
      dVar6 = (dVar7 - *(double *)
                        (*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar35 * 8)) *
              ((double)CONCAT44(uVar54,uVar53) / dVar6);
      uVar39 = 0;
      if ((int)uVar36 < *(int *)&(this->MPhi).field_0x18) {
        uVar39 = ~uVar36 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      dVar7 = *(double *)&(this->MGrid).field_0x50;
      uVar39 = uVar40;
      if ((int)uVar34 < iVar46) {
        uVar39 = uVar34;
      }
      dVar8 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar36 * 8);
      uVar34 = 0;
      if ((int)uVar40 < *(int *)&(this->MPhi).field_0x18) {
        uVar34 = uVar45;
      }
      if ((uVar34 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      lVar27 = *(longlong *)&(this->MPhi).field_0x10;
      uVar45 = 0;
      if ((int)uVar39 < *(int *)&(this->MPhi).field_0x18) {
        uVar45 = ~uVar39 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      dVar9 = *(double *)(lVar27 + lVar43 * 8);
      iVar38 = local_res20 + uVar40;
      uVar45 = uVar40;
      if (iVar25 + iVar38 < iVar46) {
        uVar45 = iVar25 + iVar38;
      }
      uVar34 = 0;
      if ((int)uVar45 < *(int *)&(this->MPhi).field_0x18) {
        uVar34 = ~uVar45 >> 0x1f;
      }
      dVar7 = ((dVar8 + *(double *)
                         (*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar39 * 8)) -
              (dVar9 + dVar9)) / (dVar7 * dVar7);
      if ((uVar34 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      dVar8 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar45 * 8);
      uVar39 = uVar40;
      if (-1 < (int)(uVar44 - iVar25)) {
        uVar39 = uVar44 - iVar25;
      }
      uVar45 = 0;
      if ((int)uVar39 < *(int *)&(this->MPhi).field_0x18) {
        uVar45 = ~uVar39 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      uVar45 = iVar25 + uVar44;
      dVar9 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar39 * 8);
      if (((int)uVar45 < 0) || (iVar46 <= (int)uVar45)) {
        uVar45 = uVar40;
      }
      uVar39 = 0;
      if ((int)uVar45 < *(int *)&(this->MPhi).field_0x18) {
        uVar39 = ~uVar45 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      uVar39 = local_res20 + uVar37;
      dVar10 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar45 * 8);
      if (((int)uVar39 < 0) || (iVar46 <= (int)uVar39)) {
        uVar39 = uVar40;
      }
      dVar11 = *(double *)&(this->MGrid).field_0x48;
      dVar12 = *(double *)&(this->MGrid).field_0x40;
      uVar45 = 0;
      if ((int)uVar39 < *(int *)&(this->MPhi).field_0x18) {
        uVar45 = ~uVar39 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      dVar29 = (double)CONCAT44(uVar56,uVar55);
      dVar13 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar39 * 8);
      uVar39 = uVar40;
      if ((int)(iVar38 + 1U) < iVar46) {
        uVar39 = iVar38 + 1U;
      }
      uVar45 = 0;
      if ((int)uVar39 < *(int *)&(this->MPhi).field_0x18) {
        uVar45 = ~uVar39 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      dVar14 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar39 * 8);
      uVar39 = uVar40;
      if (-1 < (int)(uVar44 - 1)) {
        uVar39 = uVar44 - 1;
      }
      uVar45 = 0;
      if ((int)uVar39 < *(int *)&(this->MPhi).field_0x18) {
        uVar45 = ~uVar39 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      uVar44 = uVar44 + 1;
      dVar15 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar39 * 8);
      if (((int)uVar44 < 0) || (iVar46 <= (int)uVar44)) {
        uVar44 = uVar40;
      }
      uVar39 = 0;
      if ((int)uVar44 < *(int *)&(this->MPhi).field_0x18) {
        uVar39 = ~uVar44 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      uVar39 = iVar38 - 1;
      dVar16 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar44 * 8);
      if (((int)uVar39 < 0) || (iVar46 <= (int)uVar39)) {
        uVar39 = uVar40;
      }
      dVar17 = *(double *)&(this->MGrid).field_0x50;
      dVar18 = *(double *)&(this->MGrid).field_0x40;
      uVar45 = 0;
      if ((int)uVar39 < *(int *)&(this->MPhi).field_0x18) {
        uVar45 = ~uVar39 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      dVar18 = dVar18 * __real_4010000000000000;
      dVar19 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar39 * 8);
      uVar45 = uVar40 + iVar25 + 1;
      uVar39 = uVar40;
      if ((int)uVar45 < iVar46) {
        uVar39 = uVar45;
      }
      uVar45 = 0;
      if ((int)uVar39 < *(int *)&(this->MPhi).field_0x18) {
        uVar45 = ~uVar39 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      dVar20 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar39 * 8);
      uVar39 = uVar40;
      if (-1 < (int)(uVar37 - 1)) {
        uVar39 = uVar37 - 1;
      }
      uVar45 = 0;
      if ((int)uVar39 < *(int *)&(this->MPhi).field_0x18) {
        uVar45 = ~uVar39 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      uVar37 = uVar37 + 1;
      dVar21 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar39 * 8);
      if (((int)uVar37 < 0) || (iVar46 <= (int)uVar37)) {
        uVar37 = uVar40;
      }
      uVar39 = 0;
      if ((int)uVar37 < *(int *)&(this->MPhi).field_0x18) {
        uVar39 = ~uVar37 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      uVar39 = (uVar40 + iVar25) - 1;
      dVar22 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar37 * 8);
      if (((int)uVar39 < 0) || (iVar46 <= (int)uVar39)) {
        uVar39 = uVar40;
      }
      dVar23 = *(double *)&(this->MGrid).field_0x50;
      dVar24 = *(double *)&(this->MGrid).field_0x48;
      uVar40 = 0;
      if ((int)uVar39 < *(int *)&(this->MPhi).field_0x18) {
        uVar40 = ~uVar39 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      dVar31 = dVar31 * dVar31;
      dVar50 = dVar30 * dVar30;
      dVar51 = dVar6 * dVar6;
      dVar49 = dVar50 + dVar31 + dVar51;
      dVar52 = SQRT(dVar49);
      uVar56 = (undefined4)((ulonglong)__real_4010000000000000 >> 0x20);
      if (__real_3e45798ee0000000 < dVar52) {
        dVar48 = (dVar47 + dVar47) * dVar48;
        dVar47 = ((((((dVar31 * dVar5 -
                      dVar30 * dVar48 *
                      ((((dVar8 + dVar9) - dVar10) - dVar13) / (dVar12 * dVar29 * dVar11))) +
                      dVar50 * dVar2 + dVar31 * dVar7) -
                    dVar48 * dVar6 * ((((dVar14 + dVar15) - dVar16) - dVar19) / (dVar18 * dVar17)))
                    + dVar51 * dVar2 + dVar50 * dVar7) -
                  ((((dVar20 + dVar21) - dVar22) -
                   *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar39 * 8)) /
                  (dVar24 * __real_4010000000000000 * dVar23)) * dVar4 * (dVar3 + dVar3) * dVar6) +
                 dVar51 * dVar5) / (dVar49 * dVar52);
        if (__real_bf1a36e2e0000000 <= dVar47) {
          iVar38 = (dVar47 <= __real_3f1a36e2e0000000) - 1;
        }
        else {
          iVar38 = 1;
        }
        if (bVar32) {
          bVar32 = false;
          local_130 = iVar38;
        }
        else if ((iVar38 != 0) && (local_130 != iVar38)) {
          *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
          return;
        }
      }
      uVar55 = SUB84(__real_4010000000000000,0);
      uVar53 = (undefined4)__real_3fe0000000000000;
      uVar54 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
      iVar38 = local_res20;
    }
    pFVar41 = pFVar41 + 0xc;
    uVar42 = (ulonglong)uVar26;
  } while( true );
}

// ComputeDistancesNearZeroIsocontour @ 143bf6940

void __thiscall
Chaos::FLevelSet::ComputeDistancesNearZeroIsocontour
          (FLevelSet *this,FImplicitObject *param_1,TArrayND<double,3> *param_2,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined8 *puVar1;
  double dVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 local_res8 [8];
  int local_98;
  int local_88;
  int iStack_84;
  int local_80;
  
  puVar15 = *(undefined8 **)&(this->MPhi).field_0x10;
  iVar17 = *(int *)&(this->MPhi).field_0x18;
  puVar1 = puVar15 + iVar17;
  while( true ) {
    if (*(int *)&(this->MPhi).field_0x18 != iVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    dVar9 = __real_bff0000000000000;
    uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar6 = __real_3ff0000000000000;
    if (puVar15 == puVar1) break;
    *puVar15 = 0x47efffffe0000000;
    puVar15 = puVar15 + 1;
  }
  local_98 = 0;
  if (0 < *(int *)&(this->MGrid).field_0x30) {
    uVar21 = SUB84(__real_3ff0000000000000,0);
    uVar22 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar23 = SUB84(__real_bff0000000000000,0);
    uVar24 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    do {
      iVar17 = 0;
      if (0 < *(int *)&(this->MGrid).field_0x34) {
        do {
          iVar16 = 0;
          if (0 < *(int *)&(this->MGrid).field_0x38) {
            do {
              bVar11 = false;
              local_88 = local_98;
              iStack_84 = iVar17;
              local_80 = iVar16;
              if (0 < local_98) {
                uVar14 = (iVar17 + local_98 * *(int *)&param_2->field_0x4) *
                         *(int *)&param_2->field_0x8 + iVar16;
                uVar12 = 0;
                if ((int)uVar14 < *(int *)&param_2->field_0x18) {
                  uVar12 = ~uVar14 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                dVar2 = *(double *)(*(longlong *)&param_2->field_0x10 + (longlong)(int)uVar14 * 8);
                uVar19 = uVar21;
                uVar20 = uVar22;
                if ((dVar2 <= 0.0) && (uVar19 = uVar23, uVar20 = uVar24, 0.0 <= dVar2)) {
                  uVar19 = 0;
                  uVar20 = 0;
                }
                uVar14 = ((local_98 + -1) * *(int *)&param_2->field_0x4 + iVar17) *
                         *(int *)&param_2->field_0x8 + iVar16;
                uVar12 = 0;
                if ((int)uVar14 < *(int *)&param_2->field_0x18) {
                  uVar12 = ~uVar14 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                dVar2 = *(double *)(*(longlong *)&param_2->field_0x10 + (longlong)(int)uVar14 * 8);
                dVar18 = dVar6;
                if ((dVar2 <= 0.0) && (dVar18 = dVar9, 0.0 <= dVar2)) {
                  dVar18 = 0.0;
                }
                if ((double)CONCAT44(uVar20,uVar19) != dVar18) {
                  bVar11 = true;
                }
              }
              if (local_98 < *(int *)&(this->MGrid).field_0x30 + -1) {
                uVar14 = (local_88 * *(int *)&param_2->field_0x4 + iStack_84) *
                         *(int *)&param_2->field_0x8 + local_80;
                uVar12 = 0;
                if ((int)uVar14 < *(int *)&param_2->field_0x18) {
                  uVar12 = ~uVar14 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                dVar2 = *(double *)(*(longlong *)&param_2->field_0x10 + (longlong)(int)uVar14 * 8);
                uVar19 = uVar21;
                uVar20 = uVar22;
                if ((dVar2 <= 0.0) && (uVar19 = uVar23, uVar20 = uVar24, 0.0 <= dVar2)) {
                  uVar19 = 0;
                  uVar20 = 0;
                }
                uVar14 = ((local_98 + 1) * *(int *)&param_2->field_0x4 + iVar17) *
                         *(int *)&param_2->field_0x8 + iVar16;
                uVar12 = 0;
                if ((int)uVar14 < *(int *)&param_2->field_0x18) {
                  uVar12 = ~uVar14 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                dVar2 = *(double *)(*(longlong *)&param_2->field_0x10 + (longlong)(int)uVar14 * 8);
                dVar18 = dVar6;
                if ((dVar2 <= 0.0) && (dVar18 = dVar9, 0.0 <= dVar2)) {
                  dVar18 = 0.0;
                }
                if ((double)CONCAT44(uVar20,uVar19) != dVar18) {
                  bVar11 = true;
                }
              }
              if (0 < iVar17) {
                uVar14 = (local_88 * *(int *)&param_2->field_0x4 + iStack_84) *
                         *(int *)&param_2->field_0x8 + local_80;
                uVar12 = 0;
                if ((int)uVar14 < *(int *)&param_2->field_0x18) {
                  uVar12 = ~uVar14 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                dVar2 = *(double *)(*(longlong *)&param_2->field_0x10 + (longlong)(int)uVar14 * 8);
                uVar19 = uVar21;
                uVar20 = uVar22;
                if ((dVar2 <= 0.0) && (uVar19 = uVar23, uVar20 = uVar24, 0.0 <= dVar2)) {
                  uVar19 = 0;
                  uVar20 = 0;
                }
                uVar14 = (local_98 * *(int *)&param_2->field_0x4 + -1 + iVar17) *
                         *(int *)&param_2->field_0x8 + iVar16;
                uVar12 = 0;
                if ((int)uVar14 < *(int *)&param_2->field_0x18) {
                  uVar12 = ~uVar14 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                dVar2 = *(double *)(*(longlong *)&param_2->field_0x10 + (longlong)(int)uVar14 * 8);
                dVar18 = dVar6;
                if ((dVar2 <= 0.0) && (dVar18 = dVar9, 0.0 <= dVar2)) {
                  dVar18 = 0.0;
                }
                if ((double)CONCAT44(uVar20,uVar19) != dVar18) {
                  bVar11 = true;
                }
              }
              if (iVar17 < *(int *)&(this->MGrid).field_0x34 + -1) {
                uVar14 = (local_88 * *(int *)&param_2->field_0x4 + iStack_84) *
                         *(int *)&param_2->field_0x8 + local_80;
                uVar12 = 0;
                if ((int)uVar14 < *(int *)&param_2->field_0x18) {
                  uVar12 = ~uVar14 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                dVar2 = *(double *)(*(longlong *)&param_2->field_0x10 + (longlong)(int)uVar14 * 8);
                uVar19 = uVar21;
                uVar20 = uVar22;
                if ((dVar2 <= 0.0) && (uVar19 = uVar23, uVar20 = uVar24, 0.0 <= dVar2)) {
                  uVar19 = 0;
                  uVar20 = 0;
                }
                uVar14 = (local_98 * *(int *)&param_2->field_0x4 + iVar17 + 1) *
                         *(int *)&param_2->field_0x8 + iVar16;
                uVar12 = 0;
                if ((int)uVar14 < *(int *)&param_2->field_0x18) {
                  uVar12 = ~uVar14 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                dVar2 = *(double *)(*(longlong *)&param_2->field_0x10 + (longlong)(int)uVar14 * 8);
                dVar18 = dVar6;
                if ((dVar2 <= 0.0) && (dVar18 = dVar9, 0.0 <= dVar2)) {
                  dVar18 = 0.0;
                }
                if ((double)CONCAT44(uVar20,uVar19) != dVar18) {
                  bVar11 = true;
                }
              }
              if (0 < iVar16) {
                uVar14 = (local_88 * *(int *)&param_2->field_0x4 + iStack_84) *
                         *(int *)&param_2->field_0x8 + local_80;
                uVar12 = 0;
                if ((int)uVar14 < *(int *)&param_2->field_0x18) {
                  uVar12 = ~uVar14 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                dVar2 = *(double *)(*(longlong *)&param_2->field_0x10 + (longlong)(int)uVar14 * 8);
                uVar19 = uVar21;
                uVar20 = uVar22;
                if ((dVar2 <= 0.0) && (uVar19 = uVar23, uVar20 = uVar24, 0.0 <= dVar2)) {
                  uVar19 = 0;
                  uVar20 = 0;
                }
                uVar14 = (local_98 * *(int *)&param_2->field_0x4 + iVar17) *
                         *(int *)&param_2->field_0x8 + -1 + iVar16;
                uVar12 = 0;
                if ((int)uVar14 < *(int *)&param_2->field_0x18) {
                  uVar12 = ~uVar14 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                dVar2 = *(double *)(*(longlong *)&param_2->field_0x10 + (longlong)(int)uVar14 * 8);
                dVar18 = dVar6;
                if ((dVar2 <= 0.0) && (dVar18 = dVar9, 0.0 <= dVar2)) {
                  dVar18 = 0.0;
                }
                if ((double)CONCAT44(uVar20,uVar19) != dVar18) {
                  bVar11 = true;
                }
              }
              if (iVar16 < *(int *)&(this->MGrid).field_0x38 + -1) {
                uVar14 = (local_88 * *(int *)&param_2->field_0x4 + iStack_84) *
                         *(int *)&param_2->field_0x8 + local_80;
                uVar12 = 0;
                if ((int)uVar14 < *(int *)&param_2->field_0x18) {
                  uVar12 = ~uVar14 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                dVar2 = *(double *)(*(longlong *)&param_2->field_0x10 + (longlong)(int)uVar14 * 8);
                uVar19 = uVar21;
                uVar20 = uVar22;
                if ((dVar2 <= 0.0) && (uVar19 = uVar23, uVar20 = uVar24, 0.0 <= dVar2)) {
                  uVar19 = 0;
                  uVar20 = 0;
                }
                uVar14 = (local_98 * *(int *)&param_2->field_0x4 + iVar17) *
                         *(int *)&param_2->field_0x8 + 1 + iVar16;
                uVar12 = 0;
                if ((int)uVar14 < *(int *)&param_2->field_0x18) {
                  uVar12 = ~uVar14 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                dVar2 = *(double *)(*(longlong *)&param_2->field_0x10 + (longlong)(int)uVar14 * 8);
                dVar18 = dVar6;
                if ((dVar2 <= 0.0) && (dVar18 = dVar9, 0.0 <= dVar2)) {
                  dVar18 = 0.0;
                }
                if ((double)CONCAT44(uVar20,uVar19) == dVar18) goto LAB_143bf70bd;
LAB_143bf70c6:
                uVar14 = (local_88 * *(int *)&param_2->field_0x4 + iStack_84) *
                         *(int *)&param_2->field_0x8 + local_80;
                uVar12 = 0;
                if ((int)uVar14 < *(int *)&param_2->field_0x18) {
                  uVar12 = ~uVar14 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar3 = *(undefined8 *)
                         (*(longlong *)&param_2->field_0x10 + (longlong)(int)uVar14 * 8);
                uVar14 = (local_88 * *(int *)&(this->MPhi).field_0x4 + iStack_84) *
                         *(int *)&(this->MPhi).field_0x8 + local_80;
                uVar12 = 0;
                if ((int)uVar14 < *(int *)&(this->MPhi).field_0x18) {
                  uVar12 = ~uVar14 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                *(ulonglong *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar14 * 8) =
                     CONCAT44((uint)((ulonglong)uVar3 >> 0x20) & uVar8,(uint)uVar3 & uVar7);
                pFVar4 = (param_3->AllocatorInstance).Data;
                if (((pFVar4 <= (FScriptContainerElement *)&local_88) &&
                    ((FScriptContainerElement *)&local_88 <
                     pFVar4 + (longlong)param_3->ArrayMax * 0xc)) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar13 = param_3->ArrayNum;
                if (iVar13 == param_3->ArrayMax) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_3->AllocatorInstance,&param_3->ArrayMax);
                }
                param_3->ArrayNum = iVar13 + 1;
                pFVar4 = (param_3->AllocatorInstance).Data;
                *(ulonglong *)(pFVar4 + (longlong)iVar13 * 0xc) = CONCAT44(iStack_84,local_88);
                *(int *)(pFVar4 + (longlong)iVar13 * 0xc + 8) = local_80;
              }
              else {
LAB_143bf70bd:
                if (bVar11) goto LAB_143bf70c6;
              }
              iVar16 = iVar16 + 1;
            } while (iVar16 < *(int *)&(this->MGrid).field_0x38);
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 < *(int *)&(this->MGrid).field_0x34);
      }
      local_98 = local_98 + 1;
    } while (local_98 < *(int *)&(this->MGrid).field_0x30);
  }
  return;
}

// ComputeDistancesNearZeroIsocontour @ 143bf72d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FLevelSet::ComputeDistancesNearZeroIsocontour
          (FLevelSet *this,FErrorReporter *param_1,TParticles<double,3> *param_2,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_3,
          FTriangleMesh *param_4,TArrayND<bool,3> *param_5,TArrayND<bool,3> *param_6,
          TArrayND<bool,3> *param_7,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_8)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  double *pdVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  code *pcVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *pTVar20;
  bool bVar21;
  undefined1 uVar22;
  uint uVar23;
  uint uVar24;
  TArrayND<bool,3> *pTVar25;
  TVector<double,3> *pTVar26;
  TVector<double,3> *pTVar27;
  uint uVar28;
  uint uVar29;
  undefined8 *puVar30;
  undefined1 *puVar31;
  longlong lVar32;
  longlong lVar33;
  FScriptContainerElement *pFVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  FTriangleMesh *pFVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  double dVar51;
  undefined1 auVar52 [16];
  double dVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined1 auStackY_2a8 [32];
  int local_278;
  undefined1 local_274;
  undefined1 local_273;
  undefined1 local_272;
  undefined1 local_271;
  TVector<int,3>_u_0 local_270;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  int local_250;
  int local_24c;
  FScriptContainerElement *local_248;
  TArrayND<bool,3> *local_240;
  TVector<int,3>_u_0 local_238;
  uint local_228;
  TArrayND<bool,3> *local_220;
  TParticles<double,3> *local_218;
  double local_210;
  double dStack_208;
  double local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  TArrayND<bool,3> *local_1c8;
  longlong local_1c0;
  FTriangleMesh *local_1b8;
  TVector<int,3>_u_0 local_1b0;
  TVector<int,3>_u_0 local_1a4;
  TVector<int,3>_u_0 local_198;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *local_188;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined1 local_118 [40];
  double dStack_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  puVar30 = *(undefined8 **)&(this->MPhi).field_0x10;
  iVar38 = *(int *)&(this->MPhi).field_0x18;
  local_1b8 = param_4;
  puVar1 = puVar30 + iVar38;
  local_240 = param_6;
  local_180 = param_8;
  local_220 = param_5;
  local_1c8 = param_7;
  local_218 = param_2;
  local_188 = param_3;
  while( true ) {
    if (*(int *)&(this->MPhi).field_0x18 != iVar38) {
      local_274 = 0;
      `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_274);
    }
    if (puVar30 == puVar1) break;
    *puVar30 = 0x47efffffe0000000;
    puVar30 = puVar30 + 1;
  }
  puVar31 = *(undefined1 **)&param_5->field_0x10;
  iVar38 = *(int *)&param_5->field_0x18;
  puVar2 = puVar31 + iVar38;
  while( true ) {
    if (*(int *)&param_5->field_0x18 != iVar38) {
      local_273 = 0;
      `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_273);
    }
    if (puVar31 == puVar2) break;
    *puVar31 = 0;
    puVar31 = puVar31 + 1;
  }
  puVar31 = *(undefined1 **)&local_240->field_0x10;
  iVar38 = *(int *)&local_240->field_0x18;
  puVar2 = puVar31 + iVar38;
  pTVar25 = local_240;
  while( true ) {
    if (*(int *)&pTVar25->field_0x18 != iVar38) {
      local_272 = 0;
      `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_272);
      pTVar25 = local_240;
    }
    if (puVar31 == puVar2) break;
    *puVar31 = 0;
    puVar31 = puVar31 + 1;
  }
  puVar31 = *(undefined1 **)&param_7->field_0x10;
  iVar38 = *(int *)&param_7->field_0x18;
  puVar2 = puVar31 + iVar38;
  while( true ) {
    if (*(int *)&param_7->field_0x18 != iVar38) {
      local_271 = 0;
      `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_271);
    }
    pFVar42 = local_1b8;
    if (puVar31 == puVar2) break;
    *puVar31 = 0;
    puVar31 = puVar31 + 1;
  }
  if ((local_1b8->MElements).ArrayNum < 1) {
    uVar5 = *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8;
    *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin =
         *(undefined8 *)&(this->MLocalBoundingBox).MMin;
    *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin.field_0x8 = uVar5;
    *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin.field_0x10 =
         *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10;
    uVar5 = *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8;
    *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax =
         *(undefined8 *)&(this->MLocalBoundingBox).MMax;
    *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax.field_0x8 = uVar5;
    uVar5 = *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10;
    uVar47 = (undefined4)uVar5;
    uVar48 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  else {
    pTVar26 = TParticles<double,3>::GetX
                        (param_2,*(int *)(local_1b8->MElements).AllocatorInstance.Data);
    if (((pFVar42->MElements).ArrayNum < 1) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar14 = (code *)swi(3);
      uVar22 = (*pcVar14)();
      return (bool)uVar22;
    }
    pTVar27 = TParticles<double,3>::GetX
                        (param_2,*(int *)(pFVar42->MElements).AllocatorInstance.Data);
    local_130 = *(undefined8 *)pTVar26;
    uStack_128 = *(undefined8 *)&pTVar26->field_0x8;
    local_120 = *(undefined8 *)&pTVar26->field_0x10;
    uVar47 = (undefined4)local_120;
    uVar48 = (undefined4)((ulonglong)local_120 >> 0x20);
    local_148 = *(undefined8 *)pTVar27;
    uStack_140 = *(undefined8 *)&pTVar27->field_0x8;
    local_138 = *(undefined8 *)&pTVar27->field_0x10;
    *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin = local_148;
    *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin.field_0x8 = uStack_140;
    *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin.field_0x10 = local_138;
    *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax = local_130;
    *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax.field_0x8 = uStack_128;
  }
  *(ulonglong *)&(this->MOriginalLocalBoundingBox).MMax.field_0x10 = CONCAT44(uVar48,uVar47);
  dVar11 = __real_3fe000d1c0000000;
  dVar10 = __real_3fe0000000000000;
  iVar38 = (pFVar42->MElements).ArrayNum;
  local_228 = 0;
  if (0 < iVar38) {
    local_1c0 = 0;
    do {
      lVar13 = local_1c0;
      uVar24 = local_228;
      uVar28 = ~local_228;
      uVar29 = 0;
      if ((int)local_228 < iVar38) {
        uVar29 = uVar28 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar14 = (code *)swi(3);
        uVar22 = (*pcVar14)();
        return (bool)uVar22;
      }
      pTVar20 = local_188;
      pFVar34 = (pFVar42->MElements).AllocatorInstance.Data + lVar13 * 0xc;
      uVar29 = 0;
      if ((int)uVar24 < local_188->ArrayNum) {
        uVar29 = uVar28 >> 0x1f;
      }
      local_248 = pFVar34;
      if ((uVar29 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar14 = (code *)swi(3);
        uVar22 = (*pcVar14)();
        return (bool)uVar22;
      }
      uVar24 = *(uint *)&pFVar34->field_0x0;
      pFVar12 = (pTVar20->AllocatorInstance).Data;
      uVar29 = 0;
      if ((int)uVar24 < *(int *)&(param_2->MX).field_0x10) {
        uVar29 = ~uVar24 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar14 = (code *)swi(3);
        uVar22 = (*pcVar14)();
        return (bool)uVar22;
      }
      lVar33 = *(longlong *)&(param_2->MX).field_0x8;
      FImplicitObject::FImplicitObject((FImplicitObject *)local_118,0,'\x02');
      local_118._0_8_ = &___7__TPlane_N_02_Chaos__6B_;
      pdVar3 = (double *)(lVar33 + (longlong)(int)uVar24 * 0x18);
      local_118._32_8_ = *pdVar3;
      dStack_f0 = pdVar3[1];
      local_e8 = *(double *)(lVar33 + 0x10 + (longlong)(int)uVar24 * 0x18);
      pFVar4 = pFVar12 + lVar13 * 0x18;
      local_e0 = *(double *)pFVar4;
      dStack_d8 = *(double *)(pFVar4 + 8);
      local_d0 = *(double *)(pFVar12 + lVar13 * 0x18 + 0x10);
      uVar24 = *(uint *)&pFVar34->field_0x0;
      uVar29 = 0;
      if ((int)uVar24 < *(int *)&(param_2->MX).field_0x10) {
        uVar29 = ~uVar24 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar14 = (code *)swi(3);
        uVar22 = (*pcVar14)();
        return (bool)uVar22;
      }
      uVar29 = *(uint *)&pFVar34->field_0x0;
      lVar13 = *(longlong *)&(param_2->MX).field_0x8;
      uVar28 = 0;
      if ((int)uVar29 < *(int *)&(param_2->MX).field_0x10) {
        uVar28 = ~uVar29 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar14 = (code *)swi(3);
        uVar22 = (*pcVar14)();
        return (bool)uVar22;
      }
      lVar33 = *(longlong *)&(param_2->MX).field_0x8;
      uVar28 = *(uint *)(pFVar34 + 4);
      lVar32 = (longlong)(int)uVar28;
      pdVar3 = (double *)(lVar33 + (longlong)(int)uVar29 * 0x18);
      local_210 = *pdVar3;
      dStack_208 = pdVar3[1];
      local_200 = *(double *)(lVar33 + 0x10 + (longlong)(int)uVar29 * 0x18);
      local_1e8 = *(double *)(lVar13 + 0x10 + (longlong)(int)uVar24 * 0x18);
      uVar29 = 0;
      if ((int)uVar28 < *(int *)&(param_2->MX).field_0x10) {
        uVar29 = ~uVar28 >> 0x1f;
      }
      pdVar3 = (double *)(lVar13 + (longlong)(int)uVar24 * 0x18);
      local_1f8 = *pdVar3;
      dStack_1f0 = pdVar3[1];
      if ((uVar29 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar14 = (code *)swi(3);
        uVar22 = (*pcVar14)();
        return (bool)uVar22;
      }
      lVar13 = *(longlong *)&(param_2->MX).field_0x8;
      uVar47 = SUB84(local_200,0);
      uVar48 = (undefined4)((ulonglong)local_200 >> 0x20);
      dVar6 = *(double *)(lVar13 + 8 + lVar32 * 0x18);
      dVar53 = dStack_208;
      if (dVar6 <= dStack_208) {
        dVar53 = dVar6;
      }
      dVar6 = *(double *)(lVar13 + 0x10 + lVar32 * 0x18);
      if (dVar6 <= local_200) {
        uVar47 = SUB84(dVar6,0);
        uVar48 = (undefined4)((ulonglong)dVar6 >> 0x20);
      }
      dVar6 = *(double *)(lVar13 + lVar32 * 0x18);
      dVar51 = local_1f8;
      if (local_1f8 <= dVar6) {
        dVar51 = dVar6;
      }
      dVar6 = *(double *)(lVar13 + 8 + lVar32 * 0x18);
      dVar8 = dStack_1f0;
      if (dStack_1f0 <= dVar6) {
        dVar8 = dVar6;
      }
      dVar6 = *(double *)(lVar13 + 0x10 + lVar32 * 0x18);
      dVar9 = local_1e8;
      if (local_1e8 <= dVar6) {
        dVar9 = dVar6;
      }
      uVar24 = *(uint *)(pFVar34 + 8);
      lVar33 = (longlong)(int)uVar24;
      uVar54 = SUB84(local_210,0);
      uVar55 = (undefined4)((ulonglong)local_210 >> 0x20);
      dVar6 = *(double *)(lVar13 + lVar32 * 0x18);
      if (dVar6 <= local_210) {
        uVar54 = SUB84(dVar6,0);
        uVar55 = (undefined4)((ulonglong)dVar6 >> 0x20);
      }
      local_200 = (double)CONCAT44(uVar48,uVar47);
      uVar29 = 0;
      if ((int)uVar24 < *(int *)&(param_2->MX).field_0x10) {
        uVar29 = ~uVar24 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (dStack_208 = dVar53, local_1f8 = dVar51, dStack_1f0 = dVar8, local_1e8 = dVar9,
         bVar21 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar14 = (code *)swi(3);
        uVar22 = (*pcVar14)();
        return (bool)uVar22;
      }
      lVar13 = *(longlong *)&(param_2->MX).field_0x8;
      dVar6 = *(double *)&(this->MOriginalLocalBoundingBox).MMin.field_0x8;
      uVar44 = SUB84(dVar6,0);
      uVar46 = (undefined4)((ulonglong)dVar6 >> 0x20);
      dVar7 = *(double *)(lVar13 + lVar33 * 0x18);
      if (dVar7 <= (double)CONCAT44(uVar55,uVar54)) {
        uVar54 = SUB84(dVar7,0);
        uVar55 = (undefined4)((ulonglong)dVar7 >> 0x20);
      }
      dVar7 = *(double *)(lVar13 + 0x10 + lVar33 * 0x18);
      if (dVar7 <= (double)CONCAT44(uVar48,uVar47)) {
        uVar47 = SUB84(dVar7,0);
        uVar48 = (undefined4)((ulonglong)dVar7 >> 0x20);
      }
      dVar7 = *(double *)(lVar13 + 8 + lVar33 * 0x18);
      dStack_208 = dVar53;
      if (dVar7 <= dVar53) {
        dStack_208 = dVar7;
      }
      dVar53 = *(double *)(lVar13 + 0x10 + lVar33 * 0x18);
      local_1e8 = dVar9;
      if (dVar9 <= dVar53) {
        local_1e8 = dVar53;
      }
      dVar53 = *(double *)(lVar13 + 8 + lVar33 * 0x18);
      dStack_1f0 = dVar8;
      if (dVar8 <= dVar53) {
        dStack_1f0 = dVar53;
      }
      dVar53 = *(double *)(lVar13 + lVar33 * 0x18);
      local_1f8 = dVar51;
      if (dVar51 <= dVar53) {
        local_1f8 = dVar53;
      }
      local_210 = (double)CONCAT44(uVar55,uVar54);
      dVar53 = *(double *)&(this->MOriginalLocalBoundingBox).MMin;
      uVar43 = uVar54;
      uVar45 = uVar55;
      if (dVar53 <= (double)CONCAT44(uVar55,uVar54)) {
        uVar43 = SUB84(dVar53,0);
        uVar45 = (undefined4)((ulonglong)dVar53 >> 0x20);
      }
      if (dStack_208 <= dVar6) {
        uVar44 = SUB84(dStack_208,0);
        uVar46 = (undefined4)((ulonglong)dStack_208 >> 0x20);
      }
      local_200 = (double)CONCAT44(uVar48,uVar47);
      dVar6 = *(double *)&(this->MOriginalLocalBoundingBox).MMin.field_0x10;
      uVar49 = uVar47;
      uVar50 = uVar48;
      if (dVar6 <= (double)CONCAT44(uVar48,uVar47)) {
        uVar49 = SUB84(dVar6,0);
        uVar50 = (undefined4)((ulonglong)dVar6 >> 0x20);
      }
      *(ulonglong *)&(this->MOriginalLocalBoundingBox).MMin = CONCAT44(uVar45,uVar43);
      *(ulonglong *)&(this->MOriginalLocalBoundingBox).MMin.field_0x8 = CONCAT44(uVar46,uVar44);
      *(ulonglong *)&(this->MOriginalLocalBoundingBox).MMin.field_0x10 = CONCAT44(uVar50,uVar49);
      dVar6 = *(double *)&(this->MOriginalLocalBoundingBox).MMax.field_0x10;
      uVar44 = SUB84(dVar6,0);
      uVar46 = (undefined4)((ulonglong)dVar6 >> 0x20);
      dVar53 = *(double *)&(this->MOriginalLocalBoundingBox).MMax;
      dVar51 = local_1f8;
      if (local_1f8 <= dVar53) {
        dVar51 = dVar53;
      }
      dVar53 = *(double *)&(this->MOriginalLocalBoundingBox).MMax.field_0x8;
      dVar8 = dStack_1f0;
      if (dStack_1f0 <= dVar53) {
        dVar8 = dVar53;
      }
      if (dVar6 <= local_1e8) {
        uVar44 = SUB84(local_1e8,0);
        uVar46 = (undefined4)((ulonglong)local_1e8 >> 0x20);
      }
      *(double *)&(this->MOriginalLocalBoundingBox).MMax = dVar51;
      *(double *)&(this->MOriginalLocalBoundingBox).MMax.field_0x8 = dVar8;
      *(ulonglong *)&(this->MOriginalLocalBoundingBox).MMax.field_0x10 = CONCAT44(uVar46,uVar44);
      dVar6 = *(double *)&(this->MGrid).field_0x40;
      dVar53 = *(double *)&(this->MGrid).field_0x10;
      dVar51 = *(double *)&(this->MGrid).field_0x8;
      dVar8 = *(double *)&(this->MGrid).field_0x50;
      dVar9 = *(double *)&(this->MGrid).field_0x48;
      iVar35 = *(int *)&(this->MGrid).field_0x30;
      dVar7 = *(double *)&(this->MGrid).field_0x40 * dVar11;
      dVar17 = *(double *)&(this->MGrid).field_0x50 * dVar11;
      dVar16 = *(double *)&(this->MGrid).field_0x48 * dVar11;
      local_278 = (int)((((double)CONCAT44(uVar55,uVar54) - dVar7) - *(double *)&this->MGrid) /
                       dVar6);
      iVar38 = (int)(((dStack_208 - dVar16) - dVar51) / dVar9);
      local_24c = (int)((((double)CONCAT44(uVar48,uVar47) - dVar17) - dVar53) / dVar8);
      if (local_278 < iVar35) {
        if (local_278 < 0) {
          local_278 = 0;
        }
      }
      else {
        local_278 = iVar35 + -1;
      }
      iVar36 = *(int *)&(this->MGrid).field_0x34;
      if (iVar38 < iVar36) {
        if (iVar38 < 0) {
          iVar38 = 0;
        }
      }
      else {
        iVar38 = iVar36 + -1;
      }
      iVar40 = *(int *)&(this->MGrid).field_0x38;
      if (local_24c < iVar40) {
        if (local_24c < 0) {
          local_24c = 0;
        }
      }
      else {
        local_24c = iVar40 + -1;
      }
      local_250 = (int)(((dVar7 + local_1f8) - *(double *)&this->MGrid) / dVar6);
      local_254 = (int)(((dVar16 + dStack_1f0) - dVar51) / dVar9);
      local_258 = (int)(((dVar17 + local_1e8) - dVar53) / dVar8);
      if (local_250 < iVar35) {
        if (local_250 < 0) {
          local_250 = 0;
        }
      }
      else {
        local_250 = iVar35 + -1;
      }
      if (local_254 < iVar36) {
        if (local_254 < 0) {
          local_254 = 0;
        }
      }
      else {
        local_254 = iVar36 + -1;
      }
      if (local_258 < iVar40) {
        if (local_258 < 0) {
          local_258 = 0;
        }
      }
      else {
        local_258 = iVar40 + -1;
      }
      local_260 = iVar38;
      local_25c = local_278;
      iVar35 = local_24c;
      iVar36 = local_250;
      iVar40 = local_254;
      iVar39 = local_258;
      if (local_278 <= local_250) {
        do {
          iVar37 = iVar38;
          if (iVar38 <= iVar40) {
            do {
              iVar36 = iVar35;
              if (iVar35 <= iVar39) {
                do {
                  uVar24 = *(uint *)(pFVar34 + 8);
                  uVar29 = 0;
                  if ((int)uVar24 < *(int *)&(param_2->MX).field_0x10) {
                    uVar29 = ~uVar24 >> 0x1f;
                  }
                  auVar52._0_8_ =
                       ((double)local_278 + dVar10) * *(double *)&(this->MGrid).field_0x40 +
                       *(double *)&this->MGrid;
                  auVar52._8_8_ = 0;
                  dVar6 = ((double)iVar38 + dVar10) * *(double *)&(this->MGrid).field_0x48 +
                          *(double *)&(this->MGrid).field_0x8;
                  dVar53 = ((double)iVar35 + dVar10) * *(double *)&(this->MGrid).field_0x50 +
                           *(double *)&(this->MGrid).field_0x10;
                  local_238._s_0.X = local_278;
                  local_238._s_0.Y = iVar38;
                  local_238._s_0.Z = iVar35;
                  local_1e0 = auVar52._0_8_;
                  local_1d8 = dVar6;
                  local_1d0 = dVar53;
                  if ((uVar29 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar14 = (code *)swi(3);
                    uVar22 = (*pcVar14)();
                    return (bool)uVar22;
                  }
                  lVar13 = *(longlong *)&(param_2->MX).field_0x8;
                  uVar29 = *(uint *)(pFVar34 + 4);
                  uVar28 = 0;
                  if ((int)uVar29 < *(int *)&(param_2->MX).field_0x10) {
                    uVar28 = ~uVar29 >> 0x1f;
                  }
                  if ((uVar28 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar14 = (code *)swi(3);
                    uVar22 = (*pcVar14)();
                    return (bool)uVar22;
                  }
                  lVar33 = *(longlong *)&(param_2->MX).field_0x8;
                  uVar28 = *(uint *)&local_248->field_0x0;
                  uVar23 = 0;
                  if ((int)uVar28 < *(int *)&(param_2->MX).field_0x10) {
                    uVar23 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar14 = (code *)swi(3);
                    uVar22 = (*pcVar14)();
                    return (bool)uVar22;
                  }
                  dVar51 = (auVar52._0_8_ - (double)local_118._32_8_) * local_e0 +
                           (dVar6 - dStack_f0) * dStack_d8 + (dVar53 - local_e8) * local_d0;
                  local_160 = auVar52._0_8_ - dVar51 * local_e0;
                  local_158 = dVar6 - dVar51 * dStack_d8;
                  local_150 = dVar53 - dVar51 * local_d0;
                  FindClosestPointOnTriangle<double,3>
                            ((TVector<double,3> *)&local_178,(TVector<double,3> *)&local_160,
                             (TVector<double,3> *)
                             (*(longlong *)&(param_2->MX).field_0x8 + (longlong)(int)uVar28 * 0x18),
                             (TVector<double,3> *)(lVar33 + (longlong)(int)uVar29 * 0x18),
                             (TVector<double,3> *)(lVar13 + (longlong)(int)uVar24 * 0x18),
                             (TVector<double,3> *)&local_1e0);
                  uVar29 = (local_238._s_0.X * *(int *)&(this->MPhi).field_0x4 + local_238._s_0.Y) *
                           *(int *)&(this->MPhi).field_0x8 + local_238._s_0.Z;
                  uVar24 = 0;
                  if ((int)uVar29 < *(int *)&(this->MPhi).field_0x18) {
                    uVar24 = ~uVar29 >> 0x1f;
                  }
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ =
                       (local_178 - auVar52._0_8_) * (local_178 - auVar52._0_8_) +
                       (local_170 - dVar6) * (local_170 - dVar6) +
                       (local_168 - dVar53) * (local_168 - dVar53);
                  auVar52 = sqrtpd(auVar52,auVar15);
                  if ((uVar24 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar14 = (code *)swi(3);
                    uVar22 = (*pcVar14)();
                    return (bool)uVar22;
                  }
                  if (auVar52._0_8_ <
                      *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar29 * 8)
                     ) {
                    uVar29 = (local_238._s_0.X * *(int *)&(this->MPhi).field_0x4 + local_238._s_0.Y)
                             * *(int *)&(this->MPhi).field_0x8 + local_238._s_0.Z;
                    uVar24 = 0;
                    if ((int)uVar29 < *(int *)&(this->MPhi).field_0x18) {
                      uVar24 = ~uVar29 >> 0x1f;
                    }
                    if ((uVar24 == 0) &&
                       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar21)) {
                      pcVar14 = (code *)swi(3);
                      uVar22 = (*pcVar14)();
                      return (bool)uVar22;
                    }
                    *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar29 * 8) =
                         auVar52._0_8_;
                    TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>::
                    AddUniqueImpl<Chaos::TVector<int,3>_const_&>
                              (local_180,(TVector<int,3> *)&local_238._s_0);
                  }
                  iVar35 = iVar35 + 1;
                  pFVar34 = local_248;
                  iVar36 = local_24c;
                  iVar40 = local_254;
                  iVar39 = local_258;
                } while (iVar35 <= local_258);
              }
              iVar35 = iVar36;
              iVar38 = iVar38 + 1;
              iVar37 = local_260;
              iVar36 = local_250;
            } while (iVar38 <= iVar40);
          }
          iVar38 = iVar37;
          local_278 = local_278 + 1;
        } while (local_278 <= iVar36);
      }
      iVar37 = local_25c + 1;
      if (iVar37 <= iVar36) {
        iVar38 = iVar38 + 1;
        local_260 = iVar38;
        do {
          if (iVar38 <= iVar40) {
            iVar35 = iVar35 + 1;
            iVar41 = iVar38;
            local_25c = iVar35;
            do {
              iVar38 = iVar35;
              if (iVar35 <= iVar39) {
                do {
                  uVar29 = (iVar37 * *(int *)&local_220->field_0x4 + iVar41) *
                           *(int *)&local_220->field_0x8 + iVar35;
                  uVar24 = 0;
                  if ((int)uVar29 < *(int *)&local_220->field_0x18) {
                    uVar24 = ~uVar29 >> 0x1f;
                  }
                  local_270._s_0.X = iVar37;
                  local_270._s_0.Y = iVar41;
                  local_270._s_0.Z = iVar35;
                  if ((uVar24 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar14 = (code *)swi(3);
                    uVar22 = (*pcVar14)();
                    return (bool)uVar22;
                  }
                  if (*(char *)((longlong)(int)uVar29 + *(longlong *)&local_220->field_0x10) == '\0'
                     ) {
                    local_1b0._s_0.X = iVar37 + -1;
                    local_1b0._s_0.Y = iVar41;
                    local_1b0._s_0.Z = iVar35;
                    bVar21 = IsIntersectingWithTriangle
                                       (this,local_218,(TVector<int,3> *)local_248,
                                        (TPlane<double,3> *)local_118,
                                        (TVector<int,3> *)&local_270._s_0,
                                        (TVector<int,3> *)&local_1b0._s_0);
                    if (bVar21) {
                      uVar29 = (iVar37 * *(int *)&local_220->field_0x4 + iVar41) *
                               *(int *)&local_220->field_0x8 + iVar35;
                      uVar24 = 0;
                      if ((int)uVar29 < *(int *)&local_220->field_0x18) {
                        uVar24 = ~uVar29 >> 0x1f;
                      }
                      if ((uVar24 == 0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar21)) {
                        pcVar14 = (code *)swi(3);
                        uVar22 = (*pcVar14)();
                        return (bool)uVar22;
                      }
                      *(undefined1 *)((longlong)(int)uVar29 + *(longlong *)&local_220->field_0x10) =
                           1;
                    }
                  }
                  uVar29 = (iVar37 * *(int *)&local_240->field_0x4 + iVar41) *
                           *(int *)&local_240->field_0x8 + iVar35;
                  uVar24 = 0;
                  if ((int)uVar29 < *(int *)&local_240->field_0x18) {
                    uVar24 = ~uVar29 >> 0x1f;
                  }
                  if ((uVar24 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar14 = (code *)swi(3);
                    uVar22 = (*pcVar14)();
                    return (bool)uVar22;
                  }
                  if (*(char *)((longlong)(int)uVar29 + *(longlong *)&local_240->field_0x10) == '\0'
                     ) {
                    local_1a4._s_0.Y = iVar41 + -1;
                    local_1a4._s_0.X = iVar37;
                    local_1a4._s_0.Z = iVar35;
                    bVar21 = IsIntersectingWithTriangle
                                       (this,local_218,(TVector<int,3> *)local_248,
                                        (TPlane<double,3> *)local_118,
                                        (TVector<int,3> *)&local_270._s_0,
                                        (TVector<int,3> *)&local_1a4._s_0);
                    if (bVar21) {
                      uVar29 = (iVar37 * *(int *)&local_240->field_0x4 + iVar41) *
                               *(int *)&local_240->field_0x8 + iVar35;
                      uVar24 = 0;
                      if ((int)uVar29 < *(int *)&local_240->field_0x18) {
                        uVar24 = ~uVar29 >> 0x1f;
                      }
                      if ((uVar24 == 0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar21)) {
                        pcVar14 = (code *)swi(3);
                        uVar22 = (*pcVar14)();
                        return (bool)uVar22;
                      }
                      *(undefined1 *)((longlong)(int)uVar29 + *(longlong *)&local_240->field_0x10) =
                           1;
                    }
                  }
                  uVar29 = (iVar37 * *(int *)&local_1c8->field_0x4 + iVar41) *
                           *(int *)&local_1c8->field_0x8 + iVar35;
                  uVar24 = 0;
                  if ((int)uVar29 < *(int *)&local_1c8->field_0x18) {
                    uVar24 = ~uVar29 >> 0x1f;
                  }
                  if ((uVar24 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar14 = (code *)swi(3);
                    uVar22 = (*pcVar14)();
                    return (bool)uVar22;
                  }
                  pTVar25 = local_1c8;
                  if (*(char *)((longlong)(int)uVar29 + *(longlong *)&local_1c8->field_0x10) == '\0'
                     ) {
                    local_198._s_0.Z = iVar35 + -1;
                    local_198._s_0.X = iVar37;
                    local_198._s_0.Y = iVar41;
                    bVar21 = IsIntersectingWithTriangle
                                       (this,local_218,(TVector<int,3> *)local_248,
                                        (TPlane<double,3> *)local_118,
                                        (TVector<int,3> *)&local_270._s_0,
                                        (TVector<int,3> *)&local_198._s_0);
                    if (bVar21) {
                      uVar29 = (iVar37 * *(int *)&pTVar25->field_0x4 + iVar41) *
                               *(int *)&pTVar25->field_0x8 + iVar35;
                      uVar24 = 0;
                      if ((int)uVar29 < *(int *)&pTVar25->field_0x18) {
                        uVar24 = ~uVar29 >> 0x1f;
                      }
                      if ((uVar24 == 0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar21)) {
                        pcVar14 = (code *)swi(3);
                        uVar22 = (*pcVar14)();
                        return (bool)uVar22;
                      }
                      *(undefined1 *)((longlong)(int)uVar29 + *(longlong *)&pTVar25->field_0x10) = 1
                      ;
                    }
                  }
                  iVar35 = iVar35 + 1;
                  iVar38 = local_25c;
                  iVar40 = local_254;
                  iVar39 = local_258;
                } while (iVar35 <= local_258);
              }
              iVar35 = iVar38;
              iVar41 = iVar41 + 1;
              iVar38 = local_260;
              iVar36 = local_250;
            } while (iVar41 <= iVar40);
          }
          iVar37 = iVar37 + 1;
          param_2 = local_218;
          iVar35 = local_24c;
        } while (iVar37 <= iVar36);
      }
      local_118._0_8_ = &___7__TPlane_N_02_Chaos__6B_;
      FImplicitObject::~FImplicitObject((FImplicitObject *)local_118);
      local_228 = local_228 + 1;
      local_1c0 = local_1c0 + 1;
      iVar38 = (local_1b8->MElements).ArrayNum;
      pFVar42 = local_1b8;
    } while ((int)local_228 < iVar38);
  }
  uVar19 = LevelSetBoundsPadding.field0_0x0._s_0.Z;
  uVar18 = LevelSetBoundsPadding.field0_0x0._s_0.Y;
  uVar5 = LevelSetBoundsPadding.field0_0x0._s_0.X;
  *(double *)&(this->MOriginalLocalBoundingBox).MMin =
       LevelSetBoundsPadding.field0_0x0._s_0.X * *(double *)&(this->MOriginalLocalBoundingBox).MMin;
  *(double *)&(this->MOriginalLocalBoundingBox).MMin.field_0x8 =
       (double)uVar18 * *(double *)&(this->MOriginalLocalBoundingBox).MMin.field_0x8;
  *(double *)&(this->MOriginalLocalBoundingBox).MMin.field_0x10 =
       (double)uVar19 * *(double *)&(this->MOriginalLocalBoundingBox).MMin.field_0x10;
  dVar10 = *(double *)&(this->MOriginalLocalBoundingBox).MMax.field_0x8;
  dVar11 = *(double *)&(this->MOriginalLocalBoundingBox).MMax.field_0x10;
  *(double *)&(this->MOriginalLocalBoundingBox).MMax =
       (double)uVar5 * *(double *)&(this->MOriginalLocalBoundingBox).MMax;
  *(double *)&(this->MOriginalLocalBoundingBox).MMax.field_0x8 = (double)uVar18 * dVar10;
  *(double *)&(this->MOriginalLocalBoundingBox).MMax.field_0x10 = (double)uVar19 * dVar11;
  return true;
}

// ComputeLevelSetError @ 143bf84a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
Chaos::FLevelSet::ComputeLevelSetError
          (FLevelSet *this,TParticles<double,3> *param_1,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_2,
          FTriangleMesh *param_3,double *param_4,double *param_5)

{
  undefined1 *puVar1;
  TVector<double,3> *pTVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  double *pdVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  double dVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  uint uVar21;
  uint uVar22;
  double dVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined4 uVar26;
  uint uVar27;
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
  double local_res8;
  double local_res10;
  ForAnyElementType local_278;
  int local_270 [2];
  undefined1 local_268 [16];
  double local_258;
  ForAnyElementType local_250;
  int local_248 [2];
  undefined8 local_240;
  undefined8 uStack_238;
  double local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  double local_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  double local_200;
  double local_1f8;
  double dStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double local_1d0;
  undefined8 uStack_1c8;
  double local_1c0;
  double local_1b8 [6];
  TArrayView<std::nullptr_t,int> local_188;
  code *local_178;
  FTriangleMesh **local_170;
  double local_168;
  double local_160;
  double local_158;
  FTriangleMesh *local_150;
  TParticles<double,3> *local_148;
  FLevelSet *local_140;
  double *local_138;
  ForAnyElementType *local_130;
  ForAnyElementType *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  double local_108;
  double dStack_100;
  undefined8 local_f8;
  
  iVar11 = (param_3->MElements).ArrayNum;
  uVar16 = 0;
  local_278.Data = (FScriptContainerElement *)0x0;
  local_270[0] = 0;
  local_270[1] = 0;
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,iVar11,&local_278,local_270,local_270 + 1);
  memset(local_278.Data + (longlong)iVar10 * 8,0,(longlong)iVar11 << 3);
  iVar11 = (param_3->MElements).ArrayNum;
  local_250.Data = (FScriptContainerElement *)0x0;
  local_248[0] = 0;
  local_248[1] = 0;
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,iVar11,&local_250,local_248,local_248 + 1);
  memset(local_250.Data + (longlong)iVar10 * 8,0,(longlong)iVar11 << 3);
  dVar18 = *(double *)&(this->MGrid).field_0x48;
  local_res10 = *(double *)&(this->MGrid).field_0x40;
  if (((local_res10 <= dVar18) ||
      (puVar1 = &(this->MGrid).field_0x50,
      local_res10 < *(double *)puVar1 || local_res10 == *(double *)puVar1)) &&
     (local_res10 = *(double *)&(this->MGrid).field_0x50, local_res10 <= dVar18)) {
    local_res10 = dVar18;
  }
  local_138 = &local_res10;
  local_130 = &local_278;
  local_128 = &local_250;
  local_178 = UE::Core::Private::Function::
              TFunctionRefCaller<`Chaos::FLevelSet::ComputeLevelSetError'::__l2::<lambda_1>,void,int>
              ::Call;
  local_170 = &local_150;
  local_188.DataPtr = (void **)0x0;
  local_188.ArrayNum = 0;
  local_150 = param_3;
  local_148 = param_1;
  local_140 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(param_3->MElements).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_178,local_res8._0_1_,None,&local_188);
  uVar24 = (undefined4)__real_c7efffffe0000000;
  uVar26 = (undefined4)((ulonglong)__real_c7efffffe0000000 >> 0x20);
  dVar6 = 0.0;
  dVar18 = 0.0;
  uVar13 = uVar16;
  uVar15 = uVar16;
  uVar17 = uVar16;
  if (0 < (param_3->MElements).ArrayNum) {
    do {
      uVar21 = (uint)uVar13;
      uVar14 = 0;
      if ((int)uVar21 < local_270[0]) {
        uVar14 = ~uVar21 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        dVar18 = (double)(*pcVar3)();
        return dVar18;
      }
      uVar14 = 0;
      if ((double)CONCAT44(uVar26,uVar24) < *(double *)(local_278.Data + uVar17)) {
        uVar22 = uVar14;
        if ((int)uVar21 < local_270[0]) {
          uVar22 = ~uVar21 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          dVar18 = (double)(*pcVar3)();
          return dVar18;
        }
        uVar24 = (undefined4)*(undefined8 *)(local_278.Data + uVar15 * 8);
        uVar26 = (undefined4)((ulonglong)*(undefined8 *)(local_278.Data + uVar15 * 8) >> 0x20);
      }
      uVar22 = uVar14;
      if ((int)uVar21 < local_270[0]) {
        uVar22 = ~uVar21 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        dVar18 = (double)(*pcVar3)();
        return dVar18;
      }
      FVar8.Data = local_278.Data;
      uVar22 = uVar14;
      if ((int)uVar21 < local_248[0]) {
        uVar22 = ~uVar21 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        dVar18 = (double)(*pcVar3)();
        return dVar18;
      }
      if ((int)uVar21 < local_248[0]) {
        uVar14 = ~uVar21 >> 0x1f;
      }
      dVar6 = dVar6 + *(double *)(local_250.Data + uVar15 * 8) *
                      *(double *)(FVar8.Data + uVar15 * 8);
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        dVar18 = (double)(*pcVar3)();
        return dVar18;
      }
      dVar23 = __real_3ff0000000000000;
      dVar18 = dVar18 + *(double *)(local_250.Data + uVar15 * 8);
      uVar13 = (ulonglong)(uVar21 + 1);
      uVar15 = uVar15 + 1;
      uVar17 = uVar17 + 8;
    } while ((int)(uVar21 + 1) < (param_3->MElements).ArrayNum);
    if ((__real_3ee4f8b588e368f1 <= dVar18) &&
       (dVar5 = ((*(double *)&(this->MLocalBoundingBox).MMax.field_0x8 -
                 *(double *)&(this->MLocalBoundingBox).MMin.field_0x8) +
                 (*(double *)&(this->MLocalBoundingBox).MMax -
                 *(double *)&(this->MLocalBoundingBox).MMin) +
                (*(double *)&(this->MLocalBoundingBox).MMax.field_0x10 -
                *(double *)&(this->MLocalBoundingBox).MMin.field_0x10)) * __real_3fd5555555555555,
       __real_3ee4f8b588e368f1 <= dVar5)) {
      dVar6 = dVar6 / (dVar18 * dVar5);
      *param_5 = (double)CONCAT44(uVar26,uVar24) / dVar5;
      uVar24 = *(undefined4 *)&(this->MLocalBoundingBox).MMin;
      uVar26 = *(undefined4 *)&(this->MLocalBoundingBox).MMin.field_0x4;
      uVar30 = *(undefined4 *)&(this->MLocalBoundingBox).MMin.field_0x8;
      uVar31 = *(undefined4 *)&(this->MLocalBoundingBox).MMin.field_0xc;
      pTVar2 = &(this->MLocalBoundingBox).MMax;
      uVar28 = *(undefined4 *)pTVar2;
      uVar29 = *(undefined4 *)&(this->MLocalBoundingBox).MMax.field_0x4;
      local_res8 = *(double *)pTVar2;
      uVar34 = *(undefined4 *)&(this->MLocalBoundingBox).MMax.field_0x8;
      uVar35 = *(undefined4 *)&(this->MLocalBoundingBox).MMax.field_0xc;
      local_218 = *(double *)&(this->MLocalBoundingBox).MMin.field_0x10;
      local_200 = *(double *)&(this->MLocalBoundingBox).MMax.field_0x10;
      local_1f8 = ___xmm_00000000000000003ff0000000000000;
      dStack_1f0 = _UNK_150689518;
      uVar13 = uVar16;
      uVar32 = uVar28;
      uVar33 = uVar29;
      uVar36 = uVar30;
      uVar37 = uVar31;
      uVar38 = uVar34;
      uVar39 = uVar35;
      uVar40 = uVar24;
      uVar41 = uVar26;
      local_228 = uVar24;
      uStack_224 = uVar26;
      uStack_220 = uVar30;
      uStack_21c = uVar31;
      local_210 = uVar28;
      uStack_20c = uVar29;
      uStack_208 = uVar34;
      uStack_204 = uVar35;
      do {
        uVar14 = (uint)uVar13;
        if (uVar14 < 4) {
          local_230 = local_218;
          local_240 = (double)CONCAT44(uVar26,uVar24);
          uStack_238 = (double)CONCAT44(uVar31,uVar30);
          if (uVar14 == 1) {
            local_240 = (double)CONCAT44(uVar29,uVar28);
          }
          else if (uVar14 == 2) {
            uStack_238 = (double)CONCAT44(uVar39,uVar38);
          }
          else if (uVar14 == 3) {
            local_230 = local_200;
          }
        }
        else {
          local_230 = local_200;
          local_240 = (double)CONCAT44(uVar33,uVar32);
          uStack_238 = (double)CONCAT44(uVar35,uVar34);
          if (uVar14 == 5) {
            local_240 = (double)CONCAT44(uVar41,uVar40);
          }
          else if (uVar14 == 6) {
            uStack_238 = (double)CONCAT44(uVar37,uVar36);
          }
          else if (uVar14 == 7) {
            local_230 = local_218;
          }
        }
        local_1b8[0] = local_240 - (double)CONCAT44(uVar29,uVar28);
        local_1b8[4] = (double)CONCAT44(uVar37,uVar36) - uStack_238;
        local_1b8[5] = local_218 - local_230;
        local_1b8[3] = (double)CONCAT44(uVar41,uVar40) - local_240;
        local_1b8[2] = local_230 - local_200;
        local_1b8[1] = uStack_238 - (double)CONCAT44(uVar39,uVar38);
        uVar21 = (uint)__xmm_80000000000000008000000000000000;
        uVar22 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        uVar13 = uVar16;
        if (((((local_res8 < local_240) ||
              ((double)CONCAT44(uVar39,uVar38) <= uStack_238 &&
               uStack_238 != (double)CONCAT44(uVar39,uVar38))) || (local_200 < local_230)) ||
            ((local_240 < (double)CONCAT44(uVar41,uVar40) ||
             (uStack_238 < (double)CONCAT44(uVar37,uVar36))))) || (local_230 < local_218)) {
          do {
            dVar18 = *(double *)((longlong)local_1b8 + uVar13);
            if (dVar18 <= 0.0) {
              dVar18 = *(double *)((longlong)local_1b8 + uVar13 + 0x18);
              if (dVar18 <= 0.0) {
                dVar18 = 0.0;
              }
              else {
                dVar18 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar22,
                                          SUB84(dVar18,0) ^ uVar21);
              }
            }
            *(double *)(local_268 + uVar13) = dVar18;
            uVar13 = uVar13 + 8;
          } while ((longlong)uVar13 < 0x18);
          auVar20._0_8_ = local_258 * local_258;
          auVar20._8_8_ = 0;
          dVar18 = (double)local_268._0_8_ * (double)local_268._0_8_ +
                   (double)local_268._8_8_ * (double)local_268._8_8_ + auVar20._0_8_;
          if (__real_3f1a36e2e0000000 <= dVar18) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = dVar18;
            auVar20 = sqrtpd(auVar20,auVar4);
            dVar23 = __real_3ff0000000000000 / auVar20._0_8_;
            dVar18 = (double)local_268._0_8_ * dVar23;
            dVar5 = (double)local_268._8_8_ * dVar23;
            local_258 = local_258 * dVar23;
            local_268._8_8_ = dVar5;
            local_268._0_8_ = dVar18;
            if (auVar20._0_8_ < __real_3f1a36e2e0000000) goto LAB_143bf8c85;
          }
          else {
            local_258 = 0.0;
            local_268._8_8_ = dStack_1f0;
            local_268._0_8_ = local_1f8;
            dVar18 = local_1f8;
            dVar5 = dStack_1f0;
LAB_143bf8c85:
            if (dVar18 <= 0.0) {
              if (dVar18 < 0.0) {
                local_268._0_8_ = __real_bff0000000000000;
                dVar18 = __real_bff0000000000000;
              }
            }
            else {
              local_268._0_8_ = __real_3ff0000000000000;
              dVar18 = __real_3ff0000000000000;
            }
            if (dVar5 <= 0.0) {
              if (dVar5 < 0.0) {
                local_268._8_8_ = __real_bff0000000000000;
                dVar5 = __real_bff0000000000000;
              }
            }
            else {
              local_268._8_8_ = __real_3ff0000000000000;
              dVar5 = __real_3ff0000000000000;
            }
            if (local_258 <= 0.0) {
              if (local_258 < 0.0) {
                local_258 = __real_bff0000000000000;
              }
            }
            else {
              local_258 = __real_3ff0000000000000;
            }
            dVar23 = dVar18 * dVar18 + dVar5 * dVar5 + local_258 * local_258;
            if (__real_3e45798ee0000000 < dVar23) {
              dVar23 = __real_3ff0000000000000 / SQRT(dVar23);
              dVar18 = dVar18 * dVar23;
              dVar5 = dVar5 * dVar23;
              local_258 = local_258 * dVar23;
              local_268._8_8_ = dVar5;
              local_268._0_8_ = dVar18;
            }
          }
          local_res8 = (double)CONCAT44(uStack_20c,local_210);
          uVar24 = local_228;
          uVar26 = uStack_224;
          uVar30 = uStack_220;
          uVar31 = uStack_21c;
          uVar32 = local_210;
          uVar33 = uStack_20c;
          uVar34 = uStack_208;
          uVar35 = uStack_204;
          uVar36 = uStack_220;
          uVar37 = uStack_21c;
          uVar38 = uStack_208;
          uVar39 = uStack_204;
          uVar40 = local_228;
          uVar41 = uStack_224;
          dVar23 = __real_3ff0000000000000;
        }
        else {
          dVar18 = local_1b8[1];
          if (local_1b8[1] <= local_1b8[4]) {
            dVar18 = local_1b8[4];
          }
          dVar5 = local_1b8[0];
          if (local_1b8[0] <= local_1b8[3]) {
            dVar5 = local_1b8[3];
          }
          dVar7 = local_1b8[5];
          if (local_1b8[5] <= local_1b8[2]) {
            dVar7 = local_1b8[2];
          }
          if (dVar5 <= dVar18) {
            uVar13 = (ulonglong)((dVar18 <= dVar7) + 1);
          }
          else {
            uVar13 = 2;
            if (dVar7 < dVar5) {
              uVar13 = uVar16;
            }
          }
          iVar11 = (int)uVar13;
          if (local_1b8[uVar13] <= local_1b8[uVar13 + 3]) {
            if (iVar11 == 0) {
              pdVar12 = &local_108;
              local_f8 = 0;
              local_108 = local_1f8;
              dStack_100 = dStack_1f0;
            }
            else {
              if (iVar11 == 1) {
                local_1c0 = 0.0;
                local_1d0 = ___xmm_3ff00000000000000000000000000000;
                uStack_1c8 = _UNK_15061cbc8;
              }
              else {
                local_1c0 = dVar23;
                local_1d0 = 0.0;
                uStack_1c8 = 0;
              }
              pdVar12 = &local_1d0;
            }
            local_258 = (double)CONCAT44((uint)((ulonglong)pdVar12[2] >> 0x20) ^ uVar22,
                                         SUB84(pdVar12[2],0) ^ uVar21);
            uVar25 = *(uint *)pdVar12 ^ uVar21;
            uVar27 = *(uint *)((longlong)pdVar12 + 4) ^ uVar22;
            uVar21 = *(uint *)(pdVar12 + 1) ^ uVar21;
            uVar22 = *(uint *)((longlong)pdVar12 + 0xc) ^ uVar22;
          }
          else if (iVar11 == 0) {
            local_110 = 0;
            local_120 = local_1f8;
            dVar18 = local_120;
            uStack_118 = dStack_1f0;
            dVar5 = uStack_118;
            local_120._0_4_ = SUB84(local_1f8,0);
            local_120._4_4_ = (uint)((ulonglong)local_1f8 >> 0x20);
            uStack_118._0_4_ = SUB84(dStack_1f0,0);
            uStack_118._4_4_ = (uint)((ulonglong)dStack_1f0 >> 0x20);
            uVar25 = (uint)local_120;
            uVar27 = local_120._4_4_;
            uVar21 = (uint)uStack_118;
            uVar22 = uStack_118._4_4_;
            local_258 = 0.0;
            local_120 = dVar18;
            uStack_118 = dVar5;
          }
          else {
            if (iVar11 == 1) {
              local_1d8 = 0.0;
              dVar18 = ___xmm_3ff00000000000000000000000000000;
              uVar19 = _UNK_15061cbc8;
            }
            else {
              dVar18 = 0.0;
              uVar19 = 0;
              local_1d8 = dVar23;
            }
            local_1e8._0_4_ = SUB84(dVar18,0);
            local_1e8._4_4_ = (uint)((ulonglong)dVar18 >> 0x20);
            uStack_1e0._0_4_ = (uint)uVar19;
            uStack_1e0._4_4_ = (uint)((ulonglong)uVar19 >> 0x20);
            uVar25 = (uint)local_1e8;
            uVar27 = local_1e8._4_4_;
            uVar21 = (uint)uStack_1e0;
            uVar22 = uStack_1e0._4_4_;
            local_258 = local_1d8;
            local_1e8 = dVar18;
            uStack_1e0 = uVar19;
          }
          dVar5 = (double)CONCAT44(uVar22,uVar21);
          dVar18 = (double)CONCAT44(uVar27,uVar25);
          local_268._8_4_ = uVar21;
          local_268._0_8_ = dVar18;
          local_268._12_4_ = uVar22;
        }
        dVar7 = local_258;
        PhiWithNormal(this,(TVector<double,3> *)&local_240,(TVector<double,3> *)&local_168);
        dVar18 = dVar18 * local_168 + local_160 * dVar5 + local_158 * dVar7;
        if (dVar18 < 0.0) {
          dVar5 = __real_bff0000000000000;
          if ((__real_bff0000000000000 <= dVar18) && (dVar5 = dVar18, dVar23 <= dVar18)) {
            dVar5 = dVar23;
          }
          dVar18 = acos(dVar5);
          *param_4 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                     ) + *param_4;
        }
        uVar28 = SUB84(local_res8,0);
        uVar29 = (undefined4)((ulonglong)local_res8 >> 0x20);
        uVar13 = (ulonglong)(uVar14 + 1);
      } while ((int)(uVar14 + 1) < 8);
      goto LAB_143bf8e81;
    }
  }
  *param_5 = 3.4028234663852886e+38;
  dVar6 = __real_47efffffe0000000;
LAB_143bf8e81:
  if (local_250.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data);
  }
  if (local_278.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data);
  }
  return dVar6;
}

// ComputeMassProperties @ 143bf9350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FLevelSet::ComputeMassProperties
          (FLevelSet *this,double *param_1,TVector<double,3> *param_2,PMatrix<double,3,3> *param_3,
          TRotation<double,3> *param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  double *pdVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  ulonglong uVar12;
  double dVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  TRotation<double,3> *pTVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  ForAnyElementType FVar21;
  int iVar22;
  int iVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double local_res8;
  double *local_res10;
  double local_res18;
  double local_res20;
  ForAnyElementType local_298;
  int local_290;
  int iStack_28c;
  int local_288;
  int iStack_284;
  int local_280;
  double local_278;
  double dStack_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_188;
  double local_180;
  double local_178;
  undefined8 local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  
  dVar13 = __real_3fe0000000000000;
  local_108 = *(double *)&(this->MGrid).field_0x40;
  dStack_100 = *(double *)&(this->MGrid).field_0x48;
  iVar23 = 0;
  local_f8 = *(double *)&(this->MGrid).field_0x50;
  local_298.Data = (FScriptContainerElement *)0x0;
  local_290 = 0;
  iStack_28c = 0;
  local_268 = 0.0;
  dVar9 = dStack_100 * local_108 * local_f8;
  local_res8 = (local_108 * local_108 + dStack_100 * dStack_100) * __real_3fb5555555555555;
  local_188 = (dStack_100 * dStack_100 + local_f8 * local_f8) * __real_3fb5555555555555;
  local_160 = (local_108 * local_108 + local_f8 * local_f8) * __real_3fb5555555555555;
  local_168 = 0.0;
  local_148 = 0.0;
  local_180 = 0.0;
  local_140 = 0.0;
  local_178 = 0.0;
  local_158 = 0.0;
  local_170 = 0;
  local_150 = 0;
  local_130 = 0;
  local_1a8 = 0.0;
  dStack_1a0 = 0.0;
  local_278 = 0.0;
  dStack_270 = 0.0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = ___xmm_3ff00000000000000000000000000000;
  uStack_110 = _UNK_15061cbc8;
  local_res10 = param_1;
  local_138 = local_res8;
  if (0 < *(int *)&(this->MGrid).field_0x30) {
    do {
      iVar22 = 0;
      if (0 < *(int *)&(this->MGrid).field_0x34) {
        do {
          iVar20 = 0;
          if (0 < *(int *)&(this->MGrid).field_0x38) {
            do {
              uVar19 = (iVar23 * *(int *)&(this->MPhi).field_0x4 + iVar22) *
                       *(int *)&(this->MPhi).field_0x8 + iVar20;
              uVar16 = 0;
              if ((int)uVar19 < *(int *)&(this->MPhi).field_0x18) {
                uVar16 = ~uVar19 >> 0x1f;
              }
              local_288 = iVar23;
              iStack_284 = iVar22;
              local_280 = iVar20;
              if ((uVar16 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar5 = (code *)swi(3);
                uVar15 = (*pcVar5)();
                return (bool)uVar15;
              }
              pdVar3 = (double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar19 * 8)
              ;
              if (*pdVar3 <= 0.0 && *pdVar3 != 0.0) {
                if (((local_298.Data <= (FScriptContainerElement *)&local_288) &&
                    ((FScriptContainerElement *)&local_288 <
                     local_298.Data + (longlong)iStack_28c * 0xc)) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar14)) {
                  pcVar5 = (code *)swi(3);
                  uVar15 = (*pcVar5)();
                  return (bool)uVar15;
                }
                if (local_290 == iStack_28c) {
                  local_290 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x40c,&local_298,&iStack_28c);
                }
                lVar18 = (longlong)local_290;
                local_290 = local_290 + 1;
                *(ulonglong *)(local_298.Data + lVar18 * 0xc) = CONCAT44(iStack_284,local_288);
                *(int *)(local_298.Data + lVar18 * 0xc + 8) = local_280;
                local_278 = local_278 +
                            (((double)local_288 + dVar13) * *(double *)&(this->MGrid).field_0x40 +
                            *(double *)&this->MGrid) * dVar9;
                dStack_270 = dStack_270 +
                             (((double)iStack_284 + dVar13) * *(double *)&(this->MGrid).field_0x48 +
                             *(double *)&(this->MGrid).field_0x8) * dVar9;
                local_268 = local_268 +
                            (((double)local_280 + dVar13) * *(double *)&(this->MGrid).field_0x50 +
                            *(double *)&(this->MGrid).field_0x10) * dVar9;
              }
              iVar20 = iVar20 + 1;
            } while (iVar20 < *(int *)&(this->MGrid).field_0x38);
          }
          iVar22 = iVar22 + 1;
        } while (iVar22 < *(int *)&(this->MGrid).field_0x34);
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 < *(int *)&(this->MGrid).field_0x30);
    local_1a8 = local_278;
    dStack_1a0 = dStack_270;
  }
  iVar23 = local_290;
  local_260 = (double)local_290;
  uStack_210 = 0;
  uStack_1f0 = 0;
  local_228 = local_260 * local_188;
  dVar31 = local_260 * local_168;
  dVar29 = local_260 * local_180;
  dVar33 = local_260 * local_148;
  dVar35 = local_260 * local_160;
  local_230 = local_260 * dVar9;
  dVar30 = local_260 * local_178;
  dVar34 = local_260 * local_140;
  dVar32 = local_260 * local_158;
  local_260 = local_260 * local_138;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = ___xmm_3ff00000000000000000000000000000;
  uStack_1b0 = _UNK_15061cbc8;
  local_278 = local_1a8;
  dStack_270 = dStack_1a0;
  if (0.0 < local_230) {
    dVar25 = __real_3ff0000000000000 / local_230;
    dStack_270 = dStack_1a0 * dVar25;
    local_278 = local_1a8 * dVar25;
    local_268 = local_268 * dVar25;
  }
  dVar25 = local_278;
  uVar12 = (ulonglong)dStack_270 >> 0x20;
  uVar28 = SUB84(dStack_270,0);
  pFVar4 = local_298.Data + (longlong)local_290 * 0xc;
  FVar21.Data = local_298.Data;
  local_res8 = local_228;
  while( true ) {
    local_res18 = local_228;
    local_258 = dVar32;
    local_250 = dVar34;
    local_248 = dVar30;
    local_240 = dVar33;
    local_238 = dVar29;
    dStack_220 = dVar29;
    local_218 = dVar30;
    local_208 = dVar31;
    dStack_200 = dVar35;
    local_1f8 = dVar32;
    local_1e8 = dVar33;
    dStack_1e0 = dVar34;
    local_1d8 = local_260;
    local_1a8 = dVar31;
    if (local_290 != iVar23) {
      local_res20 = dVar35;
      `TCheckedPointerIterator<Chaos::TVector<int,3>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    local_res8 = local_res18;
    if (FVar21.Data == pFVar4) break;
    iVar22 = *(int *)FVar21.Data;
    pFVar1 = FVar21.Data + 4;
    pFVar2 = FVar21.Data + 8;
    FVar21.Data = FVar21.Data + 0xc;
    dVar24 = (((double)iVar22 + dVar13) * *(double *)&(this->MGrid).field_0x40 +
             *(double *)&this->MGrid) - local_278;
    dVar26 = (((double)*(int *)pFVar1 + dVar13) * *(double *)&(this->MGrid).field_0x48 +
             *(double *)&(this->MGrid).field_0x8) - dStack_270;
    dVar7 = (((double)*(int *)pFVar2 + dVar13) * *(double *)&(this->MGrid).field_0x50 +
            *(double *)&(this->MGrid).field_0x10) - local_268;
    dVar27 = dVar26 * dVar9 * dVar24;
    dVar6 = dVar26 * dVar7 * dVar9;
    dVar8 = dVar7 * dVar9 * dVar24;
    dVar29 = dVar29 - dVar27;
    dVar30 = dVar30 - dVar8;
    dVar31 = dVar31 - dVar27;
    dVar32 = dVar32 - dVar6;
    dVar33 = dVar33 - dVar8;
    dVar34 = dVar34 - dVar6;
    local_228 = (dVar26 * dVar26 + dVar7 * dVar7) * dVar9 + local_res18;
    dVar35 = (dVar7 * dVar7 + dVar24 * dVar24) * dVar9 + dVar35;
    local_260 = (dVar26 * dVar26 + dVar24 * dVar24) * dVar9 + local_260;
  }
  local_res18 = dVar35;
  local_res20 = local_260;
  pTVar17 = TransformToLocalSpace<double>
                      ((TRotation<double,3> *)&local_1a8,(PMatrix<double,3,3> *)&local_228);
  uVar11 = *(undefined8 *)&pTVar17->field_0x8;
  *(undefined8 *)param_4 = *(undefined8 *)pTVar17;
  *(undefined8 *)&param_4->field_0x8 = uVar11;
  uVar11 = *(undefined8 *)&pTVar17->field_0x18;
  *(undefined8 *)&param_4->field_0x10 = *(undefined8 *)&pTVar17->field_0x10;
  *(undefined8 *)&param_4->field_0x18 = uVar11;
  *local_res10 = local_230;
  auVar10._8_4_ = uVar28;
  auVar10._0_8_ = dVar25;
  auVar10._12_4_ = (int)uVar12;
  *(undefined1 (*) [16])param_2 = auVar10;
  *(double *)&param_2->field_0x10 = local_268;
  *(double *)param_3 = local_228;
  *(double *)&param_3->field_0x8 = dStack_220;
  *(double *)&param_3->field_0x10 = local_218;
  *(undefined8 *)&param_3->field_0x18 = uStack_210;
  *(double *)&param_3->field_0x20 = local_208;
  *(double *)&param_3->field_0x28 = dStack_200;
  *(double *)&param_3->field_0x30 = local_1f8;
  *(undefined8 *)&param_3->field_0x38 = uStack_1f0;
  *(double *)&param_3->field_0x40 = local_1e8;
  *(double *)&param_3->field_0x48 = dStack_1e0;
  *(double *)&param_3->field_0x50 = local_1d8;
  *(undefined8 *)&param_3->field_0x58 = uStack_1d0;
  *(undefined8 *)&param_3->field_0x60 = local_1c8;
  *(undefined8 *)&param_3->field_0x68 = uStack_1c0;
  *(undefined8 *)&param_3->field_0x70 = local_1b8;
  *(undefined8 *)&param_3->field_0x78 = uStack_1b0;
  if (local_298.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data);
  }
  return true;
}

// ComputeNormals @ 143bf9b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FLevelSet::ComputeNormals
          (FLevelSet *this,TParticles<double,3> *param_1,FTriangleMesh *param_2,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  code *pcVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  uint uVar18;
  FTriangleMesh *pFVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  TArrayView<Chaos::TVector<double,3>_const_,int> *pTVar24;
  ulonglong uVar25;
  TVector<double,3> *pTVar26;
  TVector<double,3> *pTVar27;
  longlong lVar28;
  uint uVar29;
  ForElementType<FSetElementId> FVar30;
  int iVar31;
  ForAnyElementType FVar32;
  FScriptContainerElement *pFVar33;
  longlong lVar34;
  longlong lVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  uint uVar44;
  longlong lVar45;
  TParticles<double,3> *this_00;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  double dVar56;
  undefined1 auVar57 [16];
  double dVar58;
  undefined1 auVar59 [16];
  double dVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined1 auStackY_428 [32];
  FIdentityFunctor local_3d8 [8];
  ForAnyElementType local_3d0;
  undefined8 local_3c8;
  uint local_3c0;
  int local_3b8 [4];
  undefined1 local_3a8;
  undefined1 local_3a7;
  undefined1 local_3a6 [6];
  int local_3a0 [4];
  int local_390;
  int local_38c;
  int local_388;
  TArray<double,TSizedDefaultAllocator<32>_> local_380;
  uint local_370;
  int local_368;
  int local_364;
  int local_360;
  TArray<bool,TSizedDefaultAllocator<32>_> local_358;
  undefined8 local_348;
  int local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  longlong local_320;
  FScriptContainerElement *local_318;
  FIdentityFunctor local_310 [4];
  uint local_30c;
  TParticles<double,3> *local_308;
  longlong local_300;
  int local_2f8;
  int local_2f4;
  int local_2f0;
  TArray<bool,TSizedDefaultAllocator<32>_> local_2e8;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_2d8;
  int local_2c8;
  int local_2c4;
  int local_2c0;
  int local_2bc;
  int local_2b8 [4];
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double dStack_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  FTriangleMesh *local_260;
  int local_258;
  Pair<double_*,Chaos::TVector<int,3>_> local_250;
  Pair<double_*,Chaos::TVector<int,3>_> local_238;
  Pair<double_*,Chaos::TVector<int,3>_> local_220;
  TDereferenceWrapper<Chaos::Pair<double_*,Chaos::TVector<int,3>_>,bool___cdecl(Chaos::Pair<double_*,Chaos::TVector<int,3>_>_const_&,Chaos::Pair<double_*,Chaos::TVector<int,3>_>_const_&)>
  local_208;
  undefined1 local_200 [8];
  undefined1 local_1f8 [16];
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  TArrayView<Chaos::TVector<double,3>_const_,int> local_198;
  TSet<Chaos::TVector<int,3>,DefaultKeyFuncs<Chaos::TVector<int,3>,0>,FDefaultSetAllocator>
  local_188;
  FImplicitObject local_138;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_428;
  local_308 = param_1;
  local_260 = param_2;
  ComputeNormals(this);
  pTVar24 = TArrayView<Chaos::TVector<double,3>_const_,int>::
            TArrayView<Chaos::TVector<double,3>_const_,int><Chaos::TArrayCollectionArray<Chaos::TVector<double,3>_>_const_&,Chaos::TArrayCollectionArray<Chaos::TVector<double,3>_>_>
                      (&local_198,&param_1->MX);
  FTriangleMesh::GetFaceNormals<double>(param_2,&local_2d8,pTVar24,true);
  if (local_2d8.ArrayNum != 0) {
    local_2f0 = *(int *)&(this->MGrid).field_0x38;
    local_348 = *(undefined8 *)&(this->MGrid).field_0x30;
    local_2f4 = (int)((ulonglong)local_348 >> 0x20);
    local_2e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e8.ArrayNum = 0;
    local_2e8.ArrayMax = 0;
    local_2f8 = (int)local_348;
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
              (&local_2e8,local_2f4 * (int)local_348 * local_2f0,Default);
    local_360 = *(int *)&(this->MGrid).field_0x38;
    local_348 = *(undefined8 *)&(this->MGrid).field_0x30;
    local_364 = (int)((ulonglong)local_348 >> 0x20);
    local_358.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_358.ArrayNum = 0;
    local_358.ArrayMax = 0;
    local_368 = (int)local_348;
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
              (&local_358,local_364 * (int)local_348 * local_360,Default);
    iVar43 = local_2e8.ArrayNum;
    uVar25 = (ulonglong)local_2e8.ArrayNum;
    pFVar1 = local_2e8.AllocatorInstance.Data + uVar25;
    FVar32.Data = local_2e8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar25 != iVar43) {
        local_3a8 = 0;
        `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_3a8);
      }
      if (FVar32.Data == pFVar1) break;
      *FVar32.Data = (FScriptContainerElement)0x0;
      FVar32.Data = FVar32.Data + 1;
      uVar25 = local_2e8._8_8_ & 0xffffffff;
    }
    iVar43 = local_358.ArrayNum;
    uVar25 = (ulonglong)local_358.ArrayNum;
    pFVar1 = local_358.AllocatorInstance.Data + uVar25;
    FVar32.Data = local_358.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar25 != iVar43) {
        local_3a7 = 0;
        `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_3a7);
      }
      if (FVar32.Data == pFVar1) break;
      *FVar32.Data = (FScriptContainerElement)0x0;
      FVar32.Data = FVar32.Data + 1;
      uVar25 = local_358._8_8_ & 0xffffffff;
    }
    local_388 = *(int *)&(this->MGrid).field_0x38;
    local_348 = *(undefined8 *)&(this->MGrid).field_0x30;
    local_38c = (int)((ulonglong)local_348 >> 0x20);
    local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_380.ArrayNum = 0;
    local_380.ArrayMax = 0;
    local_390 = (int)local_348;
    TArray<double,TSizedDefaultAllocator<32>_>::SetNum
              (&local_380,local_38c * (int)local_348 * local_388,Default);
    iVar43 = local_380.ArrayNum;
    uVar25 = (ulonglong)local_380.ArrayNum;
    pFVar1 = local_380.AllocatorInstance.Data + uVar25 * 8;
    FVar32.Data = local_380.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar25 != iVar43) {
        local_3a6[0] = 0;
        `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()(local_3a6)
        ;
      }
      if (FVar32.Data == pFVar1) break;
      *(undefined8 *)FVar32.Data = 0x47efffffe0000000;
      FVar32.Data = FVar32.Data + 8;
      uVar25 = local_380._8_8_ & 0xffffffff;
    }
    iVar43 = param_3->ArrayNum;
    pFVar33 = (param_3->AllocatorInstance).Data;
    local_3d0.Data = (FScriptContainerElement *)0x0;
    local_3c8 = 0;
    local_188.Elements._0_8_ = 0;
    pFVar1 = pFVar33 + (longlong)iVar43 * 0xc;
    local_188.Elements._8_8_ = 0;
    local_188.Elements._32_8_ = 0;
    local_188.Elements._40_4_ = 0;
    local_188.Elements._44_4_ = 0x80;
    local_188.Elements._48_4_ = 0xffffffff;
    local_188.Elements._52_4_ = 0;
    local_188.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_188.HashSize = 0;
    while( true ) {
      if (param_3->ArrayNum != iVar43) {
        local_3d8[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<Chaos::TVector<int,3>_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_3d8);
      }
      this_00 = local_308;
      if (pFVar33 == pFVar1) break;
      TSet<Chaos::TVector<int,3>,DefaultKeyFuncs<Chaos::TVector<int,3>,0>,FDefaultSetAllocator>::
      Emplace<Chaos::TVector<int,3>_const_&>(&local_188,(TVector<int,3> *)local_200,(bool *)pFVar33)
      ;
      pFVar33 = pFVar33 + 0xc;
    }
    if ((param_2->MElements).ArrayNum < 1) {
      uVar9 = *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8;
      *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin =
           *(undefined8 *)&(this->MLocalBoundingBox).MMin;
      *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin.field_0x8 = uVar9;
      *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin.field_0x10 =
           *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10;
      uVar9 = *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8;
      *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax =
           *(undefined8 *)&(this->MLocalBoundingBox).MMax;
      *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax.field_0x8 = uVar9;
      uVar9 = *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10;
      uVar50 = (undefined4)uVar9;
      uVar52 = (undefined4)((ulonglong)uVar9 >> 0x20);
    }
    else {
      pTVar26 = TParticles<double,3>::GetX
                          (local_308,*(int *)(param_2->MElements).AllocatorInstance.Data);
      if (((param_2->MElements).ArrayNum < 1) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pTVar27 = TParticles<double,3>::GetX
                          (this_00,*(int *)(param_2->MElements).AllocatorInstance.Data);
      local_1b0 = *(undefined8 *)pTVar26;
      uStack_1a8 = *(undefined8 *)&pTVar26->field_0x8;
      local_1a0 = *(undefined8 *)&pTVar26->field_0x10;
      uVar50 = (undefined4)local_1a0;
      uVar52 = (undefined4)((ulonglong)local_1a0 >> 0x20);
      local_1c8 = *(undefined8 *)pTVar27;
      uStack_1c0 = *(undefined8 *)&pTVar27->field_0x8;
      local_1b8 = *(undefined8 *)&pTVar27->field_0x10;
      *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin = local_1c8;
      *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin.field_0x8 = uStack_1c0;
      *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin.field_0x10 = local_1b8;
      *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax = local_1b0;
      *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax.field_0x8 = uStack_1a8;
    }
    *(ulonglong *)&(this->MOriginalLocalBoundingBox).MMax.field_0x10 = CONCAT44(uVar52,uVar50);
    uVar18 = _UNK_15066df7c;
    uVar37 = _UNK_15066df78;
    uVar39 = __xmm_80000000000000008000000000000000._4_4_;
    uVar38 = (uint)__xmm_80000000000000008000000000000000;
    dVar8 = __real_3fe0000000000000;
    iVar43 = (param_2->MElements).ArrayNum;
    local_3c0 = 0;
    if (0 < iVar43) {
      uVar50 = (undefined4)__real_3fe000d1c0000000;
      uVar52 = (undefined4)((ulonglong)__real_3fe000d1c0000000 >> 0x20);
      local_320 = 0;
      do {
        lVar35 = local_320;
        uVar44 = local_3c0;
        uVar36 = ~local_3c0 >> 0x1f;
        uVar29 = 0;
        if ((int)local_3c0 < iVar43) {
          uVar29 = uVar36;
        }
        local_30c = uVar36;
        if ((uVar29 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        local_318 = (param_2->MElements).AllocatorInstance.Data;
        lVar45 = lVar35 * 3;
        uVar29 = 0;
        if ((int)uVar44 < local_2d8.ArrayNum) {
          uVar29 = uVar36;
        }
        local_300 = lVar45;
        if ((uVar29 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        FVar32.Data = local_2d8.AllocatorInstance.Data;
        uVar44 = *(uint *)(local_318 + lVar35 * 0xc);
        uVar29 = 0;
        if ((int)uVar44 < *(int *)&(this_00->MX).field_0x10) {
          uVar29 = ~uVar44 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        lVar28 = *(longlong *)&(this_00->MX).field_0x8;
        FImplicitObject::FImplicitObject(&local_138,0,'\x02');
        pFVar33 = local_318;
        local_138._padding_ = (longlong)&___7__TPlane_N_02_Chaos__6B_;
        pdVar2 = (double *)(lVar28 + (longlong)(int)uVar44 * 0x18);
        local_118 = *pdVar2;
        dStack_110 = pdVar2[1];
        local_108 = *(double *)(lVar28 + 0x10 + (longlong)(int)uVar44 * 0x18);
        pFVar1 = FVar32.Data + lVar35 * 0x18;
        local_100 = *(double *)pFVar1;
        dStack_f8 = *(double *)(pFVar1 + 8);
        local_f0 = *(double *)(FVar32.Data + lVar35 * 0x18 + 0x10);
        uVar44 = *(uint *)(local_318 + lVar35 * 0xc);
        uVar29 = 0;
        if ((int)uVar44 < *(int *)&(this_00->MX).field_0x10) {
          uVar29 = ~uVar44 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar29 = *(uint *)(pFVar33 + lVar35 * 0xc);
        lVar28 = *(longlong *)&(this_00->MX).field_0x8;
        uVar36 = 0;
        if ((int)uVar29 < *(int *)&(this_00->MX).field_0x10) {
          uVar36 = ~uVar29 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        lVar12 = *(longlong *)&(this_00->MX).field_0x8;
        uVar36 = *(uint *)(pFVar33 + lVar35 * 0xc + 4);
        lVar34 = (longlong)(int)uVar36;
        pdVar2 = (double *)(lVar12 + (longlong)(int)uVar29 * 0x18);
        local_2a8 = *pdVar2;
        dStack_2a0 = pdVar2[1];
        local_298 = *(double *)(lVar12 + 0x10 + (longlong)(int)uVar29 * 0x18);
        pdVar2 = (double *)(lVar28 + (longlong)(int)uVar44 * 0x18);
        local_290 = *pdVar2;
        dStack_288 = pdVar2[1];
        local_280 = *(double *)(lVar28 + 0x10 + (longlong)(int)uVar44 * 0x18);
        uVar44 = 0;
        if ((int)uVar36 < *(int *)&(this_00->MX).field_0x10) {
          uVar44 = ~uVar36 >> 0x1f;
        }
        if ((uVar44 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        lVar28 = *(longlong *)&(this_00->MX).field_0x8;
        uVar51 = SUB84(local_290,0);
        uVar53 = (undefined4)((ulonglong)local_290 >> 0x20);
        uVar61 = SUB84(dStack_288,0);
        uVar62 = (undefined4)((ulonglong)dStack_288 >> 0x20);
        dVar56 = *(double *)(lVar28 + 0x10 + lVar34 * 0x18);
        dVar58 = *(double *)(lVar28 + 8 + lVar34 * 0x18);
        dVar60 = dStack_2a0;
        if (dVar58 <= dStack_2a0) {
          dVar60 = dVar58;
        }
        dVar58 = *(double *)(lVar28 + lVar34 * 0x18);
        if (local_290 <= dVar58) {
          uVar51 = SUB84(dVar58,0);
          uVar53 = (undefined4)((ulonglong)dVar58 >> 0x20);
        }
        dVar58 = *(double *)(lVar28 + 8 + lVar34 * 0x18);
        if (dStack_288 <= dVar58) {
          uVar61 = SUB84(dVar58,0);
          uVar62 = (undefined4)((ulonglong)dVar58 >> 0x20);
        }
        uVar44 = *(uint *)(pFVar33 + lVar35 * 0xc + 8);
        lVar35 = (longlong)(int)uVar44;
        uVar63 = SUB84(local_2a8,0);
        uVar64 = (undefined4)((ulonglong)local_2a8 >> 0x20);
        dVar58 = *(double *)(lVar28 + lVar34 * 0x18);
        if (dVar58 <= local_2a8) {
          uVar63 = SUB84(dVar58,0);
          uVar64 = (undefined4)((ulonglong)dVar58 >> 0x20);
        }
        dVar58 = dVar56;
        if (local_298 <= dVar56) {
          dVar58 = local_298;
        }
        if (dVar56 <= local_280) {
          dVar56 = local_280;
        }
        local_290 = (double)CONCAT44(uVar53,uVar51);
        uVar29 = 0;
        if ((int)uVar44 < *(int *)&(this_00->MX).field_0x10) {
          uVar29 = ~uVar44 >> 0x1f;
        }
        dStack_288 = (double)CONCAT44(uVar62,uVar61);
        if ((uVar29 == 0) &&
           (dStack_2a0 = dVar60, local_298 = dVar58, local_280 = dVar56,
           bVar20 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar20)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        lVar28 = *(longlong *)&(this_00->MX).field_0x8;
        dVar3 = *(double *)&(this->MOriginalLocalBoundingBox).MMin.field_0x8;
        uVar47 = SUB84(dVar3,0);
        uVar49 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar4 = *(double *)(lVar28 + 0x10 + lVar35 * 0x18);
        if (dVar4 <= dVar58) {
          dVar58 = dVar4;
        }
        dVar4 = *(double *)(lVar28 + 8 + lVar35 * 0x18);
        if (dVar4 <= dVar60) {
          dVar60 = dVar4;
        }
        dVar4 = *(double *)(lVar28 + lVar35 * 0x18);
        uVar55 = (undefined4)((ulonglong)dVar4 >> 0x20);
        dVar5 = *(double *)(lVar28 + 0x10 + lVar35 * 0x18);
        if (dVar56 <= dVar5) {
          dVar56 = dVar5;
        }
        dVar5 = *(double *)(lVar28 + 8 + lVar35 * 0x18);
        if ((double)CONCAT44(uVar62,uVar61) <= dVar5) {
          uVar61 = SUB84(dVar5,0);
          uVar62 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        if (dVar4 <= (double)CONCAT44(uVar64,uVar63)) {
          uVar63 = SUB84(dVar4,0);
          uVar64 = uVar55;
        }
        local_298 = dVar58;
        if (dVar60 <= dVar3) {
          uVar47 = SUB84(dVar60,0);
          uVar49 = (undefined4)((ulonglong)dVar60 >> 0x20);
        }
        dStack_2a0 = dVar60;
        uVar54 = SUB84(dVar4,0);
        if (dVar4 <= (double)CONCAT44(uVar53,uVar51)) {
          uVar54 = uVar51;
          uVar55 = uVar53;
        }
        uVar51 = SUB84(dVar58,0);
        uVar53 = (undefined4)((ulonglong)dVar58 >> 0x20);
        dVar3 = *(double *)&(this->MOriginalLocalBoundingBox).MMin.field_0x10;
        if (dVar3 <= dVar58) {
          uVar51 = SUB84(dVar3,0);
          uVar53 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        dStack_288 = (double)CONCAT44(uVar62,uVar61);
        local_2a8 = (double)CONCAT44(uVar64,uVar63);
        dVar3 = *(double *)&(this->MOriginalLocalBoundingBox).MMin;
        uVar46 = uVar63;
        uVar48 = uVar64;
        if (dVar3 <= (double)CONCAT44(uVar64,uVar63)) {
          uVar46 = SUB84(dVar3,0);
          uVar48 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        local_290 = (double)CONCAT44(uVar55,uVar54);
        local_280 = dVar56;
        *(ulonglong *)&(this->MOriginalLocalBoundingBox).MMin = CONCAT44(uVar48,uVar46);
        *(ulonglong *)&(this->MOriginalLocalBoundingBox).MMin.field_0x8 = CONCAT44(uVar49,uVar47);
        *(ulonglong *)&(this->MOriginalLocalBoundingBox).MMin.field_0x10 = CONCAT44(uVar53,uVar51);
        dVar3 = *(double *)&(this->MOriginalLocalBoundingBox).MMax.field_0x10;
        uVar51 = SUB84(dVar3,0);
        uVar53 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar4 = *(double *)&(this->MOriginalLocalBoundingBox).MMax;
        if (dVar3 <= dVar56) {
          uVar51 = SUB84(dVar56,0);
          uVar53 = (undefined4)((ulonglong)dVar56 >> 0x20);
        }
        dVar3 = *(double *)&(this->MOriginalLocalBoundingBox).MMax.field_0x8;
        if ((double)CONCAT44(uVar62,uVar61) <= dVar3) {
          uVar61 = SUB84(dVar3,0);
          uVar62 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        uVar47 = SUB84(dVar4,0);
        uVar49 = (int)((ulonglong)dVar4 >> 0x20);
        if (dVar4 <= (double)CONCAT44(uVar55,uVar54)) {
          uVar47 = uVar54;
          uVar49 = uVar55;
        }
        *(ulonglong *)&(this->MOriginalLocalBoundingBox).MMax = CONCAT44(uVar49,uVar47);
        *(ulonglong *)&(this->MOriginalLocalBoundingBox).MMax.field_0x8 = CONCAT44(uVar62,uVar61);
        *(ulonglong *)&(this->MOriginalLocalBoundingBox).MMax.field_0x10 = CONCAT44(uVar53,uVar51);
        dVar3 = *(double *)&(this->MGrid).field_0x10;
        dVar4 = *(double *)&(this->MGrid).field_0x8;
        dVar5 = *(double *)&(this->MGrid).field_0x50;
        dVar6 = *(double *)&(this->MGrid).field_0x48;
        iVar23 = *(int *)&(this->MGrid).field_0x30;
        dVar16 = *(double *)&(this->MGrid).field_0x40 * (double)CONCAT44(uVar52,uVar50);
        dVar15 = *(double *)&(this->MGrid).field_0x48 * (double)CONCAT44(uVar52,uVar50);
        dVar17 = *(double *)&(this->MGrid).field_0x50 * (double)CONCAT44(uVar52,uVar50);
        dVar7 = *(double *)&(this->MGrid).field_0x40;
        uVar44 = (uint)((((double)CONCAT44(uVar64,uVar63) - dVar16) - *(double *)&this->MGrid) /
                       dVar7);
        iVar43 = (int)(((dVar60 - dVar15) - dVar4) / dVar6);
        iVar41 = (int)(((dVar58 - dVar17) - dVar3) / dVar5);
        if ((int)uVar44 < iVar23) {
          uVar25 = (ulonglong)uVar44;
          if ((int)uVar44 < 0) {
            uVar25 = 0;
          }
        }
        else {
          uVar25 = (ulonglong)(iVar23 - 1);
        }
        iVar10 = *(int *)&(this->MGrid).field_0x34;
        if (iVar43 < iVar10) {
          if (iVar43 < 0) {
            iVar43 = 0;
          }
        }
        else {
          iVar43 = iVar10 + -1;
        }
        iVar11 = *(int *)&(this->MGrid).field_0x38;
        local_2bc = iVar43;
        if (iVar41 < iVar11) {
          if (iVar41 < 0) {
            iVar41 = 0;
          }
        }
        else {
          iVar41 = iVar11 + -1;
        }
        local_2c4 = iVar41;
        iVar42 = (int)(((dVar15 + dStack_288) - dVar4) / dVar6);
        iVar31 = (int)((((double)CONCAT44(uVar55,uVar54) + dVar16) - *(double *)&this->MGrid) /
                      dVar7);
        iVar40 = (int)(((dVar56 + dVar17) - dVar3) / dVar5);
        if (iVar31 < iVar23) {
          if (iVar31 < 0) {
            iVar31 = 0;
          }
        }
        else {
          iVar31 = iVar23 + -1;
        }
        local_2b8[3] = iVar31;
        if (iVar42 < iVar10) {
          if (iVar42 < 0) {
            iVar42 = 0;
          }
        }
        else {
          iVar42 = iVar10 + -1;
        }
        local_2c0 = iVar42;
        if (iVar40 < iVar11) {
          if (iVar40 < 0) {
            iVar40 = 0;
          }
        }
        else {
          iVar40 = iVar11 + -1;
        }
        local_2c8 = iVar40;
        if ((int)uVar25 <= iVar31) {
          do {
            uVar44 = (uint)uVar25;
            iVar23 = iVar43;
            if (iVar43 <= iVar42) {
              do {
                iVar23 = iVar41;
                if (iVar41 <= iVar40) {
                  uVar29 = uVar44 * 0x40 + iVar43 + (int)(uVar25 >> 2) + -0x61c88647 ^ uVar44;
                  local_370 = uVar29;
                  local_258 = (uVar29 >> 2) + uVar29 * 0x40;
                  do {
                    if (local_188.Elements._8_4_ != local_188.Elements._52_4_) {
                      FVar30 = (ForElementType<FSetElementId>)&local_188.Hash;
                      if (local_188.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                        FVar30 = local_188.Hash.SecondaryData;
                      }
                      iVar23 = *(int *)((longlong)FVar30 +
                                       (ulonglong)
                                       (local_188.HashSize - 1U &
                                       (local_258 + -0x61c88647 + iVar41 ^ uVar29)) * 4);
                      while (uVar29 = local_370, iVar23 != -1) {
                        lVar35 = (longlong)iVar23;
                        if (((*(uint *)(local_188.Elements._0_8_ + lVar35 * 0x14) == uVar44) &&
                            (*(int *)(local_188.Elements._0_8_ + 4 + lVar35 * 0x14) == iVar43)) &&
                           (*(int *)(local_188.Elements._0_8_ + 8 + lVar35 * 0x14) == iVar41)) {
                          if (iVar23 != -1) {
                            uVar29 = *(uint *)(pFVar33 + lVar45 * 4 + 8);
                            uVar36 = 0;
                            if ((int)uVar29 < *(int *)&(this_00->MX).field_0x10) {
                              uVar36 = ~uVar29 >> 0x1f;
                            }
                            auVar57._0_8_ =
                                 ((double)(int)uVar44 + dVar8) *
                                 *(double *)&(this->MGrid).field_0x40 + *(double *)&this->MGrid;
                            auVar57._8_8_ = 0;
                            dVar58 = ((double)iVar43 + dVar8) * *(double *)&(this->MGrid).field_0x48
                                     + *(double *)&(this->MGrid).field_0x8;
                            dVar60 = ((double)iVar41 + dVar8) * *(double *)&(this->MGrid).field_0x50
                                     + *(double *)&(this->MGrid).field_0x10;
                            local_278 = auVar57._0_8_;
                            local_270 = dVar58;
                            local_268 = dVar60;
                            if ((uVar36 == 0) &&
                               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar20)) {
                              pcVar13 = (code *)swi(3);
                              (*pcVar13)();
                              return;
                            }
                            lVar35 = *(longlong *)&(this_00->MX).field_0x8;
                            uVar36 = *(uint *)(local_318 + local_300 * 4 + 4);
                            uVar21 = 0;
                            if ((int)uVar36 < *(int *)&(this_00->MX).field_0x10) {
                              uVar21 = ~uVar36 >> 0x1f;
                            }
                            if ((uVar21 == 0) &&
                               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar20)) {
                              pcVar13 = (code *)swi(3);
                              (*pcVar13)();
                              return;
                            }
                            lVar45 = *(longlong *)&(this_00->MX).field_0x8;
                            uVar21 = *(uint *)(local_318 + local_300 * 4);
                            uVar22 = 0;
                            if ((int)uVar21 < *(int *)&(local_308->MX).field_0x10) {
                              uVar22 = ~uVar21 >> 0x1f;
                            }
                            if ((uVar22 == 0) &&
                               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar20)) {
                              pcVar13 = (code *)swi(3);
                              (*pcVar13)();
                              return;
                            }
                            dVar56 = (dVar58 - dStack_110) * dStack_f8 +
                                     (auVar57._0_8_ - local_118) * local_100 +
                                     (dVar60 - local_108) * local_f0;
                            local_1f8._0_8_ = auVar57._0_8_ - local_100 * dVar56;
                            local_1f8._8_8_ = dVar58 - dStack_f8 * dVar56;
                            local_1e8 = dVar60 - local_f0 * dVar56;
                            FindClosestPointOnTriangle<double,3>
                                      ((TVector<double,3> *)&local_1e0,
                                       (TVector<double,3> *)local_1f8,
                                       (TVector<double,3> *)
                                       (*(longlong *)&(local_308->MX).field_0x8 +
                                       (longlong)(int)uVar21 * 0x18),
                                       (TVector<double,3> *)(lVar45 + (longlong)(int)uVar36 * 0x18),
                                       (TVector<double,3> *)(lVar35 + (longlong)(int)uVar29 * 0x18),
                                       (TVector<double,3> *)&local_278);
                            uVar36 = (local_38c * uVar44 + iVar43) * local_388 + iVar41;
                            uVar29 = 0;
                            if ((int)uVar36 < local_380.ArrayNum) {
                              uVar29 = ~uVar36 >> 0x1f;
                            }
                            auVar14._8_8_ = 0;
                            auVar14._0_8_ =
                                 (local_1e0 - auVar57._0_8_) * (local_1e0 - auVar57._0_8_) +
                                 (local_1d8 - dVar58) * (local_1d8 - dVar58) +
                                 (local_1d0 - dVar60) * (local_1d0 - dVar60);
                            auVar57 = sqrtpd(auVar57,auVar14);
                            if ((uVar29 == 0) &&
                               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar20)) {
                              pcVar13 = (code *)swi(3);
                              (*pcVar13)();
                              return;
                            }
                            pFVar33 = local_318;
                            lVar45 = local_300;
                            this_00 = local_308;
                            uVar29 = local_370;
                            if (auVar57._0_8_ <
                                *(double *)
                                 (local_380.AllocatorInstance.Data + (longlong)(int)uVar36 * 8)) {
                              uVar29 = 0;
                              if ((int)local_3c0 < local_2d8.ArrayNum) {
                                uVar29 = local_30c;
                              }
                              if ((uVar29 == 0) &&
                                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar20)) {
                                pcVar13 = (code *)swi(3);
                                (*pcVar13)();
                                return;
                              }
                              FVar32.Data = local_2d8.AllocatorInstance.Data;
                              uVar36 = (uVar44 * *(int *)&(this->MNormals).field_0x4 + iVar43) *
                                       *(int *)&(this->MNormals).field_0x8 + iVar41;
                              uVar29 = 0;
                              if ((int)uVar36 < *(int *)&(this->MNormals).field_0x18) {
                                uVar29 = ~uVar36 >> 0x1f;
                              }
                              if ((uVar29 == 0) &&
                                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar20)) {
                                pcVar13 = (code *)swi(3);
                                (*pcVar13)();
                                return;
                              }
                              lVar45 = local_320;
                              lVar28 = (longlong)(int)uVar36;
                              lVar35 = *(longlong *)&(this->MNormals).field_0x10;
                              if (*(double *)(FVar32.Data + local_320 * 0x18 + 8) *
                                  *(double *)(lVar35 + 8 + lVar28 * 0x18) +
                                  *(double *)(lVar35 + lVar28 * 0x18) *
                                  *(double *)(FVar32.Data + local_320 * 0x18) +
                                  *(double *)(FVar32.Data + local_320 * 0x18 + 0x10) *
                                  *(double *)(lVar35 + 0x10 + lVar28 * 0x18) < 0.0) {
                                uVar29 = 0;
                                if ((int)local_3c0 < local_2d8.ArrayNum) {
                                  uVar29 = local_30c;
                                }
                                if ((uVar29 == 0) &&
                                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar20)) {
                                  pcVar13 = (code *)swi(3);
                                  (*pcVar13)();
                                  return;
                                }
                                uVar9 = *(undefined8 *)
                                         (local_2d8.AllocatorInstance.Data + lVar45 * 0x18);
                                pFVar1 = local_2d8.AllocatorInstance.Data + lVar45 * 0x18 + 8;
                                auVar59._0_4_ = *(uint *)pFVar1 ^ uVar38;
                                auVar59._4_4_ = *(uint *)(pFVar1 + 4) ^ uVar39;
                                auVar59._8_4_ = *(uint *)(pFVar1 + 8) ^ uVar37;
                                auVar59._12_4_ = *(uint *)(pFVar1 + 0xc) ^ uVar18;
                                uVar36 = (uVar44 * *(int *)&(this->MNormals).field_0x4 + iVar43) *
                                         *(int *)&(this->MNormals).field_0x8 + iVar41;
                                uVar29 = 0;
                                if ((int)uVar36 < *(int *)&(this->MNormals).field_0x18) {
                                  uVar29 = ~uVar36 >> 0x1f;
                                }
                                if ((uVar29 == 0) &&
                                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar20)) {
                                  pcVar13 = (code *)swi(3);
                                  (*pcVar13)();
                                  return;
                                }
                                lVar35 = *(longlong *)&(this->MNormals).field_0x10;
                                *(ulonglong *)(lVar35 + (longlong)(int)uVar36 * 0x18) =
                                     CONCAT44((uint)((ulonglong)uVar9 >> 0x20) ^ uVar39,
                                              (uint)uVar9 ^ uVar38);
                                *(undefined1 (*) [16])(lVar35 + 8 + (longlong)(int)uVar36 * 0x18) =
                                     auVar59;
                              }
                              else {
                                uVar29 = 0;
                                if ((int)local_3c0 < local_2d8.ArrayNum) {
                                  uVar29 = local_30c;
                                }
                                if ((uVar29 == 0) &&
                                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar20)) {
                                  pcVar13 = (code *)swi(3);
                                  (*pcVar13)();
                                  return;
                                }
                                auVar57 = *(undefined1 (*) [16])
                                           (local_2d8.AllocatorInstance.Data + lVar45 * 0x18);
                                uVar9 = *(undefined8 *)
                                         (local_2d8.AllocatorInstance.Data + lVar45 * 0x18 + 0x10);
                                uVar36 = (uVar44 * *(int *)&(this->MNormals).field_0x4 + iVar43) *
                                         *(int *)&(this->MNormals).field_0x8 + iVar41;
                                uVar29 = 0;
                                if ((int)uVar36 < *(int *)&(this->MNormals).field_0x18) {
                                  uVar29 = ~uVar36 >> 0x1f;
                                }
                                if ((uVar29 == 0) &&
                                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar20)) {
                                  pcVar13 = (code *)swi(3);
                                  (*pcVar13)();
                                  return;
                                }
                                lVar35 = *(longlong *)&(this->MNormals).field_0x10;
                                *(undefined1 (*) [16])(lVar35 + (longlong)(int)uVar36 * 0x18) =
                                     auVar57;
                                *(undefined8 *)(lVar35 + 0x10 + (longlong)(int)uVar36 * 0x18) =
                                     uVar9;
                              }
                              uVar36 = (local_364 * uVar44 + iVar43) * local_360 + iVar41;
                              uVar29 = 0;
                              if ((int)uVar36 < local_358.ArrayNum) {
                                uVar29 = ~uVar36 >> 0x1f;
                              }
                              if ((uVar29 == 0) &&
                                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar20)) {
                                pcVar13 = (code *)swi(3);
                                (*pcVar13)();
                                return;
                              }
                              pFVar33 = local_318;
                              lVar45 = local_300;
                              this_00 = local_308;
                              uVar29 = local_370;
                              if (local_358.AllocatorInstance.Data[(int)uVar36] ==
                                  (FScriptContainerElement)0x0) {
                                uVar36 = (local_2f4 * uVar44 + iVar43) * local_2f0 + iVar41;
                                uVar29 = 0;
                                if ((int)uVar36 < local_2e8.ArrayNum) {
                                  uVar29 = ~uVar36 >> 0x1f;
                                }
                                if ((uVar29 == 0) &&
                                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar20)) {
                                  pcVar13 = (code *)swi(3);
                                  (*pcVar13)();
                                  return;
                                }
                                local_2e8.AllocatorInstance.Data[(int)uVar36] =
                                     (FScriptContainerElement)0x1;
                                uVar36 = (local_38c * uVar44 + iVar43) * local_388 + iVar41;
                                uVar29 = 0;
                                if ((int)uVar36 < local_380.ArrayNum) {
                                  uVar29 = ~uVar36 >> 0x1f;
                                }
                                if ((uVar29 == 0) &&
                                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar20)) {
                                  pcVar13 = (code *)swi(3);
                                  (*pcVar13)();
                                  return;
                                }
                                local_250.Second.field0_0x0._s_0.X = uVar44;
                                local_250.Second.field0_0x0._s_0.Y = iVar43;
                                local_250.Second.field0_0x0._s_0.Z = iVar41;
                                local_250.First =
                                     (double *)
                                     (local_380.AllocatorInstance.Data + (longlong)(int)uVar36 * 8);
                                if (((local_3d0.Data <= &local_250) &&
                                    (&local_250 <
                                     (Pair<double_*,Chaos::TVector<int,3>_> *)
                                     (local_3d0.Data + (longlong)local_3c8._4_4_ * 0x18))) &&
                                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                       (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar20)) {
                                  pcVar13 = (code *)swi(3);
                                  (*pcVar13)();
                                  return;
                                }
                                iVar23 = (int)local_3c8;
                                if ((int)local_3c8 == local_3c8._4_4_) {
                                  iVar23 = UE::Core::Private::
                                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                     (0x818,&local_3d0,
                                                      (int *)((longlong)&local_3c8 + 4));
                                }
                                local_3c8 = CONCAT44(local_3c8._4_4_,iVar23 + 1);
                                *(double **)&local_3d0.Data[(longlong)iVar23 * 0x18].field_0x0 =
                                     local_250.First;
                                *(ulonglong *)(local_3d0.Data + (longlong)iVar23 * 0x18 + 8) =
                                     CONCAT44(local_250.Second.field0_0x0._s_0.Y,
                                              local_250.Second.field0_0x0._s_0.X);
                                *(ulonglong *)(local_3d0.Data + (longlong)iVar23 * 0x18 + 0x10) =
                                     CONCAT44(local_250._20_4_,local_250.Second.field0_0x0._s_0.Z);
                                uVar36 = (local_364 * uVar44 + iVar43) * local_360 + iVar41;
                                uVar29 = 0;
                                if ((int)uVar36 < local_358.ArrayNum) {
                                  uVar29 = ~uVar36 >> 0x1f;
                                }
                                if ((uVar29 == 0) &&
                                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar20)) {
                                  pcVar13 = (code *)swi(3);
                                  (*pcVar13)();
                                  return;
                                }
                                local_358.AllocatorInstance.Data[(int)uVar36] =
                                     (FScriptContainerElement)0x1;
                                pFVar33 = local_318;
                                lVar45 = local_300;
                                this_00 = local_308;
                                uVar29 = local_370;
                              }
                            }
                          }
                          break;
                        }
                        iVar23 = *(int *)(local_188.Elements._0_8_ + 0xc + lVar35 * 0x14);
                      }
                    }
                    iVar41 = iVar41 + 1;
                    iVar23 = local_2c4;
                    iVar42 = local_2c0;
                    iVar40 = local_2c8;
                  } while (iVar41 <= local_2c8);
                }
                iVar41 = iVar23;
                iVar43 = iVar43 + 1;
                iVar23 = local_2bc;
                iVar31 = local_2b8[3];
              } while (iVar43 <= iVar42);
            }
            iVar43 = iVar23;
            uVar25 = (ulonglong)(uVar44 + 1);
          } while ((int)(uVar44 + 1) <= iVar31);
        }
        local_138._padding_ = (longlong)&___7__TPlane_N_02_Chaos__6B_;
        FImplicitObject::~FImplicitObject(&local_138);
        local_3c0 = local_3c0 + 1;
        local_320 = local_320 + 1;
        uVar50 = (undefined4)__real_3fe000d1c0000000;
        uVar52 = (undefined4)((ulonglong)__real_3fe000d1c0000000 >> 0x20);
        iVar43 = (local_260->MElements).ArrayNum;
        param_2 = local_260;
      } while ((int)local_3c0 < iVar43);
    }
    AlgoImpl::
    HeapifyInternal<Chaos::Pair<double_*,Chaos::TVector<int,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double_*,Chaos::TVector<int,3>_>,bool___cdecl(Chaos::Pair<double_*,Chaos::TVector<int,3>_>_const_&,Chaos::Pair<double_*,Chaos::TVector<int,3>_>_const_&)>_>
              ((Pair<double_*,Chaos::TVector<int,3>_> *)local_3d0.Data,(int)local_3c8,local_3d8[0],
               (TDereferenceWrapper<Chaos::Pair<double_*,Chaos::TVector<int,3>_>,bool___cdecl(Chaos::Pair<double_*,Chaos::TVector<int,3>_>_const_&,Chaos::Pair<double_*,Chaos::TVector<int,3>_>_const_&)>
                )0x143bf5a00);
    if ((int)local_3c8 != 0) {
      local_260 = (FTriangleMesh *)((longlong)this - (longlong)local_2b8);
      bVar20 = (int)local_3c8 == 0;
      do {
        lVar35 = 0;
        iVar43 = (int)local_3c8;
        if (bVar20 || (int)local_3c8 < 0) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar20) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar43 = (int)local_3c8;
        }
        local_328 = *(undefined8 *)(local_3d0.Data + 0x10);
        local_338 = *(undefined8 *)local_3d0.Data;
        uStack_330 = *(undefined8 *)(local_3d0.Data + 8);
        if (iVar43 < 1) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             );
          if (bVar20) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar43 = (int)local_3c8;
        }
        iVar41 = iVar43 + -1;
        if (1 < iVar41) {
          iVar41 = 1;
        }
        if (iVar41 != 0) {
          memmove(local_3d0.Data,local_3d0.Data + (longlong)(iVar43 - iVar41) * 0x18,
                  (longlong)iVar41 * 0x18);
          iVar43 = (int)local_3c8;
        }
        local_3c8 = CONCAT44(local_3c8._4_4_,iVar43 + -1);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&local_3d0,iVar43 + -1,(int *)((longlong)&local_3c8 + 4));
        local_208.Predicate = Chaos::Compare;
        AlgoImpl::
        HeapSiftDown<Chaos::Pair<double_*,Chaos::TVector<int,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double_*,Chaos::TVector<int,3>_>,bool___cdecl(Chaos::Pair<double_*,Chaos::TVector<int,3>_>_const_&,Chaos::Pair<double_*,Chaos::TVector<int,3>_>_const_&)>_>
                  ((Pair<double_*,Chaos::TVector<int,3>_> *)local_3d0.Data,0,(int)local_3c8,
                   local_310,&local_208);
        uVar39 = 0;
        uVar37 = (local_364 * (int)uStack_330 + uStack_330._4_4_) * local_360 + (int)local_328;
        uVar38 = uVar39;
        if ((int)uVar37 < local_358.ArrayNum) {
          uVar38 = ~uVar37 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        if ((local_358.AllocatorInstance.Data[(int)uVar37] == (FScriptContainerElement)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("InHeap(Smallest.Second)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Levelset.cpp"
                                ,0x5b8,L""), bVar20)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar37 = (local_2f4 * (int)uStack_330 + uStack_330._4_4_) * local_2f0 + (int)local_328;
        uVar38 = uVar39;
        if ((int)uVar37 < local_2e8.ArrayNum) {
          uVar38 = ~uVar37 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        local_2e8.AllocatorInstance.Data[(int)uVar37] = (FScriptContainerElement)0x1;
        uVar38 = (local_364 * (int)uStack_330 + uStack_330._4_4_) * local_360 + (int)local_328;
        if ((int)uVar38 < local_358.ArrayNum) {
          uVar39 = ~uVar38 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar19 = local_260;
        local_3c0 = 0;
        local_320 = 0x60;
        local_358.AllocatorInstance.Data[(int)uVar38] = (FScriptContainerElement)0x0;
        do {
          iVar43 = (int)uStack_330;
          iVar41 = uStack_330._4_4_;
          iVar23 = (int)local_328;
          local_2b8[0] = 0;
          local_2b8[1] = 0;
          local_348 = 0;
          local_2b8[2] = 0;
          *(undefined4 *)((longlong)local_2b8 + lVar35) = 1;
          local_340 = 0;
          local_3b8[0] = local_2b8[0] + (int)uStack_330;
          local_3b8[1] = local_2b8[1] + uStack_330._4_4_;
          *(undefined4 *)((longlong)&local_348 + lVar35) = 1;
          local_3a0[0] = iVar43 - (int)local_348;
          local_3a0[2] = iVar23 - local_340;
          local_3a0[1] = iVar41 - local_348._4_4_;
          local_3b8[2] = local_2b8[2] + iVar23;
          if (-1 < *(int *)((longlong)local_3a0 + lVar35)) {
            uVar39 = ((iVar41 - local_348._4_4_) + (iVar43 - (int)local_348) * local_2f4) *
                     local_2f0 + local_3a0[2];
            uVar38 = 0;
            if ((int)uVar39 < local_2e8.ArrayNum) {
              uVar38 = ~uVar39 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            if (local_2e8.AllocatorInstance.Data[(int)uVar39] == (FScriptContainerElement)0x0) {
              uVar39 = (local_38c * local_3a0[0] + local_3a0[1]) * local_388 + local_3a0[2];
              uVar38 = 0;
              if ((int)uVar39 < local_380.ArrayNum) {
                uVar38 = ~uVar39 >> 0x1f;
              }
              if ((uVar38 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              FVar32.Data = local_380.AllocatorInstance.Data;
              uVar37 = (local_38c * (int)uStack_330 + uStack_330._4_4_) * local_388 + (int)local_328
              ;
              uVar38 = 0;
              if ((int)uVar37 < local_380.ArrayNum) {
                uVar38 = ~uVar37 >> 0x1f;
              }
              if ((uVar38 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              if (*(double *)(local_380.AllocatorInstance.Data + (longlong)(int)uVar37 * 8) +
                  *(double *)((longlong)&this->_padding_ + local_320) <
                  *(double *)(FVar32.Data + (longlong)(int)uVar39 * 8)) {
                uVar39 = (local_38c * (int)uStack_330 + uStack_330._4_4_) * local_388 +
                         (int)local_328;
                uVar38 = 0;
                if ((int)uVar39 < local_380.ArrayNum) {
                  uVar38 = ~uVar39 >> 0x1f;
                }
                if ((uVar38 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                FVar32.Data = local_380.AllocatorInstance.Data;
                dVar58 = UE::Math::TVector<double>::Component
                                   ((TVector<double> *)&(this->MGrid).field_0x40,local_3c0);
                dVar8 = *(double *)(FVar32.Data + (longlong)(int)uVar39 * 8);
                uVar39 = (local_38c * local_3a0[0] + local_3a0[1]) * local_388 + local_3a0[2];
                uVar38 = 0;
                if ((int)uVar39 < local_380.ArrayNum) {
                  uVar38 = ~uVar39 >> 0x1f;
                }
                if ((uVar38 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                *(double *)(local_380.AllocatorInstance.Data + (longlong)(int)uVar39 * 8) =
                     dVar58 + dVar8;
                uVar39 = ((int)uStack_330 * *(int *)&(this->MNormals).field_0x4 + uStack_330._4_4_)
                         * *(int *)&(this->MNormals).field_0x8 + (int)local_328;
                uVar38 = 0;
                if ((int)uVar39 < *(int *)&(this->MNormals).field_0x18) {
                  uVar38 = ~uVar39 >> 0x1f;
                }
                if ((uVar38 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                lVar45 = *(longlong *)&(this->MNormals).field_0x10;
                auVar57 = *(undefined1 (*) [16])(lVar45 + (longlong)(int)uVar39 * 0x18);
                uVar9 = *(undefined8 *)(lVar45 + 0x10 + (longlong)(int)uVar39 * 0x18);
                uVar39 = (local_3a0[0] * *(int *)&(this->MNormals).field_0x4 + local_3a0[1]) *
                         *(int *)&(this->MNormals).field_0x8 + local_3a0[2];
                uVar38 = 0;
                if ((int)uVar39 < *(int *)&(this->MNormals).field_0x18) {
                  uVar38 = ~uVar39 >> 0x1f;
                }
                if ((uVar38 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                lVar45 = *(longlong *)&(this->MNormals).field_0x10;
                *(undefined1 (*) [16])(lVar45 + (longlong)(int)uVar39 * 0x18) = auVar57;
                *(undefined8 *)(lVar45 + 0x10 + (longlong)(int)uVar39 * 0x18) = uVar9;
              }
              uVar39 = (local_364 * local_3a0[0] + local_3a0[1]) * local_360 + local_3a0[2];
              uVar38 = 0;
              if ((int)uVar39 < local_358.ArrayNum) {
                uVar38 = ~uVar39 >> 0x1f;
              }
              if ((uVar38 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              if (local_358.AllocatorInstance.Data[(int)uVar39] == (FScriptContainerElement)0x0) {
                uVar39 = (local_38c * local_3a0[0] + local_3a0[1]) * local_388 + local_3a0[2];
                uVar38 = 0;
                if ((int)uVar39 < local_380.ArrayNum) {
                  uVar38 = ~uVar39 >> 0x1f;
                }
                if ((uVar38 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                local_220.Second.field0_0x0._0_8_ = CONCAT44(local_3a0[1],local_3a0[0]);
                local_220.Second.field0_0x0._s_0.Z = local_3a0[2];
                local_220.First =
                     (double *)(local_380.AllocatorInstance.Data + (longlong)(int)uVar39 * 8);
                if (((local_3d0.Data <= &local_220) &&
                    (&local_220 <
                     (Pair<double_*,Chaos::TVector<int,3>_> *)
                     (local_3d0.Data + (longlong)local_3c8._4_4_ * 0x18))) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar20)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                iVar43 = (int)local_3c8;
                if ((int)local_3c8 == local_3c8._4_4_) {
                  iVar43 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&local_3d0,(int *)((longlong)&local_3c8 + 4));
                }
                local_3c8 = CONCAT44(local_3c8._4_4_,iVar43 + 1);
                *(double **)&local_3d0.Data[(longlong)iVar43 * 0x18].field_0x0 = local_220.First;
                *(undefined8 *)(local_3d0.Data + (longlong)iVar43 * 0x18 + 8) =
                     local_220.Second.field0_0x0._0_8_;
                *(ulonglong *)(local_3d0.Data + (longlong)iVar43 * 0x18 + 0x10) =
                     CONCAT44(local_220._20_4_,local_220.Second.field0_0x0._s_0.Z);
                uVar39 = (local_364 * local_3a0[0] + local_3a0[1]) * local_360 + local_3a0[2];
                uVar38 = 0;
                if ((int)uVar39 < local_358.ArrayNum) {
                  uVar38 = ~uVar39 >> 0x1f;
                }
                if ((uVar38 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                local_358.AllocatorInstance.Data[(int)uVar39] = (FScriptContainerElement)0x1;
              }
            }
          }
          if (*(int *)((longlong)local_3b8 + lVar35) <
              *(int *)((longlong)&local_268 +
                      (longlong)&(pFVar19->MElements).AllocatorInstance.Data + lVar35)) {
            uVar39 = (local_2f4 * local_3b8[0] + local_3b8[1]) * local_2f0 + local_3b8[2];
            uVar38 = 0;
            if ((int)uVar39 < local_2e8.ArrayNum) {
              uVar38 = ~uVar39 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            if (local_2e8.AllocatorInstance.Data[(int)uVar39] == (FScriptContainerElement)0x0) {
              uVar39 = (local_38c * (int)uStack_330 + uStack_330._4_4_) * local_388 + (int)local_328
              ;
              uVar38 = 0;
              if ((int)uVar39 < local_380.ArrayNum) {
                uVar38 = ~uVar39 >> 0x1f;
              }
              if ((uVar38 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              FVar32.Data = local_380.AllocatorInstance.Data;
              dVar8 = *(double *)((longlong)&this->_padding_ + local_320);
              uVar37 = (local_38c * local_3b8[0] + local_3b8[1]) * local_388 + local_3b8[2];
              uVar38 = 0;
              if ((int)uVar37 < local_380.ArrayNum) {
                uVar38 = ~uVar37 >> 0x1f;
              }
              if ((uVar38 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              uVar38 = 0;
              if (dVar8 + *(double *)(FVar32.Data + (longlong)(int)uVar39 * 8) <
                  *(double *)(local_380.AllocatorInstance.Data + (longlong)(int)uVar37 * 8)) {
                uVar37 = (local_38c * (int)uStack_330 + uStack_330._4_4_) * local_388 +
                         (int)local_328;
                uVar39 = 0;
                if ((int)uVar37 < local_380.ArrayNum) {
                  uVar39 = ~uVar37 >> 0x1f;
                }
                if ((uVar39 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                FVar32.Data = local_380.AllocatorInstance.Data;
                dVar58 = UE::Math::TVector<double>::Component
                                   ((TVector<double> *)&(this->MGrid).field_0x40,local_3c0);
                dVar8 = *(double *)(FVar32.Data + (longlong)(int)uVar37 * 8);
                uVar37 = (local_38c * local_3b8[0] + local_3b8[1]) * local_388 + local_3b8[2];
                uVar39 = 0;
                if ((int)uVar37 < local_380.ArrayNum) {
                  uVar39 = ~uVar37 >> 0x1f;
                }
                if ((uVar39 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                *(double *)(local_380.AllocatorInstance.Data + (longlong)(int)uVar37 * 8) =
                     dVar58 + dVar8;
                uVar37 = ((int)uStack_330 * *(int *)&(this->MNormals).field_0x4 + uStack_330._4_4_)
                         * *(int *)&(this->MNormals).field_0x8 + (int)local_328;
                uVar39 = uVar38;
                if ((int)uVar37 < *(int *)&(this->MNormals).field_0x18) {
                  uVar39 = ~uVar37 >> 0x1f;
                }
                if ((uVar39 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                lVar45 = *(longlong *)&(this->MNormals).field_0x10;
                auVar57 = *(undefined1 (*) [16])(lVar45 + (longlong)(int)uVar37 * 0x18);
                uVar9 = *(undefined8 *)(lVar45 + 0x10 + (longlong)(int)uVar37 * 0x18);
                uVar37 = (local_3b8[0] * *(int *)&(this->MNormals).field_0x4 + local_3b8[1]) *
                         *(int *)&(this->MNormals).field_0x8 + local_3b8[2];
                uVar39 = uVar38;
                if ((int)uVar37 < *(int *)&(this->MNormals).field_0x18) {
                  uVar39 = ~uVar37 >> 0x1f;
                }
                if ((uVar39 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                lVar45 = *(longlong *)&(this->MNormals).field_0x10;
                *(undefined1 (*) [16])(lVar45 + (longlong)(int)uVar37 * 0x18) = auVar57;
                *(undefined8 *)(lVar45 + 0x10 + (longlong)(int)uVar37 * 0x18) = uVar9;
              }
              uVar37 = (local_364 * local_3b8[0] + local_3b8[1]) * local_360 + local_3b8[2];
              uVar39 = uVar38;
              if ((int)uVar37 < local_358.ArrayNum) {
                uVar39 = ~uVar37 >> 0x1f;
              }
              if ((uVar39 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              if (local_358.AllocatorInstance.Data[(int)uVar37] == (FScriptContainerElement)0x0) {
                uVar37 = (local_38c * local_3b8[0] + local_3b8[1]) * local_388 + local_3b8[2];
                uVar39 = uVar38;
                if ((int)uVar37 < local_380.ArrayNum) {
                  uVar39 = ~uVar37 >> 0x1f;
                }
                if ((uVar39 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                local_238.Second.field0_0x0._0_8_ = CONCAT44(local_3b8[1],local_3b8[0]);
                local_238.Second.field0_0x0._s_0.Z = local_3b8[2];
                local_238.First =
                     (double *)(local_380.AllocatorInstance.Data + (longlong)(int)uVar37 * 8);
                if (((local_3d0.Data <= &local_238) &&
                    (&local_238 <
                     (Pair<double_*,Chaos::TVector<int,3>_> *)
                     (local_3d0.Data + (longlong)local_3c8._4_4_ * 0x18))) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar20)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                iVar43 = (int)local_3c8;
                if ((int)local_3c8 == local_3c8._4_4_) {
                  iVar43 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&local_3d0,(int *)((longlong)&local_3c8 + 4));
                }
                local_3c8 = CONCAT44(local_3c8._4_4_,iVar43 + 1);
                *(double **)&local_3d0.Data[(longlong)iVar43 * 0x18].field_0x0 = local_238.First;
                *(undefined8 *)(local_3d0.Data + (longlong)iVar43 * 0x18 + 8) =
                     local_238.Second.field0_0x0._0_8_;
                *(ulonglong *)(local_3d0.Data + (longlong)iVar43 * 0x18 + 0x10) =
                     CONCAT44(local_238._20_4_,local_238.Second.field0_0x0._s_0.Z);
                uVar39 = (local_364 * local_3b8[0] + local_3b8[1]) * local_360 + local_3b8[2];
                if ((int)uVar39 < local_358.ArrayNum) {
                  uVar38 = ~uVar39 >> 0x1f;
                }
                if ((uVar38 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                local_358.AllocatorInstance.Data[(int)uVar39] = (FScriptContainerElement)0x1;
              }
            }
          }
          lVar35 = lVar35 + 4;
          local_320 = local_320 + 8;
          local_3c0 = local_3c0 + 1;
        } while ((int)local_3c0 < 3);
        AlgoImpl::
        HeapifyInternal<Chaos::Pair<double_*,Chaos::TVector<int,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double_*,Chaos::TVector<int,3>_>,bool___cdecl(Chaos::Pair<double_*,Chaos::TVector<int,3>_>_const_&,Chaos::Pair<double_*,Chaos::TVector<int,3>_>_const_&)>_>
                  ((Pair<double_*,Chaos::TVector<int,3>_> *)local_3d0.Data,(int)local_3c8,
                   local_3d8[0],
                   (TDereferenceWrapper<Chaos::Pair<double_*,Chaos::TVector<int,3>_>,bool___cdecl(Chaos::Pair<double_*,Chaos::TVector<int,3>_>_const_&,Chaos::Pair<double_*,Chaos::TVector<int,3>_>_const_&)>
                    )0x143bf5a00);
        bVar20 = (int)local_3c8 == 0;
      } while (!bVar20);
    }
    local_188.HashSize = 0;
    if (local_188.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_188.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<Chaos::TVector<int,3>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<Chaos::TVector<int,3>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_188.Elements);
    if ((Pair<double_*,Chaos::TVector<int,3>_> *)local_3d0.Data !=
        (Pair<double_*,Chaos::TVector<int,3>_> *)0x0) {
      FMemory::Free(local_3d0.Data);
    }
    if (local_380.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_380.AllocatorInstance.Data);
    }
    if (local_358.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.AllocatorInstance.Data);
    }
    if (local_2e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.AllocatorInstance.Data);
    }
  }
  if (local_2d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.AllocatorInstance.Data);
  }
  return;
}

// ComputeNormals @ 143bfbe10

void __thiscall Chaos::FLevelSet::ComputeNormals(FLevelSet *this)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  
  iVar13 = 0;
  if (0 < *(int *)&(this->MGrid).field_0x30) {
    uVar34 = SUB84(__real_3fe0000000000000,0);
    uVar35 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
    do {
      iVar14 = 0;
      if (0 < *(int *)&(this->MGrid).field_0x34) {
        do {
          iVar10 = 0;
          if (0 < *(int *)&(this->MGrid).field_0x38) {
            do {
              dVar16 = *(double *)&(this->MGrid).field_0x50;
              auVar30._8_8_ = 0;
              auVar30._0_8_ = dVar16;
              dVar6 = *(double *)&(this->MGrid).field_0x40;
              dVar7 = *(double *)&(this->MGrid).field_0x48;
              dVar17 = ((double)iVar13 + (double)CONCAT44(uVar35,uVar34)) *
                       *(double *)&(this->MGrid).field_0x40 + *(double *)&this->MGrid;
              dVar33 = ((double)iVar10 + (double)CONCAT44(uVar35,uVar34)) *
                       *(double *)&(this->MGrid).field_0x50 + *(double *)&(this->MGrid).field_0x10;
              dVar19 = ((double)iVar14 + (double)CONCAT44(uVar35,uVar34)) *
                       *(double *)&(this->MGrid).field_0x48 + *(double *)&(this->MGrid).field_0x8;
              local_208 = dVar33 - dVar16;
              local_218 = dVar17;
              local_210 = dVar19;
              local_f8 = dVar6;
              dStack_f0 = dVar7;
              local_e8 = dVar16;
              TUniformGrid<double,3>::ClampMinusHalf
                        (&this->MGrid,(TVector<double,3> *)&local_188,
                         (TVector<double,3> *)&local_218);
              auVar27._0_8_ =
                   (local_188 - local_218) * (local_188 - local_218) +
                   (local_180 - local_210) * (local_180 - local_210) +
                   (local_178 - local_208) * (local_178 - local_208);
              auVar27._8_8_ = 0;
              dVar15 = TUniformGridBase<double,3>::LinearlyInterpolate<double>
                                 ((TUniformGridBase<double,3> *)&this->MGrid,&this->MPhi,
                                  (TVector<double,3> *)&local_188);
              if (auVar27._0_8_ <= 0.0) {
                auVar28._8_4_ = (int)extraout_XMM0_Qb;
                auVar28._0_8_ = dVar15;
                auVar28._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
              }
              else {
                auVar27 = sqrtpd(unaff_XMM7,auVar27);
                auVar28._8_8_ = auVar27._8_8_;
                auVar28._0_8_ = auVar27._0_8_ + dVar15;
              }
              local_1f0 = dVar16 + dVar33;
              local_200 = dVar17;
              local_1f8 = dVar19;
              TUniformGrid<double,3>::ClampMinusHalf
                        (&this->MGrid,(TVector<double,3> *)&local_170,
                         (TVector<double,3> *)&local_200);
              auVar20._0_8_ =
                   (local_170 - local_200) * (local_170 - local_200) +
                   (local_168 - local_1f8) * (local_168 - local_1f8) +
                   (local_160 - local_1f0) * (local_160 - local_1f0);
              auVar20._8_8_ = 0;
              dVar15 = TUniformGridBase<double,3>::LinearlyInterpolate<double>
                                 ((TUniformGridBase<double,3> *)&this->MGrid,&this->MPhi,
                                  (TVector<double,3> *)&local_170);
              if (auVar20._0_8_ <= 0.0) {
                auVar32._8_4_ = (int)extraout_XMM0_Qb_00;
                auVar32._0_8_ = dVar15;
                auVar32._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
              }
              else {
                auVar27 = sqrtpd(unaff_XMM9,auVar20);
                auVar32._8_8_ = auVar27._8_8_;
                auVar32._0_8_ = auVar27._0_8_ + dVar15;
              }
              unaff_XMM9._8_8_ = auVar32._8_8_;
              unaff_XMM9._0_8_ =
                   (auVar32._0_8_ - auVar28._0_8_) * ((double)CONCAT44(uVar35,uVar34) / dVar16);
              local_1e0 = dVar19 - dVar7;
              local_1e8 = dVar17;
              local_1d8 = dVar33;
              TUniformGrid<double,3>::ClampMinusHalf
                        (&this->MGrid,(TVector<double,3> *)&local_158,
                         (TVector<double,3> *)&local_1e8);
              auVar21._0_8_ =
                   (local_158 - local_1e8) * (local_158 - local_1e8) +
                   (local_150 - local_1e0) * (local_150 - local_1e0) +
                   (local_148 - local_1d8) * (local_148 - local_1d8);
              auVar21._8_8_ = 0;
              dVar16 = TUniformGridBase<double,3>::LinearlyInterpolate<double>
                                 ((TUniformGridBase<double,3> *)&this->MGrid,&this->MPhi,
                                  (TVector<double,3> *)&local_158);
              if (auVar21._0_8_ <= 0.0) {
                auVar31._8_4_ = (int)extraout_XMM0_Qb_01;
                auVar31._0_8_ = dVar16;
                auVar31._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
              }
              else {
                auVar27 = sqrtpd(auVar30,auVar21);
                auVar31._8_8_ = auVar27._8_8_;
                auVar31._0_8_ = auVar27._0_8_ + dVar16;
              }
              local_1c8 = dVar7 + dVar19;
              local_1d0 = dVar17;
              local_1c0 = dVar33;
              TUniformGrid<double,3>::ClampMinusHalf
                        (&this->MGrid,(TVector<double,3> *)&local_140,
                         (TVector<double,3> *)&local_1d0);
              auVar22._0_8_ =
                   (local_140 - local_1d0) * (local_140 - local_1d0) +
                   (local_138 - local_1c8) * (local_138 - local_1c8) +
                   (local_130 - local_1c0) * (local_130 - local_1c0);
              auVar22._8_8_ = 0;
              dVar16 = TUniformGridBase<double,3>::LinearlyInterpolate<double>
                                 ((TUniformGridBase<double,3> *)&this->MGrid,&this->MPhi,
                                  (TVector<double,3> *)&local_140);
              if (auVar22._0_8_ <= 0.0) {
                auVar29._8_4_ = (int)extraout_XMM0_Qb_02;
                auVar29._0_8_ = dVar16;
                auVar29._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
              }
              else {
                auVar27 = sqrtpd(auVar28,auVar22);
                auVar29._8_8_ = auVar27._8_8_;
                auVar29._0_8_ = auVar27._0_8_ + dVar16;
              }
              unaff_XMM7._8_8_ = auVar29._8_8_;
              unaff_XMM7._0_8_ = (auVar29._0_8_ - auVar31._0_8_) * (__real_3fe0000000000000 / dVar7)
              ;
              local_1b8 = dVar17 - dVar6;
              local_1b0 = dVar19;
              local_1a8 = dVar33;
              TUniformGrid<double,3>::ClampMinusHalf
                        (&this->MGrid,(TVector<double,3> *)&local_128,
                         (TVector<double,3> *)&local_1b8);
              auVar23._0_8_ =
                   (local_128 - local_1b8) * (local_128 - local_1b8) +
                   (local_120 - local_1b0) * (local_120 - local_1b0) +
                   (local_118 - local_1a8) * (local_118 - local_1a8);
              auVar23._8_8_ = 0;
              dVar16 = TUniformGridBase<double,3>::LinearlyInterpolate<double>
                                 ((TUniformGridBase<double,3> *)&this->MGrid,&this->MPhi,
                                  (TVector<double,3> *)&local_128);
              if (0.0 < auVar23._0_8_) {
                auVar27 = sqrtpd(auVar31,auVar23);
                dVar16 = auVar27._0_8_ + dVar16;
              }
              local_1a0 = dVar17 + dVar6;
              local_198 = dVar19;
              local_190 = dVar33;
              TUniformGrid<double,3>::ClampMinusHalf
                        (&this->MGrid,(TVector<double,3> *)&local_110,
                         (TVector<double,3> *)&local_1a0);
              auVar24._0_8_ =
                   (local_110 - local_1a0) * (local_110 - local_1a0) +
                   (local_108 - local_198) * (local_108 - local_198) +
                   (local_100 - local_190) * (local_100 - local_190);
              auVar24._8_8_ = 0;
              dVar17 = TUniformGridBase<double,3>::LinearlyInterpolate<double>
                                 ((TUniformGridBase<double,3> *)&this->MGrid,&this->MPhi,
                                  (TVector<double,3> *)&local_110);
              if (auVar24._0_8_ <= 0.0) {
                auVar25._8_4_ = (int)extraout_XMM0_Qb_03;
                auVar25._0_8_ = dVar17;
                auVar25._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
              }
              else {
                auVar27 = sqrtpd(auVar24,auVar24);
                auVar25._8_8_ = auVar27._8_8_;
                auVar25._0_8_ = auVar27._0_8_ + dVar17;
              }
              uVar34 = SUB84(__real_3fe0000000000000,0);
              uVar35 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
              auVar26._8_8_ = auVar25._8_8_;
              auVar26._0_8_ = (auVar25._0_8_ - dVar16) * (__real_3fe0000000000000 / dVar6);
              uVar11 = (iVar13 * *(int *)&(this->MNormals).field_0x4 + iVar14) *
                       *(int *)&(this->MNormals).field_0x8 + iVar10;
              uVar12 = 0;
              if ((int)uVar11 < *(int *)&(this->MNormals).field_0x18) {
                uVar12 = ~uVar11 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar9 = (longlong)(int)uVar11;
              lVar4 = *(longlong *)&(this->MNormals).field_0x10;
              *(double *)(lVar4 + lVar9 * 0x18) = auVar26._0_8_;
              *(double *)(lVar4 + 8 + lVar9 * 0x18) = unaff_XMM7._0_8_;
              *(double *)(lVar4 + 0x10 + lVar9 * 0x18) = unaff_XMM9._0_8_;
              uVar11 = (iVar13 * *(int *)&(this->MNormals).field_0x4 + iVar14) *
                       *(int *)&(this->MNormals).field_0x8 + iVar10;
              uVar12 = 0;
              if ((int)uVar11 < *(int *)&(this->MNormals).field_0x18) {
                uVar12 = ~uVar11 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar3 = *(int *)&(this->MNormals).field_0x18;
              lVar9 = (longlong)(int)uVar11;
              lVar4 = *(longlong *)&(this->MNormals).field_0x10;
              dVar16 = *(double *)(lVar4 + 8 + lVar9 * 0x18);
              dVar17 = *(double *)(lVar4 + lVar9 * 0x18);
              dVar19 = *(double *)(lVar4 + 0x10 + lVar9 * 0x18);
              auVar18._0_8_ = dVar16 * dVar16 + dVar17 * dVar17 + dVar19 * dVar19;
              auVar18._8_8_ = 0;
              uVar12 = (iVar14 + *(int *)&(this->MNormals).field_0x4 * iVar13) *
                       *(int *)&(this->MNormals).field_0x8 + iVar10;
              auVar27 = sqrtpd(auVar26,auVar18);
              if (auVar27._0_8_ <= __real_3e45798ee0000000) {
                uVar11 = 0;
                if ((int)uVar12 < iVar3) {
                  uVar11 = ~uVar12 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                lVar9 = (longlong)(int)uVar12;
                lVar4 = *(longlong *)&(this->MNormals).field_0x10;
                *(undefined8 *)(lVar4 + lVar9 * 0x18) = 0;
                *(undefined8 *)(lVar4 + 8 + lVar9 * 0x18) = 0;
                *(undefined8 *)(lVar4 + 0x10 + lVar9 * 0x18) = 0;
                uVar11 = (iVar13 * *(int *)&(this->MNormals).field_0x4 + iVar14) *
                         *(int *)&(this->MNormals).field_0x8 + iVar10;
                uVar12 = 0;
                if ((int)uVar11 < *(int *)&(this->MNormals).field_0x18) {
                  uVar12 = ~uVar11 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                *(undefined8 *)
                 (*(longlong *)&(this->MNormals).field_0x10 + (longlong)(int)uVar11 * 0x18) =
                     0x3ff0000000000000;
              }
              else {
                uVar11 = 0;
                if ((int)uVar12 < iVar3) {
                  uVar11 = ~uVar12 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                dVar19 = __real_3ff0000000000000 / auVar27._0_8_;
                lVar9 = (longlong)(int)uVar12;
                lVar4 = *(longlong *)&(this->MNormals).field_0x10;
                pdVar1 = (double *)(lVar4 + lVar9 * 0x18);
                dVar17 = pdVar1[1];
                dVar16 = *(double *)(lVar4 + 0x10 + lVar9 * 0x18);
                pdVar2 = (double *)(lVar4 + lVar9 * 0x18);
                *pdVar2 = *pdVar1 * dVar19;
                pdVar2[1] = dVar17 * dVar19;
                *(double *)(lVar4 + 0x10 + lVar9 * 0x18) = dVar19 * dVar16;
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)&(this->MGrid).field_0x38);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < *(int *)&(this->MGrid).field_0x34);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)&(this->MGrid).field_0x30);
  }
  return;
}

// ComputePhi @ 143bfc620

double __thiscall
Chaos::FLevelSet::ComputePhi(FLevelSet *this,TArrayND<bool,3> *param_1,TVector<int,3> *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  longlong lVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  int *piVar24;
  double *pdVar25;
  int iVar26;
  uint uVar27;
  double dVar28;
  undefined1 auVar29 [16];
  uint uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStackY_1e8 [24];
  undefined8 uStackY_1d0;
  int local_178;
  int local_174;
  int local_170;
  double local_168 [6];
  int local_138 [3];
  int local_12c [3];
  undefined1 *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  
  uVar22 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar30 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  pdVar25 = (double *)&(this->MGrid).field_0x40;
  piVar24 = (int *)&(this->MGrid).field_0x30;
  local_e8 = (longlong)local_12c - (longlong)this;
  local_f8 = (longlong)&local_178 - (longlong)this;
  local_100 = 3;
  local_f0 = (longlong)local_138 - (longlong)this;
  local_108 = auStackY_1e8 + -(longlong)this;
  iVar26 = 0;
  lVar23 = 0;
  uVar27 = 0;
  do {
    lVar12 = local_e8;
    lVar7 = local_f8;
    iVar16 = (param_2->field0_0x0)._s_0.X;
    iVar20 = (param_2->field0_0x0)._s_0.Y;
    iVar18 = (param_2->field0_0x0)._s_0.Z;
    local_138[0] = 0;
    local_138[1] = 0;
    local_12c[0] = 0;
    local_12c[1] = 0;
    local_138[2] = 0;
    *(undefined4 *)(local_f0 + -0x50 + (longlong)piVar24) = 1;
    iVar14 = local_138[0] + iVar16;
    local_12c[2] = 0;
    iVar15 = local_138[1] + iVar20;
    *(undefined4 *)(lVar12 + -0x50 + (longlong)piVar24) = 1;
    local_178 = iVar16 - local_12c[0];
    local_174 = iVar20 - local_12c[1];
    iVar16 = local_138[2] + iVar18;
    local_170 = iVar18 - local_12c[2];
    if (*(int *)(lVar7 + -0x50 + (longlong)piVar24) < 0) {
LAB_143bfcc79:
      if (*(int *)(local_108 + (longlong)piVar24) < *piVar24) {
        uVar17 = iVar16 + (iVar14 * *(int *)&param_1->field_0x4 + iVar15) *
                          *(int *)&param_1->field_0x8;
        uVar21 = 0;
        if ((int)uVar17 < *(int *)&param_1->field_0x18) {
          uVar21 = ~uVar17 >> 0x1f;
        }
        if (uVar21 == 0) {
          uStackY_1d0 = 0x143bfcce6;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            dVar28 = (double)(*pcVar8)();
            return dVar28;
          }
        }
        if (*(char *)((longlong)(int)uVar17 + *(longlong *)&param_1->field_0x10) != '\0') {
          dVar28 = *pdVar25;
          if (2 < uVar27) {
            uStackY_1d0 = 0x143bfcd39;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                ,0x7a2,L"");
            if (bVar13) {
              pcVar8 = (code *)swi(3);
              dVar28 = (double)(*pcVar8)();
              return dVar28;
            }
          }
          iVar20 = *(int *)&(this->MPhi).field_0x4;
          iVar18 = *(int *)&(this->MPhi).field_0x18;
          local_168[lVar23 + 3] = dVar28;
          uVar17 = (iVar14 * iVar20 + iVar15) * *(int *)&(this->MPhi).field_0x8 + iVar16;
          uVar21 = 0;
          if ((int)uVar17 < iVar18) {
            uVar21 = ~uVar17 >> 0x1f;
          }
          if (uVar21 == 0) {
            uStackY_1d0 = 0x143bfcda3;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar8 = (code *)swi(3);
              dVar28 = (double)(*pcVar8)();
              return dVar28;
            }
          }
          uVar4 = *(undefined8 *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar17 * 8)
          ;
          uVar34 = (undefined4)uVar4;
          uVar35 = (undefined4)((ulonglong)uVar4 >> 0x20);
          if ((iVar26 < 0) || (2 < lVar23)) {
            uStackY_1d0 = 0x143bfcde7;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                ,0x7a2,L"");
            if (bVar13) {
              pcVar8 = (code *)swi(3);
              dVar28 = (double)(*pcVar8)();
              return dVar28;
            }
          }
          goto LAB_143bfca92;
        }
      }
    }
    else {
      puVar1 = &param_1->field_0x4;
      puVar2 = &param_1->field_0x8;
      puVar3 = &param_1->field_0x18;
      uVar17 = (local_178 * *(int *)&param_1->field_0x4 + local_174) * *(int *)puVar2 + local_170;
      uVar21 = 0;
      if ((int)uVar17 < *(int *)puVar3) {
        uVar21 = ~uVar17 >> 0x1f;
      }
      local_120 = puVar1;
      local_118 = puVar2;
      local_110 = puVar3;
      if (uVar21 == 0) {
        uStackY_1d0 = 0x143bfc7c8;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar8 = (code *)swi(3);
          dVar28 = (double)(*pcVar8)();
          return dVar28;
        }
      }
      if (*(char *)((longlong)(int)uVar17 + *(longlong *)&param_1->field_0x10) == '\0')
      goto LAB_143bfcc79;
      if (*(int *)(local_108 + (longlong)piVar24) < *piVar24) {
        uVar17 = (iVar14 * *(int *)puVar1 + iVar15) * *(int *)puVar2 + iVar16;
        uVar21 = 0;
        if ((int)uVar17 < *(int *)puVar3) {
          uVar21 = ~uVar17 >> 0x1f;
        }
        if (uVar21 == 0) {
          uStackY_1d0 = 0x143bfc884;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            dVar28 = (double)(*pcVar8)();
            return dVar28;
          }
        }
        if (*(char *)((longlong)(int)uVar17 + *(longlong *)&param_1->field_0x10) == '\0')
        goto LAB_143bfcc02;
        dVar28 = *pdVar25;
        if (2 < uVar27) {
          uStackY_1d0 = 0x143bfc8d1;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L"");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            dVar28 = (double)(*pcVar8)();
            return dVar28;
          }
        }
        iVar20 = *(int *)&(this->MPhi).field_0x4;
        iVar18 = *(int *)&(this->MPhi).field_0x18;
        local_168[lVar23 + 3] = dVar28;
        uVar17 = (local_178 * iVar20 + local_174) * *(int *)&(this->MPhi).field_0x8 + local_170;
        uVar21 = 0;
        if ((int)uVar17 < iVar18) {
          uVar21 = ~uVar17 >> 0x1f;
        }
        if (uVar21 == 0) {
          uStackY_1d0 = 0x143bfc93b;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            dVar28 = (double)(*pcVar8)();
            return dVar28;
          }
        }
        lVar7 = *(longlong *)&(this->MPhi).field_0x10;
        uVar19 = (iVar14 * *(int *)&(this->MPhi).field_0x4 + iVar15) *
                 *(int *)&(this->MPhi).field_0x8 + iVar16;
        uVar21 = 0;
        if ((int)uVar19 < *(int *)&(this->MPhi).field_0x18) {
          uVar21 = ~uVar19 >> 0x1f;
        }
        if (uVar21 == 0) {
          uStackY_1d0 = 0x143bfc9b0;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            dVar28 = (double)(*pcVar8)();
            return dVar28;
          }
        }
        iVar6 = *(int *)&(this->MPhi).field_0x4;
        iVar20 = *(int *)&(this->MPhi).field_0x8;
        iVar18 = *(int *)&(this->MPhi).field_0x18;
        uVar4 = *(undefined8 *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar19 * 8);
        uVar5 = *(undefined8 *)(lVar7 + (longlong)(int)uVar17 * 8);
        if ((double)CONCAT44((uint)((ulonglong)uVar5 >> 0x20) & uVar22,(uint)uVar5 & uVar30) <=
            (double)CONCAT44((uint)((ulonglong)uVar4 >> 0x20) & uVar22,(uint)uVar4 & uVar30)) {
          iVar20 = (local_178 * iVar6 + local_174) * iVar20;
          goto LAB_143bfcb94;
        }
        uVar17 = (iVar14 * iVar6 + iVar15) * iVar20 + iVar16;
        uVar21 = 0;
        if ((int)uVar17 < iVar18) {
          uVar21 = ~uVar17 >> 0x1f;
        }
        if (uVar21 == 0) {
          uStackY_1d0 = 0x143bfca4a;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            dVar28 = (double)(*pcVar8)();
            return dVar28;
          }
        }
        uVar4 = *(undefined8 *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar17 * 8);
        uVar34 = (undefined4)uVar4;
        uVar35 = (undefined4)((ulonglong)uVar4 >> 0x20);
        if (2 < uVar27) goto LAB_143bfca65;
      }
      else {
LAB_143bfcc02:
        dVar28 = *pdVar25;
        if (2 < uVar27) {
          uStackY_1d0 = 0x143bfcc31;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L"");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            dVar28 = (double)(*pcVar8)();
            return dVar28;
          }
        }
        iVar16 = *(int *)&(this->MPhi).field_0x4;
        iVar18 = *(int *)&(this->MPhi).field_0x18;
        local_168[lVar23 + 3] = dVar28;
        iVar20 = (local_178 * iVar16 + local_174) * *(int *)&(this->MPhi).field_0x8;
LAB_143bfcb94:
        uVar17 = iVar20 + local_170;
        uVar21 = 0;
        if ((int)uVar17 < iVar18) {
          uVar21 = ~uVar17 >> 0x1f;
        }
        if (uVar21 == 0) {
          uStackY_1d0 = 0x143bfcbd5;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            dVar28 = (double)(*pcVar8)();
            return dVar28;
          }
        }
        uVar4 = *(undefined8 *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar17 * 8);
        uVar34 = (undefined4)uVar4;
        uVar35 = (undefined4)((ulonglong)uVar4 >> 0x20);
        if ((iVar26 < 0) || (2 < lVar23)) {
LAB_143bfca65:
          uStackY_1d0 = 0x143bfca85;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L"");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            dVar28 = (double)(*pcVar8)();
            return dVar28;
          }
        }
      }
LAB_143bfca92:
      iVar26 = iVar26 + 1;
      uVar27 = uVar27 + 1;
      local_168[lVar23] = (double)CONCAT44(uVar35,uVar34);
      lVar23 = lVar23 + 1;
    }
    pdVar25 = pdVar25 + 1;
    piVar24 = piVar24 + 1;
    local_100 = local_100 + -1;
    if (local_100 == 0) {
      iVar16 = *(int *)&(this->MPhi).field_0x18;
      uVar27 = ((param_2->field0_0x0)._s_0.X * *(int *)&(this->MPhi).field_0x4 +
               (param_2->field0_0x0)._s_0.Y) * *(int *)&(this->MPhi).field_0x8 +
               (param_2->field0_0x0)._s_0.Z;
      if (iVar26 == 1) {
        uVar21 = 0;
        if ((int)uVar27 < iVar16) {
          uVar21 = ~uVar27 >> 0x1f;
        }
        if (uVar21 == 0) {
          uStackY_1d0 = 0x143bfcb59;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            dVar28 = (double)(*pcVar8)();
            return dVar28;
          }
        }
        if (*(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar27 * 8) <= 0.0) {
          uVar34 = SUB84(__real_bff0000000000000,0);
          uVar35 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
        }
        else {
          uVar34 = SUB84(__real_3ff0000000000000,0);
          uVar35 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        }
        dVar28 = (double)CONCAT44((uint)((ulonglong)local_168[0] >> 0x20) & uVar22,
                                  SUB84(local_168[0],0) & uVar30) + local_168[3];
        uVar21 = ((param_2->field0_0x0)._s_0.X * *(int *)&(this->MPhi).field_0x4 +
                 (param_2->field0_0x0)._s_0.Y) * *(int *)&(this->MPhi).field_0x8 +
                 (param_2->field0_0x0)._s_0.Z;
        uVar27 = 0;
        if ((int)uVar21 < *(int *)&(this->MPhi).field_0x18) {
          uVar27 = ~uVar21 >> 0x1f;
        }
        if (uVar27 == 0) {
          uStackY_1d0 = 0x143bfce7a;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            dVar28 = (double)(*pcVar8)();
            return dVar28;
          }
        }
        uVar4 = *(undefined8 *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar21 * 8);
        if ((double)CONCAT44((uint)((ulonglong)uVar4 >> 0x20) & uVar22,(uint)uVar4 & uVar30) <
            dVar28) {
          uStackY_1d0 = 0x143bfceb9;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("NewPhi <= FGenericPlatformMath::Abs(MPhi(CellIndex))",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Levelset.cpp"
                              ,0x4ca,L"");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            dVar28 = (double)(*pcVar8)();
            return dVar28;
          }
        }
        dVar28 = dVar28 * (double)CONCAT44(uVar35,uVar34);
      }
      else {
        uVar21 = 0;
        if ((int)uVar27 < iVar16) {
          uVar21 = ~uVar27 >> 0x1f;
        }
        if (uVar21 == 0) {
          uStackY_1d0 = 0x143bfcf62;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            dVar28 = (double)(*pcVar8)();
            return dVar28;
          }
        }
        uStackY_1d0 = 0x143bfcfb1;
        dVar28 = SolveQuadraticEquation
                           (*(double *)
                             (*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar27 * 8),
                            local_168[0],local_168[1],local_168[3],local_168[4]);
        if ((iVar26 != 2) &&
           (uVar27 = SUB84(dVar28,0) & uVar30, uVar21 = (uint)((ulonglong)dVar28 >> 0x20) & uVar22,
           dVar31 = (double)CONCAT44((uint)((ulonglong)local_168[2] >> 0x20) & uVar22,
                                     SUB84(local_168[2],0) & uVar30),
           dVar31 < (double)CONCAT44(uVar21,uVar27) || dVar31 == (double)CONCAT44(uVar21,uVar27))) {
          uVar22 = ((param_2->field0_0x0)._s_0.X * *(int *)&(this->MPhi).field_0x4 +
                   (param_2->field0_0x0)._s_0.Y) * *(int *)&(this->MPhi).field_0x8 +
                   (param_2->field0_0x0)._s_0.Z;
          uVar30 = 0;
          if ((int)uVar22 < *(int *)&(this->MPhi).field_0x18) {
            uVar30 = ~uVar22 >> 0x1f;
          }
          if (uVar30 == 0) {
            uStackY_1d0 = 0x143bfd04b;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar8 = (code *)swi(3);
              dVar28 = (double)(*pcVar8)();
              return dVar28;
            }
          }
          uStackY_1d0 = 0x143bfd09e;
          dVar28 = SolveQuadraticEquation
                             (*(double *)
                               (*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar22 * 8),
                              local_168[0],local_168[2],local_168[3],local_168[5]);
          dVar31 = (double)CONCAT44((uint)((ulonglong)local_168[1] >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(local_168[1],0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          uVar30 = SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar22 = (uint)((ulonglong)dVar28 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          if (dVar31 < (double)CONCAT44(uVar22,uVar30) || dVar31 == (double)CONCAT44(uVar22,uVar30))
          {
            uVar22 = (*(int *)&(this->MPhi).field_0x4 * (param_2->field0_0x0)._s_0.X +
                     (param_2->field0_0x0)._s_0.Y) * *(int *)&(this->MPhi).field_0x8 +
                     (param_2->field0_0x0)._s_0.Z;
            uVar30 = 0;
            if ((int)uVar22 < *(int *)&(this->MPhi).field_0x18) {
              uVar30 = ~uVar22 >> 0x1f;
            }
            if (uVar30 == 0) {
              uStackY_1d0 = 0x143bfd127;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar8 = (code *)swi(3);
                dVar28 = (double)(*pcVar8)();
                return dVar28;
              }
            }
            uStackY_1d0 = 0x143bfd17a;
            dVar28 = SolveQuadraticEquation
                               (*(double *)
                                 (*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar22 * 8)
                                ,local_168[1],local_168[2],local_168[4],local_168[5]);
            dVar31 = (double)CONCAT44((uint)((ulonglong)local_168[0] >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(local_168[0],0) &
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff);
            uVar30 = SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
            uVar22 = (uint)((ulonglong)dVar28 >> 0x20) &
                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
            if (dVar31 < (double)CONCAT44(uVar22,uVar30) ||
                dVar31 == (double)CONCAT44(uVar22,uVar30)) {
              uVar22 = (*(int *)&(this->MPhi).field_0x4 * (param_2->field0_0x0)._s_0.X +
                       (param_2->field0_0x0)._s_0.Y) * *(int *)&(this->MPhi).field_0x8 +
                       (param_2->field0_0x0)._s_0.Z;
              uVar30 = 0;
              if ((int)uVar22 < *(int *)&(this->MPhi).field_0x18) {
                uVar30 = ~uVar22 >> 0x1f;
              }
              if (uVar30 == 0) {
                uStackY_1d0 = 0x143bfd1f5;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar13) {
                  pcVar8 = (code *)swi(3);
                  dVar28 = (double)(*pcVar8)();
                  return dVar28;
                }
              }
              dVar31 = __real_bff0000000000000;
              if (0.0 < *(double *)
                         (*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar22 * 8)) {
                dVar31 = __real_3ff0000000000000;
              }
              dVar10 = local_168[3] * local_168[3];
              dVar32 = local_168[4] * local_168[4];
              dVar33 = local_168[5] * local_168[5];
              auVar29._0_8_ = (local_168[1] - local_168[2]) * (local_168[1] - local_168[2]) * dVar10
              ;
              auVar29._8_8_ = 0;
              dVar28 = dVar10 * dVar33 + dVar10 * dVar32 + dVar33 * dVar32;
              dVar11 = ((dVar28 - auVar29._0_8_) -
                       (local_168[0] - local_168[2]) * (local_168[0] - local_168[2]) * dVar32) -
                       (local_168[0] - local_168[1]) * (local_168[0] - local_168[1]) * dVar33;
              if (dVar11 <= __real_0000000000000000) {
                dVar11 = __real_0000000000000000;
              }
              auVar9._8_8_ = 0;
              auVar9._0_8_ = dVar11;
              auVar29 = sqrtpd(auVar29,auVar9);
              dVar28 = (auVar29._0_8_ * local_168[4] * local_168[3] * local_168[5] * dVar31 +
                        local_168[1] * dVar10 * dVar33 +
                       local_168[2] * dVar10 * dVar32 + local_168[0] * dVar33 * dVar32) / dVar28;
            }
          }
        }
      }
      return dVar28;
    }
  } while( true );
}

// CopyGeometry @ 143bfe810

TRefCountPtr<Chaos::FImplicitObject> __thiscall Chaos::FLevelSet::CopyGeometry(FLevelSet *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FLevelSet *pFVar3;
  FImplicitObject *in_RDX;
  
  pFVar3 = ::operator_new(0x120);
  if (pFVar3 == (FLevelSet *)0x0) {
    pFVar3 = (FLevelSet *)0x0;
  }
  else {
    pFVar3 = FLevelSet(pFVar3);
  }
  uVar1 = *(undefined8 *)&(this->MGrid).field_0x8;
  *(undefined8 *)&pFVar3->MGrid = *(undefined8 *)&this->MGrid;
  *(undefined8 *)&(pFVar3->MGrid).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(this->MGrid).field_0x18;
  *(undefined8 *)&(pFVar3->MGrid).field_0x10 = *(undefined8 *)&(this->MGrid).field_0x10;
  *(undefined8 *)&(pFVar3->MGrid).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(this->MGrid).field_0x28;
  *(undefined8 *)&(pFVar3->MGrid).field_0x20 = *(undefined8 *)&(this->MGrid).field_0x20;
  *(undefined8 *)&(pFVar3->MGrid).field_0x28 = uVar1;
  uVar1 = *(undefined8 *)&(this->MGrid).field_0x38;
  *(undefined8 *)&(pFVar3->MGrid).field_0x30 = *(undefined8 *)&(this->MGrid).field_0x30;
  *(undefined8 *)&(pFVar3->MGrid).field_0x38 = uVar1;
  uVar1 = *(undefined8 *)&(this->MGrid).field_0x48;
  *(undefined8 *)&(pFVar3->MGrid).field_0x40 = *(undefined8 *)&(this->MGrid).field_0x40;
  *(undefined8 *)&(pFVar3->MGrid).field_0x48 = uVar1;
  *(undefined8 *)&(pFVar3->MGrid).field_0x50 = *(undefined8 *)&(this->MGrid).field_0x50;
  *(undefined8 *)&pFVar3->MPhi = *(undefined8 *)&this->MPhi;
  *(undefined4 *)&(pFVar3->MPhi).field_0x8 = *(undefined4 *)&(this->MPhi).field_0x8;
  TArray<double,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<double,TSizedDefaultAllocator<32>_> *)&(pFVar3->MPhi).field_0x10,
             (TArray<double,TSizedDefaultAllocator<32>_> *)&(this->MPhi).field_0x10);
  *(undefined8 *)&pFVar3->MNormals = *(undefined8 *)&this->MNormals;
  *(undefined4 *)&(pFVar3->MNormals).field_0x8 = *(undefined4 *)&(this->MNormals).field_0x8;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)
             &(pFVar3->MNormals).field_0x10,
             (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)
             &(this->MNormals).field_0x10);
  uVar1 = *(undefined8 *)&(this->MLocalBoundingBox).MMin;
  uVar2 = *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8;
  in_RDX->_padding_ = (longlong)pFVar3;
  *(undefined8 *)&(pFVar3->MLocalBoundingBox).MMin = uVar1;
  *(undefined8 *)&(pFVar3->MLocalBoundingBox).MMin.field_0x8 = uVar2;
  *(undefined8 *)&(pFVar3->MLocalBoundingBox).MMin.field_0x10 =
       *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10;
  uVar1 = *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(pFVar3->MLocalBoundingBox).MMax = *(undefined8 *)&(this->MLocalBoundingBox).MMax;
  *(undefined8 *)&(pFVar3->MLocalBoundingBox).MMax.field_0x8 = uVar1;
  *(undefined8 *)&(pFVar3->MLocalBoundingBox).MMax.field_0x10 =
       *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10;
  uVar1 = *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(pFVar3->MOriginalLocalBoundingBox).MMin =
       *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin;
  *(undefined8 *)&(pFVar3->MOriginalLocalBoundingBox).MMin.field_0x8 = uVar1;
  *(undefined8 *)&(pFVar3->MOriginalLocalBoundingBox).MMin.field_0x10 =
       *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin.field_0x10;
  uVar1 = *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(pFVar3->MOriginalLocalBoundingBox).MMax =
       *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax;
  *(undefined8 *)&(pFVar3->MOriginalLocalBoundingBox).MMax.field_0x8 = uVar1;
  *(undefined8 *)&(pFVar3->MOriginalLocalBoundingBox).MMax.field_0x10 =
       *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax.field_0x10;
  pFVar3->MBandWidth = this->MBandWidth;
  LOCK();
  *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
  UNLOCK();
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// CopyGeometryWithScale @ 143bfed40

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::FLevelSet::CopyGeometryWithScale(FLevelSet *this,TVector<double,3> *param_1)

{
  undefined8 uVar1;
  uchar uVar2;
  FLevelSet *pFVar3;
  TImplicitObjectScaled<Chaos::FLevelSet,1> *this_00;
  TVector<double,3> *in_R8;
  
  pFVar3 = ::operator_new(0x120);
  if (pFVar3 == (FLevelSet *)0x0) {
    pFVar3 = (FLevelSet *)0x0;
  }
  else {
    pFVar3 = FLevelSet(pFVar3);
  }
  uVar1 = *(undefined8 *)&(this->MGrid).field_0x8;
  *(undefined8 *)&pFVar3->MGrid = *(undefined8 *)&this->MGrid;
  *(undefined8 *)&(pFVar3->MGrid).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(this->MGrid).field_0x18;
  *(undefined8 *)&(pFVar3->MGrid).field_0x10 = *(undefined8 *)&(this->MGrid).field_0x10;
  *(undefined8 *)&(pFVar3->MGrid).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(this->MGrid).field_0x28;
  *(undefined8 *)&(pFVar3->MGrid).field_0x20 = *(undefined8 *)&(this->MGrid).field_0x20;
  *(undefined8 *)&(pFVar3->MGrid).field_0x28 = uVar1;
  uVar1 = *(undefined8 *)&(this->MGrid).field_0x38;
  *(undefined8 *)&(pFVar3->MGrid).field_0x30 = *(undefined8 *)&(this->MGrid).field_0x30;
  *(undefined8 *)&(pFVar3->MGrid).field_0x38 = uVar1;
  uVar1 = *(undefined8 *)&(this->MGrid).field_0x48;
  *(undefined8 *)&(pFVar3->MGrid).field_0x40 = *(undefined8 *)&(this->MGrid).field_0x40;
  *(undefined8 *)&(pFVar3->MGrid).field_0x48 = uVar1;
  *(undefined8 *)&(pFVar3->MGrid).field_0x50 = *(undefined8 *)&(this->MGrid).field_0x50;
  *(undefined8 *)&pFVar3->MPhi = *(undefined8 *)&this->MPhi;
  *(undefined4 *)&(pFVar3->MPhi).field_0x8 = *(undefined4 *)&(this->MPhi).field_0x8;
  TArray<double,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<double,TSizedDefaultAllocator<32>_> *)&(pFVar3->MPhi).field_0x10,
             (TArray<double,TSizedDefaultAllocator<32>_> *)&(this->MPhi).field_0x10);
  *(undefined8 *)&pFVar3->MNormals = *(undefined8 *)&this->MNormals;
  *(undefined4 *)&(pFVar3->MNormals).field_0x8 = *(undefined4 *)&(this->MNormals).field_0x8;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)
             &(pFVar3->MNormals).field_0x10,
             (TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *)
             &(this->MNormals).field_0x10);
  uVar1 = *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(pFVar3->MLocalBoundingBox).MMin = *(undefined8 *)&(this->MLocalBoundingBox).MMin;
  *(undefined8 *)&(pFVar3->MLocalBoundingBox).MMin.field_0x8 = uVar1;
  *(undefined8 *)&(pFVar3->MLocalBoundingBox).MMin.field_0x10 =
       *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10;
  uVar1 = *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(pFVar3->MLocalBoundingBox).MMax = *(undefined8 *)&(this->MLocalBoundingBox).MMax;
  *(undefined8 *)&(pFVar3->MLocalBoundingBox).MMax.field_0x8 = uVar1;
  *(undefined8 *)&(pFVar3->MLocalBoundingBox).MMax.field_0x10 =
       *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10;
  uVar1 = *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(pFVar3->MOriginalLocalBoundingBox).MMin =
       *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin;
  *(undefined8 *)&(pFVar3->MOriginalLocalBoundingBox).MMin.field_0x8 = uVar1;
  *(undefined8 *)&(pFVar3->MOriginalLocalBoundingBox).MMin.field_0x10 =
       *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMin.field_0x10;
  uVar1 = *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(pFVar3->MOriginalLocalBoundingBox).MMax =
       *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax;
  *(undefined8 *)&(pFVar3->MOriginalLocalBoundingBox).MMax.field_0x8 = uVar1;
  *(undefined8 *)&(pFVar3->MOriginalLocalBoundingBox).MMax.field_0x10 =
       *(undefined8 *)&(this->MOriginalLocalBoundingBox).MMax.field_0x10;
  pFVar3->MBandWidth = this->MBandWidth;
  this_00 = ::operator_new(0x78);
  if (this_00 == (TImplicitObjectScaled<Chaos::FLevelSet,1> *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    uVar2 = FImplicitObject::GetType((FImplicitObject *)pFVar3);
    FImplicitObjectScaled::FImplicitObjectScaled((FImplicitObjectScaled *)this_00,2,uVar2);
    this_00->_padding_ = (longlong)&___7__TImplicitObjectScaled_VFLevelSet_Chaos___00_Chaos__6B_;
    (this_00->MObject).Reference = pFVar3;
    LOCK();
    *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
    UNLOCK();
    if ((int)pFVar3->_padding_ == 1) {
      LOCK();
      *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
      UNLOCK();
    }
    TImplicitObjectScaled<Chaos::FLevelSet,1>::InitScaledImplicit(this_00,in_R8,0.0);
    *(TImplicitObjectScaled<Chaos::FLevelSet,1> **)param_1 = this_00;
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// CorrectSign @ 143bff470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FLevelSet::CorrectSign
          (FLevelSet *this,TArrayND<bool,3> *param_1,TArrayND<bool,3> *param_2,
          TArrayND<bool,3> *param_3,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [8];
  undefined1 local_170 [16];
  TArray<int,TSizedDefaultAllocator<32>_> local_160;
  TArray<int,TSizedDefaultAllocator<32>_> local_150;
  int local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  TArrayND<bool,3> *local_130;
  uint local_128;
  uint local_124;
  uint local_120 [2];
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *local_118;
  int local_110 [6];
  undefined8 local_f8;
  int local_f0;
  int local_e8 [4];
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  TArrayND<bool,3> *local_c0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_f8 = *(undefined8 *)&(this->MGrid).field_0x30;
  local_170._8_4_ = *(undefined4 *)&(this->MGrid).field_0x38;
  local_118 = param_4;
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.ArrayNum = 0;
  local_160.ArrayMax = 0;
  local_170._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
  local_140 = -1;
  local_170._0_4_ = (int)local_f8;
  local_130 = param_3;
  local_c0 = param_1;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&local_160,local_170._8_4_ * (int)local_f8 * local_170._4_4_,Default);
  iVar20 = local_160.ArrayNum;
  pFVar4 = local_160.AllocatorInstance.Data + (longlong)local_160.ArrayNum * 4;
  FVar8.Data = local_160.AllocatorInstance.Data;
  while( true ) {
    if (local_160.ArrayNum != iVar20) {
      local_178[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_178);
    }
    if (FVar8.Data == pFVar4) break;
    *(undefined4 *)FVar8.Data = 0xffffffff;
    FVar8.Data = FVar8.Data + 4;
  }
  iVar20 = 0;
  if (0 < *(int *)&(this->MGrid).field_0x30) {
    do {
      iVar12 = 0;
      if (0 < *(int *)&(this->MGrid).field_0x34) {
        do {
          iVar6 = 0;
          if (0 < *(int *)&(this->MGrid).field_0x38) {
            do {
              if (iVar20 == 0) {
LAB_143bff5f4:
                if (iVar20 != *(int *)&(this->MGrid).field_0x30 + -1) {
                  uVar14 = ((iVar20 + 1) * *(int *)&param_1->field_0x4 + iVar12) *
                           *(int *)&param_1->field_0x8 + iVar6;
                  uVar18 = 0;
                  if ((int)uVar14 < *(int *)&param_1->field_0x18) {
                    uVar18 = ~uVar14 >> 0x1f;
                  }
                  if ((uVar18 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (*(char *)((longlong)(int)uVar14 + *(longlong *)&param_1->field_0x10) == '\0')
                  goto LAB_143bff8c1;
                }
                if (iVar12 != 0) {
                  uVar14 = (iVar20 * *(int *)&param_2->field_0x4 + iVar12) *
                           *(int *)&param_2->field_0x8 + iVar6;
                  uVar18 = 0;
                  if ((int)uVar14 < *(int *)&param_2->field_0x18) {
                    uVar18 = ~uVar14 >> 0x1f;
                  }
                  if ((uVar18 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (*(char *)((longlong)(int)uVar14 + *(longlong *)&param_2->field_0x10) == '\0')
                  goto LAB_143bff8c1;
                }
                if (iVar12 != *(int *)&(this->MGrid).field_0x34 + -1) {
                  uVar14 = (iVar20 * *(int *)&param_2->field_0x4 + 1 + iVar12) *
                           *(int *)&param_2->field_0x8 + iVar6;
                  uVar18 = 0;
                  if ((int)uVar14 < *(int *)&param_2->field_0x18) {
                    uVar18 = ~uVar14 >> 0x1f;
                  }
                  if ((uVar18 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (*(char *)((longlong)(int)uVar14 + *(longlong *)&param_2->field_0x10) == '\0')
                  goto LAB_143bff8c1;
                }
                if (iVar6 != 0) {
                  uVar14 = (iVar20 * *(int *)&local_130->field_0x4 + iVar12) *
                           *(int *)&local_130->field_0x8 + iVar6;
                  uVar18 = 0;
                  if ((int)uVar14 < *(int *)&local_130->field_0x18) {
                    uVar18 = ~uVar14 >> 0x1f;
                  }
                  if ((uVar18 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (*(char *)((longlong)(int)uVar14 + *(longlong *)&local_130->field_0x10) == '\0'
                     ) goto LAB_143bff8c1;
                }
                if (iVar6 != *(int *)&(this->MGrid).field_0x38 + -1) {
                  uVar14 = (iVar20 * *(int *)&local_130->field_0x4 + iVar12) *
                           *(int *)&local_130->field_0x8 + 1 + iVar6;
                  uVar18 = 0;
                  if ((int)uVar14 < *(int *)&local_130->field_0x18) {
                    uVar18 = ~uVar14 >> 0x1f;
                  }
                  if ((uVar18 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (*(char *)((longlong)(int)uVar14 + *(longlong *)&local_130->field_0x10) == '\0'
                     ) goto LAB_143bff8c1;
                }
                iVar17 = local_140 + 1;
                uVar14 = (local_170._4_4_ * iVar20 + iVar12) * local_170._8_4_ + iVar6;
                uVar18 = 0;
                if ((int)uVar14 < local_160.ArrayNum) {
                  uVar18 = ~uVar14 >> 0x1f;
                }
                local_140 = iVar17;
                if ((uVar18 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                *(int *)(local_160.AllocatorInstance.Data + (longlong)(int)uVar14 * 4) = iVar17;
                param_1 = local_c0;
              }
              else {
                uVar14 = (iVar20 * *(int *)&param_1->field_0x4 + iVar12) *
                         *(int *)&param_1->field_0x8 + iVar6;
                uVar18 = 0;
                if ((int)uVar14 < *(int *)&param_1->field_0x18) {
                  uVar18 = ~uVar14 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if (*(char *)((longlong)(int)uVar14 + *(longlong *)&param_1->field_0x10) != '\0')
                goto LAB_143bff5f4;
              }
LAB_143bff8c1:
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)&(this->MGrid).field_0x38);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < *(int *)&(this->MGrid).field_0x34);
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < *(int *)&(this->MGrid).field_0x30);
  }
  FloodFill(this,param_1,param_2,local_130,(TArrayND<int,3> *)local_170,&local_140);
  iVar20 = local_140;
  uVar19 = 0;
  local_b8.Elements._44_4_ = 0x80;
  local_b8.Elements._0_8_ = 0;
  local_b8.Elements._8_8_ = 0;
  local_b8.Elements._32_8_ = 0;
  local_b8.Elements._40_4_ = 0;
  local_b8.Elements._48_4_ = 0xffffffff;
  local_b8.Elements._52_4_ = 0;
  local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_b8.HashSize = 0;
  local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.ArrayNum = 0;
  local_150.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_150,local_140 + 1,Default);
  uVar9 = uVar19;
  uVar10 = uVar19;
  if (-1 < iVar20) {
    do {
      uVar14 = (uint)uVar9;
      uVar18 = 0;
      if ((int)uVar14 < local_150.ArrayNum) {
        uVar18 = ~uVar14 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)(local_150.AllocatorInstance.Data + uVar10) = 0xffffffff;
      uVar9 = (ulonglong)(uVar14 + 1);
      uVar10 = uVar10 + 4;
    } while ((int)(uVar14 + 1) <= iVar20);
  }
  FVar5 = local_b8.Hash.SecondaryData;
  uVar9 = uVar19;
  if (0 < *(int *)&(this->MGrid).field_0x34) {
    do {
      iVar20 = (int)uVar9;
      uVar9 = uVar19;
      if (0 < *(int *)&(this->MGrid).field_0x38) {
        do {
          iVar12 = (int)uVar9;
          uVar7 = local_170._8_4_ * iVar20 + iVar12;
          uVar14 = 0;
          uVar18 = uVar14;
          if ((int)uVar7 < local_160.ArrayNum) {
            uVar18 = ~uVar7 >> 0x1f;
          }
          if (uVar18 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          uVar18 = *(uint *)(local_160.AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
          uVar15 = ((*(int *)&(this->MGrid).field_0x30 + -1) * local_170._4_4_ + iVar20) *
                   local_170._8_4_ + iVar12;
          uVar7 = uVar14;
          if ((int)uVar15 < local_160.ArrayNum) {
            uVar7 = ~uVar15 >> 0x1f;
          }
          local_13c = uVar18;
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar7 = *(uint *)(local_160.AllocatorInstance.Data + (longlong)(int)uVar15 * 4);
          uVar15 = uVar14;
          if ((int)uVar18 < local_150.ArrayNum) {
            uVar15 = ~uVar18 >> 0x1f;
          }
          local_128 = uVar7;
          if ((uVar15 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined4 *)(local_150.AllocatorInstance.Data + (longlong)(int)uVar18 * 4) = 0;
          if ((int)uVar7 < local_150.ArrayNum) {
            uVar14 = ~uVar7 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined4 *)(local_150.AllocatorInstance.Data + (longlong)(int)uVar7 * 4) = 0;
          if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
            FVar5 = (ForElementType<FSetElementId>)&local_b8.Hash;
            if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar5 = local_b8.Hash.SecondaryData;
            }
            for (iVar6 = *(int *)((longlong)FVar5 + (ulonglong)(local_b8.HashSize - 1U & uVar18) * 4
                                 ); iVar6 != -1;
                iVar6 = *(int *)(local_b8.Elements._0_8_ + 4 + (longlong)iVar6 * 0xc)) {
              if (*(uint *)(local_b8.Elements._0_8_ + (longlong)iVar6 * 0xc) == uVar18)
              goto LAB_143bffc01;
            }
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_b8,&local_d8,(bool *)&local_13c);
LAB_143bffc01:
          if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
            FVar5 = (ForElementType<FSetElementId>)&local_b8.Hash;
            if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar5 = local_b8.Hash.SecondaryData;
            }
            for (iVar6 = *(int *)((longlong)FVar5 + (ulonglong)(local_b8.HashSize - 1U & uVar7) * 4)
                ; iVar6 != -1; iVar6 = *(int *)(local_b8.Elements._0_8_ + 4 + (longlong)iVar6 * 0xc)
                ) {
              if (*(uint *)(local_b8.Elements._0_8_ + (longlong)iVar6 * 0xc) == uVar7)
              goto LAB_143bffc4f;
            }
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_b8,&local_d4,(bool *)&local_128);
LAB_143bffc4f:
          uVar9 = (ulonglong)(iVar12 + 1U);
          FVar5 = local_b8.Hash.SecondaryData;
        } while ((int)(iVar12 + 1U) < *(int *)&(this->MGrid).field_0x38);
      }
      uVar9 = (ulonglong)(iVar20 + 1U);
    } while ((int)(iVar20 + 1U) < *(int *)&(this->MGrid).field_0x34);
  }
  uVar9 = uVar19;
  if (0 < *(int *)&(this->MGrid).field_0x30) {
    do {
      iVar20 = (int)uVar9;
      uVar18 = 0;
      uVar9 = uVar19;
      if (0 < *(int *)&(this->MGrid).field_0x38) {
        do {
          iVar12 = (int)uVar9;
          uVar7 = local_170._4_4_ * local_170._8_4_ * iVar20 + iVar12;
          uVar14 = uVar18;
          if ((int)uVar7 < local_160.ArrayNum) {
            uVar14 = ~uVar7 >> 0x1f;
          }
          if (uVar14 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          uVar14 = *(uint *)(local_160.AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
          uVar15 = (*(int *)&(this->MGrid).field_0x34 + -1 + local_170._4_4_ * iVar20) *
                   local_170._8_4_ + iVar12;
          uVar7 = uVar18;
          if ((int)uVar15 < local_160.ArrayNum) {
            uVar7 = ~uVar15 >> 0x1f;
          }
          local_138 = uVar14;
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar7 = *(uint *)(local_160.AllocatorInstance.Data + (longlong)(int)uVar15 * 4);
          uVar15 = uVar18;
          if ((int)uVar14 < local_150.ArrayNum) {
            uVar15 = ~uVar14 >> 0x1f;
          }
          local_124 = uVar7;
          if ((uVar15 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined4 *)(local_150.AllocatorInstance.Data + (longlong)(int)uVar14 * 4) = 0;
          uVar15 = uVar18;
          if ((int)uVar7 < local_150.ArrayNum) {
            uVar15 = ~uVar7 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined4 *)(local_150.AllocatorInstance.Data + (longlong)(int)uVar7 * 4) = 0;
          if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
            FVar5 = (ForElementType<FSetElementId>)&local_b8.Hash;
            if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar5 = local_b8.Hash.SecondaryData;
            }
            for (iVar6 = *(int *)((longlong)FVar5 + (ulonglong)(local_b8.HashSize - 1U & uVar14) * 4
                                 ); iVar6 != -1;
                iVar6 = *(int *)(local_b8.Elements._0_8_ + 4 + (longlong)iVar6 * 0xc)) {
              if (*(uint *)(local_b8.Elements._0_8_ + (longlong)iVar6 * 0xc) == uVar14)
              goto LAB_143bffe9e;
            }
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_b8,&local_d0,(bool *)&local_138);
LAB_143bffe9e:
          if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
            FVar5 = (ForElementType<FSetElementId>)&local_b8.Hash;
            if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar5 = local_b8.Hash.SecondaryData;
            }
            for (iVar6 = *(int *)((longlong)FVar5 + (ulonglong)(local_b8.HashSize - 1U & uVar7) * 4)
                ; iVar6 != -1; iVar6 = *(int *)(local_b8.Elements._0_8_ + 4 + (longlong)iVar6 * 0xc)
                ) {
              if (*(uint *)(local_b8.Elements._0_8_ + (longlong)iVar6 * 0xc) == uVar7)
              goto LAB_143bffeee;
            }
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_b8,&local_cc,(bool *)&local_124);
LAB_143bffeee:
          uVar9 = (ulonglong)(iVar12 + 1U);
          FVar5 = local_b8.Hash.SecondaryData;
        } while ((int)(iVar12 + 1U) < *(int *)&(this->MGrid).field_0x38);
      }
      iVar12 = *(int *)&(this->MGrid).field_0x30;
      uVar9 = (ulonglong)(iVar20 + 1U);
    } while ((int)(iVar20 + 1U) < iVar12);
    uVar9 = uVar19;
    if (0 < iVar12) {
      do {
        iVar20 = (int)uVar9;
        uVar9 = uVar19;
        if (0 < *(int *)&(this->MGrid).field_0x34) {
          do {
            iVar12 = (int)uVar9;
            uVar7 = (local_170._4_4_ * iVar20 + iVar12) * local_170._8_4_;
            uVar14 = uVar18;
            if ((int)uVar7 < local_160.ArrayNum) {
              uVar14 = ~uVar7 >> 0x1f;
            }
            if (uVar14 == 0) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            uVar14 = *(uint *)(local_160.AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
            uVar15 = *(int *)&(this->MGrid).field_0x38 + -1 +
                     (local_170._4_4_ * iVar20 + iVar12) * local_170._8_4_;
            uVar7 = uVar18;
            if ((int)uVar15 < local_160.ArrayNum) {
              uVar7 = ~uVar15 >> 0x1f;
            }
            local_134 = uVar14;
            if ((uVar7 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar7 = *(uint *)(local_160.AllocatorInstance.Data + (longlong)(int)uVar15 * 4);
            uVar15 = uVar18;
            if ((int)uVar14 < local_150.ArrayNum) {
              uVar15 = ~uVar14 >> 0x1f;
            }
            local_120[0] = uVar7;
            if ((uVar15 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(undefined4 *)(local_150.AllocatorInstance.Data + (longlong)(int)uVar14 * 4) = 0;
            uVar15 = uVar18;
            if ((int)uVar7 < local_150.ArrayNum) {
              uVar15 = ~uVar7 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(undefined4 *)(local_150.AllocatorInstance.Data + (longlong)(int)uVar7 * 4) = 0;
            if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
              FVar5 = (ForElementType<FSetElementId>)&local_b8.Hash;
              if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar5 = local_b8.Hash.SecondaryData;
              }
              for (iVar6 = *(int *)((longlong)FVar5 +
                                   (ulonglong)(local_b8.HashSize - 1U & uVar14) * 4); iVar6 != -1;
                  iVar6 = *(int *)(local_b8.Elements._0_8_ + 4 + (longlong)iVar6 * 0xc)) {
                if (*(uint *)(local_b8.Elements._0_8_ + (longlong)iVar6 * 0xc) == uVar14)
                goto LAB_143c0013e;
              }
            }
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&local_b8,&local_c8,(bool *)&local_134);
LAB_143c0013e:
            if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
              FVar5 = (ForElementType<FSetElementId>)&local_b8.Hash;
              if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar5 = local_b8.Hash.SecondaryData;
              }
              for (iVar6 = *(int *)((longlong)FVar5 +
                                   (ulonglong)(local_b8.HashSize - 1U & uVar7) * 4); iVar6 != -1;
                  iVar6 = *(int *)(local_b8.Elements._0_8_ + 4 + (longlong)iVar6 * 0xc)) {
                if (*(uint *)(local_b8.Elements._0_8_ + (longlong)iVar6 * 0xc) == uVar7)
                goto LAB_143c0018e;
              }
            }
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&local_b8,&local_c4,(bool *)local_120);
LAB_143c0018e:
            uVar9 = (ulonglong)(iVar12 + 1U);
            FVar5 = local_b8.Hash.SecondaryData;
          } while ((int)(iVar12 + 1U) < *(int *)&(this->MGrid).field_0x34);
        }
        iVar12 = *(int *)&(this->MGrid).field_0x30;
        uVar9 = (ulonglong)(iVar20 + 1U);
      } while ((int)(iVar20 + 1U) < iVar12);
      if (0 < iVar12) {
        uVar14 = (uint)__xmm_80000000000000008000000000000000;
        uVar9 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
        uVar10 = uVar19;
        do {
          iVar20 = (int)uVar10;
          uVar10 = uVar19;
          if (0 < *(int *)&(this->MGrid).field_0x34) {
            do {
              iVar12 = (int)uVar10;
              uVar10 = uVar19;
              if (0 < *(int *)&(this->MGrid).field_0x38) {
                do {
                  iVar6 = (int)uVar10;
                  uVar15 = (local_170._4_4_ * iVar20 + iVar12) * local_170._8_4_ + iVar6;
                  uVar7 = uVar18;
                  if ((int)uVar15 < local_160.ArrayNum) {
                    uVar7 = ~uVar15 >> 0x1f;
                  }
                  if ((uVar7 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  uVar7 = *(uint *)(local_160.AllocatorInstance.Data + (longlong)(int)uVar15 * 4);
                  uVar15 = uVar18;
                  if ((int)uVar7 < local_150.ArrayNum) {
                    uVar15 = ~uVar7 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (*(int *)(local_150.AllocatorInstance.Data + (longlong)(int)uVar7 * 4) != 0) {
                    uVar15 = (iVar20 * *(int *)&(this->MPhi).field_0x4 + iVar12) *
                             *(int *)&(this->MPhi).field_0x8 + iVar6;
                    uVar7 = uVar18;
                    if ((int)uVar15 < *(int *)&(this->MPhi).field_0x18) {
                      uVar7 = ~uVar15 >> 0x1f;
                    }
                    if ((uVar7 == 0) &&
                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar3)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    lVar13 = *(longlong *)&(this->MPhi).field_0x10;
                    uVar1 = *(undefined8 *)(lVar13 + (longlong)(int)uVar15 * 8);
                    *(ulonglong *)(lVar13 + (longlong)(int)uVar15 * 8) =
                         CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar9,
                                  (uint)uVar1 ^ uVar14);
                  }
                  uVar10 = (ulonglong)(iVar6 + 1U);
                } while ((int)(iVar6 + 1U) < *(int *)&(this->MGrid).field_0x38);
              }
              uVar10 = (ulonglong)(iVar12 + 1U);
            } while ((int)(iVar12 + 1U) < *(int *)&(this->MGrid).field_0x34);
          }
          uVar10 = (ulonglong)(iVar20 + 1U);
          FVar5 = local_b8.Hash.SecondaryData;
        } while ((int)(iVar20 + 1U) < *(int *)&(this->MGrid).field_0x30);
      }
    }
  }
  uVar18 = local_118->ArrayNum - 1;
  if (-1 < (int)uVar18) {
    local_130 = (TArrayND<bool,3> *)(longlong)(int)uVar18;
    lVar13 = (longlong)local_130 * 0xc;
    pTVar11 = local_118;
    do {
      uVar14 = 0;
      if ((int)uVar18 < pTVar11->ArrayNum) {
        uVar14 = ~uVar18 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar4 = (pTVar11->AllocatorInstance).Data;
      uVar7 = (local_170._4_4_ * *(int *)(pFVar4 + lVar13) + *(int *)(pFVar4 + lVar13 + 4)) *
              local_170._8_4_ + *(int *)(pFVar4 + lVar13 + 8);
      uVar14 = 0;
      if ((int)uVar7 < local_160.ArrayNum) {
        uVar14 = ~uVar7 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar14 = *(uint *)(local_160.AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
      uVar7 = 0;
      if ((int)uVar14 < local_150.ArrayNum) {
        uVar7 = ~uVar14 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar11 = local_118;
      if (*(int *)(local_150.AllocatorInstance.Data + (longlong)(int)uVar14 * 4) != 0) {
        lVar16 = 0;
        do {
          local_110[0] = 0;
          local_110[1] = 0;
          local_110[2] = 0;
          iVar20 = *(int *)(&(this->MGrid).field_0x30 + lVar16);
          *(undefined4 *)((longlong)local_110 + lVar16) = 1;
          local_e8[0] = local_110[0] + *(int *)(pFVar4 + lVar13);
          local_e8[1] = local_110[1] + *(int *)(pFVar4 + lVar13 + 4);
          local_e8[2] = local_110[2] + *(int *)(pFVar4 + lVar13 + 8);
          pTVar11 = local_118;
          if (iVar20 <= *(int *)((longlong)local_e8 + lVar16)) goto LAB_143c007e5;
          uVar7 = (local_170._4_4_ * (local_110[0] + *(int *)(pFVar4 + lVar13)) +
                  local_110[1] + *(int *)(pFVar4 + lVar13 + 4)) * local_170._8_4_ +
                  local_110[2] + *(int *)(pFVar4 + lVar13 + 8);
          uVar14 = 0;
          if ((int)uVar7 < local_160.ArrayNum) {
            uVar14 = ~uVar7 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar14 = *(uint *)(local_160.AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
          uVar7 = 0;
          if ((int)uVar14 < local_150.ArrayNum) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar11 = local_118;
          if (*(int *)(local_150.AllocatorInstance.Data + (longlong)(int)uVar14 * 4) == 0)
          goto LAB_143c007e5;
          iVar20 = *(int *)(pFVar4 + lVar13);
          iVar12 = *(int *)(pFVar4 + lVar13 + 4);
          iVar6 = *(int *)(pFVar4 + lVar13 + 8);
          local_110[3] = 0;
          local_110[4] = 0;
          local_110[5] = 0;
          *(undefined4 *)((longlong)local_110 + lVar16 + 0xc) = 1;
          local_f8 = CONCAT44(iVar12 - local_110[4],iVar20 - local_110[3]);
          local_f0 = iVar6 - local_110[5];
          if (*(int *)((longlong)&local_f8 + lVar16) < 0) goto LAB_143c007e5;
          uVar7 = (local_170._4_4_ * (iVar20 - local_110[3]) + (iVar12 - local_110[4])) *
                  local_170._8_4_ + (iVar6 - local_110[5]);
          uVar14 = 0;
          if ((int)uVar7 < local_160.ArrayNum) {
            uVar14 = ~uVar7 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar14 = *(uint *)(local_160.AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
          uVar7 = 0;
          if ((int)uVar14 < local_150.ArrayNum) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar11 = local_118;
          if (*(int *)(local_150.AllocatorInstance.Data + (longlong)(int)uVar14 * 4) == 0)
          goto LAB_143c007e5;
          lVar16 = lVar16 + 4;
        } while (lVar16 < 0xc);
        uVar7 = (*(int *)&(this->MPhi).field_0x4 * *(int *)(pFVar4 + lVar13) +
                *(int *)(pFVar4 + lVar13 + 4)) * *(int *)&(this->MPhi).field_0x8 +
                *(int *)(pFVar4 + lVar13 + 8);
        uVar14 = 0;
        if ((int)uVar7 < *(int *)&(this->MPhi).field_0x18) {
          uVar14 = ~uVar7 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar11 = local_118;
        *(undefined8 *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar7 * 8) =
             0xc7efffffe0000000;
        uVar14 = 0;
        if ((int)uVar18 < local_118->ArrayNum) {
          uVar14 = ~uVar18 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar4 = (pTVar11->AllocatorInstance).Data + lVar13;
        iVar20 = ~uVar18 + pTVar11->ArrayNum;
        if (iVar20 != 0) {
          memmove(pFVar4,pFVar4 + 0xc,(longlong)iVar20 * 0xc);
        }
        pTVar11->ArrayNum = pTVar11->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,&pTVar11->AllocatorInstance,pTVar11->ArrayNum,&pTVar11->ArrayMax);
      }
LAB_143c007e5:
      lVar13 = lVar13 + -0xc;
      local_130 = (TArrayND<bool,3> *)((longlong)local_130 + -1);
      uVar18 = uVar18 - 1;
      FVar5 = local_b8.Hash.SecondaryData;
    } while (-1 < (int)uVar18);
  }
  if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.AllocatorInstance.Data);
    FVar5 = local_b8.Hash.SecondaryData;
  }
  local_b8.HashSize = 0;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_b8.Elements);
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  return;
}

// FillWithFastMarchingMethod @ 143c023d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FLevelSet::FillWithFastMarchingMethod
          (FLevelSet *this,double param_1,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_168;
  undefined8 local_160;
  TVector<int,3>_u_0 local_158;
  TVector<int,3>_u_0 local_148;
  int local_138;
  int local_134;
  int local_130;
  TArray<bool,TSizedDefaultAllocator<32>_> local_128;
  undefined8 local_118;
  int local_110;
  undefined1 local_108 [16];
  TArray<bool,TSizedDefaultAllocator<32>_> local_f8;
  undefined8 local_e8;
  int local_e0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  Pair<double_*,Chaos::TVector<int,3>_> local_c0;
  Pair<double_*,Chaos::TVector<int,3>_> local_a8;
  Pair<double_*,Chaos::TVector<int,3>_> local_90 [3];
  
  local_108._8_4_ = *(undefined4 *)&(this->MGrid).field_0x38;
  local_118 = *(undefined8 *)&(this->MGrid).field_0x30;
  local_108._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  local_108._0_4_ = (int)local_118;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
            (&local_f8,local_108._8_4_ * (int)local_118 * local_108._4_4_,Default);
  local_130 = *(int *)&(this->MGrid).field_0x38;
  local_118 = *(undefined8 *)&(this->MGrid).field_0x30;
  local_134 = (int)((ulonglong)local_118 >> 0x20);
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  local_138 = (int)local_118;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
            (&local_128,local_130 * (int)local_118 * local_134,Default);
  iVar18 = local_f8.ArrayNum;
  uVar10 = (ulonglong)local_f8.ArrayNum;
  pFVar1 = local_f8.AllocatorInstance.Data + uVar10;
  FVar13.Data = local_f8.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar10 != iVar18) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar13.Data == pFVar1) break;
    *FVar13.Data = (FScriptContainerElement)0x0;
    FVar13.Data = FVar13.Data + 1;
    uVar10 = local_f8._8_8_ & 0xffffffff;
  }
  iVar18 = local_128.ArrayNum;
  pFVar1 = local_128.AllocatorInstance.Data + local_128.ArrayNum;
  FVar13.Data = local_128.AllocatorInstance.Data;
  while( true ) {
    if (local_128.ArrayNum != iVar18) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (FVar13.Data == pFVar1) break;
    *FVar13.Data = (FScriptContainerElement)0x0;
    FVar13.Data = FVar13.Data + 1;
  }
  iVar18 = param_2->ArrayNum;
  pFVar14 = (param_2->AllocatorInstance).Data;
  local_168.Data = (FScriptContainerElement *)0x0;
  local_160 = 0;
  pFVar1 = pFVar14 + (longlong)iVar18 * 0xc;
  while( true ) {
    if (param_2->ArrayNum != iVar18) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<Chaos::TVector<int,3>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar14 == pFVar1) break;
    uVar21 = 0;
    uVar15 = (local_108._4_4_ * *(int *)pFVar14 + *(int *)(pFVar14 + 4)) * local_108._8_4_ +
             *(int *)(pFVar14 + 8);
    uVar16 = uVar21;
    if ((int)uVar15 < local_f8.ArrayNum) {
      uVar16 = ~uVar15 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_f8.AllocatorInstance.Data[(int)uVar15] == (FScriptContainerElement)0x0) {
      uVar15 = (local_134 * *(int *)pFVar14 + *(int *)(pFVar14 + 4)) * local_130 +
               *(int *)(pFVar14 + 8);
      uVar16 = 0;
      if ((int)uVar15 < local_128.ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_128.AllocatorInstance.Data[(int)uVar15] != (FScriptContainerElement)0x0)
      goto LAB_143c02600;
    }
    else {
LAB_143c02600:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Done(CellIndex) && !InHeap(CellIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Levelset.cpp"
                         ,0x464,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar15 = (local_108._4_4_ * *(int *)pFVar14 + *(int *)(pFVar14 + 4)) * local_108._8_4_ +
             *(int *)(pFVar14 + 8);
    uVar16 = 0;
    if ((int)uVar15 < local_f8.ArrayNum) {
      uVar16 = ~uVar15 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_f8.AllocatorInstance.Data[(int)uVar15] = (FScriptContainerElement)0x1;
    uVar15 = (*(int *)&(this->MPhi).field_0x4 * *(int *)pFVar14 + *(int *)(pFVar14 + 4)) *
             *(int *)&(this->MPhi).field_0x8 + *(int *)(pFVar14 + 8);
    uVar16 = uVar21;
    if ((int)uVar15 < *(int *)&(this->MPhi).field_0x18) {
      uVar16 = ~uVar15 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_c0.Second.field0_0x0._0_8_ = *(undefined8 *)pFVar14;
    local_c0.First = (double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar15 * 8);
    local_c0.Second.field0_0x0._s_0.Z = *(undefined4 *)(pFVar14 + 8);
    if (((local_168.Data <= &local_c0) &&
        (&local_c0 <
         (Pair<double_*,Chaos::TVector<int,3>_> *)
         (local_168.Data + (longlong)local_160._4_4_ * 0x18))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar9 = (int)local_160;
    if ((int)local_160 == local_160._4_4_) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&local_168,(int *)((longlong)&local_160 + 4));
    }
    local_160 = CONCAT44(local_160._4_4_,iVar9 + 1);
    *(double **)&local_168.Data[(longlong)iVar9 * 0x18].field_0x0 = local_c0.First;
    *(undefined8 *)(local_168.Data + (longlong)iVar9 * 0x18 + 8) = local_c0.Second.field0_0x0._0_8_;
    *(ulonglong *)(local_168.Data + (longlong)iVar9 * 0x18 + 0x10) =
         CONCAT44(local_c0._20_4_,local_c0.Second.field0_0x0._s_0.Z);
    uVar16 = (local_134 * *(int *)pFVar14 + *(int *)(pFVar14 + 4)) * local_130 +
             *(int *)(pFVar14 + 8);
    if ((int)uVar16 < local_128.ArrayNum) {
      uVar21 = ~uVar16 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar14 = pFVar14 + 0xc;
    local_128.AllocatorInstance.Data[(int)uVar16] = (FScriptContainerElement)0x1;
  }
  AlgoImpl::
  HeapifyInternal<Chaos::Pair<double_*,Chaos::TVector<int,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double_*,Chaos::TVector<int,3>_>,bool___cdecl(Chaos::Pair<double_*,Chaos::TVector<int,3>_>_const_&,Chaos::Pair<double_*,Chaos::TVector<int,3>_>_const_&)>_>
            ((Pair<double_*,Chaos::TVector<int,3>_> *)local_168.Data,(int)local_160,local_res8[0],
             (TDereferenceWrapper<Chaos::Pair<double_*,Chaos::TVector<int,3>_>,bool___cdecl(Chaos::Pair<double_*,Chaos::TVector<int,3>_>_const_&,Chaos::Pair<double_*,Chaos::TVector<int,3>_>_const_&)>
              )0x143bf5a00);
  uVar21 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  while ((int)local_160 != 0) {
    uVar10 = 0;
    iVar18 = (int)local_160;
    if ((int)local_160 < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar18 = (int)local_160;
    }
    local_c8 = *(undefined8 *)(local_168.Data + 0x10);
    local_d8 = *(undefined8 **)local_168.Data;
    uStack_d0 = *(undefined8 *)(local_168.Data + 8);
    if (iVar18 < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar18 = (int)local_160;
    }
    iVar9 = iVar18 + -1;
    if (1 < iVar9) {
      iVar9 = 1;
    }
    if (iVar9 != 0) {
      memmove(local_168.Data,local_168.Data + (longlong)(iVar18 - iVar9) * 0x18,
              (longlong)iVar9 * 0x18);
      iVar18 = (int)local_160;
    }
    local_160 = CONCAT44(local_160._4_4_,iVar18 + -1);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&local_168,iVar18 + -1,(int *)((longlong)&local_160 + 4));
    uVar20 = uVar10;
    if (1 < (int)local_160) {
      do {
        uVar17 = (int)uVar20 * 2;
        uVar15 = uVar17 + 1;
        if ((int)(uVar17 + 2) < (int)local_160) {
          if ((double)CONCAT44((uint)((ulonglong)
                                      **(undefined8 **)
                                        &local_168.Data[(longlong)(int)uVar17 * 0x18 + 0x18].
                                         field_0x0 >> 0x20) & uVar21,
                               (uint)**(undefined8 **)
                                       &local_168.Data[(longlong)(int)uVar17 * 0x18 + 0x18].
                                        field_0x0 & uVar16) <
              (double)CONCAT44((uint)((ulonglong)
                                      **(undefined8 **)
                                        &local_168.Data[(longlong)(int)uVar17 * 0x18 + 0x30].
                                         field_0x0 >> 0x20) & uVar21,
                               (uint)**(undefined8 **)
                                       &local_168.Data[(longlong)(int)uVar17 * 0x18 + 0x30].
                                        field_0x0 & uVar16)) {
            uVar15 = uVar17;
          }
          uVar15 = uVar15 + 1;
        }
        lVar11 = (longlong)(int)uVar20;
        lVar12 = (longlong)(int)uVar15;
        if ((double)CONCAT44((uint)((ulonglong)
                                    **(undefined8 **)&local_168.Data[lVar11 * 0x18].field_0x0 >>
                                   0x20) & uVar21,
                             (uint)**(undefined8 **)&local_168.Data[lVar11 * 0x18].field_0x0 &
                             uVar16) <=
            (double)CONCAT44((uint)((ulonglong)
                                    **(undefined8 **)&local_168.Data[lVar12 * 0x18].field_0x0 >>
                                   0x20) & uVar21,
                             (uint)**(undefined8 **)&local_168.Data[lVar12 * 0x18].field_0x0 &
                             uVar16)) break;
        uVar5 = *(undefined8 *)(local_168.Data + lVar12 * 0x18 + 8);
        uVar20 = (ulonglong)uVar15;
        uVar2 = *(undefined8 *)(local_168.Data + lVar11 * 0x18 + 0x10);
        uVar6 = *(undefined8 *)&local_168.Data[lVar11 * 0x18].field_0x0;
        uVar7 = *(undefined8 *)(local_168.Data + lVar11 * 0x18 + 8);
        *(undefined8 *)&local_168.Data[lVar11 * 0x18].field_0x0 =
             *(undefined8 *)&local_168.Data[lVar12 * 0x18].field_0x0;
        *(undefined8 *)(local_168.Data + lVar11 * 0x18 + 8) = uVar5;
        *(undefined8 *)(local_168.Data + lVar11 * 0x18 + 0x10) =
             *(undefined8 *)(local_168.Data + lVar12 * 0x18 + 0x10);
        *(undefined8 *)&local_168.Data[lVar12 * 0x18].field_0x0 = uVar6;
        *(undefined8 *)(local_168.Data + lVar12 * 0x18 + 8) = uVar7;
        *(undefined8 *)(local_168.Data + lVar12 * 0x18 + 0x10) = uVar2;
      } while ((int)(uVar15 * 2 + 1) < (int)local_160);
    }
    uVar17 = (local_134 * (int)uStack_d0 + uStack_d0._4_4_) * local_130 + (int)local_c8;
    uVar15 = 0;
    if ((int)uVar17 < local_128.ArrayNum) {
      uVar15 = ~uVar17 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((local_128.AllocatorInstance.Data[(int)uVar17] == (FScriptContainerElement)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InHeap(Smallest.Second)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Levelset.cpp"
                           ,0x46e,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((param_1 != 0.0) &&
       (uVar15 = (uint)*local_d8 & uVar16, uVar17 = (uint)((ulonglong)*local_d8 >> 0x20) & uVar21,
       param_1 <= (double)CONCAT44(uVar17,uVar15) && (double)CONCAT44(uVar17,uVar15) != param_1))
    break;
    uVar17 = (local_108._4_4_ * (int)uStack_d0 + uStack_d0._4_4_) * local_108._8_4_ + (int)local_c8;
    uVar15 = 0;
    if ((int)uVar17 < local_f8.ArrayNum) {
      uVar15 = ~uVar17 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_f8.AllocatorInstance.Data[(int)uVar17] = (FScriptContainerElement)0x1;
    uVar17 = (local_134 * (int)uStack_d0 + uStack_d0._4_4_) * local_130 + (int)local_c8;
    uVar15 = 0;
    if ((int)uVar17 < local_128.ArrayNum) {
      uVar15 = ~uVar17 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_128.AllocatorInstance.Data[(int)uVar17] = (FScriptContainerElement)0x0;
    do {
      local_e8 = 0;
      local_118 = 0;
      local_e0 = 0;
      *(undefined4 *)((longlong)&local_e8 + uVar10) = 1;
      local_110 = 0;
      local_158._s_0.X = (int)local_e8 + (int)uStack_d0;
      *(undefined4 *)((longlong)&local_118 + uVar10) = 1;
      local_158._s_0.Y = local_e8._4_4_ + uStack_d0._4_4_;
      local_148._s_0.X = (int)uStack_d0 - (int)local_118;
      iVar18 = (int)local_c8 - local_110;
      local_148._s_0.Z = iVar18;
      local_148._s_0.Y = uStack_d0._4_4_ - local_118._4_4_;
      local_158._s_0.Z = local_e0 + (int)local_c8;
      if (-1 < *(int *)((longlong)&local_148 + uVar10)) {
        uVar17 = (local_108._4_4_ * ((int)uStack_d0 - (int)local_118) +
                 (uStack_d0._4_4_ - local_118._4_4_)) * local_108._8_4_ + iVar18;
        uVar15 = 0;
        if ((int)uVar17 < local_f8.ArrayNum) {
          uVar15 = ~uVar17 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_f8.AllocatorInstance.Data[(int)uVar17] == (FScriptContainerElement)0x0) {
          dVar4 = ComputePhi(this,(TArrayND<bool,3> *)local_108,(TVector<int,3> *)&local_148._s_0);
          uVar17 = (local_148._s_0.X * *(int *)&(this->MPhi).field_0x4 + local_148._s_0.Y) *
                   *(int *)&(this->MPhi).field_0x8 + iVar18;
          uVar15 = 0;
          if ((int)uVar17 < *(int *)&(this->MPhi).field_0x18) {
            uVar15 = ~uVar17 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar17 * 8) = dVar4;
          uVar17 = (local_134 * local_148._s_0.X + local_148._s_0.Y) * local_130 + iVar18;
          uVar15 = 0;
          if ((int)uVar17 < local_128.ArrayNum) {
            uVar15 = ~uVar17 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (local_128.AllocatorInstance.Data[(int)uVar17] == (FScriptContainerElement)0x0) {
            uVar17 = (local_148._s_0.X * *(int *)&(this->MPhi).field_0x4 + local_148._s_0.Y) *
                     *(int *)&(this->MPhi).field_0x8 + iVar18;
            uVar15 = 0;
            if ((int)uVar17 < *(int *)&(this->MPhi).field_0x18) {
              uVar15 = ~uVar17 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_a8.Second.field0_0x0._0_8_ = CONCAT44(local_148._s_0.Y,local_148._s_0.X);
            local_a8.Second.field0_0x0._s_0.Z = iVar18;
            local_a8.First =
                 (double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar17 * 8);
            if (((local_168.Data <= &local_a8) &&
                (&local_a8 <
                 (Pair<double_*,Chaos::TVector<int,3>_> *)
                 (local_168.Data + (longlong)local_160._4_4_ * 0x18))) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar9 = (int)local_160;
            if ((int)local_160 == local_160._4_4_) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_168,(int *)((longlong)&local_160 + 4));
            }
            local_160 = CONCAT44(local_160._4_4_,iVar9 + 1);
            *(double **)&local_168.Data[(longlong)iVar9 * 0x18].field_0x0 = local_a8.First;
            *(undefined8 *)(local_168.Data + (longlong)iVar9 * 0x18 + 8) =
                 local_a8.Second.field0_0x0._0_8_;
            *(ulonglong *)(local_168.Data + (longlong)iVar9 * 0x18 + 0x10) =
                 CONCAT44(local_a8._20_4_,local_a8.Second.field0_0x0._s_0.Z);
            uVar17 = iVar18 + (local_134 * local_148._s_0.X + local_148._s_0.Y) * local_130;
            uVar15 = 0;
            if ((int)uVar17 < local_128.ArrayNum) {
              uVar15 = ~uVar17 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_128.AllocatorInstance.Data[(int)uVar17] = (FScriptContainerElement)0x1;
          }
        }
      }
      if (*(int *)((longlong)&local_158 + uVar10) <
          *(int *)((longlong)this + (0x50 - (longlong)&local_e8) +
                  (longlong)((longlong)&local_e8 + uVar10))) {
        uVar19 = (local_108._4_4_ * local_158._s_0.X + local_158._s_0.Y) * local_108._8_4_ +
                 local_158._s_0.Z;
        uVar17 = 0;
        uVar15 = uVar17;
        if ((int)uVar19 < local_f8.ArrayNum) {
          uVar15 = ~uVar19 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_f8.AllocatorInstance.Data[(int)uVar19] == (FScriptContainerElement)0x0) {
          dVar4 = ComputePhi(this,(TArrayND<bool,3> *)local_108,(TVector<int,3> *)&local_158._s_0);
          uVar19 = (local_158._s_0.X * *(int *)&(this->MPhi).field_0x4 + local_158._s_0.Y) *
                   *(int *)&(this->MPhi).field_0x8 + local_158._s_0.Z;
          uVar15 = uVar17;
          if ((int)uVar19 < *(int *)&(this->MPhi).field_0x18) {
            uVar15 = ~uVar19 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar19 * 8) = dVar4;
          uVar19 = (local_134 * local_158._s_0.X + local_158._s_0.Y) * local_130 + local_158._s_0.Z;
          uVar15 = uVar17;
          if ((int)uVar19 < local_128.ArrayNum) {
            uVar15 = ~uVar19 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (local_128.AllocatorInstance.Data[(int)uVar19] == (FScriptContainerElement)0x0) {
            uVar19 = (local_158._s_0.X * *(int *)&(this->MPhi).field_0x4 + local_158._s_0.Y) *
                     *(int *)&(this->MPhi).field_0x8 + local_158._s_0.Z;
            uVar15 = uVar17;
            if ((int)uVar19 < *(int *)&(this->MPhi).field_0x18) {
              uVar15 = ~uVar19 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_90[0].Second.field0_0x0._0_8_ = CONCAT44(local_158._s_0.Y,local_158._s_0.X);
            local_90[0].Second.field0_0x0._s_0.Z = local_158._s_0.Z;
            local_90[0].First =
                 (double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar19 * 8);
            if (((local_168.Data <= local_90) &&
                (local_90 <
                 (Pair<double_*,Chaos::TVector<int,3>_> *)
                 (local_168.Data + (longlong)local_160._4_4_ * 0x18))) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar18 = (int)local_160;
            if ((int)local_160 == local_160._4_4_) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&local_168,(int *)((longlong)&local_160 + 4));
            }
            local_160 = CONCAT44(local_160._4_4_,iVar18 + 1);
            *(double **)&local_168.Data[(longlong)iVar18 * 0x18].field_0x0 = local_90[0].First;
            *(undefined8 *)(local_168.Data + (longlong)iVar18 * 0x18 + 8) =
                 local_90[0].Second.field0_0x0._0_8_;
            *(ulonglong *)(local_168.Data + (longlong)iVar18 * 0x18 + 0x10) =
                 CONCAT44(local_90[0]._20_4_,local_90[0].Second.field0_0x0._s_0.Z);
            uVar15 = (local_134 * local_158._s_0.X + local_158._s_0.Y) * local_130 +
                     local_158._s_0.Z;
            if ((int)uVar15 < local_128.ArrayNum) {
              uVar17 = ~uVar15 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_128.AllocatorInstance.Data[(int)uVar15] = (FScriptContainerElement)0x1;
          }
        }
      }
      uVar10 = uVar10 + 4;
    } while ((longlong)uVar10 < 0xc);
    AlgoImpl::
    HeapifyInternal<Chaos::Pair<double_*,Chaos::TVector<int,3>_>,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Pair<double_*,Chaos::TVector<int,3>_>,bool___cdecl(Chaos::Pair<double_*,Chaos::TVector<int,3>_>_const_&,Chaos::Pair<double_*,Chaos::TVector<int,3>_>_const_&)>_>
              ((Pair<double_*,Chaos::TVector<int,3>_> *)local_168.Data,(int)local_160,local_res8[0],
               (TDereferenceWrapper<Chaos::Pair<double_*,Chaos::TVector<int,3>_>,bool___cdecl(Chaos::Pair<double_*,Chaos::TVector<int,3>_>_const_&,Chaos::Pair<double_*,Chaos::TVector<int,3>_>_const_&)>
                )0x143bf5a00);
  }
  if ((Pair<double_*,Chaos::TVector<int,3>_> *)local_168.Data !=
      (Pair<double_*,Chaos::TVector<int,3>_> *)0x0) {
    FMemory::Free(local_168.Data);
  }
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return;
}

// FloodFill @ 143c03ba0

void __thiscall
Chaos::FLevelSet::FloodFill
          (FLevelSet *this,TArrayND<bool,3> *param_1,TArrayND<bool,3> *param_2,
          TArrayND<bool,3> *param_3,TArrayND<int,3> *param_4,int *param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TVector<int,3>_u_0 local_48;
  
  iVar7 = 0;
  if (0 < *(int *)&(this->MGrid).field_0x30) {
    do {
      iVar6 = 0;
      if (0 < *(int *)&(this->MGrid).field_0x34) {
        do {
          iVar4 = 0;
          if (0 < *(int *)&(this->MGrid).field_0x38) {
            do {
              uVar5 = (iVar7 * *(int *)&param_4->field_0x4 + iVar6) * *(int *)&param_4->field_0x8 +
                      iVar4;
              uVar3 = 0;
              if ((int)uVar5 < *(int *)&param_4->field_0x18) {
                uVar3 = ~uVar5 >> 0x1f;
              }
              if ((uVar3 == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              if (*(int *)(*(longlong *)&param_4->field_0x10 + (longlong)(int)uVar5 * 4) == -1) {
                *param_5 = *param_5 + 1;
                local_48._s_0.X = iVar7;
                local_48._s_0.Y = iVar6;
                local_48._s_0.Z = iVar4;
                FloodFillFromCell(this,(TVector<int,3> *)&local_48._s_0,*param_5,param_1,param_2,
                                  param_3,param_4);
                uVar5 = (iVar7 * *(int *)&param_4->field_0x4 + iVar6) * *(int *)&param_4->field_0x8
                        + iVar4;
                uVar3 = 0;
                if ((int)uVar5 < *(int *)&param_4->field_0x18) {
                  uVar3 = ~uVar5 >> 0x1f;
                }
                if ((uVar3 == 0) &&
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
                if ((*(int *)(*(longlong *)&param_4->field_0x10 + (longlong)(int)uVar5 * 4) == -1)
                   && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Color(CellIndex) != -1",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Levelset.cpp"
                                          ,0x4ff,L""), bVar2)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < *(int *)&(this->MGrid).field_0x38);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)&(this->MGrid).field_0x34);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)&(this->MGrid).field_0x30);
  }
  return;
}

// FloodFillFromCell @ 143c03db0

void __thiscall
Chaos::FLevelSet::FloodFillFromCell
          (FLevelSet *this,TVector<int,3> *param_1,int param_2,TArrayND<bool,3> *param_3,
          TArrayND<bool,3> *param_4,TArrayND<bool,3> *param_5,TArrayND<int,3> *param_6)

{
  FScriptContainerElement *_Dst;
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int local_a8;
  int iStack_a4;
  int local_98;
  int iStack_94;
  int local_90;
  int local_88;
  int iStack_84;
  int local_80;
  int local_78;
  int iStack_74;
  int local_70;
  int local_68;
  int iStack_64;
  int local_60;
  int local_58;
  int iStack_54;
  int local_50;
  int local_48;
  int iStack_44;
  int local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40c,&local_38,(int *)((longlong)&local_30 + 4));
  local_30 = CONCAT44(local_30._4_4_,iVar5 + 1);
  *(undefined8 *)(local_38.Data + (longlong)iVar5 * 0xc) = *(undefined8 *)&param_1->field0_0x0;
  *(int *)(local_38.Data + (longlong)iVar5 * 0xc + 8) = (param_1->field0_0x0)._s_0.Z;
  iVar5 = iVar5 + 1;
  do {
    if (iVar5 == 0) {
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      return;
    }
    if (iVar5 < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (int)local_30;
    }
    iVar6 = iVar5 + -1;
    uVar1 = *(undefined8 *)(local_38.Data + (longlong)iVar6 * 0xc);
    _Dst = local_38.Data + (longlong)iVar6 * 0xc;
    iVar2 = *(int *)(_Dst + 8);
    iVar6 = (iVar5 - iVar6) + -1;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0xc,(longlong)iVar6 * 0xc);
      iVar5 = (int)local_30;
    }
    local_30 = CONCAT44(local_30._4_4_,iVar5 + -1);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,&local_38,iVar5 + -1,(int *)((longlong)&local_30 + 4));
    local_a8 = (int)uVar1;
    iStack_a4 = (int)((ulonglong)uVar1 >> 0x20);
    uVar8 = (local_a8 * *(int *)&param_6->field_0x4 + iStack_a4) * *(int *)&param_6->field_0x8 +
            iVar2;
    uVar7 = 0;
    if ((int)uVar8 < *(int *)&param_6->field_0x18) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(int *)(*(longlong *)&param_6->field_0x10 + (longlong)(int)uVar8 * 4) != param_2) {
      uVar8 = (local_a8 * *(int *)&param_6->field_0x4 + iStack_a4) * *(int *)&param_6->field_0x8 +
              iVar2;
      uVar7 = 0;
      if ((int)uVar8 < *(int *)&param_6->field_0x18) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(int *)(*(longlong *)&param_6->field_0x10 + (longlong)(int)uVar8 * 4) != -1) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1112368582311803630>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Levelset.cpp"
                             ,0x512,"Color(CellIndex) == -1"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar8 = (local_a8 * *(int *)&param_6->field_0x4 + iStack_a4) * *(int *)&param_6->field_0x8 +
              iVar2;
      uVar7 = 0;
      if ((int)uVar8 < *(int *)&param_6->field_0x18) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(int *)(*(longlong *)&param_6->field_0x10 + (longlong)(int)uVar8 * 4) = param_2;
      local_88 = local_a8 + 1;
      local_48 = local_a8 + -1;
      iStack_94 = iStack_a4 + 1;
      iStack_54 = iStack_a4 + -1;
      local_70 = iVar2 + 1;
      local_60 = iVar2 + -1;
      iStack_84 = iStack_a4;
      iStack_44 = iStack_a4;
      local_98 = local_a8;
      local_58 = local_a8;
      local_78 = local_a8;
      iStack_74 = iStack_a4;
      local_68 = local_a8;
      iStack_64 = iStack_a4;
      local_90 = iVar2;
      local_80 = iVar2;
      local_50 = iVar2;
      local_40 = iVar2;
      if (local_70 < *(int *)&(this->MGrid).field_0x38) {
        uVar8 = (iStack_a4 + local_a8 * *(int *)&param_5->field_0x4) * *(int *)&param_5->field_0x8 +
                local_70;
        uVar7 = 0;
        if ((int)uVar8 < *(int *)&param_5->field_0x18) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(char *)((longlong)(int)uVar8 + *(longlong *)&param_5->field_0x10) == '\0') {
          uVar8 = (local_78 * *(int *)&param_6->field_0x4 + iStack_74) * *(int *)&param_6->field_0x8
                  + local_70;
          uVar7 = 0;
          if ((int)uVar8 < *(int *)&param_6->field_0x18) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)(*(longlong *)&param_6->field_0x10 + (longlong)(int)uVar8 * 4) != param_2) {
            if (((local_38.Data <= (FScriptContainerElement *)&local_78) &&
                ((FScriptContainerElement *)&local_78 <
                 local_38.Data + (longlong)local_30._4_4_ * 0xc)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar5 = (int)local_30;
            if ((int)local_30 == local_30._4_4_) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x40c,&local_38,(int *)((longlong)&local_30 + 4));
            }
            local_30 = CONCAT44(local_30._4_4_,iVar5 + 1);
            *(ulonglong *)(local_38.Data + (longlong)iVar5 * 0xc) = CONCAT44(iStack_74,local_78);
            *(int *)(local_38.Data + (longlong)iVar5 * 0xc + 8) = local_70;
          }
        }
      }
      uVar8 = (local_a8 * *(int *)&param_5->field_0x4 + iStack_a4) * *(int *)&param_5->field_0x8 +
              iVar2;
      uVar7 = 0;
      if ((int)uVar8 < *(int *)&param_5->field_0x18) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(char *)((longlong)(int)uVar8 + *(longlong *)&param_5->field_0x10) == '\0') &&
         (-1 < local_60)) {
        uVar8 = (local_68 * *(int *)&param_6->field_0x4 + iStack_64) * *(int *)&param_6->field_0x8 +
                local_60;
        uVar7 = 0;
        if ((int)uVar8 < *(int *)&param_6->field_0x18) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)(*(longlong *)&param_6->field_0x10 + (longlong)(int)uVar8 * 4) != param_2) {
          if (((local_38.Data <= (FScriptContainerElement *)&local_68) &&
              ((FScriptContainerElement *)&local_68 < local_38.Data + (longlong)local_30._4_4_ * 0xc
              )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar5 = (int)local_30;
          if ((int)local_30 == local_30._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x40c,&local_38,(int *)((longlong)&local_30 + 4));
          }
          local_30 = CONCAT44(local_30._4_4_,iVar5 + 1);
          *(ulonglong *)(local_38.Data + (longlong)iVar5 * 0xc) = CONCAT44(iStack_64,local_68);
          *(int *)(local_38.Data + (longlong)iVar5 * 0xc + 8) = local_60;
        }
      }
      if (iStack_94 < *(int *)&(this->MGrid).field_0x34) {
        uVar8 = (local_98 * *(int *)&param_4->field_0x4 + iStack_94) * *(int *)&param_4->field_0x8 +
                local_90;
        uVar7 = 0;
        if ((int)uVar8 < *(int *)&param_4->field_0x18) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(char *)((longlong)(int)uVar8 + *(longlong *)&param_4->field_0x10) == '\0') {
          uVar8 = (local_98 * *(int *)&param_6->field_0x4 + iStack_94) * *(int *)&param_6->field_0x8
                  + local_90;
          uVar7 = 0;
          if ((int)uVar8 < *(int *)&param_6->field_0x18) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)(*(longlong *)&param_6->field_0x10 + (longlong)(int)uVar8 * 4) != param_2) {
            if (((local_38.Data <= (FScriptContainerElement *)&local_98) &&
                ((FScriptContainerElement *)&local_98 <
                 local_38.Data + (longlong)local_30._4_4_ * 0xc)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar5 = (int)local_30;
            if ((int)local_30 == local_30._4_4_) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x40c,&local_38,(int *)((longlong)&local_30 + 4));
            }
            local_30 = CONCAT44(local_30._4_4_,iVar5 + 1);
            *(ulonglong *)(local_38.Data + (longlong)iVar5 * 0xc) = CONCAT44(iStack_94,local_98);
            *(int *)(local_38.Data + (longlong)iVar5 * 0xc + 8) = local_90;
          }
        }
      }
      uVar8 = (local_a8 * *(int *)&param_4->field_0x4 + iStack_a4) * *(int *)&param_4->field_0x8 +
              iVar2;
      uVar7 = 0;
      if ((int)uVar8 < *(int *)&param_4->field_0x18) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(char *)((longlong)(int)uVar8 + *(longlong *)&param_4->field_0x10) == '\0') &&
         (-1 < iStack_54)) {
        uVar8 = (local_58 * *(int *)&param_6->field_0x4 + iStack_54) * *(int *)&param_6->field_0x8 +
                local_50;
        uVar7 = 0;
        if ((int)uVar8 < *(int *)&param_6->field_0x18) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)(*(longlong *)&param_6->field_0x10 + (longlong)(int)uVar8 * 4) != param_2) {
          if (((local_38.Data <= (FScriptContainerElement *)&local_58) &&
              ((FScriptContainerElement *)&local_58 < local_38.Data + (longlong)local_30._4_4_ * 0xc
              )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar5 = (int)local_30;
          if ((int)local_30 == local_30._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x40c,&local_38,(int *)((longlong)&local_30 + 4));
          }
          local_30 = CONCAT44(local_30._4_4_,iVar5 + 1);
          *(ulonglong *)(local_38.Data + (longlong)iVar5 * 0xc) = CONCAT44(iStack_54,local_58);
          *(int *)(local_38.Data + (longlong)iVar5 * 0xc + 8) = local_50;
        }
      }
      if (local_88 < *(int *)&(this->MGrid).field_0x30) {
        uVar8 = local_80 +
                (local_88 * *(int *)&param_3->field_0x4 + iStack_84) * *(int *)&param_3->field_0x8;
        uVar7 = 0;
        if ((int)uVar8 < *(int *)&param_3->field_0x18) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(char *)((longlong)(int)uVar8 + *(longlong *)&param_3->field_0x10) == '\0') {
          uVar8 = (local_88 * *(int *)&param_6->field_0x4 + iStack_84) * *(int *)&param_6->field_0x8
                  + local_80;
          uVar7 = 0;
          if ((int)uVar8 < *(int *)&param_6->field_0x18) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)(*(longlong *)&param_6->field_0x10 + (longlong)(int)uVar8 * 4) != param_2) {
            if (((local_38.Data <= (FScriptContainerElement *)&local_88) &&
                ((FScriptContainerElement *)&local_88 <
                 local_38.Data + (longlong)local_30._4_4_ * 0xc)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar5 = (int)local_30;
            if ((int)local_30 == local_30._4_4_) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x40c,&local_38,(int *)((longlong)&local_30 + 4));
            }
            local_30 = CONCAT44(local_30._4_4_,iVar5 + 1);
            *(ulonglong *)(local_38.Data + (longlong)iVar5 * 0xc) = CONCAT44(iStack_84,local_88);
            *(int *)(local_38.Data + (longlong)iVar5 * 0xc + 8) = local_80;
          }
        }
      }
      uVar8 = (local_a8 * *(int *)&param_3->field_0x4 + iStack_a4) * *(int *)&param_3->field_0x8 +
              iVar2;
      uVar7 = 0;
      if ((int)uVar8 < *(int *)&param_3->field_0x18) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(char *)((longlong)(int)uVar8 + *(longlong *)&param_3->field_0x10) == '\0') &&
         (-1 < local_48)) {
        uVar8 = local_40 +
                (local_48 * *(int *)&param_6->field_0x4 + iStack_44) * *(int *)&param_6->field_0x8;
        uVar7 = 0;
        if ((int)uVar8 < *(int *)&param_6->field_0x18) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)(*(longlong *)&param_6->field_0x10 + (longlong)(int)uVar8 * 4) != param_2) {
          if (((local_38.Data <= (FScriptContainerElement *)&local_48) &&
              ((FScriptContainerElement *)&local_48 < local_38.Data + (longlong)local_30._4_4_ * 0xc
              )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar5 = (int)local_30;
          if ((int)local_30 == local_30._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x40c,&local_38,(int *)((longlong)&local_30 + 4));
          }
          local_30 = CONCAT44(local_30._4_4_,iVar5 + 1);
          *(ulonglong *)(local_38.Data + (longlong)iVar5 * 0xc) = CONCAT44(iStack_44,local_48);
          *(int *)(local_38.Data + (longlong)iVar5 * 0xc + 8) = local_40;
        }
      }
    }
    iVar5 = (int)local_30;
  } while( true );
}

// GetInteriorCells @ 143c06bc0

void __thiscall
Chaos::FLevelSet::GetInteriorCells
          (FLevelSet *this,TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_1,
          double param_2)

{
  int *piVar1;
  double *pdVar2;
  undefined8 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int local_58;
  int iStack_54;
  
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  uVar3 = *(undefined8 *)&(this->MGrid).field_0x30;
  iVar14 = 0;
  iVar4 = *(int *)&(this->MGrid).field_0x38;
  local_58 = (int)uVar3;
  if (0 < local_58) {
    iStack_54 = (int)((ulonglong)uVar3 >> 0x20);
    do {
      iVar12 = 0;
      if (0 < iStack_54) {
        do {
          iVar11 = 0;
          if (0 < iVar4) {
            do {
              uVar13 = (iVar14 * *(int *)&(this->MPhi).field_0x4 + iVar12) *
                       *(int *)&(this->MPhi).field_0x8 + iVar11;
              uVar8 = 0;
              if ((int)uVar13 < *(int *)&(this->MPhi).field_0x18) {
                uVar8 = ~uVar13 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pdVar2 = (double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar13 * 8)
              ;
              if (*pdVar2 <= param_2 && param_2 != *pdVar2) {
                iVar9 = param_1->ArrayNum;
                if (iVar9 == *piVar1) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x40c,&param_1->AllocatorInstance,piVar1);
                }
                lVar10 = (longlong)iVar9;
                param_1->ArrayNum = iVar9 + 1;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(int *)(pFVar5 + lVar10 * 0xc) = iVar14;
                *(int *)(pFVar5 + lVar10 * 0xc + 4) = iVar12;
                *(int *)(pFVar5 + lVar10 * 0xc + 8) = iVar11;
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar4);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iStack_54);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < local_58);
  }
  return;
}

// GetZeroIsosurfaceGridCellFaces @ 143c08360

void __thiscall
Chaos::FLevelSet::GetZeroIsosurfaceGridCellFaces
          (FLevelSet *this,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double dVar27;
  double dVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  int local_res8;
  int local_res20;
  int local_134;
  int local_110;
  int iStack_10c;
  
  uVar1 = *(undefined8 *)&(this->MGrid).field_0x30;
  dVar2 = *(double *)&(this->MGrid).field_0x50;
  iVar4 = *(int *)&(this->MGrid).field_0x38;
  local_110 = (int)uVar1;
  dVar7 = *(double *)&(this->MGrid).field_0x40;
  dVar8 = *(double *)&(this->MGrid).field_0x48;
  local_134 = 0;
  if (0 < local_110 + -1) {
    iStack_10c = (int)((ulonglong)uVar1 >> 0x20);
    uVar20 = (undefined4)__real_3ff0000000000000;
    uVar22 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar23 = (undefined4)__real_bff0000000000000;
    uVar24 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    do {
      local_res20 = 0;
      if (0 < iStack_10c + -1) {
        do {
          local_res8 = 0;
          if (0 < iVar4 + -1) {
            do {
              uVar17 = (local_134 * *(int *)&(this->MPhi).field_0x4 + local_res20) *
                       *(int *)&(this->MPhi).field_0x8 + local_res8;
              uVar10 = 0;
              if ((int)uVar17 < *(int *)&(this->MPhi).field_0x18) {
                uVar10 = ~uVar17 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              dVar3 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar17 * 8)
              ;
              uVar29 = uVar20;
              uVar30 = uVar22;
              if ((dVar3 <= 0.0) && (uVar29 = uVar23, uVar30 = uVar24, 0.0 <= dVar3)) {
                uVar29 = 0;
                uVar30 = 0;
              }
              uVar17 = ((local_134 + 1) * *(int *)&(this->MPhi).field_0x4 + local_res20) *
                       *(int *)&(this->MPhi).field_0x8 + local_res8;
              uVar10 = 0;
              if ((int)uVar17 < *(int *)&(this->MPhi).field_0x18) {
                uVar10 = ~uVar17 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              dVar3 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar17 * 8)
              ;
              uVar18 = uVar20;
              uVar19 = uVar22;
              if ((dVar3 <= 0.0) && (uVar18 = uVar23, uVar19 = uVar24, 0.0 <= dVar3)) {
                uVar18 = 0;
                uVar19 = 0;
              }
              uVar17 = (local_134 * *(int *)&(this->MPhi).field_0x4 + 1 + local_res20) *
                       *(int *)&(this->MPhi).field_0x8 + local_res8;
              uVar10 = 0;
              if ((int)uVar17 < *(int *)&(this->MPhi).field_0x18) {
                uVar10 = ~uVar17 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              dVar3 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar17 * 8)
              ;
              uVar25 = uVar20;
              uVar26 = uVar22;
              if ((dVar3 <= 0.0) && (uVar25 = uVar23, uVar26 = uVar24, 0.0 <= dVar3)) {
                uVar25 = 0;
                uVar26 = 0;
              }
              uVar17 = (local_134 * *(int *)&(this->MPhi).field_0x4 + local_res20) *
                       *(int *)&(this->MPhi).field_0x8 + 1 + local_res8;
              uVar10 = 0;
              if ((int)uVar17 < *(int *)&(this->MPhi).field_0x18) {
                uVar10 = ~uVar17 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              dVar3 = *(double *)(*(longlong *)&(this->MPhi).field_0x10 + (longlong)(int)uVar17 * 8)
              ;
              if ((dVar3 <= 0.0) && (uVar20 = uVar23, uVar22 = uVar24, 0.0 <= dVar3)) {
                uVar20 = 0;
                uVar22 = 0;
              }
              bVar9 = (double)CONCAT44(uVar30,uVar29) < (double)CONCAT44(uVar19,uVar18);
              dVar3 = (double)local_res20 * dVar8 + *(double *)&(this->MGrid).field_0x8;
              dVar28 = (double)local_134 * dVar7 + *(double *)&this->MGrid;
              dVar27 = (double)local_res8 * dVar2 + *(double *)&(this->MGrid).field_0x10;
              if (bVar9 || (double)CONCAT44(uVar30,uVar29) == (double)CONCAT44(uVar19,uVar18)) {
                if (bVar9) {
                  iVar11 = param_1->ArrayNum;
                  if (iVar11 == param_1->ArrayMax) {
                    iVar11 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar11 + 1;
                  lVar16 = (longlong)iVar11;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  fVar21 = (float)(dVar7 + dVar28);
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)dVar3;
                  *(float *)(pFVar5 + lVar16 * 0xc) = fVar21;
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)dVar27;
                  iVar12 = param_1->ArrayNum;
                  if (iVar12 == param_1->ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar12 + 1;
                  lVar16 = (longlong)iVar12;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar16 * 0xc) = fVar21;
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)(dVar3 + dVar8);
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)dVar27;
                  iVar13 = param_1->ArrayNum;
                  if (iVar13 == param_1->ArrayMax) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar13 + 1;
                  lVar16 = (longlong)iVar13;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar16 * 0xc) = fVar21;
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)(dVar27 + dVar2);
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)(dVar3 + dVar8);
                  iVar14 = param_1->ArrayNum;
                  if (iVar14 == param_1->ArrayMax) {
                    iVar14 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar14 + 1;
                  lVar16 = (longlong)iVar14;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar16 * 0xc) = fVar21;
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)dVar3;
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)(dVar27 + dVar2);
                  iVar15 = param_2->ArrayNum;
                  if (iVar15 == param_2->ArrayMax) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  lVar16 = (longlong)iVar15;
                  param_2->ArrayNum = iVar15 + 1;
                  pFVar5 = (param_2->AllocatorInstance).Data;
                  *(int *)(pFVar5 + lVar16 * 0xc) = iVar11;
                  *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar13;
                  *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar12;
                  iVar12 = param_2->ArrayNum;
                  if (iVar12 == param_2->ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  lVar16 = (longlong)iVar12;
                  param_2->ArrayNum = iVar12 + 1;
                  pFVar5 = (param_2->AllocatorInstance).Data;
                  *(int *)(pFVar5 + lVar16 * 0xc) = iVar13;
                  *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar11;
                  *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar14;
                }
              }
              else {
                iVar11 = param_1->ArrayNum;
                if (iVar11 == param_1->ArrayMax) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar11 + 1;
                lVar16 = (longlong)iVar11;
                pFVar5 = (param_1->AllocatorInstance).Data;
                fVar21 = (float)(dVar7 + dVar28);
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)dVar3;
                *(float *)(pFVar5 + lVar16 * 0xc) = fVar21;
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)dVar27;
                iVar12 = param_1->ArrayNum;
                if (iVar12 == param_1->ArrayMax) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar12 + 1;
                lVar16 = (longlong)iVar12;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar16 * 0xc) = fVar21;
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)(dVar3 + dVar8);
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)dVar27;
                iVar13 = param_1->ArrayNum;
                if (iVar13 == param_1->ArrayMax) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar13 + 1;
                lVar16 = (longlong)iVar13;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar16 * 0xc) = fVar21;
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)(dVar27 + dVar2);
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)(dVar3 + dVar8);
                iVar14 = param_1->ArrayNum;
                if (iVar14 == param_1->ArrayMax) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar14 + 1;
                lVar16 = (longlong)iVar14;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar16 * 0xc) = fVar21;
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)dVar3;
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)(dVar27 + dVar2);
                iVar15 = param_2->ArrayNum;
                if (iVar15 == param_2->ArrayMax) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                lVar16 = (longlong)iVar15;
                param_2->ArrayNum = iVar15 + 1;
                pFVar5 = (param_2->AllocatorInstance).Data;
                *(int *)(pFVar5 + lVar16 * 0xc) = iVar11;
                *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar12;
                *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar13;
                iVar12 = param_2->ArrayNum;
                if (iVar12 == param_2->ArrayMax) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                lVar16 = (longlong)iVar12;
                param_2->ArrayNum = iVar12 + 1;
                pFVar5 = (param_2->AllocatorInstance).Data;
                *(int *)(pFVar5 + lVar16 * 0xc) = iVar13;
                *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar14;
                *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar11;
              }
              bVar9 = (double)CONCAT44(uVar30,uVar29) < (double)CONCAT44(uVar26,uVar25);
              if (bVar9 || (double)CONCAT44(uVar30,uVar29) == (double)CONCAT44(uVar26,uVar25)) {
                if (bVar9) {
                  iVar11 = param_1->ArrayNum;
                  if (iVar11 == param_1->ArrayMax) {
                    iVar11 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  fVar21 = (float)(dVar8 + dVar3);
                  param_1->ArrayNum = iVar11 + 1;
                  lVar16 = (longlong)iVar11;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = fVar21;
                  *(float *)(pFVar5 + lVar16 * 0xc) = (float)dVar28;
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)dVar27;
                  iVar12 = param_1->ArrayNum;
                  if (iVar12 == param_1->ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar12 + 1;
                  lVar16 = (longlong)iVar12;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)dVar27;
                  *(float *)(pFVar5 + lVar16 * 0xc) = (float)(dVar7 + dVar28);
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = fVar21;
                  iVar13 = param_1->ArrayNum;
                  if (iVar13 == param_1->ArrayMax) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar13 + 1;
                  lVar16 = (longlong)iVar13;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar16 * 0xc) = (float)(dVar7 + dVar28);
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = fVar21;
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)(dVar2 + dVar27);
                  iVar14 = param_1->ArrayNum;
                  if (iVar14 == param_1->ArrayMax) {
                    iVar14 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar14 + 1;
                  lVar16 = (longlong)iVar14;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar16 * 0xc) = (float)dVar28;
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = fVar21;
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)(dVar2 + dVar27);
                  iVar15 = param_2->ArrayNum;
                  if (iVar15 == param_2->ArrayMax) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  lVar16 = (longlong)iVar15;
                  param_2->ArrayNum = iVar15 + 1;
                  pFVar5 = (param_2->AllocatorInstance).Data;
                  *(int *)(pFVar5 + lVar16 * 0xc) = iVar11;
                  *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar12;
                  *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar13;
                  iVar12 = param_2->ArrayNum;
                  if (iVar12 == param_2->ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  lVar16 = (longlong)iVar12;
                  param_2->ArrayNum = iVar12 + 1;
                  pFVar5 = (param_2->AllocatorInstance).Data;
                  *(int *)(pFVar5 + lVar16 * 0xc) = iVar13;
                  *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar14;
                  *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar11;
                }
              }
              else {
                iVar11 = param_1->ArrayNum;
                if (iVar11 == param_1->ArrayMax) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                fVar21 = (float)(dVar8 + dVar3);
                param_1->ArrayNum = iVar11 + 1;
                lVar16 = (longlong)iVar11;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = fVar21;
                *(float *)(pFVar5 + lVar16 * 0xc) = (float)dVar28;
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)dVar27;
                iVar12 = param_1->ArrayNum;
                if (iVar12 == param_1->ArrayMax) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar12 + 1;
                lVar16 = (longlong)iVar12;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)dVar27;
                *(float *)(pFVar5 + lVar16 * 0xc) = (float)(dVar7 + dVar28);
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = fVar21;
                iVar13 = param_1->ArrayNum;
                if (iVar13 == param_1->ArrayMax) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar13 + 1;
                lVar16 = (longlong)iVar13;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar16 * 0xc) = (float)(dVar7 + dVar28);
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = fVar21;
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)(dVar2 + dVar27);
                iVar14 = param_1->ArrayNum;
                if (iVar14 == param_1->ArrayMax) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar14 + 1;
                lVar16 = (longlong)iVar14;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar16 * 0xc) = (float)dVar28;
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = fVar21;
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)(dVar2 + dVar27);
                iVar15 = param_2->ArrayNum;
                if (iVar15 == param_2->ArrayMax) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                lVar16 = (longlong)iVar15;
                param_2->ArrayNum = iVar15 + 1;
                pFVar5 = (param_2->AllocatorInstance).Data;
                *(int *)(pFVar5 + lVar16 * 0xc) = iVar11;
                *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar13;
                *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar12;
                iVar12 = param_2->ArrayNum;
                if (iVar12 == param_2->ArrayMax) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                lVar16 = (longlong)iVar12;
                param_2->ArrayNum = iVar12 + 1;
                pFVar5 = (param_2->AllocatorInstance).Data;
                *(int *)(pFVar5 + lVar16 * 0xc) = iVar13;
                *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar11;
                *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar14;
              }
              bVar9 = (double)CONCAT44(uVar30,uVar29) < (double)CONCAT44(uVar22,uVar20);
              if (bVar9 || (double)CONCAT44(uVar30,uVar29) == (double)CONCAT44(uVar22,uVar20)) {
                if (bVar9) {
                  iVar11 = param_1->ArrayNum;
                  if (iVar11 == param_1->ArrayMax) {
                    iVar11 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  fVar21 = (float)(dVar2 + dVar27);
                  param_1->ArrayNum = iVar11 + 1;
                  lVar16 = (longlong)iVar11;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = fVar21;
                  *(float *)(pFVar5 + lVar16 * 0xc) = (float)dVar28;
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)dVar3;
                  iVar12 = param_1->ArrayNum;
                  if (iVar12 == param_1->ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar12 + 1;
                  lVar16 = (longlong)iVar12;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar16 * 0xc) = (float)(dVar7 + dVar28);
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)dVar3;
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = fVar21;
                  iVar13 = param_1->ArrayNum;
                  if (iVar13 == param_1->ArrayMax) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar13 + 1;
                  lVar16 = (longlong)iVar13;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar16 * 0xc) = (float)(dVar7 + dVar28);
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)(dVar8 + dVar3);
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = fVar21;
                  iVar14 = param_1->ArrayNum;
                  if (iVar14 == param_1->ArrayMax) {
                    iVar14 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar14 + 1;
                  lVar16 = (longlong)iVar14;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar16 * 0xc) = (float)dVar28;
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)(dVar8 + dVar3);
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = fVar21;
                  iVar15 = param_2->ArrayNum;
                  if (iVar15 == param_2->ArrayMax) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  lVar16 = (longlong)iVar15;
                  param_2->ArrayNum = iVar15 + 1;
                  pFVar5 = (param_2->AllocatorInstance).Data;
                  *(int *)(pFVar5 + lVar16 * 0xc) = iVar11;
                  *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar13;
                  *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar12;
                  iVar12 = param_2->ArrayNum;
                  if (iVar12 == param_2->ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  lVar16 = (longlong)iVar12;
                  param_2->ArrayNum = iVar12 + 1;
                  pFVar5 = (param_2->AllocatorInstance).Data;
                  *(int *)(pFVar5 + lVar16 * 0xc) = iVar13;
                  *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar11;
                  *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar14;
                }
              }
              else {
                iVar11 = param_1->ArrayNum;
                if (iVar11 == param_1->ArrayMax) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                fVar21 = (float)(dVar2 + dVar27);
                param_1->ArrayNum = iVar11 + 1;
                lVar16 = (longlong)iVar11;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = fVar21;
                *(float *)(pFVar5 + lVar16 * 0xc) = (float)dVar28;
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)dVar3;
                iVar12 = param_1->ArrayNum;
                if (iVar12 == param_1->ArrayMax) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar12 + 1;
                lVar16 = (longlong)iVar12;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar16 * 0xc) = (float)(dVar7 + dVar28);
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)dVar3;
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = fVar21;
                iVar13 = param_1->ArrayNum;
                if (iVar13 == param_1->ArrayMax) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar13 + 1;
                lVar16 = (longlong)iVar13;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar16 * 0xc) = (float)(dVar7 + dVar28);
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)(dVar8 + dVar3);
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = fVar21;
                iVar14 = param_1->ArrayNum;
                if (iVar14 == param_1->ArrayMax) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar14 + 1;
                lVar16 = (longlong)iVar14;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar16 * 0xc) = (float)dVar28;
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)(dVar8 + dVar3);
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = fVar21;
                iVar15 = param_2->ArrayNum;
                if (iVar15 == param_2->ArrayMax) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                lVar16 = (longlong)iVar15;
                param_2->ArrayNum = iVar15 + 1;
                pFVar5 = (param_2->AllocatorInstance).Data;
                *(int *)(pFVar5 + lVar16 * 0xc) = iVar11;
                *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar12;
                *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar13;
                iVar12 = param_2->ArrayNum;
                if (iVar12 == param_2->ArrayMax) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                lVar16 = (longlong)iVar12;
                param_2->ArrayNum = iVar12 + 1;
                pFVar5 = (param_2->AllocatorInstance).Data;
                *(int *)(pFVar5 + lVar16 * 0xc) = iVar13;
                *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar14;
                *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar11;
              }
              local_res8 = local_res8 + 1;
              uVar20 = (undefined4)__real_3ff0000000000000;
              uVar22 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
              uVar23 = (undefined4)__real_bff0000000000000;
              uVar24 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
            } while (local_res8 < iVar4 + -1);
          }
          local_res20 = local_res20 + 1;
        } while (local_res20 < iStack_10c + -1);
      }
      local_134 = local_134 + 1;
    } while (local_134 < local_110 + -1);
  }
  return;
}

// IsIntersectingWithTriangle @ 143c0b350

bool __thiscall
Chaos::FLevelSet::IsIntersectingWithTriangle
          (FLevelSet *this,TParticles<double,3> *param_1,TVector<int,3> *param_2,
          TPlane<double,3> *param_3,TVector<int,3> *param_4,TVector<int,3> *param_5)

{
  TVector<double,3> *pTVar1;
  TVector<double,3> *pTVar2;
  TVector<double,3> *pTVar3;
  undefined1 local_58 [16];
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  Pair<Chaos::TVector<double,3>,bool> local_28;
  
  local_58._0_8_ =
       ((double)(param_5->field0_0x0)._s_0.X + __real_3fe0000000000000) *
       *(double *)&(this->MGrid).field_0x40 + *(double *)&this->MGrid;
  local_48 = ((double)(param_5->field0_0x0)._s_0.Z + __real_3fe0000000000000) *
             *(double *)&(this->MGrid).field_0x50 + *(double *)&(this->MGrid).field_0x10;
  local_58._8_8_ =
       ((double)(param_5->field0_0x0)._s_0.Y + __real_3fe0000000000000) *
       *(double *)&(this->MGrid).field_0x48 + *(double *)&(this->MGrid).field_0x8;
  local_38 = ((double)(param_4->field0_0x0)._s_0.Y + __real_3fe0000000000000) *
             *(double *)&(this->MGrid).field_0x48 + *(double *)&(this->MGrid).field_0x8;
  local_40 = ((double)(param_4->field0_0x0)._s_0.X + __real_3fe0000000000000) *
             *(double *)&(this->MGrid).field_0x40 + *(double *)&this->MGrid;
  local_30 = ((double)(param_4->field0_0x0)._s_0.Z + __real_3fe0000000000000) *
             *(double *)&(this->MGrid).field_0x50 + *(double *)&(this->MGrid).field_0x10;
  FImplicitObject::FindClosestIntersection
            ((FImplicitObject *)param_3,&local_28,(TVector<double,3> *)&local_40,
             (TVector<double,3> *)local_58,0.0);
  if (local_28.Second != false) {
    pTVar1 = TParticles<double,3>::GetX(param_1,(param_2->field0_0x0)._s_0.Z);
    pTVar2 = TParticles<double,3>::GetX(param_1,(param_2->field0_0x0)._s_0.Y);
    pTVar3 = TParticles<double,3>::GetX(param_1,(param_2->field0_0x0)._s_0.X);
    ComputeBarycentricInPlane<double,3>
              ((TVector<double,2> *)local_58,pTVar3,pTVar2,pTVar1,&local_28.First);
    if ((__real_bfb999999999999a <= (double)local_58._0_8_) &&
       (__real_bfb999999999999a <= (double)local_58._8_8_)) {
      return (double)local_58._8_8_ + (double)local_58._0_8_ <= __real_3ff199999999999a;
    }
  }
  return false;
}

// OutputDebugData @ 143c0cce0

void __thiscall
Chaos::FLevelSet::OutputDebugData
          (FLevelSet *this,FErrorReporter *param_1,TParticles<double,3> *param_2,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_3,
          FTriangleMesh *param_4,FString *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  IFileManager *pIVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ForAnyElementType local_358;
  undefined8 local_350;
  ForAnyElementType local_348;
  int local_340;
  int iStack_33c;
  undefined1 local_338 [8];
  ForAnyElementType local_330;
  undefined8 local_328;
  undefined8 local_320;
  uint local_318;
  int local_310;
  int iStack_30c;
  int local_308;
  longlong local_300;
  FString local_2f8;
  ForAnyElementType local_2e8;
  int local_2e0;
  int local_2dc;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  longlong local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FScriptContainerElement *local_1b8;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  FString local_1a8;
  FString local_198;
  FScriptContainerElement *local_188;
  uint uStack_180;
  undefined4 uStack_17c;
  FString local_178;
  FString local_168;
  FScriptContainerElement *local_158;
  uint uStack_150;
  undefined4 uStack_14c;
  FString local_148;
  FString local_138;
  TStringView<wchar_t> local_128;
  FString local_118;
  FString local_108;
  TStringView<wchar_t> local_f8;
  FString local_e8;
  FString local_d8;
  TStringView<wchar_t> local_c8 [2];
  undefined8 local_a8;
  
  local_350._0_4_ = 0;
  local_2e0 = (param_4->MElements).ArrayNum;
  lVar13 = (longlong)local_2e0;
  pFVar14 = (param_4->MElements).AllocatorInstance.Data;
  local_348.Data = (FScriptContainerElement *)0x0;
  local_340 = 0;
  iStack_33c = 0;
  local_358.Data = (FScriptContainerElement *)0x0;
  local_350 = 0;
  local_330.Data = (FScriptContainerElement *)0x0;
  local_328 = 0;
  local_2e8.Data = (FScriptContainerElement *)0x0;
  if (local_2e0 == 0) {
    local_2dc = 0;
    iVar5 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_2e0,0,&local_2e8,local_2e0,&local_2dc);
    memcpy(local_2e8.Data,pFVar14,lVar13 * 0xc);
    iVar5 = local_2e0;
  }
  uVar8 = 0;
  iVar4 = (int)local_350;
  if (0 < (param_4->MElements).ArrayNum) {
    local_300 = 0;
    local_278 = 0;
    uVar18 = uVar8;
    do {
      lVar13 = local_278;
      uVar16 = (uint)uVar18;
      uVar9 = ~uVar16 >> 0x1f;
      uVar19 = 0;
      if ((int)uVar16 < iVar5) {
        uVar19 = uVar9;
      }
      if ((uVar19 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_320 = *(undefined8 *)(local_2e8.Data + lVar13);
      local_318 = *(uint *)(local_2e8.Data + lVar13 + 8);
      uVar19 = (uint)local_320;
      uVar17 = 0;
      if ((int)(uint)local_320 < *(int *)&(param_2->MX).field_0x10) {
        uVar17 = ~(uint)local_320 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar14 = (FScriptContainerElement *)
                (*(longlong *)&(param_2->MX).field_0x8 + (longlong)(int)uVar19 * 0x18);
      if (((local_348.Data <= pFVar14) && (pFVar14 < local_348.Data + (longlong)iStack_33c * 0x18))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_340 == iStack_33c) {
        local_340 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_348,&iStack_33c);
      }
      iVar5 = local_340;
      lVar13 = (longlong)local_340;
      local_340 = local_340 + 1;
      uVar2 = *(undefined8 *)(pFVar14 + 8);
      *(undefined8 *)(local_348.Data + lVar13 * 0x18) = *(undefined8 *)pFVar14;
      *(undefined8 *)(local_348.Data + lVar13 * 0x18 + 8) = uVar2;
      uVar19 = local_320._4_4_;
      *(undefined8 *)(local_348.Data + lVar13 * 0x18 + 0x10) = *(undefined8 *)(pFVar14 + 0x10);
      uVar17 = 0;
      if ((int)local_320._4_4_ < *(int *)&(param_2->MX).field_0x10) {
        uVar17 = ~local_320._4_4_ >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar14 = (FScriptContainerElement *)
                (*(longlong *)&(param_2->MX).field_0x8 + (longlong)(int)uVar19 * 0x18);
      if (((local_348.Data <= pFVar14) && (pFVar14 < local_348.Data + (longlong)iStack_33c * 0x18))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_340 == iStack_33c) {
        local_340 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_348,&iStack_33c);
      }
      iVar4 = local_340 + 1;
      uVar2 = *(undefined8 *)(pFVar14 + 8);
      *(undefined8 *)(local_348.Data + (longlong)local_340 * 0x18) = *(undefined8 *)pFVar14;
      *(undefined8 *)(local_348.Data + (longlong)local_340 * 0x18 + 8) = uVar2;
      *(undefined8 *)(local_348.Data + (longlong)local_340 * 0x18 + 0x10) =
           *(undefined8 *)(pFVar14 + 0x10);
      uVar19 = 0;
      if ((int)local_318 < *(int *)&(param_2->MX).field_0x10) {
        uVar19 = ~local_318 >> 0x1f;
      }
      local_340 = iVar4;
      if ((uVar19 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar14 = (FScriptContainerElement *)
                (*(longlong *)&(param_2->MX).field_0x8 + (longlong)(int)local_318 * 0x18);
      if (((local_348.Data <= pFVar14) && (pFVar14 < local_348.Data + (longlong)iStack_33c * 0x18))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_340 == iStack_33c) {
        local_340 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_348,&iStack_33c);
      }
      iVar4 = local_340 + 1;
      uVar2 = *(undefined8 *)(pFVar14 + 8);
      *(undefined8 *)(local_348.Data + (longlong)local_340 * 0x18) = *(undefined8 *)pFVar14;
      *(undefined8 *)(local_348.Data + (longlong)local_340 * 0x18 + 8) = uVar2;
      *(undefined8 *)(local_348.Data + (longlong)local_340 * 0x18 + 0x10) =
           *(undefined8 *)(pFVar14 + 0x10);
      uVar19 = 0;
      if ((int)uVar16 < param_3->ArrayNum) {
        uVar19 = uVar9;
      }
      local_340 = iVar4;
      if ((uVar19 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar14 = (param_3->AllocatorInstance).Data + uVar8;
      if (((local_358.Data <= pFVar14) &&
          (pFVar14 < local_358.Data + (longlong)local_350._4_4_ * 0x18)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = (int)local_350;
      if ((int)local_350 == local_350._4_4_) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_358,(int *)((longlong)&local_350 + 4));
      }
      uVar2 = *(undefined8 *)(pFVar14 + 8);
      *(undefined8 *)(local_358.Data + (longlong)iVar4 * 0x18) = *(undefined8 *)pFVar14;
      *(undefined8 *)(local_358.Data + (longlong)iVar4 * 0x18 + 8) = uVar2;
      *(undefined8 *)(local_358.Data + (longlong)iVar4 * 0x18 + 0x10) =
           *(undefined8 *)(pFVar14 + 0x10);
      uVar19 = 0;
      if ((int)uVar16 < param_3->ArrayNum) {
        uVar19 = uVar9;
      }
      local_350._0_4_ = iVar4 + 1;
      if ((uVar19 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar14 = (param_3->AllocatorInstance).Data + uVar8;
      if (((local_358.Data <= pFVar14) &&
          (pFVar14 < local_358.Data + (longlong)local_350._4_4_ * 0x18)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((int)local_350 == local_350._4_4_) {
        local_350._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_358,(int *)((longlong)&local_350 + 4));
      }
      lVar13 = local_300;
      iVar4 = (int)local_350 + 1;
      uVar2 = *(undefined8 *)(pFVar14 + 8);
      *(undefined8 *)(local_358.Data + (longlong)(int)local_350 * 0x18) = *(undefined8 *)pFVar14;
      *(undefined8 *)(local_358.Data + (longlong)(int)local_350 * 0x18 + 8) = uVar2;
      *(undefined8 *)(local_358.Data + (longlong)(int)local_350 * 0x18 + 0x10) =
           *(undefined8 *)(pFVar14 + 0x10);
      uVar19 = 0;
      if ((int)uVar16 < param_3->ArrayNum) {
        uVar19 = uVar9;
      }
      local_350._0_4_ = iVar4;
      if ((uVar19 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar14 = (param_3->AllocatorInstance).Data + uVar8;
      if (((local_358.Data <= pFVar14) &&
          (pFVar14 < local_358.Data + (longlong)local_350._4_4_ * 0x18)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = (int)local_350;
      if ((int)local_350 == local_350._4_4_) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_358,(int *)((longlong)&local_350 + 4));
      }
      local_310 = iVar5;
      local_350 = CONCAT44(local_350._4_4_,iVar4 + 1);
      uVar2 = *(undefined8 *)(pFVar14 + 8);
      iStack_30c = iVar5 + 1;
      *(undefined8 *)(local_358.Data + (longlong)iVar4 * 0x18) = *(undefined8 *)pFVar14;
      *(undefined8 *)(local_358.Data + (longlong)iVar4 * 0x18 + 8) = uVar2;
      local_308 = iVar5 + 2;
      *(undefined8 *)(local_358.Data + (longlong)iVar4 * 0x18 + 0x10) =
           *(undefined8 *)(pFVar14 + 0x10);
      if (((local_330.Data <= (FScriptContainerElement *)&local_310) &&
          ((FScriptContainerElement *)&local_310 < local_330.Data + (longlong)local_328._4_4_ * 0xc)
          ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar5 = (int)local_328;
      if ((int)local_328 == local_328._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&local_330,(int *)((longlong)&local_328 + 4));
      }
      local_300 = lVar13 + 1;
      local_278 = local_278 + 0xc;
      local_328 = CONCAT44(local_328._4_4_,iVar5 + 1);
      uVar18 = (ulonglong)(uVar16 + 1);
      uVar8 = uVar8 + 0x18;
      *(ulonglong *)(local_330.Data + (longlong)iVar5 * 0xc) = CONCAT44(iStack_30c,local_310);
      *(int *)(local_330.Data + (longlong)iVar5 * 0xc + 8) = local_308;
      iVar5 = local_2e0;
    } while ((int)(uVar16 + 1) < (param_4->MElements).ArrayNum);
    iVar4 = (int)local_350;
  }
  uVar16 = 0;
  uVar17 = 0;
  local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.Data.ArrayNum = 0;
  local_2a8.Data.ArrayMax = 0;
  uVar9 = 0;
  uVar19 = uVar16;
  if (0 < local_340) {
    while( true ) {
      uVar10 = ~uVar19 >> 0x1f;
      uVar12 = uVar17;
      if ((int)uVar19 < iVar4) {
        uVar12 = uVar10;
      }
      if (uVar12 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = (int)local_350;
      }
      uVar12 = uVar17;
      if ((int)uVar19 < iVar4) {
        uVar12 = uVar10;
      }
      if (uVar12 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = (int)local_350;
      }
      uVar12 = uVar17;
      if ((int)uVar19 < iVar4) {
        uVar12 = uVar10;
      }
      if ((uVar12 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar12 = uVar9;
      if ((int)uVar19 < local_340) {
        uVar12 = uVar10;
      }
      if ((uVar12 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar12 = uVar9;
      if ((int)uVar19 < local_340) {
        uVar12 = uVar10;
      }
      if ((uVar12 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar12 = uVar9;
      if ((int)uVar19 < local_340) {
        uVar12 = uVar10;
      }
      if ((uVar12 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      ::FString::PrintfImpl(&local_258,L"v %f %f %f %f %f %f\n");
      uVar12 = local_258.Data.ArrayNum - 1;
      if (local_258.Data.ArrayNum == 0) {
        uVar12 = uVar9;
      }
      ::FString::AppendChars(&local_2a8,(wchar_t *)local_258.Data.AllocatorInstance.Data,uVar12);
      if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data.AllocatorInstance.Data);
      }
      if (local_340 <= (int)(uVar19 + 1)) break;
      iVar4 = (int)local_350;
      uVar19 = uVar19 + 1;
    }
  }
  iVar5 = (int)local_328;
  pFVar14 = local_330.Data + (longlong)(int)local_328 * 0xc;
  FVar15.Data = local_330.Data;
  while( true ) {
    if ((int)local_328 != iVar5) {
      local_338[0] = 0;
      `TCheckedPointerIterator<Chaos::TVector<int,3>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_338);
    }
    if (FVar15.Data == pFVar14) break;
    local_278 = *(longlong *)FVar15.Data;
    ::FString::PrintfImpl(&local_248,L"f %d %d %d\n");
    uVar19 = local_248.Data.ArrayNum - 1;
    if (local_248.Data.ArrayNum == 0) {
      uVar19 = uVar9;
    }
    ::FString::AppendChars(&local_2a8,(wchar_t *)local_248.Data.AllocatorInstance.Data,uVar19);
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
    FVar15.Data = FVar15.Data + 0xc;
  }
  local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.Data.ArrayNum = 0;
  local_288.Data.ArrayMax = 0;
  local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.Data.ArrayNum = 0;
  local_298.Data.ArrayMax = 0;
  uVar19 = uVar16;
  if (0 < *(int *)&(this->MGrid).field_0x30) {
    do {
      uVar17 = uVar16;
      if (0 < *(int *)&(this->MGrid).field_0x34) {
        do {
          uVar12 = uVar16;
          if (0 < *(int *)&(this->MGrid).field_0x38) {
            do {
              uVar11 = (uVar19 * *(int *)&(this->MPhi).field_0x4 + uVar17) *
                       *(int *)&(this->MPhi).field_0x8 + uVar12;
              uVar10 = uVar9;
              if ((int)uVar11 < *(int *)&(this->MPhi).field_0x18) {
                uVar10 = ~uVar11 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              ::FString::PrintfImpl(&local_238,L"v %f %f %f %f %f %f\n");
              uVar10 = local_238.Data.ArrayNum - 1;
              if (local_238.Data.ArrayNum == 0) {
                uVar10 = uVar9;
              }
              ::FString::AppendChars
                        (&local_288,(wchar_t *)local_238.Data.AllocatorInstance.Data,uVar10);
              if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_238.Data.AllocatorInstance.Data);
              }
              uVar12 = uVar12 + 1;
            } while ((int)uVar12 < *(int *)&(this->MGrid).field_0x38);
          }
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < *(int *)&(this->MGrid).field_0x34);
      }
      iVar5 = *(int *)&(this->MGrid).field_0x30;
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < iVar5);
    uVar19 = uVar16;
    if (0 < iVar5) {
      do {
        uVar17 = uVar16;
        if (0 < *(int *)&(this->MGrid).field_0x34) {
          do {
            uVar12 = uVar16;
            if (0 < *(int *)&(this->MGrid).field_0x38) {
              do {
                uVar11 = (uVar19 * *(int *)&(this->MNormals).field_0x4 + uVar17) *
                         *(int *)&(this->MNormals).field_0x8 + uVar12;
                uVar10 = uVar9;
                if ((int)uVar11 < *(int *)&(this->MNormals).field_0x18) {
                  uVar10 = ~uVar11 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                local_a8 = *(undefined8 *)
                            (*(longlong *)&(this->MNormals).field_0x10 + 0x10 +
                            (longlong)(int)uVar11 * 0x18);
                ::FString::PrintfImpl(&local_228,L"v %f %f %f %f %f %f\n");
                uVar10 = local_228.Data.ArrayNum - 1;
                if (local_228.Data.ArrayNum == 0) {
                  uVar10 = uVar9;
                }
                ::FString::AppendChars
                          (&local_298,(wchar_t *)local_228.Data.AllocatorInstance.Data,uVar10);
                if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_228.Data.AllocatorInstance.Data);
                }
                uVar12 = uVar12 + 1;
              } while ((int)uVar12 < *(int *)&(this->MGrid).field_0x38);
            }
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < *(int *)&(this->MGrid).field_0x34);
        }
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < *(int *)&(this->MGrid).field_0x30);
    }
  }
  ::FString::FString(&local_1e8,"/DebugLevelSet");
  pFVar6 = FPaths::ProjectSavedDir();
  ::FString::ConcatFF(&local_268,pFVar6,&local_1e8);
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f8.Data.ArrayNum = (param_5->Data).ArrayNum;
  lVar13 = (longlong)local_2f8.Data.ArrayNum;
  pFVar14 = (param_5->Data).AllocatorInstance.Data;
  if (local_2f8.Data.ArrayNum == 0) {
    local_2f8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_2f8.Data.ArrayNum,0,(ForAnyElementType *)&local_2f8,local_2f8.Data.ArrayNum
               ,&local_2f8.Data.ArrayMax);
    memcpy(local_2f8.Data.AllocatorInstance.Data,pFVar14,lVar13 * 2);
  }
  pFVar6 = ::FString::FString(&local_148,"Mesh.obj");
  ::FString::ConcatFF(&local_2d8,&local_2f8,pFVar6);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  pFVar6 = FPaths::MakeValidFileName(&local_138,&local_2d8,L'\0');
  if (&local_2d8 != pFVar6) {
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
    local_2d8.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d8.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    local_2d8.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1c8,"/");
  ::FString::ConcatFF(&local_1d8,&local_268,&local_1c8);
  ::FString::ConcatFF(&local_218,&local_1d8,&local_2d8);
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pIVar7 = IFileManager::Get();
  local_1b8 = local_2a8.Data.AllocatorInstance.Data;
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_218.Data.ArrayNum != 0) {
    FVar15.Data = local_218.Data.AllocatorInstance.Data;
  }
  uStack_1b0 = local_2a8.Data.ArrayNum - 1;
  if (local_2a8.Data.ArrayNum == 0) {
    uStack_1b0 = uVar9;
  }
  local_128._12_4_ = uStack_1ac;
  local_128.Size = uStack_1b0;
  local_128.DataPtr = (wchar_t *)local_2a8.Data.AllocatorInstance.Data;
  bVar3 = FFileHelper::SaveStringToFile(&local_128,(wchar_t *)FVar15.Data,AutoDetect,pIVar7,0);
  if (!bVar3) {
    FErrorReporter::ReportError(param_1,L"Cannot write mesh");
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_118,"Volume.obj");
  ::FString::ConcatFF(&local_2c8,&local_2f8,pFVar6);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  pFVar6 = FPaths::MakeValidFileName(&local_108,&local_2c8,L'\0');
  if (&local_2c8 != pFVar6) {
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
    local_2c8.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c8.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    local_2c8.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_198,"/");
  ::FString::ConcatFF(&local_1a8,&local_268,&local_198);
  ::FString::ConcatFF(&local_208,&local_1a8,&local_2c8);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  pIVar7 = IFileManager::Get();
  local_188 = local_288.Data.AllocatorInstance.Data;
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_208.Data.ArrayNum != 0) {
    FVar15.Data = local_208.Data.AllocatorInstance.Data;
  }
  uStack_180 = local_288.Data.ArrayNum - 1;
  if (local_288.Data.ArrayNum == 0) {
    uStack_180 = uVar9;
  }
  local_f8._12_4_ = uStack_17c;
  local_f8.Size = uStack_180;
  local_f8.DataPtr = (wchar_t *)local_288.Data.AllocatorInstance.Data;
  bVar3 = FFileHelper::SaveStringToFile(&local_f8,(wchar_t *)FVar15.Data,AutoDetect,pIVar7,0);
  if (!bVar3) {
    FErrorReporter::ReportError(param_1,L"Cannot write volume");
  }
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_e8,"Volume2.obj");
  ::FString::ConcatFF(&local_2b8,&local_2f8,pFVar6);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  pFVar6 = FPaths::MakeValidFileName(&local_d8,&local_2b8,L'\0');
  if (&local_2b8 != pFVar6) {
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
    local_2b8.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    local_2b8.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_168,"/");
  ::FString::ConcatFF(&local_178,&local_268,&local_168);
  ::FString::ConcatFF(&local_1f8,&local_178,&local_2b8);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  pIVar7 = IFileManager::Get();
  local_158 = local_298.Data.AllocatorInstance.Data;
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_1f8.Data.ArrayNum != 0) {
    FVar15.Data = local_1f8.Data.AllocatorInstance.Data;
  }
  uStack_150 = local_298.Data.ArrayNum - 1;
  if (local_298.Data.ArrayNum == 0) {
    uStack_150 = uVar9;
  }
  local_c8[0]._12_4_ = uStack_14c;
  local_c8[0].Size = uStack_150;
  local_c8[0].DataPtr = (wchar_t *)local_298.Data.AllocatorInstance.Data;
  bVar3 = FFileHelper::SaveStringToFile(local_c8,(wchar_t *)FVar15.Data,AutoDetect,pIVar7,0);
  if (!bVar3) {
    FErrorReporter::ReportError(param_1,L"Cannot write volume");
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
  }
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  if (local_2e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data);
  }
  if (local_330.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.Data);
  }
  if (local_358.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.Data);
  }
  if (local_348.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data);
  }
  pFVar14 = (param_5->Data).AllocatorInstance.Data;
  if (pFVar14 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar14);
  }
  return;
}

// OverlapGeom @ 143c0e2e0

bool __thiscall
Chaos::FLevelSet::OverlapGeom
          (FLevelSet *this,TBox<double,3> *param_1,TRigidTransform<double,3> *param_2,double param_3
          ,FMTDInfo *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar18;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar27;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> aTStack_d8 [2];
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> TStack_b8;
  undefined1 auStack_a8 [16];
  double dStack_98;
  undefined1 auStack_90 [120];
  
  bVar9 = false;
  pFVar8 = (FScriptContainerElement *)0x0;
  if (param_4 != (FMTDInfo *)0x0) {
    *(undefined8 *)&param_4->Normal = 0;
    *(undefined8 *)&(param_4->Normal).field_0x8 = 0;
    *(undefined8 *)&(param_4->Normal).field_0x10 = 0;
    param_4->Penetration = 0.0;
  }
  iVar11 = 0;
  pTVar7 = TBox<double,3>::ComputeLocalSamplePoints(param_1,aTStack_d8);
  if (&TStack_b8 != pTVar7) {
    pFVar8 = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar11 = pTVar7->ArrayNum;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
  }
  if (aTStack_d8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(aTStack_d8[0].AllocatorInstance.Data);
  }
  uVar27 = (uint)__xmm_80000000000000008000000000000000;
  uVar6 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  pFVar10 = pFVar8;
LAB_143bc04f2:
  do {
    if (pFVar10 == pFVar8 + (longlong)iVar11 * 0x18) {
LAB_143bc0684:
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      return bVar9;
    }
    auVar22 = *(undefined1 (*) [16])&param_2->field_0x10;
    auVar17 = *(undefined1 (*) [16])param_2;
    dVar4 = *(double *)(pFVar10 + 0x10) * *(double *)&param_2->field_0x50;
    dVar18 = *(double *)&param_2->field_0x58 * 0.0;
    dVar5 = *(double *)&param_2->field_0x18;
    dVar2 = *(double *)&param_2->field_0x40 * *(double *)pFVar10;
    dVar3 = *(double *)&param_2->field_0x48 * *(double *)(pFVar10 + 8);
    uVar23 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar13 = *(undefined1 (*) [16])param_2;
    auVar15 = blendpd(auVar13,auVar22,2);
    auVar24._8_4_ = SUB84(dVar3,0);
    auVar24._0_8_ = dVar2;
    auVar24._12_4_ = uVar23;
    dVar12 = auVar22._0_8_;
    auVar25._0_8_ = auVar24._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar2;
    auVar25._8_8_ = dVar4 * auVar13._8_8_ - dVar12 * dVar3;
    auVar19._8_4_ = SUB84(dVar3,0);
    auVar19._0_8_ = dVar2;
    auVar19._12_4_ = uVar23;
    auVar13._8_4_ = SUB84(dVar18,0);
    auVar13._0_8_ = dVar4;
    auVar13._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    auVar13 = blendpd(auVar19,auVar13,2);
    auVar14._0_8_ = auVar13._0_8_ * dVar12 - auVar15._0_8_ * dVar4;
    auVar14._8_8_ = auVar13._8_8_ * auVar22._8_8_ - auVar15._8_8_ * dVar18;
    auVar13 = blendpd(auVar25,auVar14,2);
    dVar18 = auVar25._8_8_ + auVar25._8_8_;
    dVar1 = auVar14._0_8_ + auVar14._0_8_;
    uVar23 = (undefined4)((ulonglong)dVar1 >> 0x20);
    auVar26._0_8_ = auVar13._0_8_ + auVar13._0_8_;
    auVar26._8_8_ = auVar13._8_8_ + auVar13._8_8_;
    auVar20._8_4_ = SUB84(dVar1,0);
    auVar20._0_8_ = dVar18;
    auVar20._12_4_ = uVar23;
    auVar16._8_4_ = SUB84(dVar1,0);
    auVar16._0_8_ = dVar18;
    auVar16._12_4_ = uVar23;
    auVar13 = blendpd(auVar16,auVar26,2);
    auVar21._0_8_ = auVar20._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar18;
    auVar21._8_8_ = auVar26._0_8_ * auVar17._8_8_ - dVar12 * dVar1;
    auVar15._8_4_ = SUB84(auVar21._8_8_,0);
    auVar15._0_8_ = auVar21._0_8_;
    auVar15._12_4_ = (int)((ulonglong)auVar21._8_8_ >> 0x20);
    auVar19 = blendpd(auVar17,auVar22,2);
    auVar17._0_8_ = auVar13._0_8_ * dVar12 - auVar19._0_8_ * auVar26._0_8_;
    auVar17._8_8_ = auVar13._8_8_ * auVar22._8_8_ - auVar19._8_8_ * auVar26._8_8_;
    auVar22 = blendpd(auVar21,auVar17,2);
    dVar12 = dVar1 * dVar5 + dVar3 + auVar17._0_8_ + *(double *)&param_2->field_0x28;
    dStack_98 = auVar26._0_8_ * dVar5 + dVar4 + auVar22._0_8_ + *(double *)&param_2->field_0x30;
    auStack_a8._8_4_ = SUB84(dVar12,0);
    auStack_a8._0_8_ = dVar18 * dVar5 + dVar2 + auVar15._8_8_ + *(double *)&param_2->field_0x20;
    auStack_a8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    dVar12 = PhiWithNormal(this,(TVector<double,3> *)auStack_a8,(TVector<double,3> *)auStack_90);
    if ((param_4 != (FMTDInfo *)0x0) &&
       (dVar18 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ (uint)uVar6,
                                  SUB84(dVar12,0) ^ uVar27),
       param_4->Penetration <= dVar18 && dVar18 != param_4->Penetration)) {
      bVar9 = true;
      pFVar10 = pFVar10 + 0x18;
      *(undefined8 *)&param_4->Normal = auStack_90._0_8_;
      *(undefined8 *)&(param_4->Normal).field_0x8 = auStack_90._8_8_;
      param_4->Penetration = dVar18;
      *(undefined8 *)&(param_4->Normal).field_0x10 = auStack_90._16_8_;
      dVar12 = *(double *)&(param_4->Normal).field_0x8;
      *(double *)&param_4->Position =
           dVar18 * *(double *)&param_4->Normal + (double)auStack_a8._0_8_;
      *(double *)&(param_4->Position).field_0x8 = dVar18 * dVar12 + (double)auStack_a8._8_8_;
      *(double *)&(param_4->Position).field_0x10 = dVar18 * (double)auStack_90._16_8_ + dStack_98;
      goto LAB_143bc04f2;
    }
    if (dVar12 <= 0.0) {
      bVar9 = true;
      goto LAB_143bc0684;
    }
    pFVar10 = pFVar10 + 0x18;
  } while( true );
}

// OverlapGeom @ 143c0e2f0

bool __thiscall
Chaos::FLevelSet::OverlapGeom
          (FLevelSet *this,TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_1,
          TRigidTransform<double,3> *param_2,double param_3,FMTDInfo *param_4)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TBox<double,3> *this_00;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *pTVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  int iVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar33;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> aTStack_e8 [2];
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> TStack_c8;
  undefined1 auStack_b8 [16];
  double dStack_a8;
  undefined1 auStack_a0 [120];
  
  bVar16 = false;
  pFVar13 = (FScriptContainerElement *)0x0;
  if (param_4 != (FMTDInfo *)0x0) {
    *(undefined8 *)&param_4->Normal = 0;
    *(undefined8 *)&(param_4->Normal).field_0x8 = 0;
    *(undefined8 *)&(param_4->Normal).field_0x10 = 0;
    param_4->Penetration = 0.0;
  }
  this_00 = (param_1->MObject).Reference;
  iVar17 = 0;
  if (this_00 != (TBox<double,3> *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
    LOCK();
    plVar1 = &this_00->_padding_;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar11 == 1) && (*(int *)((longlong)&this_00->_padding_ + 4) == 0)) {
      (**(code **)this_00->_padding_)(this_00,1,param_2,param_3);
    }
    pTVar14 = TBox<double,3>::ComputeLocalSamplePoints(this_00,aTStack_e8);
    iVar17 = 0;
    if (&TStack_c8 != pTVar14) {
      pFVar13 = (pTVar14->AllocatorInstance).Data;
      (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar17 = pTVar14->ArrayNum;
      pTVar14->ArrayNum = 0;
      pTVar14->ArrayMax = 0;
    }
    if (aTStack_e8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(aTStack_e8[0].AllocatorInstance.Data);
    }
    fVar3 = *(float *)&param_1->_padding_;
    fVar4 = *(float *)((longlong)&param_1->_padding_ + 4);
    fVar5 = *(float *)&param_1->_padding_;
    for (pFVar15 = pFVar13 + 0x10; pFVar2 = pFVar15 + -0x10,
        pFVar2 != pFVar13 + (longlong)iVar17 * 0x18; pFVar15 = pFVar15 + 0x18) {
      *(double *)pFVar2 = (double)fVar3 * *(double *)pFVar2;
      *(double *)(pFVar15 + -8) = (double)fVar4 * *(double *)(pFVar15 + -8);
      *(double *)pFVar15 = (double)fVar5 * *(double *)pFVar15;
    }
  }
  uVar33 = (uint)__xmm_80000000000000008000000000000000;
  uVar12 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  pFVar15 = pFVar13;
LAB_143bc0880:
  do {
    if (pFVar15 == pFVar13 + (longlong)iVar17 * 0x18) {
LAB_143bc0a1a:
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      return bVar16;
    }
    auVar28 = *(undefined1 (*) [16])&param_2->field_0x10;
    auVar23 = *(undefined1 (*) [16])param_2;
    dVar9 = *(double *)(pFVar15 + 0x10) * *(double *)&param_2->field_0x50;
    dVar24 = *(double *)&param_2->field_0x58 * 0.0;
    dVar10 = *(double *)&param_2->field_0x18;
    dVar7 = *(double *)&param_2->field_0x40 * *(double *)pFVar15;
    dVar8 = *(double *)&param_2->field_0x48 * *(double *)(pFVar15 + 8);
    uVar29 = (undefined4)((ulonglong)dVar8 >> 0x20);
    auVar19 = *(undefined1 (*) [16])param_2;
    auVar21 = blendpd(auVar19,auVar28,2);
    auVar30._8_4_ = SUB84(dVar8,0);
    auVar30._0_8_ = dVar7;
    auVar30._12_4_ = uVar29;
    dVar18 = auVar28._0_8_;
    auVar31._0_8_ = auVar30._8_8_ * auVar19._0_8_ - auVar19._8_8_ * dVar7;
    auVar31._8_8_ = dVar9 * auVar19._8_8_ - dVar18 * dVar8;
    auVar25._8_4_ = SUB84(dVar8,0);
    auVar25._0_8_ = dVar7;
    auVar25._12_4_ = uVar29;
    auVar19._8_4_ = SUB84(dVar24,0);
    auVar19._0_8_ = dVar9;
    auVar19._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    auVar19 = blendpd(auVar25,auVar19,2);
    auVar20._0_8_ = auVar19._0_8_ * dVar18 - auVar21._0_8_ * dVar9;
    auVar20._8_8_ = auVar19._8_8_ * auVar28._8_8_ - auVar21._8_8_ * dVar24;
    auVar19 = blendpd(auVar31,auVar20,2);
    dVar24 = auVar31._8_8_ + auVar31._8_8_;
    dVar6 = auVar20._0_8_ + auVar20._0_8_;
    uVar29 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar32._0_8_ = auVar19._0_8_ + auVar19._0_8_;
    auVar32._8_8_ = auVar19._8_8_ + auVar19._8_8_;
    auVar26._8_4_ = SUB84(dVar6,0);
    auVar26._0_8_ = dVar24;
    auVar26._12_4_ = uVar29;
    auVar22._8_4_ = SUB84(dVar6,0);
    auVar22._0_8_ = dVar24;
    auVar22._12_4_ = uVar29;
    auVar19 = blendpd(auVar22,auVar32,2);
    auVar27._0_8_ = auVar26._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar24;
    auVar27._8_8_ = auVar32._0_8_ * auVar23._8_8_ - dVar18 * dVar6;
    auVar21._8_4_ = SUB84(auVar27._8_8_,0);
    auVar21._0_8_ = auVar27._0_8_;
    auVar21._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
    auVar25 = blendpd(auVar23,auVar28,2);
    auVar23._0_8_ = auVar19._0_8_ * dVar18 - auVar25._0_8_ * auVar32._0_8_;
    auVar23._8_8_ = auVar19._8_8_ * auVar28._8_8_ - auVar25._8_8_ * auVar32._8_8_;
    auVar28 = blendpd(auVar27,auVar23,2);
    dVar18 = dVar6 * dVar10 + dVar8 + auVar23._0_8_ + *(double *)&param_2->field_0x28;
    dStack_a8 = auVar32._0_8_ * dVar10 + dVar9 + auVar28._0_8_ + *(double *)&param_2->field_0x30;
    auStack_b8._8_4_ = SUB84(dVar18,0);
    auStack_b8._0_8_ = dVar24 * dVar10 + dVar7 + auVar21._8_8_ + *(double *)&param_2->field_0x20;
    auStack_b8._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    dVar18 = PhiWithNormal(this,(TVector<double,3> *)auStack_b8,(TVector<double,3> *)auStack_a0);
    if ((param_4 != (FMTDInfo *)0x0) &&
       (dVar24 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ (uint)uVar12,
                                  SUB84(dVar18,0) ^ uVar33),
       param_4->Penetration <= dVar24 && dVar24 != param_4->Penetration)) {
      bVar16 = true;
      pFVar15 = pFVar15 + 0x18;
      *(undefined8 *)&param_4->Normal = auStack_a0._0_8_;
      *(undefined8 *)&(param_4->Normal).field_0x8 = auStack_a0._8_8_;
      param_4->Penetration = dVar24;
      *(undefined8 *)&(param_4->Normal).field_0x10 = auStack_a0._16_8_;
      dVar18 = *(double *)&(param_4->Normal).field_0x8;
      *(double *)&param_4->Position =
           dVar24 * *(double *)&param_4->Normal + (double)auStack_b8._0_8_;
      *(double *)&(param_4->Position).field_0x8 = dVar24 * dVar18 + (double)auStack_b8._8_8_;
      *(double *)&(param_4->Position).field_0x10 = dVar24 * (double)auStack_a0._16_8_ + dStack_a8;
      goto LAB_143bc0880;
    }
    if (dVar18 <= 0.0) {
      bVar16 = true;
      goto LAB_143bc0a1a;
    }
    pFVar15 = pFVar15 + 0x18;
  } while( true );
}

// OverlapGeom @ 143c0e300

bool __thiscall
Chaos::FLevelSet::OverlapGeom
          (FLevelSet *this,TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_1,
          TRigidTransform<double,3> *param_2,double param_3,FMTDInfo *param_4)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TSphere<double,3> *this_00;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *pTVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  int iVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar33;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> aTStack_e8 [2];
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> TStack_c8;
  undefined1 auStack_b8 [16];
  double dStack_a8;
  undefined1 auStack_a0 [120];
  
  bVar16 = false;
  pFVar13 = (FScriptContainerElement *)0x0;
  if (param_4 != (FMTDInfo *)0x0) {
    *(undefined8 *)&param_4->Normal = 0;
    *(undefined8 *)&(param_4->Normal).field_0x8 = 0;
    *(undefined8 *)&(param_4->Normal).field_0x10 = 0;
    param_4->Penetration = 0.0;
  }
  this_00 = (param_1->MObject).Reference;
  iVar17 = 0;
  if (this_00 != (TSphere<double,3> *)0x0) {
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
    LOCK();
    plVar1 = &this_00->_padding_;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar11 == 1) && (*(int *)((longlong)&this_00->_padding_ + 4) == 0)) {
      (**(code **)this_00->_padding_)(this_00,1,param_2,param_3);
    }
    pTVar14 = TSphere<double,3>::ComputeLocalSamplePoints
                        (this_00,aTStack_e8,NumOverlapSphereSamples);
    iVar17 = 0;
    if (&TStack_c8 != pTVar14) {
      pFVar13 = (pTVar14->AllocatorInstance).Data;
      (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar17 = pTVar14->ArrayNum;
      pTVar14->ArrayNum = 0;
      pTVar14->ArrayMax = 0;
    }
    if (aTStack_e8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(aTStack_e8[0].AllocatorInstance.Data);
    }
    fVar3 = *(float *)&param_1->_padding_;
    fVar4 = *(float *)((longlong)&param_1->_padding_ + 4);
    fVar5 = *(float *)&param_1->_padding_;
    for (pFVar15 = pFVar13 + 0x10; pFVar2 = pFVar15 + -0x10,
        pFVar2 != pFVar13 + (longlong)iVar17 * 0x18; pFVar15 = pFVar15 + 0x18) {
      *(double *)pFVar2 = (double)fVar3 * *(double *)pFVar2;
      *(double *)(pFVar15 + -8) = (double)fVar4 * *(double *)(pFVar15 + -8);
      *(double *)pFVar15 = (double)fVar5 * *(double *)pFVar15;
    }
  }
  uVar33 = (uint)__xmm_80000000000000008000000000000000;
  uVar12 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  pFVar15 = pFVar13;
LAB_143bc0c17:
  do {
    if (pFVar15 == pFVar13 + (longlong)iVar17 * 0x18) {
LAB_143bc0db1:
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      return bVar16;
    }
    auVar28 = *(undefined1 (*) [16])&param_2->field_0x10;
    auVar23 = *(undefined1 (*) [16])param_2;
    dVar9 = *(double *)(pFVar15 + 0x10) * *(double *)&param_2->field_0x50;
    dVar24 = *(double *)&param_2->field_0x58 * 0.0;
    dVar10 = *(double *)&param_2->field_0x18;
    dVar7 = *(double *)&param_2->field_0x40 * *(double *)pFVar15;
    dVar8 = *(double *)&param_2->field_0x48 * *(double *)(pFVar15 + 8);
    uVar29 = (undefined4)((ulonglong)dVar8 >> 0x20);
    auVar19 = *(undefined1 (*) [16])param_2;
    auVar21 = blendpd(auVar19,auVar28,2);
    auVar30._8_4_ = SUB84(dVar8,0);
    auVar30._0_8_ = dVar7;
    auVar30._12_4_ = uVar29;
    dVar18 = auVar28._0_8_;
    auVar31._0_8_ = auVar30._8_8_ * auVar19._0_8_ - auVar19._8_8_ * dVar7;
    auVar31._8_8_ = dVar9 * auVar19._8_8_ - dVar18 * dVar8;
    auVar25._8_4_ = SUB84(dVar8,0);
    auVar25._0_8_ = dVar7;
    auVar25._12_4_ = uVar29;
    auVar19._8_4_ = SUB84(dVar24,0);
    auVar19._0_8_ = dVar9;
    auVar19._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    auVar19 = blendpd(auVar25,auVar19,2);
    auVar20._0_8_ = auVar19._0_8_ * dVar18 - auVar21._0_8_ * dVar9;
    auVar20._8_8_ = auVar19._8_8_ * auVar28._8_8_ - auVar21._8_8_ * dVar24;
    auVar19 = blendpd(auVar31,auVar20,2);
    dVar24 = auVar31._8_8_ + auVar31._8_8_;
    dVar6 = auVar20._0_8_ + auVar20._0_8_;
    uVar29 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar32._0_8_ = auVar19._0_8_ + auVar19._0_8_;
    auVar32._8_8_ = auVar19._8_8_ + auVar19._8_8_;
    auVar26._8_4_ = SUB84(dVar6,0);
    auVar26._0_8_ = dVar24;
    auVar26._12_4_ = uVar29;
    auVar22._8_4_ = SUB84(dVar6,0);
    auVar22._0_8_ = dVar24;
    auVar22._12_4_ = uVar29;
    auVar19 = blendpd(auVar22,auVar32,2);
    auVar27._0_8_ = auVar26._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar24;
    auVar27._8_8_ = auVar32._0_8_ * auVar23._8_8_ - dVar18 * dVar6;
    auVar21._8_4_ = SUB84(auVar27._8_8_,0);
    auVar21._0_8_ = auVar27._0_8_;
    auVar21._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
    auVar25 = blendpd(auVar23,auVar28,2);
    auVar23._0_8_ = auVar19._0_8_ * dVar18 - auVar25._0_8_ * auVar32._0_8_;
    auVar23._8_8_ = auVar19._8_8_ * auVar28._8_8_ - auVar25._8_8_ * auVar32._8_8_;
    auVar28 = blendpd(auVar27,auVar23,2);
    dVar18 = dVar6 * dVar10 + dVar8 + auVar23._0_8_ + *(double *)&param_2->field_0x28;
    dStack_a8 = auVar32._0_8_ * dVar10 + dVar9 + auVar28._0_8_ + *(double *)&param_2->field_0x30;
    auStack_b8._8_4_ = SUB84(dVar18,0);
    auStack_b8._0_8_ = dVar24 * dVar10 + dVar7 + auVar21._8_8_ + *(double *)&param_2->field_0x20;
    auStack_b8._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    dVar18 = PhiWithNormal(this,(TVector<double,3> *)auStack_b8,(TVector<double,3> *)auStack_a0);
    if ((param_4 != (FMTDInfo *)0x0) &&
       (dVar24 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ (uint)uVar12,
                                  SUB84(dVar18,0) ^ uVar33),
       param_4->Penetration <= dVar24 && dVar24 != param_4->Penetration)) {
      bVar16 = true;
      pFVar15 = pFVar15 + 0x18;
      *(undefined8 *)&param_4->Normal = auStack_a0._0_8_;
      *(undefined8 *)&(param_4->Normal).field_0x8 = auStack_a0._8_8_;
      param_4->Penetration = dVar24;
      *(undefined8 *)&(param_4->Normal).field_0x10 = auStack_a0._16_8_;
      dVar18 = *(double *)&(param_4->Normal).field_0x8;
      *(double *)&param_4->Position =
           dVar24 * *(double *)&param_4->Normal + (double)auStack_b8._0_8_;
      *(double *)&(param_4->Position).field_0x8 = dVar24 * dVar18 + (double)auStack_b8._8_8_;
      *(double *)&(param_4->Position).field_0x10 = dVar24 * (double)auStack_a0._16_8_ + dStack_a8;
      goto LAB_143bc0c17;
    }
    if (dVar18 <= 0.0) {
      bVar16 = true;
      goto LAB_143bc0db1;
    }
    pFVar15 = pFVar15 + 0x18;
  } while( true );
}

// OverlapGeom @ 143c0e310

bool __thiscall
Chaos::FLevelSet::OverlapGeom
          (FLevelSet *this,TImplicitObjectScaled<Chaos::FCapsule,1> *param_1,
          TRigidTransform<double,3> *param_2,double param_3,FMTDInfo *param_4)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FCapsule *pFVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  ulonglong uVar13;
  FMTDInfo *pFVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  bool bVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar35;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> TStack_e8;
  undefined1 auStack_d8 [16];
  double dStack_c8;
  undefined1 auStack_c0 [152];
  
  pFVar14 = param_4;
  bVar19 = false;
  uVar17 = 0;
  if (param_4 != (FMTDInfo *)0x0) {
    *(undefined8 *)&param_4->Normal = 0;
    *(undefined8 *)&(param_4->Normal).field_0x8 = 0;
    *(undefined8 *)&(param_4->Normal).field_0x10 = 0;
    param_4->Penetration = 0.0;
  }
  pFVar6 = (param_1->MObject).Reference;
  TStack_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_e8.ArrayNum = 0;
  TStack_e8.ArrayMax = 0;
  if (pFVar6 != (FCapsule *)0x0) {
    LOCK();
    *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
    UNLOCK();
    LOCK();
    plVar1 = &pFVar6->_padding_;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar12 == 1) && (*(int *)((longlong)&pFVar6->_padding_ + 4) == 0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1,param_2,param_3);
    }
    GetGeomSurfaceSamplesExtended(pFVar6,&TStack_e8);
    uVar17 = (ulonglong)TStack_e8.ArrayNum;
    fVar3 = *(float *)&param_1->_padding_;
    fVar4 = *(float *)((longlong)&param_1->_padding_ + 4);
    fVar5 = *(float *)&param_1->_padding_;
    for (pFVar15 = TStack_e8.AllocatorInstance.Data + 0x10; pFVar2 = pFVar15 + -0x10,
        pFVar2 != TStack_e8.AllocatorInstance.Data + uVar17 * 0x18; pFVar15 = pFVar15 + 0x18) {
      *(double *)pFVar2 = (double)fVar3 * *(double *)pFVar2;
      *(double *)(pFVar15 + -8) = (double)fVar4 * *(double *)(pFVar15 + -8);
      *(double *)pFVar15 = (double)fVar5 * *(double *)pFVar15;
    }
  }
  uVar35 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  iVar16 = (int)uVar17;
  pFVar15 = TStack_e8.AllocatorInstance.Data + (longlong)iVar16 * 0x18;
  FVar18.Data = TStack_e8.AllocatorInstance.Data;
  while( true ) {
    while( true ) {
      if ((int)uVar17 != iVar16) {
        `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&param_4);
      }
      if (FVar18.Data == pFVar15) goto LAB_143bc112d;
      auVar30 = *(undefined1 (*) [16])&param_2->field_0x10;
      auVar21 = *(undefined1 (*) [16])param_2;
      auVar25 = *(undefined1 (*) [16])param_2;
      dVar8 = *(double *)FVar18.Data * *(double *)&param_2->field_0x40;
      dVar9 = *(double *)(FVar18.Data + 8) * *(double *)&param_2->field_0x48;
      uVar31 = (undefined4)((ulonglong)dVar9 >> 0x20);
      dVar10 = *(double *)(FVar18.Data + 0x10) * *(double *)&param_2->field_0x50;
      dVar26 = *(double *)&param_2->field_0x58 * 0.0;
      dVar11 = *(double *)&param_2->field_0x18;
      auVar32._8_4_ = SUB84(dVar9,0);
      auVar32._0_8_ = dVar8;
      auVar32._12_4_ = uVar31;
      dVar20 = auVar30._0_8_;
      auVar23 = blendpd(auVar21,auVar30,2);
      auVar33._0_8_ = auVar32._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar8;
      auVar33._8_8_ = dVar10 * auVar21._8_8_ - dVar20 * dVar9;
      auVar27._8_4_ = SUB84(dVar9,0);
      auVar27._0_8_ = dVar8;
      auVar27._12_4_ = uVar31;
      auVar21._8_4_ = SUB84(dVar26,0);
      auVar21._0_8_ = dVar10;
      auVar21._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      auVar21 = blendpd(auVar27,auVar21,2);
      auVar22._0_8_ = auVar21._0_8_ * dVar20 - auVar23._0_8_ * dVar10;
      auVar22._8_8_ = auVar21._8_8_ * auVar30._8_8_ - auVar23._8_8_ * dVar26;
      auVar21 = blendpd(auVar33,auVar22,2);
      dVar26 = auVar33._8_8_ + auVar33._8_8_;
      dVar7 = auVar22._0_8_ + auVar22._0_8_;
      uVar31 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar34._0_8_ = auVar21._0_8_ + auVar21._0_8_;
      auVar34._8_8_ = auVar21._8_8_ + auVar21._8_8_;
      auVar28._8_4_ = SUB84(dVar7,0);
      auVar28._0_8_ = dVar26;
      auVar28._12_4_ = uVar31;
      auVar24._8_4_ = SUB84(dVar7,0);
      auVar24._0_8_ = dVar26;
      auVar24._12_4_ = uVar31;
      auVar21 = blendpd(auVar24,auVar34,2);
      auVar29._0_8_ = auVar28._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar26;
      auVar29._8_8_ = auVar34._0_8_ * auVar25._8_8_ - dVar20 * dVar7;
      auVar23._8_4_ = SUB84(auVar29._8_8_,0);
      auVar23._0_8_ = auVar29._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
      auVar27 = blendpd(auVar25,auVar30,2);
      auVar25._0_8_ = auVar21._0_8_ * dVar20 - auVar27._0_8_ * auVar34._0_8_;
      auVar25._8_8_ = auVar21._8_8_ * auVar30._8_8_ - auVar27._8_8_ * auVar34._8_8_;
      auVar30 = blendpd(auVar29,auVar25,2);
      dVar20 = dVar7 * dVar11 + dVar9 + auVar25._0_8_ + *(double *)&param_2->field_0x28;
      dStack_c8 = auVar34._0_8_ * dVar11 + dVar10 + auVar30._0_8_ + *(double *)&param_2->field_0x30;
      auStack_d8._8_4_ = SUB84(dVar20,0);
      auStack_d8._0_8_ = dVar26 * dVar11 + dVar8 + auVar23._8_8_ + *(double *)&param_2->field_0x20;
      auStack_d8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
      dVar20 = PhiWithNormal(this,(TVector<double,3> *)auStack_d8,(TVector<double,3> *)auStack_c0);
      if ((pFVar14 == (FMTDInfo *)0x0) ||
         (dVar26 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ (uint)uVar13,
                                    SUB84(dVar20,0) ^ uVar35),
         dVar26 < pFVar14->Penetration || dVar26 == pFVar14->Penetration)) break;
      bVar19 = true;
      FVar18.Data = FVar18.Data + 0x18;
      *(undefined8 *)&pFVar14->Normal = auStack_c0._0_8_;
      *(undefined8 *)&(pFVar14->Normal).field_0x8 = auStack_c0._8_8_;
      pFVar14->Penetration = dVar26;
      *(undefined8 *)&(pFVar14->Normal).field_0x10 = auStack_c0._16_8_;
      dVar20 = *(double *)&(pFVar14->Normal).field_0x8;
      *(double *)&pFVar14->Position =
           dVar26 * *(double *)&pFVar14->Normal + (double)auStack_d8._0_8_;
      *(double *)&(pFVar14->Position).field_0x8 = dVar26 * dVar20 + (double)auStack_d8._8_8_;
      *(double *)&(pFVar14->Position).field_0x10 = dVar26 * (double)auStack_c0._16_8_ + dStack_c8;
      uVar17 = TStack_e8._8_8_ & 0xffffffff;
    }
    if (dVar20 <= 0.0) break;
    FVar18.Data = FVar18.Data + 0x18;
  }
  bVar19 = true;
LAB_143bc112d:
  if (TStack_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_e8.AllocatorInstance.Data);
  }
  return bVar19;
}

// OverlapGeom @ 143c0e320

bool __thiscall
Chaos::FLevelSet::OverlapGeom
          (FLevelSet *this,TImplicitObjectScaled<Chaos::FConvex,1> *param_1,
          TRigidTransform<double,3> *param_2,double param_3,FMTDInfo *param_4)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FConvex *pFVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  ulonglong uVar14;
  FMTDInfo *pFVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  bool bVar18;
  ForAnyElementType FVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar35;
  undefined1 auStackX_10 [8];
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> TStack_e8;
  undefined1 auStack_d8 [16];
  double dStack_c8;
  undefined1 auStack_c0 [152];
  
  pFVar15 = param_4;
  bVar18 = false;
  if (param_4 != (FMTDInfo *)0x0) {
    *(undefined8 *)&param_4->Normal = 0;
    *(undefined8 *)&(param_4->Normal).field_0x8 = 0;
    *(undefined8 *)&(param_4->Normal).field_0x10 = 0;
    param_4->Penetration = 0.0;
  }
  pFVar7 = (param_1->MObject).Reference;
  TStack_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_e8.ArrayNum = 0;
  TStack_e8.ArrayMax = 0;
  if (pFVar7 != (FConvex *)0x0) {
    LOCK();
    *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
    UNLOCK();
    LOCK();
    plVar1 = &pFVar7->_padding_;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar13 == 1) && (*(int *)((longlong)&pFVar7->_padding_ + 4) == 0)) {
      (**(code **)pFVar7->_padding_)(pFVar7,1,param_2,param_3);
    }
    GetGeomSurfaceSamples(pFVar7,&TStack_e8);
    fVar4 = *(float *)&param_1->_padding_;
    fVar5 = *(float *)((longlong)&param_1->_padding_ + 4);
    fVar6 = *(float *)&param_1->_padding_;
    iVar16 = TStack_e8.ArrayNum;
    pFVar17 = TStack_e8.AllocatorInstance.Data + 0x10;
    pFVar3 = TStack_e8.AllocatorInstance.Data + (longlong)TStack_e8.ArrayNum * 0x18;
    while( true ) {
      if (TStack_e8.ArrayNum != iVar16) {
        `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&param_4);
      }
      pFVar2 = pFVar17 + -0x10;
      if (pFVar2 == pFVar3) break;
      *(double *)pFVar2 = (double)fVar4 * *(double *)pFVar2;
      *(double *)(pFVar17 + -8) = (double)fVar5 * *(double *)(pFVar17 + -8);
      *(double *)pFVar17 = (double)fVar6 * *(double *)pFVar17;
      pFVar17 = pFVar17 + 0x18;
    }
  }
  iVar16 = TStack_e8.ArrayNum;
  uVar35 = (uint)__xmm_80000000000000008000000000000000;
  uVar14 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  pFVar17 = TStack_e8.AllocatorInstance.Data + (longlong)TStack_e8.ArrayNum * 0x18;
  FVar19.Data = TStack_e8.AllocatorInstance.Data;
  while( true ) {
    while( true ) {
      if (TStack_e8.ArrayNum != iVar16) {
        `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStackX_10);
      }
      if (FVar19.Data == pFVar17) goto LAB_143bc14c2;
      auVar30 = *(undefined1 (*) [16])&param_2->field_0x10;
      auVar21 = *(undefined1 (*) [16])param_2;
      auVar25 = *(undefined1 (*) [16])param_2;
      dVar9 = *(double *)FVar19.Data * *(double *)&param_2->field_0x40;
      dVar10 = *(double *)(FVar19.Data + 8) * *(double *)&param_2->field_0x48;
      uVar31 = (undefined4)((ulonglong)dVar10 >> 0x20);
      dVar11 = *(double *)(FVar19.Data + 0x10) * *(double *)&param_2->field_0x50;
      dVar26 = *(double *)&param_2->field_0x58 * 0.0;
      dVar12 = *(double *)&param_2->field_0x18;
      auVar32._8_4_ = SUB84(dVar10,0);
      auVar32._0_8_ = dVar9;
      auVar32._12_4_ = uVar31;
      dVar20 = auVar30._0_8_;
      auVar23 = blendpd(auVar21,auVar30,2);
      auVar33._0_8_ = auVar32._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar9;
      auVar33._8_8_ = dVar11 * auVar21._8_8_ - dVar20 * dVar10;
      auVar27._8_4_ = SUB84(dVar10,0);
      auVar27._0_8_ = dVar9;
      auVar27._12_4_ = uVar31;
      auVar21._8_4_ = SUB84(dVar26,0);
      auVar21._0_8_ = dVar11;
      auVar21._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      auVar21 = blendpd(auVar27,auVar21,2);
      auVar22._0_8_ = auVar21._0_8_ * dVar20 - auVar23._0_8_ * dVar11;
      auVar22._8_8_ = auVar21._8_8_ * auVar30._8_8_ - auVar23._8_8_ * dVar26;
      auVar21 = blendpd(auVar33,auVar22,2);
      dVar26 = auVar33._8_8_ + auVar33._8_8_;
      dVar8 = auVar22._0_8_ + auVar22._0_8_;
      uVar31 = (undefined4)((ulonglong)dVar8 >> 0x20);
      auVar34._0_8_ = auVar21._0_8_ + auVar21._0_8_;
      auVar34._8_8_ = auVar21._8_8_ + auVar21._8_8_;
      auVar28._8_4_ = SUB84(dVar8,0);
      auVar28._0_8_ = dVar26;
      auVar28._12_4_ = uVar31;
      auVar24._8_4_ = SUB84(dVar8,0);
      auVar24._0_8_ = dVar26;
      auVar24._12_4_ = uVar31;
      auVar21 = blendpd(auVar24,auVar34,2);
      auVar29._0_8_ = auVar28._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar26;
      auVar29._8_8_ = auVar34._0_8_ * auVar25._8_8_ - dVar20 * dVar8;
      auVar23._8_4_ = SUB84(auVar29._8_8_,0);
      auVar23._0_8_ = auVar29._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
      auVar27 = blendpd(auVar25,auVar30,2);
      auVar25._0_8_ = auVar21._0_8_ * dVar20 - auVar27._0_8_ * auVar34._0_8_;
      auVar25._8_8_ = auVar21._8_8_ * auVar30._8_8_ - auVar27._8_8_ * auVar34._8_8_;
      auVar30 = blendpd(auVar29,auVar25,2);
      dVar20 = dVar8 * dVar12 + dVar10 + auVar25._0_8_ + *(double *)&param_2->field_0x28;
      dStack_c8 = auVar34._0_8_ * dVar12 + dVar11 + auVar30._0_8_ + *(double *)&param_2->field_0x30;
      auStack_d8._8_4_ = SUB84(dVar20,0);
      auStack_d8._0_8_ = dVar26 * dVar12 + dVar9 + auVar23._8_8_ + *(double *)&param_2->field_0x20;
      auStack_d8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
      dVar20 = PhiWithNormal(this,(TVector<double,3> *)auStack_d8,(TVector<double,3> *)auStack_c0);
      if ((pFVar15 == (FMTDInfo *)0x0) ||
         (dVar26 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ (uint)uVar14,
                                    SUB84(dVar20,0) ^ uVar35),
         dVar26 < pFVar15->Penetration || dVar26 == pFVar15->Penetration)) break;
      bVar18 = true;
      FVar19.Data = FVar19.Data + 0x18;
      *(undefined8 *)&pFVar15->Normal = auStack_c0._0_8_;
      *(undefined8 *)&(pFVar15->Normal).field_0x8 = auStack_c0._8_8_;
      pFVar15->Penetration = dVar26;
      *(undefined8 *)&(pFVar15->Normal).field_0x10 = auStack_c0._16_8_;
      dVar20 = *(double *)&(pFVar15->Normal).field_0x8;
      *(double *)&pFVar15->Position =
           dVar26 * *(double *)&pFVar15->Normal + (double)auStack_d8._0_8_;
      *(double *)&(pFVar15->Position).field_0x8 = dVar26 * dVar20 + (double)auStack_d8._8_8_;
      *(double *)&(pFVar15->Position).field_0x10 = dVar26 * (double)auStack_c0._16_8_ + dStack_c8;
    }
    if (dVar20 <= 0.0) break;
    FVar19.Data = FVar19.Data + 0x18;
  }
  bVar18 = true;
LAB_143bc14c2:
  if (TStack_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_e8.AllocatorInstance.Data);
  }
  return bVar18;
}

// OverlapGeom @ 143c0e330

bool __thiscall
Chaos::FLevelSet::OverlapGeom
          (FLevelSet *this,TSphere<double,3> *param_1,TRigidTransform<double,3> *param_2,
          double param_3,FMTDInfo *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar18;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar27;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> aTStack_d8 [2];
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> TStack_b8;
  undefined1 auStack_a8 [16];
  double dStack_98;
  undefined1 auStack_90 [120];
  
  bVar9 = false;
  pFVar8 = (FScriptContainerElement *)0x0;
  if (param_4 != (FMTDInfo *)0x0) {
    *(undefined8 *)&param_4->Normal = 0;
    *(undefined8 *)&(param_4->Normal).field_0x8 = 0;
    *(undefined8 *)&(param_4->Normal).field_0x10 = 0;
    param_4->Penetration = 0.0;
  }
  iVar11 = 0;
  pTVar7 = TSphere<double,3>::ComputeLocalSamplePoints(param_1,aTStack_d8,NumOverlapSphereSamples);
  if (&TStack_b8 != pTVar7) {
    pFVar8 = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar11 = pTVar7->ArrayNum;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
  }
  if (aTStack_d8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(aTStack_d8[0].AllocatorInstance.Data);
  }
  uVar27 = (uint)__xmm_80000000000000008000000000000000;
  uVar6 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  pFVar10 = pFVar8;
LAB_143bc1630:
  do {
    if (pFVar10 == pFVar8 + (longlong)iVar11 * 0x18) {
LAB_143bc17c2:
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      return bVar9;
    }
    auVar22 = *(undefined1 (*) [16])&param_2->field_0x10;
    auVar17 = *(undefined1 (*) [16])param_2;
    dVar4 = *(double *)(pFVar10 + 0x10) * *(double *)&param_2->field_0x50;
    dVar18 = *(double *)&param_2->field_0x58 * 0.0;
    dVar5 = *(double *)&param_2->field_0x18;
    dVar2 = *(double *)&param_2->field_0x40 * *(double *)pFVar10;
    dVar3 = *(double *)&param_2->field_0x48 * *(double *)(pFVar10 + 8);
    uVar23 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar13 = *(undefined1 (*) [16])param_2;
    auVar15 = blendpd(auVar13,auVar22,2);
    auVar24._8_4_ = SUB84(dVar3,0);
    auVar24._0_8_ = dVar2;
    auVar24._12_4_ = uVar23;
    dVar12 = auVar22._0_8_;
    auVar25._0_8_ = auVar24._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar2;
    auVar25._8_8_ = dVar4 * auVar13._8_8_ - dVar12 * dVar3;
    auVar19._8_4_ = SUB84(dVar3,0);
    auVar19._0_8_ = dVar2;
    auVar19._12_4_ = uVar23;
    auVar13._8_4_ = SUB84(dVar18,0);
    auVar13._0_8_ = dVar4;
    auVar13._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    auVar13 = blendpd(auVar19,auVar13,2);
    auVar14._0_8_ = auVar13._0_8_ * dVar12 - auVar15._0_8_ * dVar4;
    auVar14._8_8_ = auVar13._8_8_ * auVar22._8_8_ - auVar15._8_8_ * dVar18;
    auVar13 = blendpd(auVar25,auVar14,2);
    dVar18 = auVar25._8_8_ + auVar25._8_8_;
    dVar1 = auVar14._0_8_ + auVar14._0_8_;
    uVar23 = (undefined4)((ulonglong)dVar1 >> 0x20);
    auVar26._0_8_ = auVar13._0_8_ + auVar13._0_8_;
    auVar26._8_8_ = auVar13._8_8_ + auVar13._8_8_;
    auVar20._8_4_ = SUB84(dVar1,0);
    auVar20._0_8_ = dVar18;
    auVar20._12_4_ = uVar23;
    auVar16._8_4_ = SUB84(dVar1,0);
    auVar16._0_8_ = dVar18;
    auVar16._12_4_ = uVar23;
    auVar13 = blendpd(auVar16,auVar26,2);
    auVar21._0_8_ = auVar20._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar18;
    auVar21._8_8_ = auVar26._0_8_ * auVar17._8_8_ - dVar12 * dVar1;
    auVar15._8_4_ = SUB84(auVar21._8_8_,0);
    auVar15._0_8_ = auVar21._0_8_;
    auVar15._12_4_ = (int)((ulonglong)auVar21._8_8_ >> 0x20);
    auVar19 = blendpd(auVar17,auVar22,2);
    auVar17._0_8_ = auVar13._0_8_ * dVar12 - auVar19._0_8_ * auVar26._0_8_;
    auVar17._8_8_ = auVar13._8_8_ * auVar22._8_8_ - auVar19._8_8_ * auVar26._8_8_;
    auVar22 = blendpd(auVar21,auVar17,2);
    dVar12 = dVar1 * dVar5 + dVar3 + auVar17._0_8_ + *(double *)&param_2->field_0x28;
    dStack_98 = auVar26._0_8_ * dVar5 + dVar4 + auVar22._0_8_ + *(double *)&param_2->field_0x30;
    auStack_a8._8_4_ = SUB84(dVar12,0);
    auStack_a8._0_8_ = dVar18 * dVar5 + dVar2 + auVar15._8_8_ + *(double *)&param_2->field_0x20;
    auStack_a8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    dVar12 = PhiWithNormal(this,(TVector<double,3> *)auStack_a8,(TVector<double,3> *)auStack_90);
    if ((param_4 != (FMTDInfo *)0x0) &&
       (dVar18 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ (uint)uVar6,
                                  SUB84(dVar12,0) ^ uVar27),
       param_4->Penetration <= dVar18 && dVar18 != param_4->Penetration)) {
      bVar9 = true;
      pFVar10 = pFVar10 + 0x18;
      *(undefined8 *)&param_4->Normal = auStack_90._0_8_;
      *(undefined8 *)&(param_4->Normal).field_0x8 = auStack_90._8_8_;
      param_4->Penetration = dVar18;
      *(undefined8 *)&(param_4->Normal).field_0x10 = auStack_90._16_8_;
      dVar12 = *(double *)&(param_4->Normal).field_0x8;
      *(double *)&param_4->Position =
           dVar18 * *(double *)&param_4->Normal + (double)auStack_a8._0_8_;
      *(double *)&(param_4->Position).field_0x8 = dVar18 * dVar12 + (double)auStack_a8._8_8_;
      *(double *)&(param_4->Position).field_0x10 = dVar18 * (double)auStack_90._16_8_ + dStack_98;
      goto LAB_143bc1630;
    }
    if (dVar12 <= 0.0) {
      bVar9 = true;
      goto LAB_143bc17c2;
    }
    pFVar10 = pFVar10 + 0x18;
  } while( true );
}

// OverlapGeom @ 143c0e340

bool __thiscall
Chaos::FLevelSet::OverlapGeom
          (FLevelSet *this,FCapsule *param_1,TRigidTransform<double,3> *param_2,double param_3,
          FMTDInfo *param_4)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  FMTDInfo *pFVar8;
  int iVar9;
  bool bVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> TStack_e8;
  undefined1 auStack_d8 [16];
  double dStack_c8;
  undefined1 auStack_c0 [152];
  
  pFVar8 = param_4;
  bVar10 = false;
  if (param_4 != (FMTDInfo *)0x0) {
    *(undefined8 *)&param_4->Normal = 0;
    *(undefined8 *)&(param_4->Normal).field_0x8 = 0;
    *(undefined8 *)&(param_4->Normal).field_0x10 = 0;
    param_4->Penetration = 0.0;
  }
  TStack_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_e8.ArrayNum = 0;
  TStack_e8.ArrayMax = 0;
  GetGeomSurfaceSamplesExtended(param_1,&TStack_e8);
  iVar9 = TStack_e8.ArrayNum;
  uVar11 = (ulonglong)TStack_e8.ArrayNum;
  uVar28 = (uint)__xmm_80000000000000008000000000000000;
  uVar7 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  pFVar1 = TStack_e8.AllocatorInstance.Data + uVar11 * 0x18;
  FVar12.Data = TStack_e8.AllocatorInstance.Data;
  while( true ) {
    while( true ) {
      if ((int)uVar11 != iVar9) {
        `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&param_4);
      }
      if (FVar12.Data == pFVar1) goto LAB_143bc1aad;
      auVar23 = *(undefined1 (*) [16])&param_2->field_0x10;
      auVar14 = *(undefined1 (*) [16])param_2;
      auVar18 = *(undefined1 (*) [16])param_2;
      dVar3 = *(double *)FVar12.Data * *(double *)&param_2->field_0x40;
      dVar4 = *(double *)(FVar12.Data + 8) * *(double *)&param_2->field_0x48;
      uVar24 = (undefined4)((ulonglong)dVar4 >> 0x20);
      dVar5 = *(double *)(FVar12.Data + 0x10) * *(double *)&param_2->field_0x50;
      dVar19 = *(double *)&param_2->field_0x58 * 0.0;
      dVar6 = *(double *)&param_2->field_0x18;
      auVar25._8_4_ = SUB84(dVar4,0);
      auVar25._0_8_ = dVar3;
      auVar25._12_4_ = uVar24;
      dVar13 = auVar23._0_8_;
      auVar16 = blendpd(auVar14,auVar23,2);
      auVar26._0_8_ = auVar25._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar3;
      auVar26._8_8_ = dVar5 * auVar14._8_8_ - dVar13 * dVar4;
      auVar20._8_4_ = SUB84(dVar4,0);
      auVar20._0_8_ = dVar3;
      auVar20._12_4_ = uVar24;
      auVar14._8_4_ = SUB84(dVar19,0);
      auVar14._0_8_ = dVar5;
      auVar14._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      auVar14 = blendpd(auVar20,auVar14,2);
      auVar15._0_8_ = auVar14._0_8_ * dVar13 - auVar16._0_8_ * dVar5;
      auVar15._8_8_ = auVar14._8_8_ * auVar23._8_8_ - auVar16._8_8_ * dVar19;
      auVar14 = blendpd(auVar26,auVar15,2);
      dVar19 = auVar26._8_8_ + auVar26._8_8_;
      dVar2 = auVar15._0_8_ + auVar15._0_8_;
      uVar24 = (undefined4)((ulonglong)dVar2 >> 0x20);
      auVar27._0_8_ = auVar14._0_8_ + auVar14._0_8_;
      auVar27._8_8_ = auVar14._8_8_ + auVar14._8_8_;
      auVar21._8_4_ = SUB84(dVar2,0);
      auVar21._0_8_ = dVar19;
      auVar21._12_4_ = uVar24;
      auVar17._8_4_ = SUB84(dVar2,0);
      auVar17._0_8_ = dVar19;
      auVar17._12_4_ = uVar24;
      auVar14 = blendpd(auVar17,auVar27,2);
      auVar22._0_8_ = auVar21._8_8_ * auVar18._0_8_ - auVar18._8_8_ * dVar19;
      auVar22._8_8_ = auVar27._0_8_ * auVar18._8_8_ - dVar13 * dVar2;
      auVar16._8_4_ = SUB84(auVar22._8_8_,0);
      auVar16._0_8_ = auVar22._0_8_;
      auVar16._12_4_ = (int)((ulonglong)auVar22._8_8_ >> 0x20);
      auVar20 = blendpd(auVar18,auVar23,2);
      auVar18._0_8_ = auVar14._0_8_ * dVar13 - auVar20._0_8_ * auVar27._0_8_;
      auVar18._8_8_ = auVar14._8_8_ * auVar23._8_8_ - auVar20._8_8_ * auVar27._8_8_;
      auVar23 = blendpd(auVar22,auVar18,2);
      dVar13 = dVar2 * dVar6 + dVar4 + auVar18._0_8_ + *(double *)&param_2->field_0x28;
      dStack_c8 = auVar27._0_8_ * dVar6 + dVar5 + auVar23._0_8_ + *(double *)&param_2->field_0x30;
      auStack_d8._8_4_ = SUB84(dVar13,0);
      auStack_d8._0_8_ = dVar19 * dVar6 + dVar3 + auVar16._8_8_ + *(double *)&param_2->field_0x20;
      auStack_d8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      dVar13 = PhiWithNormal(this,(TVector<double,3> *)auStack_d8,(TVector<double,3> *)auStack_c0);
      if ((pFVar8 == (FMTDInfo *)0x0) ||
         (dVar19 = (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^ (uint)uVar7,
                                    SUB84(dVar13,0) ^ uVar28),
         dVar19 < pFVar8->Penetration || dVar19 == pFVar8->Penetration)) break;
      bVar10 = true;
      FVar12.Data = FVar12.Data + 0x18;
      *(undefined8 *)&pFVar8->Normal = auStack_c0._0_8_;
      *(undefined8 *)&(pFVar8->Normal).field_0x8 = auStack_c0._8_8_;
      pFVar8->Penetration = dVar19;
      *(undefined8 *)&(pFVar8->Normal).field_0x10 = auStack_c0._16_8_;
      dVar13 = *(double *)&(pFVar8->Normal).field_0x8;
      *(double *)&pFVar8->Position = dVar19 * *(double *)&pFVar8->Normal + (double)auStack_d8._0_8_;
      *(double *)&(pFVar8->Position).field_0x8 = dVar19 * dVar13 + (double)auStack_d8._8_8_;
      *(double *)&(pFVar8->Position).field_0x10 = dVar19 * (double)auStack_c0._16_8_ + dStack_c8;
      uVar11 = TStack_e8._8_8_ & 0xffffffff;
    }
    if (dVar13 <= 0.0) break;
    FVar12.Data = FVar12.Data + 0x18;
  }
  bVar10 = true;
LAB_143bc1aad:
  if (TStack_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_e8.AllocatorInstance.Data);
  }
  return bVar10;
}

// OverlapGeom @ 143c0e350

bool __thiscall
Chaos::FLevelSet::OverlapGeom
          (FLevelSet *this,FConvex *param_1,TRigidTransform<double,3> *param_2,double param_3,
          FMTDInfo *param_4)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  FMTDInfo *pFVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  ForAnyElementType FVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> TStack_d8;
  undefined1 auStack_c8 [16];
  double dStack_b8;
  undefined1 auStack_b0 [152];
  
  pFVar8 = param_4;
  bVar11 = false;
  if (param_4 != (FMTDInfo *)0x0) {
    *(undefined8 *)&param_4->Normal = 0;
    *(undefined8 *)&(param_4->Normal).field_0x8 = 0;
    *(undefined8 *)&(param_4->Normal).field_0x10 = 0;
    param_4->Penetration = 0.0;
  }
  TStack_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_d8.ArrayNum = 0;
  TStack_d8.ArrayMax = 0;
  GetGeomSurfaceSamples(param_1,&TStack_d8);
  iVar9 = TStack_d8.ArrayNum;
  uVar10 = (ulonglong)TStack_d8.ArrayNum;
  uVar28 = (uint)__xmm_80000000000000008000000000000000;
  uVar7 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  pFVar1 = TStack_d8.AllocatorInstance.Data + uVar10 * 0x18;
  FVar12.Data = TStack_d8.AllocatorInstance.Data;
  while( true ) {
    while( true ) {
      if ((int)uVar10 != iVar9) {
        `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&param_4);
      }
      if (FVar12.Data == pFVar1) goto LAB_143bc1da8;
      auVar23 = *(undefined1 (*) [16])&param_2->field_0x10;
      auVar14 = *(undefined1 (*) [16])param_2;
      auVar18 = *(undefined1 (*) [16])param_2;
      dVar3 = *(double *)FVar12.Data * *(double *)&param_2->field_0x40;
      dVar4 = *(double *)(FVar12.Data + 8) * *(double *)&param_2->field_0x48;
      uVar24 = (undefined4)((ulonglong)dVar4 >> 0x20);
      dVar5 = *(double *)(FVar12.Data + 0x10) * *(double *)&param_2->field_0x50;
      dVar19 = *(double *)&param_2->field_0x58 * 0.0;
      dVar6 = *(double *)&param_2->field_0x18;
      auVar25._8_4_ = SUB84(dVar4,0);
      auVar25._0_8_ = dVar3;
      auVar25._12_4_ = uVar24;
      dVar13 = auVar23._0_8_;
      auVar16 = blendpd(auVar14,auVar23,2);
      auVar26._0_8_ = auVar25._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar3;
      auVar26._8_8_ = dVar5 * auVar14._8_8_ - dVar13 * dVar4;
      auVar20._8_4_ = SUB84(dVar4,0);
      auVar20._0_8_ = dVar3;
      auVar20._12_4_ = uVar24;
      auVar14._8_4_ = SUB84(dVar19,0);
      auVar14._0_8_ = dVar5;
      auVar14._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      auVar14 = blendpd(auVar20,auVar14,2);
      auVar15._0_8_ = auVar14._0_8_ * dVar13 - auVar16._0_8_ * dVar5;
      auVar15._8_8_ = auVar14._8_8_ * auVar23._8_8_ - auVar16._8_8_ * dVar19;
      auVar14 = blendpd(auVar26,auVar15,2);
      dVar19 = auVar26._8_8_ + auVar26._8_8_;
      dVar2 = auVar15._0_8_ + auVar15._0_8_;
      uVar24 = (undefined4)((ulonglong)dVar2 >> 0x20);
      auVar27._0_8_ = auVar14._0_8_ + auVar14._0_8_;
      auVar27._8_8_ = auVar14._8_8_ + auVar14._8_8_;
      auVar21._8_4_ = SUB84(dVar2,0);
      auVar21._0_8_ = dVar19;
      auVar21._12_4_ = uVar24;
      auVar17._8_4_ = SUB84(dVar2,0);
      auVar17._0_8_ = dVar19;
      auVar17._12_4_ = uVar24;
      auVar14 = blendpd(auVar17,auVar27,2);
      auVar22._0_8_ = auVar21._8_8_ * auVar18._0_8_ - auVar18._8_8_ * dVar19;
      auVar22._8_8_ = auVar27._0_8_ * auVar18._8_8_ - dVar13 * dVar2;
      auVar16._8_4_ = SUB84(auVar22._8_8_,0);
      auVar16._0_8_ = auVar22._0_8_;
      auVar16._12_4_ = (int)((ulonglong)auVar22._8_8_ >> 0x20);
      auVar20 = blendpd(auVar18,auVar23,2);
      auVar18._0_8_ = auVar14._0_8_ * dVar13 - auVar20._0_8_ * auVar27._0_8_;
      auVar18._8_8_ = auVar14._8_8_ * auVar23._8_8_ - auVar20._8_8_ * auVar27._8_8_;
      auVar23 = blendpd(auVar22,auVar18,2);
      dVar13 = dVar2 * dVar6 + dVar4 + auVar18._0_8_ + *(double *)&param_2->field_0x28;
      dStack_b8 = auVar27._0_8_ * dVar6 + dVar5 + auVar23._0_8_ + *(double *)&param_2->field_0x30;
      auStack_c8._8_4_ = SUB84(dVar13,0);
      auStack_c8._0_8_ = dVar19 * dVar6 + dVar3 + auVar16._8_8_ + *(double *)&param_2->field_0x20;
      auStack_c8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      dVar13 = PhiWithNormal(this,(TVector<double,3> *)auStack_c8,(TVector<double,3> *)auStack_b0);
      if ((pFVar8 == (FMTDInfo *)0x0) ||
         (dVar19 = (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^ (uint)uVar7,
                                    SUB84(dVar13,0) ^ uVar28),
         dVar19 < pFVar8->Penetration || dVar19 == pFVar8->Penetration)) break;
      bVar11 = true;
      FVar12.Data = FVar12.Data + 0x18;
      *(undefined8 *)&pFVar8->Normal = auStack_b0._0_8_;
      *(undefined8 *)&(pFVar8->Normal).field_0x8 = auStack_b0._8_8_;
      pFVar8->Penetration = dVar19;
      *(undefined8 *)&(pFVar8->Normal).field_0x10 = auStack_b0._16_8_;
      dVar13 = *(double *)&(pFVar8->Normal).field_0x8;
      *(double *)&pFVar8->Position = dVar19 * *(double *)&pFVar8->Normal + (double)auStack_c8._0_8_;
      *(double *)&(pFVar8->Position).field_0x8 = dVar19 * dVar13 + (double)auStack_c8._8_8_;
      *(double *)&(pFVar8->Position).field_0x10 = dVar19 * (double)auStack_b0._16_8_ + dStack_b8;
      uVar10 = TStack_d8._8_8_ & 0xffffffff;
    }
    if (dVar13 <= 0.0) break;
    uVar10 = TStack_d8._8_8_ & 0xffffffff;
    FVar12.Data = FVar12.Data + 0x18;
  }
  bVar11 = true;
LAB_143bc1da8:
  if (TStack_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_d8.AllocatorInstance.Data);
  }
  return bVar11;
}

// PhiWithNormal @ 143c0f1a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
Chaos::FLevelSet::PhiWithNormal
          (FLevelSet *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  double *pdVar4;
  longlong lVar5;
  TVector<double,3> *pTVar6;
  int iVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  double dVar14;
  uint uVar17;
  double dVar15;
  double dVar16;
  double local_198;
  double local_190;
  double local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  double local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150 [7];
  undefined8 uStack_118;
  double local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  TVector<double,3> local_a8 [6];
  
  TUniformGrid<double,3>::ClampMinusHalf(&this->MGrid,(TVector<double,3> *)&local_198,param_1);
  dVar10 = 0.0;
  dVar9 = local_190 - *(double *)&param_1->field_0x8;
  dVar14 = local_188 - *(double *)&param_1->field_0x10;
  dVar9 = (local_198 - *(double *)param_1) * (local_198 - *(double *)param_1) + dVar9 * dVar9 +
          dVar14 * dVar14;
  if (dVar9 <= 0.0) {
    pTVar6 = TUniformGridBase<double,3>::LinearlyInterpolate<Chaos::TVector<double,3>_>
                       ((TUniformGridBase<double,3> *)&this->MGrid,local_a8,&this->MNormals,
                        (TVector<double,3> *)&local_198);
    uVar1 = *(undefined8 *)&pTVar6->field_0x8;
    *(undefined8 *)param_2 = *(undefined8 *)pTVar6;
    *(undefined8 *)&param_2->field_0x8 = uVar1;
    dVar9 = *(double *)&pTVar6->field_0x10;
    *(double *)&param_2->field_0x10 = dVar9;
    dVar14 = *(double *)param_2;
    dVar16 = *(double *)&param_2->field_0x8;
    auVar11._0_8_ = dVar14 * dVar14;
    auVar11._8_8_ = 0;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = dVar16 * dVar16 + auVar11._0_8_ + dVar9 * dVar9;
    auVar12 = sqrtpd(auVar11,auVar12);
    if (auVar12._0_8_ <= __real_3e45798ee0000000) {
      dVar16 = 0.0;
      *(undefined8 *)param_2 = 0x3ff0000000000000;
    }
    else {
      dVar15 = __real_3ff0000000000000 / auVar12._0_8_;
      dVar10 = dVar15 * dVar9;
      dVar16 = dVar15 * dVar16;
      *(double *)param_2 = dVar15 * dVar14;
    }
    *(double *)&param_2->field_0x8 = dVar16;
    *(double *)&param_2->field_0x10 = dVar10;
    dVar10 = TUniformGridBase<double,3>::LinearlyInterpolate<double>
                       ((TUniformGridBase<double,3> *)&this->MGrid,&this->MPhi,
                        (TVector<double,3> *)&local_198);
  }
  else {
    local_110 = *(double *)&(this->MLocalBoundingBox).MMin.field_0x10;
    local_150[5] = *(double *)&(this->MLocalBoundingBox).MMin.field_0x10 - local_188;
    local_150[0] = local_198 - *(double *)&(this->MLocalBoundingBox).MMax;
    local_150[4] = *(double *)&(this->MLocalBoundingBox).MMin.field_0x8 - local_190;
    local_150[2] = local_188 - *(double *)&(this->MLocalBoundingBox).MMax.field_0x10;
    local_150[1] = local_190 - *(double *)&(this->MLocalBoundingBox).MMax.field_0x8;
    local_150[3] = *(double *)&(this->MLocalBoundingBox).MMin - local_198;
    local_f8 = *(double *)&(this->MLocalBoundingBox).MMax.field_0x10;
    uVar13 = (uint)__xmm_80000000000000008000000000000000;
    uVar17 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    if ((((*(double *)&(this->MLocalBoundingBox).MMax < local_198) ||
         (*(double *)&(this->MLocalBoundingBox).MMax.field_0x8 < local_190)) ||
        (local_f8 < local_188)) ||
       (((local_198 < *(double *)&(this->MLocalBoundingBox).MMin ||
         (local_190 < *(double *)&(this->MLocalBoundingBox).MMin.field_0x8)) ||
        (local_188 < local_110)))) {
      lVar5 = 0;
      do {
        dVar10 = *(double *)((longlong)local_150 + lVar5);
        if (dVar10 <= 0.0) {
          dVar10 = *(double *)((longlong)local_150 + lVar5 + 0x18);
          if (dVar10 <= 0.0) {
            dVar10 = 0.0;
          }
          else {
            dVar10 = (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) ^ uVar17,
                                      SUB84(dVar10,0) ^ uVar13);
          }
        }
        *(double *)(&param_2->field_0x0 + lVar5) = dVar10;
        lVar5 = lVar5 + 8;
      } while (lVar5 < 0x18);
      dVar10 = TVector<double,3>::SafeNormalize(param_2,__real_3f1a36e2e0000000);
      if (dVar10 < __real_3f1a36e2e0000000) {
        if (*(double *)param_2 <= 0.0) {
          if (*(double *)param_2 < 0.0) {
            *(undefined8 *)param_2 = 0xbff0000000000000;
          }
        }
        else {
          *(undefined8 *)param_2 = 0x3ff0000000000000;
        }
        if (*(double *)&param_2->field_0x8 <= 0.0) {
          if (*(double *)&param_2->field_0x8 < 0.0) {
            *(undefined8 *)&param_2->field_0x8 = 0xbff0000000000000;
          }
        }
        else {
          *(undefined8 *)&param_2->field_0x8 = 0x3ff0000000000000;
        }
        if (*(double *)&param_2->field_0x10 <= 0.0) {
          if (*(double *)&param_2->field_0x10 < 0.0) {
            *(undefined8 *)&param_2->field_0x10 = 0xbff0000000000000;
          }
        }
        else {
          *(undefined8 *)&param_2->field_0x10 = 0x3ff0000000000000;
        }
        UE::Math::TVector<double>::Normalize((TVector<double> *)param_2,__real_3e45798ee0000000);
      }
    }
    else {
      dVar10 = local_150[4];
      if (local_150[4] <= local_150[1]) {
        dVar10 = local_150[1];
      }
      dVar14 = local_150[0];
      if (local_150[0] <= local_150[3]) {
        dVar14 = local_150[3];
      }
      dVar16 = local_150[5];
      if (local_150[5] <= local_150[2]) {
        dVar16 = local_150[2];
      }
      if (dVar14 <= dVar10) {
        uVar8 = (ulonglong)((dVar10 <= dVar16) + 1);
      }
      else {
        uVar8 = 2;
        if (dVar16 < dVar14) {
          uVar8 = 0;
        }
      }
      iVar7 = (int)uVar8;
      if (local_150[uVar8] <= local_150[uVar8 + 3]) {
        if (iVar7 == 0) {
          puVar3 = (uint *)&local_108;
          local_108 = ___xmm_00000000000000003ff0000000000000;
          uStack_100 = _UNK_150689518;
          local_f8 = 0.0;
        }
        else {
          if (iVar7 == 1) {
            local_168 = ___xmm_3ff00000000000000000000000000000;
            uStack_160 = _UNK_15061cbc8;
            local_158 = 0.0;
          }
          else {
            local_168 = 0;
            uStack_160 = 0;
            local_158 = __real_3ff0000000000000;
          }
          puVar3 = (uint *)&local_168;
        }
        pdVar4 = &local_f0;
        local_e8 = CONCAT44(puVar3[3] ^ uVar17,puVar3[2] ^ uVar13);
        local_f0 = (double)CONCAT44(puVar3[1] ^ uVar17,*puVar3 ^ uVar13);
        local_e0 = CONCAT44((uint)((ulonglong)*(undefined8 *)(puVar3 + 4) >> 0x20) ^ uVar17,
                            (uint)*(undefined8 *)(puVar3 + 4) ^ uVar13);
      }
      else {
        if (iVar7 == 0) {
          puVar2 = &local_d8;
          local_d8 = ___xmm_00000000000000003ff0000000000000;
          uStack_d0 = _UNK_150689518;
          local_c8 = 0;
        }
        else {
          if (iVar7 == 1) {
            local_180 = ___xmm_3ff00000000000000000000000000000;
            uStack_178 = _UNK_15061cbc8;
            local_170 = 0.0;
          }
          else {
            local_180 = 0;
            uStack_178 = 0;
            local_170 = __real_3ff0000000000000;
          }
          puVar2 = &local_180;
        }
        pdVar4 = local_150 + 6;
        local_150[6] = (double)*puVar2;
        uStack_118 = puVar2[1];
        local_110 = (double)puVar2[2];
      }
      dVar14 = pdVar4[1];
      dVar10 = pdVar4[2];
      *(double *)param_2 = *pdVar4;
      *(double *)&param_2->field_0x8 = dVar14;
      *(double *)&param_2->field_0x10 = dVar10;
    }
    dVar10 = TUniformGridBase<double,3>::LinearlyInterpolate<double>
                       ((TUniformGridBase<double,3> *)&this->MGrid,&this->MPhi,
                        (TVector<double,3> *)&local_198);
    dVar10 = dVar10 + SQRT(dVar9);
  }
  return dVar10;
}

// SignedDistance @ 143c1a600

double __thiscall Chaos::FLevelSet::SignedDistance(FLevelSet *this,TVector<double,3> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double local_38;
  double local_30;
  double local_28;
  undefined8 extraout_XMM0_Qb;
  
  TUniformGrid<double,3>::ClampMinusHalf(&this->MGrid,(TVector<double,3> *)&local_38,param_1);
  local_30 = local_30 - *(double *)&param_1->field_0x8;
  local_28 = local_28 - *(double *)&param_1->field_0x10;
  dVar1 = (local_38 - *(double *)param_1) * (local_38 - *(double *)param_1) + local_30 * local_30 +
          local_28 * local_28;
  auVar2._0_8_ = TUniformGridBase<double,3>::LinearlyInterpolate<double>
                           ((TUniformGridBase<double,3> *)&this->MGrid,&this->MPhi,
                            (TVector<double,3> *)&local_38);
  auVar2._8_8_ = extraout_XMM0_Qb;
  if (0.0 < dVar1) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = dVar1;
    auVar3 = sqrtpd(auVar2,auVar3);
    auVar2._0_8_ = auVar3._0_8_ + auVar2._0_8_;
  }
  return auVar2._0_8_;
}

// SweepGeom @ 143c1aac0

bool __thiscall
Chaos::FLevelSet::SweepGeom
          (FLevelSet *this,TBox<double,3> *param_1,TRigidTransform<double,3> *param_2,
          TVector<double,3> *param_3,double param_4,double *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8,double param_9,bool param_10)

{
  bool bVar1;
  
  bVar1 = SweepGeomImp<Chaos::TBox<double,3>_>
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
  return bVar1;
}

// SweepGeom @ 143c1aae0

bool __thiscall
Chaos::FLevelSet::SweepGeom
          (FLevelSet *this,TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_1,
          TRigidTransform<double,3> *param_2,TVector<double,3> *param_3,double param_4,
          double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8,
          double param_9,bool param_10)

{
  bool bVar1;
  
  bVar1 = SweepGeomImp<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
  return bVar1;
}

// SweepGeom @ 143c1ab00

bool __thiscall
Chaos::FLevelSet::SweepGeom
          (FLevelSet *this,TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_1,
          TRigidTransform<double,3> *param_2,TVector<double,3> *param_3,double param_4,
          double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8,
          double param_9,bool param_10)

{
  bool bVar1;
  
  bVar1 = SweepGeomImp<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
  return bVar1;
}

// SweepGeom @ 143c1ab20

bool __thiscall
Chaos::FLevelSet::SweepGeom
          (FLevelSet *this,TImplicitObjectScaled<Chaos::FCapsule,1> *param_1,
          TRigidTransform<double,3> *param_2,TVector<double,3> *param_3,double param_4,
          double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8,
          double param_9,bool param_10)

{
  bool bVar1;
  
  bVar1 = SweepGeomImp<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
  return bVar1;
}

// SweepGeom @ 143c1ab40

bool __thiscall
Chaos::FLevelSet::SweepGeom
          (FLevelSet *this,TImplicitObjectScaled<Chaos::FConvex,1> *param_1,
          TRigidTransform<double,3> *param_2,TVector<double,3> *param_3,double param_4,
          double *param_5,TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8,
          double param_9,bool param_10)

{
  bool bVar1;
  
  bVar1 = SweepGeomImp<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
  return bVar1;
}

// SweepGeom @ 143c1ab60

bool __thiscall
Chaos::FLevelSet::SweepGeom
          (FLevelSet *this,TSphere<double,3> *param_1,TRigidTransform<double,3> *param_2,
          TVector<double,3> *param_3,double param_4,double *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8,double param_9,bool param_10)

{
  bool bVar1;
  
  bVar1 = SweepGeomImp<Chaos::TSphere<double,3>_>
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
  return bVar1;
}

// SweepGeom @ 143c1ab80

bool __thiscall
Chaos::FLevelSet::SweepGeom
          (FLevelSet *this,FCapsule *param_1,TRigidTransform<double,3> *param_2,
          TVector<double,3> *param_3,double param_4,double *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8,double param_9,bool param_10)

{
  bool bVar1;
  
  bVar1 = SweepGeomImp<Chaos::FCapsule>
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
  return bVar1;
}

// SweepGeom @ 143c1aba0

bool __thiscall
Chaos::FLevelSet::SweepGeom
          (FLevelSet *this,FConvex *param_1,TRigidTransform<double,3> *param_2,
          TVector<double,3> *param_3,double param_4,double *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,int *param_8,double param_9,bool param_10)

{
  bool bVar1;
  
  bVar1 = SweepGeomImp<Chaos::FConvex>
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
  return bVar1;
}

