// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b550410

UClass * __cdecl UDS_OutGameCharacterAnimBP::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_OutGameCharacterAnimBP.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_OutGameCharacterAnimBP",
               &Z_Registration_Info_UClass_UDS_OutGameCharacterAnimBP.InnerSingleton,
               StaticRegisterNativesUDS_OutGameCharacterAnimBP,0x4a0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_OutGameCharacterAnimBP>,
               InternalVTableHelperCtorCaller<UDS_OutGameCharacterAnimBP>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_OutGameCharacterAnimBP.InnerSingleton;
}

// UDS_OutGameCharacterAnimBP @ 14b5519f0

UDS_OutGameCharacterAnimBP * __thiscall
UDS_OutGameCharacterAnimBP::UDS_OutGameCharacterAnimBP
          (UDS_OutGameCharacterAnimBP *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->bSelectedCharacter = false;
  this->_padding_ = (longlong)&___7UDS_OutGameCharacterAnimBP__6B_;
  this->StdAnimDelayTimeMin = 5.0;
  this->StdAnimDelayTimeMax = 10.0;
  this->StdAnimMaxIndex = 1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->StdAnimIndex = 0;
  (this->LookAtLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->LookAtLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->LookAtLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetDir).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetDir).field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetDir).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CommonSetting).WeakPtr = (FWeakObjectPtr)0x0;
  this->LookAtAlpha = 0.0;
  this->bEnableLookAt = false;
  this->InitialYaw = 0.0;
  this->StdAnimDelayTime = 0.0;
  this->StdAnimElapsedTime = 0.0;
  this->bIsZoomIn = false;
  this->bIsZoomInOutProcess = false;
  this->LookAtAngleRange = 45.0;
  this->LookAtOffset = 0.0;
  this->LookAtAlphaDecaySpeed = 3.0;
  this->TargetFollowSpeed = 8.0;
  this->bIsLookAtOnOff = true;
  return this;
}

// UDS_OutGameCharacterAnimBP @ 14b551ad0

UDS_OutGameCharacterAnimBP * __thiscall
UDS_OutGameCharacterAnimBP::UDS_OutGameCharacterAnimBP
          (UDS_OutGameCharacterAnimBP *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->bSelectedCharacter = false;
  this->_padding_ = (longlong)&___7UDS_OutGameCharacterAnimBP__6B_;
  this->StdAnimDelayTimeMin = 5.0;
  this->StdAnimDelayTimeMax = 10.0;
  this->StdAnimMaxIndex = 1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->StdAnimIndex = 0;
  (this->LookAtLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->LookAtLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->LookAtLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetDir).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetDir).field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetDir).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CommonSetting).WeakPtr = (FWeakObjectPtr)0x0;
  this->LookAtAlpha = 0.0;
  this->bEnableLookAt = false;
  this->InitialYaw = 0.0;
  this->StdAnimDelayTime = 0.0;
  this->StdAnimElapsedTime = 0.0;
  this->bIsZoomIn = false;
  this->bIsZoomInOutProcess = false;
  this->LookAtAngleRange = 45.0;
  this->LookAtOffset = 0.0;
  this->LookAtAlphaDecaySpeed = 3.0;
  this->TargetFollowSpeed = 8.0;
  this->bIsLookAtOnOff = true;
  return this;
}

// ~UDS_OutGameCharacterAnimBP @ 14b551d30

void __thiscall
UDS_OutGameCharacterAnimBP::~UDS_OutGameCharacterAnimBP(UDS_OutGameCharacterAnimBP *this)

{
  this->_padding_ = (longlong)&___7UDS_OutGameCharacterAnimBP__6B_;
  UAnimInstance::~UAnimInstance((UAnimInstance *)this);
  return;
}

// GetPrivateStaticClass @ 14b552270

UClass * __cdecl UDS_OutGameCharacterAnimBP::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_OutGameCharacterAnimBP.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_OutGameCharacterAnimBP",
               &Z_Registration_Info_UClass_UDS_OutGameCharacterAnimBP.InnerSingleton,
               StaticRegisterNativesUDS_OutGameCharacterAnimBP,0x4a0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_OutGameCharacterAnimBP>,
               InternalVTableHelperCtorCaller<UDS_OutGameCharacterAnimBP>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_OutGameCharacterAnimBP.InnerSingleton;
}

// StaticRegisterNativesUDS_OutGameCharacterAnimBP @ 14b553370

void __cdecl UDS_OutGameCharacterAnimBP::StaticRegisterNativesUDS_OutGameCharacterAnimBP(void)

{
  return;
}

// BeginDestroy @ 14b869870

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_OutGameCharacterAnimBP::BeginDestroy(UDS_OutGameCharacterAnimBP *this)

{
  UDS_ViewerManager *pUVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  UAnimInstance::BeginDestroy((UAnimInstance *)this);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->CommonSetting).WeakPtr = local_res8;
  pUVar1 = UDS_ViewerManager::GetInst();
  if (pUVar1 != (UDS_ViewerManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->SelectViewerCharacterDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->ChangedZoomInOutStateDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->RotateViewerCharacterDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->ChangedEnableLookAtDelegate,this);
  }
  return;
}

// NativeBeginPlay @ 14b87fd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_OutGameCharacterAnimBP::NativeBeginPlay(UDS_OutGameCharacterAnimBP *this)

{
  float fVar1;
  float fVar2;
  USceneComponent *this_00;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  AActor *this_01;
  TWeakObjectPtr<UDS_CommonSetting,FWeakObjectPtr> TVar7;
  UDS_LogManager *pUVar8;
  TVector<double>_u_0 *pTVar9;
  TRotator<double> *pTVar10;
  UDS_ViewerManager *this_02;
  USkinnedMeshComponent *this_03;
  FName *pFVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStackY_268 [32];
  UClass *local_238;
  FName local_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  TVector<double>_u_0 local_1e8;
  double local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  TVector<double> local_1a0;
  TVector<double> local_188;
  TRotator<double> local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  UAnimInstance::NativeBeginPlay((UAnimInstance *)this);
  this_01 = UAnimInstance::GetOwningActor((UAnimInstance *)this);
  if (this_01 == (AActor *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4624414231318495249>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\DS_OutGameCharacterAnimBP.cpp"
                       ,0x11,"ownerActor");
    if (bVar5) {
code_r0x00014b88008c:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    bVar5 = TWeakObjectPtr<UDS_CommonSetting,FWeakObjectPtr>::UEOpEquals
                      (&this->CommonSetting,(void *)0x0);
    if (bVar5) {
      TVar7 = UDS_CommonSetting::GetInst();
                    /* WARNING: Load size is inaccurate */
      (this->CommonSetting).WeakPtr = *TVar7.WeakPtr;
      bVar5 = TWeakObjectPtr<UDS_CommonSetting,FWeakObjectPtr>::UEOpEquals
                        (&this->CommonSetting,(void *)0x0);
      if ((bVar5) && (pUVar8 = UDS_LogManager::GetInst(), pUVar8 != (UDS_LogManager *)0x0)) {
        pUVar8 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_OutGameCharacterAnimBP::NativeBeginPlay",0x2b,Yes);
        UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,0x1b,L"CommonSetting is nullptr.");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    this_00 = (this_01->RootComponent).field0_0x0.DebugPtr;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (this_00 != (USceneComponent *)0x0) {
      local_1b8 = *(undefined4 *)(this_00->ComponentToWorld).Translation.XY.m128d_f64;
      uStack_1b4 = *(undefined4 *)
                    ((longlong)(this_00->ComponentToWorld).Translation.XY.m128d_f64 + 4);
      uStack_1b0 = *(undefined4 *)((this_00->ComponentToWorld).Translation.XY.m128d_f64 + 1);
      uStack_1ac = *(undefined4 *)
                    ((longlong)(this_00->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
      local_1a8 = (this_00->ComponentToWorld).Translation.ZW.m128d_f64[0];
      uVar12 = local_1b8;
      uVar13 = uStack_1b4;
      uVar14 = uStack_1b0;
      uVar15 = uStack_1ac;
      local_1c0 = local_1a8;
    }
    if (this_00 == (USceneComponent *)0x0) {
      pTVar9 = &local_1e8;
      local_1e8._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
      local_1e8._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
      local_1e8._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
    }
    else {
      pTVar9 = &USceneComponent::GetForwardVector(this_00,&local_188)->field0_0x0;
    }
    dVar4 = __real_4059000000000000;
    local_228 = (((TVector<double>_u_0 *)&(pTVar9->_s_0).X)->_s_0).X;
    dStack_220 = (pTVar9->_s_0).Y;
    local_218 = (pTVar9->_s_0).Z;
    (this->LookAtLocation).field0_0x0._s_0.X =
         local_228 * __real_4059000000000000 + (double)CONCAT44(uVar13,uVar12);
    (this->LookAtLocation).field0_0x0._s_0.Y = dStack_220 * dVar4 + (double)CONCAT44(uVar15,uVar14);
    (this->LookAtLocation).field0_0x0._s_0.Z = local_218 * dVar4 + local_1c0;
    pTVar10 = AActor::GetActorRotation(this_01,&local_170);
    fVar1 = this->StdAnimDelayTimeMax;
    fVar2 = this->StdAnimDelayTimeMin;
    this->InitialYaw = (float)pTVar10->Yaw;
    uVar6 = rand();
    this->StdAnimDelayTime = (float)(uVar6 & 0x7fff) * (fVar1 - fVar2) * __real_38000100 + fVar2;
    this_02 = UDS_ViewerManager::GetInst();
    if (this_02 != (UDS_ViewerManager *)0x0) {
      TMulticastDelegateRegistration<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_OutGameCharacterAnimBP>
                ((TMulticastDelegateRegistration<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>
                  *)&this_02->SelectViewerCharacterDelegate,(UDS_OutGameCharacterAnimBP *)local_208,
                 (pmf_5605ba4d)this);
      TMulticastDelegateRegistration<void___cdecl(bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_OutGameCharacterAnimBP>
                ((TMulticastDelegateRegistration<void___cdecl(bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
                  *)&this_02->ChangedZoomInOutStateDelegate,
                 (UDS_OutGameCharacterAnimBP *)(local_208 + 8),(pmf_f5c6ad35)this);
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_OutGameCharacterAnimBP>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &this_02->RotateViewerCharacterDelegate,(UDS_OutGameCharacterAnimBP *)local_1f8,
                 (pmf_5a495b1f)this);
      TMulticastDelegateRegistration<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_OutGameCharacterAnimBP>
                ((TMulticastDelegateRegistration<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>
                  *)&this_02->ChangedEnableLookAtDelegate,
                 (UDS_OutGameCharacterAnimBP *)(local_1f8 + 8),(pmf_5605ba4d)this);
      bVar5 = UDS_ViewerManager::GetEnableLookAt(this_02);
      this->bIsLookAtOnOff = bVar5;
    }
    pcVar3 = *(code **)(this_01->_padding_ + 0x738);
    local_238 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_238 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_238);
    }
    this_03 = (USkinnedMeshComponent *)(*pcVar3)(this_01,&local_238);
    if (this_03 == (USkinnedMeshComponent *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4624414231318495280>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\DS_OutGameCharacterAnimBP.cpp"
                         ,0x30,"skeletalMeshComponent != nullptr");
      if (bVar5) goto code_r0x00014b88008c;
    }
    else {
      pFVar11 = ::FName::FName(&local_230,L"head");
      USkinnedMeshComponent::GetBoneLocation(this_03,&local_1a0,*pFVar11,ComponentSpace);
      (this->LookAtLocation).field0_0x0._s_0.Z =
           (double)this->LookAtOffset + local_1a0.field0_0x0._s_0.Z +
           (this->LookAtLocation).field0_0x0._s_0.Z;
    }
  }
  return;
}

// NativeUpdateAnimation @ 14b880570

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
UDS_OutGameCharacterAnimBP::NativeUpdateAnimation(UDS_OutGameCharacterAnimBP *this,float param_1)

{
  TVector<double> *pTVar1;
  float fVar2;
  double dVar3;
  USceneComponent *this_00;
  double dVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  AActor *this_01;
  TVector<double>_u_0 *pTVar8;
  TRotator<double> *pTVar9;
  TVector<double> *pTVar10;
  UObject *pUVar11;
  float fVar12;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50 [3];
  
  if ((this->bIsZoomIn != true) && (this->bIsZoomInOutProcess != true)) {
    fVar12 = param_1 + this->StdAnimElapsedTime;
    this->StdAnimElapsedTime = fVar12;
    if (fVar12 < this->StdAnimDelayTime) {
      this->StdAnimIndex = -1;
    }
    else {
      fVar12 = this->StdAnimDelayTimeMax;
      fVar2 = this->StdAnimDelayTimeMin;
      this->StdAnimElapsedTime = 0.0;
      uVar6 = rand();
      this->StdAnimDelayTime = (float)(uVar6 & 0x7fff) * (fVar12 - fVar2) * __real_38000100 + fVar2;
      iVar7 = FMath::RandRange(1,this->StdAnimMaxIndex);
      this->StdAnimIndex = iVar7;
    }
  }
  this_01 = UAnimInstance::GetOwningActor((UAnimInstance *)this);
  if ((this_01 != (AActor *)0x0) &&
     (bVar5 = TWeakObjectPtr<UDS_CommonSetting,FWeakObjectPtr>::UEOpEquals
                        (&this->CommonSetting,(void *)0x0), !bVar5)) {
    this_00 = (this_01->RootComponent).field0_0x0.DebugPtr;
    if (this_00 == (USceneComponent *)0x0) {
      pTVar8 = local_50;
      local_50[0]._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
      local_50[0]._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
      local_50[0]._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
    }
    else {
      pTVar8 = &USceneComponent::GetForwardVector(this_00,(TVector<double> *)&local_50[0]._s_0)->
                field0_0x0;
    }
    local_68._s_0.X = (((TVector<double>_u_0 *)&(pTVar8->_s_0).X)->_s_0).X;
    local_68._s_0.Y = (pTVar8->_s_0).Y;
    local_68._s_0.Z = (pTVar8->_s_0).Z;
    pTVar9 = AActor::GetActorRotation(this_01,(TRotator<double> *)&local_50[0]._s_0);
    fVar12 = this->InitialYaw;
    pTVar1 = &this->TargetDir;
    dVar3 = pTVar9->Yaw;
    pTVar10 = FMath::VInterpTo((TVector<double> *)&local_50[0]._s_0,pTVar1,
                               (TVector<double> *)&local_68._s_0,param_1,this->TargetFollowSpeed);
    bVar5 = this->bIsLookAtOnOff;
    dVar4 = (pTVar10->field0_0x0)._s_0.Y;
    (pTVar1->field0_0x0)._s_0.X = (pTVar10->field0_0x0)._s_0.X;
    (this->TargetDir).field0_0x0._s_0.Y = dVar4;
    (this->TargetDir).field0_0x0._s_0.Z = (pTVar10->field0_0x0)._s_0.Z;
    if ((((bVar5 != true) || (this->bEnableLookAt != true)) ||
        (local_68._s_0.Y * (this->TargetDir).field0_0x0._s_0.Y +
         local_68._s_0.X * (pTVar1->field0_0x0)._s_0.X +
         local_68._s_0.Z * (this->TargetDir).field0_0x0._s_0.Z < ___real_3fee666660000000)) ||
       (this->LookAtAngleRange <=
        (float)((uint)(float)(dVar3 - (double)fVar12) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      pUVar11 = FWeakObjectPtr::Get(&(this->CommonSetting).WeakPtr);
      fVar12 = this->LookAtAlpha - param_1 * *(float *)(pUVar11 + 5) * this->LookAtAlphaDecaySpeed;
    }
    else {
      pUVar11 = FWeakObjectPtr::Get(&(this->CommonSetting).WeakPtr);
      fVar12 = param_1 * *(float *)&pUVar11[4].field_0x24 + this->LookAtAlpha;
    }
    this->LookAtAlpha = fVar12;
    if (__real_3f800000 <= fVar12) {
      fVar12 = __real_3f800000;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    this->LookAtAlpha = fVar12;
  }
  return;
}

// OnChangedEnableLookAt @ 14b886730

void __thiscall
UDS_OutGameCharacterAnimBP::OnChangedEnableLookAt(UDS_OutGameCharacterAnimBP *this,bool *param_1)

{
  this->bIsLookAtOnOff = *param_1;
  return;
}

// OnChangedZoomInOutState @ 14b8868e0

void __thiscall
UDS_OutGameCharacterAnimBP::OnChangedZoomInOutState
          (UDS_OutGameCharacterAnimBP *this,bool *param_1,bool *param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = *param_1;
  this->bIsZoomIn = bVar1;
  bVar2 = *param_2;
  this->bIsZoomInOutProcess = bVar2;
  if ((bVar1 == true) || (bVar2 == true)) {
    this->StdAnimElapsedTime = 0.0;
    this->StdAnimIndex = -1;
  }
  return;
}

// OnSelectViewerCharacter @ 14b8920d0

void __thiscall
UDS_OutGameCharacterAnimBP::OnSelectViewerCharacter(UDS_OutGameCharacterAnimBP *this,bool *param_1)

{
  this->bSelectedCharacter = *param_1;
  return;
}

// ResetStdAnimElapsedTime @ 14b898620

void __thiscall
UDS_OutGameCharacterAnimBP::ResetStdAnimElapsedTime(UDS_OutGameCharacterAnimBP *this)

{
  this->StdAnimElapsedTime = 0.0;
  this->StdAnimIndex = -1;
  return;
}

// UpdateLookAt @ 14b8a3190

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
UDS_OutGameCharacterAnimBP::UpdateLookAt(UDS_OutGameCharacterAnimBP *this,float param_1)

{
  TVector<double> *pTVar1;
  double dVar2;
  USceneComponent *this_00;
  double dVar3;
  bool bVar4;
  AActor *this_01;
  TVector<double>_u_0 *pTVar5;
  TRotator<double> *pTVar6;
  TVector<double> *pTVar7;
  UObject *pUVar8;
  float fVar9;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40 [2];
  
  this_01 = UAnimInstance::GetOwningActor((UAnimInstance *)this);
  if ((this_01 != (AActor *)0x0) &&
     (bVar4 = TWeakObjectPtr<UDS_CommonSetting,FWeakObjectPtr>::UEOpEquals
                        (&this->CommonSetting,(void *)0x0), !bVar4)) {
    this_00 = (this_01->RootComponent).field0_0x0.DebugPtr;
    if (this_00 == (USceneComponent *)0x0) {
      pTVar5 = local_40;
      local_40[0]._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
      local_40[0]._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
      local_40[0]._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
    }
    else {
      pTVar5 = &USceneComponent::GetForwardVector(this_00,(TVector<double> *)&local_40[0]._s_0)->
                field0_0x0;
    }
    local_58._s_0.X = (((TVector<double>_u_0 *)&(pTVar5->_s_0).X)->_s_0).X;
    local_58._s_0.Y = (pTVar5->_s_0).Y;
    local_58._s_0.Z = (pTVar5->_s_0).Z;
    pTVar6 = AActor::GetActorRotation(this_01,(TRotator<double> *)&local_40[0]._s_0);
    fVar9 = this->InitialYaw;
    pTVar1 = &this->TargetDir;
    dVar2 = pTVar6->Yaw;
    pTVar7 = FMath::VInterpTo((TVector<double> *)&local_40[0]._s_0,pTVar1,
                              (TVector<double> *)&local_58._s_0,param_1,this->TargetFollowSpeed);
    bVar4 = this->bIsLookAtOnOff;
    dVar3 = (pTVar7->field0_0x0)._s_0.Y;
    (pTVar1->field0_0x0)._s_0.X = (pTVar7->field0_0x0)._s_0.X;
    (this->TargetDir).field0_0x0._s_0.Y = dVar3;
    (this->TargetDir).field0_0x0._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
    if ((((bVar4 != true) || (this->bEnableLookAt != true)) ||
        (local_58._s_0.Y * (this->TargetDir).field0_0x0._s_0.Y +
         local_58._s_0.X * (pTVar1->field0_0x0)._s_0.X +
         local_58._s_0.Z * (this->TargetDir).field0_0x0._s_0.Z < ___real_3fee666660000000)) ||
       (this->LookAtAngleRange <=
        (float)((uint)(float)(dVar2 - (double)fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      pUVar8 = FWeakObjectPtr::Get(&(this->CommonSetting).WeakPtr);
      fVar9 = this->LookAtAlpha - param_1 * *(float *)(pUVar8 + 5) * this->LookAtAlphaDecaySpeed;
    }
    else {
      pUVar8 = FWeakObjectPtr::Get(&(this->CommonSetting).WeakPtr);
      fVar9 = param_1 * *(float *)&pUVar8[4].field_0x24 + this->LookAtAlpha;
    }
    this->LookAtAlpha = fVar9;
    if (__real_3f800000 <= fVar9) {
      fVar9 = __real_3f800000;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    this->LookAtAlpha = fVar9;
  }
  return;
}

// UpdateStdAnim @ 14b8a3960

void __thiscall
UDS_OutGameCharacterAnimBP::UpdateStdAnim(UDS_OutGameCharacterAnimBP *this,float param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  
  if ((this->bIsZoomIn != true) && (this->bIsZoomInOutProcess != true)) {
    fVar4 = param_1 + this->StdAnimElapsedTime;
    this->StdAnimElapsedTime = fVar4;
    if (this->StdAnimDelayTime <= fVar4) {
      fVar4 = this->StdAnimDelayTimeMax;
      fVar1 = this->StdAnimDelayTimeMin;
      this->StdAnimElapsedTime = 0.0;
      uVar2 = rand();
      this->StdAnimDelayTime = (float)(uVar2 & 0x7fff) * (fVar4 - fVar1) * __real_38000100 + fVar1;
      iVar3 = FMath::RandRange(1,this->StdAnimMaxIndex);
      this->StdAnimIndex = iVar3;
      return;
    }
    this->StdAnimIndex = -1;
  }
  return;
}

