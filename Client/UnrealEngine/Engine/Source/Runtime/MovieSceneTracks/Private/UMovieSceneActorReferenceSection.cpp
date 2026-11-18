// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// StaticClass @ 14658bd70

UClass * __cdecl UMovieSceneActorReferenceSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneActorReferenceSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneActorReferenceSection",
               &Z_Registration_Info_UClass_UMovieSceneActorReferenceSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneActorReferenceSection,0x2d8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneActorReferenceSection>,
               InternalVTableHelperCtorCaller<UMovieSceneActorReferenceSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneActorReferenceSection.InnerSingleton;
}

// UMovieSceneActorReferenceSection @ 14661a7c0

UMovieSceneActorReferenceSection * __thiscall
UMovieSceneActorReferenceSection::UMovieSceneActorReferenceSection
          (UMovieSceneActorReferenceSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneActorReferenceSection__6B_;
  FMovieSceneActorReferenceData::FMovieSceneActorReferenceData(&this->ActorReferenceData);
  (this->ActorGuidIndexCurve_DEPRECATED)._padding_ = 0;
  (this->ActorGuidIndexCurve_DEPRECATED)._padding_ = 0;
  (this->ActorGuidIndexCurve_DEPRECATED)._padding_ = 0;
  *(undefined4 *)&(this->ActorGuidIndexCurve_DEPRECATED)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->ActorGuidIndexCurve_DEPRECATED)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->ActorGuidIndexCurve_DEPRECATED)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->ActorGuidIndexCurve_DEPRECATED)._padding_ + 4) = 0;
  (this->ActorGuidIndexCurve_DEPRECATED)._padding_ = 0;
  *(undefined4 *)&(this->ActorGuidIndexCurve_DEPRECATED)._padding_ = 0;
  (this->ActorGuidIndexCurve_DEPRECATED)._padding_ = 0;
  (this->ActorGuidIndexCurve_DEPRECATED)._padding_ = 0;
  (this->ActorGuidIndexCurve_DEPRECATED)._padding_ = (longlong)&___7FIntegralCurve__6B_;
  (this->ActorGuidIndexCurve_DEPRECATED).Keys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActorGuidIndexCurve_DEPRECATED).Keys.ArrayNum = 0;
  (this->ActorGuidIndexCurve_DEPRECATED).Keys.ArrayMax = 0;
  (this->ActorGuidIndexCurve_DEPRECATED).DefaultValue = 0x7fffffff;
  (this->ActorGuidIndexCurve_DEPRECATED).bUseDefaultValueBeforeFirstKey = false;
  (this->ActorGuidStrings_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorGuidStrings_DEPRECATED).ArrayNum = 0;
  (this->ActorGuidStrings_DEPRECATED).ArrayMax = 0;
  return this;
}

// UMovieSceneActorReferenceSection @ 14661a880

UMovieSceneActorReferenceSection * __thiscall
UMovieSceneActorReferenceSection::UMovieSceneActorReferenceSection
          (UMovieSceneActorReferenceSection *this,FObjectInitializer *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  UMovieSceneActorReferenceSection *pUVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *local_28;
  FSharedReferencer<1> local_20;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneActorReferenceSection__6B_;
  FMovieSceneActorReferenceData::FMovieSceneActorReferenceData(&this->ActorReferenceData);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->ActorGuidIndexCurve_DEPRECATED)._padding_ = 0;
  (this->ActorGuidIndexCurve_DEPRECATED)._padding_ = 0;
  (this->ActorGuidIndexCurve_DEPRECATED)._padding_ = 0;
  *(undefined4 *)&(this->ActorGuidIndexCurve_DEPRECATED)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->ActorGuidIndexCurve_DEPRECATED)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->ActorGuidIndexCurve_DEPRECATED)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->ActorGuidIndexCurve_DEPRECATED)._padding_ + 4) = 0;
  (this->ActorGuidIndexCurve_DEPRECATED)._padding_ = 0;
  *(undefined4 *)&(this->ActorGuidIndexCurve_DEPRECATED)._padding_ = 0;
  (this->ActorGuidIndexCurve_DEPRECATED)._padding_ = 0;
  (this->ActorGuidIndexCurve_DEPRECATED)._padding_ = 0;
  (this->ActorGuidIndexCurve_DEPRECATED)._padding_ = (longlong)&___7FIntegralCurve__6B_;
  (this->ActorGuidIndexCurve_DEPRECATED).Keys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActorGuidIndexCurve_DEPRECATED).Keys.ArrayNum = 0;
  (this->ActorGuidIndexCurve_DEPRECATED).Keys.ArrayMax = 0;
  (this->ActorGuidIndexCurve_DEPRECATED).DefaultValue = 0x7fffffff;
  (this->ActorGuidIndexCurve_DEPRECATED).bUseDefaultValueBeforeFirstKey = false;
  (this->ActorGuidStrings_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorGuidStrings_DEPRECATED).ArrayNum = 0;
  (this->ActorGuidStrings_DEPRECATED).ArrayMax = 0;
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
    FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneActorReferenceData>
              ((FMovieSceneChannelProxy *)(pTVar6 + 1),&this->ActorReferenceData);
    pTVar9 = pTVar6 + 1;
    pTVar8 = pTVar6;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UMovieSceneActorReferenceSection *)(*pcVar4)();
        return pUVar7;
      }
      goto LAB_14661aa30;
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
LAB_14661aa30:
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

// ~UMovieSceneActorReferenceSection @ 146621960

void __thiscall
UMovieSceneActorReferenceSection::~UMovieSceneActorReferenceSection
          (UMovieSceneActorReferenceSection *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMovieSceneActorReferenceSection__6B_;
  DestructItems<FString,int>
            ((FString *)(this->ActorGuidStrings_DEPRECATED).AllocatorInstance.Data,
             (this->ActorGuidStrings_DEPRECATED).ArrayNum);
  pFVar1 = (this->ActorGuidStrings_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->ActorGuidIndexCurve_DEPRECATED)._padding_ = (longlong)&___7FIntegralCurve__6B_;
  pFVar1 = (this->ActorGuidIndexCurve_DEPRECATED).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->ActorGuidIndexCurve_DEPRECATED)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->ActorGuidIndexCurve_DEPRECATED)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->ActorGuidIndexCurve_DEPRECATED)._padding_ = 0;
  pvVar2 = (void *)(this->ActorGuidIndexCurve_DEPRECATED)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ActorGuidIndexCurve_DEPRECATED)._padding_);
  FMovieSceneActorReferenceData::~FMovieSceneActorReferenceData(&this->ActorReferenceData);
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 146696270

UClass * __cdecl UMovieSceneActorReferenceSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneActorReferenceSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneActorReferenceSection",
               &Z_Registration_Info_UClass_UMovieSceneActorReferenceSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneActorReferenceSection,0x2d8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneActorReferenceSection>,
               InternalVTableHelperCtorCaller<UMovieSceneActorReferenceSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneActorReferenceSection.InnerSingleton;
}

// OnBindingIDsUpdated @ 1466a8b80

void __thiscall
UMovieSceneActorReferenceSection::OnBindingIDsUpdated
          (UMovieSceneActorReferenceSection *this,
          TMap<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>_>
          *param_1,FMovieSceneSequenceID param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_3)

{
  FMovieSceneObjectBindingID *pFVar1;
  FName FVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  ulong64 uVar9;
  FMovieSceneSequenceHierarchy *pFVar10;
  FRelativeObjectBindingID *pFVar11;
  FMovieSceneObjectBindingID *this_00;
  longlong lVar12;
  FFixedObjectBindingID local_f8;
  FFixedObjectBindingID local_e0;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_c8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_b8;
  FMovieSceneChannelData local_a8;
  TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  FName FStack_70;
  FRelativeObjectBindingID local_60;
  FRelativeObjectBindingID local_48;
  
  local_c8.Object = param_3->Object;
  local_c8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMovieSceneObjectBindingID::ResolveToFixed
            (&(this->ActorReferenceData).DefaultValue.Object,&local_f8,param_2,&local_c8);
  uVar9 = CityHash64((char *)&local_f8,0x10);
  iVar8 = TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::MovieScene::FFixedObjectBindingID>
                    ((TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
                      *)param_1,(uint)uVar9 ^ local_f8.SequenceID.Value,&local_f8);
  if (iVar8 == -1) goto LAB_1466a8cdf;
  pFVar10 = UE::MovieScene::FSharedPlaybackState::GetHierarchy(param_3->Object);
  local_88._0_4_ = (this->ActorReferenceData).DefaultValue.Object.Guid.A;
  local_88._4_4_ = (this->ActorReferenceData).DefaultValue.Object.Guid.B;
  uStack_80._0_4_ = (this->ActorReferenceData).DefaultValue.Object.Guid.C;
  uStack_80._4_4_ = (this->ActorReferenceData).DefaultValue.Object.Guid.D;
  local_78._0_4_ = (this->ActorReferenceData).DefaultValue.Object.SequenceID;
  local_78._4_4_ = (this->ActorReferenceData).DefaultValue.Object.ResolveParentIndex;
  FStack_70 = (this->ActorReferenceData).DefaultValue.ComponentName;
  FVar2 = (this->ActorReferenceData).DefaultValue.SocketName;
  uVar9 = CityHash64((char *)&local_f8,0x10);
  iVar8 = TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::MovieScene::FFixedObjectBindingID>
                    ((TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
                      *)param_1,(uint)uVar9 ^ local_f8.SequenceID.Value,&local_f8);
  if (iVar8 == -1) {
    lVar12 = 0;
LAB_1466a8c75:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    lVar12 = (longlong)iVar8 * 0x30 + *(longlong *)param_1;
    if (lVar12 == 0) goto LAB_1466a8c75;
  }
  pFVar11 = UE::MovieScene::FFixedObjectBindingID::ConvertToRelative
                      ((FFixedObjectBindingID *)(lVar12 + 0x14),&local_60,param_2,pFVar10);
  uVar4 = (pFVar11->Guid).B;
  uVar5 = (pFVar11->Guid).C;
  uVar6 = (pFVar11->Guid).D;
  local_78._0_4_ = pFVar11->SequenceID;
  local_78._4_4_ = pFVar11->ResolveParentIndex;
  (this->ActorReferenceData).DefaultValue.Object.Guid.A = (pFVar11->Guid).A;
  (this->ActorReferenceData).DefaultValue.Object.Guid.B = uVar4;
  (this->ActorReferenceData).DefaultValue.Object.Guid.C = uVar5;
  (this->ActorReferenceData).DefaultValue.Object.Guid.D = uVar6;
  (this->ActorReferenceData).DefaultValue.Object.SequenceID = (undefined4)local_78;
  (this->ActorReferenceData).DefaultValue.Object.ResolveParentIndex = local_78._4_4_;
  (this->ActorReferenceData).DefaultValue.ComponentName = FStack_70;
  (this->ActorReferenceData).DefaultValue.SocketName = FVar2;
LAB_1466a8cdf:
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_a8,(FMovieSceneChannel *)&this->ActorReferenceData,
             &(this->ActorReferenceData).KeyTimes,
             (FKeyHandleLookupTable *)&(this->ActorReferenceData).KeyHandles);
  local_90 = &(this->ActorReferenceData).KeyValues;
  if (((local_a8.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (local_90 == (TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = local_90->ArrayNum;
  this_00 = (FMovieSceneObjectBindingID *)(local_90->AllocatorInstance).Data;
  if ((iVar8 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (FMovieSceneObjectBindingID *)((longlong)this_00 + (longlong)iVar8 * 0x28);
  do {
    if (this_00 == pFVar1) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_3->SharedReferenceCount).ReferenceController);
      return;
    }
    local_b8.Object = param_3->Object;
    local_b8.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FMovieSceneObjectBindingID::ResolveToFixed(this_00,&local_e0,param_2,&local_b8);
    uVar9 = CityHash64((char *)&local_e0,0x10);
    iVar8 = TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
            ::FindIndexByHash<UE::MovieScene::FFixedObjectBindingID>
                      ((TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
                        *)param_1,(uint)uVar9 ^ local_e0.SequenceID.Value,&local_e0);
    if (iVar8 != -1) {
      pFVar10 = UE::MovieScene::FSharedPlaybackState::GetHierarchy(param_3->Object);
      uVar9 = CityHash64((char *)&local_e0,0x10);
      iVar8 = TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
              ::FindIndexByHash<UE::MovieScene::FFixedObjectBindingID>
                        ((TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
                          *)param_1,(uint)uVar9 ^ local_e0.SequenceID.Value,&local_e0);
      if (iVar8 == -1) {
        lVar12 = 0;
LAB_1466a8e1a:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        lVar12 = (longlong)iVar8 * 0x30 + *(longlong *)param_1;
        if (lVar12 == 0) goto LAB_1466a8e1a;
      }
      pFVar11 = UE::MovieScene::FFixedObjectBindingID::ConvertToRelative
                          ((FFixedObjectBindingID *)(lVar12 + 0x14),&local_48,param_2,pFVar10);
      uVar4 = (pFVar11->Guid).B;
      uVar5 = (pFVar11->Guid).C;
      uVar6 = (pFVar11->Guid).D;
      (this_00->Guid).A = (pFVar11->Guid).A;
      (this_00->Guid).B = uVar4;
      (this_00->Guid).C = uVar5;
      (this_00->Guid).D = uVar6;
      this_00->SequenceID = (pFVar11->SequenceID).Value;
      this_00->ResolveParentIndex = pFVar11->ResolveParentIndex;
    }
    this_00 = (FMovieSceneObjectBindingID *)&this_00[1].SequenceID;
  } while( true );
}

// PostLoad @ 1466ad160

void __thiscall UMovieSceneActorReferenceSection::PostLoad(UMovieSceneActorReferenceSection *this)

{
  int *piVar1;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  TArray<FIntegralKey,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FIntegralKey,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  double in_XMM2_Qa;
  undefined1 local_res8 [16];
  undefined1 local_118 [8];
  ForAnyElementType local_110;
  uint local_108;
  uint local_104;
  TIndexedContainerIterator<TArray<FIntegralKey,TSizedDefaultAllocator<32>_>_const_,FIntegralKey_const_,int>
  local_100 [2];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  
  UMovieSceneSignedObject::PostLoad((UMovieSceneSignedObject *)this);
  iVar12 = (this->ActorGuidStrings_DEPRECATED).ArrayNum;
  if (iVar12 != 0) {
    pFVar16 = (this->ActorGuidStrings_DEPRECATED).AllocatorInstance.Data;
    local_108 = 0;
    pFVar15 = pFVar16 + (longlong)iVar12 * 0x10;
    local_110.Data = (FScriptContainerElement *)0x0;
    local_104 = 0;
    while( true ) {
      if ((this->ActorGuidStrings_DEPRECATED).ArrayNum != iVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar16 == pFVar15) break;
      if (local_108 == local_104) {
        local_108 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x410,&local_110,(int *)&local_104);
      }
      uVar13 = local_108 + 1;
      lVar14 = (longlong)(int)local_108 * 0x10;
      *(undefined8 *)(local_110.Data + lVar14) = 0;
      *(undefined8 *)(local_110.Data + lVar14 + 8) = 0;
      uVar10 = 0;
      if ((int)local_108 < (int)uVar13) {
        uVar10 = ~local_108 >> 0x1f;
      }
      local_108 = uVar13;
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FGuid::Parse((FString *)pFVar16,(FGuid *)(local_110.Data + lVar14));
      pFVar16 = pFVar16 + 0x10;
    }
    uVar10 = (this->ActorGuidIndexCurve_DEPRECATED).DefaultValue;
    uVar13 = 0;
    if ((-1 < (int)uVar10) && ((int)uVar10 < (int)local_108)) {
      uVar11 = uVar13;
      if ((int)uVar10 < (int)local_108) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_e0 = 0;
      local_58 = 0;
      local_78 = *(undefined8 *)(local_110.Data + (longlong)(int)uVar10 * 0x10);
      uStack_70 = *(undefined8 *)(local_110.Data + (longlong)(int)uVar10 * 0x10 + 8);
      (this->ActorReferenceData).DefaultValue.Object.Guid.A = (int)local_78;
      (this->ActorReferenceData).DefaultValue.Object.Guid.B = (int)((ulonglong)local_78 >> 0x20);
      (this->ActorReferenceData).DefaultValue.Object.Guid.C = (int)uStack_70;
      (this->ActorReferenceData).DefaultValue.Object.Guid.D = (int)((ulonglong)uStack_70 >> 0x20);
      (this->ActorReferenceData).DefaultValue.Object.SequenceID = 0;
      (this->ActorReferenceData).DefaultValue.Object.ResolveParentIndex = 0;
      (this->ActorReferenceData).DefaultValue.ComponentName.ComparisonIndex.Value = 0;
      (this->ActorReferenceData).DefaultValue.ComponentName.Number = 0;
      local_68 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      (this->ActorReferenceData).DefaultValue.SocketName.ComparisonIndex = 0;
      (this->ActorReferenceData).DefaultValue.SocketName.Number = 0;
    }
    FIntegralCurve::GetKeyIterator(&this->ActorGuidIndexCurve_DEPRECATED,local_100);
    while ((pTVar7 = local_100[0].Container, lVar14 = (longlong)local_100[0].Index,
           -1 < local_100[0].Index && (local_100[0].Index < (local_100[0].Container)->ArrayNum))) {
      uVar10 = uVar13;
      if (local_100[0].Index < (local_100[0].Container)->ArrayNum) {
        uVar10 = (uint)~local_100[0].Index >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar8 = local_100[0].Container;
      iVar12 = *(int *)((pTVar7->AllocatorInstance).Data + lVar14 * 8 + 4);
      if ((iVar12 < 0) || ((int)local_108 <= iVar12)) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2310876667934932850>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneActorReferenceSection.cpp"
                           ,0x8e,"Guids.IsValidIndex(It->Value)");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_100[0].Index = local_100[0].Index + 1;
      }
      else {
        lVar14 = (longlong)local_100[0].Index;
        uVar10 = uVar13;
        if (local_100[0].Index < (local_100[0].Container)->ArrayNum) {
          uVar10 = (uint)~local_100[0].Index >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar10 = *(uint *)((pTVar8->AllocatorInstance).Data + lVar14 * 8 + 4);
        uVar11 = uVar13;
        if ((int)uVar10 < (int)local_108) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_e0 = 0;
        uVar5 = *(undefined8 *)(local_110.Data + (longlong)(int)uVar10 * 0x10);
        uVar6 = *(undefined8 *)(local_110.Data + (longlong)(int)uVar10 * 0x10 + 8);
        local_c8 = 0;
        uStack_c0 = 0;
        uVar10 = uVar13;
        if (local_100[0].Index < (local_100[0].Container)->ArrayNum) {
          uVar10 = (uint)~local_100[0].Index >> 0x1f;
        }
        local_b8 = 0;
        local_d8 = uVar5;
        uStack_d0 = uVar6;
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_98 = local_c8;
        uStack_90 = uStack_c0;
        local_88 = local_b8;
        local_a8 = uVar5;
        uStack_a0 = uVar6;
        GetLegacyConversionFrameRate();
        UpgradeLegacyMovieSceneTime((UObject *)local_118,(FFrameRate)0x0,in_XMM2_Qa);
        iVar12 = (this->ActorReferenceData).KeyTimes.ArrayNum;
        if (iVar12 != 0) {
          uVar10 = uVar13;
          if ((int)(iVar12 - 1U) < iVar12) {
            uVar10 = ~(iVar12 - 1U) >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (((int)local_118._0_4_ <
               *(int *)((this->ActorReferenceData).KeyTimes.AllocatorInstance.Data +
                       (longlong)(this->ActorReferenceData).KeyTimes.ArrayNum * 4 + -4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("KeyTimes.Num() == 0 || KeyTime >= KeyTimes.Last()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Sections\\MovieSceneActorReferenceSection.h"
                                 ,0x9f,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pTVar2 = &(this->ActorReferenceData).KeyTimes;
        pFVar16 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar16 <= (FScriptContainerElement *)local_118) &&
            ((FScriptContainerElement *)local_118 <
             pFVar16 + (longlong)(this->ActorReferenceData).KeyTimes.ArrayMax * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar12 = (this->ActorReferenceData).KeyTimes.ArrayNum;
        piVar1 = &(this->ActorReferenceData).KeyTimes.ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->ActorReferenceData).KeyTimes.ArrayNum = iVar12 + 1;
        pTVar3 = &(this->ActorReferenceData).KeyValues;
        *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_118._0_4_;
        pFVar16 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar16 <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 <
             pFVar16 + (longlong)(this->ActorReferenceData).KeyValues.ArrayMax * 0x28)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar12 = (this->ActorReferenceData).KeyValues.ArrayNum;
        piVar1 = &(this->ActorReferenceData).KeyValues.ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x428,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->ActorReferenceData).KeyValues.ArrayNum = iVar12 + 1;
        lVar14 = (longlong)iVar12;
        pFVar16 = (pTVar3->AllocatorInstance).Data;
        *(undefined8 *)(pFVar16 + lVar14 * 0x28) = local_a8;
        *(undefined8 *)(pFVar16 + lVar14 * 0x28 + 8) = uStack_a0;
        *(undefined8 *)(pFVar16 + lVar14 * 0x28 + 0x10) = local_98;
        *(undefined8 *)(pFVar16 + lVar14 * 0x28 + 0x10 + 8) = uStack_90;
        *(undefined8 *)(pFVar16 + lVar14 * 0x28 + 0x20) = local_88;
        local_100[0].Index = local_100[0].Index + 1;
      }
    }
    if (local_110.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data);
    }
  }
  return;
}

// StaticRegisterNativesUMovieSceneActorReferenceSection @ 1466fe740

void __cdecl
UMovieSceneActorReferenceSection::StaticRegisterNativesUMovieSceneActorReferenceSection(void)

{
  return;
}

