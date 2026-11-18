// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// FMeshUvMappingHandleBase @ 148f7f1e0

FMeshUvMappingHandleBase * __thiscall
FMeshUvMappingHandleBase::FMeshUvMappingHandleBase
          (FMeshUvMappingHandleBase *this,FMeshUvMappingHandleBase *param_1)

{
  TSharedPtr<FMeshUvMapping,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMeshUvMapping *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  (this->Usage).RequiresCpuAccess = false;
  (this->Usage).RequiresGpuAccess = false;
  pTVar1 = &param_1->UvMappingData;
  (this->UvMappingData).Object = (FMeshUvMapping *)0x0;
  (this->UvMappingData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->Usage = param_1->Usage;
  pTVar2 = (param_1->UvMappingData).SharedReferenceCount.ReferenceController;
  pFVar3 = pTVar1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->UvMappingData).SharedReferenceCount.ReferenceController;
  (this->UvMappingData).Object = pFVar3;
  (this->UvMappingData).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<FMeshUvMapping,1> *)&local_18) {
    pTVar1->Object = (FMeshUvMapping *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->UvMappingData).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return this;
}

// FMeshUvMappingHandleBase @ 148f7f290

FMeshUvMappingHandleBase * __thiscall
FMeshUvMappingHandleBase::FMeshUvMappingHandleBase
          (FMeshUvMappingHandleBase *this,FMeshUvMappingUsage param_1,
          TSharedPtr<FMeshUvMapping,1> *param_2,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FMeshUvMapping *this_00;
  
  this->Usage = param_1;
  (this->UvMappingData).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->UvMappingData).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (this->UvMappingData).Object;
  if (this_00 != (FMeshUvMapping *)0x0) {
    FMeshUvMapping::RegisterUser(this_00,this->Usage,param_3);
  }
  return this;
}

// ~FMeshUvMappingHandleBase @ 148f81d60

void __thiscall FMeshUvMappingHandleBase::~FMeshUvMappingHandleBase(FMeshUvMappingHandleBase *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMeshUvMapping *this_00;
  bool bVar3;
  
  this_00 = (this->UvMappingData).Object;
  if ((this_00 != (FMeshUvMapping *)0x0) &&
     ((bVar3 = (this->Usage).RequiresGpuAccess, (this->Usage).RequiresCpuAccess != false ||
      (bVar3 != false)))) {
    LOCK();
    paVar1 = &this_00->CpuQuadTreeUserCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      FNiagaraUvQuadTree::Empty(&this_00->TriangleIndexQuadTree);
    }
    if (bVar3 != false) {
      LOCK();
      paVar1 = &this_00->GpuQuadTreeUserCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        FMeshUvMapping::ReleaseGpuQuadTree(this_00);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UvMappingData).SharedReferenceCount.ReferenceController);
  return;
}

// operator= @ 148f82370

FMeshUvMappingHandleBase * __thiscall
FMeshUvMappingHandleBase::operator=
          (FMeshUvMappingHandleBase *this,FMeshUvMappingHandleBase *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FMeshUvMapping *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (this != param_1) {
    this->Usage = param_1->Usage;
    pTVar1 = (param_1->UvMappingData).SharedReferenceCount.ReferenceController;
    pFVar2 = (param_1->UvMappingData).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->UvMappingData).SharedReferenceCount.ReferenceController;
    (this->UvMappingData).Object = pFVar2;
    (this->UvMappingData).SharedReferenceCount.ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&param_1->UvMappingData != (TSharedPtr<FMeshUvMapping,1> *)&local_18) {
      (param_1->UvMappingData).Object = (FMeshUvMapping *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->UvMappingData).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  return this;
}

// operator_bool @ 148f82680

bool __thiscall FMeshUvMappingHandleBase::operator_bool(FMeshUvMappingHandleBase *this)

{
  return (this->UvMappingData).Object != (FMeshUvMapping *)0x0;
}

// GetLodIndex @ 148fb49b0

int __thiscall FMeshUvMappingHandleBase::GetLodIndex(FMeshUvMappingHandleBase *this)

{
  FMeshUvMapping *pFVar1;
  
  pFVar1 = (this->UvMappingData).Object;
  if (pFVar1 != (FMeshUvMapping *)0x0) {
    return pFVar1->LodIndex;
  }
  return 0;
}

// GetQuadTreeProxy @ 148fb6d50

FMeshUvMappingBufferProxy * __thiscall
FMeshUvMappingHandleBase::GetQuadTreeProxy(FMeshUvMappingHandleBase *this)

{
  FMeshUvMapping *pFVar1;
  
  pFVar1 = (this->UvMappingData).Object;
  if (pFVar1 != (FMeshUvMapping *)0x0) {
    return (pFVar1->FrozenQuadTreeProxy).Ptr;
  }
  return (FMeshUvMappingBufferProxy *)0x0;
}

// GetUvSetIndex @ 148fbbbb0

int __thiscall FMeshUvMappingHandleBase::GetUvSetIndex(FMeshUvMappingHandleBase *this)

{
  FMeshUvMapping *pFVar1;
  
  pFVar1 = (this->UvMappingData).Object;
  if (pFVar1 != (FMeshUvMapping *)0x0) {
    return pFVar1->UvSetIndex;
  }
  return 0;
}

// PinAndInvalidateHandle @ 148fc6ee0

void __thiscall FMeshUvMappingHandleBase::PinAndInvalidateHandle(FMeshUvMappingHandleBase *this)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->UvMappingData != (TSharedPtr<FMeshUvMapping,1> *)&local_18) {
    (this->UvMappingData).Object = (FMeshUvMapping *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->UvMappingData).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

