// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 9

// __crt_debugger_hook @ 15015ca48

void __cdecl __crt_debugger_hook(int param_1)

{
  __scrt_debugger_hook_flag = 0;
  return;
}

// __scrt_fastfail @ 15015ca5c

void __cdecl __scrt_fastfail(uint param_1)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 *puVar4;
  undefined8 unaff_retaddr;
  DWORD64 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 auStack_5c8 [8];
  undefined1 auStack_5c0 [232];
  undefined1 local_4d8 [152];
  undefined1 *local_440;
  DWORD64 local_3e0;
  
  puVar4 = auStack_5c8;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar4 = auStack_5c0;
  }
  *(undefined8 *)(puVar4 + -8) = 0x15015ca90;
  __crt_debugger_hook(3);
  *(undefined8 *)(puVar4 + -8) = 0x15015caa1;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x15015caab;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x15015cac5;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x15015cb09;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x15015cb3b;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x15015cb5d;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x15015cb7a;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x15015cb85;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x15015cb96;
    __crt_debugger_hook(3);
  }
  return;
}

// __scrt_get_show_window_mode @ 15015cbb0

ushort __cdecl __scrt_get_show_window_mode(void)

{
  ushort uVar1;
  _STARTUPINFOW local_78;
  
  memset(&local_78,0,0x68);
  GetStartupInfoW(&local_78);
  uVar1 = 10;
  if (((byte)local_78.dwFlags & 1) != 0) {
    uVar1 = local_78.wShowWindow;
  }
  return uVar1;
}

// __scrt_initialize_mta @ 15015cbf0

int __cdecl __scrt_initialize_mta(void)

{
  return 0;
}

// __scrt_initialize_winrt @ 15015cbfc

int __cdecl __scrt_initialize_winrt(void)

{
  return 0;
}

// __scrt_is_managed_app @ 15015cc08

bool __cdecl __scrt_is_managed_app(void)

{
  HMODULE pHVar1;
  longlong lVar2;
  bool bVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 == (HMODULE)0x0) || ((short)pHVar1->unused != 0x5a4d)) ||
      (lVar2 = (longlong)pHVar1[0xf].unused, *(int *)((longlong)&pHVar1->unused + lVar2) != 0x4550))
     || ((*(short *)((longlong)&pHVar1[6].unused + lVar2) != 0x20b ||
         (*(uint *)((longlong)&pHVar1[0x21].unused + lVar2) < 0xf)))) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)((longlong)&pHVar1[0x3e].unused + lVar2) != 0;
  }
  return bVar3;
}

// __scrt_set_unhandled_exception_filter @ 15015cc60

void __cdecl __scrt_set_unhandled_exception_filter(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015cc67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetUnhandledExceptionFilter(__scrt_unhandled_exception_filter);
  return;
}

// __scrt_stub_for_initialize_mta @ 15015cc74

int __cdecl __scrt_stub_for_initialize_mta(void)

{
  return 0;
}

// __scrt_unhandled_exception_filter @ 15015cc80

long __cdecl __scrt_unhandled_exception_filter(_EXCEPTION_POINTERS *param_1)

{
  int iVar1;
  _EXCEPTION_RECORD *p_Var2;
  _CONTEXT *p_Var3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  p_Var2 = param_1->ExceptionRecord;
  if ((p_Var2->ExceptionCode == 0xe06d7363) && (p_Var2->NumberParameters == 4)) {
    iVar1 = (int)p_Var2->ExceptionInformation[0];
    if ((iVar1 == 0x19930520) || ((iVar1 + 0xe66cfadfU < 2 || (iVar1 == 0x1994000)))) {
      plVar4 = (longlong *)__current_exception();
      *plVar4 = (longlong)p_Var2;
      p_Var3 = param_1->ContextRecord;
      puVar5 = (undefined8 *)__current_exception_context();
      *puVar5 = p_Var3;
                    /* WARNING: Subroutine does not return */
      terminate();
    }
  }
  return 0;
}

