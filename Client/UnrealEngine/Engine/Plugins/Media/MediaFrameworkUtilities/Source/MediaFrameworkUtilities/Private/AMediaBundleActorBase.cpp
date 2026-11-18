// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 22

// StaticClass @ 14d7cafb0

UClass * __cdecl AMediaBundleActorBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AMediaBundleActorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaBundleActorBase",
               &Z_Registration_Info_UClass_AMediaBundleActorBase.InnerSingleton,
               StaticRegisterNativesAMediaBundleActorBase,0x300,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<AMediaBundleActorBase>,
               InternalVTableHelperCtorCaller<AMediaBundleActorBase>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AMediaBundleActorBase.InnerSingleton;
}

// AMediaBundleActorBase @ 14d7d0580

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

AMediaBundleActorBase * __thiscall
AMediaBundleActorBase::AMediaBundleActorBase(AMediaBundleActorBase *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AMediaBundleActorBase__6B_;
  (this->GarbageMatteMask).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  (this->MediaBundle).field0_0x0.DebugPtr = (UMediaBundle *)0x0;
  (this->PrimitiveCmp).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->MediaSoundCmp).field0_0x0.DebugPtr = (UMediaSoundComponent *)0x0;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->MediaStateChangedHandle).ID = 0;
  return this;
}

// AMediaBundleActorBase @ 14d7d05e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

AMediaBundleActorBase * __thiscall
AMediaBundleActorBase::AMediaBundleActorBase
          (AMediaBundleActorBase *this,FObjectInitializer *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AMediaBundleActorBase__6B_;
  (this->GarbageMatteMask).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  (this->MediaBundle).field0_0x0.DebugPtr = (UMediaBundle *)0x0;
  (this->PrimitiveCmp).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (this->MediaSoundCmp).field0_0x0.DebugPtr = (UMediaSoundComponent *)0x0;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->MediaStateChangedHandle).ID = 0;
  return this;
}

// ~AMediaBundleActorBase @ 14d7d1a20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall AMediaBundleActorBase::~AMediaBundleActorBase(AMediaBundleActorBase *this)

{
  this->_padding_ = (longlong)&___7AMediaBundleActorBase__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// BeginDestroy @ 14d7d3ba0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall AMediaBundleActorBase::BeginDestroy(AMediaBundleActorBase *this)

{
  UMediaBundle *pUVar1;
  FDelegateHandle FVar2;
  
  pUVar1 = (this->MediaBundle).field0_0x0.DebugPtr;
  if ((pUVar1 != (UMediaBundle *)0x0) && (this->bPlayingMedia != false)) {
    UMediaBundle::CloseMediaSource(pUVar1);
    this->bPlayingMedia = false;
  }
  pUVar1 = (this->MediaBundle).field0_0x0.DebugPtr;
  if ((pUVar1 != (UMediaBundle *)0x0) &&
     (FVar2.ID = (this->MediaStateChangedHandle).ID, FVar2.ID != 0)) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->MediaStateChangedDelegate,FVar2);
    (this->MediaStateChangedHandle).ID = 0;
  }
  AActor::BeginDestroy((AActor *)this);
  return;
}

// BeginPlay @ 14d7d3c10

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall AMediaBundleActorBase::BeginPlay(AMediaBundleActorBase *this)

{
  UMediaBundle *this_00;
  bool bVar1;
  
  AActor::BeginPlay((AActor *)this);
  if (((this->bAutoPlay != false) && ((this->_padding_ & 0x10) == 0)) &&
     (this->bPlayingMedia == false)) {
    this_00 = (this->MediaBundle).field0_0x0.DebugPtr;
    if (this_00 != (UMediaBundle *)0x0) {
      bVar1 = UMediaBundle::OpenMediaSource(this_00);
      this->bPlayingMedia = bVar1;
      return;
    }
    this->bPlayingMedia = false;
  }
  return;
}

// CreateDynamicMaterial @ 14d7d5d00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall AMediaBundleActorBase::CreateDynamicMaterial(AMediaBundleActorBase *this)

{
  UTextureRenderTarget2D *pUVar1;
  UMediaBundle *pUVar2;
  UMediaPlayer *this_00;
  TReferenceControllerBase<1> *pTVar3;
  IMediaPlayer *pIVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FName *pFVar10;
  UMaterialInstanceDynamic *pUVar11;
  TSharedRef<FMediaPlayerFacade,1> *pTVar12;
  longlong *plVar13;
  ForAnyElementType FVar14;
  FName FVar15;
  FName local_res8;
  FName local_res10;
  FString local_58;
  FString local_48;
  TSharedRef<FMediaPlayerFacade,1> local_38;
  TSharedRef<FMediaPlayerFacade,1> local_28;
  
  bVar6 = false;
  bVar8 = false;
  iVar9 = 0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (((this->MediaBundle).field0_0x0.DebugPtr == (UMediaBundle *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MediaBundle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaFrameworkUtilities\\Source\\MediaFrameworkUtilities\\Private\\MediaBundleActorBase.cpp"
                         ,0x3b,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_res8 = (FName)this->_padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::ConcatCF(&local_58,L"MID_",&local_48);
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar14.Data = local_58.Data.AllocatorInstance.Data;
  }
  pFVar10 = ::FName::FName(&local_res10,(wchar_t *)FVar14.Data);
  pUVar11 = UMaterialInstanceDynamic::Create
                      ((((this->MediaBundle).field0_0x0.DebugPtr)->Material).field0_0x0.DebugPtr,
                       (UObject *)this,*pFVar10);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (UMaterialInstanceDynamic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->Material).field0_0x0.DebugPtr = pUVar11;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pUVar1 = (this->GarbageMatteMask).field0_0x0.DebugPtr;
  if (pUVar1 != (UTextureRenderTarget2D *)0x0) {
    UMaterialInstanceDynamic::SetTextureParameterValue
              ((this->Material).field0_0x0.DebugPtr,
               MediaBundleMaterialParametersName::GarbageMatteTextureName,(UTexture *)pUVar1);
  }
  pUVar2 = (this->MediaBundle).field0_0x0.DebugPtr;
  bVar7 = false;
  if (((pUVar2->MediaSource).field0_0x0.DebugPtr != (UMediaSource *)0x0) &&
     (this_00 = (pUVar2->MediaPlayer).field0_0x0.DebugPtr, this_00 != (UMediaPlayer *)0x0)) {
    pTVar12 = UMediaPlayer::GetPlayerFacade(this_00,&local_28);
    pTVar3 = (pTVar12->Object->Player).SharedReferenceCount.ReferenceController;
    pIVar4 = (pTVar12->Object->Player).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar15 = local_res8;
    if (pIVar4 != (IMediaPlayer *)0x0) {
      pTVar12 = UMediaPlayer::GetPlayerFacade((pUVar2->MediaPlayer).field0_0x0.DebugPtr,&local_38);
      FVar15 = (FName)(pTVar12->Object->Player).SharedReferenceCount.ReferenceController;
      pIVar4 = (pTVar12->Object->Player).Object;
      if (FVar15 != (FName)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)FVar15 + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)FVar15 + 8) + 1);
        UNLOCK();
      }
      if ((pIVar4 == (IMediaPlayer *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar13 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
      iVar9 = (**(code **)(*plVar13 + 0x18))(plVar13);
      bVar6 = true;
      bVar8 = true;
    }
    if (bVar8) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar15);
    }
    if (bVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    bVar7 = iVar9 == 3;
  }
  pUVar11 = (this->Material).field0_0x0.DebugPtr;
  if (pUVar11 == (UMaterialInstanceDynamic *)0x0) {
    return;
  }
  if (!bVar7) {
    UMaterialInstanceDynamic::SetScalarParameterValue
              (pUVar11,MediaBundleMaterialParametersName::IsValidMediaName,0.0);
    return;
  }
  UMaterialInstanceDynamic::SetScalarParameterValue
            (pUVar11,MediaBundleMaterialParametersName::IsValidMediaName,__real_3f800000);
  return;
}

// Destroyed @ 14d7d67a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall AMediaBundleActorBase::Destroyed(AMediaBundleActorBase *this)

{
  UMediaBundle *pUVar1;
  FDelegateHandle FVar2;
  
  pUVar1 = (this->MediaBundle).field0_0x0.DebugPtr;
  if ((pUVar1 != (UMediaBundle *)0x0) && (this->bPlayingMedia != false)) {
    UMediaBundle::CloseMediaSource(pUVar1);
    this->bPlayingMedia = false;
  }
  pUVar1 = (this->MediaBundle).field0_0x0.DebugPtr;
  if ((pUVar1 != (UMediaBundle *)0x0) &&
     (FVar2.ID = (this->MediaStateChangedHandle).ID, FVar2.ID != 0)) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->MediaStateChangedDelegate,FVar2);
    (this->MediaStateChangedHandle).ID = 0;
  }
  AActor::Destroyed((AActor *)this);
  return;
}

// EndPlay @ 14d7d68c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall AMediaBundleActorBase::EndPlay(AMediaBundleActorBase *this,Type param_1)

{
  UMediaBundle *this_00;
  
  this_00 = (this->MediaBundle).field0_0x0.DebugPtr;
  if ((this_00 != (UMediaBundle *)0x0) && (this->bPlayingMedia != false)) {
    UMediaBundle::CloseMediaSource(this_00);
    this->bPlayingMedia = false;
  }
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// GetPrivateStaticClass @ 14d7da730

UClass * __cdecl AMediaBundleActorBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AMediaBundleActorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaBundleActorBase",
               &Z_Registration_Info_UClass_AMediaBundleActorBase.InnerSingleton,
               StaticRegisterNativesAMediaBundleActorBase,0x300,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<AMediaBundleActorBase>,
               InternalVTableHelperCtorCaller<AMediaBundleActorBase>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AMediaBundleActorBase.InnerSingleton;
}

// PostActorCreated @ 14d7debd0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall AMediaBundleActorBase::PostActorCreated(AMediaBundleActorBase *this)

{
  UMediaBundle *pUVar1;
  bool bVar2;
  FDelegateHandle FVar3;
  
  AActor::PostActorCreated((AActor *)this);
  if ((this->_padding_ & 0x40) == 0) {
    pUVar1 = (this->MediaBundle).field0_0x0.DebugPtr;
    if ((pUVar1 != (UMediaBundle *)0x0) && ((this->MediaStateChangedHandle).ID == 0)) {
      FVar3 = TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
              AddUObject<AMediaBundleActorBase>
                        ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>
                          *)&pUVar1->MediaStateChangedDelegate,
                         (AMediaBundleActorBase *)&stack0x00000008,(pmf_9c28d591)this);
                    /* WARNING: Load size is inaccurate */
      (this->MediaStateChangedHandle).ID = *FVar3.ID;
    }
    if ((((this->bAutoPlay != false) && (this->bPlayWhileEditing != false)) &&
        ((this->_padding_ & 0x10) == 0)) && (this->bPlayingMedia == false)) {
      pUVar1 = (this->MediaBundle).field0_0x0.DebugPtr;
      if (pUVar1 != (UMediaBundle *)0x0) {
        bVar2 = UMediaBundle::OpenMediaSource(pUVar1);
        this->bPlayingMedia = bVar2;
        return;
      }
      this->bPlayingMedia = false;
    }
  }
  return;
}

// PostLoadSubobjects @ 14d7dee00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
AMediaBundleActorBase::PostLoadSubobjects
          (AMediaBundleActorBase *this,FObjectInstancingGraph *param_1)

{
  UPrimitiveComponent *pUVar1;
  UMediaSoundComponent *this_00;
  UMediaBundle *this_01;
  bool bVar2;
  FDelegateHandle FVar3;
  
  AActor::PostLoadSubobjects((AActor *)this,param_1);
  if ((this->MediaBundle).field0_0x0.DebugPtr != (UMediaBundle *)0x0) {
    pUVar1 = (this->PrimitiveCmp).field0_0x0.DebugPtr;
    if (pUVar1 != (UPrimitiveComponent *)0x0) {
      (**(code **)(*(longlong *)pUVar1 + 0x6b8))
                (pUVar1,this->PrimitiveMaterialIndex,(this->Material).field0_0x0.DebugPtr);
    }
    this_00 = (this->MediaSoundCmp).field0_0x0.DebugPtr;
    if (this_00 != (UMediaSoundComponent *)0x0) {
      UMediaSoundComponent::SetMediaPlayer
                (this_00,(((this->MediaBundle).field0_0x0.DebugPtr)->MediaPlayer).field0_0x0.
                         DebugPtr);
    }
    if ((this->MediaStateChangedHandle).ID == 0) {
      FVar3 = TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
              AddUObject<AMediaBundleActorBase>
                        ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>
                          *)&((this->MediaBundle).field0_0x0.DebugPtr)->MediaStateChangedDelegate,
                         (AMediaBundleActorBase *)&stack0x00000008,(pmf_9c28d591)this);
                    /* WARNING: Load size is inaccurate */
      (this->MediaStateChangedHandle).ID = *FVar3.ID;
    }
    if ((((this->bAutoPlay != false) && (this->bPlayWhileEditing != false)) &&
        ((this->_padding_ & 0x10) == 0)) && (this->bPlayingMedia == false)) {
      this_01 = (this->MediaBundle).field0_0x0.DebugPtr;
      if (this_01 != (UMediaBundle *)0x0) {
        bVar2 = UMediaBundle::OpenMediaSource(this_01);
        this->bPlayingMedia = bVar2;
        return;
      }
      this->bPlayingMedia = false;
    }
  }
  return;
}

// RequestCloseMediaSource @ 14d7e07e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall AMediaBundleActorBase::RequestCloseMediaSource(AMediaBundleActorBase *this)

{
  UMediaBundle *this_00;
  
  this_00 = (this->MediaBundle).field0_0x0.DebugPtr;
  if ((this_00 != (UMediaBundle *)0x0) && (this->bPlayingMedia != false)) {
    UMediaBundle::CloseMediaSource(this_00);
    this->bPlayingMedia = false;
  }
  return;
}

// RequestOpenMediaSource @ 14d7e0820

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall AMediaBundleActorBase::RequestOpenMediaSource(AMediaBundleActorBase *this)

{
  UMediaBundle *this_00;
  bool bVar1;
  
  if ((this->_padding_ & 0x10) != 0) {
    return false;
  }
  if (this->bPlayingMedia != false) {
    return true;
  }
  this_00 = (this->MediaBundle).field0_0x0.DebugPtr;
  if (this_00 != (UMediaBundle *)0x0) {
    bVar1 = UMediaBundle::OpenMediaSource(this_00);
    this->bPlayingMedia = bVar1;
    return bVar1;
  }
  this->bPlayingMedia = false;
  return false;
}

// SetComponent @ 14d7e1160

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
AMediaBundleActorBase::SetComponent
          (AMediaBundleActorBase *this,UPrimitiveComponent *param_1,UMediaSoundComponent *param_2)

{
  UPrimitiveComponent *pUVar1;
  UMaterialInstanceDynamic *pUVar2;
  UMediaSoundComponent *this_00;
  UMediaBundle *pUVar3;
  UMediaPlayer *pUVar4;
  UMaterialInstanceDynamic *pUVar5;
  UMediaPlayer *pUVar6;
  bool bVar7;
  
  pUVar1 = (this->PrimitiveCmp).field0_0x0.DebugPtr;
  if (pUVar1 == (UPrimitiveComponent *)0x0) {
    bVar7 = param_1 == (UPrimitiveComponent *)0x0;
  }
  else {
    bVar7 = pUVar1 == param_1;
  }
  if (!bVar7) {
    if (((this->MediaBundle).field0_0x0.DebugPtr != (UMediaBundle *)0x0) &&
       (pUVar1 != (UPrimitiveComponent *)0x0)) {
      pUVar5 = (UMaterialInstanceDynamic *)(**(code **)(*(longlong *)pUVar1 + 0x690))();
      pUVar2 = (this->Material).field0_0x0.DebugPtr;
      if (pUVar2 == (UMaterialInstanceDynamic *)0x0) {
        bVar7 = pUVar5 == (UMaterialInstanceDynamic *)0x0;
      }
      else {
        bVar7 = pUVar2 == pUVar5;
      }
      if (bVar7) {
        pUVar1 = (this->PrimitiveCmp).field0_0x0.DebugPtr;
        (**(code **)(*(longlong *)pUVar1 + 0x6b8))(pUVar1,this->PrimitiveMaterialIndex,0);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->PrimitiveCmp).field0_0x0.DebugPtr = param_1;
    if (((this->MediaBundle).field0_0x0.DebugPtr != (UMediaBundle *)0x0) &&
       (param_1 != (UPrimitiveComponent *)0x0)) {
      (**(code **)(*(longlong *)param_1 + 0x6b8))
                (param_1,this->PrimitiveMaterialIndex,(this->Material).field0_0x0.DebugPtr);
    }
  }
  this_00 = (this->MediaSoundCmp).field0_0x0.DebugPtr;
  if (this_00 == (UMediaSoundComponent *)0x0) {
    bVar7 = param_2 == (UMediaSoundComponent *)0x0;
  }
  else {
    bVar7 = this_00 == param_2;
  }
  if (!bVar7) {
    pUVar3 = (this->MediaBundle).field0_0x0.DebugPtr;
    if ((pUVar3 != (UMediaBundle *)0x0) && (this_00 != (UMediaSoundComponent *)0x0)) {
      pUVar4 = (pUVar3->MediaPlayer).field0_0x0.DebugPtr;
      pUVar6 = UMediaSoundComponent::GetMediaPlayer(this_00);
      if (pUVar6 == pUVar4) {
        UMediaSoundComponent::SetMediaPlayer
                  ((this->MediaSoundCmp).field0_0x0.DebugPtr,(UMediaPlayer *)0x0);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UMediaSoundComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    (this->MediaSoundCmp).field0_0x0.DebugPtr = param_2;
    pUVar3 = (this->MediaBundle).field0_0x0.DebugPtr;
    if ((pUVar3 != (UMediaBundle *)0x0) && (param_2 != (UMediaSoundComponent *)0x0)) {
      UMediaSoundComponent::SetMediaPlayer(param_2,(pUVar3->MediaPlayer).field0_0x0.DebugPtr);
    }
  }
  return;
}

// SetIsValidMaterialParameter @ 14d7e1580

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
AMediaBundleActorBase::SetIsValidMaterialParameter(AMediaBundleActorBase *this,bool param_1)

{
  UMaterialInstanceDynamic *this_00;
  
  this_00 = (this->Material).field0_0x0.DebugPtr;
  if (this_00 == (UMaterialInstanceDynamic *)0x0) {
    return;
  }
  if (param_1) {
    UMaterialInstanceDynamic::SetScalarParameterValue
              (this_00,MediaBundleMaterialParametersName::IsValidMediaName,__real_3f800000);
    return;
  }
  UMaterialInstanceDynamic::SetScalarParameterValue
            (this_00,MediaBundleMaterialParametersName::IsValidMediaName,0.0);
  return;
}

// SetSoundComponentMediaPlayer @ 14d7e1970

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
AMediaBundleActorBase::SetSoundComponentMediaPlayer
          (AMediaBundleActorBase *this,UMediaPlayer *param_1)

{
  UMediaSoundComponent::SetMediaPlayer((this->MediaSoundCmp).field0_0x0.DebugPtr,param_1);
  return;
}

// StaticRegisterNativesAMediaBundleActorBase @ 14d7e1e10

void __cdecl AMediaBundleActorBase::StaticRegisterNativesAMediaBundleActorBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_AMediaBundleActorBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetMediaBundle @ 14d7e2940

void __cdecl
AMediaBundleActorBase::execGetMediaBundle(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x11].field_0x20;
  return;
}

// execRequestCloseMediaSource @ 14d7e2d60

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl
AMediaBundleActorBase::execRequestCloseMediaSource(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(UMediaBundle **)&param_1[0x11].field_0x20 != (UMediaBundle *)0x0) &&
     (param_1[0x12].field_0x24 != '\0')) {
    UMediaBundle::CloseMediaSource(*(UMediaBundle **)&param_1[0x11].field_0x20);
    param_1[0x12].field_0x24 = 0;
  }
  return;
}

// execRequestOpenMediaSource @ 14d7e2db0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl
AMediaBundleActorBase::execRequestOpenMediaSource(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(uint *)&param_1->field_0x8 & 0x10) != 0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  if (param_1[0x12].field_0x24 != '\0') {
    *(undefined1 *)param_3 = 1;
    return;
  }
  if (*(UMediaBundle **)&param_1[0x11].field_0x20 != (UMediaBundle *)0x0) {
    bVar1 = UMediaBundle::OpenMediaSource(*(UMediaBundle **)&param_1[0x11].field_0x20);
    param_1[0x12].field_0x24 = bVar1;
    *(bool *)param_3 = bVar1;
    return;
  }
  param_1[0x12].field_0x24 = 0;
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetComponent @ 14d7e2e50

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl AMediaBundleActorBase::execSetComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UMediaSoundComponent *this;
  UMediaPlayer *pUVar3;
  UMediaSoundComponent *this_00;
  UObject *pUVar4;
  longlong lVar5;
  UMediaPlayer *pUVar6;
  bool bVar7;
  UMediaSoundComponent *local_res8;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8 = (UMediaSoundComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar4 = local_res10;
  this_00 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = *(UObject **)&param_1[0x12].field_0x8;
  if (pUVar2 == (UObject *)0x0) {
    bVar7 = local_res10 == (UObject *)0x0;
  }
  else {
    bVar7 = pUVar2 == local_res10;
  }
  if (!bVar7) {
    if ((*(longlong *)&param_1[0x11].field_0x20 != 0) && (pUVar2 != (UObject *)0x0)) {
      lVar5 = (**(code **)(*(longlong *)pUVar2 + 0x690))();
      if (*(longlong *)&param_1[0x12].field_0x18 == 0) {
        bVar7 = lVar5 == 0;
      }
      else {
        bVar7 = *(longlong *)&param_1[0x12].field_0x18 == lVar5;
      }
      if (bVar7) {
        (**(code **)(**(longlong **)&param_1[0x12].field_0x8 + 0x6b8))
                  (*(longlong **)&param_1[0x12].field_0x8,*(undefined4 *)&param_1[0x12].field_0x20,0
                  );
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    *(UObject **)&param_1[0x12].field_0x8 = pUVar4;
    if ((*(longlong *)&param_1[0x11].field_0x20 != 0) && (pUVar4 != (UObject *)0x0)) {
      (**(code **)(*(longlong *)pUVar4 + 0x6b8))
                (pUVar4,*(undefined4 *)&param_1[0x12].field_0x20,
                 *(undefined8 *)&param_1[0x12].field_0x18);
    }
  }
  this = *(UMediaSoundComponent **)&param_1[0x12].field_0x10;
  if (this == (UMediaSoundComponent *)0x0) {
    bVar7 = this_00 == (UMediaSoundComponent *)0x0;
  }
  else {
    bVar7 = this == this_00;
  }
  if (!bVar7) {
    if ((*(longlong *)&param_1[0x11].field_0x20 != 0) && (this != (UMediaSoundComponent *)0x0)) {
      pUVar3 = *(UMediaPlayer **)(*(longlong *)&param_1[0x11].field_0x20 + 0x38);
      pUVar6 = UMediaSoundComponent::GetMediaPlayer(this);
      if (pUVar6 == pUVar3) {
        UMediaSoundComponent::SetMediaPlayer
                  (*(UMediaSoundComponent **)&param_1[0x12].field_0x10,(UMediaPlayer *)0x0);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UMediaSoundComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    *(UMediaSoundComponent **)&param_1[0x12].field_0x10 = this_00;
    if ((*(longlong *)&param_1[0x11].field_0x20 != 0) && (this_00 != (UMediaSoundComponent *)0x0)) {
      UMediaSoundComponent::SetMediaPlayer
                (this_00,*(UMediaPlayer **)(*(longlong *)&param_1[0x11].field_0x20 + 0x38));
    }
  }
  return;
}

