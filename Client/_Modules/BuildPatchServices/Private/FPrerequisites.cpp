// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// FPrerequisites @ 143282f20

FPrerequisites * __thiscall
BuildPatchServices::FPrerequisites::FPrerequisites
          (FPrerequisites *this,IMachineConfig *param_1,IInstallerAnalytics *param_2,
          IInstallerError *param_3,IFileSystem *param_4,IPlatform *param_5)

{
  this->MachineConfig = param_1;
  this->_padding_ = (longlong)&___7FPrerequisites_BuildPatchServices__6B_;
  this->FileSystem = param_4;
  this->Platform = param_5;
  this->InstallerAnalytics = param_2;
  this->InstallerError = param_3;
  return this;
}

// RunPrereqs @ 1432eb6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FPrerequisites::RunPrereqs
          (FPrerequisites *this,IBuildManifestSet *param_1,FBuildInstallerConfiguration *param_2,
          FString *param_3,FBuildPatchProgress *param_4)

{
  FScriptContainerElement *pFVar1;
  IInstallerAnalytics *pIVar2;
  code *pcVar3;
  IInstallerError *pIVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar9;
  FString *pFVar10;
  FText *pFVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  ForAnyElementType FVar14;
  FPreReqInfo *pFVar15;
  longlong lVar16;
  FPreReqInfo *this_00;
  undefined1 auStackY_2c8 [32];
  int local_288 [2];
  FString local_280;
  uint local_270 [2];
  FString local_268;
  undefined1 local_258 [8];
  FString local_250;
  FPreReqInfo *local_240;
  FPreReqInfo *local_238;
  undefined8 local_230;
  FString local_228;
  FString local_218;
  FString local_208;
  FBuildInstallerConfiguration *local_1f8;
  FString local_1f0;
  undefined1 local_1e0 [4];
  undefined1 local_1dc [4];
  undefined1 local_1d8 [8];
  FString *local_1d0;
  FBuildPatchProgress *local_1c8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1c0;
  ITextData *local_1b0;
  uint local_1a8;
  FString local_1a0;
  ITextData *local_190;
  uint local_188;
  FString local_180;
  ITextData *local_170;
  uint local_168;
  FString local_160;
  FString local_150;
  undefined1 local_140 [8];
  undefined1 local_138 [8];
  FString local_130;
  FString local_120;
  FString local_110;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_f8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_1c8 = param_4;
  local_288[0] = 0;
  local_270[0] = 9;
  local_1f8 = param_2;
  local_1d0 = param_3;
  (**(code **)(param_4->_padding_ + 0x18))(param_4,local_270,local_288);
  local_238 = (FPreReqInfo *)0x0;
  bVar5 = true;
  local_230 = 0;
  (**(code **)((longlong)*param_1 + 0x88))(param_1,&local_238);
  uVar12 = (ulonglong)(int)(uint)local_230;
  local_270[0] = (uint)local_230;
  local_240 = local_238 + uVar12;
  pFVar15 = local_240;
  this_00 = local_238;
  do {
    while( true ) {
      if ((uint)local_230 != (int)uVar12) {
        `TCheckedPointerIterator<BuildPatchServices::FPreReqInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_258);
      }
      if (this_00 == pFVar15) {
        if (bVar5 != false) {
          local_270[0] = 0x3f800000;
          local_288[0] = 9;
          (**(code **)(local_1c8->_padding_ + 0x18))(local_1c8,local_288,local_270);
        }
        DestructItems<BuildPatchServices::FPreReqInfo,int>(local_238,(uint)local_230);
        if (local_238 != (FPreReqInfo *)0x0) {
          FMemory::Free(local_238);
        }
        return bVar5;
      }
      iVar8 = (this_00->Path).Data.ArrayNum;
      if (1 < iVar8) break;
      if ((byte)LogPrerequisites._0_1_ < 5) {
LAB_1432ec074:
        uVar12 = (ulonglong)local_270[0];
        this_00 = this_00 + 1;
      }
      else {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPrerequisites);
        uVar12 = (ulonglong)local_270[0];
        this_00 = this_00 + 1;
      }
    }
    pFVar1 = (this_00->Path).Data.AllocatorInstance.Data;
    local_280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_280.Data.ArrayNum = iVar8;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar8,0,(ForAnyElementType *)&local_280,iVar8,&local_280.Data.ArrayMax);
    memcpy(local_280.Data.AllocatorInstance.Data,pFVar1,(longlong)iVar8 * 2);
    local_268.Data.ArrayNum = (param_2->InstallDirectory).Data.ArrayNum;
    lVar16 = (longlong)local_268.Data.ArrayNum;
    if (local_268.Data.ArrayNum == 0) {
      local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,2,0,(ForAnyElementType *)&local_268,0,&local_268.Data.ArrayMax);
    }
    else {
      pFVar1 = (param_2->InstallDirectory).Data.AllocatorInstance.Data;
      uVar7 = local_268.Data.ArrayNum + 1;
      local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if ((int)uVar7 < local_268.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,0,(ForAnyElementType *)&local_268,local_268.Data.ArrayNum,
                 &local_268.Data.ArrayMax);
      memcpy(local_268.Data.AllocatorInstance.Data,pFVar1,lVar16 * 2);
    }
    ::FString::PathAppend(&local_268,L"",0);
    local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_250.Data.ArrayNum = (local_1d0->Data).ArrayNum;
    lVar16 = (longlong)local_250.Data.ArrayNum;
    if (local_250.Data.ArrayNum == 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,2,0,(ForAnyElementType *)&local_250,0,&local_250.Data.ArrayMax);
    }
    else {
      pFVar1 = (local_1d0->Data).AllocatorInstance.Data;
      uVar7 = local_250.Data.ArrayNum + 1;
      if ((int)uVar7 < local_250.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,0,(ForAnyElementType *)&local_250,local_250.Data.ArrayNum,
                 &local_250.Data.ArrayMax);
      memcpy(local_250.Data.AllocatorInstance.Data,pFVar1,lVar16 * 2);
    }
    ::FString::PathAppend(&local_250,L"",0);
    pTVar9 = &FPaths::ProjectLogDir(&local_130)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_1c0,pTVar9,2 - (uint)(pTVar9->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_1c0,L"",0);
    FPaths::ConvertRelativePathToFull(&local_1f0,(FString *)&local_1c0);
    if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.AllocatorInstance.Data);
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    (**(code **)((longlong)*this->MachineConfig + 8))(this->MachineConfig,&local_f8);
    if ((this_00->bIsRepair != false) ||
       (*(int *)&(this_00->IdSet).Elements.field_0x8 - *(int *)&(this_00->IdSet).Elements.field_0x34
        < 1)) {
LAB_1432ebb09:
      if (param_2->InstallMode == StageFiles) {
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_250.Data.ArrayNum != 0) {
          FVar13.Data = local_250.Data.AllocatorInstance.Data;
        }
        iVar8 = ::FString::ReplaceInline
                          (&local_280,RootDirectoryVariable,(wchar_t *)FVar13.Data,IgnoreCase);
        if (iVar8 == 0) {
          ::FString::ConcatFF(&local_218,&local_250,&this_00->Path);
          if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_280.Data.AllocatorInstance.Data);
          }
          local_280.Data.AllocatorInstance.Data = local_218.Data.AllocatorInstance.Data;
          local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_280.Data.ArrayNum = local_218.Data.ArrayNum;
          local_280.Data.ArrayMax = local_218.Data.ArrayMax;
          local_218.Data.ArrayNum = 0;
          local_218.Data.ArrayMax = 0;
        }
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_280.Data.ArrayNum != 0) {
          FVar13.Data = local_280.Data.AllocatorInstance.Data;
        }
        cVar6 = (**(code **)((longlong)*this->FileSystem + 0x18))
                          (this->FileSystem,FVar13.Data,local_140);
        if (cVar6 == '\0') goto LAB_1432ebbb9;
      }
      else {
LAB_1432ebbb9:
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_268.Data.ArrayNum != 0) {
          FVar13.Data = local_268.Data.AllocatorInstance.Data;
        }
        iVar8 = ::FString::ReplaceInline
                          (&local_280,RootDirectoryVariable,(wchar_t *)FVar13.Data,IgnoreCase);
        if (iVar8 == 0) {
          ::FString::ConcatFF(&local_208,&local_268,&this_00->Path);
          if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_280.Data.AllocatorInstance.Data);
          }
          local_280.Data.AllocatorInstance.Data = local_208.Data.AllocatorInstance.Data;
          local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_280.Data.ArrayNum = local_208.Data.ArrayNum;
          local_280.Data.ArrayMax = local_208.Data.ArrayMax;
          local_208.Data.ArrayNum = 0;
          local_208.Data.ArrayMax = 0;
        }
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_280.Data.ArrayNum != 0) {
          FVar13.Data = local_280.Data.AllocatorInstance.Data;
        }
        cVar6 = (**(code **)((longlong)*this->FileSystem + 0x18))
                          (this->FileSystem,FVar13.Data,local_138);
        if (cVar6 == '\0') {
          if (1 < (byte)LogPrerequisites._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPrerequisites);
          }
          pIVar4 = this->InstallerError;
          pcVar3 = *(code **)((longlong)*pIVar4 + 0x38);
          pFVar11 = FText::GetEmpty();
          local_170 = (pFVar11->TextData).Reference;
          if (local_170 != (ITextData *)0x0) {
            (**(code **)((longlong)*local_170 + 8))(local_170,local_1d8);
          }
          local_168 = pFVar11->Flags;
          (*pcVar3)(pIVar4,8,PrerequisiteErrorPrefixes::NotFoundCode);
          bVar5 = false;
          goto LAB_1432eba76;
        }
      }
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_268.Data.ArrayNum != 0) {
        FVar13.Data = local_268.Data.AllocatorInstance.Data;
      }
      pFVar10 = ::FString::Replace(&this_00->Args,&local_110,RootDirectoryVariable,
                                   (wchar_t *)FVar13.Data,IgnoreCase);
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_1f0.Data.ArrayNum != 0) {
        FVar13.Data = local_1f0.Data.AllocatorInstance.Data;
      }
      pFVar10 = ::FString::Replace(pFVar10,&local_120,LogDirectoryVariable,(wchar_t *)FVar13.Data,
                                   IgnoreCase);
      ::FString::Replace(pFVar10,&local_228,QuoteVariable,Quote,IgnoreCase);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogPrerequisites._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPrerequisites);
      }
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_228.Data.ArrayNum != 0) {
        FVar13.Data = local_228.Data.AllocatorInstance.Data;
      }
      local_288[0] = -1;
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_280.Data.ArrayNum != 0) {
        FVar14.Data = local_280.Data.AllocatorInstance.Data;
      }
      cVar6 = (**(code **)((longlong)*this->Platform + 8))(this->Platform,FVar14.Data,FVar13.Data);
      if (cVar6 == '\0') {
        local_288[0] = (**(code **)((longlong)*this->Platform + 0x18))();
        if (1 < (byte)LogPrerequisites._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPrerequisites);
        }
        pIVar2 = this->InstallerAnalytics;
        pcVar3 = *(code **)((longlong)*pIVar2 + 0x28);
        ::FString::FString(&local_160,L"Failed to start installer");
        (*pcVar3)(pIVar2,&this_00->AppName,&this_00->VersionString,&local_280);
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        pIVar4 = this->InstallerError;
        pcVar3 = *(code **)((longlong)*pIVar4 + 0x38);
        pFVar11 = FText::GetEmpty();
        local_1b0 = (pFVar11->TextData).Reference;
        if (local_1b0 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1b0 + 8))(local_1b0,local_1e0);
        }
        local_1a8 = pFVar11->Flags;
        ::FString::PrintfImpl(&local_1a0,L"%s%u");
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_1a0.Data.ArrayNum != 0) {
          FVar13.Data = local_1a0.Data.AllocatorInstance.Data;
        }
        (*pcVar3)(pIVar4,8,FVar13.Data);
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
      }
      else if (local_288[0] == 0) {
        if (4 < (byte)LogPrerequisites._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPrerequisites);
        }
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                  (&local_f8,&this_00->IdSet);
        (**(code **)((longlong)*this->MachineConfig + 0x10))(this->MachineConfig,&local_f8);
      }
      else {
        if (1 < (byte)LogPrerequisites._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_Prerequisites_e_150a84ba0,
                     (FLogCategoryBase *)&LogPrerequisites);
        }
        pIVar2 = this->InstallerAnalytics;
        pcVar3 = *(code **)((longlong)*pIVar2 + 0x28);
        ::FString::FString(&local_150,L"Failed to install");
        (*pcVar3)(pIVar2,&this_00->AppName,&this_00->VersionString,&local_280);
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
        pIVar4 = this->InstallerError;
        pcVar3 = *(code **)((longlong)*pIVar4 + 0x38);
        pFVar11 = FText::GetEmpty();
        local_190 = (pFVar11->TextData).Reference;
        if (local_190 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_190 + 8))(local_190,local_1dc);
        }
        local_188 = pFVar11->Flags;
        ::FString::PrintfImpl(&local_180,L"%s%u");
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_180.Data.ArrayNum != 0) {
          FVar13.Data = local_180.Data.AllocatorInstance.Data;
        }
        (*pcVar3)(pIVar4,8,FVar13.Data);
        cVar6 = '\0';
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
          cVar6 = '\0';
        }
      }
      if ((bVar5) && (cVar6 != '\0')) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
      local_f8.HashSize = 0;
      if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_f8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_f8.Elements);
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_250.Data.AllocatorInstance.Data);
      }
      if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
      pFVar15 = local_240;
      param_2 = local_1f8;
      if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data.AllocatorInstance.Data);
        pFVar15 = local_240;
        param_2 = local_1f8;
      }
      goto LAB_1432ec074;
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Difference
              (&this_00->IdSet,&local_a8,&local_f8);
    if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
      local_a8.HashSize = 0;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8.Elements);
      goto LAB_1432ebb09;
    }
    if (4 < (byte)LogPrerequisites._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPrerequisites);
    }
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
LAB_1432eba76:
    local_f8.HashSize = 0;
    if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_f8.Elements);
    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
    if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Data.AllocatorInstance.Data);
    }
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    pFVar15 = local_240;
    if (local_280.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_1432ec074;
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
    uVar12 = (ulonglong)local_270[0];
    this_00 = this_00 + 1;
    pFVar15 = local_240;
  } while( true );
}

