// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ~FRegexPatternImplementation @ 1416d91f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FRegexPatternImplementation::~FRegexPatternImplementation(FRegexPatternImplementation *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  RegexPattern *pRVar4;
  FICURegexManager *lpCriticalSection;
  atomic<int> aVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  TSharedPtr<icu_64::RegexPattern_const_,1> local_38;
  FRegexPatternImplementation local_28;
  
  lpCriticalSection = FICURegexManager::Singleton;
  if (FICURegexManager::Singleton != (FICURegexManager *)0x0) {
    pTVar7 = (this->ICURegexPattern).WeakReferenceCount.ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar7->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar7 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_1416d9240;
        }
        LOCK();
        aVar5 = pTVar7->SharedReferenceCount;
        bVar8 = aVar2 == aVar5;
        if (bVar8) {
          pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar5 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar5;
      } while (!bVar8);
      pRVar4 = (this->ICURegexPattern).Object;
      if (pRVar4 != (RegexPattern *)0x0) {
        if (lpCriticalSection == (FICURegexManager *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        local_38.Object = pRVar4;
        local_38.SharedReferenceCount.ReferenceController = pTVar7;
        if (*(int *)&(lpCriticalSection->AllocatedRegexPatterns).Elements.field_0x8 !=
            *(int *)&(lpCriticalSection->AllocatedRegexPatterns).Elements.field_0x34) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
          uVar6 = ((uint)((ulonglong)pRVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pRVar4 >> 4)) *
                  -0x7a143595;
          uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar7);
          TSet<TSharedPtr<icu_64::RegexPattern_const_,1>,DefaultKeyFuncs<TSharedPtr<icu_64::RegexPattern_const_,1>,0>,FDefaultSetAllocator>
          ::RemoveImpl<TSharedPtr<icu_64::RegexPattern_const_,1>_>
                    (&lpCriticalSection->AllocatedRegexPatterns,uVar6 >> 0x10 ^ uVar6,&local_38);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
LAB_1416d9240:
    if (this != &local_28) {
      pTVar3 = (this->ICURegexPattern).WeakReferenceCount.ReferenceController;
      (this->ICURegexPattern).Object = (RegexPattern *)0x0;
      (this->ICURegexPattern).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  pTVar7 = (this->ICURegexPattern).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  return;
}

