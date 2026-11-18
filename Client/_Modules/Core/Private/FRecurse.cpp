// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Visit @ 141669410

bool __thiscall
`IPlatformFile::DeleteDirectoryRecursively'::__l2::FRecurse::Visit
          (void *this,wchar_t *param_1,bool param_2)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  
  lVar1 = **(longlong **)((longlong)this + 0x10);
  if (param_2) {
    (**(code **)(lVar1 + 0x140))(*(longlong **)((longlong)this + 0x10),param_1,this);
    cVar2 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x128))
                      (*(longlong **)((longlong)this + 0x10),param_1);
  }
  else {
    cVar2 = (**(code **)(lVar1 + 0x88))();
    if (cVar2 != '\0') {
      return true;
    }
    (**(code **)(**(longlong **)((longlong)this + 0x10) + 0xa8))
              (*(longlong **)((longlong)this + 0x10),param_1,0);
    cVar2 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x88))
                      (*(longlong **)((longlong)this + 0x10),param_1);
  }
  if ((cVar2 == '\0') && (*(int *)((longlong)this + 0x18) == 0)) {
    DVar3 = FWindowsPlatformMisc::GetLastError();
    *(DWORD *)((longlong)this + 0x18) = DVar3;
  }
  return true;
}

// Visit @ 1416694a0

bool __thiscall
`IPlatformFile::IterateDirectoryRecursively'::__l2::FRecurse::Visit
          (void *this,wchar_t *param_1,bool param_2)

{
  int *piVar1;
  longlong *plVar2;
  ForAnyElementType *pFVar3;
  char cVar4;
  int iVar5;
  size_t sVar6;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  plVar2 = *(longlong **)((longlong)this + 0x10);
  local_28.Size = 0;
  local_28.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_1);
    local_28.Size = (int)sVar6;
  }
  FPathViews::GetCleanFilename(&local_18,&local_28);
  local_28.Size = local_18.Size;
  local_28._12_4_ = local_18._12_4_;
  cVar4 = (**(code **)(*plVar2 + 8))(plVar2,&local_28);
  if (cVar4 == '\0') {
    cVar4 = '\x01';
  }
  else {
    cVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_1,param_2);
    if (cVar4 == '\0') {
      return false;
    }
  }
  if (param_2) {
    pFVar3 = *(ForAnyElementType **)((longlong)this + 0x18);
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    iVar5 = *(int *)&pFVar3[1].Data;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar5 + 1;
    ::FString::FString((FString *)(pFVar3->Data + (longlong)iVar5 * 0x10),param_1);
  }
  return (bool)cVar4;
}

