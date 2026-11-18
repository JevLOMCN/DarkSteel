// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// StaticClass @ 148a75050

UClass * __cdecl AMapBuildDataActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AMapBuildDataActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MapBuildDataActor",
               &Z_Registration_Info_UClass_AMapBuildDataActor.InnerSingleton,
               StaticRegisterNativesAMapBuildDataActor,0x328,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AMapBuildDataActor>,
               InternalVTableHelperCtorCaller<AMapBuildDataActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AMapBuildDataActor.InnerSingleton;
}

// AMapBuildDataActor @ 148a7ed70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AMapBuildDataActor * __thiscall
AMapBuildDataActor::AMapBuildDataActor(AMapBuildDataActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AMapBuildDataActor__6B_;
  (this->BuildData).field0_0x0.DebugPtr = (UMapBuildDataRegistry *)0x0;
  (this->ForceLinkToActor).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->ActorBounds).IsValid = '\0';
  (this->CellPackage).ComparisonIndex = 0;
  (this->CellPackage).Number = 0;
  (this->LevelBuildDataId).A = 0;
  (this->LevelBuildDataId).B = 0;
  (this->LevelBuildDataId).C = 0;
  (this->LevelBuildDataId).D = 0;
  return this;
}

// AMapBuildDataActor @ 148a7edd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AMapBuildDataActor * __thiscall
AMapBuildDataActor::AMapBuildDataActor(AMapBuildDataActor *this,FObjectInitializer *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AMapBuildDataActor__6B_;
  (this->BuildData).field0_0x0.DebugPtr = (UMapBuildDataRegistry *)0x0;
  (this->ForceLinkToActor).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->ActorBounds).IsValid = '\0';
  (this->CellPackage).ComparisonIndex = 0;
  (this->CellPackage).Number = 0;
  (this->LevelBuildDataId).A = 0;
  (this->LevelBuildDataId).B = 0;
  (this->LevelBuildDataId).C = 0;
  (this->LevelBuildDataId).D = 0;
  this->bAddedToWorld = false;
  return this;
}

// ~AMapBuildDataActor @ 148a81620

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AMapBuildDataActor::~AMapBuildDataActor(AMapBuildDataActor *this)

{
  this->_padding_ = (longlong)&___7AMapBuildDataActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// AddToWorldMapBuildData @ 148a8ad50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AMapBuildDataActor::AddToWorldMapBuildData(AMapBuildDataActor *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  pUVar3 = AActor::GetWorld((AActor *)this);
  if (((this->BuildData).field0_0x0.DebugPtr != (UMapBuildDataRegistry *)0x0) &&
     (this->bAddedToWorld == false)) {
    if (pUVar3 == (UWorld *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\StaticLightingData\\MapBuildDataActor.cpp"
                         ,0x54,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((((pUVar3->PersistentLevel).field0_0x0.DebugPtr)->MapBuildData).field0_0x0.DebugPtr !=
        (UMapBuildDataRegistry *)0x0) {
      this->bAddedToWorld = true;
    }
  }
  return;
}

// BeginDestroy @ 148a8af60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AMapBuildDataActor::BeginDestroy(AMapBuildDataActor *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bAddedToWorld != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bAddedToWorld",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\StaticLightingData\\MapBuildDataActor.cpp"
                       ,0x31,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReleaseRenderingResources(this);
  AActor::BeginDestroy((AActor *)this);
  return;
}

// GetActorBounds @ 148a93d40

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
AMapBuildDataActor::GetActorBounds
          (AMapBuildDataActor *this,bool param_1,TVector<double> *param_2,TVector<double> *param_3,
          bool param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  AActor::GetActorBounds((AActor *)this,param_1,param_2,param_3,param_4);
  if (!param_1) {
    dVar5 = ((this->ActorBounds).Max.field0_0x0._s_0.X - (this->ActorBounds).Min.field0_0x0._s_0.X)
            * __real_3fe0000000000000;
    dVar4 = ((this->ActorBounds).Max.field0_0x0._s_0.Y - (this->ActorBounds).Min.field0_0x0._s_0.Y)
            * __real_3fe0000000000000;
    dVar3 = ((this->ActorBounds).Max.field0_0x0._s_0.Z - (this->ActorBounds).Min.field0_0x0._s_0.Z)
            * __real_3fe0000000000000;
    (param_3->field0_0x0)._s_0.X = dVar5;
    (param_3->field0_0x0)._s_0.Y = dVar4;
    (param_3->field0_0x0)._s_0.Z = dVar3;
    dVar1 = (this->ActorBounds).Min.field0_0x0._s_0.Y;
    dVar2 = (this->ActorBounds).Min.field0_0x0._s_0.Z;
    (param_2->field0_0x0)._s_0.X = dVar5 + (this->ActorBounds).Min.field0_0x0._s_0.X;
    (param_2->field0_0x0)._s_0.Y = dVar4 + dVar1;
    (param_2->field0_0x0)._s_0.Z = dVar3 + dVar2;
  }
  return;
}

// GetBuildData @ 148a94360

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMapBuildDataRegistry * __thiscall
AMapBuildDataActor::GetBuildData(AMapBuildDataActor *this,bool param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UMapBuildDataRegistry *pUVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_e8 [32];
  FString local_c8;
  FName local_b8;
  FString local_b0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((param_1) && ((this->BuildData).field0_0x0.DebugPtr == (UMapBuildDataRegistry *)0x0)) {
    ::FName::ToString(&this->CellPackage,&local_b0);
    ::FString::PrintfImpl(&local_c8,L"MapBuildData_%s");
    iVar6 = local_c8.Data.ArrayNum + -1;
    if (local_c8.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    pFVar2 = ::FName::FName(&local_b8,iVar6,(wchar_t *)local_c8.Data.AllocatorInstance.Data,
                            FNAME_Add);
    FVar1 = *pFVar2;
    if (FVar1 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar3 = Z_Construct_UClass_UMapBuildDataRegistry_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._24_4_ = RF_NoFlags;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    local_98._16_8_ = FVar1;
    pUVar4 = (UMapBuildDataRegistry *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UMapBuildDataRegistry *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->BuildData).field0_0x0.DebugPtr = pUVar4;
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
    pUVar4 = (this->BuildData).field0_0x0.DebugPtr;
  }
  else {
    pUVar4 = (this->BuildData).field0_0x0.DebugPtr;
  }
  return pUVar4;
}

// GetPrivateStaticClass @ 148a95800

UClass * __cdecl AMapBuildDataActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AMapBuildDataActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MapBuildDataActor",
               &Z_Registration_Info_UClass_AMapBuildDataActor.InnerSingleton,
               StaticRegisterNativesAMapBuildDataActor,0x328,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AMapBuildDataActor>,
               InternalVTableHelperCtorCaller<AMapBuildDataActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AMapBuildDataActor.InnerSingleton;
}

// InitializeRenderingResources @ 148a99c20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AMapBuildDataActor::InitializeRenderingResources(AMapBuildDataActor *this)

{
  UMapBuildDataRegistry *pUVar1;
  UWorld *pUVar2;
  wchar_t *pwVar3;
  
  pUVar2 = AActor::GetWorld((AActor *)this);
  if (pUVar2 != (UWorld *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       ) {
      _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
      if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        pwVar3 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar3,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      pUVar2 = AActor::GetWorld((AActor *)this);
      if ((pUVar2->Scene != (FSceneInterface *)0x0) &&
         (pUVar1 = (this->BuildData).field0_0x0.DebugPtr, pUVar1 != (UMapBuildDataRegistry *)0x0)) {
        UMapBuildDataRegistry::SetupLightmapResourceClusters(pUVar1);
        pUVar1 = (this->BuildData).field0_0x0.DebugPtr;
        pUVar2 = AActor::GetWorld((AActor *)this);
        UMapBuildDataRegistry::InitializeClusterRenderingResources
                  (pUVar1,pUVar2->Scene->FeatureLevel);
      }
    }
  }
  return;
}

// LinkToActor @ 148a9a830

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AMapBuildDataActor::LinkToActor(AMapBuildDataActor *this,AActor *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->ForceLinkToActor).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->ForceLinkToActor).field0_0x0.DebugPtr = param_1;
  return;
}

// PostLoad @ 148a9d580

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AMapBuildDataActor::PostLoad(AMapBuildDataActor *this)

{
  UMapBuildDataRegistry *this_00;
  UWorld *pUVar1;
  
  AActor::PostLoad((AActor *)this);
  this_00 = (this->BuildData).field0_0x0.DebugPtr;
  if (this_00 != (UMapBuildDataRegistry *)0x0) {
    UMapBuildDataRegistry::SetupLightmapResourceClusters(this_00);
  }
  pUVar1 = AActor::GetWorld((AActor *)this);
  if (pUVar1 != (UWorld *)0x0) {
    InitializeRenderingResources(this);
    return;
  }
  return;
}

// PostUnregisterAllComponents @ 148a9d6a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AMapBuildDataActor::PostUnregisterAllComponents(AMapBuildDataActor *this)

{
  UMapBuildDataRegistry *this_00;
  UWorld *pUVar1;
  
  if (((this->BuildData).field0_0x0.DebugPtr != (UMapBuildDataRegistry *)0x0) &&
     (this->bAddedToWorld != false)) {
    pUVar1 = AActor::GetWorld((AActor *)this);
    if (pUVar1 != (UWorld *)0x0) {
      pUVar1 = AActor::GetWorld((AActor *)this);
      this_00 = (((pUVar1->PersistentLevel).field0_0x0.DebugPtr)->MapBuildData).field0_0x0.DebugPtr;
      if (this_00 != (UMapBuildDataRegistry *)0x0) {
        UMapBuildDataRegistry::RemoveRegistry(this_00,(this->BuildData).field0_0x0.DebugPtr);
        this->bAddedToWorld = false;
      }
    }
  }
  ReleaseRenderingResources(this);
  AActor::PostUnregisterAllComponents((AActor *)this);
  return;
}

// PreRegisterAllComponents @ 148a9d770

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AMapBuildDataActor::PreRegisterAllComponents(AMapBuildDataActor *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  AActor::PreRegisterAllComponents((AActor *)this);
  pUVar3 = AActor::GetWorld((AActor *)this);
  if (((this->BuildData).field0_0x0.DebugPtr != (UMapBuildDataRegistry *)0x0) &&
     (this->bAddedToWorld == false)) {
    if (pUVar3 == (UWorld *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\StaticLightingData\\MapBuildDataActor.cpp"
                         ,0x54,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((((pUVar3->PersistentLevel).field0_0x0.DebugPtr)->MapBuildData).field0_0x0.DebugPtr !=
        (UMapBuildDataRegistry *)0x0) {
      this->bAddedToWorld = true;
    }
  }
  InitializeRenderingResources(this);
  return;
}

// ReleaseRenderingResources @ 148aa0980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AMapBuildDataActor::ReleaseRenderingResources(AMapBuildDataActor *this)

{
  UWorld *pUVar1;
  wchar_t *pwVar2;
  
  pUVar1 = AActor::GetWorld((AActor *)this);
  if (pUVar1 != (UWorld *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       ) {
      _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
      if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        pwVar2 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar2,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      AActor::GetWorld((AActor *)this);
      return;
    }
  }
  return;
}

// RemoveFromWorldMapBuildData @ 148aa1230

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AMapBuildDataActor::RemoveFromWorldMapBuildData(AMapBuildDataActor *this)

{
  UMapBuildDataRegistry *this_00;
  UWorld *pUVar1;
  
  if (((this->BuildData).field0_0x0.DebugPtr != (UMapBuildDataRegistry *)0x0) &&
     (this->bAddedToWorld != false)) {
    pUVar1 = AActor::GetWorld((AActor *)this);
    if (pUVar1 != (UWorld *)0x0) {
      pUVar1 = AActor::GetWorld((AActor *)this);
      this_00 = (((pUVar1->PersistentLevel).field0_0x0.DebugPtr)->MapBuildData).field0_0x0.DebugPtr;
      if (this_00 != (UMapBuildDataRegistry *)0x0) {
        UMapBuildDataRegistry::RemoveRegistry(this_00,(this->BuildData).field0_0x0.DebugPtr);
        this->bAddedToWorld = false;
      }
    }
  }
  return;
}

// SetBuildData @ 148aa2330

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
AMapBuildDataActor::SetBuildData(AMapBuildDataActor *this,UMapBuildDataRegistry *param_1)

{
  UMapBuildDataRegistry *pUVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  
  pUVar1 = (this->BuildData).field0_0x0.DebugPtr;
  if ((pUVar1 != (UMapBuildDataRegistry *)0x0) && (pUVar1 != param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!BuildData || (BuildData == MapBuildData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\StaticLightingData\\MapBuildDataActor.cpp"
                       ,0x8c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((AMapBuildDataActor *)param_1->_padding_ != this) {
    pUVar4 = AActor::GetWorld((AActor *)this);
    pUVar1 = (((pUVar4->PersistentLevel).field0_0x0.DebugPtr)->MapBuildData).field0_0x0.DebugPtr;
    if (pUVar1 == (UMapBuildDataRegistry *)0x0) {
      bVar3 = (UMapBuildDataRegistry *)param_1->_padding_ == (UMapBuildDataRegistry *)0x0;
    }
    else {
      bVar3 = pUVar1 == (UMapBuildDataRegistry *)param_1->_padding_;
    }
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MapBuildData->GetOuter() == GetWorld()->PersistentLevel->MapBuildData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\StaticLightingData\\MapBuildDataActor.cpp"
                         ,0x90,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(param_1->_padding_ + 0x170))(param_1,0,this,0x10);
    UObjectBase::AtomicallyClearFlags((UObjectBase *)param_1,RF_Standalone);
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->BuildData).field0_0x0.DebugPtr = param_1;
  return;
}

// StaticRegisterNativesAMapBuildDataActor @ 148aa2890

void __cdecl AMapBuildDataActor::StaticRegisterNativesAMapBuildDataActor(void)

{
  return;
}

