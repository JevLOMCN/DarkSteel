// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Visit @ 141669130

bool __thiscall
`IPlatformFile::CopyDirectoryTree'::__l2::FCopyFilesAndDirs::Visit
          (void *this,wchar_t *param_1,bool param_2)

{
  longlong *plVar1;
  char cVar2;
  FString *pFVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,param_1);
  uVar6 = 0;
  pFVar3 = ::FString::Replace(&local_28,&local_18,*(wchar_t **)((longlong)this + 0x18),
                              *(wchar_t **)((longlong)this + 0x20),IgnoreCase);
  if (&local_28 != pFVar3) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_28.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = (pFVar3->Data).ArrayNum;
    local_28.Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  plVar1 = *(longlong **)((longlong)this + 0x10);
  if (param_2) {
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar4.Data = local_28.Data.AllocatorInstance.Data;
    }
    cVar2 = (**(code **)(*plVar1 + 0x200))(plVar1,FVar4.Data);
    if (cVar2 == '\0') {
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar4.Data = local_28.Data.AllocatorInstance.Data;
      }
      cVar2 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x118))
                        (*(longlong **)((longlong)this + 0x10),FVar4.Data);
      goto joined_r0x000141669293;
    }
  }
  else {
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar4.Data = local_28.Data.AllocatorInstance.Data;
    }
    cVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,FVar4.Data);
    if ((cVar2 != '\0') && (*(char *)((longlong)this + 0x28) != '\0')) {
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar4.Data = local_28.Data.AllocatorInstance.Data;
      }
      (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x88))
                (*(longlong **)((longlong)this + 0x10),FVar4.Data);
    }
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar4.Data = local_28.Data.AllocatorInstance.Data;
    }
    cVar2 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x208))
                      (*(longlong **)((longlong)this + 0x10),FVar4.Data,param_1,0,uVar6 & 0xffffff00
                      );
joined_r0x000141669293:
    if (cVar2 == '\0') {
      bVar5 = false;
      goto LAB_141669211;
    }
  }
  bVar5 = true;
LAB_141669211:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

