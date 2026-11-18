// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 6

// FImgMediaMipMapObjectInfo @ 14ea389c0

FImgMediaMipMapObjectInfo * __thiscall
FImgMediaMipMapObjectInfo::FImgMediaMipMapObjectInfo
          (FImgMediaMipMapObjectInfo *this,UMeshComponent *param_1,
          TWeakPtr<FMediaTextureTrackerObject,1> *param_2)

{
  UMeshComponent *local_res8;
  
  this->_padding_ = (longlong)&___7FImgMediaMipMapObjectInfo__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->MeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->MeshComponent).WeakPtr,(FObjectPtr)&local_res8);
  (this->Tracker).Object = param_2->Object;
  (this->Tracker).WeakReferenceCount.ReferenceController =
       (param_2->WeakReferenceCount).ReferenceController;
  (param_2->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (FMediaTextureTrackerObject *)0x0;
  return this;
}

// ~FImgMediaMipMapObjectInfo @ 14ea3afb0

void __thiscall
FImgMediaMipMapObjectInfo::~FImgMediaMipMapObjectInfo(FImgMediaMipMapObjectInfo *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->Tracker).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014ea3afd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// CalculateVisibleTiles @ 14ea434a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FImgMediaMipMapObjectInfo::CalculateVisibleTiles
          (FImgMediaMipMapObjectInfo *this,
          TArray<FImgMediaViewInfo,TSizedDefaultAllocator<32>_> *param_1,FSequenceInfo *param_2,
          TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
          *param_3)

{
  bool bVar1;
  USceneComponent *this_00;
  FImgMediaTileSelection *pFVar2;
  undefined1 auStack_a8 [32];
  int local_78 [4];
  FImgMediaTileSelection local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this_00 = (USceneComponent *)FWeakObjectPtr::Get(&(this->MeshComponent).WeakPtr);
  if (((this_00 != (USceneComponent *)0x0) &&
      (bVar1 = USceneComponent::ShouldRender(this_00), bVar1)) &&
     (local_78[0] = 0, 0 < param_2->NumMipLevels)) {
    do {
      pFVar2 = FImgMediaTileSelection::CreateForTargetMipLevel
                         (&local_68,&param_2->Dim,&(param_2->TilingDescription).TileSize,local_78[0]
                          ,true);
      TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
      ::Emplace<int_const_&,FImgMediaTileSelection>
                ((TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                  *)param_3,local_78,pFVar2);
      if (local_68.Tiles.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_68.Tiles.AllocatorInstance.SecondaryData);
      }
      local_78[0] = local_78[0] + 1;
    } while (local_78[0] < param_2->NumMipLevels);
  }
  return;
}

// GetMeshComponent @ 14ea4d6b0

UMeshComponent * __thiscall
FImgMediaMipMapObjectInfo::GetMeshComponent(FImgMediaMipMapObjectInfo *this)

{
  UMeshComponent *pUVar1;
  
  pUVar1 = (UMeshComponent *)FWeakObjectPtr::Get(&(this->MeshComponent).WeakPtr,true);
  return pUVar1;
}

// GetMipLevelToUpscale @ 14ea4d830

int __thiscall FImgMediaMipMapObjectInfo::GetMipLevelToUpscale(FImgMediaMipMapObjectInfo *this)

{
  int iVar1;
  FMediaTextureTrackerObject *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (this->Tracker).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ea4d860;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar3 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar6);
    pFVar2 = (this->Tracker).Object;
    if (pFVar2 != (FMediaTextureTrackerObject *)0x0) {
      iVar1 = pFVar2->MipLevelToUpscale;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      return iVar1;
    }
  }
LAB_14ea4d860:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return -1;
}

// GetTargetViewResolutionMask @ 14ea4ecc0

EMediaTextureTargetViewResolution __thiscall
FImgMediaMipMapObjectInfo::GetTargetViewResolutionMask(FImgMediaMipMapObjectInfo *this)

{
  EMediaTextureTargetViewResolution EVar1;
  FMediaTextureTrackerObject *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (this->Tracker).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ea4ecf0;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar3 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar6);
    pFVar2 = (this->Tracker).Object;
    if (pFVar2 != (FMediaTextureTrackerObject *)0x0) {
      EVar1 = pFVar2->TargetViewResolutionMask;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      return EVar1;
    }
  }
LAB_14ea4ecf0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return RenderResolution;
}

