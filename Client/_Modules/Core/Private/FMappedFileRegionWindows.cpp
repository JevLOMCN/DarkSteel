// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ~FMappedFileRegionWindows @ 141a9cf60

void __thiscall FMappedFileRegionWindows::~FMappedFileRegionWindows(FMappedFileRegionWindows *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7FMappedFileRegionWindows__6B_;
  UnmapViewOfFile(this->AlignedMappedPtr);
  LOCK();
  paVar1 = &this->Parent->NumOutstandingRegions;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if ((int)aVar2 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("OldNumOutstandingRegions > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformFile.cpp"
                       ,0x447,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IMappedFileRegion::~IMappedFileRegion((IMappedFileRegion *)this);
  return;
}

// PreloadHint @ 141aba0a0

void __thiscall
FMappedFileRegionWindows::PreloadHint(FMappedFileRegionWindows *this,long64 param_1,long64 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  code *pcVar4;
  bool bVar5;
  FGenericPlatformMemoryConstants *pFVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  plVar1 = &this->_padding_;
  if (((this->_padding_ == 0) || (*plVar1 == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MappedPtr && MappedSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                         ,0x19,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_1 < *plVar1) {
    pFVar6 = FWindowsPlatformMemory::GetConstants();
    uVar3 = pFVar6->PageSize;
    if (((this->_padding_ == 0) || (*plVar1 == 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("MappedPtr && MappedSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                           ,0x19,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar7 = *plVar1 - param_1;
    if (lVar7 < param_2) {
      param_2 = lVar7;
    }
    if (((this->_padding_ == 0) || (*plVar1 == 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("MappedPtr && MappedSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                           ,0x19,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = this->_padding_ + param_1;
    uVar2 = uVar8 + param_2;
    for (; uVar8 < uVar2; uVar8 = uVar8 + uVar3) {
    }
  }
  return;
}

