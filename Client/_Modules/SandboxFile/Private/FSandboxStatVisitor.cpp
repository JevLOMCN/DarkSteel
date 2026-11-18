// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SandboxFile
// Functions: 1

// Visit @ 148b84b40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FSandboxStatVisitor::Visit(FSandboxStatVisitor *this,wchar_t *param_1,FFileStatData *param_2)

{
  FSandboxPlatformFile *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  FString *pFVar8;
  FString *pFVar9;
  ForAnyElementType FVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FFileStatData local_68;
  
  iVar7 = 0;
  ::FString::FString(&local_a8,param_1);
  FVar10.Data = local_a8.Data.AllocatorInstance.Data;
  bVar3 = false;
  iVar13 = (this->SandboxFile->InjectedTargetDirectory).Data.ArrayNum;
  iVar5 = 0;
  iVar4 = iVar13 + -1;
  if (iVar13 == 0) {
    iVar4 = iVar5;
  }
  iVar13 = 0;
  if (iVar4 == 0) {
LAB_148b84d70:
    iVar5 = (this->SandboxFile->SandboxDirectory).Data.ArrayNum;
    if (iVar5 == 0) {
      pwVar11 = L"";
      iVar5 = iVar13;
    }
    else {
      pwVar11 = (wchar_t *)(this->SandboxFile->SandboxDirectory).Data.AllocatorInstance.Data;
      iVar5 = iVar5 + -1;
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_a8.Data.ArrayNum != 0) {
      FVar10.Data = local_a8.Data.AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Strnicmp((wchar_t *)FVar10.Data,pwVar11,(longlong)iVar5);
    if (iVar5 == 0) {
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_a8.Data.ArrayNum != 0) {
        FVar10.Data = local_a8.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_78,(wchar_t *)FVar10.Data);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                (&this->VisitedSandboxFiles,(FString *)&stack0x00000008,(bool *)&local_78);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      iVar7 = (this->SandboxFile->SandboxDirectory).Data.ArrayNum;
      iVar5 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar5 = iVar13;
      }
      ::FString::RemoveAt(&local_a8,0,iVar5,No);
      bVar3 = ::FString::StartsWith(&local_a8,L"Engine/",7,IgnoreCase);
      pFVar1 = this->SandboxFile;
      if (bVar3) {
        pFVar8 = ::operator/(&local_78,&pFVar1->AbsoluteRootDirectory,&local_a8);
        if (&local_a8 != pFVar8) {
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          local_a8.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
          (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a8.Data.ArrayNum = (pFVar8->Data).ArrayNum;
          local_a8.Data.ArrayMax = (pFVar8->Data).ArrayMax;
          (pFVar8->Data).ArrayNum = 0;
          (pFVar8->Data).ArrayMax = 0;
        }
      }
      else {
        if ((pFVar1->AbsolutePathToGameDirectory).Data.ArrayNum < 2) {
          pFVar8 = FSandboxPlatformFile::GetAbsoluteGameDirectory(pFVar1);
          pFVar9 = FPaths::GetPath(&local_78,pFVar8);
          pFVar8 = &pFVar1->AbsolutePathToGameDirectory;
          if (pFVar8 != pFVar9) {
            pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
            if (pFVar2 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar2);
            }
            (pFVar8->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
            (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar1->AbsolutePathToGameDirectory).Data.ArrayNum = (pFVar9->Data).ArrayNum;
            (pFVar1->AbsolutePathToGameDirectory).Data.ArrayMax = (pFVar9->Data).ArrayMax;
            (pFVar9->Data).ArrayNum = 0;
            (pFVar9->Data).ArrayMax = 0;
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
        pFVar8 = ::operator/(&local_88,&pFVar1->AbsolutePathToGameDirectory,&local_a8);
        local_78.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
        if (&local_a8 != pFVar8) {
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          local_a8.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
          (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a8.Data.ArrayNum = (pFVar8->Data).ArrayNum;
          local_a8.Data.ArrayMax = (pFVar8->Data).ArrayMax;
          (pFVar8->Data).ArrayNum = 0;
          (pFVar8->Data).ArrayMax = 0;
          local_78.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
        }
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    else {
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_a8.Data.ArrayNum != 0) {
        FVar10.Data = local_a8.Data.AllocatorInstance.Data;
      }
      pFVar8 = FSandboxPlatformFile::ConvertToSandboxPath
                         (this->SandboxFile,&local_78,(wchar_t *)FVar10.Data);
      iVar13 = (pFVar8->Data).ArrayNum;
      if (iVar13 == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        iVar7 = iVar13 + -1;
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar11);
      iVar7 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>(&this->VisitedSandboxFiles,uVar6,pFVar8);
      if (iVar7 == -1) {
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_a8.Data.ArrayNum != 0) {
          FVar10.Data = local_a8.Data.AllocatorInstance.Data;
        }
        bVar3 = FSandboxPlatformFile::OkForInnerAccess
                          (this->SandboxFile,(wchar_t *)FVar10.Data,param_2->bIsDirectory);
        if (!bVar3) goto LAB_148b84fc3;
        bVar3 = true;
      }
      else {
LAB_148b84fc3:
        bVar3 = false;
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (!bVar3) {
        bVar3 = true;
        goto LAB_148b84fdd;
      }
    }
  }
  else {
    lVar12 = (longlong)local_a8.Data.ArrayNum;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = local_a8.Data.ArrayNum;
    if (local_a8.Data.ArrayNum == 0) {
      local_98.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)&local_98,local_a8.Data.ArrayNum,
                 &local_98.Data.ArrayMax);
      memcpy(local_98.Data.AllocatorInstance.Data,FVar10.Data,lVar12 * 2);
    }
    FPaths::MakeStandardFilename(&local_98);
    iVar4 = (this->SandboxFile->InjectedSourceDirectoryParent).Data.ArrayNum;
    if (local_98.Data.ArrayNum == iVar4) {
      if (1 < local_98.Data.ArrayNum) {
        iVar4 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_98.Data.AllocatorInstance.Data,
                           (wchar_t *)
                           (this->SandboxFile->InjectedSourceDirectoryParent).Data.AllocatorInstance
                           .Data);
        bVar14 = iVar4 == 0;
        goto LAB_148b84c24;
      }
LAB_148b84c2f:
      pFVar1 = this->SandboxFile;
      if ((pFVar1->InjectedSourceDirectory).Data.ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar1->InjectedSourceDirectory).Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pFVar1->LowerLevel + 0x130))(pFVar1->LowerLevel,&local_68,pwVar11);
      if ((this->SandboxFile->InjectedSourceDirectory).Data.ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)
                  (this->SandboxFile->InjectedSourceDirectory).Data.AllocatorInstance.Data;
      }
      IPlatformFile::FDirectoryStatVisitor::CallShouldVisitAndVisit(this->Visitor,pwVar11,&local_68)
      ;
      if (this->bIsRecursive != false) {
        pFVar1 = this->SandboxFile;
        if ((pFVar1->InjectedTargetDirectory).Data.ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar1->InjectedTargetDirectory).Data.AllocatorInstance.Data;
        }
        (**(code **)((longlong)*pFVar1->LowerLevel + 0x1e0))(pFVar1->LowerLevel,pwVar11,this);
      }
    }
    else {
      bVar14 = local_98.Data.ArrayNum + iVar4 == 1;
LAB_148b84c24:
      if (bVar14) goto LAB_148b84c2f;
    }
    iVar4 = (this->SandboxFile->InjectedTargetDirectory).Data.ArrayNum;
    if (iVar4 == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(this->SandboxFile->InjectedTargetDirectory).Data.AllocatorInstance.Data;
      iVar5 = iVar4 + -1;
    }
    bVar14 = ::FString::StartsWith(&local_a8,pwVar11,iVar5,IgnoreCase);
    if (bVar14) {
      iVar5 = (this->SandboxFile->InjectedTargetDirectory).Data.ArrayNum;
      iVar4 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar4 = iVar13;
      }
      ::FString::RightChop(&local_a8,&local_78,iVar4);
      ::FString::ConcatFF(&local_88,&this->SandboxFile->InjectedSourceDirectory,&local_78);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      local_a8.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      local_a8.Data.ArrayNum = local_88.Data.ArrayNum;
      local_a8.Data.ArrayMax = local_88.Data.ArrayMax;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      bVar3 = true;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (!bVar3) goto LAB_148b84d70;
  }
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar10.Data = local_a8.Data.AllocatorInstance.Data;
  }
  bVar3 = IPlatformFile::FDirectoryStatVisitor::CallShouldVisitAndVisit
                    (this->Visitor,(wchar_t *)FVar10.Data,param_2);
LAB_148b84fdd:
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

