// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaPlate
// Functions: 122

// SetMediaPlateResource_WrapperImpl @ 14ea870e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl UMediaPlateComponent::SetMediaPlateResource_WrapperImpl(void *param_1,void *param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  UMediaSource *pUVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  UMediaSource *local_res8;
  FString local_38;
  FString local_28;
  
  pFVar4 = (FScriptContainerElement *)0x0;
  iVar5 = 0;
  iVar6 = *(int *)((longlong)param_2 + 0x10) + -1;
  if (*(int *)((longlong)param_2 + 0x10) == 0) {
    iVar6 = iVar5;
  }
  if (iVar6 != 0) {
    pFVar2 = ::FString::ConstructFromPtrSize(&local_38,*(wchar_t **)((longlong)param_2 + 8),iVar6);
    iVar6 = 0;
    if (&local_28 != pFVar2) {
      pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar5 = (pFVar2->Data).ArrayNum;
      iVar6 = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar2 = (FString *)((longlong)param_1 + 0xf8);
    if (pFVar2 == &local_28) {
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
    }
    else {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar2->Data).AllocatorInstance.Data = pFVar4;
      *(int *)((longlong)param_1 + 0x100) = iVar5;
      *(int *)((longlong)param_1 + 0x104) = iVar6;
    }
  }
  pUVar3 = FMediaPlateResource::GetMediaAsset(param_2);
  if (pUVar3 != (UMediaSource *)0x0) {
    local_res8 = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)((longlong)param_1 + 0x108),(FObjectPtr)&local_res8)
    ;
  }
  pUVar3 = (UMediaSource *)FMediaPlateResource::GetSourcePlaylist(param_2);
  if (pUVar3 != (UMediaSource *)0x0) {
    local_res8 = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)((longlong)param_1 + 0x130),(FObjectPtr)&local_res8)
    ;
  }
  *(undefined1 *)((longlong)param_1 + 0xf0) = *(undefined1 *)param_2;
  RefreshMediaPlateResource(param_1);
  return;
}

// StaticClass @ 14ea87230

UClass * __cdecl UMediaPlateComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaPlateComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaPlate",L"MediaPlateComponent",
               &Z_Registration_Info_UClass_UMediaPlateComponent.InnerSingleton,
               StaticRegisterNativesUMediaPlateComponent,0x268,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaPlateComponent>,
               InternalVTableHelperCtorCaller<UMediaPlateComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaPlateComponent.InnerSingleton;
}

// UMediaPlateComponent @ 14ea89490

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMediaPlateComponent * __thiscall
UMediaPlateComponent::UMediaPlateComponent(UMediaPlateComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->bPlayOnOpen = true;
  this->bAutoPlay = true;
  this->bEnableAudio = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->StartTime = 0.0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UMediaPlateComponent__6B_;
  (this->SoundComponent).field0_0x0.DebugPtr = (UMediaSoundComponent *)0x0;
  (this->StaticMeshComponent).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
  (this->Letterboxes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Letterboxes).ArrayNum = 0;
  (this->Letterboxes).ArrayMax = 0;
  FMediaPlateResource::FMediaPlateResource(&this->MediaPlateResource);
  this->PlaylistIndex = 0;
  (this->MeshRange).field0_0x0._s_0.X = 360.0;
  (this->MeshRange).field0_0x0._s_0.Y = 180.0;
  this->TimeWhenPlaybackPaused = -1.0;
  (this->CacheSettings).bOverride = false;
  (this->CacheSettings).TimeToLookAhead = 0.2;
  this->bIsMediaPlatePlaying = false;
  this->CurrentRate = 0.0;
  this->IntendedPlaybackState = Unset;
  this->PendingPlaybackState = Unset;
  this->ActualPlaybackState = Unset;
  this->bPlayOnlyWhenVisible = false;
  this->bLoop = true;
  this->MipMapBias = 0.0;
  this->bIsAspectRatioAuto = true;
  this->bEnableMipMapUpscaling = false;
  this->MipLevelToUpscale = 0x10;
  this->bAdaptivePoleMipUpscaling = true;
  this->LetterboxAspectRatio = 0.0;
  this->MatNumTexPerLayer = 2;
  (this->MediaTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MediaTextures).ArrayNum = 0;
  (this->MediaTextures).ArrayMax = 0;
  (this->MediaTextureSettings).bEnableGenMips = false;
  (this->MediaPlayer).field0_0x0.DebugPtr = (UMediaPlayer *)0x0;
  (this->ExternalMediaSource).field0_0x0.DebugPtr = (UMediaSource *)0x0;
  (this->ActivePlaylist).field0_0x0.DebugPtr = (UMediaPlaylist *)0x0;
  (this->MediaTextureTrackerObject).Object = (FMediaTextureTrackerObject *)0x0;
  (this->MediaTextureTrackerObject).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ClockSink).Object = (FMediaComponentClockSink *)0x0;
  (this->ClockSink).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bWantsToPlayWhenVisible = false;
  this->bResumeWhenOpened = false;
  (this->TextureLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureLayers).ArrayNum = 0;
  (this->TextureLayers).ArrayMax = 0;
  *(undefined8 *)&this->MediaTextureProxyCount = 0;
  *(undefined8 *)&(this->MediaTextureProxyCount).field_0x8 = 0;
  *(undefined8 *)&(this->MediaTextureProxyCount).field_0x20 = 0;
  *(undefined4 *)&(this->MediaTextureProxyCount).field_0x28 = 0;
  *(undefined4 *)&(this->MediaTextureProxyCount).field_0x2c = 0x80;
  *(undefined4 *)&(this->MediaTextureProxyCount).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MediaTextureProxyCount).field_0x34 = 0;
  *(undefined8 *)&(this->MediaTextureProxyCount).field_0x40 = 0;
  *(undefined4 *)&(this->MediaTextureProxyCount).field_0x48 = 0;
  return this;
}

// UMediaPlateComponent @ 14ea89660

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMediaPlateComponent * __thiscall
UMediaPlateComponent::UMediaPlateComponent(UMediaPlateComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->bPlayOnOpen = true;
  this->bAutoPlay = true;
  this->bEnableAudio = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->StartTime = 0.0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UMediaPlateComponent__6B_;
  (this->SoundComponent).field0_0x0.DebugPtr = (UMediaSoundComponent *)0x0;
  (this->StaticMeshComponent).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
  (this->Letterboxes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Letterboxes).ArrayNum = 0;
  (this->Letterboxes).ArrayMax = 0;
  FMediaPlateResource::FMediaPlateResource(&this->MediaPlateResource);
  (this->CacheSettings).TimeToLookAhead = 0.2;
  (this->MeshRange).field0_0x0._s_0.X = 360.0;
  (this->MeshRange).field0_0x0._s_0.Y = 180.0;
  (this->MediaTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MediaTextures).ArrayNum = 0;
  (this->MediaTextures).ArrayMax = 0;
  (this->MediaPlayer).field0_0x0.DebugPtr = (UMediaPlayer *)0x0;
  (this->ExternalMediaSource).field0_0x0.DebugPtr = (UMediaSource *)0x0;
  (this->ActivePlaylist).field0_0x0.DebugPtr = (UMediaPlaylist *)0x0;
  (this->MediaTextureTrackerObject).Object = (FMediaTextureTrackerObject *)0x0;
  (this->MediaTextureTrackerObject).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ClockSink).Object = (FMediaComponentClockSink *)0x0;
  (this->ClockSink).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->TextureLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureLayers).ArrayNum = 0;
  (this->TextureLayers).ArrayMax = 0;
  *(undefined8 *)&this->MediaTextureProxyCount = 0;
  *(undefined8 *)&(this->MediaTextureProxyCount).field_0x8 = 0;
  *(undefined8 *)&(this->MediaTextureProxyCount).field_0x20 = 0;
  this->TimeWhenPlaybackPaused = -1.0;
  this->PlaylistIndex = 0;
  this->bIsMediaPlatePlaying = false;
  this->CurrentRate = 0.0;
  this->IntendedPlaybackState = Unset;
  this->PendingPlaybackState = Unset;
  this->ActualPlaybackState = Unset;
  this->bPlayOnlyWhenVisible = false;
  this->bLoop = true;
  this->MipMapBias = 0.0;
  this->bIsAspectRatioAuto = true;
  this->bEnableMipMapUpscaling = false;
  this->MipLevelToUpscale = 0x10;
  this->bAdaptivePoleMipUpscaling = true;
  this->LetterboxAspectRatio = 0.0;
  this->MatNumTexPerLayer = 2;
  this->bWantsToPlayWhenVisible = false;
  this->bResumeWhenOpened = false;
  *(undefined4 *)&(this->MediaTextureProxyCount).field_0x28 = 0;
  *(undefined4 *)&(this->MediaTextureProxyCount).field_0x2c = 0x80;
  *(undefined4 *)&(this->MediaTextureProxyCount).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MediaTextureProxyCount).field_0x34 = 0;
  *(undefined8 *)&(this->MediaTextureProxyCount).field_0x40 = 0;
  *(undefined4 *)&(this->MediaTextureProxyCount).field_0x48 = 0;
  bVar2 = *(byte *)((longlong)&this->_padding_ + 2);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x80;
  (this->CacheSettings).bOverride = true;
  *(byte *)((longlong)&this->_padding_ + 2) = bVar2 & 0xfb | 2;
  this->VisibleMipsTilesCalculations = Plane;
  (this->MediaTextureSettings).bEnableGenMips = false;
  return this;
}

// ~UMediaPlateComponent @ 14ea89940

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMediaPlateComponent::~UMediaPlateComponent(UMediaPlateComponent *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UMediaPlateComponent__6B_;
  *(undefined4 *)&(this->MediaTextureProxyCount).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MediaTextureProxyCount).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MediaTextureProxyCount);
  DestructItems<UMediaPlateComponent::Layer,int>
            ((Layer *)(this->TextureLayers).AllocatorInstance.Data,(this->TextureLayers).ArrayNum);
  pFVar2 = (this->TextureLayers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClockSink).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MediaTextureTrackerObject).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->MediaTextures).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->MediaPlateResource).MediaAsset.SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->MediaPlateResource).ExternalMediaPath.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Letterboxes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IMediaPlayerProxyInterface__6B_;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// AddLetterboxes @ 14ea89eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMediaPlateComponent::AddLetterboxes(UMediaPlateComponent *this)

{
  int *piVar1;
  TArray<TObjectPtr<UStaticMeshComponent>,TSizedDefaultAllocator<32>_> *pTVar2;
  byte *pbVar3;
  AActor *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  USceneComponent *pUVar11;
  longlong *plVar12;
  undefined1 auStackY_198 [32];
  USceneComponent *local_148;
  undefined8 local_140;
  wchar_t *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  wchar_t *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  wchar_t *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  wchar_t *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (((this->Letterboxes).ArrayNum == 0) &&
     (this_00 = (AActor *)this->_padding_, this_00 != (AActor *)0x0)) {
    local_138 = (wchar_t *)0x0;
    iStack_130 = 0;
    local_128 = L"/MediaPlate/SM_MediaPlateScreen";
    iStack_120 = 0x1f;
    pUVar8 = Z_Construct_UClass_UStaticMesh_NoRegister();
    local_f8._12_4_ = uStack_12c;
    local_f8.Size = iStack_130;
    local_e8._12_4_ = uStack_11c;
    local_e8.Size = iStack_120;
    local_f8.DataPtr = local_138;
    local_e8.DataPtr = local_128;
    pUVar9 = StaticLoadObject(pUVar8,(UObject *)0x0,&local_e8,&local_f8,0,(UPackageMap *)0x0,true,
                              (FLinkerInstancingContext *)0x0);
    local_118 = (wchar_t *)0x0;
    iStack_110 = 0;
    local_108 = L"/MediaPlate/M_MediaPlate_Opaque";
    iStack_100 = 0x1f;
    pUVar8 = Z_Construct_UClass_UMaterial_NoRegister();
    local_d8._12_4_ = uStack_10c;
    local_d8.Size = iStack_110;
    local_c8._12_4_ = uStack_fc;
    local_c8.Size = iStack_100;
    local_d8.DataPtr = local_118;
    local_c8.DataPtr = local_108;
    pUVar10 = StaticLoadObject(pUVar8,(UObject *)0x0,&local_c8,&local_d8,0,(UPackageMap *)0x0,true,
                               (FLinkerInstancingContext *)0x0);
    if ((pUVar9 != (UObject *)0x0) && (pUVar10 != (UObject *)0x0)) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this_00,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar8 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar8);
      local_b8._8_8_ = this_00;
      pUVar11 = (USceneComponent *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar12 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar12 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if (pUVar11 != (USceneComponent *)0x0) {
        pTVar2 = &this->Letterboxes;
        local_148 = pUVar11;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar11);
        }
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_148) &&
            ((FScriptContainerElement *)&local_148 <
             pFVar4 + (longlong)(this->Letterboxes).ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = (this->Letterboxes).ArrayNum;
        piVar1 = &(this->Letterboxes).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->Letterboxes).ArrayNum = iVar7 + 1;
        *(USceneComponent **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_148;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_148 != (USceneComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_148);
        }
        AActor::AddInstanceComponent(this_00,(UActorComponent *)pUVar11);
        (**(code **)(pUVar11->_padding_ + 0x4a8))(pUVar11);
        local_140 = 0;
        (**(code **)(pUVar11->_padding_ + 0x508))
                  (pUVar11,(this_00->RootComponent).field0_0x0.DebugPtr,
                   &FAttachmentTransformRules::KeepRelativeTransform,0);
        UActorComponent::RegisterComponent((UActorComponent *)pUVar11);
        (**(code **)(pUVar11->_padding_ + 0xb28))(pUVar11,pUVar9);
        (**(code **)(pUVar11->_padding_ + 0x6b8))(pUVar11,0,pUVar10);
        pbVar3 = (byte *)((longlong)&pUVar11[1]._padding_ + 6);
        *pbVar3 = *pbVar3 & 0x9f;
        USceneComponent::SetVisibility(pUVar11,true,DirtyOnly);
      }
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this_00,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar8 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar8);
      local_b8._8_8_ = this_00;
      pUVar11 = (USceneComponent *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar12 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar12 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if (pUVar11 != (USceneComponent *)0x0) {
        pTVar2 = &this->Letterboxes;
        local_148 = pUVar11;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar11);
        }
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_148) &&
            ((FScriptContainerElement *)&local_148 <
             pFVar4 + (longlong)(this->Letterboxes).ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = (this->Letterboxes).ArrayNum;
        piVar1 = &(this->Letterboxes).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->Letterboxes).ArrayNum = iVar7 + 1;
        *(USceneComponent **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_148;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_148 != (USceneComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_148);
        }
        AActor::AddInstanceComponent(this_00,(UActorComponent *)pUVar11);
        (**(code **)(pUVar11->_padding_ + 0x4a8))(pUVar11);
        local_140 = 0;
        (**(code **)(pUVar11->_padding_ + 0x508))
                  (pUVar11,(this_00->RootComponent).field0_0x0.DebugPtr,
                   &FAttachmentTransformRules::KeepRelativeTransform,0);
        UActorComponent::RegisterComponent((UActorComponent *)pUVar11);
        (**(code **)(pUVar11->_padding_ + 0xb28))(pUVar11,pUVar9);
        (**(code **)(pUVar11->_padding_ + 0x6b8))(pUVar11,0,pUVar10);
        pbVar3 = (byte *)((longlong)&pUVar11[1]._padding_ + 6);
        *pbVar3 = *pbVar3 & 0x9f;
        USceneComponent::SetVisibility(pUVar11,true,DirtyOnly);
      }
    }
  }
  return;
}

// BeginDestroy @ 14ea8a420

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMediaPlateComponent::BeginDestroy(UMediaPlateComponent *this)

{
  code *pcVar1;
  FMediaComponentClockSink *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  UMediaPlayer *this_00;
  bool bVar4;
  FName *pFVar5;
  IModuleInterface *pIVar6;
  longlong *plVar7;
  TSharedPtr<FMediaComponentClockSink,1> *pTVar8;
  FName local_res8;
  FName local_res10;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  FMediaComponentClockSink *local_38;
  TReferenceControllerBase<1> *local_30;
  
  pTVar8 = &this->ClockSink;
  if (pTVar8->Object != (FMediaComponentClockSink *)0x0) {
    (pTVar8->Object->Owner).WeakPtr = (FWeakObjectPtr)0x0;
    pFVar5 = ::FName::FName(&local_res8,"Media");
    pIVar6 = FModuleManager::GetModulePtr_Internal(*pFVar5);
    if (pIVar6 != (IModuleInterface *)0x0) {
      plVar7 = (longlong *)(**(code **)((longlong)*pIVar6 + 0xa8))(pIVar6);
      pcVar1 = *(code **)(*plVar7 + 0x18);
      if (pTVar8->Object == (FMediaComponentClockSink *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar2 = pTVar8->Object;
      pTVar3 = (this->ClockSink).SharedReferenceCount.ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar2 == (FMediaComponentClockSink *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar1)(plVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    local_48 = 0;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->ClockSink != (TSharedPtr<FMediaComponentClockSink,1> *)&local_48) {
      (this->ClockSink).Object = (FMediaComponentClockSink *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ClockSink).SharedReferenceCount,&FStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_40.ReferenceController);
  }
  pTVar8 = &this->ClockSink;
  this_00 = (this->MediaPlayer).field0_0x0.DebugPtr;
  if (this_00 != (UMediaPlayer *)0x0) {
    UMediaPlayer::Close(this_00);
  }
  if (pTVar8->Object != (FMediaComponentClockSink *)0x0) {
    pFVar5 = ::FName::FName(&local_res10,"Media");
    pIVar6 = FModuleManager::GetModulePtr_Internal(*pFVar5);
    if (pIVar6 != (IModuleInterface *)0x0) {
      plVar7 = (longlong *)(**(code **)((longlong)*pIVar6 + 0xa8))(pIVar6);
      pcVar1 = *(code **)(*plVar7 + 0x18);
      if (pTVar8->Object == (FMediaComponentClockSink *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar2 = pTVar8->Object;
      pTVar3 = (this->ClockSink).SharedReferenceCount.ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar2 == (FMediaComponentClockSink *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38 = pFVar2;
      local_30 = pTVar3;
      (*pcVar1)(plVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  this->bIsMediaPlatePlaying = false;
  this->bWantsToPlayWhenVisible = false;
  this->bResumeWhenOpened = false;
  this->PlaylistIndex = 0;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,false);
  UActorComponent::BeginDestroy((UActorComponent *)this);
  return;
}

// BeginPlay @ 14ea8a690

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMediaPlateComponent::BeginPlay(UMediaPlateComponent *this)

{
  UActorComponent::BeginPlay((UActorComponent *)this);
  if (this->bAutoPlay != false) {
    Open(this);
    return;
  }
  return;
}

// Close @ 14ea8a6c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMediaPlateComponent::Close(UMediaPlateComponent *this)

{
  UMediaPlayer *this_00;
  
  this_00 = (this->MediaPlayer).field0_0x0.DebugPtr;
  if (this_00 != (UMediaPlayer *)0x0) {
    UMediaPlayer::Close(this_00);
  }
  StopClockSink(this);
  this->bIsMediaPlatePlaying = false;
  this->bWantsToPlayWhenVisible = false;
  this->bResumeWhenOpened = false;
  this->PlaylistIndex = 0;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,false);
  return;
}

// CreateMediaSoundComponent @ 14ea8aaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMediaSoundComponent * __thiscall
UMediaPlateComponent::CreateMediaSoundComponent(UMediaPlateComponent *this)

{
  UClass *pUVar1;
  UMediaSoundComponent *pUVar2;
  FStaticBasicLogRecord *pFVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->MediaPlayer).field0_0x0.DebugPtr == (UMediaPlayer *)0x0) {
    if ((byte)LogMediaPlate._0_1_ < 2) {
      return (UMediaSoundComponent *)0x0;
    }
    pFVar3 = &::LOG_Static;
  }
  else {
    local_a8 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = Z_Construct_UClass_UMediaSoundComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_NoFlags;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    pUVar2 = (UMediaSoundComponent *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar4 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if (pUVar2 != (UMediaSoundComponent *)0x0) {
      *(byte *)&pUVar2->_padding_ = (byte)pUVar2->_padding_ | 1;
      return pUVar2;
    }
    if ((byte)LogMediaPlate._0_1_ < 2) {
      return (UMediaSoundComponent *)0x0;
    }
    pFVar3 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar3,(FLogCategoryBase *)&LogMediaPlate);
  return (UMediaSoundComponent *)0x0;
}

// DecreaseMediaTextureProxyCount @ 14ea8abd0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMediaPlateComponent::DecreaseMediaTextureProxyCount(UMediaPlateComponent *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->MediaTextureProxyCount).field_0x8 !=
      *(int *)&(this->MediaTextureProxyCount).field_0x34) {
    puVar4 = *(undefined1 **)&(this->MediaTextureProxyCount).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->MediaTextureProxyCount).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->MediaTextureProxyCount).field_0x48 - 1U & param_1) *
                              4);
    if (iVar1 != -1) {
      while (piVar3 = (int *)((longlong)iVar1 * 0x10 +
                             *(longlong *)&(this->MediaTextureProxyCount).field_0x0),
            *piVar3 != param_1) {
        iVar1 = piVar3[2];
        if (iVar1 == -1) {
          return;
        }
      }
      piVar2 = piVar3 + 1;
      if (piVar3 == (int *)0x0) {
        piVar2 = (int *)0x0;
      }
      if ((piVar2 != (int *)0x0) && (*piVar2 = *piVar2 + -1, *piVar2 < 1)) {
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Remove
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&this->MediaTextureProxyCount,param_1);
        return;
      }
    }
  }
  return;
}

// EndPlay @ 14ea8acc0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMediaPlateComponent::EndPlay(UMediaPlateComponent *this,Type param_1)

{
  UMediaPlayer *this_00;
  
  this_00 = (this->MediaPlayer).field0_0x0.DebugPtr;
  if (this_00 != (UMediaPlayer *)0x0) {
    UMediaPlayer::Close(this_00);
  }
  StopClockSink(this);
  this->bIsMediaPlatePlaying = false;
  this->bWantsToPlayWhenVisible = false;
  this->bResumeWhenOpened = false;
  this->PlaylistIndex = 0;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,false);
  UActorComponent::EndPlay((UActorComponent *)this,param_1);
  return;
}

// GetAspectRatio @ 14ea8af70

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

float __thiscall UMediaPlateComponent::GetAspectRatio(UMediaPlateComponent *this)

{
  UStaticMeshComponent *pUVar1;
  float fVar2;
  
  pUVar1 = (this->StaticMeshComponent).field0_0x0.DebugPtr;
  fVar2 = 0.0;
  if (pUVar1 != (UStaticMeshComponent *)0x0) {
    fVar2 = 0.0;
    if ((double)pUVar1->_padding_ != 0.0) {
      fVar2 = (float)((double)pUVar1->_padding_ / (double)pUVar1->_padding_);
    }
  }
  return fVar2;
}

// GetCacheSettings @ 14ea8afe0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FMediaSourceCacheSettings * __thiscall
UMediaPlateComponent::GetCacheSettings(UMediaPlateComponent *this)

{
  return (FMediaSourceCacheSettings *)((longlong)&this->_padding_ + 4);
}

// GetForwardRate @ 14ea8b050

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

float __cdecl UMediaPlateComponent::GetForwardRate(UMediaPlayer *param_1)

{
  float fVar1;
  
  fVar1 = UMediaPlayer::GetRate(param_1);
  if (fVar1 <= __real_3f800000) {
    fVar1 = __real_3f800000;
  }
  return fVar1 + fVar1;
}

// GetLoop @ 14ea8b090

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall UMediaPlateComponent::GetLoop(UMediaPlateComponent *this)

{
  return this->bLoop;
}

// GetMediaPlayer @ 14ea8b190

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UMediaPlayer * __thiscall UMediaPlateComponent::GetMediaPlayer(UMediaPlateComponent *this)

{
  return (this->MediaPlayer).field0_0x0.DebugPtr;
}

// GetMediaPlaylist @ 14ea8b1a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UMediaPlaylist * __thiscall UMediaPlateComponent::GetMediaPlaylist(UMediaPlateComponent *this)

{
  return (this->ActivePlaylist).field0_0x0.DebugPtr;
}

// GetMediaTexture @ 14ea8b1d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMediaTexture * __thiscall
UMediaPlateComponent::GetMediaTexture(UMediaPlateComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UMediaTexture *pUVar3;
  
  if ((-1 < param_1) && (param_1 < (this->MediaTextures).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UMediaTexture *)(*pcVar1)();
        return pUVar3;
      }
    }
    return *(UMediaTexture **)((this->MediaTextures).AllocatorInstance.Data + (longlong)param_1 * 8)
    ;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (2 < (byte)LogMediaPlate._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Material_does_n_152ff70f8,
                   (FLogCategoryBase *)&LogMediaPlate);
      }
      ThreadSafeOnce274 = 1;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (UMediaTexture *)0x0;
}

// GetPrivateStaticClass @ 14ea8b460

UClass * __cdecl UMediaPlateComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaPlateComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaPlate",L"MediaPlateComponent",
               &Z_Registration_Info_UClass_UMediaPlateComponent.InnerSingleton,
               StaticRegisterNativesUMediaPlateComponent,0x268,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaPlateComponent>,
               InternalVTableHelperCtorCaller<UMediaPlateComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaPlateComponent.InnerSingleton;
}

// GetProxyRate @ 14ea8b520

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

float __thiscall UMediaPlateComponent::GetProxyRate(UMediaPlateComponent *this)

{
  return *(float *)&this->_padding_;
}

// GetResumeTime @ 14ea8b530

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FTimespan __thiscall UMediaPlateComponent::GetResumeTime(UMediaPlateComponent *this)

{
  double dVar1;
  UMediaPlayer *pUVar2;
  longlong lVar3;
  FTimespan FVar4;
  longlong *in_RDX;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong local_res8;
  
  *in_RDX = 0;
  pUVar2 = (this->MediaPlayer).field0_0x0.DebugPtr;
  if (pUVar2 != (UMediaPlayer *)0x0) {
    FVar4 = UMediaPlayer::GetTime(pUVar2);
    dVar1 = this->TimeWhenPlaybackPaused;
    lVar3 = *(longlong *)FVar4.Ticks;
    *in_RDX = lVar3;
    if (0.0 < dVar1) {
      auVar5._0_8_ = ((double)FApp::GameTime - this->TimeWhenPlaybackPaused) *
                     __real_416312d000000000 + __real_3fe0000000000000;
      auVar5._8_8_ = 0;
      auVar5 = roundpd(ZEXT816(0),auVar5,1);
      pUVar2 = (this->MediaPlayer).field0_0x0.DebugPtr;
      *in_RDX = (longlong)auVar5._0_8_ + lVar3;
      UMediaPlayer::GetDuration(pUVar2);
      if ((local_res8 < *in_RDX) && (0 < local_res8)) {
        if ((this->bLoop == false) || ((this->MediaPlateResource).Type == Playlist)) {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = __real_40c388400f906000;
          auVar5 = roundpd(auVar6,auVar6,1);
          *in_RDX = local_res8 - (longlong)auVar5._0_8_;
        }
        else {
          *in_RDX = *in_RDX % local_res8;
        }
      }
      this->TimeWhenPlaybackPaused = -1.0;
    }
  }
  return (FTimespan)(long64)in_RDX;
}

// GetReverseRate @ 14ea8b630

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

float __cdecl UMediaPlateComponent::GetReverseRate(UMediaPlayer *param_1)

{
  float fVar1;
  
  fVar1 = UMediaPlayer::GetRate(param_1);
  if (__real_bf800000 < fVar1) {
    return __real_bf800000;
  }
  return fVar1 + fVar1;
}

// GetSelectedMediaSource @ 14ea8b660

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UMediaSource * __thiscall UMediaPlateComponent::GetSelectedMediaSource(UMediaPlateComponent *this)

{
  EMediaPlateResourceType EVar1;
  UMediaSource *pUVar2;
  
  EVar1 = (this->MediaPlateResource).Type;
  if (EVar1 != Playlist) {
    if (EVar1 == External) {
      return (this->ExternalMediaSource).field0_0x0.DebugPtr;
    }
    if (EVar1 == Asset) {
      pUVar2 = FMediaPlateResource::GetMediaAsset(&this->MediaPlateResource);
      return pUVar2;
    }
  }
  return (UMediaSource *)0x0;
}

// IncreaseMediaTextureProxyCount @ 14ea8b950

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMediaPlateComponent::IncreaseMediaTextureProxyCount(UMediaPlateComponent *this,int param_1)

{
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 local_res8 [2];
  int local_res10 [2];
  int local_res18 [4];
  int *local_18;
  undefined4 *local_10;
  
  this_00 = &this->MediaTextureProxyCount;
  local_res8[0] = 0;
  if (*(int *)&(this->MediaTextureProxyCount).field_0x8 !=
      *(int *)&(this->MediaTextureProxyCount).field_0x34) {
    puVar3 = *(undefined1 **)&(this->MediaTextureProxyCount).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->MediaTextureProxyCount).field_0x38;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->MediaTextureProxyCount).field_0x48 - 1U & param_1) *
                              4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x10 + *(longlong *)&this_00->field_0x0);
        if (*piVar2 == param_1) {
          if (piVar2 != (int *)0x0) {
            piVar2[1] = piVar2[1] + 1;
            return;
          }
          break;
        }
        iVar1 = piVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_18 = local_res10;
  local_10 = local_res8;
  local_res10[0] = param_1;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  EmplaceByHash<TPairInitializer<int_const_&,int_&&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             this_00,(uint)local_res18,
             (TPairInitializer<int_const_&,int_&&> *)(ulonglong)(uint)param_1,(bool *)&local_18);
  piVar2 = (int *)((longlong)local_res18[0] * 0x10 + *(longlong *)&this_00->field_0x0 + 4);
  *piVar2 = *piVar2 + 1;
  return;
}

// IsAnyMediaTextureProxied @ 14ea8bba0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall UMediaPlateComponent::IsAnyMediaTextureProxied(UMediaPlateComponent *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar12 = 0;
  puVar1 = &(this->MediaTextureProxyCount).field_0x10;
  iVar3 = *(int *)&(this->MediaTextureProxyCount).field_0x28;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->MediaTextureProxyCount).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ea8bc4d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14ea8bc4d:
  uVar11 = *(uint *)&(this->MediaTextureProxyCount).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar12);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = iVar8;
  TStack_50.BaseBitIndex = iVar14;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->MediaTextureProxyCount).field_0x8 -
                       *(int *)&(this->MediaTextureProxyCount).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)&(this->MediaTextureProxyCount).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->MediaTextureProxyCount).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ea8bd50;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14ea8bd50:
  while( true ) {
    if (*(int *)&(this->MediaTextureProxyCount).field_0x8 -
        *(int *)&(this->MediaTextureProxyCount).field_0x34 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar11) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if (0 < *(int *)(*(longlong *)&this->MediaTextureProxyCount + 4 +
                    (longlong)TStack_50.CurrentBitIndex * 0x10)) {
      return true;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return false;
}

// IsAspectRatioAutoAllowed @ 14ea8bdd0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall UMediaPlateComponent::IsAspectRatioAutoAllowed(UMediaPlateComponent *this)

{
  if ((this->bIsAspectRatioAuto != false) && (this->VisibleMipsTilesCalculations == Plane)) {
    return true;
  }
  return false;
}

// IsEventStateChangeAllowed @ 14ea8bdf0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
UMediaPlateComponent::IsEventStateChangeAllowed
          (UMediaPlateComponent *this,EMediaPlateEventState param_1)

{
  bool bVar1;
  
  if ((param_1 != Play) && (param_1 != Open)) {
    return true;
  }
  bVar1 = IsAnyMediaTextureProxied(this);
  return !bVar1;
}

// IsExternalControlAllowed @ 14ea8be20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UMediaPlateComponent::IsExternalControlAllowed(UMediaPlateComponent *this)

{
  bool bVar1;
  
  if ((USceneComponent *)this->_padding_ != (USceneComponent *)0x0) {
    bVar1 = USceneComponent::ShouldRender((USceneComponent *)this->_padding_);
    if (bVar1) {
      if ((char)this->_padding_ != '\0') {
        bVar1 = AActor::WasRecentlyRendered
                          (*(AActor **)&this[-1].MediaTextureProxyCount.field_0x38,__real_3e4ccccd);
        return bVar1;
      }
      return true;
    }
  }
  return false;
}

// IsMediaTextureProxied @ 14ea8be80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall UMediaPlateComponent::IsMediaTextureProxied(UMediaPlateComponent *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->MediaTextureProxyCount).field_0x8 !=
      *(int *)&(this->MediaTextureProxyCount).field_0x34) {
    puVar4 = *(undefined1 **)&(this->MediaTextureProxyCount).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->MediaTextureProxyCount).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->MediaTextureProxyCount).field_0x48 - 1U & param_1) *
                              4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x10 + *(longlong *)&this->MediaTextureProxyCount);
        if (*piVar2 == param_1) {
          piVar3 = piVar2 + 1;
          if (piVar2 == (int *)0x0) {
            piVar3 = (int *)0x0;
          }
          if (piVar3 == (int *)0x0) {
            return false;
          }
          return 0 < *piVar3;
        }
        iVar1 = piVar2[2];
      } while (iVar1 != -1);
    }
  }
  return false;
}

// IsNormalMode @ 14ea8bf00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall UMediaPlateComponent::IsNormalMode(UMediaPlateComponent *this)

{
  return true;
}

// IsVisible @ 14ea8bf30

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UMediaPlateComponent::IsVisible(UMediaPlateComponent *this)

{
  UStaticMeshComponent *this_00;
  bool bVar1;
  
  this_00 = (this->StaticMeshComponent).field0_0x0.DebugPtr;
  if (this_00 != (UStaticMeshComponent *)0x0) {
    bVar1 = USceneComponent::ShouldRender((USceneComponent *)this_00);
    if (bVar1) {
      if (this->bPlayOnlyWhenVisible != false) {
        bVar1 = AActor::WasRecentlyRendered((AActor *)this->_padding_,__real_3e4ccccd);
        return bVar1;
      }
      return true;
    }
  }
  return false;
}

// Next @ 14ea8bfb0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall UMediaPlateComponent::Next(UMediaPlateComponent *this)

{
  int iVar1;
  UMediaPlaylist *this_00;
  bool bVar2;
  UMediaSource *pUVar3;
  
  this_00 = (this->ActivePlaylist).field0_0x0.DebugPtr;
  if (this_00 == (UMediaPlaylist *)0x0) {
    return false;
  }
  iVar1 = (this_00->Items).ArrayNum;
  bVar2 = false;
  if ((1 < iVar1) && ((this->PlaylistIndex < iVar1 + -1 || (this->bLoop != false)))) {
    pUVar3 = UMediaPlaylist::GetNext(this_00,&this->PlaylistIndex);
    if (pUVar3 != (UMediaSource *)0x0) {
      bVar2 = PlayMediaSource(this,pUVar3,true);
    }
  }
  return bVar2;
}

// OnComponentDestroyed @ 14ea8c030

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMediaPlateComponent::OnComponentDestroyed(UMediaPlateComponent *this,bool param_1)

{
  UMediaPlayer *this_00;
  
  this_00 = (this->MediaPlayer).field0_0x0.DebugPtr;
  if (this_00 != (UMediaPlayer *)0x0) {
    UMediaPlayer::Close(this_00);
  }
  StopClockSink(this);
  this->bIsMediaPlatePlaying = false;
  this->bWantsToPlayWhenVisible = false;
  this->bResumeWhenOpened = false;
  this->PlaylistIndex = 0;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,false);
  UActorComponent::OnComponentDestroyed((UActorComponent *)this,param_1);
  return;
}

// OnMediaEnd @ 14ea8c0a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaPlateComponent::OnMediaEnd(UMediaPlateComponent *this)

{
  StopClockSink(this);
  Next(this);
  return;
}

// OnMediaOpened @ 14ea8c180

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaPlateComponent::OnMediaOpened(UMediaPlateComponent *this,FString *param_1)

{
  UMediaPlayer *pUVar1;
  FScriptContainerElement *pFVar2;
  FTimespan local_res8;
  
  if (this->bResumeWhenOpened != false) {
    pUVar1 = (this->MediaPlayer).field0_0x0.DebugPtr;
    this->bResumeWhenOpened = false;
    this->bIsMediaPlatePlaying = true;
    if (pUVar1 != (UMediaPlayer *)0x0) {
      GetResumeTime(this);
      UMediaPlayer::Seek((this->MediaPlayer).field0_0x0.DebugPtr,&local_res8);
    }
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// OnMediaResumed @ 14ea8c1f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaPlateComponent::OnMediaResumed(UMediaPlateComponent *this)

{
  this->ActualPlaybackState = Playing;
  return;
}

// OnMediaSuspended @ 14ea8c210

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaPlateComponent::OnMediaSuspended(UMediaPlateComponent *this)

{
  this->ActualPlaybackState = Paused;
  return;
}

// OnRegister @ 14ea8c230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UMediaPlateComponent::OnRegister(UMediaPlateComponent *this)

{
  UMediaSoundComponent *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UMediaPlayer *pUVar4;
  char *pcVar5;
  UObject *this_01;
  UFunction *pUVar6;
  char *pcVar7;
  longlong *plVar8;
  char *pcVar9;
  undefined1 auStack_1d8 [32];
  char *local_1b8;
  <lambda_1> local_1a8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a0;
  FWeakObjectPtr local_198;
  FName local_190;
  code *local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  FName local_178;
  FName local_170;
  UMediaPlateComponent *local_168;
  FName *local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_140;
  FDestructionSentinel local_130;
  code *local_118;
  longlong lStack_110;
  code *local_108;
  longlong lStack_100;
  code *local_f8;
  longlong lStack_f0;
  FReadAccessScope local_e8;
  FReadAccessScope local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  UActorComponent::OnRegister((UActorComponent *)this);
  if ((this->MediaTextures).ArrayNum == 0) {
    SetNumberOfTextures(this,1);
  }
  if ((this->MediaPlayer).field0_0x0.DebugPtr == (UMediaPlayer *)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UMediaPlayer_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar3);
    local_b8._8_8_ = this;
    pUVar4 = (UMediaPlayer *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar8 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMediaPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->MediaPlayer).field0_0x0.DebugPtr = pUVar4;
    UMediaPlayer::SetLooping(pUVar4,false);
    ((this->MediaPlayer).field0_0x0.DebugPtr)->PlayOnOpen = false;
  }
  pUVar4 = (this->MediaPlayer).field0_0x0.DebugPtr;
  pcVar5 = strstr("&UMediaPlateComponent::OnMediaOpened","::");
  pcVar9 = &DAT_00000002;
  if (pcVar5 == (char *)0x0) {
LAB_14ea8c37a:
    pcVar7 = &DAT_00000002;
LAB_14ea8c37d:
    local_1b8 = "&UMediaPlateComponent::OnMediaOpened";
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar7 = pcVar5;
      pcVar5 = strstr(pcVar7 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_14ea8c37a;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14ea8c37d;
  }
  ::FName::FName(&local_170,pcVar7);
  local_1a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_198.ObjectIndex = 0;
  local_198.ObjectSerialNumber = 0;
  local_168 = this;
  if (this == (UMediaPlateComponent *)0x0) {
    local_168 = (UMediaPlateComponent *)0x0;
  }
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  local_178 = local_170;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_168 != (UMediaPlateComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_168);
  }
  FWeakObjectPtr::operator=(&local_198,(FObjectPtr)&local_168);
  local_190 = local_178;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_1a0,&local_e8);
  if ((local_190 == (FName)0x0) ||
     (this_01 = FWeakObjectPtr::Get(&local_198), this_01 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e8);
LAB_14ea8c45c:
    local_160 = &local_178;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,FString>::
    __Internal_BindDynamic<UMediaPlateComponent>'::__l2::<lambda_1>::operator()(&local_160);
  }
  else {
    pUVar6 = UObject::FindFunction(this_01,local_190);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e8);
    if (pUVar6 == (UFunction *)0x0) goto LAB_14ea8c45c;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_1a0,&local_d0);
  local_140.Object = local_198;
  local_140.FunctionName = local_190;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar4->OnMediaOpened,
             (FWriteAccessScope *)&local_130);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar4->OnMediaOpened).field_0x8,&local_140);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar4->OnMediaOpened).field_0x8,local_1a8,Default);
  if (local_130.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a0.AccessDetector);
  pUVar4 = (this->MediaPlayer).field0_0x0.DebugPtr;
  pcVar5 = strstr("&UMediaPlateComponent::OnMediaEnd","::");
  if (pcVar5 == (char *)0x0) {
LAB_14ea8c53a:
    pcVar7 = &DAT_00000002;
LAB_14ea8c53d:
    local_1b8 = "&UMediaPlateComponent::OnMediaEnd";
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar7 = pcVar5;
      pcVar5 = strstr(pcVar7 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_14ea8c53a;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14ea8c53d;
  }
  ::FName::FName(&local_158,pcVar7);
  local_188 = OnMediaEnd;
  uStack_180 = 0;
  lStack_110 = (ulonglong)uStack_17c << 0x20;
  local_118 = OnMediaEnd;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
  __Internal_AddUniqueDynamic<UMediaPlateComponent>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *)&pUVar4->OnEndReached
             ,this,(pmf_95c49926 *)&local_118,local_158);
  pUVar4 = (this->MediaPlayer).field0_0x0.DebugPtr;
  pcVar5 = strstr("&UMediaPlateComponent::OnMediaResumed","::");
  if (pcVar5 == (char *)0x0) {
LAB_14ea8c5fa:
    pcVar7 = &DAT_00000002;
LAB_14ea8c5fd:
    local_1b8 = "&UMediaPlateComponent::OnMediaResumed";
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar7 = pcVar5;
      pcVar5 = strstr(pcVar7 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_14ea8c5fa;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14ea8c5fd;
  }
  ::FName::FName(&local_150,pcVar7);
  local_188 = OnMediaResumed;
  uStack_180 = 0;
  lStack_100 = (ulonglong)uStack_17c << 0x20;
  local_108 = OnMediaResumed;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
  __Internal_AddUniqueDynamic<UMediaPlateComponent>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *)
             &pUVar4->OnPlaybackResumed,this,(pmf_95c49926 *)&local_108,local_150);
  pUVar4 = (this->MediaPlayer).field0_0x0.DebugPtr;
  pcVar5 = strstr("&UMediaPlateComponent::OnMediaSuspended","::");
  if (pcVar5 != (char *)0x0) {
    do {
      pcVar7 = pcVar5;
      pcVar5 = strstr(pcVar7 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if ((pcVar7 != (char *)0x0) && (pcVar9 = pcVar7 + 2, pcVar7[2] != '0')) goto LAB_14ea8c6e8;
  }
  local_1b8 = "&UMediaPlateComponent::OnMediaSuspended";
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14ea8c6e8:
  ::FName::FName(&local_148,pcVar9);
  local_188 = OnMediaSuspended;
  uStack_180 = 0;
  lStack_f0 = (ulonglong)uStack_17c << 0x20;
  local_f8 = OnMediaSuspended;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
  __Internal_AddUniqueDynamic<UMediaPlateComponent>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *)
             &pUVar4->OnPlaybackSuspended,this,(pmf_95c49926 *)&local_f8,local_148);
  SetUpTextures(this,AllowSetPlayer);
  this_00 = (this->SoundComponent).field0_0x0.DebugPtr;
  if ((this_00 != (UMediaSoundComponent *)0x0) &&
     (pUVar4 = (this->MediaPlayer).field0_0x0.DebugPtr, pUVar4 != (UMediaPlayer *)0x0)) {
    UMediaSoundComponent::SetMediaPlayer(this_00,pUVar4);
  }
  RegisterWithMediaTextureTracker(this);
  return;
}

// OnUnregister @ 14ea8c790

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMediaPlateComponent::OnUnregister(UMediaPlateComponent *this)

{
  UActorComponent::OnUnregister((UActorComponent *)this);
  UnregisterWithMediaTextureTracker(this);
  return;
}

// Open @ 14ea8c7c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMediaPlateComponent::Open(UMediaPlateComponent *this)

{
  UStaticMeshComponent *this_00;
  UMediaPlaylist *this_01;
  bool bVar1;
  UMediaSource *pUVar2;
  float fVar3;
  void *local_18 [2];
  
  this->bIsMediaPlatePlaying = true;
  fVar3 = __real_3f800000;
  if (this->bPlayOnOpen == false) {
    fVar3 = 0.0;
  }
  this->CurrentRate = fVar3;
  this_00 = (this->StaticMeshComponent).field0_0x0.DebugPtr;
  this->PendingPlaybackState = Unset;
  this->ActualPlaybackState = Paused;
  this->IntendedPlaybackState = (this->bPlayOnOpen != false) + Paused;
  this->TimeWhenPlaybackPaused = -1.0;
  this->PlaylistIndex = 0;
  if (((this_00 == (UStaticMeshComponent *)0x0) ||
      (bVar1 = USceneComponent::ShouldRender((USceneComponent *)this_00), !bVar1)) ||
     ((this->bPlayOnlyWhenVisible != false &&
      (bVar1 = AActor::WasRecentlyRendered((AActor *)this->_padding_,__real_3e4ccccd), !bVar1)))) {
    this->bWantsToPlayWhenVisible = true;
    this->TimeWhenPlaybackPaused = (double)FApp::GameTime;
  }
  else if ((this->MediaPlayer).field0_0x0.DebugPtr == (UMediaPlayer *)0x0) {
    if (2 < (byte)LogMediaPlate._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaPlate);
    }
  }
  else {
    this_01 = (this->ActivePlaylist).field0_0x0.DebugPtr;
    if ((this_01 == (UMediaPlaylist *)0x0) ||
       (pUVar2 = UMediaPlaylist::Get(this_01,this->PlaylistIndex), pUVar2 == (UMediaSource *)0x0)) {
      if (2 < (byte)LogMediaPlate._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaPlate);
      }
    }
    else {
      bVar1 = PlayMediaSource(this,pUVar2,this->bPlayOnOpen);
      if ((!bVar1) && (2 < (byte)LogMediaPlate._0_1_)) {
        (**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2,local_18);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaPlate);
        if (local_18[0] != (void *)0x0) {
          FMemory::Free(local_18[0]);
        }
      }
    }
  }
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,this->bIsMediaPlatePlaying)
  ;
  return;
}

// OpenLatent @ 14ea8c980

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMediaPlateComponent::OpenLatent
          (UMediaPlateComponent *this,UObject *param_1,FLatentActionInfo *param_2,float param_3,
          bool param_4,bool *param_5)

{
  bool *pbVar1;
  UWorld *this_00;
  FLatentActionManager *this_01;
  FMediaPlateOpenLatentAction *pFVar2;
  FMediaPlateOpenLatentAction *this_02;
  
  pbVar1 = param_5;
  *param_5 = false;
  this_00 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (this_00 != (UWorld *)0x0) {
    this_01 = UWorld::GetLatentActionManager(this_00);
    pFVar2 = FLatentActionManager::
             FindExistingActionWithPredicate<FMediaPlateOpenLatentAction,_FLatentActionManager::FindExistingAction<FMediaPlateOpenLatentAction>_::__l2::FFirstItemPredicate>
                       (this_01,(param_2->CallbackTarget).field0_0x0.DebugPtr,param_2->UUID,
                        (FFirstItemPredicate *)&param_5);
    if (pFVar2 == (FMediaPlateOpenLatentAction *)0x0) {
      this_02 = ::operator_new(0x58);
      pFVar2 = (FMediaPlateOpenLatentAction *)0x0;
      if (this_02 != (FMediaPlateOpenLatentAction *)0x0) {
        pFVar2 = FMediaPlateOpenLatentAction::FMediaPlateOpenLatentAction
                           (this_02,param_2,this,param_3,param_4,pbVar1);
      }
      FLatentActionManager::AddNewAction
                (this_01,(param_2->CallbackTarget).field0_0x0.DebugPtr,param_2->UUID,
                 (FPendingLatentAction *)pFVar2);
    }
  }
  return;
}

// Pause @ 14ea8ca50

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaPlateComponent::Pause(UMediaPlateComponent *this)

{
  this->IntendedPlaybackState = Paused;
  this->CurrentRate = 0.0;
  return;
}

// Play @ 14ea8ca70

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaPlateComponent::Play(UMediaPlateComponent *this)

{
  this->IntendedPlaybackState = Playing;
  this->CurrentRate = 1.0;
  return;
}

// PlayMediaSource @ 14ea8ca90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
UMediaPlateComponent::PlayMediaSource(UMediaPlateComponent *this,UMediaSource *param_1,bool param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  TSparseSetElement<TTuple<FName,FVariant>_> *pTVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  undefined7 uVar16;
  FName *pFVar15;
  uint uVar17;
  TSparseSetElement<TTuple<FName,FVariant>_> *pTVar18;
  ForElementType<unsigned_int> FVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auStackY_258 [32];
  FSparseArrayAllocationInfo local_228;
  FVariant local_218;
  uint uStack_200;
  undefined4 uStack_1fc;
  undefined1 local_1f8 [12];
  uint uStack_1ec;
  FScriptContainerElement *pFStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_1c8;
  undefined1 local_118 [120];
  undefined1 local_a0 [16];
  TBitArray<FDefaultBitArrayAllocator> local_90;
  undefined8 uStack_70;
  undefined1 local_68 [8];
  ForAnyElementType local_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  if ((param_1 == (UMediaSource *)0x0) ||
     ((this->MediaPlayer).field0_0x0.DebugPtr == (UMediaPlayer *)0x0)) {
    return false;
  }
  local_118._0_8_ = ___xmm_ffffffffffffffffffffffff00000000;
  local_118._8_8_ = _UNK_15076cba8;
  local_118[0x71] = !param_2 + Enabled;
  local_90._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_70 = _UNK_150631d98;
  pTVar12 = (TSparseSetElement<TTuple<FName,FVariant>_> *)0x0;
  local_118._16_4_ = -1;
  local_118._20_4_ = -1;
  local_118._24_4_ = 0;
  auVar22._0_8_ = (double)(this->StartTime * __real_4b189680 + __real_3f000000);
  auVar22._8_8_ = 0;
  local_118._32_8_ = (FScriptContainerElement *)0x0;
  local_118._40_4_ = 0;
  local_118._44_4_ = 0;
  local_118._48_8_ = (FScriptContainerElement *)0x0;
  local_118._56_4_ = 0;
  local_118._60_4_ = 0;
  local_118._64_8_ = (FScriptContainerElement *)0x0;
  local_118._72_4_ = 0;
  local_118._76_4_ = 0;
  auVar22 = roundpd(auVar22,auVar22,1);
  local_118._104_8_ = (undefined8)auVar22._0_8_;
  local_118._80_8_ = (FScriptContainerElement *)0x0;
  local_118._88_4_ = 0;
  local_118._92_4_ = 0;
  local_118[0x60] = UseTrackOptionIndices;
  local_118[0x70] = RelativeToStartTime;
  local_a0._0_4_ = 0;
  local_a0._4_4_ = 0;
  local_a0._8_8_ = 0;
  local_90.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  if ((this->bLoop == false) ||
     (local_118[0x72] = Enabled, (this->MediaPlateResource).Type == Playlist)) {
    local_118[0x72] = Disabled;
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x9d4c) <
       `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment_Preview(void)'::__l2
       ::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment_Preview(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment_Preview(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment_Preview(void)'
                    ::__l2::OptName,L"Preview");
    _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment_Preview(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar2 + 0x9d4c) <
       `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment(void)'
                    ::__l2::OptName,L"Environment");
    _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_1f8._0_8_ =
       &`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment(void)'::__l2::
        OptName;
  stack0xfffffffffffffe10 =
       &`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::Environment_Preview(void)'::
        __l2::OptName;
  if (uStack_70._4_4_ == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)local_a0,(int *)(local_a0 + 8),
                       (int *)(local_a0 + 0xc));
    iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),1);
    FVar19 = (ForElementType<unsigned_int>)((longlong)local_a0 + 0x10);
    if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_90.AllocatorInstance.SecondaryData;
    }
    uVar8 = iVar7 >> 0x1f & 0x1f;
    iVar7 = iVar7 + uVar8;
    puVar1 = (uint *)((longlong)FVar19 + (longlong)(iVar7 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << (((byte)iVar7 & 0x1f) - (char)uVar8 & 0x1f));
  }
  else {
    iVar6 = (int)uStack_70;
    uStack_70._4_4_ = uStack_70._4_4_ + -1;
    uStack_70._0_4_ = *(int *)(local_a0._0_8_ + (longlong)(int)uStack_70 * 0x28 + 4);
    if (uStack_70._4_4_ != 0) {
      *(undefined4 *)(local_a0._0_8_ + (longlong)(int)uStack_70 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_a0,&local_228,iVar6);
  pTVar18 = pTVar12;
  if (local_228.Pointer != (TSparseSetElement<TTuple<FName,FVariant>_> *)0x0) {
    TPairInitializer<FName_const_&,FName_const_&>::operator<FName,FVariant>_TTuple<FName,FVariant>
              ((TPairInitializer<FName_const_&,FName_const_&> *)local_1f8,local_228.Pointer);
    *(undefined4 *)((longlong)local_228.Pointer + 0x20) = 0xffffffff;
    pTVar18 = local_228.Pointer;
  }
  uVar3 = *(undefined8 *)pTVar18;
  uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar8 = uVar8 + (int)((ulonglong)uVar3 >> 0x20);
  FVar14.Data._4_4_ = 0;
  FVar14.Data._0_4_ = uVar8;
  bVar5 = TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
          ::TryReplaceExisting
                    ((TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
                      *)local_a0,uVar8,pTVar18,(int *)&local_228,(bool *)0x0);
  if (bVar5) goto LAB_14ea8d00a;
  uVar17 = 1;
  uVar13 = local_a0._8_4_ - uStack_70._4_4_;
  if (3 < uVar13) {
    uVar20 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar10 & 0x1f);
  }
  if (((int)uVar13 < 1) || ((int)uVar17 <= (int)local_58)) {
    FVar14.Data._0_4_ = local_58 - 1 & uVar8;
    FVar14.Data._4_4_ = 0;
    *(uint *)&pTVar18->field_0x24 = (uint)FVar14.Data;
    FVar11.Data = (FScriptContainerElement *)local_68;
    if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0) {
      FVar11.Data = local_60.Data;
    }
    uVar20 = (longlong)(int)local_58 - 1U & (longlong)(int)(uint)FVar14.Data;
    *(undefined4 *)&pTVar18->field_0x20 = *(undefined4 *)((longlong)FVar11.Data + uVar20 * 4);
    *(int *)((longlong)FVar11.Data + uVar20 * 4) = local_228.Index;
    goto LAB_14ea8d00a;
  }
  local_58 = uVar17;
  if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,4);
  }
  FVar14.Data = local_60.Data;
  if (uVar17 != 0) {
    uVar8 = uVar17;
    if (uVar17 < 2) {
      if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0) {
        uVar8 = 0;
        goto LAB_14ea8cddf;
      }
    }
    else {
LAB_14ea8cddf:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,uVar8,4);
    }
    FVar14.Data = local_60.Data;
    if (0 < (int)uVar17) {
      uVar20 = (ulonglong)uVar17;
      pTVar18 = pTVar12;
      do {
        FVar14.Data = local_60.Data;
        FVar11.Data = (FScriptContainerElement *)local_68;
        if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0) {
          FVar11.Data = local_60.Data;
        }
        uVar9 = (ulonglong)pTVar18 & (longlong)(int)uVar17 - 1U;
        pTVar18 = (TSparseSetElement<TTuple<FName,FVariant>_> *)&pTVar18->field_0x1;
        *(undefined4 *)((longlong)FVar11.Data + uVar9 * 4) = 0xffffffff;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if (local_58 != 0) {
    local_218.Value.AllocatorInstance.Data = (FScriptContainerElement *)(local_a0 + 0x10);
    local_218.Type = Empty;
    local_218._4_4_ = 1;
    local_218.Value.ArrayMax = 0;
    uStack_200 = 0;
    if (local_90.NumBits != 0) {
      FVar19 = (ForElementType<unsigned_int>)((longlong)local_a0 + 0x10);
      if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_90.AllocatorInstance.SecondaryData;
      }
      uVar8 = *(uint *)FVar19;
      pTVar18 = pTVar12;
      while (FVar14.Data._4_4_ = 0, FVar14.Data._0_4_ = uVar8, uVar8 == 0) {
        uStack_200 = (int)pTVar18 + 0x20;
        pTVar18 = (TSparseSetElement<TTuple<FName,FVariant>_> *)(ulonglong)uStack_200;
        iVar6 = (int)pTVar12;
        local_218.Type = iVar6 + Ansichar;
        pTVar12 = (TSparseSetElement<TTuple<FName,FVariant>_> *)(ulonglong)local_218.Type;
        if ((int)(((int)(local_90.NumBits - 1U) >> 0x1f & 0x1fU) + (local_90.NumBits - 1U)) >> 5 <
            (int)local_218.Type) goto LAB_14ea8cf01;
        uVar8 = ((uint *)((longlong)FVar19 + 4))[iVar6];
      }
      local_218._4_4_ = ~(uVar8 - 1) & uVar8;
      uVar20 = (ulonglong)(uint)local_218._4_4_ * 2 + 1;
      lVar10 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_218.Value.ArrayMax = (int)lVar10 + -1 + uStack_200;
      pTVar12 = (TSparseSetElement<TTuple<FName,FVariant>_> *)
                (ulonglong)(uint)local_218.Value.ArrayMax;
      if (local_90.NumBits < local_218.Value.ArrayMax) {
LAB_14ea8cf01:
        pTVar12 = (TSparseSetElement<TTuple<FName,FVariant>_> *)(local_90._24_8_ & 0xffffffff);
        local_218.Value.ArrayMax = local_90.NumBits;
      }
    }
    local_218.Value.ArrayNum = -1;
    local_1f8._0_8_ = local_a0;
    local_1f8._8_4_ = local_218.Type;
    uStack_1ec = local_218._4_4_;
    local_1e0 = CONCAT44(local_218.Value.ArrayMax,0xffffffff);
    uStack_1d8 = CONCAT44(uStack_1fc,uStack_200);
    pFStack_1e8 = local_218.Value.AllocatorInstance.Data;
    if ((int)pTVar12 < local_90.NumBits) {
      do {
        FVar4 = *(FName *)local_1f8._0_8_;
        lVar10 = (longlong)(int)pTVar12;
        uVar3 = *(undefined8 *)((longlong)FVar4 + lVar10 * 0x28);
        uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        FVar14.Data._0_4_ = local_58 - 1 & uVar8 + (int)((ulonglong)uVar3 >> 0x20);
        FVar14.Data._4_4_ = 0;
        *(uint *)((longlong)FVar4 + 0x24 + lVar10 * 0x28) = (uint)FVar14.Data;
        FVar11.Data = (FScriptContainerElement *)local_68;
        if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0) {
          FVar11.Data = local_60.Data;
        }
        uVar20 = (longlong)(int)local_58 - 1U & (longlong)(int)(uint)FVar14.Data;
        *(undefined4 *)((longlong)FVar4 + 0x20 + lVar10 * 0x28) =
             *(undefined4 *)((longlong)FVar11.Data + uVar20 * 4);
        *(int *)((longlong)FVar11.Data + uVar20 * 4) = (int)pTVar12;
        local_1e0 = CONCAT44(local_1e0._4_4_,(uint)local_1e0 & ~uStack_1ec);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_1f8 + 8));
        pTVar12 = (TSparseSetElement<TTuple<FName,FVariant>_> *)(ulonglong)local_1e0._4_4_;
      } while ((int)local_1e0._4_4_ < *(int *)(pFStack_1e8 + 0x18));
    }
  }
LAB_14ea8d00a:
  bVar5 = (this->CacheSettings).bOverride;
  stack0xfffffffffffffe10 = (FName *)0x0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  pFStack_1e8 = (FScriptContainerElement *)0x0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_228.Index = 0;
  local_228._4_4_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_1c8);
  local_1c8.Bytes = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(local_1f8 + 8);
  local_1c8._padding_ = 0;
  uVar16 = SUB87(FVar14.Data,1);
  local_1c8.ArchiveName.ComparisonIndex.Value = local_228.Index;
  local_1c8.ArchiveName.Number = local_228._4_4_;
  local_1c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  FArchiveState::SetIsSaving((FArchiveState *)&local_1c8,true);
  (**(code **)(local_1c8._padding_ + 0x108))(&local_1c8,CONCAT71(uVar16,1));
  local_1c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  if (*(ulonglong *)(local_1c8._padding_ + 8) < *(ulonglong *)local_1c8._padding_ + 4) {
    uVar8 = local_228._4_4_;
    local_228._0_8_ = local_228._0_8_ & 0xffffffff00000000;
    if ((local_1c8._padding_ & 1U) == 0) {
      local_228.Index._1_3_ = 0;
      local_228.Index._0_1_ = bVar5 != false;
      local_228._4_4_ = uVar8;
    }
    TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,(FName *)&local_228,4);
    if (1 < (uint)local_228.Index) {
      FArchiveState::SetError((FArchiveState *)&local_1c8);
    }
  }
  else {
    *(ulonglong *)local_1c8._padding_ = *(ulonglong *)local_1c8._padding_ + 4;
  }
  local_1f8._0_4_ = 2;
  FArchive::~FArchive((FArchive *)&local_1c8);
  if ((*(int *)(lVar2 + 0x9d4c) <
       `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheEnabled(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheEnabled(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheEnabled(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheEnabled(void)'
                    ::__l2::OptName,L"ImgMediaSmartCacheEnabled");
    _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheEnabled(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar15 = &`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheEnabled(void)'
             ::__l2::OptName;
  TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>::
  Emplace<FName_const_&,FVariant>
            ((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
              *)local_a0,
             &`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheEnabled(void)'
              ::__l2::OptName,(FVariant *)local_1f8);
  if (stack0xfffffffffffffe10 != (FName *)0x0) {
    FMemory::Free(stack0xfffffffffffffe10);
  }
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_218.Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_218.Value.ArrayNum = 0;
  local_218.Value.ArrayMax = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1f8._0_4_ = 0;
  local_1f8._4_4_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_1c8._padding_ = 0;
  local_228.Index = (int)(this->CacheSettings).TimeToLookAhead;
  FArchiveState::FArchiveState((FArchiveState *)&local_1c8);
  local_1c8.Bytes = &local_218.Value;
  local_1c8._padding_ = 0;
  uVar16 = (undefined7)((ulonglong)pFVar15 >> 8);
  local_1c8.ArchiveName.ComparisonIndex.Value = local_1f8._0_4_;
  local_1c8.ArchiveName.Number = local_1f8._4_4_;
  local_1c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  FArchiveState::SetIsSaving((FArchiveState *)&local_1c8,true);
  (**(code **)(local_1c8._padding_ + 0x108))(&local_1c8,CONCAT71(uVar16,1));
  local_1c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  if (*(float **)(local_1c8._padding_ + 8) < *(float **)local_1c8._padding_ + 1) {
    if ((local_1c8._padding_ & 0x10000U) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1c8,(FName *)&local_228,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1c8,(uint *)&local_228);
    }
  }
  else {
    local_228.Index = (int)**(float **)local_1c8._padding_;
    *(longlong *)local_1c8._padding_ = *(longlong *)local_1c8._padding_ + 4;
  }
  local_218.Type = Float;
  FArchive::~FArchive((FArchive *)&local_1c8);
  if ((*(int *)(lVar2 + 0x9d4c) <
       `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead(void)'
                    ::__l2::OptName,L"ImgMediaSmartCacheTimeToLookAhead");
    _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>::
  Emplace<FName_const_&,FVariant>
            ((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
              *)local_a0,
             &`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead(void)'
              ::__l2::OptName,&local_218);
  if (local_218.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Value.AllocatorInstance.Data);
  }
  bVar5 = UMediaPlayer::OpenSourceWithOptions
                    ((this->MediaPlayer).field0_0x0.DebugPtr,param_1,
                     (FMediaPlayerOptions *)local_118);
  if (bVar5) {
    TryActivateAspectRatioAuto(this);
  }
  local_58 = 0;
  if ((ForElementType<FSetElementId>)local_60.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_60.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a0,0,local_a0._8_4_);
  bVar21 = local_a0._12_4_ != 0;
  local_a0._8_8_ = (ulonglong)(uint)local_a0._12_4_ << 0x20;
  if (bVar21) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
  }
  iVar6 = local_90.MaxBits;
  local_90._24_8_ = (ulonglong)(uint)local_90.MaxBits << 0x20;
  uStack_70 = 0xffffffff;
  if (0x80 < (uint)iVar6) {
    local_90.NumBits = 0;
    local_90.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
  }
  if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
  }
  if ((FName)local_a0._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_a0._0_8_);
  }
  if ((FScriptContainerElement *)local_118._80_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._80_8_);
  }
  if ((FScriptContainerElement *)local_118._64_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._64_8_);
  }
  if ((FScriptContainerElement *)local_118._48_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._48_8_);
  }
  if ((FScriptContainerElement *)local_118._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._32_8_);
  }
  return bVar5;
}

// PlayOnlyWhenVisibleChanged @ 14ea8d4c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaPlateComponent::PlayOnlyWhenVisibleChanged(UMediaPlateComponent *this)

{
  UMediaPlayer *this_00;
  bool bVar1;
  
  if (this->bPlayOnlyWhenVisible != false) {
    return;
  }
  this_00 = (this->MediaPlayer).field0_0x0.DebugPtr;
  if (this_00 != (UMediaPlayer *)0x0) {
    if (this->ActualPlaybackState == Paused) {
      if ((this->CurrentRate != 0.0) && (this->PendingPlaybackState == Unset)) {
        this->IntendedPlaybackState = Resume;
        return;
      }
    }
    else if ((this->bWantsToPlayWhenVisible != false) && (this->bResumeWhenOpened == false)) {
      bVar1 = UMediaPlayer::IsPreparing(this_00);
      if ((!bVar1) && (this->ActualPlaybackState == Paused)) {
        this->bWantsToPlayWhenVisible = false;
        this->bResumeWhenOpened = true;
        Open(this);
        return;
      }
    }
  }
  return;
}

// Previous @ 14ea8d5a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall UMediaPlateComponent::Previous(UMediaPlateComponent *this)

{
  UMediaPlaylist *this_00;
  bool bVar1;
  UMediaSource *pUVar2;
  
  this_00 = (this->ActivePlaylist).field0_0x0.DebugPtr;
  if (this_00 == (UMediaPlaylist *)0x0) {
    return false;
  }
  bVar1 = false;
  if ((1 < (this_00->Items).ArrayNum) && (0 < this->PlaylistIndex)) {
    pUVar2 = UMediaPlaylist::GetPrevious(this_00,&this->PlaylistIndex);
    if (pUVar2 != (UMediaSource *)0x0) {
      bVar1 = PlayMediaSource(this,pUVar2,true);
    }
  }
  return bVar1;
}

// ProxyGetMediaSourceFromIndex @ 14ea8d610

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UMediaSource * __thiscall
UMediaPlateComponent::ProxyGetMediaSourceFromIndex(UMediaPlateComponent *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UMediaSource *pUVar5;
  
  lVar1 = *(longlong *)&(this->MediaPlateResource).MediaAsset.SoftObjectPtr.field_0x8;
  if (lVar1 == 0) {
    return (UMediaSource *)0x0;
  }
  if ((-1 < param_1) && (param_1 < *(int *)(lVar1 + 0x30))) {
    uVar4 = 0;
    if (param_1 < *(int *)(lVar1 + 0x30)) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UMediaSource *)(*pcVar2)();
        return pUVar5;
      }
    }
    return *(UMediaSource **)(*(longlong *)(lVar1 + 0x28) + (longlong)param_1 * 8);
  }
  return (UMediaSource *)0x0;
}

// ProxyGetMediaTexture @ 14ea8d630

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UMediaTexture * __thiscall
UMediaPlateComponent::ProxyGetMediaTexture(UMediaPlateComponent *this,int param_1,int param_2)

{
  undefined1 *puVar1;
  TArray<TObjectPtr<UMediaTexture>,TSizedDefaultAllocator<32>_> *this_00;
  int *this_01;
  undefined1 *this_02;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  UMediaTexture *pUVar8;
  uint *puVar9;
  int *piVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint local_res8 [2];
  uint local_res18 [2];
  undefined4 local_res20 [2];
  int local_68 [2];
  longlong local_60;
  UMediaPlateComponent *local_58;
  UMediaTexture *local_50;
  uint *local_48;
  undefined4 *local_40;
  
  this_00 = &this[-1].MediaTextures;
  local_res18[0] = param_2;
  local_58 = (UMediaPlateComponent *)this_00;
  local_50 = GetMediaTexture((UMediaPlateComponent *)this_00,param_2);
  if (local_50 != (UMediaTexture *)0x0) {
    this_01 = &this->PlaylistIndex;
    uVar12 = 0;
    local_res8[0] = local_res18[0];
    local_res20[0] = 0;
    if ((this->CacheSettings).TimeToLookAhead != this->LetterboxAspectRatio) {
      piVar10 = (int *)(this->MeshRange).field0_0x0._s_0.X;
      if (piVar10 == (int *)0x0) {
        piVar10 = &this->MatNumTexPerLayer;
      }
      uVar13 = piVar10[*(int *)((longlong)&(this->MeshRange).field0_0x0 + 8) - 1U & local_res18[0]];
      if (uVar13 != 0xffffffff) {
        do {
          puVar9 = (uint *)((longlong)(int)uVar13 * 0x10 + *(longlong *)this_01);
          if (*puVar9 == local_res18[0]) {
            if (puVar9 != (uint *)0x0) goto LAB_14ea8d71b;
            break;
          }
          uVar13 = puVar9[2];
        } while (uVar13 != 0xffffffff);
      }
    }
    local_48 = local_res8;
    local_40 = local_res20;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    EmplaceByHash<TPairInitializer<int_const_&,int_&&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               this_01,(uint)local_68,
               (TPairInitializer<int_const_&,int_&&> *)(ulonglong)local_res18[0],(bool *)&local_48);
    puVar9 = (uint *)((longlong)local_68[0] * 0x10 + *(longlong *)this_01);
LAB_14ea8d71b:
    puVar9[1] = puVar9[1] + 1;
    if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
      Close((UMediaPlateComponent *)this_00);
    }
    uVar13 = param_1 + 1;
    if (*(int *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x20 < (int)uVar13) {
      this_02 = &(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x18;
      iVar7 = *(int *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x20;
      puVar1 = &(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x20;
      if (iVar7 < (int)uVar13) {
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,uVar13 - iVar7,(ForAnyElementType *)this_02,(int *)puVar1,
                           (int *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.
                                   field_0x24);
        DefaultConstructItems<UMediaPlateComponent::Layer,int>
                  ((void *)(*(longlong *)this_02 + (longlong)iVar4 * 0x18),uVar13 - iVar7);
      }
      else {
        if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
        }
        if ((int)uVar13 < iVar7) {
          uVar11 = iVar7 - uVar13;
          if (((int)(uVar13 | uVar11) < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            pUVar8 = (UMediaTexture *)(*pcVar2)();
            return pUVar8;
          }
          if (uVar11 != 0) {
            TArray<UMediaPlateComponent::Layer,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      ((TArray<UMediaPlateComponent::Layer,TSizedDefaultAllocator<32>_> *)this_02,
                       uVar13,uVar11);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,(ForAnyElementType *)this_02,*(int *)puVar1,
                       (int *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x24);
          }
        }
      }
    }
    uVar13 = (uint)~param_1 >> 0x1f;
    local_60 = (longlong)param_1 * 0x18;
    uVar16 = uVar12;
    while( true ) {
      lVar15 = local_60;
      uVar11 = 0;
      if (param_1 < *(int *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x20) {
        uVar11 = uVar13;
      }
      if ((uVar11 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar8 = (UMediaTexture *)(*pcVar2)();
        return pUVar8;
      }
      uVar14 = (uint)uVar12;
      uVar11 = 0;
      if (*(int *)(*(longlong *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x18
                   + 0x10 + lVar15) <= (int)uVar14) {
        if (param_1 < *(int *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x20) {
          uVar11 = uVar13;
        }
        if ((uVar11 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pUVar8 = (UMediaTexture *)(*pcVar2)();
          return pUVar8;
        }
        lVar15 = *(longlong *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x18 +
                 lVar15;
        if (((*(uint **)(lVar15 + 8) <= local_res18) &&
            (local_res18 < *(uint **)(lVar15 + 8) + *(int *)(lVar15 + 0x14))) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pUVar8 = (UMediaTexture *)(*pcVar2)();
          return pUVar8;
        }
        iVar7 = *(int *)(lVar15 + 0x10);
        if (iVar7 == *(int *)(lVar15 + 0x14)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)(lVar15 + 8),(int *)(lVar15 + 0x14));
        }
        *(int *)(lVar15 + 0x10) = iVar7 + 1;
        *(uint *)(*(longlong *)(lVar15 + 8) + (longlong)iVar7 * 4) = local_res18[0];
        goto LAB_14ea8daf4;
      }
      uVar5 = uVar11;
      if (param_1 < *(int *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x20) {
        uVar5 = uVar13;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar8 = (UMediaTexture *)(*pcVar2)();
        return pUVar8;
      }
      lVar15 = *(longlong *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x18 +
               lVar15;
      uVar5 = uVar11;
      if ((int)uVar14 < *(int *)(lVar15 + 0x10)) {
        uVar5 = ~uVar14 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar8 = (UMediaTexture *)(*pcVar2)();
        return pUVar8;
      }
      uVar5 = local_res18[0];
      if (*(int *)(uVar16 + *(longlong *)(lVar15 + 8)) < 0) break;
      uVar12 = (ulonglong)(uVar14 + 1);
      uVar16 = uVar16 + 4;
    }
    uVar6 = uVar11;
    if (param_1 < *(int *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x20) {
      uVar6 = uVar13;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar8 = (UMediaTexture *)(*pcVar2)();
      return pUVar8;
    }
    lVar15 = local_60 +
             *(longlong *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x18;
    if ((int)uVar14 < *(int *)(lVar15 + 0x10)) {
      uVar11 = ~uVar14 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar8 = (UMediaTexture *)(*pcVar2)();
      return pUVar8;
    }
    *(uint *)(*(longlong *)(lVar15 + 8) + (longlong)(int)uVar14 * 4) = uVar5;
LAB_14ea8daf4:
    UpdateTextureLayers(local_58);
  }
  return local_50;
}

// ProxyReleaseMediaTexture @ 14ea8db30

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMediaPlateComponent::ProxyReleaseMediaTexture(UMediaPlateComponent *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  piVar11 = (int *)0x0;
  uVar12 = (ulonglong)param_1;
  if ((this->CacheSettings).TimeToLookAhead != this->LetterboxAspectRatio) {
    piVar8 = (int *)(this->MeshRange).field0_0x0._s_0.X;
    if (piVar8 == (int *)0x0) {
      piVar8 = &this->MatNumTexPerLayer;
    }
    iVar4 = piVar8[*(int *)((longlong)&(this->MeshRange).field0_0x0 + 8) - 1U & param_2];
    if (iVar4 != -1) {
      do {
        piVar8 = (int *)((longlong)iVar4 * 0x10 + *(longlong *)&this->PlaylistIndex);
        if (*piVar8 == param_2) {
          piVar7 = piVar8 + 1;
          if (piVar8 == (int *)0x0) {
            piVar7 = piVar11;
          }
          if ((piVar7 != (int *)0x0) && (*piVar7 = *piVar7 + -1, *piVar7 < 1)) {
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Remove((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&this->PlaylistIndex,param_2);
          }
          break;
        }
        iVar4 = piVar8[2];
      } while (iVar4 != -1);
    }
  }
  (**(code **)(this->_padding_ + 0x50))(this,param_1,param_2,0);
  if (param_1 < *(int *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x20) {
    uVar9 = (uint)~param_1 >> 0x1f;
    uVar13 = uVar12;
    piVar8 = piVar11;
    while( true ) {
      uVar10 = 0;
      if ((int)uVar13 < *(int *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x20)
      {
        uVar10 = uVar9;
      }
      if ((uVar10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar10 = (uint)piVar11;
      if (*(int *)(*(longlong *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x18
                   + 0x10 + uVar12 * 0x18) <= (int)uVar10) goto LAB_14ea8ddfb;
      uVar5 = 0;
      uVar6 = uVar5;
      if ((int)uVar13 < *(int *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x20)
      {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x18;
      uVar6 = uVar5;
      if ((int)uVar10 < *(int *)(lVar1 + 0x10 + uVar12 * 0x18)) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)(*(longlong *)(lVar1 + 8 + uVar12 * 0x18) + (longlong)piVar8) == param_2) break;
      uVar13 = (ulonglong)(uint)param_1;
      piVar11 = (int *)(ulonglong)(uVar10 + 1);
      piVar8 = piVar8 + 1;
    }
    uVar6 = uVar5;
    if (param_1 < *(int *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x20) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar1 = *(longlong *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x18;
    if ((int)uVar10 < *(int *)(lVar1 + 0x10 + uVar12 * 0x18)) {
      uVar5 = ~uVar10 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)(*(longlong *)(lVar1 + 8 + uVar12 * 0x18) + (longlong)(int)uVar10 * 4) =
         0xffffffff;
LAB_14ea8ddfb:
    UpdateTextureLayers((UMediaPlateComponent *)&this[-1].MediaTextures);
  }
  return;
}

// ProxySetAspectRatio @ 14ea8de30

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
UMediaPlateComponent::ProxySetAspectRatio(UMediaPlateComponent *this,UMediaPlayer *param_1)

{
  bool bVar1;
  int local_res8;
  int local_resc;
  
  if (((char)this->_padding_ == '\0') || (*(char *)((longlong)&this->_padding_ + 2) != '\x01')) {
    return true;
  }
  if ((param_1 != (UMediaPlayer *)0x0) &&
     (((bVar1 = UMediaPlayer::IsClosed(param_1), !bVar1 &&
       (bVar1 = UMediaPlayer::IsPreparing(param_1), !bVar1)) &&
      (UMediaPlayer::GetVideoTrackDimensions(param_1,(int)&local_res8,-1), local_resc != 0)))) {
    SetAspectRatio((UMediaPlateComponent *)&this[-1].MediaTextures,
                   (float)local_res8 / (float)local_resc);
    return true;
  }
  return false;
}

// ProxySetTextureBlend @ 14ea8ded0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMediaPlateComponent::ProxySetTextureBlend
          (UMediaPlateComponent *this,int param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  UMaterialInstanceDynamic *this_00;
  FName *pFVar7;
  ForAnyElementType FVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  FName local_res8;
  FString local_48 [2];
  
  lVar10 = *(longlong *)&this[-1].MediaTextureProxyCount.field_0x38;
  lVar11 = (longlong)param_1;
  if (lVar10 != 0) {
    pUVar6 = AMediaPlate::StaticClass();
    iVar9 = (int)pUVar6->_padding_;
    if ((((iVar9 <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar9 * 8)
          == &pUVar6->_padding_)) && (*(longlong *)(lVar10 + 0x2c8) != 0)) &&
       (((*(uint *)(*(longlong *)(lVar10 + 0x2c8) + 8) >> 0x1e & 1) == 0 &&
        (this_00 = (UMaterialInstanceDynamic *)
                   UStaticMeshComponent::GetMaterial(*(UStaticMeshComponent **)(lVar10 + 0x2c8),0),
        this_00 != (UMaterialInstanceDynamic *)0x0)))) {
      pUVar6 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
      iVar9 = (int)pUVar6->_padding_;
      if ((iVar9 <= *(int *)(this_00->_padding_ + 0x38)) &&
         (((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
           &pUVar6->_padding_ &&
          (iVar9 = *(int *)&this->MediaPlateResource,
          iVar1 = *(int *)&(this->SoundComponent).field0_0x0,
          param_1 < *(int *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x20))))
      {
        uVar5 = 0;
        if (param_1 < *(int *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x20) {
          uVar5 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar2 = *(int *)(*(longlong *)
                          &(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x18 +
                        lVar11 * 0x18);
        if (iVar2 < iVar9 / iVar1) {
          uVar5 = 0;
          if (param_1 < *(int *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x20)
          {
            uVar5 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar10 = *(longlong *)&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr.field_0x18;
          iVar9 = 0;
          if (0 < *(int *)&(this->SoundComponent).field0_0x0) {
            lVar12 = 0;
            while (iVar9 < *(int *)(lVar10 + 0x10 + lVar11 * 0x18)) {
              if ((iVar9 < 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (*(int *)(lVar12 + *(longlong *)(lVar10 + 8 + lVar11 * 0x18)) == param_2) {
                iVar1 = *(int *)&(this->SoundComponent).field0_0x0;
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                  ::FString::FString(&BaseBlendName,L"Blend");
                  atexit(`UMediaPlateComponent::ProxySetTextureBlend'::__l22::
                         _dynamic_atexit_destructor_for__BaseBlendName__);
                  _Init_thread_footer(&::_TSS0);
                }
                FVar8.Data = BaseBlendName.Data.AllocatorInstance.Data;
                lVar10 = (longlong)BaseBlendName.Data.ArrayNum;
                local_48[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_48[0].Data.ArrayNum = BaseBlendName.Data.ArrayNum;
                if (BaseBlendName.Data.ArrayNum == 0) {
                  local_48[0].Data.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,BaseBlendName.Data.ArrayNum,0,(ForAnyElementType *)local_48,
                             BaseBlendName.Data.ArrayNum,&local_48[0].Data.ArrayMax);
                  memcpy(local_48[0].Data.AllocatorInstance.Data,FVar8.Data,lVar10 * 2);
                }
                ::FString::AppendInt(local_48,iVar2 * iVar1 + iVar9);
                FVar8.Data = (FScriptContainerElement *)L"";
                if (local_48[0].Data.ArrayNum != 0) {
                  FVar8.Data = local_48[0].Data.AllocatorInstance.Data;
                }
                pFVar7 = ::FName::FName(&local_res8,(wchar_t *)FVar8.Data);
                UMaterialInstanceDynamic::SetScalarParameterValue(this_00,*pFVar7,param_3);
                if (local_48[0].Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                  return;
                }
                FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
                return;
              }
              iVar9 = iVar9 + 1;
              lVar12 = lVar12 + 4;
              if (*(int *)&(this->SoundComponent).field0_0x0 <= iVar9) {
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}

// RefreshActivePlaylist @ 14ea8e240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UMediaPlateComponent::RefreshActivePlaylist(UMediaPlateComponent *this)

{
  EMediaPlateResourceType EVar1;
  UMediaSource *pUVar2;
  UClass *pUVar3;
  UMediaPlaylist *pUVar4;
  FMediaPlateResource *this_00;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar2 = (UMediaSource *)0x0;
  this_00 = &this->MediaPlateResource;
  EVar1 = this_00->Type;
  if (EVar1 == Playlist) {
    pUVar4 = FMediaPlateResource::GetSourcePlaylist(this_00);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMediaPlaylist *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->ActivePlaylist).field0_0x0.DebugPtr = pUVar4;
  }
  else {
    if (EVar1 == External) {
      if ((this->ExternalMediaSource).field0_0x0.DebugPtr == (UMediaSource *)0x0) {
        RefreshExternalMediaSource(this);
      }
      pUVar2 = (this->ExternalMediaSource).field0_0x0.DebugPtr;
    }
    else if (EVar1 == Asset) {
      pUVar2 = FMediaPlateResource::GetMediaAsset(this_00);
    }
    local_a8 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UMediaPlaylist_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_Transactional;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    pUVar4 = (UMediaPlaylist *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMediaPlaylist *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->ActivePlaylist).field0_0x0.DebugPtr = pUVar4;
    if (pUVar2 != (UMediaSource *)0x0) {
      UMediaPlaylist::Add(pUVar4,pUVar2);
    }
  }
  return;
}

// RefreshExternalMediaSource @ 14ea8e3c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaPlateComponent::RefreshExternalMediaSource(UMediaPlateComponent *this)

{
  UMediaSource *pUVar1;
  
  if ((this->MediaPlateResource).Type == External) {
    pUVar1 = UMediaSource::SpawnMediaSourceForString
                       (&(this->MediaPlateResource).ExternalMediaPath,(UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMediaSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->ExternalMediaSource).field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// RefreshMediaPlateResource @ 14ea8e420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UMediaPlateComponent::RefreshMediaPlateResource(UMediaPlateComponent *this)

{
  FScriptContainerElement *pFVar1;
  EMediaPlateResourceType EVar2;
  int iVar3;
  UMediaPlayer *pUVar4;
  FName FVar5;
  code *pcVar6;
  UMediaTexture *this_00;
  UMediaSource *pUVar7;
  UMediaSource *pUVar8;
  UClass *pUVar9;
  UMediaPlaylist *pUVar10;
  FName *pFVar11;
  FModuleManager *this_01;
  IModuleInterface *pIVar12;
  UMediaPlayer *pUVar13;
  FScriptContainerElement *pFVar14;
  longlong *plVar15;
  undefined1 auStackY_128 [32];
  undefined1 local_e8 [8];
  ForAnyElementType local_e0;
  int local_d8;
  int local_d4;
  FName local_d0;
  FString local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if ((this->MediaPlateResource).Type == External) {
    pUVar7 = UMediaSource::SpawnMediaSourceForString
                       (&(this->MediaPlateResource).ExternalMediaPath,(UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UMediaSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->ExternalMediaSource).field0_0x0.DebugPtr = pUVar7;
  }
  EVar2 = (this->MediaPlateResource).Type;
  pUVar7 = (UMediaSource *)0x0;
  if (EVar2 == Playlist) {
    pUVar10 = FMediaPlateResource::GetSourcePlaylist(&this->MediaPlateResource);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UMediaPlaylist *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->ActivePlaylist).field0_0x0.DebugPtr = pUVar10;
  }
  else {
    if (EVar2 == External) {
      if ((this->ExternalMediaSource).field0_0x0.DebugPtr == (UMediaSource *)0x0) {
        RefreshExternalMediaSource(this);
      }
      pUVar8 = (this->ExternalMediaSource).field0_0x0.DebugPtr;
    }
    else {
      pUVar8 = pUVar7;
      if (EVar2 == Asset) {
        pUVar8 = FMediaPlateResource::GetMediaAsset(&this->MediaPlateResource);
      }
    }
    local_d0.ComparisonIndex.Value = 0;
    local_d0.Number = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar9 = Z_Construct_UClass_UMediaPlaylist_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar9);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._16_4_ = 0;
    local_b8._20_4_ = 0;
    local_b8._24_4_ = RF_Transactional;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = this;
    pUVar10 = (UMediaPlaylist *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar15 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar15 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UMediaPlaylist *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->ActivePlaylist).field0_0x0.DebugPtr = pUVar10;
    if (pUVar8 != (UMediaSource *)0x0) {
      UMediaPlaylist::Add(pUVar10,pUVar8);
    }
  }
  pUVar10 = (this->ActivePlaylist).field0_0x0.DebugPtr;
  if (pUVar10 != (UMediaPlaylist *)0x0) {
    pUVar7 = UMediaPlaylist::Get(pUVar10,this->PlaylistIndex);
  }
  pUVar4 = (this->MediaPlayer).field0_0x0.DebugPtr;
  if ((pUVar4 != (UMediaPlayer *)0x0) && (pUVar7 != (UMediaSource *)0x0)) {
    iVar3 = pUVar4->PlaylistIndex;
    UMediaPlayer::EnsurePlaylist(pUVar4);
    pUVar10 = (pUVar4->Playlist).field0_0x0.DebugPtr;
    if ((pUVar10 != (UMediaPlaylist *)0x0) &&
       (pUVar8 = UMediaPlaylist::Get(pUVar10,iVar3), pUVar7 == pUVar8)) {
      return;
    }
    pUVar4 = (this->MediaPlayer).field0_0x0.DebugPtr;
    if (((pUVar4 != (UMediaPlayer *)0x0) && (this->bIsMediaPlatePlaying != false)) &&
       (this->IntendedPlaybackState == Playing)) {
      UMediaPlayer::Close(pUVar4);
      Open(this);
      return;
    }
  }
  Close(this);
  pFVar11 = ::FName::FName(&local_d0,"MediaAssets");
  FVar5 = *pFVar11;
  this_01 = FModuleManager::Get();
  pIVar12 = FModuleManager::LoadModule(this_01,FVar5,None);
  if (pIVar12 != (IModuleInterface *)0x0) {
    pcVar6 = *(code **)((longlong)*pIVar12 + 0x78);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this->_padding_,&local_c8,(UObject *)0x0);
    local_e0.Data = (FScriptContainerElement *)0x0;
    local_d8 = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,1,0,&local_e0,1,&local_d4);
    ConstructItems<FString,FString,int>(local_e0.Data,&local_c8,1);
    (*pcVar6)(pIVar12,&local_e0,2,0);
    DestructItems<FString,int>((FString *)local_e0.Data,local_d8);
    if (local_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  pFVar14 = (this->MediaTextures).AllocatorInstance.Data;
  iVar3 = (this->MediaTextures).ArrayNum;
  pUVar4 = (this->MediaPlayer).field0_0x0.DebugPtr;
  pFVar1 = pFVar14 + (longlong)iVar3 * 8;
  do {
    if ((this->MediaTextures).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UMediaTexture>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_e8);
    }
    if (pFVar14 == pFVar1) {
      return;
    }
    this_00 = *(UMediaTexture **)pFVar14;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 != (UMediaTexture *)0x0) goto LAB_14ea8e768;
    }
    else if (this_00 != (UMediaTexture *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this_00);
LAB_14ea8e768:
      pUVar13 = UMediaTexture::GetMediaPlayer(this_00);
      if (pUVar13 == pUVar4) {
        (**(code **)(this_00->_padding_ + 0x328))(this_00);
      }
    }
    pFVar14 = pFVar14 + 8;
  } while( true );
}

// RefreshMediaSoundComponent @ 14ea8e7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UMediaPlateComponent::RefreshMediaSoundComponent(UMediaPlateComponent *this)

{
  byte *pbVar1;
  longlong lVar2;
  UClass *pUVar3;
  UMediaSoundComponent *pUVar4;
  FUObjectItem *pFVar5;
  uint uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar4 = (this->SoundComponent).field0_0x0.DebugPtr;
  if (this->bEnableAudio == false) {
    if (pUVar4 != (UMediaSoundComponent *)0x0) {
      UActorComponent::UnregisterComponent((UActorComponent *)pUVar4);
      UMediaSoundComponent::SetMediaPlayer
                ((this->SoundComponent).field0_0x0.DebugPtr,(UMediaPlayer *)0x0);
      UMediaSoundComponent::UpdatePlayer((this->SoundComponent).field0_0x0.DebugPtr);
      pUVar4 = (this->SoundComponent).field0_0x0.DebugPtr;
      (**(code **)(pUVar4->_padding_ + 0x4a0))(pUVar4,0);
      pbVar1 = (byte *)((longlong)&((this->SoundComponent).field0_0x0.DebugPtr)->_padding_ + 1);
      *pbVar1 = *pbVar1 & 0xdf;
      (this->SoundComponent).field0_0x0.DebugPtr = (UMediaSoundComponent *)0x0;
    }
  }
  else {
    if (pUVar4 == (UMediaSoundComponent *)0x0) {
      if ((this->MediaPlayer).field0_0x0.DebugPtr == (UMediaPlayer *)0x0) {
        if (1 < (byte)LogMediaPlate._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaPlate);
        }
        pUVar4 = (UMediaSoundComponent *)0x0;
      }
      else {
        local_b8 = 0;
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar3 = Z_Construct_UClass_UMediaSoundComponent_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_a8,pUVar3);
        local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_a8._56_8_ = (UPackage *)0x0;
        local_a8._16_4_ = 0;
        local_a8._20_4_ = 0;
        local_a8._24_4_ = RF_NoFlags;
        local_a8._40_8_ = (UObject *)0x0;
        local_a8[0x20] = false;
        local_a8._8_8_ = this;
        pUVar4 = (UMediaSoundComponent *)
                 StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
        if (local_a8._64_8_ != 0) {
          plVar7 = (longlong *)(local_a8 + 0x50);
          if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
            plVar7 = (longlong *)local_a8._104_8_;
          }
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
        if (pUVar4 == (UMediaSoundComponent *)0x0) {
          pUVar4 = (UMediaSoundComponent *)0x0;
          if (1 < (byte)LogMediaPlate._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaPlate);
            pUVar4 = (UMediaSoundComponent *)0x0;
          }
        }
        else {
          *(byte *)&pUVar4->_padding_ = (byte)pUVar4->_padding_ | 1;
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UMediaSoundComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->SoundComponent).field0_0x0.DebugPtr = pUVar4;
      if (pUVar4 == (UMediaSoundComponent *)0x0) {
        return;
      }
    }
    UMediaSoundComponent::SetMediaPlayer(pUVar4,(this->MediaPlayer).field0_0x0.DebugPtr);
    pUVar4 = (this->SoundComponent).field0_0x0.DebugPtr;
    if ((pUVar4->_padding_ & 1) == 0) {
      UObjectBase::AtomicallyClearFlags((UObjectBase *)pUVar4,RF_MirroredGarbage);
      pFVar5 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4));
      do {
        lVar2 = (pFVar5->field0_0x0).FlagsAndRefCount;
        uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
        if ((uVar6 >> 0x15 & 1) == 0) break;
        if (((ulonglong)pFVar5 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar8 = lVar2 == (pFVar5->field0_0x0).FlagsAndRefCount;
        if (bVar8) {
          (pFVar5->field0_0x0).FlagsAndRefCount =
               ((longlong)(int)uVar6 & 0xffffffffffdfffffU) << 0x20 | (longlong)(int)lVar2;
        }
        UNLOCK();
      } while (!bVar8);
      pbVar1 = (byte *)((longlong)&((this->SoundComponent).field0_0x0.DebugPtr)->_padding_ + 1);
      *pbVar1 = *pbVar1 | 0x20;
      USynthComponent::Initialize((USynthComponent *)(this->SoundComponent).field0_0x0.DebugPtr,-1);
      UActorComponent::RegisterComponent
                ((UActorComponent *)(this->SoundComponent).field0_0x0.DebugPtr);
    }
  }
  return;
}

// RegisterWithMediaTextureTracker @ 14ea8ea60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaPlateComponent::RegisterWithMediaTextureTracker(UMediaPlateComponent *this)

{
  TSharedPtr<FMediaTextureTrackerObject,1> *pTVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  EMediaTextureVisibleMipsTiles EVar4;
  UObject *pUVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  UClass *pUVar12;
  FMediaTextureTracker *this_00;
  EMediaTextureTargetViewResolution EVar13;
  FScriptContainerElement *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  int iVar16;
  FMediaTextureTrackerObject *pFVar17;
  undefined1 local_res8 [8];
  UObject *local_res10;
  UObject *local_res18 [2];
  TSharedPtr<FMediaTextureTrackerObject,1> local_58 [2];
  
  UnregisterWithMediaTextureTracker(this);
  pTVar1 = &this->MediaTextureTrackerObject;
  iVar16 = -1;
  if (pTVar1->Object == (FMediaTextureTrackerObject *)0x0) {
    local_58[0].SharedReferenceCount.ReferenceController = ::operator_new(0x38);
    pTVar15 = (TReferenceControllerBase<1> *)0x0;
    if (local_58[0].SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
    {
      local_58[0].Object = ___xmm_00000000000000000000000000000010;
      pFVar17 = (FMediaTextureTrackerObject *)&DAT_00000010;
      local_58[0].SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      (local_58[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)0x1;
      pFVar17 = (FMediaTextureTrackerObject *)
                (local_58[0].SharedReferenceCount.ReferenceController + 1);
      (local_58[0].SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (local_58[0].SharedReferenceCount.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFMediaTextureTrackerObject___00_SharedPointerInternals__6B_
      ;
      local_58[0].SharedReferenceCount.ReferenceController[1].SharedReferenceCount =
           (atomic<int>)0x0;
      local_58[0].SharedReferenceCount.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      local_58[0].SharedReferenceCount.ReferenceController[2]._padding_ = 0;
      local_58[0].SharedReferenceCount.ReferenceController[2].SharedReferenceCount =
           (atomic<int>)0x0;
      local_58[0].SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)
       ((longlong)&local_58[0].SharedReferenceCount.ReferenceController[3]._padding_ + 4) = 0x100;
      local_58[0].SharedReferenceCount.ReferenceController[1]._padding_ = 0;
      *(undefined4 *)&local_58[0].SharedReferenceCount.ReferenceController[3]._padding_ = 0xffffffff
      ;
      if (pFVar17 == (FMediaTextureTrackerObject *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      LOCK();
      (local_58[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar15 = local_58[0].SharedReferenceCount.ReferenceController;
      local_58[0].Object = pFVar17;
    }
    if (pTVar1 != local_58) {
      pTVar1->Object = pFVar17;
      local_58[0].Object = (FMediaTextureTrackerObject *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MediaTextureTrackerObject).SharedReferenceCount,
                 &local_58[0].SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58[0].SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  pUVar5 = (UObject *)this->_padding_;
  if (pTVar1->Object == (FMediaTextureTrackerObject *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar17 = pTVar1->Object;
  local_res10 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)pFVar17,(FObjectPtr)&local_res10);
  fVar3 = this->MipMapBias;
  if (pTVar1->Object == (FMediaTextureTrackerObject *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar1->Object->MipMapLODBias = fVar3;
  EVar4 = this->VisibleMipsTilesCalculations;
  if (pTVar1->Object == (FMediaTextureTrackerObject *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar1->Object->VisibleMipsTilesCalculations = EVar4;
  dVar8 = (this->MeshRange).field0_0x0._s_0.X;
  dVar9 = (this->MeshRange).field0_0x0._s_0.Y;
  if (pTVar1->Object == (FMediaTextureTrackerObject *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar17 = pTVar1->Object;
  (pFVar17->MeshRange).field0_0x0._s_0.X = dVar8;
  (pFVar17->MeshRange).field0_0x0._s_0.Y = dVar9;
  if (this->bEnableMipMapUpscaling != false) {
    iVar16 = this->MipLevelToUpscale;
  }
  if (pTVar1->Object == (FMediaTextureTrackerObject *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar1->Object->MipLevelToUpscale = iVar16;
  bVar10 = this->bAdaptivePoleMipUpscaling;
  if (pTVar1->Object == (FMediaTextureTrackerObject *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar1->Object->bAdaptivePoleMipUpscaling = bVar10;
  EVar13 = RenderResolution;
  lVar6 = this->_padding_;
  if (lVar6 != 0) {
    pUVar12 = AMediaPlate::StaticClass();
    iVar16 = (int)pUVar12->_padding_;
    if ((iVar16 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar16 * 8)
        == &pUVar12->_padding_)) {
      EVar13 = RenderResolution;
      if (*(char *)(lVar6 + 0x2d0) != '\0') {
        EVar13 = DisplayResolution;
      }
    }
  }
  if (pTVar1->Object == (FMediaTextureTrackerObject *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar1->Object->TargetViewResolutionMask = EVar13;
  this_00 = FMediaTextureTracker::Get();
  pFVar14 = (this->MediaTextures).AllocatorInstance.Data;
  iVar16 = (this->MediaTextures).ArrayNum;
  pFVar2 = pFVar14 + (longlong)iVar16 * 8;
  while( true ) {
    if ((this->MediaTextures).ArrayNum != iVar16) {
      `TCheckedPointerIterator<TObjectPtr<UMediaTexture>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar14 == pFVar2) break;
    pUVar5 = *(UObject **)pFVar14;
    if (pUVar5 != (UObject *)0x0) {
      local_res18[0] = pUVar5;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FMediaTextureTracker::RegisterTexture(this_00,pTVar1,(TObjectPtr<UMediaTexture>)local_res18);
    }
    pFVar14 = pFVar14 + 8;
  }
  return;
}

// RemoveLetterboxes @ 14ea8ee80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaPlateComponent::RemoveLetterboxes(UMediaPlateComponent *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->Letterboxes).AllocatorInstance.Data;
  iVar3 = (this->Letterboxes).ArrayNum;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Letterboxes).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UStaticMeshComponent>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar2) break;
    plVar4 = *(longlong **)pFVar5;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x4a0))(plVar4,0);
    }
    pFVar5 = pFVar5 + 8;
  }
  piVar1 = &(this->Letterboxes).ArrayMax;
  (this->Letterboxes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Letterboxes).AllocatorInstance,0,piVar1);
  }
  return;
}

// RemoveMediaSoundComponent @ 14ea8ef20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMediaPlateComponent::RemoveMediaSoundComponent(UMediaPlateComponent *this)

{
  byte *pbVar1;
  UMediaSoundComponent *pUVar2;
  
  pUVar2 = (this->SoundComponent).field0_0x0.DebugPtr;
  if (pUVar2 != (UMediaSoundComponent *)0x0) {
    UActorComponent::UnregisterComponent((UActorComponent *)pUVar2);
    UMediaSoundComponent::SetMediaPlayer
              ((this->SoundComponent).field0_0x0.DebugPtr,(UMediaPlayer *)0x0);
    UMediaSoundComponent::UpdatePlayer((this->SoundComponent).field0_0x0.DebugPtr);
    pUVar2 = (this->SoundComponent).field0_0x0.DebugPtr;
    (**(code **)(pUVar2->_padding_ + 0x4a0))(pUVar2,0);
    pbVar1 = (byte *)((longlong)&((this->SoundComponent).field0_0x0.DebugPtr)->_padding_ + 1);
    *pbVar1 = *pbVar1 & 0xdf;
    (this->SoundComponent).field0_0x0.DebugPtr = (UMediaSoundComponent *)0x0;
  }
  return;
}

// RestartPlayer @ 14ea8f040

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall UMediaPlateComponent::RestartPlayer(UMediaPlateComponent *this)

{
  UMediaPlayer *this_00;
  
  this_00 = (this->MediaPlayer).field0_0x0.DebugPtr;
  if (((this_00 != (UMediaPlayer *)0x0) && (this->bIsMediaPlatePlaying != false)) &&
     (this->IntendedPlaybackState == Playing)) {
    UMediaPlayer::Close(this_00);
    Open(this);
    return true;
  }
  return false;
}

// ResumeWhenVisible @ 14ea8f090

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaPlateComponent::ResumeWhenVisible(UMediaPlateComponent *this)

{
  UMediaPlayer *this_00;
  bool bVar1;
  
  this_00 = (this->MediaPlayer).field0_0x0.DebugPtr;
  if (this_00 != (UMediaPlayer *)0x0) {
    if (this->ActualPlaybackState == Paused) {
      if ((this->CurrentRate != 0.0) && (this->PendingPlaybackState == Unset)) {
        this->IntendedPlaybackState = Resume;
        return;
      }
    }
    else if ((this->bWantsToPlayWhenVisible != false) && (this->bResumeWhenOpened == false)) {
      bVar1 = UMediaPlayer::IsPreparing(this_00);
      if ((!bVar1) && (this->ActualPlaybackState == Paused)) {
        this->bWantsToPlayWhenVisible = false;
        this->bResumeWhenOpened = true;
        Open(this);
        return;
      }
    }
  }
  return;
}

// Rewind @ 14ea8f120

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall UMediaPlateComponent::Rewind(UMediaPlateComponent *this)

{
  UMediaPlayer *this_00;
  bool bVar1;
  FTimespan local_res8 [4];
  
  this_00 = (this->MediaPlayer).field0_0x0.DebugPtr;
  local_res8[0].Ticks = 0;
  if (this_00 != (UMediaPlayer *)0x0) {
    bVar1 = UMediaPlayer::Seek(this_00,local_res8);
    return bVar1;
  }
  return false;
}

// Seek @ 14ea8f160

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMediaPlateComponent::Seek(UMediaPlateComponent *this,FTimespan *param_1)

{
  UMediaPlayer *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FName FStackX_8;
  FString FStack_28;
  FString FStack_18;
  
  pUVar1 = (this->MediaPlayer).field0_0x0.DebugPtr;
  if (pUVar1 == (UMediaPlayer *)0x0) {
    return false;
  }
  if (6 < (byte)LogMediaAssets._0_1_) {
    FTimespan::ToString(param_1,&FStack_18,L"%h:%m:%s.%t");
    FStackX_8 = (FName)pUVar1->_padding_;
    ::FName::ToString(&FStackX_8,&FStack_28);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  if (((pUVar1->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar3 = FMediaPlayerFacade::Seek((pUVar1->PlayerFacade).Object,param_1);
  return bVar3;
}

// SelectExternalMedia @ 14ea8f1d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMediaPlateComponent::SelectExternalMedia(UMediaPlateComponent *this,FString *param_1)

{
  (this->MediaPlateResource).Type = External;
  ::FString::operator=(&(this->MediaPlateResource).ExternalMediaPath,param_1);
  RefreshMediaPlateResource(this);
  return;
}

// SelectMediaPlaylistAsset @ 14ea8f200

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMediaPlateComponent::SelectMediaPlaylistAsset(UMediaPlateComponent *this,UMediaPlaylist *param_1)

{
  UMediaPlaylist *local_res8 [4];
  
  (this->MediaPlateResource).Type = Playlist;
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaPlaylist *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=
            (&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr,(FObjectPtr)local_res8);
  RefreshMediaPlateResource(this);
  return;
}

// SelectMediaSourceAsset @ 14ea8f250

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMediaPlateComponent::SelectMediaSourceAsset(UMediaPlateComponent *this,UMediaSource *param_1)

{
  UMediaSource *local_res8 [4];
  
  (this->MediaPlateResource).Type = Asset;
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMediaSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=
            (&(this->MediaPlateResource).MediaAsset.SoftObjectPtr,(FObjectPtr)local_res8);
  RefreshMediaPlateResource(this);
  return;
}

// SetAspectRatio @ 14ea8f2f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMediaPlateComponent::SetAspectRatio(UMediaPlateComponent *this,float param_1)

{
  UStaticMeshComponent *this_00;
  float fVar1;
  TVector<double>_u_0 local_28;
  
  this_00 = (this->StaticMeshComponent).field0_0x0.DebugPtr;
  if (this_00 != (UStaticMeshComponent *)0x0) {
    fVar1 = __real_3f800000;
    if (param_1 != 0.0) {
      fVar1 = __real_3f800000 / param_1;
    }
    local_28._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
    local_28._s_0.Y = _UNK_150689688;
    local_28._s_0.Z = (double)fVar1;
    USceneComponent::SetRelativeScale3D
              ((USceneComponent *)this_00,(TVector<double> *)&local_28._s_0);
    UpdateLetterboxes(this);
    return;
  }
  return;
}

// SetEnableAudio @ 14ea8f360

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaPlateComponent::SetEnableAudio(UMediaPlateComponent *this,bool param_1)

{
  if (this->bEnableAudio != param_1) {
    this->bEnableAudio = param_1;
    RefreshMediaSoundComponent(this);
    return;
  }
  return;
}

// SetIsAspectRatioAuto @ 14ea8f460

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaPlateComponent::SetIsAspectRatioAuto(UMediaPlateComponent *this,bool param_1)

{
  if (this->bIsAspectRatioAuto != param_1) {
    this->bIsAspectRatioAuto = param_1;
    TryActivateAspectRatioAuto(this);
    return;
  }
  return;
}

// SetLetterboxAspectRatio @ 14ea8f480

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMediaPlateComponent::SetLetterboxAspectRatio(UMediaPlateComponent *this,float param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->LetterboxAspectRatio = param_1;
  if (param_1 == 0.0) {
    pFVar5 = (this->Letterboxes).AllocatorInstance.Data;
    iVar3 = (this->Letterboxes).ArrayNum;
    pFVar2 = pFVar5 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->Letterboxes).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<UStaticMeshComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar5 == pFVar2) break;
      plVar4 = *(longlong **)pFVar5;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x4a0))(plVar4,0);
      }
      pFVar5 = pFVar5 + 8;
    }
    piVar1 = &(this->Letterboxes).ArrayMax;
    (this->Letterboxes).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->Letterboxes).AllocatorInstance,0,piVar1);
      UpdateLetterboxes(this);
      return;
    }
  }
  else {
    AddLetterboxes(this);
  }
  UpdateLetterboxes(this);
  return;
}

// SetLoop @ 14ea8f550

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMediaPlateComponent::SetLoop(UMediaPlateComponent *this,bool param_1)

{
  UMediaPlaylist *pUVar1;
  UMediaPlayer *pUVar2;
  code *pcVar3;
  bool bVar4;
  FCoreTexts *pFVar5;
  FName FStackX_8;
  FString FStack_18;
  
  if (this->bLoop != param_1) {
    this->bLoop = param_1;
    pUVar2 = (this->MediaPlayer).field0_0x0.DebugPtr;
    if (pUVar2 != (UMediaPlayer *)0x0) {
      pFVar5 = FCoreTexts::Get();
      if (5 < (byte)LogMediaAssets._0_1_) {
        if (!param_1) {
          pFVar5 = (FCoreTexts *)&pFVar5->False;
        }
        FText::ToString(pFVar5->True);
        FStackX_8 = (FName)pUVar2->_padding_;
        ::FName::ToString(&FStackX_8,&FStack_18);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
        if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
        }
      }
      pUVar2->Loop = 0;
      *(uint *)&pUVar2->field_0x154 = *(uint *)&pUVar2->field_0x154 | (uint)param_1 * 2;
      if (((pUVar2->PlayerFacade).Object == (FMediaPlayerFacade *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((pUVar2->Loop != 0) &&
         ((pUVar1 = (pUVar2->Playlist).field0_0x0.DebugPtr, pUVar1 == (UMediaPlaylist *)0x0 ||
          ((pUVar1->Items).ArrayNum == 1)))) {
        FMediaPlayerFacade::SetLooping((pUVar2->PlayerFacade).Object,true);
        return;
      }
      FMediaPlayerFacade::SetLooping((pUVar2->PlayerFacade).Object,false);
      return;
    }
  }
  return;
}

// SetMediaPlateResource @ 14ea8f580

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMediaPlateComponent::SetMediaPlateResource(UMediaPlateComponent *this,FMediaPlateResource *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  UMediaSource *pUVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UMediaSource *local_res8;
  FString local_38;
  FString local_28;
  
  iVar7 = (param_1->ExternalMediaPath).Data.ArrayNum;
  pFVar4 = (FScriptContainerElement *)0x0;
  iVar5 = 0;
  iVar6 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar6 = iVar5;
  }
  if (iVar6 != 0) {
    pFVar2 = ::FString::ConstructFromPtrSize
                       (&local_38,
                        (wchar_t *)(param_1->ExternalMediaPath).Data.AllocatorInstance.Data,iVar6);
    iVar7 = 0;
    if (&local_28 != pFVar2) {
      pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar5 = (pFVar2->Data).ArrayNum;
      iVar7 = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar2 = &(this->MediaPlateResource).ExternalMediaPath;
    if (pFVar2 == &local_28) {
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
    }
    else {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar2->Data).AllocatorInstance.Data = pFVar4;
      (this->MediaPlateResource).ExternalMediaPath.Data.ArrayNum = iVar5;
      (this->MediaPlateResource).ExternalMediaPath.Data.ArrayMax = iVar7;
    }
  }
  pUVar3 = FMediaPlateResource::GetMediaAsset(param_1);
  if (pUVar3 != (UMediaSource *)0x0) {
    local_res8 = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FSoftObjectPtr::operator=
              (&(this->MediaPlateResource).MediaAsset.SoftObjectPtr,(FObjectPtr)&local_res8);
  }
  pUVar3 = (UMediaSource *)FMediaPlateResource::GetSourcePlaylist(param_1);
  if (pUVar3 != (UMediaSource *)0x0) {
    local_res8 = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FSoftObjectPtr::operator=
              (&(this->MediaPlateResource).SourcePlaylist.SoftObjectPtr,(FObjectPtr)&local_res8);
  }
  (this->MediaPlateResource).Type = param_1->Type;
  RefreshMediaPlateResource(this);
  return;
}

// SetMeshRange @ 14ea8f6d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMediaPlateComponent::SetMeshRange(UMediaPlateComponent *this,TVector2<double> *param_1)

{
  FMediaTextureTrackerObject *pFVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  pFVar1 = (this->MediaTextureTrackerObject).Object;
  (this->MeshRange).field0_0x0._s_0.X = dVar2;
  (this->MeshRange).field0_0x0._s_0.Y = dVar3;
  if (pFVar1 != (FMediaTextureTrackerObject *)0x0) {
    (pFVar1->MeshRange).field0_0x0._s_0.X = dVar2;
    (pFVar1->MeshRange).field0_0x0._s_0.Y = dVar3;
  }
  return;
}

// SetNormalMode @ 14ea8f700

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaPlateComponent::SetNormalMode(UMediaPlateComponent *this,bool param_1)

{
  return;
}

// SetNumberOfTextures @ 14ea8f710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UMediaPlateComponent::SetNumberOfTextures(UMediaPlateComponent *this,int param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UMediaTexture>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  longlong lVar10;
  UMediaPlateComponent *this_00;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  undefined1 auStackY_138 [32];
  longlong local_e8;
  UObject *local_e0;
  uint local_d8;
  UMediaPlateComponent *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pTVar2 = &this->MediaTextures;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_e8 = 0;
  local_d8 = param_1;
  local_d0 = this;
  if (((pFVar3 <= (FScriptContainerElement *)&local_e8) &&
      ((FScriptContainerElement *)&local_e8 < pFVar3 + (longlong)(this->MediaTextures).ArrayMax * 8)
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->MediaTextures).ArrayNum;
  uVar14 = 0;
  this_00 = this;
  if (iVar6 != 0) {
    uVar14 = 0;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    bVar5 = *(longlong *)pFVar3 != local_e8;
    lVar10 = 0;
    lVar7 = local_e8;
    uVar11 = 0;
    do {
      uVar12 = uVar11;
      do {
        lVar10 = lVar10 + 1;
        uVar12 = uVar12 + 1;
        if (iVar6 <= lVar10) break;
      } while (bVar5 == (*(longlong *)(pFVar3 + lVar10 * 8) != lVar7));
      if (bVar5 != false) {
        if (uVar14 != uVar11) {
          memmove(pFVar3 + (longlong)(int)uVar14 * 8,pFVar3 + (longlong)(int)uVar11 * 8,
                  (longlong)(int)(uVar12 - uVar11) << 3);
          lVar7 = local_e8;
        }
        uVar14 = uVar14 + (uVar12 - uVar11);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      uVar11 = uVar12;
    } while (lVar10 < iVar6);
    (this->MediaTextures).ArrayNum = uVar14;
    this_00 = local_d0;
    param_1 = local_d8;
  }
  if (uVar14 != param_1) {
    if ((this_00->_padding_ & 1) != 0) {
      UnregisterWithMediaTextureTracker(this_00);
    }
    iVar6 = (this_00->MediaTextures).ArrayNum;
    if (param_1 < iVar6) {
      uVar14 = iVar6 - param_1;
      if (((int)(uVar14 | param_1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar14 != 0) {
        pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar6 = ((this->MediaTextures).ArrayNum - param_1) - uVar14;
        if (iVar6 != 0) {
          memmove(pFVar3,pFVar3 + (longlong)(int)uVar14 * 8,(longlong)iVar6 << 3);
        }
        piVar1 = &(this->MediaTextures).ArrayNum;
        *piVar1 = *piVar1 - uVar14;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->MediaTextures).ArrayNum,
                   &(this->MediaTextures).ArrayMax);
      }
    }
    else {
      while (iVar6 < param_1) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this_00,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar8 = Z_Construct_UClass_UMediaTexture_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_c8,pUVar8);
        local_c8._8_8_ = this_00;
        pUVar9 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
        if (local_c8._64_8_ != 0) {
          plVar13 = (longlong *)(local_c8 + 0x50);
          if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
            plVar13 = (longlong *)local_c8._104_8_;
          }
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
        pUVar9[8].field_0x25 = 1;
        local_e0 = pUVar9;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar9);
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_e0) &&
            ((FScriptContainerElement *)&local_e0 <
             pFVar3 + (longlong)(this->MediaTextures).ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = (this->MediaTextures).ArrayNum;
        if (iVar6 == (this->MediaTextures).ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar2->AllocatorInstance,&(this->MediaTextures).ArrayMax);
        }
        (this->MediaTextures).ArrayNum = iVar6 + 1;
        *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_e0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_e0);
        }
        iVar6 = (this_00->MediaTextures).ArrayNum;
      }
    }
    SetUpTextures(this_00,ForceUpdateResource);
    if ((this_00->_padding_ & 1) != 0) {
      RegisterWithMediaTextureTracker(this_00);
    }
  }
  return;
}

// SetPlayOnlyWhenVisible @ 14ea8fb00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMediaPlateComponent::SetPlayOnlyWhenVisible(UMediaPlateComponent *this,bool param_1)

{
  UMediaPlayer *this_00;
  bool bVar1;
  
  this->bPlayOnlyWhenVisible = param_1;
  if (param_1) {
    return;
  }
  this_00 = (this->MediaPlayer).field0_0x0.DebugPtr;
  if (this_00 != (UMediaPlayer *)0x0) {
    if (this->ActualPlaybackState == Paused) {
      if ((this->CurrentRate != 0.0) && (this->PendingPlaybackState == Unset)) {
        this->IntendedPlaybackState = Resume;
        return;
      }
    }
    else if ((this->bWantsToPlayWhenVisible != false) && (this->bResumeWhenOpened == false)) {
      bVar1 = UMediaPlayer::IsPreparing(this_00);
      if ((!bVar1) && (this->ActualPlaybackState == Paused)) {
        this->bWantsToPlayWhenVisible = false;
        this->bResumeWhenOpened = true;
        Open(this);
        return;
      }
    }
  }
  return;
}

// SetProxyRate @ 14ea8fb20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMediaPlateComponent::SetProxyRate(UMediaPlateComponent *this,float param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  FName aFStackX_8 [4];
  FString aFStack_28 [2];
  
  *(float *)&this->_padding_ = param_1;
  uVar5 = 2;
  if (param_1 == 0.0) {
    uVar5 = 1;
  }
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar5;
  lVar1 = *(longlong *)&(this->MediaPlateResource).ExternalMediaPath.Data.ArrayNum;
  if (lVar1 == 0) {
    return true;
  }
  if (5 < (byte)LogMediaAssets._0_1_) {
    aFStackX_8[0] = *(FName *)(lVar1 + 0x18);
    ::FName::ToString(aFStackX_8,aFStack_28);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    if (aFStack_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(aFStack_28[0].Data.AllocatorInstance.Data);
    }
  }
  if ((*(longlong *)(lVar1 + 0x1b0) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar3 = FMediaPlayerFacade::SetRate(*(FMediaPlayerFacade **)(lVar1 + 0x1b0),param_1);
  return bVar3;
}

// SetUpTextures @ 14ea8fb70

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMediaPlateComponent::SetUpTextures(UMediaPlateComponent *this,ESetUpTexturesFlags param_1)

{
  float fVar1;
  UMediaTexture *this_00;
  UMediaPlayer *pUVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  float fVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  UMediaPlayer *pUVar10;
  longlong lVar11;
  int *piVar12;
  UClass *pUVar13;
  UMaterialInterface *pUVar14;
  undefined1 *puVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  bool bVar19;
  float fVar20;
  
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar6 = __real_322bcc77;
  bVar5 = false;
  uVar16 = 0;
  if (0 < (this->MediaTextures).ArrayNum) {
    lVar18 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar16 < (this->MediaTextures).ArrayNum) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = *(UMediaTexture **)((this->MediaTextures).AllocatorInstance.Data + lVar18);
      if (this_00 != (UMediaTexture *)0x0) {
        bVar8 = (this->MediaTextureSettings).bEnableGenMips;
        bVar19 = this_00->EnableGenMips != bVar8;
        if (bVar19) {
          this_00->EnableGenMips = bVar8;
        }
        fVar1 = this->MipMapBias;
        fVar20 = UMediaTexture::GetMipMapBias(this_00);
        bVar8 = fVar6 < (float)((uint)(fVar20 - fVar1) & uVar7);
        if (bVar8) {
          UMediaTexture::SetMipMapBias(this_00,this->MipMapBias);
          bVar5 = true;
        }
        if (((param_1 & AllowSetPlayer) == None) ||
           (pUVar2 = (this->MediaPlayer).field0_0x0.DebugPtr,
           pUVar10 = UMediaTexture::GetMediaPlayer(this_00), pUVar10 == pUVar2)) {
LAB_14ea8fd35:
          if ((!bVar8 && !bVar19) && ((param_1 >> 1 & 1) == 0)) goto LAB_14ea8fd4f;
        }
        else {
          if (*(int *)&(this->MediaTextureProxyCount).field_0x8 !=
              *(int *)&(this->MediaTextureProxyCount).field_0x34) {
            puVar3 = *(undefined1 **)&(this->MediaTextureProxyCount).field_0x40;
            puVar15 = &(this->MediaTextureProxyCount).field_0x38;
            if (puVar3 != (undefined1 *)0x0) {
              puVar15 = puVar3;
            }
            iVar17 = *(int *)(puVar15 +
                             (ulonglong)
                             (*(int *)&(this->MediaTextureProxyCount).field_0x48 - 1U & uVar16) * 4)
            ;
            if (iVar17 != -1) {
              lVar11 = *(longlong *)&this->MediaTextureProxyCount;
              do {
                if (*(uint *)(lVar11 + (longlong)iVar17 * 0x10) == uVar16) {
                  if ((((iVar17 == -1) || (lVar11 = (longlong)iVar17 * 0x10 + lVar11, lVar11 == 0))
                      || (piVar12 = (int *)(lVar11 + 4), piVar12 == (int *)0x0)) || (*piVar12 < 1))
                  goto LAB_14ea8fd24;
                  goto LAB_14ea8fd35;
                }
                iVar17 = *(int *)(lVar11 + 8 + (longlong)iVar17 * 0x10);
              } while (iVar17 != -1);
              UMediaTexture::SetMediaPlayer(this_00,(this->MediaPlayer).field0_0x0.DebugPtr);
              goto LAB_14ea8fd43;
            }
          }
LAB_14ea8fd24:
          UMediaTexture::SetMediaPlayer(this_00,(this->MediaPlayer).field0_0x0.DebugPtr);
        }
LAB_14ea8fd43:
        (**(code **)(this_00->_padding_ + 0x328))(this_00);
      }
LAB_14ea8fd4f:
      uVar16 = uVar16 + 1;
      lVar18 = lVar18 + 8;
    } while ((int)uVar16 < (this->MediaTextures).ArrayNum);
    if ((bVar5) && (lVar18 = this->_padding_, lVar18 != 0)) {
      pUVar13 = AMediaPlate::StaticClass();
      iVar17 = (int)pUVar13->_padding_;
      if (((iVar17 <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
          ((((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) + (longlong)iVar17 * 8) ==
             &pUVar13->_padding_ && (*(longlong *)(lVar18 + 0x2c8) != 0)) &&
           ((*(uint *)(*(longlong *)(lVar18 + 0x2c8) + 8) >> 0x1e & 1) == 0)))) &&
         (pUVar14 = UStaticMeshComponent::GetMaterial(*(UStaticMeshComponent **)(lVar18 + 0x2c8),0),
         pUVar14 != (UMaterialInterface *)0x0)) {
        (**(code **)(pUVar14->_padding_ + 0x598))(pUVar14,0);
      }
    }
  }
  return;
}

// StaticRegisterNativesUMediaPlateComponent @ 14ea8fe60

void __cdecl UMediaPlateComponent::StaticRegisterNativesUMediaPlateComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x20;
  local_18.DataPtr = Z_Construct_UClass_UMediaPlateComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopClockSink @ 14ea8fea0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaPlateComponent::StopClockSink(UMediaPlateComponent *this)

{
  code *pcVar1;
  FMediaComponentClockSink *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  FName *pFVar5;
  IModuleInterface *pIVar6;
  longlong *plVar7;
  FName local_res8;
  FMediaComponentClockSink *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if ((this->ClockSink).Object != (FMediaComponentClockSink *)0x0) {
    pFVar5 = ::FName::FName(&local_res8,"Media");
    pIVar6 = FModuleManager::GetModulePtr_Internal(*pFVar5);
    if (pIVar6 != (IModuleInterface *)0x0) {
      plVar7 = (longlong *)(**(code **)((longlong)*pIVar6 + 0xa8))(pIVar6);
      pcVar1 = *(code **)(*plVar7 + 0x18);
      if ((this->ClockSink).Object == (FMediaComponentClockSink *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar2 = (this->ClockSink).Object;
      pTVar3 = (this->ClockSink).SharedReferenceCount.ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar2 == (FMediaComponentClockSink *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_18 = pFVar2;
      local_10 = pTVar3;
      (*pcVar1)(plVar7,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  return;
}

// SwitchStates @ 14ea8ffc0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMediaPlateComponent::SwitchStates(UMediaPlateComponent *this,EMediaPlateEventState param_1)

{
  UMediaPlayer *pUVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  switch(param_1) {
  case Play:
    this->IntendedPlaybackState = Playing;
    this->CurrentRate = 1.0;
    return;
  case Open:
    Open(this);
    return;
  case Close:
    Close(this);
    return;
  case Pause:
    this->IntendedPlaybackState = Paused;
    this->CurrentRate = 0.0;
    return;
  case Reverse:
    pUVar1 = (this->MediaPlayer).field0_0x0.DebugPtr;
    if (pUVar1 != (UMediaPlayer *)0x0) {
      fVar4 = UMediaPlayer::GetRate(pUVar1);
      fVar5 = __real_bf800000;
      if (fVar4 <= __real_bf800000) {
        fVar5 = fVar4 + fVar4;
      }
      UMediaPlayer::SetRate(pUVar1,fVar5);
      return;
    }
    break;
  case Forward:
    pUVar1 = (this->MediaPlayer).field0_0x0.DebugPtr;
    if (pUVar1 != (UMediaPlayer *)0x0) {
      fVar5 = UMediaPlayer::GetRate(pUVar1);
      if (fVar5 <= __real_3f800000) {
        fVar5 = __real_3f800000;
      }
      UMediaPlayer::SetRate(pUVar1,fVar5 + fVar5);
      return;
    }
    break;
  case Rewind:
    pUVar1 = (this->MediaPlayer).field0_0x0.DebugPtr;
    if (pUVar1 != (UMediaPlayer *)0x0) {
      UMediaPlayer::Rewind(pUVar1);
      return;
    }
    break;
  case Next:
    Next(this);
    return;
  case Previous:
    Previous(this);
    return;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaPlate\\Source\\MediaPlate\\Private\\MediaPlateComponent.cpp"
                       ,0x769,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// TickComponent @ 14ea90120

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
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
UMediaPlateComponent::TickComponent
          (UMediaPlateComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  EPlaybackState EVar3;
  UObject *pUVar4;
  UMediaPlayer *pUVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  FTimespan local_res8;
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  pFVar7 = (this->MediaTextures).AllocatorInstance.Data;
  iVar2 = (this->MediaTextures).ArrayNum;
  bVar6 = (this->MediaTextureSettings).bEnableGenMips;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  do {
    if ((this->MediaTextures).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMediaTexture>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar7 == pFVar1) {
      if ((this->MediaPlayer).field0_0x0.DebugPtr != (UMediaPlayer *)0x0) {
        EVar3 = this->IntendedPlaybackState;
        if (EVar3 == this->ActualPlaybackState) {
          this->PendingPlaybackState = Unset;
        }
        else if (EVar3 != this->PendingPlaybackState) {
          if (EVar3 == Resume) {
            GetResumeTime(this);
            UMediaPlayer::Seek((this->MediaPlayer).field0_0x0.DebugPtr,&local_res8);
            pUVar5 = (this->MediaPlayer).field0_0x0.DebugPtr;
            this->IntendedPlaybackState = Playing;
            this->PendingPlaybackState = Playing;
            UMediaPlayer::Play(pUVar5);
          }
          else {
            pUVar5 = (this->MediaPlayer).field0_0x0.DebugPtr;
            this->PendingPlaybackState = EVar3;
            if (EVar3 == Playing) {
              UMediaPlayer::Play(pUVar5);
            }
            else {
              UMediaPlayer::Pause(pUVar5);
            }
          }
        }
        if ((this->PendingPlaybackState == Unset) &&
           ((this->CurrentRate != 0.0 || (this->bWantsToPlayWhenVisible != false)))) {
          bVar6 = IsVisible(this);
          if (bVar6) {
            pUVar5 = (this->MediaPlayer).field0_0x0.DebugPtr;
            if (pUVar5 != (UMediaPlayer *)0x0) {
              if (this->ActualPlaybackState == Paused) {
                if ((this->CurrentRate != 0.0) && (this->PendingPlaybackState == Unset)) {
                  this->IntendedPlaybackState = Resume;
                  return;
                }
              }
              else if ((((this->bWantsToPlayWhenVisible != false) &&
                        (this->bResumeWhenOpened == false)) &&
                       (bVar6 = UMediaPlayer::IsPreparing(pUVar5), !bVar6)) &&
                      (this->ActualPlaybackState == Paused)) {
                this->bWantsToPlayWhenVisible = false;
                this->bResumeWhenOpened = true;
                Open(this);
                return;
              }
            }
          }
          else if (this->ActualPlaybackState == Playing) {
            this->IntendedPlaybackState = Paused;
            this->TimeWhenPlaybackPaused = (double)FApp::GameTime;
          }
        }
      }
      return;
    }
    pUVar4 = *(UObject **)pFVar7;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar4 != (UObject *)0x0) goto LAB_14ea90197;
    }
    else if (pUVar4 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar4);
LAB_14ea90197:
      if ((bool)pUVar4[8].field_0x24 != bVar6) {
        `UE::MediaPlateComponent::EnsureMediaTexturePropertiesInSync'::__l9::<lambda_1>::operator()
                  (&local_res8);
      }
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// TickOutput @ 14ea903c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaPlateComponent::TickOutput(UMediaPlateComponent *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x48))
                    (&this->_padding_,(this->MediaPlayer).field0_0x0.DebugPtr);
  if (cVar1 != '\0') {
    StopClockSink(this);
    return;
  }
  return;
}

// TryActivateAspectRatioAuto @ 14ea90400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaPlateComponent::TryActivateAspectRatioAuto(UMediaPlateComponent *this)

{
  TSharedPtr<FMediaComponentClockSink,1> *pTVar1;
  FName FVar2;
  FMediaComponentClockSink *pFVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FModuleManager *this_00;
  IModuleInterface *pIVar7;
  TReferenceControllerBase<1> *pTVar8;
  longlong *plVar9;
  TReferenceControllerBase<1> *pTVar10;
  UMediaPlateComponent *local_res8;
  FName local_res10;
  TReferenceControllerBase<1> *local_48;
  FSharedReferencer<1> FStack_40;
  FMediaComponentClockSink *local_38;
  TReferenceControllerBase<1> *local_30;
  
  if ((((this->MediaPlayer).field0_0x0.DebugPtr != (UMediaPlayer *)0x0) &&
      (this->bIsAspectRatioAuto != false)) && (this->VisibleMipsTilesCalculations == Plane)) {
    pFVar6 = ::FName::FName(&local_res10,"Media");
    FVar2 = *pFVar6;
    this_00 = FModuleManager::Get();
    pIVar7 = FModuleManager::LoadModule(this_00,FVar2,None);
    if (pIVar7 != (IModuleInterface *)0x0) {
      pTVar1 = &this->ClockSink;
      if (pTVar1->Object == (FMediaComponentClockSink *)0x0) {
        pTVar8 = ::operator_new(0x20);
        if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
          pTVar8 = (TReferenceControllerBase<1> *)0x0;
          local_48 = ___xmm_00000000000000000000000000000010;
          pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
          FStack_40.ReferenceController = _UNK_150651568;
        }
        else {
          pTVar8->SharedReferenceCount = (atomic<int>)0x1;
          pTVar8->WeakReferenceCount = (atomic<int>)0x1;
          pTVar8->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFMediaComponentClockSink___00_SharedPointerInternals__6B_
          ;
          pTVar8[1]._padding_ = (longlong)&___7FMediaComponentClockSink__6B_;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
          pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
          local_res8 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=
                    ((FWeakObjectPtr *)&pTVar8[1].SharedReferenceCount,(FObjectPtr)&local_res8);
          pTVar10 = pTVar8 + 1;
          if ((pTVar10 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          LOCK();
          pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
          UNLOCK();
          FStack_40.ReferenceController = pTVar8;
          local_48 = pTVar10;
        }
        if (pTVar1 != (TSharedPtr<FMediaComponentClockSink,1> *)&local_48) {
          pTVar1->Object = (FMediaComponentClockSink *)pTVar10;
          local_48 = (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->ClockSink).SharedReferenceCount,&FStack_40);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_40.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      }
      plVar9 = (longlong *)(**(code **)((longlong)*pIVar7 + 0xa8))(pIVar7);
      pcVar4 = *(code **)(*plVar9 + 0x10);
      if ((pTVar1->Object == (FMediaComponentClockSink *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar8 = (this->ClockSink).SharedReferenceCount.ReferenceController;
      pFVar3 = pTVar1->Object;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar3 == (FMediaComponentClockSink *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38 = pFVar3;
      local_30 = pTVar8;
      (*pcVar4)(plVar9,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    }
  }
  return;
}

// UnregisterWithMediaTextureTracker @ 14ea906a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaPlateComponent::UnregisterWithMediaTextureTracker(UMediaPlateComponent *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FMediaTextureTracker *this_00;
  FScriptContainerElement *pFVar3;
  UObject *local_res8;
  
  if ((this->MediaTextureTrackerObject).Object != (FMediaTextureTrackerObject *)0x0) {
    this_00 = FMediaTextureTracker::Get();
    pFVar3 = (this->MediaTextures).AllocatorInstance.Data;
    iVar2 = (this->MediaTextures).ArrayNum;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->MediaTextures).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UMediaTexture>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar3 == pFVar1) break;
      local_res8 = *(UObject **)pFVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      FMediaTextureTracker::UnregisterTexture
                (this_00,&this->MediaTextureTrackerObject,(TObjectPtr<UMediaTexture>)&local_res8);
      pFVar3 = pFVar3 + 8;
    }
  }
  return;
}

// UpdateLetterboxes @ 14ea90760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMediaPlateComponent::UpdateLetterboxes(UMediaPlateComponent *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UStaticMeshComponent *pUVar3;
  USceneComponent *this_00;
  double dVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  TQuat<double> *pTVar8;
  FScriptContainerElement *pFVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8;
  TQuat<double> local_88 [3];
  
  dVar7 = _UNK_150689688;
  dVar6 = ___xmm_3ff00000000000003ff0000000000000;
  pUVar3 = (this->StaticMeshComponent).field0_0x0.DebugPtr;
  fVar12 = 0.0;
  if ((pUVar3 != (UStaticMeshComponent *)0x0) &&
     (local_a8._s_0.Z = (double)pUVar3->_padding_, local_a8._s_0.Z != 0.0)) {
    fVar12 = (float)((double)pUVar3->_padding_ / local_a8._s_0.Z);
  }
  fVar11 = this->LetterboxAspectRatio;
  if ((fVar12 <= fVar11) || (fVar11 <= 0.0)) {
    pFVar9 = (this->Letterboxes).AllocatorInstance.Data;
    iVar2 = (this->Letterboxes).ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Letterboxes).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UStaticMeshComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar9 == pFVar1) break;
      if (*(USceneComponent **)pFVar9 != (USceneComponent *)0x0) {
        USceneComponent::SetVisibility(*(USceneComponent **)pFVar9,false,DirtyOnly);
      }
      pFVar9 = pFVar9 + 8;
    }
  }
  else if (0.0 < fVar12) {
    pFVar9 = (this->Letterboxes).AllocatorInstance.Data;
    iVar2 = (this->Letterboxes).ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar2 * 8;
    uVar13 = (uint)__xmm_80000000000000008000000000000000;
    uVar5 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
    fVar11 = (__real_42480000 / fVar11 - __real_42480000 / fVar12) * __real_3f000000;
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar10 = fVar11 * __real_3ca3d70a;
    dVar4 = (double)(fVar11 + __real_42480000 / fVar12);
    local_a8._s_0.Z = (double)fVar10;
    while( true ) {
      if ((this->Letterboxes).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UStaticMeshComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar9 == pFVar1) break;
      if (*(USceneComponent **)pFVar9 != (USceneComponent *)0x0) {
        USceneComponent::SetVisibility(*(USceneComponent **)pFVar9,true,DirtyOnly);
        local_c8._s_0.X = dVar6;
        local_c8._s_0.Y = dVar7;
        local_c8._s_0.Z = (double)fVar10;
        USceneComponent::SetRelativeScale3D
                  (*(USceneComponent **)pFVar9,(TVector<double> *)&local_c8._s_0);
        this_00 = *(USceneComponent **)pFVar9;
        local_c8._s_0.X = (this_00->RelativeRotation).Pitch;
        local_c8._s_0.Y = (this_00->RelativeRotation).Yaw;
        local_c8._s_0.Z = (this_00->RelativeRotation).Roll;
        pTVar8 = FRotationConversionCache::RotatorToQuat
                           (&this_00->RelativeRotationCache,local_88,
                            (TRotator<double> *)&local_c8._s_0);
        local_a8._s_0.X = 0.0;
        local_a8._s_0.Y = 0.0;
        local_c8._s_0.Z = dVar4;
        local_a8._s_0.Z = dVar4;
        USceneComponent::SetRelativeLocationAndRotation
                  (this_00,(TVector<double> *)&local_a8._s_0,pTVar8,false,(FHitResult *)0x0,None);
        dVar4 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ (uint)uVar5,
                                 SUB84(dVar4,0) ^ uVar13);
      }
      pFVar9 = pFVar9 + 8;
    }
  }
  return;
}

// UpdateTextureLayers @ 14ea91080

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMediaPlateComponent::UpdateTextureLayers(UMediaPlateComponent *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  UTexture *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  UClass *pUVar8;
  UMaterialInstanceDynamic *pUVar9;
  FName *pFVar10;
  ForAnyElementType FVar11;
  int iVar12;
  uint uVar13;
  wchar_t *pwVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  int local_res8;
  longlong local_res20;
  FString local_98;
  longlong local_88;
  longlong local_80;
  UMaterialInstanceDynamic *local_78;
  longlong local_70;
  FScriptContainerElement *local_68;
  longlong local_60;
  FName local_58;
  FName local_50 [2];
  
  lVar17 = this->_padding_;
  if (lVar17 != 0) {
    pUVar8 = AMediaPlate::StaticClass();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) + (longlong)iVar1 * 8)
        == &pUVar8->_padding_)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FString::FString(&BaseTextureName,L"MediaTexture");
        atexit(`UMediaPlateComponent::UpdateTextureLayers'::__l5::
               _dynamic_atexit_destructor_for__BaseTextureName__);
        _Init_thread_footer(&::_TSS0);
      }
      if (((*(longlong *)(lVar17 + 0x2c8) != 0) &&
          ((*(uint *)(*(longlong *)(lVar17 + 0x2c8) + 8) >> 0x1e & 1) == 0)) &&
         (pUVar9 = (UMaterialInstanceDynamic *)
                   UStaticMeshComponent::GetMaterial(*(UStaticMeshComponent **)(lVar17 + 0x2c8),0),
         local_78 = pUVar9, pUVar9 != (UMaterialInstanceDynamic *)0x0)) {
        pUVar8 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
        iVar1 = (int)pUVar8->_padding_;
        if ((iVar1 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar8->_padding_)) {
          iVar1 = (this->MediaTextures).ArrayNum;
          iVar2 = this->MatNumTexPerLayer;
          uVar18 = 0;
          iVar12 = 0;
          local_60 = (longlong)(this->TextureLayers).ArrayNum;
          local_res8 = 0;
          local_88 = 0;
          if (0 < local_60) {
            local_res20 = 0;
            local_80 = lVar17;
            do {
              uVar15 = ~uVar18 >> 0x1f;
              uVar13 = 0;
              if ((int)uVar18 < (this->TextureLayers).ArrayNum) {
                uVar13 = uVar15;
              }
              if ((uVar13 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar19 = (this->TextureLayers).AllocatorInstance.Data + local_res20 + 8;
              iVar3 = *(int *)(pFVar19 + 8);
              if (this->MatNumTexPerLayer < *(int *)(pFVar19 + 8)) {
                iVar3 = this->MatNumTexPerLayer;
              }
              uVar13 = 0;
              if ((int)uVar18 < (this->TextureLayers).ArrayNum) {
                uVar13 = uVar15;
              }
              local_68 = pFVar19;
              if ((uVar13 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar13 = 0;
              *(undefined4 *)((this->TextureLayers).AllocatorInstance.Data + local_res20) =
                   0xffffffff;
              lVar17 = 0;
              local_70 = (longlong)iVar3;
              if (0 < iVar3) {
                do {
                  uVar7 = 0;
                  if ((int)uVar13 < *(int *)(pFVar19 + 8)) {
                    uVar7 = ~uVar13 >> 0x1f;
                  }
                  if ((uVar7 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  iVar3 = *(int *)(*(longlong *)pFVar19 + lVar17 * 4);
                  if (-1 < iVar3) {
                    uVar7 = 0;
                    if ((int)uVar18 < (this->TextureLayers).ArrayNum) {
                      uVar7 = uVar15;
                    }
                    if ((uVar7 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    *(int *)((this->TextureLayers).AllocatorInstance.Data + local_res20) = iVar12;
                    FVar11 = BaseTextureName.Data.AllocatorInstance;
                    lVar16 = (longlong)BaseTextureName.Data.ArrayNum;
                    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_98.Data.ArrayNum = BaseTextureName.Data.ArrayNum;
                    iVar12 = iVar12 * this->MatNumTexPerLayer + uVar13;
                    if (BaseTextureName.Data.ArrayNum == 0) {
                      local_98.Data.ArrayMax = BaseTextureName.Data.ArrayNum;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (2,2,BaseTextureName.Data.ArrayNum,0,(ForAnyElementType *)&local_98,
                                 BaseTextureName.Data.ArrayNum,&local_98.Data.ArrayMax);
                      memcpy(local_98.Data.AllocatorInstance.Data,FVar11.Data,lVar16 * 2);
                    }
                    if (iVar12 != 0) {
                      ::FString::AppendInt(&local_98,iVar12);
                    }
                    if (((this->MediaTextures).ArrayNum <= iVar3) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    FVar11.Data = (FScriptContainerElement *)L"";
                    if (local_98.Data.ArrayNum != 0) {
                      FVar11.Data = local_98.Data.AllocatorInstance.Data;
                    }
                    pUVar4 = *(UTexture **)
                              ((this->MediaTextures).AllocatorInstance.Data + (longlong)iVar3 * 8);
                    pFVar10 = ::FName::FName(&local_58,(wchar_t *)FVar11.Data);
                    UMaterialInstanceDynamic::SetTextureParameterValue(local_78,*pFVar10,pUVar4);
                    iVar12 = local_res8;
                    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_98.Data.AllocatorInstance.Data);
                    }
                  }
                  uVar13 = uVar13 + 1;
                  lVar17 = lVar17 + 1;
                  pFVar19 = local_68;
                } while (lVar17 < local_70);
              }
              uVar13 = 0;
              if ((int)uVar18 < (this->TextureLayers).ArrayNum) {
                uVar13 = uVar15;
              }
              if ((uVar13 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar17 = local_80;
              if ((*(int *)((this->TextureLayers).AllocatorInstance.Data + local_res20) != -1) &&
                 (iVar12 = iVar12 + 1, local_res8 = iVar12, iVar1 / iVar2 <= iVar12)) break;
              local_res20 = local_res20 + 0x18;
              local_88 = local_88 + 1;
              uVar18 = uVar18 + 1;
            } while (local_88 < local_60);
          }
        }
      }
      pwVar14 = L"";
      if (((*(longlong *)(lVar17 + 0x2c8) != 0) &&
          ((*(uint *)(*(longlong *)(lVar17 + 0x2c8) + 8) >> 0x1e & 1) == 0)) &&
         (pUVar9 = (UMaterialInstanceDynamic *)
                   UMeshComponent::GetOverlayMaterial(*(UMeshComponent **)(lVar17 + 0x2c8)),
         pUVar9 != (UMaterialInstanceDynamic *)0x0)) {
        pUVar8 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
        iVar1 = (int)pUVar8->_padding_;
        if (((iVar1 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
            ((longlong *)
             *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
             &pUVar8->_padding_)) && ((this->MediaTextures).ArrayNum != 0)) {
          if (((this->MediaTextures).ArrayNum < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (BaseTextureName.Data.ArrayNum != 0) {
            pwVar14 = (wchar_t *)BaseTextureName.Data.AllocatorInstance.Data;
          }
          pUVar4 = *(UTexture **)(this->MediaTextures).AllocatorInstance.Data;
          pFVar10 = ::FName::FName(local_50,pwVar14);
          UMaterialInstanceDynamic::SetTextureParameterValue(pUVar9,*pFVar10,pUVar4);
        }
      }
    }
  }
  return;
}

// UpdateTicking @ 14ea916c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMediaPlateComponent::UpdateTicking(UMediaPlateComponent *this)

{
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,this->bIsMediaPlatePlaying)
  ;
  return;
}

// _getUObject @ 14ea91870

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UObject * __thiscall UMediaPlateComponent::_getUObject(UMediaPlateComponent *this)

{
  return (UObject *)&this[-1].MediaTextureProxyCount.field_0x28;
}

// _getUObject`adjustor{152}' @ 14ea9187c

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMediaPlateComponent::_getUObject`adjustor{152}' (void)const __ptr64 */

UObject * __thiscall UMediaPlateComponent::_getUObject_adjustor_152__(UMediaPlateComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMediaPlateComponent *)&this[-1].ActivePlaylist);
  return (UObject *)pUVar1;
}

// execClose @ 14ea91890

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UMediaPlateComponent::execClose(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UMediaPlayer **)&param_1[0xb].field_0x8 != (UMediaPlayer *)0x0) {
    UMediaPlayer::Close(*(UMediaPlayer **)&param_1[0xb].field_0x8);
  }
  StopClockSink((UMediaPlateComponent *)param_1);
  param_1[8].field_0x24 = 0;
  *(undefined2 *)&param_1[0xc].field_0x20 = 0;
  *(undefined4 *)&param_1[8].field_0x18 = 0;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&param_1[1].field_0x10,false);
  return;
}

// execGetIsAspectRatioAuto @ 14ea91900

void __cdecl
UMediaPlateComponent::execGetIsAspectRatioAuto(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[9].field_0x18;
  return;
}

// execGetLetterboxAspectRatio @ 14ea91930

void __cdecl
UMediaPlateComponent::execGetLetterboxAspectRatio(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[9].field_0x24;
  return;
}

// execGetLoop @ 14ea91960

void __cdecl UMediaPlateComponent::execGetLoop(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[9].field_0x11;
  return;
}

// execGetMediaPlayer @ 14ea91990

void __cdecl
UMediaPlateComponent::execGetMediaPlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0xb].field_0x8;
  return;
}

// execGetMediaPlaylist @ 14ea919c0

void __cdecl
UMediaPlateComponent::execGetMediaPlaylist(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0xb].field_0x18;
  return;
}

// execGetMediaTexture @ 14ea919f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UMediaPlateComponent::execGetMediaTexture(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMediaTexture *pUVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetMediaTexture((UMediaPlateComponent *)param_1,local_res10[0]);
  *(UMediaTexture **)param_3 = pUVar2;
  return;
}

// execGetMeshRange @ 14ea91a90

void __cdecl UMediaPlateComponent::execGetMeshRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[10].field_0x10;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[10].field_0x8;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetSelectedMediaSource @ 14ea91ac0

void __cdecl
UMediaPlateComponent::execGetSelectedMediaSource(UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  UMediaSource *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      *(undefined8 *)param_3 = *(undefined8 *)&param_1[0xb].field_0x10;
      return;
    }
    if (cVar1 == '\x02') {
      pUVar2 = FMediaPlateResource::GetMediaAsset((FMediaPlateResource *)(param_1 + 6));
      *(UMediaSource **)param_3 = pUVar2;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execIsEventStateChangeAllowed @ 14ea91b30

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UMediaPlateComponent::execIsEventStateChangeAllowed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  char local_res10 [8];
  
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10[0] != '\0') && (local_res10[0] != '\x01')) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  bVar2 = IsAnyMediaTextureProxied((UMediaPlateComponent *)param_1);
  *(bool *)param_3 = !bVar2;
  return;
}

// execIsMediaPlatePlaying @ 14ea91c10

void __cdecl
UMediaPlateComponent::execIsMediaPlatePlaying(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[8].field_0x24;
  return;
}

// execNext @ 14ea91c40

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl UMediaPlateComponent::execNext(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = Next((UMediaPlateComponent *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execOnMediaEnd @ 14ea91c80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl UMediaPlateComponent::execOnMediaEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  StopClockSink((UMediaPlateComponent *)param_1);
  Next((UMediaPlateComponent *)param_1);
  return;
}

// execOnMediaOpened @ 14ea91cc0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl UMediaPlateComponent::execOnMediaOpened(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  FTimespan local_res8;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src = local_18;
  local_28.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_10;
  local_20 = (int)local_10;
  if ((int)local_10 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_10,0,&local_28,(int)local_10,&local_1c);
    memcpy(local_28.Data,_Src,lVar2 * 2);
  }
  if (param_1[0xc].field_0x21 != '\0') {
    lVar2 = *(longlong *)&param_1[0xb].field_0x8;
    param_1[0xc].field_0x21 = 0;
    param_1[8].field_0x24 = 1;
    if (lVar2 != 0) {
      GetResumeTime((UMediaPlateComponent *)param_1);
      UMediaPlayer::Seek(*(UMediaPlayer **)&param_1[0xb].field_0x8,&local_res8);
    }
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execOnMediaResumed @ 14ea91e10

void __cdecl
UMediaPlateComponent::execOnMediaResumed(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[9].field_0xc = 2;
  return;
}

// execOnMediaSuspended @ 14ea91e40

void __cdecl
UMediaPlateComponent::execOnMediaSuspended(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[9].field_0xc = 1;
  return;
}

// execOpen @ 14ea91e70

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl UMediaPlateComponent::execOpen(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Open((UMediaPlateComponent *)param_1);
  return;
}

// execOpenLatent @ 14ea91e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl UMediaPlateComponent::execOpenLatent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  int iVar3;
  UObject *pUVar4;
  UWorld *this;
  FLatentActionManager *this_00;
  FMediaPlateOpenLatentAction *pFVar5;
  FMediaPlateOpenLatentAction *pFVar6;
  bool *pbVar7;
  bool bVar8;
  bool local_res10 [16];
  FFirstItemPredicate local_res20 [8];
  int local_88;
  float local_84;
  UObject *local_80;
  undefined8 local_78;
  FName local_70;
  UObject *local_68;
  FLatentActionInfo local_60;
  
  pFVar6 = (FMediaPlateOpenLatentAction *)0x0;
  local_80 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_78 = 0xffffffffffffffff;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  local_68 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_84 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_84,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_84);
  }
  local_88 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  bVar8 = local_88 != 0;
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar4 = local_68;
  fVar2 = local_84;
  iVar3 = local_78._4_4_;
  pbVar7 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar7 = (bool *)param_2->MostRecentPropertyAddress;
  }
  local_60.UUID = local_78._4_4_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_60.Linkage = (int)local_78;
  local_60.ExecutionFunction = local_70;
  local_60.CallbackTarget.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)local_68;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_68);
  }
  *pbVar7 = false;
  this = UEngine::GetWorldFromContextObject(GEngine,local_80,LogAndReturnNull);
  if (this != (UWorld *)0x0) {
    this_00 = UWorld::GetLatentActionManager(this);
    pFVar5 = FLatentActionManager::
             FindExistingActionWithPredicate<FMediaPlateOpenLatentAction,_FLatentActionManager::FindExistingAction<FMediaPlateOpenLatentAction>_::__l2::FFirstItemPredicate>
                       (this_00,pUVar4,iVar3,local_res20);
    if (pFVar5 == (FMediaPlateOpenLatentAction *)0x0) {
      pFVar5 = ::operator_new(0x58);
      if (pFVar5 != (FMediaPlateOpenLatentAction *)0x0) {
        pFVar6 = FMediaPlateOpenLatentAction::FMediaPlateOpenLatentAction
                           (pFVar5,&local_60,(UMediaPlateComponent *)param_1,fVar2,bVar8,pbVar7);
      }
      FLatentActionManager::AddNewAction(this_00,pUVar4,iVar3,(FPendingLatentAction *)pFVar6);
    }
  }
  return;
}

// execPause @ 14ea92100

void __cdecl UMediaPlateComponent::execPause(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[9].field_0x4 = 1;
  *(undefined4 *)(param_1 + 9) = 0;
  return;
}

// execPlay @ 14ea92130

void __cdecl UMediaPlateComponent::execPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[9].field_0x4 = 2;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  return;
}

// execPrevious @ 14ea92160

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl UMediaPlateComponent::execPrevious(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = Previous((UMediaPlateComponent *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execRewind @ 14ea921a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlateComponent::execRewind(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  FTimespan local_res8 [4];
  
  local_res8[0].Ticks = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UMediaPlayer **)&param_1[0xb].field_0x8 != (UMediaPlayer *)0x0) {
    bVar1 = UMediaPlayer::Seek(*(UMediaPlayer **)&param_1[0xb].field_0x8,local_res8);
    *(bool *)param_3 = bVar1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSeek @ 14ea92200

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlateComponent::execSeek(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FTimespan *pFVar3;
  FTimespan local_res8;
  
  local_res8.Ticks = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pFVar3 = &local_res8;
  if ((FTimespan *)param_2->MostRecentPropertyAddress != (FTimespan *)0x0) {
    pFVar3 = (FTimespan *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UMediaPlayer **)&param_1[0xb].field_0x8 == (UMediaPlayer *)0x0) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    bVar2 = UMediaPlayer::Seek(*(UMediaPlayer **)&param_1[0xb].field_0x8,pFVar3);
    *(bool *)param_3 = bVar2;
  }
  return;
}

// execSelectExternalMedia @ 14ea922c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UMediaPlateComponent::execSelectExternalMedia(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FProperty *pFVar3;
  ForAnyElementType _Src;
  int iVar4;
  longlong lVar5;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src.Data = local_18.Data;
  puVar2 = &param_1[6].field_0x8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)(param_1 + 6) = 1;
  if ((ForAnyElementType *)puVar2 != &local_18) {
    iVar4 = (int)local_10;
    lVar5 = (longlong)(int)local_10;
    puVar1 = &param_1[6].field_0x14;
    *(int *)&param_1[6].field_0x10 = (int)local_10;
    if (((int)local_10 == 0) && (*(int *)puVar1 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_10,*(int *)puVar1,(ForAnyElementType *)puVar2,(int)local_10,
                 (int *)puVar1);
      if (iVar4 != 0) {
        memcpy(*(void **)puVar2,_Src.Data,lVar5 * 2);
      }
    }
  }
  RefreshMediaPlateResource((UMediaPlateComponent *)param_1);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execSelectMediaPlaylistAsset @ 14ea923f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UMediaPlateComponent::execSelectMediaPlaylistAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res8;
  UObject *local_res10;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)(param_1 + 6) = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)&param_1[7].field_0x18,(FObjectPtr)&local_res10);
  RefreshMediaPlateResource((UMediaPlateComponent *)param_1);
  return;
}

// execSelectMediaSourceAsset @ 14ea924b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UMediaPlateComponent::execSelectMediaSourceAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res8;
  UObject *local_res10;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)(param_1 + 6) = 2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)&param_1[6].field_0x18,(FObjectPtr)&local_res10);
  RefreshMediaPlateResource((UMediaPlateComponent *)param_1);
  return;
}

// execSetEnableAudio @ 14ea92570

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UMediaPlateComponent::execSetEnableAudio(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((bool)param_1[5].field_0x2 != (local_res8[0] != 0)) {
    param_1[5].field_0x2 = local_res8[0] != 0;
    RefreshMediaSoundComponent((UMediaPlateComponent *)param_1);
  }
  return;
}

// execSetIsAspectRatioAuto @ 14ea926a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UMediaPlateComponent::execSetIsAspectRatioAuto(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((bool)param_1[9].field_0x18 != (local_res8[0] != 0)) {
    param_1[9].field_0x18 = local_res8[0] != 0;
    TryActivateAspectRatioAuto((UMediaPlateComponent *)param_1);
  }
  return;
}

// execSetLetterboxAspectRatio @ 14ea92740

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UMediaPlateComponent::execSetLetterboxAspectRatio(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong *plVar4;
  longlong *plVar5;
  float fVar6;
  undefined1 local_res8 [8];
  float local_res10 [2];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar6 = local_res10[0];
  if (local_res10[0] <= 0.0) {
    fVar6 = 0.0;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(float *)&param_1[9].field_0x24 = fVar6;
  if (fVar6 == 0.0) {
    plVar5 = *(longlong **)&param_1[5].field_0x18;
    iVar2 = *(int *)&param_1[5].field_0x20;
    plVar1 = plVar5 + iVar2;
    while( true ) {
      if (*(int *)&param_1[5].field_0x20 != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UStaticMeshComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (plVar5 == plVar1) break;
      plVar4 = (longlong *)*plVar5;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x4a0))(plVar4,0);
      }
      plVar5 = plVar5 + 1;
    }
    *(undefined4 *)&param_1[5].field_0x20 = 0;
    if (*(int *)&param_1[5].field_0x24 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&param_1[5].field_0x18,0,(int *)&param_1[5].field_0x24);
    }
  }
  else {
    AddLetterboxes((UMediaPlateComponent *)param_1);
  }
  UpdateLetterboxes((UMediaPlateComponent *)param_1);
  return;
}

// execSetLoop @ 14ea92880

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl UMediaPlateComponent::execSetLoop(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMediaPlayer *this;
  bool bVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((bool)param_1[9].field_0x11 != bVar2) {
    this = *(UMediaPlayer **)&param_1[0xb].field_0x8;
    param_1[9].field_0x11 = bVar2;
    if (this != (UMediaPlayer *)0x0) {
      UMediaPlayer::SetLooping(this,bVar2);
    }
  }
  return;
}

// execSetMeshRange @ 14ea92930

void __cdecl UMediaPlateComponent::execSetMeshRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0xb].field_0x20;
  *(undefined8 *)&param_1[10].field_0x8 = local_18;
  *(undefined8 *)&param_1[10].field_0x10 = uStack_10;
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = local_18;
    *(undefined8 *)(lVar2 + 0x18) = uStack_10;
  }
  return;
}

// execSetPlayOnlyWhenVisible @ 14ea929c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl
UMediaPlateComponent::execSetPlayOnlyWhenVisible(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[9].field_0x10 = local_res8[0] != 0;
  if (local_res8[0] == 0) {
    ResumeWhenVisible((UMediaPlateComponent *)param_1);
  }
  return;
}

