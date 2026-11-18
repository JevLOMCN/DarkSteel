// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// AddCallstack @ 14198a370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FCallstackTracer::AddCallstack(FCallstackTracer *this,FBacktraceEntry *param_1)

{
  atomic<unsigned_int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<unsigned_int> aVar2;
  ulong64 uVar3;
  FMalloc *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
  aVar9;
  ulong64 *puVar10;
  longlong lVar11;
  int iVar12;
  size_t _Size;
  uint uVar13;
  ulong64 uVar14;
  undefined1 auStack_78 [32];
  atomic<unsigned_int> *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_78;
  aVar9 = (this->KnownSet).HashTable;
  uVar14 = 1;
  if (1 < param_1->Hash) {
    uVar14 = param_1->Hash;
  }
  if (aVar9 != (atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
                )0x0) {
    uVar13 = *(int *)((longlong)aVar9 + 8) - 1;
    uVar8 = (uint)uVar14 & uVar13;
    puVar10 = (ulong64 *)(((ulonglong)uVar8 + 1) * 0x10 + (longlong)aVar9);
    uVar3 = *puVar10;
    while (uVar3 != 0) {
      if (*puVar10 == uVar14) {
        return *(uint *)((longlong)aVar9 + 0x18 + (ulonglong)uVar8 * 0x10);
      }
      uVar8 = uVar8 + 1 & uVar13;
      puVar10 = (ulong64 *)(((ulonglong)uVar8 + 1) * 0x10 + (longlong)aVar9);
      uVar3 = *puVar10;
    }
  }
  LOCK();
  paVar1 = &this->CallstackIdCounter;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<unsigned_int>)0x1) {
    lpCriticalSection = &(this->KnownSet).WriteCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((this->KnownSet).HashTable !=
         (atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
          )0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("HashTable.load(std::memory_order_relaxed) == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\Containers\\GrowOnlyLockFreeHash.h"
                           ,0x51,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return uVar8;
    }
    for (lVar5 = 0x3f; 0xfffffUL >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
    iVar12 = 1 << ((byte)lVar5 & 0x1f);
    pFVar4 = (this->KnownSet).Malloc;
    _Size = (longlong)iVar12 * 0x10;
    aVar9 = (atomic<TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>::FHashHeader_*>
             )(**(code **)((longlong)*pFVar4 + 0x28))(pFVar4,_Size + 0x10,0);
    *(undefined8 *)aVar9 = 0;
    *(int *)((longlong)aVar9 + 8) = iVar12;
    *(undefined4 *)((longlong)aVar9 + 0xc) = 0;
    memset((undefined8 *)((longlong)aVar9 + 0x10),0,_Size);
    (this->KnownSet).HashTable = aVar9;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  TGrowOnlyLockFreeHash<FCallstackTracer::FEncounteredCallstackSetEntry,unsigned___int64,unsigned_int>
  ::Emplace(&this->KnownSet,uVar14,(uint)aVar2,(bool *)0x0);
  if (-1 < CallstackChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMemoryCallstackSpecFields>((TLogScope<1> *)&local_58);
    *local_58 = aVar2;
    UE::Trace::Private::Field_WriteAuxData
              (1,(uchar *)param_1->Frames,(param_1->FrameCount & 0xffff) << 3);
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar5 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = *(longlong *)(lVar5 + 0x20);
    **(undefined1 **)(lVar5 + 0x20) = 6;
    lVar11 = *(longlong *)(lVar5 + 0x20) + 1;
    *(longlong *)(lVar5 + 0x20) = lVar11;
    if (lVar5 != local_50) {
      *(longlong *)(lVar5 + 0x28) = lVar11;
    }
    *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
  }
  return (uint)aVar2;
}

