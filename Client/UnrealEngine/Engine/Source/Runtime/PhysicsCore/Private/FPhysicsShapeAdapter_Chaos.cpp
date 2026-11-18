// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 5

// FPhysicsShapeAdapter_Chaos @ 1441a0410

FPhysicsShapeAdapter_Chaos * __thiscall
FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos
          (FPhysicsShapeAdapter_Chaos *this,TQuat<double> *param_1,FCollisionShape *param_2)

{
  Type TVar1;
  FImplicitObject *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  FPhysicsShapeAdapter_Chaos *pFVar10;
  FCapsule *pFVar11;
  FCapsule *pFVar12;
  TSphere<double,3> *pTVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90 [3];
  TVector<double,3> local_78;
  TVector<double,3> local_60 [3];
  
  pFVar12 = (FCapsule *)0x0;
  (this->Geometry).Reference = (FImplicitObject *)0x0;
  dVar4 = param_1->Y;
  (this->GeometryRotation).X = param_1->X;
  (this->GeometryRotation).Y = dVar4;
  dVar4 = param_1->W;
  (this->GeometryRotation).Z = param_1->Z;
  (this->GeometryRotation).W = dVar4;
  fVar21 = __real_38d1b717;
  TVar1 = param_2->ShapeType;
  if (TVar1 == Box) {
    dVar4 = (double)(param_2->field1_0x4).Box.HalfExtentX;
    dVar5 = (double)(param_2->field1_0x4).Box.HalfExtentY;
    dVar6 = (double)(param_2->field1_0x4).Box.HalfExtentZ;
    if (dVar4 <= __real_3f1a36e2e0000000) {
      dVar4 = __real_3f1a36e2e0000000;
    }
    if (dVar5 <= __real_3f1a36e2e0000000) {
      dVar5 = __real_3f1a36e2e0000000;
    }
    if (dVar6 <= __real_3f1a36e2e0000000) {
      dVar6 = __real_3f1a36e2e0000000;
    }
    pFVar11 = ::operator_new(0x50);
    if (pFVar11 == (FCapsule *)0x0) {
      plVar15 = (longlong *)&DAT_00000008;
    }
    else {
      Chaos::FImplicitObject::FImplicitObject((FImplicitObject *)pFVar11,3,'\x01');
      uVar8 = __xmm_80000000000000008000000000000000;
      pFVar11->_padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
      plVar15 = &pFVar11->_padding_;
      uVar18 = (uint)uVar8;
      uVar19 = (uint)((ulonglong)uVar8 >> 0x20);
      *(ulonglong *)&(pFVar11->MSegment).MPoint =
           CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ uVar19,SUB84(dVar4,0) ^ uVar18);
      *(ulonglong *)&(pFVar11->MSegment).MPoint.field_0x8 =
           CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^ uVar19,SUB84(dVar5,0) ^ uVar18);
      *(ulonglong *)&(pFVar11->MSegment).MAxis.field_0x4 =
           CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^ uVar19,SUB84(dVar6,0) ^ uVar18);
      *(double *)&(pFVar11->MSegment).MLength = dVar4;
      pFVar11[1]._padding_ = (longlong)dVar5;
      pFVar11[1]._padding_ = (longlong)dVar6;
      LOCK();
      *(int *)plVar15 = (int)*plVar15 + 1;
      UNLOCK();
      pFVar12 = pFVar11;
    }
    if (this == (FPhysicsShapeAdapter_Chaos *)(local_b8 + 8)) {
      if (pFVar12 == (FCapsule *)0x0) {
        return this;
      }
      LOCK();
      lVar7 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar7 != 1) {
        return this;
      }
      if (*(int *)((longlong)&pFVar12->_padding_ + 4) != 0) {
        return this;
      }
      puVar14 = (undefined8 *)pFVar12->_padding_;
    }
    else {
      pFVar11 = (FCapsule *)(this->Geometry).Reference;
      (this->Geometry).Reference = (FImplicitObject *)pFVar12;
      if (pFVar11 == (FCapsule *)0x0) {
        return this;
      }
      LOCK();
      plVar15 = &pFVar11->_padding_;
      lVar7 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar7 != 1) {
        return this;
      }
      if (*(int *)((longlong)&pFVar11->_padding_ + 4) != 0) {
        return this;
      }
      puVar14 = (undefined8 *)pFVar11->_padding_;
      pFVar12 = pFVar11;
    }
    (*(code *)*puVar14)(pFVar12,1);
    return this;
  }
  if (TVar1 == Sphere) {
    fVar21 = (param_2->field1_0x4).Box.HalfExtentX;
    if (fVar21 <= __real_38d1b717) {
      fVar21 = __real_38d1b717;
    }
    pTVar13 = ::operator_new(0x30);
    if (pTVar13 != (TSphere<double,3> *)0x0) {
      local_60[0]._16_8_ = 0;
      local_60[0]._0_8_ = 0;
      local_60[0]._8_8_ = 0;
      pFVar12 = (FCapsule *)
                Chaos::TSphere<double,3>::TSphere<double,3>(pTVar13,local_60,(double)fVar21);
      if (pFVar12 != (FCapsule *)0x0) {
        LOCK();
        *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_ + 1;
        UNLOCK();
        pFVar10 = (FPhysicsShapeAdapter_Chaos *)local_b8;
        goto LAB_1441a0542;
      }
    }
    pFVar10 = (FPhysicsShapeAdapter_Chaos *)local_b8;
  }
  else {
    if (TVar1 != Capsule) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8752542440373616477>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                         ,0xa3,"false");
      if (!bVar9) {
        return this;
      }
      pcVar3 = (code *)swi(3);
      pFVar10 = (FPhysicsShapeAdapter_Chaos *)(*pcVar3)();
      return pFVar10;
    }
    fVar20 = (param_2->field1_0x4).Box.HalfExtentX;
    if ((param_2->field1_0x4).Box.HalfExtentY <= fVar20) {
      pTVar13 = ::operator_new(0x30);
      if (pTVar13 != (TSphere<double,3> *)0x0) {
        if (fVar20 <= __real_38d1b717) {
          fVar20 = __real_38d1b717;
        }
        local_78._16_8_ = 0;
        local_78._0_8_ = 0;
        local_78._8_8_ = 0;
        pFVar12 = (FCapsule *)
                  Chaos::TSphere<double,3>::TSphere<double,3>(pTVar13,&local_78,(double)fVar20);
        if (pFVar12 != (FCapsule *)0x0) {
          LOCK();
          *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_ + 1;
          UNLOCK();
          pFVar10 = (FPhysicsShapeAdapter_Chaos *)(local_c8 + 8);
          goto LAB_1441a0542;
        }
      }
      pFVar10 = (FPhysicsShapeAdapter_Chaos *)(local_c8 + 8);
    }
    else {
      fVar17 = (param_2->field1_0x4).Box.HalfExtentY - fVar20;
      if (fVar17 <= __real_38d1b717) {
        fVar17 = __real_38d1b717;
      }
      fVar16 = (float)((uint)fVar17 ^ __xmm_80000000800000008000000080000000);
      pFVar11 = ::operator_new(0x40);
      if (pFVar11 != (FCapsule *)0x0) {
        if (fVar20 <= fVar21) {
          fVar20 = fVar21;
        }
        local_a8 = 0.0;
        dStack_a0 = 0.0;
        local_90[0] = 0.0;
        local_90[1] = 0.0;
        local_98 = (double)fVar17;
        local_90[2] = (double)fVar16;
        pFVar12 = Chaos::FCapsule::FCapsule
                            (pFVar11,(TVector<double,3> *)local_90,(TVector<double,3> *)&local_a8,
                             (double)fVar20);
        if (pFVar12 != (FCapsule *)0x0) {
          LOCK();
          *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_ + 1;
          UNLOCK();
        }
      }
      pFVar10 = (FPhysicsShapeAdapter_Chaos *)local_c8;
    }
  }
LAB_1441a0542:
  if (this == pFVar10) {
    if (pFVar12 != (FCapsule *)0x0) {
      LOCK();
      plVar15 = &pFVar12->_padding_;
      lVar7 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if (((int)lVar7 == 1) && (*(int *)((longlong)&pFVar12->_padding_ + 4) == 0)) {
        (**(code **)pFVar12->_padding_)(pFVar12,1);
      }
    }
  }
  else {
    pFVar2 = (this->Geometry).Reference;
    (this->Geometry).Reference = (FImplicitObject *)pFVar12;
    if (pFVar2 != (FImplicitObject *)0x0) {
      LOCK();
      plVar15 = &pFVar2->_padding_;
      lVar7 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if (((int)lVar7 == 1) && (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
  }
  return this;
}

// ~FPhysicsShapeAdapter_Chaos @ 1441a1a10

void __thiscall
FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(FPhysicsShapeAdapter_Chaos *this)

{
  longlong *plVar1;
  FImplicitObject *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->Geometry).Reference;
  if (pFVar2 != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &pFVar2->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001441a1a37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

// GetGeomOrientation @ 1441ae190

TQuat<double> * __thiscall
FPhysicsShapeAdapter_Chaos::GetGeomOrientation(FPhysicsShapeAdapter_Chaos *this)

{
  return &this->GeometryRotation;
}

// GetGeomPose @ 1441ae1a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
FPhysicsShapeAdapter_Chaos::GetGeomPose
          (FPhysicsShapeAdapter_Chaos *this,TTransform<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (this->GeometryRotation).Y;
  dVar2 = (this->GeometryRotation).Z;
  dVar3 = (this->GeometryRotation).W;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (this->GeometryRotation).X;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  dVar1 = _UNK_150689688;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = _UNK_150689518;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar1;
  return __return_storage_ptr__;
}

// GetGeometry @ 1441ae200

FImplicitObject * __thiscall
FPhysicsShapeAdapter_Chaos::GetGeometry(FPhysicsShapeAdapter_Chaos *this)

{
  return (this->Geometry).Reference;
}

