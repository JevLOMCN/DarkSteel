// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 1

// Visit @ 141e44bc0

bool __thiscall
`FPluginManager::FindPluginManifestsInDirectory'::__l2::FManifestVisitor::Visit
          (void *this,wchar_t *param_1,bool param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  size_t sVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  FString local_28;
  
  if (param_2) {
    return true;
  }
  iVar8 = 0;
  if (param_1 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_1);
    iVar8 = (int)sVar4;
  }
  iVar3 = iVar8;
  if (0x10 < iVar8) {
    iVar3 = 0x10;
  }
  iVar6 = 0;
  if (0 < iVar3) {
    iVar6 = iVar3;
  }
  if ((iVar6 == 0x10) &&
     (iVar3 = FGenericPlatformStricmp::Strnicmp
                        (L".upluginmanifest",param_1 + ((longlong)iVar8 - (longlong)iVar6),0x10),
     iVar3 == 0)) {
    pFVar2 = *(ForAnyElementType **)((longlong)this + 0x10);
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    iVar3 = *(int *)&pFVar2[1].Data;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar3 + 1;
    pFVar7 = pFVar2->Data + (longlong)iVar3 * 0x10;
    *(undefined8 *)pFVar7 = 0;
    *(undefined8 *)(pFVar7 + 8) = 0;
    pFVar5 = (FScriptContainerElement *)::FString::ConstructFromPtrSize(&local_28,param_1,iVar8);
    if (pFVar7 != pFVar5) {
      if (*(void **)pFVar7 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar7);
      }
      *(undefined8 *)pFVar7 = *(undefined8 *)pFVar5;
      *(undefined8 *)pFVar5 = 0;
      *(undefined4 *)(pFVar7 + 8) = *(undefined4 *)(pFVar5 + 8);
      *(undefined4 *)(pFVar7 + 0xc) = *(undefined4 *)(pFVar5 + 0xc);
      *(undefined8 *)(pFVar5 + 8) = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

