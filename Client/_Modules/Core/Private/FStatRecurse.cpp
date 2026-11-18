// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Visit @ 141669580

bool __thiscall
`IPlatformFile::IterateDirectoryStatRecursively'::__l2::FStatRecurse::Visit
          (void *this,wchar_t *param_1,FFileStatData *param_2)

{
  longlong *plVar1;
  char cVar2;
  size_t sVar3;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  plVar1 = *(longlong **)((longlong)this + 0x10);
  local_28.Size = 0;
  local_28.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_1);
    local_28.Size = (int)sVar3;
  }
  FPathViews::GetCleanFilename(&local_18,&local_28);
  local_28.Size = local_18.Size;
  local_28._12_4_ = local_18._12_4_;
  cVar2 = (**(code **)(*plVar1 + 8))(plVar1,&local_28);
  if (cVar2 == '\0') {
    cVar2 = '\x01';
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2);
    if (cVar2 == '\0') {
      return false;
    }
  }
  if (param_2->bIsDirectory) {
    cVar2 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x150))
                      (*(longlong **)((longlong)this + 8),param_1,this);
  }
  return (bool)cVar2;
}

