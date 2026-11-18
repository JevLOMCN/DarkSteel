// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// DestroyObject @ 141e966f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAssetBundleData,SharedPointerInternals::DefaultDeleter<FAssetBundleData>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAssetBundleData,SharedPointerInternals::DefaultDeleter<FAssetBundleData>,1>
                *this)

{
  FAssetBundleData *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FAssetBundleData *)0x0) {
    DestructItems<FAssetBundleEntry,int>
              ((FAssetBundleEntry *)(pFVar1->Bundles).AllocatorInstance.Data,
               (pFVar1->Bundles).ArrayNum);
    pFVar2 = (pFVar1->Bundles).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x10);
    return;
  }
  return;
}

// DestroyObject @ 141ee8950

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FUObjectToken,SharedPointerInternals::DefaultDeleter<FUObjectToken>,1>
::DestroyObject(TReferenceControllerWithDeleter<FUObjectToken,SharedPointerInternals::DefaultDeleter<FUObjectToken>,1>
                *this)

{
  FUObjectToken *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FUObjectToken *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141ee8961. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141fc9b50

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FCoreRedirects::FWildcardData,SharedPointerInternals::DefaultDeleter<FCoreRedirects::FWildcardData>,1>
::DestroyObject(TReferenceControllerWithDeleter<FCoreRedirects::FWildcardData,SharedPointerInternals::DefaultDeleter<FCoreRedirects::FWildcardData>,1>
                *this)

{
  FWildcardData *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FWildcardData *)0x0) {
    DestructItems<FCoreRedirect,int>
              ((FCoreRedirect *)(pFVar1->Suffixes).AllocatorInstance.Data,
               (pFVar1->Suffixes).ArrayNum);
    pFVar2 = (pFVar1->Suffixes).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<FCoreRedirect,int>
              ((FCoreRedirect *)(pFVar1->Prefixes).AllocatorInstance.Data,
               (pFVar1->Prefixes).ArrayNum);
    pFVar2 = (pFVar1->Prefixes).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<FCoreRedirect,int>
              ((FCoreRedirect *)(pFVar1->Substrings).AllocatorInstance.Data,
               (pFVar1->Substrings).ArrayNum);
    pFVar2 = (pFVar1->Substrings).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x480,0x40);
    return;
  }
  return;
}

// DestroyObject @ 142209a30

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<void,`FDefaultConstructedPropertyElement::FDefaultConstructedPropertyElement'::__l1::<lambda_4_>,1>
::DestroyObject(void *this)

{
  void *pvVar1;
  longlong *plVar2;
  
  pvVar1 = *(void **)((longlong)this + 0x18);
  plVar2 = *(longlong **)((longlong)this + 0x10);
  if ((plVar2[7] & 0x1000000000U) == 0) {
    (**(code **)(*plVar2 + 0x138))(plVar2,pvVar1);
  }
  FMemory::Free(pvVar1);
  return;
}

