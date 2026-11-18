// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticClass @ 147f91c70

UClass * __cdecl ANavigationObjectBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavigationObjectBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavigationObjectBase",
               &Z_Registration_Info_UClass_ANavigationObjectBase.InnerSingleton,
               StaticRegisterNativesANavigationObjectBase,0x2e8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ANavigationObjectBase>,
               InternalVTableHelperCtorCaller<ANavigationObjectBase>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavigationObjectBase.InnerSingleton;
}

// ANavigationObjectBase @ 147fa35b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANavigationObjectBase * __thiscall
ANavigationObjectBase::ANavigationObjectBase(ANavigationObjectBase *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  (this->CapsuleComponent).field0_0x0.DebugPtr = (UCapsuleComponent *)0x0;
  (this->GoodSprite).field0_0x0.DebugPtr = (UBillboardComponent *)0x0;
  (this->BadSprite).field0_0x0.DebugPtr = (UBillboardComponent *)0x0;
  return this;
}

// ANavigationObjectBase @ 147fa3600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANavigationObjectBase * __thiscall
ANavigationObjectBase::ANavigationObjectBase
          (ANavigationObjectBase *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UCapsuleComponent *pUVar5;
  UBillboardComponent *pUVar6;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  (this->CapsuleComponent).field0_0x0.DebugPtr = (UCapsuleComponent *)0x0;
  (this->GoodSprite).field0_0x0.DebugPtr = (UBillboardComponent *)0x0;
  (this->BadSprite).field0_0x0.DebugPtr = (UBillboardComponent *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"CollisionCapsule");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
  pUVar5 = (UCapsuleComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UCapsuleComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->CapsuleComponent).field0_0x0.DebugPtr = pUVar5;
  local_res8.ComparisonIndex.Value = 0xffff8a05;
  *(undefined4 *)&pUVar5->_padding_ = 0xffff8a05;
  pbVar1 = (byte *)((longlong)&((this->CapsuleComponent).field0_0x0.DebugPtr)->_padding_ + 4);
  *pbVar1 = *pbVar1 | 1;
  pUVar5 = (this->CapsuleComponent).field0_0x0.DebugPtr;
  pUVar5->CapsuleRadius = 50.0;
  pUVar5->CapsuleHalfHeight = 50.0;
  pUVar5 = (this->CapsuleComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar5->_padding_ + 0x788))(pUVar5,UCollisionProfile::NoCollision_ProfileName,1);
  pbVar1 = (byte *)((longlong)&((this->CapsuleComponent).field0_0x0.DebugPtr)->_padding_ + 4);
  *pbVar1 = *pbVar1 | 2;
  USceneComponent::SetShouldUpdatePhysicsVolume
            ((USceneComponent *)(this->CapsuleComponent).field0_0x0.DebugPtr,true);
  *(undefined1 *)((longlong)&((this->CapsuleComponent).field0_0x0.DebugPtr)->_padding_ + 3) = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (this->CapsuleComponent).field0_0x0.DebugPtr, pUVar5 != (UCapsuleComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->_padding_ = (longlong)(this->CapsuleComponent).field0_0x0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 0x10;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 3;
  pFVar3 = ::FName::FName(&local_res8,L"Sprite");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UBillboardComponent_NoRegister();
  pUVar6 = (UBillboardComponent *)
           UObject::CreateEditorOnlyDefaultSubobjectImpl((UObject *)this,FVar2,pUVar4,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UBillboardComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->GoodSprite).field0_0x0.DebugPtr = pUVar6;
  pFVar3 = ::FName::FName(&local_res8,L"Sprite2");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UBillboardComponent_NoRegister();
  pUVar6 = (UBillboardComponent *)
           UObject::CreateEditorOnlyDefaultSubobjectImpl((UObject *)this,FVar2,pUVar4,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UBillboardComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->BadSprite).field0_0x0.DebugPtr = pUVar6;
  return this;
}

// ~ANavigationObjectBase @ 147fa8b20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANavigationObjectBase::~ANavigationObjectBase(ANavigationObjectBase *this)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&___7INavAgentInterface__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// FindBase @ 147fcbbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANavigationObjectBase::FindBase(ANavigationObjectBase *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  UCapsuleComponent *pUVar3;
  longlong lVar4;
  UBillboardComponent *pUVar5;
  bool bVar6;
  char cVar7;
  UWorld *pUVar8;
  FName *pFVar9;
  FCollisionQueryParams *pFVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStackY_2a8 [32];
  FCollisionObjectQueryParams local_248;
  FCollisionShape local_240;
  double local_230;
  TVector<double>_u_0 local_228;
  undefined4 uStack_210;
  undefined1 uStack_20c;
  undefined2 uStack_20b;
  undefined1 uStack_209;
  TStatId local_208;
  FName local_200;
  TVector<double> local_1f8;
  FHitResult local_1d8;
  FCollisionQueryParams local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  pUVar8 = AActor::GetWorld((AActor *)this);
  bVar6 = UWorld::HasBegunPlay(pUVar8);
  if ((!bVar6) && (cVar7 = (**(code **)(this->_padding_ + 0x760))(this), cVar7 != '\0')) {
    memset(&local_1d8,0,0x100);
    pUVar3 = (this->CapsuleComponent).field0_0x0.DebugPtr;
    lVar4 = this->_padding_;
    uStack_20b = 0;
    uStack_209 = 0;
    uStack_210 = 0xffffffff;
    uStack_20c = 0;
    local_1d8.MyItem = -1;
    local_1d8.Time = 1.0;
    local_1d8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
    local_1d8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
    local_1d8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
    local_1d8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
    local_1d8.HitObjectHandle.InstanceIndex = -1;
    local_1d8.HitObjectHandle.ResolutionStatus = Invalid;
    local_1d8.HitObjectHandle._29_3_ = 0;
    local_1d8.HitObjectHandle.ManagerInterface.InterfaceInstance =
         (IActorInstanceManagerInterface *)0x0;
    uVar1 = pUVar3->_padding_;
    uVar2 = pUVar3->_padding_;
    uVar12 = (int)uVar2;
    uVar13 = (int)((ulonglong)uVar2 >> 0x20);
    if ((double)uVar1 <= (double)uVar2) {
      uVar12 = (int)uVar1;
      uVar13 = (int)((ulonglong)uVar1 >> 0x20);
    }
    fVar11 = (float)(double)CONCAT44(uVar13,uVar12) * pUVar3->CapsuleRadius;
    if (lVar4 == 0) {
      local_230 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1f8.field0_0x0._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_1f8.field0_0x0._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_1f8.field0_0x0._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_1f8.field0_0x0._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_228._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_228._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_228._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_228._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_228._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      local_228._0_4_ = *(undefined4 *)(lVar4 + 0x210);
      local_228._4_4_ = *(undefined4 *)(lVar4 + 0x214);
      local_228._8_4_ = *(undefined4 *)(lVar4 + 0x218);
      local_228._12_4_ = *(undefined4 *)(lVar4 + 0x21c);
      local_228._s_0.Z = *(double *)(lVar4 + 0x220);
      local_230 = *(double *)(lVar4 + 0x220);
      local_1f8.field0_0x0._8_4_ = *(undefined4 *)(lVar4 + 0x218);
      local_1f8.field0_0x0._12_4_ = *(undefined4 *)(lVar4 + 0x21c);
      local_1f8.field0_0x0._0_4_ = *(undefined4 *)(lVar4 + 0x210);
      local_1f8.field0_0x0._4_4_ = *(undefined4 *)(lVar4 + 0x214);
    }
    local_1f8.field0_0x0._s_0.Z =
         local_230 -
         (double)((float)(double)pUVar3->_padding_ * pUVar3->CapsuleHalfHeight * __real_40800000);
    pUVar8 = AActor::GetWorld((AActor *)this);
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_NavFindBase =
           (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_ANavigationObjectBase::FindBase(void)_::_8_::<lambda_2>::operator()(void)const_::_2_::FStat_NavFindBase>
            )0x0;
      pFVar9 = ::FName::FName(&local_200,"NavFindBase");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_NavFindBase,*pFVar9,L"NavFindBase",
                 "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,
                 true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_208.StatIdPtr = (TStatIdData *)StatPtr_NavFindBase;
    if (StatPtr_NavFindBase ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_ANavigationObjectBase::FindBase(void)_::_8_::<lambda_2>::operator()(void)const_::_2_::FStat_NavFindBase>
         )0x0) {
      pFVar9 = ::FName::FName(&local_200,"NavFindBase");
      local_208.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_NavFindBase,*pFVar9,L"NavFindBase",
                      "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,
                      ST_int64,true,false,MCR_Invalid);
    }
    if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"NavFindBase");
      _Init_thread_footer(&::_TSS0);
    }
    pFVar10 = FCollisionQueryParams::FCollisionQueryParams
                        (&local_d8,::StaticName,&local_208,false,(AActor *)0x0);
    local_240.ShapeType = Box;
    local_240.field1_0x4.Box.HalfExtentZ = 1.0;
    local_248.ObjectTypesToQuery = 1;
    local_248.IgnoreMask = '\0';
    local_240.field1_0x4.Box.HalfExtentX = fVar11;
    local_240.field1_0x4.Box.HalfExtentY = fVar11;
    UWorld::SweepSingleByObjectType
              (pUVar8,&local_1d8,(TVector<double> *)&local_228._s_0,&local_1f8,
               &UE::Math::TQuat<double>::Identity,&local_248,&local_240,pFVar10);
    if (local_d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_d8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_d8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
    pUVar5 = (this->GoodSprite).field0_0x0.DebugPtr;
    if (pUVar5 != (UBillboardComponent *)0x0) {
      USceneComponent::SetVisibility((USceneComponent *)pUVar5,true,DirtyOnly);
    }
    pUVar5 = (this->BadSprite).field0_0x0.DebugPtr;
    if (pUVar5 != (UBillboardComponent *)0x0) {
      USceneComponent::SetVisibility((USceneComponent *)pUVar5,false,DirtyOnly);
    }
  }
  return;
}

// GetMoveGoalReachTest @ 147fd3990

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
ANavigationObjectBase::GetMoveGoalReachTest
          (ANavigationObjectBase *this,AActor *param_1,TVector<double> *param_2,
          TVector<double> *param_3,float *param_4,float *param_5)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_3->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y = (double)uVar1;
  (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                    /* WARNING: Could not recover jumptable at 0x000147fd39bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this[-1]._padding_ + 0x688))(&this[-1]._padding_,param_4,param_5);
  return;
}

// GetNavAgentLocation @ 147fd3a70

TVector<double> * __thiscall
ANavigationObjectBase::GetNavAgentLocation
          (ANavigationObjectBase *this,TVector<double> *__return_storage_ptr__)

{
  longlong lVar1;
  double local_28;
  double dStack_20;
  double local_18;
  
  lVar1 = this[-1]._padding_;
  if (lVar1 == 0) {
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    local_28 = *(double *)(lVar1 + 0x210);
    dStack_20 = *(double *)(lVar1 + 0x218);
    local_18 = *(double *)(lVar1 + 0x220);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
  return __return_storage_ptr__;
}

// GetNavPhysicsVolume @ 147fd3b70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APhysicsVolume * __thiscall ANavigationObjectBase::GetNavPhysicsVolume(ANavigationObjectBase *this)

{
  UCapsuleComponent *this_00;
  APhysicsVolume *pAVar1;
  UWorld *this_01;
  
  this_00 = (this->CapsuleComponent).field0_0x0.DebugPtr;
  if (this_00 != (UCapsuleComponent *)0x0) {
    pAVar1 = USceneComponent::GetPhysicsVolume((USceneComponent *)this_00);
    return pAVar1;
  }
  this_01 = AActor::GetWorld((AActor *)this);
  pAVar1 = (this_01->DefaultPhysicsVolume).field0_0x0.DebugPtr;
  if (pAVar1 == (APhysicsVolume *)0x0) {
    pAVar1 = UWorld::InternalGetDefaultPhysicsVolume(this_01);
    return pAVar1;
  }
  return pAVar1;
}

// GetPrivateStaticClass @ 147fd5fd0

UClass * __cdecl ANavigationObjectBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavigationObjectBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavigationObjectBase",
               &Z_Registration_Info_UClass_ANavigationObjectBase.InnerSingleton,
               StaticRegisterNativesANavigationObjectBase,0x2e8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ANavigationObjectBase>,
               InternalVTableHelperCtorCaller<ANavigationObjectBase>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavigationObjectBase.InnerSingleton;
}

// GetSimpleCollisionCylinder @ 147fd6e80

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
ANavigationObjectBase::GetSimpleCollisionCylinder
          (ANavigationObjectBase *this,float *param_1,float *param_2)

{
  UCapsuleComponent *pUVar1;
  char cVar2;
  double dVar3;
  
  if ((UCapsuleComponent *)this->_padding_ == (this->CapsuleComponent).field0_0x0.DebugPtr) {
    cVar2 = (**(code **)(this->_padding_ + 0x690))();
    if (cVar2 != '\0') {
      pUVar1 = (this->CapsuleComponent).field0_0x0.DebugPtr;
      dVar3 = (double)pUVar1->_padding_;
      if ((double)pUVar1->_padding_ <= (double)pUVar1->_padding_) {
        dVar3 = (double)pUVar1->_padding_;
      }
      *param_1 = (float)dVar3 * pUVar1->CapsuleRadius;
      *param_2 = (float)(double)pUVar1->_padding_ * pUVar1->CapsuleHalfHeight;
      return;
    }
  }
  AActor::GetSimpleCollisionCylinder((AActor *)this,param_1,param_2);
  return;
}

// ShouldBeBased @ 147ff7790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ANavigationObjectBase::ShouldBeBased(ANavigationObjectBase *this)

{
  UCapsuleComponent *this_00;
  APhysicsVolume *pAVar1;
  UWorld *this_01;
  
  this_00 = (this->CapsuleComponent).field0_0x0.DebugPtr;
  if (this_00 == (UCapsuleComponent *)0x0) {
    this_01 = AActor::GetWorld((AActor *)this);
    pAVar1 = (this_01->DefaultPhysicsVolume).field0_0x0.DebugPtr;
    if (pAVar1 == (APhysicsVolume *)0x0) {
      pAVar1 = UWorld::InternalGetDefaultPhysicsVolume(this_01);
      goto LAB_147ff77c8;
    }
  }
  else {
    pAVar1 = USceneComponent::GetPhysicsVolume((USceneComponent *)this_00);
LAB_147ff77c8:
    if (pAVar1 == (APhysicsVolume *)0x0) goto LAB_147ff77d6;
  }
  if (pAVar1->bWaterVolume != 0) {
    return false;
  }
LAB_147ff77d6:
  if ((this->CapsuleComponent).field0_0x0.DebugPtr == (UCapsuleComponent *)0x0) {
    return false;
  }
  return true;
}

// StaticRegisterNativesANavigationObjectBase @ 147ff87d0

void __cdecl ANavigationObjectBase::StaticRegisterNativesANavigationObjectBase(void)

{
  return;
}

// Validate @ 148000610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANavigationObjectBase::Validate(ANavigationObjectBase *this)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  UCapsuleComponent *pUVar5;
  code *pcVar6;
  UBillboardComponent *pUVar7;
  undefined8 uVar8;
  char cVar9;
  UWorld *this_00;
  FName *pFVar10;
  FCollisionQueryParams *pFVar11;
  TRotator<double> *pTVar12;
  bool bVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  undefined1 auStackY_2f8 [32];
  undefined1 local_298 [8];
  float local_290;
  undefined4 uStack_28c;
  double local_288;
  TRotator<double> local_278;
  undefined4 uStack_260;
  undefined1 uStack_25c;
  undefined2 uStack_25b;
  undefined1 uStack_259;
  TVector<double>_u_0 local_258;
  TStatId local_240;
  FName local_238;
  TVector<double>_u_0 local_230;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  double local_208;
  FHitResult local_1f8;
  FCollisionQueryParams local_f8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  cVar9 = (**(code **)(this->_padding_ + 0x760))();
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  if ((cVar9 != '\0') &&
     (((this->GoodSprite).field0_0x0.DebugPtr != (UBillboardComponent *)0x0 ||
      ((this->BadSprite).field0_0x0.DebugPtr != (UBillboardComponent *)0x0)))) {
    lVar4 = this->_padding_;
    puVar1 = (undefined4 *)(lVar4 + 0x210);
    local_218 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uStack_214 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uStack_210 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uStack_20c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_208 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar4 != 0) {
      local_218 = *puVar1;
      uStack_214 = *(undefined4 *)(lVar4 + 0x214);
      uStack_210 = *(undefined4 *)(lVar4 + 0x218);
      uStack_20c = *(undefined4 *)(lVar4 + 0x21c);
      local_208 = *(double *)(lVar4 + 0x220);
    }
    pUVar5 = (this->CapsuleComponent).field0_0x0.DebugPtr;
    bVar13 = true;
    uVar2 = pUVar5->_padding_;
    uVar3 = pUVar5->_padding_;
    local_278.Roll = (double)pUVar5->_padding_;
    uVar17 = (int)uVar3;
    uVar19 = (int)((ulonglong)uVar3 >> 0x20);
    if ((double)uVar2 <= (double)uVar3) {
      uVar17 = (int)uVar2;
      uVar19 = (int)((ulonglong)uVar2 >> 0x20);
    }
    fVar14 = (float)(double)CONCAT44(uVar19,uVar17) * pUVar5->CapsuleRadius;
    memset(&local_1f8,0,0x100);
    uStack_260 = 0xffffffff;
    uStack_25b = 0;
    uStack_259 = 0;
    uStack_25c = 0;
    local_1f8.Time = 1.0;
    local_1f8.MyItem = -1;
    local_1f8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
    local_1f8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
    local_1f8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
    local_1f8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
    local_1f8.HitObjectHandle.InstanceIndex = -1;
    local_1f8.HitObjectHandle.ResolutionStatus = Invalid;
    local_1f8.HitObjectHandle._29_3_ = 0;
    local_1f8.HitObjectHandle.ManagerInterface.InterfaceInstance =
         (IActorInstanceManagerInterface *)0x0;
    if (lVar4 == 0) {
      local_288 = (double)uVar8;
      local_230._0_4_ = uVar15;
      local_230._4_4_ = uVar16;
      local_230._8_4_ = uVar18;
      local_230._12_4_ = uVar20;
      local_230._s_0.Z = (double)uVar8;
    }
    else {
      local_288 = *(double *)(lVar4 + 0x220);
      uVar15 = *puVar1;
      uVar16 = *(undefined4 *)(lVar4 + 0x214);
      uVar18 = *(undefined4 *)(lVar4 + 0x218);
      uVar20 = *(undefined4 *)(lVar4 + 0x21c);
      local_230._0_4_ = *puVar1;
      local_230._4_4_ = *(undefined4 *)(lVar4 + 0x214);
      local_230._8_4_ = *(undefined4 *)(lVar4 + 0x218);
      local_230._12_4_ = *(undefined4 *)(lVar4 + 0x21c);
      local_230._s_0.Z = *(double *)(lVar4 + 0x220);
    }
    local_278.Roll = (double)pUVar5->_padding_;
    local_278.Pitch = (double)pUVar5->_padding_;
    local_278.Yaw = (double)pUVar5->_padding_;
    local_258._s_0.X = (double)CONCAT44(uVar16,uVar15);
    local_258._s_0.Y = (double)CONCAT44(uVar20,uVar18);
    local_258._s_0.Z =
         local_288 - (double)((float)local_278.Roll * pUVar5->CapsuleHalfHeight * __real_40800000);
    this_00 = AActor::GetWorld((AActor *)this);
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_NavObjectBase_Validate =
           (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_ANavigationObjectBase::Validate(void)_::_5_::<lambda_2>::operator()(void)const_::_2_::FStat_NavObjectBase_Validate>
            )0x0;
      pFVar10 = ::FName::FName(&local_238,"NavObjectBase_Validate");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_NavObjectBase_Validate,*pFVar10,
                 L"NavObjectBase_Validate","STATGROUP_CollisionTags","STATCAT_Advanced",
                 L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_240.StatIdPtr = (TStatIdData *)StatPtr_NavObjectBase_Validate;
    if (StatPtr_NavObjectBase_Validate ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_ANavigationObjectBase::Validate(void)_::_5_::<lambda_2>::operator()(void)const_::_2_::FStat_NavObjectBase_Validate>
         )0x0) {
      pFVar10 = ::FName::FName(&local_238,"NavObjectBase_Validate");
      local_240.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_NavObjectBase_Validate,*pFVar10,
                      L"NavObjectBase_Validate","STATGROUP_CollisionTags","STATCAT_Advanced",
                      L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
    }
    if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"NavObjectBase_Validate");
      _Init_thread_footer(&::_TSS0);
    }
    pFVar11 = FCollisionQueryParams::FCollisionQueryParams
                        (&local_f8,::StaticName,&local_240,false,(AActor *)this);
    local_298._4_4_ = fVar14;
    local_298._0_4_ = 1;
    uStack_28c = 0x3f800000;
    local_290 = fVar14;
    UWorld::SweepSingleByChannel
              (this_00,&local_1f8,(TVector<double> *)&local_230._s_0,
               (TVector<double> *)&local_258._s_0,&UE::Math::TQuat<double>::Identity,ECC_Pawn,
               (FCollisionShape *)local_298,pFVar11,&FCollisionResponseParams::DefaultResponseParam)
    ;
    if (local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_f8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_f8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
    if (local_1f8.bBlockingHit != 0) {
      pUVar5 = (this->CapsuleComponent).field0_0x0.DebugPtr;
      local_278.Roll = (double)pUVar5->_padding_;
      local_278.Pitch = (double)pUVar5->_padding_;
      local_278.Yaw = (double)pUVar5->_padding_;
      dVar21 = (double)local_1f8.Time;
      pcVar6 = *(code **)(this->_padding_ + 0x5f8);
      local_298 = (undefined1  [8])
                  ((local_258._s_0.X - (double)CONCAT44(local_230._4_4_,local_230._0_4_)) * dVar21 +
                  (double)CONCAT44(local_230._4_4_,local_230._0_4_));
      local_288 = (local_258._s_0.Z - local_230._s_0.Z) * dVar21 + local_230._s_0.Z +
                  (double)((float)local_278.Roll * pUVar5->CapsuleHalfHeight - __real_40000000);
      _local_290 = (local_258._s_0.Y - (double)CONCAT44(local_230._12_4_,local_230._8_4_)) * dVar21
                   + (double)CONCAT44(local_230._12_4_,local_230._8_4_);
      pTVar12 = AActor::GetActorRotation((AActor *)this,&local_278);
      (*pcVar6)(this,local_298,pTVar12,0);
      lVar4 = this->_padding_;
      if (lVar4 == 0) {
        uVar15 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar16 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      }
      else {
        uVar15 = *(undefined4 *)(lVar4 + 0x220);
        uVar16 = *(undefined4 *)(lVar4 + 0x224);
        uVar18 = *(undefined4 *)(lVar4 + 0x210);
        uVar20 = *(undefined4 *)(lVar4 + 0x214);
        uVar17 = *(undefined4 *)(lVar4 + 0x218);
        uVar19 = *(undefined4 *)(lVar4 + 0x21c);
      }
      local_278.Roll = (double)CONCAT44(uVar16,uVar15);
      if ((((double)CONCAT44(uVar20,uVar18) != (double)CONCAT44(uStack_214,local_218)) ||
          ((double)CONCAT44(uVar19,uVar17) != (double)CONCAT44(uStack_20c,uStack_210))) ||
         (bVar13 = true, local_208 < local_278.Roll)) {
        bVar13 = false;
      }
      pcVar6 = *(code **)(this->_padding_ + 0x5f8);
      pTVar12 = AActor::GetActorRotation((AActor *)this,&local_278);
      (*pcVar6)(this,&local_218,pTVar12,0);
    }
    pUVar7 = (this->GoodSprite).field0_0x0.DebugPtr;
    if (pUVar7 != (UBillboardComponent *)0x0) {
      USceneComponent::SetVisibility((USceneComponent *)pUVar7,bVar13,DirtyOnly);
    }
    pUVar7 = (this->BadSprite).field0_0x0.DebugPtr;
    if (pUVar7 != (UBillboardComponent *)0x0) {
      USceneComponent::SetVisibility((USceneComponent *)pUVar7,(bool)(bVar13 ^ 1),DirtyOnly);
    }
  }
  AActor::MarkComponentsRenderStateDirty((AActor *)this);
  return;
}

// _getUObject @ 1480026f0

UObject * __thiscall ANavigationObjectBase::_getUObject(ANavigationObjectBase *this)

{
  return (UObject *)&this[-1]._padding_;
}

