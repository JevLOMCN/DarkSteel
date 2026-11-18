// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// AppendV @ 14181c520

void __thiscall FErrorHistWriter::AppendV(FErrorHistWriter *this,wchar_t *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong64 *puVar4;
  int iVar5;
  
  iVar1 = this->Index;
  puVar4 = __local_stdio_printf_options();
  iVar2 = __stdio_common_vswprintf
                    (*puVar4,GErrorHist + iVar1,(longlong)(0x4000 - iVar1),param_1,0,param_2);
  iVar1 = this->Index;
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  iVar3 = 0x3fff;
  if (iVar1 < 0x3fff) {
    iVar3 = iVar1;
  }
  iVar5 = iVar2 + iVar1;
  if (iVar2 + iVar1 < iVar3) {
    iVar5 = iVar3;
  }
  this->Index = iVar5;
  return;
}

// Appendf @ 14181c5d0

void __thiscall FErrorHistWriter::Appendf(FErrorHistWriter *this,wchar_t *param_1)

{
  char local_res18 [16];
  
  AppendV(this,param_1,local_res18);
  return;
}

// TerminateWith @ 141833f30

void __thiscall FErrorHistWriter::TerminateWith(FErrorHistWriter *this,wchar_t *param_1)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  
  sVar3 = wcslen(param_1);
  iVar4 = this->Index;
  if (0x3fff < iVar4 + (int)sVar3) {
    iVar4 = 0x3fff - (int)sVar3;
    this->Index = iVar4;
  }
  sVar3 = wcslen(param_1);
  iVar2 = (int)sVar3 + 1;
  iVar1 = 0x4000 - iVar4;
  if (iVar2 < 0x4000 - iVar4) {
    iVar1 = iVar2;
  }
  if (1 < iVar1) {
    wcsncpy(GErrorHist + iVar4,param_1,(longlong)iVar1 - 1);
    *(undefined2 *)(&DAT_154efc0fe + (longlong)iVar1 * 2 + (longlong)iVar4 * 2) = 0;
    this->Index = this->Index + iVar1 + -1;
    iVar4 = this->Index;
  }
  if ((ulonglong)((longlong)iVar4 * 2) < 0x8000) {
    GErrorHist[iVar4] = L'\0';
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_rangecheckfailure();
}

