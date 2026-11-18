// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 17

// StaticClass @ 14ea622e0

UClass * __cdecl UMovieSceneMediaSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMediaSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaCompositing",L"MovieSceneMediaSection",
               &Z_Registration_Info_UClass_UMovieSceneMediaSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneMediaSection,0x2a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneMediaSection>,
               InternalVTableHelperCtorCaller<UMovieSceneMediaSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMediaSection.InnerSingleton;
}

// UMovieSceneMediaSection @ 14ea679a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UMovieSceneMediaSection * __thiscall
UMovieSceneMediaSection::UMovieSceneMediaSection
          (UMovieSceneMediaSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneMediaSection__6B_;
  (this->MediaSource).field0_0x0.DebugPtr = (UMediaSource *)0x0;
  (this->StartFrameOffset).Value = 0;
  (this->MediaTexture).field0_0x0.DebugPtr = (UMediaTexture *)0x0;
  (this->MediaSoundComponent).field0_0x0.DebugPtr = (UMediaSoundComponent *)0x0;
  (this->ExternalMediaPlayer).field0_0x0.DebugPtr = (UMediaPlayer *)0x0;
  (this->CacheSettings).bOverride = false;
  (this->CacheSettings).TimeToLookAhead = 0.2;
  (this->FrameRateAlignment).Numerator = 60000;
  (this->FrameRateAlignment).Denominator = 1;
  FMovieSceneBoolChannel::FMovieSceneBoolChannel(&this->ChannelCanPlayerBeOpen);
  (this->MediaSourceProxyBindingID).Guid.A = 0;
  (this->MediaSourceProxyBindingID).Guid.B = 0;
  (this->MediaSourceProxyBindingID).Guid.C = 0;
  (this->MediaSourceProxyBindingID).Guid.D = 0;
  (this->MediaSourceProxyBindingID).SequenceID = 0;
  (this->MediaSourceProxyBindingID).ResolveParentIndex = -1;
  return this;
}

// UMovieSceneMediaSection @ 14ea67a50

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UMovieSceneMediaSection * __thiscall
UMovieSceneMediaSection::UMovieSceneMediaSection
          (UMovieSceneMediaSection *this,FObjectInitializer *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  UMovieSceneMediaSection *pUVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *local_28;
  FSharedReferencer<1> local_20;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  this->bLooping = true;
  this->MediaSourceProxyIndex = 0;
  this->_padding_ = (longlong)&___7UMovieSceneMediaSection__6B_;
  (this->MediaSource).field0_0x0.DebugPtr = (UMediaSource *)0x0;
  (this->StartFrameOffset).Value = 0;
  (this->MediaTexture).field0_0x0.DebugPtr = (UMediaTexture *)0x0;
  (this->MediaSoundComponent).field0_0x0.DebugPtr = (UMediaSoundComponent *)0x0;
  (this->ExternalMediaPlayer).field0_0x0.DebugPtr = (UMediaPlayer *)0x0;
  (this->CacheSettings).bOverride = false;
  *(undefined8 *)&(this->CacheSettings).TimeToLookAhead = 0x3e4ccccd;
  (this->FrameRateAlignment).Numerator = 0x18;
  (this->FrameRateAlignment).Denominator = 1;
  this->bUseExternalMediaPlayer = false;
  this->bManualFrameRateAlignment = false;
  this->bHasMediaPlayerProxy = false;
  FMovieSceneBoolChannel::FMovieSceneBoolChannel(&this->ChannelCanPlayerBeOpen);
  (this->MediaSourceProxyBindingID).Guid.A = 0;
  (this->MediaSourceProxyBindingID).Guid.B = 0;
  (this->MediaSourceProxyBindingID).ResolveParentIndex = -1;
  (this->MediaSourceProxyBindingID).Guid.C = 0;
  (this->MediaSourceProxyBindingID).Guid.D = 0;
  (this->MediaSourceProxyBindingID).SequenceID = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0x101;
  (this->ChannelCanPlayerBeOpen).DefaultValue = true;
  (this->ChannelCanPlayerBeOpen).bHasDefaultValue = true;
  pTVar6 = ::operator_new(0x68);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneBoolChannel>
              ((FMovieSceneChannelProxy *)(pTVar6 + 1),&this->ChannelCanPlayerBeOpen);
    pTVar9 = pTVar6 + 1;
    pTVar8 = pTVar6;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UMovieSceneMediaSection *)(*pcVar4)();
        return pUVar7;
      }
      goto LAB_14ea67c17;
    }
  }
  if (((pTVar9->_padding_ == 0) || (*(longlong *)&pTVar9->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar9->SharedReferenceCount + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9->_padding_ = (longlong)pTVar9;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pTVar9->SharedReferenceCount) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar9->SharedReferenceCount;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar9->SharedReferenceCount = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14ea67c17:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pTVar9;
  local_20.ReferenceController = pTVar8;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_28) {
    this->_padding_ = (longlong)pTVar9;
    local_28 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return this;
}

// ~UMovieSceneMediaSection @ 14ea68190

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMovieSceneMediaSection::~UMovieSceneMediaSection(UMovieSceneMediaSection *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneMediaSection__6B_;
  FMovieSceneBoolChannel::~FMovieSceneBoolChannel(&this->ChannelCanPlayerBeOpen);
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetMediaSource @ 14ea6c3b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UMediaSource * __thiscall UMovieSceneMediaSection::GetMediaSource(UMovieSceneMediaSection *this)

{
  return (this->MediaSource).field0_0x0.DebugPtr;
}

// GetMediaSourceOrProxy @ 14ea6c3c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UMediaSource * __thiscall
UMovieSceneMediaSection::GetMediaSourceOrProxy
          (UMovieSceneMediaSection *this,IMovieScenePlayer *param_1,FMovieSceneSequenceID param_2)

{
  UMediaSource *pUVar1;
  
  pUVar1 = GetMediaSourceOrProxy
                     (param_1,param_2,(this->MediaSource).field0_0x0.DebugPtr,
                      &this->MediaSourceProxyBindingID,this->MediaSourceProxyIndex);
  return pUVar1;
}

// GetMediaSourceOrProxy @ 14ea6c400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMediaSource * __cdecl
UMovieSceneMediaSection::GetMediaSourceOrProxy
          (IMovieScenePlayer *param_1,FMovieSceneSequenceID param_2,UMediaSource *param_3,
          FMovieSceneObjectBindingID *param_4,int param_5)

{
  undefined8 *puVar1;
  int iVar2;
  UObjectBaseUtility *this;
  bool bVar3;
  AActor *this_00;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  UMediaSource *pUVar8;
  undefined8 *puVar9;
  FWeakObjectPtr *pFVar10;
  UClass *local_res18;
  FWeakObjectPtr local_58;
  undefined8 *local_50;
  undefined8 local_48;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_40;
  
  FMovieSceneObjectBindingID::ResolveBoundObjects(param_4,&local_40,param_2,param_1);
  pFVar10 = &(local_40.DataPtr)->WeakPtr;
  if (&(local_40.DataPtr)->WeakPtr == &local_40.DataPtr[local_40.ArrayNum].WeakPtr) {
    return param_3;
  }
LAB_14ea6c470:
  pUVar6 = (UClass *)0x0;
  local_58 = *pFVar10;
  this_00 = (AActor *)FWeakObjectPtr::Get(&local_58);
  if (this_00 != (AActor *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar4->_padding_)) {
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      pUVar4 = Z_Construct_UClass_UActorComponent_NoRegister();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar4 == (UClass *)0x0) goto LAB_14ea6c51d;
      }
      else {
        if (pUVar4 == (UClass *)0x0) goto LAB_14ea6c51d;
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
      if (pUVar5 != (UClass *)0x0) {
        iVar2 = (int)pUVar5->_padding_;
        if (((int)pUVar4->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar6 = pUVar4;
        }
      }
LAB_14ea6c51d:
      pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
      local_res18 = pUVar4;
      if (pUVar6 == pUVar5) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        AActor::
        ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_res18,
                   (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_50);
      }
      else {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        AActor::
        ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_res18,
                   (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_50);
      }
      iVar2 = (int)local_48;
      puVar1 = local_50 + (int)local_48;
      puVar9 = local_50;
      do {
        if ((int)local_48 != iVar2) {
          `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res18);
        }
        if (puVar9 == puVar1) goto LAB_14ea6c5df;
        this = (UObjectBaseUtility *)*puVar9;
        if (this != (UObjectBaseUtility *)0x0) {
          pUVar6 = Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister();
          plVar7 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar6);
          if (plVar7 != (longlong *)0x0) goto LAB_14ea6c5d3;
        }
        puVar9 = puVar9 + 1;
      } while( true );
    }
    pUVar6 = Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister();
    plVar7 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar6);
    if (plVar7 != (longlong *)0x0) {
      pUVar8 = (UMediaSource *)(**(code **)(*plVar7 + 0x30))(plVar7,param_5);
      return pUVar8;
    }
  }
  goto LAB_14ea6c5f5;
LAB_14ea6c5d3:
  param_3 = (UMediaSource *)(**(code **)(*plVar7 + 0x30))(plVar7,param_5);
LAB_14ea6c5df:
  if (param_3 != (UMediaSource *)0x0) {
    if (local_50 == (undefined8 *)0x0) {
      return param_3;
    }
    FMemory::Free(local_50);
    return param_3;
  }
  if (local_50 != (undefined8 *)0x0) {
    FMemory::Free(local_50);
  }
LAB_14ea6c5f5:
  pFVar10 = pFVar10 + 1;
  if (pFVar10 == &local_40.DataPtr[local_40.ArrayNum].WeakPtr) {
    return param_3;
  }
  goto LAB_14ea6c470;
}

// GetOffsetTime @ 14ea6c6a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TOptional<FFrameTime> * __thiscall
UMovieSceneMediaSection::GetOffsetTime
          (UMovieSceneMediaSection *this,TOptional<FFrameTime> *__return_storage_ptr__)

{
  FFrameTime FVar1;
  
  FVar1.SubFrame = 0.0;
  FVar1.FrameNumber.Value = (this->StartFrameOffset).Value;
  __return_storage_ptr__->TypedValue = FVar1;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14ea6c9a0

UClass * __cdecl UMovieSceneMediaSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMediaSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaCompositing",L"MovieSceneMediaSection",
               &Z_Registration_Info_UClass_UMovieSceneMediaSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneMediaSection,0x2a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneMediaSection>,
               InternalVTableHelperCtorCaller<UMovieSceneMediaSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMediaSection.InnerSingleton;
}

// GetReferencedBindings @ 14ea6cbe0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMovieSceneMediaSection::GetReferencedBindings
          (UMovieSceneMediaSection *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  FMovieSceneObjectBindingID *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  
  pFVar1 = &this->MediaSourceProxyBindingID;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if ((pFVar2 <= pFVar1) && (pFVar1 < pFVar2 + (longlong)param_1->ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = param_1->ArrayNum;
  if (iVar6 == param_1->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar6 + 1;
  uVar4 = *(undefined8 *)&(this->MediaSourceProxyBindingID).Guid.C;
  pFVar2 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar2 = *(undefined8 *)&pFVar1->Guid;
  *(undefined8 *)(pFVar2 + 8) = uVar4;
  return;
}

// GetSourceObject @ 14ea6cd60

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UObject * __thiscall UMovieSceneMediaSection::GetSourceObject(UMovieSceneMediaSection *this)

{
  return (UObject *)(this->MediaSource).field0_0x0.DebugPtr;
}

// MigrateFrameTimes @ 14ea6e0f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMovieSceneMediaSection::MigrateFrameTimes
          (UMovieSceneMediaSection *this,FFrameRate param_1,FFrameRate param_2)

{
  FFrameRate FVar1;
  FFrameTime FVar2;
  uint local_res8 [8];
  
  local_res8[0] = (this->StartFrameOffset).Value;
  if (0 < (int)local_res8[0]) {
    local_res8[1] = 0;
    FVar1.Denominator = 0;
    FVar1.Numerator = local_res8[0];
    FVar2 = ConvertFrameTime((FFrameTime)local_res8,FVar1,param_1);
    (this->StartFrameOffset).Value = *(int *)FVar2;
  }
  return;
}

// OnBindingIDsUpdated @ 14ea6e140

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMovieSceneMediaSection::OnBindingIDsUpdated
          (UMovieSceneMediaSection *this,
          TMap<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>_>
          *param_1,FMovieSceneSequenceID param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_3)

{
  FMovieSceneObjectBindingID *this_00;
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  ulong64 uVar7;
  FMovieSceneSequenceHierarchy *pFVar8;
  FRelativeObjectBindingID *pFVar9;
  longlong lVar10;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_58;
  FFixedObjectBindingID local_48;
  FRelativeObjectBindingID local_30;
  
  local_58.Object = param_3->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &this->MediaSourceProxyBindingID;
  FMovieSceneObjectBindingID::ResolveToFixed(this_00,&local_48,param_2,&local_58);
  uVar7 = CityHash64((char *)&local_48,0x10);
  iVar6 = TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::MovieScene::FFixedObjectBindingID>
                    ((TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
                      *)param_1,(uint)uVar7 ^ local_48.SequenceID.Value,&local_48);
  if (iVar6 == -1) goto LAB_14ea6e269;
  pFVar8 = UE::MovieScene::FSharedPlaybackState::GetHierarchy(param_3->Object);
  uVar7 = CityHash64((char *)&local_48,0x10);
  iVar6 = TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::MovieScene::FFixedObjectBindingID>
                    ((TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
                      *)param_1,(uint)uVar7 ^ local_48.SequenceID.Value,&local_48);
  if (iVar6 == -1) {
    lVar10 = 0;
LAB_14ea6e20a:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    lVar10 = (longlong)iVar6 * 0x30 + *(longlong *)param_1;
    if (lVar10 == 0) goto LAB_14ea6e20a;
  }
  pFVar9 = UE::MovieScene::FFixedObjectBindingID::ConvertToRelative
                     ((FFixedObjectBindingID *)(lVar10 + 0x14),&local_30,param_2,pFVar8);
  uVar2 = (pFVar9->Guid).B;
  uVar3 = (pFVar9->Guid).C;
  uVar4 = (pFVar9->Guid).D;
  (this_00->Guid).A = (pFVar9->Guid).A;
  (this_00->Guid).B = uVar2;
  (this->MediaSourceProxyBindingID).Guid.C = uVar3;
  (this->MediaSourceProxyBindingID).Guid.D = uVar4;
  (this->MediaSourceProxyBindingID).SequenceID = (pFVar9->SequenceID).Value;
  (this->MediaSourceProxyBindingID).ResolveParentIndex = pFVar9->ResolveParentIndex;
LAB_14ea6e269:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// PostInitProperties @ 14ea6e2b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall UMovieSceneMediaSection::PostInitProperties(UMovieSceneMediaSection *this)

{
  int iVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 in_XMM2 [16];
  undefined1 auVar6 [16];
  double dVar7;
  float fVar8;
  float fVar9;
  
  UMovieSceneSection::PostInitProperties((UMovieSceneSection *)this);
  pUVar2 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  if (pUVar3 == (UObject *)0x0) {
    uVar4 = 0x100000018;
  }
  else {
    uVar4 = *(undefined8 *)&pUVar3[7].field_0x20;
  }
  dVar7 = ((double)(int)uVar4 * __real_3fe0000000000000) / (double)(int)((ulonglong)uVar4 >> 0x20);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar7;
  auVar6 = roundpd(in_XMM2,auVar6,1);
  dVar5 = auVar6._0_8_;
  dVar7 = dVar7 - dVar5;
  if (__real_41dfffffffc00000 <= dVar5) {
    dVar5 = __real_41dfffffffc00000;
  }
  if (dVar5 <= __real_c1e0000000000000) {
    dVar5 = __real_c1e0000000000000;
  }
  iVar1 = (int)dVar7;
  fVar8 = (float)dVar7 - (float)iVar1;
  fVar9 = fVar8;
  if ((0.0 < fVar8) && (fVar9 = ::FFrameTime::MaxSubframe, fVar8 <= ::FFrameTime::MaxSubframe)) {
    fVar9 = fVar8;
  }
  fVar8 = ::FFrameTime::MaxSubframe;
  if (fVar9 <= ::FFrameTime::MaxSubframe) {
    fVar8 = fVar9;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  iVar1 = (int)dVar5 + iVar1;
  if (__real_3f000000 <= fVar8) {
    iVar1 = iVar1 + 1;
  }
  *(int *)&this->_padding_ = iVar1;
  return;
}

// SplitSection @ 14ea70230

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneMediaSection::SplitSection
          (UMovieSceneMediaSection *this,FQualifiedFrameTime *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  UMovieSceneSection *pUVar4;
  UClass *pUVar5;
  char cVar6;
  UMovieSceneSection *pUVar7;
  FQualifiedFrameTime local_18;
  
  iVar1 = (this->StartFrameOffset).Value;
  cVar6 = (char)this->_padding_;
  if (cVar6 == '\x02') {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)((ulonglong)this->_padding_ >> 0x20);
    if (cVar6 != '\x01') {
      iVar3 = iVar3 + 1;
    }
    local_18.Time.FrameNumber = (param_1->Time).FrameNumber;
    iVar3 = (iVar1 - iVar3) + local_18.Time.FrameNumber.Value;
  }
  local_18.Time = param_1->Time;
  local_18.Rate = param_1->Rate;
  pUVar4 = UMovieSceneSection::SplitSection((UMovieSceneSection *)this,&local_18,param_2);
  if (pUVar4 != (UMovieSceneSection *)0x0) {
    pUVar5 = StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    pUVar7 = (UMovieSceneSection *)0x0;
    if ((iVar2 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar5->_padding_)) {
      pUVar7 = pUVar4;
    }
    *(int *)&pUVar7[1]._padding_ = iVar3;
  }
  (this->StartFrameOffset).Value = iVar1;
  return pUVar4;
}

// StaticRegisterNativesUMovieSceneMediaSection @ 14ea70370

void __cdecl UMovieSceneMediaSection::StaticRegisterNativesUMovieSceneMediaSection(void)

{
  return;
}

// TrimSection @ 14ea70650

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMovieSceneMediaSection::TrimSection
          (UMovieSceneMediaSection *this,FQualifiedFrameTime *param_1,bool param_2,bool param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iStack_34;
  FFrameNumber local_28;
  FQualifiedFrameTime local_18;
  
  bVar3 = UMovieSceneSection::TryModify((UMovieSceneSection *)this,true);
  if (bVar3) {
    if (param_2) {
      lVar1 = this->_padding_;
      if ((char)lVar1 == '\x02') {
        iVar5 = 0;
      }
      else {
        uVar4 = (uint)lVar1 & 0xff;
        iStack_34 = (int)((ulonglong)lVar1 >> 0x20);
        if ((char)lVar1 == '\x01') {
          if ((uVar4 == 2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else {
          if ((uVar4 == 2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iStack_34 = iStack_34 + 1;
        }
        local_28 = (param_1->Time).FrameNumber;
        iVar5 = ((this->StartFrameOffset).Value - iStack_34) + local_28.Value;
      }
      (this->StartFrameOffset).Value = iVar5;
    }
    local_18.Time = param_1->Time;
    local_18.Rate = param_1->Rate;
    UMovieSceneSection::TrimSection((UMovieSceneSection *)this,&local_18,param_2,param_3);
  }
  return;
}

