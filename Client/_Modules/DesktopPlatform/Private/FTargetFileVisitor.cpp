// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DesktopPlatform
// Functions: 1

// Visit @ 142d361b0

/* WARNING: Removing unreachable block (ram,0x000142d362a4) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTargetFileVisitor::Visit(FTargetFileVisitor *this,wchar_t *param_1,FFileStatData *param_2)

{
  int *piVar1;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  wchar_t *pwVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  size_t sVar12;
  FString *pFVar13;
  char cVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  int iVar17;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  wchar_t *local_68;
  int iStack_60;
  wchar_t *local_58;
  int iStack_50;
  FString local_48;
  FString local_38;
  
  iVar8 = 0;
  if (param_2->bIsDirectory) {
    ::FString::FString(&local_b8,param_1);
    pFVar15 = (this->SubDirectories).AllocatorInstance.Data;
    if (((pFVar15 <= (FScriptContainerElement *)&local_b8) &&
        ((FScriptContainerElement *)&local_b8 <
         pFVar15 + (longlong)(this->SubDirectories).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    iVar8 = (this->SubDirectories).ArrayNum;
    piVar1 = &(this->SubDirectories).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->SubDirectories).AllocatorInstance,piVar1);
    }
    (this->SubDirectories).ArrayNum = iVar8 + 1;
    pFVar15 = (this->SubDirectories).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar15 = 0;
    *(FScriptContainerElement **)pFVar15 = local_b8.Data.AllocatorInstance.Data;
    *(int *)(pFVar15 + 8) = local_b8.Data.ArrayNum;
    *(int *)(pFVar15 + 0xc) = local_b8.Data.ArrayMax;
    return true;
  }
  local_58 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar12 = wcslen(param_1);
    iVar8 = (int)sVar12;
  }
  iVar11 = iVar8;
  if (10 < iVar8) {
    iVar11 = 10;
  }
  iVar16 = 0;
  iVar17 = iVar16;
  if (0 < iVar11) {
    iVar17 = iVar11;
  }
  iVar11 = iVar8;
  iStack_50 = iVar8;
  pwVar5 = local_58;
  if ((iVar17 == 10) &&
     (iVar9 = wcsncmp(L".Target.cs",param_1 + ((longlong)iVar8 - (longlong)iVar17),10),
     iVar11 = iStack_50, pwVar5 = local_58, iVar9 == 0)) {
    iVar9 = iVar8;
    if (iVar8 + -10 < iVar8) {
      iVar9 = iVar8 + -10;
    }
    iVar11 = iVar16;
    local_68 = param_1;
    iStack_60 = iVar16;
    pwVar5 = param_1;
    if (0 < iVar9) {
      iVar11 = iVar9;
      iStack_60 = iVar9;
    }
  }
  if (iVar11 == iVar8) {
    iVar11 = iVar8;
    if (8 < iVar8) {
      iVar11 = 8;
    }
    iVar16 = 0;
    if (0 < iVar11) {
      iVar16 = iVar11;
    }
    if ((iVar16 == 8) &&
       (iVar11 = FGenericPlatformStricmp::Strnicmp
                           (L".uplugin",param_1 + ((longlong)iVar8 - (longlong)iVar16),8),
       iVar11 == 0)) {
      this->bSearchSubDirectories = false;
      this->bSearchPluginForTargets = true;
    }
    else {
      iVar16 = 0;
      iVar11 = iVar8;
      if (9 < iVar8) {
        iVar11 = 9;
      }
      iVar9 = iVar16;
      if (0 < iVar11) {
        iVar9 = iVar11;
      }
      if ((iVar9 != 9) ||
         (iVar11 = FGenericPlatformStricmp::Strnicmp
                             (L".Build.cs",param_1 + ((longlong)iVar8 - (longlong)iVar9),9),
         iVar11 != 0)) {
        iVar11 = iVar8;
        if (0x12 < iVar8) {
          iVar11 = 0x12;
        }
        iVar9 = iVar16;
        if (0 < iVar11) {
          iVar9 = iVar11;
        }
        if ((iVar9 != 0x12) ||
           (iVar11 = FGenericPlatformStricmp::Strnicmp
                               (L".automation.csproj",param_1 + ((longlong)iVar8 - (longlong)iVar9),
                                0x12), iVar11 != 0)) {
          iVar11 = iVar8;
          if (0x11 < iVar8) {
            iVar11 = 0x11;
          }
          if (0 < iVar11) {
            iVar16 = iVar11;
          }
          if ((iVar16 != 0x11) ||
             (iVar11 = FGenericPlatformStricmp::Strnicmp
                                 (L".ubtplugin.csproj",
                                  param_1 + ((longlong)iVar8 - (longlong)iVar16),0x11), iVar11 != 0)
             ) {
            if (iVar17 != 10) {
              return true;
            }
            iVar8 = FGenericPlatformStricmp::Strnicmp
                              (L".ubtignore",param_1 + ((longlong)iVar8 - (longlong)iVar17),10);
            if (iVar8 != 0) {
              return true;
            }
          }
        }
      }
      this->bSearchSubDirectories = false;
    }
    return true;
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  pFVar13 = ::FString::ConstructFromPtrSize(&local_38,pwVar5,iVar11);
  if (&local_a8 != pFVar13) {
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    local_a8.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
    (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = (pFVar13->Data).ArrayNum;
    local_a8.Data.ArrayMax = (pFVar13->Data).ArrayMax;
    (pFVar13->Data).ArrayNum = 0;
    (pFVar13->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FPaths::GetCleanFilename(&local_88,&local_a8);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  ::FString::FString(&local_48,L"_");
  bVar6 = ::FString::Split(&local_88,&local_48,&local_98,&local_78);
  if (bVar6) {
    pTVar2 = this->OriginalTargetNames;
    iVar8 = local_98.Data.ArrayNum + -1;
    FVar4.Data = local_98.Data.AllocatorInstance.Data;
    if (local_98.Data.ArrayNum == 0) {
      iVar8 = iVar16;
      FVar4.Data = (FScriptContainerElement *)L"";
    }
    uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar4.Data);
    iVar8 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (pTVar2,uVar10,&local_98);
    if (iVar8 == -1) goto LAB_142d36450;
    bVar6 = true;
  }
  else {
LAB_142d36450:
    bVar6 = false;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    bVar6 = true;
    goto LAB_142d364ff;
  }
  if ((this->MaxDateTime).Ticks <= (param_2->ModificationTime).Ticks) {
    if (4 < (byte)LogDesktopPlatform._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FTargetFileVisitor::Visit(wchar_t_const*___ptr64,FFileStatData_const&___ptr64)___ptr64'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
    }
    this->bCacheInvalid = true;
  }
  pTVar2 = this->RemainingTargetNames;
  if (*(int *)&(pTVar2->Elements).field_0x8 == *(int *)&(pTVar2->Elements).field_0x34) {
LAB_142d364d5:
    if (4 < (byte)LogDesktopPlatform._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_bool___cdecl_FTargetFileVisitor::Visit(wchar_t_const*___ptr64,FFileStatData_const&___ptr64)___ptr64'
                  ::__l36::LOG_Static,(FLogCategoryBase *)&LogDesktopPlatform);
    }
    this->bCacheInvalid = true;
    cVar14 = '\x01';
  }
  else {
    iVar8 = local_88.Data.ArrayNum + -1;
    FVar4.Data = local_88.Data.AllocatorInstance.Data;
    if (local_88.Data.ArrayNum == 0) {
      iVar8 = 0;
      FVar4.Data = (FScriptContainerElement *)L"";
    }
    uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar4.Data);
    iVar8 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
                      (pTVar2,uVar10,&local_88);
    cVar14 = this->bCacheInvalid;
    if (iVar8 != 1) goto LAB_142d364d5;
  }
  bVar6 = cVar14 == '\0';
LAB_142d364ff:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return bVar6;
}

