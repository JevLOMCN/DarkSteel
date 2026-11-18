// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// StaticClass @ 14731ee60

UClass * __cdecl UPhysicsSpringComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsSpringComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsSpringComponent",
               &Z_Registration_Info_UClass_UPhysicsSpringComponent.InnerSingleton,
               StaticRegisterNativesUPhysicsSpringComponent,0x280,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPhysicsSpringComponent>,
               InternalVTableHelperCtorCaller<UPhysicsSpringComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsSpringComponent.InnerSingleton;
}

// UPhysicsSpringComponent @ 147324920

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPhysicsSpringComponent * __thiscall
UPhysicsSpringComponent::UPhysicsSpringComponent
          (UPhysicsSpringComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UPhysicsSpringComponent @ 147325180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPhysicsSpringComponent::~UPhysicsSpringComponent(UPhysicsSpringComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// GetPrivateStaticClass @ 147326ea0

UClass * __cdecl UPhysicsSpringComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsSpringComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsSpringComponent",
               &Z_Registration_Info_UClass_UPhysicsSpringComponent.InnerSingleton,
               StaticRegisterNativesUPhysicsSpringComponent,0x280,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPhysicsSpringComponent>,
               InternalVTableHelperCtorCaller<UPhysicsSpringComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsSpringComponent.InnerSingleton;
}

// StaticRegisterNativesUPhysicsSpringComponent @ 1473281b0

void __cdecl UPhysicsSpringComponent::StaticRegisterNativesUPhysicsSpringComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UPhysicsSpringComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetNormalizedCompressionScalar @ 14732a1d0

void __cdecl
UPhysicsSpringComponent::execGetNormalizedCompressionScalar
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetNormalizedCompressionScalar((UPhysicsSpringComponent *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetSpringCurrentEndPoint @ 14732a390

void __cdecl
UPhysicsSpringComponent::execGetSpringCurrentEndPoint
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  TVector<double> *pTVar2;
  TVector<double> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetSpringCurrentEndPoint((UPhysicsSpringComponent *)param_1,&local_28);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar2->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar1;
  *(double *)((longlong)param_3 + 0x10) = (pTVar2->field0_0x0)._s_0.Z;
  return;
}

// execGetSpringDirection @ 14732a3e0

void __cdecl
UPhysicsSpringComponent::execGetSpringDirection(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  TVector<double> *pTVar2;
  TVector<double> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetSpringDirection((UPhysicsSpringComponent *)param_1,&local_28);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar2->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar1;
  *(double *)((longlong)param_3 + 0x10) = (pTVar2->field0_0x0)._s_0.Z;
  return;
}

// execGetSpringRestingPoint @ 14732a430

void __cdecl
UPhysicsSpringComponent::execGetSpringRestingPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  TVector<double> *pTVar2;
  TVector<double> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetSpringRestingPoint((UPhysicsSpringComponent *)param_1,&local_28);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar2->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar1;
  *(double *)((longlong)param_3 + 0x10) = (pTVar2->field0_0x0)._s_0.Z;
  return;
}

// UPhysicsSpringComponent @ 1482dc5d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPhysicsSpringComponent * __thiscall
UPhysicsSpringComponent::UPhysicsSpringComponent
          (UPhysicsSpringComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined1 *)&this->_padding_ = 4;
  this->SpringStiffness = 25.0;
  this->SpringDamping = 3.0;
  this->SpringLengthAtRest = 100.0;
  this->SpringRadius = 10.0;
  this->SpringChannel = '\x01';
  this->bIgnoreSelf = true;
  this->SpringCompression = 0.0;
  return this;
}

// ComputeNewSpringCompressionAndForce @ 1482eca00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UPhysicsSpringComponent::ComputeNewSpringCompressionAndForce
          (UPhysicsSpringComponent *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,float param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  double dVar19;
  double dVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  TVector<double>_u_0 local_78 [4];
  
  auVar6._0_8_ = this->_padding_;
  auVar6._8_8_ = this->_padding_;
  dVar3 = (double)this->_padding_;
  local_78[0]._s_0.Z = 0.0;
  local_78[0]._0_8_ = this->_padding_;
  local_78[0]._8_8_ = this->_padding_;
  dVar19 = (double)__xmm_00000000000000003ff0000000000000;
  dVar22 = __xmm_00000000000000003ff0000000000000._8_8_;
  auVar20._0_8_ = dVar22 * (double)local_78[0]._0_8_ - (double)local_78[0]._8_8_ * dVar19;
  auVar20._8_8_ = (double)local_78[0]._8_8_ * 0.0 - (double)auVar6._0_8_ * dVar22;
  auVar10 = blendpd(local_78[0]._0_16_,auVar6,2);
  auVar5 = blendpd(___xmm_00000000000000003ff0000000000000,ZEXT816(0),2);
  auVar11._0_8_ = auVar5._0_8_ * (double)auVar6._0_8_ - auVar10._0_8_ * 0.0;
  auVar11._8_8_ = auVar5._8_8_ * (double)auVar6._8_8_ - auVar10._8_8_ * 0.0;
  auVar5._0_8_ = this->_padding_;
  auVar5._8_8_ = this->_padding_;
  auVar10 = blendpd(auVar20,auVar11,2);
  dVar1 = auVar20._8_8_ + auVar20._8_8_;
  dVar2 = auVar11._0_8_ + auVar11._0_8_;
  uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar21._0_8_ = auVar10._0_8_ + auVar10._0_8_;
  auVar21._8_8_ = auVar10._8_8_ + auVar10._8_8_;
  auVar16._8_4_ = SUB84(dVar2,0);
  auVar16._0_8_ = dVar1;
  auVar16._12_4_ = uVar18;
  auVar13._8_4_ = SUB84(dVar2,0);
  auVar13._0_8_ = dVar1;
  auVar13._12_4_ = uVar18;
  auVar14 = blendpd(auVar13,auVar21,2);
  auVar11 = blendpd(auVar5,auVar6,2);
  auVar17._0_8_ = auVar16._8_8_ * (double)auVar5._0_8_ - (double)auVar5._8_8_ * dVar1;
  auVar17._8_8_ = auVar21._0_8_ * (double)auVar5._8_8_ - (double)auVar6._0_8_ * dVar2;
  auVar10._8_4_ = SUB84(auVar17._8_8_,0);
  auVar10._0_8_ = auVar17._0_8_;
  auVar10._12_4_ = (int)((ulonglong)auVar17._8_8_ >> 0x20);
  auVar15._0_8_ = auVar14._0_8_ * (double)auVar6._0_8_ - auVar11._0_8_ * auVar21._0_8_;
  auVar15._8_8_ = auVar14._8_8_ * (double)auVar6._8_8_ - auVar11._8_8_ * auVar21._8_8_;
  auVar5 = blendpd(auVar17,auVar15,2);
  SpringPositionFromLength(this,(TVector<double> *)&local_78[0]._s_0,this->SpringLengthAtRest);
  dVar8 = (param_1->field0_0x0)._s_0.Y - (double)local_78[0]._8_8_;
  dVar9 = (param_1->field0_0x0)._s_0.X - (double)local_78[0]._0_8_;
  dVar4 = (param_1->field0_0x0)._s_0.Z - (double)local_78[0]._16_8_;
  auVar14._0_8_ = dVar4 * dVar4;
  auVar14._8_8_ = 0;
  auVar12._0_8_ = dVar8 * dVar8 + dVar9 * dVar9 + auVar14._0_8_;
  auVar12._8_8_ = 0;
  auVar6 = sqrtpd(auVar14,auVar12);
  fVar7 = (float)auVar6._0_8_;
  *param_3 = fVar7;
  dVar9 = (double)(float)((uint)(((fVar7 - this->SpringCompression) / param_2) * this->SpringDamping
                                + fVar7 * this->SpringStiffness) ^
                         __xmm_80000000800000008000000080000000);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar9 * (dVar2 * dVar3 + dVar22 + auVar15._0_8_);
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar9 * (dVar1 * dVar3 + dVar19 + auVar10._8_8_);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar9 * (auVar21._0_8_ * dVar3 + auVar5._0_8_);
  return __return_storage_ptr__;
}

// GetNormalizedCompressionScalar @ 14830b390

float __thiscall
UPhysicsSpringComponent::GetNormalizedCompressionScalar(UPhysicsSpringComponent *this)

{
  float fVar1;
  
  fVar1 = this->SpringCompression / this->SpringLengthAtRest;
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}

// GetSpringCollision @ 14830d2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPrimitiveComponent * __thiscall
UPhysicsSpringComponent::GetSpringCollision
          (UPhysicsSpringComponent *this,TVector<double> *param_1,TVector<double> *param_2,
          float *param_3)

{
  longlong lVar1;
  double dVar2;
  bool bVar3;
  UWorld *this_00;
  FName *pFVar4;
  UPrimitiveComponent *pUVar5;
  UPrimitiveComponent *pUVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined1 auStackY_288 [32];
  FCollisionShape local_228;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined1 uStack_20c;
  undefined2 uStack_20b;
  undefined1 uStack_209;
  TStatId local_208;
  float *local_200;
  FHitResult local_1f8;
  FCollisionQueryParams local_f8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_288;
  this_00 = (UWorld *)this->_padding_;
  local_200 = param_3;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  pUVar5 = (UPrimitiveComponent *)0x0;
  pUVar6 = pUVar5;
  if (this->bIgnoreSelf != false) {
    pUVar6 = (UPrimitiveComponent *)this->_padding_;
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_SpringComponent =
         (FThreadSafeStaticStat<_public:___cdecl__private:_class_UPrimitiveComponent_*___cdecl_UPhysicsSpringComponent::GetSpringCollision(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,float_&)const_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_SpringComponent>
          )0x0;
    pFVar4 = ::FName::FName((FName *)&local_228,"SpringComponent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_SpringComponent,*pFVar4,L"SpringComponent",
               "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,true
               ,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  local_208.StatIdPtr = (TStatIdData *)StatPtr_SpringComponent;
  if (StatPtr_SpringComponent ==
      (FThreadSafeStaticStat<_public:___cdecl__private:_class_UPrimitiveComponent_*___cdecl_UPhysicsSpringComponent::GetSpringCollision(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,float_&)const_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_SpringComponent>
       )0x0) {
    pFVar4 = ::FName::FName((FName *)&local_228,"SpringComponent");
    local_208.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_SpringComponent,*pFVar4,L"SpringComponent"
                    ,"STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,
                    ST_int64,true,false,MCR_Invalid);
  }
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::StaticName,"SpringComponent");
    _Init_thread_footer(&::_TSS0);
  }
  FCollisionQueryParams::FCollisionQueryParams
            (&local_f8,::StaticName,&local_208,true,(AActor *)pUVar6);
  memset(&local_1f8,0,0x100);
  fVar9 = __real_3f800000;
  dVar8 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar7 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  local_1f8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_1f8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_1f8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_1f8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  uStack_20b = 0;
  uStack_209 = 0;
  local_218 = 0;
  uStack_210 = 0xffffffff;
  uStack_20c = 0;
  local_1f8.HitObjectHandle.InstanceIndex = -1;
  local_1f8.HitObjectHandle.ResolutionStatus = Invalid;
  local_1f8.HitObjectHandle._29_3_ = 0;
  local_1f8.Time = 1.0;
  local_1f8.MyItem = -1;
  local_1f8.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  dVar2 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  if (___real_24e69595 < (float)(dVar8 * dVar8 + dVar7 * dVar7 + dVar2 * dVar2)) {
    local_228.field1_0x4.Box.HalfExtentX = this->SpringRadius;
    local_228.ShapeType = Sphere;
    bVar3 = UWorld::SweepSingleByChannel
                      (this_00,&local_1f8,param_1,param_2,&UE::Math::TQuat<double>::Identity,
                       (uint)(this->SpringChannel).Value,&local_228,&local_f8,
                       &FCollisionResponseParams::DefaultResponseParam);
    if (bVar3) {
      pUVar5 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&local_1f8.Component.WeakPtr);
      if (pUVar5 != (UPrimitiveComponent *)0x0) {
        fVar9 = local_1f8.Time;
      }
      *local_200 = fVar9;
    }
  }
  if (local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_f8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_f8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return pUVar5;
}

// GetSpringCurrentEndPoint @ 14830d680

TVector<double> * __thiscall
UPhysicsSpringComponent::GetSpringCurrentEndPoint
          (UPhysicsSpringComponent *this,TVector<double> *__return_storage_ptr__)

{
  TVector<double>_u_0 local_28;
  
  if (this->SpringCompression == 0.0) {
    SpringPositionFromLength(this,(TVector<double> *)&local_28._s_0,this->SpringLengthAtRest);
  }
  else {
    local_28._s_0.X = (this->CurrentEndPoint).field0_0x0._s_0.X;
    local_28._s_0.Y = (this->CurrentEndPoint).field0_0x0._s_0.Y;
    local_28._s_0.Z = (this->CurrentEndPoint).field0_0x0._s_0.Z;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_28._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// GetSpringDirection @ 14830d6f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UPhysicsSpringComponent::GetSpringDirection
          (UPhysicsSpringComponent *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  auVar13._0_8_ = this->_padding_;
  auVar13._8_8_ = this->_padding_;
  dVar3 = (double)this->_padding_;
  auVar4._0_8_ = this->_padding_;
  auVar4._8_8_ = this->_padding_;
  dVar17 = __xmm_00000000000000003ff0000000000000._8_8_;
  auVar7 = blendpd(auVar4,auVar13,2);
  auVar15._0_8_ =
       dVar17 * (double)auVar4._0_8_ -
       (double)auVar4._8_8_ * (double)__xmm_00000000000000003ff0000000000000;
  auVar15._8_8_ = (double)auVar4._8_8_ * 0.0 - (double)auVar13._0_8_ * dVar17;
  auVar4 = blendpd(___xmm_00000000000000003ff0000000000000,ZEXT816(0),2);
  auVar5._0_8_ = auVar4._0_8_ * (double)auVar13._0_8_ - auVar7._0_8_ * 0.0;
  auVar5._8_8_ = auVar4._8_8_ * (double)auVar13._8_8_ - auVar7._8_8_ * 0.0;
  auVar7._0_8_ = this->_padding_;
  auVar7._8_8_ = this->_padding_;
  auVar4 = blendpd(auVar15,auVar5,2);
  dVar1 = auVar15._8_8_ + auVar15._8_8_;
  dVar2 = auVar5._0_8_ + auVar5._0_8_;
  uVar14 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar16._0_8_ = auVar4._0_8_ + auVar4._0_8_;
  auVar16._8_8_ = auVar4._8_8_ + auVar4._8_8_;
  auVar11._8_4_ = SUB84(dVar2,0);
  auVar11._0_8_ = dVar1;
  auVar11._12_4_ = uVar14;
  auVar8._8_4_ = SUB84(dVar2,0);
  auVar8._0_8_ = dVar1;
  auVar8._12_4_ = uVar14;
  auVar9 = blendpd(auVar8,auVar16,2);
  auVar12._0_8_ = auVar11._8_8_ * (double)auVar7._0_8_ - (double)auVar7._8_8_ * dVar1;
  auVar12._8_8_ = auVar16._0_8_ * (double)auVar7._8_8_ - (double)auVar13._0_8_ * dVar2;
  auVar6._8_4_ = SUB84(auVar12._8_8_,0);
  auVar6._0_8_ = auVar12._0_8_;
  auVar6._12_4_ = (int)((ulonglong)auVar12._8_8_ >> 0x20);
  auVar4 = blendpd(auVar7,auVar13,2);
  auVar10._0_8_ = auVar9._0_8_ * (double)auVar13._0_8_ - auVar4._0_8_ * auVar16._0_8_;
  auVar10._8_8_ = auVar9._8_8_ * (double)auVar13._8_8_ - auVar4._8_8_ * auVar16._8_8_;
  auVar13 = blendpd(auVar12,auVar10,2);
  dVar2 = dVar2 * dVar3 + dVar17 + auVar10._0_8_;
  auVar9._8_4_ = SUB84(dVar2,0);
  auVar9._0_8_ = dVar1 * dVar3 + (double)__xmm_00000000000000003ff0000000000000 + auVar6._8_8_;
  auVar9._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar16._0_8_ * dVar3 + auVar13._0_8_;
  return __return_storage_ptr__;
}

// GetSpringRestingPoint @ 14830d820

TVector<double> * __thiscall
UPhysicsSpringComponent::GetSpringRestingPoint
          (UPhysicsSpringComponent *this,TVector<double> *__return_storage_ptr__)

{
  SpringPositionFromLength(this,__return_storage_ptr__,this->SpringLengthAtRest);
  return __return_storage_ptr__;
}

// SpringPositionFromLength @ 148323810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UPhysicsSpringComponent::SpringPositionFromLength
          (UPhysicsSpringComponent *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  auVar16._0_8_ = this->_padding_;
  auVar16._8_8_ = this->_padding_;
  auVar4._0_8_ = this->_padding_;
  auVar4._8_8_ = this->_padding_;
  dVar1 = (double)this->_padding_;
  dVar2 = (double)this->_padding_;
  auVar8 = blendpd(auVar4,auVar16,2);
  dVar19 = __xmm_00000000000000003ff0000000000000._8_8_;
  dVar3 = (double)this->_padding_;
  auVar17._0_8_ =
       dVar19 * (double)auVar4._0_8_ -
       (double)auVar4._8_8_ * (double)__xmm_00000000000000003ff0000000000000;
  auVar17._8_8_ = (double)auVar4._8_8_ * 0.0 - (double)auVar16._0_8_ * dVar19;
  auVar4 = blendpd(___xmm_00000000000000003ff0000000000000,ZEXT816(0),2);
  auVar5._0_8_ = auVar4._0_8_ * (double)auVar16._0_8_ - auVar8._0_8_ * 0.0;
  auVar5._8_8_ = auVar4._8_8_ * (double)auVar16._8_8_ - auVar8._8_8_ * 0.0;
  auVar8._0_8_ = this->_padding_;
  auVar8._8_8_ = this->_padding_;
  auVar4 = blendpd(auVar17,auVar5,2);
  auVar18._0_8_ = auVar4._0_8_ + auVar4._0_8_;
  auVar18._8_8_ = auVar4._8_8_ + auVar4._8_8_;
  dVar11 = auVar17._8_8_ + auVar17._8_8_;
  dVar12 = auVar5._0_8_ + auVar5._0_8_;
  auVar14._8_4_ = SUB84(dVar12,0);
  auVar14._0_8_ = dVar11;
  uVar13 = (undefined4)((ulonglong)dVar12 >> 0x20);
  auVar14._12_4_ = uVar13;
  auVar9._8_4_ = SUB84(dVar12,0);
  auVar9._0_8_ = dVar11;
  auVar9._12_4_ = uVar13;
  auVar4 = blendpd(auVar8,auVar16,2);
  auVar15._0_8_ = auVar14._8_8_ * (double)auVar8._0_8_ - (double)auVar8._8_8_ * dVar11;
  auVar15._8_8_ = auVar18._0_8_ * (double)auVar8._8_8_ - (double)auVar16._0_8_ * dVar12;
  auVar8 = blendpd(auVar9,auVar18,2);
  auVar6._8_4_ = SUB84(auVar15._8_8_,0);
  auVar6._0_8_ = auVar15._0_8_;
  auVar6._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
  auVar10._0_8_ = auVar8._0_8_ * (double)auVar16._0_8_ - auVar4._0_8_ * auVar18._0_8_;
  auVar10._8_8_ = auVar8._8_8_ * (double)auVar16._8_8_ - auVar4._8_8_ * auVar18._8_8_;
  dVar7 = (double)param_1;
  auVar16 = blendpd(auVar15,auVar10,2);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar7 * (dVar1 * dVar11 + (double)__xmm_00000000000000003ff0000000000000 + auVar6._8_8_) +
       (double)this->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar7 * (dVar1 * auVar18._0_8_ + auVar16._0_8_) + dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       dVar7 * (dVar1 * dVar12 + dVar19 + auVar10._0_8_) + dVar2;
  return __return_storage_ptr__;
}

// TickComponent @ 148324780

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
UPhysicsSpringComponent::TickComponent
          (UPhysicsSpringComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  double dVar5;
  undefined1 auVar6 [16];
  UClass *pUVar7;
  UPrimitiveComponent *pUVar8;
  undefined8 *puVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float local_res8 [2];
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68 [3];
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    pUVar7 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar3 = (int)pUVar7->_padding_;
    if (((iVar3 <= *(int *)(plVar4[2] + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar3 * 8) ==
         &pUVar7->_padding_)) && ((this->_padding_ & 0x100000) != 0)) {
      local_a8._s_0.X = (double)this->_padding_;
      local_a8._s_0.Y = (double)this->_padding_;
      local_a8._s_0.Z = (double)this->_padding_;
      SpringPositionFromLength(this,(TVector<double> *)&local_68[0]._s_0,this->SpringLengthAtRest);
      local_res8[0] = 1.0;
      pUVar8 = GetSpringCollision(this,(TVector<double> *)&local_a8._s_0,
                                  (TVector<double> *)&local_68[0]._s_0,local_res8);
      dVar5 = (double)local_res8[0];
      dVar11 = ((double)local_68[0]._8_8_ - local_a8._s_0.Y) * dVar5 + local_a8._s_0.Y;
      local_c8._s_0.Z = ((double)local_68[0]._16_8_ - local_a8._s_0.Z) * dVar5 + local_a8._s_0.Z;
      auVar6._8_4_ = SUB84(dVar11,0);
      auVar6._0_8_ = ((double)local_68[0]._0_8_ - local_a8._s_0.X) * dVar5 + local_a8._s_0.X;
      auVar6._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])&(this->CurrentEndPoint).field0_0x0 = auVar6;
      *(undefined8 *)((longlong)&(this->CurrentEndPoint).field0_0x0 + 0x10) = local_c8._s_0.Z;
      if (pUVar8 != (UPrimitiveComponent *)0x0) {
        fVar10 = (float)(**(code **)(*plVar4 + 0x980))(plVar4);
        ComputeNewSpringCompressionAndForce
                  (this,(TVector<double> *)&local_88._s_0,&this->CurrentEndPoint,param_1,local_res8)
        ;
        dVar5 = (double)fVar10;
        dVar11 = (double)CONCAT44(local_88._4_4_,local_88._0_4_);
        dVar12 = dVar5 * (double)CONCAT44(local_88._12_4_,local_88._8_4_);
        local_c8._s_0.Z = dVar5 * local_88._s_0.Z;
        local_88._0_4_ = local_a8._0_4_;
        local_88._4_4_ = local_a8._4_4_;
        local_88._8_4_ = local_a8._8_4_;
        local_88._12_4_ = local_a8._12_4_;
        local_c8._8_4_ = SUB84(dVar12,0);
        local_c8._s_0.X = dVar5 * dVar11;
        local_c8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        local_88._s_0.Z = local_a8._s_0.Z;
        (**(code **)(*plVar4 + 0x738))(plVar4,&local_c8);
        this->SpringCompression = local_res8[0];
      }
      if (this->SpringCompression == 0.0) {
        SpringPositionFromLength(this,(TVector<double> *)&local_c8._s_0,this->SpringLengthAtRest);
        uVar17 = SUB84(local_c8._s_0.Z,0);
        uVar18 = (undefined4)((ulonglong)local_c8._16_8_ >> 0x20);
        uVar13 = local_c8._0_4_;
        uVar14 = local_c8._4_4_;
        uVar15 = local_c8._8_4_;
        uVar16 = local_c8._12_4_;
      }
      else {
        uVar13 = *(undefined4 *)&(this->CurrentEndPoint).field0_0x0;
        uVar14 = *(undefined4 *)((longlong)&(this->CurrentEndPoint).field0_0x0 + 4);
        uVar15 = *(undefined4 *)((longlong)&(this->CurrentEndPoint).field0_0x0 + 8);
        uVar16 = *(undefined4 *)((longlong)&(this->CurrentEndPoint).field0_0x0 + 0xc);
        uVar2 = *(undefined8 *)((longlong)&(this->CurrentEndPoint).field0_0x0 + 0x10);
        uVar17 = (undefined4)uVar2;
        uVar18 = (undefined4)((ulonglong)uVar2 >> 0x20);
      }
      puVar9 = (undefined8 *)this->_padding_;
      iVar3 = (int)this->_padding_;
      puVar1 = puVar9 + iVar3;
      while( true ) {
        if ((int)this->_padding_ != iVar3) {
          `TCheckedPointerIterator<TObjectPtr<USceneComponent>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (puVar9 == puVar1) break;
        local_c8._4_4_ = uVar14;
        local_c8._0_4_ = uVar13;
        local_c8._8_4_ = uVar15;
        local_c8._12_4_ = uVar16;
        local_c8._s_0.Z = (double)CONCAT44(uVar18,uVar17);
        USceneComponent::SetWorldLocation
                  ((USceneComponent *)*puVar9,(TVector<double> *)&local_c8._s_0,false,
                   (FHitResult *)0x0,None);
        puVar9 = puVar9 + 1;
      }
    }
  }
  return;
}

// UpdateAttachedPosition @ 148327220

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPhysicsSpringComponent::UpdateAttachedPosition(UPhysicsSpringComponent *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_48 [2];
  
  if (this->SpringCompression == 0.0) {
    SpringPositionFromLength(this,(TVector<double> *)&local_48[0]._s_0,this->SpringLengthAtRest);
    uVar9 = (undefined4)local_48[0]._s_0.Z;
    uVar10 = (undefined4)((ulonglong)local_48[0]._16_8_ >> 0x20);
    uVar5 = local_48[0]._0_4_;
    uVar6 = local_48[0]._4_4_;
    uVar7 = local_48[0]._8_4_;
    uVar8 = local_48[0]._12_4_;
  }
  else {
    uVar5 = *(undefined4 *)&(this->CurrentEndPoint).field0_0x0;
    uVar6 = *(undefined4 *)((longlong)&(this->CurrentEndPoint).field0_0x0 + 4);
    uVar7 = *(undefined4 *)((longlong)&(this->CurrentEndPoint).field0_0x0 + 8);
    uVar8 = *(undefined4 *)((longlong)&(this->CurrentEndPoint).field0_0x0 + 0xc);
    uVar2 = *(undefined8 *)((longlong)&(this->CurrentEndPoint).field0_0x0 + 0x10);
    uVar9 = (undefined4)uVar2;
    uVar10 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  puVar4 = (undefined8 *)this->_padding_;
  iVar3 = (int)this->_padding_;
  puVar1 = puVar4 + iVar3;
  while( true ) {
    if ((int)this->_padding_ != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<USceneComponent>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar4 == puVar1) break;
    local_48[0]._16_8_ = CONCAT44(uVar10,uVar9);
    local_48[0]._0_4_ = uVar5;
    local_48[0]._4_4_ = uVar6;
    local_48[0]._8_4_ = uVar7;
    local_48[0]._12_4_ = uVar8;
    USceneComponent::SetWorldLocation
              ((USceneComponent *)*puVar4,(TVector<double> *)&local_48[0]._s_0,false,
               (FHitResult *)0x0,None);
    puVar4 = puVar4 + 1;
  }
  return;
}

