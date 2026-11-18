// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// ~FArchiveReplaceObjectRefBase @ 146620960

void __thiscall
FArchiveReplaceObjectRefBase::~FArchiveReplaceObjectRefBase(FArchiveReplaceObjectRefBase *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  
  *(undefined4 *)&(this->ReplacedReferences).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ReplacedReferences).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<FProperty_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReplacedReferences);
  pFVar2 = (this->PendingSerializationObjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->SerializedObjects).HashSize = 0;
  FVar3 = (this->SerializedObjects).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SerializedObjects).Elements);
  FArchive::~FArchive((FArchive *)this);
  return;
}

// GetArchiveName @ 146688b30

FString * __thiscall
FArchiveReplaceObjectRefBase::GetArchiveName
          (FArchiveReplaceObjectRefBase *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ReplaceObjectRef");
  return __return_storage_ptr__;
}

