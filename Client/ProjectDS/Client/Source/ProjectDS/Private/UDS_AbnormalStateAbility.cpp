// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b402450

UClass * __cdecl UDS_AbnormalStateAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AbnormalStateAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AbnormalStateAbility",
               &Z_Registration_Info_UClass_UDS_AbnormalStateAbility.InnerSingleton,
               StaticRegisterNativesUDS_AbnormalStateAbility,0x1d0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AbnormalStateAbility>,
               InternalVTableHelperCtorCaller<UDS_AbnormalStateAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AbnormalStateAbility.InnerSingleton;
}

// UDS_AbnormalStateAbility @ 14b4069f0

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

UDS_AbnormalStateAbility * __thiscall
UDS_AbnormalStateAbility::UDS_AbnormalStateAbility
          (UDS_AbnormalStateAbility *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->AbnormalAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  this->CurrentAbnormalType = None;
  this->AbnormalElapsedTime = 0.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->DefenderOriginTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->DefenderOriginTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->DefenderOriginTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->DefenderOriginTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->DefenderOriginTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->DefenderOriginTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->DefenderOriginTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->DefenderOriginTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->DefenderOriginTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->DefenderOriginTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->DefenderOriginTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->DefenderOriginTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// ~UDS_AbnormalStateAbility @ 14b407c90

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

void __thiscall UDS_AbnormalStateAbility::~UDS_AbnormalStateAbility(UDS_AbnormalStateAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b409b40

UClass * __cdecl UDS_AbnormalStateAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AbnormalStateAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AbnormalStateAbility",
               &Z_Registration_Info_UClass_UDS_AbnormalStateAbility.InnerSingleton,
               StaticRegisterNativesUDS_AbnormalStateAbility,0x1d0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AbnormalStateAbility>,
               InternalVTableHelperCtorCaller<UDS_AbnormalStateAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AbnormalStateAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b40ad30

bool __thiscall UDS_AbnormalStateAbility::ShouldTickComponent(UDS_AbnormalStateAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_AbnormalStateAbility @ 14b40adf0

void __cdecl UDS_AbnormalStateAbility::StaticRegisterNativesUDS_AbnormalStateAbility(void)

{
  return;
}

// UDS_AbnormalStateAbility @ 14b79b2c0

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

UDS_AbnormalStateAbility * __thiscall
UDS_AbnormalStateAbility::UDS_AbnormalStateAbility
          (UDS_AbnormalStateAbility *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->AbnormalAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  this->CurrentAbnormalType = None;
  this->AbnormalElapsedTime = 0.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->DefenderOriginTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->DefenderOriginTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->DefenderOriginTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->DefenderOriginTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->DefenderOriginTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->DefenderOriginTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->DefenderOriginTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->DefenderOriginTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->DefenderOriginTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->DefenderOriginTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->DefenderOriginTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->DefenderOriginTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// AbnormalRotation @ 14b79cb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDS_AbnormalStateAbility::AbnormalRotation(UDS_AbnormalStateAbility *this)

{
  bool bVar1;
  UDS_AbnormalAbilityData *this_00;
  FDS_AbnormalInfo *pFVar2;
  UDS_MovementCore *pUVar3;
  TMatrix<double> *this_01;
  UObject *pUVar4;
  undefined1 auStack_128 [32];
  FWeakObjectPtr local_108;
  FWeakObjectPtr local_100;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 local_c8;
  TRotator<double> local_b0;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  bVar1 = FWeakObjectPtr::IsValid(&(this->AbnormalAbilityData).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
    pFVar2 = UDS_AbnormalAbilityData::GetHighestAbnormalInfo(this_00,StateControl);
    if (pFVar2->IsAbnormalRotation == true) {
      UDS_MovementCore::GetMovementCore((ulong64)&local_108);
      bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_108,(void *)0x0);
      if (!bVar1) {
        local_100 = (FWeakObjectPtr)this->_padding_;
        pUVar3 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_100);
        UDS_MovementCore::GetActorFootLocation(pUVar3,(TVector<double> *)&local_e0._s_0);
        pUVar3 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_108);
        UDS_MovementCore::GetActorFootLocation(pUVar3,(TVector<double> *)&local_f8._s_0);
        local_c8._s_0.X = local_f8._s_0.X - local_e0._s_0.X;
        local_c8._s_0.Y = local_f8._s_0.Y - local_e0._s_0.Y;
        local_c8._s_0.Z = local_f8._s_0.Z - local_e0._s_0.Z;
        this_01 = UE::Math::TRotationMatrix<double>::MakeFromX
                            (&local_98,(TVector<double> *)&local_c8._s_0);
        UE::Math::TMatrix<double>::Rotator(this_01,&local_b0);
        local_b0.Roll = 0.0;
        local_b0.Pitch = 0.0;
        pUVar4 = FWeakObjectPtr::Get(&local_100);
        (**(code **)(*(longlong *)pUVar4 + 0x370))(pUVar4,&local_b0);
      }
    }
  }
  return;
}

// AttachSocket @ 14b79d920

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

void __thiscall UDS_AbnormalStateAbility::AttachSocket(UDS_AbnormalStateAbility *this)

{
  USceneComponent *pUVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  UDS_AbnormalAbilityData *pUVar6;
  FDS_AbnormalInfo *this_00;
  FDS_AbnormalInfo *this_01;
  FDS_EntityBase *pFVar7;
  FWeakObjectPtr *this_02;
  AActor *pAVar8;
  AActor *this_03;
  UDS_SkillDataSet *this_04;
  UObject *pUVar9;
  TTransform<double> *pTVar10;
  FName *pFVar11;
  TQuat<double> *pTVar12;
  int iVar13;
  wchar_t *pwVar14;
  ForAnyElementType FVar15;
  TTransform<double> *pTVar16;
  wchar_t *pwVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_1d8 [32];
  undefined1 local_1a8 [8];
  FName local_1a0;
  FName local_198;
  FWeakObjectPtr local_190;
  FWeakObjectPtr local_188;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_180;
  double local_170;
  TQuat<double> local_168;
  undefined1 local_148 [8];
  TRotator<double> local_140;
  TTransform<double> local_128;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  bVar5 = FWeakObjectPtr::IsValid(&(this->AbnormalAbilityData).WeakPtr);
  if (bVar5) {
    pUVar6 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
    this_00 = UDS_AbnormalAbilityData::GetHighestAbnormalInfo(pUVar6,None);
    pUVar6 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
    this_01 = UDS_AbnormalAbilityData::GetHighestAbnormalInfo(pUVar6,StateControl);
    if ((((this_01->AbnormalType == this_00->AbnormalType) ||
         (this_00->ActionGrade <= this_01->ActionGrade)) ||
        (bVar5 = FDS_AbnormalInfo::DoesAttachSocketExist(this_00), !bVar5)) &&
       ((bVar5 = FDS_AbnormalInfo::DoesAttachSocketExist(this_01), bVar5 &&
        (pFVar7 = FDS_EntityBase::GetEntityBase(&this_01->AttackerEntityID),
        pFVar7 != (FDS_EntityBase *)0x0)))) {
      this_02 = (FWeakObjectPtr *)(**(code **)(pFVar7->_padding_ + 0x150))(pFVar7,local_148);
      pAVar8 = (AActor *)FWeakObjectPtr::Get(this_02);
      if (pAVar8 != (AActor *)0x0) {
        (**(code **)(pFVar7->_padding_ + 0x80))(pFVar7);
        bVar5 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_188,
                           (void *)0x0);
        if (!bVar5) {
          this_03 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          local_198.ComparisonIndex.Value = 0;
          local_198.Number = 0;
          local_1a0.ComparisonIndex.Value = 0;
          local_1a0.Number = 0;
          FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_198,(FObjectPtr)&local_1a0);
          TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_190);
          bVar5 = FWeakObjectPtr::IsValid(&local_190);
          if (bVar5) {
            this_04 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_190);
            UDS_SkillDataSet::GetCurrentActiveSkillList(this_04,&local_180);
            iVar13 = local_180.ArrayNum;
            pFVar11 = (FName *)(local_180.AllocatorInstance.Data + (longlong)iVar13 * 8);
            FVar15.Data = local_180.AllocatorInstance.Data;
            while( true ) {
              if (local_180.ArrayNum != iVar13) {
                `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::
                operator!='::__l2::<lambda_1>::operator()(local_1a8);
              }
              if ((FName *)FVar15.Data == pFVar11) break;
              local_1a0 = *(FName *)FVar15.Data;
              bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_1a0);
              if ((bVar5) &&
                 (pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_1a0),
                 pUVar9[9].field_0x7 != '\x03')) {
                local_198 = local_1a0;
              }
              FVar15.Data = FVar15.Data + 8;
            }
            if ((FName *)local_180.AllocatorInstance.Data != (FName *)0x0) {
              FMemory::Free(local_180.AllocatorInstance.Data);
            }
          }
          bVar5 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_198,(void *)0x0)
          ;
          if (bVar5) {
            DetachSocket(this);
          }
          else {
            pTVar16 = &UE::Math::TTransform<double>::Identity;
            if (this->bAttachedSocket == false) {
              pUVar1 = (this_03->RootComponent).field0_0x0.DebugPtr;
              if (pUVar1 == (USceneComponent *)0x0) {
                pTVar10 = &UE::Math::TTransform<double>::Identity;
              }
              else {
                pTVar10 = &pUVar1->ComponentToWorld;
              }
              dVar3 = (pTVar10->Rotation).XY.m128d_f64[1];
              (this->DefenderOriginTransform).Rotation.XY.m128d_f64[0] =
                   (pTVar10->Rotation).XY.m128d_f64[0];
              (this->DefenderOriginTransform).Rotation.XY.m128d_f64[1] = dVar3;
              dVar3 = (pTVar10->Rotation).ZW.m128d_f64[1];
              (this->DefenderOriginTransform).Rotation.ZW.m128d_f64[0] =
                   (pTVar10->Rotation).ZW.m128d_f64[0];
              (this->DefenderOriginTransform).Rotation.ZW.m128d_f64[1] = dVar3;
              dVar3 = (pTVar10->Translation).XY.m128d_f64[1];
              (this->DefenderOriginTransform).Translation.XY.m128d_f64[0] =
                   (pTVar10->Translation).XY.m128d_f64[0];
              (this->DefenderOriginTransform).Translation.XY.m128d_f64[1] = dVar3;
              dVar3 = (pTVar10->Translation).ZW.m128d_f64[1];
              (this->DefenderOriginTransform).Translation.ZW.m128d_f64[0] =
                   (pTVar10->Translation).ZW.m128d_f64[0];
              (this->DefenderOriginTransform).Translation.ZW.m128d_f64[1] = dVar3;
              dVar3 = (pTVar10->Scale3D).XY.m128d_f64[1];
              (this->DefenderOriginTransform).Scale3D.XY.m128d_f64[0] =
                   (pTVar10->Scale3D).XY.m128d_f64[0];
              (this->DefenderOriginTransform).Scale3D.XY.m128d_f64[1] = dVar3;
              dVar3 = (pTVar10->Scale3D).ZW.m128d_f64[1];
              (this->DefenderOriginTransform).Scale3D.ZW.m128d_f64[0] =
                   (pTVar10->Scale3D).ZW.m128d_f64[0];
              (this->DefenderOriginTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
            }
            this->CurrentAbnormalType = this_01->AbnormalType;
            this->bAttachedSocket = true;
            pUVar9 = FWeakObjectPtr::Get(&local_188);
            pwVar17 = L"";
            pcVar2 = *(code **)(*(longlong *)pUVar9 + 0x520);
            if ((this_01->AtkAttachSocket).Data.ArrayNum == 0) {
              pwVar14 = L"";
            }
            else {
              pwVar14 = (wchar_t *)(this_01->AtkAttachSocket).Data.AllocatorInstance.Data;
            }
            pFVar11 = ::FName::FName(&local_1a0,pwVar14);
            (*pcVar2)(pUVar9,&local_c8,*pFVar11,0);
            local_170 = local_98;
            local_168.Z = local_b8;
            local_168.W = dStack_b0;
            local_168.X = local_c8;
            local_168.Y = dStack_c0;
            UE::Math::TQuat<double>::Rotator(&local_168,&local_140);
            pUVar1 = (this_03->RootComponent).field0_0x0.DebugPtr;
            if (pUVar1 != (USceneComponent *)0x0) {
              pTVar16 = &pUVar1->ComponentToWorld;
            }
            local_128.Rotation.XY.m128d_f64[0] = (pTVar16->Rotation).XY.m128d_f64[0];
            local_128.Rotation.XY.m128d_f64[1] = (pTVar16->Rotation).XY.m128d_f64[1];
            local_128.Rotation.ZW.m128d_f64[0] = (pTVar16->Rotation).ZW.m128d_f64[0];
            local_128.Rotation.ZW.m128d_f64[1] = (pTVar16->Rotation).ZW.m128d_f64[1];
            local_128.Translation.XY.m128d_f64[0] = (pTVar16->Translation).XY.m128d_f64[0];
            local_128.Translation.XY.m128d_f64[1] = (pTVar16->Translation).XY.m128d_f64[1];
            local_168.Z = (pTVar16->Translation).ZW.m128d_f64[0];
            local_128.Translation.ZW.m128d_f64[1] = (pTVar16->Translation).ZW.m128d_f64[1];
            dVar4 = local_128.Translation.XY.m128d_f64[0] - local_a8;
            local_128.Scale3D.XY.m128d_f64[0] = (pTVar16->Scale3D).XY.m128d_f64[0];
            local_128.Scale3D.XY.m128d_f64[1] = (pTVar16->Scale3D).XY.m128d_f64[1];
            uVar18 = (uint)__xmm_80000000000000008000000000000000;
            uVar19 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
            local_128.Scale3D.ZW.m128d_f64[0] = (pTVar16->Scale3D).ZW.m128d_f64[0];
            local_128.Scale3D.ZW.m128d_f64[1] = (pTVar16->Scale3D).ZW.m128d_f64[1];
            dVar3 = local_128.Translation.XY.m128d_f64[1] - dStack_a0;
            local_170 = (double)CONCAT44((uint)((ulonglong)(local_168.Z - local_170) >> 0x20) ^
                                         uVar19,SUB84(local_168.Z - local_170,0) ^ uVar18);
            if ((this_01->DefAttachSocket).Data.ArrayNum != 0) {
              pwVar17 = (wchar_t *)(this_01->DefAttachSocket).Data.AllocatorInstance.Data;
            }
            local_128.Translation.ZW.m128d_f64[0] = local_168.Z;
            pFVar11 = ::FName::FName(&local_1a0,pwVar17);
            AActor::AttachToActor
                      (this_03,pAVar8,&FAttachmentTransformRules::SnapToTargetNotIncludingScale,
                       *pFVar11);
            dVar3 = local_128.Translation.XY.m128d_f64[1] +
                    (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^ uVar19,
                                     SUB84(dVar3,0) ^ uVar18);
            local_128.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
            local_128.Translation.XY.m128d_f64[0] =
                 local_128.Translation.XY.m128d_f64[0] +
                 (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ uVar19,SUB84(dVar4,0) ^ uVar18)
            ;
            local_128.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
            dVar3 = local_128.Translation.ZW.m128d_f64[1] + 0.0;
            local_128.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
            local_128.Translation.ZW.m128d_f64[0] =
                 local_128.Translation.ZW.m128d_f64[0] + local_170;
            local_128.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
            pTVar12 = UE::Math::TRotator<double>::Quaternion(&local_140,&local_168);
            local_128.Rotation.ZW.m128d_f64[0] = pTVar12->Z;
            local_128.Rotation.ZW.m128d_f64[1] = pTVar12->W;
            local_128.Rotation.XY.m128d_f64[0] = pTVar12->X;
            local_128.Rotation.XY.m128d_f64[1] = pTVar12->Y;
            AActor::SetActorTransform(this_03,&local_128,false,(FHitResult *)0x0,None);
          }
        }
      }
    }
  }
  return;
}

// DetachSocket @ 14b7a4210

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_AbnormalStateAbility::DetachSocket(UDS_AbnormalStateAbility *this)

{
  AActor *pAVar1;
  
  if (this->bAttachedSocket != false) {
    this->bAttachedSocket = false;
    pAVar1 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    AActor::DetachFromActor(pAVar1,&FDetachmentTransformRules::KeepWorldTransform);
    pAVar1 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    AActor::SetActorTransform(pAVar1,&this->DefenderOriginTransform,false,(FHitResult *)0x0,None);
  }
  return;
}

// OnCanActivate @ 14b7b4fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_AbnormalStateAbility::OnCanActivate(UDS_AbnormalStateAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_AbnormalAbilityData,FWeakObjectPtr> TVar2;
  UDS_LogManager *pUVar3;
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
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->AbnormalAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = FWeakObjectPtr::IsValid(&(this->AbnormalAbilityData).WeakPtr);
    if (bVar1) {
      return true;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_AbnormalStateAbility::OnCanActivate",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x25,L"AbnormalAbilityData is invalid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b7b7680

void __thiscall
UDS_AbnormalStateAbility::OnDeactivateAbility(UDS_AbnormalStateAbility *this,bool *param_1)

{
  this->AbnormalElapsedTime = 0.0;
  this->CurrentAbnormalType = None;
  DetachSocket(this);
  return;
}

// OnPostActivateAbility @ 14b7ba210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDS_AbnormalStateAbility::OnPostActivateAbility(UDS_AbnormalStateAbility *this)

{
  bool bVar1;
  UDS_AbnormalAbilityData *this_00;
  FDS_AbnormalInfo *pFVar2;
  UDS_MovementCore *pUVar3;
  TMatrix<double> *this_01;
  UObject *pUVar4;
  undefined1 auStack_128 [32];
  FWeakObjectPtr local_108;
  FWeakObjectPtr local_100;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 local_c8;
  TRotator<double> local_b0;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  bVar1 = FWeakObjectPtr::IsValid(&(this->AbnormalAbilityData).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
    pFVar2 = UDS_AbnormalAbilityData::GetHighestAbnormalInfo(this_00,StateControl);
    if (pFVar2->IsAbnormalRotation == true) {
      UDS_MovementCore::GetMovementCore((ulong64)&local_108);
      bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_108,(void *)0x0);
      if (!bVar1) {
        local_100 = (FWeakObjectPtr)this->_padding_;
        pUVar3 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_100);
        UDS_MovementCore::GetActorFootLocation(pUVar3,(TVector<double> *)&local_e0._s_0);
        pUVar3 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_108);
        UDS_MovementCore::GetActorFootLocation(pUVar3,(TVector<double> *)&local_f8._s_0);
        local_c8._s_0.X = local_f8._s_0.X - local_e0._s_0.X;
        local_c8._s_0.Y = local_f8._s_0.Y - local_e0._s_0.Y;
        local_c8._s_0.Z = local_f8._s_0.Z - local_e0._s_0.Z;
        this_01 = UE::Math::TRotationMatrix<double>::MakeFromX
                            (&local_98,(TVector<double> *)&local_c8._s_0);
        UE::Math::TMatrix<double>::Rotator(this_01,&local_b0);
        local_b0.Roll = 0.0;
        local_b0.Pitch = 0.0;
        pUVar4 = FWeakObjectPtr::Get(&local_100);
        (**(code **)(*(longlong *)pUVar4 + 0x370))(pUVar4,&local_b0);
      }
    }
  }
  return;
}

// OnTickComponent @ 14b7bcde0

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
UDS_AbnormalStateAbility::OnTickComponent(UDS_AbnormalStateAbility *this,float param_1)

{
  float fVar1;
  bool bVar2;
  UDS_AbnormalAbilityData *pUVar3;
  FDS_AbnormalInfo *pFVar4;
  FDS_AbnormalInfo *pFVar5;
  EDS_AbilityDeactivateType local_res8 [8];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  bVar2 = FWeakObjectPtr::IsValid(&(this->AbnormalAbilityData).WeakPtr);
  if (!bVar2) {
    local_res8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
    return;
  }
  pUVar3 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
  pFVar4 = UDS_AbnormalAbilityData::GetHighestAbnormalInfo(pUVar3,StateControl);
  fVar1 = this->AbnormalElapsedTime;
  if (fVar1 < pFVar4->AbnormalWaitTime || fVar1 == pFVar4->AbnormalWaitTime) {
    this->AbnormalElapsedTime = fVar1 + param_1;
    AttachSocket(this);
    pUVar3 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&(this->AbnormalAbilityData).WeakPtr);
    pFVar5 = UDS_AbnormalAbilityData::GetHighestAbnormalInfo(pUVar3,None);
    if (pFVar5->ActionGrade <= pFVar4->ActionGrade) {
      pFVar5 = pFVar4;
    }
    if ((this->bAttachedSocket == true) && (this->CurrentAbnormalType != pFVar5->AbnormalType)) {
      this->AbnormalElapsedTime = 0.0;
    }
  }
  else {
    DetachSocket(this);
  }
  return;
}

