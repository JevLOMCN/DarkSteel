// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147496b30

UClass * __cdecl UAnimNotify_PlaySound::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_PlaySound.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotify_PlaySound",
               &Z_Registration_Info_UClass_UAnimNotify_PlaySound.InnerSingleton,
               StaticRegisterNativesUAnimNotify_PlaySound,0x58,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAnimNotify_PlaySound>,
               InternalVTableHelperCtorCaller<UAnimNotify_PlaySound>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PlaySound.InnerSingleton;
}

// UAnimNotify_PlaySound @ 1474b4110

UAnimNotify_PlaySound * __thiscall
UAnimNotify_PlaySound::UAnimNotify_PlaySound(UAnimNotify_PlaySound *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimNotify_PlaySound__6B_;
  (this->Sound).field0_0x0.DebugPtr = (USoundBase *)0x0;
  (this->AttachName).ComparisonIndex = 0;
  (this->AttachName).Number = 0;
  return this;
}

// UAnimNotify_PlaySound @ 1474b4150

UAnimNotify_PlaySound * __thiscall
UAnimNotify_PlaySound::UAnimNotify_PlaySound(UAnimNotify_PlaySound *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar1);
  this->VolumeMultiplier = 1.0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UAnimNotify_PlaySound__6B_;
  *(undefined1 *)&this->_padding_ = 0;
  (this->Sound).field0_0x0.DebugPtr = (USoundBase *)0x0;
  (this->AttachName).ComparisonIndex = 0;
  (this->AttachName).Number = 0;
  this->PitchMultiplier = 1.0;
  return this;
}

// ~UAnimNotify_PlaySound @ 1474b56c0

void __thiscall UAnimNotify_PlaySound::~UAnimNotify_PlaySound(UAnimNotify_PlaySound *this)

{
  this->_padding_ = (longlong)&___7UAnimNotify__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetNotifyName_Implementation @ 1474dc420

FString * __thiscall
UAnimNotify_PlaySound::GetNotifyName_Implementation
          (UAnimNotify_PlaySound *this,FString *__return_storage_ptr__)

{
  USoundBase *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = (this->Sound).field0_0x0.DebugPtr;
  if (pUVar1 != (USoundBase *)0x0) {
    local_res8[0] = (FName)pUVar1->_padding_;
    ::FName::ToString(local_res8,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  UAnimNotify::GetNotifyName_Implementation((UAnimNotify *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1474dd610

UClass * __cdecl UAnimNotify_PlaySound::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_PlaySound.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotify_PlaySound",
               &Z_Registration_Info_UClass_UAnimNotify_PlaySound.InnerSingleton,
               StaticRegisterNativesUAnimNotify_PlaySound,0x58,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAnimNotify_PlaySound>,
               InternalVTableHelperCtorCaller<UAnimNotify_PlaySound>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PlaySound.InnerSingleton;
}

// Notify @ 1474edaa0

void __thiscall
UAnimNotify_PlaySound::Notify
          (UAnimNotify_PlaySound *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2)

{
  return;
}

// Notify @ 1474edab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAnimNotify_PlaySound::Notify
          (UAnimNotify_PlaySound *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2,
          FAnimNotifyEventReference *param_3)

{
  float fVar1;
  float fVar2;
  USoundBase *pUVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  UWorld *pUVar7;
  FName local_res8;
  TVector<double>_u_0 local_98;
  TRotator<double> local_78 [2];
  double local_48;
  
  (**(code **)(this->_padding_ + 0x2c8))();
  pUVar3 = (this->Sound).field0_0x0.DebugPtr;
  if ((pUVar3 != (USoundBase *)0x0) && (param_1 != (USkeletalMeshComponent *)0x0)) {
    cVar6 = (**(code **)(pUVar3->_padding_ + 0x318))();
    if (cVar6 == '\0') {
      if (2 < (byte)LogAudio._0_1_) {
        pUVar3 = (this->Sound).field0_0x0.DebugPtr;
        if (pUVar3 == (USoundBase *)0x0) {
          ::FString::FString((FString *)local_78,L"None");
        }
        else {
          local_res8 = (FName)pUVar3->_padding_;
          ::FName::ToString(&local_res8,(FString *)local_78);
        }
        if (param_2 == (UAnimSequenceBase *)0x0) {
          ::FString::FString((FString *)&local_98._s_0,L"None");
        }
        else {
          local_res8 = (FName)param_2->_padding_;
          ::FName::ToString(&local_res8,(FString *)&local_98._s_0);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        if ((void *)local_98._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_98._s_0.X);
        }
        if ((void *)local_78[0].Pitch != (void *)0x0) {
          FMemory::Free((void *)local_78[0].Pitch);
        }
      }
    }
    else if (this->bFollow == 0) {
      pUVar7 = (UWorld *)param_1->_padding_;
      local_78[0].Roll = (double)param_1->_padding_;
      fVar1 = this->PitchMultiplier;
      fVar2 = this->VolumeMultiplier;
      pUVar3 = (this->Sound).field0_0x0.DebugPtr;
      dVar4 = (double)param_1->_padding_;
      dVar5 = (double)param_1->_padding_;
      if (pUVar7 == (UWorld *)0x0) {
        pUVar7 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
      }
      local_98._s_0.Z = local_78[0].Roll;
      local_48 = local_78[0].Roll;
      local_78[0].Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      local_78[0].Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_78[0].Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      local_98._s_0.X = dVar4;
      local_98._s_0.Y = dVar5;
      UGameplayStatics::PlaySoundAtLocation
                ((UObject *)pUVar7,pUVar3,(TVector<double> *)&local_98._s_0,local_78,fVar2,fVar1,0.0
                 ,(USoundAttenuation *)0x0,(USoundConcurrency *)0x0,(AActor *)0x0,
                 (UInitialActiveSoundParams *)0x0);
    }
    else {
      local_78[0].Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      local_78[0].Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_78[0].Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      local_98._s_0.Z = 0.0;
      local_98._s_0.X = 0.0;
      local_98._s_0.Y = 0.0;
      UGameplayStatics::SpawnSoundAttached
                ((this->Sound).field0_0x0.DebugPtr,(USceneComponent *)param_1,this->AttachName,
                 (TVector<double> *)&local_98._s_0,local_78,SnapToTarget,false,
                 this->VolumeMultiplier,this->PitchMultiplier,0.0,(USoundAttenuation *)0x0,
                 (USoundConcurrency *)0x0,true);
    }
  }
  return;
}

// StaticRegisterNativesUAnimNotify_PlaySound @ 1474fae80

void __cdecl UAnimNotify_PlaySound::StaticRegisterNativesUAnimNotify_PlaySound(void)

{
  return;
}

