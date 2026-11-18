// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b4f4640

UClass * __cdecl UDS_MountAbility_Flying::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAbility_Flying.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAbility_Flying",
               &Z_Registration_Info_UClass_UDS_MountAbility_Flying.InnerSingleton,
               StaticRegisterNativesUDS_MountAbility_Flying,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountAbility_Flying>,
               InternalVTableHelperCtorCaller<UDS_MountAbility_Flying>,local_res8,
               UDS_MountBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAbility_Flying.InnerSingleton;
}

// UDS_MountAbility_Flying @ 14b4f7ce0

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

UDS_MountAbility_Flying * __thiscall
UDS_MountAbility_Flying::UDS_MountAbility_Flying
          (UDS_MountAbility_Flying *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined8 *)&this->field_0x158 = 0;
  *(undefined8 *)&this->field_0x160 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UDS_MountAbility_Flying @ 14b4f7d30

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

UDS_MountAbility_Flying * __thiscall
UDS_MountAbility_Flying::UDS_MountAbility_Flying
          (UDS_MountAbility_Flying *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined8 *)&this->field_0x158 = 0;
  *(undefined8 *)&this->field_0x160 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UDS_MountAbility_Flying @ 14b4f8650

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

void __thiscall UDS_MountAbility_Flying::~UDS_MountAbility_Flying(UDS_MountAbility_Flying *this)

{
  *(undefined ***)this = &UDS_MountBaseAbility::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 =
       &UDS_MountBaseAbility::_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4fa070

UClass * __cdecl UDS_MountAbility_Flying::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAbility_Flying.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAbility_Flying",
               &Z_Registration_Info_UClass_UDS_MountAbility_Flying.InnerSingleton,
               StaticRegisterNativesUDS_MountAbility_Flying,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountAbility_Flying>,
               InternalVTableHelperCtorCaller<UDS_MountAbility_Flying>,local_res8,
               UDS_MountBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAbility_Flying.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b4fa6b0

bool __thiscall UDS_MountAbility_Flying::ShouldNotifyChangedCharState(UDS_MountAbility_Flying *this)

{
  return true;
}

// ShouldTickComponent @ 14b4fa720

bool __thiscall UDS_MountAbility_Flying::ShouldTickComponent(UDS_MountAbility_Flying *this)

{
  return true;
}

// StaticRegisterNativesUDS_MountAbility_Flying @ 14b4fa890

void __cdecl UDS_MountAbility_Flying::StaticRegisterNativesUDS_MountAbility_Flying(void)

{
  return;
}

// CheckCrash @ 14b826470

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

bool __thiscall
UDS_MountAbility_Flying::CheckCrash(UDS_MountAbility_Flying *this,FHitResult *param_1)

{
  bool bVar1;
  ECollisionChannel EVar2;
  longlong lVar3;
  FDS_EntityBase *pFVar4;
  UDS_MovementCore *this_00;
  UObject *pUVar5;
  AActor *pAVar6;
  UWorld *this_01;
  undefined1 auStackY_168 [32];
  EDS_StateTagType local_128 [8];
  FWeakObjectPtr local_120;
  FWeakObjectPtr local_118;
  ulong64 local_110;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0 [2];
  FCollisionQueryParams local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_128[0] = Mount_Leap;
  bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_128);
  if (!bVar1) {
    local_128[0] = Mount_DisMount;
    bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_128);
    if ((((!bVar1) && (lVar3 = (**(code **)(*(longlong *)this + 0x180))(this), lVar3 != 0)) &&
        (local_110 = UDS_MountManager::GetMountEntityByCharEntityID(*(ulong64 *)&this->field_0xe0),
        local_110 != 0)) &&
       (pFVar4 = FDS_EntityBase::GetEntityBase(&local_110), pFVar4 != (FDS_EntityBase *)0x0)) {
      (**(code **)(**(longlong **)&this->field_0xc8 + 0x160))
                (*(longlong **)&this->field_0xc8,&local_120);
      bVar1 = FWeakObjectPtr::IsValid(&local_120);
      if (bVar1) {
        (**(code **)(pFVar4->_padding_ + 0x150))(pFVar4);
        bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_118,(void *)0x0);
        if (!bVar1) {
          this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
          UDS_MovementCore::GetActorLocation(this_00,(TVector<double> *)&local_108._s_0);
          local_f0[0]._s_0.X = local_108._s_0.X;
          local_f0[0]._s_0.Y = local_108._s_0.Y;
          local_f0[0]._s_0.Z = local_108._s_0.Z;
          pUVar5 = FWeakObjectPtr::Get(&local_120);
          local_108._s_0.Z =
               local_108._s_0.Z +
               (double)(float)((uint)((float)*(double *)&pUVar5[0xe].field_0x10 *
                                     *(float *)&pUVar5[0x22].field_0x18) ^
                              __xmm_80000000800000008000000080000000);
          pUVar5 = FWeakObjectPtr::Get(&local_120);
          local_f0[0]._16_8_ =
               ((double)local_f0[0]._16_8_ -
               (double)((float)*(double *)&pUVar5[0xe].field_0x10 *
                       *(float *)&pUVar5[0x22].field_0x18)) - __real_4059000000000000;
          FCollisionQueryParams::FCollisionQueryParams(&local_b8);
          pAVar6 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xc0);
          FCollisionQueryParams::AddIgnoredActor(&local_b8,pAVar6);
          pAVar6 = (AActor *)FWeakObjectPtr::Get(&local_118);
          FCollisionQueryParams::AddIgnoredActor(&local_b8,pAVar6);
          this_01 = (UWorld *)(**(code **)(*(longlong *)this + 0x180))(this);
          pUVar5 = FWeakObjectPtr::Get(&local_120);
          EVar2 = (**(code **)(*(longlong *)pUVar5 + 0x5f0))(pUVar5);
          bVar1 = UWorld::LineTraceSingleByChannel
                            (this_01,param_1,(TVector<double> *)&local_108._s_0,
                             (TVector<double> *)&local_f0[0]._s_0,EVar2,&local_b8,
                             &FCollisionResponseParams::DefaultResponseParam);
          if (local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
          }
          if (local_b8.IgnoreComponents.AllocatorInstance.SecondaryData ==
              (ForElementType<unsigned_int>)0x0) {
            return bVar1;
          }
          FMemory::Free((void *)local_b8.IgnoreComponents.AllocatorInstance.SecondaryData);
          return bVar1;
        }
      }
    }
  }
  return false;
}

// IsFlyAbleMount @ 14b8360b0

bool __thiscall UDS_MountAbility_Flying::IsFlyAbleMount(UDS_MountAbility_Flying *this)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UObject *pUVar7;
  FObjectPtr_u_0 *this_00;
  UClass *pUVar8;
  FDS_MountBaseTableRow *pFVar9;
  atomic<unsigned_char> *paVar10;
  UObject *pUVar11;
  FObjectPtr_u_0 FVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  undefined8 local_38 [3];
  
  if (this->field_0xe9 == '\0') {
    return true;
  }
  TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_res18);
  bVar5 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (bVar5) {
    iVar14 = 0x117;
    paVar10 = &bGEnsureHasExecuted<_4622538477366410985>;
  }
  else {
    pUVar7 = FWeakObjectPtr::Get(&local_res18);
    uVar2 = *(ulonglong *)&pUVar7[4].field_0x20;
    if (uVar2 == 0) {
      iVar14 = 0x11e;
      paVar10 = &bGEnsureHasExecuted<_4622538477366410978>;
    }
    else {
      pUVar7 = FWeakObjectPtr::Get(&local_res18);
      if (*(int *)&pUVar7[1].field_0x20 != *(int *)&pUVar7[2].field_0x24) {
        pUVar11 = *(UObject **)&pUVar7[3].field_0x8;
        if (*(UObject **)&pUVar7[3].field_0x8 == (UObject *)0x0) {
          pUVar11 = pUVar7 + 3;
        }
        iVar14 = *(int *)(&pUVar11->field_0x0 +
                         ((ulonglong)(*(int *)&pUVar7[3].field_0x10 - 1) &
                         (uVar2 >> 0x20) * 0x17 + uVar2) * 4);
        if (iVar14 != -1) {
          lVar3 = *(longlong *)&pUVar7[1].field_0x18;
          do {
            if (*(ulonglong *)(lVar3 + (longlong)iVar14 * 0x18) == uVar2) {
              this_00 = (FObjectPtr_u_0 *)
                        TMapBase<unsigned___int64,TObjectPtr<UDS_DataBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>_>
                        ::FindChecked((TMapBase<unsigned___int64,TObjectPtr<UDS_DataBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>_>
                                       *)&pUVar7[1].field_0x18,uVar2);
              pUVar7 = (UObject *)0x0;
              if (this_00->Handle != (UObject *)0x0) {
                pUVar8 = Z_Construct_UClass_UDS_MountData_NoRegister();
                bVar5 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar8);
                if (bVar5) {
                  pUVar7 = this_00->Handle;
                }
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar7);
              }
              local_res10.ObjectIndex = 0;
              local_res10.ObjectSerialNumber = 0;
              local_res20 = pUVar7;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar7);
              }
              FVar12.Handle = (UObject *)&local_res20;
              goto LAB_14b8361d6;
            }
            iVar14 = *(int *)(lVar3 + 0x10 + (longlong)iVar14 * 0x18);
          } while (iVar14 != -1);
        }
      }
      FVar12.Handle = (UObject *)local_38;
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_38[0] = 0;
LAB_14b8361d6:
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)FVar12);
      bVar5 = TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MountData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
      if (!bVar5) {
        pUVar7 = FWeakObjectPtr::Get(&local_res10);
        pFVar9 = FDS_MountBaseTableRow::GetRef((longlong)*(int *)&pUVar7[2].field_0x18,true);
        pFVar13 = (pFVar9->MountActionType).AllocatorInstance.Data;
        iVar14 = (pFVar9->MountActionType).ArrayNum;
        pFVar1 = pFVar13 + iVar14;
        while( true ) {
          if ((pFVar9->MountActionType).ArrayNum != iVar14) {
            `TCheckedPointerIterator<enum_EDS_MountActionType_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (pFVar13 == pFVar1) break;
          if (*pFVar13 == (FScriptContainerElement)0x1) {
            return true;
          }
          pFVar13 = pFVar13 + 1;
        }
        return false;
      }
      iVar14 = 0x125;
      paVar10 = &bGEnsureHasExecuted<_4622538477366410971>;
    }
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar10,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_MountAbility_Flying.cpp"
                     ,iVar14,"false");
  if (!bVar5) {
    return false;
  }
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return (bool)uVar6;
}

// OnAbilityRetryActivate @ 14b837960

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

void __thiscall UDS_MountAbility_Flying::OnAbilityRetryActivate(UDS_MountAbility_Flying *this)

{
  EDS_AbilityDeactivateType local_res10 [24];
  
  local_res10[0] = Success;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
  return;
}

// OnCanActivate @ 14b8386a0

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

bool __thiscall UDS_MountAbility_Flying::OnCanActivate(UDS_MountAbility_Flying *this)

{
  bool bVar1;
  EDS_StateTagType local_res10 [24];
  
  bVar1 = UDS_MountBaseAbility::OnCanActivate((UDS_MountBaseAbility *)this);
  if (bVar1) {
    if (this->field_0xe9 != '\x01') {
LAB_14b8386d9:
      local_res10[0] = Mount;
      bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_res10);
      return bVar1;
    }
    bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&this->field_0x158,
                       (void *)0x0);
    if (!bVar1) {
      bVar1 = IsFlyAbleMount(this);
      if (bVar1) goto LAB_14b8386d9;
    }
  }
  return false;
}

// OnChangedCharState @ 14b83be10

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
UDS_MountAbility_Flying::OnChangedCharState
          (UDS_MountAbility_Flying *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
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

// OnChangedMaxSpeed @ 14b83c8d0

void __thiscall
UDS_MountAbility_Flying::OnChangedMaxSpeed(UDS_MountAbility_Flying *this,double *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
  (**(code **)(*(longlong *)pUVar1 + 0x420))(pUVar1,(float)*param_1);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
                    /* WARNING: Could not recover jumptable at 0x00014b83c92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pUVar1 + 0x418))(pUVar1,(float)(*param_1 + *param_1));
  return;
}

// OnDeactivateAbility @ 14b83e620

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
UDS_MountAbility_Flying::OnDeactivateAbility(UDS_MountAbility_Flying *this,bool *param_1)

{
  bool bVar1;
  FGameplayTag *pFVar2;
  UObject *pUVar3;
  EDS_AbilityDeactivateType local_res8 [16];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined8 local_28 [2];
  
  local_res8[0] = Success;
  local_res18.ObjectIndex._0_1_ = 0x51;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_res18,local_res8);
  local_res8[0] = Success;
  local_res18.ObjectIndex._0_1_ = 0x52;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_res18,local_res8);
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_28[0] = 0;
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_28);
  local_res8[0] = 0x76;
  pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar2);
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_28[0] = 0;
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_28);
  local_res8[0] = 0x73;
  pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar2);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
  (**(code **)(*(longlong *)pUVar3 + 0x4b8))(pUVar3);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
  (**(code **)(*(longlong *)pUVar3 + 0x4d0))(pUVar3);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
  (**(code **)(*(longlong *)pUVar3 + 0x448))(pUVar3,3);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
  (**(code **)(*(longlong *)pUVar3 + 0x418))(pUVar3,0);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
  (**(code **)(*(longlong *)pUVar3 + 0x420))(pUVar3,__real_44160000);
  UDS_CharStatusData::GetData((ulong64)&local_res20);
  bVar1 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&local_res20);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[4].field_0x18,this);
  }
  return;
}

// OnPostActivateAbility @ 14b842820

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

void __thiscall UDS_MountAbility_Flying::OnPostActivateAbility(UDS_MountAbility_Flying *this)

{
  bool bVar1;
  UDS_EntityManager *this_00;
  FDS_EntityBase *pFVar2;
  UObject *pUVar3;
  FGameplayTag *pFVar4;
  EDS_AbilityDeactivateType local_res10 [8];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  code *local_18;
  undefined8 uStack_10;
  
  this_00 = UDS_EntityManager::GetInst();
  if (this_00 != (UDS_EntityManager *)0x0) {
    pFVar2 = UDS_EntityManager::GetCurrentMainCharEntityBase(this_00,true);
    if (pFVar2 != (FDS_EntityBase *)0x0) {
      UDS_CharStatusData::GetData((ulong64)&local_res18);
      bVar1 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_res18,
                         (void *)0x0);
      if (!bVar1) {
        pUVar3 = FWeakObjectPtr::Get(&local_res18);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[4].field_0x18,this)
        ;
        uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
        local_18 = OnChangedMaxSpeed;
        pUVar3 = FWeakObjectPtr::Get(&local_res18);
        TMulticastDelegateRegistration<void___cdecl(double_const_&),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_MountAbility_Flying>
                  ((TMulticastDelegateRegistration<void___cdecl(double_const_&),FDefaultDelegateUserPolicy>
                    *)&pUVar3[4].field_0x18,(UDS_MountAbility_Flying *)local_res10,
                   (pmf_2af0ddd0 *)this);
        local_res10[0] = 0x73;
        bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_res10);
        if (!bVar1) {
          local_res20.ObjectIndex = 0;
          local_res20.ObjectSerialNumber = 0;
          local_18 = (code *)0x0;
          FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_18);
          local_res10[0] = 0x73;
          pFVar4 = FDS_GameplayTags::GetStateTag(local_res10);
          UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,pFVar4);
        }
        pUVar3 = FWeakObjectPtr::Get(&local_res18);
        OnChangedMaxSpeed(this,(double *)&pUVar3[4].field_0x10);
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
        (**(code **)(*(longlong *)pUVar3 + 0x448))(pUVar3,5);
        return;
      }
    }
  }
  local_res10[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
  return;
}

// OnTickComponent @ 14b847f00

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
UDS_MountAbility_Flying::OnTickComponent(UDS_MountAbility_Flying *this,float param_1)

{
  undefined8 uVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_MountAbilityData *pUVar4;
  UDS_LogManager *pUVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  undefined1 auStackY_2c8 [32];
  EDS_AbilityDeactivateType local_298 [8];
  double local_290 [3];
  undefined8 local_278;
  undefined4 uStack_270;
  undefined1 uStack_26c;
  undefined2 uStack_26b;
  undefined1 uStack_269;
  undefined1 local_268 [96];
  double dStack_208;
  double local_200;
  int local_1c4;
  FWeakObjectPtr local_1b0;
  FWeakObjectPtr FStack_1a8;
  IActorInstanceManagerInterface *local_1a0;
  undefined8 uStack_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  local_298[0] = 0x73;
  bVar2 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_298);
  if (bVar2) {
    if (this->field_0xe9 != '\0') {
      local_298[0] = 0x74;
      bVar2 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_298);
      if (!bVar2) {
        local_298[0] = 0x75;
        bVar2 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_298);
        if (!bVar2) {
          bVar2 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&this->field_0x158,
                             (void *)0x0);
          if ((bVar2) ||
             (bVar2 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)
                                 &this->field_0x160,(void *)0x0), bVar2)) {
            pUVar5 = UDS_LogManager::GetInst();
            if (pUVar5 != (UDS_LogManager *)0x0) {
              pUVar5 = UDS_LogManager::GetInst();
              local_168._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_168,"UDS_MountAbility_Flying::OnTickComponent",0x28,Yes);
              UDS_LogManager::PrintLog
                        (pUVar5,1,Warning,local_168.Ptr,0x9d,L"Flying move has nullptr object.");
              if ((void *)local_168._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_168._padding_);
              }
            }
          }
          else {
            memset(local_268,0,0x100);
            uStack_270 = 0xffffffff;
            uStack_26b = 0;
            local_1b0.ObjectIndex = 0;
            local_1b0.ObjectSerialNumber = 0;
            FStack_1a8.ObjectIndex = 0;
            FStack_1a8.ObjectSerialNumber = 0;
            uStack_269 = 0;
            local_278 = 0;
            uStack_26c = 0;
            uStack_198._0_4_ = -1;
            uStack_198._4_1_ = Invalid;
            uStack_198._5_3_ = 0;
            local_268._4_4_ = 1.0;
            local_1c4 = -1;
            local_1a0 = (IActorInstanceManagerInterface *)0x0;
            bVar2 = CheckCrash(this,(FHitResult *)local_268);
            if (bVar2) {
              dVar11 = dStack_208 * dStack_208 + (double)local_268._88_8_ * (double)local_268._88_8_
                       + local_200 * local_200;
              uVar12 = local_200;
              uVar1 = local_268._88_8_;
              uVar10 = dStack_208;
              if ((dVar11 != __real_3ff0000000000000) &&
                 (uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
                 uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
                 uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
                 __real_3e45798ee0000000 <= dVar11)) {
                local_290[0] = __real_3ff0000000000000 / SQRT(dVar11);
                uVar12 = local_200 * local_290[0];
                uVar1 = (double)local_268._88_8_ * local_290[0];
                uVar10 = dStack_208 * local_290[0];
              }
              dVar11 = (double)uVar10 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y +
                       (double)uVar1 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X +
                       (double)uVar12 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
              if (__real_3ff0000000000000 <= dVar11) {
                dVar11 = __real_3ff0000000000000;
              }
              if (dVar11 <= __real_bff0000000000000) {
                dVar11 = __real_bff0000000000000;
              }
              fVar6 = (float)dVar11;
              fVar7 = __real_bf800000;
              if ((__real_bf800000 <= fVar6) && (fVar7 = fVar6, __real_3f800000 <= fVar6)) {
                fVar7 = __real_3f800000;
              }
              pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
              fVar7 = acosf(fVar7);
              fVar7 = fVar7 * __real_42652ee0;
              fVar6 = (float)(**(code **)(*(longlong *)pUVar3 + 0x480))(pUVar3);
              if (fVar7 <= fVar6) {
                local_290[0] = 0.0;
                local_298[0] = 0x53;
                UDS_GameplayAbility::TryActivateAbility
                          ((UDS_GameplayAbility *)this,local_298,
                           (TObjectPtr<UWN_AbilityContext>)local_290);
                local_298[0] = Success;
                UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_298);
                return;
              }
            }
            pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd8);
            if (pUVar3[6].field_0x10 != '\x01') {
              pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd8);
              uVar8 = (uint)*(undefined8 *)(pUVar3 + 6) &
                      (uint)__xmm_7fffffffffffffff7fffffffffffffff;
              uVar9 = (uint)((ulonglong)*(undefined8 *)(pUVar3 + 6) >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
              if ((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar9,uVar8) &&
                   (double)CONCAT44(uVar9,uVar8) != __real_3f1a36e2e0000000) ||
                 (uVar8 = (uint)*(undefined8 *)&pUVar3[6].field_0x8 &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff,
                 uVar9 = (uint)((ulonglong)*(undefined8 *)&pUVar3[6].field_0x8 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                 __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar9,uVar8) &&
                 (double)CONCAT44(uVar9,uVar8) != __real_3f1a36e2e0000000)) {
                UpdateMountMovement(this,param_1);
              }
              else {
                local_298[0] = 0x77;
                bVar2 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_298);
                if (bVar2) {
                  pUVar4 = (UDS_MountAbilityData *)
                           FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x160);
                  UDS_MountAbilityData::SetLastMoveVector
                            (pUVar4,&UE::Math::TVector<double>::UpVector);
                  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
                  (**(code **)(*(longlong *)pUVar3 + 0x2e0))
                            (pUVar3,&UE::Math::TVector<double>::UpVector);
                  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
                  *(undefined4 *)&pUVar3[0xb].field_0xc = 0x42b40000;
                }
                else {
                  local_298[0] = 0x78;
                  bVar2 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_298);
                  if (bVar2) {
                    pUVar4 = (UDS_MountAbilityData *)
                             FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x160);
                    UDS_MountAbilityData::SetLastMoveVector
                              (pUVar4,&UE::Math::TVector<double>::DownVector);
                    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
                    (**(code **)(*(longlong *)pUVar3 + 0x2e0))
                              (pUVar3,&UE::Math::TVector<double>::DownVector);
                    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
                    *(undefined4 *)&pUVar3[0xb].field_0xc = 0xc2b40000;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    local_298[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_298);
  }
  return;
}

// UpdateMountMovement @ 14b858c80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_MountAbility_Flying::UpdateMountMovement(UDS_MountAbility_Flying *this,float param_1)

{
  undefined1 *this_00;
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  undefined1 auVar6 [12];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  ADS_MainCharacter *this_01;
  TWeakObjectPtr<UDS_MainCameraComponent,FWeakObjectPtr> this_02;
  UDS_MainCameraComponent *this_03;
  APawn *this_04;
  TRotator<double> *pTVar11;
  TVector<double> *pTVar12;
  UObject *pUVar13;
  UDS_MountAbilityData *this_05;
  UDS_MovementCore *this_06;
  float fVar14;
  undefined4 extraout_XMM0_Da;
  float fVar15;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 in_XMM4 [16];
  undefined8 uVar28;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  uint uVar32;
  uint uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  UObject *local_res8;
  float local_res10;
  FWeakObjectPtr local_res18;
  double local_res20;
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [24];
  TRotator<double> local_188;
  FWeakObjectPtr local_170;
  double local_168 [4];
  TRotator<double> local_148;
  TRotator<double> local_130;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TRotator<double> local_e8 [8];
  
  local_res10 = param_1;
  this_01 = (ADS_MainCharacter *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
  this_02 = ADS_MainCharacter::GetFollowCamera(this_01);
  local_res8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.WeakPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res8);
  bVar10 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar10) {
    this_03 = (UDS_MainCameraComponent *)FWeakObjectPtr::Get(&local_res18);
    UDS_MainCameraComponent::GetNowCameraState(this_03);
    bVar10 = FWeakObjectPtr::IsValid(&local_170);
    if (bVar10) {
      this_04 = (APawn *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
      pTVar11 = APawn::GetControlRotation(this_04,&local_188);
      uVar34 = 0;
      uVar35 = 0;
      local_130.Yaw = pTVar11->Yaw;
      local_130.Pitch = 0.0;
      local_130.Roll = 0.0;
      pTVar12 = UE::Math::TRotator<double>::RotateVector
                          (&local_130,(TVector<double> *)&local_188,
                           &UE::Math::TVector<double>::RightVector);
      dVar19 = (pTVar12->field0_0x0)._s_0.X;
      dVar22 = (pTVar12->field0_0x0)._s_0.Y;
      dVar1 = (pTVar12->field0_0x0)._s_0.Z;
      pTVar12 = UE::Math::TRotator<double>::RotateVector
                          (&local_130,(TVector<double> *)&local_188,
                           &UE::Math::TVector<double>::ForwardVector);
      dVar21 = (pTVar12->field0_0x0)._s_0.X;
      dVar4 = (pTVar12->field0_0x0)._s_0.Y;
      dVar25 = (pTVar12->field0_0x0)._s_0.Z;
      pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd8);
      dVar24 = *(double *)(pUVar13 + 6);
      pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd8);
      dVar16 = *(double *)&pUVar13[6].field_0x8;
      dVar19 = dVar21 * dVar16 + dVar19 * dVar24;
      local_1b8._16_8_ = dVar25 * dVar16 + dVar1 * dVar24;
      dVar1 = dVar4 * dVar16 + dVar22 * dVar24;
      uVar33 = (uint)((ulonglong)dVar1 >> 0x20);
      local_1b8._8_4_ = SUB84(dVar1,0);
      local_1b8._0_8_ = dVar19;
      local_1b8._12_4_ = uVar33;
      if (((__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
          (uVar32 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar33 = uVar33 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar33,uVar32) &&
          (double)CONCAT44(uVar33,uVar32) != __real_3f1a36e2e0000000)) ||
         (uVar33 = (uint)local_1b8._16_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar32 = (uint)((ulonglong)local_1b8._16_8_ >> 0x20) &
                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar32,uVar33) &&
         (double)CONCAT44(uVar32,uVar33) != __real_3f1a36e2e0000000)) {
        local_148.Pitch = ADS_CameraManager::CameraRotation.Pitch;
        local_148.Yaw = ADS_CameraManager::CameraRotation.Yaw;
        local_148.Roll = ADS_CameraManager::CameraRotation.Roll;
        local_188.Roll = (double)local_1b8._16_8_;
        pUVar13 = FWeakObjectPtr::Get(&local_170);
        this_00 = &this->field_0xd0;
        local_148.Pitch =
             local_148.Pitch +
             (double)(float)(*(uint *)&pUVar13[1].field_0x20 ^
                            __xmm_80000000800000008000000080000000);
        pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        fVar14 = (float)(**(code **)(*(longlong *)pUVar13 + 0x428))(pUVar13);
        UE::Math::TRotator<double>::Vector(&local_148,(TVector<double> *)&local_100._s_0);
        pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
        uVar28 = in_XMM4._8_8_;
        if (*(USceneComponent **)(pUVar13 + 0xb) == (USceneComponent *)0x0) {
          pTVar12 = (TVector<double> *)local_1a0;
          local_1a0._8_8_ = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
          local_1a0._0_8_ = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
          local_1a0._16_8_ = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
        }
        else {
          pTVar12 = USceneComponent::GetForwardVector
                              (*(USceneComponent **)(pUVar13 + 0xb),(TVector<double> *)local_1a0);
          uVar28 = in_XMM4._8_8_;
        }
        uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dVar24 = __real_3e45798ee0000000;
        dVar25 = __real_3ff0000000000000;
        auVar27 = *(undefined1 (*) [16])&pTVar12->field0_0x0;
        uVar5 = auVar27._0_8_;
        uVar7 = auVar27._8_8_;
        uVar29 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar31 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        auVar6._4_8_ = uVar28;
        auVar6._0_4_ = auVar27._4_4_;
        auVar26._0_8_ = auVar6._0_8_ << 0x20;
        auVar26._8_4_ = auVar27._8_4_;
        auVar26._12_4_ = auVar27._12_4_;
        dVar22 = auVar26._8_8_;
        auVar27._8_8_ = uVar7;
        auVar27._0_8_ = dVar22;
        local_1a0._16_8_ = 0.0;
        dVar16 = dVar22 * dVar22 + (double)uVar5 * (double)uVar5;
        if (dVar16 == __real_3ff0000000000000) {
          local_1a0._16_8_ = 0.0;
          uVar34 = 0;
          uVar35 = 0;
        }
        else if (__real_3e45798ee0000000 <= dVar16) {
          local_res8 = (UObject *)(__real_3ff0000000000000 / SQRT(dVar16));
          auVar27._0_8_ = dVar22 * (double)local_res8;
          uVar5 = (double)uVar5 * (double)local_res8;
          uVar7 = auVar27._0_8_;
        }
        else {
          local_1a0._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar34 = uVar29;
          uVar35 = uVar31;
          uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        }
        local_res8 = (UObject *)CONCAT44(local_res8._4_4_,fVar14 * __real_3c8efa35);
        local_res20 = __real_3ff0000000000000;
        dVar16 = (double)CONCAT44(uVar35,uVar34) * local_188.Roll;
        fVar14 = cosf(fVar14 * __real_3c8efa35);
        if ((float)((double)uVar7 * dVar1 + (double)uVar5 * dVar19 + dVar16) < fVar14) {
          local_1a0._8_8_ =
               (double)CONCAT44(uVar35,uVar34) * dVar19 - (double)uVar5 * local_188.Roll;
          local_1a0._0_8_ = (double)uVar7 * local_188.Roll - (double)CONCAT44(uVar35,uVar34) * dVar1
          ;
          local_1a0._16_8_ = (double)uVar5 * dVar1 - (double)uVar7 * dVar19;
          pTVar12 = UE::Math::TVector<double>::GetSafeNormal
                              ((TVector<double> *)local_1a0,(TVector<double> *)local_168,dVar24,
                               &UE::Math::TVector<double>::ZeroVector);
          local_1a0._0_16_ = *(undefined1 (*) [16])&pTVar12->field0_0x0;
          local_e8[0].Roll = (pTVar12->field0_0x0)._s_0.Z;
          dVar16 = local_1a0._8_8_;
          local_168[1]._0_4_ = local_1a0._8_4_;
          local_168[0] = dVar16;
          local_168[1]._4_4_ = local_1a0._12_4_;
          local_res20 = local_e8[0].Roll;
          if (SQRT(dVar16 * dVar16 + local_1a0._0_8_ * local_1a0._0_8_ +
                   local_e8[0].Roll * local_e8[0].Roll) < __real_3f1a36e2e0000000) {
            local_res20 = dVar25;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = dVar16;
            local_1a0._0_16_ = auVar8 << 0x40;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = local_168[1];
            local_168._0_16_ = auVar9 << 0x40;
          }
          __libm_sse2_sincos_();
          dVar4 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
          dVar22 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * local_168[0];
          dVar16 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * local_res20;
          dVar21 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * (double)local_1a0._0_8_;
          dVar23 = dVar22 * (double)CONCAT44(uVar35,uVar34) - dVar16 * (double)uVar7;
          dVar23 = dVar23 + dVar23;
          dVar17 = dVar16 * (double)uVar5 - dVar21 * (double)CONCAT44(uVar35,uVar34);
          dVar17 = dVar17 + dVar17;
          dVar20 = dVar21 * (double)uVar7 - dVar22 * (double)uVar5;
          local_1a0._0_8_ = dVar17;
          dVar20 = dVar20 + dVar20;
          local_res8 = (UObject *)
                       ((dVar20 * dVar22 - dVar17 * dVar16) + dVar23 * dVar4 + (double)uVar5);
          auVar27._8_8_ = 0;
          auVar27._0_8_ = (double)local_res8;
          dVar22 = (dVar17 * dVar21 - dVar23 * dVar22) +
                   dVar20 * dVar4 + (double)CONCAT44(uVar35,uVar34);
          local_168[0] = (dVar23 * dVar16 - dVar20 * dVar21) + dVar17 * dVar4 + (double)uVar7;
          dVar21 = local_168[0] * local_168[0] + (double)local_res8 * (double)local_res8 +
                   dVar22 * dVar22;
          uVar31 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          local_1b8._16_8_ = dVar22;
          local_1b8._0_8_ = local_res8;
          local_1b8._8_8_ = local_168[0];
          dVar16 = dVar22;
          if ((dVar21 != dVar25) &&
             (local_1b8._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
             local_1b8._0_8_ = uVar2, local_1b8._8_8_ = uVar3, dVar16 = (double)local_1a0._16_8_,
             dVar24 <= dVar21)) {
            pUVar13 = (UObject *)(dVar25 / SQRT(dVar21));
            local_1b8._16_8_ = (double)pUVar13 * dVar22;
            local_1b8._0_8_ = (UObject *)((double)pUVar13 * (double)local_res8);
            local_1b8._8_8_ = (double)pUVar13 * local_168[0];
            local_res8 = pUVar13;
            dVar16 = (double)pUVar13 * dVar22;
          }
          local_1a0._16_8_ = dVar16;
          uVar29 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        }
        fVar14 = __real_3f800000;
        auVar18._0_8_ = local_100._s_0.X * local_100._s_0.X + local_100._s_0.Y * local_100._s_0.Y;
        auVar18._8_8_ = 0;
        auVar27 = sqrtpd(auVar27,auVar18);
        dVar22 = auVar27._0_8_;
        local_1b8._0_8_ = (double)local_1b8._0_8_ * dVar22;
        dVar16 = (double)local_1b8._8_8_ * dVar22;
        local_1b8._16_8_ = dVar22 * (double)local_1b8._16_8_;
        local_1b8._8_8_ = dVar16;
        dVar22 = dVar16 * dVar16 + (double)local_1b8._0_8_ * (double)local_1b8._0_8_ +
                 (double)local_1b8._16_8_ * (double)local_1b8._16_8_;
        if (dVar22 == dVar25) {
          local_1b8._8_4_ = SUB84(dVar16,0);
          local_1b8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
          uVar2 = local_1b8._0_8_;
          uVar3 = dVar16;
          dVar24 = (double)local_1b8._16_8_;
          local_1a0._16_8_ = local_1b8._16_8_;
        }
        else if (dVar24 <= dVar22) {
          local_res8 = (UObject *)(dVar25 / SQRT(dVar22));
          uVar3 = dVar16 * (double)local_res8;
          dVar24 = (double)local_1b8._16_8_ * (double)local_res8;
          uVar2 = (double)local_1b8._0_8_ * (double)local_res8;
        }
        else {
          local_1a0._16_8_ = CONCAT44(uVar31,uVar29);
          dVar24 = (double)CONCAT44(uVar31,uVar29);
        }
        fVar30 = (float)((double)uVar3 * dVar1 + dVar19 * (double)uVar2 + dVar24 * local_188.Roll);
        fVar15 = __real_3727c5ac;
        if ((0.0 <= fVar30) && (fVar15 = fVar30, __real_3f800000 < fVar30)) {
          fVar15 = __real_3f7fff58;
        }
        local_res8._0_1_ = 0x77;
        bVar10 = UDS_GameplayAbility::HasStateTag
                           ((UDS_GameplayAbility *)this,(EDS_StateTagType *)&local_res8);
        if (bVar10) {
          local_1b8._0_8_ =
               (double)local_1b8._0_8_ + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
          local_1b8._8_8_ =
               (double)local_1b8._8_8_ + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
          local_100._s_0.Z =
               (double)local_1b8._16_8_ + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
          dVar1 = (double)local_1b8._0_8_;
          dVar24 = (double)local_1b8._8_8_;
        }
        else {
          local_res8._0_1_ = 0x78;
          bVar10 = UDS_GameplayAbility::HasStateTag
                             ((UDS_GameplayAbility *)this,(EDS_StateTagType *)&local_res8);
          dVar1 = (double)local_1b8._0_8_;
          dVar24 = (double)local_1b8._8_8_;
          if (bVar10) {
            local_1b8._0_8_ =
                 (double)local_1b8._0_8_ + UE::Math::TVector<double>::DownVector.field0_0x0._s_0.X;
            local_1b8._8_8_ =
                 (double)local_1b8._8_8_ + UE::Math::TVector<double>::DownVector.field0_0x0._s_0.Y;
            local_100._s_0.Z =
                 (double)local_1b8._16_8_ + UE::Math::TVector<double>::DownVector.field0_0x0._s_0.Z;
            dVar1 = (double)local_1b8._0_8_;
            dVar24 = (double)local_1b8._8_8_;
          }
        }
        dVar16 = dVar24 * dVar24 + dVar1 * dVar1 + local_100._s_0.Z * local_100._s_0.Z;
        if (dVar25 < dVar16) {
          dVar25 = dVar25 / SQRT(dVar16);
          local_100._s_0.Z = dVar25 * local_100._s_0.Z;
          local_1b8._8_4_ = SUB84(dVar24 * dVar25,0);
          local_1b8._0_8_ = dVar1 * dVar25;
          local_1b8._12_4_ = (int)((ulonglong)(dVar24 * dVar25) >> 0x20);
          local_e8[0].Roll = local_100._s_0.Z;
        }
        fVar30 = __real_bf800000;
        if ((__real_bf800000 <= fVar15) && (fVar30 = fVar15, fVar14 <= fVar15)) {
          fVar30 = fVar14;
        }
        dVar25 = local_100._s_0.Z * __real_4056800000000000 * local_res20;
        local_1b8._16_8_ = local_100._s_0.Z;
        fVar14 = acosf(fVar30);
        dVar1 = (double)(fVar14 * __real_42652ee0) * local_res20;
        pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        *(float *)&pUVar13[0xb].field_0x8 = (float)dVar1;
        pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        *(float *)&pUVar13[0xb].field_0xc = (float)dVar25;
        pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        (**(code **)(*(longlong *)pUVar13 + 0x2e0))(pUVar13,local_1b8);
        this_05 = (UDS_MountAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x160);
        UDS_MountAbilityData::SetLastMoveVector(this_05,(TVector<double> *)local_1b8);
        fVar14 = local_res10;
        UDS_MountBaseAbility::UpdateBlockByChildCollision
                  ((UDS_MountBaseAbility *)this,local_res10,(TVector<double> *)local_1b8);
        pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        (**(code **)(*(longlong *)pUVar13 + 0x458))(pUVar13,&local_118);
        if (((local_118._s_0.X != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) ||
            (local_118._s_0.Y != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)) ||
           (local_118._s_0.Z != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)) {
          UE::Math::TVector<double>::ToOrientationRotator
                    ((TVector<double> *)&local_118._s_0,&local_188);
          local_1a0._0_8_ = 0.0;
          local_1a0._16_8_ = 0.0;
          pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
          fVar15 = (float)(**(code **)(*(longlong *)&pUVar13[0x29].field_0x10 + 0x158))();
          this_06 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
          pTVar11 = UDS_MovementCore::GetActorRotation(this_06,local_e8);
          pTVar11 = FMath::RInterpTo(&local_188,pTVar11,(TRotator<double> *)local_1a0,fVar14,fVar15)
          ;
          local_1a0._0_8_ = pTVar11->Pitch;
          local_1a0._8_8_ = pTVar11->Yaw;
          local_1a0._16_8_ = pTVar11->Roll;
          pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
          (**(code **)(*(longlong *)pUVar13 + 0x370))(pUVar13,local_1a0);
        }
      }
    }
  }
  return;
}

