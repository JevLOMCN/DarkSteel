// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 19

// GetMaterialDataImpl @ 143791920

/* WARNING: Enum "Type": Some values do not have unique names */

FMaterialData * __thiscall Chaos::FShapeInstance::GetMaterialDataImpl(FShapeInstance *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMaterialData *pFVar6;
  FChaosPhysicsMaterial *pFVar7;
  FMaterialData *pFVar8;
  FMaterialHandle local_18 [4];
  
  if ((this->_padding_ & 4) == 0) {
    return (this->Material).MaterialData;
  }
  local_18[0].InnerHandle = (this->Material).MaterialHandle.InnerHandle;
  pFVar6 = ::operator_new(0x40);
  pFVar8 = (FMaterialData *)0x0;
  if (pFVar6 != (FMaterialData *)0x0) {
    (pFVar6->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Materials).ArrayNum = 0;
    (pFVar6->Materials).ArrayMax = 0;
    (pFVar6->MaterialMasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->MaterialMasks).ArrayNum = 0;
    (pFVar6->MaterialMasks).ArrayMax = 0;
    (pFVar6->MaterialMaskMaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->MaterialMaskMaps).ArrayNum = 0;
    (pFVar6->MaterialMaskMaps).ArrayMax = 0;
    (pFVar6->MaterialMaskMapMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->MaterialMaskMapMaterials).ArrayNum = 0;
    (pFVar6->MaterialMaskMapMaterials).ArrayMax = 0;
    pFVar8 = pFVar6;
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffb;
  (this->Material).MaterialData = pFVar8;
  pFVar7 = FMaterialHandle::Get(local_18);
  if (pFVar7 == (FChaosPhysicsMaterial *)0x0) {
    return (this->Material).MaterialData;
  }
  if (2 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`protected:_struct_Chaos::FMaterialData&___ptr64___cdecl_Chaos::FShapeInstance::GetMaterialDataImpl(void)___ptr64'
                ::__l9::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  pFVar8 = (this->Material).MaterialData;
  pFVar2 = (pFVar8->Materials).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(pFVar8->Materials).ArrayMax * 4))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FMaterialData *)(*pcVar3)();
    return pFVar8;
  }
  iVar5 = (pFVar8->Materials).ArrayNum;
  piVar1 = &(pFVar8->Materials).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)pFVar8,piVar1);
  }
  (pFVar8->Materials).ArrayNum = iVar5 + 1;
  *(THandle<Chaos::FChaosPhysicsMaterial,24,8> *)
   ((pFVar8->Materials).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_18[0].InnerHandle;
  return (this->Material).MaterialData;
}

// SetMaterialImpl @ 1438d2ee0

void __thiscall
Chaos::FShapeInstance::SetMaterialImpl(FShapeInstance *this,FMaterialHandle *param_1)

{
  FMaterialData *pFVar1;
  FScriptContainerElement *pFVar2;
  
  if ((this->_padding_ & 4) == 0) {
    pFVar1 = (this->Material).MaterialData;
    if (pFVar1 != (FMaterialData *)0x0) {
      pFVar2 = (pFVar1->MaterialMaskMapMaterials).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (pFVar1->MaterialMaskMaps).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (pFVar1->MaterialMasks).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (pFVar1->Materials).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pFVar1,0x40);
    }
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 4;
    (this->Material).MaterialHandle.InnerHandle = param_1->InnerHandle;
    return;
  }
  (this->Material).MaterialHandle.InnerHandle = param_1->InnerHandle;
  return;
}

// ~FShapeInstance @ 143dfe260

void __thiscall Chaos::FShapeInstance::~FShapeInstance(FShapeInstance *this)

{
  int *piVar1;
  int iVar2;
  FMaterialData *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  
  this->_padding_ = (longlong)&___7FShapeInstance_Chaos__6B_;
  if (((this->_padding_ & 4) == 0) &&
     (pFVar3 = (this->Material).MaterialData, pFVar3 != (FMaterialData *)0x0)) {
    pFVar4 = (pFVar3->MaterialMaskMapMaterials).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar3->MaterialMaskMaps).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar3->MaterialMasks).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar3->Materials).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(pFVar3,0x40);
  }
  this->_padding_ = (longlong)&___7FPerShapeData_Chaos__6B_;
  puVar5 = (undefined8 *)this->_padding_;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)((longlong)puVar5 + 0xc) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000143dfe30e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar5)(puVar5,1);
      return;
    }
  }
  return;
}

// GetCombinedShapeFilterData @ 143e26c40

FCombinedShapeFilterData * __thiscall
Chaos::FShapeInstance::GetCombinedShapeFilterData
          (FShapeInstance *this,FCombinedShapeFilterData *__return_storage_ptr__)

{
  FCollisionData::GetCombinedShapeFilterData(&this->CollisionData,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetFilterInstanceData @ 143e29290

FInstanceData * __thiscall
Chaos::FShapeInstance::GetFilterInstanceData
          (FShapeInstance *this,FInstanceData *__return_storage_ptr__)

{
  FCollisionData::GetFilterInstanceData(&this->CollisionData,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetLeafGeometry @ 143e29940

FImplicitObject * __thiscall Chaos::FShapeInstance::GetLeafGeometry(FShapeInstance *this)

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

// GetLeafRelativeTransform @ 143e29aa0

TRigidTransform<double,3> * __thiscall
Chaos::FShapeInstance::GetLeafRelativeTransform
          (FShapeInstance *this,TRigidTransform<double,3> *__return_storage_ptr__)

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
  if (pFVar12 == (FImplicitObject *)0x0) goto LAB_143e29b89;
  bVar9 = FImplicitObject::GetType(pFVar12);
  if (bVar9 == 4) {
    if (pFVar12->Type != '\x04') {
      pFVar12 = (FImplicitObject *)0x0;
    }
    local_res8 = (TRigidTransform<double,3> *)&pFVar12[1].Margin;
    pFVar12 = (FImplicitObject *)pFVar12[1]._padding_;
LAB_143e29b34:
    GetInnerGeometryInstanceData(pFVar12,&local_res8);
  }
  else if ((bVar9 & 0x40) == 0) {
    if (((bVar9 == 5) || (bVar9 == 0xf)) && ((int)pFVar12[1]._padding_ == 1)) {
      pFVar12 = *(FImplicitObject **)pFVar12[1]._padding_;
      goto LAB_143e29b34;
    }
  }
  else {
    puVar11 = (undefined8 *)(**(code **)(pFVar12->_padding_ + 0x160))(pFVar12,local_res18);
    uVar10 = FImplicitObject::GetType((FImplicitObject *)*puVar11);
    if (uVar10 != '\b') {
      puVar11 = (undefined8 *)(**(code **)(pFVar12->_padding_ + 0x160))(pFVar12,local_res18);
      pFVar12 = (FImplicitObject *)*puVar11;
      goto LAB_143e29b34;
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
LAB_143e29b89:
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

// GetLeafWorldTransform @ 143e29d40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRigidTransform<double,3> * __thiscall
Chaos::FShapeInstance::GetLeafWorldTransform
          (FShapeInstance *this,TRigidTransform<double,3> *__return_storage_ptr__,
          TGeometryParticleHandleImp<double,3,1> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  uchar uVar5;
  undefined8 *puVar6;
  TRigidTransform<double,3> *pTVar7;
  FImplicitObject *pFVar8;
  FShapeInstance *pFVar9;
  TRigidTransform<double,3> *local_res8;
  FGenericParticleHandleImp local_res20;
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  TRigidTransform<double,3> local_c8;
  TRigidTransform<double,3> local_68;
  
  pFVar9 = this;
  if (((byte)(int)this->_padding_ & 3) != 2) {
    pFVar9 = (FShapeInstance *)0x0;
  }
  if (pFVar9 != (FShapeInstance *)0x0) {
    lVar1 = pFVar9[1]._padding_;
    uVar2 = pFVar9[1]._padding_;
    lVar3 = pFVar9[1]._padding_;
    *(longlong *)__return_storage_ptr__ = pFVar9[1]._padding_;
    *(longlong *)&__return_storage_ptr__->field_0x8 = lVar1;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar2;
    *(longlong *)&__return_storage_ptr__->field_0x18 = lVar3;
    lVar3 = pFVar9[1]._padding_;
    lVar1 = pFVar9[1]._padding_;
    *(longlong *)&__return_storage_ptr__->field_0x20 = pFVar9[1]._padding_;
    *(longlong *)&__return_storage_ptr__->field_0x28 = lVar3;
    *(longlong *)&__return_storage_ptr__->field_0x30 = lVar1;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
    uVar2 = _UNK_150689688;
    *(undefined8 *)&__return_storage_ptr__->field_0x40 = ___xmm_3ff00000000000003ff0000000000000;
    *(undefined8 *)&__return_storage_ptr__->field_0x48 = uVar2;
    uVar2 = _UNK_150689518;
    *(undefined8 *)&__return_storage_ptr__->field_0x50 = ___xmm_00000000000000003ff0000000000000;
    *(undefined8 *)&__return_storage_ptr__->field_0x58 = uVar2;
    return __return_storage_ptr__;
  }
  local_res20.MHandle = param_1;
  FGenericParticleHandleImp::GetTransformPQ(&local_res20,&local_c8);
  pFVar9 = (FShapeInstance *)this->_padding_;
  local_res8 = (TRigidTransform<double,3> *)0x0;
  if (pFVar9 == (FShapeInstance *)0x0) goto LAB_143e29ebd;
  bVar4 = FImplicitObject::GetType((FImplicitObject *)pFVar9);
  if (bVar4 == 4) {
    if ((uchar)pFVar9->_padding_ != '\x04') {
      pFVar9 = (FShapeInstance *)0x0;
    }
    local_res8 = (TRigidTransform<double,3> *)&pFVar9->_padding_;
    pFVar8 = (FImplicitObject *)pFVar9->_padding_;
LAB_143e29e57:
    GetInnerGeometryInstanceData(pFVar8,&local_res8);
  }
  else if ((bVar4 & 0x40) == 0) {
    if (((bVar4 == 5) || (bVar4 == 0xf)) && ((int)pFVar9->_padding_ == 1)) {
      pFVar8 = *(FImplicitObject **)pFVar9->_padding_;
      goto LAB_143e29e57;
    }
  }
  else {
    puVar6 = (undefined8 *)(**(code **)(pFVar9->_padding_ + 0x160))(pFVar9,local_d8);
    uVar5 = FImplicitObject::GetType((FImplicitObject *)*puVar6);
    if (uVar5 != '\b') {
      puVar6 = (undefined8 *)(**(code **)(pFVar9->_padding_ + 0x160))(pFVar9,local_d0);
      pFVar8 = (FImplicitObject *)*puVar6;
      goto LAB_143e29e57;
    }
  }
  if (local_res8 != (TRigidTransform<double,3> *)0x0) {
    pTVar7 = TRigidTransform<double,3>::MultiplyNoScale(&local_68,local_res8,&local_c8);
    local_c8._0_8_ = *(undefined8 *)pTVar7;
    local_c8._8_8_ = *(undefined8 *)&pTVar7->field_0x8;
    local_c8._16_8_ = *(undefined8 *)&pTVar7->field_0x10;
    local_c8._24_8_ = *(undefined8 *)&pTVar7->field_0x18;
    local_c8._32_4_ = *(undefined4 *)&pTVar7->field_0x20;
    local_c8._36_4_ = *(undefined4 *)&pTVar7->field_0x24;
    local_c8._40_4_ = *(undefined4 *)&pTVar7->field_0x28;
    local_c8._44_4_ = *(undefined4 *)&pTVar7->field_0x2c;
    local_c8._48_4_ = *(undefined4 *)&pTVar7->field_0x30;
    local_c8._52_4_ = *(undefined4 *)&pTVar7->field_0x34;
    local_c8._56_4_ = *(undefined4 *)&pTVar7->field_0x38;
    local_c8._60_4_ = *(undefined4 *)&pTVar7->field_0x3c;
    local_c8._64_4_ = *(undefined4 *)&pTVar7->field_0x40;
    local_c8._68_4_ = *(undefined4 *)&pTVar7->field_0x44;
    local_c8._72_4_ = *(undefined4 *)&pTVar7->field_0x48;
    local_c8._76_4_ = *(undefined4 *)&pTVar7->field_0x4c;
    local_c8._80_4_ = *(undefined4 *)&pTVar7->field_0x50;
    local_c8._84_4_ = *(undefined4 *)&pTVar7->field_0x54;
    local_c8._88_4_ = *(undefined4 *)&pTVar7->field_0x58;
    local_c8._92_4_ = *(undefined4 *)&pTVar7->field_0x5c;
  }
LAB_143e29ebd:
  *(undefined8 *)__return_storage_ptr__ = local_c8._0_8_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = local_c8._8_8_;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = local_c8._16_8_;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = local_c8._24_8_;
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = local_c8._32_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = local_c8._36_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = local_c8._40_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = local_c8._44_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = local_c8._48_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = local_c8._52_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = local_c8._56_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = local_c8._60_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = local_c8._64_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x44 = local_c8._68_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = local_c8._72_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c = local_c8._76_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = local_c8._80_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x54 = local_c8._84_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = local_c8._88_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x5c = local_c8._92_4_;
  return __return_storage_ptr__;
}

// GetShapeFilterData @ 143e2c960

FShapeFilterData * __thiscall
Chaos::FShapeInstance::GetShapeFilterData
          (FShapeInstance *this,FShapeFilterData *__return_storage_ptr__)

{
  FCollisionData::GetShapeFilterData(&this->CollisionData,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Make @ 143e35100

TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_> __cdecl
Chaos::FShapeInstance::Make(int param_1,TRefCountPtr<Chaos::FImplicitObject> *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined4 in_register_0000000c;
  FShapeInstance *pFVar7;
  longlong *in_R8;
  
  pFVar7 = (FShapeInstance *)CONCAT44(in_register_0000000c,param_1);
  bVar5 = ShapeInstanceWantsLeafCache((FImplicitObject *)*in_R8);
  if (!bVar5) {
    puVar6 = ::operator_new(0x80);
    if (puVar6 != (undefined8 *)0x0) {
      *(uint *)(puVar6 + 1) = (int)param_2 * 8 | 1;
      *puVar6 = &___7FPerShapeData_Chaos__6B_;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      puVar6[2] = 0;
      lVar4 = *in_R8;
      puVar6[2] = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      *puVar6 = &___7FShapeInstance_Chaos__6B_;
      puVar6[10] = 0;
      puVar6[9] = 0;
      *(byte *)((longlong)puVar6 + 0x71) = *(byte *)((longlong)puVar6 + 0x71) & 0xfb | 3;
      puVar6[0xc] = 0;
      puVar6[0xb] = 0;
      puVar6[0xd] = 0;
      *(undefined1 *)(puVar6 + 0xe) = 0;
      *(undefined4 *)(puVar6 + 0xf) = 0;
      *(uint *)(puVar6 + 1) = *(uint *)(puVar6 + 1) | 4;
      pFVar7->_padding_ = (longlong)puVar6;
      return (TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>)pFVar7;
    }
    pFVar7->_padding_ = 0;
    return (TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>)pFVar7;
  }
  puVar6 = ::operator_new(0xc0);
  if (puVar6 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*in_R8;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
      UNLOCK();
      LOCK();
      *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
      UNLOCK();
    }
    *puVar6 = &___7FPerShapeData_Chaos__6B_;
    *(uint *)(puVar6 + 1) = (int)param_2 * 8 | 2;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    puVar6[2] = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
      UNLOCK();
    }
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    *puVar6 = &___7FShapeInstance_Chaos__6B_;
    puVar6[10] = 0;
    puVar6[9] = 0;
    *(byte *)((longlong)puVar6 + 0x71) = *(byte *)((longlong)puVar6 + 0x71) & 0xfb | 3;
    puVar6[0xc] = 0;
    puVar6[0xb] = 0;
    puVar6[0xd] = 0;
    *(undefined1 *)(puVar6 + 0xe) = 0;
    *(undefined4 *)(puVar6 + 0xf) = 0;
    *(uint *)(puVar6 + 1) = *(uint *)(puVar6 + 1) | 4;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    *puVar6 = &___7FShapeInstanceExtended_Private_Chaos__6B_;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    pFVar7->_padding_ = (longlong)puVar6;
    return (TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>)pFVar7;
  }
  pFVar7->_padding_ = 0;
  return (TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>)pFVar7;
}

// SerializationFactory @ 143e4a6d0

FShapeInstance * __cdecl
Chaos::FShapeInstance::SerializationFactory(FChaosArchive *param_1,FShapeInstance *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  FShapeInstance *pFVar4;
  
  if ((param_1->_padding_ & 1) != 0) {
    pFVar4 = ::operator_new(0x80);
    if (pFVar4 != (FShapeInstance *)0x0) {
      *(undefined4 *)&pFVar4->_padding_ = 1;
      *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = 0;
      pFVar4->_padding_ = 0;
      pFVar4->_padding_ = 0;
      pFVar4->_padding_ = 0;
      pFVar4->_padding_ = 0;
      pFVar4->_padding_ = 0;
      pFVar4->_padding_ = 0;
      pFVar4->_padding_ = 0;
      pFVar4->_padding_ = (longlong)&___7FShapeInstance_Chaos__6B_;
      (pFVar4->CollisionData).QueryData.Word2 = 0;
      (pFVar4->CollisionData).QueryData.Word3 = 0;
      (pFVar4->CollisionData).QueryData.Word0 = 0;
      (pFVar4->CollisionData).QueryData.Word1 = 0;
      (pFVar4->CollisionData).SimData.Word2 = 0;
      (pFVar4->CollisionData).SimData.Word3 = 0;
      (pFVar4->CollisionData).SimData.Word0 = 0;
      (pFVar4->CollisionData).SimData.Word1 = 0;
      (pFVar4->CollisionData).UserData = (void *)0x0;
      (pFVar4->CollisionData).CollisionTraceType = Chaos_CTF_UseDefault;
      puVar2 = &(pFVar4->CollisionData).field_0x29;
      (pFVar4->CollisionData).bSimCollision = '\x01';
      (pFVar4->CollisionData).bIsProbe = '\0';
      (pFVar4->CollisionData).bQueryCollision = '\x01';
      (pFVar4->Material).MaterialHandle.InnerHandle =
           (THandle<Chaos::FChaosPhysicsMaterial,24,8>)0x0;
      *(uint *)&pFVar4->_padding_ = (uint)pFVar4->_padding_ | 4;
      return pFVar4;
    }
  }
  return (FShapeInstance *)0x0;
}

// SerializeMaterials @ 143e4c100

void __thiscall
Chaos::FShapeInstance::SerializeMaterials(FShapeInstance *this,FChaosArchive *param_1)

{
  int *piVar1;
  TArray<Chaos::FMaterialMaskHandle,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<Chaos::FMaterialHandle,TSizedDefaultAllocator<32>_> *pTVar4;
  ForAnyElementType FVar5;
  int iVar6;
  FMaterialData *pFVar7;
  THandle<Chaos::FChaosPhysicsMaterial,24,8> TVar8;
  longlong lVar9;
  FMaterialHandle local_res10 [2];
  FMaterialData local_98;
  FMaterialData local_58;
  
  if ((param_1->_padding_ & 1) == 0) {
    if ((this->_padding_ & 4) == 0) {
      pFVar7 = GetMaterialDataImpl(this);
      Chaos::operator<<(param_1,pFVar7);
    }
    else {
      local_58.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Materials.ArrayNum = 0;
      local_58.Materials.ArrayMax = 0;
      local_58.MaterialMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.MaterialMasks.ArrayNum = 0;
      local_58.MaterialMasks.ArrayMax = 0;
      local_58.MaterialMaskMaps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.MaterialMaskMaps.ArrayNum = 0;
      local_58.MaterialMaskMaps.ArrayMax = 0;
      local_58.MaterialMaskMapMaterials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.MaterialMaskMapMaterials.ArrayNum = 0;
      local_58.MaterialMaskMapMaterials.ArrayMax = 0;
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)&local_58,&local_58.Materials.ArrayMax);
      local_58.Materials.ArrayNum = iVar6 + 1;
      *(THandle<Chaos::FChaosPhysicsMaterial,24,8> *)
       (local_58.Materials.AllocatorInstance.Data + (longlong)iVar6 * 4) =
           (this->Material).MaterialHandle.InnerHandle;
      Chaos::operator<<(param_1,&local_58);
      if (local_58.MaterialMaskMapMaterials.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_58.MaterialMaskMapMaterials.AllocatorInstance.Data);
      }
      if (local_58.MaterialMaskMaps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.MaterialMaskMaps.AllocatorInstance.Data);
      }
      if (local_58.MaterialMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.MaterialMasks.AllocatorInstance.Data);
      }
      if (local_58.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Materials.AllocatorInstance.Data);
      }
    }
  }
  else {
    TVar8 = (THandle<Chaos::FChaosPhysicsMaterial,24,8>)0x0;
    local_98.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Materials.ArrayNum = 0;
    local_98.Materials.ArrayMax = 0;
    local_98.MaterialMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.MaterialMasks.ArrayNum = 0;
    local_98.MaterialMasks.ArrayMax = 0;
    local_98.MaterialMaskMaps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.MaterialMaskMaps.ArrayNum = 0;
    local_98.MaterialMaskMaps.ArrayMax = 0;
    local_98.MaterialMaskMapMaterials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.MaterialMaskMapMaterials.ArrayNum = 0;
    local_98.MaterialMaskMapMaterials.ArrayMax = 0;
    Chaos::operator<<(param_1,&local_98);
    if ((((local_98.Materials.ArrayNum < 2) && (local_98.MaterialMasks.ArrayNum == 0)) &&
        (local_98.MaterialMaskMaps.ArrayNum == 0)) &&
       (local_98.MaterialMaskMapMaterials.ArrayNum == 0)) {
      if (0 < local_98.Materials.ArrayNum) {
        TVar8 = *(THandle<Chaos::FChaosPhysicsMaterial,24,8> *)
                 local_98.Materials.AllocatorInstance.Data;
      }
      local_res10[0].InnerHandle = TVar8;
      SetMaterialImpl(this,local_res10);
    }
    else {
      pFVar7 = GetMaterialDataImpl(this);
      FVar5.Data = local_98.Materials.AllocatorInstance.Data;
      if (pFVar7 != &local_98) {
        iVar6 = local_98.Materials.ArrayNum;
        lVar9 = (longlong)local_98.Materials.ArrayNum;
        piVar1 = &(pFVar7->Materials).ArrayMax;
        (pFVar7->Materials).ArrayNum = local_98.Materials.ArrayNum;
        if ((local_98.Materials.ArrayNum == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_98.Materials.ArrayNum,*piVar1,(ForAnyElementType *)pFVar7,
                     local_98.Materials.ArrayNum,piVar1);
          if (iVar6 != 0) {
            memcpy((pFVar7->Materials).AllocatorInstance.Data,FVar5.Data,lVar9 << 2);
          }
        }
      }
      FVar5.Data = local_98.MaterialMasks.AllocatorInstance.Data;
      pTVar2 = &pFVar7->MaterialMasks;
      if (pTVar2 != &local_98.MaterialMasks) {
        iVar6 = local_98.MaterialMasks.ArrayNum;
        lVar9 = (longlong)local_98.MaterialMasks.ArrayNum;
        piVar1 = &(pFVar7->MaterialMasks).ArrayMax;
        (pFVar7->MaterialMasks).ArrayNum = local_98.MaterialMasks.ArrayNum;
        if ((local_98.MaterialMasks.ArrayNum == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_98.MaterialMasks.ArrayNum,*piVar1,&pTVar2->AllocatorInstance,
                     local_98.MaterialMasks.ArrayNum,piVar1);
          if (iVar6 != 0) {
            memcpy((pTVar2->AllocatorInstance).Data,FVar5.Data,lVar9 << 2);
          }
        }
      }
      FVar5.Data = local_98.MaterialMaskMaps.AllocatorInstance.Data;
      pTVar3 = &pFVar7->MaterialMaskMaps;
      if (pTVar3 != &local_98.MaterialMaskMaps) {
        iVar6 = local_98.MaterialMaskMaps.ArrayNum;
        lVar9 = (longlong)local_98.MaterialMaskMaps.ArrayNum;
        piVar1 = &(pFVar7->MaterialMaskMaps).ArrayMax;
        (pFVar7->MaterialMaskMaps).ArrayNum = local_98.MaterialMaskMaps.ArrayNum;
        if ((local_98.MaterialMaskMaps.ArrayNum == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_98.MaterialMaskMaps.ArrayNum,*piVar1,&pTVar3->AllocatorInstance,
                     local_98.MaterialMaskMaps.ArrayNum,piVar1);
          if (iVar6 != 0) {
            memcpy((pTVar3->AllocatorInstance).Data,FVar5.Data,lVar9 << 2);
          }
        }
      }
      FVar5.Data = local_98.MaterialMaskMapMaterials.AllocatorInstance.Data;
      pTVar4 = &pFVar7->MaterialMaskMapMaterials;
      if (pTVar4 != &local_98.MaterialMaskMapMaterials) {
        iVar6 = local_98.MaterialMaskMapMaterials.ArrayNum;
        lVar9 = (longlong)local_98.MaterialMaskMapMaterials.ArrayNum;
        piVar1 = &(pFVar7->MaterialMaskMapMaterials).ArrayMax;
        (pFVar7->MaterialMaskMapMaterials).ArrayNum = local_98.MaterialMaskMapMaterials.ArrayNum;
        if ((local_98.MaterialMaskMapMaterials.ArrayNum == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_98.MaterialMaskMapMaterials.ArrayNum,*piVar1,
                     &pTVar4->AllocatorInstance,local_98.MaterialMaskMapMaterials.ArrayNum,piVar1);
          if (iVar6 != 0) {
            memcpy((pTVar4->AllocatorInstance).Data,FVar5.Data,lVar9 << 2);
          }
        }
      }
    }
    if (local_98.MaterialMaskMapMaterials.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_98.MaterialMaskMapMaterials.AllocatorInstance.Data);
    }
    if (local_98.MaterialMaskMaps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.MaterialMaskMaps.AllocatorInstance.Data);
    }
    if (local_98.MaterialMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.MaterialMasks.AllocatorInstance.Data);
    }
    if (local_98.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Materials.AllocatorInstance.Data);
    }
  }
  return;
}

// SetCombinedShapeFilterData @ 143e4cf60

void __thiscall
Chaos::FShapeInstance::SetCombinedShapeFilterData
          (FShapeInstance *this,FCombinedShapeFilterData *param_1)

{
  FCollisionData::SetCombinedShapeFilterData(&this->CollisionData,param_1);
  return;
}

// SetFilterInstanceData @ 143e4d160

void __thiscall
Chaos::FShapeInstance::SetFilterInstanceData(FShapeInstance *this,FInstanceData *param_1)

{
  FCollisionData::SetFilterInstanceData(&this->CollisionData,param_1);
  return;
}

// SetShapeFilterData @ 143e4e510

void __thiscall
Chaos::FShapeInstance::SetShapeFilterData(FShapeInstance *this,FShapeFilterData *param_1)

{
  FCollisionData::SetShapeFilterData(&this->CollisionData,param_1);
  return;
}

// UpdateGeometry @ 143e61700

void __cdecl
Chaos::FShapeInstance::UpdateGeometry
          (TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_> *param_1,
          TRefCountPtr<Chaos::FImplicitObject> *param_2)

{
  longlong *plVar1;
  FShapeInstance *pFVar2;
  FImplicitObject *pFVar3;
  FImplicitObject *pFVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  EChaosCollisionTraceFlag EVar8;
  undefined7 uVar9;
  longlong lVar10;
  bool bVar11;
  FShapeInstance *this;
  TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_> *pTVar12;
  undefined8 *puVar13;
  TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_> local_18;
  TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_> local_10;
  
  bVar11 = ShapeInstanceWantsLeafCache(param_2->Reference);
  pFVar2 = param_1->Ptr;
  if (bVar11 != (((byte)(int)pFVar2->_padding_ & 3) == 2)) {
    if (bVar11) {
      this = ::operator_new(0xc0);
      if (this == (FShapeInstance *)0x0) {
        this = (FShapeInstance *)0x0;
      }
      else {
        FPerShapeData::FPerShapeData((FPerShapeData *)this,SimExtended,(FPerShapeData *)pFVar2);
        this->_padding_ = (longlong)&___7FShapeInstance_Chaos__6B_;
        uVar5 = (pFVar2->CollisionData).QueryData.Word1;
        uVar6 = (pFVar2->CollisionData).QueryData.Word2;
        uVar7 = (pFVar2->CollisionData).QueryData.Word3;
        (this->CollisionData).QueryData.Word0 = (pFVar2->CollisionData).QueryData.Word0;
        (this->CollisionData).QueryData.Word1 = uVar5;
        (this->CollisionData).QueryData.Word2 = uVar6;
        (this->CollisionData).QueryData.Word3 = uVar7;
        uVar5 = (pFVar2->CollisionData).SimData.Word1;
        uVar6 = (pFVar2->CollisionData).SimData.Word2;
        uVar7 = (pFVar2->CollisionData).SimData.Word3;
        (this->CollisionData).SimData.Word0 = (pFVar2->CollisionData).SimData.Word0;
        (this->CollisionData).SimData.Word1 = uVar5;
        (this->CollisionData).SimData.Word2 = uVar6;
        (this->CollisionData).SimData.Word3 = uVar7;
        EVar8 = (pFVar2->CollisionData).CollisionTraceType;
        uVar9 = *(undefined7 *)&(pFVar2->CollisionData).field_0x29;
        (this->CollisionData).UserData = (pFVar2->CollisionData).UserData;
        (this->CollisionData).CollisionTraceType = EVar8;
        *(undefined7 *)&(this->CollisionData).field_0x29 = uVar9;
        (this->Material).MaterialHandle.InnerHandle =
             (THandle<Chaos::FChaosPhysicsMaterial,24,8>)0x0;
        if ((this->_padding_ & 4) == 0) {
          this->Material = pFVar2->Material;
          (pFVar2->Material).MaterialData = (FMaterialData *)0x0;
        }
        else {
          (this->Material).MaterialHandle.InnerHandle =
               (pFVar2->Material).MaterialHandle.InnerHandle;
        }
        this->_padding_ = (longlong)&___7FShapeInstanceExtended_Private_Chaos__6B_;
        this[1]._padding_ = 0;
        this[1]._padding_ = 0;
        this[1]._padding_ = 0;
        this[1]._padding_ = 0;
      }
      pTVar12 = &local_18;
    }
    else {
      this = ::operator_new(0x80);
      if (this == (FShapeInstance *)0x0) {
        this = (FShapeInstance *)0x0;
        pTVar12 = &local_10;
      }
      else {
        FPerShapeData::FPerShapeData((FPerShapeData *)this,Sim,(FPerShapeData *)pFVar2);
        this->_padding_ = (longlong)&___7FShapeInstance_Chaos__6B_;
        uVar5 = (pFVar2->CollisionData).QueryData.Word1;
        uVar6 = (pFVar2->CollisionData).QueryData.Word2;
        uVar7 = (pFVar2->CollisionData).QueryData.Word3;
        (this->CollisionData).QueryData.Word0 = (pFVar2->CollisionData).QueryData.Word0;
        (this->CollisionData).QueryData.Word1 = uVar5;
        (this->CollisionData).QueryData.Word2 = uVar6;
        (this->CollisionData).QueryData.Word3 = uVar7;
        uVar5 = (pFVar2->CollisionData).SimData.Word1;
        uVar6 = (pFVar2->CollisionData).SimData.Word2;
        uVar7 = (pFVar2->CollisionData).SimData.Word3;
        (this->CollisionData).SimData.Word0 = (pFVar2->CollisionData).SimData.Word0;
        (this->CollisionData).SimData.Word1 = uVar5;
        (this->CollisionData).SimData.Word2 = uVar6;
        (this->CollisionData).SimData.Word3 = uVar7;
        EVar8 = (pFVar2->CollisionData).CollisionTraceType;
        uVar9 = *(undefined7 *)&(pFVar2->CollisionData).field_0x29;
        (this->CollisionData).UserData = (pFVar2->CollisionData).UserData;
        (this->CollisionData).CollisionTraceType = EVar8;
        *(undefined7 *)&(this->CollisionData).field_0x29 = uVar9;
        (this->Material).MaterialHandle.InnerHandle =
             (THandle<Chaos::FChaosPhysicsMaterial,24,8>)0x0;
        if ((this->_padding_ & 4) == 0) {
          this->Material = pFVar2->Material;
          pTVar12 = &local_10;
          (pFVar2->Material).MaterialData = (FMaterialData *)0x0;
        }
        else {
          (this->Material).MaterialHandle.InnerHandle =
               (pFVar2->Material).MaterialHandle.InnerHandle;
          pTVar12 = &local_10;
        }
      }
    }
    if (param_1 == pTVar12) {
      if (this == (FShapeInstance *)0x0) goto LAB_143e61892;
      puVar13 = (undefined8 *)this->_padding_;
    }
    else {
      pFVar2 = param_1->Ptr;
      param_1->Ptr = this;
      if (pFVar2 == (FShapeInstance *)0x0) goto LAB_143e61892;
      puVar13 = (undefined8 *)pFVar2->_padding_;
      this = pFVar2;
    }
    (*(code *)*puVar13)(this,1);
  }
LAB_143e61892:
  pFVar3 = param_2->Reference;
  pFVar4 = (FImplicitObject *)param_1->Ptr->_padding_;
  if (pFVar4 != pFVar3) {
    param_1->Ptr->_padding_ = (longlong)pFVar3;
    if (pFVar3 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar4 != (FImplicitObject *)0x0) {
      LOCK();
      plVar1 = &pFVar4->_padding_;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar10 == 1) && (*(int *)((longlong)&pFVar4->_padding_ + 4) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000143e618e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pFVar4->_padding_)(pFVar4,1);
        return;
      }
    }
  }
  return;
}

// UpdateLeafWorldTransform @ 143e61950

void __thiscall
Chaos::FShapeInstance::UpdateLeafWorldTransform
          (FShapeInstance *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  char *pcVar1;
  byte bVar2;
  uchar uVar3;
  undefined8 *puVar4;
  TRigidTransform<double,3> *pTVar5;
  FImplicitObject *pFVar6;
  FShapeInstance *this_00;
  FShapeInstance *pFVar7;
  TRigidTransform<double,3> *local_res8 [2];
  FGenericParticleHandleImp local_res18;
  undefined1 local_res20 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [128];
  TRigidTransform<double,3> local_78;
  
  pFVar7 = this;
  if (((byte)(int)this->_padding_ & 3) != 2) {
    pFVar7 = (FShapeInstance *)0x0;
  }
  if (pFVar7 == (FShapeInstance *)0x0) {
    return;
  }
  local_res18.MHandle = param_1;
  FGenericParticleHandleImp::GetTransformPQ(&local_res18,(TRigidTransform<double,3> *)local_f8);
  this_00 = (FShapeInstance *)this->_padding_;
  local_res8[0] = (TRigidTransform<double,3> *)0x0;
  if (this_00 == (FShapeInstance *)0x0) goto LAB_143e61a65;
  bVar2 = FImplicitObject::GetType((FImplicitObject *)this_00);
  if (bVar2 == 4) {
    if ((uchar)this_00->_padding_ != '\x04') {
      this_00 = (FShapeInstance *)0x0;
    }
    local_res8[0] = (TRigidTransform<double,3> *)&this_00->_padding_;
    pFVar6 = (FImplicitObject *)this_00->_padding_;
LAB_143e61a14:
    GetInnerGeometryInstanceData(pFVar6,local_res8);
  }
  else if ((bVar2 & 0x40) == 0) {
    if (((bVar2 == 5) || (bVar2 == 0xf)) && ((int)this_00->_padding_ == 1)) {
      pFVar6 = *(FImplicitObject **)this_00->_padding_;
      goto LAB_143e61a14;
    }
  }
  else {
    puVar4 = (undefined8 *)(**(code **)(this_00->_padding_ + 0x160))(this_00,local_res20);
    uVar3 = FImplicitObject::GetType((FImplicitObject *)*puVar4);
    if (uVar3 != '\b') {
      puVar4 = (undefined8 *)(**(code **)(this_00->_padding_ + 0x160))(this_00,local_108);
      pFVar6 = (FImplicitObject *)*puVar4;
      goto LAB_143e61a14;
    }
  }
  if (local_res8[0] != (TRigidTransform<double,3> *)0x0) {
    pTVar5 = TRigidTransform<double,3>::MultiplyNoScale
                       (&local_78,local_res8[0],(TRigidTransform<double,3> *)local_f8);
    local_f8._0_4_ = *(undefined4 *)pTVar5;
    local_f8._4_4_ = *(undefined4 *)&pTVar5->field_0x4;
    local_f8._8_4_ = *(undefined4 *)&pTVar5->field_0x8;
    local_f8._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    local_f8._16_4_ = *(undefined4 *)&pTVar5->field_0x10;
    local_f8._20_4_ = *(undefined4 *)&pTVar5->field_0x14;
    local_f8._24_4_ = *(undefined4 *)&pTVar5->field_0x18;
    local_f8._28_4_ = *(undefined4 *)&pTVar5->field_0x1c;
    local_f8._32_4_ = *(undefined4 *)&pTVar5->field_0x20;
    local_f8._36_4_ = *(undefined4 *)&pTVar5->field_0x24;
    local_f8._40_4_ = *(undefined4 *)&pTVar5->field_0x28;
    local_f8._44_4_ = *(undefined4 *)&pTVar5->field_0x2c;
    local_f8._48_4_ = *(undefined4 *)&pTVar5->field_0x30;
    local_f8._52_4_ = *(undefined4 *)&pTVar5->field_0x34;
  }
LAB_143e61a65:
  *(undefined4 *)&pFVar7[1]._padding_ = local_f8._32_4_;
  *(undefined4 *)((longlong)&pFVar7[1]._padding_ + 4) = local_f8._36_4_;
  *(undefined4 *)&pFVar7[1]._padding_ = local_f8._40_4_;
  *(undefined4 *)((longlong)&pFVar7[1]._padding_ + 4) = local_f8._44_4_;
  pFVar7[1]._padding_ = CONCAT44(local_f8._52_4_,local_f8._48_4_);
  *(undefined4 *)&pFVar7[1]._padding_ = local_f8._0_4_;
  *(undefined4 *)((longlong)&pFVar7[1]._padding_ + 4) = local_f8._4_4_;
  *(undefined4 *)&pFVar7[1]._padding_ = local_f8._8_4_;
  *(undefined4 *)((longlong)&pFVar7[1]._padding_ + 4) = local_f8._12_4_;
  *(undefined4 *)&pFVar7[1]._padding_ = local_f8._16_4_;
  *(undefined4 *)((longlong)&pFVar7[1]._padding_ + 4) = local_f8._20_4_;
  *(undefined4 *)&pFVar7[1]._padding_ = local_f8._24_4_;
  pcVar1 = (char *)((longlong)&pFVar7[1]._padding_ + 4);
  pcVar1[0] = (char)local_f8._28_4_;
  pcVar1[1] = SUB41(local_f8._28_4_,1);
  pcVar1[2] = SUB41(local_f8._28_4_,2);
  pcVar1[3] = SUB41(local_f8._28_4_,3);
  return;
}

// UpdateShapeBounds @ 143e61ab0

void __thiscall
Chaos::FShapeInstance::UpdateShapeBounds(FShapeInstance *this,TRigidTransform<double,3> *param_1)

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

// UpdateWorldSpaceState @ 143e61cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FShapeInstance::UpdateWorldSpaceState
          (FShapeInstance *this,TRigidTransform<double,3> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  uchar uVar5;
  undefined8 *puVar6;
  FShapeInstance *this_00;
  TRigidTransform<double,3> *pTVar7;
  longlong *plVar8;
  FImplicitObject *pFVar9;
  FShapeInstance *pFVar10;
  undefined1 auStack_158 [32];
  TRigidTransform<double,3> *local_138;
  undefined1 local_130 [8];
  undefined1 local_128 [16];
  longlong local_118;
  longlong lStack_110;
  TRigidTransform<double,3> local_e8;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_88 = *(longlong *)param_1;
  lStack_80 = *(longlong *)&param_1->field_0x8;
  local_78 = *(undefined8 *)&param_1->field_0x10;
  uStack_70 = *(undefined8 *)&param_1->field_0x18;
  this_00 = (FShapeInstance *)this->_padding_;
  local_68 = *(longlong *)&param_1->field_0x20;
  lStack_60 = *(longlong *)&param_1->field_0x28;
  local_58 = *(longlong *)&param_1->field_0x30;
  uStack_50 = *(undefined8 *)&param_1->field_0x38;
  local_48 = *(undefined4 *)&param_1->field_0x40;
  uStack_44 = *(undefined4 *)&param_1->field_0x44;
  uStack_40 = *(undefined4 *)&param_1->field_0x48;
  uStack_3c = *(undefined4 *)&param_1->field_0x4c;
  local_38 = *(undefined8 *)&param_1->field_0x50;
  uStack_30 = *(undefined8 *)&param_1->field_0x58;
  local_138 = (TRigidTransform<double,3> *)0x0;
  if (this_00 == (FShapeInstance *)0x0) goto LAB_143e61d99;
  bVar4 = FImplicitObject::GetType((FImplicitObject *)this_00);
  if (bVar4 == 4) {
    if ((uchar)this_00->_padding_ != '\x04') {
      this_00 = (FShapeInstance *)0x0;
    }
    local_138 = (TRigidTransform<double,3> *)&this_00->_padding_;
    pFVar9 = (FImplicitObject *)this_00->_padding_;
  }
  else if ((bVar4 & 0x40) == 0) {
    if (((bVar4 != 5) && (bVar4 != 0xf)) || ((int)this_00->_padding_ != 1)) goto LAB_143e61d99;
    pFVar9 = *(FImplicitObject **)this_00->_padding_;
  }
  else {
    puVar6 = (undefined8 *)(**(code **)(this_00->_padding_ + 0x160))(this_00,local_130);
    uVar5 = FImplicitObject::GetType((FImplicitObject *)*puVar6);
    if (uVar5 == '\b') goto LAB_143e61d99;
    puVar6 = (undefined8 *)(**(code **)(this_00->_padding_ + 0x160))(this_00,local_128);
    pFVar9 = (FImplicitObject *)*puVar6;
  }
  this_00 = (FShapeInstance *)GetInnerGeometryInstanceData(pFVar9,&local_138);
LAB_143e61d99:
  if (local_138 != (TRigidTransform<double,3> *)0x0) {
    pTVar7 = TRigidTransform<double,3>::MultiplyNoScale(&local_e8,local_138,param_1);
    local_88 = *(longlong *)pTVar7;
    lStack_80 = *(longlong *)&pTVar7->field_0x8;
    local_78 = *(undefined8 *)&pTVar7->field_0x10;
    uStack_70 = *(undefined8 *)&pTVar7->field_0x18;
    local_68 = *(longlong *)&pTVar7->field_0x20;
    lStack_60 = *(longlong *)&pTVar7->field_0x28;
    local_58 = *(longlong *)&pTVar7->field_0x30;
    uStack_50 = *(undefined8 *)&pTVar7->field_0x38;
    local_48 = *(undefined4 *)&pTVar7->field_0x40;
    uStack_44 = *(undefined4 *)&pTVar7->field_0x44;
    uStack_40 = *(undefined4 *)&pTVar7->field_0x48;
    uStack_3c = *(undefined4 *)&pTVar7->field_0x4c;
    local_38 = *(undefined8 *)&pTVar7->field_0x50;
    uStack_30 = *(undefined8 *)&pTVar7->field_0x58;
  }
  pFVar10 = this;
  if (((byte)(int)this->_padding_ & 3) != 2) {
    pFVar10 = (FShapeInstance *)0x0;
  }
  if (pFVar10 != (FShapeInstance *)0x0) {
    pFVar10[1]._padding_ = local_68;
    pFVar10[1]._padding_ = lStack_60;
    pFVar10[1]._padding_ = local_58;
    local_118 = local_88;
    lStack_110 = lStack_80;
    pFVar10[1]._padding_ = local_88;
    pFVar10[1]._padding_ = lStack_80;
    *(float *)&pFVar10[1]._padding_ = (float)local_78;
    *(undefined4 *)((longlong)&pFVar10[1]._padding_ + 4) = local_78._4_4_;
    *(undefined4 *)&pFVar10[1]._padding_ = (undefined4)uStack_70;
    *(undefined4 *)((longlong)&pFVar10[1]._padding_ + 4) = uStack_70._4_4_;
  }
  if ((this_00 == (FShapeInstance *)0x0) || (*(bool *)((longlong)&this_00->_padding_ + 6) == false))
  {
    lVar2 = *(longlong *)&param_1->field_0x20;
    lVar3 = *(longlong *)&param_1->field_0x28;
    lVar1 = *(longlong *)&param_1->field_0x30;
    this->_padding_ = lVar2;
    this->_padding_ = lVar3;
    this->_padding_ = lVar2;
    this->_padding_ = lVar3;
    this->_padding_ = lVar1;
    this->_padding_ = lVar1;
  }
  else {
    plVar8 = (longlong *)(**(code **)(this_00->_padding_ + 0x98))(this_00,&local_118,&local_88);
    lVar1 = plVar8[1];
    this->_padding_ = *plVar8;
    this->_padding_ = lVar1;
    this->_padding_ = plVar8[2];
    lVar1 = plVar8[4];
    this->_padding_ = plVar8[3];
    this->_padding_ = lVar1;
    this->_padding_ = plVar8[5];
  }
  return;
}

