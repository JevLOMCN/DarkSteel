// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 23

// StaticClass @ 149856a60

UClass * __cdecl UPCGCollisionWrapperData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCollisionWrapperData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCollisionWrapperData",
               &Z_Registration_Info_UClass_UPCGCollisionWrapperData.InnerSingleton,
               StaticRegisterNativesUPCGCollisionWrapperData,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGCollisionWrapperData>,
               InternalVTableHelperCtorCaller<UPCGCollisionWrapperData>,local_res8,
               UPCGSpatialData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCollisionWrapperData.InnerSingleton;
}

// UPCGCollisionWrapperData @ 14988db50

UPCGCollisionWrapperData * __thiscall
UPCGCollisionWrapperData::UPCGCollisionWrapperData
          (UPCGCollisionWrapperData *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UPCGData::UPCGData((UPCGData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSpatialData__6B_;
  this->_padding_ = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  *(undefined2 *)&this->_padding_ = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&this->_padding_);
  this->_padding_ = (longlong)&___7UPCGCollisionWrapperData__6B_;
  (this->PointData).field0_0x0.DebugPtr = (UPCGBasePointData *)0x0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->CollisionSelector);
  this->CollisionQueryFlag = Simple;
  (this->CollisionWrapper).BodyInstances.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionWrapper).BodyInstances.ArrayNum = 0;
  (this->CollisionWrapper).BodyInstances.ArrayMax = 0;
  (this->CollisionWrapper).IndexToBodyInstance.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CollisionWrapper).IndexToBodyInstance.ArrayNum = 0;
  (this->CollisionWrapper).IndexToBodyInstance.ArrayMax = 0;
  (this->CollisionWrapper).bInitialized = false;
  (this->CachedShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedShapes).ArrayNum = 0;
  (this->CachedShapes).ArrayMax = 0;
  return this;
}

// UPCGCollisionWrapperData @ 14988dc00

UPCGCollisionWrapperData * __thiscall
UPCGCollisionWrapperData::UPCGCollisionWrapperData
          (UPCGCollisionWrapperData *this,FObjectInitializer *param_1)

{
  UPCGSpatialData::UPCGSpatialData((UPCGSpatialData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGCollisionWrapperData__6B_;
  (this->PointData).field0_0x0.DebugPtr = (UPCGBasePointData *)0x0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->CollisionSelector);
  this->CollisionQueryFlag = Simple;
  (this->CollisionWrapper).BodyInstances.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionWrapper).BodyInstances.ArrayNum = 0;
  (this->CollisionWrapper).BodyInstances.ArrayMax = 0;
  (this->CollisionWrapper).IndexToBodyInstance.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CollisionWrapper).IndexToBodyInstance.ArrayNum = 0;
  (this->CollisionWrapper).IndexToBodyInstance.ArrayMax = 0;
  (this->CollisionWrapper).bInitialized = false;
  (this->CachedShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedShapes).ArrayNum = 0;
  (this->CachedShapes).ArrayMax = 0;
  return this;
}

// ~UPCGCollisionWrapperData @ 149891470

void __thiscall UPCGCollisionWrapperData::~UPCGCollisionWrapperData(UPCGCollisionWrapperData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGCollisionWrapperData__6B_;
  DestructItems<TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
              *)(this->CachedShapes).AllocatorInstance.Data,(this->CachedShapes).ArrayNum);
  pFVar1 = (this->CachedShapes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPCGCollisionWrapper::Uninitialize(&this->CollisionWrapper);
  pFVar1 = (this->CollisionWrapper).IndexToBodyInstance.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollisionWrapper).BodyInstances.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->CollisionSelector).field_0x28,
             *(int *)&(this->CollisionSelector).field_0x30);
  pvVar2 = *(void **)&(this->CollisionSelector).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7UPCGSpatialData__6B_;
  DestructItems<FString,int>((FString *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UPCGData::~UPCGData((UPCGData *)this);
  return;
}

// operator() @ 149895a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()(void *this,FPointRef *param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  TTransform<double> *this_00;
  double *pdVar4;
  code *pcVar5;
  uchar uVar6;
  bool bVar7;
  float *pfVar8;
  TTransform<double> *pTVar9;
  FConvex *pFVar10;
  ForElementType<FPhysicsShapeReference_Chaos> FVar11;
  TBox<double,3> *pTVar12;
  FCapsule *pFVar13;
  FConvex *pFVar14;
  TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *pTVar15;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar16;
  TImplicitObjectScaled<Chaos::FCapsule,1> *pTVar17;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar18;
  TImplicitObjectInstanced<Chaos::TSphere<double,3>_> *pTVar19;
  TImplicitObjectInstanced<Chaos::TBox<double,3>_> *pTVar20;
  TImplicitObjectInstanced<Chaos::FCapsule> *pTVar21;
  TImplicitObjectInstanced<Chaos::FConvex> *pTVar22;
  TImplicitObjectTransformed<double,3,1> *pTVar23;
  ForElementType<FPhysicsShapeReference_Chaos> FVar24;
  undefined1 auStackY_618 [32];
  undefined1 local_5e8 [8];
  <lambda_1> local_5e0;
  <lambda_2> local_5d8;
  FCollisionShape local_5d0;
  FCollisionShape local_5c0;
  void *local_5b0;
  TVector<double>_u_0 local_5a8;
  TQuat<double> local_588;
  double local_568;
  double dStack_560;
  double local_558;
  FPhysicsShapeAdapter_Chaos local_548;
  FPhysicsShapeAdapter_Chaos local_518;
  TTransform<double> local_4e8;
  TTransform<double> local_488;
  TTransform<double> local_428;
  TTransform<double> local_3c8;
  TTransform<double> local_368;
  TTransform<double> local_308;
  double local_2a8 [2];
  double local_298 [2];
  double local_288 [2];
  double local_278 [2];
  double local_268 [2];
  double local_258 [2];
  double local_248 [2];
  double local_238 [2];
  double local_228 [2];
  double local_218 [2];
  double local_208 [2];
  double local_1f8 [2];
  double local_1e8 [2];
  double local_1d8 [2];
  double local_1c8 [2];
  double local_1b8 [2];
  double local_1a8 [2];
  double local_198 [2];
  double local_188 [2];
  double local_178 [2];
  double local_168 [2];
  double local_158 [2];
  double local_148 [2];
  double local_138 [2];
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_618;
  local_5b0 = this;
  pfVar8 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                     (*(TPCGValueRange<float_const_,TStridedView<float_const_,int>_> **)
                       ((longlong)this + 0x10),param_1->Index);
  fVar2 = *pfVar8;
  if (fVar2 < **(float **)((longlong)this + 0x28)) {
    return;
  }
  this_00 = *(TTransform<double> **)((longlong)this + 0x18);
  pTVar9 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
           ::GetElement(*(TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                          **)((longlong)this + 8),param_1->Index);
  UE::Math::TTransform<double>::GetRelativeTransform(this_00,&local_308,pTVar9);
  pdVar4 = *(double **)((longlong)this + 0x20);
  local_568 = local_308.Scale3D.XY.m128d_f64[0];
  dStack_560 = local_308.Scale3D.XY.m128d_f64[1];
  local_558 = local_308.Scale3D.ZW.m128d_f64[0];
  local_5d0.field1_0x4.Box.HalfExtentX =
       (float)((pdVar4[3] - *pdVar4) * __real_3fe0000000000000 * local_308.Scale3D.XY.m128d_f64[0]);
  local_5d0.field1_0x4.Box.HalfExtentY =
       (float)((pdVar4[4] - pdVar4[1]) * __real_3fe0000000000000 * local_308.Scale3D.XY.m128d_f64[1]
              );
  local_5d0.ShapeType = Box;
  local_588.Z = local_308.Rotation.ZW.m128d_f64[0];
  local_588.W = local_308.Rotation.ZW.m128d_f64[1];
  local_5d0.field1_0x4.Box.HalfExtentZ =
       (float)((pdVar4[5] - pdVar4[2]) * __real_3fe0000000000000 * local_308.Scale3D.ZW.m128d_f64[0]
              );
  local_588.X = local_308.Rotation.XY.m128d_f64[0];
  local_588.Y = local_308.Rotation.XY.m128d_f64[1];
  FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos(&local_548,&local_588,&local_5d0);
  pFVar10 = (FConvex *)FPhysicsShapeAdapter_Chaos::GetGeometry(&local_548);
  local_5a8._s_0.Z = local_308.Translation.ZW.m128d_f64[0];
  local_5a8._s_0.X = local_308.Translation.XY.m128d_f64[0];
  local_5a8._s_0.Y = local_308.Translation.XY.m128d_f64[1];
  FPhysicsShapeAdapter_Chaos::GetGeomPose(&local_548,&local_3c8,(TVector<double> *)&local_5a8._s_0);
  FVar11 = (ForElementType<FPhysicsShapeReference_Chaos>)
           UPCGCollisionWrapperData::GetCachedShapes
                     (*(UPCGCollisionWrapperData **)this,param_1->Index);
  piVar1 = (int *)((longlong)FVar11 + 0x208);
  iVar3 = *piVar1;
  if (iVar3 != 0) {
    if (*(ForElementType<FPhysicsShapeReference_Chaos> *)((longlong)FVar11 + 0x200) !=
        (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
      FVar11 = *(ForElementType<FPhysicsShapeReference_Chaos> *)((longlong)FVar11 + 0x200);
    }
    FVar24 = (ForElementType<FPhysicsShapeReference_Chaos>)
             ((longlong)iVar3 * 0x10 + (longlong)FVar11);
    do {
      if (*piVar1 != iVar3) {
        local_5e8[0] = 0;
        `TCheckedPointerIterator<FPhysicsShapeReference_Chaos_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_5e8);
      }
      if (FVar11 == FVar24) goto LAB_14989643f;
      local_4e8.Rotation.XY.m128d_f64[0] = local_3c8.Rotation.XY.m128d_f64[0];
      local_4e8.Rotation.XY.m128d_f64[1] = local_3c8.Rotation.XY.m128d_f64[1];
      local_4e8.Rotation.ZW.m128d_f64[0] = local_3c8.Rotation.ZW.m128d_f64[0];
      local_4e8.Rotation.ZW.m128d_f64[1] = local_3c8.Rotation.ZW.m128d_f64[1];
      local_4e8.Translation.XY.m128d_f64[0] = local_3c8.Translation.XY.m128d_f64[0];
      local_4e8.Translation.XY.m128d_f64[1] = local_3c8.Translation.XY.m128d_f64[1];
      local_4e8.Translation.ZW.m128d_f64[0] = local_3c8.Translation.ZW.m128d_f64[0];
      local_4e8.Translation.ZW.m128d_f64[1] = local_3c8.Translation.ZW.m128d_f64[1];
      local_4e8.Scale3D.XY.m128d_f64[0] = local_3c8.Scale3D.XY.m128d_f64[0];
      local_4e8.Scale3D.XY.m128d_f64[1] = local_3c8.Scale3D.XY.m128d_f64[1];
      local_4e8.Scale3D.ZW.m128d_f64[0] = local_3c8.Scale3D.ZW.m128d_f64[0];
      local_4e8.Scale3D.ZW.m128d_f64[1] = local_3c8.Scale3D.ZW.m128d_f64[1];
      local_5e0.Shape = (FPhysicsShapeReference_Chaos *)FVar11;
      uVar6 = Chaos::FImplicitObject::GetType((FImplicitObject *)pFVar10);
      switch(uVar6) {
      case '\x01':
        pFVar14 = pFVar10;
        goto LAB_149895c9c;
      default:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                           ,0x7a,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      case '\0':
        pFVar14 = pFVar10;
        if (((uchar)pFVar10->_padding_ != '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("T_DERIVED::StaticType() == Type",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                               ,0xbb,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        goto LAB_1498960a6;
      case '\x03':
        pFVar14 = pFVar10;
        goto LAB_149895cba;
      case '\x04':
        pTVar23 = Chaos::FImplicitObject::
                  GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
                            ((FImplicitObject *)pFVar10);
        local_428.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_428.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_428.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_428.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_428.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_428.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_428.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_428.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_428.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_428.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_428.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_428.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_428.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_428.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_428.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_428.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_428.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_428.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_428,(TTransform<double> *)&pTVar23->MTransform,&local_4e8);
        local_128 = local_428.Rotation.XY.m128d_f64[0];
        dStack_120 = local_428.Rotation.XY.m128d_f64[1];
        local_118 = local_428.Rotation.ZW.m128d_f64[0];
        dStack_110 = local_428.Rotation.ZW.m128d_f64[1];
        local_108 = local_428.Translation.XY.m128d_f64[0];
        dStack_100 = local_428.Translation.XY.m128d_f64[1];
        local_f8 = local_428.Translation.ZW.m128d_f64[0];
        dStack_f0 = local_428.Translation.ZW.m128d_f64[1];
        local_e8 = local_428.Scale3D.XY.m128d_f64[0];
        dStack_e0 = local_428.Scale3D.XY.m128d_f64[1];
        local_d8 = local_428.Scale3D.ZW.m128d_f64[0];
        dStack_d0 = local_428.Scale3D.ZW.m128d_f64[1];
        bVar7 = Chaos::Utilities::
                CastHelper<__UPCGCollisionWrapperData::SamplePoint_::__l2::<lambda_1>::operator()_::__l12::<lambda_1>_>
                          ((pTVar23->MObject).Reference,(TRigidTransform<double,3> *)&local_128,
                           &local_5e0);
        break;
      case '\b':
        pFVar14 = pFVar10;
        goto LAB_149895cd8;
      case '@':
        pTVar19 = Chaos::FImplicitObject::
                  GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>
                            ((FImplicitObject *)pFVar10);
        pFVar14 = (FConvex *)
                  Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                            ((FImplicitObject *)(pTVar19->MObject).Reference);
LAB_1498960a6:
        bVar7 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l12::
                <lambda_1>::operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_>
                          (&local_5e0,(TSphere<double,3> *)pFVar14,
                           (TRigidTransform<double,3> *)&local_4e8);
        break;
      case 'A':
        pTVar20 = Chaos::FImplicitObject::
                  GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>
                            ((FImplicitObject *)pFVar10);
        pFVar14 = (FConvex *)(pTVar20->MObject).Reference;
LAB_149895c9c:
        pTVar12 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                            ((FImplicitObject *)pFVar14);
        bVar7 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l12::
                <lambda_1>::operator()<Chaos::TBox<double,3>,Chaos::TRigidTransform<double,3>_>
                          (&local_5e0,pTVar12,(TRigidTransform<double,3> *)&local_4e8);
        break;
      case 'C':
        pTVar21 = Chaos::FImplicitObject::
                  GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
                            ((FImplicitObject *)pFVar10);
        pFVar14 = (FConvex *)(pTVar21->MObject).Reference;
LAB_149895cba:
        pFVar13 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>
                            ((FImplicitObject *)pFVar14);
        bVar7 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l12::
                <lambda_1>::operator()<Chaos::FCapsule,Chaos::TRigidTransform<double,3>_>
                          (&local_5e0,pFVar13,(TRigidTransform<double,3> *)&local_4e8);
        break;
      case 'H':
        pTVar22 = Chaos::FImplicitObject::
                  GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
                            ((FImplicitObject *)pFVar10);
        pFVar14 = (pTVar22->MObject).Reference;
LAB_149895cd8:
        pFVar14 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>
                            ((FImplicitObject *)pFVar14);
        bVar7 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l12::
                <lambda_1>::operator()<Chaos::FConvex,Chaos::TRigidTransform<double,3>_>
                          (&local_5e0,pFVar14,(TRigidTransform<double,3> *)&local_4e8);
        break;
      case 0x80:
        pTVar15 = Chaos::FImplicitObject::
                  GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
                            ((FImplicitObject *)pFVar10);
        local_2a8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
        local_2a8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
        local_298[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
        local_298[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
        local_288[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
        local_288[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
        local_278[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
        local_278[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
        local_268[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
        local_268[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
        local_258[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
        local_258[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
        bVar7 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
                          (((local_5e0.Shape)->Shape->Geometry).Reference,
                           (TRigidTransform<double,3> *)local_2a8,pTVar15,
                           (TRigidTransform<double,3> *)&local_4e8,0.0,(FMTDInfo *)0x0);
        break;
      case 0x81:
        pTVar16 = Chaos::FImplicitObject::
                  GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
                            ((FImplicitObject *)pFVar10);
        local_248[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
        local_248[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
        local_238[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
        local_238[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
        local_228[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
        local_228[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
        local_218[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
        local_218[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
        local_208[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
        local_208[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
        local_1f8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
        local_1f8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
        bVar7 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
                          (((local_5e0.Shape)->Shape->Geometry).Reference,
                           (TRigidTransform<double,3> *)local_248,pTVar16,
                           (TRigidTransform<double,3> *)&local_4e8,0.0,(FMTDInfo *)0x0);
        break;
      case 0x83:
        pTVar17 = Chaos::FImplicitObject::
                  GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                            ((FImplicitObject *)pFVar10);
        local_1e8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
        local_1e8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
        local_1d8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
        local_1d8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
        local_1c8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
        local_1c8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
        local_1b8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
        local_1b8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
        local_1a8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
        local_1a8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
        local_198[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
        local_198[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
        bVar7 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                          (((local_5e0.Shape)->Shape->Geometry).Reference,
                           (TRigidTransform<double,3> *)local_1e8,pTVar17,
                           (TRigidTransform<double,3> *)&local_4e8,0.0,(FMTDInfo *)0x0);
        break;
      case 0x88:
        pTVar18 = Chaos::FImplicitObject::
                  GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                            ((FImplicitObject *)pFVar10);
        local_188[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
        local_188[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
        local_178[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
        local_178[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
        local_168[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
        local_168[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
        local_158[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
        local_158[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
        local_148[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
        local_148[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
        local_138[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
        local_138[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
        bVar7 = Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                          (((local_5e0.Shape)->Shape->Geometry).Reference,
                           (TRigidTransform<double,3> *)local_188,pTVar18,
                           (TRigidTransform<double,3> *)&local_4e8,0.0,(FMTDInfo *)0x0);
      }
      if (bVar7 != false) goto LAB_149896432;
      FVar11 = (ForElementType<FPhysicsShapeReference_Chaos>)((longlong)FVar11 + 0x10);
    } while( true );
  }
  local_5c0.field1_0x4.Box.HalfExtentX = (float)(param_1->Bounds).BoxExtent.field0_0x0._s_0.X;
  local_5c0.ShapeType = Box;
  local_5c0.field1_0x4.Box.HalfExtentY = (float)(param_1->Bounds).BoxExtent.field0_0x0._s_0.Y;
  local_5c0.field1_0x4.Box.HalfExtentZ = (float)(param_1->Bounds).BoxExtent.field0_0x0._s_0.Z;
  FPhysicsShapeAdapter_Chaos::FPhysicsShapeAdapter_Chaos
            (&local_518,&UE::Math::TQuat<double>::Identity,&local_5c0);
  local_488.Rotation.XY.m128d_f64[0] = local_3c8.Rotation.XY.m128d_f64[0];
  local_488.Rotation.XY.m128d_f64[1] = local_3c8.Rotation.XY.m128d_f64[1];
  local_488.Rotation.ZW.m128d_f64[0] = local_3c8.Rotation.ZW.m128d_f64[0];
  local_488.Rotation.ZW.m128d_f64[1] = local_3c8.Rotation.ZW.m128d_f64[1];
  local_488.Translation.XY.m128d_f64[0] = local_3c8.Translation.XY.m128d_f64[0];
  local_488.Translation.XY.m128d_f64[1] = local_3c8.Translation.XY.m128d_f64[1];
  local_488.Translation.ZW.m128d_f64[0] = local_3c8.Translation.ZW.m128d_f64[0];
  local_488.Translation.ZW.m128d_f64[1] = local_3c8.Translation.ZW.m128d_f64[1];
  local_488.Scale3D.XY.m128d_f64[0] = local_3c8.Scale3D.XY.m128d_f64[0];
  local_488.Scale3D.XY.m128d_f64[1] = local_3c8.Scale3D.XY.m128d_f64[1];
  local_488.Scale3D.ZW.m128d_f64[0] = local_3c8.Scale3D.ZW.m128d_f64[0];
  local_488.Scale3D.ZW.m128d_f64[1] = local_3c8.Scale3D.ZW.m128d_f64[1];
  local_5d8.ThisAdapter = &local_518;
  uVar6 = Chaos::FImplicitObject::GetType((FImplicitObject *)pFVar10);
  switch(uVar6) {
  case '\x01':
    goto LAB_1498961a5;
  default:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CastingUtilities.h"
                       ,0x7a,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  case '\0':
    if (((uchar)pFVar10->_padding_ != '\0') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("T_DERIVED::StaticType() == Type",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObject.h"
                           ,0xbb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    goto LAB_149896411;
  case '\x03':
    goto LAB_1498961c6;
  case '\x04':
    pTVar23 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectTransformed<double,3,1>_>
                        ((FImplicitObject *)pFVar10);
    local_368.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_368.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_368.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_368.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_368.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_368.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_368.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_368.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_368.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_368.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_368.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_368.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_368.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_368.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_368.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_368.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_368.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_368.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_368,(TTransform<double> *)&pTVar23->MTransform,&local_488);
    local_c8 = local_368.Rotation.XY.m128d_f64[0];
    dStack_c0 = local_368.Rotation.XY.m128d_f64[1];
    local_b8 = local_368.Rotation.ZW.m128d_f64[0];
    dStack_b0 = local_368.Rotation.ZW.m128d_f64[1];
    local_a8 = local_368.Translation.XY.m128d_f64[0];
    dStack_a0 = local_368.Translation.XY.m128d_f64[1];
    local_98 = local_368.Translation.ZW.m128d_f64[0];
    dStack_90 = local_368.Translation.ZW.m128d_f64[1];
    local_88 = local_368.Scale3D.XY.m128d_f64[0];
    dStack_80 = local_368.Scale3D.XY.m128d_f64[1];
    local_78 = local_368.Scale3D.ZW.m128d_f64[0];
    dStack_70 = local_368.Scale3D.ZW.m128d_f64[1];
    bVar7 = Chaos::Utilities::
            CastHelper<__UPCGCollisionWrapperData::SamplePoint_::__l2::<lambda_1>::operator()_::__l17::<lambda_2>_>
                      ((pTVar23->MObject).Reference,(TRigidTransform<double,3> *)&local_c8,
                       &local_5d8);
    break;
  case '\b':
    goto LAB_1498961e7;
  case '@':
    pTVar19 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>
                        ((FImplicitObject *)pFVar10);
    pFVar10 = (FConvex *)
              Chaos::FImplicitObject::GetObjectChecked<Chaos::TSphere<double,3>_>
                        ((FImplicitObject *)(pTVar19->MObject).Reference);
LAB_149896411:
    bVar7 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::
            <lambda_2>::operator()<Chaos::TSphere<double,3>,Chaos::TRigidTransform<double,3>_>
                      (&local_5d8,(TSphere<double,3> *)pFVar10,
                       (TRigidTransform<double,3> *)&local_488);
    break;
  case 'A':
    pTVar20 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>
                        ((FImplicitObject *)pFVar10);
    pFVar10 = (FConvex *)(pTVar20->MObject).Reference;
LAB_1498961a5:
    pTVar12 = Chaos::FImplicitObject::GetObjectChecked<Chaos::TBox<double,3>_>
                        ((FImplicitObject *)pFVar10);
    bVar7 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::
            <lambda_2>::operator()<Chaos::TBox<double,3>,Chaos::TRigidTransform<double,3>_>
                      (&local_5d8,pTVar12,(TRigidTransform<double,3> *)&local_488);
    break;
  case 'C':
    pTVar21 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
                        ((FImplicitObject *)pFVar10);
    pFVar10 = (FConvex *)(pTVar21->MObject).Reference;
LAB_1498961c6:
    pFVar13 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FCapsule>((FImplicitObject *)pFVar10);
    bVar7 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::
            <lambda_2>::operator()<Chaos::FCapsule,Chaos::TRigidTransform<double,3>_>
                      (&local_5d8,pFVar13,(TRigidTransform<double,3> *)&local_488);
    break;
  case 'H':
    pTVar22 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
                        ((FImplicitObject *)pFVar10);
    pFVar10 = (pTVar22->MObject).Reference;
LAB_1498961e7:
    pFVar10 = Chaos::FImplicitObject::GetObjectChecked<Chaos::FConvex>((FImplicitObject *)pFVar10);
    bVar7 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::
            <lambda_2>::operator()<Chaos::FConvex,Chaos::TRigidTransform<double,3>_>
                      (&local_5d8,pFVar10,(TRigidTransform<double,3> *)&local_488);
    break;
  case 0x80:
    pTVar15 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
                        ((FImplicitObject *)pFVar10);
    bVar7 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::
            <lambda_2>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,Chaos::TRigidTransform<double,3>_>
                      (&local_5d8,pTVar15,(TRigidTransform<double,3> *)&local_488);
    break;
  case 0x81:
    pTVar16 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
                        ((FImplicitObject *)pFVar10);
    bVar7 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::
            <lambda_2>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,Chaos::TRigidTransform<double,3>_>
                      (&local_5d8,pTVar16,(TRigidTransform<double,3> *)&local_488);
    break;
  case 0x83:
    pTVar17 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                        ((FImplicitObject *)pFVar10);
    bVar7 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::
            <lambda_2>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,Chaos::TRigidTransform<double,3>_>
                      (&local_5d8,pTVar17,(TRigidTransform<double,3> *)&local_488);
    break;
  case 0x88:
    pTVar18 = Chaos::FImplicitObject::
              GetObjectChecked<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                        ((FImplicitObject *)pFVar10);
    bVar7 = ``UPCGCollisionWrapperData::SamplePoint'::__l2::<lambda_1>::operator()'::__l17::
            <lambda_2>::
            operator()<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,Chaos::TRigidTransform<double,3>_>
                      (&local_5d8,pTVar18,(TRigidTransform<double,3> *)&local_488);
  }
  FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_518);
  if (bVar7 != false) {
LAB_149896432:
    **(float **)((longlong)local_5b0 + 0x28) = fVar2;
  }
LAB_14989643f:
  FPhysicsShapeAdapter_Chaos::~FPhysicsShapeAdapter_Chaos(&local_548);
  return;
}

// AddToCrc @ 14989d9f0

void __thiscall
UPCGCollisionWrapperData::AddToCrc
          (UPCGCollisionWrapperData *this,FArchiveCrc32 *param_1,bool param_2)

{
  longlong *plVar1;
  UClass *this_00;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  FString local_18;
  
  UPCGData::AddToCrc((UPCGData *)this,param_1,param_2);
  if ((UPCGMetadata *)this->_padding_ != (UPCGMetadata *)0x0) {
    UPCGMetadata::GetLatestAttributeNameOrNone((UPCGMetadata *)this->_padding_);
    (**(code **)(param_1->_padding_ + 0x178))(param_1,local_res10);
  }
  this_00 = StaticClass();
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
  ::operator<<((FArchive *)param_1,&local_18);
  (**(code **)(*(longlong *)&this->CollisionSelector + 8))(&this->CollisionSelector,param_1);
  plVar1 = (longlong *)param_1->_padding_;
  local_res8[0] = (uint)this->CollisionQueryFlag;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ComputeCrc @ 1498a1e60

FPCGCrc __thiscall UPCGCollisionWrapperData::ComputeCrc(UPCGCollisionWrapperData *this,bool param_1)

{
  UPCGBasePointData *pUVar1;
  undefined7 in_register_00000011;
  FPCGCrc FVar2;
  undefined1 in_R8B;
  FArchiveCrc32 local_a8;
  
  FVar2._1_7_ = in_register_00000011;
  FVar2.Value._0_1_ = param_1;
  FArchiveCrc32::FArchiveCrc32(&local_a8,0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x370))(this,&local_a8,in_R8B);
  pUVar1 = (this->PointData).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGBasePointData *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x370))(pUVar1,&local_a8,in_R8B);
  }
  *(uint *)FVar2 = local_a8.CRC;
  *(undefined1 *)((longlong)FVar2 + 4) = 1;
  FArchive::~FArchive((FArchive *)&local_a8);
  return FVar2;
}

// CopyInternal @ 1498a39e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSpatialData * __thiscall
UPCGCollisionWrapperData::CopyInternal(UPCGCollisionWrapperData *this,FPCGContext *param_1)

{
  code *pcVar1;
  EPCGCollisionQueryFlag EVar2;
  bool bVar3;
  UPCGSpatialData *pUVar4;
  UObject *pUVar5;
  UPCGCollisionWrapperData *pUVar6;
  UPCGCollisionWrapperData *this_00;
  UPCGBasePointData *pUVar7;
  code **ppcVar8;
  longlong *plVar9;
  IPCGGraphExecutionSource *pIVar10;
  undefined1 auStackY_1e8 [32];
  FGCScopeGuard local_1b8 [4];
  FWeakObjectPtr local_1b4;
  FWeakObjectPtr local_1ac;
  undefined1 local_1a4 [12];
  UPCGCollisionWrapperData *local_198;
  UPCGBasePointData *local_190;
  UPCGCollisionWrapperData *local_188;
  ulong64 local_180;
  code *local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  code **local_150;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  FPCGAttributePropertySelector local_138;
  EPCGCollisionQueryFlag local_f8;
  code *local_e8 [2];
  code *local_d8 [3];
  code **local_c0;
  IPCGGraphExecutionSource *local_b8;
  longlong local_a8;
  longlong local_98 [3];
  longlong *local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  undefined2 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if (param_1 == (FPCGContext *)0x0) {
    bVar3 = IsInGameThread();
    if ((!bVar3) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749225>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0xa9,"Context != nullptr || IsInGameThread()"), bVar3)) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UPCGSpatialData *)(*pcVar1)();
      return pUVar4;
    }
  }
  else {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
         (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4331830188552749348>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar3)) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UPCGSpatialData *)(*pcVar1)();
        return pUVar4;
      }
      FGCScopeGuard::FGCScopeGuard(local_1b8);
      pUVar5 = GetTransientPackageAsObject();
      pUVar6 = NewObject<UPCGCollisionWrapperData>(pUVar5);
      FGCScopeGuard::~FGCScopeGuard(local_1b8);
      if ((pUVar6 == (UPCGCollisionWrapperData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                             ,0x12a,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UPCGSpatialData *)(*pcVar1)();
        return pUVar4;
      }
      local_198 = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UPCGCollisionWrapperData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>
                (&param_1->AsyncObjects,(TObjectPtr<UObject> *)local_1a4,(bool *)&local_198);
      goto LAB_1498a3a6d;
    }
  }
  pUVar5 = GetTransientPackageAsObject();
  pUVar6 = NewObject<UPCGCollisionWrapperData>(pUVar5);
LAB_1498a3a6d:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 = (this->PointData).field0_0x0.DebugPtr, pUVar7 != (UPCGBasePointData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (pUVar6->PointData).field0_0x0 = (this->PointData).field0_0x0;
  pUVar7 = (this->PointData).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar7 != (UPCGBasePointData *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UPCGBasePointData *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
  }
  pIVar10 = (IPCGGraphExecutionSource *)0x0;
  local_1ac.ObjectIndex = 0;
  local_1ac.ObjectSerialNumber = 0;
  local_190 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UPCGBasePointData *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  FWeakObjectPtr::operator=(&local_1ac,(FObjectPtr)&local_190);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UPCGCollisionWrapperData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  local_1b4.ObjectIndex = 0;
  local_1b4.ObjectSerialNumber = 0;
  local_188 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UPCGCollisionWrapperData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1b4,(FObjectPtr)&local_188);
  local_148 = local_1b4;
  local_140 = local_1ac;
  FPCGAttributePropertySelector::FPCGAttributePropertySelector
            (&local_138,(FPCGAttributePropertySelector *)&this->CollisionSelector);
  local_f8 = this->CollisionQueryFlag;
  local_138._padding_ = (longlong)&___7FPCGAttributePropertyInputSelector__6B_;
  bVar3 = IsInGameThread();
  if (bVar3) {
    this_00 = (UPCGCollisionWrapperData *)FWeakObjectPtr::Get(&local_148);
    EVar2 = local_f8;
    if (this_00 != (UPCGCollisionWrapperData *)0x0) {
      pUVar7 = (UPCGBasePointData *)FWeakObjectPtr::Get(&local_140);
      Initialize(this_00,pUVar7,(FPCGAttributePropertyInputSelector *)&local_138,EVar2);
    }
  }
  else {
    if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
       (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar3)) {
      pIVar10 = (param_1->ExecutionSource).InterfaceInstance;
    }
    local_178 = (code *)0x0;
    ppcVar8 = FMemory::Malloc(0x60,8);
    *ppcVar8 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`UPCGCollisionWrapperData::CopyInternal'::`2'::<lambda_1>,0,1>
                        ::_vftable_;
    *(FWeakObjectPtr *)(ppcVar8 + 1) = local_148;
    *(FWeakObjectPtr *)(ppcVar8 + 2) = local_140;
    local_150 = ppcVar8;
    FPCGAttributePropertySelector::FPCGAttributePropertySelector
              ((FPCGAttributePropertySelector *)(ppcVar8 + 3),&local_138);
    ppcVar8[3] = (code *)&___7FPCGAttributePropertyInputSelector__6B_;
    *(EPCGCollisionQueryFlag *)(ppcVar8 + 0xb) = local_f8;
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UPCGCollisionWrapperData::CopyInternal'::__l2::<lambda_1>,bool,FPCGContext_*>
                  ::Call;
    if ((FWeakObjectPtr *)(ppcVar8 + 1) == (FWeakObjectPtr *)0x0) {
      local_e8[0] = local_178;
    }
    local_c0 = local_150;
    local_d8[0] = (code *)local_168;
    local_d8[1] = (code *)uStack_160;
    local_d8[2] = (code *)local_158;
    local_a8 = 0;
    local_80 = (longlong *)0x0;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70._0_4_ = 0;
    local_70._4_4_ = 0;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60._0_4_ = 0;
    local_60._4_4_ = 0;
    local_58._0_1_ = false;
    local_58._1_1_ = true;
    local_b8 = pIVar10;
    local_180 = FPCGContext::ScheduleGeneric(param_1,(FPCGScheduleGenericParams *)local_e8);
    if (local_180 != 0xffffffffffffffff) {
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
      Emplace<unsigned___int64_const_&>
                (&param_1->DynamicDependencies,(ulong64 *)(local_1a4 + 4),(bool *)&local_180);
    }
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_80 != (longlong *)0x0) {
        plVar9 = local_80;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (local_e8[0] != (code *)0x0) {
      ppcVar8 = local_e8 + 2;
      if (local_c0 != (code **)0x0) {
        ppcVar8 = local_c0;
      }
      (**(code **)(*ppcVar8 + 0x10))();
    }
  }
  DestructItems<FString,int>
            ((FString *)local_138.ExtraNames.AllocatorInstance.Data,local_138.ExtraNames.ArrayNum);
  if (local_138.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.ExtraNames.AllocatorInstance.Data);
  }
  return (UPCGSpatialData *)pUVar6;
}

// FinalizeInitializationEx @ 1498b3040

void __thiscall
UPCGCollisionWrapperData::FinalizeInitializationEx
          (UPCGCollisionWrapperData *this,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FBodyInstance *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *pTVar10;
  undefined1 local_res8 [8];
  
  bVar4 = (this->CollisionWrapper).bInitialized;
  FPCGCollisionWrapper::CreateBodyInstances(&this->CollisionWrapper,param_1);
  if ((bVar4 == false) && ((this->CollisionWrapper).bInitialized != false)) {
    pTVar2 = &this->CachedShapes;
    piVar1 = &(this->CachedShapes).ArrayMax;
    pTVar10 = (TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
               *)(pTVar2->AllocatorInstance).Data;
    iVar5 = (this->CachedShapes).ArrayNum;
    if ((this->CachedShapes).ArrayMax < 0) {
      DestructItems<TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>,int>
                (pTVar10,iVar5);
      (this->CachedShapes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x210,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>,int>
                (pTVar10,iVar5);
      (this->CachedShapes).ArrayNum = 0;
    }
    uVar6 = (this->CollisionWrapper).BodyInstances.ArrayNum;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if (*piVar1 < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x210,8,uVar6,&pTVar2->AllocatorInstance,(this->CachedShapes).ArrayNum,piVar1);
    }
    pFVar9 = (this->CollisionWrapper).BodyInstances.AllocatorInstance.Data;
    iVar5 = (this->CollisionWrapper).BodyInstances.ArrayNum;
    pFVar3 = pFVar9 + (longlong)iVar5 * 8;
    while( true ) {
      if ((this->CollisionWrapper).BodyInstances.ArrayNum != iVar5) {
        `TCheckedPointerIterator<FBodyInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar9 == pFVar3) break;
      iVar8 = (this->CachedShapes).ArrayNum;
      pFVar7 = *(FBodyInstance **)pFVar9;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x210,8,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->CachedShapes).ArrayNum = iVar8 + 1;
      pTVar10 = (TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x210);
      (pTVar10->AllocatorInstance).SecondaryData = (ForElementType<FPhysicsShapeReference_Chaos>)0x0
      ;
      pTVar10->ArrayNum = 0;
      pTVar10->ArrayMax = 0x20;
      if (pFVar7 != (FBodyInstance *)0x0) {
        FPCGCollisionWrapper::GetShapeArray(pFVar7,this->CollisionQueryFlag,pTVar10);
      }
      pFVar9 = pFVar9 + 8;
    }
  }
  return;
}

// GetBounds @ 1498b55a0

TBox<double> * __thiscall
UPCGCollisionWrapperData::GetBounds
          (UPCGCollisionWrapperData *this,TBox<double> *__return_storage_ptr__)

{
  (**(code **)(((this->PointData).field0_0x0.DebugPtr)->_padding_ + 0x388))();
  return __return_storage_ptr__;
}

// GetCachedShapes @ 1498b6480

TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *
__thiscall UPCGCollisionWrapperData::GetCachedShapes(UPCGCollisionWrapperData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  uint uVar5;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`UPCGCollisionWrapperData::GetCachedShapes'::__l2::
           _dynamic_atexit_destructor_for__EmptyArray__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((this->CollisionWrapper).bInitialized != false) {
    uVar3 = 0;
    if (param_1 < (this->CollisionWrapper).IndexToBodyInstance.ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar1)();
      return pTVar4;
    }
    if (*(int *)((this->CollisionWrapper).IndexToBodyInstance.AllocatorInstance.Data +
                (longlong)param_1 * 4) != -1) {
      uVar3 = 0;
      if (param_1 < (this->CollisionWrapper).IndexToBodyInstance.ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
      uVar3 = *(uint *)((this->CollisionWrapper).IndexToBodyInstance.AllocatorInstance.Data +
                       (longlong)param_1 * 4);
      uVar5 = 0;
      if ((int)uVar3 < (this->CachedShapes).ArrayNum) {
        uVar5 = ~uVar3 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
      return (TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
              *)((this->CachedShapes).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x210);
    }
  }
  return &::EmptyArray;
}

// GetDataType @ 1498b83a0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGCollisionWrapperData::GetDataType(UPCGCollisionWrapperData *this)

{
  return Primitive;
}

// GetDataTypeId @ 1498b8610

FPCGDataTypeBaseId * __thiscall
UPCGCollisionWrapperData::GetDataTypeId(UPCGCollisionWrapperData *this)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
            ::__l2::Id;
  }
  _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
            ::__l2::Id;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPrimitive.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPrimitive.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoPrimitive,(UObject *)pUVar3,
                         L"PCGDataTypeInfoPrimitive");
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPrimitive.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14989f4f3;
  }
  else {
LAB_14989f4f3:
    TVar4.DebugPtr = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPrimitive.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar3,
                           L"PCGDataTypeInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_14989f54a;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_;
    if (((int)(TVar4.DebugPtr)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((TVar4.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14989f54c;
  }
LAB_14989f54a:
  TVar4.DebugPtr = (UScriptStruct *)0x0;
LAB_14989f54c:
  `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
  ::__l2::Id.Struct.field0_0x0 =
       (TObjectPtr<UScriptStruct_const_>)(TObjectPtr<UScriptStruct_const_>)TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar4.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
          ::__l2::Id;
}

// GetDimension @ 1498b9970

int __thiscall UPCGCollisionWrapperData::GetDimension(UPCGCollisionWrapperData *this)

{
  return 3;
}

// GetPrivateStaticClass @ 1498bc110

UClass * __cdecl UPCGCollisionWrapperData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCollisionWrapperData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCollisionWrapperData",
               &Z_Registration_Info_UClass_UPCGCollisionWrapperData.InnerSingleton,
               StaticRegisterNativesUPCGCollisionWrapperData,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGCollisionWrapperData>,
               InternalVTableHelperCtorCaller<UPCGCollisionWrapperData>,local_res8,
               UPCGSpatialData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCollisionWrapperData.InnerSingleton;
}

// GetResourceSizeEx @ 1498c5410

void __thiscall
UPCGCollisionWrapperData::GetResourceSizeEx(UPCGCollisionWrapperData *this,FResourceSizeEx *param_1)

{
  UPCGBasePointData *pUVar1;
  
  pUVar1 = (this->PointData).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGBasePointData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498c541f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 400))();
    return;
  }
  return;
}

// GetStrictBounds @ 1498c7550

TBox<double> * __thiscall
UPCGCollisionWrapperData::GetStrictBounds
          (UPCGCollisionWrapperData *this,TBox<double> *__return_storage_ptr__)

{
  (**(code **)(((this->PointData).field0_0x0.DebugPtr)->_padding_ + 0x398))();
  return __return_storage_ptr__;
}

// Initialize @ 1498cb4f0

bool __thiscall
UPCGCollisionWrapperData::Initialize
          (UPCGCollisionWrapperData *this,UPCGBasePointData *param_1,
          FPCGAttributePropertyInputSelector *param_2,EPCGCollisionQueryFlag param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FPCGAttributePropertySelector *pFVar4;
  IPCGAttributeAccessor *local_res8;
  IPCGAttributeAccessorKeys *local_res10;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_b8;
  FPCGAttributePropertySelector local_a8;
  undefined1 local_68 [48];
  int local_38;
  
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  FPCGCollisionWrapper::Uninitialize(&this->CollisionWrapper);
  if (param_1 == (UPCGBasePointData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPointData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGCollisionWrapperData.cpp"
                       ,0xcb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPCGBasePointData *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->PointData).field0_0x0.DebugPtr = param_1;
  FPCGAttributePropertySelector::operator=
            ((FPCGAttributePropertySelector *)&this->CollisionSelector,
             (FPCGAttributePropertySelector *)param_2);
  this->CollisionQueryFlag = param_3;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&local_a8);
  pFVar4 = (FPCGAttributePropertySelector *)
           FPCGAttributePropertyInputSelector::CopyAndFixLast
                     (param_2,(FPCGAttributePropertyInputSelector *)local_68,(UPCGData *)param_1);
  FPCGAttributePropertySelector::operator=(&local_a8,pFVar4);
  DestructItems<FString,int>((FString *)local_68._40_8_,local_38);
  if ((FString *)local_68._40_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_68._40_8_);
  }
  PCGAttributeAccessorHelpers::CreateConstAccessor
            ((UPCGData *)&local_res8,(FPCGAttributePropertySelector *)param_1,SUB81(&local_a8,0));
  PCGAttributeAccessorHelpers::CreateConstKeys
            ((UPCGData *)&local_res10,(FPCGAttributePropertySelector *)param_1);
  if (local_res8 == (IPCGAttributeAccessor *)0x0) {
    if (local_res10 != (IPCGAttributeAccessorKeys *)0x0) {
      (**(code **)local_res10->_padding_)(local_res10,1);
    }
LAB_1498cb688:
    if (local_res8 != (IPCGAttributeAccessor *)0x0) {
      (**(code **)local_res8->_padding_)(local_res8,1);
    }
    DestructItems<FString,int>
              ((FString *)local_a8.ExtraNames.AllocatorInstance.Data,local_a8.ExtraNames.ArrayNum);
    if (local_a8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.ExtraNames.AllocatorInstance.Data);
    }
  }
  else {
    if (local_res10 == (IPCGAttributeAccessorKeys *)0x0) goto LAB_1498cb688;
    bVar2 = FPCGCollisionWrapper::Prepare(&this->CollisionWrapper,local_res8,local_res10,&local_b8);
    if (local_res10 != (IPCGAttributeAccessorKeys *)0x0) {
      (**(code **)local_res10->_padding_)(local_res10,1);
    }
    if (local_res8 != (IPCGAttributeAccessor *)0x0) {
      (**(code **)local_res8->_padding_)(local_res8,1);
    }
    DestructItems<FString,int>
              ((FString *)local_a8.ExtraNames.AllocatorInstance.Data,local_a8.ExtraNames.ArrayNum);
    if (local_a8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.ExtraNames.AllocatorInstance.Data);
    }
    if (bVar2) {
      FinalizeInitializationEx(this,&local_b8);
      bVar2 = true;
      goto LAB_1498cb6b3;
    }
  }
  bVar2 = false;
LAB_1498cb6b3:
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if ((FSoftObjectPath *)local_b8.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  return bVar2;
}

// PreInitializeAndGatherMeshesEx @ 1498d29f0

bool __thiscall
UPCGCollisionWrapperData::PreInitializeAndGatherMeshesEx
          (UPCGCollisionWrapperData *this,UPCGBasePointData *param_1,
          FPCGAttributePropertyInputSelector *param_2,EPCGCollisionQueryFlag param_3,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FPCGAttributePropertySelector *pFVar4;
  IPCGAttributeAccessor *local_res8;
  IPCGAttributeAccessorKeys *local_res10;
  FPCGAttributePropertySelector local_98;
  undefined1 local_58 [48];
  int local_28;
  
  FPCGCollisionWrapper::Uninitialize(&this->CollisionWrapper);
  if (param_1 == (UPCGBasePointData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPointData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGCollisionWrapperData.cpp"
                       ,0xcb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPCGBasePointData *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->PointData).field0_0x0.DebugPtr = param_1;
  FPCGAttributePropertySelector::operator=
            ((FPCGAttributePropertySelector *)&this->CollisionSelector,
             (FPCGAttributePropertySelector *)param_2);
  this->CollisionQueryFlag = param_3;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&local_98);
  pFVar4 = (FPCGAttributePropertySelector *)
           FPCGAttributePropertyInputSelector::CopyAndFixLast
                     (param_2,(FPCGAttributePropertyInputSelector *)local_58,(UPCGData *)param_1);
  FPCGAttributePropertySelector::operator=(&local_98,pFVar4);
  DestructItems<FString,int>((FString *)local_58._40_8_,local_28);
  if ((FString *)local_58._40_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_58._40_8_);
  }
  PCGAttributeAccessorHelpers::CreateConstAccessor
            ((UPCGData *)&local_res8,(FPCGAttributePropertySelector *)param_1,SUB81(&local_98,0));
  PCGAttributeAccessorHelpers::CreateConstKeys
            ((UPCGData *)&local_res10,(FPCGAttributePropertySelector *)param_1);
  if ((local_res8 == (IPCGAttributeAccessor *)0x0) ||
     (local_res10 == (IPCGAttributeAccessorKeys *)0x0)) {
    bVar2 = false;
  }
  else {
    bVar2 = FPCGCollisionWrapper::Prepare(&this->CollisionWrapper,local_res8,local_res10,param_4);
  }
  if (local_res10 != (IPCGAttributeAccessorKeys *)0x0) {
    (**(code **)local_res10->_padding_)(local_res10,1);
  }
  if (local_res8 != (IPCGAttributeAccessor *)0x0) {
    (**(code **)local_res8->_padding_)(local_res8,1);
  }
  DestructItems<FString,int>
            ((FString *)local_98.ExtraNames.AllocatorInstance.Data,local_98.ExtraNames.ArrayNum);
  if (local_98.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.ExtraNames.AllocatorInstance.Data);
  }
  return bVar2;
}

// SamplePoint @ 1498d8530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UPCGCollisionWrapperData::SamplePoint
          (UPCGCollisionWrapperData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGPoint *param_3,UPCGMetadata *param_4)

{
  UPCGBasePointData *pUVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 uVar22;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *this_00;
  TMatrix<double> *pTVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auStackY_298 [32];
  float local_268 [2];
  <lambda_1> local_260;
  TPCGValueRange<float_const_,TStridedView<float_const_,int>_> local_230;
  TVector<double>_u_0 local_218;
  double local_200;
  double local_1f8;
  double local_1f0;
  TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
  local_1d8;
  TVector4<double>_u_0 local_108;
  double local_e8;
  double local_e0;
  double local_d8;
  undefined8 local_d0;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pUVar1 = (this->PointData).field0_0x0.DebugPtr;
  lVar2 = pUVar1->_padding_;
  if ((this->CollisionWrapper).bInitialized == false) {
    uVar22 = (**(code **)(lVar2 + 0x3c0))(pUVar1,param_1);
  }
  else {
    this_00 = (TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
              (**(code **)(lVar2 + 0x618))();
    pUVar1 = (this->PointData).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x500))(pUVar1,&local_1d8);
    pUVar1 = (this->PointData).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x508))(pUVar1,&local_230);
    local_268[0] = 0.0;
    pTVar23 = UE::Math::TTransform<double>::ToMatrixWithScale
                        (param_1,(TMatrix<double> *)&local_108._s_0);
    UE::Math::TBox<double>::TransformBy(param_2,(TBox<double> *)&local_218._s_0,pTVar23);
    local_260.TransformRange = &local_1d8;
    local_108._s_0.X = (local_200 + local_218._s_0.X) * __real_3fe0000000000000;
    local_260.DensityRange = &local_230;
    local_108._s_0.Z = (local_1f0 + local_218._s_0.Z) * __real_3fe0000000000000;
    local_260.Density = local_268;
    local_e8 = (local_200 - local_218._s_0.X) * __real_3fe0000000000000;
    local_d8 = (local_1f0 - local_218._s_0.Z) * __real_3fe0000000000000;
    local_108._s_0.Y = (local_1f8 + local_218._s_0.Y) * __real_3fe0000000000000;
    local_e0 = (local_1f8 - local_218._s_0.Y) * __real_3fe0000000000000;
    local_108._s_0.W = 0.0;
    local_d0 = 0;
    local_260.__this = this;
    local_260.InTransform = param_1;
    local_260.InBounds = param_2;
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGCollisionWrapperData::SamplePoint_::__l2::<lambda_1>_>
              (this_00,0,(FOctreeNodeContext *)this_00,(FBoxCenterAndExtent *)&local_108._s_0,
               &local_260);
    uVar21 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    uVar20 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    uVar19 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    dVar18 = _UNK_150689688;
    dVar14 = ___xmm_3ff00000000000003ff0000000000000;
    uVar22 = 0.0 < local_268[0];
    if ((bool)uVar22) {
      fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
      fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
      fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
      fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
      fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
      auVar12._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      auVar12._0_8_ = (double)fVar3;
      auVar12._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      auVar13._0_8_ = (double)fVar4;
      auVar13._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      uVar25 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0);
      uVar15 = (ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >> 0x20;
      uVar26 = (uint)__xmm_80000000000000008000000000000000;
      uVar27 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      uVar28 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0);
      uVar16 = (ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20;
      uVar24 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
      uVar17 = (ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20;
      (param_3->Transform).Rotation.XY.m128d_f64[0] =
           (double)GlobalVectorConstants::Float0001.m128_f32[0];
      (param_3->Transform).Rotation.XY.m128d_f64[1] = (double)fVar5;
      local_1d8.StubValue.Rotation.XY.m128d_f64[1] = auVar12._8_8_;
      (param_3->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar6;
      (param_3->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar9;
      (param_3->Transform).Translation.XY.m128d_f64[0] = (double)fVar3;
      (param_3->Transform).Translation.XY.m128d_f64[1] =
           local_1d8.StubValue.Rotation.XY.m128d_f64[1];
      local_1d8.StubValue.Translation.XY.m128d_f64[1] = auVar13._8_8_;
      (param_3->Transform).Translation.ZW.m128d_f64[0] = (double)fVar7;
      (param_3->Transform).Translation.ZW.m128d_f64[1] = (double)fVar10;
      (param_3->Transform).Scale3D.XY.m128d_f64[0] = (double)fVar4;
      (param_3->Transform).Scale3D.XY.m128d_f64[1] = local_1d8.StubValue.Translation.XY.m128d_f64[1]
      ;
      (param_3->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar8;
      (param_3->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar11;
      *(undefined8 *)&param_3->Density = 0x3f800000;
      (param_3->BoundsMin).field0_0x0._s_0.X =
           (double)CONCAT44((uint)uVar15 ^ uVar27,uVar25 ^ uVar26);
      (param_3->BoundsMin).field0_0x0._s_0.Y =
           (double)CONCAT44((uint)uVar17 ^ uVar27,uVar24 ^ uVar26);
      (param_3->BoundsMin).field0_0x0._s_0.Z =
           (double)CONCAT44((uint)uVar16 ^ uVar27,uVar28 ^ uVar26);
      (param_3->BoundsMax).field0_0x0._s_0.X = (double)uVar19;
      (param_3->BoundsMax).field0_0x0._s_0.Y = (double)uVar20;
      (param_3->BoundsMax).field0_0x0._s_0.Z = (double)uVar21;
      param_3->_padding_ = 0;
      (param_3->Color).field0_0x0._s_0.X = dVar14;
      (param_3->Color).field0_0x0._s_0.Y = dVar18;
      (param_3->Color).field0_0x0._s_0.Z = dVar14;
      (param_3->Color).field0_0x0._s_0.W = dVar18;
      param_3->Steepness = 0.5;
      param_3->Seed = 0;
      param_3->MetadataEntry = -1;
      dVar14 = (param_1->Rotation).XY.m128d_f64[1];
      (param_3->Transform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
      (param_3->Transform).Rotation.XY.m128d_f64[1] = dVar14;
      dVar14 = (param_1->Rotation).ZW.m128d_f64[1];
      (param_3->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
      (param_3->Transform).Rotation.ZW.m128d_f64[1] = dVar14;
      dVar14 = (param_1->Translation).XY.m128d_f64[1];
      (param_3->Transform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
      (param_3->Transform).Translation.XY.m128d_f64[1] = dVar14;
      dVar14 = (param_1->Translation).ZW.m128d_f64[1];
      (param_3->Transform).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
      (param_3->Transform).Translation.ZW.m128d_f64[1] = dVar14;
      dVar14 = (param_1->Scale3D).XY.m128d_f64[1];
      (param_3->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
      (param_3->Transform).Scale3D.XY.m128d_f64[1] = dVar14;
      dVar14 = (param_1->Scale3D).ZW.m128d_f64[1];
      (param_3->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
      (param_3->Transform).Scale3D.ZW.m128d_f64[1] = dVar14;
      dVar14 = (param_2->Min).field0_0x0._s_0.Y;
      (param_3->BoundsMin).field0_0x0._s_0.X = (param_2->Min).field0_0x0._s_0.X;
      (param_3->BoundsMin).field0_0x0._s_0.Y = dVar14;
      (param_3->BoundsMin).field0_0x0._s_0.Z = (param_2->Min).field0_0x0._s_0.Z;
      dVar14 = (param_2->Max).field0_0x0._s_0.Y;
      (param_3->BoundsMax).field0_0x0._s_0.X = (param_2->Max).field0_0x0._s_0.X;
      (param_3->BoundsMax).field0_0x0._s_0.Y = dVar14;
      (param_3->BoundsMax).field0_0x0._s_0.Z = (param_2->Max).field0_0x0._s_0.Z;
      param_3->Density = local_268[0];
    }
  }
  return (bool)uVar22;
}

// StaticRegisterNativesUPCGCollisionWrapperData @ 1498f6800

void __cdecl UPCGCollisionWrapperData::StaticRegisterNativesUPCGCollisionWrapperData(void)

{
  return;
}

// ToPointArrayData @ 1498f7c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointArrayData * __thiscall
UPCGCollisionWrapperData::ToPointArrayData
          (UPCGCollisionWrapperData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  UPCGPointArrayData *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001498f7c0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UPCGPointArrayData *)
           (**(code **)(((this->PointData).field0_0x0.DebugPtr)->_padding_ + 0x3b8))();
  return pUVar1;
}

// ToPointData @ 1498f7ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointData * __thiscall
UPCGCollisionWrapperData::ToPointData
          (UPCGCollisionWrapperData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  UPCGPointData *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001498f7eea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UPCGPointData *)
           (**(code **)(((this->PointData).field0_0x0.DebugPtr)->_padding_ + 0x3b0))();
  return pUVar1;
}

