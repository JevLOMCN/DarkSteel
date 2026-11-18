// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b4dc2c0

UClass * __cdecl UDS_LockOnTargetAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LockOnTargetAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LockOnTargetAbility",
               &Z_Registration_Info_UClass_UDS_LockOnTargetAbility.InnerSingleton,
               StaticRegisterNativesUDS_LockOnTargetAbility,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_LockOnTargetAbility>,
               InternalVTableHelperCtorCaller<UDS_LockOnTargetAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LockOnTargetAbility.InnerSingleton;
}

// UDS_LockOnTargetAbility @ 14b4e0030

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

UDS_LockOnTargetAbility * __thiscall
UDS_LockOnTargetAbility::UDS_LockOnTargetAbility
          (UDS_LockOnTargetAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->LockOnTargetAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_LockOnTargetAbility @ 14b4e0550

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

void __thiscall UDS_LockOnTargetAbility::~UDS_LockOnTargetAbility(UDS_LockOnTargetAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4e24f0

UClass * __cdecl UDS_LockOnTargetAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LockOnTargetAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LockOnTargetAbility",
               &Z_Registration_Info_UClass_UDS_LockOnTargetAbility.InnerSingleton,
               StaticRegisterNativesUDS_LockOnTargetAbility,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_LockOnTargetAbility>,
               InternalVTableHelperCtorCaller<UDS_LockOnTargetAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LockOnTargetAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b4e26d0

bool __thiscall UDS_LockOnTargetAbility::ShouldTickComponent(UDS_LockOnTargetAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_LockOnTargetAbility @ 14b4e2920

void __cdecl UDS_LockOnTargetAbility::StaticRegisterNativesUDS_LockOnTargetAbility(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_LockOnTargetAbility_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnCameraLockOnTraget @ 14b4e3990

void __cdecl
UDS_LockOnTargetAbility::execOnCameraLockOnTraget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  double local_28;
  double dStack_20;
  TVector2<double>_u_0 local_18;
  
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
  bVar2 = local_res10[0] != 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18._s_0.X = local_28;
  local_18._s_0.Y = dStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnCameraLockOnTraget((UDS_LockOnTargetAbility *)param_1,bVar2,(TVector2<double> *)&local_18._s_0);
  return;
}

// UDS_LockOnTargetAbility @ 14b7d83b0

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

UDS_LockOnTargetAbility * __thiscall
UDS_LockOnTargetAbility::UDS_LockOnTargetAbility
          (UDS_LockOnTargetAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->LockOnTargetAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ClearVariables @ 14b7dc930

void __thiscall UDS_LockOnTargetAbility::ClearVariables(UDS_LockOnTargetAbility *this)

{
  TWeakObjectPtr<UDS_LockOnTargetAbilityData,FWeakObjectPtr> *this_00;
  uint uVar1;
  bool bVar2;
  UObject *pUVar3;
  
  this_00 = &this->LockOnTargetAbilityData;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    *(undefined8 *)&pUVar3[2].field_0x8 = 0;
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    uVar1 = DefaultSocketName.Number;
    *(uint *)&pUVar3[2].field_0x10 = DefaultSocketName.ComparisonIndex.Value;
    *(uint *)&pUVar3[2].field_0x14 = uVar1;
  }
  return;
}

// FindVisibleTargets @ 14b7eaa20

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

TArray<AActor_*,TSizedDefaultAllocator<32>_> * __thiscall
UDS_LockOnTargetAbility::FindVisibleTargets
          (UDS_LockOnTargetAbility *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  double dVar1;
  undefined1 auVar2 [16];
  int iVar3;
  USceneComponent *this_00;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  FObjectPtr_u_0 this_01;
  FScriptContainerElement *pFVar12;
  double dVar13;
  bool bVar14;
  int iVar15;
  UDS_GameInstance *pUVar16;
  UWorld *pUVar17;
  APlayerController *pAVar18;
  UClass *pUVar19;
  TWeakObjectPtr<UDS_MainCameraComponent,FWeakObjectPtr> this_02;
  UObject *pUVar20;
  TVector<double>_u_0 *pTVar21;
  ForAnyElementType FVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar26;
  double dVar25;
  double dVar27;
  undefined8 uVar28;
  UClass *local_res10;
  FObjectPtr_u_0 local_res18;
  FScriptContainerElement *local_res20;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_148;
  double local_138;
  double dStack_130;
  double local_128;
  TVector<double>_u_0 local_120;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  undefined1 local_f0 [184];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar16 = UDS_GameInstance::GetInst();
  if (pUVar16 == (UDS_GameInstance *)0x0) {
    return __return_storage_ptr__;
  }
  pUVar17 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  pAVar18 = UWorld::GetFirstPlayerController(pUVar17);
  if (pAVar18 == (APlayerController *)0x0) {
    return __return_storage_ptr__;
  }
  pUVar19 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
  iVar3 = (int)pUVar19->_padding_;
  if (*(int *)(pAVar18->_padding_ + 0x38) < iVar3) {
    return __return_storage_ptr__;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pAVar18->_padding_ + 0x30) + (longlong)iVar3 * 8)
      != &pUVar19->_padding_) {
    return __return_storage_ptr__;
  }
  local_res18 = (FObjectPtr_u_0)pAVar18->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if ((ADS_MainCharacter *)local_res18.Handle == (ADS_MainCharacter *)0x0) {
      return __return_storage_ptr__;
    }
    UE::GC::MarkAsReachable(local_res18.Handle);
  }
  if ((ADS_MainCharacter *)local_res18.Handle == (ADS_MainCharacter *)0x0) {
    return __return_storage_ptr__;
  }
  pUVar19 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
  bVar14 = FObjectPtr::IsA((FObjectPtr *)&local_res18,pUVar19);
  this_01 = local_res18;
  if (!bVar14) {
    return __return_storage_ptr__;
  }
  if ((ADS_MainCharacter *)local_res18.Handle == (ADS_MainCharacter *)0x0) {
    return __return_storage_ptr__;
  }
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_res10 = Z_Construct_UClass_ADS_EntityActorBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar16 = UDS_GameInstance::GetInst();
  pUVar17 = UGameInstance::GetWorld((UGameInstance *)pUVar16);
  UGameplayStatics::GetAllActorsOfClass
            ((UObject *)pUVar17,(TSubclassOf<AActor>)&local_res10,&local_148);
  this_02 = ADS_MainCharacter::GetFollowCamera((ADS_MainCharacter *)this_01.Handle);
  pUVar20 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.WeakPtr);
  local_108 = *(undefined4 *)&pUVar20[0xd].field_0x8;
  uStack_104 = *(undefined4 *)&pUVar20[0xd].field_0xc;
  uStack_100 = *(undefined4 *)&pUVar20[0xd].field_0x10;
  uStack_fc = *(undefined4 *)&pUVar20[0xd].field_0x14;
  local_f8 = *(double *)&pUVar20[0xd].field_0x18;
  (**(code **)(pAVar18->_padding_ + 0x7a8))(pAVar18,local_f0);
  this_00 = (USceneComponent *)((pAVar18->PlayerCameraManager).field0_0x0.DebugPtr)->_padding_;
  if (this_00 == (USceneComponent *)0x0) {
    pTVar21 = &local_120;
    local_120._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
    local_120._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
    local_120._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  }
  else {
    pTVar21 = &USceneComponent::GetForwardVector(this_00,(TVector<double> *)&local_120._s_0)->
               field0_0x0;
  }
  dVar13 = local_f8;
  fVar11 = __real_3f4b1934;
  dVar10 = __real_3e45798ee0000000;
  dVar9 = __real_3ff0000000000000;
  iVar3 = local_148.ArrayNum;
  dVar6 = (((TVector<double>_u_0 *)&(pTVar21->_s_0).X)->_s_0).X;
  dVar7 = (pTVar21->_s_0).Y;
  dVar1 = (pTVar21->_s_0).Z;
  local_res20 = local_148.AllocatorInstance.Data + (longlong)local_148.ArrayNum * 8;
  dVar8 = (double)CONCAT44(uStack_fc,uStack_100);
  FVar22.Data = local_148.AllocatorInstance.Data;
  local_138 = dVar6;
  dStack_130 = dVar7;
  local_128 = dVar1;
  do {
    pFVar12 = local_res20;
    if (local_148.ArrayNum != iVar3) {
      `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (FVar22.Data == pFVar12) goto LAB_14b7eae53;
    lVar4 = *(longlong *)FVar22.Data;
    if (lVar4 != 0) {
      pUVar19 = Z_Construct_UClass_ADS_EntityActorBase_NoRegister();
      iVar15 = (int)pUVar19->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar15) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar15 * 8)
          != &pUVar19->_padding_)) {
LAB_14b7eae53:
        if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      bVar14 = FDS_EntityBase::IsEnemy
                         ((FDS_EntityBase *)(lVar4 + 0x2c0),
                          (FDS_EntityBase *)&this_01.Handle[0x29].field_0x10);
      if (bVar14) {
        lVar5 = *(longlong *)(lVar4 + 0x1b8);
        uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        if (lVar5 == 0) {
          local_120._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          dVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
        }
        else {
          local_120._s_0.Z = *(double *)(lVar5 + 0x220);
          auVar2 = *(undefined1 (*) [16])(lVar5 + 0x210);
          uVar24 = auVar2._0_4_;
          uVar26 = auVar2._4_4_;
          dVar25 = auVar2._8_8_;
        }
        dVar23 = (double)CONCAT44(uVar26,uVar24) - (double)CONCAT44(uStack_104,local_108);
        local_128 = local_120._s_0.Z - dVar13;
        dVar25 = dVar25 - dVar8;
        dVar27 = dVar25 * dVar25 + dVar23 * dVar23 + local_128 * local_128;
        uVar28 = local_128;
        if (dVar27 != dVar9) {
          if (dVar10 <= dVar27) {
            dVar27 = dVar9 / SQRT(dVar27);
            dVar23 = dVar23 * dVar27;
            dVar25 = dVar25 * dVar27;
            uVar28 = dVar27 * local_128;
          }
          else {
            local_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            dVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
            dVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
            uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
        }
        if (fVar11 < (float)(dVar7 * dVar25 + dVar6 * dVar23 + dVar1 * (double)uVar28)) {
          iVar15 = __return_storage_ptr__->ArrayNum;
          if (iVar15 == __return_storage_ptr__->ArrayMax) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&__return_storage_ptr__->AllocatorInstance,
                                &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar15 + 1;
          *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar15 * 8) =
               lVar4;
        }
      }
    }
    FVar22.Data = FVar22.Data + 8;
  } while( true );
}

// OnAbilityRetryActivate @ 14b7f4c80

void __thiscall UDS_LockOnTargetAbility::OnAbilityRetryActivate(UDS_LockOnTargetAbility *this)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  bool bVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  UObject *local_res18 [2];
  TVector2<double>_u_0 local_28;
  
  pUVar7 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar7 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18[0] = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  pUVar7 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar7 != (UObject *)0x0) {
    pUVar8 = Z_Construct_UClass_UDS_LockOnTargetAbilityContext_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar8->_padding_)) goto LAB_14b7f4d2a;
  }
  pUVar7 = (UObject *)0x0;
LAB_14b7f4d2a:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  bVar6 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar6) {
    pUVar7 = FWeakObjectPtr::Get(&local_res8);
    if ((*(double *)(pUVar7 + 1) != (this->InputDirection).field0_0x0._s_0.X) ||
       (*(double *)&pUVar7[1].field_0x8 != (this->InputDirection).field0_0x0._s_0.Y)) {
      pUVar7 = FWeakObjectPtr::Get(&local_res8);
      dVar5 = __real_3f1a36e2e0000000;
      uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar9 = *(uint *)(pUVar7 + 1);
      uVar11 = *(uint *)&pUVar7[1].field_0x4;
      uVar3 = *(undefined4 *)&pUVar7[1].field_0x8;
      uVar4 = *(undefined4 *)&pUVar7[1].field_0xc;
      *(uint *)&(this->InputDirection).field0_0x0 = uVar9;
      *(uint *)((longlong)&(this->InputDirection).field0_0x0 + 4) = uVar11;
      *(undefined4 *)((longlong)&(this->InputDirection).field0_0x0 + 8) = uVar3;
      *(undefined4 *)((longlong)&(this->InputDirection).field0_0x0 + 0xc) = uVar4;
      uVar9 = uVar9 & uVar10;
      uVar11 = uVar11 & uVar12;
      if ((dVar5 <= (double)CONCAT44(uVar11,uVar9) && (double)CONCAT44(uVar11,uVar9) != dVar5) ||
         (uVar1 = *(undefined8 *)((longlong)&(this->InputDirection).field0_0x0 + 8),
         uVar10 = (uint)uVar1 & uVar10, uVar12 = (uint)((ulonglong)uVar1 >> 0x20) & uVar12,
         dVar5 <= (double)CONCAT44(uVar12,uVar10) && (double)CONCAT44(uVar12,uVar10) != dVar5)) {
        local_28._s_0.X = (double)*(undefined8 *)(pUVar7 + 1);
        local_28._s_0.Y = (double)*(undefined8 *)&pUVar7[1].field_0x8;
        OnCameraLockOnTraget(this,true,(TVector2<double> *)&local_28._s_0);
      }
    }
  }
  return;
}

// OnCameraLockOnTraget @ 14b7f4e50

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_LockOnTargetAbility::OnCameraLockOnTraget
          (UDS_LockOnTargetAbility *this,bool param_1,TVector2<double> *param_2)

{
  TWeakObjectPtr<UDS_LockOnTargetAbilityData,FWeakObjectPtr> *this_00;
  FName *pFVar1;
  double dVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  FWeakObjectPtr *pFVar6;
  longlong *plVar7;
  bool bVar8;
  char cVar9;
  UDS_AbilitySystemComponent *pUVar10;
  UObject *pUVar11;
  UObject *pUVar12;
  FDS_EntityBase *pFVar13;
  UObject *pUVar14;
  FDS_EntityBase *pFVar15;
  FWeakObjectPtr *this_01;
  UDS_MovementCore *this_02;
  TVector<double> *pTVar16;
  double *pdVar17;
  UDS_WindowManager *this_03;
  undefined8 *puVar18;
  ulong64 uVar19;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar20;
  byte bVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined8 unaff_RBX;
  uint7 uVar25;
  FName FVar24;
  int iVar26;
  ForAnyElementType FVar27;
  FScriptContainerElement *pFVar28;
  uint uVar29;
  uint *puVar30;
  uint uVar31;
  uint uVar32;
  bool bVar33;
  float fVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  double dVar39;
  undefined4 uVar41;
  undefined1 auVar40 [16];
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined1 auStack_468 [32];
  EDS_AbilityDeactivateType local_448 [8];
  undefined4 local_440;
  undefined1 local_438 [8];
  FDelegateAllocation local_430;
  UObject *local_420;
  FWeakObjectPtr *local_418;
  code *local_408 [2];
  uint local_3f8;
  FWeakObjectPtr local_3f0;
  FWeakObjectPtr local_3e8;
  FWeakObjectPtr local_3e0;
  TVector2<double>_u_0 local_3d8;
  FWeakObjectPtr local_3c8;
  FScriptContainerElement *local_3c0;
  FScriptContainerElement *local_3b8;
  UDS_LockOnTargetAbility *local_3b0;
  FWeakObjectPtr local_3a8;
  FWeakObjectPtr local_3a0;
  FWeakObjectPtr local_398;
  undefined8 local_390;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_388;
  TVector<double>_u_0 local_378;
  FDS_EntityBase *local_360;
  ulong64 local_358;
  TVector2<double> *local_350;
  UObject *local_348;
  UDS_LockOnTargetAbility *local_340;
  undefined1 local_338 [8];
  int local_330;
  TVector2<double>_u_0 local_328;
  int local_318;
  UObject *local_310;
  longlong *local_308;
  uint uStack_300;
  uint uStack_2fc;
  undefined1 *local_2f8;
  undefined4 uStack_2f0;
  uint uStack_2ec;
  uint local_2e8;
  undefined4 uStack_2e4;
  int iStack_2e0;
  undefined4 uStack_2dc;
  longlong *local_2d8;
  undefined1 auStack_2d0 [16];
  uint uStack_2c0;
  uint uStack_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  undefined8 *local_290;
  double *local_288;
  FName *local_280;
  undefined8 *local_278;
  FDestructionSentinel local_270;
  FName local_258;
  TVector<double>_u_0 TStack_250;
  FDestructionSentinel local_238;
  FDelegateAllocation *local_220;
  double local_208;
  double local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  undefined1 local_1d0 [8];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  double local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  double local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  double local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  double local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  TVector<double> local_138;
  undefined1 local_120 [24];
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_108 [2];
  undefined4 local_d4;
  undefined1 local_c8 [32];
  uint *local_a8;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  ForElementType<FSetElementId> local_88;
  int local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_468;
  local_3b0 = this;
  local_350 = param_2;
  if (param_1) {
    uVar25 = (uint7)((ulonglong)unaff_RBX >> 8);
    if ((UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X == (param_2->field0_0x0)._s_0.X)
       && (UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y == (param_2->field0_0x0)._s_0.Y)
       ) {
      uVar22 = (ulonglong)uVar25 << 8;
    }
    else {
      uVar22 = CONCAT71(uVar25,1);
    }
    this_00 = &this->LockOnTargetAbilityData;
    local_440 = (undefined4)uVar22;
    local_418 = &this_00->WeakPtr;
    bVar8 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar8) {
      pUVar11 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar22 = uVar22 & 0xff;
      if (*(longlong *)&pUVar11[2].field_0x8 == 0) {
        uVar22 = 0;
      }
      local_440 = (undefined4)uVar22;
    }
    ADS_PlayerController::GetPlayerController();
    bVar8 = FWeakObjectPtr::IsValid(&local_3a8);
    if (bVar8) {
      ADS_MainCharacter::GetMainPlayer();
      bVar8 = FWeakObjectPtr::IsValid(&local_3a0);
      if (bVar8) {
        FindVisibleTargets(this,&local_388);
        if ((local_388.ArrayNum == 0) && ((char)uVar22 == '\0')) {
          local_448[3] = 1;
          pUVar10 = (UDS_AbilitySystemComponent *)
                    FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          UDS_AbilitySystemComponent::DeactivateAbilityByTag
                    (pUVar10,(FGameplayTag *)&this->_padding_,local_448 + 3);
        }
        else {
          DS_Util::GetScreenCenterPosition((TVector2<double> *)&local_3d8._s_0);
          pUVar11 = FWeakObjectPtr::Get(&local_3a8);
          fVar34 = UWidgetLayoutLibrary::GetViewportScale(pUVar11);
          dVar5 = __real_4177d78400000000;
          uVar22 = (ulonglong)local_388.ArrayNum;
          uVar48 = (undefined4)__real_4197d783fc000000;
          uVar49 = (undefined4)((ulonglong)__real_4197d783fc000000 >> 0x20);
          pFVar28 = local_388.AllocatorInstance.Data + uVar22 * 8;
          local_420 = (UObject *)0x0;
          local_3f8 = local_388.ArrayNum;
          dVar39 = local_3d8._s_0.Y * (__real_3ff0000000000000 / (double)fVar34);
          auVar40._8_8_ = 0;
          auVar40._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_3d8._8_4_ = SUB84(dVar39,0);
          local_3d8._s_0.X = local_3d8._s_0.X * (__real_3ff0000000000000 / (double)fVar34);
          local_3d8._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
          FVar24 = DefaultSocketName;
          FVar27.Data = local_388.AllocatorInstance.Data;
          uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar41 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          local_3c0 = pFVar28;
LAB_14b7f5096:
          local_3b8 = FVar27.Data;
          if (local_388.ArrayNum != (uint)uVar22) {
            local_448[4] = 0;
            `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_448 + 4);
            auVar40._8_8_ = 0;
            auVar40._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uVar41 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          }
          pUVar11 = local_420;
          uVar29 = 0;
          if (FVar27.Data != pFVar28) {
            pUVar11 = *(UObject **)FVar27.Data;
            if (pUVar11 != (UObject *)0x0) {
              lVar23 = *(longlong *)(pUVar11 + 0xb);
              if (lVar23 == 0) {
                local_208 = auVar40._0_8_;
                local_1b0 = uVar38;
                uStack_1ac = uVar41;
                uStack_1a8 = uVar42;
                uStack_1a4 = uVar43;
                local_1a0 = local_208;
              }
              else {
                local_208 = *(double *)(lVar23 + 0x220);
                uVar38 = *(undefined4 *)(lVar23 + 0x210);
                uVar41 = *(undefined4 *)(lVar23 + 0x214);
                uVar42 = *(undefined4 *)(lVar23 + 0x218);
                uVar43 = *(undefined4 *)(lVar23 + 0x21c);
                local_1c8 = uVar38;
                uStack_1c4 = uVar41;
                uStack_1c0 = uVar42;
                uStack_1bc = uVar43;
                local_1b8 = local_208;
              }
              pUVar12 = FWeakObjectPtr::Get(&local_3a0);
              auVar40._8_8_ = 0;
              auVar40._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              lVar23 = *(longlong *)(pUVar12 + 0xb);
              if (lVar23 == 0) {
                local_170 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                local_180 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                uStack_17c = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                uStack_178 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                uStack_174 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                local_1f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                uVar45 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                uVar46 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                uVar47 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
              }
              else {
                local_1f0 = *(double *)(lVar23 + 0x220);
                local_198 = *(undefined4 *)(lVar23 + 0x210);
                uStack_194 = *(undefined4 *)(lVar23 + 0x214);
                uStack_190 = *(undefined4 *)(lVar23 + 0x218);
                uStack_18c = *(undefined4 *)(lVar23 + 0x21c);
                uVar44 = local_198;
                uVar45 = uStack_194;
                uVar46 = uStack_190;
                uVar47 = uStack_18c;
                local_188 = local_1f0;
              }
              dVar35 = (double)CONCAT44(uVar41,uVar38) - (double)CONCAT44(uVar45,uVar44);
              dVar39 = (double)CONCAT44(uVar43,uVar42) - (double)CONCAT44(uVar47,uVar46);
              uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              uVar41 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
              if (dVar5 < dVar39 * dVar39 + dVar35 * dVar35 +
                          (local_208 - local_1f0) * (local_208 - local_1f0)) goto LAB_14b7f590a;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar11);
              }
              local_3f0.ObjectIndex = 0;
              local_3f0.ObjectSerialNumber = 0;
              local_310 = pUVar11;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar11);
              }
              FWeakObjectPtr::operator=(&local_3f0,(FObjectPtr)&local_310);
              pFVar13 = FDS_EntityBase::GetEntityBaseFromActor
                                  ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_3f0);
              local_360 = pFVar13;
              if (pFVar13 != (FDS_EntityBase *)0x0) {
                local_c8._0_8_ = 0;
                local_c8._8_8_ = 0;
                local_a8 = (uint *)0x0;
                local_a0 = 0;
                local_9c = 0x80;
                local_98 = 0xffffffff;
                local_94 = 0;
                local_88 = (ForElementType<FSetElementId>)0x0;
                local_80 = 0;
                bVar8 = FDS_EntityBase::GetIsMultiHitCollision(pFVar13);
                if (bVar8) {
                  (**(code **)(pFVar13->_padding_ + 0x80))(pFVar13);
                  bVar8 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)
                                     &local_398,(void *)0x0);
                  if (!bVar8) {
                    iVar26 = TargetSocketNames.ArrayNum;
                    pFVar28 = TargetSocketNames.AllocatorInstance.Data + (longlong)iVar26 * 8;
                    FVar27 = TargetSocketNames.AllocatorInstance;
                    while( true ) {
                      if (TargetSocketNames.ArrayNum != iVar26) {
                        local_448[5] = 0;
                        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::
                        operator()(local_448 + 5);
                      }
                      if (FVar27.Data == pFVar28) break;
                      local_390 = *(undefined8 *)FVar27.Data;
                      pUVar12 = FWeakObjectPtr::Get(&local_398);
                      (**(code **)(*(longlong *)pUVar12 + 0x528))(pUVar12,&local_2a8,local_390);
                      if (((local_2a8 !=
                            (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                             UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_)
                           ) || (local_2a0 !=
                                 (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0.
                                                  _12_4_,UE::Math::TVector<double>::ZeroVector.
                                                         field0_0x0._8_4_))) ||
                         (local_298 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)) {
                        local_290 = &local_390;
                        local_288 = &local_2a8;
                        TSet<TTuple<FName,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                        ::Emplace<TPairInitializer<FName_&,UE::Math::TVector<double>_&>_>
                                  ((TSet<TTuple<FName,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                                    *)local_c8,
                                   (TPairInitializer<FName_&,UE::Math::TVector<double>_&> *)
                                   local_338,(bool *)&local_290);
                      }
                      FVar27.Data = FVar27.Data + 8;
                    }
                  }
                }
                else {
                  lVar23 = *(longlong *)(pUVar11 + 0xb);
                  if (lVar23 == 0) {
                    local_1e8 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                         UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
                    uStack_1e0 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                          UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
                    local_1d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  }
                  else {
                    local_158 = *(double *)(lVar23 + 0x220);
                    local_1e8 = *(undefined8 *)(lVar23 + 0x210);
                    uStack_1e0 = *(undefined8 *)(lVar23 + 0x218);
                    local_1d8 = local_158;
                    local_168 = local_1e8;
                    uStack_160 = uStack_1e0;
                  }
                  auVar40._8_8_ = 0;
                  auVar40._0_8_ = local_1d8;
                  local_278 = &local_1e8;
                  local_280 = &DefaultSocketName;
                  TSet<TTuple<FName,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<FName_&,UE::Math::TVector<double>_&&>_>
                            ((TSet<TTuple<FName,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                              *)local_c8,
                             (TPairInitializer<FName_&,UE::Math::TVector<double>_&&> *)
                             (local_338 + 4),(bool *)&local_280);
                }
                uVar31 = local_a0;
                local_2e8 = 0;
                uStack_2fc = 1;
                uStack_2ec = local_2e8;
                if (local_a0 != 0) {
                  puVar30 = (uint *)(local_c8 + 0x10);
                  if (local_a8 != (uint *)0x0) {
                    puVar30 = local_a8;
                  }
                  uVar32 = *puVar30;
                  local_2e8 = 0;
                  uVar29 = 0;
                  while (uVar32 == 0) {
                    lVar23 = (longlong)(int)uVar29;
                    local_2e8 = local_2e8 + 0x20;
                    uVar29 = uVar29 + 1;
                    uStack_2ec = local_a0;
                    if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 <
                        (int)uVar29) goto LAB_14b7f5473;
                    uVar32 = puVar30[lVar23 + 1];
                  }
                  uStack_2fc = -uVar32 & uVar32;
                  uVar22 = (ulonglong)uStack_2fc * 2 + 1;
                  lVar23 = 0x3f;
                  if (uVar22 != 0) {
                    for (; uVar22 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                    }
                  }
                  local_330 = (int)lVar23;
                  uStack_2ec = (local_2e8 - 1) + local_330;
                  if ((int)local_a0 < (int)uStack_2ec) {
                    uStack_2ec = local_a0;
                  }
                }
LAB_14b7f5473:
                local_308 = (longlong *)local_c8;
                uStack_2e4 = local_d4;
                local_2f8 = local_c8 + 0x10;
                uVar32 = local_a0 & 0xffffffe0;
                iStack_2e0 = local_c8._8_4_ - local_94;
                auStack_2d0._0_8_ = CONCAT44(uStack_2fc,uVar29);
                uStack_2f0 = 0xffffffff;
                uStack_2c0 = 0xffffffff;
                auStack_2d0._8_8_ = local_2f8;
                uStack_2bc = uStack_2ec;
                iVar26 = (int)local_a0 >> 5;
                local_2b8._4_4_ = local_d4;
                local_2b8._0_4_ = local_2e8;
                uStack_2b0 = CONCAT44(uStack_2dc,iStack_2e0);
                bVar21 = (byte)local_a0;
                uStack_300 = uVar29;
                local_2d8 = local_308;
                if (((int)local_a0 < 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x7af,L""), bVar8)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar13 = local_360;
                if (uVar31 != local_a0) {
                  puVar30 = (uint *)(local_c8 + 0x10);
                  if (local_a8 != (uint *)0x0) {
                    puVar30 = local_a8;
                  }
                  uVar29 = -1 << (bVar21 & 0x1f) & puVar30[iVar26];
                  while (uVar29 == 0) {
                    lVar23 = (longlong)iVar26;
                    uVar32 = uVar32 + 0x20;
                    iVar26 = iVar26 + 1;
                    uVar31 = local_a0;
                    if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
                    goto LAB_14b7f55b0;
                    uVar29 = puVar30[lVar23 + 1];
                  }
                  uVar22 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
                  lVar23 = 0x3f;
                  if (uVar22 != 0) {
                    for (; uVar22 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                    }
                  }
                  local_318 = (int)lVar23;
                  uVar31 = (uVar32 - 1) + local_318;
                  if ((int)local_a0 < (int)uVar31) {
                    uVar31 = local_a0;
                  }
                }
LAB_14b7f55b0:
                do {
                  plVar7 = local_2d8;
                  if ((int)local_2d8[1] - *(int *)((longlong)local_2d8 + 0x34) != (int)uStack_2b0) {
                    local_448[6] = 0;
                    `TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_448 + 6);
                  }
                  if (((uStack_2bc == uVar31) &&
                      ((TBitArray<FDefaultBitArrayAllocator> *)auStack_2d0._8_8_ ==
                       (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10))) &&
                     (plVar7 == (longlong *)local_c8)) goto LAB_14b7f58c5;
                  lVar23 = *plVar7;
                  pFVar1 = (FName *)(lVar23 + (longlong)(int)uStack_2bc * 0x28);
                  local_258 = *pFVar1;
                  TStack_250._s_0.X = (double)pFVar1[1];
                  TStack_250._8_16_ =
                       *(undefined1 (*) [16])(lVar23 + 0x10 + (longlong)(int)uStack_2bc * 0x28);
                  DS_Util::ProjectWorldToScreen
                            ((TVector<double> *)&TStack_250._s_0,(TVector2<double> *)local_408);
                  uVar38 = uVar48;
                  uVar41 = uVar49;
                  if ((char)local_440 == '\0') {
                    dVar39 = (double)CONCAT44(local_408[1]._4_4_,local_408[1]._0_4_) -
                             local_3d8._s_0.Y;
                    auVar4._8_8_ = 0;
                    auVar4._0_8_ = dVar39 * dVar39 +
                                   ((double)local_408[0] - local_3d8._s_0.X) *
                                   ((double)local_408[0] - local_3d8._s_0.X);
                    auVar40 = sqrtpd(auVar40,auVar4);
                    dVar39 = auVar40._0_8_;
                    if (dVar39 < (double)CONCAT44(uVar49,uVar48)) {
                      uVar38 = auVar40._0_4_;
                      uVar41 = auVar40._4_4_;
                      FVar24 = local_258;
                    }
                    pUVar12 = pUVar11;
                    if ((double)CONCAT44(uVar49,uVar48) < dVar39 ||
                        (double)CONCAT44(uVar49,uVar48) == dVar39) {
                      pUVar12 = local_420;
                    }
                  }
                  else {
                    bVar8 = FDS_EntityBase::GetIsMultiHitCollision(pFVar13);
                    pFVar6 = local_418;
                    if ((bVar8) ||
                       (pUVar14 = FWeakObjectPtr::Get(local_418), pUVar12 = local_420,
                       *(ulong64 *)&pUVar14[2].field_0x8 != pFVar13->EntityID)) {
                      pUVar12 = FWeakObjectPtr::Get(pFVar6);
                      local_358 = *(ulong64 *)&pUVar12[2].field_0x8;
                      pFVar15 = FDS_EntityBase::GetEntityBase(&local_358);
                      pUVar12 = local_420;
                      if (pFVar15 != (FDS_EntityBase *)0x0) {
                        this_01 = (FWeakObjectPtr *)
                                  (**(code **)(pFVar15->_padding_ + 0x150))(pFVar15,local_1d0);
                        pUVar12 = FWeakObjectPtr::Get(this_01);
                        lVar23 = *(longlong *)(pUVar12 + 0xb);
                        if (lVar23 == 0) {
                          local_378._s_0.X =
                               (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0.
                                                _4_4_,UE::Math::TVector<double>::ZeroVector.
                                                      field0_0x0._0_4_);
                          local_378._s_0.Y =
                               (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0.
                                                _12_4_,UE::Math::TVector<double>::ZeroVector.
                                                       field0_0x0._8_4_);
                          local_378._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
                          ;
                        }
                        else {
                          local_140 = *(double *)(lVar23 + 0x220);
                          local_378._s_0.X = *(double *)(lVar23 + 0x210);
                          local_378._s_0.Y = *(double *)(lVar23 + 0x218);
                          local_378._s_0.Z = local_140;
                          local_150 = local_378._s_0.X;
                          dStack_148 = local_378._s_0.Y;
                        }
                        (**(code **)(pFVar15->_padding_ + 0x78))(pFVar15,&local_3c8);
                        bVar8 = FWeakObjectPtr::IsValid(&local_3c8);
                        if (bVar8) {
                          this_02 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_3c8);
                          pTVar16 = UDS_MovementCore::GetActorLocation(this_02,&local_138);
                          local_378._s_0.X = (pTVar16->field0_0x0)._s_0.X;
                          local_378._s_0.Y = (pTVar16->field0_0x0)._s_0.Y;
                          local_378._s_0.Z = (pTVar16->field0_0x0)._s_0.Z;
                        }
                        (**(code **)(pFVar15->_padding_ + 0x80))(pFVar15);
                        bVar8 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                                          ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)
                                           &local_3e8,(void *)0x0);
                        if (!bVar8) {
                          pUVar12 = FWeakObjectPtr::Get(&local_3e8);
                          pcVar3 = *(code **)(*(longlong *)pUVar12 + 0x540);
                          pUVar14 = FWeakObjectPtr::Get(pFVar6);
                          cVar9 = (*pcVar3)(pUVar12,*(undefined8 *)&pUVar14[2].field_0x10);
                          if (cVar9 == '\x01') {
                            pUVar12 = FWeakObjectPtr::Get(&local_3e8);
                            pcVar3 = *(code **)(*(longlong *)pUVar12 + 0x528);
                            pUVar14 = FWeakObjectPtr::Get(pFVar6);
                            pdVar17 = (double *)
                                      (*pcVar3)(pUVar12,local_120,
                                                *(undefined8 *)&pUVar14[2].field_0x10);
                            local_378._s_0.X = *pdVar17;
                            local_378._s_0.Y = pdVar17[1];
                            local_378._s_0.Z = pdVar17[2];
                          }
                        }
                        DS_Util::ProjectWorldToScreen
                                  ((TVector<double> *)&local_378._s_0,
                                   (TVector2<double> *)&local_328._s_0);
                        auVar40._8_8_ = 0;
                        auVar40._0_8_ = local_328._s_0.X;
                        dVar35 = (double)CONCAT44(local_328._12_4_,local_328._8_4_);
                        dVar39 = (double)CONCAT44(local_408[1]._4_4_,local_408[1]._0_4_);
                        auVar36._0_8_ =
                             (local_328._s_0.X - (double)local_408[0]) *
                             (local_328._s_0.X - (double)local_408[0]);
                        auVar36._8_8_ = 0;
                        auVar37._8_8_ = 0;
                        auVar37._0_8_ = (dVar35 - dVar39) * (dVar35 - dVar39) + auVar36._0_8_;
                        auVar37 = sqrtpd(auVar36,auVar37);
                        pUVar12 = local_420;
                        if (auVar37._0_8_ < (double)CONCAT44(uVar49,uVar48)) {
                          dVar2 = (local_350->field0_0x0)._s_0.X;
                          if (0.0 <= dVar2) {
                            if (dVar2 <= 0.0) {
                              dVar2 = (local_350->field0_0x0)._s_0.Y;
                              if (dVar2 <= 0.0) {
                                if (0.0 <= dVar2) goto LAB_14b7f58a6;
                                bVar8 = dVar35 == dVar39;
                                bVar33 = dVar35 < dVar39;
                              }
                              else {
                                bVar8 = dVar39 == dVar35;
                                bVar33 = dVar39 < dVar35;
                              }
                            }
                            else {
                              bVar8 = (double)local_408[0] == local_328._s_0.X;
                              bVar33 = (double)local_408[0] < local_328._s_0.X;
                            }
                          }
                          else {
                            bVar8 = local_328._s_0.X == (double)local_408[0];
                            bVar33 = local_328._s_0.X < (double)local_408[0];
                          }
                          if (!bVar33 && !bVar8) {
                            FVar24 = local_258;
                            uVar38 = auVar37._0_4_;
                            uVar41 = auVar37._4_4_;
                            pUVar12 = pUVar11;
                          }
                        }
                      }
                    }
                  }
LAB_14b7f58a6:
                  local_420 = pUVar12;
                  uStack_2c0 = uStack_2c0 & ~auStack_2d0._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2d0);
                  uVar48 = uVar38;
                  uVar49 = uVar41;
                } while( true );
              }
              goto LAB_14b7f58f7;
            }
            goto LAB_14b7f590a;
          }
          if (local_420 != (UObject *)0x0) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(local_420);
            }
            local_3e0.ObjectIndex = 0;
            local_3e0.ObjectSerialNumber = 0;
            local_348 = pUVar11;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar11);
            }
            FWeakObjectPtr::operator=(&local_3e0,(FObjectPtr)&local_348);
            pFVar13 = FDS_EntityBase::GetEntityBaseFromActor
                                ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_3e0);
            pFVar6 = local_418;
            if (pFVar13 != (FDS_EntityBase *)0x0) {
              pUVar11 = FWeakObjectPtr::Get(local_418);
              *(ulong64 *)&pUVar11[2].field_0x8 = pFVar13->EntityID;
            }
            pUVar11 = FWeakObjectPtr::Get(pFVar6);
            *(uint *)&pUVar11[2].field_0x10 = FVar24.ComparisonIndex.Value;
            *(uint *)&pUVar11[2].field_0x14 = FVar24.Number;
            this_03 = UDS_WindowManager::GetInst();
            if (this_03 != (UDS_WindowManager *)0x0) {
              local_408[1]._4_4_ = local_328._12_4_;
              local_408[0] = OnOpenLockOnWindow;
              local_408[1]._0_4_ = 0;
              local_438 = (undefined1  [8])0x0;
              local_430.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_430.DelegateSize = 0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_438,
                         (FWriteAccessScope *)&local_238);
              local_220 = &local_430;
              puVar18 = UE::Core::Private::DelegateAllocate(0x30,&local_430);
              if (puVar18 != (undefined8 *)0x0) {
                *puVar18 = &
                           ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                uVar19 = FDelegateHandle::GenerateNewID();
                local_340 = local_3b0;
                puVar18[2] = uVar19;
                *puVar18 = &
                           ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_LockOnTargetAbility____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_3b0 != (UDS_LockOnTargetAbility *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_3b0);
                }
                puVar18[3] = 0;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_340 != (UDS_LockOnTargetAbility *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_340);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar18 + 3),(FObjectPtr)&local_340);
                puVar18[4] = local_408[0];
                puVar18[5] = CONCAT44(local_408[1]._4_4_,local_408[1]._0_4_);
              }
              if (local_238.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
              }
              pTVar20 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                        TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                  (local_108,
                                   (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                    *)local_438);
              UDS_WindowManager::OpenWindow(this_03,TargetLockOn,pTVar20);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_438,
                         (FWriteAccessScope *)&local_270);
              if ((local_430.DelegateSize != 0) &&
                 (local_430.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                (*(code *)**(undefined8 **)local_430.DelegateAllocator)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&local_430,0,0,0x10);
                local_430.DelegateSize = 0;
              }
              if (local_270.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_270.Accessor,&local_270);
              }
              if (local_430.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                FMemory::Free((void *)local_430.DelegateAllocator);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                        ((FMRSWRecursiveAccessDetector *)local_438);
            }
          }
        }
        if (local_388.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_388.AllocatorInstance.Data);
        }
      }
      else {
        local_448[2] = 1;
        pUVar10 = (UDS_AbilitySystemComponent *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        UDS_AbilitySystemComponent::DeactivateAbilityByTag
                  (pUVar10,(FGameplayTag *)&this->_padding_,local_448 + 2);
      }
    }
    else {
      local_448[1] = 1;
      pUVar10 = (UDS_AbilitySystemComponent *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_AbilitySystemComponent::DeactivateAbilityByTag
                (pUVar10,(FGameplayTag *)&this->_padding_,local_448 + 1);
    }
  }
  else {
    local_448[0] = Success;
    pUVar10 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar10,(FGameplayTag *)&this->_padding_,local_448);
  }
  return;
LAB_14b7f58c5:
  local_80 = 0;
  if (local_88 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_c8);
  FVar27.Data = local_3b8;
LAB_14b7f58f7:
  auVar40._8_8_ = 0;
  auVar40._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pFVar28 = local_3c0;
  uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar41 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
LAB_14b7f590a:
  uVar22 = (ulonglong)local_3f8;
  FVar27.Data = FVar27.Data + 8;
  goto LAB_14b7f5096;
}

// OnCanActivate @ 14b7f7e50

bool __thiscall UDS_LockOnTargetAbility::OnCanActivate(UDS_LockOnTargetAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_LockOnTargetAbilityData,FWeakObjectPtr> TVar2;
  FWeakObjectPtr local_res18;
  ulong64 local_res20;
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    ADS_PlayerController::GetPlayerController();
    bVar1 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_LockOnTargetAbilityData>
                        (&local_res20,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->LockOnTargetAbilityData).WeakPtr = *TVar2.WeakPtr;
      bVar1 = FWeakObjectPtr::IsValid(&(this->LockOnTargetAbilityData).WeakPtr);
      return bVar1;
    }
  }
  return false;
}

// OnChangedInputControlType @ 14b7f9f20

void __thiscall
UDS_LockOnTargetAbility::OnChangedInputControlType
          (UDS_LockOnTargetAbility *this,EDS_InputControlType *param_1)

{
  UDS_AbilitySystemComponent *this_00;
  EDS_AbilityDeactivateType local_res10 [24];
  
  if (*param_1 != ActionMode) {
    local_res10[0] = Success;
    this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (this_00,(FGameplayTag *)&this->_padding_,local_res10);
  }
  return;
}

// OnDeactivateAbility @ 14b7fd3a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_LockOnTargetAbility::OnDeactivateAbility(UDS_LockOnTargetAbility *this,bool *param_1)

{
  bool bVar1;
  ADS_PlayerController *this_00;
  UObject *pUVar2;
  UDS_WindowManager *this_01;
  float local_res18 [2];
  uint local_res20 [2];
  FWeakObjectPtr local_18 [2];
  
  ADS_PlayerController::GetPlayerController();
  bVar1 = FWeakObjectPtr::IsValid(local_18);
  if (bVar1) {
    this_00 = (ADS_PlayerController *)FWeakObjectPtr::Get(local_18);
    ADS_PlayerController::RemoveInputFlag(this_00,LOCK_ON_TARGET);
    pUVar2 = FWeakObjectPtr::Get(local_18);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar2 + 0x32),this);
  }
  this_01 = UDS_WindowManager::GetInst();
  if (this_01 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_01,TargetLockOn,local_res20,local_res18);
  }
  return;
}

// OnOpenLockOnWindow @ 14b800540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_LockOnTargetAbility::OnOpenLockOnWindow(UDS_LockOnTargetAbility *this,UDS_UserWidget *param_1)

{
  TWeakObjectPtr<UDS_LockOnTargetAbilityData,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar7;
  FDS_ViewModelContext *pFVar8;
  undefined1 auStackY_3f8 [32];
  FWeakObjectPtr local_3c8;
  UDS_UserWidget *local_3c0;
  TSharedPtr<FDS_ViewModelContext,1> local_3b8;
  TSharedPtr<FDS_ViewModelContext,1> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_398._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_398,"UDS_LockOnTargetAbility::OnOpenLockOnWindow",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_398.Ptr,0x1c0,L"InWidget is nullptr.");
      if ((void *)local_398._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_398._padding_);
      }
    }
  }
  else {
    this_00 = &this->LockOnTargetAbilityData;
    bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      if (*(longlong *)&pUVar4[2].field_0x8 == 0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_LockOnTargetAbility::OnOpenLockOnWindow",0x2b,Yes);
          UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,0x1cc,L"TargetEntityID is 0.");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
      }
      else {
        pFVar5 = ::operator_new(0x30);
        pFVar8 = (FDS_ViewModelContext *)0x0;
        pFVar7 = pFVar8;
        if (pFVar5 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar5->field_0x1c = 0;
          *(undefined4 *)((longlong)&pFVar5[1]._padding_ + 4) = 0;
          *(undefined8 *)&pFVar5->DerivedStaticStruct = 0;
          (pFVar5->ViewModelName).ComparisonIndex = 0;
          (pFVar5->ViewModelName).Number = 0;
          pFVar5->ViewModelTemplateKey = None;
          pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_LockOnTarget__6B_;
          *(undefined8 *)&pFVar5[1].DerivedStaticStruct = 0;
          pFVar7 = pFVar5;
        }
        pFVar5 = ::operator_new(0x20);
        if (pFVar5 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar5->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar5->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar5->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_LockOnTarget__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar5->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar5->ViewModelTemplateKey = pFVar7;
          pFVar8 = pFVar5;
        }
        if ((pFVar7 == (FDS_ViewModelContext *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar6 = FDS_ViewModelContext_LockOnTarget::StaticStruct();
        *(UScriptStruct **)&pFVar7->DerivedStaticStruct = pUVar6;
        this_01 = UDS_ViewModelContextManager::GetInst();
        if (this_01 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar8 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar8->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_3b8.Object = pFVar7;
          local_3b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8
          ;
          UDS_ViewModelContextManager::RegisterContext(this_01,&local_3b8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3b8.SharedReferenceCount.ReferenceController);
        }
        pFVar7->ViewModelTemplateKey = W_LockOnTarget;
        pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        pFVar7[1]._padding_ = *(longlong *)&pUVar4[2].field_0x8;
        pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        *(undefined8 *)&pFVar7[1].DerivedStaticStruct = *(undefined8 *)&pUVar4[2].field_0x10;
        if (pFVar8 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar8->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_3a8.Object = pFVar7;
        local_3a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_3c8.ObjectIndex = 0;
        local_3c8.ObjectSerialNumber = 0;
        local_3c0 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_3c8,(FObjectPtr)&local_3c0);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_3c8,&local_3a8,false);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar8);
      }
    }
    else {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UDS_LockOnTargetAbility::OnOpenLockOnWindow",0x2b,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_278.Ptr,0x1c6,L"LockOnTargetAbilityData invalid.");
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
      }
    }
  }
  return;
}

// OnPostActivateAbility @ 14b807210

void __thiscall UDS_LockOnTargetAbility::OnPostActivateAbility(UDS_LockOnTargetAbility *this)

{
  bool bVar1;
  UDS_AbilitySystemComponent *this_00;
  UObject *pUVar2;
  ADS_PlayerController *this_01;
  EDS_AbilityDeactivateType local_res10 [8];
  FWeakObjectPtr local_res18 [2];
  TVector2<double>_u_0 local_18;
  
  ADS_PlayerController::GetPlayerController();
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (!bVar1) {
    local_res10[0] = Cancel;
    this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (this_00,(FGameplayTag *)&this->_padding_,local_res10);
    return;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res18);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar2 + 0x32),this);
  local_18._8_4_ = 0;
  local_18._s_0.X = (double)OnChangedInputControlType;
  pUVar2 = FWeakObjectPtr::Get(local_res18);
  TMulticastDelegateRegistration<void___cdecl(enum_EDS_InputControlType_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_LockOnTargetAbility>
            (pUVar2 + 0x32,(UDS_LockOnTargetAbility *)local_res10,(pmf_623e0cbd *)this);
  this_01 = (ADS_PlayerController *)FWeakObjectPtr::Get(local_res18);
  ADS_PlayerController::AddInputFlag(this_01,LOCK_ON_TARGET);
  local_18 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  OnCameraLockOnTraget(this,true,(TVector2<double> *)&local_18._s_0);
  return;
}

// OnTickComponent @ 14b80b2b0

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
UDS_LockOnTargetAbility::OnTickComponent(UDS_LockOnTargetAbility *this,float param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FDS_EntityBase *this_00;
  UDS_CharStateData *pUVar3;
  UDS_AbilitySystemComponent *this_01;
  ulong64 local_res8;
  FWeakObjectPtr local_res18 [2];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  bVar1 = FWeakObjectPtr::IsValid(&(this->LockOnTargetAbilityData).WeakPtr);
  if ((!bVar1) ||
     (pUVar2 = FWeakObjectPtr::Get(&(this->LockOnTargetAbilityData).WeakPtr),
     *(longlong *)&pUVar2[2].field_0x8 != 0)) {
    pUVar2 = FWeakObjectPtr::Get(&(this->LockOnTargetAbilityData).WeakPtr);
    local_res8 = *(ulong64 *)&pUVar2[2].field_0x8;
    this_00 = FDS_EntityBase::GetEntityBase(&local_res8);
    if ((this_00 != (FDS_EntityBase *)0x0) && (bVar1 = FDS_EntityBase::IsDead(this_00), !bVar1)) {
      UDS_CharStateData::GetData((ulong64)local_res18);
      bVar1 = FWeakObjectPtr::IsValid(local_res18);
      if (!bVar1) {
        return;
      }
      pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res18);
      local_res8 = CONCAT44(local_res8._4_4_,0x1f);
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&local_res8);
      if (!bVar1) {
        pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res18);
        local_res8 = CONCAT44(local_res8._4_4_,0x1e);
        bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&local_res8);
        if (!bVar1) {
          return;
        }
      }
    }
  }
  local_res8 = CONCAT71(local_res8._1_7_,1);
  this_01 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_01,(FGameplayTag *)&this->_padding_,(EDS_AbilityDeactivateType *)&local_res8);
  return;
}

// OpenLockOnWindow @ 14b80bdf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_LockOnTargetAbility::OpenLockOnWindow(UDS_LockOnTargetAbility *this)

{
  UDS_WindowManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar3;
  UDS_LockOnTargetAbility *local_res10;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    uStack_70 = 0;
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    local_78 = OnOpenLockOnWindow;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_LockOnTargetAbility____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_LockOnTargetAbility *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_LockOnTargetAbility *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res10);
      puVar1[4] = local_78;
      puVar1[5] = CONCAT44(uStack_6c,uStack_70);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    pTVar3 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_78,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_58);
    UDS_WindowManager::OpenWindow(this_00,TargetLockOn,pTVar3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_78);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_68 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
                 (FDestructionSentinel *)&local_78);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  return;
}

