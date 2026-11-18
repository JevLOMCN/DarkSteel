// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b402310

UClass * __cdecl UDS_AbnormalMoveAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AbnormalMoveAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AbnormalMoveAbility",
               &Z_Registration_Info_UClass_UDS_AbnormalMoveAbility.InnerSingleton,
               StaticRegisterNativesUDS_AbnormalMoveAbility,0x200,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AbnormalMoveAbility>,
               InternalVTableHelperCtorCaller<UDS_AbnormalMoveAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AbnormalMoveAbility.InnerSingleton;
}

// UDS_AbnormalMoveAbility @ 14b406910

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

UDS_AbnormalMoveAbility * __thiscall
UDS_AbnormalMoveAbility::UDS_AbnormalMoveAbility
          (UDS_AbnormalMoveAbility *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  (this->AbnormalAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  this->CurrentAbnormalType = None;
  dVar9 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->TargetRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->TargetRotation).Yaw = dVar9;
  (this->TargetRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->bRevertMovementMode = false;
  this->bAttachedSocket = false;
  this->SkillMoveWaitTime = 0.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DefenderOriginTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->DefenderOriginTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DefenderOriginTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->DefenderOriginTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DefenderOriginTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->DefenderOriginTransform).Scale3D.ZW.m128d_f64 = auVar8;
  this->DefaultGravityScale = 0.0;
  return this;
}

// ~UDS_AbnormalMoveAbility @ 14b407c70

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

void __thiscall UDS_AbnormalMoveAbility::~UDS_AbnormalMoveAbility(UDS_AbnormalMoveAbility *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b409a80

UClass * __cdecl UDS_AbnormalMoveAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AbnormalMoveAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AbnormalMoveAbility",
               &Z_Registration_Info_UClass_UDS_AbnormalMoveAbility.InnerSingleton,
               StaticRegisterNativesUDS_AbnormalMoveAbility,0x200,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AbnormalMoveAbility>,
               InternalVTableHelperCtorCaller<UDS_AbnormalMoveAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AbnormalMoveAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b40ad20

bool __thiscall UDS_AbnormalMoveAbility::ShouldTickComponent(UDS_AbnormalMoveAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_AbnormalMoveAbility @ 14b40ade0

void __cdecl UDS_AbnormalMoveAbility::StaticRegisterNativesUDS_AbnormalMoveAbility(void)

{
  return;
}

// UDS_AbnormalMoveAbility @ 14b79b1e0

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

UDS_AbnormalMoveAbility * __thiscall
UDS_AbnormalMoveAbility::UDS_AbnormalMoveAbility
          (UDS_AbnormalMoveAbility *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  (this->AbnormalAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  this->CurrentAbnormalType = None;
  dVar9 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->TargetRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->TargetRotation).Yaw = dVar9;
  (this->TargetRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->bRevertMovementMode = false;
  this->bAttachedSocket = false;
  this->SkillMoveWaitTime = 0.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DefenderOriginTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->DefenderOriginTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DefenderOriginTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->DefenderOriginTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->DefenderOriginTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->DefenderOriginTransform).Scale3D.ZW.m128d_f64 = auVar8;
  this->DefaultGravityScale = 0.0;
  return this;
}

// AttachSocket @ 14b79d530

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
UDS_AbnormalMoveAbility::AttachSocket(UDS_AbnormalMoveAbility *this,FDS_AbnormalInfo *param_1)

{
  USceneComponent *pUVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  UDS_AbnormalAbilityData *this_00;
  FDS_AbnormalInfo *this_01;
  FDS_EntityBase *pFVar5;
  FWeakObjectPtr *this_02;
  AActor *pAVar6;
  AActor *this_03;
  UDS_SkillDataSet *this_04;
  UObject *pUVar7;
  TTransform<double> *pTVar8;
  FName *pFVar9;
  int iVar10;
  TTransform<double> *pTVar11;
  wchar_t *pwVar12;
  ForAnyElementType FVar13;
  wchar_t *pwVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_158 [32];
  undefined1 local_128 [8];
  FName local_120;
  FName local_118;
  FWeakObjectPtr local_110;
  FWeakObjectPtr local_108;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_100;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  undefined1 local_d0 [8];
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_158;
  bVar4 = FDS_AbnormalInfo::DoesAttachSocketExist(param_1);
  if (bVar4) {
    this_00 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
    this_01 = UDS_AbnormalAbilityData::GetHighestAbnormalInfo(this_00,None);
    if ((((param_1->AbnormalType == this_01->AbnormalType) ||
         (this_01->ActionGrade <= param_1->ActionGrade)) ||
        (bVar4 = FDS_AbnormalInfo::DoesAttachSocketExist(this_01), !bVar4)) &&
       (pFVar5 = FDS_EntityBase::GetEntityBase(&param_1->AttackerEntityID),
       pFVar5 != (FDS_EntityBase *)0x0)) {
      this_02 = (FWeakObjectPtr *)(**(code **)(pFVar5->_padding_ + 0x150))(pFVar5,local_d0);
      pAVar6 = (AActor *)FWeakObjectPtr::Get(this_02);
      if (pAVar6 != (AActor *)0x0) {
        (**(code **)(pFVar5->_padding_ + 0x80))(pFVar5);
        bVar4 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_108,
                           (void *)0x0);
        if (!bVar4) {
          this_03 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xc0);
          local_118.ComparisonIndex.Value = 0;
          local_118.Number = 0;
          local_120.ComparisonIndex.Value = 0;
          local_120.Number = 0;
          FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_118,(FObjectPtr)&local_120);
          TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_110);
          bVar4 = FWeakObjectPtr::IsValid(&local_110);
          if (bVar4) {
            this_04 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_110);
            UDS_SkillDataSet::GetCurrentActiveSkillList(this_04,&local_100);
            iVar10 = local_100.ArrayNum;
            pFVar9 = (FName *)(local_100.AllocatorInstance.Data + (longlong)iVar10 * 8);
            FVar13.Data = local_100.AllocatorInstance.Data;
            while( true ) {
              if (local_100.ArrayNum != iVar10) {
                `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::
                operator!='::__l2::<lambda_1>::operator()(local_128);
              }
              if ((FName *)FVar13.Data == pFVar9) break;
              local_120 = *(FName *)FVar13.Data;
              bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_120);
              if ((bVar4) &&
                 (pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_120),
                 pUVar7[9].field_0x7 != '\x03')) {
                local_118 = local_120;
              }
              FVar13.Data = FVar13.Data + 8;
            }
            if ((FName *)local_100.AllocatorInstance.Data != (FName *)0x0) {
              FMemory::Free(local_100.AllocatorInstance.Data);
            }
          }
          bVar4 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_118,(void *)0x0)
          ;
          if (bVar4) {
            DetachSocket(this);
          }
          else {
            pTVar11 = &UE::Math::TTransform<double>::Identity;
            if (this->bAttachedSocket == false) {
              pUVar1 = (this_03->RootComponent).field0_0x0.DebugPtr;
              if (pUVar1 == (USceneComponent *)0x0) {
                pTVar8 = &UE::Math::TTransform<double>::Identity;
              }
              else {
                pTVar8 = &pUVar1->ComponentToWorld;
              }
              dVar3 = (pTVar8->Rotation).XY.m128d_f64[1];
              (this->DefenderOriginTransform).Rotation.XY.m128d_f64[0] =
                   (pTVar8->Rotation).XY.m128d_f64[0];
              (this->DefenderOriginTransform).Rotation.XY.m128d_f64[1] = dVar3;
              dVar3 = (pTVar8->Rotation).ZW.m128d_f64[1];
              (this->DefenderOriginTransform).Rotation.ZW.m128d_f64[0] =
                   (pTVar8->Rotation).ZW.m128d_f64[0];
              (this->DefenderOriginTransform).Rotation.ZW.m128d_f64[1] = dVar3;
              dVar3 = (pTVar8->Translation).XY.m128d_f64[1];
              (this->DefenderOriginTransform).Translation.XY.m128d_f64[0] =
                   (pTVar8->Translation).XY.m128d_f64[0];
              (this->DefenderOriginTransform).Translation.XY.m128d_f64[1] = dVar3;
              dVar3 = (pTVar8->Translation).ZW.m128d_f64[1];
              (this->DefenderOriginTransform).Translation.ZW.m128d_f64[0] =
                   (pTVar8->Translation).ZW.m128d_f64[0];
              (this->DefenderOriginTransform).Translation.ZW.m128d_f64[1] = dVar3;
              dVar3 = (pTVar8->Scale3D).XY.m128d_f64[1];
              (this->DefenderOriginTransform).Scale3D.XY.m128d_f64[0] =
                   (pTVar8->Scale3D).XY.m128d_f64[0];
              (this->DefenderOriginTransform).Scale3D.XY.m128d_f64[1] = dVar3;
              dVar3 = (pTVar8->Scale3D).ZW.m128d_f64[1];
              (this->DefenderOriginTransform).Scale3D.ZW.m128d_f64[0] =
                   (pTVar8->Scale3D).ZW.m128d_f64[0];
              (this->DefenderOriginTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
            }
            pUVar1 = (this_03->RootComponent).field0_0x0.DebugPtr;
            if (pUVar1 != (USceneComponent *)0x0) {
              pTVar11 = &pUVar1->ComponentToWorld;
            }
            local_c8.Rotation.XY.m128d_f64[0] = (pTVar11->Rotation).XY.m128d_f64[0];
            local_c8.Rotation.XY.m128d_f64[1] = (pTVar11->Rotation).XY.m128d_f64[1];
            local_c8.Rotation.ZW.m128d_f64[0] = (pTVar11->Rotation).ZW.m128d_f64[0];
            local_c8.Rotation.ZW.m128d_f64[1] = (pTVar11->Rotation).ZW.m128d_f64[1];
            local_c8.Translation.XY.m128d_f64[0] = (pTVar11->Translation).XY.m128d_f64[0];
            local_c8.Translation.XY.m128d_f64[1] = (pTVar11->Translation).XY.m128d_f64[1];
            local_c8.Translation.ZW.m128d_f64[0] = (pTVar11->Translation).ZW.m128d_f64[0];
            local_c8.Translation.ZW.m128d_f64[1] = (pTVar11->Translation).ZW.m128d_f64[1];
            local_c8.Scale3D.XY.m128d_f64[0] = (pTVar11->Scale3D).XY.m128d_f64[0];
            local_c8.Scale3D.XY.m128d_f64[1] = (pTVar11->Scale3D).XY.m128d_f64[1];
            local_c8.Scale3D.ZW.m128d_f64[0] = (pTVar11->Scale3D).ZW.m128d_f64[0];
            local_c8.Scale3D.ZW.m128d_f64[1] = (pTVar11->Scale3D).ZW.m128d_f64[1];
            pUVar7 = FWeakObjectPtr::Get(&local_108);
            pwVar14 = L"";
            pcVar2 = *(code **)(*(longlong *)pUVar7 + 0x528);
            if ((param_1->AtkAttachSocket).Data.ArrayNum == 0) {
              pwVar12 = L"";
            }
            else {
              pwVar12 = (wchar_t *)(param_1->AtkAttachSocket).Data.AllocatorInstance.Data;
            }
            pFVar9 = ::FName::FName(&local_120,pwVar12);
            (*pcVar2)(pUVar7,&local_e8,*pFVar9);
            uVar15 = (uint)__xmm_80000000000000008000000000000000;
            uVar16 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
            local_e8 = local_c8.Translation.XY.m128d_f64[0] - local_e8;
            local_e0 = local_c8.Translation.XY.m128d_f64[1] - local_e0;
            local_f0 = (double)CONCAT44((uint)((ulonglong)
                                               (local_c8.Translation.ZW.m128d_f64[0] - local_d8) >>
                                              0x20) ^ uVar16,
                                        SUB84(local_c8.Translation.ZW.m128d_f64[0] - local_d8,0) ^
                                        uVar15);
            if ((param_1->DefAttachSocket).Data.ArrayNum != 0) {
              pwVar14 = (wchar_t *)(param_1->DefAttachSocket).Data.AllocatorInstance.Data;
            }
            pFVar9 = ::FName::FName(&local_120,pwVar14);
            AActor::AttachToActor
                      (this_03,pAVar6,&FAttachmentTransformRules::SnapToTargetIncludingScale,*pFVar9
                      );
            dVar3 = local_c8.Translation.XY.m128d_f64[1] +
                    (double)CONCAT44((uint)((ulonglong)local_e0 >> 0x20) ^ uVar16,
                                     SUB84(local_e0,0) ^ uVar15);
            local_c8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
            local_c8.Translation.XY.m128d_f64[0] =
                 local_c8.Translation.XY.m128d_f64[0] +
                 (double)CONCAT44((uint)((ulonglong)local_e8 >> 0x20) ^ uVar16,
                                  SUB84(local_e8,0) ^ uVar15);
            local_c8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
            dVar3 = local_c8.Translation.ZW.m128d_f64[1] + 0.0;
            local_c8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
            local_c8.Translation.ZW.m128d_f64[0] = local_c8.Translation.ZW.m128d_f64[0] + local_f0;
            local_c8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
            AActor::SetActorTransform(this_03,&local_c8,false,(FHitResult *)0x0,None);
            this->bAttachedSocket = true;
          }
        }
      }
    }
  }
  return;
}

// DetachSocket @ 14b7a41a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_AbnormalMoveAbility::DetachSocket(UDS_AbnormalMoveAbility *this)

{
  AActor *pAVar1;
  
  if (this->bAttachedSocket != false) {
    this->bAttachedSocket = false;
    pAVar1 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xc0);
    AActor::DetachFromActor(pAVar1,&FDetachmentTransformRules::KeepWorldTransform);
    pAVar1 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xc0);
    AActor::SetActorTransform(pAVar1,&this->DefenderOriginTransform,false,(FHitResult *)0x0,None);
  }
  return;
}

// InitAbnormalMove @ 14b7ae240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_AbnormalMoveAbility::InitAbnormalMove(UDS_AbnormalMoveAbility *this,FDS_AbnormalInfo *param_1)

{
  TRotator<double> *pTVar1;
  double dVar2;
  double dVar3;
  UDS_MovementCore *this_00;
  TMatrix<double> *this_01;
  TRotator<double> *pTVar4;
  UObject *pUVar5;
  undefined1 auStack_118 [32];
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  TRotator<double> local_c8;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  this->SkillMoveWaitTime = 0.0;
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
  UDS_MovementCore::GetActorFootLocation(this_00,(TVector<double> *)&local_e0._s_0);
  local_c8.Roll = (param_1->AbnormalDestination).field0_0x0._s_0.Z;
  dVar2 = (param_1->AbnormalDestination).field0_0x0._s_0.X;
  dVar3 = (param_1->AbnormalDestination).field0_0x0._s_0.Y;
  if (param_1->IsAbnormalRotation == true) {
    pTVar1 = &this->TargetRotation;
    if ((float)param_1->AbnormalValue <= 0.0) {
      local_f8._s_0.X = dVar2 - local_e0._s_0.X;
      local_f8._s_0.Y = dVar3 - local_e0._s_0.Y;
      local_f8._s_0.Z = local_c8.Roll - local_e0._s_0.Z;
    }
    else {
      local_f8._s_0.X = local_e0._s_0.X - dVar2;
      local_f8._s_0.Y = local_e0._s_0.Y - dVar3;
      local_f8._s_0.Z = local_e0._s_0.Z - local_c8.Roll;
    }
    this_01 = UE::Math::TRotationMatrix<double>::MakeFromX
                        (&local_a8,(TVector<double> *)&local_f8._s_0);
    pTVar4 = UE::Math::TMatrix<double>::Rotator(this_01,&local_c8);
    dVar2 = pTVar4->Yaw;
    pTVar1->Pitch = pTVar4->Pitch;
    (this->TargetRotation).Yaw = dVar2;
    (this->TargetRotation).Roll = pTVar4->Roll;
    if (0.0 < param_1->AbnormalWaitTime) {
      (this->TargetRotation).Roll = 0.0;
      pTVar1->Pitch = 0.0;
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
      (**(code **)(*(longlong *)pUVar5 + 0x370))(pUVar5,pTVar1);
      dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      pTVar1->Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      (this->TargetRotation).Yaw = dVar2;
      (this->TargetRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    }
  }
  return;
}

// OnAbilityRetryActivate @ 14b7b3ec0

void __thiscall UDS_AbnormalMoveAbility::OnAbilityRetryActivate(UDS_AbnormalMoveAbility *this)

{
  return;
}

// OnCanActivate @ 14b7b4e70

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

bool __thiscall UDS_AbnormalMoveAbility::OnCanActivate(UDS_AbnormalMoveAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar4;
  undefined1 auStackY_178 [32];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->AbnormalAbilityData).WeakPtr);
    if (!bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
                        (&local_144,&this->field_0xe0);
                    /* WARNING: Load size is inaccurate */
      (this->AbnormalAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = FWeakObjectPtr::IsValid(&(this->AbnormalAbilityData).WeakPtr);
    if (bVar1) {
      bVar1 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
      if (!bVar1) {
        TVar4 = FDS_EntityBase::GetCharStateData(*(FDS_EntityBase **)&this->field_0xc8);
                    /* WARNING: Load size is inaccurate */
        (this->CharStateData).WeakPtr = *TVar4.WeakPtr;
      }
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_AbnormalMoveAbility::OnCanActivate",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x2c,L"AbnormalAbilityData is invalid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b7b7600

void __thiscall
UDS_AbnormalMoveAbility::OnDeactivateAbility(UDS_AbnormalMoveAbility *this,bool *param_1)

{
  double dVar1;
  UObject *pUVar2;
  
  this->CurrentAbnormalType = None;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->TargetRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->TargetRotation).Yaw = dVar1;
  (this->TargetRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->SkillMoveWaitTime = 0.0;
  DetachSocket(this);
  if (this->bRevertMovementMode != false) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
    (**(code **)(*(longlong *)pUVar2 + 0x448))(pUVar2,1);
    this->bRevertMovementMode = false;
  }
  return;
}

// OnPostActivateAbility @ 14b7ba200

void __thiscall UDS_AbnormalMoveAbility::OnPostActivateAbility(UDS_AbnormalMoveAbility *this)

{
  return;
}

// OnTickComponent @ 14b7bcd10

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
UDS_AbnormalMoveAbility::OnTickComponent(UDS_AbnormalMoveAbility *this,float param_1)

{
  bool bVar1;
  UDS_AbnormalAbilityData *pUVar2;
  FDS_AbnormalInfo *pFVar3;
  EDS_AbilityDeactivateType local_res8 [8];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  bVar1 = FWeakObjectPtr::IsValid(&(this->AbnormalAbilityData).WeakPtr);
  if (!bVar1) {
    local_res8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
    return;
  }
  pUVar2 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
  pFVar3 = UDS_AbnormalAbilityData::GetHighestAbnormalInfo(pUVar2,MoveControl);
  if (pFVar3->AbnormalActionID == 0) {
    pUVar2 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
    bVar1 = UDS_AbnormalAbilityData::HasHeightMove(pUVar2,pFVar3);
    if (bVar1) {
      UpdateHeightControl(this,pFVar3,param_1);
    }
  }
  else {
    TickMoveControl(this,pFVar3,param_1);
  }
  return;
}

// RevertMovementMode @ 14b7c1f10

void __thiscall UDS_AbnormalMoveAbility::RevertMovementMode(UDS_AbnormalMoveAbility *this)

{
  UObject *pUVar1;
  
  if (this->bRevertMovementMode != false) {
    pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
    (**(code **)(*(longlong *)pUVar1 + 0x448))(pUVar1,1);
    this->bRevertMovementMode = false;
  }
  return;
}

// TickMoveControl @ 14b7c5de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UDS_AbnormalMoveAbility::TickMoveControl
          (UDS_AbnormalMoveAbility *this,FDS_AbnormalInfo *param_1,float param_2)

{
  undefined1 *this_00;
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  UDS_MovementCore *pUVar13;
  TMatrix<double> *this_01;
  TRotator<double> *pTVar14;
  UObject *pUVar15;
  UDS_AbnormalAbilityData *pUVar16;
  TVector<double> *pTVar17;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  TRotator<double> *pTVar18;
  TQuat<double> *pTVar19;
  undefined4 uVar20;
  uint uVar21;
  UDS_AbnormalMoveAbility *pUVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  float fVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  double dVar46;
  double dVar48;
  undefined1 auVar47 [16];
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auStackY_208 [32];
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_188;
  double local_168;
  double dStack_160;
  double local_158;
  TVector<double>_u_0 local_148;
  TMatrix<double> local_128;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if (this->CurrentAbnormalType != param_1->AbnormalType) {
    this->SkillMoveWaitTime = 0.0;
    pUVar13 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
    UDS_MovementCore::GetActorFootLocation(pUVar13,(TVector<double> *)&local_188._s_0);
    local_1c8._s_0.Z = (param_1->AbnormalDestination).field0_0x0._s_0.Z;
    dVar30 = (param_1->AbnormalDestination).field0_0x0._s_0.X;
    dVar7 = (param_1->AbnormalDestination).field0_0x0._s_0.Y;
    if (param_1->IsAbnormalRotation == true) {
      pTVar18 = &this->TargetRotation;
      if ((float)param_1->AbnormalValue <= 0.0) {
        local_1a8._s_0.X = dVar30 - local_188._s_0.X;
        local_1a8._s_0.Y = dVar7 - local_188._s_0.Y;
        local_1a8._s_0.Z = local_1c8._s_0.Z - local_188._s_0.Z;
      }
      else {
        local_1a8._s_0.X = local_188._s_0.X - dVar30;
        local_1a8._s_0.Y = local_188._s_0.Y - dVar7;
        local_1a8._s_0.Z = local_188._s_0.Z - local_1c8._s_0.Z;
      }
      this_01 = UE::Math::TRotationMatrix<double>::MakeFromX
                          (&local_128,(TVector<double> *)&local_1a8._s_0);
      pTVar14 = UE::Math::TMatrix<double>::Rotator(this_01,(TRotator<double> *)&local_1c8._s_0);
      dVar30 = pTVar14->Yaw;
      pTVar18->Pitch = pTVar14->Pitch;
      (this->TargetRotation).Yaw = dVar30;
      (this->TargetRotation).Roll = pTVar14->Roll;
      if (0.0 < param_1->AbnormalWaitTime) {
        (this->TargetRotation).Roll = 0.0;
        pTVar18->Pitch = 0.0;
        pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
        (**(code **)(*(longlong *)pUVar15 + 0x370))(pUVar15,pTVar18);
        dVar30 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        pTVar18->Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        (this->TargetRotation).Yaw = dVar30;
        (this->TargetRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      }
    }
  }
  if ((param_1->AbnormalWaitTime <= this->SkillMoveWaitTime) ||
     (param_2 + this->SkillMoveWaitTime < param_1->AbnormalWaitTime)) {
    bVar9 = false;
    AttachSocket(this,param_1);
  }
  else {
    bVar9 = true;
  }
  fVar29 = param_2 + this->SkillMoveWaitTime;
  this->CurrentAbnormalType = param_1->AbnormalType;
  this->SkillMoveWaitTime = fVar29;
  if (param_1->AbnormalWaitTime <= fVar29) {
    pUVar16 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
    dVar30 = UDS_AbnormalAbilityData::GetMoveRemainTime(pUVar16,param_1,0.0);
    if (0.0 < dVar30) {
      if (bVar9) {
        DetachSocket(this);
      }
      this_00 = &this->field_0xd0;
      pUVar13 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      UDS_MovementCore::GetActorLocation(pUVar13,(TVector<double> *)&local_148._s_0);
      local_1c8._s_0.Z = (param_1->AbnormalDestination).field0_0x0._s_0.Z;
      local_1a8._s_0.Z = 0.0;
      dVar49 = (param_1->AbnormalDestination).field0_0x0._s_0.X - local_148._s_0.X;
      dVar7 = (param_1->AbnormalDestination).field0_0x0._s_0.Y - local_148._s_0.Y;
      local_1a8._s_0.X = dVar49;
      local_1a8._s_0.Y = dVar7;
      UE::Math::TVector<double>::GetSafeNormal
                ((TVector<double> *)&local_1a8._s_0,(TVector<double> *)&local_188._s_0,
                 __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
      fVar45 = (float)SQRT(dVar7 * dVar7 + dVar49 * dVar49 + 0.0);
      auVar38._0_8_ = (double)fVar45 / dVar30;
      auVar38._8_8_ = 0;
      fVar29 = (float)auVar38._0_8_;
      if (fVar45 < fVar29 * param_2) {
        fVar29 = fVar45 / param_2;
      }
      local_158 = (double)fVar29;
      local_168 = local_188._s_0.X * local_158;
      dStack_160 = local_188._s_0.Y * local_158;
      local_158 = local_188._s_0.Z * local_158;
      pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      (**(code **)(*(longlong *)pUVar15 + 0x2c8))
                (pUVar15,&local_168,*(code **)(*(longlong *)pUVar15 + 0x2c8),1);
      pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      pcVar2 = *(code **)(*(longlong *)pUVar15 + 0x380);
      pUVar13 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      pTVar17 = UDS_MovementCore::GetActorLocation(pUVar13,(TVector<double> *)&local_1c8._s_0);
      (*pcVar2)(pUVar15,pTVar17);
      pUVar16 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr)
      ;
      bVar9 = UDS_AbnormalAbilityData::HasHeightMove(pUVar16,param_1);
      pUVar16 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr)
      ;
      bVar10 = UDS_AbnormalAbilityData::HasHeightCurve(pUVar16,param_1);
      if (bVar9) {
        pUVar22 = this;
        bVar9 = UpdateHeightControl(this,param_1,param_2);
        uVar20 = SUB84(pUVar22,0);
        uVar11 = (undefined4)CONCAT71(extraout_var,bVar9);
      }
      else if (bVar10) {
        pUVar22 = this;
        bVar9 = UpdateHeightCurve(this,param_1,param_2);
        uVar20 = SUB84(pUVar22,0);
        uVar11 = (undefined4)CONCAT71(extraout_var_00,bVar9);
      }
      else {
        pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        uVar11 = (**(code **)(*(longlong *)pUVar15 + 0x2f0))(pUVar15,1);
        uVar20 = SUB84(pUVar15,0);
      }
      if (param_1->IsAbnormalRotation == true) {
        auVar1._0_8_ = (this->TargetRotation).Pitch;
        auVar1._8_8_ = (this->TargetRotation).Yaw;
        dVar30 = (this->TargetRotation).Roll;
        auVar31 = divpd(auVar1,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
        auVar38 = roundpd(auVar38,auVar31,3);
        dVar5 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
        auVar39._0_8_ = auVar38._0_8_ * dVar5;
        dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
        auVar39._8_8_ = auVar38._8_8_ * dVar6;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = dVar30;
        dVar46 = (double)auVar1._0_8_ - auVar39._0_8_;
        dVar48 = (double)auVar1._8_8_ - auVar39._8_8_;
        auVar38 = divpd(auVar32,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
        auVar38 = roundpd(auVar39,auVar38,3);
        dVar49 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
        dVar4 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        auVar33._8_4_ = SUB84(dVar48,0);
        auVar33._0_8_ = dVar46;
        auVar33._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
        dVar30 = dVar30 - auVar38._0_8_ * dVar49;
        dVar7 = 0.0 - auVar38._8_8_ * dVar4;
        uVar23 = -(ulonglong)(0.0 <= dVar46);
        uVar25 = -(ulonglong)(0.0 <= dVar48);
        auVar40._0_8_ = uVar23 & (ulonglong)dVar46;
        auVar40._8_4_ = (undefined4)(uVar25 & (ulonglong)dVar48);
        auVar40._12_4_ = (undefined4)((uVar25 & (ulonglong)dVar48) >> 0x20);
        dVar48 = auVar33._8_8_ + dVar6;
        uVar24 = -(ulonglong)(0.0 <= dVar30);
        uVar26 = -(ulonglong)(0.0 <= dVar7);
        auVar50._0_4_ = ~(uint)uVar23 & SUB84(dVar46 + dVar5,0);
        auVar50._4_4_ = ~(uint)(uVar23 >> 0x20) & (uint)((ulonglong)(dVar46 + dVar5) >> 0x20);
        auVar50._8_4_ = ~(uint)uVar25 & SUB84(dVar48,0);
        auVar50._12_4_ = ~(uint)(uVar25 >> 0x20) & (uint)((ulonglong)dVar48 >> 0x20);
        auVar50 = auVar50 | auVar40;
        auVar34._8_4_ = SUB84(dVar7,0);
        auVar34._0_8_ = dVar30;
        auVar34._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        dVar48 = auVar34._8_8_ + dVar4;
        auVar47._0_4_ = ~(uint)uVar24 & SUB84(dVar30 + dVar49,0);
        auVar47._4_4_ = ~(uint)(uVar24 >> 0x20) & (uint)((ulonglong)(dVar30 + dVar49) >> 0x20);
        auVar47._8_4_ = ~(uint)uVar26 & SUB84(dVar48,0);
        auVar47._12_4_ = ~(uint)(uVar26 >> 0x20) & (uint)((ulonglong)dVar48 >> 0x20);
        auVar31._8_4_ = (int)((ulonglong)dVar7 & uVar26);
        auVar31._0_8_ = (ulonglong)dVar30 & uVar24;
        auVar31._12_4_ = (int)(((ulonglong)dVar7 & uVar26) >> 0x20);
        auVar47 = auVar47 | auVar31;
        uVar24 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar47._0_8_);
        uVar26 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar47._8_8_);
        uVar25 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar50._0_8_);
        uVar27 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar50._8_8_);
        auVar41._0_8_ = uVar24 & (ulonglong)(auVar47._0_8_ - dVar49);
        uVar23 = uVar26 & (ulonglong)(auVar47._8_8_ - dVar4);
        auVar41._8_4_ = (undefined4)uVar23;
        auVar41._12_4_ = (undefined4)(uVar23 >> 0x20);
        auVar35._0_4_ = ~(uint)uVar24 & auVar47._0_4_;
        auVar35._4_4_ = ~(uint)(uVar24 >> 0x20) & auVar47._4_4_;
        auVar35._8_4_ = ~(uint)uVar26 & auVar47._8_4_;
        auVar35._12_4_ = ~(uint)(uVar26 >> 0x20) & auVar47._12_4_;
        auVar41 = auVar41 | auVar35;
        auVar36._8_4_ = SUB84(__real_3f1a36e2e0000000,0);
        auVar36._0_8_ = __real_3f1a36e2e0000000;
        auVar36._12_4_ = (int)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
        auVar42._0_8_ =
             (double)CONCAT44(auVar41._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              auVar41._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar42._8_4_ = auVar41._8_4_ & _UNK_15061cc88;
        auVar42._12_4_ = auVar41._12_4_ & _UNK_15061cc8c;
        auVar37._8_8_ = -(ulonglong)(auVar36._8_8_ < auVar42._8_8_);
        auVar37._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar42._0_8_);
        uVar21 = movmskpd(uVar20,auVar37);
        auVar43._0_8_ = uVar25 & (ulonglong)(auVar50._0_8_ - dVar5);
        uVar23 = uVar27 & (ulonglong)(auVar50._8_8_ - dVar6);
        auVar43._8_4_ = (undefined4)uVar23;
        auVar43._12_4_ = (undefined4)(uVar23 >> 0x20);
        auVar3._4_4_ = ~(uint)(uVar25 >> 0x20) & auVar50._4_4_;
        auVar3._0_4_ = ~(uint)uVar25 & auVar50._0_4_;
        auVar3._8_4_ = ~(uint)uVar27 & auVar50._8_4_;
        auVar3._12_4_ = ~(uint)(uVar27 >> 0x20) & auVar50._12_4_;
        auVar43 = auVar43 | auVar3;
        auVar44._0_8_ =
             (double)CONCAT44(auVar43._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              auVar43._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar44._8_4_ = auVar43._8_4_ & _UNK_15061cc88;
        auVar44._12_4_ = auVar43._12_4_ & _UNK_15061cc8c;
        lVar28 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar44._8_8_);
        auVar8._8_4_ = (int)lVar28;
        auVar8._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar44._0_8_);
        auVar8._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
        iVar12 = movmskpd(uVar11,auVar8);
        if ((uVar21 & 0x3fffffff) != 0 || iVar12 != 0) {
          pUVar13 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
          pTVar18 = UDS_MovementCore::GetActorRotation(pUVar13,(TRotator<double> *)&local_1a8._s_0);
          FMath::RInterpTo((TRotator<double> *)&local_1c8._s_0,pTVar18,&this->TargetRotation,param_2
                           ,__real_41000000);
          pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
          local_1a8._s_0.X = 0.0;
          local_1a8._s_0.Y = local_1c8._s_0.Y;
          local_1a8._s_0.Z = 0.0;
          (**(code **)(*(longlong *)pUVar15 + 0x370))(pUVar15,&local_1a8);
        }
      }
      pTVar19 = UE::Math::TRotator<double>::Quaternion
                          (&UE::Math::TRotator<double>::ZeroRotator,(TQuat<double> *)&local_188._s_0
                          );
      local_1c8._s_0.X = ___xmm_40340000000000004034000000000000;
      local_1c8._s_0.Y = _UNK_151444f88;
      local_1c8._s_0.Z = __real_4034000000000000;
      pUVar13 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      pTVar17 = UDS_MovementCore::GetActorLocation(pUVar13,(TVector<double> *)&local_1a8._s_0);
      fVar29 = __real_3f800000;
      DS_Util::ShowSyncBox
                (pTVar17,(TVector<double> *)&local_1c8._s_0,pTVar19,&FColor::White,false,
                 __real_3f800000,'\0',__real_40000000);
      pTVar19 = UE::Math::TRotator<double>::Quaternion
                          (&UE::Math::TRotator<double>::ZeroRotator,(TQuat<double> *)&local_1a8._s_0
                          );
      local_1c8._s_0.X = ___xmm_40490000000000004049000000000000;
      local_1c8._s_0.Y = _UNK_150b2d2e8;
      local_1c8._s_0.Z = __real_4049000000000000;
      DS_Util::ShowSyncBox
                (&param_1->AbnormalDestination,(TVector<double> *)&local_1c8._s_0,pTVar19,
                 &FColor::Red,false,fVar29,'\0',__real_40400000);
    }
    else {
      pUVar16 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr)
      ;
      bVar9 = UDS_AbnormalAbilityData::HasHeightMove(pUVar16,param_1);
      pUVar16 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr)
      ;
      bVar10 = UDS_AbnormalAbilityData::HasHeightCurve(pUVar16,param_1);
      if (bVar9) {
        UpdateHeightControl(this,param_1,param_2);
      }
      else if (bVar10) {
        UpdateHeightCurve(this,param_1,param_2);
      }
      else {
        RevertMovementMode(this);
      }
    }
  }
  return;
}

// TickNoMoveControl @ 14b7c64d0

void __thiscall
UDS_AbnormalMoveAbility::TickNoMoveControl
          (UDS_AbnormalMoveAbility *this,FDS_AbnormalInfo *param_1,float param_2)

{
  bool bVar1;
  UDS_AbnormalAbilityData *this_00;
  
  this_00 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
  bVar1 = UDS_AbnormalAbilityData::HasHeightMove(this_00,param_1);
  if (bVar1) {
    UpdateHeightControl(this,param_1,param_2);
  }
  return;
}

// UpdateHeightControl @ 14b7c9360

bool __thiscall
UDS_AbnormalMoveAbility::UpdateHeightControl
          (UDS_AbnormalMoveAbility *this,FDS_AbnormalInfo *param_1,float param_2)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_AbnormalAbilityData *this_00;
  float local_res8 [2];
  TVector<double>_u_0 local_38 [2];
  
  if (this->bRevertMovementMode == false) {
    this->bRevertMovementMode = true;
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
    (**(code **)(*(longlong *)pUVar2 + 0x448))(pUVar2,5);
  }
  local_res8[0] = 0.0;
  local_38[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_38[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_38[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this_00 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
  bVar1 = UDS_AbnormalAbilityData::UpdateHeightMove
                    (this_00,param_1,param_2,local_res8,(TVector<double> *)&local_38[0]._s_0);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
    (**(code **)(*(longlong *)pUVar2 + 0x360))(pUVar2,(float)(double)local_38[0]._16_8_);
  }
  else if (this->bRevertMovementMode != false) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
    (**(code **)(*(longlong *)pUVar2 + 0x448))(pUVar2,1);
    this->bRevertMovementMode = false;
  }
  return true;
}

// UpdateHeightCurve @ 14b7c9480

bool __thiscall
UDS_AbnormalMoveAbility::UpdateHeightCurve
          (UDS_AbnormalMoveAbility *this,FDS_AbnormalInfo *param_1,float param_2)

{
  int iVar1;
  UDS_MovementCore *this_00;
  UObject *pUVar2;
  UDS_AbnormalAbilityData *this_01;
  TVector<double> local_38 [2];
  
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
  UDS_MovementCore::GetActorLocation(this_00,local_38);
  if (this->bRevertMovementMode == false) {
    this->bRevertMovementMode = true;
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
    (**(code **)(*(longlong *)pUVar2 + 0x448))(pUVar2,5);
  }
  this_01 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
  iVar1 = UDS_AbnormalAbilityData::GetAbnormalEntityHeight(this_01,param_1,local_38);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
  (**(code **)(*(longlong *)pUVar2 + 0x360))(pUVar2,(float)iVar1);
  return true;
}

