// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 1482cc4a0

UClass * __cdecl URadialForceComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URadialForceComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RadialForceComponent",
               &Z_Registration_Info_UClass_URadialForceComponent.InnerSingleton,
               StaticRegisterNativesURadialForceComponent,0x280,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<URadialForceComponent>,
               InternalVTableHelperCtorCaller<URadialForceComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URadialForceComponent.InnerSingleton;
}

// URadialForceComponent @ 1482dc6b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

URadialForceComponent * __thiscall
URadialForceComponent::URadialForceComponent(URadialForceComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->ObjectTypesToAffect).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectTypesToAffect).ArrayNum = 0;
  (this->ObjectTypesToAffect).ArrayMax = 0;
  (this->CollisionObjectQueryParams).ObjectTypesToQuery = 0;
  (this->CollisionObjectQueryParams).IgnoreMask = '\0';
  return this;
}

// URadialForceComponent @ 1482dc710

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

URadialForceComponent * __thiscall
URadialForceComponent::URadialForceComponent
          (URadialForceComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar2;
  EObjectTypeQuery EVar3;
  TEnumAsByte<EObjectTypeQuery> local_res8 [8];
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this_00 = &this->ObjectTypesToAffect;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ObjectTypesToAffect).ArrayNum = 0;
  (this->ObjectTypesToAffect).ArrayMax = 0;
  (this->CollisionObjectQueryParams).ObjectTypesToQuery = 0;
  (this->CollisionObjectQueryParams).IgnoreMask = '\0';
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  *(undefined1 *)&this->_padding_ = 0;
  this->Radius = 200.0;
  (this->Falloff).Value = '\0';
  this->ImpulseStrength = 1000.0;
  this->ForceStrength = 10.0;
  EVar3 = UEngineTypes::ConvertToObjectType(ECC_Pawn);
  if (EVar3 != ObjectTypeQuery_MAX) {
    pcVar2 = *(code **)(this->_padding_ + 0x648);
    if (pcVar2 == AddObjectTypeToAffect) {
      local_res8[0].Value = (uchar)EVar3;
      TArray<TEnumAsByte<enum_EObjectTypeQuery>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TEnumAsByte<enum_EObjectTypeQuery>_const_&>(this_00,local_res8);
      UpdateCollisionObjectQueryParams(this);
    }
    else {
      (*pcVar2)(this,EVar3 & 0xff);
    }
  }
  EVar3 = UEngineTypes::ConvertToObjectType(ECC_PhysicsBody);
  if (EVar3 != ObjectTypeQuery_MAX) {
    pcVar2 = *(code **)(this->_padding_ + 0x648);
    if (pcVar2 == AddObjectTypeToAffect) {
      local_res8[0].Value = (uchar)EVar3;
      TArray<TEnumAsByte<enum_EObjectTypeQuery>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TEnumAsByte<enum_EObjectTypeQuery>_const_&>(this_00,local_res8);
      UpdateCollisionObjectQueryParams(this);
    }
    else {
      (*pcVar2)(this,EVar3 & 0xff);
    }
  }
  EVar3 = UEngineTypes::ConvertToObjectType(ECC_Vehicle);
  if (EVar3 != ObjectTypeQuery_MAX) {
    pcVar2 = *(code **)(this->_padding_ + 0x648);
    if (pcVar2 == AddObjectTypeToAffect) {
      local_res8[0].Value = (uchar)EVar3;
      TArray<TEnumAsByte<enum_EObjectTypeQuery>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TEnumAsByte<enum_EObjectTypeQuery>_const_&>(this_00,local_res8);
      UpdateCollisionObjectQueryParams(this);
    }
    else {
      (*pcVar2)(this,EVar3 & 0xff);
    }
  }
  EVar3 = UEngineTypes::ConvertToObjectType(ECC_Destructible);
  if (EVar3 != ObjectTypeQuery_MAX) {
    pcVar2 = *(code **)(this->_padding_ + 0x648);
    if (pcVar2 == AddObjectTypeToAffect) {
      local_res8[0].Value = (uchar)EVar3;
      TArray<TEnumAsByte<enum_EObjectTypeQuery>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TEnumAsByte<enum_EObjectTypeQuery>_const_&>(this_00,local_res8);
      UpdateCollisionObjectQueryParams(this);
    }
    else {
      (*pcVar2)(this,EVar3 & 0xff);
    }
  }
  UpdateCollisionObjectQueryParams(this);
  return this;
}

// ~URadialForceComponent @ 1482de340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall URadialForceComponent::~URadialForceComponent(URadialForceComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->ObjectTypesToAffect).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// AddCollisionChannelToAffect @ 1482e5f30

void __thiscall
URadialForceComponent::AddCollisionChannelToAffect
          (URadialForceComponent *this,ECollisionChannel param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  EObjectTypeQuery EVar1;
  
  EVar1 = UEngineTypes::ConvertToObjectType(param_1);
  if (EVar1 != ObjectTypeQuery_MAX) {
    UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x648);
                    /* WARNING: Could not recover jumptable at 0x0001482e5f5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(this,EVar1 & 0xff,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// AddObjectTypeToAffect @ 1482e6ce0

void __thiscall
URadialForceComponent::AddObjectTypeToAffect
          (URadialForceComponent *this,TEnumAsByte<EObjectTypeQuery> param_1)

{
  TEnumAsByte<EObjectTypeQuery> local_res10 [24];
  
  local_res10[0].Value = param_1.Value;
  TArray<TEnumAsByte<enum_EObjectTypeQuery>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TEnumAsByte<enum_EObjectTypeQuery>_const_&>(&this->ObjectTypesToAffect,local_res10);
  UpdateCollisionObjectQueryParams(this);
  return;
}

// BeginPlay @ 1482e9f50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall URadialForceComponent::BeginPlay(URadialForceComponent *this)

{
  UActorComponent::BeginPlay((UActorComponent *)this);
  UpdateCollisionObjectQueryParams(this);
  return;
}

// FireImpulse @ 148303830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall URadialForceComponent::FireImpulse(URadialForceComponent *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong lVar3;
  UObjectBaseUtility *this_00;
  AActor *this_01;
  longlong *plVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  FName *pFVar8;
  UWorld *this_02;
  UClass *pUVar9;
  longlong *plVar10;
  FName FVar11;
  FName FVar12;
  int iVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  TStatId TVar16;
  FName FVar17;
  ForElementType<UPrimitiveComponent_*> FVar18;
  bool bVar19;
  undefined1 auStackY_278 [32];
  undefined1 local_218 [8];
  TStatId local_210;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_208;
  undefined1 local_1f8 [16];
  double local_1e8;
  TVector<double>_u_0 local_1d8;
  TArray<UPrimitiveComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_1c0;
  longlong local_1a8 [24];
  longlong *local_e8;
  uint local_e0;
  undefined4 local_dc;
  FCollisionQueryParams local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1d8._s_0.X = (double)this->_padding_;
  local_1d8._s_0.Y = (double)this->_padding_;
  local_1d8._s_0.Z = (double)this->_padding_;
  local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_208.ArrayNum = 0;
  local_208.ArrayMax = 0;
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_FireImpulseOverlap =
         (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_URadialForceComponent::FireImpulse(void)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_FireImpulseOverlap>
          )0x0;
    pFVar8 = ::FName::FName((FName *)local_1f8,"FireImpulseOverlap");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_FireImpulseOverlap,*pFVar8,
               L"FireImpulseOverlap","STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  local_210.StatIdPtr = (TStatIdData *)StatPtr_FireImpulseOverlap;
  if (StatPtr_FireImpulseOverlap ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_URadialForceComponent::FireImpulse(void)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_FireImpulseOverlap>
       )0x0) {
    pFVar8 = ::FName::FName((FName *)local_1f8,"FireImpulseOverlap");
    local_210.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_FireImpulseOverlap,*pFVar8,
                    L"FireImpulseOverlap","STATGROUP_CollisionTags","STATCAT_Advanced",
                    L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::StaticName,"FireImpulseOverlap");
    _Init_thread_footer(&::_TSS0);
  }
  FCollisionQueryParams::FCollisionQueryParams
            (&local_d8,::StaticName,&local_210,false,(AActor *)0x0);
  if (this->bIgnoreOwningActor != 0) {
    FCollisionQueryParams::AddIgnoredActor(&local_d8,(AActor *)this->_padding_);
  }
  this_02 = (UWorld *)this->_padding_;
  if (this_02 == (UWorld *)0x0) {
    this_02 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  local_1f8._4_4_ = this->Radius;
  local_1f8._0_4_ = 2;
  UWorld::OverlapMultiByObjectType
            (this_02,&local_208,(TVector<double> *)&local_1d8._s_0,
             &UE::Math::TQuat<double>::Identity,&this->CollisionObjectQueryParams,
             (FCollisionShape *)local_1f8,&local_d8);
  uVar14 = local_208._8_8_ & 0xffffffff;
  local_1c0.AllocatorInstance.SecondaryData = (ForElementType<UPrimitiveComponent_*>)0x0;
  local_1c0.ArrayNum = 0;
  local_1c0.ArrayMax = 1;
  if (local_208.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar14);
  }
  if (1 < local_208.ArrayNum) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UPrimitiveComponent_*>_>
              (8,8,local_208.ArrayNum,&local_1c0.AllocatorInstance,0,&local_1c0.ArrayMax);
    uVar14 = local_208._8_8_ & 0xffffffff;
  }
  iVar13 = (int)uVar14;
  pFVar1 = local_208.AllocatorInstance.Data + (longlong)iVar13 * 0x48;
  FVar15.Data = local_208.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar14 != iVar13) {
      `TCheckedPointerIterator<FOverlapResult,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_218);
    }
    iVar6 = local_1c0.ArrayNum;
    fVar5 = __real_322bcc77;
    if (FVar15.Data == pFVar1) break;
    local_210.StatIdPtr = (TStatIdData *)FWeakObjectPtr::Get((FWeakObjectPtr *)(FVar15.Data + 0x20))
    ;
    if ((FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_URadialForceComponent::FireImpulse(void)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_FireImpulseOverlap>
         )local_210.StatIdPtr !=
        (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_URadialForceComponent::FireImpulse(void)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_FireImpulseOverlap>
         )0x0) {
      TArray<UPrimitiveComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
      AddUniqueImpl<UPrimitiveComponent_*_const_&>(&local_1c0,(UPrimitiveComponent **)&local_210);
    }
    uVar14 = local_208._8_8_ & 0xffffffff;
    FVar15.Data = FVar15.Data + 0x48;
  }
  uVar14 = (ulonglong)local_1c0.ArrayNum;
  FVar18 = (ForElementType<UPrimitiveComponent_*>)&local_1c0;
  if (local_1c0.AllocatorInstance.SecondaryData != (ForElementType<UPrimitiveComponent_*>)0x0) {
    FVar18 = local_1c0.AllocatorInstance.SecondaryData;
  }
  TVar16.StatIdPtr = (TStatIdData *)((longlong)FVar18 + uVar14 * 8);
  local_210.StatIdPtr = TVar16.StatIdPtr;
  do {
    if ((uint)uVar14 != iVar6) {
      `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_218);
    }
    if (FVar18 == (ForElementType<UPrimitiveComponent_*>)TVar16.StatIdPtr) {
      if (local_1c0.AllocatorInstance.SecondaryData != (ForElementType<UPrimitiveComponent_*>)0x0) {
        FMemory::Free((void *)local_1c0.AllocatorInstance.SecondaryData);
      }
      if (local_d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
      }
      if (local_d8.IgnoreComponents.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_d8.IgnoreComponents.AllocatorInstance.SecondaryData);
      }
      if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.AllocatorInstance.Data);
      }
      return;
    }
    this_00 = *(UObjectBaseUtility **)FVar18;
    if ((fVar5 < this->DestructibleDamage) && (this_00 != (UObjectBaseUtility *)0x0)) {
      pUVar9 = Z_Construct_UClass_UDestructibleInterface_NoRegister();
      plVar10 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar9);
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10,this->DestructibleDamage,&local_1d8,this->Radius);
      }
    }
    local_1f8._0_8_ = local_1d8._s_0.X;
    local_1f8._8_4_ = local_1d8._8_4_;
    local_1f8._12_4_ = local_1d8._12_4_;
    local_1e8 = local_1d8._s_0.Z;
    (**(code **)(*(longlong *)this_00 + 0x728))
              (this_00,local_1f8,this->Radius,this->ImpulseStrength);
    if ((*(byte *)(this_00 + 0x10) & 0x10) == 0) {
      this_01 = *(AActor **)&this_00[4].field_0x8;
      local_e8 = (longlong *)0x0;
      local_e0 = 0;
      local_dc = 0x18;
      if (this_01 != (AActor *)0x0) {
        FVar11 = (FName)Z_Construct_UClass_UMovementComponent_NoRegister();
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (FVar11 != (FName)0x0) goto LAB_148303bdb;
LAB_148303c0e:
          FVar17.ComparisonIndex.Value = 0;
          FVar17.Number = 0;
        }
        else {
          if (FVar11 == (FName)0x0) goto LAB_148303c0e;
          UE::GC::MarkAsReachable((UObject *)FVar11);
LAB_148303bdb:
          pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
          if (pUVar9 == (UClass *)0x0) goto LAB_148303c0e;
          iVar13 = (int)pUVar9->_padding_;
          if ((*(int *)((longlong)FVar11 + 0x38) < iVar13) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)((longlong)FVar11 + 0x30) + (longlong)iVar13 * 8) !=
              &pUVar9->_padding_)) {
            bVar19 = false;
          }
          else {
            bVar19 = true;
          }
          FVar17 = FVar11;
          if (!bVar19) goto LAB_148303c0e;
        }
        FVar12 = (FName)Z_Construct_UClass_UActorComponent_NoRegister();
        local_1f8._0_8_ = FVar11;
        if (FVar17 == FVar12) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar11 != (FName)0x0)) {
            UE::GC::MarkAsReachable((UObject *)FVar11);
          }
          AActor::
          ForEachComponent_Internal<UMovementComponent,1,0,_AActor::GetComponents<UMovementComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                    (this_01,(TSubclassOf<UActorComponent>)local_1f8,
                     (TArray<UMovementComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1a8);
        }
        else {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar11 != (FName)0x0)) {
            UE::GC::MarkAsReachable((UObject *)FVar11);
          }
          AActor::
          ForEachComponent_Internal<UMovementComponent,0,0,_AActor::GetComponents<UMovementComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                    (this_01,(TSubclassOf<UActorComponent>)local_1f8,
                     (TArray<UMovementComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1a8);
        }
        uVar7 = local_e0;
        uVar14 = (ulonglong)(int)local_e0;
        plVar10 = local_1a8;
        if (local_e8 != (longlong *)0x0) {
          plVar10 = local_e8;
        }
        plVar2 = plVar10 + uVar14;
        while( true ) {
          if ((uint)uVar14 != uVar7) {
            `TCheckedPointerIterator<UMovementComponent_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_218);
            uVar14 = (ulonglong)local_e0;
          }
          TVar16.StatIdPtr = local_210.StatIdPtr;
          if (plVar10 == plVar2) goto LAB_148303d19;
          plVar4 = (longlong *)*plVar10;
          if ((UObjectBaseUtility *)plVar4[0x18] == (UObjectBaseUtility *)0x0) {
            bVar19 = this_00 == (UObjectBaseUtility *)0x0;
          }
          else {
            bVar19 = (UObjectBaseUtility *)plVar4[0x18] == this_00;
          }
          if (bVar19) break;
          plVar10 = plVar10 + 1;
        }
        (**(code **)(*plVar4 + 0x5a8))(plVar4,&local_1d8,this->Radius,this->ImpulseStrength);
        TVar16.StatIdPtr = local_210.StatIdPtr;
      }
LAB_148303d19:
      if (local_e8 != (longlong *)0x0) {
        FMemory::Free(local_e8);
      }
    }
    uVar14 = (ulonglong)(uint)local_1c0.ArrayNum;
    FVar18 = (ForElementType<UPrimitiveComponent_*>)((longlong)FVar18 + 8);
  } while( true );
}

// GetPrivateStaticClass @ 14830c9f0

UClass * __cdecl URadialForceComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URadialForceComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RadialForceComponent",
               &Z_Registration_Info_UClass_URadialForceComponent.InnerSingleton,
               StaticRegisterNativesURadialForceComponent,0x280,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<URadialForceComponent>,
               InternalVTableHelperCtorCaller<URadialForceComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URadialForceComponent.InnerSingleton;
}

// PostLoad @ 1483185b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall URadialForceComponent::PostLoad(URadialForceComponent *this)

{
  UActorComponent::PostLoad((UActorComponent *)this);
  UpdateCollisionObjectQueryParams(this);
  return;
}

// RemoveObjectTypeToAffect @ 14831d7e0

void __thiscall
URadialForceComponent::RemoveObjectTypeToAffect
          (URadialForceComponent *this,TEnumAsByte<EObjectTypeQuery> param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement FVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement local_res10 [8];
  
  pFVar2 = (this->ObjectTypesToAffect).AllocatorInstance.Data;
  local_res10[0] = (FScriptContainerElement)param_1.Value;
  if (((pFVar2 <= local_res10) && (local_res10 < pFVar2 + (this->ObjectTypesToAffect).ArrayMax)) &&
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
  iVar1 = (this->ObjectTypesToAffect).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->ObjectTypesToAffect).AllocatorInstance.Data;
    bVar4 = *pFVar2 != local_res10[0];
    lVar6 = 0;
    FVar5 = local_res10[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (pFVar2[lVar6] != FVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + iVar9,pFVar2 + iVar7,(longlong)(iVar8 - iVar7));
          FVar5 = local_res10[0];
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->ObjectTypesToAffect).ArrayNum = iVar9;
  }
  UpdateCollisionObjectQueryParams(this);
  return;
}

// StaticRegisterNativesURadialForceComponent @ 148323c70

void __cdecl URadialForceComponent::StaticRegisterNativesURadialForceComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_URadialForceComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 148324c70

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

void __thiscall
URadialForceComponent::TickComponent
          (URadialForceComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  AActor *this_00;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  FName *pFVar8;
  UWorld *this_01;
  FName FVar9;
  UClass *pUVar10;
  FName FVar11;
  int iVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  longlong *plVar15;
  TStatId TVar16;
  FName FVar17;
  ForElementType<UPrimitiveComponent_*> FVar18;
  bool bVar19;
  undefined1 auStackY_288 [32];
  undefined1 local_228 [8];
  TStatId local_220;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_218;
  undefined1 local_208 [16];
  double local_1f8;
  TVector<double>_u_0 local_1e8;
  TArray<UPrimitiveComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_1d0;
  longlong local_1b8 [24];
  longlong *local_f8;
  uint local_f0;
  undefined4 local_ec;
  FCollisionQueryParams local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_288;
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  if ((this->_padding_ & 0x100000) != 0) {
    local_1e8._s_0.X = (double)this->_padding_;
    local_1e8._s_0.Y = (double)this->_padding_;
    local_1e8._s_0.Z = (double)this->_padding_;
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ArrayNum = 0;
    local_218.ArrayMax = 0;
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_AddForceOverlap =
           (FThreadSafeStaticStat<_public:___cdecl__protected:_virtual_void___cdecl_URadialForceComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_5_::<lambda_2>::operator()(void)const_::_2_::FStat_AddForceOverlap>
            )0x0;
      pFVar8 = ::FName::FName((FName *)local_208,"AddForceOverlap");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_AddForceOverlap,*pFVar8,L"AddForceOverlap",
                 "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,
                 true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_220.StatIdPtr = (TStatIdData *)StatPtr_AddForceOverlap;
    if (StatPtr_AddForceOverlap ==
        (FThreadSafeStaticStat<_public:___cdecl__protected:_virtual_void___cdecl_URadialForceComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_5_::<lambda_2>::operator()(void)const_::_2_::FStat_AddForceOverlap>
         )0x0) {
      pFVar8 = ::FName::FName((FName *)local_208,"AddForceOverlap");
      local_220.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_AddForceOverlap,*pFVar8,
                      L"AddForceOverlap","STATGROUP_CollisionTags","STATCAT_Advanced",
                      L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"AddForceOverlap");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams
              (&local_e8,::StaticName,&local_220,false,(AActor *)0x0);
    if (this->bIgnoreOwningActor != 0) {
      FCollisionQueryParams::AddIgnoredActor(&local_e8,(AActor *)this->_padding_);
    }
    this_01 = (UWorld *)this->_padding_;
    if (this_01 == (UWorld *)0x0) {
      this_01 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    local_208._4_4_ = this->Radius;
    local_208._0_4_ = 2;
    UWorld::OverlapMultiByObjectType
              (this_01,&local_218,(TVector<double> *)&local_1e8._s_0,
               &UE::Math::TQuat<double>::Identity,&this->CollisionObjectQueryParams,
               (FCollisionShape *)local_208,&local_e8);
    uVar13 = local_218._8_8_ & 0xffffffff;
    local_1d0.AllocatorInstance.SecondaryData = (ForElementType<UPrimitiveComponent_*>)0x0;
    local_1d0.ArrayNum = 0;
    local_1d0.ArrayMax = 1;
    if (local_218.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar13);
    }
    if (1 < local_218.ArrayNum) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UPrimitiveComponent_*>_>
                (8,8,local_218.ArrayNum,&local_1d0.AllocatorInstance,0,&local_1d0.ArrayMax);
      uVar13 = local_218._8_8_ & 0xffffffff;
    }
    iVar12 = (int)uVar13;
    pFVar1 = local_218.AllocatorInstance.Data + (longlong)iVar12 * 0x48;
    FVar14.Data = local_218.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar13 != iVar12) {
        `TCheckedPointerIterator<FOverlapResult,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_228);
      }
      iVar6 = local_1d0.ArrayNum;
      if (FVar14.Data == pFVar1) break;
      local_220.StatIdPtr =
           (TStatIdData *)FWeakObjectPtr::Get((FWeakObjectPtr *)(FVar14.Data + 0x20));
      if ((FThreadSafeStaticStat<_public:___cdecl__protected:_virtual_void___cdecl_URadialForceComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_5_::<lambda_2>::operator()(void)const_::_2_::FStat_AddForceOverlap>
           )local_220.StatIdPtr !=
          (FThreadSafeStaticStat<_public:___cdecl__protected:_virtual_void___cdecl_URadialForceComponent::TickComponent(float,ELevelTick,FActorComponentTickFunction_*)_::_5_::<lambda_2>::operator()(void)const_::_2_::FStat_AddForceOverlap>
           )0x0) {
        TArray<UPrimitiveComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
        AddUniqueImpl<UPrimitiveComponent_*_const_&>(&local_1d0,(UPrimitiveComponent **)&local_220);
      }
      uVar13 = local_218._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 0x48;
    }
    uVar13 = (ulonglong)local_1d0.ArrayNum;
    FVar18 = (ForElementType<UPrimitiveComponent_*>)&local_1d0;
    if (local_1d0.AllocatorInstance.SecondaryData != (ForElementType<UPrimitiveComponent_*>)0x0) {
      FVar18 = local_1d0.AllocatorInstance.SecondaryData;
    }
    TVar16.StatIdPtr = (TStatIdData *)((longlong)FVar18 + uVar13 * 8);
    local_220.StatIdPtr = TVar16.StatIdPtr;
    while( true ) {
      if ((uint)uVar13 != iVar6) {
        `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_228);
      }
      if (FVar18 == (ForElementType<UPrimitiveComponent_*>)TVar16.StatIdPtr) break;
      plVar4 = *(longlong **)FVar18;
      local_208._0_8_ = local_1e8._s_0.X;
      local_208._8_4_ = local_1e8._8_4_;
      local_208._12_4_ = local_1e8._12_4_;
      local_1f8 = local_1e8._s_0.Z;
      (**(code **)(*plVar4 + 0x748))(plVar4,local_208,this->Radius,this->ForceStrength);
      this_00 = (AActor *)plVar4[0x15];
      if (this_00 != (AActor *)0x0) {
        FVar11.ComparisonIndex.Value = 0;
        FVar11.Number = 0;
        FVar17.ComparisonIndex.Value = 0;
        FVar17.Number = 0;
        local_ec = 0x18;
        local_f8 = (longlong *)0x0;
        local_f0 = 0;
        FVar9 = (FName)Z_Construct_UClass_UMovementComponent_NoRegister();
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (FVar9 != (FName)0x0) goto LAB_148324fb4;
        }
        else {
          FVar17 = FVar11;
          if (FVar9 != (FName)0x0) {
            UE::GC::MarkAsReachable((UObject *)FVar9);
LAB_148324fb4:
            pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
            FVar17 = FVar11;
            if (pUVar10 != (UClass *)0x0) {
              iVar12 = (int)pUVar10->_padding_;
              if ((*(int *)((longlong)FVar9 + 0x38) < iVar12) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)((longlong)FVar9 + 0x30) + (longlong)iVar12 * 8) !=
                  &pUVar10->_padding_)) {
                bVar19 = false;
              }
              else {
                bVar19 = true;
              }
              if (bVar19) {
                FVar17 = FVar9;
              }
            }
          }
        }
        FVar11 = (FName)Z_Construct_UClass_UActorComponent_NoRegister();
        local_208._0_8_ = FVar9;
        if (FVar17 == FVar11) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar9 != (FName)0x0)) {
            UE::GC::MarkAsReachable((UObject *)FVar9);
          }
          AActor::
          ForEachComponent_Internal<UMovementComponent,1,0,_AActor::GetComponents<UMovementComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                    (this_00,(TSubclassOf<UActorComponent>)local_208,
                     (TArray<UMovementComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1b8);
        }
        else {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar9 != (FName)0x0)) {
            UE::GC::MarkAsReachable((UObject *)FVar9);
          }
          AActor::
          ForEachComponent_Internal<UMovementComponent,0,0,_AActor::GetComponents<UMovementComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                    (this_00,(TSubclassOf<UActorComponent>)local_208,
                     (TArray<UMovementComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                      *)local_1b8);
        }
        uVar7 = local_f0;
        uVar13 = (ulonglong)(int)local_f0;
        plVar15 = local_1b8;
        if (local_f8 != (longlong *)0x0) {
          plVar15 = local_f8;
        }
        plVar2 = plVar15 + uVar13;
        while( true ) {
          if ((uint)uVar13 != uVar7) {
            `TCheckedPointerIterator<UMovementComponent_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_228);
            uVar13 = (ulonglong)local_f0;
          }
          if (plVar15 == plVar2) goto LAB_1483250d8;
          plVar5 = (longlong *)*plVar15;
          if ((longlong *)plVar5[0x18] == (longlong *)0x0) {
            bVar19 = plVar4 == (longlong *)0x0;
          }
          else {
            bVar19 = (longlong *)plVar5[0x18] == plVar4;
          }
          if (bVar19) break;
          plVar15 = plVar15 + 1;
        }
        (**(code **)(*plVar5 + 0x5a0))(plVar5,&local_1e8,this->Radius,this->ForceStrength);
LAB_1483250d8:
        TVar16.StatIdPtr = local_220.StatIdPtr;
        if (local_f8 != (longlong *)0x0) {
          FMemory::Free(local_f8);
          TVar16.StatIdPtr = local_220.StatIdPtr;
        }
      }
      uVar13 = (ulonglong)(uint)local_1d0.ArrayNum;
      FVar18 = (ForElementType<UPrimitiveComponent_*>)((longlong)FVar18 + 8);
    }
    if (local_1d0.AllocatorInstance.SecondaryData != (ForElementType<UPrimitiveComponent_*>)0x0) {
      FMemory::Free((void *)local_1d0.AllocatorInstance.SecondaryData);
    }
    if (local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_e8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_e8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
    if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateCollisionObjectQueryParams @ 148327730

void __thiscall URadialForceComponent::UpdateCollisionObjectQueryParams(URadialForceComponent *this)

{
  code *pcVar1;
  bool bVar2;
  ECollisionChannel EVar3;
  int iVar4;
  uint uVar5;
  undefined4 uStackX_c;
  
  uVar5 = 0;
  for (iVar4 = 0; (-1 < iVar4 && (iVar4 < (this->ObjectTypesToAffect).ArrayNum)); iVar4 = iVar4 + 1)
  {
    if (iVar4 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EVar3 = UEngineTypes::ConvertToCollisionChannel
                      ((uint)(byte)(this->ObjectTypesToAffect).AllocatorInstance.Data[iVar4]);
    uVar5 = uVar5 | 1 << (EVar3 & ECC_GameTraceChannel18);
  }
  this->CollisionObjectQueryParams =
       (FCollisionObjectQueryParams)(CONCAT44(uStackX_c,uVar5) & 0xffffff00ffffffff);
  return;
}

// execAddObjectTypeToAffect @ 14832c4e0

void __cdecl
URadialForceComponent::execAddObjectTypeToAffect(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x648))(param_1,local_res8[0]);
  return;
}

// execFireImpulse @ 14832d080

void __cdecl URadialForceComponent::execFireImpulse(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014832d098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x640))();
  return;
}

// execRemoveObjectTypeToAffect @ 14832edf0

void __cdecl
URadialForceComponent::execRemoveObjectTypeToAffect(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x650))(param_1,local_res8[0]);
  return;
}

