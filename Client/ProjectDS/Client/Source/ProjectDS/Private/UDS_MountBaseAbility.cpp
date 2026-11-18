// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b4f4700

UClass * __cdecl UDS_MountBaseAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountBaseAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountBaseAbility",
               &Z_Registration_Info_UClass_UDS_MountBaseAbility.InnerSingleton,
               StaticRegisterNativesUDS_MountBaseAbility,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountBaseAbility>,
               InternalVTableHelperCtorCaller<UDS_MountBaseAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountBaseAbility.InnerSingleton;
}

// UDS_MountBaseAbility @ 14b4f80c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_MountBaseAbility * __thiscall
UDS_MountBaseAbility::UDS_MountBaseAbility(UDS_MountBaseAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->MainCharacter).WeakPtr = (FWeakObjectPtr)0x0;
  (this->MountAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_MountBaseAbility @ 14b4f8110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_MountBaseAbility * __thiscall
UDS_MountBaseAbility::UDS_MountBaseAbility(UDS_MountBaseAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->MainCharacter).WeakPtr = (FWeakObjectPtr)0x0;
  (this->MountAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_MountBaseAbility @ 14b4f8750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_MountBaseAbility::~UDS_MountBaseAbility(UDS_MountBaseAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4fa5b0

UClass * __cdecl UDS_MountBaseAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountBaseAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountBaseAbility",
               &Z_Registration_Info_UClass_UDS_MountBaseAbility.InnerSingleton,
               StaticRegisterNativesUDS_MountBaseAbility,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountBaseAbility>,
               InternalVTableHelperCtorCaller<UDS_MountBaseAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountBaseAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_MountBaseAbility @ 14b4fa960

void __cdecl UDS_MountBaseAbility::StaticRegisterNativesUDS_MountBaseAbility(void)

{
  return;
}

// AddStateTag @ 14b824c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MountBaseAbility::AddStateTag
          (UDS_MountBaseAbility *this,FGameplayTag *param_1,
          TWeakObjectPtr<UDS_AbilityContext,FWeakObjectPtr> param_2)

{
  UDS_LogManager *pUVar1;
  UWN_AbilitySystemComponent *this_00;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (param_1->TagName == (FName)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_GameplayAbility::AddTagToASC",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x2d5,L"InTag is invalid.");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    this_00 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UWN_AbilitySystemComponent::AddTag(this_00,param_1,1);
  }
  return;
}

// CheckRotateAbleByChildCollision @ 14b826860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDS_MountBaseAbility::CheckRotateAbleByChildCollision
          (UDS_MountBaseAbility *this,TRotator<double> *param_1)

{
  double dVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 *puVar20;
  bool bVar21;
  bool bVar22;
  char cVar23;
  undefined4 uVar24;
  int iVar25;
  AActor *pAVar26;
  UObject *pUVar27;
  TVector<double>_u_0 *pTVar28;
  USceneComponent *pUVar29;
  UClass *pUVar30;
  USceneComponent *pUVar31;
  TVector<double> *pTVar32;
  AActor *pAVar33;
  FName *pFVar34;
  FThreadSafeStaticStat<_public:___cdecl__protected:_bool___cdecl_UDS_MountBaseAbility::CheckRotateAbleByChildCollision(UE::Math::TRotator<double>_const_&)_::_19_::<lambda_2>::operator()(void)const_::_2_::FStat_ObstacleProbe>
  FVar35;
  TQuat<double> *pTVar36;
  UWorld *pUVar37;
  undefined7 extraout_var;
  uint uVar38;
  undefined4 uVar39;
  ulonglong uVar40;
  USceneComponent *pUVar41;
  FScriptContainerElement *pFVar42;
  undefined8 *puVar43;
  ForAnyElementType FVar44;
  longlong lVar45;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar46;
  double dVar47;
  double dVar48;
  undefined1 auStackY_628 [32];
  undefined1 local_5c8 [8];
  FWeakObjectPtr local_5c0;
  USceneComponent *local_5b8;
  undefined8 *local_5b0;
  undefined8 local_5a8;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_5a0;
  uint local_590;
  FScriptContainerElement *local_588;
  FScriptContainerElement *local_580;
  undefined8 *local_578;
  TVector<double>_u_0 local_570;
  TStatId local_558;
  TRotator<double> *local_550;
  FCollisionShape local_548;
  TVector<double>_u_0 local_538;
  TQuat<double> local_518;
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  TVector<double>_u_0 local_4d8;
  TRotator<double> local_4b8;
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  TQuat<double> local_478;
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  FName local_438;
  FName local_430;
  TRotator<double> local_428;
  double local_400;
  TQuat<double> local_3f8 [4];
  undefined1 local_378 [88];
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  double local_310;
  byte local_2cb;
  FHitResult local_278;
  FCollisionQueryParams local_178;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_628;
  local_5a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5a0.ArrayNum = 0;
  local_5a0.ArrayMax = 0;
  local_550 = param_1;
  pAVar26 = (AActor *)FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
  AActor::GetAttachedActors(pAVar26,&local_5a0,true,false);
  if (local_5a0.ArrayNum == 0) {
    bVar21 = true;
  }
  else {
    pUVar27 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar27 + 0x498))(pUVar27,local_378);
    if ((local_2cb & 1) == 0) {
      dVar1 = local_448._0_8_;
      uVar24 = local_448._8_4_;
      uVar46 = local_448._12_4_;
      dVar12 = (double)local_458._0_8_;
      dVar8 = (double)local_458._8_8_;
    }
    else {
      pUVar27 = FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
      if (*(USceneComponent **)(pUVar27 + 0xb) == (USceneComponent *)0x0) {
        pTVar28 = &local_570;
        local_570._s_0.Y = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        local_570._s_0.X = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
        local_570._s_0.Z = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
      }
      else {
        pTVar28 = &USceneComponent::GetRightVector
                             (*(USceneComponent **)(pUVar27 + 0xb),
                              (TVector<double> *)&local_538._s_0)->field0_0x0;
      }
      dVar1 = (pTVar28->_s_0).Z;
      uVar9 = CONCAT44(uStack_314,uStack_318);
      uVar10 = CONCAT44(uStack_31c,local_320);
      dVar12 = (((TVector<double>_u_0 *)&(pTVar28->_s_0).X)->_s_0).X;
      dVar8 = (pTVar28->_s_0).Y;
      dVar7 = (double)uVar9 * (double)uVar9 + (double)uVar10 * (double)uVar10 +
              local_310 * local_310;
      if (dVar7 == __real_3ff0000000000000) {
        local_538._s_0.Z = local_310;
      }
      else if (__real_3e45798ee0000000 <= dVar7) {
        local_578 = (undefined8 *)(__real_3ff0000000000000 / SQRT(dVar7));
        uVar10 = (double)uVar10 * (double)local_578;
        uVar9 = (double)uVar9 * (double)local_578;
        local_310 = local_310 * (double)local_578;
      }
      else {
        local_538._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_310 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      local_4b8.Roll = dVar1;
      FGenericPlatformMath::Atan2
                (((double)uVar10 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
                 local_310 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X) * dVar8 +
                 (local_310 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
                 (double)uVar9 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z) * dVar12 +
                 ((double)uVar9 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
                 (double)uVar10 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y) * dVar1,
                 local_310 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z +
                 (double)uVar9 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y +
                 (double)uVar10 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X);
      __libm_sse2_sincos_();
      dVar12 = dVar12 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      dVar1 = dVar1 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      dVar8 = dVar8 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      local_458._8_4_ = SUB84(dVar8,0);
      local_458._0_8_ = dVar12;
      local_458._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      local_448._8_4_ = extraout_XMM0_Dc;
      local_448._0_8_ = dVar1;
      local_448._12_4_ = extraout_XMM0_Dd;
      uVar24 = extraout_XMM0_Dc;
      uVar46 = extraout_XMM0_Dd;
    }
    uVar19 = _UNK_15061cc8c;
    uVar18 = _UNK_15061cc88;
    uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar40 = (ulonglong)local_5a0.ArrayNum;
    local_488._8_4_ = SUB84(dVar8,0);
    local_488._0_8_ = dVar12;
    local_488._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    local_498._8_4_ = uVar24;
    local_498._0_8_ = dVar1;
    local_498._12_4_ = uVar46;
    pFVar42 = local_5a0.AllocatorInstance.Data + uVar40 * 8;
    local_590 = local_5a0.ArrayNum;
    FVar44.Data = local_5a0.AllocatorInstance.Data;
    local_588 = pFVar42;
    while( true ) {
      pUVar41 = (USceneComponent *)0x0;
      local_580 = FVar44.Data;
      if (local_5a0.ArrayNum != (int)uVar40) {
        `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_5c8);
      }
      if (FVar44.Data == pFVar42) break;
      pAVar26 = *(AActor **)FVar44.Data;
      if (pAVar26 != (AActor *)0x0) {
        local_5b0 = (undefined8 *)0x0;
        local_5a8 = 0;
        pUVar29 = (USceneComponent *)Z_Construct_UClass_UActorComponent_NoRegister();
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar29 != (USceneComponent *)0x0) goto LAB_14b826bed;
        }
        else if (pUVar29 != (USceneComponent *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar29);
LAB_14b826bed:
          pUVar30 = Z_Construct_UClass_UActorComponent_NoRegister();
          if (pUVar30 != (UClass *)0x0) {
            iVar2 = (int)pUVar30->_padding_;
            if (((int)pUVar29->_padding_ < iVar2) ||
               ((longlong *)*(undefined1 **)(pUVar29->_padding_ + (longlong)iVar2 * 8) !=
                &pUVar30->_padding_)) {
              bVar21 = false;
            }
            else {
              bVar21 = true;
            }
            if (bVar21) {
              pUVar41 = pUVar29;
            }
          }
        }
        pUVar31 = (USceneComponent *)Z_Construct_UClass_UActorComponent_NoRegister();
        local_5b8 = pUVar29;
        if (pUVar41 == pUVar31) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar29 != (USceneComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar29);
          }
          AActor::
          ForEachComponent_Internal<UActorComponent,1,1,_AActor::GetComponents<TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                    (pAVar26,(TSubclassOf<UActorComponent>)&local_5b8,
                     (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_5b0);
        }
        else {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar29 != (USceneComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar29);
          }
          AActor::
          ForEachComponent_Internal<UActorComponent,0,1,_AActor::GetComponents<TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                    (pAVar26,(TSubclassOf<UActorComponent>)&local_5b8,
                     (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_5b0);
        }
        iVar2 = (int)local_5a8;
        local_578 = local_5b0 + (int)local_5a8;
        puVar43 = local_5b0;
        while( true ) {
          puVar20 = local_578;
          if ((int)local_5a8 != iVar2) {
            `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_5c8);
          }
          if (puVar43 == puVar20) break;
          pUVar41 = (USceneComponent *)*puVar43;
          if ((pUVar41 != (USceneComponent *)0x0) &&
             ((pAVar26->RootComponent).field0_0x0.DebugPtr != pUVar41)) {
            pUVar30 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
            iVar25 = (int)pUVar30->_padding_;
            if ((*(int *)(pUVar41->_padding_ + 0x38) < iVar25) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar41->_padding_ + 0x30) + (longlong)iVar25 * 8) !=
                &pUVar30->_padding_)) {
              pUVar41 = (USceneComponent *)0x0;
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar41 != (USceneComponent *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar41);
            }
            local_5c0.ObjectIndex = 0;
            local_5c0.ObjectSerialNumber = 0;
            local_5b8 = pUVar41;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar41 != (USceneComponent *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar41);
            }
            FWeakObjectPtr::operator=(&local_5c0,(FObjectPtr)&local_5b8);
            bVar21 = TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::UEOpEquals
                               ((TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *)&local_5c0,
                                (void *)0x0);
            if ((!bVar21) &&
               (pUVar41 = (pAVar26->RootComponent).field0_0x0.DebugPtr,
               pUVar41 != (USceneComponent *)0x0)) {
              pUVar27 = FWeakObjectPtr::Get(&local_5c0);
              local_428.Pitch = param_1->Pitch;
              local_428.Yaw = param_1->Yaw;
              local_428.Roll = param_1->Roll;
              dVar11 = *(double *)&pUVar27[8].field_0x8;
              dVar8 = *(double *)&pUVar27[8].field_0x10;
              dVar1 = *(double *)&pUVar27[8].field_0x18;
              dVar13 = (pUVar41->ComponentToWorld).Translation.XY.m128d_f64[0];
              dVar7 = (pUVar41->ComponentToWorld).Translation.XY.m128d_f64[1];
              dVar14 = (pUVar41->ComponentToWorld).Translation.ZW.m128d_f64[0];
              UE::Math::TRotator<double>::Quaternion(&local_428,&local_478);
              dVar12 = local_478.X * dVar8 - local_478.Y * dVar11;
              dVar12 = dVar12 + dVar12;
              dVar48 = local_478.Z * dVar11 - local_478.X * dVar1;
              dVar48 = dVar48 + dVar48;
              dVar47 = local_478.Y * dVar1 - local_478.Z * dVar8;
              dVar47 = dVar47 + dVar47;
              local_4d8._s_0.Z =
                   (local_478.X * dVar48 - local_478.Y * dVar47) + local_478.W * dVar12 + dVar1;
              dVar8 = (local_478.Z * dVar47 - local_478.X * dVar12) + local_478.W * dVar48 + dVar8;
              dVar1 = (local_478.Y * dVar12 - local_478.Z * dVar48) + local_478.W * dVar47 + dVar11;
              uVar9 = dVar14;
              dVar12 = local_4d8._s_0.Z;
              if ((local_2cb & 1) != 0) {
                local_4d8._8_4_ = SUB84(dVar8,0);
                local_4d8._0_8_ = dVar1;
                local_4d8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
                local_3f8[0].Z = local_4d8._s_0.Z;
                pTVar32 = UE::Math::TQuat<double>::RotateVector
                                    ((TQuat<double> *)local_458,(TVector<double> *)&local_518,
                                     (TVector<double> *)&local_4d8._s_0);
                dVar1 = (pTVar32->field0_0x0)._s_0.X;
                dVar8 = (pTVar32->field0_0x0)._s_0.Y;
                uVar9 = local_4d8._s_0.Z;
                dVar12 = (pTVar32->field0_0x0)._s_0.Z;
              }
              local_4d8._s_0.Z = (double)uVar9;
              local_400 = dVar14 + dVar12;
              dVar13 = dVar13 + dVar1;
              dVar7 = dVar7 + dVar8;
              uVar46 = (undefined4)((ulonglong)dVar7 >> 0x20);
              uVar24 = SUB84(dVar7,0);
              local_570._8_4_ = uVar24;
              local_570._s_0.X = dVar13;
              local_570._12_4_ = uVar46;
              local_538._8_4_ = uVar24;
              local_538._0_8_ = dVar13;
              local_538._12_4_ = uVar46;
              local_570._s_0.Z = local_400;
              local_538._s_0.Z = local_400;
              pAVar33 = (AActor *)FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
              lVar45 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              if ((*(int *)(lVar45 + 0x9d4c) < ::_TSS0) &&
                 (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                StatPtr_ObstacleProbe =
                     (FThreadSafeStaticStat<_public:___cdecl__protected:_bool___cdecl_UDS_MountBaseAbility::CheckRotateAbleByChildCollision(UE::Math::TRotator<double>_const_&)_::_19_::<lambda_2>::operator()(void)const_::_2_::FStat_ObstacleProbe>
                      )0x0;
                pFVar34 = ::FName::FName(&local_438,"ObstacleProbe");
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_ObstacleProbe,*pFVar34,
                           L"ObstacleProbe","STATGROUP_CollisionTags","STATCAT_Advanced",
                           L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
                _Init_thread_footer(&::_TSS0);
              }
              FVar35 = StatPtr_ObstacleProbe;
              if (StatPtr_ObstacleProbe ==
                  (FThreadSafeStaticStat<_public:___cdecl__protected:_bool___cdecl_UDS_MountBaseAbility::CheckRotateAbleByChildCollision(UE::Math::TRotator<double>_const_&)_::_19_::<lambda_2>::operator()(void)const_::_2_::FStat_ObstacleProbe>
                   )0x0) {
                pFVar34 = ::FName::FName(&local_430,"ObstacleProbe");
                FVar35 = (FThreadSafeStaticStat<_public:___cdecl__protected:_bool___cdecl_UDS_MountBaseAbility::CheckRotateAbleByChildCollision(UE::Math::TRotator<double>_const_&)_::_19_::<lambda_2>::operator()(void)const_::_2_::FStat_ObstacleProbe>
                          )FThreadSafeStaticStatBase::DoSetup
                                     ((FThreadSafeStaticStatBase *)&StatPtr_ObstacleProbe,*pFVar34,
                                      L"ObstacleProbe","STATGROUP_CollisionTags","STATCAT_Advanced",
                                      L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
              }
              local_558.StatIdPtr = (TStatIdData *)FVar35;
              if ((*(int *)(lVar45 + 0x9d4c) < ::_TSS0) &&
                 (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                ::FName::FName(&::StaticName,"ObstacleProbe");
                _Init_thread_footer(&::_TSS0);
              }
              FCollisionQueryParams::FCollisionQueryParams
                        (&local_178,::StaticName,&local_558,false,pAVar33);
              pAVar33 = (AActor *)FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
              FCollisionQueryParams::AddIgnoredActor(&local_178,pAVar33);
              pUVar27 = FWeakObjectPtr::Get(&local_5c0);
              param_1 = local_550;
              local_4b8.Pitch = *(double *)&pUVar27[8].field_0x20;
              local_4b8.Yaw = *(double *)(pUVar27 + 9);
              local_4b8.Roll = *(double *)&pUVar27[9].field_0x8;
              pTVar36 = UE::Math::TRotator<double>::Quaternion(local_550,&local_518);
              dVar1 = pTVar36->Z;
              dVar8 = pTVar36->W;
              dVar11 = pTVar36->X;
              dVar14 = pTVar36->Y;
              dVar12 = (double)local_488._0_8_ * dVar8 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                       (double)local_498._8_8_ * dVar11 +
                       (double)local_488._8_8_ * dVar1 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                       (double)local_498._0_8_ * dVar14 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
              dVar7 = (double)local_488._0_8_ * dVar1 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                      (double)local_498._8_8_ * dVar14 +
                      (double)local_488._8_8_ * dVar8 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                      (double)local_498._0_8_ * dVar11 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
              dVar13 = (double)local_488._0_8_ * dVar14 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                       (double)local_498._8_8_ * dVar1 +
                       (double)local_488._8_8_ * dVar11 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                       (double)local_498._0_8_ * dVar8 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
              dVar11 = (double)local_488._0_8_ * dVar11 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                       (double)local_498._8_8_ * dVar8 +
                       (double)local_488._8_8_ * dVar14 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                       (double)local_498._0_8_ * dVar1 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
              pTVar36 = UE::Math::TRotator<double>::Quaternion(&local_4b8,local_3f8);
              dVar14 = pTVar36->Z;
              dVar47 = pTVar36->W;
              dVar48 = pTVar36->X;
              dVar15 = pTVar36->Y;
              dVar8 = dVar12 * dVar48 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                      dVar11 * dVar47 +
                      dVar7 * dVar15 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                      dVar13 * dVar14 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
              dVar1 = dVar12 * dVar14 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                      dVar11 * dVar15 +
                      dVar7 * dVar47 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                      dVar13 * dVar48 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
              local_4e8._8_4_ = SUB84(dVar8,0);
              local_4e8._0_8_ =
                   dVar12 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
                   + dVar11 * dVar14 +
                   dVar7 * dVar48 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
                   + dVar13 * dVar47 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
              local_4e8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
              local_4f8._8_4_ = SUB84(dVar1,0);
              local_4f8._0_8_ =
                   dVar12 * dVar47 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                   + dVar11 * dVar48 +
                   dVar7 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                   + dVar13 * dVar15 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
              local_4f8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
              pUVar27 = FWeakObjectPtr::Get(&local_5c0);
              uVar24 = (**(code **)(*(longlong *)pUVar27 + 0x8b8))(pUVar27,&local_548,0);
              dVar1 = (double)local_4e8._0_8_ * (double)local_4e8._0_8_ +
                      (double)local_4f8._0_8_ * (double)local_4f8._0_8_;
              dVar8 = (double)local_4e8._8_8_ * (double)local_4e8._8_8_ +
                      (double)local_4f8._8_8_ * (double)local_4f8._8_8_;
              dVar12 = dVar8 + dVar1;
              dVar1 = dVar1 + dVar8;
              dVar8 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar12;
              dVar7 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar1;
              lVar45 = -(ulonglong)
                        ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
                        (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & uVar19,
                                         SUB84(dVar7,0) & uVar18));
              dVar12 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar12;
              dVar1 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar1;
              auVar5._8_4_ = (int)lVar45;
              auVar5._0_8_ = -(ulonglong)
                              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
                              (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar17,
                                               SUB84(dVar8,0) & uVar16));
              auVar5._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
              uVar38 = movmskpd((int)pUVar27,auVar5);
              lVar45 = -(ulonglong)
                        ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
                        (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar19,
                                         SUB84(dVar1,0) & uVar18));
              auVar3._8_4_ = (int)lVar45;
              auVar3._0_8_ = -(ulonglong)
                              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                              (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar17,
                                               SUB84(dVar12,0) & uVar16));
              auVar3._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
              iVar25 = movmskpd(uVar24,auVar3);
              if ((uVar38 & 0x3fffffff) == 0 && iVar25 == 0) {
                memset(&local_278,0,0x100);
                local_518.W._0_4_ = 0xffffffff;
                local_518.Z = 0.0;
                local_518.W._4_4_ = 0;
                local_278.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
                local_278.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
                local_278.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
                local_278.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber
                     = 0;
                local_278.Time = 1.0;
                local_278.MyItem = -1;
                local_278.HitObjectHandle.ManagerInterface.InterfaceInstance._0_4_ = 0;
                local_278.HitObjectHandle.ManagerInterface.InterfaceInstance._4_4_ = 0;
                local_278.HitObjectHandle.InstanceIndex = -1;
                local_278.HitObjectHandle.ResolutionStatus = Invalid;
                local_278.HitObjectHandle._29_3_ = 0;
                pUVar37 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
                bVar21 = UWorld::SweepSingleByChannel
                                   (pUVar37,&local_278,(TVector<double> *)&local_570._s_0,
                                    (TVector<double> *)&local_538._s_0,(TQuat<double> *)local_4f8,
                                    ECC_GameTraceChannel1,&local_548,&local_178,
                                    &FCollisionResponseParams::DefaultResponseParam);
                uVar39 = SUB84(pUVar37,0);
                bVar22 = UDS_GameInstance::IsCharacterCollisionBlockDebug();
                uVar46 = local_548.field1_0x4.Box.HalfExtentY;
                uVar24 = local_548.field1_0x4.Box.HalfExtentX;
                if (bVar22) {
                  if (bVar21 == bVar22) {
                    dVar1 = (double)local_4e8._0_8_ * (double)local_4e8._0_8_ +
                            (double)local_4f8._0_8_ * (double)local_4f8._0_8_;
                    dVar8 = (double)local_4e8._8_8_ * (double)local_4e8._8_8_ +
                            (double)local_4f8._8_8_ * (double)local_4f8._8_8_;
                    dVar12 = dVar8 + dVar1;
                    dVar1 = dVar1 + dVar8;
                    dVar8 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar12;
                    dVar7 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar1;
                    lVar45 = -(ulonglong)
                              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
                              (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & uVar19,
                                               SUB84(dVar7,0) & uVar18));
                    dVar12 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar12;
                    dVar1 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar1;
                    auVar6._8_4_ = (int)lVar45;
                    auVar6._0_8_ = -(ulonglong)
                                    ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2]
                                    < (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar17,
                                                       SUB84(dVar8,0) & uVar16));
                    auVar6._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
                    uVar38 = movmskpd(uVar39,auVar6);
                    lVar45 = -(ulonglong)
                              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
                              (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar19,
                                               SUB84(dVar1,0) & uVar18));
                    auVar4._8_4_ = (int)lVar45;
                    auVar4._0_8_ = -(ulonglong)
                                    ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0]
                                    < (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar17,
                                                       SUB84(dVar12,0) & uVar16));
                    auVar4._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
                    iVar25 = movmskpd((int)CONCAT71(extraout_var,bVar22),auVar4);
                    if ((uVar38 & 0x3fffffff) == 0 && iVar25 == 0) {
                      pUVar37 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
                      DrawDebugCapsule(pUVar37,(TVector<double> *)&local_570._s_0,(float)uVar46,
                                       (float)uVar24,(TQuat<double> *)local_4f8,&FColor::Cyan,false,
                                       __real_3dcccccd,'\0',__real_3fc00000);
                    }
LAB_14b82750d:
                    pUVar27 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
                    cVar23 = (**(code **)(*(longlong *)pUVar27 + 0x328))(pUVar27,&local_278,1);
                    if (cVar23 == '\x01') {
                      if (local_178.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
                          (ForElementType<unsigned_int>)0x0) {
                        FMemory::Free((void *)local_178.IgnoreSourceObjects.AllocatorInstance.
                                              SecondaryData);
                      }
                      if (local_178.IgnoreComponents.AllocatorInstance.SecondaryData !=
                          (ForElementType<unsigned_int>)0x0) {
                        FMemory::Free((void *)local_178.IgnoreComponents.AllocatorInstance.
                                              SecondaryData);
                      }
                      if (local_5b0 != (undefined8 *)0x0) {
                        FMemory::Free(local_5b0);
                      }
                      bVar21 = false;
                      goto LAB_14b82762d;
                    }
                  }
                }
                else if (bVar21) goto LAB_14b82750d;
              }
              if (local_178.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FMemory::Free((void *)local_178.IgnoreSourceObjects.AllocatorInstance.SecondaryData)
                ;
              }
              if (local_178.IgnoreComponents.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FMemory::Free((void *)local_178.IgnoreComponents.AllocatorInstance.SecondaryData);
              }
            }
          }
          puVar43 = puVar43 + 1;
        }
        pFVar42 = local_588;
        if (local_5b0 != (undefined8 *)0x0) {
          FMemory::Free(local_5b0);
          pFVar42 = local_588;
        }
      }
      uVar40 = (ulonglong)local_590;
      FVar44.Data = local_580 + 8;
    }
    bVar21 = true;
  }
LAB_14b82762d:
  if (local_5a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a0.AllocatorInstance.Data);
  }
  return bVar21;
}

// OnAbilityRetryActivate @ 14b837aa0

void __thiscall UDS_MountBaseAbility::OnAbilityRetryActivate(UDS_MountBaseAbility *this)

{
  return;
}

// OnCanActivate @ 14b838a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_MountBaseAbility::OnCanActivate(UDS_MountBaseAbility *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> TVar4;
  TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> TVar5;
  UDS_LogManager *pUVar6;
  undefined1 auStackY_188 [32];
  ulong64 local_154 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar2 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar2) {
    TVar4 = UDS_AbilityDataSet::GetAbilityData<UDS_MountAbilityData>
                      (local_154,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
    (this->MountAbilityData).WeakPtr = *TVar4.WeakPtr;
    bVar2 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->MountAbilityData,(void *)0x0);
    if (!bVar2) {
      if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
        TVar5 = ADS_MainCharacter::GetMainPlayer();
                    /* WARNING: Load size is inaccurate */
        (this->MainCharacter).WeakPtr = *TVar5.WeakPtr;
        bVar2 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                          (&this->MainCharacter,(void *)0x0);
        if (bVar2) {
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 != (UDS_LogManager *)0x0) {
            pUVar6 = UDS_LogManager::GetInst();
            local_138._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_138,"UDS_MountBaseAbility::OnCanActivate",0x23,Yes);
            UDS_LogManager::PrintLog
                      (pUVar6,1,Warning,local_138.Ptr,0x29,L"MainCharacter is nullptr.");
            if ((void *)local_138._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_138._padding_);
            }
          }
          bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5153946109361520598>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_MountBaseAbility.cpp"
                             ,0x2a,"false");
          if (!bVar2) {
            return false;
          }
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      return true;
    }
  }
  return false;
}

// OnChangedCharState @ 14b83bf10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_MountBaseAbility::OnChangedCharState
          (UDS_MountBaseAbility *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  FDS_ChangedCharStateInfo local_38;
  
  local_38.StateTag.TagName = (param_2->StateTag).TagName;
  local_38.bIsStateTagOn = param_2->bIsStateTagOn;
  local_38._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_38.AddedCharState = param_2->AddedCharState;
  local_38.RemovedCharState = param_2->RemovedCharState;
  local_38.AddedCharDetailState = param_2->AddedCharDetailState;
  local_38.RemovedCharDetailState = param_2->RemovedCharDetailState;
  UDS_GameplayAbility::OnChangedCharState((UDS_GameplayAbility *)this,param_1,&local_38);
  return;
}

// OnDeactivateAbility @ 14b83ecf0

void __thiscall UDS_MountBaseAbility::OnDeactivateAbility(UDS_MountBaseAbility *this,bool *param_1)

{
  return;
}

// OnPostActivateAbility @ 14b843300

void __thiscall UDS_MountBaseAbility::OnPostActivateAbility(UDS_MountBaseAbility *this)

{
  return;
}

// RemoveStateTag @ 14b84d310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MountBaseAbility::RemoveStateTag
          (UDS_MountBaseAbility *this,FGameplayTag *param_1,
          TWeakObjectPtr<UDS_AbilityContext,FWeakObjectPtr> param_2)

{
  UDS_LogManager *pUVar1;
  UWN_AbilitySystemComponent *this_00;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (param_1->TagName == (FName)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_GameplayAbility::RemoveTagToASC",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x2e0,L"InTag is invalid.");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    this_00 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UWN_AbilitySystemComponent::RemoveTag(this_00,param_1,-1);
  }
  return;
}

// UpdateBlockByChildCollision @ 14b8557e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UDS_MountBaseAbility::UpdateBlockByChildCollision
          (UDS_MountBaseAbility *this,float param_1,TVector<double> *param_2)

{
  longlong *this_00;
  undefined1 auVar1 [16];
  int iVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  UObject *pUVar13;
  longlong lVar14;
  AActor *pAVar15;
  UObject *pUVar16;
  TVector<double>_u_0 *pTVar17;
  UClass *pUVar18;
  UClass *pUVar19;
  UClass *pUVar20;
  USceneComponent *pUVar21;
  UDS_MovementCore *this_01;
  FName *pFVar22;
  FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_UDS_MountBaseAbility::UpdateBlockByChildCollision(float,UE::Math::TVector<double>_const_&)_::_19_::<lambda_2>::operator()(void)const_::_2_::FStat_ObstacleProbe>
  FVar23;
  UWorld *pUVar24;
  undefined7 extraout_var;
  uint uVar25;
  ulonglong uVar26;
  FScriptContainerElement *pFVar27;
  undefined8 *puVar28;
  ForAnyElementType FVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  uint uVar33;
  double dVar34;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  uint uVar42;
  double dVar41;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 auStackY_538 [32];
  undefined1 local_4d8 [8];
  FWeakObjectPtr local_4d0;
  TVector<double> *local_4c8;
  USceneComponent *local_4c0;
  FWeakObjectPtr local_4b8;
  undefined8 *local_4b0;
  undefined8 local_4a8;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_4a0;
  float local_490;
  uint local_48c;
  FScriptContainerElement *local_488;
  FScriptContainerElement *local_480;
  FCollisionShape local_478;
  double local_468;
  double dStack_460;
  double local_458;
  TVector<double>_u_0 local_450;
  double local_428;
  undefined4 uStack_420;
  undefined1 uStack_41c;
  undefined2 uStack_41b;
  undefined1 uStack_419;
  TVector<double>_u_0 local_418;
  TVector<double>_u_0 local_400;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  double dStack_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  double dStack_3d0;
  TStatId local_3c8;
  undefined8 *local_3c0;
  undefined1 local_3b8 [16];
  double local_3a8;
  double dStack_3a0;
  FName local_398;
  FName local_390;
  TVector<double> local_388;
  undefined1 local_368 [72];
  double local_320;
  int local_2c4;
  byte local_2bb;
  FWeakObjectPtr local_2b0;
  FWeakObjectPtr FStack_2a8;
  IActorInstanceManagerInterface *local_2a0;
  undefined8 uStack_298;
  undefined1 local_268 [256];
  FCollisionQueryParams local_168;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_538;
  this_00 = &this->_padding_;
  local_4c8 = param_2;
  local_490 = param_1;
  pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  (**(code **)(*(longlong *)pUVar13 + 0x4a8))(pUVar13);
  pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  (**(code **)(*(longlong *)pUVar13 + 0x4c0))(pUVar13);
  pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  (**(code **)(*(longlong *)pUVar13 + 0x4b8))(pUVar13);
  pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  (**(code **)(*(longlong *)pUVar13 + 0x4d0))(pUVar13);
  bVar9 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    (&this->MainCharacter,(void *)0x0);
  if ((!bVar9) && (lVar14 = (**(code **)(this->_padding_ + 0x180))(this), lVar14 != 0)) {
    local_4a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4a0.ArrayNum = 0;
    local_4a0.ArrayMax = 0;
    pAVar15 = (AActor *)FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
    AActor::GetAttachedActors(pAVar15,&local_4a0,true,false);
    if (local_4a0.ArrayNum != 0) {
      pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      pcVar3 = *(code **)(*(longlong *)pUVar13 + 0x4a0);
      pUVar16 = FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
      if (*(USceneComponent **)(pUVar16 + 0xb) == (USceneComponent *)0x0) {
        pTVar17 = &local_400;
        local_400._s_0.X = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
        local_400._s_0.Y = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        local_400._s_0.Z = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
      }
      else {
        pTVar17 = &USceneComponent::GetRightVector(*(USceneComponent **)(pUVar16 + 0xb),&local_388)
                   ->field0_0x0;
      }
      local_450._s_0.X = (((TVector<double>_u_0 *)&(pTVar17->_s_0).X)->_s_0).X;
      local_450._s_0.Y = (pTVar17->_s_0).Y;
      local_450._s_0.Z = (pTVar17->_s_0).Z;
      (*pcVar3)(pUVar13,&local_3e8,&local_450);
      uVar26 = (ulonglong)local_4a0.ArrayNum;
      uVar43 = (undefined4)__real_3f1a36e2e0000000;
      uVar44 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
      uVar46 = (undefined4)__real_3ff0000000000000;
      uVar47 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      pFVar27 = local_4a0.AllocatorInstance.Data + uVar26 * 8;
      local_48c = local_4a0.ArrayNum;
      FVar29.Data = local_4a0.AllocatorInstance.Data;
      uVar25 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar42 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      local_488 = pFVar27;
      while( true ) {
        local_480 = FVar29.Data;
        if (local_4a0.ArrayNum != (int)uVar26) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_4d8);
        }
        if (FVar29.Data == pFVar27) break;
        pAVar15 = *(AActor **)FVar29.Data;
        if (pAVar15 != (AActor *)0x0) {
          local_4b0 = (undefined8 *)0x0;
          local_4a8 = 0;
          pUVar18 = Z_Construct_UClass_UActorComponent_NoRegister();
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar18 != (UClass *)0x0) goto LAB_14b855a46;
LAB_14b855a77:
            pUVar19 = (UClass *)0x0;
          }
          else {
            if (pUVar18 == (UClass *)0x0) goto LAB_14b855a77;
            UE::GC::MarkAsReachable((UObject *)pUVar18);
LAB_14b855a46:
            pUVar19 = Z_Construct_UClass_UActorComponent_NoRegister();
            if (pUVar19 == (UClass *)0x0) goto LAB_14b855a77;
            iVar2 = (int)pUVar19->_padding_;
            if (((int)pUVar18->_padding_ < iVar2) ||
               ((longlong *)*(undefined1 **)(pUVar18->_padding_ + (longlong)iVar2 * 8) !=
                &pUVar19->_padding_)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            pUVar19 = pUVar18;
            if (!bVar9) goto LAB_14b855a77;
          }
          pUVar20 = Z_Construct_UClass_UActorComponent_NoRegister();
          local_4c0 = (USceneComponent *)pUVar18;
          if (pUVar19 == pUVar20) {
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UClass *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pUVar18);
            }
            AActor::
            ForEachComponent_Internal<UActorComponent,1,1,_AActor::GetComponents<TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                      (pAVar15,(TSubclassOf<UActorComponent>)&local_4c0,
                       (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_4b0);
          }
          else {
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UClass *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pUVar18);
            }
            AActor::
            ForEachComponent_Internal<UActorComponent,0,1,_AActor::GetComponents<TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                      (pAVar15,(TSubclassOf<UActorComponent>)&local_4c0,
                       (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_4b0);
          }
          pUVar21 = (pAVar15->RootComponent).field0_0x0.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar21 != (USceneComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar21);
          }
          local_4b8.ObjectIndex = 0;
          local_4b8.ObjectSerialNumber = 0;
          local_4c0 = pUVar21;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar21 != (USceneComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar21);
          }
          FWeakObjectPtr::operator=(&local_4b8,(FObjectPtr)&local_4c0);
          pUVar13 = FWeakObjectPtr::Get(&local_4b8);
          iVar2 = (int)local_4a8;
          local_468 = *(double *)&pUVar13[0xd].field_0x8;
          dStack_460 = *(double *)&pUVar13[0xd].field_0x10;
          local_458 = *(double *)&pUVar13[0xd].field_0x18;
          local_3c0 = local_4b0 + (int)local_4a8;
          puVar28 = local_4b0;
          while( true ) {
            puVar8 = local_3c0;
            if ((int)local_4a8 != iVar2) {
              `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_4d8);
            }
            if (puVar28 == puVar8) break;
            pUVar21 = (USceneComponent *)*puVar28;
            if (pUVar21 != (USceneComponent *)0x0) {
              pUVar18 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
              iVar12 = (int)pUVar18->_padding_;
              if ((*(int *)(pUVar21->_padding_ + 0x38) < iVar12) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar21->_padding_ + 0x30) + (longlong)iVar12 * 8)
                  != &pUVar18->_padding_)) {
                pUVar21 = (USceneComponent *)0x0;
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar21 != (USceneComponent *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar21);
              }
              local_4d0.ObjectIndex = 0;
              local_4d0.ObjectSerialNumber = 0;
              local_4c0 = pUVar21;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar21 != (USceneComponent *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar21);
              }
              FWeakObjectPtr::operator=(&local_4d0,(FObjectPtr)&local_4c0);
              bVar9 = TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *)&local_4d0,
                                 (void *)0x0);
              if (!bVar9) {
                pUVar21 = (USceneComponent *)FWeakObjectPtr::Get(&local_4b8);
                bVar9 = TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::
                        UEOpEquals<USceneComponent,bool>
                                  ((TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *)&local_4d0,
                                   pUVar21);
                if (!bVar9) {
                  pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
                  (**(code **)(*(longlong *)pUVar13 + 0x4c8))(pUVar13,&local_4d0);
                  auVar1 = *(undefined1 (*) [16])&param_2->field0_0x0;
                  uVar7 = auVar1._0_8_;
                  uVar35 = auVar1._8_8_;
                  local_428 = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
                  local_388.field0_0x0._s_0.Z = 0.0;
                  uVar30 = auVar1._0_4_ & uVar25;
                  uVar33 = auVar1._4_4_ & uVar42;
                  if (((double)CONCAT44(uVar44,uVar43) <= (double)CONCAT44(uVar33,uVar30) &&
                       (double)CONCAT44(uVar33,uVar30) != (double)CONCAT44(uVar44,uVar43)) ||
                     (uVar30 = auVar1._8_4_ & uVar25, uVar33 = auVar1._12_4_ & uVar42,
                     (double)CONCAT44(uVar44,uVar43) <= (double)CONCAT44(uVar33,uVar30) &&
                     (double)CONCAT44(uVar33,uVar30) != (double)CONCAT44(uVar44,uVar43))) {
                    pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
                    lVar14 = (**(code **)(*(longlong *)pUVar13 + 0x498))(pUVar13,local_268);
                    if ((*(byte *)(lVar14 + 0xad) & 1) == 0) {
                      pUVar13 = FWeakObjectPtr::Get(&local_4d0);
                      uVar44 = SUB84(dStack_3d0,0);
                      uVar48 = (undefined4)((ulonglong)dStack_3d0 >> 0x20);
                      uVar43 = SUB84(dStack_3e0,0);
                      uVar45 = (undefined4)((ulonglong)dStack_3e0 >> 0x20);
                      dVar34 = *(double *)&pUVar13[0xd].field_0x8;
                      dVar40 = *(double *)&pUVar13[0xd].field_0x10;
                      local_418._s_0.Z = (double)*(undefined8 *)&pUVar13[0xd].field_0x18;
                    }
                    else {
                      pUVar13 = FWeakObjectPtr::Get(&local_4d0);
                      dVar36 = (double)CONCAT44(uStack_3e4,local_3e8);
                      uVar43 = SUB84(dStack_3e0,0);
                      uVar45 = (undefined4)((ulonglong)dStack_3e0 >> 0x20);
                      dVar38 = (double)CONCAT44(uStack_3d4,local_3d8);
                      uVar44 = SUB84(dStack_3d0,0);
                      uVar48 = (undefined4)((ulonglong)dStack_3d0 >> 0x20);
                      dVar40 = *(double *)&pUVar13[0xd].field_0x8 - local_468;
                      dVar39 = *(double *)&pUVar13[0xd].field_0x10 - dStack_460;
                      dVar6 = *(double *)&pUVar13[0xd].field_0x18 - local_458;
                      dVar41 = dVar39 * dVar36 - dVar40 * dStack_3e0;
                      dVar41 = dVar41 + dVar41;
                      dVar5 = dVar40 * dVar38 - dVar6 * dVar36;
                      dVar37 = dVar6 * dStack_3e0 - dVar39 * dVar38;
                      dVar5 = dVar5 + dVar5;
                      dVar37 = dVar37 + dVar37;
                      dVar34 = (dStack_3e0 * dVar41 - dVar5 * dVar38) + dStack_3d0 * dVar37 + dVar40
                               + local_468;
                      dVar40 = (dVar38 * dVar37 - dVar36 * dVar41) + dVar5 * dStack_3d0 + dVar39 +
                               dStack_460;
                      local_418._s_0.Z =
                           (dVar5 * dVar36 - dStack_3e0 * dVar37) + dStack_3d0 * dVar41 + dVar6 +
                           local_458;
                      local_428 = local_418._s_0.Z;
                    }
                    local_418._8_4_ = SUB84(dVar40,0);
                    local_418._s_0.X = dVar34;
                    local_418._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
                    dVar40 = (double)uVar7 * (double)uVar7 + (double)uVar35 * (double)uVar35;
                    if (dVar40 == (double)CONCAT44(uVar47,uVar46)) {
                      local_400._s_0.Z = local_388.field0_0x0._s_0.Z;
                    }
                    else if (__real_3e45798ee0000000 <= dVar40) {
                      local_428 = 0.0;
                      local_400._s_0.Z = 0.0;
                      local_4c0 = (USceneComponent *)
                                  ((double)CONCAT44(uVar47,uVar46) / SQRT(dVar40));
                      uVar7 = (double)local_4c0 * (double)uVar7;
                      uVar35 = (double)local_4c0 * (double)uVar35;
                    }
                    else {
                      local_400._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                      uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                    }
                    dVar34 = (double)uVar35 * (double)CONCAT44(uStack_3e4,local_3e8) -
                             (double)uVar7 * (double)CONCAT44(uVar45,uVar43);
                    dVar34 = dVar34 + dVar34;
                    dVar38 = (double)uVar7 * (double)CONCAT44(uStack_3d4,local_3d8) -
                             local_400._s_0.Z * (double)CONCAT44(uStack_3e4,local_3e8);
                    dVar36 = local_400._s_0.Z * (double)CONCAT44(uVar45,uVar43) -
                             (double)uVar35 * (double)CONCAT44(uStack_3d4,local_3d8);
                    dVar38 = dVar38 + dVar38;
                    dVar40 = (double)CONCAT44(uVar48,uVar44) * dVar34 + local_400._s_0.Z;
                    dVar36 = dVar36 + dVar36;
                    dVar6 = (double)CONCAT44(uStack_3e4,local_3e8);
                    dVar5 = (dVar36 * (double)CONCAT44(uStack_3d4,local_3d8) -
                            (double)CONCAT44(uStack_3e4,local_3e8) * dVar34) +
                            dVar38 * (double)CONCAT44(uVar48,uVar44) + (double)uVar35;
                    dVar34 = ((double)CONCAT44(uVar45,uVar43) * dVar34 -
                             dVar38 * (double)CONCAT44(uStack_3d4,local_3d8)) +
                             dVar36 * (double)CONCAT44(uVar48,uVar44) + (double)uVar7;
                    this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
                    fVar31 = UDS_MovementCore::GetMoveSpeed(this_01);
                    fVar32 = fVar31 * local_490;
                    if (fVar31 * local_490 <= __real_42c80000) {
                      fVar32 = __real_42c80000;
                    }
                    dVar37 = (double)fVar32;
                    local_450._s_0.X = dVar37 * dVar34 + local_418._s_0.X;
                    local_450._s_0.Y = dVar37 * dVar5 + local_418._s_0.Y;
                    local_450._s_0.Z =
                         dVar37 * ((dVar38 * dVar6 - dVar36 * (double)CONCAT44(uVar45,uVar43)) +
                                  dVar40) + local_418._s_0.Z;
                    pAVar15 = (AActor *)FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
                    lVar14 = *(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                    if ((*(int *)(lVar14 + 0x9d4c) < ::_TSS0) &&
                       (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                      StatPtr_ObstacleProbe =
                           (FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_UDS_MountBaseAbility::UpdateBlockByChildCollision(float,UE::Math::TVector<double>_const_&)_::_19_::<lambda_2>::operator()(void)const_::_2_::FStat_ObstacleProbe>
                            )0x0;
                      pFVar22 = ::FName::FName(&local_398,"ObstacleProbe");
                      FThreadSafeStaticStatBase::DoSetup
                                ((FThreadSafeStaticStatBase *)&StatPtr_ObstacleProbe,*pFVar22,
                                 L"ObstacleProbe","STATGROUP_CollisionTags","STATCAT_Advanced",
                                 L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
                      _Init_thread_footer(&::_TSS0);
                    }
                    FVar23 = StatPtr_ObstacleProbe;
                    if (StatPtr_ObstacleProbe ==
                        (FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_UDS_MountBaseAbility::UpdateBlockByChildCollision(float,UE::Math::TVector<double>_const_&)_::_19_::<lambda_2>::operator()(void)const_::_2_::FStat_ObstacleProbe>
                         )0x0) {
                      pFVar22 = ::FName::FName(&local_390,"ObstacleProbe");
                      FVar23 = (FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_UDS_MountBaseAbility::UpdateBlockByChildCollision(float,UE::Math::TVector<double>_const_&)_::_19_::<lambda_2>::operator()(void)const_::_2_::FStat_ObstacleProbe>
                                )FThreadSafeStaticStatBase::DoSetup
                                           ((FThreadSafeStaticStatBase *)&StatPtr_ObstacleProbe,
                                            *pFVar22,L"ObstacleProbe","STATGROUP_CollisionTags",
                                            "STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,
                                            true,false,MCR_Invalid);
                    }
                    local_3c8.StatIdPtr = (TStatIdData *)FVar23;
                    if ((*(int *)(lVar14 + 0x9d4c) < ::_TSS0) &&
                       (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                      ::FName::FName(&::StaticName,"ObstacleProbe");
                      _Init_thread_footer(&::_TSS0);
                    }
                    FCollisionQueryParams::FCollisionQueryParams
                              (&local_168,::StaticName,&local_3c8,false,pAVar15);
                    pAVar15 = (AActor *)FWeakObjectPtr::Get(&(this->MainCharacter).WeakPtr);
                    FCollisionQueryParams::AddIgnoredActor(&local_168,pAVar15);
                    memset(local_368,0,0x100);
                    uStack_420 = 0xffffffff;
                    uStack_41b = 0;
                    local_2b0.ObjectIndex = 0;
                    local_2b0.ObjectSerialNumber = 0;
                    FStack_2a8.ObjectIndex = 0;
                    FStack_2a8.ObjectSerialNumber = 0;
                    uStack_419 = 0;
                    local_428 = 0.0;
                    uStack_41c = 0;
                    uStack_298._0_4_ = -1;
                    uStack_298._4_1_ = Invalid;
                    uStack_298._5_3_ = 0;
                    local_368._4_4_ = 1.0;
                    local_2c4 = -1;
                    local_2a0 = (IActorInstanceManagerInterface *)0x0;
                    pUVar13 = FWeakObjectPtr::Get(&local_4d0);
                    dVar39 = (double)CONCAT44(uStack_3e4,local_3e8);
                    dVar41 = (double)CONCAT44(uStack_3d4,local_3d8);
                    dVar6 = *(double *)&pUVar13[0xc].field_0x20;
                    dVar36 = *(double *)(pUVar13 + 0xd);
                    dVar38 = *(double *)&pUVar13[0xc].field_0x10;
                    dVar37 = *(double *)&pUVar13[0xc].field_0x18;
                    dVar40 = dVar39 * dVar6 *
                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                             dStack_3d0 * dVar37 +
                             dStack_3e0 * dVar36 *
                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                             dVar41 * dVar38 *
                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                    local_3a8 = dVar39 * dVar37 *
                                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                                dStack_3d0 * dVar6 +
                                dStack_3e0 * dVar38 *
                                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                                dVar41 * dVar36 *
                                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                    dStack_3a0 = dVar39 * dVar38 *
                                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                                 dStack_3d0 * dVar36 +
                                 dStack_3e0 * dVar37 *
                                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                                 dVar41 * dVar6 *
                                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                    local_3b8._8_4_ = SUB84(dVar40,0);
                    local_3b8._0_8_ =
                         dVar39 * dVar36 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                         dStack_3d0 * dVar38 +
                         dStack_3e0 * dVar6 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                         dVar41 * dVar37 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                    local_3b8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
                    pUVar13 = FWeakObjectPtr::Get(&local_4d0);
                    (**(code **)(*(longlong *)pUVar13 + 0x8b8))(pUVar13,&local_478,0);
                    pUVar24 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
                    bVar9 = UWorld::SweepSingleByChannel
                                      (pUVar24,(FHitResult *)local_368,
                                       (TVector<double> *)&local_418._s_0,
                                       (TVector<double> *)&local_450._s_0,(TQuat<double> *)local_3b8
                                       ,ECC_GameTraceChannel1,&local_478,&local_168,
                                       &FCollisionResponseParams::DefaultResponseParam);
                    uVar46 = SUB84(pUVar24,0);
                    bVar10 = UDS_GameInstance::IsCharacterCollisionBlockDebug();
                    uVar44 = local_478.field1_0x4.Box.HalfExtentY;
                    uVar43 = local_478.field1_0x4.Box.HalfExtentX;
                    if ((bVar10) && (bVar9)) {
                      dVar40 = (double)local_3b8._0_8_ * (double)local_3b8._0_8_ +
                               local_3a8 * local_3a8;
                      dVar6 = (double)local_3b8._8_8_ * (double)local_3b8._8_8_ +
                              dStack_3a0 * dStack_3a0;
                      dVar36 = dVar6 + dVar40;
                      dVar40 = dVar40 + dVar6;
                      dVar6 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar36;
                      dVar38 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar40;
                      lVar14 = -(ulonglong)
                                ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
                                (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & _UNK_15061cc8c,
                                                 SUB84(dVar38,0) & _UNK_15061cc88));
                      dVar36 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar36;
                      dVar40 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar40;
                      auVar4._8_4_ = (int)lVar14;
                      auVar4._0_8_ = -(ulonglong)
                                      ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32
                                               [2] <
                                      (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                       SUB84(dVar6,0) &
                                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                                      );
                      auVar4._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
                      uVar25 = movmskpd(uVar46,auVar4);
                      lVar14 = -(ulonglong)
                                ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
                                (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) & _UNK_15061cc8c,
                                                 SUB84(dVar40,0) & _UNK_15061cc88));
                      auVar1._8_4_ = (int)lVar14;
                      auVar1._0_8_ = -(ulonglong)
                                      ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32
                                               [0] <
                                      (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) &
                                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                       SUB84(dVar36,0) &
                                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                                      );
                      auVar1._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
                      iVar12 = movmskpd((int)CONCAT71(extraout_var,bVar10),auVar1);
                      if ((uVar25 & 0x3fffffff) == 0 && iVar12 == 0) {
                        pUVar24 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
                        fVar31 = __real_3fc00000;
                        fVar32 = __real_3dcccccd;
                        DrawDebugCapsule(pUVar24,(TVector<double> *)&local_418._s_0,(float)uVar44,
                                         (float)uVar43,(TQuat<double> *)local_3b8,&FColor::Magenta,
                                         false,__real_3dcccccd,'\0',__real_3fc00000);
                        uVar44 = local_478.field1_0x4.Box.HalfExtentY;
                        uVar43 = local_478.field1_0x4.Box.HalfExtentX;
                        pUVar24 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
                        DrawDebugCapsule(pUVar24,(TVector<double> *)&local_450._s_0,(float)uVar44,
                                         (float)uVar43,(TQuat<double> *)local_3b8,&FColor::Red,false
                                         ,fVar32,'\0',fVar31);
                      }
                    }
                    uVar42 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
                    uVar25 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
                    if ((((local_2bb & 1) != 0) && (bVar9)) &&
                       ((float)(dVar5 * local_320 + dVar34 * (double)local_368._64_8_) < 0.0)) {
                      pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
                      cVar11 = (**(code **)(*(longlong *)pUVar13 + 0x328))(pUVar13,local_368,1);
                      if (cVar11 == '\x01') {
                        pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
                        (**(code **)(*(longlong *)pUVar13 + 0x4b0))(pUVar13,local_368);
                      }
                    }
                    if (local_168.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
                        (ForElementType<unsigned_int>)0x0) {
                      FMemory::Free((void *)local_168.IgnoreSourceObjects.AllocatorInstance.
                                            SecondaryData);
                    }
                    if (local_168.IgnoreComponents.AllocatorInstance.SecondaryData !=
                        (ForElementType<unsigned_int>)0x0) {
                      FMemory::Free((void *)local_168.IgnoreComponents.AllocatorInstance.
                                            SecondaryData);
                    }
                    uVar46 = (undefined4)__real_3ff0000000000000;
                    uVar47 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
                    uVar43 = (undefined4)__real_3f1a36e2e0000000;
                    uVar44 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
                    param_2 = local_4c8;
                  }
                }
              }
            }
            puVar28 = puVar28 + 1;
          }
          pFVar27 = local_488;
          if (local_4b0 != (undefined8 *)0x0) {
            FMemory::Free(local_4b0);
            pFVar27 = local_488;
          }
        }
        uVar26 = (ulonglong)local_48c;
        FVar29.Data = local_480 + 8;
      }
    }
    if (local_4a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a0.AllocatorInstance.Data);
    }
  }
  return;
}

