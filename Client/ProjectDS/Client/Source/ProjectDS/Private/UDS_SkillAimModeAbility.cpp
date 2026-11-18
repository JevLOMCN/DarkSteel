// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b58b340

UClass * __cdecl UDS_SkillAimModeAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillAimModeAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillAimModeAbility",
               &Z_Registration_Info_UClass_UDS_SkillAimModeAbility.InnerSingleton,
               StaticRegisterNativesUDS_SkillAimModeAbility,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SkillAimModeAbility>,
               InternalVTableHelperCtorCaller<UDS_SkillAimModeAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillAimModeAbility.InnerSingleton;
}

// UDS_SkillAimModeAbility @ 14b58e040

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

UDS_SkillAimModeAbility * __thiscall
UDS_SkillAimModeAbility::UDS_SkillAimModeAbility
          (UDS_SkillAimModeAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->SkillModeAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PlayerData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  this->CurrentMainTargetEntityID = 0;
  this->PrevPitch = 0.0;
  return this;
}

// ~UDS_SkillAimModeAbility @ 14b58e580

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

void __thiscall UDS_SkillAimModeAbility::~UDS_SkillAimModeAbility(UDS_SkillAimModeAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b58f280

UClass * __cdecl UDS_SkillAimModeAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillAimModeAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillAimModeAbility",
               &Z_Registration_Info_UClass_UDS_SkillAimModeAbility.InnerSingleton,
               StaticRegisterNativesUDS_SkillAimModeAbility,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SkillAimModeAbility>,
               InternalVTableHelperCtorCaller<UDS_SkillAimModeAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillAimModeAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b58f350

bool __thiscall UDS_SkillAimModeAbility::ShouldTickComponent(UDS_SkillAimModeAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_SkillAimModeAbility @ 14b58f410

void __cdecl UDS_SkillAimModeAbility::StaticRegisterNativesUDS_SkillAimModeAbility(void)

{
  return;
}

// UDS_SkillAimModeAbility @ 14b8232c0

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

UDS_SkillAimModeAbility * __thiscall
UDS_SkillAimModeAbility::UDS_SkillAimModeAbility
          (UDS_SkillAimModeAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->SkillModeAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PlayerData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  this->CurrentMainTargetEntityID = 0;
  this->PrevPitch = 0.0;
  return this;
}

// ClearVariables @ 14b827d50

void __thiscall UDS_SkillAimModeAbility::ClearVariables(UDS_SkillAimModeAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
    pUVar2[6].field_0x20 = 0;
  }
  return;
}

// FindTarget @ 14b830480

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

ulong64 __thiscall UDS_SkillAimModeAbility::FindTarget(UDS_SkillAimModeAbility *this)

{
  TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr> *this_00;
  ulonglong uVar1;
  double dVar2;
  code *pcVar3;
  ulong64 uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong *plVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  char cVar15;
  int iVar16;
  UObject *pUVar17;
  longlong lVar18;
  TRotator<double> *this_01;
  UWorld *this_02;
  AActor *pAVar19;
  UClass *pUVar20;
  UDS_MovementCore *this_03;
  TVector<double> *pTVar21;
  UObject *pUVar22;
  uint uVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  float fVar42;
  undefined1 auStackY_2f8 [32];
  FWeakObjectPtr local_2c8;
  FWeakObjectPtr local_2c0;
  FWeakObjectPtr local_2b8;
  FWeakObjectPtr local_2b0;
  FCollisionObjectQueryParams local_2a8;
  TVector<double>_u_0 local_2a0;
  undefined4 uStack_288;
  undefined1 uStack_284;
  undefined2 uStack_283;
  undefined1 uStack_281;
  int local_280;
  undefined4 uStack_27c;
  undefined8 uStack_278;
  longlong *local_268;
  undefined1 auStack_260 [16];
  uint uStack_250;
  int iStack_24c;
  int local_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_238;
  undefined2 local_230;
  TVector<double>_u_0 local_228;
  double local_210;
  double dStack_208;
  double local_200;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1e0;
  undefined1 local_1c8 [48];
  double local_198;
  double local_190;
  int local_124;
  FActorInstanceHandle local_110 [2];
  TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  local_c8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  ADS_MainCharacter::GetMainPlayer();
  bVar14 = FWeakObjectPtr::IsValid(&local_2b8);
  if (bVar14) {
    pUVar17 = FWeakObjectPtr::Get(&local_2b8);
    pcVar3 = *(code **)(*(longlong *)pUVar17 + 0x738);
    local_2c0 = (FWeakObjectPtr)Z_Construct_UClass_UDS_MainCameraComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2c0 != (FWeakObjectPtr)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_2c0);
    }
    lVar18 = (*pcVar3)(pUVar17,&local_2c0);
    if (lVar18 != 0) {
      ADS_PlayerController::GetPlayerController();
      bVar14 = FWeakObjectPtr::IsValid(&local_2b0);
      if (bVar14) {
        DS_CommonDataHelper::CrosshairApplyRange();
        local_228._s_0.X = *(double *)(lVar18 + 0x210);
        local_228._s_0.Y = *(double *)(lVar18 + 0x218);
        local_228._s_0.Z = *(double *)(lVar18 + 0x220);
        pUVar17 = FWeakObjectPtr::Get(&local_2b0);
        this_01 = (TRotator<double> *)
                  (**(code **)(*(longlong *)pUVar17 + 0x7a8))(pUVar17,&local_210);
        UE::Math::TRotator<double>::Vector(this_01,(TVector<double> *)&local_1f8._s_0);
        this_00 = &this->SkillModeAbilityData;
        pUVar17 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        dVar2 = *(double *)&pUVar17[2].field_0x10;
        local_2a8.IgnoreMask = '\0';
        local_2a8.ObjectTypesToQuery = 0x898001;
        local_1e0._s_0.X = local_1f8._s_0.X * dVar2 + local_228._s_0.X;
        local_1e0._s_0.Y = local_1f8._s_0.Y * dVar2 + local_228._s_0.Y;
        local_1e0._s_0.Z = local_1f8._s_0.Z * dVar2 + local_228._s_0.Z;
        memset(local_1c8,0,0x100);
        uStack_283 = 0;
        local_110[0].ReferenceObject.WeakPtr.ObjectIndex = 0;
        local_110[0].ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
        local_110[0].ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
        local_110[0].ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
        uStack_281 = 0;
        local_2a0._s_0.Z = 0.0;
        uStack_288 = 0xffffffff;
        uStack_284 = 0;
        local_110[0].InstanceIndex = -1;
        local_110[0].ResolutionStatus = Invalid;
        local_110[0]._29_3_ = 0;
        local_1c8._4_4_ = 1.0;
        local_124 = -1;
        local_110[0].ManagerInterface.InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
        this_02 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
        bVar14 = UWorld::LineTraceSingleByObjectType
                           (this_02,(FHitResult *)local_1c8,(TVector<double> *)&local_228._s_0,
                            (TVector<double> *)&local_1e0._s_0,&local_2a8,
                            &FCollisionQueryParams::DefaultQueryParam);
        if (bVar14) {
          pAVar19 = FActorInstanceHandle::FetchActor(local_110);
          if (pAVar19 == (AActor *)0x0) {
            return 0;
          }
          pUVar20 = Z_Construct_UClass_ADS_EntityActorBase_NoRegister();
          iVar16 = (int)pUVar20->_padding_;
          if (*(int *)(pAVar19->_padding_ + 0x38) < iVar16) {
            return 0;
          }
          if ((longlong *)
              *(undefined1 **)(*(longlong *)(pAVar19->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
              &pUVar20->_padding_) {
            return 0;
          }
        }
        else if (!bVar14) {
          return 0;
        }
        pAVar19 = FActorInstanceHandle::FetchActor(local_110);
        if (pAVar19 != (AActor *)0x0) {
          pUVar20 = Z_Construct_UClass_ADS_EntityActorBase_NoRegister();
          iVar16 = (int)pUVar20->_padding_;
          if ((iVar16 <= *(int *)(pAVar19->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pAVar19->_padding_ + 0x30) + (longlong)iVar16 * 8) ==
              &pUVar20->_padding_)) {
            local_c8.Elements._0_8_ = 0;
            local_c8.Elements._8_8_ = 0;
            local_c8.Elements._32_8_ = 0;
            local_c8.Elements._40_4_ = 0;
            local_c8.Elements._44_4_ = 0x80;
            local_c8.Elements._48_4_ = 0xffffffff;
            local_c8.Elements._52_4_ = 0;
            local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_c8.HashSize = 0;
            cVar15 = (**(code **)(pAVar19[1]._padding_ + 0xf0))(pAVar19 + 1,&local_c8);
            if (cVar15 == '\x01') {
              (**(code **)(pAVar19[1]._padding_ + 0x78))(pAVar19 + 1,&local_2c0);
              bVar14 = FWeakObjectPtr::IsValid(&local_2c0);
              if (bVar14) {
                this_03 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_2c0);
                pTVar21 = UDS_MovementCore::GetLocationGap
                                    (this_03,(TVector<double> *)&local_2a0._s_0);
                local_210 = (pTVar21->field0_0x0)._s_0.X;
                dStack_208 = (pTVar21->field0_0x0)._s_0.Y;
                local_200 = (pTVar21->field0_0x0)._s_0.Z;
              }
              fVar42 = __real_497423f0;
              TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              ::TIterator::TIterator((TIterator *)&local_2a0._s_0,&local_c8);
              dVar13 = local_200;
              dVar12 = dStack_208;
              dVar2 = local_210;
              uVar10 = _UNK_15061cc8c;
              uVar9 = _UNK_15061cc88;
              uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
              uVar23 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
              uStack_250 = uStack_288;
              auStack_260._8_8_ = local_2a0._s_0.Z;
              unique0x100007d2 = uStack_284;
              unique0x100007d3 = uStack_283;
              unique0x100007d5 = uStack_281;
              local_238 = &local_c8;
              local_230 = 0;
              local_268 = (longlong *)local_2a0._0_8_;
              auStack_260._0_8_ = local_2a0._s_0.Y;
              local_248 = local_280;
              uStack_244 = uStack_27c;
              uStack_240 = uStack_278;
              if (iStack_24c < *(int *)((longlong)local_2a0._s_0.Z + 0x18)) {
                do {
                  plVar11 = local_268;
                  lVar18 = (longlong)iStack_24c;
                  local_2c8 = *(FWeakObjectPtr *)(*local_268 + 4 + lVar18 * 0x14);
                  bVar14 = TWeakObjectPtr<USphereComponent,FWeakObjectPtr>::UEOpEquals
                                     ((TWeakObjectPtr<USphereComponent,FWeakObjectPtr> *)&local_2c8,
                                      (void *)0x0);
                  if (!bVar14) {
                    pUVar17 = FWeakObjectPtr::Get(&local_2c8);
                    dVar30 = (double)local_1c8._40_8_ - *(double *)&pUVar17[0xd].field_0x8;
                    dVar5 = local_198 - *(double *)&pUVar17[0xd].field_0x10;
                    dVar24 = local_190 - *(double *)&pUVar17[0xd].field_0x18;
                    auVar32._0_8_ = dVar24 * dVar24;
                    auVar32._8_8_ = 0;
                    auVar25._8_8_ = 0;
                    auVar25._0_8_ = dVar5 * dVar5 + dVar30 * dVar30 + auVar32._0_8_;
                    auVar25 = sqrtpd(auVar32,auVar25);
                    if ((float)auVar25._0_8_ < fVar42) {
                      pUVar17 = FWeakObjectPtr::Get(&this_00->WeakPtr);
                      *(undefined4 *)&pUVar17[3].field_0xc =
                           *(undefined4 *)(*plVar11 + lVar18 * 0x14);
                      pUVar17 = FWeakObjectPtr::Get(&this_00->WeakPtr);
                      pUVar22 = FWeakObjectPtr::Get(&local_2c8);
                      uVar38 = uVar23 & *(uint *)(pUVar22 + 0xe);
                      uVar39 = uVar8 & *(uint *)&pUVar22[0xe].field_0x4;
                      uVar40 = uVar9 & *(uint *)&pUVar22[0xe].field_0x8;
                      uVar41 = uVar10 & *(uint *)&pUVar22[0xe].field_0xc;
                      uVar34 = uVar23 & *(uint *)&pUVar22[0xe].field_0x10;
                      uVar35 = uVar8 & *(uint *)&pUVar22[0xe].field_0x14;
                      uVar36 = uVar9 & *(uint *)&pUVar22[0xe].field_0x18;
                      uVar37 = uVar10 & *(uint *)&pUVar22[0xe].field_0x1c;
                      auVar33._4_4_ = uVar39;
                      auVar33._0_4_ = uVar38;
                      auVar33._8_4_ = uVar40;
                      auVar33._12_4_ = uVar41;
                      auVar26._12_4_ = uVar35;
                      auVar26._8_4_ = uVar34;
                      auVar26._0_8_ = auVar33._8_8_;
                      auVar31._4_4_ = uVar39;
                      auVar31._0_4_ = uVar38;
                      auVar31._8_4_ = uVar40;
                      auVar31._12_4_ = uVar41;
                      auVar32 = minpd(auVar31,auVar26);
                      auVar27._4_4_ = uVar39;
                      auVar27._0_4_ = uVar38;
                      auVar27._8_4_ = uVar40;
                      auVar27._12_4_ = uVar41;
                      auVar28._4_4_ = uVar35;
                      auVar28._0_4_ = uVar34;
                      auVar28._12_4_ = uVar39;
                      auVar28._8_4_ = uVar38;
                      auVar33 = minpd(auVar32,auVar28);
                      auVar6._4_4_ = uVar35;
                      auVar6._0_4_ = uVar34;
                      auVar6._8_4_ = uVar36;
                      auVar6._12_4_ = uVar37;
                      auVar32 = blendpd(auVar27,auVar6,2);
                      auVar29._4_4_ = uVar35;
                      auVar29._0_4_ = uVar34;
                      auVar29._8_4_ = uVar36;
                      auVar29._12_4_ = uVar37;
                      auVar7._4_4_ = uVar41;
                      auVar7._0_4_ = uVar40;
                      auVar32 = minpd(auVar29,auVar32);
                      *(float *)&pUVar17[3].field_0x8 =
                           (float)auVar33._0_8_ * *(float *)&pUVar22[0x22].field_0x18;
                      auVar7._8_4_ = uVar36;
                      auVar7._12_4_ = uVar37;
                      minpd(auVar32,auVar7);
                      pUVar17 = FWeakObjectPtr::Get(&this_00->WeakPtr);
                      pUVar22 = FWeakObjectPtr::Get(&local_2c8);
                      dVar5 = *(double *)&pUVar22[0xd].field_0x10;
                      dVar24 = *(double *)&pUVar22[0xd].field_0x18;
                      *(double *)&pUVar17[2].field_0x18 = *(double *)&pUVar22[0xd].field_0x8 + dVar2
                      ;
                      *(double *)&pUVar17[2].field_0x20 = dVar5 + dVar12;
                      *(double *)(pUVar17 + 3) = dVar24 + dVar13;
                      fVar42 = (float)auVar25._0_8_;
                    }
                  }
                  uStack_250 = uStack_250 & ~auStack_260._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_260);
                } while (iStack_24c < *(int *)(auStack_260._8_8_ + 0x18));
                if (((char)local_230 != '\0') && (local_230._1_1_ != '\0')) {
                  uVar23 = *(int *)&(local_238->Elements).field_0x8 -
                           *(int *)&(local_238->Elements).field_0x34;
                  if (uVar23 < 4) {
                    iVar16 = 1;
                  }
                  else {
                    uVar1 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
                    lVar18 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                      }
                    }
                    iVar16 = 1 << ((byte)lVar18 & 0x1f);
                  }
                  if (((0 < (int)uVar23) && (local_238->HashSize < iVar16)) ||
                     (iVar16 < local_238->HashSize)) {
                    local_238->HashSize = iVar16;
                    TSet<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    ::Rehash(local_238);
                  }
                }
              }
            }
            uVar4 = pAVar19[1]._padding_;
            local_c8.HashSize = 0;
            if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_c8.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_c8.Elements);
            return uVar4;
          }
        }
      }
    }
  }
  return 0;
}

// OnCanActivate @ 14b83a470

bool __thiscall UDS_SkillAimModeAbility::OnCanActivate(UDS_SkillAimModeAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr> TVar2;
  ulong64 local_res18 [2];
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->SkillModeAbilityData,(void *)0x0);
    if (bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_SkillModeAbilityData>
                        (local_res18,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->SkillModeAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->SkillModeAbilityData,(void *)0x0);
    return !bVar1;
  }
  return false;
}

// OnDeactivateAbility @ 14b83f8c0

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
UDS_SkillAimModeAbility::OnDeactivateAbility(UDS_SkillAimModeAbility *this,bool *param_1)

{
  EDS_StateTagType local_res18 [16];
  
  local_res18[0] = Locomotion_Aim;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res18);
  local_res18[0] = Lock_Rotation;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res18);
  return;
}

// OnPostActivateAbility @ 14b845740

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

void __thiscall UDS_SkillAimModeAbility::OnPostActivateAbility(UDS_SkillAimModeAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> TVar2;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar3;
  EDS_StateTagType local_res8 [8];
  
  TVar2 = UDS_PlayerData::GetData((ulong64)local_res8,this->_padding_,false);
                    /* WARNING: Load size is inaccurate */
  (this->PlayerData).WeakPtr = *TVar2.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&(this->PlayerData).WeakPtr);
  if (bVar1) {
    TVar3 = UDS_CharStateData::GetData((ulong64)local_res8);
                    /* WARNING: Load size is inaccurate */
    (this->CharStateData).WeakPtr = *TVar3.WeakPtr;
    bVar1 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
    if (bVar1) {
      local_res8[0] = Locomotion_Aim;
      UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
      local_res8[0] = Lock_Rotation;
      UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
    }
  }
  return;
}

// OnTickComponent @ 14b8497d0

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
UDS_SkillAimModeAbility::OnTickComponent(UDS_SkillAimModeAbility *this,float param_1)

{
  float fVar1;
  bool bVar2;
  ulong64 uVar3;
  UObject *pUVar4;
  UDS_PlayerData *this_00;
  UDS_SendPacketManager *this_01;
  double dVar5;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18 [2];
  double local_48 [6];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  bVar2 = TWeakObjectPtr<UDS_SkillModeAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->SkillModeAbilityData,(void *)0x0);
  if ((!bVar2) && (bVar2 = FWeakObjectPtr::IsValid(&(this->PlayerData).WeakPtr), bVar2)) {
    ADS_PlayerController::GetPlayerController();
    bVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if ((bVar2) && (bVar2 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr), bVar2)) {
      if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
        uVar3 = FindTarget(this);
        this->CurrentMainTargetEntityID = uVar3;
        pUVar4 = FWeakObjectPtr::Get(&(this->PlayerData).WeakPtr);
        if (this->CurrentMainTargetEntityID != *(ulong64 *)&pUVar4[9].field_0x8) {
          this_00 = (UDS_PlayerData *)FWeakObjectPtr::Get(&(this->PlayerData).WeakPtr);
          UDS_PlayerData::SetMainTargetEntityID(this_00,this->CurrentMainTargetEntityID);
        }
        ADS_MainCharacter::GetMainPlayer();
        bVar2 = FWeakObjectPtr::IsValid(local_res18);
        if (bVar2) {
          pUVar4 = FWeakObjectPtr::Get(&local_res8);
          (**(code **)(*(longlong *)pUVar4 + 0x7a8))(pUVar4,local_48);
          pUVar4 = FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
          dVar5 = UE::Math::TRotator<double>::NormalizeAxis(local_48[0]);
          *(float *)&pUVar4[7].field_0x18 =
               (float)(double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^
                                       __xmm_80000000000000008000000000000000._4_4_,
                                       SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000
                                      );
          dVar5 = this->PrevPitch - local_48[0];
          if (__real_3e45798ee2308c3a <
              (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
            this->PrevPitch = local_48[0];
            this_01 = UDS_SendPacketManager::GetInst();
            if (this_01 != (UDS_SendPacketManager *)0x0) {
              UDS_SendPacketManager::SendFacingPitchUpdateRequest(this_01,(float)local_48[0]);
              return;
            }
          }
        }
      }
      else {
        pUVar4 = FWeakObjectPtr::Get(&(this->SkillModeAbilityData).WeakPtr);
        fVar1 = *(float *)&pUVar4[3].field_0x10;
        pUVar4 = FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
        dVar5 = UE::Math::TRotator<double>::NormalizeAxis((double)fVar1);
        *(float *)&pUVar4[7].field_0x18 =
             (float)(double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^
                                     __xmm_80000000000000008000000000000000._4_4_,
                                     SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000);
      }
    }
  }
  return;
}

