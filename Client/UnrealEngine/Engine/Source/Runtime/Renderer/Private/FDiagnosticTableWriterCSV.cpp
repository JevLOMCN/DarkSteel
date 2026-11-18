// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// AddColumn @ 145755020

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDiagnosticTableWriterCSV::AddColumn(FDiagnosticTableWriterCSV *this,wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 *puVar3;
  FString *pFVar4;
  int iVar5;
  int iVar6;
  undefined1 auStackY_2078 [32];
  FString local_2048;
  FString local_2038;
  wchar_t local_2028 [4096];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14575503c;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2078;
  if (this->OutputStream == (FArchive *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputStream",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\DiagnosticTable.h"
                       ,0x2e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  puVar3 = __local_stdio_printf_options();
  __stdio_common_vswprintf(*puVar3,local_2028,0x1000,param_1);
  iVar6 = (this->CurrentRow).Data.ArrayNum;
  iVar5 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    ::FString::AppendChar(&this->CurrentRow,L',');
  }
  ::FString::FString(&local_2048,local_2028);
  pFVar4 = ::FString::Replace(&local_2048,&local_2038,L"\"",L"\"\"",IgnoreCase);
  if (&local_2048 != pFVar4) {
    if (local_2048.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2048.Data.AllocatorInstance.Data);
    }
    local_2048.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2048.Data.ArrayNum = (pFVar4->Data).ArrayNum;
    local_2048.Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_2038.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2038.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChar(&this->CurrentRow,L'\"');
  iVar6 = local_2048.Data.ArrayNum + -1;
  if (local_2048.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  ::FString::AppendChars(&this->CurrentRow,(wchar_t *)local_2048.Data.AllocatorInstance.Data,iVar6);
  ::FString::AppendChar(&this->CurrentRow,L'\"');
  if (local_2048.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2048.Data.AllocatorInstance.Data);
  }
  return;
}

