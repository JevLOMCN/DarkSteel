// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SandboxFile
// Functions: 1

// Visit @ 148b85030

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FSandboxVisitor::Visit(FSandboxVisitor *this,wchar_t *param_1,bool param_2)

{
  FSandboxPlatformFile *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  iVar6 = 0;
  ::FString::FString(&local_88,param_1);
  FVar8.Data = local_88.Data.AllocatorInstance.Data;
  bVar3 = false;
  iVar4 = (this->SandboxFile->InjectedTargetDirectory).Data.ArrayNum;
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  if (iVar5 == 0) {
LAB_148b8522d:
    iVar4 = (this->SandboxFile->SandboxDirectory).Data.ArrayNum;
    if (iVar4 == 0) {
      pwVar9 = L"";
      iVar4 = iVar6;
    }
    else {
      pwVar9 = (wchar_t *)(this->SandboxFile->SandboxDirectory).Data.AllocatorInstance.Data;
      iVar4 = iVar4 + -1;
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar8.Data = local_88.Data.AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Strnicmp((wchar_t *)FVar8.Data,pwVar9,(longlong)iVar4);
    if (iVar4 == 0) {
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar8.Data = local_88.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_48,(wchar_t *)FVar8.Data);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                (&this->VisitedSandboxFiles,(FString *)&stack0x00000008,(bool *)&local_48);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      iVar4 = (this->SandboxFile->SandboxDirectory).Data.ArrayNum;
      iVar5 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar5 = iVar6;
      }
      ::FString::RemoveAt(&local_88,0,iVar5,No);
      bVar3 = ::FString::StartsWith(&local_88,L"Engine/",7,IgnoreCase);
      if (!bVar3) {
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_88.Data.ArrayNum != 0) {
          FVar8.Data = local_88.Data.AllocatorInstance.Data;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"Engine");
        if (iVar4 != 0) {
          pFVar1 = this->SandboxFile;
          if ((pFVar1->GameSandboxDirectoryName).Data.ArrayNum < 2) {
            ::FString::PrintfImpl(&local_68,L"%s/");
            pFVar7 = &pFVar1->GameSandboxDirectoryName;
            if (pFVar7 != &local_68) {
              pFVar2 = (pFVar7->Data).AllocatorInstance.Data;
              if (pFVar2 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar2);
              }
              (pFVar7->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
              (pFVar1->GameSandboxDirectoryName).Data.ArrayNum = local_68.Data.ArrayNum;
              (pFVar1->GameSandboxDirectoryName).Data.ArrayMax = local_68.Data.ArrayMax;
              local_68.Data.ArrayNum = 0;
              local_68.Data.ArrayMax = 0;
              local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
          }
          iVar4 = (pFVar1->GameSandboxDirectoryName).Data.ArrayNum;
          iVar5 = iVar4 + -1;
          if (iVar4 == 0) {
            iVar5 = iVar6;
          }
          ::FString::RemoveAt(&local_88,0,iVar5,No);
          pFVar7 = FSandboxPlatformFile::GetAbsoluteGameDirectory(this->SandboxFile);
          pFVar7 = ::operator/(&local_48,pFVar7,&local_88);
          if (&local_88 != pFVar7) {
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            local_88.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
            (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_88.Data.ArrayNum = (pFVar7->Data).ArrayNum;
            local_88.Data.ArrayMax = (pFVar7->Data).ArrayMax;
            (pFVar7->Data).ArrayNum = 0;
            (pFVar7->Data).ArrayMax = 0;
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          goto LAB_148b853dd;
        }
      }
      pFVar1 = this->SandboxFile;
      iVar4 = local_88.Data.ArrayNum + -1;
      if (local_88.Data.ArrayNum == 0) {
        iVar4 = iVar6;
      }
      if (((pFVar1->AbsoluteRootDirectory).Data.ArrayNum != 0) || (iVar5 = 1, iVar4 + 1 == 0)) {
        iVar5 = iVar6;
      }
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar5 = iVar4 + 1 + iVar5;
      iVar6 = (pFVar1->AbsoluteRootDirectory).Data.ArrayNum;
      pFVar2 = (pFVar1->AbsoluteRootDirectory).Data.AllocatorInstance.Data;
      local_78.Data.ArrayNum = iVar6;
      if ((iVar6 == 0) && (iVar5 == 0)) {
        local_78.Data.ArrayMax = 0;
      }
      else {
        uVar11 = iVar6 + iVar5;
        if ((int)uVar11 < iVar6) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar11,0,(ForAnyElementType *)&local_78,iVar6,&local_78.Data.ArrayMax);
        if (iVar6 != 0) {
          memcpy(local_78.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar6 * 2);
        }
      }
      ::FString::PathAppend(&local_78,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar4);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      local_88.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      local_88.Data.ArrayNum = local_78.Data.ArrayNum;
      local_88.Data.ArrayMax = local_78.Data.ArrayMax;
    }
    else {
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar8.Data = local_88.Data.AllocatorInstance.Data;
      }
      pFVar7 = FSandboxPlatformFile::ConvertToSandboxPath
                         (this->SandboxFile,&local_48,(wchar_t *)FVar8.Data);
      iVar4 = (pFVar7->Data).ArrayNum;
      if (iVar4 == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        iVar6 = iVar4 + -1;
      }
      uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar9);
      iVar6 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>(&this->VisitedSandboxFiles,uVar11,pFVar7);
      if (iVar6 == -1) {
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_88.Data.ArrayNum != 0) {
          FVar8.Data = local_88.Data.AllocatorInstance.Data;
        }
        bVar3 = FSandboxPlatformFile::OkForInnerAccess
                          (this->SandboxFile,(wchar_t *)FVar8.Data,param_2);
        if (!bVar3) goto LAB_148b8552b;
        bVar3 = true;
      }
      else {
LAB_148b8552b:
        bVar3 = false;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (!bVar3) {
        bVar3 = true;
        goto LAB_148b85547;
      }
    }
  }
  else {
    lVar10 = (longlong)local_88.Data.ArrayNum;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = local_88.Data.ArrayNum;
    if (local_88.Data.ArrayNum == 0) {
      local_78.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_88.Data.ArrayNum,
                 &local_78.Data.ArrayMax);
      memcpy(local_78.Data.AllocatorInstance.Data,FVar8.Data,lVar10 * 2);
    }
    FPaths::MakeStandardFilename(&local_78);
    iVar4 = (this->SandboxFile->InjectedSourceDirectoryParent).Data.ArrayNum;
    if (local_78.Data.ArrayNum == iVar4) {
      if (1 < local_78.Data.ArrayNum) {
        iVar4 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_78.Data.AllocatorInstance.Data,
                           (wchar_t *)
                           (this->SandboxFile->InjectedSourceDirectoryParent).Data.AllocatorInstance
                           .Data);
        bVar12 = iVar4 == 0;
        goto LAB_148b85113;
      }
LAB_148b8511a:
      if ((this->SandboxFile->InjectedSourceDirectory).Data.ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(this->SandboxFile->InjectedSourceDirectory).Data.AllocatorInstance.Data
        ;
      }
      IPlatformFile::FDirectoryVisitor::CallShouldVisitAndVisit(this->Visitor,pwVar9,true);
      if (this->bIsRecursive != false) {
        pFVar1 = this->SandboxFile;
        if ((pFVar1->InjectedTargetDirectory).Data.ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pFVar1->InjectedTargetDirectory).Data.AllocatorInstance.Data;
        }
        (**(code **)((longlong)*pFVar1->LowerLevel + 0x1d0))(pFVar1->LowerLevel,pwVar9,this);
      }
    }
    else {
      bVar12 = local_78.Data.ArrayNum + iVar4 == 1;
LAB_148b85113:
      if (bVar12) goto LAB_148b8511a;
    }
    iVar4 = (this->SandboxFile->InjectedTargetDirectory).Data.ArrayNum;
    if (iVar4 == 0) {
      pwVar9 = L"";
      iVar4 = iVar6;
    }
    else {
      pwVar9 = (wchar_t *)(this->SandboxFile->InjectedTargetDirectory).Data.AllocatorInstance.Data;
      iVar4 = iVar4 + -1;
    }
    bVar12 = ::FString::StartsWith(&local_88,pwVar9,iVar4,IgnoreCase);
    if (bVar12) {
      iVar4 = (this->SandboxFile->InjectedTargetDirectory).Data.ArrayNum;
      iVar5 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar5 = iVar6;
      }
      ::FString::RightChop(&local_88,&local_48,iVar5);
      ::FString::ConcatFF(&local_58,&this->SandboxFile->InjectedSourceDirectory,&local_48);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      local_88.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      local_88.Data.ArrayNum = local_58.Data.ArrayNum;
      local_88.Data.ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      bVar3 = true;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (!bVar3) goto LAB_148b8522d;
  }
LAB_148b853dd:
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar8.Data = local_88.Data.AllocatorInstance.Data;
  }
  bVar3 = IPlatformFile::FDirectoryVisitor::CallShouldVisitAndVisit
                    (this->Visitor,(wchar_t *)FVar8.Data,param_2);
LAB_148b85547:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

