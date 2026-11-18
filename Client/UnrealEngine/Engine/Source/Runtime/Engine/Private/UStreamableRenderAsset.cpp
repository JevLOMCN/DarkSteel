// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// UStreamableRenderAsset @ 14877d460

UStreamableRenderAsset * __thiscall
UStreamableRenderAsset::UStreamableRenderAsset(UStreamableRenderAsset *this,FVTableHelper *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  UStreamableRenderAsset *pUVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  UObject::UObject((UObject *)this,param_1);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&___7UStreamableRenderAsset__6B_;
  (this->MipChangeCallbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MipChangeCallbacks).ArrayNum = 0;
  (this->MipChangeCallbacks).ArrayMax = 0;
  (this->PendingUpdate).Reference = (FRenderAssetUpdate *)0x0;
  (this->NoRefStreamingLODBias)._padding_ = 0;
  (this->NoRefStreamingLODBias)._padding_ = 0;
  *(undefined8 *)&(this->NoRefStreamingLODBias).PerQuality = 0;
  *(undefined8 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x8 = 0;
  *(undefined8 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x20 = 0;
  *(undefined4 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x34 = 0;
  *(undefined8 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x48 = 0;
  (this->NoRefStreamingLODBias).Default = 0;
  this->StreamingIndex = -1;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->SimpleStreamableAssetManagerIndex).Object = (int *)0x10;
    (this->SimpleStreamableAssetManagerIndex).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_H_00_SharedPointerInternals__6B_;
    *(undefined4 *)&pTVar3[1]._padding_ = 0xffffffff;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UStreamableRenderAsset *)(*pcVar1)();
        return pUVar4;
      }
    }
    (this->SimpleStreamableAssetManagerIndex).Object = (int *)(pTVar3 + 1);
    (this->SimpleStreamableAssetManagerIndex).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  (this->CachedSRRState).field0_0x0.Data = 0;
  return this;
}

// UStreamableRenderAsset @ 14877d5b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UStreamableRenderAsset * __thiscall
UStreamableRenderAsset::UStreamableRenderAsset
          (UStreamableRenderAsset *this,FObjectInitializer *param_1)

{
  FPerQualityLevelInt *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  UStreamableRenderAsset *pUVar5;
  FString *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FString local_98;
  FPerQualityLevelInt local_88;
  
  UObject::UObject((UObject *)this,param_1);
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pFVar1 = &this->NoRefStreamingLODBias;
  this->_padding_ = (longlong)&___7UStreamableRenderAsset__6B_;
  (this->MipChangeCallbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MipChangeCallbacks).ArrayNum = 0;
  (this->MipChangeCallbacks).ArrayMax = 0;
  (this->PendingUpdate).Reference = (FRenderAssetUpdate *)0x0;
  pFVar1->_padding_ = 0;
  (this->NoRefStreamingLODBias)._padding_ = 0;
  *(undefined8 *)&(this->NoRefStreamingLODBias).PerQuality = 0;
  *(undefined8 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x8 = 0;
  *(undefined8 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x20 = 0;
  *(undefined4 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x34 = 0;
  *(undefined8 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x48 = 0;
  (this->NoRefStreamingLODBias).Default = 0;
  this->StreamingIndex = -1;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    (this->SimpleStreamableAssetManagerIndex).Object = (int *)0x10;
    (this->SimpleStreamableAssetManagerIndex).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_H_00_SharedPointerInternals__6B_;
    *(undefined4 *)&pTVar4[1]._padding_ = 0xffffffff;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UStreamableRenderAsset *)(*pcVar2)();
        return pUVar5;
      }
    }
    (this->SimpleStreamableAssetManagerIndex).Object = (int *)(pTVar4 + 1);
    (this->SimpleStreamableAssetManagerIndex).SharedReferenceCount.ReferenceController = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    pTVar7 = pTVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  local_88.PerQuality._48_8_ = _UNK_150631d98;
  local_88.PerQuality._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  (this->CachedSRRState).field0_0x0.Data = 0;
  local_88._padding_ = 0;
  local_88._padding_ = 0;
  local_88.PerQuality._0_8_ = 0;
  local_88.PerQuality._8_8_ = 0;
  local_88.PerQuality._32_8_ = 0;
  local_88.PerQuality._64_8_ = 0;
  local_88.PerQuality._72_4_ = 0;
  local_88.Default = -1;
  SetNoRefStreamingLODBias(this,&local_88);
  pFVar6 = ::FString::FString(&local_98,GNoRefBiasQualityLevelCVarName);
  if (pFVar1 != (FPerQualityLevelInt *)pFVar6) {
    if ((void *)pFVar1->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar1->_padding_);
    }
    pFVar1->_padding_ = (longlong)(pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&(this->NoRefStreamingLODBias)._padding_ = (pFVar6->Data).ArrayNum;
    *(int *)((longlong)&(this->NoRefStreamingLODBias)._padding_ + 4) = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UStreamableRenderAsset @ 148780780

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UStreamableRenderAsset::~UStreamableRenderAsset(UStreamableRenderAsset *this)

{
  void *pvVar1;
  FRenderAssetUpdate *this_00;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UStreamableRenderAsset__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SimpleStreamableAssetManagerIndex).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x48 = 0;
  pvVar1 = *(void **)&(this->NoRefStreamingLODBias).PerQuality.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->NoRefStreamingLODBias).PerQuality);
  pvVar1 = (void *)(this->NoRefStreamingLODBias)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this_00 = (this->PendingUpdate).Reference;
  if (this_00 != (FRenderAssetUpdate *)0x0) {
    FRenderAssetUpdate::Release(this_00);
  }
  DestructItems<UStreamableRenderAsset::FLODStreamingCallbackPayload,int>
            ((FLODStreamingCallbackPayload *)(this->MipChangeCallbacks).AllocatorInstance.Data,
             (this->MipChangeCallbacks).ArrayNum);
  pFVar2 = (this->MipChangeCallbacks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 1487898d0

void __thiscall UStreamableRenderAsset::BeginDestroy(UStreamableRenderAsset *this)

{
  FRenderAssetUpdate *pFVar1;
  
  UObject::BeginDestroy((UObject *)this);
  pFVar1 = (this->PendingUpdate).Reference;
  if ((pFVar1 != (FRenderAssetUpdate *)0x0) && (pFVar1->bIsCancelled == false)) {
    (**(code **)(pFVar1->_padding_ + 0x20))();
  }
  UnlinkStreaming(this);
  TrackRenderAssetEvent((FStreamingRenderAsset *)0x0,this,false,(FRenderAssetStreamingManager *)0x0)
  ;
  return;
}

// CancelPendingStreamingRequest @ 14878c200

void __thiscall UStreamableRenderAsset::CancelPendingStreamingRequest(UStreamableRenderAsset *this)

{
  FRenderAssetUpdate *pFVar1;
  
  pFVar1 = (this->PendingUpdate).Reference;
  if ((pFVar1 != (FRenderAssetUpdate *)0x0) && (pFVar1->bIsCancelled == false)) {
                    /* WARNING: Could not recover jumptable at 0x00014878c212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x20))();
    return;
  }
  return;
}

// GetCurrentNoRefStreamingLODBias @ 14879d5d0

int __thiscall UStreamableRenderAsset::GetCurrentNoRefStreamingLODBias(UStreamableRenderAsset *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if ((*(int *)&(this->NoRefStreamingLODBias).PerQuality.field_0x8 ==
       *(int *)&(this->NoRefStreamingLODBias).PerQuality.field_0x34) || (GNoRefBiasQualityLevel < 0)
     ) {
    return (this->NoRefStreamingLODBias).Default;
  }
  puVar4 = *(undefined1 **)&(this->NoRefStreamingLODBias).PerQuality.field_0x40;
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &(this->NoRefStreamingLODBias).PerQuality.field_0x38;
  }
  iVar1 = *(int *)(puVar4 + (ulonglong)
                            (*(int *)&(this->NoRefStreamingLODBias).PerQuality.field_0x48 - 1U &
                            GNoRefBiasQualityLevel) * 4);
  if (iVar1 != -1) {
    do {
      piVar3 = (int *)((longlong)iVar1 * 0x10 +
                      *(longlong *)&(this->NoRefStreamingLODBias).PerQuality);
      if (*piVar3 == GNoRefBiasQualityLevel) {
        piVar2 = piVar3 + 1;
        if (piVar3 == (int *)0x0) {
          piVar2 = (int *)0x0;
        }
        if (piVar2 != (int *)0x0) {
          return *piVar2;
        }
        break;
      }
      iVar1 = piVar3[2];
    } while (iVar1 != -1);
  }
  return (this->NoRefStreamingLODBias).Default;
}

// GetPrivateStaticClass @ 1487a2be0

UClass * __cdecl UStreamableRenderAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamableRenderAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StreamableRenderAsset",
               &Z_Registration_Info_UClass_UStreamableRenderAsset.InnerSingleton,
               StaticRegisterNativesUStreamableRenderAsset,0xe0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UStreamableRenderAsset>,
               InternalVTableHelperCtorCaller<UStreamableRenderAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamableRenderAsset.InnerSingleton;
}

// HasPendingInitOrStreaming @ 1487ab360

bool __thiscall
UStreamableRenderAsset::HasPendingInitOrStreaming(UStreamableRenderAsset *this,bool param_1)

{
  ulonglong uVar1;
  char cVar2;
  bool bVar3;
  
  if ((this->PendingUpdate).Reference != (FRenderAssetUpdate *)0x0) {
    return true;
  }
  uVar1 = (this->CachedSRRState).field0_0x0.Data;
  if (uVar1 == 0) {
    cVar2 = (**(code **)(this->_padding_ + 0x308))();
    if (cVar2 != '\0') {
      return true;
    }
    if ((param_1) && (cVar2 = (**(code **)(this->_padding_ + 0x310))(this), cVar2 != '\0')) {
      return true;
    }
  }
  else {
    if ((uVar1 & 4) != 0) {
      cVar2 = (**(code **)(this->_padding_ + 0x308))();
      if (cVar2 != '\0') {
        return true;
      }
      bVar3 = IsInGameThread();
      if (bVar3) {
        *(byte *)&(this->CachedSRRState).field0_0x0 =
             *(byte *)&(this->CachedSRRState).field0_0x0 & 0xfb;
      }
    }
    if ((param_1) && ((*(byte *)&(this->CachedSRRState).field0_0x0 & 8) != 0)) {
      cVar2 = (**(code **)(this->_padding_ + 0x310))(this);
      if (cVar2 != '\0') {
        return true;
      }
      bVar3 = IsInGameThread();
      if (bVar3) {
        *(byte *)&(this->CachedSRRState).field0_0x0 =
             *(byte *)&(this->CachedSRRState).field0_0x0 & 0xf7;
      }
    }
  }
  return false;
}

// IsFullyStreamedIn @ 1487aeef0

bool __thiscall UStreamableRenderAsset::IsFullyStreamedIn(UStreamableRenderAsset *this)

{
  ulonglong uVar1;
  UStreamableRenderAsset *local_res8 [4];
  
  uVar1 = (this->CachedSRRState).field0_0x0.Data;
  if (((uVar1 != 0) && ((uVar1 & 1) != 0)) &&
     ((int)((uint)(uVar1 >> 0x28) & 0xff) <
      (int)(((uint)(uVar1 >> 0x18) & 0xff) - this->NumCinematicMipLevels))) {
    if ((char)(uVar1 >> 0x28) == (char)(uVar1 >> 0x10)) {
      local_res8[0] = this;
      `UStreamableRenderAsset::IsFullyStreamedIn'::__l2::<lambda_1>::operator()(local_res8);
    }
    return false;
  }
  return true;
}

// IsPendingStreamingRequestLocked @ 1487af150

bool __thiscall
UStreamableRenderAsset::IsPendingStreamingRequestLocked(UStreamableRenderAsset *this)

{
  FRenderAssetUpdate *pFVar1;
  
  pFVar1 = (this->PendingUpdate).Reference;
  if ((pFVar1 != (FRenderAssetUpdate *)0x0) && (pFVar1->TaskState == TS_Locked)) {
    return true;
  }
  return false;
}

// IsReadyForFinishDestroy @ 1487af1c0

bool __thiscall UStreamableRenderAsset::IsReadyForFinishDestroy(UStreamableRenderAsset *this)

{
  TRefCountPtr<FRenderAssetUpdate> *pTVar1;
  ETaskState EVar2;
  FRenderAssetUpdate *pFVar3;
  char cVar4;
  int iVar5;
  FStreamingManagerCollection *this_00;
  IRenderAssetStreamingManager *pIVar6;
  EThreadType EVar7;
  
  pTVar1 = &this->PendingUpdate;
  if (pTVar1->Reference != (FRenderAssetUpdate *)0x0) {
    if ((GEnableAssetUpdateAbandons) &&
       (cVar4 = (**(code **)(pTVar1->Reference->_padding_ + 0x28))(), cVar4 != '\0')) {
      this_00 = IStreamingManager::Get();
      pIVar6 = FStreamingManagerCollection::GetRenderAssetStreamingManager(this_00);
      (**(code **)(*(longlong *)pIVar6 + 0x128))(pIVar6,this,pTVar1);
    }
    else {
      pFVar3 = pTVar1->Reference;
      if (pFVar3 != (FRenderAssetUpdate *)0x0) {
        LOCK();
        (pFVar3->NumRefs).Counter = (pFVar3->NumRefs).Counter + 1;
        UNLOCK();
      }
      iVar5 = (**(code **)(pFVar3->_padding_ + 0x38))(pFVar3);
      if (iVar5 == 2) {
        EVar7 = TT_GameRunningAsync;
      }
      else {
        EVar7 = (EThreadType)(GIsThreadedRendering == false);
      }
      FRenderAssetUpdate::Tick(pFVar3,EVar7);
      EVar2 = pFVar3->TaskState;
      FRenderAssetUpdate::Release(pFVar3);
      if (EVar2 != TS_Done) goto LAB_1487af283;
    }
    pFVar3 = (this->PendingUpdate).Reference;
    if (pFVar3 != (FRenderAssetUpdate *)0x0) {
      (this->PendingUpdate).Reference = (FRenderAssetUpdate *)0x0;
      FRenderAssetUpdate::Release(pFVar3);
    }
  }
LAB_1487af283:
  return (this->PendingUpdate).Reference == (FRenderAssetUpdate *)0x0;
}

// LinkStreaming @ 1487afa90

void __thiscall UStreamableRenderAsset::LinkStreaming(UStreamableRenderAsset *this)

{
  EStreamableRenderAssetType EVar1;
  bool bVar2;
  FStreamingManagerCollection *pFVar3;
  FCoarseMeshStreamingManager *this_00;
  IRenderAssetStreamingManager *pIVar4;
  
  EVar1 = (**(code **)(this->_padding_ + 0x300))();
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (((!bVar2) && ((*(byte *)&(this->CachedSRRState).field0_0x0 & 1) != 0)) &&
     ((this->CachedSRRState).field0_0x0._s_0.NumNonStreamingLODs <
      (this->CachedSRRState).field0_0x0._s_0.MaxNumLODs)) {
    pFVar3 = IStreamingManager::Get();
    bVar2 = FStreamingManagerCollection::IsRenderAssetStreamingEnabled(pFVar3,EVar1);
    if (bVar2) {
      if (this->StreamingIndex != -1) {
        return;
      }
      pFVar3 = IStreamingManager::Get();
      if (EVar1 != NaniteCoarseMesh) {
        pIVar4 = FStreamingManagerCollection::GetRenderAssetStreamingManager(pFVar3);
                    /* WARNING: Could not recover jumptable at 0x0001487afb3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)pIVar4 + 0xb8))
                  (pIVar4,this,*(code **)(*(longlong *)pIVar4 + 0xb8));
        return;
      }
      this_00 = FStreamingManagerCollection::GetNaniteCoarseMeshStreamingManager(pFVar3);
      Nanite::FCoarseMeshStreamingManager::RegisterRenderAsset(this_00,this);
      return;
    }
  }
  UnlinkStreaming(this);
  return;
}

// RegisterMipLevelChangeCallback @ 1487b4d90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UStreamableRenderAsset::RegisterMipLevelChangeCallback
          (UStreamableRenderAsset *this,UPrimitiveComponent *param_1,int param_2,float param_3,
          bool param_4,
          TFunction<void___cdecl(UPrimitiveComponent_*,UStreamableRenderAsset_*,ELODStreamingCallbackResult)>
          *param_5)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  double dVar3;
  atomic<double> aVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  undefined4 local_res8 [2];
  undefined4 local_58 [2];
  UStreamableRenderAsset *local_50;
  UPrimitiveComponent *local_48;
  UStreamableRenderAsset *local_40;
  UPrimitiveComponent *local_38 [4];
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableRenderAsset.cpp"
                         ,0x2d,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this->StreamingIndex == -1) {
    local_58[0] = 4;
    local_40 = this;
    local_38[0] = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)param_5);
    pcVar1 = *(code **)param_5;
    plVar8 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_5->field_0x28;
    }
    uVar6 = (**(code **)(*plVar8 + 8))();
    (*pcVar1)(uVar6,local_38,&local_40,local_58);
  }
  else {
    iVar9 = ((uint)(this->CachedSRRState).field0_0x0._s_0.AssetLODBias +
            (uint)(this->CachedSRRState).field0_0x0._s_0.MaxNumLODs) - param_2;
    if (param_4 == iVar9 <= (int)(uint)(this->CachedSRRState).field0_0x0._s_0.NumResidentLODs) {
      local_res8[0] = 0;
      local_50 = this;
      local_48 = param_1;
      UE::Core::Private::Function::CheckCallable(*(void **)param_5);
      pcVar1 = *(code **)param_5;
      plVar8 = (longlong *)&param_5->field_0x10;
      if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
        plVar8 = *(longlong **)&param_5->field_0x28;
      }
      uVar6 = (**(code **)(*plVar8 + 8))();
      (*pcVar1)(uVar6,&local_48,&local_50,local_res8);
    }
    else {
      puVar7 = operator_new<UStreamableRenderAsset::FLODStreamingCallbackPayload,TSizedDefaultAllocator<32>_>
                         (0x80,&this->MipChangeCallbacks);
      aVar4 = FApp::CurrentTime;
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = param_1;
        *(int *)(puVar7 + 3) = iVar9;
        *(bool *)((longlong)puVar7 + 0x1c) = param_4;
        *(undefined1 *)((longlong)puVar7 + 0x1d) = 1;
        puVar7[4] = 0;
        puVar7[9] = 0;
        dVar3 = (double)param_3 + (double)aVar4;
        auVar2._8_4_ = SUB84(dVar3,0);
        auVar2._0_8_ = dVar3;
        auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        *(undefined1 (*) [16])(puVar7 + 1) = auVar2;
        puVar7[10] = *(undefined8 *)param_5;
        puVar7[0xf] = *(undefined8 *)&param_5->field_0x28;
        *(undefined8 *)&param_5->field_0x28 = 0;
        uVar6 = *(undefined8 *)&param_5->field_0x18;
        puVar7[0xc] = *(undefined8 *)&param_5->field_0x10;
        puVar7[0xd] = uVar6;
        puVar7[0xe] = *(undefined8 *)&param_5->field_0x20;
        if (puVar7[10] != 0) {
          *(undefined8 *)param_5 = 0;
        }
      }
    }
  }
  return;
}

// RegisterMipLevelChangeCallback @ 1487b4f80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UStreamableRenderAsset::RegisterMipLevelChangeCallback
          (UStreamableRenderAsset *this,UPrimitiveComponent *param_1,float param_2,
          TFunction<void___cdecl(UPrimitiveComponent_*,UStreamableRenderAsset_*,ELODStreamingCallbackResult)>
          *param_3,float param_4,
          TFunction<void___cdecl(UPrimitiveComponent_*,UStreamableRenderAsset_*,ELODStreamingCallbackResult)>
          *param_5)

{
  byte bVar1;
  code *pcVar2;
  atomic<double> aVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 local_res8 [2];
  UStreamableRenderAsset *local_28;
  UPrimitiveComponent *local_20 [3];
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableRenderAsset.cpp"
                       ,0x42,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->StreamingIndex == -1) {
    local_res8[0] = 4;
    local_28 = this;
    local_20[0] = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)param_5);
    pcVar2 = *(code **)param_5;
    plVar7 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_5->field_0x28;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    (*pcVar2)(uVar6,local_20,&local_28,local_res8);
  }
  else {
    bVar1 = (this->CachedSRRState).field0_0x0._s_0.NumRequestedLODs;
    if (((this->CachedSRRState).field0_0x0._s_0.NumNonStreamingLODs < bVar1) &&
       (bVar1 <= (this->CachedSRRState).field0_0x0._s_0.NumResidentLODs)) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UPrimitiveComponent_*,UStreamableRenderAsset_*,enum_ELODStreamingCallbackResult)>
      ::operator()(param_5,param_1,this,Success);
    }
    else {
      puVar5 = operator_new<UStreamableRenderAsset::FLODStreamingCallbackPayload,TSizedDefaultAllocator<32>_>
                         (0x80,&this->MipChangeCallbacks);
      aVar3 = FApp::CurrentTime;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = param_1;
        *(undefined4 *)(puVar5 + 3) = 0;
        *(undefined2 *)((longlong)puVar5 + 0x1c) = 0;
        puVar5[1] = (double)param_2 + (double)aVar3;
        puVar5[2] = (double)param_4 + (double)aVar3;
        puVar5[4] = *(undefined8 *)param_3;
        puVar5[9] = *(undefined8 *)&param_3->field_0x28;
        *(undefined8 *)&param_3->field_0x28 = 0;
        uVar6 = *(undefined8 *)&param_3->field_0x18;
        puVar5[6] = *(undefined8 *)&param_3->field_0x10;
        puVar5[7] = uVar6;
        puVar5[8] = *(undefined8 *)&param_3->field_0x20;
        if (puVar5[4] != 0) {
          *(undefined8 *)param_3 = 0;
        }
        puVar5[10] = *(undefined8 *)param_5;
        puVar5[0xf] = *(undefined8 *)&param_5->field_0x28;
        *(undefined8 *)&param_5->field_0x28 = 0;
        uVar6 = *(undefined8 *)&param_5->field_0x18;
        puVar5[0xc] = *(undefined8 *)&param_5->field_0x10;
        puVar5[0xd] = uVar6;
        puVar5[0xe] = *(undefined8 *)&param_5->field_0x20;
        if (puVar5[10] != 0) {
          *(undefined8 *)param_5 = 0;
        }
      }
    }
  }
  return;
}

// RemoveAllMipLevelChangeCallbacks @ 1487b84f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UStreamableRenderAsset::RemoveAllMipLevelChangeCallbacks(UStreamableRenderAsset *this)

{
  TArray<UStreamableRenderAsset::FLODStreamingCallbackPayload,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  undefined4 local_res8 [2];
  UStreamableRenderAsset *local_res10;
  undefined8 local_res18;
  
  pTVar1 = &this->MipChangeCallbacks;
  uVar7 = 0;
  if (0 < (this->MipChangeCallbacks).ArrayNum) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->MipChangeCallbacks).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (pTVar1->AllocatorInstance).Data + lVar9;
      local_res8[0] = 2;
      local_res18 = *(undefined8 *)pFVar8;
      local_res10 = this;
      UE::Core::Private::Function::CheckCallable(*(void **)(pFVar8 + 0x50));
      pcVar2 = *(code **)(pFVar8 + 0x50);
      pFVar6 = pFVar8 + 0x60;
      if (*(FScriptContainerElement **)(pFVar8 + 0x78) != (FScriptContainerElement *)0x0) {
        pFVar6 = *(FScriptContainerElement **)(pFVar8 + 0x78);
      }
      uVar5 = (**(code **)(*(longlong *)pFVar6 + 8))();
      (*pcVar2)(uVar5,&local_res18,&local_res10,local_res8);
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x80;
    } while ((int)uVar7 < (this->MipChangeCallbacks).ArrayNum);
  }
  DestructItems<UStreamableRenderAsset::FLODStreamingCallbackPayload,int>
            ((FLODStreamingCallbackPayload *)(pTVar1->AllocatorInstance).Data,
             (this->MipChangeCallbacks).ArrayNum);
  (this->MipChangeCallbacks).ArrayNum = 0;
  if ((this->MipChangeCallbacks).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,0,&pTVar1->AllocatorInstance,0,&(this->MipChangeCallbacks).ArrayMax);
  }
  return;
}

// RemoveMipLevelChangeCallback @ 1487b9340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UStreamableRenderAsset::RemoveMipLevelChangeCallback
          (UStreamableRenderAsset *this,UPrimitiveComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 local_res8 [2];
  UPrimitiveComponent *local_res10;
  UStreamableRenderAsset *local_res18;
  UPrimitiveComponent *local_res20;
  
  local_res10 = param_1;
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableRenderAsset.cpp"
                         ,0x56,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar8 = 0;
  if (0 < (this->MipChangeCallbacks).ArrayNum) {
    lVar10 = 0;
    do {
      uVar9 = ~uVar8 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar8 < (this->MipChangeCallbacks).ArrayNum) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = uVar8;
      if (*(UPrimitiveComponent **)((this->MipChangeCallbacks).AllocatorInstance.Data + lVar10) ==
          param_1) {
        uVar7 = 0;
        if ((int)uVar8 < (this->MipChangeCallbacks).ArrayNum) {
          uVar7 = uVar9;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->MipChangeCallbacks).AllocatorInstance.Data;
        local_res8[0] = 3;
        local_res18 = this;
        local_res20 = param_1;
        UE::Core::Private::Function::CheckCallable(*(void **)(pFVar1 + lVar10 + 0x50));
        pcVar2 = *(code **)(pFVar1 + lVar10 + 0x50);
        pFVar6 = pFVar1 + lVar10 + 0x60;
        if (*(FScriptContainerElement **)(pFVar1 + lVar10 + 0x78) != (FScriptContainerElement *)0x0)
        {
          pFVar6 = *(FScriptContainerElement **)(pFVar1 + lVar10 + 0x78);
        }
        uVar5 = (**(code **)(*(longlong *)pFVar6 + 8))();
        (*pcVar2)(uVar5,&local_res20,&local_res18,local_res8);
        lVar10 = lVar10 + -0x80;
        uVar7 = uVar8 - 1;
        uVar4 = 0;
        if ((int)uVar8 < (this->MipChangeCallbacks).ArrayNum) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<UStreamableRenderAsset::FLODStreamingCallbackPayload,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(&this->MipChangeCallbacks,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,0x10,&(this->MipChangeCallbacks).AllocatorInstance,
                   (this->MipChangeCallbacks).ArrayNum,&(this->MipChangeCallbacks).ArrayMax);
        param_1 = local_res10;
      }
      uVar8 = uVar7 + 1;
      lVar10 = lVar10 + 0x80;
    } while ((int)uVar8 < (this->MipChangeCallbacks).ArrayNum);
  }
  return;
}

// SetForceMipLevelsToBeResident @ 1487c1f10

void __thiscall
UStreamableRenderAsset::SetForceMipLevelsToBeResident
          (UStreamableRenderAsset *this,float param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x2b0))();
  if (((param_2 == 0) || ((int)uVar1 < 0)) || (0x1f < uVar1)) {
    this->bUseCinematicMipLevels = '\0';
  }
  else {
    this->bUseCinematicMipLevels = (byte)-((FMath::BitFlag[(int)uVar1] & param_2) != 0) >> 6;
  }
  this->ForceMipLevelsToBeResidentTimestamp = (double)param_1 + (double)FApp::CurrentTime;
  return;
}

// SetNoRefStreamingLODBias @ 1487c3110

void __thiscall
UStreamableRenderAsset::SetNoRefStreamingLODBias
          (UStreamableRenderAsset *this,FPerQualityLevelInt *param_1)

{
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar1;
  undefined1 *puVar2;
  undefined1 *_Dst;
  int iVar3;
  void *pvVar4;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar5;
  
  ::FString::operator=((FString *)&this->NoRefStreamingLODBias,(FString *)param_1);
  pTVar1 = &param_1->PerQuality;
  (this->NoRefStreamingLODBias).Default = param_1->Default;
  pTVar5 = &(this->NoRefStreamingLODBias).PerQuality;
  if (pTVar5 != pTVar1) {
    if (*(void **)pTVar5 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar5);
    }
    puVar2 = &(param_1->PerQuality).field_0x10;
    *(undefined8 *)pTVar5 = *(undefined8 *)pTVar1;
    _Dst = &(this->NoRefStreamingLODBias).PerQuality.field_0x10;
    *(undefined8 *)pTVar1 = 0;
    *(undefined4 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x8 =
         *(undefined4 *)&(param_1->PerQuality).field_0x8;
    *(undefined4 *)&(this->NoRefStreamingLODBias).PerQuality.field_0xc =
         *(undefined4 *)&(param_1->PerQuality).field_0xc;
    *(undefined8 *)&(param_1->PerQuality).field_0x8 = 0;
    if (_Dst != puVar2) {
      if (*(longlong *)&(param_1->PerQuality).field_0x20 == 0) {
        memmove(_Dst,puVar2,0x10);
      }
      pvVar4 = *(void **)&(this->NoRefStreamingLODBias).PerQuality.field_0x20;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      *(undefined8 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x20 =
           *(undefined8 *)&(param_1->PerQuality).field_0x20;
      *(undefined8 *)&(param_1->PerQuality).field_0x20 = 0;
      *(undefined4 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x28 =
           *(undefined4 *)&(param_1->PerQuality).field_0x28;
      *(undefined4 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x2c =
           *(undefined4 *)&(param_1->PerQuality).field_0x2c;
      *(undefined8 *)&(param_1->PerQuality).field_0x28 = 0;
    }
    *(undefined4 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x30 =
         *(undefined4 *)&(param_1->PerQuality).field_0x30;
    *(undefined4 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x34 =
         *(undefined4 *)&(param_1->PerQuality).field_0x34;
    *(undefined4 *)&(param_1->PerQuality).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->PerQuality).field_0x34 = 0;
    if (*(longlong *)&(param_1->PerQuality).field_0x40 == 0) {
      *(undefined4 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x38 =
           *(undefined4 *)&(param_1->PerQuality).field_0x38;
    }
    pvVar4 = *(void **)&(this->NoRefStreamingLODBias).PerQuality.field_0x40;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    *(undefined8 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x40 =
         *(undefined8 *)&(param_1->PerQuality).field_0x40;
    *(undefined8 *)&(param_1->PerQuality).field_0x40 = 0;
    *(undefined4 *)&(this->NoRefStreamingLODBias).PerQuality.field_0x48 =
         *(undefined4 *)&(param_1->PerQuality).field_0x48;
    *(undefined4 *)&(param_1->PerQuality).field_0x48 = 0;
  }
  *(undefined4 *)&(param_1->PerQuality).field_0x48 = 0;
  pvVar4 = *(void **)&(param_1->PerQuality).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  puVar2 = &(param_1->PerQuality).field_0xc;
  *(undefined4 *)&(param_1->PerQuality).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)pTVar1,0,(int *)puVar2);
  }
  *(undefined4 *)&(param_1->PerQuality).field_0x34 = 0;
  *(undefined4 *)&(param_1->PerQuality).field_0x30 = 0xffffffff;
  iVar3 = *(int *)&(param_1->PerQuality).field_0x2c;
  *(undefined4 *)&(param_1->PerQuality).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(param_1->PerQuality).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(param_1->PerQuality).field_0x10,0);
  }
  pvVar4 = *(void **)&(param_1->PerQuality).field_0x20;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  if (*(void **)pTVar1 != (void *)0x0) {
    FMemory::Free(*(void **)pTVar1);
  }
  if ((void *)param_1->_padding_ != (void *)0x0) {
    FMemory::Free((void *)param_1->_padding_);
    return;
  }
  return;
}

// StaticRegisterNativesUStreamableRenderAsset @ 1487c57f0

void __cdecl UStreamableRenderAsset::StaticRegisterNativesUStreamableRenderAsset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UStreamableRenderAsset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickMipLevelChangeCallbacks @ 1487c98c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UStreamableRenderAsset::TickMipLevelChangeCallbacks
          (UStreamableRenderAsset *this,
          TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *param_1)

{
  byte bVar1;
  byte bVar2;
  FScriptContainerElement *pFVar3;
  atomic<double> aVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  UStreamableRenderAsset **ppUVar12;
  undefined4 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  code *pcVar16;
  atomic<double> local_res8;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  UStreamableRenderAsset *local_c8;
  undefined4 local_c0 [2];
  undefined4 local_b8 [2];
  undefined4 local_b0 [2];
  UStreamableRenderAsset *local_a8;
  undefined8 local_a0;
  UStreamableRenderAsset *local_98;
  undefined8 local_90;
  UStreamableRenderAsset *local_88;
  undefined8 local_80;
  UStreamableRenderAsset *local_78;
  undefined8 local_70;
  UStreamableRenderAsset *local_68;
  undefined8 local_60;
  UStreamableRenderAsset *local_58;
  undefined8 local_50 [3];
  
  aVar4 = FApp::CurrentTime;
  if (0 < (this->MipChangeCallbacks).ArrayNum) {
    if (param_1 != (TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar3 = (param_1->AllocatorInstance).Data;
      local_c8 = this;
      if (((pFVar3 <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 < pFVar3 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar6 + 1;
      *(UStreamableRenderAsset **)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           local_c8;
      return;
    }
    bVar1 = (this->CachedSRRState).field0_0x0._s_0.NumResidentLODs;
    uVar11 = 0;
    local_res8 = FApp::CurrentTime;
    uVar15 = uVar11;
    if (0 < (this->MipChangeCallbacks).ArrayNum) {
      do {
        uVar14 = (uint)uVar15;
        uVar7 = 0;
        if ((int)uVar14 < (this->MipChangeCallbacks).ArrayNum) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pFVar3 = (this->MipChangeCallbacks).AllocatorInstance.Data;
        if (((this->PendingUpdate).Reference != (FRenderAssetUpdate *)0x0) &&
           (*(void **)(pFVar3 + uVar11 + 0x20) != (void *)0x0)) {
          local_a0 = *(undefined8 *)(pFVar3 + uVar11);
          local_res8 = (atomic<double>)((ulonglong)local_res8 & 0xffffffff00000000);
          local_a8 = this;
          UE::Core::Private::Function::CheckCallable(*(void **)(pFVar3 + uVar11 + 0x20));
          pFVar9 = *(FScriptContainerElement **)(pFVar3 + uVar11 + 0x48);
          pcVar16 = *(code **)(pFVar3 + uVar11 + 0x20);
          if (pFVar9 == (FScriptContainerElement *)0x0) {
            pFVar9 = pFVar3 + uVar11 + 0x30;
          }
          uVar8 = (**(code **)(*(longlong *)pFVar9 + 8))();
          (*pcVar16)(uVar8,&local_a0,&local_a8,&local_res8);
          if (*(longlong *)(pFVar3 + uVar11 + 0x20) != 0) {
            pFVar9 = *(FScriptContainerElement **)(pFVar3 + uVar11 + 0x48);
            if (pFVar9 == (FScriptContainerElement *)0x0) {
              pFVar9 = pFVar3 + uVar11 + 0x30;
            }
            (**(code **)(*(longlong *)pFVar9 + 0x10))();
            *(undefined8 *)(pFVar3 + uVar11 + 0x20) = 0;
          }
        }
        uVar7 = (uint)bVar1;
        if (pFVar3[uVar11 + 0x1d] == (FScriptContainerElement)0x0) {
          bVar2 = (this->CachedSRRState).field0_0x0._s_0.NumRequestedLODs;
          if ((bVar2 == (this->CachedSRRState).field0_0x0._s_0.NumNonStreamingLODs) ||
             (uVar7 < bVar2)) goto LAB_1487c9bd9;
          if (*(void **)(pFVar3 + uVar11 + 0x20) != (void *)0x0) {
            local_80 = *(undefined8 *)(pFVar3 + uVar11);
            local_res20[0] = 0;
            local_88 = this;
            UE::Core::Private::Function::CheckCallable(*(void **)(pFVar3 + uVar11 + 0x20));
            pFVar9 = *(FScriptContainerElement **)(pFVar3 + uVar11 + 0x48);
            pcVar16 = *(code **)(pFVar3 + uVar11 + 0x20);
            if (pFVar9 == (FScriptContainerElement *)0x0) {
              pFVar9 = pFVar3 + uVar11 + 0x30;
            }
            uVar8 = (**(code **)(*(longlong *)pFVar9 + 8))();
            (*pcVar16)(uVar8,&local_80,&local_88,local_res20);
          }
          local_70 = *(undefined8 *)(pFVar3 + uVar11);
          local_c0[0] = 0;
          local_78 = this;
          UE::Core::Private::Function::CheckCallable(*(void **)(pFVar3 + uVar11 + 0x50));
          pFVar9 = *(FScriptContainerElement **)(pFVar3 + uVar11 + 0x78);
          pcVar16 = *(code **)(pFVar3 + uVar11 + 0x50);
          if (pFVar9 == (FScriptContainerElement *)0x0) {
            pFVar9 = pFVar3 + uVar11 + 0x60;
          }
          uVar8 = (**(code **)(*(longlong *)pFVar9 + 8))();
          puVar13 = local_c0;
          ppUVar12 = &local_78;
          puVar10 = &local_70;
LAB_1487c9c7a:
          (*pcVar16)(uVar8,puVar10,ppUVar12,puVar13);
          uVar11 = uVar11 - 0x80;
          TArray<UStreamableRenderAsset::FLODStreamingCallbackPayload,TSizedDefaultAllocator<32>_>::
          RemoveAt(&this->MipChangeCallbacks,uVar14,Default);
          uVar14 = uVar14 - 1;
        }
        else {
          if (pFVar3[uVar11 + 0x1c] ==
              (FScriptContainerElement)(*(int *)(pFVar3 + uVar11 + 0x18) <= (int)uVar7)) {
            local_90 = *(undefined8 *)(pFVar3 + uVar11);
            local_res18[0] = 0;
            local_98 = this;
            UE::Core::Private::Function::CheckCallable(*(void **)(pFVar3 + uVar11 + 0x50));
            pFVar9 = *(FScriptContainerElement **)(pFVar3 + uVar11 + 0x78);
            pcVar16 = *(code **)(pFVar3 + uVar11 + 0x50);
            if (pFVar9 == (FScriptContainerElement *)0x0) {
              pFVar9 = pFVar3 + uVar11 + 0x60;
            }
            uVar8 = (**(code **)(*(longlong *)pFVar9 + 8))();
            puVar13 = local_res18;
            ppUVar12 = &local_98;
            puVar10 = &local_90;
            goto LAB_1487c9c7a;
          }
LAB_1487c9bd9:
          if ((*(double *)(pFVar3 + uVar11 + 8) <= (double)aVar4 &&
               (double)aVar4 != *(double *)(pFVar3 + uVar11 + 8)) &&
             (*(void **)(pFVar3 + uVar11 + 0x20) != (void *)0x0)) {
            local_60 = *(undefined8 *)(pFVar3 + uVar11);
            local_b8[0] = 1;
            local_68 = this;
            UE::Core::Private::Function::CheckCallable(*(void **)(pFVar3 + uVar11 + 0x20));
            pFVar9 = *(FScriptContainerElement **)(pFVar3 + uVar11 + 0x48);
            pcVar16 = *(code **)(pFVar3 + uVar11 + 0x20);
            if (pFVar9 == (FScriptContainerElement *)0x0) {
              pFVar9 = pFVar3 + uVar11 + 0x30;
            }
            uVar8 = (**(code **)(*(longlong *)pFVar9 + 8))();
            puVar13 = local_b8;
            ppUVar12 = &local_68;
            puVar10 = &local_60;
            goto LAB_1487c9c7a;
          }
          if (*(double *)(pFVar3 + uVar11 + 0x10) <= (double)aVar4 &&
              (double)aVar4 != *(double *)(pFVar3 + uVar11 + 0x10)) {
            local_50[0] = *(undefined8 *)(pFVar3 + uVar11);
            local_b0[0] = 1;
            local_58 = this;
            UE::Core::Private::Function::CheckCallable(*(void **)(pFVar3 + uVar11 + 0x50));
            pFVar9 = *(FScriptContainerElement **)(pFVar3 + uVar11 + 0x78);
            pcVar16 = *(code **)(pFVar3 + uVar11 + 0x50);
            if (pFVar9 == (FScriptContainerElement *)0x0) {
              pFVar9 = pFVar3 + uVar11 + 0x60;
            }
            uVar8 = (**(code **)(*(longlong *)pFVar9 + 8))();
            puVar13 = local_b0;
            ppUVar12 = &local_58;
            puVar10 = local_50;
            goto LAB_1487c9c7a;
          }
        }
        uVar11 = uVar11 + 0x80;
        uVar15 = (ulonglong)(uVar14 + 1);
      } while ((int)(uVar14 + 1) < (this->MipChangeCallbacks).ArrayNum);
    }
  }
  return;
}

// TickStreaming @ 1487c9d60

void __thiscall
UStreamableRenderAsset::TickStreaming
          (UStreamableRenderAsset *this,bool param_1,
          TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FRenderAssetUpdate *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  FName local_res20;
  FString local_38;
  FString local_28;
  
  pFVar1 = (this->PendingUpdate).Reference;
  if ((pFVar1 != (FRenderAssetUpdate *)0x0) &&
     (FRenderAssetUpdate::Tick(pFVar1,(uint)!GIsThreadedRendering),
     ((this->PendingUpdate).Reference)->TaskState == TS_Done)) {
    pFVar1 = (this->PendingUpdate).Reference;
    if (pFVar1->bSuccess == false) {
      if (pFVar1->bIsCancelled == false) {
        local_res8 = *(FName *)(this->_padding_ + 0x18);
        ::FName::ToString(&local_res8,&local_28);
        local_res20 = (FName)this->_padding_;
        ::FName::ToString(&local_res20,&local_38);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingUpdate->IsCancelled()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableRenderAsset.cpp"
                           ,0xf2,L"Invalid completion of streaming request for asset %s of type %s."
                          );
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      (this->CachedSRRState).field0_0x0._s_0.NumRequestedLODs =
           (this->CachedSRRState).field0_0x0._s_0.NumResidentLODs;
    }
    else {
      (this->CachedSRRState).field0_0x0._s_0.NumResidentLODs =
           (this->CachedSRRState).field0_0x0._s_0.NumRequestedLODs;
    }
    pFVar1 = (this->PendingUpdate).Reference;
    if (pFVar1 != (FRenderAssetUpdate *)0x0) {
      (this->PendingUpdate).Reference = (FRenderAssetUpdate *)0x0;
      FRenderAssetUpdate::Release(pFVar1);
    }
  }
  if (param_1) {
    TickMipLevelChangeCallbacks(this,param_2);
  }
  return;
}

// UnlinkStreaming @ 1487cb2d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UStreamableRenderAsset::UnlinkStreaming(UStreamableRenderAsset *this)

{
  TArray<UStreamableRenderAsset::FLODStreamingCallbackPayload,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  FStreamingManagerCollection *pFVar7;
  FCoarseMeshStreamingManager *this_00;
  IRenderAssetStreamingManager *pIVar8;
  undefined8 uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 local_res8 [2];
  UStreamableRenderAsset *local_res10;
  undefined8 local_res18;
  
  if (this->StreamingIndex != -1) {
    cVar4 = (**(code **)(this->_padding_ + 0x300))();
    if (cVar4 == '\x05') {
      pFVar7 = IStreamingManager::Get();
      this_00 = FStreamingManagerCollection::GetNaniteCoarseMeshStreamingManager(pFVar7);
      Nanite::FCoarseMeshStreamingManager::UnregisterRenderAsset(this_00,this);
    }
    else {
      pFVar7 = IStreamingManager::Get();
      pIVar8 = FStreamingManagerCollection::GetRenderAssetStreamingManager(pFVar7);
      (**(code **)(*(longlong *)pIVar8 + 0xc0))(pIVar8,this);
    }
    uVar11 = 0;
    this->ForceMipLevelsToBeResidentTimestamp = 0.0;
    pTVar1 = &this->MipChangeCallbacks;
    if (0 < (this->MipChangeCallbacks).ArrayNum) {
      lVar12 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar11 < (this->MipChangeCallbacks).ArrayNum) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        local_res8[0] = 2;
        local_res18 = *(undefined8 *)(pFVar2 + lVar12);
        local_res10 = this;
        UE::Core::Private::Function::CheckCallable(*(void **)(pFVar2 + lVar12 + 0x50));
        pcVar3 = *(code **)(pFVar2 + lVar12 + 0x50);
        pFVar10 = pFVar2 + lVar12 + 0x60;
        if (*(FScriptContainerElement **)(pFVar2 + lVar12 + 0x78) != (FScriptContainerElement *)0x0)
        {
          pFVar10 = *(FScriptContainerElement **)(pFVar2 + lVar12 + 0x78);
        }
        uVar9 = (**(code **)(*(longlong *)pFVar10 + 8))();
        (*pcVar3)(uVar9,&local_res18,&local_res10,local_res8);
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 0x80;
      } while ((int)uVar11 < (this->MipChangeCallbacks).ArrayNum);
    }
    DestructItems<UStreamableRenderAsset::FLODStreamingCallbackPayload,int>
              ((FLODStreamingCallbackPayload *)(pTVar1->AllocatorInstance).Data,
               (this->MipChangeCallbacks).ArrayNum);
    (this->MipChangeCallbacks).ArrayNum = 0;
    if ((this->MipChangeCallbacks).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,0,&pTVar1->AllocatorInstance,0,&(this->MipChangeCallbacks).ArrayMax);
    }
  }
  return;
}

// WaitForPendingInitOrStreaming @ 1487d2520

void __thiscall
UStreamableRenderAsset::WaitForPendingInitOrStreaming
          (UStreamableRenderAsset *this,bool param_1,bool param_2)

{
  FRenderAssetUpdate *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  FName local_res20;
  FName local_68;
  FString local_60;
  FString local_50 [2];
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId414,"UStreamableRenderAsset::WaitForPendingInitOrStreaming",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableRenderAsset.cpp"
               ,0x19e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId414);
  }
  bVar5 = HasPendingInitOrStreaming(this,param_1);
  fVar4 = __real_3c23d70a;
  if (bVar5) {
    do {
      pFVar1 = (this->PendingUpdate).Reference;
      if ((pFVar1 != (FRenderAssetUpdate *)0x0) &&
         (FRenderAssetUpdate::Tick(pFVar1,(uint)(GIsThreadedRendering == false)),
         ((this->PendingUpdate).Reference)->TaskState == TS_Done)) {
        pFVar1 = (this->PendingUpdate).Reference;
        if (pFVar1->bSuccess == false) {
          if (pFVar1->bIsCancelled == false) {
            local_res20 = *(FName *)(this->_padding_ + 0x18);
            ::FName::ToString(&local_res20,local_50);
            local_68 = (FName)this->_padding_;
            ::FName::ToString(&local_68,&local_60);
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("PendingUpdate->IsCancelled()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableRenderAsset.cpp"
                               ,0xf2,
                               L"Invalid completion of streaming request for asset %s of type %s.");
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
            if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
            }
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          (this->CachedSRRState).field0_0x0._s_0.NumRequestedLODs =
               (this->CachedSRRState).field0_0x0._s_0.NumResidentLODs;
        }
        else {
          (this->CachedSRRState).field0_0x0._s_0.NumResidentLODs =
               (this->CachedSRRState).field0_0x0._s_0.NumRequestedLODs;
        }
        pFVar1 = (this->PendingUpdate).Reference;
        if (pFVar1 != (FRenderAssetUpdate *)0x0) {
          (this->PendingUpdate).Reference = (FRenderAssetUpdate *)0x0;
          FRenderAssetUpdate::Release(pFVar1);
        }
      }
      if (param_2) {
        TickMipLevelChangeCallbacks
                  (this,(TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)0x0);
      }
      FlushRenderingCommands();
      if ((this->PendingUpdate).Reference == (FRenderAssetUpdate *)0x0) {
        uVar2 = (this->CachedSRRState).field0_0x0.Data;
        if (uVar2 == 0) {
          cVar6 = (**(code **)(this->_padding_ + 0x308))(this);
          if ((cVar6 != '\0') ||
             ((param_1 && (cVar6 = (**(code **)(this->_padding_ + 0x310))(this), cVar6 != '\0'))))
          goto LAB_1487d2799;
        }
        else {
          if ((uVar2 & 4) != 0) {
            cVar6 = (**(code **)(this->_padding_ + 0x308))(this);
            if (cVar6 != '\0') goto LAB_1487d2799;
            bVar5 = IsInGameThread();
            if (bVar5) {
              *(byte *)&(this->CachedSRRState).field0_0x0 =
                   *(byte *)&(this->CachedSRRState).field0_0x0 & 0xfb;
            }
          }
          if ((param_1) && ((*(byte *)&(this->CachedSRRState).field0_0x0 & 8) != 0)) {
            cVar6 = (**(code **)(this->_padding_ + 0x310))(this);
            if (cVar6 != '\0') goto LAB_1487d2799;
            bVar5 = IsInGameThread();
            if (bVar5) {
              *(byte *)&(this->CachedSRRState).field0_0x0 =
                   *(byte *)&(this->CachedSRRState).field0_0x0 & 0xf7;
            }
          }
        }
      }
      else {
LAB_1487d2799:
        if ((0 < (int)GRenderAssetStreamingSuspension) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<8008823021475201457>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableRenderAsset.cpp"
                               ,0x1b1,"!IsAssetStreamingSuspended()"), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FWindowsPlatformProcess::Sleep(fVar4);
      }
      bVar5 = HasPendingInitOrStreaming(this,param_1);
    } while (bVar5);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// WaitForStreaming @ 1487d2840

void __thiscall
UStreamableRenderAsset::WaitForStreaming(UStreamableRenderAsset *this,bool param_1,bool param_2)

{
  FStreamingManagerCollection *this_00;
  IRenderAssetStreamingManager *pIVar1;
  
  WaitForPendingInitOrStreaming(this,param_1,param_2);
  if (this->StreamingIndex != -1) {
    this_00 = IStreamingManager::Get();
    pIVar1 = FStreamingManagerCollection::GetRenderAssetStreamingManager(this_00);
    (**(code **)(*(longlong *)pIVar1 + 0x98))(pIVar1,this);
    WaitForPendingInitOrStreaming(this,param_1,param_2);
  }
  return;
}

// execSetForceMipLevelsToBeResident @ 1487d3260

void __cdecl
UStreamableRenderAsset::execSetForceMipLevelsToBeResident
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  uint local_res8 [2];
  float local_res10 [2];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar3 = local_res10[0];
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar4 = (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1);
  if (((uVar2 == 0) || ((int)uVar4 < 0)) || (0x1f < uVar4)) {
    param_1[5].field_0x8 = param_1[5].field_0x8 & 0xbf;
  }
  else {
    param_1[5].field_0x8 =
         -((FMath::BitFlag[(int)uVar4] & uVar2) != 0) & 0x40U | param_1[5].field_0x8 & 0xbf;
  }
  *(double *)&param_1[1].field_0x18 = (double)fVar3 + (double)FApp::CurrentTime;
  return;
}

// operator() @ 150530b30

bool __thiscall
`UStreamableRenderAsset::IsFullyStreamedIn'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8008823021475201431>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8008823021475201431>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150530ba5;
    }
  }
  bVar2 = false;
LAB_150530ba5:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

