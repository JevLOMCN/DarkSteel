// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b496e00

UClass * __cdecl UDS_FindTargetAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_FindTargetAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_FindTargetAbility",
               &Z_Registration_Info_UClass_UDS_FindTargetAbility.InnerSingleton,
               StaticRegisterNativesUDS_FindTargetAbility,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_FindTargetAbility>,
               InternalVTableHelperCtorCaller<UDS_FindTargetAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_FindTargetAbility.InnerSingleton;
}

// UDS_FindTargetAbility @ 14b49a190

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

UDS_FindTargetAbility * __thiscall
UDS_FindTargetAbility::UDS_FindTargetAbility(UDS_FindTargetAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UDS_FindTargetAbility @ 14b49a1d0

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

UDS_FindTargetAbility * __thiscall
UDS_FindTargetAbility::UDS_FindTargetAbility
          (UDS_FindTargetAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UDS_FindTargetAbility @ 14b49aba0

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

void __thiscall UDS_FindTargetAbility::~UDS_FindTargetAbility(UDS_FindTargetAbility *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b49bd10

UClass * __cdecl UDS_FindTargetAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_FindTargetAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_FindTargetAbility",
               &Z_Registration_Info_UClass_UDS_FindTargetAbility.InnerSingleton,
               StaticRegisterNativesUDS_FindTargetAbility,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_FindTargetAbility>,
               InternalVTableHelperCtorCaller<UDS_FindTargetAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_FindTargetAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_FindTargetAbility @ 14b49c060

void __cdecl UDS_FindTargetAbility::StaticRegisterNativesUDS_FindTargetAbility(void)

{
  return;
}

// ClearVariables @ 14b7a0170

void __thiscall UDS_FindTargetAbility::ClearVariables(UDS_FindTargetAbility *this)

{
  return;
}

// FindTargetByDistance @ 14b7a8fc0

bool __cdecl
UDS_FindTargetAbility::FindTargetByDistance
          (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  UDS_DataBase *this;
  ulong64 uVar2;
  
  bVar1 = TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>::UEOpEquals(param_1,(void *)0x0);
  if (bVar1) {
    return false;
  }
  this = (UDS_DataBase *)FWeakObjectPtr::Get(&param_1->WeakPtr);
  uVar2 = UDS_DataBase::GetEntityID(this);
  bVar1 = FindTargetByDistance(uVar2,param_1);
  return bVar1;
}

// FindTargetByDistance @ 14b7a9010

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

bool __cdecl
UDS_FindTargetAbility::FindTargetByDistance
          (ulong64 param_1,TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *param_2)

{
  undefined1 *puVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  FDS_EntityBase *pFVar16;
  APawn *this;
  UClass *pUVar17;
  UDS_GameOptionManager *this_00;
  UDS_GameOptionData *this_01;
  UObject *pUVar18;
  TVector<double>_u_0 *pTVar19;
  TRotator<double> *pTVar20;
  FDS_TargetInfo *pFVar21;
  double *pdVar22;
  double *pdVar23;
  ulonglong uVar24;
  ForAnyElementType FVar25;
  char cVar26;
  FScriptContainerElement *pFVar27;
  ulong64 uVar28;
  float fVar29;
  float _X;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  float fVar33;
  double local_res20;
  ForAnyElementType local_278;
  uint local_270;
  uint uStack_26c;
  ulong64 local_268;
  TArray<FDS_EntityBase_*,TSizedDefaultAllocator<32>_> local_260;
  TArray<FDS_EntityBase_*,TSizedDefaultAllocator<32>_> local_250;
  FDS_TargetInfo local_238;
  uint local_1e8;
  FWeakObjectPtr local_1e0;
  FWeakObjectPtr local_1d8;
  FScriptContainerElement *local_1d0;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1b0;
  FWeakObjectPtr local_198;
  FWeakObjectPtr local_190;
  FScriptContainerElement *local_188;
  FWeakObjectPtr local_180;
  FWeakObjectPtr local_178;
  TRotator<double> local_170;
  TVector<double>_u_0 local_158;
  TRotator<double> local_140;
  FDS_TargetInfo local_128 [3];
  
  bVar11 = TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>::UEOpEquals(param_2,(void *)0x0)
  ;
  if (((!bVar11) && (param_1 != 0)) &&
     (local_268 = param_1, pFVar16 = FDS_EntityBase::GetEntityBase(&local_268),
     pFVar16 != (FDS_EntityBase *)0x0)) {
    UDS_MovementCore::GetMovementCore((ulong64)&local_190);
    bVar11 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_190,(void *)0x0);
    if (!bVar11) {
      (**(code **)(pFVar16->_padding_ + 0x1b8))(pFVar16);
      bVar11 = TWeakObjectPtr<UDS_InputData,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<UDS_InputData,FWeakObjectPtr> *)&local_1d8,(void *)0x0);
      if (!bVar11) {
        (**(code **)(pFVar16->_padding_ + 0x150))(pFVar16);
        bVar11 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                           ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_1e0,(void *)0x0);
        if ((!bVar11) && (this = (APawn *)FWeakObjectPtr::Get(&local_1e0), this != (APawn *)0x0)) {
          pUVar17 = Z_Construct_UClass_ACharacter_NoRegister();
          iVar14 = (int)pUVar17->_padding_;
          if (((iVar14 <= *(int *)(this->_padding_ + 0x38)) &&
              (((longlong *)
                *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar14 * 8) ==
                &pUVar17->_padding_ &&
               (this_00 = UDS_GameOptionManager::GetInst(), this_00 != (UDS_GameOptionManager *)0x0)
               ))) && (this_01 = UDS_GameOptionManager::GetGameOptionData(this_00,TargetMode),
                      this_01 != (UDS_GameOptionData *)0x0)) {
            iVar14 = UDS_GameOptionData::GetGameOptionValue(this_01,0);
            pUVar18 = FWeakObjectPtr::Get(&param_2->WeakPtr);
            dVar5 = __real_3e45798ee0000000;
            puVar1 = &pUVar18[4].field_0x8;
            local_278.Data = (FScriptContainerElement *)0x0;
            local_270 = 0;
            uStack_26c = 0;
            local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_250.ArrayNum = 0;
            local_250.ArrayMax = 0;
            local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_260.ArrayNum = 0;
            local_260.ArrayMax = 0;
            cVar26 = pUVar18[4].field_0x17;
            local_1c8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_1c8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            if ((char)iVar14 == '\x01') {
              cVar26 = '\x01';
            }
            bVar11 = false;
            local_1c8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            if (pUVar18[4].field_0x16 == '\x01') {
              local_270 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_278,(int *)&uStack_26c);
              *(undefined4 *)(local_278.Data + (longlong)(int)local_270 * 4) = 0;
            }
            else {
              pUVar18 = FWeakObjectPtr::Get(&local_1d8);
              if (pUVar18[6].field_0x11 == '\0') {
                pUVar18 = FWeakObjectPtr::Get(&local_1e0);
                if (*(USceneComponent **)(pUVar18 + 0xb) == (USceneComponent *)0x0) {
                  pTVar19 = &local_1b0;
                  local_1b0._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
                  local_1b0._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
                  local_1b0._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
                }
                else {
                  pTVar19 = &USceneComponent::GetForwardVector
                                       (*(USceneComponent **)(pUVar18 + 0xb),
                                        (TVector<double> *)&local_1b0._s_0)->field0_0x0;
                }
                local_1c8._0_16_ = *(undefined1 (*) [16])&(pTVar19->_s_0).X;
                local_1c8._s_0.Z = (pTVar19->_s_0).Z;
              }
              else {
                if (cVar26 == '\0') {
LAB_14b7a99d6:
                  if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_260.AllocatorInstance.Data);
                  }
                  if (local_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_250.AllocatorInstance.Data);
                  }
                  if (local_278.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_278.Data);
                  }
                  return true;
                }
                pUVar18 = FWeakObjectPtr::Get(&local_1d8);
                pTVar20 = APawn::GetControlRotation(this,&local_140);
                local_170.Yaw = pTVar20->Yaw;
                local_170.Pitch = 0.0;
                local_170.Roll = 0.0;
                UE::Math::TRotator<double>::RotateVector
                          (&local_170,(TVector<double> *)&local_1b0._s_0,
                           &UE::Math::TVector<double>::RightVector);
                UE::Math::TRotator<double>::RotateVector
                          (&local_170,(TVector<double> *)&local_158._s_0,
                           &UE::Math::TVector<double>::ForwardVector);
                dVar2 = *(double *)&pUVar18[6].field_0x8;
                dVar30 = *(double *)(pUVar18 + 6);
                dVar31 = local_158._s_0.Y * dVar2 + local_1b0._s_0.Y * dVar30;
                local_1c8._s_0.Z = local_158._s_0.Z * dVar2 + local_1b0._s_0.Z * dVar30;
                local_1c8._8_4_ = SUB84(dVar31,0);
                local_1c8._s_0.X = local_158._s_0.X * dVar2 + local_1b0._s_0.X * dVar30;
                local_1c8._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
                local_140.Roll = local_1c8._s_0.Z;
                UE::Math::TVector<double>::Normalize((TVector<double> *)&local_1c8._s_0,dVar5);
                if (local_270 == uStack_26c) {
                  local_270 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x404,&local_278,(int *)&uStack_26c);
                }
                *(undefined4 *)(local_278.Data + (longlong)(int)local_270 * 4) = 2;
                local_270 = local_270 + 1;
              }
              if (local_270 == uStack_26c) {
                local_270 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&local_278,(int *)&uStack_26c);
              }
              uVar15 = local_270 + 1;
              *(undefined4 *)(local_278.Data + (longlong)(int)local_270 * 4) = 0;
              if (uVar15 == uStack_26c) {
                local_270 = uVar15;
                uVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_278,(int *)&uStack_26c);
              }
              local_270 = uVar15 + 1;
              *(undefined4 *)(local_278.Data + (longlong)(int)uVar15 * 4) = 1;
              if (local_270 == uStack_26c) {
                local_270 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&local_278,(int *)&uStack_26c);
              }
              *(undefined4 *)(local_278.Data + (longlong)(int)local_270 * 4) = 3;
            }
            uVar10 = local_1c8._s_0.Z;
            fVar8 = __real_42652ee0;
            fVar7 = __real_bf800000;
            fVar6 = __real_3f800000;
            dVar2 = __real_3ff0000000000000;
            local_270 = local_270 + 1;
            uVar24 = (ulonglong)(int)local_270;
            local_188 = local_278.Data + uVar24 * 4;
            uVar9 = local_1c8._s_0.Y;
            local_1e8 = local_270;
            FVar25.Data = local_278.Data;
            pFVar27 = local_188;
            fVar33 = __real_c2c80000;
LAB_14b7a94a2:
            while( true ) {
              local_1d0 = FVar25.Data;
              if (local_270 != (uint)uVar24) {
                `TCheckedPointerIterator<enum_EDS_FindTargetRule,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_res20);
              }
              if (FVar25.Data == pFVar27) goto LAB_14b7a99d6;
              iVar14 = *(int *)FVar25.Data;
              if (iVar14 == 0) break;
              if (iVar14 == 1) {
                local_res20 = (double)CONCAT71(local_res20._1_7_,0x1c);
                UDS_AbilityDataSet::GetAbilityData<UDS_LockOnTargetAbilityData>
                          ((ulong64 *)&local_180,(EDS_AbilityTagType *)&local_268);
                bVar13 = TWeakObjectPtr<UDS_LockOnTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                                   ((TWeakObjectPtr<UDS_LockOnTargetAbilityData,FWeakObjectPtr> *)
                                    &local_180,(void *)0x0);
                if (!bVar13) {
                  pUVar18 = FWeakObjectPtr::Get(&local_180);
                  uVar28 = *(ulong64 *)&pUVar18[2].field_0x8;
                  goto LAB_14b7a98ed;
                }
                goto LAB_14b7a993c;
              }
              if (iVar14 == 2) {
                if (!bVar11) {
                  bVar11 = true;
                  GetForwardOverlapEntitys
                            (&local_250,&local_260,local_268,(FDS_FindTargetConditionInfo *)puVar1,
                             (TVector<double> *)&local_1c8._s_0);
                }
                iVar14 = local_250.ArrayNum;
                bVar13 = false;
                pFVar27 = local_250.AllocatorInstance.Data + (longlong)local_250.ArrayNum * 8;
                FVar25.Data = local_250.AllocatorInstance.Data;
                while( true ) {
                  if (local_250.ArrayNum != iVar14) {
                    `TCheckedPointerIterator<FDS_EntityBase_*,int,0>::operator!='::__l2::<lambda_1>
                    ::operator()(&local_res20);
                  }
                  if (FVar25.Data == pFVar27) break;
                  pFVar21 = IsValidTargetOnSkill
                                      (local_128,local_268,
                                       *(ulong64 *)(*(longlong *)FVar25.Data + 8),
                                       (FDS_FindTargetConditionInfo *)puVar1);
                  local_238.bIsValid = pFVar21->bIsValid;
                  local_238.bIsForcedSetTarget = pFVar21->bIsForcedSetTarget;
                  local_238._2_6_ = *(undefined6 *)&pFVar21->field_0x2;
                  local_238.TargetEntityID = pFVar21->TargetEntityID;
                  local_238.TargetHitSphereID = pFVar21->TargetHitSphereID;
                  local_238.TargetRadius = pFVar21->TargetRadius;
                  local_238.DistanceOnSelected = pFVar21->DistanceOnSelected;
                  local_238._28_4_ = *(undefined4 *)&pFVar21->field_0x1c;
                  local_238.TargetLocationOnSelected.field0_0x0._s_0.X =
                       (pFVar21->TargetLocationOnSelected).field0_0x0._s_0.X;
                  local_238.TargetLocationOnSelected.field0_0x0._s_0.Y =
                       (pFVar21->TargetLocationOnSelected).field0_0x0._s_0.Y;
                  local_238.TargetLocationOnSelected.field0_0x0._s_0.Z =
                       (pFVar21->TargetLocationOnSelected).field0_0x0._s_0.Z;
                  local_238.ForcedTargetLocation.field0_0x0._s_0.X =
                       (pFVar21->ForcedTargetLocation).field0_0x0._s_0.X;
                  local_238.ForcedTargetLocation.field0_0x0._s_0.Y =
                       (pFVar21->ForcedTargetLocation).field0_0x0._s_0.Y;
                  local_238.ForcedTargetLocation.field0_0x0._s_0.Z =
                       (pFVar21->ForcedTargetLocation).field0_0x0._s_0.Z;
                  bVar12 = FDS_TargetInfo::IsValidData(&local_238);
                  if (bVar12) {
                    UDS_MovementCore::GetMovementCore((ulong64)&local_198);
                    bVar12 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                                       ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)
                                        &local_198,(void *)0x0);
                    if (!bVar12) {
                      pUVar18 = FWeakObjectPtr::Get(&local_198);
                      pdVar22 = (double *)
                                (**(code **)(*(longlong *)pUVar18 + 0x338))(pUVar18,&local_140);
                      pUVar18 = FWeakObjectPtr::Get(&local_190);
                      pdVar23 = (double *)
                                (**(code **)(*(longlong *)pUVar18 + 0x338))(pUVar18,&local_158);
                      local_1b0._s_0.Z = pdVar22[2] - pdVar23[2];
                      uVar4 = *pdVar22 - *pdVar23;
                      uVar3 = pdVar22[1] - pdVar23[1];
                      dVar30 = (double)uVar3 * (double)uVar3 + (double)uVar4 * (double)uVar4 +
                               local_1b0._s_0.Z * local_1b0._s_0.Z;
                      uVar32 = local_1b0._s_0.Z;
                      if (dVar30 != dVar2) {
                        if (dVar5 <= dVar30) {
                          local_res20 = dVar2 / SQRT(dVar30);
                          uVar3 = (double)uVar3 * local_res20;
                          uVar4 = local_res20 * (double)uVar4;
                          uVar32 = local_1b0._s_0.Z * local_res20;
                        }
                        else {
                          local_1b0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
                          ;
                          uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                          uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                          uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                        }
                      }
                      fVar29 = (float)((double)uVar9 * (double)uVar3 +
                                       local_1c8._s_0.X * (double)uVar4 +
                                      (double)uVar10 * (double)uVar32);
                      if (fVar6 <= fVar29) {
                        fVar29 = fVar6;
                      }
                      if (fVar29 <= fVar7) {
                        fVar29 = fVar7;
                      }
                      _X = fVar7;
                      if ((fVar7 <= fVar29) && (_X = fVar29, fVar6 <= fVar29)) {
                        _X = fVar6;
                      }
                      fVar29 = acosf(_X);
                      if ((fVar33 < 0.0) || (fVar29 * fVar8 < fVar33)) {
                        bVar13 = true;
                        pUVar18 = FWeakObjectPtr::Get(&param_2->WeakPtr);
                        pUVar18[2].field_0x8 = local_238.bIsValid;
                        pUVar18[2].field_0x9 = local_238.bIsForcedSetTarget;
                        *(undefined6 *)&pUVar18[2].field_0xa = local_238._2_6_;
                        *(ulong64 *)&pUVar18[2].field_0x10 = local_238.TargetEntityID;
                        *(int *)&pUVar18[2].field_0x18 = local_238.TargetHitSphereID;
                        *(float *)&pUVar18[2].field_0x1c = local_238.TargetRadius;
                        *(float *)&pUVar18[2].field_0x20 = local_238.DistanceOnSelected;
                        *(undefined4 *)&pUVar18[2].field_0x24 = local_238._28_4_;
                        *(double *)(pUVar18 + 3) =
                             local_238.TargetLocationOnSelected.field0_0x0._s_0.X;
                        *(double *)&pUVar18[3].field_0x8 =
                             local_238.TargetLocationOnSelected.field0_0x0._s_0.Y;
                        *(double *)&pUVar18[3].field_0x10 =
                             local_238.TargetLocationOnSelected.field0_0x0._s_0.Z;
                        *(double *)&pUVar18[3].field_0x18 =
                             local_238.ForcedTargetLocation.field0_0x0._s_0.X;
                        *(double *)&pUVar18[3].field_0x20 =
                             local_238.ForcedTargetLocation.field0_0x0._s_0.Y;
                        *(double *)(pUVar18 + 4) = local_238.ForcedTargetLocation.field0_0x0._s_0.Z;
                        fVar33 = fVar29 * fVar8;
                      }
                    }
                  }
                  FVar25.Data = FVar25.Data + 8;
                }
              }
              else {
                if (iVar14 != 3) goto LAB_14b7a993c;
                if (!bVar11) {
                  bVar11 = true;
                  GetForwardOverlapEntitys
                            (&local_250,&local_260,local_268,(FDS_FindTargetConditionInfo *)puVar1,
                             (TVector<double> *)&local_1c8._s_0);
                }
                bVar13 = false;
                iVar14 = local_260.ArrayNum;
                pFVar27 = local_260.AllocatorInstance.Data + (longlong)local_260.ArrayNum * 8;
                FVar25.Data = local_260.AllocatorInstance.Data;
                while( true ) {
                  if (local_260.ArrayNum != iVar14) {
                    `TCheckedPointerIterator<FDS_EntityBase_*,int,0>::operator!='::__l2::<lambda_1>
                    ::operator()(&local_res20);
                  }
                  if (FVar25.Data == pFVar27) break;
                  pFVar21 = IsValidTargetOnSkill
                                      (local_128,local_268,
                                       *(ulong64 *)(*(longlong *)FVar25.Data + 8),
                                       (FDS_FindTargetConditionInfo *)puVar1);
                  local_238.bIsValid = pFVar21->bIsValid;
                  local_238.bIsForcedSetTarget = pFVar21->bIsForcedSetTarget;
                  local_238._2_6_ = *(undefined6 *)&pFVar21->field_0x2;
                  local_238.TargetEntityID = pFVar21->TargetEntityID;
                  local_238.TargetHitSphereID = pFVar21->TargetHitSphereID;
                  local_238.TargetRadius = pFVar21->TargetRadius;
                  local_238.DistanceOnSelected = pFVar21->DistanceOnSelected;
                  local_238._28_4_ = *(undefined4 *)&pFVar21->field_0x1c;
                  local_238.TargetLocationOnSelected.field0_0x0._s_0.X =
                       (pFVar21->TargetLocationOnSelected).field0_0x0._s_0.X;
                  local_238.TargetLocationOnSelected.field0_0x0._s_0.Y =
                       (pFVar21->TargetLocationOnSelected).field0_0x0._s_0.Y;
                  local_238.TargetLocationOnSelected.field0_0x0._s_0.Z =
                       (pFVar21->TargetLocationOnSelected).field0_0x0._s_0.Z;
                  local_238.ForcedTargetLocation.field0_0x0._s_0.X =
                       (pFVar21->ForcedTargetLocation).field0_0x0._s_0.X;
                  local_238.ForcedTargetLocation.field0_0x0._s_0.Y =
                       (pFVar21->ForcedTargetLocation).field0_0x0._s_0.Y;
                  local_238.ForcedTargetLocation.field0_0x0._s_0.Z =
                       (pFVar21->ForcedTargetLocation).field0_0x0._s_0.Z;
                  bVar12 = FDS_TargetInfo::IsValidData(&local_238);
                  if ((bVar12) &&
                     ((fVar29 = local_238.DistanceOnSelected, fVar33 < 0.0 ||
                      (local_238.DistanceOnSelected < fVar33)))) {
                    bVar13 = true;
                    pUVar18 = FWeakObjectPtr::Get(&param_2->WeakPtr);
                    pUVar18[2].field_0x8 = local_238.bIsValid;
                    pUVar18[2].field_0x9 = local_238.bIsForcedSetTarget;
                    *(undefined6 *)&pUVar18[2].field_0xa = local_238._2_6_;
                    *(ulong64 *)&pUVar18[2].field_0x10 = local_238.TargetEntityID;
                    *(int *)&pUVar18[2].field_0x18 = local_238.TargetHitSphereID;
                    *(float *)&pUVar18[2].field_0x1c = local_238.TargetRadius;
                    *(float *)&pUVar18[2].field_0x20 = local_238.DistanceOnSelected;
                    *(undefined4 *)&pUVar18[2].field_0x24 = local_238._28_4_;
                    *(double *)(pUVar18 + 3) = local_238.TargetLocationOnSelected.field0_0x0._s_0.X;
                    *(double *)&pUVar18[3].field_0x8 =
                         local_238.TargetLocationOnSelected.field0_0x0._s_0.Y;
                    *(double *)&pUVar18[3].field_0x10 =
                         local_238.TargetLocationOnSelected.field0_0x0._s_0.Z;
                    *(double *)&pUVar18[3].field_0x18 =
                         local_238.ForcedTargetLocation.field0_0x0._s_0.X;
                    *(double *)&pUVar18[3].field_0x20 =
                         local_238.ForcedTargetLocation.field0_0x0._s_0.Y;
                    *(double *)(pUVar18 + 4) = local_238.ForcedTargetLocation.field0_0x0._s_0.Z;
                    fVar33 = fVar29;
                  }
                  FVar25.Data = FVar25.Data + 8;
                }
              }
              if (bVar13) goto LAB_14b7a99d6;
              FVar25.Data = local_1d0 + 4;
              uVar24 = (ulonglong)local_1e8;
              pFVar27 = local_188;
              fVar33 = __real_c2c80000;
            }
            UDS_PlayerData::GetData((ulong64)&local_178,local_268,false);
            bVar13 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                               ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_178,
                                (void *)0x0);
            if (!bVar13) {
              pUVar18 = FWeakObjectPtr::Get(&local_178);
              uVar28 = *(ulong64 *)&pUVar18[9].field_0x8;
LAB_14b7a98ed:
              if (uVar28 != 0) {
                pFVar21 = IsValidTargetOnSkill
                                    (local_128,local_268,uVar28,
                                     (FDS_FindTargetConditionInfo *)puVar1);
                local_238.bIsValid = pFVar21->bIsValid;
                local_238.bIsForcedSetTarget = pFVar21->bIsForcedSetTarget;
                local_238._2_6_ = *(undefined6 *)&pFVar21->field_0x2;
                local_238.TargetEntityID = pFVar21->TargetEntityID;
                local_238.TargetHitSphereID = pFVar21->TargetHitSphereID;
                local_238.TargetRadius = pFVar21->TargetRadius;
                local_238.DistanceOnSelected = pFVar21->DistanceOnSelected;
                local_238._28_4_ = *(undefined4 *)&pFVar21->field_0x1c;
                local_238.TargetLocationOnSelected.field0_0x0._s_0.X =
                     (pFVar21->TargetLocationOnSelected).field0_0x0._s_0.X;
                local_238.TargetLocationOnSelected.field0_0x0._s_0.Y =
                     (pFVar21->TargetLocationOnSelected).field0_0x0._s_0.Y;
                local_238.TargetLocationOnSelected.field0_0x0._s_0.Z =
                     (pFVar21->TargetLocationOnSelected).field0_0x0._s_0.Z;
                local_238.ForcedTargetLocation.field0_0x0._s_0.X =
                     (pFVar21->ForcedTargetLocation).field0_0x0._s_0.X;
                local_238.ForcedTargetLocation.field0_0x0._s_0.Y =
                     (pFVar21->ForcedTargetLocation).field0_0x0._s_0.Y;
                local_238.ForcedTargetLocation.field0_0x0._s_0.Z =
                     (pFVar21->ForcedTargetLocation).field0_0x0._s_0.Z;
                bVar13 = FDS_TargetInfo::IsValidData(&local_238);
                if (bVar13) {
                  pUVar18 = FWeakObjectPtr::Get(&param_2->WeakPtr);
                  pUVar18[2].field_0x8 = local_238.bIsValid;
                  pUVar18[2].field_0x9 = local_238.bIsForcedSetTarget;
                  *(undefined6 *)&pUVar18[2].field_0xa = local_238._2_6_;
                  *(ulong64 *)&pUVar18[2].field_0x10 = local_238.TargetEntityID;
                  *(int *)&pUVar18[2].field_0x18 = local_238.TargetHitSphereID;
                  *(float *)&pUVar18[2].field_0x1c = local_238.TargetRadius;
                  *(float *)&pUVar18[2].field_0x20 = local_238.DistanceOnSelected;
                  *(undefined4 *)&pUVar18[2].field_0x24 = local_238._28_4_;
                  *(double *)(pUVar18 + 3) = local_238.TargetLocationOnSelected.field0_0x0._s_0.X;
                  *(double *)&pUVar18[3].field_0x8 =
                       local_238.TargetLocationOnSelected.field0_0x0._s_0.Y;
                  *(double *)&pUVar18[3].field_0x10 =
                       local_238.TargetLocationOnSelected.field0_0x0._s_0.Z;
                  *(double *)&pUVar18[3].field_0x18 =
                       local_238.ForcedTargetLocation.field0_0x0._s_0.X;
                  *(double *)&pUVar18[3].field_0x20 =
                       local_238.ForcedTargetLocation.field0_0x0._s_0.Y;
                  *(double *)(pUVar18 + 4) = local_238.ForcedTargetLocation.field0_0x0._s_0.Z;
                  goto LAB_14b7a99d6;
                }
              }
            }
LAB_14b7a993c:
            FVar25.Data = FVar25.Data + 4;
            uVar24 = (ulonglong)local_1e8;
            goto LAB_14b7a94a2;
          }
        }
      }
    }
  }
  return false;
}

// FindTargetByForced @ 14b7a9a50

bool __cdecl
UDS_FindTargetAbility::FindTargetByForced
          (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  UDS_DataBase *this;
  ulong64 uVar2;
  
  bVar1 = TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>::UEOpEquals(param_1,(void *)0x0);
  if (bVar1) {
    return false;
  }
  this = (UDS_DataBase *)FWeakObjectPtr::Get(&param_1->WeakPtr);
  uVar2 = UDS_DataBase::GetEntityID(this);
  bVar1 = FindTargetByForced(uVar2,param_1);
  return bVar1;
}

// FindTargetByForced @ 14b7a9aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

bool __cdecl
UDS_FindTargetAbility::FindTargetByForced
          (ulong64 param_1,TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *param_2)

{
  double dVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [12];
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  UObject *pUVar16;
  FDS_EntityBase *pFVar17;
  FDS_EntityBase *this;
  undefined1 (*pauVar18) [16];
  UDS_MovementCore *this_00;
  TVector<double> *pTVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined8 uVar36;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar37;
  uint uVar38;
  undefined4 uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auStack_268 [32];
  FWeakObjectPtr local_248;
  FWeakObjectPtr local_240;
  ulong64 local_238;
  ulong64 local_230;
  FWeakObjectPtr local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  longlong *local_1e8;
  undefined1 auStack_1e0 [16];
  uint uStack_1d0;
  uint uStack_1cc;
  longlong local_1c8;
  TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_1c0;
  TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_1b8;
  undefined2 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_158 [32];
  longlong local_138;
  TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_130;
  TVector<double> local_128;
  TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  local_108;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_268;
  bVar13 = TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>::UEOpEquals(param_2,(void *)0x0)
  ;
  if (!bVar13) {
    pUVar16 = FWeakObjectPtr::Get(&param_2->WeakPtr);
    local_1a8 = *(undefined8 *)&pUVar16[2].field_0x8;
    local_238 = *(ulong64 *)&pUVar16[2].field_0x10;
    local_198 = *(undefined8 *)&pUVar16[2].field_0x18;
    uStack_190 = *(undefined8 *)&pUVar16[2].field_0x20;
    uVar36 = 0;
    local_178 = *(undefined8 *)&pUVar16[3].field_0x10;
    uStack_170 = *(undefined8 *)&pUVar16[3].field_0x18;
    uVar7 = *(undefined8 *)&pUVar16[3].field_0x20;
    uVar8 = *(undefined8 *)(pUVar16 + 4);
    if ((param_1 != 0) && (local_238 != 0)) {
      local_230 = param_1;
      uStack_1a0 = local_238;
      pFVar17 = FDS_EntityBase::GetEntityBase(&local_230);
      this = FDS_EntityBase::GetEntityBase(&local_238);
      if ((pFVar17 != (FDS_EntityBase *)0x0) && (this != (FDS_EntityBase *)0x0)) {
        UDS_MovementCore::GetMovementCore((ulong64)&local_228);
        UDS_MovementCore::GetMovementCore((ulong64)&local_248);
        bVar13 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                           ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_228,
                            (void *)0x0);
        if ((!bVar13) &&
           (bVar13 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                               ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_248,
                                (void *)0x0), !bVar13)) {
          pUVar16 = FWeakObjectPtr::Get(&local_228);
          (**(code **)(*(longlong *)pUVar16 + 0x338))(pUVar16,&local_208);
          fVar47 = __real_c2c80000;
          local_220 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          uStack_218 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          iVar23 = 0;
          fVar48 = 0.0;
          local_210 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          bVar13 = FDS_EntityBase::GetIsMultiHitCollision(this);
          if (!bVar13) {
            pUVar16 = FWeakObjectPtr::Get(&local_248);
            pauVar18 = (undefined1 (*) [16])
                       (**(code **)(*(longlong *)pUVar16 + 0x338))(pUVar16,&local_220);
            fVar48 = this->ScaledCapsuleRadius;
            auVar34 = *pauVar18;
            dVar1 = *(double *)pauVar18[1];
            uVar37 = SUB84(dVar1,0);
            uVar39 = (undefined4)((ulonglong)dVar1 >> 0x20);
            auVar6._4_8_ = uVar36;
            auVar6._0_4_ = auVar34._4_4_;
            auVar32._0_8_ = auVar6._0_8_ << 0x20;
            auVar32._8_4_ = auVar34._8_4_;
            auVar32._12_4_ = auVar34._12_4_;
            local_200 = auVar32._8_8_ - local_200;
            local_208 = auVar34._0_8_ - local_208;
            fVar47 = (float)SQRT(local_200 * local_200 + local_208 * local_208 +
                                 (dVar1 - local_1f8) * (dVar1 - local_1f8));
            uVar49 = auVar34._0_4_;
            uVar50 = auVar34._4_4_;
            uVar51 = auVar34._8_4_;
            uVar52 = auVar34._12_4_;
LAB_14b7a9f8d:
            uStack_1a0 = local_238;
            local_1a8 = CONCAT71(local_1a8._1_7_,1);
            local_198 = CONCAT44(local_198._4_4_,iVar23);
            pUVar16 = FWeakObjectPtr::Get(&param_2->WeakPtr);
            *(undefined8 *)&pUVar16[2].field_0x8 = local_1a8;
            *(undefined4 *)&pUVar16[2].field_0x10 = (undefined4)uStack_1a0;
            *(undefined4 *)&pUVar16[2].field_0x14 = uStack_1a0._4_4_;
            *(undefined4 *)&pUVar16[2].field_0x18 = (undefined4)local_198;
            *(float *)&pUVar16[2].field_0x1c = fVar48;
            *(float *)&pUVar16[2].field_0x20 = fVar47;
            *(undefined4 *)&pUVar16[2].field_0x24 = uStack_190._4_4_;
            *(undefined4 *)(pUVar16 + 3) = uVar49;
            *(undefined4 *)&pUVar16[3].field_0x4 = uVar50;
            *(undefined4 *)&pUVar16[3].field_0x8 = uVar51;
            *(undefined4 *)&pUVar16[3].field_0xc = uVar52;
            *(undefined4 *)&pUVar16[3].field_0x10 = uVar37;
            *(undefined4 *)&pUVar16[3].field_0x14 = uVar39;
            *(undefined4 *)&pUVar16[3].field_0x18 = (undefined4)uStack_170;
            *(undefined4 *)&pUVar16[3].field_0x1c = uStack_170._4_4_;
            *(undefined8 *)&pUVar16[3].field_0x20 = uVar7;
            *(undefined8 *)(pUVar16 + 4) = uVar8;
            return true;
          }
          local_108.Elements._0_8_ = 0;
          local_108.Elements._8_8_ = 0;
          local_108.Elements._32_8_ = 0;
          local_108.Elements._40_4_ = 0;
          local_108.Elements._44_4_ = 0x80;
          local_108.Elements._48_4_ = 0xffffffff;
          local_108.Elements._52_4_ = 0;
          local_108.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_108.HashSize = 0;
          cVar14 = (**(code **)(this->_padding_ + 0xf0))(this,&local_108);
          if (cVar14 != '\0') {
            TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::TIterator::TIterator((TIterator *)local_158,&local_108);
            uVar11 = _UNK_15061cc8c;
            uVar10 = _UNK_15061cc88;
            uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
            uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
            local_1b8 = &local_108;
            local_1b0 = 0;
            stack0xfffffffffffffe28 = local_158._16_16_;
            local_1e8 = (longlong *)local_158._0_8_;
            auStack_1e0._0_8_ = local_158._8_8_;
            local_1c8 = local_138;
            pTStack_1c0 = pTStack_130;
            uVar21 = local_158._24_8_ >> 0x20;
            uVar20 = local_158._28_4_;
            iVar23 = 0;
            if ((int)uVar20 < *(int *)(local_158._16_8_ + 0x18)) {
              do {
                plVar12 = local_1e8;
                local_240 = *(FWeakObjectPtr *)(*local_1e8 + 4 + (longlong)(int)uVar21 * 0x14);
                bVar13 = TWeakObjectPtr<USphereComponent,FWeakObjectPtr>::UEOpEquals
                                   ((TWeakObjectPtr<USphereComponent,FWeakObjectPtr> *)&local_240,
                                    (void *)0x0);
                if (!bVar13) {
                  pUVar16 = FWeakObjectPtr::Get(&local_240);
                  auVar34 = *(undefined1 (*) [16])&pUVar16[0xd].field_0x8;
                  dVar4 = *(double *)&pUVar16[0xd].field_0x18;
                  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_248);
                  pTVar19 = UDS_MovementCore::GetLocationGap(this_00,&local_128);
                  dVar5 = auVar34._0_8_ + (pTVar19->field0_0x0)._s_0.X;
                  dVar1 = auVar34._8_8_ + (pTVar19->field0_0x0)._s_0.Y;
                  dVar4 = dVar4 + (pTVar19->field0_0x0)._s_0.Z;
                  pUVar16 = FWeakObjectPtr::Get(&local_240);
                  uVar43 = *(uint *)(pUVar16 + 0xe) & uVar22;
                  uVar44 = *(uint *)&pUVar16[0xe].field_0x4 & uVar9;
                  uVar45 = *(uint *)&pUVar16[0xe].field_0x8 & uVar10;
                  uVar46 = *(uint *)&pUVar16[0xe].field_0xc & uVar11;
                  uVar38 = *(uint *)&pUVar16[0xe].field_0x10 & uVar22;
                  uVar40 = *(uint *)&pUVar16[0xe].field_0x14 & uVar9;
                  uVar41 = *(uint *)&pUVar16[0xe].field_0x18 & uVar10;
                  uVar42 = *(uint *)&pUVar16[0xe].field_0x1c & uVar11;
                  auVar35._4_4_ = uVar44;
                  auVar35._0_4_ = uVar43;
                  auVar35._8_4_ = uVar45;
                  auVar35._12_4_ = uVar46;
                  auVar25._12_4_ = uVar40;
                  auVar25._8_4_ = uVar38;
                  auVar25._0_8_ = auVar35._8_8_;
                  auVar33._4_4_ = uVar44;
                  auVar33._0_4_ = uVar43;
                  auVar33._8_4_ = uVar45;
                  auVar33._12_4_ = uVar46;
                  auVar34 = minpd(auVar33,auVar25);
                  auVar26._4_4_ = uVar44;
                  auVar26._0_4_ = uVar43;
                  auVar26._8_4_ = uVar45;
                  auVar26._12_4_ = uVar46;
                  auVar29._4_4_ = uVar40;
                  auVar29._0_4_ = uVar38;
                  auVar29._12_4_ = uVar44;
                  auVar29._8_4_ = uVar43;
                  auVar35 = minpd(auVar34,auVar29);
                  auVar34._4_4_ = uVar40;
                  auVar34._0_4_ = uVar38;
                  auVar34._8_4_ = uVar41;
                  auVar34._12_4_ = uVar42;
                  auVar34 = blendpd(auVar26,auVar34,2);
                  auVar30._4_4_ = uVar40;
                  auVar30._0_4_ = uVar38;
                  auVar30._8_4_ = uVar41;
                  auVar30._12_4_ = uVar42;
                  auVar3._4_4_ = uVar46;
                  auVar3._0_4_ = uVar45;
                  dVar31 = dVar1 - local_200;
                  auVar34 = minpd(auVar30,auVar34);
                  auVar3._8_4_ = uVar41;
                  auVar3._12_4_ = uVar42;
                  minpd(auVar34,auVar3);
                  dVar28 = dVar5 - local_208;
                  dVar24 = dVar4 - local_1f8;
                  fVar27 = (float)SQRT(dVar31 * dVar31 + dVar28 * dVar28 + dVar24 * dVar24);
                  if ((fVar47 < 0.0) || (fVar27 < fVar47)) {
                    iVar23 = *(int *)(*plVar12 + (longlong)(int)uVar20 * 0x14);
                    fVar47 = fVar27;
                    fVar48 = (float)auVar35._0_8_ * *(float *)&pUVar16[0x22].field_0x18;
                    local_220 = dVar5;
                    uStack_218 = dVar1;
                    local_210 = dVar4;
                  }
                }
                uStack_1d0 = uStack_1d0 & ~auStack_1e0._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1e0);
                uVar21 = (ulonglong)uStack_1cc;
                uVar20 = uStack_1cc;
              } while ((int)uStack_1cc < *(int *)(auStack_1e0._8_8_ + 0x18));
              if (((char)local_1b0 != '\0') && (local_1b0._1_1_ != '\0')) {
                uVar22 = *(int *)&(local_1b8->Elements).field_0x8 -
                         *(int *)&(local_1b8->Elements).field_0x34;
                if (uVar22 < 4) {
                  iVar15 = 1;
                }
                else {
                  uVar21 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
                  lVar2 = 0x3f;
                  if (uVar21 != 0) {
                    for (; uVar21 >> lVar2 == 0; lVar2 = lVar2 + -1) {
                    }
                  }
                  iVar15 = 1 << ((byte)lVar2 & 0x1f);
                }
                if (((0 < (int)uVar22) && (local_1b8->HashSize < iVar15)) ||
                   (iVar15 < local_1b8->HashSize)) {
                  local_1b8->HashSize = iVar15;
                  TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  ::Rehash(local_1b8);
                }
              }
              if (iVar23 != 0) {
                local_108.HashSize = 0;
                if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_108.Hash.SecondaryData);
                }
                TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          (&local_108.Elements);
                uVar37 = SUB84(local_210,0);
                uVar39 = (undefined4)((ulonglong)local_210 >> 0x20);
                uVar49 = (undefined4)local_220;
                uVar50 = local_220._4_4_;
                uVar51 = (undefined4)uStack_218;
                uVar52 = uStack_218._4_4_;
                goto LAB_14b7a9f8d;
              }
            }
          }
          local_108.HashSize = 0;
          if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_108.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_108.Elements);
          return false;
        }
      }
    }
  }
  return false;
}

// GetForwardOverlapEntitys @ 14b7ab9a0

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

bool __cdecl
UDS_FindTargetAbility::GetForwardOverlapEntitys
          (TArray<FDS_EntityBase_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FDS_EntityBase_*,TSizedDefaultAllocator<32>_> *param_2,ulong64 param_3,
          FDS_FindTargetConditionInfo *param_4,TVector<double> *param_5)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FDS_EntityBase *pFVar10;
  AActor *this;
  UWorld *pUVar11;
  UClass *pUVar12;
  UObject *pUVar13;
  double *pdVar14;
  double *pdVar15;
  ForAnyElementType FVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulong64 local_res18;
  undefined1 local_118 [8];
  FWeakObjectPtr local_110;
  FWeakObjectPtr local_108;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_100;
  FWeakObjectPtr local_f0;
  FWeakObjectPtr local_e8;
  UObject *local_e0;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_d8;
  FScriptContainerElement *local_c8;
  TVector<double>_u_0 local_b8;
  undefined1 local_98 [112];
  
  if ((param_3 != 0) &&
     (local_res18 = param_3, pFVar10 = FDS_EntityBase::GetEntityBase(&local_res18),
     pFVar10 != (FDS_EntityBase *)0x0)) {
    UDS_MovementCore::GetMovementCore((ulong64)&local_108);
    bVar7 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_108,(void *)0x0);
    if (!bVar7) {
      (**(code **)(pFVar10->_padding_ + 0x150))(pFVar10);
      bVar7 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_f0,(void *)0x0);
      if (!bVar7) {
        this = (AActor *)FWeakObjectPtr::Get(&local_f0);
        pUVar11 = AActor::GetWorld(this);
        if (pUVar11 != (UWorld *)0x0) {
          local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d8.ArrayNum = 0;
          local_d8.ArrayMax = 0;
          local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_100.ArrayNum = 0;
          local_100.ArrayMax = 0;
          pUVar12 = Z_Construct_UClass_ADS_EntityActorBase_NoRegister();
          fVar17 = param_4->SearchHeight;
          fVar1 = param_4->SearchDistance;
          pUVar13 = FWeakObjectPtr::Get(&local_108);
          pdVar14 = (double *)(**(code **)(*(longlong *)pUVar13 + 0x338))(pUVar13,local_98);
          local_b8._s_0.X = *pdVar14;
          local_b8._s_0.Y = pdVar14[1];
          local_b8._s_0.Z = pdVar14[2];
          UKismetSystemLibrary::CapsuleOverlapActors
                    ((UObject *)pUVar11,(TVector<double> *)&local_b8._s_0,fVar1,fVar17,
                     &param_4->SearchQuerys,pUVar12,&local_d8,&local_100);
          iVar8 = DS_CommonDataHelper::TargetAngle();
          fVar17 = cosf((float)iVar8 * __real_3c8efa35);
          dVar5 = __real_3e45798ee0000000;
          dVar4 = __real_3ff0000000000000;
          iVar8 = local_100.ArrayNum;
          local_c8 = local_100.AllocatorInstance.Data + (longlong)local_100.ArrayNum * 8;
          FVar16.Data = local_100.AllocatorInstance.Data;
          while( true ) {
            pFVar6 = local_c8;
            if (local_100.ArrayNum != iVar8) {
              `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_118);
            }
            if (FVar16.Data == pFVar6) break;
            pUVar13 = *(UObject **)FVar16.Data;
            if (pUVar13 != (UObject *)0x0) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar13);
              }
              local_110.ObjectIndex = 0;
              local_110.ObjectSerialNumber = 0;
              local_e0 = pUVar13;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar13);
              }
              FWeakObjectPtr::operator=(&local_110,(FObjectPtr)&local_e0);
              pFVar10 = FDS_EntityBase::GetEntityBaseFromActor
                                  ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_110);
              if (pFVar10 != (FDS_EntityBase *)0x0) {
                UDS_MovementCore::GetMovementCore((ulong64)&local_e8);
                bVar7 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                                  ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_e8,
                                   (void *)0x0);
                if (!bVar7) {
                  pUVar13 = FWeakObjectPtr::Get(&local_e8);
                  pdVar14 = (double *)(**(code **)(*(longlong *)pUVar13 + 0x338))(pUVar13,local_98);
                  pUVar13 = FWeakObjectPtr::Get(&local_108);
                  pdVar15 = (double *)(**(code **)(*(longlong *)pUVar13 + 0x338))(pUVar13,&local_b8)
                  ;
                  dVar2 = (param_5->field0_0x0)._s_0.Z;
                  dVar20 = *pdVar14 - *pdVar15;
                  dVar19 = pdVar14[1] - pdVar15[1];
                  dVar3 = dVar19 * dVar19 + dVar20 * dVar20 + dVar2 * dVar2;
                  dVar18 = dVar2;
                  if (dVar5 < dVar3) {
                    local_e0 = (UObject *)(dVar4 / SQRT(dVar3));
                    dVar20 = dVar20 * (double)local_e0;
                    dVar19 = dVar19 * (double)local_e0;
                    dVar18 = dVar2 * (double)local_e0;
                  }
                  if (fVar17 <= (float)(dVar19 * (param_5->field0_0x0)._s_0.Y +
                                        dVar20 * (param_5->field0_0x0)._s_0.X + dVar2 * dVar18)) {
                    iVar9 = param_1->ArrayNum;
                    if (iVar9 == param_1->ArrayMax) {
                      iVar9 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
                    }
                    param_1->ArrayNum = iVar9 + 1;
                    *(FDS_EntityBase **)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
                         pFVar10;
                  }
                  iVar9 = param_2->ArrayNum;
                  if (iVar9 == param_2->ArrayMax) {
                    iVar9 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  param_2->ArrayNum = iVar9 + 1;
                  *(FDS_EntityBase **)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8) =
                       pFVar10;
                }
              }
            }
            FVar16.Data = FVar16.Data + 8;
          }
          if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.AllocatorInstance.Data);
          }
          if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.AllocatorInstance.Data);
          }
          return true;
        }
      }
    }
  }
  return false;
}

// GetOverlapEntitys @ 14b7ac6d0

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

bool __cdecl
UDS_FindTargetAbility::GetOverlapEntitys
          (TArray<FDS_EntityBase_*,TSizedDefaultAllocator<32>_> *param_1,ulong64 param_2,
          FDS_FindTargetConditionInfo *param_3)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  FDS_EntityBase *pFVar7;
  AActor *this;
  UWorld *pUVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  double *pdVar11;
  ForAnyElementType FVar12;
  ulong64 local_res10;
  UObject *local_res20;
  FWeakObjectPtr local_c8;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_c0;
  FWeakObjectPtr local_b0;
  FWeakObjectPtr local_a8;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_a0;
  TVector<double>_u_0 local_88;
  undefined1 local_68 [64];
  
  if (param_2 != 0) {
    local_res10 = param_2;
    pFVar7 = FDS_EntityBase::GetEntityBase(&local_res10);
    if (pFVar7 != (FDS_EntityBase *)0x0) {
      UDS_MovementCore::GetMovementCore((ulong64)&local_a8);
      bVar5 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_a8,(void *)0x0);
      if (!bVar5) {
        (**(code **)(pFVar7->_padding_ + 0x150))(pFVar7);
        bVar5 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_b0,(void *)0x0);
        if (!bVar5) {
          this = (AActor *)FWeakObjectPtr::Get(&local_b0);
          pUVar8 = AActor::GetWorld(this);
          if (pUVar8 != (UWorld *)0x0) {
            local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a0.ArrayNum = 0;
            local_a0.ArrayMax = 0;
            local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_c0.ArrayNum = 0;
            local_c0.ArrayMax = 0;
            pUVar9 = Z_Construct_UClass_ADS_EntityActorBase_NoRegister();
            fVar2 = param_3->SearchHeight;
            fVar3 = param_3->SearchDistance;
            pUVar10 = FWeakObjectPtr::Get(&local_a8);
            pdVar11 = (double *)(**(code **)(*(longlong *)pUVar10 + 0x338))(pUVar10,local_68);
            local_88._s_0.X = *pdVar11;
            local_88._s_0.Y = pdVar11[1];
            local_88._s_0.Z = pdVar11[2];
            UKismetSystemLibrary::CapsuleOverlapActors
                      ((UObject *)pUVar8,(TVector<double> *)&local_88._s_0,fVar3,fVar2,
                       &param_3->SearchQuerys,pUVar9,&local_a0,&local_c0);
            iVar4 = local_c0.ArrayNum;
            pFVar1 = local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayNum * 8;
            FVar12.Data = local_c0.AllocatorInstance.Data;
            while( true ) {
              if (local_c0.ArrayNum != iVar4) {
                `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_res20);
              }
              if (FVar12.Data == pFVar1) break;
              pUVar10 = *(UObject **)FVar12.Data;
              if (pUVar10 != (UObject *)0x0) {
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(pUVar10);
                }
                local_c8.ObjectIndex = 0;
                local_c8.ObjectSerialNumber = 0;
                local_res20 = pUVar10;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(pUVar10);
                }
                FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_res20);
                pFVar7 = FDS_EntityBase::GetEntityBaseFromActor
                                   ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_c8);
                if (pFVar7 != (FDS_EntityBase *)0x0) {
                  iVar6 = param_1->ArrayNum;
                  if (iVar6 == param_1->ArrayMax) {
                    iVar6 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar6 + 1;
                  *(FDS_EntityBase **)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) =
                       pFVar7;
                }
              }
              FVar12.Data = FVar12.Data + 8;
            }
            if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.AllocatorInstance.Data);
            }
            if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0.AllocatorInstance.Data);
            }
            return true;
          }
        }
      }
    }
  }
  return false;
}

// GetTargetLocation @ 14b7ad2b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

FDS_GetTargetLocationResult * __cdecl
UDS_FindTargetAbility::GetTargetLocation
          (FDS_GetTargetLocationResult *__return_storage_ptr__,FDS_TargetInfo *param_1,bool param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  FDS_EntityBase *this;
  UObject *pUVar9;
  double *pdVar10;
  UDS_MovementCore *this_00;
  TVector<double> *pTVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  ulong64 local_a8;
  undefined8 local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  TVector<double> local_80 [3];
  
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  __return_storage_ptr__->bIsValid = false;
  (__return_storage_ptr__->TargetLocation).field0_0x0._s_0.X = (double)uVar5;
  (__return_storage_ptr__->TargetLocation).field0_0x0._s_0.Y = (double)uVar6;
  __return_storage_ptr__->TargetRadius = 0.0;
  (__return_storage_ptr__->TargetLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  bVar7 = FDS_TargetInfo::IsValidData(param_1);
  if (!bVar7) {
    return __return_storage_ptr__;
  }
  if (((UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X ==
        (param_1->ForcedTargetLocation).field0_0x0._s_0.X) &&
      (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y ==
       (param_1->ForcedTargetLocation).field0_0x0._s_0.Y)) &&
     (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z ==
      (param_1->ForcedTargetLocation).field0_0x0._s_0.Z)) {
    local_a8 = param_1->TargetEntityID;
    if (local_a8 == 0) {
      return __return_storage_ptr__;
    }
    this = FDS_EntityBase::GetEntityBase(&local_a8);
    if (this == (FDS_EntityBase *)0x0) {
      return __return_storage_ptr__;
    }
    UDS_MovementCore::GetMovementCore((ulong64)&local_res8);
    bVar7 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if (bVar7) {
      return __return_storage_ptr__;
    }
    bVar7 = FDS_EntityBase::GetIsMultiHitCollision(this);
    if (bVar7) {
      iVar1 = param_1->TargetHitSphereID;
      if (iVar1 < 1) {
        return __return_storage_ptr__;
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_a0 = 0;
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_a0);
      cVar8 = (**(code **)(this->_padding_ + 0xf8))(this,iVar1,&local_res20);
      if (cVar8 == '\0') {
        return __return_storage_ptr__;
      }
      pUVar9 = FWeakObjectPtr::Get(&local_res20);
      dVar2 = *(double *)&pUVar9[0xd].field_0x8;
      dVar3 = *(double *)&pUVar9[0xd].field_0x10;
      dVar4 = *(double *)&pUVar9[0xd].field_0x18;
      this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res8);
      pTVar11 = UDS_MovementCore::GetLocationGap(this_00,local_80);
      dStack_90 = dVar3 + (pTVar11->field0_0x0)._s_0.Y;
      local_88 = dVar4 + (pTVar11->field0_0x0)._s_0.Z;
      local_98 = dVar2 + (pTVar11->field0_0x0)._s_0.X;
      if (param_2) {
        pUVar9 = FWeakObjectPtr::Get(&local_res8);
        (**(code **)(*(longlong *)pUVar9 + 0x338))(pUVar9,local_80);
        local_88 = (double)local_80[0].field0_0x0._16_8_;
      }
      pUVar9 = FWeakObjectPtr::Get(&local_res20);
      uVar21 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & *(uint *)(pUVar9 + 0xe);
      uVar22 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ & *(uint *)&pUVar9[0xe].field_0x4;
      uVar23 = _UNK_15061cc88 & *(uint *)&pUVar9[0xe].field_0x8;
      uVar24 = _UNK_15061cc8c & *(uint *)&pUVar9[0xe].field_0xc;
      auVar20._0_8_ =
           CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & *(uint *)&pUVar9[0xe].field_0x14,
                    (uint)__xmm_7fffffffffffffff7fffffffffffffff & *(uint *)&pUVar9[0xe].field_0x10)
      ;
      auVar20._8_4_ = _UNK_15061cc88 & *(uint *)&pUVar9[0xe].field_0x18;
      auVar20._12_4_ = _UNK_15061cc8c & *(uint *)&pUVar9[0xe].field_0x1c;
      auVar14._4_4_ = uVar22;
      auVar14._0_4_ = uVar21;
      auVar14._8_4_ = uVar23;
      auVar14._12_4_ = uVar24;
      auVar19._8_8_ = auVar20._0_8_;
      auVar19._0_8_ = auVar14._8_8_;
      auVar17._4_4_ = uVar22;
      auVar17._0_4_ = uVar21;
      auVar17._8_4_ = uVar23;
      auVar17._12_4_ = uVar24;
      auVar18 = minpd(auVar17,auVar19);
      auVar13._4_4_ = uVar22;
      auVar13._0_4_ = uVar21;
      auVar13._8_4_ = uVar23;
      auVar13._12_4_ = uVar24;
      auVar15._12_4_ = uVar22;
      auVar15._8_4_ = uVar21;
      auVar15._0_8_ = auVar20._0_8_;
      auVar19 = minpd(auVar18,auVar15);
      auVar14 = blendpd(auVar13,auVar20,2);
      auVar16._8_4_ = auVar20._8_4_;
      auVar16._0_8_ = auVar20._0_8_;
      auVar16._12_4_ = auVar20._12_4_;
      auVar18._4_4_ = uVar24;
      auVar18._0_4_ = uVar23;
      auVar14 = minpd(auVar16,auVar14);
      __return_storage_ptr__->TargetRadius =
           (float)auVar19._0_8_ * *(float *)&pUVar9[0x22].field_0x18;
      auVar18._8_4_ = auVar20._8_4_;
      auVar18._12_4_ = auVar20._12_4_;
      minpd(auVar14,auVar18);
    }
    else {
      pUVar9 = FWeakObjectPtr::Get(&local_res8);
      if (param_2) {
        pcVar12 = *(code **)(*(longlong *)pUVar9 + 0x338);
      }
      else {
        pcVar12 = *(code **)(*(longlong *)pUVar9 + 0x330);
      }
      pdVar10 = (double *)(*pcVar12)(pUVar9,local_80);
      __return_storage_ptr__->TargetRadius = this->ScaledCapsuleRadius;
      local_88 = pdVar10[2];
      local_98 = *pdVar10;
      dStack_90 = pdVar10[1];
    }
  }
  else {
    local_98 = (param_1->ForcedTargetLocation).field0_0x0._s_0.X;
    dStack_90 = (param_1->ForcedTargetLocation).field0_0x0._s_0.Y;
    __return_storage_ptr__->TargetRadius = 0.0;
    local_88 = (param_1->ForcedTargetLocation).field0_0x0._s_0.Z;
  }
  (__return_storage_ptr__->TargetLocation).field0_0x0._s_0.X = local_98;
  (__return_storage_ptr__->TargetLocation).field0_0x0._s_0.Y = dStack_90;
  __return_storage_ptr__->bIsValid = true;
  (__return_storage_ptr__->TargetLocation).field0_0x0._s_0.Z = local_88;
  return __return_storage_ptr__;
}

// GetTargetLocation @ 14b7ad560

FDS_GetTargetLocationResult * __cdecl
UDS_FindTargetAbility::GetTargetLocation
          (FDS_GetTargetLocationResult *__return_storage_ptr__,
          TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined7 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  UObject *pUVar10;
  FDS_GetTargetLocationResult *pFVar11;
  FWeakObjectPtr local_res10 [3];
  FDS_GetTargetLocationResult local_38;
  
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->TargetRadius = 0.0;
  (__return_storage_ptr__->TargetLocation).field0_0x0._s_0.X = (double)uVar7;
  (__return_storage_ptr__->TargetLocation).field0_0x0._s_0.Y = (double)uVar8;
  (__return_storage_ptr__->TargetLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_res10[0] = param_1.WeakPtr;
  bVar9 = TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *)local_res10,
                     (void *)0x0);
  if (!bVar9) {
    pUVar10 = FWeakObjectPtr::Get(local_res10);
    pFVar11 = GetTargetLocation(&local_38,(FDS_TargetInfo *)&pUVar10[2].field_0x8,param_2);
    uVar4 = *(undefined7 *)&pFVar11->field_0x1;
    dVar1 = (pFVar11->TargetLocation).field0_0x0._s_0.X;
    dVar2 = (pFVar11->TargetLocation).field0_0x0._s_0.Y;
    dVar3 = (pFVar11->TargetLocation).field0_0x0._s_0.Z;
    __return_storage_ptr__->bIsValid = pFVar11->bIsValid;
    *(undefined7 *)&__return_storage_ptr__->field_0x1 = uVar4;
    (__return_storage_ptr__->TargetLocation).field0_0x0._s_0.X = dVar1;
    fVar5 = pFVar11->TargetRadius;
    uVar6 = *(undefined4 *)&pFVar11->field_0x24;
    (__return_storage_ptr__->TargetLocation).field0_0x0._s_0.Y = dVar2;
    (__return_storage_ptr__->TargetLocation).field0_0x0._s_0.Z = dVar3;
    __return_storage_ptr__->TargetRadius = fVar5;
    *(undefined4 *)&__return_storage_ptr__->field_0x24 = uVar6;
  }
  return __return_storage_ptr__;
}

// IsValidTargetOnSkill @ 14b7b2760

FDS_TargetInfo * __cdecl
UDS_FindTargetAbility::IsValidTargetOnSkill
          (FDS_TargetInfo *__return_storage_ptr__,
          TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> param_1,ulong64 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined6 uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  UObject *pUVar14;
  UDS_DataBase *this;
  ulong64 uVar15;
  FDS_TargetInfo *pFVar16;
  FWeakObjectPtr local_res10;
  FDS_TargetInfo local_58;
  
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->TargetLocationOnSelected).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->TargetLocationOnSelected).field0_0x0._s_0.Y = (double)uVar11;
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->bIsForcedSetTarget = false;
  (__return_storage_ptr__->ForcedTargetLocation).field0_0x0._s_0.X = (double)uVar10;
  (__return_storage_ptr__->ForcedTargetLocation).field0_0x0._s_0.Y = (double)uVar11;
  __return_storage_ptr__->TargetEntityID = 0;
  (__return_storage_ptr__->TargetLocationOnSelected).field0_0x0._s_0.Z = (double)uVar12;
  (__return_storage_ptr__->ForcedTargetLocation).field0_0x0._s_0.Z = (double)uVar12;
  __return_storage_ptr__->TargetHitSphereID = 0;
  __return_storage_ptr__->TargetRadius = 0.0;
  __return_storage_ptr__->DistanceOnSelected = 0.0;
  local_res10 = param_1.WeakPtr;
  bVar13 = TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *)&local_res10,
                      (void *)0x0);
  if (!bVar13) {
    pUVar14 = FWeakObjectPtr::Get(&local_res10);
    this = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res10);
    uVar15 = UDS_DataBase::GetEntityID(this);
    pFVar16 = IsValidTargetOnSkill
                        (&local_58,uVar15,param_2,
                         (FDS_FindTargetConditionInfo *)&pUVar14[4].field_0x8);
    bVar13 = pFVar16->bIsForcedSetTarget;
    uVar5 = *(undefined6 *)&pFVar16->field_0x2;
    uVar15 = pFVar16->TargetEntityID;
    iVar6 = pFVar16->TargetHitSphereID;
    fVar7 = pFVar16->TargetRadius;
    fVar8 = pFVar16->DistanceOnSelected;
    uVar9 = *(undefined4 *)&pFVar16->field_0x1c;
    __return_storage_ptr__->bIsValid = pFVar16->bIsValid;
    __return_storage_ptr__->bIsForcedSetTarget = bVar13;
    *(undefined6 *)&__return_storage_ptr__->field_0x2 = uVar5;
    __return_storage_ptr__->TargetEntityID = uVar15;
    dVar1 = (pFVar16->TargetLocationOnSelected).field0_0x0._s_0.X;
    dVar2 = (pFVar16->TargetLocationOnSelected).field0_0x0._s_0.Y;
    __return_storage_ptr__->TargetHitSphereID = iVar6;
    __return_storage_ptr__->TargetRadius = fVar7;
    __return_storage_ptr__->DistanceOnSelected = fVar8;
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = uVar9;
    dVar3 = (pFVar16->TargetLocationOnSelected).field0_0x0._s_0.Z;
    dVar4 = (pFVar16->ForcedTargetLocation).field0_0x0._s_0.X;
    (__return_storage_ptr__->TargetLocationOnSelected).field0_0x0._s_0.X = dVar1;
    (__return_storage_ptr__->TargetLocationOnSelected).field0_0x0._s_0.Y = dVar2;
    dVar1 = (pFVar16->ForcedTargetLocation).field0_0x0._s_0.Y;
    dVar2 = (pFVar16->ForcedTargetLocation).field0_0x0._s_0.Z;
    (__return_storage_ptr__->TargetLocationOnSelected).field0_0x0._s_0.Z = dVar3;
    (__return_storage_ptr__->ForcedTargetLocation).field0_0x0._s_0.X = dVar4;
    (__return_storage_ptr__->ForcedTargetLocation).field0_0x0._s_0.Y = dVar1;
    (__return_storage_ptr__->ForcedTargetLocation).field0_0x0._s_0.Z = dVar2;
  }
  return __return_storage_ptr__;
}

// IsValidTargetOnSkill @ 14b7b2850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

FDS_TargetInfo * __cdecl
UDS_FindTargetAbility::IsValidTargetOnSkill
          (FDS_TargetInfo *__return_storage_ptr__,ulong64 param_1,ulong64 param_2,
          FDS_FindTargetConditionInfo *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [12];
  double dVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  bool bVar14;
  char cVar15;
  int iVar16;
  FDS_EntityBase *pFVar17;
  FDS_EntityBase *this;
  UObject *pUVar18;
  UObject *pUVar19;
  UDS_CharStateData *this_00;
  undefined1 (*pauVar20) [16];
  TVector<double> *pTVar21;
  AActor *this_01;
  UWorld *this_02;
  UDS_MovementCore *pUVar22;
  UDS_CharBuffData *this_03;
  ulonglong uVar23;
  longlong lVar24;
  int iVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  float fVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  float fVar53;
  undefined1 auStackY_3e8 [32];
  FWeakObjectPtr local_3b8;
  FCollisionObjectQueryParams local_3b0;
  FWeakObjectPtr local_3a8;
  FWeakObjectPtr local_3a0;
  ulong64 local_398;
  TVector<double>_u_0 local_390;
  ulong64 local_378;
  FWeakObjectPtr local_370;
  FWeakObjectPtr local_368;
  FWeakObjectPtr local_360;
  FWeakObjectPtr local_358;
  double local_350;
  double dStack_348;
  undefined8 local_340;
  double local_338;
  double local_330;
  double local_328;
  longlong *local_318;
  undefined1 auStack_310 [16];
  uint uStack_300;
  uint uStack_2fc;
  longlong local_2f8;
  TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_2f0;
  TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_2e8;
  undefined2 local_2e0;
  undefined1 local_2d8;
  undefined1 uStack_2d7;
  undefined6 uStack_2d6;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 uStack_2a0;
  TIterator local_288;
  TVector<double> local_258;
  FHitResult local_238;
  undefined1 local_138 [32];
  void *local_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  ulonglong local_e8;
  
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  uStack_2a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_2d8 = 0;
  uStack_2d7 = 0;
  uStack_2d0 = 0;
  local_2c8 = 0;
  iVar25 = 0;
  uStack_2c0 = 0;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_14b7b3113;
  local_398 = param_2;
  local_378 = param_1;
  pFVar17 = FDS_EntityBase::GetEntityBase(&local_378);
  this = FDS_EntityBase::GetEntityBase(&local_398);
  if ((pFVar17 == (FDS_EntityBase *)0x0) || (this == (FDS_EntityBase *)0x0)) goto LAB_14b7b3113;
  UDS_MovementCore::GetMovementCore((ulong64)&local_3a0);
  UDS_MovementCore::GetMovementCore((ulong64)&local_3a8);
  bVar14 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_3a0,(void *)0x0);
  if (((bVar14) ||
      (bVar14 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_3a8,(void *)0x0
                          ), bVar14)) || (bVar14 = FDS_EntityBase::IsDead(this), bVar14))
  goto LAB_14b7b3113;
  UDS_CharInfoData::GetData((ulong64)&local_370);
  UDS_CharInfoData::GetData((ulong64)&local_368);
  bVar14 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_370,(void *)0x0);
  if ((!bVar14) &&
     (bVar14 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_368,(void *)0x0)
     , !bVar14)) {
    pUVar18 = FWeakObjectPtr::Get(&local_370);
    pUVar19 = FWeakObjectPtr::Get(&local_368);
    bVar14 = FDS_TeamInfo::IsEnemyTeam
                       ((FDS_TeamInfo *)&pUVar18[0xf].field_0x18,
                        (FDS_TeamInfo *)&pUVar19[0xf].field_0x18);
    if (!bVar14) goto LAB_14b7b3113;
  }
  UDS_CharStateData::GetData((ulong64)&local_360);
  bVar14 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_360,(void *)0x0);
  if (bVar14) goto LAB_14b7b3113;
  this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_360);
  local_3b0.ObjectTypesToQuery = 0x800;
  local_3b0.IgnoreMask = '\0';
  local_3b0._5_3_ = 0;
  bVar14 = UDS_CharStateData::HasCharState(this_00,(EDS_CharState *)&local_3b0);
  if (bVar14) goto LAB_14b7b3113;
  pUVar18 = FWeakObjectPtr::Get(&local_3a0);
  (**(code **)(*(longlong *)pUVar18 + 0x338))(pUVar18,&local_338);
  fVar27 = __real_c2c80000;
  fVar53 = 0.0;
  local_390._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_390._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dStack_348 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_350 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_390._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_340 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  bVar14 = FDS_EntityBase::GetIsMultiHitCollision(this);
  if (bVar14) {
    local_138._0_8_ = (FScriptContainerElement *)0x0;
    local_138._8_8_ = 0;
    local_118 = (void *)0x0;
    local_110 = 0;
    local_10c = 0x80;
    local_108 = 0xffffffff;
    local_104 = 0;
    local_f8 = (ForElementType<FSetElementId>)0x0;
    local_f0 = 0;
    cVar15 = (**(code **)(this->_padding_ + 0xf0))(this);
    if (cVar15 == '\0') {
      local_f0 = 0;
      if (local_f8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_f8);
      }
      iVar25 = SUB84(local_138._8_8_,4);
      local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
      if (iVar25 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
      }
      local_108 = 0xffffffff;
      local_104 = 0;
      local_110 = 0;
      if (0x80 < local_10c) {
        local_10c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
      }
      if (local_118 != (void *)0x0) {
        FMemory::Free(local_118);
      }
      if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_138._0_8_);
      }
      goto LAB_14b7b3113;
    }
    TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              (&local_288,
               (TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)local_138);
    uVar9 = _UNK_15061cc8c;
    uVar8 = _UNK_15061cc88;
    uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar26 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uStack_300 = (undefined4)local_288._padding_;
    auStack_310._8_8_ = local_288._padding_;
    unique0x10000fc9 = local_288._padding_._4_1_;
    unique0x10000fca = local_288._padding_._5_2_;
    unique0x10000fcc = local_288._padding_._7_1_;
    local_2e8 = (TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                 *)local_138;
    local_2e0 = 0;
    local_318 = (longlong *)local_288._padding_;
    auStack_310._0_8_ = local_288._padding_;
    local_2f8 = local_288._padding_;
    pTStack_2f0 = local_288.Set;
    uVar23 = auStack_310._16_8_ >> 0x20;
    iVar25 = 0;
    if ((int)uStack_2fc < *(int *)(local_288._padding_ + 0x18)) {
      do {
        plVar13 = local_318;
        lVar24 = (longlong)(int)uStack_2fc;
        local_3b8 = *(FWeakObjectPtr *)(*local_318 + 4 + (longlong)(int)uVar23 * 0x14);
        bVar14 = TWeakObjectPtr<USphereComponent,FWeakObjectPtr>::UEOpEquals
                           ((TWeakObjectPtr<USphereComponent,FWeakObjectPtr> *)&local_3b8,
                            (void *)0x0);
        if (!bVar14) {
          pUVar18 = FWeakObjectPtr::Get(&local_3b8);
          auVar31 = *(undefined1 (*) [16])&pUVar18[0xd].field_0x8;
          dVar6 = *(double *)&pUVar18[0xd].field_0x18;
          pUVar22 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_3a8);
          pTVar21 = UDS_MovementCore::GetLocationGap(pUVar22,&local_258);
          dVar4 = auVar31._0_8_ + (pTVar21->field0_0x0)._s_0.X;
          dVar2 = auVar31._8_8_ + (pTVar21->field0_0x0)._s_0.Y;
          dVar3 = dVar6 + (pTVar21->field0_0x0)._s_0.Z;
          local_288._padding_ = (longlong)dVar6;
          pUVar18 = FWeakObjectPtr::Get(&local_3b8);
          uVar38 = uVar26 & *(uint *)&pUVar18[0xe].field_0x10;
          uVar39 = uVar7 & *(uint *)&pUVar18[0xe].field_0x14;
          uVar40 = uVar8 & *(uint *)&pUVar18[0xe].field_0x18;
          uVar41 = uVar9 & *(uint *)&pUVar18[0xe].field_0x1c;
          uVar42 = uVar26 & *(uint *)(pUVar18 + 0xe);
          uVar43 = uVar7 & *(uint *)&pUVar18[0xe].field_0x4;
          uVar44 = uVar8 & *(uint *)&pUVar18[0xe].field_0x8;
          uVar45 = uVar9 & *(uint *)&pUVar18[0xe].field_0xc;
          auVar33._4_4_ = uVar39;
          auVar33._0_4_ = uVar38;
          auVar33._12_4_ = uVar43;
          auVar33._8_4_ = uVar42;
          auVar37._4_4_ = uVar43;
          auVar37._0_4_ = uVar42;
          auVar37._8_4_ = uVar44;
          auVar37._12_4_ = uVar45;
          auVar29._12_4_ = uVar39;
          auVar29._8_4_ = uVar38;
          auVar29._0_8_ = auVar37._8_8_;
          auVar36._4_4_ = uVar43;
          auVar36._0_4_ = uVar42;
          auVar36._8_4_ = uVar44;
          auVar36._12_4_ = uVar45;
          auVar37 = minpd(auVar36,auVar29);
          auVar30._4_4_ = uVar43;
          auVar30._0_4_ = uVar42;
          auVar30._8_4_ = uVar44;
          auVar30._12_4_ = uVar45;
          auVar1._4_4_ = uVar45;
          auVar1._0_4_ = uVar44;
          auVar31._4_4_ = uVar39;
          auVar31._0_4_ = uVar38;
          auVar31._8_4_ = uVar40;
          auVar31._12_4_ = uVar41;
          auVar31 = blendpd(auVar30,auVar31,2);
          auVar37 = minpd(auVar37,auVar33);
          auVar34._4_4_ = uVar39;
          auVar34._0_4_ = uVar38;
          auVar34._8_4_ = uVar40;
          auVar34._12_4_ = uVar41;
          auVar31 = minpd(auVar34,auVar31);
          auVar1._8_4_ = uVar40;
          auVar1._12_4_ = uVar41;
          minpd(auVar31,auVar1);
          fVar46 = (float)auVar37._0_8_ * *(float *)&pUVar18[0x22].field_0x18;
          fVar28 = (float)(double)CONCAT44((uint)((ulonglong)(local_328 - dVar3) >> 0x20) & uVar7,
                                           SUB84(local_328 - dVar3,0) & uVar26);
          if (((fVar28 < param_3->SearchHeight || fVar28 == param_3->SearchHeight) &&
              (fVar28 = (float)SQRT((dVar2 - local_330) * (dVar2 - local_330) +
                                    (dVar4 - local_338) * (dVar4 - local_338) +
                                    (dVar3 - local_328) * (dVar3 - local_328)),
              fVar28 <= fVar46 + param_3->TargetDistanceMax)) &&
             ((fVar27 < 0.0 || (fVar28 < fVar27)))) {
            dStack_348 = dVar2;
            local_350 = dVar4;
            iVar25 = *(int *)(*plVar13 + lVar24 * 0x14);
            fVar27 = fVar28;
            fVar53 = fVar46;
            local_390._s_0.X = dVar4;
            local_390._s_0.Y = dVar2;
            local_390._s_0.Z = dVar3;
            local_340 = dVar3;
          }
        }
        uStack_300 = uStack_300 & ~auStack_310._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_310);
        uVar23 = (ulonglong)uStack_2fc;
      } while ((int)uStack_2fc < *(int *)(auStack_310._8_8_ + 0x18));
      if (((char)local_2e0 != '\0') && (local_2e0._1_1_ != '\0')) {
        uVar26 = *(int *)&(local_2e8->Elements).field_0x8 -
                 *(int *)&(local_2e8->Elements).field_0x34;
        if (uVar26 < 4) {
          iVar16 = 1;
        }
        else {
          uVar23 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
          lVar24 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          iVar16 = 1 << ((byte)lVar24 & 0x1f);
        }
        if (((0 < (int)uVar26) && (local_2e8->HashSize < iVar16)) || (iVar16 < local_2e8->HashSize))
        {
          local_2e8->HashSize = iVar16;
          TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Rehash(local_2e8);
        }
      }
      if (iVar25 != 0) {
        local_f0 = 0;
        if (local_f8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_f8);
        }
        TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_138);
        uVar51 = SUB84(local_390._s_0.Z,0);
        uVar52 = (undefined4)((ulonglong)local_390._16_8_ >> 0x20);
        uVar47 = local_390._0_4_;
        uVar48 = local_390._4_4_;
        uVar49 = local_390._8_4_;
        uVar50 = local_390._12_4_;
        goto LAB_14b7b2f57;
      }
    }
    local_f0 = 0;
    if (local_f8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_138);
    goto LAB_14b7b3113;
  }
  pUVar18 = FWeakObjectPtr::Get(&local_3a8);
  pauVar20 = (undefined1 (*) [16])(**(code **)(*(longlong *)pUVar18 + 0x338))(pUVar18,&local_258);
  local_390._s_0.Z = (double)*(undefined8 *)pauVar20[1];
  uVar51 = SUB84(local_390._s_0.Z,0);
  uVar52 = (undefined4)((ulonglong)local_390._s_0.Z >> 0x20);
  _local_350 = *pauVar20;
  uVar47 = local_350._0_4_;
  uVar48 = local_350._4_4_;
  uVar49 = local_350._8_4_;
  uVar50 = local_350._12_4_;
  local_340 = (double)this->ScaledCapsuleHalfHeight + local_390._s_0.Z;
  fVar53 = this->ScaledCapsuleRadius;
  fVar27 = (float)(double)CONCAT44((uint)((ulonglong)(local_328 - local_390._s_0.Z) >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(local_328 - local_390._s_0.Z,0) &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if ((param_3->SearchHeight <= fVar27 && fVar27 != param_3->SearchHeight) ||
     (local_338 = local_350 - local_338, auVar5._4_8_ = uVar35, auVar5._0_4_ = uVar48,
     auVar32._0_8_ = auVar5._0_8_ << 0x20, auVar32._8_4_ = uVar49, auVar32._12_4_ = uVar50,
     local_330 = auVar32._8_8_ - local_330,
     fVar27 = (float)SQRT(local_330 * local_330 + local_338 * local_338 +
                          (local_390._s_0.Z - local_328) * (local_390._s_0.Z - local_328)),
     fVar53 + param_3->TargetDistanceMax < fVar27)) goto LAB_14b7b3113;
LAB_14b7b2f57:
  if (param_3->bIsBlockingCheck == true) {
    (**(code **)(pFVar17->_padding_ + 0x150))(pFVar17);
    bVar14 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_3b8,(void *)0x0);
    if (bVar14) goto LAB_14b7b3113;
    this_01 = (AActor *)FWeakObjectPtr::Get(&local_3b8);
    this_02 = AActor::GetWorld(this_01);
    if (this_02 == (UWorld *)0x0) goto LAB_14b7b3113;
    pUVar22 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_3a0);
    UDS_MovementCore::GetActorHeadLocation(pUVar22,(TVector<double> *)&local_390._s_0);
    memset(&local_238,0,0x100);
    local_288._padding_._5_2_ = 0;
    local_238.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
    local_238.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
    local_238.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
    local_238.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
    local_288._padding_._7_1_ = 0;
    local_288._padding_ = 0;
    local_288._padding_._0_4_ = 0xffffffff;
    local_288._padding_._4_1_ = 0;
    local_238.HitObjectHandle.InstanceIndex = -1;
    local_238.HitObjectHandle.ResolutionStatus = Invalid;
    local_238.HitObjectHandle._29_3_ = 0;
    local_238.Time = 1.0;
    local_238.MyItem = -1;
    local_238.HitObjectHandle.ManagerInterface.InterfaceInstance =
         (IActorInstanceManagerInterface *)0x0;
    local_3b0.ObjectTypesToQuery = 1;
    local_3b0.IgnoreMask = '\0';
    UWorld::LineTraceSingleByObjectType
              (this_02,&local_238,(TVector<double> *)&local_390._s_0,(TVector<double> *)&local_350,
               &local_3b0,&FCollisionQueryParams::DefaultQueryParam);
    if (local_238.bBlockingHit != 0) goto LAB_14b7b3113;
  }
  UDS_CharBuffData::GetData((ulong64)&local_358);
  bVar14 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)&local_358,(void *)0x0);
  if (!bVar14) {
    this_03 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&local_358);
    local_3b8.ObjectIndex = 0xfbe;
    bVar14 = UDS_CharBuffData::HasSpecialBuffInfo(this_03,(EDS_SpecialBuffType *)&local_3b8);
    if (!bVar14) {
      uStack_2d0._0_4_ = (undefined4)local_398;
      uStack_2d0._4_4_ = (undefined4)(local_398 >> 0x20);
      __return_storage_ptr__->bIsValid = true;
      __return_storage_ptr__->bIsForcedSetTarget = (bool)uStack_2d7;
      *(undefined6 *)&__return_storage_ptr__->field_0x2 = uStack_2d6;
      *(undefined4 *)&__return_storage_ptr__->TargetEntityID = (undefined4)uStack_2d0;
      *(undefined4 *)((longlong)&__return_storage_ptr__->TargetEntityID + 4) = uStack_2d0._4_4_;
      __return_storage_ptr__->TargetHitSphereID = iVar25;
      __return_storage_ptr__->TargetRadius = fVar53;
      __return_storage_ptr__->DistanceOnSelected = fVar27;
      *(undefined4 *)&__return_storage_ptr__->field_0x1c = uStack_2bc;
      *(undefined4 *)&(__return_storage_ptr__->TargetLocationOnSelected).field0_0x0 = uVar47;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->TargetLocationOnSelected).field0_0x0 + 4)
           = uVar48;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->TargetLocationOnSelected).field0_0x0 + 8)
           = uVar49;
      *(undefined4 *)
       ((longlong)&(__return_storage_ptr__->TargetLocationOnSelected).field0_0x0 + 0xc) = uVar50;
      *(undefined4 *)
       ((longlong)&(__return_storage_ptr__->TargetLocationOnSelected).field0_0x0 + 0x10) = uVar51;
      *(undefined4 *)
       ((longlong)&(__return_storage_ptr__->TargetLocationOnSelected).field0_0x0 + 0x14) = uVar52;
      *(undefined4 *)&(__return_storage_ptr__->ForcedTargetLocation).field0_0x0 =
           (undefined4)uStack_2a0;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->ForcedTargetLocation).field0_0x0 + 4) =
           uStack_2a0._4_4_;
      (__return_storage_ptr__->ForcedTargetLocation).field0_0x0._s_0.Y = (double)uVar11;
      (__return_storage_ptr__->ForcedTargetLocation).field0_0x0._s_0.Z = (double)uVar12;
      return __return_storage_ptr__;
    }
  }
LAB_14b7b3113:
  __return_storage_ptr__->bIsValid = (bool)local_2d8;
  __return_storage_ptr__->bIsForcedSetTarget = (bool)uStack_2d7;
  *(undefined6 *)&__return_storage_ptr__->field_0x2 = uStack_2d6;
  __return_storage_ptr__->TargetEntityID = uStack_2d0;
  __return_storage_ptr__->TargetHitSphereID = (undefined4)local_2c8;
  __return_storage_ptr__->TargetRadius = (float)local_2c8._4_4_;
  *(ulonglong *)&__return_storage_ptr__->DistanceOnSelected = CONCAT44(uStack_2bc,uStack_2c0);
  (__return_storage_ptr__->TargetLocationOnSelected).field0_0x0._s_0.X = (double)uVar10;
  (__return_storage_ptr__->TargetLocationOnSelected).field0_0x0._s_0.Y = (double)uVar11;
  (__return_storage_ptr__->TargetLocationOnSelected).field0_0x0._s_0.Z = (double)uVar12;
  (__return_storage_ptr__->ForcedTargetLocation).field0_0x0._s_0.X = (double)uVar10;
  (__return_storage_ptr__->ForcedTargetLocation).field0_0x0._s_0.Y = (double)uVar11;
  (__return_storage_ptr__->ForcedTargetLocation).field0_0x0._s_0.Z = (double)uVar12;
  return __return_storage_ptr__;
}

// OnCanActivate @ 14b7b64d0

bool __thiscall UDS_FindTargetAbility::OnCanActivate(UDS_FindTargetAbility *this)

{
  bool bVar1;
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  return bVar1;
}

// OnDeactivateAbility @ 14b7b88d0

void __thiscall
UDS_FindTargetAbility::OnDeactivateAbility(UDS_FindTargetAbility *this,bool *param_1)

{
  return;
}

// OnPostActivateAbility @ 14b7bc610

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

void __thiscall UDS_FindTargetAbility::OnPostActivateAbility(UDS_FindTargetAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_DataBase *this_00;
  ulong64 uVar3;
  EDS_AbilityDeactivateType local_res8 [8];
  FWeakObjectPtr local_res10 [3];
  
  local_res8[0] = 0x1b;
  UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
            ((ulong64 *)local_res10,&this->field_0xe0);
  bVar1 = TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *)local_res10,
                     (void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    if (pUVar2[2].field_0x9 == '\x01') {
      local_res8[0] = Success;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
      return;
    }
    bVar1 = TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *)local_res10,
                       (void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(local_res10);
      uVar3 = UDS_DataBase::GetEntityID(this_00);
      bVar1 = FindTargetByDistance
                        (uVar3,(TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *)
                               local_res10);
      local_res8[0] = Success;
      if (bVar1) goto LAB_14b7bc6a9;
    }
  }
  local_res8[0] = Cancel;
LAB_14b7bc6a9:
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  return;
}

