// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 7

// __raise_securityfailure @ 15015bbd0

void __cdecl __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)param_1);
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x00015015bbfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000409);
  return;
}

// __report_gsfailure @ 15015bc0c

void __cdecl __report_gsfailure(ulong64 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x15015bc37;
  capture_previous_context(&GS_ContextRecord);
  GS_ExceptionRecord.ExceptionAddress = *(void **)(puVar3 + 0x38);
  GS_ContextRecord.Rsp = (ulong64)(puVar3 + 0x40);
  GS_ContextRecord.Rcx = *(ulong64 *)(puVar3 + 0x40);
  GS_ExceptionRecord.ExceptionCode = 0xc0000409;
  GS_ExceptionRecord.ExceptionFlags = 1;
  GS_ExceptionRecord.NumberParameters = 1;
  GS_ExceptionRecord.ExceptionInformation[0] = 2;
  *(ulong64 *)(puVar3 + 0x20) = __security_cookie.value;
  *(ulong64 *)(puVar3 + 0x28) = __security_cookie_complement;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar3 + -8) = &UNK_15015bcd9;
  GS_ContextRecord.Rip = (ulong64)GS_ExceptionRecord.ExceptionAddress;
  __raise_securityfailure(&GS_ExceptionPointers);
}

// __report_rangecheckfailure @ 15015bce8

void __cdecl __report_rangecheckfailure(void)

{
                    /* WARNING: Subroutine does not return */
  __report_securityfailure(8);
}

// __report_securityfailure @ 15015bd04

void __cdecl __report_securityfailure(ulong param_1)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x15015bd2f;
  capture_current_context(&GS_ContextRecord);
  GS_ExceptionRecord.ExceptionAddress = *(void **)(puVar3 + 0x28);
  GS_ContextRecord.Rsp = (ulong64)(puVar3 + 0x30);
  GS_ExceptionRecord.ExceptionCode = 0xc0000409;
  GS_ExceptionRecord.ExceptionFlags = 1;
  GS_ExceptionRecord.NumberParameters = 1;
  GS_ExceptionRecord.ExceptionInformation[0] = (ulong64)*(uint *)(puVar3 + 0x30);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar3 + -8) = &UNK_15015bd9b;
  GS_ContextRecord.Rip = (ulong64)GS_ExceptionRecord.ExceptionAddress;
  __raise_securityfailure(&GS_ExceptionPointers);
}

// __report_securityfailureEx @ 15015bda8

void __cdecl __report_securityfailureEx(ulong param_1,ulong param_2,void **param_3)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x15015bddc;
  capture_current_context(&GS_ContextRecord);
  GS_ExceptionRecord.ExceptionAddress = *(void **)(puVar3 + 0x38);
  GS_ContextRecord.Rsp = (ulong64)(puVar3 + 0x40);
  GS_ExceptionRecord.ExceptionCode = 0xc0000409;
  GS_ExceptionRecord.ExceptionFlags = 1;
  if ((*(int *)(puVar3 + 0x48) != 0) && (*(longlong *)(puVar3 + 0x50) == 0)) {
    *(undefined4 *)(puVar3 + 0x48) = 0;
  }
  if (0xe < *(uint *)(puVar3 + 0x48)) {
    *(int *)(puVar3 + 0x48) = *(int *)(puVar3 + 0x48) + -1;
  }
  GS_ExceptionRecord.NumberParameters = *(int *)(puVar3 + 0x48) + 1;
  GS_ExceptionRecord.ExceptionInformation[0] = (ulong64)*(uint *)(puVar3 + 0x40);
  *(undefined4 *)(puVar3 + 0x20) = 0;
  GS_ContextRecord.Rip = (ulong64)GS_ExceptionRecord.ExceptionAddress;
  while (*(uint *)(puVar3 + 0x20) < *(uint *)(puVar3 + 0x48)) {
    GS_ExceptionRecord.ExceptionInformation[*(int *)(puVar3 + 0x20) + 1] =
         *(ulong64 *)(*(longlong *)(puVar3 + 0x50) + (ulonglong)*(uint *)(puVar3 + 0x20) * 8);
    *(int *)(puVar3 + 0x20) = *(int *)(puVar3 + 0x20) + 1;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar3 + -8) = &UNK_15015beb2;
  __raise_securityfailure(&GS_ExceptionPointers);
}

// capture_current_context @ 15015bec0

void __cdecl capture_current_context(_CONTEXT *param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18;
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,(PCONTEXT)param_1,&local_res18,
                     &local_res10,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  return;
}

// capture_previous_context @ 15015bf38

void __cdecl capture_previous_context(_CONTEXT *param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  int iVar1;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18 [2];
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  iVar1 = 0;
  do {
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return;
    }
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,(PCONTEXT)param_1,local_res18,&local_res10
                     ,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}

