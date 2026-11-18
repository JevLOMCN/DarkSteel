// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// StaticClass @ 1478f7c90

UClass * __cdecl USphereComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USphereComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SphereComponent",
               &Z_Registration_Info_UClass_USphereComponent.InnerSingleton,
               StaticRegisterNativesUSphereComponent,0x570,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USphereComponent>,
               InternalVTableHelperCtorCaller<USphereComponent>,aFStackX_8,
               UShapeComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USphereComponent.InnerSingleton;
}

// USphereComponent @ 1479a6cb0

USphereComponent * __thiscall
USphereComponent::USphereComponent(USphereComponent *this,FVTableHelper *param_1)

{
  UShapeComponent::UShapeComponent((UShapeComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  return this;
}

// USphereComponent @ 1479a6d20

USphereComponent * __thiscall
USphereComponent::USphereComponent(USphereComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UShapeComponent::UShapeComponent((UShapeComponent *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x10;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  *(undefined4 *)&this->_padding_ = 0xffff0000;
  this->SphereRadius = 32.0;
  return this;
}

// ~USphereComponent @ 1479a9750

void __thiscall USphereComponent::~USphereComponent(USphereComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  UShapeComponent::~UShapeComponent((UShapeComponent *)this);
  return;
}

// AreSymmetricRotations @ 1479b3b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
USphereComponent::AreSymmetricRotations
          (USphereComponent *this,TQuat<double> *param_1,TQuat<double> *param_2,
          TVector<double> *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined4 in_EAX;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  uint uVar17;
  double dVar16;
  double dVar18;
  double dVar19;
  double dVar20;
  
  uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  uVar15 = (uint)*(undefined8 *)&param_3->field0_0x0 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar17 = (uint)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar2 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10);
  dVar12 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar16 = (double)CONCAT44(uVar17,uVar15) - dVar12;
  dVar18 = (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  uVar10 = SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar11 = (uint)((ulonglong)dVar16 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar11,uVar10) &&
        (double)CONCAT44(uVar11,uVar10) != __real_3f1a36e2e0000000) ||
      (dVar16 = (double)CONCAT44(uVar17,uVar15) - dVar18,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (dVar12 = dVar12 - dVar18,
     __real_3f1a36e2e0000000 <
     (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    dVar18 = param_2->Z + param_1->Z;
    dVar7 = param_2->W + param_1->W;
    dVar13 = param_1->Z - param_2->Z;
    dVar14 = param_1->W - param_2->W;
    dVar16 = param_2->X + param_1->X;
    dVar12 = param_2->Y + param_1->Y;
    dVar19 = param_1->X - param_2->X;
    dVar20 = param_1->Y - param_2->Y;
    lVar9 = -(ulonglong)
             (__real_3f1a36e2e0000000 <
             (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & _UNK_15061cc8c,
                              SUB84(dVar14,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar9;
    auVar3._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar3._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
    iVar8 = movmskpd((int)this,auVar3);
    lVar9 = -(ulonglong)
             (__real_3f1a36e2e0000000 <
             (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                              SUB84(dVar20,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar9;
    auVar4._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar4._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
    uVar10 = movmskpd(in_EAX,auVar4);
    uVar11 = iVar8 << 2 | uVar10;
    if (uVar11 != 0) {
      lVar9 = -(ulonglong)
               (__real_3f1a36e2e0000000 <
               (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_15061cc8c,
                                SUB84(dVar7,0) & _UNK_15061cc88));
      auVar5._8_4_ = (int)lVar9;
      auVar5._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar18,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar5._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
      uVar11 = movmskpd(uVar11,auVar5);
      lVar9 = -(ulonglong)
               (__real_3f1a36e2e0000000 <
               (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & _UNK_15061cc8c,
                                SUB84(dVar12,0) & _UNK_15061cc88));
      auVar6._8_4_ = (int)lVar9;
      auVar6._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar16,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar6._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
      iVar8 = movmskpd(uVar10,auVar6);
      if ((uVar11 & 0x3fffffff) != 0 || iVar8 != 0) {
        return false;
      }
    }
  }
  return true;
}

// CalcBoundingCylinder @ 1479b62e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
USphereComponent::CalcBoundingCylinder(USphereComponent *this,float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  auVar9._0_8_ = CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          *(uint *)((longlong)&this->_padding_ + 4),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)this->_padding_);
  auVar9._8_4_ = _UNK_15061cc88 & (uint)this->_padding_;
  auVar9._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)&this->_padding_ + 4);
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)this->_padding_;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ & *(uint *)((longlong)&this->_padding_ + 4);
  uVar12 = _UNK_15061cc88 & (uint)this->_padding_;
  uVar13 = _UNK_15061cc8c & *(uint *)((longlong)&this->_padding_ + 4);
  auVar3._12_4_ = uVar11;
  auVar3._8_4_ = uVar10;
  auVar3._0_8_ = auVar9._0_8_;
  auVar6._4_4_ = uVar11;
  auVar6._0_4_ = uVar10;
  auVar6._8_4_ = uVar12;
  auVar6._12_4_ = uVar13;
  auVar7._8_8_ = auVar9._0_8_;
  auVar7._0_8_ = auVar6._8_8_;
  auVar5._4_4_ = uVar11;
  auVar5._0_4_ = uVar10;
  auVar5._8_4_ = uVar12;
  auVar5._12_4_ = uVar13;
  auVar6 = maxpd(auVar5,auVar7);
  auVar2._4_4_ = uVar11;
  auVar2._0_4_ = uVar10;
  auVar2._8_4_ = uVar12;
  auVar2._12_4_ = uVar13;
  auVar1._4_4_ = uVar13;
  auVar1._0_4_ = uVar12;
  auVar7 = maxpd(auVar6,auVar3);
  auVar6 = blendpd(auVar2,auVar9,2);
  auVar4._8_4_ = auVar9._8_4_;
  auVar4._0_8_ = auVar9._0_8_;
  auVar4._12_4_ = auVar9._12_4_;
  fVar8 = (float)auVar7._0_8_ * this->SphereRadius;
  auVar6 = maxpd(auVar4,auVar6);
  *param_1 = fVar8;
  auVar1._8_4_ = auVar9._8_4_;
  auVar1._12_4_ = auVar9._12_4_;
  maxpd(auVar6,auVar1);
  *param_2 = fVar8;
  return;
}

// CalcBounds @ 1479b6350

TBoxSphereBounds<double,double> * __thiscall
USphereComponent::CalcBounds
          (USphereComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  undefined4 uVar2;
  TVector<double>_u_0 local_c8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  TMatrix<double> local_88;
  
  dVar1 = (double)this->SphereRadius;
  local_c8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_c8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar2 = (undefined4)((ulonglong)dVar1 >> 0x20);
  local_b0._8_4_ = SUB84(dVar1,0);
  local_b0._0_8_ = dVar1;
  local_b0._12_4_ = uVar2;
  local_a0._8_4_ = SUB84(dVar1,0);
  local_a0._0_8_ = dVar1;
  local_a0._12_4_ = uVar2;
  local_c8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_88);
  UE::Math::TBoxSphereBounds<double,double>::TransformBy
            ((TBoxSphereBounds<double,double> *)&local_c8._s_0,__return_storage_ptr__,&local_88);
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 1479bc020

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall USphereComponent::CreateSceneProxy(USphereComponent *this)

{
  uint uVar1;
  longlong lVar2;
  FPrimitiveSceneProxy *this_00;
  
  this_00 = ::operator_new(0x290);
  if (this_00 != (FPrimitiveSceneProxy *)0x0) {
    FPrimitiveSceneProxy::FPrimitiveSceneProxy(this_00,(UPrimitiveComponent *)this,(FName)0x0);
    uVar1 = (uint)this_00[1]._padding_;
    this_00->_padding_ =
         (longlong)&`USphereComponent::CreateSceneProxy'::`2'::FSphereSceneProxy::_vftable_;
    *(uint *)&this_00[1]._padding_ = (*(byte *)((longlong)&this->_padding_ + 4) ^ uVar1) & 1 ^ uVar1
    ;
    *(int *)((longlong)&this_00[1]._padding_ + 4) = (int)this->_padding_;
    *(float *)&this_00[1]._padding_ = this->SphereRadius;
    lVar2 = this->_padding_;
    this_00->bWillEverBeLit = '\0';
    *(int *)((longlong)&this_00[1]._padding_ + 4) = (int)lVar2;
    return this_00;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// GetCollisionShape @ 1479c4ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FCollisionShape * __thiscall
USphereComponent::GetCollisionShape
          (USphereComponent *this,FCollisionShape *__return_storage_ptr__,float param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  undefined8 uStack_20;
  
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)this->_padding_;
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ & *(uint *)((longlong)&this->_padding_ + 4);
  uVar11 = _UNK_15061cc88 & (uint)this->_padding_;
  uVar12 = _UNK_15061cc8c & *(uint *)((longlong)&this->_padding_ + 4);
  auVar8._0_8_ = CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          *(uint *)((longlong)&this->_padding_ + 4),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)this->_padding_);
  auVar8._8_4_ = _UNK_15061cc88 & (uint)this->_padding_;
  auVar8._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)&this->_padding_ + 4);
  auVar2._4_4_ = uVar10;
  auVar2._0_4_ = uVar9;
  auVar2._8_4_ = uVar11;
  auVar2._12_4_ = uVar12;
  auVar7._8_8_ = auVar8._0_8_;
  auVar7._0_8_ = auVar2._8_8_;
  auVar5._4_4_ = uVar10;
  auVar5._0_4_ = uVar9;
  auVar5._8_4_ = uVar11;
  auVar5._12_4_ = uVar12;
  auVar6 = minpd(auVar5,auVar7);
  auVar1._4_4_ = uVar10;
  auVar1._0_4_ = uVar9;
  auVar1._8_4_ = uVar11;
  auVar1._12_4_ = uVar12;
  auVar3._12_4_ = uVar10;
  auVar3._8_4_ = uVar9;
  auVar3._0_8_ = auVar8._0_8_;
  auVar7 = minpd(auVar6,auVar3);
  auVar2 = blendpd(auVar1,auVar8,2);
  auVar4._8_4_ = auVar8._8_4_;
  auVar4._0_8_ = auVar8._0_8_;
  auVar4._12_4_ = auVar8._12_4_;
  auVar6._4_4_ = uVar12;
  auVar6._0_4_ = uVar11;
  fVar13 = (float)auVar7._0_8_ * this->SphereRadius;
  auVar2 = minpd(auVar4,auVar2);
  auVar6._8_4_ = auVar8._8_4_;
  auVar6._12_4_ = auVar8._12_4_;
  minpd(auVar2,auVar6);
  if (param_1 == 0.0) {
    *(ulonglong *)__return_storage_ptr__ = CONCAT44(fVar13,2);
    *(undefined8 *)((longlong)&__return_storage_ptr__->field1_0x4 + 4) = uStack_20;
    return __return_storage_ptr__;
  }
  fVar13 = fVar13 + param_1;
  __return_storage_ptr__->ShapeType = Sphere;
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  (__return_storage_ptr__->field1_0x4).Box.HalfExtentX = fVar13;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1479cde00

UClass * __cdecl USphereComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USphereComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SphereComponent",
               &Z_Registration_Info_UClass_USphereComponent.InnerSingleton,
               StaticRegisterNativesUSphereComponent,0x570,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USphereComponent>,
               InternalVTableHelperCtorCaller<USphereComponent>,local_res8,
               UShapeComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USphereComponent.InnerSingleton;
}

// IsZeroExtent @ 1479da9f0

bool __thiscall USphereComponent::IsZeroExtent(USphereComponent *this)

{
  if (this->SphereRadius == 0.0) {
    return true;
  }
  return false;
}

// SetSphereRadius @ 1479eb080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USphereComponent::SetSphereRadius(USphereComponent *this,float param_1,bool param_2)

{
  int iVar1;
  TVector<double>_u_0 local_28;
  
  this->SphereRadius = param_1;
  (**(code **)(this->_padding_ + 0x5b0))();
  (**(code **)(this->_padding_ + 0xa90))(this);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  if ((this->_padding_ & 8) != 0) {
    local_28._s_0.X = (double)this->_padding_;
    local_28._s_0.Y = (double)this->_padding_;
    local_28._s_0.Z = (double)this->_padding_;
    FBodyInstance::UpdateBodyScale
              ((FBodyInstance *)&this->_padding_,(TVector<double> *)&local_28._s_0,true);
    if (param_2) {
      iVar1 = (**(code **)(this->_padding_ + 0x5e0))(this);
      if ((iVar1 != 0) && (this->_padding_ != 0)) {
        USceneComponent::UpdateOverlaps
                  ((USceneComponent *)this,(TArrayView<FOverlapInfo_const_,int> *)0x0,true,
                   (TArrayView<FOverlapInfo_const_,int> *)0x0);
      }
    }
  }
  return;
}

// StaticRegisterNativesUSphereComponent @ 1479edee0

void __cdecl USphereComponent::StaticRegisterNativesUSphereComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_USphereComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateBodySetup @ 1479efdf0

void __thiscall USphereComponent::UpdateBodySetup(USphereComponent *this)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  byte bVar12;
  wchar_t *pwVar13;
  bool bVar14;
  float fVar15;
  FString local_68;
  FString local_58;
  FString local_48 [4];
  
  fVar6 = __real_3dcccccd;
  fVar5 = __real_38d1b717;
  pwVar13 = L"";
  bVar14 = false;
  if ((*(byte *)((longlong)&this->_padding_ + 4) >> 4 & 1) == 0) {
LAB_1479efeb3:
    if (!bVar14) goto LAB_1479eff5f;
  }
  else if (this->_padding_ == 0) {
    pUVar8 = UObject::GetArchetype((UObject *)this);
    if (pUVar8 == (UObject *)0x0) {
      pFVar10 = GetTypeName<USphereComponent>(&local_68);
      if ((pFVar10->Data).ArrayNum != 0) {
        pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar13);
    }
    pUVar9 = StaticClass();
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar9->_padding_)) {
      pFVar10 = GetTypeName<USphereComponent>(&local_58);
      pwVar13 = L"";
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
      pFVar10 = GetFullNameForCastLogError<UObject>(local_48,pUVar8);
      if ((pFVar10->Data).ArrayNum != 0) {
        pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar13,pwVar11);
    }
    pUVar8 = (UObject *)(**(code **)(*(longlong *)pUVar8 + 0x800))(pUVar8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    bVar14 = pUVar8 != (UObject *)0x0;
    this->_padding_ = (longlong)pUVar8;
    goto LAB_1479efeb3;
  }
  fVar15 = this->SphereRadius;
  bVar12 = *(byte *)((longlong)&this->_padding_ + 4) >> 4 & 1;
  if (bVar12 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(bUseArchetypeBodySetup && UpdateBodySetupAction == EShapeBodySetupHelper::InvalidateSharingIfStale) || (!bUseArchetypeBodySetup && UpdateBodySetupAction == EShapeBodySetupHelper::UpdateBodySetup)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SphereComponent.cpp"
                        ,0x27,L"");
    if (bVar14) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)(this->_padding_ + 0x40) != 1) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("ShapeBodySetup->AggGeom.SphereElems.Num() == 1",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SphereComponent.cpp"
                        ,0x28,L"");
    if (bVar14) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (fVar15 < fVar5) {
    fVar15 = fVar6;
  }
  if (fVar15 != *(float *)(*(longlong *)(this->_padding_ + 0x38) + 0x48)) {
    this->_padding_ = 0;
    bVar12 = 0;
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xef;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 | bVar12 << 4;
LAB_1479eff5f:
  UShapeComponent::CreateShapeBodySetupIfNeeded<FKSphereElem>((UShapeComponent *)this);
  if ((this->_padding_ & 0x1000000000) == 0) {
    fVar15 = this->SphereRadius;
    if (*(int *)(this->_padding_ + 0x40) != 1) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ShapeBodySetup->AggGeom.SphereElems.Num() == 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SphereComponent.cpp"
                          ,0x28,L"");
      if (bVar14) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    lVar3 = *(longlong *)(this->_padding_ + 0x38);
    if (fVar15 < fVar5) {
      fVar15 = fVar6;
    }
    *(double *)(lVar3 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)(lVar3 + 0x38) = uVar7;
    *(double *)(lVar3 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(float *)(lVar3 + 0x48) = fVar15;
  }
  return;
}

// execGetScaledSphereRadius @ 1479ff120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USphereComponent::execGetScaledSphereRadius(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  uVar4 = _UNK_15061cc8c;
  uVar3 = _UNK_15061cc88;
  uVar2 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar1 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar13 = uVar1 & *(uint *)(param_1 + 0xe);
  uVar14 = uVar2 & *(uint *)&param_1[0xe].field_0x4;
  uVar15 = uVar3 & *(uint *)&param_1[0xe].field_0x8;
  uVar16 = uVar4 & *(uint *)&param_1[0xe].field_0xc;
  auVar12._0_8_ =
       CONCAT44(uVar2 & *(uint *)&param_1[0xe].field_0x14,uVar1 & *(uint *)&param_1[0xe].field_0x10)
  ;
  auVar12._8_4_ = uVar3 & *(uint *)&param_1[0xe].field_0x18;
  auVar12._12_4_ = uVar4 & *(uint *)&param_1[0xe].field_0x1c;
  auVar6._4_4_ = uVar14;
  auVar6._0_4_ = uVar13;
  auVar6._8_4_ = uVar15;
  auVar6._12_4_ = uVar16;
  auVar11._8_8_ = auVar12._0_8_;
  auVar11._0_8_ = auVar6._8_8_;
  auVar9._4_4_ = uVar14;
  auVar9._0_4_ = uVar13;
  auVar9._8_4_ = uVar15;
  auVar9._12_4_ = uVar16;
  auVar10 = minpd(auVar9,auVar11);
  auVar5._4_4_ = uVar14;
  auVar5._0_4_ = uVar13;
  auVar5._8_4_ = uVar15;
  auVar5._12_4_ = uVar16;
  auVar7._12_4_ = uVar14;
  auVar7._8_4_ = uVar13;
  auVar7._0_8_ = auVar12._0_8_;
  auVar11 = minpd(auVar10,auVar7);
  auVar6 = blendpd(auVar5,auVar12,2);
  auVar8._8_4_ = auVar12._8_4_;
  auVar8._0_8_ = auVar12._0_8_;
  auVar8._12_4_ = auVar12._12_4_;
  auVar10._4_4_ = uVar16;
  auVar10._0_4_ = uVar15;
  auVar6 = minpd(auVar8,auVar6);
  *(float *)param_3 = (float)auVar11._0_8_ * *(float *)&param_1[0x22].field_0x18;
  auVar10._8_4_ = auVar12._8_4_;
  auVar10._12_4_ = auVar12._12_4_;
  minpd(auVar6,auVar10);
  return;
}

// execGetShapeScale @ 1479ff1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl USphereComponent::execGetShapeScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  uVar4 = _UNK_15061cc8c;
  uVar3 = _UNK_15061cc88;
  uVar2 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar1 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar13 = uVar1 & *(uint *)(param_1 + 0xe);
  uVar14 = uVar2 & *(uint *)&param_1[0xe].field_0x4;
  uVar15 = uVar3 & *(uint *)&param_1[0xe].field_0x8;
  uVar16 = uVar4 & *(uint *)&param_1[0xe].field_0xc;
  auVar12._0_8_ =
       CONCAT44(uVar2 & *(uint *)&param_1[0xe].field_0x14,uVar1 & *(uint *)&param_1[0xe].field_0x10)
  ;
  auVar12._8_4_ = uVar3 & *(uint *)&param_1[0xe].field_0x18;
  auVar12._12_4_ = uVar4 & *(uint *)&param_1[0xe].field_0x1c;
  auVar6._4_4_ = uVar14;
  auVar6._0_4_ = uVar13;
  auVar6._8_4_ = uVar15;
  auVar6._12_4_ = uVar16;
  auVar11._8_8_ = auVar12._0_8_;
  auVar11._0_8_ = auVar6._8_8_;
  auVar9._4_4_ = uVar14;
  auVar9._0_4_ = uVar13;
  auVar9._8_4_ = uVar15;
  auVar9._12_4_ = uVar16;
  auVar10 = minpd(auVar9,auVar11);
  auVar5._4_4_ = uVar14;
  auVar5._0_4_ = uVar13;
  auVar5._8_4_ = uVar15;
  auVar5._12_4_ = uVar16;
  auVar7._12_4_ = uVar14;
  auVar7._8_4_ = uVar13;
  auVar7._0_8_ = auVar12._0_8_;
  auVar11 = minpd(auVar10,auVar7);
  auVar6 = blendpd(auVar5,auVar12,2);
  auVar8._8_4_ = auVar12._8_4_;
  auVar8._0_8_ = auVar12._0_8_;
  auVar8._12_4_ = auVar12._12_4_;
  auVar10._4_4_ = uVar16;
  auVar10._0_4_ = uVar15;
  auVar6 = minpd(auVar8,auVar6);
  *(float *)param_3 = (float)auVar11._0_8_;
  auVar10._8_4_ = auVar12._8_4_;
  auVar10._12_4_ = auVar12._12_4_;
  minpd(auVar6,auVar10);
  return;
}

// execGetUnscaledSphereRadius @ 147a01440

void __cdecl
USphereComponent::execGetUnscaledSphereRadius(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x22].field_0x18;
  return;
}

// execSetSphereRadius @ 147a09140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl USphereComponent::execSetSphereRadius(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  int local_res8 [2];
  undefined4 local_res10 [2];
  TVector<double>_u_0 local_38;
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar4 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)param_1;
  *(undefined4 *)&param_1[0x22].field_0x18 = local_res10[0];
  (**(code **)(lVar2 + 0x5b0))(param_1);
  (**(code **)(*(longlong *)param_1 + 0xa90))(param_1);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  if ((param_1[3].field_0x20 & 8) != 0) {
    local_38._s_0.X = (double)*(undefined8 *)(param_1 + 0xe);
    local_38._s_0.Y = (double)*(undefined8 *)&param_1[0xe].field_0x8;
    local_38._s_0.Z = (double)*(undefined8 *)&param_1[0xe].field_0x10;
    FBodyInstance::UpdateBodyScale
              ((FBodyInstance *)&param_1[0x16].field_0x20,(TVector<double> *)&local_38._s_0,true);
    if (bVar4) {
      iVar3 = (**(code **)(*(longlong *)param_1 + 0x5e0))(param_1);
      if ((iVar3 != 0) && (*(longlong *)&param_1[4].field_0x8 != 0)) {
        USceneComponent::UpdateOverlaps
                  ((USceneComponent *)param_1,(TArrayView<FOverlapInfo_const_,int> *)0x0,true,
                   (TArrayView<FOverlapInfo_const_,int> *)0x0);
      }
    }
  }
  return;
}

