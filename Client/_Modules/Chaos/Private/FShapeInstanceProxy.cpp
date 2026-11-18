// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 17

// SetSimData @ 1438d4820

void __thiscall
Chaos::FShapeInstanceProxy::SetSimData(FShapeInstanceProxy *this,FCollisionFilterData *param_1)

{
  uint uVar1;
  IPhysicsProxyBase *pIVar2;
  longlong lVar3;
  FCollisionFilterData local_18;
  
  local_18.Word0 = param_1->Word0;
  local_18.Word1 = param_1->Word1;
  local_18.Word2 = param_1->Word2;
  local_18.Word3 = param_1->Word3;
  lVar3 = this->_padding_;
  pIVar2 = this->Proxy;
  FCollisionData::SetSimData(&(this->CollisionData).Property,&local_18);
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  *(uint *)((longlong)&this->_padding_ + 4) = uVar1 | 1;
  if (((uVar1 == 0) && (pIVar2 != (IPhysicsProxyBase *)0x0)) &&
     (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxyShape(pIVar2->Solver,pIVar2,(uint)lVar3 >> 3);
  }
  return;
}

// GetCombinedShapeFilterData @ 143e26c70

FCombinedShapeFilterData * __thiscall
Chaos::FShapeInstanceProxy::GetCombinedShapeFilterData
          (FShapeInstanceProxy *this,FCombinedShapeFilterData *__return_storage_ptr__)

{
  FCollisionData::GetCombinedShapeFilterData(&(this->CollisionData).Property,__return_storage_ptr__)
  ;
  return __return_storage_ptr__;
}

// GetFilterInstanceData @ 143e292c0

FInstanceData * __thiscall
Chaos::FShapeInstanceProxy::GetFilterInstanceData
          (FShapeInstanceProxy *this,FInstanceData *__return_storage_ptr__)

{
  FCollisionData::GetFilterInstanceData(&(this->CollisionData).Property,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetLeafGeometry @ 143e299f0

FImplicitObject * __thiscall Chaos::FShapeInstanceProxy::GetLeafGeometry(FShapeInstanceProxy *this)

{
  byte bVar1;
  uchar uVar2;
  FImplicitObject *pFVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [32];
  
  pFVar3 = (FImplicitObject *)this->_padding_;
  if (pFVar3 != (FImplicitObject *)0x0) {
    bVar1 = FImplicitObject::GetType(pFVar3);
    if (bVar1 == 4) {
      if (pFVar3->Type != '\x04') {
        pFVar3 = (FImplicitObject *)0x0;
      }
      pFVar3 = GetInnerGeometryInstanceData
                         ((FImplicitObject *)pFVar3[1]._padding_,(TRigidTransform<double,3> **)0x0);
      return pFVar3;
    }
    if ((bVar1 & 0x40) == 0) {
      if (((bVar1 == 5) || (bVar1 == 0xf)) && ((int)pFVar3[1]._padding_ == 1)) {
        pFVar3 = GetInnerGeometryInstanceData
                           (*(FImplicitObject **)pFVar3[1]._padding_,
                            (TRigidTransform<double,3> **)0x0);
        return pFVar3;
      }
    }
    else {
      puVar4 = (undefined8 *)(**(code **)(pFVar3->_padding_ + 0x160))(pFVar3,local_res8);
      uVar2 = FImplicitObject::GetType((FImplicitObject *)*puVar4);
      if (uVar2 != '\b') {
        puVar4 = (undefined8 *)(**(code **)(pFVar3->_padding_ + 0x160))(pFVar3);
        pFVar3 = GetInnerGeometryInstanceData
                           ((FImplicitObject *)*puVar4,(TRigidTransform<double,3> **)0x0);
        return pFVar3;
      }
    }
  }
  return pFVar3;
}

// GetLeafRelativeTransform @ 143e29bf0

TRigidTransform<double,3> * __thiscall
Chaos::FShapeInstanceProxy::GetLeafRelativeTransform
          (FShapeInstanceProxy *this,TRigidTransform<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  __m128d _Var6;
  __m128d _Var7;
  __m128d _Var8;
  byte bVar9;
  uchar uVar10;
  undefined8 *puVar11;
  FImplicitObject *pFVar12;
  TRigidTransform<double,3> *local_res8;
  undefined1 local_res18 [8];
  
  pFVar12 = (FImplicitObject *)this->_padding_;
  local_res8 = (TRigidTransform<double,3> *)0x0;
  if (pFVar12 == (FImplicitObject *)0x0) goto LAB_143e29cd9;
  bVar9 = FImplicitObject::GetType(pFVar12);
  if (bVar9 == 4) {
    if (pFVar12->Type != '\x04') {
      pFVar12 = (FImplicitObject *)0x0;
    }
    local_res8 = (TRigidTransform<double,3> *)&pFVar12[1].Margin;
    pFVar12 = (FImplicitObject *)pFVar12[1]._padding_;
LAB_143e29c84:
    GetInnerGeometryInstanceData(pFVar12,&local_res8);
  }
  else if ((bVar9 & 0x40) == 0) {
    if (((bVar9 == 5) || (bVar9 == 0xf)) && ((int)pFVar12[1]._padding_ == 1)) {
      pFVar12 = *(FImplicitObject **)pFVar12[1]._padding_;
      goto LAB_143e29c84;
    }
  }
  else {
    puVar11 = (undefined8 *)(**(code **)(pFVar12->_padding_ + 0x160))(pFVar12,local_res18);
    uVar10 = FImplicitObject::GetType((FImplicitObject *)*puVar11);
    if (uVar10 != '\b') {
      puVar11 = (undefined8 *)(**(code **)(pFVar12->_padding_ + 0x160))(pFVar12,local_res18);
      pFVar12 = (FImplicitObject *)*puVar11;
      goto LAB_143e29c84;
    }
  }
  if (local_res8 != (TRigidTransform<double,3> *)0x0) {
    uVar1 = *(undefined8 *)&local_res8->field_0x8;
    uVar2 = *(undefined8 *)&local_res8->field_0x10;
    uVar3 = *(undefined8 *)&local_res8->field_0x18;
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)local_res8;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&local_res8->field_0x20;
    uVar4 = *(undefined8 *)&local_res8->field_0x28;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar2;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar3;
    uVar2 = *(undefined8 *)&local_res8->field_0x30;
    uVar3 = *(undefined8 *)&local_res8->field_0x38;
    *(undefined8 *)&__return_storage_ptr__->field_0x20 = uVar1;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = uVar4;
    uVar1 = *(undefined8 *)&local_res8->field_0x40;
    uVar4 = *(undefined8 *)&local_res8->field_0x48;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = uVar2;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = uVar3;
    uVar2 = *(undefined8 *)&local_res8->field_0x50;
    uVar3 = *(undefined8 *)&local_res8->field_0x58;
    *(undefined8 *)&__return_storage_ptr__->field_0x40 = uVar1;
    *(undefined8 *)&__return_storage_ptr__->field_0x48 = uVar4;
    *(undefined8 *)&__return_storage_ptr__->field_0x50 = uVar2;
    *(undefined8 *)&__return_storage_ptr__->field_0x58 = uVar3;
    return __return_storage_ptr__;
  }
LAB_143e29cd9:
  _Var8.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  dVar5 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x0 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  _Var6 = UE::Math::TTransform<double>::Identity.Translation.XY;
  _Var7 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar5;
  UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0] = _Var8.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1] = _Var8.m128d_f64[1];
  dVar5 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x10 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Rotation.ZW = _Var7;
  _Var7 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  _Var8 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *(double *)&__return_storage_ptr__->field_0x18 = dVar5;
  UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0] = _Var6.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1] = _Var6.m128d_f64[1];
  dVar5 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x20 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Translation.XY = _Var8;
  _Var6 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  _Var8 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *(double *)&__return_storage_ptr__->field_0x28 = dVar5;
  UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0] = _Var7.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1] = _Var7.m128d_f64[1];
  dVar5 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x30 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Translation.ZW = _Var8;
  _Var7 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  _Var8 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *(double *)&__return_storage_ptr__->field_0x38 = dVar5;
  UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0] = _Var6.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1] = _Var6.m128d_f64[1];
  dVar5 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x40 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Scale3D.XY = _Var8;
  _Var8 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *(double *)&__return_storage_ptr__->field_0x48 = dVar5;
  UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0] = _Var7.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1] = _Var7.m128d_f64[1];
  dVar5 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x50 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Scale3D.ZW = _Var8;
  *(double *)&__return_storage_ptr__->field_0x58 = dVar5;
  return __return_storage_ptr__;
}

// GetLeafWorldTransform @ 143e29f00

TRigidTransform<double,3> * __thiscall
Chaos::FShapeInstanceProxy::GetLeafWorldTransform
          (FShapeInstanceProxy *this,TRigidTransform<double,3> *__return_storage_ptr__,
          TGeometryParticleHandleImp<double,3,1> *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  uchar uVar3;
  undefined8 *puVar4;
  TRigidTransform<double,3> *pTVar5;
  FImplicitObject *pFVar6;
  TRigidTransform<double,3> *local_res8;
  FGenericParticleHandleImp local_res10;
  TRigidTransform<double,3> local_68;
  
  local_res10.MHandle = param_1;
  FGenericParticleHandleImp::GetTransformPQ(&local_res10,__return_storage_ptr__);
  pFVar6 = (FImplicitObject *)this->_padding_;
  local_res8 = (TRigidTransform<double,3> *)0x0;
  if (pFVar6 == (FImplicitObject *)0x0) {
    return __return_storage_ptr__;
  }
  bVar2 = FImplicitObject::GetType(pFVar6);
  if (bVar2 == 4) {
    if (pFVar6->Type != '\x04') {
      pFVar6 = (FImplicitObject *)0x0;
    }
    local_res8 = (TRigidTransform<double,3> *)&pFVar6[1].Margin;
    pFVar6 = (FImplicitObject *)pFVar6[1]._padding_;
  }
  else if ((bVar2 & 0x40) == 0) {
    if (((bVar2 != 5) && (bVar2 != 0xf)) || ((int)pFVar6[1]._padding_ != 1)) goto LAB_143e29fc1;
    pFVar6 = *(FImplicitObject **)pFVar6[1]._padding_;
  }
  else {
    puVar4 = (undefined8 *)(**(code **)(pFVar6->_padding_ + 0x160))(pFVar6,&local_res10);
    uVar3 = FImplicitObject::GetType((FImplicitObject *)*puVar4);
    if (uVar3 == '\b') goto LAB_143e29fc1;
    puVar4 = (undefined8 *)(**(code **)(pFVar6->_padding_ + 0x160))(pFVar6,&local_res10);
    pFVar6 = (FImplicitObject *)*puVar4;
  }
  GetInnerGeometryInstanceData(pFVar6,&local_res8);
LAB_143e29fc1:
  if (local_res8 != (TRigidTransform<double,3> *)0x0) {
    pTVar5 = TRigidTransform<double,3>::MultiplyNoScale(&local_68,local_res8,__return_storage_ptr__)
    ;
    uVar1 = *(undefined8 *)&pTVar5->field_0x8;
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)pTVar5;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&pTVar5->field_0x18;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&pTVar5->field_0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar1;
    uVar1 = *(undefined8 *)&pTVar5->field_0x28;
    *(undefined8 *)&__return_storage_ptr__->field_0x20 = *(undefined8 *)&pTVar5->field_0x20;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = uVar1;
    uVar1 = *(undefined8 *)&pTVar5->field_0x38;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = *(undefined8 *)&pTVar5->field_0x30;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = uVar1;
    uVar1 = *(undefined8 *)&pTVar5->field_0x48;
    *(undefined8 *)&__return_storage_ptr__->field_0x40 = *(undefined8 *)&pTVar5->field_0x40;
    *(undefined8 *)&__return_storage_ptr__->field_0x48 = uVar1;
    uVar1 = *(undefined8 *)&pTVar5->field_0x58;
    *(undefined8 *)&__return_storage_ptr__->field_0x50 = *(undefined8 *)&pTVar5->field_0x50;
    *(undefined8 *)&__return_storage_ptr__->field_0x58 = uVar1;
  }
  return __return_storage_ptr__;
}

// GetShapeFilterData @ 143e2c990

FShapeFilterData * __thiscall
Chaos::FShapeInstanceProxy::GetShapeFilterData
          (FShapeInstanceProxy *this,FShapeFilterData *__return_storage_ptr__)

{
  FCollisionData::GetShapeFilterData(&(this->CollisionData).Property,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Make @ 143e35320

TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_> __cdecl
Chaos::FShapeInstanceProxy::Make(int param_1,TRefCountPtr<Chaos::FImplicitObject> *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 in_register_0000000c;
  FShapeInstanceProxy *pFVar3;
  longlong *in_R8;
  
  pFVar3 = (FShapeInstanceProxy *)CONCAT44(in_register_0000000c,param_1);
  puVar2 = ::operator_new(0xc0);
  if (puVar2 != (undefined8 *)0x0) {
    *(int *)(puVar2 + 1) = (int)param_2 * 8;
    *puVar2 = &___7FPerShapeData_Chaos__6B_;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    puVar2[2] = 0;
    lVar1 = *in_R8;
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *puVar2 = &___7FShapeInstanceProxy_Chaos__6B_;
    puVar2[9] = 0;
    *(undefined4 *)((longlong)puVar2 + 0x79) = 0;
    *(undefined2 *)((longlong)puVar2 + 0x7d) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x7f) = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    *(byte *)((longlong)puVar2 + 0x79) = *(byte *)((longlong)puVar2 + 0x79) & 0xfb | 3;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[0xe] = 0;
    *(undefined1 *)(puVar2 + 0xf) = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    pFVar3->_padding_ = (longlong)puVar2;
    return (TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>)
           pFVar3;
  }
  pFVar3->_padding_ = 0;
  return (TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>)pFVar3;
}

// SerializationFactory @ 143e4a760

FShapeInstanceProxy * __cdecl
Chaos::FShapeInstanceProxy::SerializationFactory
          (FChaosArchive *param_1,FShapeInstanceProxy *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  FShapeInstanceProxy *pFVar4;
  
  if (((param_1->_padding_ & 1) != 0) &&
     (pFVar4 = ::operator_new(0xc0), pFVar4 != (FShapeInstanceProxy *)0x0)) {
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = (longlong)&___7FShapeInstanceProxy_Chaos__6B_;
    pFVar4->Proxy = (IPhysicsProxyBase *)0x0;
    *(undefined4 *)&(pFVar4->CollisionData).Property.field_0x29 = 0;
    *(undefined2 *)&(pFVar4->CollisionData).Property.field_0x2d = 0;
    (pFVar4->CollisionData).Property.field_0x2f = 0;
    (pFVar4->CollisionData).Property.QueryData.Word2 = 0;
    (pFVar4->CollisionData).Property.QueryData.Word3 = 0;
    (pFVar4->CollisionData).Property.QueryData.Word0 = 0;
    (pFVar4->CollisionData).Property.QueryData.Word1 = 0;
    puVar2 = &(pFVar4->CollisionData).Property.field_0x29;
    (pFVar4->CollisionData).Property.bSimCollision = '\x01';
    (pFVar4->CollisionData).Property.bIsProbe = '\0';
    (pFVar4->CollisionData).Property.bQueryCollision = '\x01';
    (pFVar4->CollisionData).Property.SimData.Word2 = 0;
    (pFVar4->CollisionData).Property.SimData.Word3 = 0;
    (pFVar4->CollisionData).Property.SimData.Word0 = 0;
    (pFVar4->CollisionData).Property.SimData.Word1 = 0;
    (pFVar4->CollisionData).Property.UserData = (void *)0x0;
    (pFVar4->CollisionData).Property.CollisionTraceType = Chaos_CTF_UseDefault;
    (pFVar4->Materials).Property.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->Materials).Property.Materials.ArrayNum = 0;
    (pFVar4->Materials).Property.Materials.ArrayMax = 0;
    (pFVar4->Materials).Property.MaterialMasks.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar4->Materials).Property.MaterialMasks.ArrayNum = 0;
    (pFVar4->Materials).Property.MaterialMasks.ArrayMax = 0;
    (pFVar4->Materials).Property.MaterialMaskMaps.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar4->Materials).Property.MaterialMaskMaps.ArrayNum = 0;
    (pFVar4->Materials).Property.MaterialMaskMaps.ArrayMax = 0;
    (pFVar4->Materials).Property.MaterialMaskMapMaterials.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar4->Materials).Property.MaterialMaskMapMaterials.ArrayNum = 0;
    (pFVar4->Materials).Property.MaterialMaskMapMaterials.ArrayMax = 0;
    return pFVar4;
  }
  return (FShapeInstanceProxy *)0x0;
}

// SerializeMaterials @ 143e4c440

void __thiscall
Chaos::FShapeInstanceProxy::SerializeMaterials(FShapeInstanceProxy *this,FChaosArchive *param_1)

{
  Chaos::operator<<(param_1,&(this->Materials).Property);
  return;
}

// SetCombinedShapeFilterData @ 143e4cf70

void __thiscall
Chaos::FShapeInstanceProxy::SetCombinedShapeFilterData
          (FShapeInstanceProxy *this,FCombinedShapeFilterData *param_1)

{
  uint uVar1;
  IPhysicsProxyBase *pIVar2;
  longlong lVar3;
  FCombinedShapeFilterData local_28;
  
  local_28.ShapeFilterData.QueryBlockChannels = (param_1->ShapeFilterData).QueryBlockChannels;
  local_28.ShapeFilterData.QueryOverlapChannels = (param_1->ShapeFilterData).QueryOverlapChannels;
  local_28.ShapeFilterData.SimBlockChannels = (param_1->ShapeFilterData).SimBlockChannels;
  local_28.ShapeFilterData.Word3 = (param_1->ShapeFilterData).Word3;
  lVar3 = this->_padding_;
  local_28._16_8_ = *(undefined8 *)&(param_1->ShapeFilterData).SimWord3;
  local_28.InstanceData.ComponentId = (param_1->InstanceData).ComponentId;
  local_28.InstanceData.BodyIndex = (param_1->InstanceData).BodyIndex;
  pIVar2 = this->Proxy;
  FCollisionData::SetCombinedShapeFilterData(&(this->CollisionData).Property,&local_28);
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  *(uint *)((longlong)&this->_padding_ + 4) = uVar1 | 1;
  if (((uVar1 == 0) && (pIVar2 != (IPhysicsProxyBase *)0x0)) &&
     (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxyShape(pIVar2->Solver,pIVar2,(uint)lVar3 >> 3);
  }
  return;
}

// SetFilterInstanceData @ 143e4d170

void __thiscall
Chaos::FShapeInstanceProxy::SetFilterInstanceData(FShapeInstanceProxy *this,FInstanceData *param_1)

{
  uint uVar1;
  IPhysicsProxyBase *pIVar2;
  longlong lVar3;
  FInstanceData local_18;
  
  local_18.ActorId = param_1->ActorId;
  local_18.ComponentId = param_1->ComponentId;
  local_18.BodyIndex = param_1->BodyIndex;
  lVar3 = this->_padding_;
  pIVar2 = this->Proxy;
  FCollisionData::SetFilterInstanceData(&(this->CollisionData).Property,&local_18);
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  *(uint *)((longlong)&this->_padding_ + 4) = uVar1 | 1;
  if (((uVar1 == 0) && (pIVar2 != (IPhysicsProxyBase *)0x0)) &&
     (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxyShape(pIVar2->Solver,pIVar2,(uint)lVar3 >> 3);
  }
  return;
}

// SetShapeFilterData @ 143e4e520

void __thiscall
Chaos::FShapeInstanceProxy::SetShapeFilterData(FShapeInstanceProxy *this,FShapeFilterData *param_1)

{
  uint uVar1;
  IPhysicsProxyBase *pIVar2;
  longlong lVar3;
  FShapeFilterData local_28;
  
  local_28.QueryBlockChannels = param_1->QueryBlockChannels;
  local_28.QueryOverlapChannels = param_1->QueryOverlapChannels;
  local_28.SimBlockChannels = param_1->SimBlockChannels;
  local_28.Word3 = param_1->Word3;
  local_28.SimWord3 = param_1->SimWord3;
  lVar3 = this->_padding_;
  pIVar2 = this->Proxy;
  FCollisionData::SetShapeFilterData(&(this->CollisionData).Property,&local_28);
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  *(uint *)((longlong)&this->_padding_ + 4) = uVar1 | 1;
  if (((uVar1 == 0) && (pIVar2 != (IPhysicsProxyBase *)0x0)) &&
     (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxyShape(pIVar2->Solver,pIVar2,(uint)lVar3 >> 3);
  }
  return;
}

// UpdateGeometry @ 143e61900

void __cdecl
Chaos::FShapeInstanceProxy::UpdateGeometry
          (TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>
           *param_1,TRefCountPtr<Chaos::FImplicitObject> *param_2)

{
  longlong *plVar1;
  FImplicitObject *pFVar2;
  FImplicitObject *pFVar3;
  longlong lVar4;
  
  pFVar2 = param_2->Reference;
  pFVar3 = (FImplicitObject *)param_1->Ptr->_padding_;
  if (pFVar3 != pFVar2) {
    param_1->Ptr->_padding_ = (longlong)pFVar2;
    if (pFVar2 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar3 != (FImplicitObject *)0x0) {
      LOCK();
      plVar1 = &pFVar3->_padding_;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar4 == 1) && (*(int *)((longlong)&pFVar3->_padding_ + 4) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000143e61940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pFVar3->_padding_)(pFVar3,1);
        return;
      }
    }
  }
  return;
}

// UpdateLeafWorldTransform @ 143e61aa0

void __thiscall
Chaos::FShapeInstanceProxy::UpdateLeafWorldTransform
          (FShapeInstanceProxy *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  return;
}

// UpdateShapeBounds @ 143e61b30

void __thiscall
Chaos::FShapeInstanceProxy::UpdateShapeBounds
          (FShapeInstanceProxy *this,TRigidTransform<double,3> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [48];
  
  plVar4 = (longlong *)this->_padding_;
  if ((plVar4 != (longlong *)0x0) && (*(char *)((longlong)plVar4 + 0x16) != '\0')) {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x98))(plVar4,local_38,param_1);
    lVar1 = plVar4[1];
    this->_padding_ = *plVar4;
    this->_padding_ = lVar1;
    this->_padding_ = plVar4[2];
    lVar1 = plVar4[4];
    this->_padding_ = plVar4[3];
    this->_padding_ = lVar1;
    this->_padding_ = plVar4[5];
    return;
  }
  lVar2 = *(longlong *)&param_1->field_0x20;
  lVar3 = *(longlong *)&param_1->field_0x28;
  lVar1 = *(longlong *)&param_1->field_0x30;
  this->_padding_ = lVar2;
  this->_padding_ = lVar3;
  this->_padding_ = lVar2;
  this->_padding_ = lVar3;
  this->_padding_ = lVar1;
  this->_padding_ = lVar1;
  return;
}

// UpdateWorldSpaceState @ 143e61eb0

void __thiscall
Chaos::FShapeInstanceProxy::UpdateWorldSpaceState
          (FShapeInstanceProxy *this,TRigidTransform<double,3> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_38 [48];
  
  plVar4 = (longlong *)this->_padding_;
  if ((plVar4 != (longlong *)0x0) && (*(char *)((longlong)plVar4 + 0x16) != '\0')) {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x98))(plVar4,auStack_38,param_1);
    lVar1 = plVar4[1];
    this->_padding_ = *plVar4;
    this->_padding_ = lVar1;
    this->_padding_ = plVar4[2];
    lVar1 = plVar4[4];
    this->_padding_ = plVar4[3];
    this->_padding_ = lVar1;
    this->_padding_ = plVar4[5];
    return;
  }
  lVar2 = *(longlong *)&param_1->field_0x20;
  lVar3 = *(longlong *)&param_1->field_0x28;
  lVar1 = *(longlong *)&param_1->field_0x30;
  this->_padding_ = lVar2;
  this->_padding_ = lVar3;
  this->_padding_ = lVar2;
  this->_padding_ = lVar3;
  this->_padding_ = lVar1;
  this->_padding_ = lVar1;
  return;
}

