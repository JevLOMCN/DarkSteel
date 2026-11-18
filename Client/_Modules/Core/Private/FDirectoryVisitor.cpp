// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// ~FDirectoryVisitor @ 141620ad0

void __thiscall IPlatformFile::FDirectoryVisitor::~FDirectoryVisitor(FDirectoryVisitor *this)

{
  this->_padding_ = (longlong)&___7FDirectoryVisitor_IPlatformFile__6B_;
  return;
}

// CallShouldVisitAndVisit @ 14162d950

bool __thiscall
IPlatformFile::FDirectoryVisitor::CallShouldVisitAndVisit
          (FDirectoryVisitor *this,wchar_t *param_1,bool param_2)

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
  cVar1 = (**(code **)(this->_padding_ + 8))(this,&local_28);
  if (cVar1 == '\0') {
    return true;
  }
  uVar2 = (**(code **)(this->_padding_ + 0x10))(this,param_1,param_2);
  return (bool)uVar2;
}

// ShouldVisitLeafPathname @ 141660330

bool __thiscall
IPlatformFile::FDirectoryVisitor::ShouldVisitLeafPathname
          (FDirectoryVisitor *this,TStringView<wchar_t> *param_1)

{
  return true;
}

