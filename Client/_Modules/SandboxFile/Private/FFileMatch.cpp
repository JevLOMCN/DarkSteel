// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SandboxFile
// Functions: 1

// Visit @ 148b84980

bool __thiscall
`FSandboxPlatformFile::FindFiles'::__l2::FFileMatch::Visit(void *this,wchar_t *param_1,bool param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FString *this_00;
  FScriptContainerElement *pFVar9;
  wchar_t *pwVar10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar4 = false;
  iVar7 = 0;
  if (param_2) {
    if (*(char *)((longlong)this + 0x29) != '\0') {
LAB_148b84b27:
      bVar6 = true;
      goto LAB_148b849bf;
    }
  }
  else {
    bVar4 = false;
    if (*(char *)((longlong)this + 0x28) != '\0') {
      this_00 = ::FString::FString(&local_38,param_1);
      if (*(int *)((longlong)this + 0x20) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)((longlong)this + 0x18);
        iVar7 = *(int *)((longlong)this + 0x20) + -1;
      }
      bVar4 = true;
      bVar6 = ::FString::MatchesWildcard(this_00,pwVar10,iVar7,IgnoreCase);
      if (bVar6) goto LAB_148b84b27;
    }
  }
  bVar6 = false;
LAB_148b849bf:
  if ((bVar4) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    pFVar2 = *(ForAnyElementType **)((longlong)this + 0x10);
    ::FString::FString(&local_48,param_1);
    pFVar8 = (FScriptContainerElement *)FPaths::GetCleanFilename(&local_28,&local_48);
    if (((pFVar2->Data <= pFVar8) &&
        (pFVar8 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar7 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar7 + 1;
    pFVar9 = pFVar2->Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar9 = 0;
    *(undefined8 *)pFVar9 = *(undefined8 *)pFVar8;
    *(undefined8 *)pFVar8 = 0;
    *(undefined4 *)(pFVar9 + 8) = *(undefined4 *)(pFVar8 + 8);
    *(undefined4 *)(pFVar9 + 0xc) = *(undefined4 *)(pFVar8 + 0xc);
    *(undefined8 *)(pFVar8 + 8) = 0;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

