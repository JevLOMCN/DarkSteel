// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// WriteLock @ 1440bc750

void __thiscall Chaos::FPhysicsRwLock::WriteLock(FPhysicsRwLock *this)

{
  LPVOID pvVar1;
  uint *puVar2;
  FTlsAutoCleanup *pFVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  Insights::BeginLockAcquireEvent(RWLockWriteLock);
  pvVar1 = TlsGetValue(this->TlsSlot);
  uVar4 = (int)((ulonglong)pvVar1 >> 0x20) + 1;
  TlsSetValue(this->TlsSlot,(LPVOID)((ulonglong)uVar4 << 0x20 | (ulonglong)pvVar1 & 0xffffffff));
  if (uVar4 + (int)pvVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)this);
  }
  puVar2 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar3 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar2);
  *(int *)&pFVar3[2].field_0x4 = *(int *)&pFVar3[2].field_0x4 + 1;
  Insights::AcquiredLock();
  return;
}

// WriteUnlock @ 1440bc810

void __thiscall Chaos::FPhysicsRwLock::WriteUnlock(FPhysicsRwLock *this)

{
  code *pcVar1;
  bool bVar2;
  LPVOID pvVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  pvVar3 = TlsGetValue(this->TlsSlot);
  uVar6 = (int)((ulonglong)pvVar3 >> 0x20) - 1;
  TlsSetValue(this->TlsSlot,(LPVOID)((ulonglong)uVar6 << 0x20 | (ulonglong)pvVar3 & 0xffffffff));
  if (uVar6 + (int)pvVar3 == 0) {
    ReleaseSRWLockExclusive((PSRWLOCK)this);
  }
  puVar4 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar4);
  if (*(int *)&pFVar5[2].field_0x4 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GameThreadContext > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,200,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(int *)&pFVar5[2].field_0x4 = *(int *)&pFVar5[2].field_0x4 + -1;
  Insights::EndLockAcquireEvent();
  return;
}

// ReadLock @ 1440ee280

void __thiscall Chaos::FPhysicsRwLock::ReadLock(FPhysicsRwLock *this)

{
  LPVOID pvVar1;
  uint *puVar2;
  FTlsAutoCleanup *pFVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  Insights::BeginLockAcquireEvent(RWLockReadLock);
  pvVar1 = TlsGetValue(this->TlsSlot);
  uVar4 = (int)pvVar1 + 1;
  TlsSetValue(this->TlsSlot,(LPVOID)((ulonglong)pvVar1 & 0xffffffff00000000 | (ulonglong)uVar4));
  if (uVar4 + (int)((ulonglong)pvVar1 >> 0x20) == 1) {
    AcquireSRWLockShared((PSRWLOCK)this);
  }
  puVar2 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar3 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar2);
  *(int *)&pFVar3[2].field_0x4 = *(int *)&pFVar3[2].field_0x4 + 1;
  Insights::AcquiredLock();
  return;
}

// ReadUnlock @ 1440ee320

void __thiscall Chaos::FPhysicsRwLock::ReadUnlock(FPhysicsRwLock *this)

{
  code *pcVar1;
  bool bVar2;
  LPVOID pvVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  pvVar3 = TlsGetValue(this->TlsSlot);
  uVar6 = (int)pvVar3 - 1;
  TlsSetValue(this->TlsSlot,(LPVOID)((ulonglong)pvVar3 & 0xffffffff00000000 | (ulonglong)uVar6));
  if (uVar6 + (int)((ulonglong)pvVar3 >> 0x20) == 0) {
    ReleaseSRWLockShared((PSRWLOCK)this);
  }
  puVar4 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar4);
  if (*(int *)&pFVar5[2].field_0x4 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GameThreadContext > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,200,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(int *)&pFVar5[2].field_0x4 = *(int *)&pFVar5[2].field_0x4 + -1;
  Insights::EndLockAcquireEvent();
  return;
}

