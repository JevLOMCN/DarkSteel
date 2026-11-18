// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ~FThreadBuffer @ 14191c7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCpuProfilerTraceInternal::FThreadBuffer::~FThreadBuffer(FThreadBuffer *this)

{
  longlong lVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  this->_padding_ = (longlong)&___7FThreadBuffer_FCpuProfilerTraceInternal__6B_;
  if (this->BufferSize != 0) {
    FlushThreadBuffer(this);
  }
  if (-1 < CpuChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FCpuProfilerEndThreadFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  *(undefined8 *)(lVar1 + 0xb60) = 0;
  *(undefined4 *)&(this->DynamicFNameScopeNamesMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DynamicFNameScopeNamesMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FNameEntryId,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNameEntryId,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNameEntryId,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DynamicFNameScopeNamesMap);
  *(undefined4 *)&(this->DynamicTCharScopeNamesMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DynamicTCharScopeNamesMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<wchar_t_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DynamicTCharScopeNamesMap);
  *(undefined4 *)&(this->DynamicAnsiScopeNamesMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DynamicAnsiScopeNamesMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<char_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<char_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<char_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DynamicAnsiScopeNamesMap);
  if ((GIsCriticalError == false) && ((this->DynamicScopeNamesMemory).NumMarks != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(GIsCriticalError || !NumMarks)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                       ,0x74,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FMemStackBase::FreeChunks(&this->DynamicScopeNamesMemory,(FTaggedMemory *)0x0);
  this->_padding_ = (longlong)&___7FTlsAutoCleanup__6B_;
  return;
}

