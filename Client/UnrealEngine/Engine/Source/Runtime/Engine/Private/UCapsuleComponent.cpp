// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 29

// StaticClass @ 14773f340

UClass * __cdecl UCapsuleComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCapsuleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CapsuleComponent",
               &Z_Registration_Info_UClass_UCapsuleComponent.InnerSingleton,
               StaticRegisterNativesUCapsuleComponent,0x570,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UCapsuleComponent>,
               InternalVTableHelperCtorCaller<UCapsuleComponent>,local_res8,
               UShapeComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCapsuleComponent.InnerSingleton;
}

// UCapsuleComponent @ 1477efad0

UCapsuleComponent * __thiscall
UCapsuleComponent::UCapsuleComponent(UCapsuleComponent *this,FVTableHelper *param_1)

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

// UCapsuleComponent @ 1477efb40

UCapsuleComponent * __thiscall
UCapsuleComponent::UCapsuleComponent(UCapsuleComponent *this,FObjectInitializer *param_1)

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
  *(undefined4 *)&this->_padding_ = 0xffdf959d;
  this->CapsuleRadius = 22.0;
  this->CapsuleHalfHeight = 44.0;
  return this;
}

// ~UCapsuleComponent @ 1477f45f0

void __thiscall UCapsuleComponent::~UCapsuleComponent(UCapsuleComponent *this)

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

// AreSymmetricRotations @ 14780a370

bool __thiscall
UCapsuleComponent::AreSymmetricRotations
          (UCapsuleComponent *this,TQuat<double> *param_1,TQuat<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_38 [2];
  
  dVar1 = __real_3ff0000000000000;
  if ((param_3->field0_0x0)._s_0.Y == (param_3->field0_0x0)._s_0.X) {
    local_58._s_0.Z = __real_3ff0000000000000;
    local_58._s_0.X = 0.0;
    local_58._s_0.Y = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (param_1,(TVector<double> *)&local_78._s_0,(TVector<double> *)&local_58._s_0);
    local_38[0]._s_0.Z = dVar1;
    local_38[0]._s_0.X = 0.0;
    local_38[0]._s_0.Y = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (param_2,(TVector<double> *)&local_58._s_0,(TVector<double> *)&local_38[0]._s_0);
    uVar2 = SUB84(local_78._s_0.X - local_58._s_0.X,0) &
            (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar3 = (uint)((ulonglong)(local_78._s_0.X - local_58._s_0.X) >> 0x20) &
            __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((((double)CONCAT44(uVar3,uVar2) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar3,uVar2) == __real_3f1a36e2e0000000) &&
        (uVar2 = SUB84(local_78._s_0.Y - local_58._s_0.Y,0) &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar3 = (uint)((ulonglong)(local_78._s_0.Y - local_58._s_0.Y) >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar3,uVar2) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar3,uVar2) == __real_3f1a36e2e0000000)) &&
       (uVar2 = SUB84(local_78._s_0.Z - local_58._s_0.Z,0) &
                (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar3 = (uint)((ulonglong)(local_78._s_0.Z - local_58._s_0.Z) >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar3,uVar2) < __real_3f1a36e2e0000000 ||
       (double)CONCAT44(uVar3,uVar2) == __real_3f1a36e2e0000000)) {
      return true;
    }
  }
  return false;
}

// CalcBoundingCylinder @ 14780def0

void __thiscall
UCapsuleComponent::CalcBoundingCylinder(UCapsuleComponent *this,float *param_1,float *param_2)

{
  undefined8 uVar1;
  undefined8 uVar3;
  undefined1 auVar2 [16];
  undefined1 auVar4 [12];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar15;
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  fVar9 = this->CapsuleHalfHeight - this->CapsuleRadius;
  dVar5 = (double)this->_padding_;
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  auVar6._0_8_ = this->_padding_;
  auVar6._8_8_ = this->_padding_;
  uVar1 = this->_padding_;
  uVar3 = this->_padding_;
  auVar2._0_8_ = this->_padding_;
  auVar2._8_8_ = this->_padding_;
  dVar12 = (double)fVar9 * (double)this->_padding_;
  auVar13 = blendpd(auVar6,auVar2,2);
  auVar23._0_8_ = (double)auVar6._0_8_ * 0.0 - (double)auVar6._8_8_ * 0.0;
  auVar23._8_8_ = dVar12 * (double)auVar6._8_8_ - (double)auVar2._0_8_ * 0.0;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = dVar12;
  auVar6 = blendpd(ZEXT816(0),auVar17,2);
  auVar7._0_8_ = auVar6._0_8_ * (double)auVar2._0_8_ - auVar13._0_8_ * dVar12;
  auVar7._8_8_ = auVar6._8_8_ * (double)auVar2._8_8_ - auVar13._8_8_ * 0.0;
  auVar13._0_8_ = this->_padding_;
  auVar13._8_8_ = this->_padding_;
  auVar6 = blendpd(auVar23,auVar7,2);
  dVar21 = auVar23._8_8_ + auVar23._8_8_;
  dVar22 = auVar7._0_8_ + auVar7._0_8_;
  auVar24._0_8_ = auVar6._0_8_ + auVar6._0_8_;
  auVar24._8_8_ = auVar6._8_8_ + auVar6._8_8_;
  auVar19._8_4_ = SUB84(dVar22,0);
  auVar19._0_8_ = dVar21;
  uVar10 = (undefined4)((ulonglong)dVar22 >> 0x20);
  auVar19._12_4_ = uVar10;
  auVar16._8_4_ = SUB84(dVar22,0);
  auVar16._0_8_ = dVar21;
  auVar16._12_4_ = uVar10;
  auVar17 = blendpd(auVar16,auVar24,2);
  auVar6 = blendpd(auVar13,auVar2,2);
  auVar20._0_8_ = auVar19._8_8_ * (double)auVar13._0_8_ - (double)auVar13._8_8_ * dVar21;
  auVar20._8_8_ = auVar24._0_8_ * (double)auVar13._8_8_ - (double)auVar2._0_8_ * dVar22;
  dVar15 = auVar6._8_8_ * auVar24._8_8_;
  auVar18._0_8_ = auVar17._0_8_ * (double)auVar2._0_8_ - auVar6._0_8_ * auVar24._0_8_;
  auVar18._8_8_ = auVar17._8_8_ * (double)auVar2._8_8_ - dVar15;
  auVar8._8_4_ = SUB84(auVar20._8_8_,0);
  auVar8._0_8_ = auVar20._0_8_;
  auVar8._12_4_ = (int)((ulonglong)auVar20._8_8_ >> 0x20);
  dVar21 = dVar21 * dVar5 + auVar8._8_8_;
  dVar22 = dVar22 * dVar5 + auVar18._0_8_;
  auVar6 = blendpd(auVar20,auVar18,2);
  auVar4._4_8_ = dVar15;
  auVar4._0_4_ = (int)((ulonglong)dVar21 >> 0x20);
  auVar14._0_8_ = auVar4._0_8_ << 0x20;
  auVar14._8_4_ = SUB84(dVar22,0);
  auVar14._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  uVar10 = (int)uVar3;
  uVar11 = (int)((ulonglong)uVar3 >> 0x20);
  if ((double)uVar3 <= (double)uVar1) {
    uVar10 = (int)uVar1;
    uVar11 = (int)((ulonglong)uVar1 >> 0x20);
  }
  dVar15 = (double)(float)((double)CONCAT44(uVar11,uVar10) * (double)this->CapsuleRadius);
  *param_1 = (float)(SQRT(auVar14._8_8_ * auVar14._8_8_ + dVar21 * dVar21) + dVar15);
  *param_2 = (float)(dVar15 + auVar24._0_8_ * dVar5 + dVar12 + auVar6._0_8_);
  return;
}

// CalcBounds @ 14780e4f0

TBoxSphereBounds<double,double> * __thiscall
UCapsuleComponent::CalcBounds
          (UCapsuleComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  TVector<double>_u_0 local_c8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  TMatrix<double> local_88;
  
  dVar1 = (double)this->CapsuleRadius;
  dVar2 = (double)this->CapsuleHalfHeight;
  local_c8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_c8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_b0._8_4_ = SUB84(dVar1,0);
  local_b0._0_8_ = dVar1;
  local_b0._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_a0._8_4_ = SUB84(dVar2,0);
  local_a0._0_8_ = dVar2;
  local_a0._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_c8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_88);
  UE::Math::TBoxSphereBounds<double,double>::TransformBy
            ((TBoxSphereBounds<double,double> *)&local_c8._s_0,__return_storage_ptr__,&local_88);
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 14781adc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall UCapsuleComponent::CreateSceneProxy(UCapsuleComponent *this)

{
  uint uVar1;
  longlong lVar2;
  FPrimitiveSceneProxy *this_00;
  double dVar3;
  
  this_00 = ::operator_new(0x2a0);
  if (this_00 != (FPrimitiveSceneProxy *)0x0) {
    FPrimitiveSceneProxy::FPrimitiveSceneProxy(this_00,(UPrimitiveComponent *)this,(FName)0x0);
    uVar1 = (uint)this_00[1]._padding_;
    this_00->_padding_ =
         (longlong)&`UCapsuleComponent::CreateSceneProxy'::`2'::FDrawCylinderSceneProxy::_vftable_;
    *(uint *)&this_00[1]._padding_ = (*(byte *)((longlong)&this->_padding_ + 4) ^ uVar1) & 1 ^ uVar1
    ;
    dVar3 = (double)this->_padding_;
    if ((double)this->_padding_ <= (double)this->_padding_) {
      dVar3 = (double)this->_padding_;
    }
    *(float *)((longlong)&this_00[1]._padding_ + 4) = (float)dVar3 * this->CapsuleRadius;
    *(float *)&this_00[1]._padding_ = (float)(double)this->_padding_ * this->CapsuleHalfHeight;
    *(int *)((longlong)&this_00[1]._padding_ + 4) = (int)this->_padding_;
    lVar2 = this->_padding_;
    this_00->bWillEverBeLit = '\0';
    *(int *)&this_00[1].DebugMassData.AllocatorInstance.Data = (int)lVar2;
    return this_00;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// GetCollisionShape @ 147835310

FCollisionShape * __thiscall
UCapsuleComponent::GetCollisionShape
          (UCapsuleComponent *this,FCollisionShape *__return_storage_ptr__,float param_1)

{
  double dVar1;
  FCollisionShape local_48;
  double local_38;
  
  local_38 = (double)this->_padding_;
  dVar1 = (double)this->_padding_;
  if ((double)this->_padding_ <= (double)this->_padding_) {
    dVar1 = (double)this->_padding_;
  }
  local_48.ShapeType = Capsule;
  local_48.field1_0x4.Box.HalfExtentX = (float)dVar1 * this->CapsuleRadius;
  local_48.field1_0x4.Box.HalfExtentY = (float)local_38 * this->CapsuleHalfHeight;
  FCollisionShape::Inflate(&local_48,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14783c3e0

UClass * __cdecl UCapsuleComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCapsuleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CapsuleComponent",
               &Z_Registration_Info_UClass_UCapsuleComponent.InnerSingleton,
               StaticRegisterNativesUCapsuleComponent,0x570,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UCapsuleComponent>,
               InternalVTableHelperCtorCaller<UCapsuleComponent>,local_res8,
               UShapeComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCapsuleComponent.InnerSingleton;
}

// IsZeroExtent @ 147841220

bool __thiscall UCapsuleComponent::IsZeroExtent(UCapsuleComponent *this)

{
  if ((this->CapsuleRadius == 0.0) && (this->CapsuleHalfHeight == 0.0)) {
    return true;
  }
  return false;
}

// PostLoad @ 147854c90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UCapsuleComponent::PostLoad(UCapsuleComponent *this)

{
  float fVar1;
  
  UPrimitiveComponent::PostLoad((UPrimitiveComponent *)this);
  if (GIsReconstructingBlueprintInstances == false) {
    fVar1 = this->CapsuleHalfHeight;
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    if (fVar1 <= this->CapsuleRadius) {
      fVar1 = this->CapsuleRadius;
    }
    this->CapsuleHalfHeight = fVar1;
  }
  return;
}

// SetCapsuleSize @ 14786a090

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCapsuleComponent::SetCapsuleSize(UCapsuleComponent *this,float param_1,float param_2,bool param_3)

{
  int iVar1;
  TVector<double>_u_0 local_28;
  
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->CapsuleHalfHeight = param_2;
  this->CapsuleRadius = param_1;
  (**(code **)(this->_padding_ + 0x5b0))();
  (**(code **)(this->_padding_ + 0xa90))(this);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  if ((this->_padding_ & 8) != 0) {
    local_28._s_0.X = (double)this->_padding_;
    local_28._s_0.Y = (double)this->_padding_;
    local_28._s_0.Z = (double)this->_padding_;
    FBodyInstance::UpdateBodyScale
              ((FBodyInstance *)&this->_padding_,(TVector<double> *)&local_28._s_0,true);
    if (param_3) {
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

// StaticRegisterNativesUCapsuleComponent @ 147875a30

void __cdecl UCapsuleComponent::StaticRegisterNativesUCapsuleComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xe;
  local_18.DataPtr = Z_Construct_UClass_UCapsuleComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateBodySetup @ 14787de50

void __thiscall UCapsuleComponent::UpdateBodySetup(UCapsuleComponent *this)

{
  byte *pbVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  FKSphylElem *this_00;
  code *pcVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  byte bVar10;
  wchar_t *pwVar11;
  bool bVar12;
  float fVar13;
  FString local_68;
  FString local_58;
  FString local_48 [4];
  
  pwVar11 = L"";
  bVar12 = false;
  if ((*(byte *)((longlong)&this->_padding_ + 4) >> 4 & 1) == 0) {
LAB_14787df06:
    if (!bVar12) goto LAB_14787dfc4;
  }
  else if (this->_padding_ == 0) {
    pUVar6 = UObject::GetArchetype((UObject *)this);
    if (pUVar6 == (UObject *)0x0) {
      pFVar8 = GetTypeName<UCapsuleComponent>(&local_68);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar11);
    }
    pUVar7 = StaticClass();
    iVar3 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar7->_padding_)) {
      pFVar8 = GetTypeName<UCapsuleComponent>(&local_58);
      pwVar11 = L"";
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar8 = GetFullNameForCastLogError<UObject>(local_48,pUVar6);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar11,pwVar9);
    }
    pUVar6 = (UObject *)(**(code **)(*(longlong *)pUVar6 + 0x800))(pUVar6);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    bVar12 = pUVar6 != (UObject *)0x0;
    this->_padding_ = (longlong)pUVar6;
    goto LAB_14787df06;
  }
  fVar13 = this->CapsuleHalfHeight;
  fVar2 = this->CapsuleRadius;
  bVar10 = *(byte *)((longlong)&this->_padding_ + 4) >> 4 & 1;
  if (bVar10 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(bUseArchetypeBodySetup && UpdateBodySetupAction == EShapeBodySetupHelper::InvalidateSharingIfStale) || (!bUseArchetypeBodySetup && UpdateBodySetupAction == EShapeBodySetupHelper::UpdateBodySetup)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\CapsuleComponent.cpp"
                        ,0xc3,L"");
    if (bVar12) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(int *)(this->_padding_ + 0x60) != 1) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("ShapeBodySetup->AggGeom.SphylElems.Num() == 1",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\CapsuleComponent.cpp"
                        ,0xc4,L"");
    if (bVar12) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(this->_padding_ + 0x58);
  if (fVar2 == *(float *)(lVar4 + 0x60)) {
    fVar13 = fVar13 - fVar2;
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    if (fVar13 + fVar13 != *(float *)(lVar4 + 100)) goto LAB_14787dfa4;
  }
  else {
LAB_14787dfa4:
    this->_padding_ = 0;
    bVar10 = 0;
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xef;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 | bVar10 << 4;
LAB_14787dfc4:
  UShapeComponent::CreateShapeBodySetupIfNeeded<FKSphylElem>((UShapeComponent *)this);
  if ((this->_padding_ & 0x1000000000) == 0) {
    fVar13 = this->CapsuleHalfHeight;
    fVar2 = this->CapsuleRadius;
    if (*(int *)(this->_padding_ + 0x60) != 1) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ShapeBodySetup->AggGeom.SphylElems.Num() == 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\CapsuleComponent.cpp"
                          ,0xc4,L"");
      if (bVar12) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    this_00 = *(FKSphylElem **)(this->_padding_ + 0x58);
    FKSphylElem::SetTransform(this_00,&UE::Math::TTransform<double>::Identity);
    fVar13 = fVar13 - fVar2;
    this_00->Radius = fVar2;
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    this_00->Length = fVar13 + fVar13;
  }
  return;
}

// execGetScaledCapsuleHalfHeight @ 147882aa0

void __cdecl
UCapsuleComponent::execGetScaledCapsuleHalfHeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(float *)param_3 =
       (float)*(double *)&param_1[0xe].field_0x10 * *(float *)&param_1[0x22].field_0x18;
  return;
}

// execGetScaledCapsuleHalfHeight_WithoutHemisphere @ 147882ae0

void __cdecl
UCapsuleComponent::execGetScaledCapsuleHalfHeight_WithoutHemisphere
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar1 = *(double *)&param_1[0xe].field_0x8;
  if (*(double *)(param_1 + 0xe) <= *(double *)&param_1[0xe].field_0x8) {
    dVar1 = *(double *)(param_1 + 0xe);
  }
  *(float *)param_3 =
       (float)*(double *)&param_1[0xe].field_0x10 * *(float *)&param_1[0x22].field_0x18 -
       (float)dVar1 * *(float *)&param_1[0x22].field_0x1c;
  return;
}

// execGetScaledCapsuleRadius @ 147882b40

void __cdecl
UCapsuleComponent::execGetScaledCapsuleRadius(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar1 = *(double *)&param_1[0xe].field_0x8;
  if (*(double *)(param_1 + 0xe) <= *(double *)&param_1[0xe].field_0x8) {
    dVar1 = *(double *)(param_1 + 0xe);
  }
  *(float *)param_3 = (float)dVar1 * *(float *)&param_1[0x22].field_0x1c;
  return;
}

// execGetScaledCapsuleSize @ 147882b90

void __cdecl
UCapsuleComponent::execGetScaledCapsuleSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float *pfVar2;
  float *pfVar3;
  double dVar4;
  float local_res8 [2];
  float local_res10 [2];
  
  local_res8[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pfVar2 = (float *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar3 = local_res8;
  if (pfVar2 != (float *)0x0) {
    pfVar3 = pfVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pfVar2 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar2 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar4 = *(double *)&param_1[0xe].field_0x8;
  if (*(double *)(param_1 + 0xe) <= *(double *)&param_1[0xe].field_0x8) {
    dVar4 = *(double *)(param_1 + 0xe);
  }
  *pfVar3 = (float)dVar4 * *(float *)&param_1[0x22].field_0x1c;
  *pfVar2 = (float)*(double *)&param_1[0xe].field_0x10 * *(float *)&param_1[0x22].field_0x18;
  return;
}

// execGetScaledCapsuleSize_WithoutHemisphere @ 147882cb0

void __cdecl
UCapsuleComponent::execGetScaledCapsuleSize_WithoutHemisphere
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float *pfVar2;
  float *pfVar3;
  double dVar4;
  float local_res8 [2];
  float local_res10 [2];
  
  local_res8[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pfVar2 = (float *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar3 = local_res8;
  if (pfVar2 != (float *)0x0) {
    pfVar3 = pfVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pfVar2 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar2 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar4 = *(double *)&param_1[0xe].field_0x8;
  if (*(double *)(param_1 + 0xe) <= *(double *)&param_1[0xe].field_0x8) {
    dVar4 = *(double *)(param_1 + 0xe);
  }
  *pfVar3 = (float)dVar4 * *(float *)&param_1[0x22].field_0x1c;
  dVar4 = *(double *)&param_1[0xe].field_0x8;
  if (*(double *)(param_1 + 0xe) <= *(double *)&param_1[0xe].field_0x8) {
    dVar4 = *(double *)(param_1 + 0xe);
  }
  *pfVar2 = (float)*(double *)&param_1[0xe].field_0x10 * *(float *)&param_1[0x22].field_0x18 -
            (float)dVar4 * *(float *)&param_1[0x22].field_0x1c;
  return;
}

// execGetShapeScale @ 147882df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UCapsuleComponent::execGetShapeScale(UObject *param_1,FFrame *param_2,void *param_3)

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

// execGetUnscaledCapsuleHalfHeight @ 147882eb0

void __cdecl
UCapsuleComponent::execGetUnscaledCapsuleHalfHeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x22].field_0x18;
  return;
}

// execGetUnscaledCapsuleHalfHeight_WithoutHemisphere @ 147882ee0

void __cdecl
UCapsuleComponent::execGetUnscaledCapsuleHalfHeight_WithoutHemisphere
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(float *)param_3 = *(float *)&param_1[0x22].field_0x18 - *(float *)&param_1[0x22].field_0x1c;
  return;
}

// execGetUnscaledCapsuleRadius @ 147882f20

void __cdecl
UCapsuleComponent::execGetUnscaledCapsuleRadius(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x22].field_0x1c;
  return;
}

// execGetUnscaledCapsuleSize @ 147882f50

void __cdecl
UCapsuleComponent::execGetUnscaledCapsuleSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar local_res8 [8];
  uchar local_res10 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar5 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar6 = local_res8;
  if (puVar5 != (uchar *)0x0) {
    puVar6 = puVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = param_1[0x22].field_0x1d;
  uVar3 = param_1[0x22].field_0x1e;
  uVar4 = param_1[0x22].field_0x1f;
  puVar6[0] = param_1[0x22].field_0x1c;
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  uVar2 = param_1[0x22].field_0x19;
  uVar3 = param_1[0x22].field_0x1a;
  uVar4 = param_1[0x22].field_0x1b;
  puVar5[0] = param_1[0x22].field_0x18;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  return;
}

// execGetUnscaledCapsuleSize_WithoutHemisphere @ 147883040

void __cdecl
UCapsuleComponent::execGetUnscaledCapsuleSize_WithoutHemisphere
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar *puVar1;
  FProperty *pFVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  float *pfVar6;
  uchar *puVar7;
  uchar local_res8 [8];
  float local_res10 [2];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar7 = local_res8;
  if (puVar1 != (uchar *)0x0) {
    puVar7 = puVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pfVar6 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar6 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = param_1[0x22].field_0x1d;
  uVar4 = param_1[0x22].field_0x1e;
  uVar5 = param_1[0x22].field_0x1f;
  puVar7[0] = param_1[0x22].field_0x1c;
  puVar7[1] = uVar3;
  puVar7[2] = uVar4;
  puVar7[3] = uVar5;
  *pfVar6 = *(float *)&param_1[0x22].field_0x18 - *(float *)&param_1[0x22].field_0x1c;
  return;
}

// execSetCapsuleHalfHeight @ 147884ec0

void __cdecl
UCapsuleComponent::execSetCapsuleHalfHeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  float local_res10 [2];
  
  local_res10[0] = 0.0;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetCapsuleSize((UCapsuleComponent *)param_1,*(float *)&param_1[0x22].field_0x1c,local_res10[0],
                 local_res8[0] != 0);
  return;
}

// execSetCapsuleRadius @ 147884fa0

void __cdecl UCapsuleComponent::execSetCapsuleRadius(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  float local_res10 [2];
  
  local_res10[0] = 0.0;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetCapsuleSize((UCapsuleComponent *)param_1,local_res10[0],*(float *)&param_1[0x22].field_0x18,
                 local_res8[0] != 0);
  return;
}

// execSetCapsuleSize @ 147885080

void __cdecl UCapsuleComponent::execSetCapsuleSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  float local_res20 [2];
  float local_18 [4];
  
  local_18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetCapsuleSize((UCapsuleComponent *)param_1,local_18[0],local_res20[0],local_res10[0] != 0);
  return;
}

