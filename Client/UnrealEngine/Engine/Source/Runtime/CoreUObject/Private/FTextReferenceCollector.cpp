// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FTextReferenceCollector @ 141f22600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTextReferenceCollector * __thiscall
FTextReferenceCollector::FTextReferenceCollector
          (FTextReferenceCollector *this,UPackage *param_1,EComparisonMode param_2,FString *param_3,
          FString *param_4,FString *param_5,int *param_6)

{
  undefined1 auStackY_1b8 [32];
  FTextReferencesArchive local_178;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  FTextReferencesArchive::FTextReferencesArchive
            (&local_178,param_1,param_2,param_3,param_4,param_5,param_6);
  local_178.ProcessedObjects.HashSize = 0;
  if (local_178.ProcessedObjects.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_178.ProcessedObjects.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_178.ProcessedObjects.Elements);
  local_178.AllObjectsInPackage.HashSize = 0;
  if (local_178.AllObjectsInPackage.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_178.AllObjectsInPackage.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_178.AllObjectsInPackage.Elements);
  FArchive::~FArchive((FArchive *)&local_178);
  return this;
}

// GetTypeSpecificTextReferenceCollectorCallbacks @ 141f36ed0

TMap<UClass_const_*,TFunction<void___cdecl(UObject_*,FArchive_&)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,TFunction<void___cdecl(UObject_*,FArchive_&)>,0>_>
* __cdecl FTextReferenceCollector::GetTypeSpecificTextReferenceCollectorCallbacks(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FTextReferenceCollector::GetTypeSpecificTextReferenceCollectorCallbacks'::__l2::
             _dynamic_atexit_destructor_for__TypeSpecificTextReferenceCollectorCallbacks__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &TypeSpecificTextReferenceCollectorCallbacks;
}

