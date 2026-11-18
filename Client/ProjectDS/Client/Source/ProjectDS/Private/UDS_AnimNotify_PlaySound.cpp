// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4164d0

UClass * __cdecl UDS_AnimNotify_PlaySound::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_PlaySound.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_PlaySound",
               &Z_Registration_Info_UClass_UDS_AnimNotify_PlaySound.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_PlaySound,0x68,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UDS_AnimNotify_PlaySound>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_PlaySound>,local_res8,
               UAnimNotify_PlaySound::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_PlaySound.InnerSingleton;
}

// UDS_AnimNotify_PlaySound @ 14b41b660

UDS_AnimNotify_PlaySound * __thiscall
UDS_AnimNotify_PlaySound::UDS_AnimNotify_PlaySound
          (UDS_AnimNotify_PlaySound *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UAnimNotify_PlaySound::UAnimNotify_PlaySound((UAnimNotify_PlaySound *)this,param_1);
  this->bIsFollowOwnerActorVisiblity = true;
  this->_padding_ = (longlong)&___7UDS_AnimNotify_PlaySound__6B_;
  (this->AudioComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->AudioComponent).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_AnimNotify_PlaySound @ 14b41b6b0

UDS_AnimNotify_PlaySound * __thiscall
UDS_AnimNotify_PlaySound::UDS_AnimNotify_PlaySound(UDS_AnimNotify_PlaySound *this)

{
  undefined8 local_res8 [4];
  
  UAnimNotify_PlaySound::UAnimNotify_PlaySound((UAnimNotify_PlaySound *)this);
  this->bIsFollowOwnerActorVisiblity = true;
  this->_padding_ = (longlong)&___7UDS_AnimNotify_PlaySound__6B_;
  (this->AudioComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->AudioComponent).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_AnimNotify_PlaySound @ 14b41bcb0

void __thiscall UDS_AnimNotify_PlaySound::~UDS_AnimNotify_PlaySound(UDS_AnimNotify_PlaySound *this)

{
  this->_padding_ = (longlong)&___7UDS_AnimNotify_PlaySound__6B_;
  UAnimNotify_PlaySound::~UAnimNotify_PlaySound((UAnimNotify_PlaySound *)this);
  return;
}

// GetPrivateStaticClass @ 14b41df10

UClass * __cdecl UDS_AnimNotify_PlaySound::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_PlaySound.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_PlaySound",
               &Z_Registration_Info_UClass_UDS_AnimNotify_PlaySound.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_PlaySound,0x68,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UDS_AnimNotify_PlaySound>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_PlaySound>,local_res8,
               UAnimNotify_PlaySound::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_PlaySound.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimNotify_PlaySound @ 14b41e2d0

void __cdecl UDS_AnimNotify_PlaySound::StaticRegisterNativesUDS_AnimNotify_PlaySound(void)

{
  return;
}

// Notify @ 14b8d3030

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
UDS_AnimNotify_PlaySound::Notify
          (UDS_AnimNotify_PlaySound *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2
          ,FAnimNotifyEventReference *param_3)

{
  float fVar1;
  float fVar2;
  USoundBase *pUVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  UWorld *pUVar9;
  FName local_res8;
  TVector<double>_u_0 local_b8;
  TRotator<double> local_98 [2];
  double local_68;
  
  UAnimNotify_PlaySound::Notify((UAnimNotify_PlaySound *)this,param_1,param_2);
  if (((longlong *)this->_padding_ != (longlong *)0x0) && (param_1 != (USkeletalMeshComponent *)0x0)
     ) {
    cVar8 = (**(code **)(*(longlong *)this->_padding_ + 0x318))();
    dVar7 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_98[0].Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    dVar6 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    if (cVar8 == '\0') {
      if (2 < (byte)LogAudio._0_1_) {
        if (this->_padding_ == 0) {
          ::FString::FString((FString *)local_98,L"None");
        }
        else {
          local_res8 = *(FName *)(this->_padding_ + 0x18);
          ::FName::ToString(&local_res8,(FString *)local_98);
        }
        if (param_2 == (UAnimSequenceBase *)0x0) {
          ::FString::FString((FString *)&local_b8._s_0,L"None");
        }
        else {
          local_res8 = (FName)param_2->_padding_;
          ::FName::ToString(&local_res8,(FString *)&local_b8._s_0);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        if ((void *)local_b8._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_b8._s_0.X);
        }
        if ((void *)local_98[0].Pitch != (void *)0x0) {
          FMemory::Free((void *)local_98[0].Pitch);
        }
      }
    }
    else {
      fVar1 = *(float *)((longlong)&this->_padding_ + 4);
      fVar2 = *(float *)&this->_padding_;
      if ((this->_padding_ & 1) == 0) {
        local_98[0].Roll = (double)param_1->_padding_;
        pUVar9 = (UWorld *)param_1->_padding_;
        pUVar3 = (USoundBase *)this->_padding_;
        dVar4 = (double)param_1->_padding_;
        dVar5 = (double)param_1->_padding_;
        local_68 = local_98[0].Roll;
        if (pUVar9 == (UWorld *)0x0) {
          pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
        }
        local_b8._s_0.Z = local_68;
        local_98[0].Pitch = dVar6;
        local_98[0].Roll = dVar7;
        local_b8._s_0.X = dVar4;
        local_b8._s_0.Y = dVar5;
        local_res8 = (FName)UGameplayStatics::SpawnSoundAtLocation
                                      ((UObject *)pUVar9,pUVar3,(TVector<double> *)&local_b8._s_0,
                                       local_98,fVar2,fVar1,0.0,(USoundAttenuation *)0x0,
                                       (USoundConcurrency *)0x0,true);
      }
      else {
        local_98[0].Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        local_98[0].Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
        local_b8._s_0.Z = 0.0;
        local_b8._s_0.X = 0.0;
        local_b8._s_0.Y = 0.0;
        local_res8 = (FName)UGameplayStatics::SpawnSoundAttached
                                      ((USoundBase *)this->_padding_,(USceneComponent *)param_1,
                                       *(FName *)((longlong)&this->_padding_ + 4),
                                       (TVector<double> *)&local_b8._s_0,local_98,SnapToTarget,false
                                       ,fVar2,fVar1,0.0,(USoundAttenuation *)0x0,
                                       (USoundConcurrency *)0x0,true);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      FWeakObjectPtr::operator=(&(this->AudioComponent).WeakPtr,(FObjectPtr)&local_res8);
    }
  }
  return;
}

