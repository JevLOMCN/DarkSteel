// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Reset @ 14492f9e0

void __thiscall
TLazySingleton<FRendererOnScreenNotification>::Reset
          (TLazySingleton<FRendererOnScreenNotification> *this)

{
  FRendererOnScreenNotification *lpCriticalSection;
  void *pvVar1;
  
  lpCriticalSection = this->Ptr;
  if (lpCriticalSection != (FRendererOnScreenNotification *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
    ::Remove(&FCoreDelegates::OnGetOnScreenMessages,
             (FDelegateHandle)(lpCriticalSection->BaseDelegateHandle).ID);
    *(undefined4 *)&(lpCriticalSection->Messages).field_0x48 = 0;
    pvVar1 = *(void **)&(lpCriticalSection->Messages).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&lpCriticalSection->Messages);
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                &(lpCriticalSection->ProxyDelegate).field_0x8,
               *(int *)&(lpCriticalSection->ProxyDelegate).field_0x10);
    pvVar1 = *(void **)&(lpCriticalSection->ProxyDelegate).field_0x8;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&lpCriticalSection->ProxyDelegate);
    DeleteCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection->MessageCS);
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->Ptr = (FRendererOnScreenNotification *)0x0;
  }
  return;
}

