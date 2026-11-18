// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Impl @ 1416a2220

void __cdecl
UE::Trace::Private::FImportantLogScope::
FFieldSet<UE::Trace::TField<1,1,enum_UE::Trace::AnsiString>,enum_UE::Trace::AnsiString>::Impl
          (FImportantLogScope *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  int iVar2;
  uint *puVar3;
  
  if (param_3 < 0) {
    sVar1 = strlen(param_2);
    param_3 = (int)sVar1;
  }
  puVar3 = (uint *)(param_1->Ptr + param_1->AuxCursor);
  *puVar3 = param_3 << 0xd | 0x100;
  *(undefined1 *)puVar3 = 1;
  memcpy(puVar3 + 1,param_2,(longlong)param_3);
  iVar2 = param_1->AuxCursor + param_3;
  param_1->AuxCursor = iVar2 + 4;
  param_1->Ptr[(longlong)iVar2 + 4] = '\x03';
  return;
}

// Impl @ 14194d6c0

void __cdecl
UE::Trace::Private::FImportantLogScope::
FFieldSet<UE::Trace::TField<1,4,enum_UE::Trace::AnsiString>,enum_UE::Trace::AnsiString>::Impl
          (FImportantLogScope *param_1,wchar_t *param_2,int param_3)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  int iVar3;
  ulonglong uVar4;
  uint *puVar5;
  
  if (param_3 < 0) {
    param_3 = 0;
    wVar2 = *param_2;
    pwVar1 = param_2;
    while (wVar2 != L'\0') {
      pwVar1 = pwVar1 + 1;
      param_3 = param_3 + 1;
      wVar2 = *pwVar1;
    }
  }
  puVar5 = (uint *)(param_1->Ptr + param_1->AuxCursor);
  *puVar5 = param_3 << 0xd | 0x100;
  *(undefined1 *)puVar5 = 1;
  puVar5 = puVar5 + 1;
  if (0 < param_3) {
    uVar4 = (ulonglong)(uint)param_3;
    do {
      wVar2 = *param_2;
      param_2 = param_2 + 1;
      *(char *)puVar5 = (char)wVar2;
      puVar5 = (uint *)((longlong)puVar5 + 1);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  iVar3 = param_1->AuxCursor + param_3;
  param_1->AuxCursor = iVar3 + 4;
  param_1->Ptr[(longlong)iVar3 + 4] = '\x03';
  return;
}

