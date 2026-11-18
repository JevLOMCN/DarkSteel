// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// ~FReplaceObjectReferencesArchive @ 14212c9d0

void __thiscall
PackageReloadInternal::FReplaceObjectReferencesArchive::~FReplaceObjectReferencesArchive
          (FReplaceObjectReferencesArchive *this)

{
  this->_padding_ = (longlong)&_vftable__for__FArchiveUObject__;
  this->_padding_ = (longlong)&_vftable__for__FReferenceCollector__;
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)&this->_padding_);
  FArchive::~FArchive((FArchive *)this);
  return;
}

// operator<< @ 14212e750

FArchive * __thiscall
PackageReloadInternal::FReplaceObjectReferencesArchive::operator<<
          (FReplaceObjectReferencesArchive *this,UObject **param_1)

{
  uint uVar1;
  UObject *pUVar2;
  TArray<PackageReloadInternal::FExistingPackageReference,TSizedDefaultAllocator<32>_> *pTVar3;
  UPackage *pUVar4;
  TArray<PackageReloadInternal::FNewPackageReference,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  FObjectAndPackageIndex *pFVar11;
  FArchive *pFVar12;
  UPackage *pUVar13;
  TReferenceControllerBase<1> *pTVar14;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  pUVar2 = *param_1;
  if ((pUVar2 != (UObject *)0x0) && (pUVar2 != this->PotentialReferencer)) {
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
    pFVar11 = TMapBase<UObject_*,PackageReloadInternal::FObjectAndPackageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,PackageReloadInternal::FObjectAndPackageIndex,0>_>
              ::Find((TMapBase<UObject_*,PackageReloadInternal::FObjectAndPackageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,PackageReloadInternal::FObjectAndPackageIndex,0>_>
                      *)this->OldObjectToNewData,pUVar2);
    if (pFVar11 != (FObjectAndPackageIndex *)0x0) {
      uVar1 = pFVar11->PackageIndex;
      pTVar3 = this->ExistingPackages;
      uVar10 = 0;
      if ((int)uVar1 < pTVar3->ArrayNum) {
        uVar10 = ~uVar1 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FArchive *)(*pcVar8)();
        return pFVar12;
      }
      pUVar4 = *(UPackage **)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x18);
      pUVar13 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this->PotentialReferencer);
      if (pUVar13 != pUVar4) {
        uVar1 = pFVar11->PackageIndex;
        pTVar5 = this->NewPackages;
        pUVar2 = pFVar11->Object;
        uVar10 = 0;
        if ((int)uVar1 < pTVar5->ArrayNum) {
          uVar10 = ~uVar1 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          pFVar12 = (FArchive *)(*pcVar8)();
          return pFVar12;
        }
        pFVar6 = (pTVar5->AllocatorInstance).Data;
        pTVar14 = *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)(int)uVar1 * 0x18 + 0x10);
        lVar7 = *(longlong *)(pFVar6 + (longlong)(int)uVar1 * 0x18 + 8);
        if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        *param_1 = pUVar2;
        if ((lVar7 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          pFVar12 = (FArchive *)(*pcVar8)();
          return pFVar12;
        }
        pUVar2 = this->PotentialReferencer;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res10 = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
        TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_>
                  ((TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
                   (lVar7 + 0x60),(TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res8);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
  return (FArchive *)this;
}

// GetArchiveName @ 14213cc70

FString * __thiscall
PackageReloadInternal::FReplaceObjectReferencesArchive::GetArchiveName
          (FReplaceObjectReferencesArchive *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FReplaceObjectReferencesArchive");
  return __return_storage_ptr__;
}

// HandleObjectReference @ 14213f1b0

void __thiscall
PackageReloadInternal::FReplaceObjectReferencesArchive::HandleObjectReference
          (FReplaceObjectReferencesArchive *this,UObject **param_1,UObject *param_2,
          FProperty *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014213f1ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this[-1]._padding_ + 0x168))();
  return;
}

// HandleObjectReferences @ 14213f1d0

void __thiscall
PackageReloadInternal::FReplaceObjectReferencesArchive::HandleObjectReferences
          (FReplaceObjectReferencesArchive *this,UObject **param_1,int param_2,UObject *param_3,
          FProperty *param_4)

{
  ulonglong uVar1;
  
  if (0 < param_2) {
    uVar1 = (ulonglong)(uint)param_2;
    do {
      (**(code **)(this[-1]._padding_ + 0x168))(&this[-1]._padding_,param_1);
      param_1 = param_1 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}

// IsIgnoringArchetypeRef @ 142143420

bool __thiscall
PackageReloadInternal::FReplaceObjectReferencesArchive::IsIgnoringArchetypeRef
          (FReplaceObjectReferencesArchive *this)

{
  return false;
}

// IsIgnoringTransient @ 142143430

bool __thiscall
PackageReloadInternal::FReplaceObjectReferencesArchive::IsIgnoringTransient
          (FReplaceObjectReferencesArchive *this)

{
  return false;
}

