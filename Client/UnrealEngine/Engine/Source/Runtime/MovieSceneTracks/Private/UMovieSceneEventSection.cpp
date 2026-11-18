// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 7

// StaticClass @ 146722ae0

UClass * __cdecl UMovieSceneEventSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEventSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneEventSection",
               &Z_Registration_Info_UClass_UMovieSceneEventSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneEventSection,0x298,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneEventSection>,
               InternalVTableHelperCtorCaller<UMovieSceneEventSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEventSection.InnerSingleton;
}

// UMovieSceneEventSection @ 146764d60

UMovieSceneEventSection * __thiscall
UMovieSceneEventSection::UMovieSceneEventSection(UMovieSceneEventSection *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FObjectInitializer *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  UMovieSceneEventSection *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint local_res8;
  uint local_res10;
  TReferenceControllerBase<1> *local_48;
  FSharedReferencer<1> local_40;
  TRange<FFrameNumber> local_38;
  
  pFVar6 = FObjectInitializer::Get();
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,pFVar6);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&___7UMovieSceneEventSection__6B_;
  (this->Events_DEPRECATED)._padding_ = 0;
  (this->Events_DEPRECATED)._padding_ = 0;
  (this->Events_DEPRECATED)._padding_ = 0;
  *(undefined4 *)&(this->Events_DEPRECATED)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->Events_DEPRECATED)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->Events_DEPRECATED)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->Events_DEPRECATED)._padding_ + 4) = 0;
  (this->Events_DEPRECATED)._padding_ = 0;
  *(undefined4 *)&(this->Events_DEPRECATED)._padding_ = 0;
  (this->Events_DEPRECATED)._padding_ = 0;
  (this->Events_DEPRECATED)._padding_ = 0;
  (this->Events_DEPRECATED)._padding_ = (longlong)&___7FNameCurve__6B_;
  (this->Events_DEPRECATED).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Events_DEPRECATED).Keys.ArrayNum = 0;
  (this->Events_DEPRECATED).Keys.ArrayMax = 0;
  FMovieSceneEventSectionData::FMovieSceneEventSectionData(&this->EventData);
  local_res8 = CONCAT31(local_res8._1_3_,2);
  local_38.LowerBound.Value.Value = 0;
  local_38.LowerBound._0_4_ = local_res8;
  local_res10 = CONCAT31(local_res10._1_3_,2);
  local_38.UpperBound.Value.Value = 0;
  local_38.UpperBound._0_4_ = local_res10;
  *(undefined1 *)&this->_padding_ = 1;
  UMovieSceneSection::SetRange((UMovieSceneSection *)this,&local_38);
  pTVar7 = ::operator_new(0x68);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneEventSectionData>
              ((FMovieSceneChannelProxy *)(pTVar7 + 1),&this->EventData);
    pTVar10 = pTVar7 + 1;
    pTVar9 = pTVar7;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar8 = (UMovieSceneEventSection *)(*pcVar4)();
        return pUVar8;
      }
      goto LAB_146764f31;
    }
  }
  if (((pTVar10->_padding_ == 0) || (*(longlong *)&pTVar10->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar10->SharedReferenceCount + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar10->_padding_ = (longlong)pTVar10;
    if (pTVar9 != *(TReferenceControllerBase<1> **)&pTVar10->SharedReferenceCount) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar10->SharedReferenceCount;
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
      *(TReferenceControllerBase<1> **)&pTVar10->SharedReferenceCount = pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_146764f31:
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = pTVar10;
  local_40.ReferenceController = pTVar9;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_48) {
    this->_padding_ = (longlong)pTVar10;
    local_48 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return this;
}

// UMovieSceneEventSection @ 146764fb0

UMovieSceneEventSection * __thiscall
UMovieSceneEventSection::UMovieSceneEventSection
          (UMovieSceneEventSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneEventSection__6B_;
  (this->Events_DEPRECATED)._padding_ = 0;
  (this->Events_DEPRECATED)._padding_ = 0;
  (this->Events_DEPRECATED)._padding_ = 0;
  *(undefined4 *)&(this->Events_DEPRECATED)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->Events_DEPRECATED)._padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&(this->Events_DEPRECATED)._padding_ + 4) = 0;
  *(undefined4 *)&(this->Events_DEPRECATED)._padding_ = 0xffffffff;
  (this->Events_DEPRECATED)._padding_ = 0;
  *(undefined4 *)&(this->Events_DEPRECATED)._padding_ = 0;
  (this->Events_DEPRECATED)._padding_ = 0;
  (this->Events_DEPRECATED)._padding_ = 0;
  (this->Events_DEPRECATED)._padding_ = (longlong)&___7FNameCurve__6B_;
  (this->Events_DEPRECATED).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Events_DEPRECATED).Keys.ArrayNum = 0;
  (this->Events_DEPRECATED).Keys.ArrayMax = 0;
  FMovieSceneEventSectionData::FMovieSceneEventSectionData(&this->EventData);
  return this;
}

// ~UMovieSceneEventSection @ 14676a6e0

void __thiscall UMovieSceneEventSection::~UMovieSceneEventSection(UMovieSceneEventSection *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMovieSceneEventSection__6B_;
  FMovieSceneEventSectionData::~FMovieSceneEventSectionData(&this->EventData);
  (this->Events_DEPRECATED)._padding_ = (longlong)&___7FNameCurve__6B_;
  pFVar1 = (this->Events_DEPRECATED).Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Events_DEPRECATED)._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->Events_DEPRECATED)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->Events_DEPRECATED)._padding_ = 0;
  pvVar2 = (void *)(this->Events_DEPRECATED)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Events_DEPRECATED)._padding_);
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 146798b60

UClass * __cdecl UMovieSceneEventSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEventSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneEventSection",
               &Z_Registration_Info_UClass_UMovieSceneEventSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneEventSection,0x298,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneEventSection>,
               InternalVTableHelperCtorCaller<UMovieSceneEventSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEventSection.InnerSingleton;
}

// PostLoad @ 1467b21c0

void __thiscall UMovieSceneEventSection::PostLoad(UMovieSceneEventSection *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  FFrameNumber FVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  double in_XMM2_Qa;
  undefined1 local_res8 [8];
  FFrameNumber local_res10;
  int local_res18;
  int iStackX_1c;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_d8;
  undefined4 local_c8;
  FNameEntryId FStack_c4;
  uint local_c0;
  FEventPayload local_b8;
  FMovieSceneChannelData local_70;
  TArray<FEventPayload,TSizedDefaultAllocator<32>_> *local_58;
  
  if ((this->Events_DEPRECATED).Keys.ArrayNum != 0) {
    FMovieSceneChannelData::FMovieSceneChannelData
              (&local_70,(FMovieSceneChannel *)&this->EventData,&(this->EventData).Times,
               (FKeyHandleLookupTable *)&(this->EventData).KeyHandles);
    local_58 = &(this->EventData).KeyValues;
    if ((local_70.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
       (local_58 == (TArray<FEventPayload,TSizedDefaultAllocator<32>_> *)0x0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    GetLegacyConversionFrameRate();
    iVar2 = (this->Events_DEPRECATED).Keys.ArrayNum;
    pFVar7 = (this->Events_DEPRECATED).Keys.AllocatorInstance.Data;
    pFVar1 = pFVar7 + (longlong)iVar2 * 0xc;
    while( true ) {
      if ((this->Events_DEPRECATED).Keys.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FNameCurveKey_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar7 == pFVar1) break;
      local_c0 = *(uint *)(pFVar7 + 8);
      local_c8 = (undefined4)*(undefined8 *)pFVar7;
      FStack_c4.Value = (uint)((ulonglong)*(undefined8 *)pFVar7 >> 0x20);
      UpgradeLegacyMovieSceneTime((UObject *)&local_res10,(FFrameRate)this,in_XMM2_Qa);
      FVar4.Value = local_res10.Value;
      local_b8.EventName.Number = local_c0;
      local_b8.EventName.ComparisonIndex.Value = FStack_c4.Value;
      local_b8.Parameters.PackageFileVersion = GPackageFileUEVersion;
      local_b8.Parameters.LicenseePackageFileVersion = GPackageFileLicenseeUEVersion;
      local_b8.Parameters.StructType.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_b8.Parameters.StructType.AssetPath.PackageName.Number = 0;
      local_b8.Parameters.StructType.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_b8.Parameters.StructType.AssetPath.AssetName.Number = 0;
      local_b8.Parameters.StructType.SubPathString.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_b8.Parameters.StructType.SubPathString.Data.ArrayNum = 0;
      local_b8.Parameters.StructType.SubPathString.Data.ArrayMax = 0;
      local_b8.Parameters.StructBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Parameters.StructBytes.ArrayNum = 0;
      local_b8.Parameters.StructBytes.ArrayMax = 0;
      iVar6 = FMovieSceneChannelData::AddKeyInternal(&local_70,local_res10);
      TArray<FEventPayload,TSizedDefaultAllocator<32>_>::Insert(local_58,&local_b8,iVar6);
      if (local_70.OwningChannel != (FMovieSceneChannel *)0x0) {
        bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &(local_70.OwningChannel)->KeyAddedEvent);
        if (bVar5) {
          local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d8.ArrayNum = 0;
          local_d8.ArrayMax = 0;
          iStackX_1c = FVar4.Value;
          local_res18 = iVar6;
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
          local_d8.ArrayNum = iVar6 + 1;
          *(ulonglong *)(local_d8.AllocatorInstance.Data + (longlong)iVar6 * 8) =
               CONCAT44(iStackX_1c,local_res18);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&(local_70.OwningChannel)->KeyAddedEvent,local_70.OwningChannel,&local_d8);
          if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.AllocatorInstance.Data);
          }
        }
      }
      if (local_b8.Parameters.StructBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_b8.Parameters.StructBytes.AllocatorInstance.Data);
      }
      if (local_b8.Parameters.StructType.SubPathString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Parameters.StructType.SubPathString.Data.AllocatorInstance.Data);
      }
      pFVar7 = pFVar7 + 0xc;
    }
    UMovieSceneSignedObject::MarkAsChanged((UMovieSceneSignedObject *)this);
  }
  UMovieSceneSignedObject::PostLoad((UMovieSceneSignedObject *)this);
  return;
}

// StaticRegisterNativesUMovieSceneEventSection @ 1467c2910

void __cdecl UMovieSceneEventSection::StaticRegisterNativesUMovieSceneEventSection(void)

{
  return;
}

