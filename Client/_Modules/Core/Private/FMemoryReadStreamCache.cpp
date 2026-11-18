// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// ~FMemoryReadStreamCache @ 141589db0

void __thiscall FMemoryReadStreamCache::~FMemoryReadStreamCache(FMemoryReadStreamCache *this)

{
  code *pcVar1;
  bool bVar2;
  FFileCache *this_00;
  int iVar3;
  StrongBlockIdentifier<CacheSlotStrongType> *pSVar4;
  
  this->_padding_ = (longlong)&___7FMemoryReadStreamCache__6B_;
  this_00 = GetCache();
  if (this_00 == (FFileCache *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  iVar3 = 0;
  if (0 < this->NumCacheSlots) {
    pSVar4 = this->CacheSlots;
    do {
      if ((pSVar4->Id == -1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("SlotID.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                             ,0x289,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FFileCache::UnlockSlot
                (this_00,(StrongBlockIdentifier<CacheSlotStrongType>)this->CacheSlots[iVar3].Id);
      iVar3 = iVar3 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar3 < this->NumCacheSlots);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  this->_padding_ = (longlong)&___7IMemoryReadStream__6B_;
  return;
}

// GetSize @ 1415c7cb0

long64 __thiscall FMemoryReadStreamCache::GetSize(FMemoryReadStreamCache *this)

{
  return this->Size;
}

// Read @ 1415da170

void * __thiscall
FMemoryReadStreamCache::Read
          (FMemoryReadStreamCache *this,long64 *param_1,long64 param_2,long64 param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FFileCache *this_00;
  void *pvVar4;
  uchar *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  this_00 = GetCache();
  lVar7 = this->InitialSlotOffset + param_2;
  lVar6 = (longlong)GFileCacheBlockSizeKB * 0x400;
  iVar3 = (int)(lVar7 / lVar6);
  if ((iVar3 < 0) || (this->NumCacheSlots <= iVar3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotIndex >= 0 && SlotIndex < NumCacheSlots",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\FileCache\\FileCache.cpp"
                       ,0x276,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  puVar5 = FFileCache::GetSlotMemory
                     (this_00,(StrongBlockIdentifier<CacheSlotStrongType>)this->CacheSlots[iVar3].Id
                     );
  lVar7 = (longlong)((int)lVar7 - (int)lVar6 * iVar3);
  lVar6 = lVar6 - lVar7;
  if (param_3 < lVar6) {
    lVar6 = param_3;
  }
  *param_1 = lVar6;
  return puVar5 + lVar7;
}

