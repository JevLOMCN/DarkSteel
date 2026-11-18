// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// Visit @ 142aac410

bool __thiscall
`FPakPlatformFile::FindPakFilesInDirectory'::__l2::FPakSearchVisitor::Visit
          (void *this,wchar_t *param_1,bool param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  IPlatformChunkInstall *pIVar8;
  size_t sVar9;
  FScriptContainerElement *pFVar10;
  wchar_t *pwVar11;
  ForAnyElementType FVar12;
  FString local_78;
  FString local_68;
  FString local_58;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  
  bVar5 = false;
  if (param_2) {
    return true;
  }
  ::FString::FString(&local_78,param_1);
  iVar7 = *(int *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  if (iVar7 == 0) {
    pwVar11 = L"";
    iVar7 = 0;
  }
  else {
    pwVar11 = (wchar_t *)**(undefined8 **)((longlong)this + 0x18);
    iVar7 = iVar7 + -1;
  }
  bVar4 = ::FString::MatchesWildcard(&local_78,pwVar11,iVar7,IgnoreCase);
  if (!bVar4) goto LAB_142aac713;
  pIVar8 = FWindowsPlatformMisc::GetPlatformChunkInstall();
  if (pIVar8 != (IPlatformChunkInstall *)0x0) {
    local_48 = local_78.Data.AllocatorInstance.Data;
    iStack_40 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iStack_40 = 0;
    }
    local_38._12_4_ = uStack_3c;
    local_38.Size = iStack_40;
    local_38.DataPtr = (wchar_t *)local_78.Data.AllocatorInstance.Data;
    iVar7 = FGenericPlatformMisc::GetPakchunkIndexFromPakFile(&local_38);
    if ((iVar7 != -1) && (iVar7 = (**(code **)((longlong)*pIVar8 + 0x18))(pIVar8,iVar7), iVar7 == 1)
       ) goto LAB_142aac713;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
LAB_142aac556:
    bVar4 = false;
  }
  else {
    ::FString::FString(&local_68,"optional");
    if (local_68.Data.ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)local_68.Data.AllocatorInstance.Data;
      if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        bVar5 = true;
        goto LAB_142aac556;
      }
    }
    sVar9 = wcslen(pwVar11);
    iVar7 = ::FString::Find(&local_78,pwVar11,(int)sVar9,IgnoreCase,FromStart,-1);
    bVar5 = true;
    if (iVar7 == -1) goto LAB_142aac556;
    bVar4 = true;
  }
  if ((bVar5) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  bVar5 = false;
  if (bVar4) goto LAB_142aac713;
  if (*(char *)((longlong)this + 0x31) == '\0') {
LAB_142aac5e3:
    bVar4 = false;
  }
  else {
    ::FString::FString(&local_58,"ondemand");
    bVar5 = true;
    FVar12.Data = (FScriptContainerElement *)L"";
    if ((local_58.Data.ArrayNum != 0) &&
       (FVar12.Data = local_58.Data.AllocatorInstance.Data,
       local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)) goto LAB_142aac5e3;
    sVar9 = wcslen((wchar_t *)FVar12.Data);
    iVar7 = ::FString::Find(&local_78,(wchar_t *)FVar12.Data,(int)sVar9,IgnoreCase,FromStart,-1);
    if (iVar7 == -1) goto LAB_142aac5e3;
    bVar4 = true;
  }
  if ((bVar5) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((!bVar4) &&
     ((*(int *)((longlong)this + 0x28) < 2 ||
      (bVar5 = ::FString::MatchesWildcard
                         (&local_78,*(wchar_t **)((longlong)this + 0x20),
                          *(int *)((longlong)this + 0x28) + -1,IgnoreCase), !bVar5)))) {
    pFVar2 = *(ForAnyElementType **)((longlong)this + 0x10);
    if ((pFVar2->Data <= (FScriptContainerElement *)&local_78) &&
       (((FScriptContainerElement *)&local_78 <
         pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10 &&
        (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)))) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iVar7 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar2,piVar1);
    }
    FVar12.Data = local_78.Data.AllocatorInstance.Data;
    *(int *)&pFVar2[1].Data = iVar7 + 1;
    pFVar10 = pFVar2->Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar10 = 0;
    *(int *)(pFVar10 + 8) = local_78.Data.ArrayNum;
    if (local_78.Data.ArrayNum == 0) {
      *(int *)(pFVar10 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)pFVar10,local_78.Data.ArrayNum,
                 (int *)(pFVar10 + 0xc));
      memcpy(*(void **)pFVar10,FVar12.Data,(longlong)local_78.Data.ArrayNum * 2);
    }
  }
LAB_142aac713:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return true;
}

