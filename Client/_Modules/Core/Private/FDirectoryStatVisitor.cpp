// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// ~FDirectoryStatVisitor @ 141620ab0

void __thiscall
IPlatformFile::FDirectoryStatVisitor::~FDirectoryStatVisitor(FDirectoryStatVisitor *this)

{
  *this = (FDirectoryStatVisitor)&___7FDirectoryStatVisitor_IPlatformFile__6B_;
  return;
}

// CallShouldVisitAndVisit @ 14162d8b0

bool __thiscall
IPlatformFile::FDirectoryStatVisitor::CallShouldVisitAndVisit
          (FDirectoryStatVisitor *this,wchar_t *param_1,FFileStatData *param_2)

{
  char cVar1;
  undefined1 uVar2;
  size_t sVar3;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_28.Size = 0;
  local_28.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_1);
    local_28.Size = (int)sVar3;
  }
  FPathViews::GetCleanFilename(&local_18,&local_28);
  local_28.Size = local_18.Size;
  local_28._12_4_ = local_18._12_4_;
  cVar1 = (**(code **)((longlong)*this + 8))(this,&local_28);
  if (cVar1 == '\0') {
    return true;
  }
  uVar2 = (**(code **)((longlong)*this + 0x10))(this,param_1,param_2);
  return (bool)uVar2;
}

// ShouldVisitLeafPathname @ 141660320

bool __thiscall
IPlatformFile::FDirectoryStatVisitor::ShouldVisitLeafPathname
          (FDirectoryStatVisitor *this,TStringView<wchar_t> *param_1)

{
  return true;
}

