// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 3

// DestroyObject @ 14ec6c5f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOnlineSessionSettings,1>::DestroyObject
          (TIntrusiveReferenceController<FOnlineSessionSettings,1> *this)

{
  FOnlineSessionSettings::~FOnlineSessionSettings((FOnlineSessionSettings *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ec6c600

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPurchaseReceipt,1>::DestroyObject
          (TIntrusiveReferenceController<FPurchaseReceipt,1> *this)

{
  void *pvVar1;
  
  DestructItems<FPurchaseReceipt::FReceiptOfferEntry,int>
            (*(FReceiptOfferEntry **)((this->ObjectStorage).Pad + 0x20),
             *(int *)((this->ObjectStorage).Pad + 0x28));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ece20c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TestOnlineSearchSettings,1>::DestroyObject
          (TIntrusiveReferenceController<TestOnlineSearchSettings,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x70] = '\0';
  (this->ObjectStorage).Pad[0x71] = '\0';
  (this->ObjectStorage).Pad[0x72] = '\0';
  (this->ObjectStorage).Pad[0x73] = '\0';
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOnlineSessionSearch__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x68);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x28));
  DestructItems<FOnlineSessionSearchResult,int>
            (*(FOnlineSessionSearchResult **)((this->ObjectStorage).Pad + 8),
             *(int *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

