// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 3

// AllocBuffer @ 142a5fa60

FFileIoStoreBuffer * __thiscall
FFileIoStoreBufferAllocator::AllocBuffer(FFileIoStoreBufferAllocator *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FFileIoStoreBuffer *pFVar1;
  
  lpCriticalSection = &this->BuffersCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = this->FirstFreeBuffer;
  if (pFVar1 == (FFileIoStoreBuffer *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (FFileIoStoreBuffer *)0x0;
  }
  this->FirstFreeBuffer = pFVar1->Next;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  UE::FIoDispatcherFilesystemStats::OnBufferAllocated(&this->Stats->Stats);
  return pFVar1;
}

// FreeBuffer @ 142a71a50

void __thiscall
FFileIoStoreBufferAllocator::FreeBuffer
          (FFileIoStoreBufferAllocator *this,FFileIoStoreBuffer *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (FFileIoStoreBuffer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                       ,0x5e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lpCriticalSection = &this->BuffersCritical;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    param_1->Next = this->FirstFreeBuffer;
    this->FirstFreeBuffer = param_1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    UE::FIoDispatcherFilesystemStats::OnBufferReleased(&this->Stats->Stats);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Initialize @ 142a7c8d0

void __thiscall
FFileIoStoreBufferAllocator::Initialize
          (FFileIoStoreBufferAllocator *this,ulong64 param_1,ulong64 param_2,uint param_3)

{
  FFileIoStoreBuffer *pFVar1;
  uchar *puVar2;
  FFileIoStoreBuffer *pFVar3;
  FFileIoStoreBuffer *pFVar4;
  FFileIoStoreBuffer *pFVar5;
  
  pFVar1 = (FFileIoStoreBuffer *)(param_1 / param_2);
  puVar2 = FMemory::Malloc((longlong)pFVar1 * param_2,param_3);
  this->BufferSize = param_2;
  this->BufferMemory = puVar2;
  pFVar5 = (FFileIoStoreBuffer *)0x0;
  if (pFVar1 != (FFileIoStoreBuffer *)0x0) {
    do {
      pFVar3 = ::operator_new(0x10);
      pFVar4 = (FFileIoStoreBuffer *)0x0;
      if (pFVar3 != (FFileIoStoreBuffer *)0x0) {
        pFVar3->Next = (FFileIoStoreBuffer *)0x0;
        pFVar3->Memory = (uchar *)0x0;
        pFVar4 = pFVar3;
      }
      pFVar4->Memory = this->BufferMemory + (longlong)pFVar5 * this->BufferSize;
      pFVar4->Next = this->FirstFreeBuffer;
      this->FirstFreeBuffer = pFVar4;
      UE::FIoDispatcherFilesystemStats::OnBufferReleased(&this->Stats->Stats);
      pFVar5 = (FFileIoStoreBuffer *)((longlong)&pFVar5->Next + 1);
    } while (pFVar5 < pFVar1);
  }
  return;
}

