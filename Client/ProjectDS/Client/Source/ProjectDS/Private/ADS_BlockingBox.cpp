// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b428010

UClass * __cdecl ADS_BlockingBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_BlockingBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_BlockingBox",
               &Z_Registration_Info_UClass_ADS_BlockingBox.InnerSingleton,
               StaticRegisterNativesADS_BlockingBox,0x340,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_BlockingBox>,
               InternalVTableHelperCtorCaller<ADS_BlockingBox>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_BlockingBox.InnerSingleton;
}

// ADS_BlockingBox @ 14b42a6c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_BlockingBox * __thiscall
ADS_BlockingBox::ADS_BlockingBox(ADS_BlockingBox *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_BlockingBox__6B_;
  (this->BlockingBoxCollision).field0_0x0.DebugPtr = (UBoxComponent *)0x0;
  this->bIsActivated = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res8 = 0;
  (this->CenterLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->CenterLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->CenterLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AdjustedCenterLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AdjustedCenterLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->AdjustedCenterLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->Radius = 0.0;
  this->BlockingBoxDist = 0.0;
  this->bIsShowingBlockingEffect = false;
  (this->NC_BlockingEffect).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NC_BlockingEffect).WeakPtr,(FObjectPtr)&local_res8);
  (this->AsyncLoadHandle_BlockingEffect).Object = (FStreamableHandle *)0x0;
  (this->AsyncLoadHandle_BlockingEffect).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->BlockingEffectLocationOffset).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->BlockingMessageTimer).Handle = 0;
  return this;
}

// ~ADS_BlockingBox @ 14b42b360

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_BlockingBox::~ADS_BlockingBox(ADS_BlockingBox *this)

{
  this->_padding_ = (longlong)&___7ADS_BlockingBox__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncLoadHandle_BlockingEffect).SharedReferenceCount.ReferenceController);
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b42d810

UClass * __cdecl ADS_BlockingBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_BlockingBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_BlockingBox",
               &Z_Registration_Info_UClass_ADS_BlockingBox.InnerSingleton,
               StaticRegisterNativesADS_BlockingBox,0x340,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_BlockingBox>,
               InternalVTableHelperCtorCaller<ADS_BlockingBox>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_BlockingBox.InnerSingleton;
}

// StaticRegisterNativesADS_BlockingBox @ 14b42e1c0

void __cdecl ADS_BlockingBox::StaticRegisterNativesADS_BlockingBox(void)

{
  return;
}

// ADS_BlockingBox @ 14b998900

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

ADS_BlockingBox * __thiscall
ADS_BlockingBox::ADS_BlockingBox(ADS_BlockingBox *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  undefined8 uVar3;
  FName *pFVar4;
  UClass *pUVar5;
  UBoxComponent *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_198 [32];
  FName local_168 [2];
  TVector<double>_u_0 local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_BlockingBox__6B_;
  (this->BlockingBoxCollision).field0_0x0.DebugPtr = (UBoxComponent *)0x0;
  this->bIsActivated = false;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_168[0].ComparisonIndex.Value = 0;
  local_168[0].Number = 0;
  (this->CenterLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->CenterLocation).field0_0x0._s_0.Y = (double)uVar3;
  (this->CenterLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AdjustedCenterLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AdjustedCenterLocation).field0_0x0._s_0.Y = (double)uVar3;
  (this->AdjustedCenterLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->Radius = 0.0;
  this->BlockingBoxDist = 0.0;
  this->bIsShowingBlockingEffect = false;
  (this->NC_BlockingEffect).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NC_BlockingEffect).WeakPtr,(FObjectPtr)local_168);
  (this->AsyncLoadHandle_BlockingEffect).Object = (FStreamableHandle *)0x0;
  (this->AsyncLoadHandle_BlockingEffect).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->BlockingEffectLocationOffset).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->BlockingMessageTimer).Handle = 0;
  pFVar4 = ::FName::FName(local_168,"BlockingBoxCollision");
  FVar2 = *pFVar4;
  pUVar5 = Z_Construct_UClass_UBoxComponent_NoRegister();
  pUVar6 = (UBoxComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UBoxComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->BlockingBoxCollision).field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UBoxComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pUVar6 = (this->BlockingBoxCollision).field0_0x0.DebugPtr;
  local_158._s_0.X = ___xmm_40690000000000004069000000000000;
  local_158._s_0.Y = _UNK_15201e8d8;
  local_158._s_0.Z = __real_4069000000000000;
  this->_padding_ = (longlong)pUVar6;
  UBoxComponent::SetBoxExtent(pUVar6,(TVector<double> *)&local_158._s_0,true);
  USceneComponent::SetHiddenInGame
            ((USceneComponent *)(this->BlockingBoxCollision).field0_0x0.DebugPtr,true,DirtyOnly);
  pUVar6 = (this->BlockingBoxCollision).field0_0x0.DebugPtr;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  if (pUVar6 == (UBoxComponent *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_BlockingBox::SetIsActivated",0x1f,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0xd1,L"BlockingBoxCollision is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_158._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_158._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_158._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    USceneComponent::SetWorldLocation
              ((USceneComponent *)pUVar6,(TVector<double> *)&local_158._s_0,false,(FHitResult *)0x0,
               None);
    pUVar6 = (this->BlockingBoxCollision).field0_0x0.DebugPtr;
    this->bIsActivated = false;
    (**(code **)(pUVar6->_padding_ + 0x788))(pUVar6,::COLLISION_PROFILE_NOCOLLISION,1);
    (**(code **)(this->_padding_ + 0x368))(this,1);
  }
  return this;
}

// BeginPlay @ 14b99b340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_BlockingBox::BeginPlay(ADS_BlockingBox *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  AActor::BeginPlay((AActor *)this);
  bVar1 = SpawnBlockingEffect(this);
  if (!bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_BlockingBox::BeginPlay",0x1a,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x3a,L"Failed to SpawnBlockingEffect().");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// ClearBlockingEffect @ 14b99caf0

void __thiscall ADS_BlockingBox::ClearBlockingEffect(ADS_BlockingBox *this)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->AsyncLoadHandle_BlockingEffect;
  if (pTVar1->Object != (FStreamableHandle *)0x0) {
    FStreamableHandle::CancelHandle(pTVar1->Object);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FStreamableHandle,1> *)&local_18) {
      pTVar1->Object = (FStreamableHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AsyncLoadHandle_BlockingEffect).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  bVar2 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->NC_BlockingEffect,(void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->NC_BlockingEffect).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x4a0))(pUVar3,0);
    (this->NC_BlockingEffect).WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// EndPlay @ 14b9a7420

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_BlockingBox::EndPlay(ADS_BlockingBox *this,Type param_1)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  AActor::EndPlay((AActor *)this,param_1);
  pTVar1 = &this->AsyncLoadHandle_BlockingEffect;
  if (pTVar1->Object != (FStreamableHandle *)0x0) {
    FStreamableHandle::CancelHandle(pTVar1->Object);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FStreamableHandle,1> *)&local_18) {
      pTVar1->Object = (FStreamableHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AsyncLoadHandle_BlockingEffect).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  bVar2 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->NC_BlockingEffect,(void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->NC_BlockingEffect).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x4a0))(pUVar3,0);
    (this->NC_BlockingEffect).WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// GetIsActivated @ 14b9afa50

bool * __thiscall ADS_BlockingBox::GetIsActivated(ADS_BlockingBox *this)

{
  return &this->bIsActivated;
}

// InitBlockingBox @ 14b9b6290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ADS_BlockingBox::InitBlockingBox
          (ADS_BlockingBox *this,TVector<double> *param_1,float *param_2,TVector2<double> *param_3)

{
  float fVar1;
  double dVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_188 [32];
  uint uVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((this->BlockingBoxCollision).field0_0x0.DebugPtr == (UBoxComponent *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"ADS_BlockingBox::InitBlockingBox",0x20,Yes);
    pwVar7 = L"BlockingBoxCollision is nullptr.";
    uVar6 = 0xb3;
  }
  else {
    ADS_MainCharacter::GetMainPlayer();
    bVar3 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)local_158,(void *)0x0);
    if (!bVar3) {
      dVar2 = (param_1->field0_0x0)._s_0.Y;
      (this->CenterLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
      (this->CenterLocation).field0_0x0._s_0.Y = dVar2;
      (this->CenterLocation).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
      dVar2 = (param_1->field0_0x0)._s_0.Y;
      (this->AdjustedCenterLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
      (this->AdjustedCenterLocation).field0_0x0._s_0.Y = dVar2;
      (this->AdjustedCenterLocation).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
      pUVar5 = FWeakObjectPtr::Get(local_158);
      (this->AdjustedCenterLocation).field0_0x0._s_0.Z =
           (double)*(float *)&pUVar5[0x2b].field_0x18 +
           (this->AdjustedCenterLocation).field0_0x0._s_0.Z;
      fVar1 = *param_2;
      this->Radius = fVar1;
      this->BlockingBoxDist = fVar1 + __real_43160000;
      dVar2 = (param_3->field0_0x0)._s_0.Y;
      (this->BlockingEffectLocationOffset).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
      (this->BlockingEffectLocationOffset).field0_0x0._s_0.Y = dVar2;
      AActor::SetActorLocation((AActor *)this,&this->CenterLocation,false,(FHitResult *)0x0,None);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"ADS_BlockingBox::InitBlockingBox",0x20,Yes);
    pwVar7 = L"mainCharacter is nullptr.";
    uVar6 = 0xba;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar6,pwVar7);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// OnBlockingEffectSpawnComplete @ 14b9bc680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
ADS_BlockingBox::OnBlockingEffectSpawnComplete
          (ADS_BlockingBox *this,FDS_EffectSpawnCompleteInfo param_1)

{
  UDS_LogManager *pUVar1;
  UPrimitiveComponent *pUVar2;
  undefined1 auStackY_178 [32];
  UNiagaraComponent *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1.NiagaraComponent == (UNiagaraComponent *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_BlockingBox::OnBlockingEffectSpawnComplete",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x109,L"InSpawnInfo.NiagaraComponent is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_148[0] = param_1.NiagaraComponent;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1.NiagaraComponent);
    }
    FWeakObjectPtr::operator=(&(this->NC_BlockingEffect).WeakPtr,(FObjectPtr)local_148);
    pUVar2 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->NC_BlockingEffect).WeakPtr);
    WN_RegisterHiddenPrimitive(pUVar2,true);
  }
  return;
}

// SetIsActivated @ 14b9c4430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_BlockingBox::SetIsActivated(ADS_BlockingBox *this,bool *param_1)

{
  bool bVar1;
  UBoxComponent *pUVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  TVector<double>_u_0 local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar2 = (this->BlockingBoxCollision).field0_0x0.DebugPtr;
  if (pUVar2 == (UBoxComponent *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_BlockingBox::SetIsActivated",0x1f,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0xd1,L"BlockingBoxCollision is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_158._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_158._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_158._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    USceneComponent::SetWorldLocation
              ((USceneComponent *)pUVar2,(TVector<double> *)&local_158._s_0,false,(FHitResult *)0x0,
               None);
    bVar1 = *param_1;
    pUVar2 = (this->BlockingBoxCollision).field0_0x0.DebugPtr;
    this->bIsActivated = bVar1;
    if (bVar1 != true) {
      (**(code **)(pUVar2->_padding_ + 0x788))(pUVar2,::COLLISION_PROFILE_NOCOLLISION);
    }
    else {
      (**(code **)(pUVar2->_padding_ + 0x788))(pUVar2,::COLLISION_PROFILE_PLAYER_ONLY);
    }
    (**(code **)(this->_padding_ + 0x368))(this,bVar1 != true);
  }
  return;
}

// ShowBlockingMessage @ 14b9c5740

void __thiscall ADS_BlockingBox::ShowBlockingMessage(ADS_BlockingBox *this)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x61a83,Alert_None_01,&local_28);
  return;
}

// SpawnBlockingEffect @ 14b9c5910

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall ADS_BlockingBox::SpawnBlockingEffect(ADS_BlockingBox *this)

{
  TReferenceControllerBase<1> *pTVar1;
  ForElementType<TAlignedBytes<16,16>_> FVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_128;
  FDelegateAllocation local_120;
  FDestructionSentinel local_110;
  FDelegateAllocation *local_f8;
  undefined1 local_f0 [200];
  ForAnyElementType local_28;
  int local_20;
  
  FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_f0);
  local_f0._0_4_ = 0xe679;
  local_res8 = (FWeakObjectPtr)this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_BlockingBox *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_f0 + 0x28),(FObjectPtr)&local_res8);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  local_f0._52_4_ = local_res8.ObjectIndex;
  local_f0._56_4_ = local_res8.ObjectSerialNumber;
  local_128.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_120.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_120.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_128,(FWriteAccessScope *)&local_110);
  local_f8 = &local_120;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_120);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_BlockingBox____A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_BlockingBox *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[3] = 0;
    local_res8 = (FWeakObjectPtr)this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_BlockingBox *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = OnBlockingEffectSpawnComplete;
  }
  if (local_110.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_128,(FWriteAccessScope *)&local_110);
  iVar3 = local_120.DelegateSize;
  FVar2 = local_120.DelegateAllocator;
  local_120.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_120.DelegateSize = 0;
  if (local_110.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_f0 + 0xc0),
             (FWriteAccessScope *)&local_110);
  if (local_20 != 0) {
    if (local_28.Data == (FScriptContainerElement *)0x0) goto LAB_14b9c5ac6;
    (*(code *)**(undefined8 **)local_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_28,0,0,0x10);
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
LAB_14b9c5ac6:
  local_28.Data = (FScriptContainerElement *)FVar2;
  local_20 = iVar3;
  if (local_110.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_128,(FWriteAccessScope *)&local_110);
  if ((local_120.DelegateSize != 0) &&
     (local_120.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_120.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_120,0,0,0x10);
    local_120.DelegateSize = 0;
  }
  if (local_110.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
  }
  if (local_120.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_120.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_128.AccessDetector);
  UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_f0);
  if ((TReferenceControllerBase<1> *)local_f0._184_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_f0._184_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_f0._184_8_ + 8) + 1);
    UNLOCK();
  }
  pTVar1 = (this->AsyncLoadHandle_BlockingEffect).SharedReferenceCount.ReferenceController;
  (this->AsyncLoadHandle_BlockingEffect).Object = (FStreamableHandle *)local_f0._176_8_;
  (this->AsyncLoadHandle_BlockingEffect).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_f0._184_8_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_f0 + 0xc0),
             (FWriteAccessScope *)&local_110);
  if ((local_20 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)local_28.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_28,0,0,0x10);
    local_20 = 0;
  }
  if (local_110.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)local_28.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(local_28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_f0 + 0xc0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_f0._184_8_);
  if ((FScriptContainerElement *)local_f0._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f0._24_8_);
  }
  return true;
}

// Tick @ 14b9c7260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_BlockingBox::Tick(ADS_BlockingBox *this,float param_1)

{
  longlong lVar1;
  UBoxComponent *this_00;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  UObject *pUVar13;
  TQuat<double> *pTVar14;
  UPrimitiveComponent *pUVar15;
  FTimerManager *pFVar16;
  USceneComponent *pUVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  FWeakObjectPtr local_res8;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 local_c8;
  TQuat<double> local_a8 [5];
  
  AActor::Tick((AActor *)this,param_1);
  if (this->bIsActivated == false) {
    return;
  }
  if ((this->BlockingBoxCollision).field0_0x0.DebugPtr != (UBoxComponent *)0x0) {
    ADS_MainCharacter::GetMainPlayer();
    bVar11 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_res8,(void *)0x0)
    ;
    if (!bVar11) {
      pUVar13 = FWeakObjectPtr::Get(&local_res8);
      lVar1 = *(longlong *)(pUVar13 + 0xb);
      local_c8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      if (lVar1 != 0) {
        local_c8._s_0.Z = *(double *)(lVar1 + 0x220);
        uVar20 = *(undefined4 *)(lVar1 + 0x210);
        uVar21 = *(undefined4 *)(lVar1 + 0x214);
        uVar22 = *(undefined4 *)(lVar1 + 0x218);
        uVar23 = *(undefined4 *)(lVar1 + 0x21c);
      }
      dVar8 = (double)CONCAT44(uVar21,uVar20) - (this->AdjustedCenterLocation).field0_0x0._s_0.X;
      dVar7 = (double)CONCAT44(uVar23,uVar22) - (this->AdjustedCenterLocation).field0_0x0._s_0.Y;
      local_f8._s_0.Z = 0.0;
      local_f8._s_0.X = dVar8;
      local_f8._s_0.Y = dVar7;
      UE::Math::TVector<double>::Normalize
                ((TVector<double> *)&local_f8._s_0,__real_3e45798ee0000000);
      uVar10 = local_f8._s_0.Z;
      uVar9 = local_f8._s_0.X;
      dVar3 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * __real_3fe6a09e6ecb41fe;
      dVar5 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * __real_3fe6a09e6ecb41fe;
      dVar4 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * __real_3fe6a09e6ecb41fe;
      dVar6 = (double)this->BlockingBoxDist;
      dVar2 = dVar4 * local_f8._s_0.Z - dVar3 * local_f8._s_0.Y;
      dVar2 = dVar2 + dVar2;
      dVar18 = dVar3 * local_f8._s_0.X - dVar5 * local_f8._s_0.Z;
      dVar18 = dVar18 + dVar18;
      dVar19 = dVar5 * local_f8._s_0.Y - dVar4 * local_f8._s_0.X;
      dVar19 = dVar19 + dVar19;
      local_e0._s_0.X =
           (dVar4 * dVar19 - dVar3 * dVar18) + dVar2 * __real_3fe6a09e5e333598 + local_f8._s_0.X;
      local_c8._s_0.X = dVar6 * local_f8._s_0.X + (this->AdjustedCenterLocation).field0_0x0._s_0.X;
      local_e0._s_0.Z =
           (dVar5 * dVar18 - dVar4 * dVar2) + dVar19 * __real_3fe6a09e5e333598 + local_f8._s_0.Z;
      local_e0._s_0.Y =
           (dVar3 * dVar2 - dVar5 * dVar19) + dVar18 * __real_3fe6a09e5e333598 + local_f8._s_0.Y;
      local_c8._s_0.Y = dVar6 * local_f8._s_0.Y + (this->AdjustedCenterLocation).field0_0x0._s_0.Y;
      local_c8._s_0.Z = dVar6 * local_f8._s_0.Z + (this->AdjustedCenterLocation).field0_0x0._s_0.Z;
      USceneComponent::SetWorldLocation
                ((USceneComponent *)(this->BlockingBoxCollision).field0_0x0.DebugPtr,
                 (TVector<double> *)&local_c8._s_0,false,(FHitResult *)0x0,None);
      this_00 = (this->BlockingBoxCollision).field0_0x0.DebugPtr;
      UE::Math::TVector<double>::ToOrientationRotator
                ((TVector<double> *)&local_e0._s_0,(TRotator<double> *)&local_c8._s_0);
      pTVar14 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)&local_c8._s_0,local_a8);
      USceneComponent::SetWorldRotation
                ((USceneComponent *)this_00,pTVar14,false,(FHitResult *)0x0,None);
      bVar11 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                         (&this->NC_BlockingEffect,(void *)0x0);
      if (bVar11) {
        return;
      }
      bVar11 = this->bIsShowingBlockingEffect;
      this->bIsShowingBlockingEffect = false;
      pUVar13 = FWeakObjectPtr::Get(&local_res8);
      bVar12 = FDS_EntityBase::IsActiveInput((FDS_EntityBase *)&pUVar13[0x29].field_0x10);
      if (bVar12) {
        this->bIsShowingBlockingEffect =
             this->Radius - __real_43160000 < (float)SQRT(dVar8 * dVar8 + dVar7 * dVar7);
      }
      if (bVar11 != this->bIsShowingBlockingEffect) {
        if (this->bIsShowingBlockingEffect == true) {
          pUVar15 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->NC_BlockingEffect).WeakPtr);
          WN_UnregisterHiddenPrimitive(pUVar15,true);
          if ((this->BlockingMessageTimer).Handle == 0) {
            ShowBlockingMessage(this);
            pFVar16 = FDS_TimerManager::Get((UObject *)0x0);
            FTimerManager::SetTimer<ADS_BlockingBox>
                      (pFVar16,&this->BlockingMessageTimer,this,(pmf_d7201179)0x14b9c5740,
                       __real_40400000,true,__real_bf800000);
          }
        }
        else {
          pUVar15 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->NC_BlockingEffect).WeakPtr);
          WN_RegisterHiddenPrimitive(pUVar15,true);
          if ((this->BlockingMessageTimer).Handle != 0) {
            pFVar16 = FDS_TimerManager::Get((UObject *)0x0);
            FTimerManager::ClearTimer(pFVar16,&this->BlockingMessageTimer);
          }
        }
      }
      if (this->bIsShowingBlockingEffect != true) {
        return;
      }
      dVar7 = (double)this->Radius + (this->BlockingEffectLocationOffset).field0_0x0._s_0.X;
      dVar6 = dVar7 * local_f8._s_0.Y;
      dVar2 = (this->CenterLocation).field0_0x0._s_0.X;
      dVar3 = (this->CenterLocation).field0_0x0._s_0.Y;
      dVar4 = (this->CenterLocation).field0_0x0._s_0.Z;
      dVar5 = (this->BlockingEffectLocationOffset).field0_0x0._s_0.Y;
      pUVar17 = (USceneComponent *)FWeakObjectPtr::Get(&(this->NC_BlockingEffect).WeakPtr);
      local_c8._s_0.X = dVar7 * (double)uVar9 + dVar2;
      local_c8._s_0.Y = dVar6 + dVar3;
      local_c8._s_0.Z = dVar7 * (double)uVar10 + dVar4 + dVar5;
      USceneComponent::SetWorldLocation
                (pUVar17,(TVector<double> *)&local_c8._s_0,false,(FHitResult *)0x0,None);
      pUVar17 = (USceneComponent *)FWeakObjectPtr::Get(&(this->NC_BlockingEffect).WeakPtr);
      UE::Math::TVector<double>::ToOrientationRotator
                ((TVector<double> *)&local_e0._s_0,(TRotator<double> *)&local_c8._s_0);
      pTVar14 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)&local_c8._s_0,local_a8);
      USceneComponent::SetWorldRotation(pUVar17,pTVar14,false,(FHitResult *)0x0,None);
      return;
    }
  }
  this->bIsActivated = false;
  return;
}

