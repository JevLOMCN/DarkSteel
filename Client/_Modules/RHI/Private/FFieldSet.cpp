// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Impl @ 145c5d2c0

void __cdecl
UE::Trace::Private::FImportantLogScope::
FFieldSet<UE::Trace::TField<1,4,enum_UE::Trace::WideString>,enum_UE::Trace::WideString>::Impl
          (FImportantLogScope *param_1,wchar_t *param_2,int param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  uint *puVar4;
  
  if (param_3 < 0) {
    param_3 = 0;
    wVar1 = *param_2;
    pwVar2 = param_2;
    while (wVar1 != L'\0') {
      pwVar2 = pwVar2 + 1;
      param_3 = param_3 + 1;
      wVar1 = *pwVar2;
    }
  }
  puVar4 = (uint *)(param_1->Ptr + param_1->AuxCursor);
  *puVar4 = param_3 << 0xe | 0x100;
  *(undefined1 *)puVar4 = 1;
  memcpy(puVar4 + 1,param_2,(ulonglong)(uint)(param_3 * 2));
  iVar3 = param_1->AuxCursor + param_3 * 2;
  param_1->AuxCursor = iVar3 + 4;
  param_1->Ptr[(longlong)iVar3 + 4] = '\x03';
  return;
}

