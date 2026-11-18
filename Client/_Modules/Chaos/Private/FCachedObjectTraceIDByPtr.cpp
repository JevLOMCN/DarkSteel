// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// RemoveCachedTraceObjectID<Chaos::FImplicitObject> @ 1437275d0

void __thiscall
Chaos::VD::FCachedObjectTraceIDByPtr<unsigned_int>::
RemoveCachedTraceObjectID<Chaos::FImplicitObject>
          (FCachedObjectTraceIDByPtr<unsigned_int> *this,FImplicitObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  PSRWLOCK SRWLock;
  FImplicitObject *local_res10 [3];
  
  if (param_1 != (FImplicitObject *)0x0) {
    uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = uVar3 >> 0x10 ^ uVar3;
    SRWLock = (PSRWLOCK)(&(this->CachedIDsByPtr).field_0x0 + (ulonglong)(uVar3 & 0x1f) * 0x58);
    local_res10[0] = param_1;
    if ((SRWLock == (PSRWLOCK)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    AcquireSRWLockExclusive(SRWLock);
    if (*(int *)&SRWLock[2].Ptr != *(int *)((longlong)&SRWLock[7].Ptr + 4)) {
      TSet<TTuple<void_const_*,unsigned_int>,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>,FDefaultSetAllocator>
      ::RemoveImpl<void_const_*>
                ((TSet<TTuple<void_const_*,unsigned_int>,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>,FDefaultSetAllocator>
                  *)(SRWLock + 1),uVar3,local_res10);
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}

// Reset @ 1437a5dc0

void __thiscall
Chaos::VD::FCachedObjectTraceIDByPtr<unsigned_int>::Reset
          (FCachedObjectTraceIDByPtr<unsigned_int> *this)

{
  FCachedObjectTraceIDByPtr<unsigned_int> *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = this + 1;
  while( true ) {
    if (this == pFVar1) {
      return;
    }
    if ((this == (FCachedObjectTraceIDByPtr<unsigned_int> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar3)) break;
    AcquireSRWLockExclusive((PSRWLOCK)this);
    TSet<TTuple<void_const_*,unsigned_int>,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<void_const_*,unsigned_int>,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>,FDefaultSetAllocator>
             *)&(this->CachedIDsByPtr).field_0x8);
    if (this != (FCachedObjectTraceIDByPtr<unsigned_int> *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)this);
    }
    this = (FCachedObjectTraceIDByPtr<unsigned_int> *)&(this->CachedIDsByPtr).field_0x58;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

