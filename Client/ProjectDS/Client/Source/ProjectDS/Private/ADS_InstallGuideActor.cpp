// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b4ac6b0

UClass * __cdecl ADS_InstallGuideActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_InstallGuideActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InstallGuideActor",
               &Z_Registration_Info_UClass_ADS_InstallGuideActor.InnerSingleton,
               StaticRegisterNativesADS_InstallGuideActor,0x350,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_InstallGuideActor>,
               InternalVTableHelperCtorCaller<ADS_InstallGuideActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_InstallGuideActor.InnerSingleton;
}

// ADS_InstallGuideActor @ 14b4b14b0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ADS_InstallGuideActor * __thiscall
ADS_InstallGuideActor::ADS_InstallGuideActor(ADS_InstallGuideActor *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_InstallGuideActor__6B_;
  (this->InstallDecalInfo).bIsActivated = true;
  (this->InstallDecalInfo).DecalState = Able;
  (this->InstallDecalInfo).DecalDepth = 0.0;
  (this->InstallDecalInfo).DecalRadius = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res8 = 0;
  (this->InstallDecalInfo).DecalWorldLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InstallDecalInfo).DecalWorldLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->InstallDecalInfo).DecalWorldLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->GuideDecalInfo).bIsActivated = true;
  (this->GuideDecalInfo).DecalState = Able;
  (this->GuideDecalInfo).DecalDepth = 0.0;
  (this->GuideDecalInfo).DecalRadius = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->GuideDecalInfo).DecalWorldLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->GuideDecalInfo).DecalWorldLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->GuideDecalInfo).DecalWorldLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->PSC_Guide).field0_0x0.DebugPtr = (UDS_PartsSystemControl *)0x0;
  (this->SKM_Guide).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SKM_Guide).WeakPtr,(FObjectPtr)&local_res8);
  (this->Anim_Guide).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  this->GuideEffectID = 0;
  (this->NS_Guide).field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  (this->NC_Guide).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->NC_Guide).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~ADS_InstallGuideActor @ 14b4b3150

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall ADS_InstallGuideActor::~ADS_InstallGuideActor(ADS_InstallGuideActor *this)

{
  this->_padding_ = (longlong)&___7ADS_InstallGuideActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b67e0

UClass * __cdecl ADS_InstallGuideActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_InstallGuideActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InstallGuideActor",
               &Z_Registration_Info_UClass_ADS_InstallGuideActor.InnerSingleton,
               StaticRegisterNativesADS_InstallGuideActor,0x350,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_InstallGuideActor>,
               InternalVTableHelperCtorCaller<ADS_InstallGuideActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_InstallGuideActor.InnerSingleton;
}

// StaticRegisterNativesADS_InstallGuideActor @ 14b4b8400

void __cdecl ADS_InstallGuideActor::StaticRegisterNativesADS_InstallGuideActor(void)

{
  return;
}

// ADS_InstallGuideActor @ 14b998c90

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ADS_InstallGuideActor * __thiscall
ADS_InstallGuideActor::ADS_InstallGuideActor
          (ADS_InstallGuideActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_InstallGuideActor__6B_;
  (this->InstallDecalInfo).bIsActivated = true;
  (this->InstallDecalInfo).DecalState = Able;
  (this->InstallDecalInfo).DecalDepth = 0.0;
  (this->InstallDecalInfo).DecalRadius = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res8 = 0;
  (this->InstallDecalInfo).DecalWorldLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InstallDecalInfo).DecalWorldLocation.field0_0x0._s_0.Y = (double)uVar2;
  (this->InstallDecalInfo).DecalWorldLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->GuideDecalInfo).bIsActivated = true;
  (this->GuideDecalInfo).DecalState = Able;
  (this->GuideDecalInfo).DecalDepth = 0.0;
  (this->GuideDecalInfo).DecalRadius = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->GuideDecalInfo).DecalWorldLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->GuideDecalInfo).DecalWorldLocation.field0_0x0._s_0.Y = (double)uVar2;
  (this->GuideDecalInfo).DecalWorldLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->PSC_Guide).field0_0x0.DebugPtr = (UDS_PartsSystemControl *)0x0;
  (this->SKM_Guide).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SKM_Guide).WeakPtr,(FObjectPtr)&local_res8);
  (this->Anim_Guide).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  this->GuideEffectID = 0;
  (this->NS_Guide).field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  (this->NC_Guide).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->NC_Guide).WeakPtr,(FObjectPtr)&local_res8);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  return this;
}

// BeginPlay @ 14b99b490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall ADS_InstallGuideActor::BeginPlay(ADS_InstallGuideActor *this)

{
  UClass *pUVar1;
  UDS_PartsSystemControl *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  AActor::BeginPlay((AActor *)this);
  if ((this->PSC_Guide).field0_0x0.DebugPtr == (UDS_PartsSystemControl *)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = Z_Construct_UClass_UDS_PartsSystemControl_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._8_8_ = this;
    pUVar2 = (UDS_PartsSystemControl *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar3 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_PartsSystemControl *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->PSC_Guide).field0_0x0.DebugPtr = pUVar2;
  }
  return;
}

// EndPlay @ 14b9a7650

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall ADS_InstallGuideActor::EndPlay(ADS_InstallGuideActor *this,Type param_1)

{
  UDS_PartsSystemControl *this_00;
  bool bVar1;
  UObject *pUVar2;
  
  AActor::EndPlay((AActor *)this,param_1);
  this_00 = (this->PSC_Guide).field0_0x0.DebugPtr;
  if (this_00 != (UDS_PartsSystemControl *)0x0) {
    bVar1 = UDS_PartsSystemControl::IsValid(this_00);
    if (bVar1) {
      UDS_PartsSystemControl::Deinit((this->PSC_Guide).field0_0x0.DebugPtr);
    }
  }
  bVar1 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals(&this->NC_Guide,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->NC_Guide).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x4a0))(pUVar2,0);
    (this->NS_Guide).field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  }
  return;
}

// LoadGuideMesh @ 14b9b9fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
ADS_InstallGuideActor::LoadGuideMesh
          (ADS_InstallGuideActor *this,int *param_1,FSoftObjectPath *param_2,int param_3)

{
  UDS_PartsSystemControl *pUVar1;
  char *pcVar2;
  bool bVar3;
  char cVar4;
  UDS_LogManager *pUVar5;
  UClass *pUVar6;
  UWN_CS_CharacterCore *pUVar7;
  FDS_ResourcePresetTableRow *pFVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  UAssetManager *pUVar12;
  FString *pFVar13;
  FDS_ResourceEffectTableRow *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  longlong *plVar16;
  undefined1 auStackY_318 [32];
  undefined1 local_2c8 [8];
  FDelegateAllocation local_2c0;
  undefined1 local_2b0 [24];
  FDelegateAllocation *local_298;
  undefined1 local_290 [8];
  FDelegateAllocation local_288;
  FSourceLocation local_278;
  undefined1 local_258 [8];
  FSharedReferencer<1> FStack_250;
  int local_248;
  FSoftObjectPath *local_240;
  source_location local_238;
  FDestructionSentinel local_218;
  FDelegateAllocation *local_200;
  TSharedPtr<FStreamableHandle,1> local_1f8;
  undefined1 local_1e8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  pUVar1 = (this->PSC_Guide).field0_0x0.DebugPtr;
  local_248 = param_3;
  local_240 = param_2;
  if (pUVar1 == (UDS_PartsSystemControl *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"ADS_InstallGuideActor::LoadGuideMesh",0x24,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_168.Ptr,0x54,L"PSC_Guide is nullptr.");
    if ((void *)local_168._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_168._padding_);
    return;
  }
  bVar3 = UDS_PartsSystemControl::IsValid(pUVar1);
  if (!bVar3) {
    pUVar1 = (this->PSC_Guide).field0_0x0.DebugPtr;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UWN_ISKM_CharacterCore_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1e8,pUVar6);
    local_1e8._8_8_ = this;
    pUVar7 = (UWN_CS_CharacterCore *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1e8);
    if (local_1e8._64_8_ != 0) {
      plVar16 = (longlong *)(local_1e8 + 0x50);
      if ((longlong *)local_1e8._104_8_ != (longlong *)0x0) {
        plVar16 = (longlong *)local_1e8._104_8_;
      }
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    UDS_PartsSystemControl::Init(pUVar1,pUVar7,false);
  }
  pFVar8 = FDS_ResourcePresetTableRow::Get((longlong)*param_1,true);
  if (pFVar8 == (FDS_ResourcePresetTableRow *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"ADS_InstallGuideActor::LoadGuideMesh",0x24,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Warning,local_168.Ptr,0x5f,L"resourcePresetTable is nullptr. (%d)");
    if ((void *)local_168._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_168._padding_);
    return;
  }
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  local_2c8 = (undefined1  [8])0x0;
  local_2c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c8,
             (FWriteAccessScope *)local_2b0);
  local_298 = &local_2c0;
  puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_2c0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_InstallGuideActor____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_278.Impl._0_8_ = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_278);
    puVar9[4] = OnAllLoadComplete;
  }
  if (local_2b0[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_2b0._8_8_,(FDestructionSentinel *)local_2b0);
  }
  local_238._Line = 0;
  local_238._Column = 0;
  local_238._File = (char *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c8,
             (FReadAccessScope *)local_2b0);
  if (((local_2c0.DelegateSize == 0) ||
      (local_2c0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar4 = (**(code **)(*(longlong *)local_2c0.DelegateAllocator + 0x38))(), cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_2b0);
  if (bVar3) {
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_2b0,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_2c8);
    pTVar11 = ::operator_new(0x30);
    local_278.Impl._File = (char *)pTVar15;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar11 + 1),
                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_2b0);
      pTVar11->SharedReferenceCount = (atomic<int>)0x1;
      pTVar11->WeakReferenceCount = (atomic<int>)0x1;
      pTVar11->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_XV<lambda_1>__4___0FWN_EndOfRefs__QEAA_AEBV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_SharedPointerInternals__6B_
      ;
      pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
      local_278.Impl._File = (char *)pTVar11;
    }
    local_278.Impl._0_8_ = (ADS_InstallGuideActor *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_238._File,
               (FSharedReferencer<1> *)&local_278.Impl._File);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_278.Impl._File);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b0);
    if ((FMRSWRecursiveAccessDetector *)local_2b0._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
      FMemory::Free((void *)local_2b0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2b0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c8,
             (FWriteAccessScope *)local_2b0);
  if ((local_2c0.DelegateSize != 0) &&
     (local_2c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)*(longlong *)local_2c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_2c0,0,0,0x10);
    local_2c0.DelegateSize = 0;
  }
  if (local_2b0[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_2b0._8_8_,(FDestructionSentinel *)local_2b0);
  }
  if (local_2c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_2c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2c8);
  pUVar1 = (this->PSC_Guide).field0_0x0.DebugPtr;
  local_2c8 = (undefined1  [8])0x0;
  local_2c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c8,
             (FWriteAccessScope *)local_2b0);
  local_298 = &local_2c0;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_2c0);
  pcVar2 = local_238._File;
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
    ;
    puVar9[1] = local_238._0_8_;
    puVar9[2] = local_238._File;
    if ((TReferenceControllerBase<1> *)local_238._File != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_238._File + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)local_238._File + 8) + 1);
      UNLOCK();
    }
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[3] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_InstallGuideActor____A6AXXZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[4] = 0;
    local_278.Impl._0_8_ = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 4),(FObjectPtr)&local_278);
    puVar9[5] = OnPartsSystemComplete_EndOfRef;
  }
  if (local_2b0[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_2b0._8_8_,(FDestructionSentinel *)local_2b0);
  }
  local_258 = (undefined1  [8])0x0;
  FStack_250.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c8,
             (FReadAccessScope *)local_2b0);
  if (((local_2c0.DelegateSize == 0) ||
      (local_2c0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar4 = (**(code **)(*(longlong *)local_2c0.DelegateAllocator + 0x38))(), cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_2b0);
  if (bVar3) {
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_2b0,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_2c8);
    pTVar11 = ::operator_new(0x30);
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar11 + 1),
                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_2b0);
      pTVar11->SharedReferenceCount = (atomic<int>)0x1;
      pTVar11->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_XV<lambda_1>__4___0FWN_EndOfRefs__QEAA_AEBV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_SharedPointerInternals__6B_
      ;
      pTVar11->WeakReferenceCount = (atomic<int>)0x1;
      pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar15 = pTVar11;
    }
    local_278.Impl._0_8_ = (ADS_InstallGuideActor *)0x0;
    local_278.Impl._File = (char *)pTVar15;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&FStack_250,(FSharedReferencer<1> *)&local_278.Impl._File);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_278.Impl._File);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b0);
    if ((FMRSWRecursiveAccessDetector *)local_2b0._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
      FMemory::Free((void *)local_2b0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2b0);
  }
  UDS_PartsSystemControl::RefreshAsync
            (pUVar1,(AActor *)this,pFVar8,(FWN_EndOfRefs *)local_258,false);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c8,
             (FWriteAccessScope *)local_2b0);
  if ((local_2c0.DelegateSize != 0) &&
     (local_2c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)*(longlong *)local_2c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_2c0,0,0,0x10);
    local_2c0.DelegateSize = 0;
  }
  if (local_2b0[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_2b0._8_8_,(FDestructionSentinel *)local_2b0);
  }
  if (local_2c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_2c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2c8);
  pUVar12 = UAssetManager::Get();
  local_2b0._0_4_ = 0x66;
  local_2b0._4_4_ = 0x28;
  local_2b0._8_8_ =
       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\GameActor\\DS_InstallGuideActor.cpp";
  local_258 = (undefined1  [8])0x0;
  local_2b0._16_8_ =
       "void __cdecl ADS_InstallGuideActor::LoadGuideMesh(const int &,const struct FSoftObjectPath &,int)"
  ;
  FStack_250.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar13 = FSoftObjectPath::ToString(param_2,(FString *)local_2c8);
  local_290 = (undefined1  [8])0x0;
  local_288.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_288.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_290,
             (FWriteAccessScope *)&local_218);
  local_200 = &local_288;
  puVar9 = UE::Core::Private::DelegateAllocate(0x40,&local_288);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__VFString__VFWN_EndOfRefs____6B_
    ;
    puVar9[1] = 0;
    puVar9[1] = (pFVar13->Data).AllocatorInstance.Data;
    (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar9 + 2) = (pFVar13->Data).ArrayNum;
    *(int *)((longlong)puVar9 + 0x14) = (pFVar13->Data).ArrayMax;
    (pFVar13->Data).ArrayNum = 0;
    (pFVar13->Data).ArrayMax = 0;
    puVar9[3] = local_238._0_8_;
    puVar9[4] = pcVar2;
    if ((TReferenceControllerBase<1> *)pcVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)pcVar2 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)pcVar2 + 8) + 1);
      UNLOCK();
    }
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[5] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_InstallGuideActor____A6AXXZUFDefaultDelegateUserPolicy__VFString__VFWN_EndOfRefs____6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[6] = 0;
    local_278.Impl._0_8_ = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 6),(FObjectPtr)&local_278);
    puVar9[7] = OnAnimSequenceLoadComplete;
  }
  if (local_218.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_218.Accessor,&local_218);
  }
  local_278.Impl._0_8_ = CONCAT44(local_2b0._4_4_,local_2b0._0_4_);
  local_278.Impl._File = (char *)local_2b0._8_8_;
  local_278.Impl._Function = (char *)local_2b0._16_8_;
  FStreamableManager::
  RequestAsyncLoad<FSoftObjectPath_const_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
            (&pUVar12->StreamableManager,&local_1f8,local_240,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_290,0,false,false,
             (FString *)local_258,&local_278);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f8.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_290,
             (FWriteAccessScope *)local_2b0);
  if ((local_288.DelegateSize != 0) &&
     (local_288.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_288.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_288,0,0,0x10);
    local_288.DelegateSize = 0;
  }
  if (local_2b0[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_2b0._8_8_,(FDestructionSentinel *)local_2b0);
  }
  if (local_288.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_288.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_290);
  if ((atomic<unsigned___int64>)local_2c8 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_2c8);
  }
  this->GuideEffectID = local_248;
  if (0 < local_248) {
    pFVar14 = FDS_ResourceEffectTableRow::Get((longlong)local_248,true);
    if (pFVar14 == (FDS_ResourceEffectTableRow *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14b9baaa2;
      pUVar5 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"ADS_InstallGuideActor::LoadGuideMesh",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_168.Ptr,0x70,L"resourceEffectTable is nullptr. (%d)");
      local_1f8.Object = (FStreamableHandle *)local_168._padding_;
    }
    else {
      pUVar12 = UAssetManager::Get();
      local_2b0._0_4_ = 0x74;
      local_2b0._4_4_ = 0x29;
      local_2b0._8_8_ =
           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\GameActor\\DS_InstallGuideActor.cpp"
      ;
      local_258 = (undefined1  [8])0x0;
      local_2b0._16_8_ =
           "void __cdecl ADS_InstallGuideActor::LoadGuideMesh(const int &,const struct FSoftObjectPath &,int)"
      ;
      FStack_250.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar13 = FSoftObjectPath::ToString(&pFVar14->EffectPath,(FString *)&local_1f8);
      local_290 = (undefined1  [8])0x0;
      local_288.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_288.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_290,
                 (FWriteAccessScope *)&local_218);
      local_200 = &local_288;
      puVar9 = UE::Core::Private::DelegateAllocate(0x40,&local_288);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__VFString__VFWN_EndOfRefs____6B_
        ;
        puVar9[1] = 0;
        puVar9[1] = (pFVar13->Data).AllocatorInstance.Data;
        (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(puVar9 + 2) = (pFVar13->Data).ArrayNum;
        *(int *)((longlong)puVar9 + 0x14) = (pFVar13->Data).ArrayMax;
        (pFVar13->Data).ArrayNum = 0;
        (pFVar13->Data).ArrayMax = 0;
        puVar9[3] = local_238._0_8_;
        puVar9[4] = pcVar2;
        if ((TReferenceControllerBase<1> *)pcVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *(atomic<int> *)((longlong)pcVar2 + 8) =
               (atomic<int>)((int)*(atomic<int> *)((longlong)pcVar2 + 8) + 1);
          UNLOCK();
        }
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[5] = uVar10;
        *puVar9 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_InstallGuideActor____A6AXXZUFDefaultDelegateUserPolicy__VFString__VFWN_EndOfRefs____6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar9[6] = 0;
        local_278.Impl._0_8_ = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 6),(FObjectPtr)&local_278);
        puVar9[7] = OnGuideEffectLoadComplete;
      }
      if (local_218.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_218.Accessor,&local_218);
      }
      local_238._Column = local_2b0._4_4_;
      local_238._Line = local_2b0._0_4_;
      local_238._File = (char *)local_2b0._8_8_;
      local_238._Function = (char *)local_2b0._16_8_;
      FStreamableManager::
      RequestAsyncLoad<FSoftObjectPath_const_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                (&pUVar12->StreamableManager,(TSharedPtr<FStreamableHandle,1> *)local_2c8,
                 &pFVar14->EffectPath,
                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_290,0,false,false
                 ,(FString *)local_258,(FSourceLocation *)&local_238);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_2c0.DelegateAllocator);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_290,
                 (FWriteAccessScope *)local_2b0);
      if ((local_288.DelegateSize != 0) &&
         (local_288.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_288.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_288,0,0,0x10);
        local_288.DelegateSize = 0;
      }
      if (local_2b0[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_2b0._8_8_,(FDestructionSentinel *)local_2b0
                  );
      }
      if (local_288.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_288.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_290);
    }
    if (local_1f8.Object != (FStreamableHandle *)0x0) {
      FMemory::Free(local_1f8.Object);
    }
  }
LAB_14b9baaa2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pcVar2);
  return;
}

// OnAllLoadComplete @ 14b9bc0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ADS_InstallGuideActor::OnAllLoadComplete(ADS_InstallGuideActor *this)

{
  ForElementType<TAlignedBytes<16,16>_> FVar1;
  int iVar2;
  bool bVar3;
  USkeletalMeshComponent *this_00;
  FTimerManager *this_01;
  UDS_LogManager *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  undefined1 auStackY_298 [32];
  uint uVar7;
  wchar_t *pwVar8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_268;
  FDelegateAllocation local_260;
  FDestructionSentinel local_250;
  FDelegateAllocation *local_238;
  undefined1 local_230 [32];
  void *local_210;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f4;
  undefined1 local_180;
  TReferenceControllerBase<1> *local_170;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_168;
  ForAnyElementType local_160;
  int local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_298;
  bVar3 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->SKM_Guide,(void *)0x0);
  if ((!bVar3) && ((this->Anim_Guide).field0_0x0.DebugPtr != (UAnimSequence *)0x0)) {
    this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&(this->SKM_Guide).WeakPtr);
    USkeletalMeshComponent::PlayAnimation
              (this_00,(UAnimationAsset *)(this->Anim_Guide).field0_0x0.DebugPtr,false);
  }
  this_01 = FDS_TimerManager::Get((UObject *)0x0);
  FTimerManager::SetTimerForNextTick<ADS_InstallGuideActor>
            (this_01,(ADS_InstallGuideActor *)local_230,(pmf_260043b7)this);
  if (this->GuideEffectID < 1) {
    return;
  }
  if ((this->NS_Guide).field0_0x0.DebugPtr == (UNiagaraSystem *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"ADS_InstallGuideActor::OnAllLoadComplete",0x28,Yes);
    pwVar8 = L"NS_Guide is nullptr.";
    uVar7 = 0x84;
  }
  else {
    bVar3 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                      (&this->SKM_Guide,(void *)0x0);
    if (!bVar3) {
      FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)(local_230 + 8));
      local_230._8_4_ = this->GuideEffectID;
      local_230._0_8_ = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_200,(FObjectPtr)local_230);
      local_1f4 = (this->SKM_Guide).WeakPtr;
      local_180 = 1;
      local_268.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_260.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_260.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_268,(FWriteAccessScope *)&local_250);
      local_238 = &local_260;
      puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_260);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_InstallGuideActor____A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar5[3] = 0;
        local_230._0_8_ = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)local_230);
        puVar5[4] = OnGuideEffectSpawnComplete;
      }
      if (local_250.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_250.Accessor,&local_250);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_268,(FWriteAccessScope *)&local_250);
      iVar2 = local_260.DelegateSize;
      FVar1 = local_260.DelegateAllocator;
      local_260.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_260.DelegateSize = 0;
      if (local_250.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_250.Accessor,&local_250);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_168,(FWriteAccessScope *)&local_250);
      if (local_158 == 0) {
LAB_14b9bc3bc:
        if ((ForElementType<TAlignedBytes<16,16>_>)local_160.Data !=
            (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free(local_160.Data);
        }
      }
      else if ((ForElementType<TAlignedBytes<16,16>_>)local_160.Data !=
               (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        (*(code *)**(undefined8 **)local_160.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_160,0,0,0x10);
        local_158 = 0;
        goto LAB_14b9bc3bc;
      }
      local_158 = iVar2;
      local_160.Data = (FScriptContainerElement *)FVar1;
      if (local_250.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_250.Accessor,&local_250);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_268,(FWriteAccessScope *)&local_250);
      if ((local_260.DelegateSize != 0) &&
         (local_260.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_260.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_260,0,0,0x10);
        local_260.DelegateSize = 0;
      }
      if (local_250.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_250.Accessor,&local_250);
      }
      if (local_260.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_260.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_268.AccessDetector);
      UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)(local_230 + 8));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_168,(FWriteAccessScope *)&local_250);
      if ((local_158 != 0) &&
         ((ForElementType<TAlignedBytes<16,16>_>)local_160.Data !=
          (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_160.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_160,0,0,0x10);
        local_158 = 0;
      }
      if (local_250.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_250.Accessor,&local_250);
      }
      if ((ForElementType<TAlignedBytes<16,16>_>)local_160.Data !=
          (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free(local_160.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_168.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_170)
      ;
      goto LAB_14b9bc4e0;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"ADS_InstallGuideActor::OnAllLoadComplete",0x28,Yes);
    pwVar8 = L"SKM_Guide is nullptr.";
    uVar7 = 0x8a;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar7,pwVar8);
  local_210 = (void *)local_148._padding_;
LAB_14b9bc4e0:
  if (local_210 != (void *)0x0) {
    FMemory::Free(local_210);
  }
  return;
}

// OnAnimSequenceLoadComplete @ 14b9bc510

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ADS_InstallGuideActor::OnAnimSequenceLoadComplete
          (ADS_InstallGuideActor *this,FString *param_1,FWN_EndOfRefs *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  UAnimSequence *pUVar4;
  UClass *pUVar5;
  TStringView<wchar_t> local_48;
  FString local_38;
  FSoftObjectPath local_28;
  
  pFVar3 = FWN_SoftObjectUtils::GetObjectPath(&local_38,param_1,false);
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  local_48.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  local_48.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_48.Size = 0;
  }
  FSoftObjectPath::SetPath(&local_28,&local_48);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pUVar4 = (UAnimSequence *)FSoftObjectPath::ResolveObject(&local_28);
  if (pUVar4 != (UAnimSequence *)0x0) {
    pUVar5 = Z_Construct_UClass_UAnimSequence_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14b9bc5d0;
  }
  pUVar4 = (UAnimSequence *)0x0;
LAB_14b9bc5d0:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UAnimSequence *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->Anim_Guide).field0_0x0.DebugPtr = pUVar4;
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnGuideEffectLoadComplete @ 14b9bd6a0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ADS_InstallGuideActor::OnGuideEffectLoadComplete
          (ADS_InstallGuideActor *this,FString *param_1,FWN_EndOfRefs *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  UNiagaraSystem *pUVar4;
  UClass *pUVar5;
  TStringView<wchar_t> local_48;
  FString local_38;
  FSoftObjectPath local_28;
  
  pFVar3 = FWN_SoftObjectUtils::GetObjectPath(&local_38,param_1,false);
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  local_48.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  local_48.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_48.Size = 0;
  }
  FSoftObjectPath::SetPath(&local_28,&local_48);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pUVar4 = (UNiagaraSystem *)FSoftObjectPath::ResolveObject(&local_28);
  if (pUVar4 != (UNiagaraSystem *)0x0) {
    pUVar5 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14b9bd760;
  }
  pUVar4 = (UNiagaraSystem *)0x0;
LAB_14b9bd760:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UNiagaraSystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->NS_Guide).field0_0x0.DebugPtr = pUVar4;
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnGuideEffectSpawnComplete @ 14b9bd7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
ADS_InstallGuideActor::OnGuideEffectSpawnComplete
          (ADS_InstallGuideActor *this,FDS_EffectSpawnCompleteInfo param_1)

{
  UDS_LogManager *pUVar1;
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
                (&local_138,"ADS_InstallGuideActor::OnGuideEffectSpawnComplete",0x31,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,199,L"InSpawnInfo.NiagaraComponent is nullptr.");
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
    FWeakObjectPtr::operator=(&(this->NC_Guide).WeakPtr,(FObjectPtr)local_148);
  }
  return;
}

// OnPartsSystemComplete_EndOfRef @ 14b9be100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall
ADS_InstallGuideActor::OnPartsSystemComplete_EndOfRef
          (ADS_InstallGuideActor *this,FWN_EndOfRefs *param_1)

{
  UDS_PartsSystemControl *this_00;
  FName FVar1;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  longlong lVar5;
  USceneComponent *this_01;
  ForAnyElementType FVar6;
  float fVar7;
  undefined1 auStackY_1a8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  TArray<FDS_ScalarParameterValue,TSizedDefaultAllocator<32>_> local_178;
  FName local_168 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  this_00 = (this->PSC_Guide).field0_0x0.DebugPtr;
  if (this_00 == (UDS_PartsSystemControl *)0x0) {
LAB_14b9be2a6:
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14b9be320;
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"ADS_InstallGuideActor::OnPartsSystemComplete_EndOfRef",0x35,Yes);
    pwVar9 = L"PSC_Guide is invalid.";
    uVar8 = 0x9d;
LAB_14b9be2f3:
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,uVar8,pwVar9);
    FVar6.Data = (FScriptContainerElement *)local_158._padding_;
  }
  else {
    bVar2 = UDS_PartsSystemControl::IsValid(this_00);
    if (!bVar2) goto LAB_14b9be2a6;
    local_168[0] = (FName)UDS_PartsSystemControl::GetSoulSkeletalMesh
                                    ((this->PSC_Guide).field0_0x0.DebugPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_168[0] != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_168[0]);
    }
    FWeakObjectPtr::operator=(&(this->SKM_Guide).WeakPtr,(FObjectPtr)local_168);
    bVar2 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                      (&this->SKM_Guide,(void *)0x0);
    if (bVar2) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14b9be320;
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"ADS_InstallGuideActor::OnPartsSystemComplete_EndOfRef",0x35,Yes);
      pwVar9 = L"SKM_Guide is invalid.";
      uVar8 = 0xa4;
      goto LAB_14b9be2f3;
    }
    local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.ArrayNum = 0;
    local_178.ArrayMax = 0;
    ::FName::FName(local_168,L"Opacity_Intensity");
    fVar7 = DS_CommonDataHelper::CampGuideActorOpacity();
    FVar1 = local_168[0];
    iVar3 = local_178.ArrayNum;
    if (local_178.ArrayNum == local_178.ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&local_178.AllocatorInstance,&local_178.ArrayMax);
    }
    lVar5 = (longlong)iVar3;
    local_178.ArrayNum = iVar3 + 1;
    *(uint *)(local_178.AllocatorInstance.Data + lVar5 * 0xc) = FVar1.ComparisonIndex.Value.Value;
    *(uint *)(local_178.AllocatorInstance.Data + lVar5 * 0xc + 4) = FVar1.Number;
    *(float *)(local_178.AllocatorInstance.Data + lVar5 * 0xc + 8) = fVar7;
    UDS_PartsSystemControl::SetPartsScalarParams
              ((this->PSC_Guide).field0_0x0.DebugPtr,FullBody,&local_178);
    this_01 = (USceneComponent *)FWeakObjectPtr::Get(&(this->SKM_Guide).WeakPtr);
    USceneComponent::SetVisibility(this_01,false,Propagate);
    FVar6.Data = local_178.AllocatorInstance.Data;
  }
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
LAB_14b9be320:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// PlayAnimSequence @ 14b9c0000

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall ADS_InstallGuideActor::PlayAnimSequence(ADS_InstallGuideActor *this)

{
  bool bVar1;
  USkeletalMeshComponent *this_00;
  
  bVar1 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->SKM_Guide,(void *)0x0);
  if ((!bVar1) && ((this->Anim_Guide).field0_0x0.DebugPtr != (UAnimSequence *)0x0)) {
    this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&(this->SKM_Guide).WeakPtr);
    USkeletalMeshComponent::PlayAnimation
              (this_00,(UAnimationAsset *)(this->Anim_Guide).field0_0x0.DebugPtr,false);
  }
  return;
}

// ShowSoulSkeletalMesh @ 14b9c57d0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall ADS_InstallGuideActor::ShowSoulSkeletalMesh(ADS_InstallGuideActor *this)

{
  bool bVar1;
  USceneComponent *this_00;
  
  bVar1 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->SKM_Guide,(void *)0x0);
  if (!bVar1) {
    this_00 = (USceneComponent *)FWeakObjectPtr::Get(&(this->SKM_Guide).WeakPtr);
    USceneComponent::SetVisibility(this_00,true,Propagate);
    return;
  }
  return;
}

// Tick @ 14b9c77b0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall ADS_InstallGuideActor::Tick(ADS_InstallGuideActor *this,float param_1)

{
  bool bVar1;
  USceneComponent *this_00;
  TVector<double>_u_0 local_28;
  
  AActor::Tick((AActor *)this,param_1);
  bVar1 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->SKM_Guide,(void *)0x0);
  if (!bVar1) {
    this_00 = (USceneComponent *)FWeakObjectPtr::Get(&(this->SKM_Guide).WeakPtr);
    local_28._s_0.X = (this->GuideDecalInfo).DecalWorldLocation.field0_0x0._s_0.X;
    local_28._s_0.Y = (this->GuideDecalInfo).DecalWorldLocation.field0_0x0._s_0.Y;
    local_28._s_0.Z = (this->GuideDecalInfo).DecalWorldLocation.field0_0x0._s_0.Z;
    USceneComponent::SetWorldLocation
              (this_00,(TVector<double> *)&local_28._s_0,false,(FHitResult *)0x0,None);
  }
  return;
}

