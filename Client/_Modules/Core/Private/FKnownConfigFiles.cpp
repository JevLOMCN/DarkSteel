// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FKnownConfigFiles @ 1418555e0

FKnownConfigFiles * __thiscall
FConfigCacheIni::FKnownConfigFiles::FKnownConfigFiles(FKnownConfigFiles *this)

{
  FName *pFVar1;
  longlong lVar2;
  FConfigBranch *this_00;
  FName local_res8;
  
  lVar2 = 10;
  this_00 = this->Branches;
  do {
    FConfigBranch::FConfigBranch(this_00);
    this_00 = this_00 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  pFVar1 = ::FName::FName(&local_res8,"Engine");
  this->Branches[0].IniName = *pFVar1;
  pFVar1 = ::FName::FName(&local_res8,"Game");
  this->Branches[1].IniName = *pFVar1;
  pFVar1 = ::FName::FName(&local_res8,"Input");
  this->Branches[2].IniName = *pFVar1;
  pFVar1 = ::FName::FName(&local_res8,"DeviceProfiles");
  this->Branches[3].IniName = *pFVar1;
  pFVar1 = ::FName::FName(&local_res8,"GameUserSettings");
  this->Branches[4].IniName = *pFVar1;
  pFVar1 = ::FName::FName(&local_res8,"Scalability");
  this->Branches[5].IniName = *pFVar1;
  pFVar1 = ::FName::FName(&local_res8,"RuntimeOptions");
  this->Branches[6].IniName = *pFVar1;
  pFVar1 = ::FName::FName(&local_res8,"InstallBundle");
  this->Branches[7].IniName = *pFVar1;
  pFVar1 = ::FName::FName(&local_res8,"Hardware");
  this->Branches[8].IniName = *pFVar1;
  pFVar1 = ::FName::FName(&local_res8,"GameplayTags");
  this->Branches[9].IniName = *pFVar1;
  return this;
}

// ~FKnownConfigFiles @ 141857820

void __thiscall FConfigCacheIni::FKnownConfigFiles::~FKnownConfigFiles(FKnownConfigFiles *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = 10;
  puVar2 = (undefined8 *)&this[1].Branches[0].StaticLayers.field_0x40;
  do {
    lVar3 = lVar3 + -1;
    FConfigCommandStream::~FConfigCommandStream((FConfigCommandStream *)(puVar2 + -0x36));
    FConfigFile::~FConfigFile((FConfigFile *)(puVar2 + -0x53));
    FConfigCommandStream::~FConfigCommandStream((FConfigCommandStream *)(puVar2 + -0x6c));
    FConfigFile::~FConfigFile((FConfigFile *)(puVar2 + -0x89));
    FConfigFile::~FConfigFile((FConfigFile *)(puVar2 + -0xa6));
    FConfigCommandStream::~FConfigCommandStream((FConfigCommandStream *)(puVar2 + -0xbf));
    TDoubleLinkedList<FConfigCommandStream_*>::~TDoubleLinkedList<FConfigCommandStream_*>
              ((TDoubleLinkedList<FConfigCommandStream_*> *)(puVar2 + -0xc3));
    *(undefined4 *)(puVar2 + -0xc4) = 0;
    pvVar1 = (void *)puVar2[-0xc5];
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStream>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStream>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStream>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(puVar2 + -0xcd));
    *(undefined4 *)(puVar2 + -0xcf) = 0;
    if ((void *)puVar2[-0xd0] != (void *)0x0) {
      FMemory::Free((void *)puVar2[-0xd0]);
    }
    TSparseArray<TSparseSetElement<TTuple<int,FUtf8String>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,FUtf8String>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,FUtf8String>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(puVar2 + -0xd8));
    if ((void *)puVar2[-0xdb] != (void *)0x0) {
      FMemory::Free((void *)puVar2[-0xdb]);
    }
    if ((void *)puVar2[-0xdd] != (void *)0x0) {
      FMemory::Free((void *)puVar2[-0xdd]);
    }
    if ((void *)puVar2[-0xe0] != (void *)0x0) {
      FMemory::Free((void *)puVar2[-0xe0]);
    }
    puVar2 = puVar2 + -0xc5;
  } while (lVar3 != 0);
  return;
}

// GetBranch @ 141872b50

FConfigBranch * __thiscall
FConfigCacheIni::FKnownConfigFiles::GetBranch(FKnownConfigFiles *this,FName param_1)

{
  FConfigBranch *pFVar1;
  
  pFVar1 = this[1].Branches;
  while( true ) {
    if (this->Branches == pFVar1) {
      return (FConfigBranch *)0x0;
    }
    if (this->Branches[0].IniName == param_1) break;
    this = (FKnownConfigFiles *)((longlong)this + 0x628);
  }
  return this->Branches;
}

// GetFile @ 1418734b0

FConfigFile * __thiscall
FConfigCacheIni::FKnownConfigFiles::GetFile(FKnownConfigFiles *this,FName param_1)

{
  FConfigFile *pFVar1;
  FConfigFile *pFVar2;
  
  pFVar1 = (FConfigFile *)(this + 1);
  for (; (pFVar2 = (FConfigFile *)0x0, (FConfigFile *)this != pFVar1 &&
         (pFVar2 = (FConfigFile *)this, (FName)((FConfigFile *)this)->_padding_ != param_1));
      this = (FKnownConfigFiles *)
             &(((FConfigFile *)((longlong)this + 0x570))->PerObjectConfigArrayOfStructKeys).
              field_0x28) {
  }
  pFVar1 = (FConfigFile *)&pFVar2[4].PerObjectConfigArrayOfStructKeys.field_0x40;
  if (pFVar2 == (FConfigFile *)0x0) {
    pFVar1 = (FConfigFile *)0x0;
  }
  return pFVar1;
}

// GetFilename @ 1418734f0

FString * __thiscall
FConfigCacheIni::FKnownConfigFiles::GetFilename(FKnownConfigFiles *this,FName param_1)

{
  FName *pFVar1;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FConfigCacheIni::FKnownConfigFiles::GetFilename'::__l2::
           _dynamic_atexit_destructor_for__Empty__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar1 = (FName *)(this + 1);
  while( true ) {
    if ((FName *)this == pFVar1) {
      return &::Empty;
    }
    if (*(FName *)this == param_1) break;
    this = (FKnownConfigFiles *)((longlong)this + 0x628);
  }
  return (FString *)(FName *)((longlong)this + 8);
}

// GetMutableFile @ 1418746c0

FConfigFile * __thiscall
FConfigCacheIni::FKnownConfigFiles::GetMutableFile(FKnownConfigFiles *this,FName param_1)

{
  FConfigFile *pFVar1;
  FConfigFile *pFVar2;
  
  pFVar1 = (FConfigFile *)(this + 1);
  for (; (pFVar2 = (FConfigFile *)0x0, (FConfigFile *)this != pFVar1 &&
         (pFVar2 = (FConfigFile *)this, (FName)((FConfigFile *)this)->_padding_ != param_1));
      this = (FKnownConfigFiles *)
             &(((FConfigFile *)((longlong)this + 0x570))->PerObjectConfigArrayOfStructKeys).
              field_0x28) {
  }
  pFVar1 = (FConfigFile *)&pFVar2[4].PerObjectConfigArrayOfStructKeys.field_0x40;
  if (pFVar2 == (FConfigFile *)0x0) {
    pFVar1 = (FConfigFile *)0x0;
  }
  return pFVar1;
}

