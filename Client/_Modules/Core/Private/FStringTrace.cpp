// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// GetNameRef @ 141995540

TEventRef<unsigned_int> __cdecl FStringTrace::GetNameRef(FName *param_1)

{
  ::FName::TraceName(param_1);
  return (TEventRef<unsigned_int>)param_1;
}

// GetStaticStringRef @ 1419958c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TEventRef<unsigned___int64> * __cdecl
FStringTrace::GetStaticStringRef(TEventRef<unsigned___int64> *__return_storage_ptr__,char *param_1)

{
  longlong lVar1;
  uint uVar2;
  size_t sVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  bool local_28 [8];
  char *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  EnterCriticalSection((LPCRITICAL_SECTION)&GStaticStringTracer);
  local_28[0] = false;
  local_20 = param_1;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
  FindOrAddByHash<unsigned___int64_const_&>
            (&GStaticStringTracer.TracedAnsiStrings,
             (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1,
             (ulong64 *)&stack0xffffffffffffffe0,local_28);
  if (local_28[0] == false) {
    FStringsStaticStringFields::GetUid();
    UE::Trace::Private::FLogScope::Enter<FStringsStaticStringFields>
              ((TLogScope<1> *)&stack0xffffffffffffffe0);
    FStringsStaticStringFields::GetUid();
    *(char **)local_20 = param_1;
    sVar3 = strlen(param_1);
    FStringsStaticStringFields::DisplayAnsi<char_const_*,int>
              ((FStringsStaticStringFields *)&stack0xffffffffffffffe0,param_1,(int)sVar3);
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0x20);
    **(undefined1 **)(lVar1 + 0x20) = 6;
    lVar4 = *(longlong *)(lVar1 + 0x20) + 1;
    *(longlong *)(lVar1 + 0x20) = lVar4;
    if (lVar1 != local_18) {
      *(longlong *)(lVar1 + 0x28) = lVar4;
    }
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  uVar2 = FStringsStaticStringFields::GetUid();
  __return_storage_ptr__->Id = (ulong64)param_1;
  __return_storage_ptr__->RefTypeId = uVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)&GStaticStringTracer);
  return __return_storage_ptr__;
}

// GetStaticStringRef @ 141995a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TEventRef<unsigned___int64> * __cdecl
FStringTrace::GetStaticStringRef
          (TEventRef<unsigned___int64> *__return_storage_ptr__,wchar_t *param_1)

{
  longlong lVar1;
  uint uVar2;
  size_t sVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  bool local_28 [8];
  wchar_t *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  EnterCriticalSection((LPCRITICAL_SECTION)&GStaticStringTracer);
  local_28[0] = false;
  local_20 = param_1;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
  FindOrAddByHash<unsigned___int64_const_&>
            (&GStaticStringTracer.TracedWideStrings,
             (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1,
             (ulong64 *)&stack0xffffffffffffffe0,local_28);
  if (local_28[0] == false) {
    FStringsStaticStringFields::GetUid();
    UE::Trace::Private::FLogScope::Enter<FStringsStaticStringFields>
              ((TLogScope<1> *)&stack0xffffffffffffffe0);
    FStringsStaticStringFields::GetUid();
    *(wchar_t **)local_20 = param_1;
    sVar3 = wcslen(param_1);
    FStringsStaticStringFields::DisplayWide<wchar_t_const_*,int>
              ((FStringsStaticStringFields *)&stack0xffffffffffffffe0,param_1,(int)sVar3);
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0x20);
    **(undefined1 **)(lVar1 + 0x20) = 6;
    lVar4 = *(longlong *)(lVar1 + 0x20) + 1;
    *(longlong *)(lVar1 + 0x20) = lVar4;
    if (lVar1 != local_18) {
      *(longlong *)(lVar1 + 0x28) = lVar4;
    }
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  uVar2 = FStringsStaticStringFields::GetUid();
  __return_storage_ptr__->Id = (ulong64)param_1;
  __return_storage_ptr__->RefTypeId = uVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)&GStaticStringTracer);
  return __return_storage_ptr__;
}

// OnConnection @ 1419a3cf0

void __cdecl FStringTrace::OnConnection(void)

{
  FStaticStringTracer::TraceStringsOnConnection(&GStaticStringTracer);
  ::FName::TraceNamesOnConnection();
  return;
}

