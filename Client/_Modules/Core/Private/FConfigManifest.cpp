// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// MigrateConfigSection @ 14187e150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FConfigManifest::MigrateConfigSection(FConfigFile *param_1,wchar_t *param_2,wchar_t *param_3)

{
  FName *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FConfigSection *pFVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  longlong *plVar15;
  uint uVar16;
  FConfigSection *pFVar17;
  FConfigSection *pFVar18;
  FConfigSection *pFVar19;
  uint uVar20;
  undefined1 auStack_238 [32];
  undefined1 local_218 [8];
  FString local_210;
  FString local_200;
  FString local_1f0;
  FConfigSection *local_1e0;
  uint uStack_1d8;
  uint uStack_1d4;
  longlong *local_1d0;
  undefined4 uStack_1c8;
  uint uStack_1c4;
  uint local_1c0;
  uint uStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  int local_1b0;
  undefined1 local_1ac [20];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_198;
  undefined8 uStack_178;
  FString *local_170;
  undefined1 *local_168;
  FString local_160;
  undefined1 local_148 [144];
  void *local_b8;
  undefined4 local_b0;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a8;
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_238;
  local_1ac._4_8_ = param_3;
  ::FString::FString(&local_210,param_2);
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_210.Data.ArrayNum != 0) {
    FVar14.Data = local_210.Data.AllocatorInstance.Data;
  }
  pFVar17 = (FConfigSection *)0x0;
  uVar16 = 0;
  uVar9 = local_210.Data.ArrayNum - 1;
  if (local_210.Data.ArrayNum == 0) {
    uVar9 = uVar16;
  }
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar9,(wchar_t *)FVar14.Data);
  iVar10 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                       *)param_1,uVar9,&local_210);
  pFVar12 = pFVar17;
  if (iVar10 != -1) {
    pFVar12 = (FConfigSection *)((longlong)iVar10 * 0x110 + param_1->_padding_);
  }
  pFVar19 = (FConfigSection *)&pFVar12->_padding_;
  if (pFVar12 == (FConfigSection *)0x0) {
    pFVar19 = pFVar17;
  }
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  if (pFVar19 != (FConfigSection *)0x0) {
    ::FString::FString(&local_200,param_3);
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_200.Data.ArrayNum != 0) {
      FVar14.Data = local_200.Data.AllocatorInstance.Data;
    }
    iVar10 = local_200.Data.ArrayNum + -1;
    if (local_200.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar14.Data);
    iVar10 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                         *)param_1,uVar9,&local_200);
    pFVar12 = pFVar17;
    if (iVar10 != -1) {
      pFVar12 = (FConfigSection *)((longlong)iVar10 * 0x110 + param_1->_padding_);
    }
    pFVar18 = (FConfigSection *)&pFVar12->_padding_;
    if (pFVar12 == (FConfigSection *)0x0) {
      pFVar18 = pFVar17;
    }
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    uVar9 = 0;
    if (pFVar18 == (FConfigSection *)0x0) {
      FConfigSection::FConfigSection((FConfigSection *)local_148,pFVar19);
      ::FString::FString(&local_160,param_3);
      AcquireSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      local_170 = &local_160;
      local_168 = local_148;
      TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FConfigSection_&&>_>
                ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                  *)param_1,(TPairInitializer<FString_&&,FConfigSection_&&> *)local_1ac,
                 (bool *)&local_170);
      ReleaseSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_1f0,param_2);
      AcquireSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      if ((int)param_1->_padding_ != *(int *)((longlong)&param_1->_padding_ + 4)) {
        uVar16 = local_1f0.Data.ArrayNum - 1;
        FVar14.Data = local_1f0.Data.AllocatorInstance.Data;
        if (local_1f0.Data.ArrayNum == 0) {
          uVar16 = uVar9;
          FVar14.Data = (FScriptContainerElement *)L"";
        }
        uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar16,(wchar_t *)FVar14.Data);
        TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
        ::RemoveImpl<FString>
                  ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                    *)param_1,uVar16,&local_1f0);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      local_60 = 0;
      if (local_68 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_68);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8);
      local_b0 = 0;
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_148 + 0x50));
      local_148._72_4_ = 0;
      if ((void *)local_148._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_148._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_148);
    }
    else {
      uVar3 = (uint)pFVar19->_padding_;
      local_1d0 = &pFVar19->_padding_;
      uStack_1d4 = 1;
      uStack_1c4 = uVar9;
      if (uVar3 != 0) {
        plVar15 = (longlong *)pFVar19->_padding_;
        if ((longlong *)pFVar19->_padding_ == (longlong *)0x0) {
          plVar15 = local_1d0;
        }
        uVar11 = (uint)*plVar15;
        pFVar12 = pFVar17;
        uVar9 = 0;
        uVar16 = 0;
        while (uVar11 == 0) {
          iVar10 = (int)pFVar17;
          uVar9 = (int)pFVar12 + 0x20;
          pFVar12 = (FConfigSection *)(ulonglong)uVar9;
          uVar16 = iVar10 + 1;
          pFVar17 = (FConfigSection *)(ulonglong)uVar16;
          uStack_1c4 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
          goto LAB_14187e32d;
          uVar11 = *(uint *)((longlong)plVar15 + (longlong)iVar10 * 4 + 4);
        }
        uStack_1d4 = -uVar11 & uVar11;
        uVar2 = (ulonglong)uStack_1d4 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_1b0 = (int)lVar13;
        uStack_1c4 = (uVar9 - 1) + local_1b0;
        if ((int)uVar3 < (int)uStack_1c4) {
          uStack_1c4 = uVar3;
        }
      }
LAB_14187e32d:
      uVar11 = (uint)pFVar19->_padding_;
      uVar20 = uVar11 & 0xffffffe0;
      iStack_1b8 = (int)pFVar19->_padding_ - *(int *)((longlong)&pFVar19->_padding_ + 4);
      uStack_1c8 = 0xffffffff;
      TStack_198._padding_ = CONCAT44(uStack_1d4,uVar16);
      TStack_198.CurrentBitIndex = uStack_1c4;
      TStack_198.UnvisitedBitMask = 0xffffffff;
      iVar10 = (int)uVar11 >> 5;
      TStack_198._28_4_ = uStack_1c4;
      TStack_198.BaseBitIndex = uVar9;
      uStack_178 = CONCAT44(uStack_1b4,iStack_1b8);
      local_1e0 = pFVar19;
      uStack_1d8 = uVar16;
      local_1c0 = uVar9;
      uStack_1bc = uStack_1c4;
      local_1ac._12_8_ = pFVar19;
      TStack_198.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1d0;
      if ((((int)uVar11 < 0) || ((int)uVar3 < (int)uVar11)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar6 = local_1ac._4_8_;
      uVar16 = (uint)pFVar19->_padding_;
      if (uVar11 != uVar16) {
        plVar15 = (longlong *)pFVar19->_padding_;
        if ((longlong *)pFVar19->_padding_ == (longlong *)0x0) {
          plVar15 = &pFVar19->_padding_;
        }
        uVar9 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)((longlong)plVar15 + (longlong)iVar10 * 4);
        while (uVar9 == 0) {
          lVar13 = (longlong)iVar10;
          uVar20 = uVar20 + 0x20;
          iVar10 = iVar10 + 1;
          uVar11 = uVar16;
          if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
          goto LAB_14187e440;
          uVar9 = *(uint *)((longlong)plVar15 + lVar13 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar11 = (int)lVar13 + -1 + uVar20;
        if ((int)uVar16 < (int)uVar11) {
          uVar11 = uVar16;
        }
      }
LAB_14187e440:
      while( true ) {
        uVar7 = local_1ac._12_8_;
        if ((int)*(longlong *)(local_1ac._12_8_ + 8) -
            *(int *)((longlong)(local_1ac._12_8_ + 0x30) + 4) != (int)uStack_178) {
          `TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_218);
        }
        if (((TStack_198.CurrentBitIndex == uVar11) &&
            (TStack_198.Array == (TBitArray<FDefaultBitArrayAllocator> *)&pFVar19->_padding_)) &&
           ((FConfigSection *)uVar7 == pFVar19)) break;
        lVar13 = *(longlong *)uVar7;
        lVar4 = *(longlong *)(lVar13 + (longlong)TStack_198.CurrentBitIndex * 0x28);
        pFVar1 = (FName *)(lVar13 + (longlong)TStack_198.CurrentBitIndex * 0x28);
        uVar16 = ::GetTypeHash((FNameEntryId)(uint)lVar4);
        if ((int)pFVar18->_padding_ != *(int *)((longlong)&pFVar18->_padding_ + 4)) {
          plVar15 = &pFVar18->_padding_;
          if ((longlong *)pFVar18->_padding_ != (longlong *)0x0) {
            plVar15 = (longlong *)pFVar18->_padding_;
          }
          iVar10 = *(int *)((longlong)plVar15 +
                           (ulonglong)
                           ((int)pFVar18->_padding_ - 1U & (int)((ulonglong)lVar4 >> 0x20) + uVar16)
                           * 4);
          if (iVar10 != -1) {
            do {
              if (*(longlong *)(pFVar18->_padding_ + (longlong)iVar10 * 0x28) == lVar4)
              goto LAB_14187e4ea;
              iVar10 = *(int *)(pFVar18->_padding_ + 0x20 + (longlong)iVar10 * 0x28);
            } while (iVar10 != -1);
          }
        }
        FConfigFile::AddToSection(param_1,(wchar_t *)uVar6,*pFVar1,(FString *)(pFVar1 + 1));
LAB_14187e4ea:
        TStack_198.UnvisitedBitMask = TStack_198.UnvisitedBitMask & ~TStack_198._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_198);
      }
    }
    param_1->Dirty = true;
  }
  return;
}

// MigrateEditorUserSettings @ 14187e670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FConfigManifest::MigrateEditorUserSettings(void)

{
  code *pcVar1;
  bool bVar2;
  IFileManager *pIVar3;
  ForAnyElementType FVar4;
  ForAnyElementType FVar5;
  undefined1 auStack_268 [32];
  undefined1 local_248;
  undefined1 local_240;
  undefined1 local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FConfigFile local_1f8;
  FConfigFile local_108;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_268;
  ProjectSpecificIniPath(&local_218,L"EditorUserSettings.ini");
  bVar2 = FPaths::FileExists(&local_218);
  if (!bVar2) goto LAB_14187e85e;
  FConfigFile::FConfigFile(&local_1f8);
  local_1f8.NoSave = true;
  FillFileFromDisk<FConfigFile>(&local_1f8,&local_218,false);
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if ((int)local_1f8._padding_ == local_1f8._padding_._4_4_) {
LAB_14187e7b3:
    pIVar3 = IFileManager::Get();
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_218.Data.ArrayNum != 0) {
      FVar4.Data = local_218.Data.AllocatorInstance.Data;
    }
    pcVar1 = *(code **)((longlong)*pIVar3 + 0x48);
    ::FString::ConcatFC(&local_228,&local_218,L".bak");
    local_238 = 0;
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_228.Data.ArrayNum != 0) {
      FVar5.Data = local_228.Data.AllocatorInstance.Data;
    }
    local_240 = 0;
    local_248 = 0;
    (*pcVar1)(pIVar3,FVar5.Data,FVar4.Data,1);
  }
  else {
    MigrateConfigSection
              (&local_1f8,L"/Script/UnrealEd.EditorUserSettings",
               L"/Script/UnrealEd.EditorPerProjectUserSettings");
    ProjectSpecificIniPath(&local_228,L"EditorPerProjectUserSettings.ini");
    FConfigFile::FConfigFile(&local_108);
    FillFileFromDisk<FConfigFile>(&local_108,&local_228,false);
    FConfigFile::AddMissingProperties(&local_108,&local_1f8);
    local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.Data.ArrayNum = 0;
    local_208.Data.ArrayMax = 0;
    bVar2 = FConfigFile::Write(&local_108,&local_228,false,&local_208);
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    FConfigFile::~FConfigFile(&local_108);
    if (bVar2) {
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
      goto LAB_14187e7b3;
    }
  }
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  FConfigFile::~FConfigFile(&local_1f8);
LAB_14187e85e:
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  return;
}

// UpgradeFromPreviousVersions @ 1418972a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FConfigManifest::UpgradeFromPreviousVersions(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  FString *pFVar4;
  FPlatformFileManager *this;
  IPlatformFile *pIVar5;
  FName *pFVar6;
  FConfigValue *this_00;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *this_01;
  EConfigManifestVersion EVar11;
  EConfigManifestVersion EVar12;
  undefined1 auStack_988 [32];
  FString local_968;
  FString local_958;
  FName local_948;
  undefined **local_940;
  undefined1 local_938;
  char local_930;
  FString local_928;
  FConfigFile local_918;
  wchar_t local_828 [1024];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_988;
  pFVar10 = (FScriptContainerElement *)0x0;
  local_948.ComparisonIndex.Value = 0;
  FConfigFile::FConfigFile(&local_918);
  ProjectAgnosticIniPath(&local_958,L"Manifest.ini");
  bVar1 = FPaths::FileExists(&local_958);
  pFVar9 = pFVar10;
  if (bVar1) {
LAB_141897379:
    bVar1 = false;
  }
  else {
    pFVar4 = FPaths::GetPath(&local_968,&local_958);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    this = FPlatformFileManager::Get();
    pIVar5 = FPlatformFileManager::GetPlatformFile(this);
    local_938 = 0;
    local_940 = &`IsDirectoryEmpty'::`2'::FVisitor::_vftable_;
    local_930 = '\0';
    (**(code **)((longlong)*pIVar5 + 0x140))(pIVar5,pwVar8);
    pFVar9 = (FScriptContainerElement *)&DAT_00000001;
    if (local_930 != '\0') goto LAB_141897379;
    bVar1 = true;
  }
  if ((pFVar9 != (FScriptContainerElement *)0x0) &&
     (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_968.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    MigratePreviousEngineInis();
  }
  EVar12 = Initial;
  bVar1 = FPaths::FileExists(&local_958);
  EVar11 = Initial;
  if (bVar1) {
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_958.Data.ArrayNum != 0) {
      FVar7.Data = local_958.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_968,(wchar_t *)FVar7.Data);
    FillFileFromDisk<FConfigFile>(&local_918,&local_968,false);
    if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_968.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_968,L"Manifest");
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    iVar3 = local_968.Data.ArrayNum + -1;
    FVar7.Data = local_968.Data.AllocatorInstance.Data;
    if (local_968.Data.ArrayNum == 0) {
      iVar3 = 0;
      FVar7.Data = (FScriptContainerElement *)L"";
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar7.Data);
    iVar3 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                        *)&local_918,uVar2,&local_968);
    pFVar9 = pFVar10;
    if (iVar3 != -1) {
      pFVar9 = (FScriptContainerElement *)((longlong)iVar3 * 0x110 + local_918._padding_);
    }
    this_01 = pFVar9 + 0x10;
    if (pFVar9 == (FScriptContainerElement *)0x0) {
      this_01 = pFVar10;
    }
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_968.Data.AllocatorInstance.Data);
    }
    EVar11 = EVar12;
    if (this_01 != (FScriptContainerElement *)0x0) {
      pFVar6 = ::FName::FName(&local_948,L"Version");
      this_00 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                        *)this_01,*pFVar6);
      if (this_00 == (FConfigValue *)0x0) {
        bVar1 = false;
      }
      else {
        pFVar4 = FConfigValue::GetValue(this_00,&local_968);
        iVar3 = 0;
        if (&local_928 != pFVar4) {
          pFVar10 = (pFVar4->Data).AllocatorInstance.Data;
          (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar3 = (pFVar4->Data).ArrayNum;
          (pFVar4->Data).ArrayNum = 0;
          (pFVar4->Data).ArrayMax = 0;
        }
        if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_968.Data.AllocatorInstance.Data);
        }
        pFVar9 = (FScriptContainerElement *)L"";
        if (iVar3 != 0) {
          pFVar9 = pFVar10;
        }
        pFVar9 = (FScriptContainerElement *)_wtoi64((wchar_t *)pFVar9);
        if (pFVar10 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar10);
        }
        bVar1 = true;
        pFVar10 = pFVar9;
      }
      if (((bVar1) && ((longlong)pFVar10 < 3)) &&
         (EVar11 = (EConfigManifestVersion)pFVar10, EVar11 == MigrateProjectSpecificInisToAgnostic))
      goto LAB_14189757f;
    }
  }
  UpgradeFromVersion(EVar11);
  TCString<wchar_t>::SprintfImpl(local_828,L"%lld");
  FConfigFile::SetString(&local_918,L"Manifest",L"Version",local_828);
  local_968.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_968.Data.ArrayNum = 0;
  local_968.Data.ArrayMax = 0;
  FConfigFile::Write(&local_918,&local_958,true,&local_968);
  if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_968.Data.AllocatorInstance.Data);
  }
LAB_14189757f:
  if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_958.Data.AllocatorInstance.Data);
  }
  FConfigFile::~FConfigFile(&local_918);
  return;
}

// UpgradeFromVersion @ 1418975f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EConfigManifestVersion __cdecl FConfigManifest::UpgradeFromVersion(EConfigManifestVersion param_1)

{
  bool bVar1;
  int iVar2;
  FString *pFVar3;
  IFileManager *pIVar4;
  ForAnyElementType FVar5;
  wchar_t *pwVar6;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  undefined1 local_150;
  undefined1 local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FConfigFile local_108;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  if ((int)param_1 < 1) {
    ProjectAgnosticIniPath(&local_128,L"EditorSettings.ini");
    pwVar6 = L"";
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_128.Data.ArrayNum != 0) {
      FVar5.Data = local_128.Data.AllocatorInstance.Data;
    }
    pFVar3 = ProjectAgnosticIniPath(&local_118,L"EditorGameAgnostic.ini");
    if ((pFVar3->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_138,pwVar6);
    bVar1 = FPaths::FileExists(&local_138);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if (bVar1) {
      ::FString::FString(&local_138,(wchar_t *)FVar5.Data);
      bVar1 = FPaths::FileExists(&local_138);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (bVar1) {
        CombineConfig((wchar_t *)FVar5.Data,pwVar6,(wchar_t *)FVar5.Data);
      }
      else {
        pIVar4 = IFileManager::Get();
        local_158 = bVar1;
        local_150 = bVar1;
        local_148 = bVar1;
        (**(code **)((longlong)*pIVar4 + 0x48))(pIVar4,FVar5.Data,pwVar6,1);
      }
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    FConfigFile::FConfigFile(&local_108);
    FillFileFromDisk<FConfigFile>(&local_108,&local_128,false);
    MigrateConfigSection
              (&local_108,L"/Script/UnrealEd.EditorGameAgnosticSettings",
               L"/Script/UnrealEd.EditorSettings");
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Data.ArrayNum = 0;
    local_138.Data.ArrayMax = 0;
    FConfigFile::Write(&local_108,&local_128,false,&local_138);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    param_1 = RenameEditorAgnosticSettings;
    FConfigFile::~FConfigFile(&local_108);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  else if (1 < (int)param_1) {
    return param_1;
  }
  if ((GInternalProjectName[0] != L'\0') &&
     (iVar2 = FGenericPlatformStricmp::Stricmp(GInternalProjectName,L"None"), iVar2 != 0)) {
    MigrateToAgnosticIni(L"EditorLayout.ini");
    MigrateToAgnosticIni(L"EditorKeyBindings.ini");
    param_1 = MigrateProjectSpecificInisToAgnostic;
  }
  return param_1;
}

