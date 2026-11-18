// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TelemetryUtils
// Functions: 4

// FTelemetryUtils @ 142a38b50

FTelemetryUtils * __thiscall FTelemetryUtils::FTelemetryUtils(FTelemetryUtils *this)

{
  (this->Router).Ptr = (FTelemetryRouter *)0x0;
  this->_padding_ = (longlong)&___7FTelemetryUtils__6B_;
  return this;
}

// ~FTelemetryUtils @ 142a38e50

void __thiscall FTelemetryUtils::~FTelemetryUtils(FTelemetryUtils *this)

{
  this->_padding_ = (longlong)&___7FTelemetryUtils__6B_;
  TDefaultDelete<FTelemetryRouter>::operator()
            ((TDefaultDelete<FTelemetryRouter> *)&this->Router,(this->Router).Ptr);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  return;
}

// ShutdownModule @ 142a39d70

void __thiscall FTelemetryUtils::ShutdownModule(FTelemetryUtils *this)

{
  FTelemetryRouter *pFVar1;
  
  pFVar1 = (this->Router).Ptr;
  if (pFVar1 != (FTelemetryRouter *)0x0) {
    (this->Router).Ptr = (FTelemetryRouter *)0x0;
    TDefaultDelete<FTelemetryRouter>::operator()
              ((TDefaultDelete<FTelemetryRouter> *)&this->Router,pFVar1);
    return;
  }
  return;
}

// StartupModule @ 142a39d90

void __thiscall FTelemetryUtils::StartupModule(FTelemetryUtils *this)

{
  TUniquePtr<FTelemetryRouter,TDefaultDelete<FTelemetryRouter>_> *this_00;
  FTelemetryRouter *pFVar1;
  void *pvVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  FTelemetryRouter *SRWLock;
  TDefaultDelete<FTelemetryRouter> local_18 [16];
  
  SRWLock = ::operator_new(0x58);
  if (SRWLock != (FTelemetryRouter *)0x0) {
    (SRWLock->SinkLock).Mutex.Mutex.Ptr = (PVOID)0x0;
    *(undefined8 *)&(SRWLock->KeyToSinks).field_0x0 = 0;
    *(undefined8 *)&(SRWLock->KeyToSinks).field_0x8 = 0;
    *(undefined8 *)&(SRWLock->KeyToSinks).field_0x20 = 0;
    *(undefined4 *)&(SRWLock->KeyToSinks).field_0x28 = 0;
    *(undefined4 *)&(SRWLock->KeyToSinks).field_0x2c = 0x80;
    *(undefined4 *)&(SRWLock->KeyToSinks).field_0x30 = 0xffffffff;
    *(undefined4 *)&(SRWLock->KeyToSinks).field_0x34 = 0;
    *(undefined8 *)&(SRWLock->KeyToSinks).field_0x40 = 0;
    *(undefined4 *)&(SRWLock->KeyToSinks).field_0x48 = 0;
  }
  this_00 = &this->Router;
  if ((TDefaultDelete<FTelemetryRouter> *)this_00 == local_18) {
    if (SRWLock != (FTelemetryRouter *)0x0) {
      *(undefined4 *)&(SRWLock->KeyToSinks).field_0x48 = 0;
      pvVar2 = *(void **)&(SRWLock->KeyToSinks).field_0x40;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      TSparseArray<TSparseSetElement<TTuple<FGuid,FTelemetryRouter::FSinkSet>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FGuid,FTelemetryRouter::FSinkSet>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FGuid,FTelemetryRouter::FSinkSet>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&SRWLock->KeyToSinks);
      BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      if (BVar4 == '\0') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsLocked()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                           ,0x48,L"Destroying a lock that is still held!");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      }
      ::operator_delete(SRWLock,0x58);
    }
    return;
  }
  pFVar1 = this_00->Ptr;
  this_00->Ptr = SRWLock;
  TDefaultDelete<FTelemetryRouter>::operator()((TDefaultDelete<FTelemetryRouter> *)this_00,pFVar1);
  return;
}

