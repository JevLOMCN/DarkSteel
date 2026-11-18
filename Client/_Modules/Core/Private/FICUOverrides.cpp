// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// Free @ 1416f08b0

void __cdecl _anon_134951D2::FICUOverrides::Free(void *param_1,void *param_2)

{
  ulong64 uVar1;
  
  uVar1 = FMemory::GetAllocSize(param_2);
  ::FICUOverrides::BytesInUseCount = ::FICUOverrides::BytesInUseCount - uVar1;
  if ((FThreadStats::TlsSlot != 0xffffffff) &&
     (::FICUOverrides::CachedBytesInUseCount != ::FICUOverrides::BytesInUseCount)) {
    ::FICUOverrides::CachedBytesInUseCount = ::FICUOverrides::BytesInUseCount;
  }
  FMemory::Free(param_2);
  return;
}

// Malloc @ 1417043a0

void * __cdecl _anon_134951D2::FICUOverrides::Malloc(void *param_1,ulong64 param_2)

{
  void *pvVar1;
  ulong64 uVar2;
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < `FICUOverrides::Malloc'::`2'::_TSS0) {
    _Init_thread_header(&`FICUOverrides::Malloc'::`2'::_TSS0);
    if (`FICUOverrides::Malloc'::`2'::_TSS0 == -1) {
      ::FName::FName(&`FICUOverrides::Malloc'::`2'::LLMScope_Name57,L"Localization/ICU");
      _Init_thread_footer(&`FICUOverrides::Malloc'::`2'::_TSS0);
    }
  }
  FLLMScope::FLLMScope
            (local_res18,`FICUOverrides::Malloc'::`2'::LLMScope_Name57,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&`FICUOverrides::Malloc'::`2'::LLMScope_Name57,true);
  pvVar1 = FMemory::Malloc(param_2,0);
  uVar2 = FMemory::GetAllocSize(pvVar1);
  ::FICUOverrides::BytesInUseCount = ::FICUOverrides::BytesInUseCount + uVar2;
  if ((FThreadStats::TlsSlot != 0xffffffff) &&
     (::FICUOverrides::CachedBytesInUseCount != ::FICUOverrides::BytesInUseCount)) {
    ::FICUOverrides::CachedBytesInUseCount = ::FICUOverrides::BytesInUseCount;
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res18);
  return pvVar1;
}

// Realloc @ 141708a70

void * __cdecl _anon_134951D2::FICUOverrides::Realloc(void *param_1,void *param_2,ulong64 param_3)

{
  void *pvVar1;
  FLLMScope local_res20 [2];
  FMemScope local_18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < `FICUOverrides::Realloc'::`2'::_TSS0) {
    _Init_thread_header(&`FICUOverrides::Realloc'::`2'::_TSS0);
    if (`FICUOverrides::Realloc'::`2'::_TSS0 == -1) {
      ::FName::FName(&`FICUOverrides::Realloc'::`2'::LLMScope_Name78,L"Localization/ICU");
      _Init_thread_footer(&`FICUOverrides::Realloc'::`2'::_TSS0);
    }
  }
  FLLMScope::FLLMScope
            (local_res20,`FICUOverrides::Realloc'::`2'::LLMScope_Name78,false,None,Default,true);
  FMemScope::FMemScope(local_18,&`FICUOverrides::Realloc'::`2'::LLMScope_Name78,true);
  pvVar1 = FMemory::Realloc(param_2,param_3,0);
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res20);
  return pvVar1;
}

