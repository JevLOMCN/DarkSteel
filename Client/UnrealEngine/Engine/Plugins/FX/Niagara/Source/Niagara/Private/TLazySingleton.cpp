// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// Reset @ 148e7bcb0

void __thiscall
TLazySingleton<FNDIDataChannelLayoutManager>::Reset
          (TLazySingleton<FNDIDataChannelLayoutManager> *this)

{
  FNDIDataChannelLayoutManager *this_00;
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  this_00 = this->Ptr;
  if (this_00 != (FNDIDataChannelLayoutManager *)0x0) {
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this_00->FunctionToDataSetMapLock);
    if (BVar3 == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                         ,0x48,L"Destroying a lock that is still held!");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)&this_00->FunctionToDataSetMapLock);
    }
    *(undefined4 *)&(this_00->FunctionToDataSetLayoutMap).field_0x48 = 0;
    pvVar1 = *(void **)&(this_00->FunctionToDataSetLayoutMap).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    this->Ptr = (FNDIDataChannelLayoutManager *)0x0;
  }
  return;
}

