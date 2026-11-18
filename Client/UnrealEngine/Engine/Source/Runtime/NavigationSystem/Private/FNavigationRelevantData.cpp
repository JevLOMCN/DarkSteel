// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 6

// FNavigationRelevantData @ 146d749a0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FNavigationRelevantData * __thiscall
FNavigationRelevantData::FNavigationRelevantData
          (FNavigationRelevantData *this,TSharedRef<FNavigationElement_const_,1> *param_1)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  *(uint *)&(this->Modifiers)._padding_ = (uint)(this->Modifiers)._padding_ & 0xfffffffe;
  (this->Modifiers).bHasPotentialLinks = 0;
  (this->Modifiers).bRasterizeAsFilledConvexVolume = 0;
  (this->Modifiers).bMaskFillCollisionUnderneathForNavmesh = 0;
  (this->Modifiers).bFillCollisionUnderneathForNavmesh = 0;
  (this->Modifiers).bIsPerInstanceModifier = 0;
  (this->Modifiers).bHasLowAreaModifiers = 0;
  (this->Modifiers).bAdjustHeight = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->CollisionData = 0;
  *(undefined8 *)&(this->CollisionData).field_0x8 = 0;
  *(undefined8 *)&(this->CollisionData).field_0x10 = 0;
  *(undefined8 *)&this->VoxelData = 0;
  *(undefined8 *)&(this->VoxelData).field_0x8 = 0;
  *(undefined8 *)&(this->VoxelData).field_0x10 = 0;
  (this->Bounds).IsValid = '\0';
  *(undefined8 *)&this->NavDataPerInstanceTransformDelegate = 0;
  *(undefined8 *)&(this->NavDataPerInstanceTransformDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->NavDataPerInstanceTransformDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ShouldUseGeometryDelegate = 0;
  *(undefined8 *)&(this->ShouldUseGeometryDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ShouldUseGeometryDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->Modifiers).NavDataPerInstanceTransformDelegate = 0;
  *(undefined8 *)&(this->Modifiers).NavDataPerInstanceTransformDelegate.field_0x8 = 0;
  *(undefined4 *)&(this->Modifiers).NavDataPerInstanceTransformDelegate.field_0x10 = 0;
  (this->Modifiers).Areas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).Areas.ArrayNum = 0;
  (this->Modifiers).Areas.ArrayMax = 0;
  (this->Modifiers).SimpleLinks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).SimpleLinks.ArrayNum = 0;
  (this->Modifiers).SimpleLinks.ArrayMax = 0;
  (this->Modifiers).CustomLinks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).CustomLinks.ArrayNum = 0;
  (this->Modifiers).CustomLinks.ArrayMax = 0;
  (this->Modifiers).NavMeshResolution = Invalid;
  (this->SourceElement).Object = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SourceElement).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bPendingLazyGeometryGathering = 0;
  this->bLoadedData = 0;
  this->bShouldSkipDirtyAreaOnAddOrRemove = 0;
  this->bSupportsGatheringGeometrySlices = 0;
  this->bPendingChildLazyModifiersGathering = 0;
  this->bPendingLazyModifiersGathering = 0;
  return this;
}

// ~FNavigationRelevantData @ 146d78870

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall FNavigationRelevantData::~FNavigationRelevantData(FNavigationRelevantData *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SourceElement).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->Modifiers).CustomLinks.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FSimpleLinkNavModifier,int>
            ((FSimpleLinkNavModifier *)(this->Modifiers).SimpleLinks.AllocatorInstance.Data,
             (this->Modifiers).SimpleLinks.ArrayNum);
  pFVar3 = (this->Modifiers).SimpleLinks.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FAreaNavModifier,int>
            ((FAreaNavModifier *)(this->Modifiers).Areas.AllocatorInstance.Data,
             (this->Modifiers).Areas.ArrayNum);
  pFVar3 = (this->Modifiers).Areas.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->Modifiers).NavDataPerInstanceTransformDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ShouldUseGeometryDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NavDataPerInstanceTransformDelegate
            );
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->VoxelData);
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->CollisionData);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146d78934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// GetDirtyFlag @ 146d9b040

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

ENavigationDirtyFlag __thiscall FNavigationRelevantData::GetDirtyFlag(FNavigationRelevantData *this)

{
  undefined1 *puVar1;
  ENavigationDirtyFlag EVar2;
  ENavigationDirtyFlag EVar3;
  
  if (((((*(int *)&(this->VoxelData).field_0x10 != 0) ||
        (*(int *)&(this->CollisionData).field_0x10 != 0)) ||
       (this->bPendingLazyGeometryGathering != 0)) ||
      ((this->Modifiers).bFillCollisionUnderneathForNavmesh != 0 ||
       (this->Modifiers).bMaskFillCollisionUnderneathForNavmesh != 0)) ||
     ((FCompositeNavModifier::bEnableNavMeshResolutions &&
      ((this->Modifiers).NavMeshResolution != Invalid)))) {
    EVar3 = Geometry;
  }
  else {
    EVar3 = None;
  }
  EVar2 = ((this->Modifiers).field_0x50 & 2) * '\x02';
  if ((((this->Modifiers).Areas.ArrayNum == 0) && ((this->Modifiers).SimpleLinks.ArrayNum == 0)) &&
     (((this->Modifiers).CustomLinks.ArrayNum == 0 &&
      (this->bPendingLazyModifiersGathering == 0 && this->bPendingChildLazyModifiersGathering == 0))
     )) {
    return EVar3 | EVar2;
  }
  return EVar3 | EVar2 | DynamicModifier;
}

// ValidateAndShrink @ 146dc46f0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall FNavigationRelevantData::ValidateAndShrink(FNavigationRelevantData *this)

{
  undefined1 *puVar1;
  bool bVar2;
  
  bVar2 = IsCollisionDataValid(this);
  if (bVar2) {
    Shrink(this);
    return;
  }
  puVar1 = &(this->CollisionData).field_0x14;
  *(undefined4 *)&(this->CollisionData).field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)&this->CollisionData,0,(int *)puVar1);
  }
  return;
}

// GetAllocatedSize @ 146e5b7e0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

ulong64 __thiscall FNavigationRelevantData::GetAllocatedSize(FNavigationRelevantData *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)&(this->CollisionData).field_0x14;
  iVar2 = *(int *)&(this->VoxelData).field_0x14;
  uVar3 = FCompositeNavModifier::GetAllocatedSize(&this->Modifiers);
  return (ulonglong)uVar3 + (longlong)iVar2 + (longlong)iVar1;
}

// HasModifiers @ 146e5efe0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall FNavigationRelevantData::HasModifiers(FNavigationRelevantData *this)

{
  undefined1 *puVar1;
  
  if (((((this->Modifiers).Areas.ArrayNum == 0) && ((this->Modifiers).SimpleLinks.ArrayNum == 0)) &&
      ((this->Modifiers).CustomLinks.ArrayNum == 0)) &&
     (((this->Modifiers).bFillCollisionUnderneathForNavmesh == 0 &&
       ((this->Modifiers).bMaskFillCollisionUnderneathForNavmesh == 0 &&
       (this->Modifiers).bRasterizeAsFilledConvexVolume == 0) &&
      ((this->Modifiers).NavMeshResolution == Invalid)))) {
    return false;
  }
  return true;
}

