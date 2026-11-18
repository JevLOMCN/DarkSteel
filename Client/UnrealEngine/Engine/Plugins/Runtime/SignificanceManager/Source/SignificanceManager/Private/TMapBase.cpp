// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignificanceManager
// Functions: 1

// FindChecked @ 14e2a22d0

FManagedObjectInfo ** __thiscall
TMapBase<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>_>
::FindChecked(TMapBase<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>_>
              *this,TObjectPtr<UObject_const_> param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*> *pTVar3;
  FManagedObjectInfo **ppFVar4;
  UObject *local_res8 [4];
  
  local_res8[0] = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8[0]);
  }
  pTVar3 = TSet<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,(TObjectPtr<UObject_const_>)local_res8);
  if (pTVar3 == (TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppFVar4 = (FManagedObjectInfo **)(*pcVar1)();
      return ppFVar4;
    }
    return (FManagedObjectInfo **)&DAT_00000008;
  }
  return (FManagedObjectInfo **)&pTVar3->field_0x8;
}

