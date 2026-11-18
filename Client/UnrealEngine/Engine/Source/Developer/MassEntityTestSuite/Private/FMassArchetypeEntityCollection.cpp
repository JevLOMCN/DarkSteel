// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 8

// Append<FMassArchetypeEntityCollection_&> @ 1470d7260

void __thiscall
FMassArchetypeEntityCollection::Append<FMassArchetypeEntityCollection_&>
          (FMassArchetypeEntityCollection *this,FMassArchetypeEntityCollection *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FIdentityFunctor local_res8 [8];
  
  piVar1 = &(this->Ranges).ArrayNum;
  iVar2 = *piVar1;
  if (((this->Archetype).ArchetypeHandle.DataPtr.Object !=
       (param_1->Archetype).ArchetypeHandle.DataPtr.Object) ||
     ((this->Archetype).HandleVersion != (param_1->Archetype).HandleVersion)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameArchetype(Other)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassArchetypeTypes.h"
                       ,0x1a8,
                       L"Unable to merge two entity collections representing different archetypes");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this == param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = (param_1->Ranges).ArrayNum;
  if (iVar3 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,iVar3,(ForAnyElementType *)this,piVar1,&(this->Ranges).ArrayMax);
    memcpy((this->Ranges).AllocatorInstance.Data + (longlong)iVar6 * 0xc,
           (param_1->Ranges).AllocatorInstance.Data,(longlong)iVar3 * 0xc);
  }
  if (iVar2 != 0) {
    AlgoImpl::
    IntroSortInternal<FMassArchetypeEntityCollection::FArchetypeEntityRange,int,FIdentityFunctor,TDereferenceWrapper<FMassArchetypeEntityCollection::FArchetypeEntityRange,TLess<void>_>_>
              ((FArchetypeEntityRange *)(this->Ranges).AllocatorInstance.Data,*piVar1,local_res8[0],
               (TLess<void> *)local_res8);
  }
  return;
}

// Append<FMassArchetypeEntityCollection> @ 1470d7360

void __thiscall
FMassArchetypeEntityCollection::Append<FMassArchetypeEntityCollection>
          (FMassArchetypeEntityCollection *this,FMassArchetypeEntityCollection *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FIdentityFunctor local_res8 [8];
  
  piVar1 = &(this->Ranges).ArrayNum;
  iVar2 = *piVar1;
  if (((this->Archetype).ArchetypeHandle.DataPtr.Object !=
       (param_1->Archetype).ArchetypeHandle.DataPtr.Object) ||
     ((this->Archetype).HandleVersion != (param_1->Archetype).HandleVersion)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameArchetype(Other)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassArchetypeTypes.h"
                       ,0x1a8,
                       L"Unable to merge two entity collections representing different archetypes");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this == param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = (param_1->Ranges).ArrayNum;
  if (iVar3 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,iVar3,(ForAnyElementType *)this,piVar1,&(this->Ranges).ArrayMax);
    memmove((this->Ranges).AllocatorInstance.Data + (longlong)iVar6 * 0xc,
            (param_1->Ranges).AllocatorInstance.Data,(longlong)iVar3 * 0xc);
    (param_1->Ranges).ArrayNum = 0;
  }
  if (iVar2 != 0) {
    AlgoImpl::
    IntroSortInternal<FMassArchetypeEntityCollection::FArchetypeEntityRange,int,FIdentityFunctor,TDereferenceWrapper<FMassArchetypeEntityCollection::FArchetypeEntityRange,TLess<void>_>_>
              ((FArchetypeEntityRange *)(this->Ranges).AllocatorInstance.Data,*piVar1,local_res8[0],
               (TLess<void> *)local_res8);
  }
  return;
}

// FMassArchetypeEntityCollection @ 1470f45f0

FMassArchetypeEntityCollection * __thiscall
FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
          (FMassArchetypeEntityCollection *this,FMassArchetypeEntityCollection *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar3;
  
  (this->Ranges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Ranges).ArrayMax;
  iVar2 = (param_1->Ranges).ArrayNum;
  _Src = (param_1->Ranges).AllocatorInstance.Data;
  (this->Ranges).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->Ranges).AllocatorInstance.Data,_Src,(longlong)iVar2 * 0xc);
  }
  (this->Archetype).ArchetypeHandle.DataPtr.Object =
       (param_1->Archetype).ArchetypeHandle.DataPtr.Object;
  pTVar3 = (param_1->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
  (this->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Archetype).HandleVersion = (param_1->Archetype).HandleVersion;
  return this;
}

// ~FMassArchetypeEntityCollection @ 1470f8330

void __thiscall
FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection
          (FMassArchetypeEntityCollection *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController);
  pFVar1 = (this->Ranges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetArchetype @ 14711f870

FMassArchetypeHandle * __thiscall
FMassArchetypeEntityCollection::GetArchetype
          (FMassArchetypeEntityCollection *this,FMassArchetypeHandle *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (__return_storage_ptr__->DataPtr).Object = (this->Archetype).ArchetypeHandle.DataPtr.Object;
  pTVar1 = (this->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->DataPtr).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetRanges @ 147121740

TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> * __thiscall
FMassArchetypeEntityCollection::GetRanges
          (FMassArchetypeEntityCollection *this,
          TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>
          *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *pTVar4;
  
  iVar1 = (this->Ranges).ArrayNum;
  __return_storage_ptr__->DataPtr = (FArchetypeEntityRange *)(this->Ranges).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *)
             (*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// IsSameArchetype @ 147192960

bool __thiscall
FMassArchetypeEntityCollection::IsSameArchetype
          (FMassArchetypeEntityCollection *this,FMassArchetypeEntityCollection *param_1)

{
  if (((this->Archetype).ArchetypeHandle.DataPtr.Object ==
       (param_1->Archetype).ArchetypeHandle.DataPtr.Object) &&
     ((this->Archetype).HandleVersion == (param_1->Archetype).HandleVersion)) {
    return true;
  }
  return false;
}

// IsUpToDate @ 147192980

bool __thiscall FMassArchetypeEntityCollection::IsUpToDate(FMassArchetypeEntityCollection *this)

{
  bool bVar1;
  
  if (((this->Ranges).ArrayNum != 0) ||
     ((this->Archetype).ArchetypeHandle.DataPtr.Object != (FMassArchetypeData *)0x0)) {
    bVar1 = FMassArchetypeVersionedHandle::IsUpToDate(&this->Archetype);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

