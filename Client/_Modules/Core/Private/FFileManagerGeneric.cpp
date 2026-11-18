// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 43

// ~FFileManagerGeneric @ 14167b920

void __thiscall FFileManagerGeneric::~FFileManagerGeneric(FFileManagerGeneric *this)

{
  *this = (FFileManagerGeneric)&___7FFileManagerGeneric__6B_;
  return;
}

// ConvertToAbsolutePathForExternalAppForRead @ 14168c3f0

FString * __thiscall
FFileManagerGeneric::ConvertToAbsolutePathForExternalAppForRead
          (FFileManagerGeneric *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar1;
  
  this_00 = FPlatformFileManager::Get();
  pIVar1 = FPlatformFileManager::GetPlatformFile(this_00);
  (**(code **)((longlong)*pIVar1 + 0x218))(pIVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// ConvertToAbsolutePathForExternalAppForWrite @ 14168c440

FString * __thiscall
FFileManagerGeneric::ConvertToAbsolutePathForExternalAppForWrite
          (FFileManagerGeneric *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar1;
  
  this_00 = FPlatformFileManager::Get();
  pIVar1 = FPlatformFileManager::GetPlatformFile(this_00);
  (**(code **)((longlong)*pIVar1 + 0x220))(pIVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// ConvertToRelativePath @ 14168c490

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
FFileManagerGeneric::ConvertToRelativePath
          (FFileManagerGeneric *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  int iVar6;
  FString local_28;
  FString local_18;
  
  ::FString::FString(__return_storage_ptr__,param_1);
  FPaths::NormalizeFilename(__return_storage_ptr__);
  pwVar4 = FGenericPlatformMisc::RootDir();
  ::FString::FString(&local_28,pwVar4);
  FPaths::NormalizeFilename(&local_28);
  do {
    iVar2 = ::FString::Find(&local_28,L"/",1,CaseSensitive,FromEnd,-1);
    if (iVar2 == -1) {
LAB_14168c5e6:
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    iVar6 = local_28.Data.ArrayNum + -1;
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
    if (local_28.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar5.Data = (FScriptContainerElement *)L"";
    }
    bVar1 = ::FString::StartsWith(__return_storage_ptr__,(wchar_t *)FVar5.Data,iVar6,IgnoreCase);
    if (bVar1) {
      pwVar4 = FWindowsPlatformProcess::BaseDir();
      ::FString::FString(&local_18,pwVar4);
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar5.Data = local_18.Data.AllocatorInstance.Data;
      }
      FPaths::MakePathRelativeTo(__return_storage_ptr__,(wchar_t *)FVar5.Data);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      goto LAB_14168c5e6;
    }
    iVar2 = ::FString::Find(&local_28,L"/",1,CaseSensitive,FromEnd,iVar2);
    if (iVar2 == -1) {
      ::FString::Empty(&local_28);
    }
    else {
      iVar6 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      iVar3 = iVar6;
      if (iVar2 + 1 < iVar6) {
        iVar3 = iVar2 + 1;
      }
      iVar2 = 0;
      if (0 < iVar3) {
        iVar2 = iVar3;
      }
      ::FString::RemoveAt(&local_28,iVar2,iVar6 - iVar2,No);
    }
  } while( true );
}

// Copy @ 14168c620

uint __thiscall
FFileManagerGeneric::Copy
          (FFileManagerGeneric *this,wchar_t *param_1,wchar_t *param_2,bool param_3,bool param_4,
          bool param_5,FCopyProgress *param_6,EFileRead param_7,EFileWrite param_8)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  FString *pFVar7;
  FString *pFVar8;
  FPlatformFileManager *pFVar9;
  IPlatformFile *pIVar10;
  IPlatformFile *pIVar11;
  wchar_t *pwVar12;
  bool bVar13;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  ::FString::FString(&local_48,param_2);
  pFVar7 = FPaths::ConvertRelativePathToFull(&local_28,&local_48);
  ::FString::FString(&local_58,param_1);
  pFVar8 = FPaths::ConvertRelativePathToFull(&local_38,&local_58);
  iVar5 = (pFVar7->Data).ArrayNum;
  iVar1 = (pFVar8->Data).ArrayNum;
  if (iVar1 == iVar5) {
    if (iVar1 < 2) {
      bVar13 = true;
    }
    else {
      iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
      bVar13 = iVar5 == 0;
    }
  }
  else {
    bVar13 = iVar1 + iVar5 == 1;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (bVar13) {
LAB_14168c6fb:
    uVar6 = 1;
  }
  else {
    if (param_6 == (FCopyProgress *)0x0) {
      if (!param_3) {
        pFVar9 = FPlatformFileManager::Get();
        pIVar10 = FPlatformFileManager::GetPlatformFile(pFVar9);
        cVar3 = (**(code **)((longlong)*pIVar10 + 0x78))(pIVar10,param_1);
        if (cVar3 != '\0') goto LAB_14168c6fb;
      }
      if (param_4) {
        pFVar9 = FPlatformFileManager::Get();
        pIVar10 = FPlatformFileManager::GetPlatformFile(pFVar9);
        (**(code **)((longlong)*pIVar10 + 0xa8))(pIVar10,param_1,0);
      }
      pcVar2 = *(code **)((longlong)*this + 0x60);
      ::FString::FString(&local_48,param_1);
      pFVar7 = FPaths::GetPath(&local_28,&local_48);
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      (*pcVar2)(this,pwVar12,1);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      pFVar9 = FPlatformFileManager::Get();
      pIVar10 = FPlatformFileManager::GetPlatformFile(pFVar9);
      cVar3 = (**(code **)((longlong)*pIVar10 + 0x208))
                        (pIVar10,param_1,param_2,param_7 >> 2 & 0xffffff01,(byte)(param_8 >> 4) & 1)
      ;
      if (cVar3 == '\0') goto LAB_14168c6fb;
    }
    else {
      uVar6 = CopyWithProgress(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8)
      ;
      if (uVar6 != 0) {
        return uVar6;
      }
    }
    uVar6 = 0;
    if (param_5) {
      pFVar9 = FPlatformFileManager::Get();
      pIVar10 = FPlatformFileManager::GetPlatformFile(pFVar9);
      pcVar2 = *(code **)((longlong)*pIVar10 + 0xa8);
      pFVar9 = FPlatformFileManager::Get();
      pIVar11 = FPlatformFileManager::GetPlatformFile(pFVar9);
      uVar4 = (**(code **)((longlong)*pIVar11 + 0x98))(pIVar11,param_2);
      (*pcVar2)(pIVar10,param_1,uVar4);
    }
  }
  return uVar6;
}

// CopyWithProgress @ 14168c8e0

uint __thiscall
FFileManagerGeneric::CopyWithProgress
          (FFileManagerGeneric *this,wchar_t *param_1,wchar_t *param_2,bool param_3,bool param_4,
          bool param_5,FCopyProgress *param_6,EFileRead param_7,EFileWrite param_8)

{
  float fVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong local_68;
  FString local_58;
  FString local_48 [2];
  
  lVar10 = 0;
  cVar2 = (**(code **)*param_6)(param_6,0);
  if (cVar2 == '\0') {
    uVar9 = 2;
  }
  else {
    ::FString::FString(local_48,param_2);
    ::FString::FString(&local_58,param_1);
    uVar9 = 0;
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48[0].Data.ArrayNum != 0) {
      FVar8.Data = local_48[0].Data.AllocatorInstance.Data;
    }
    plVar3 = (longlong *)(**(code **)((longlong)*this + 0x18))(this,FVar8.Data,param_7);
    if (plVar3 == (longlong *)0x0) {
      uVar9 = 1;
    }
    else {
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar8.Data = local_58.Data.AllocatorInstance.Data;
      }
      plVar4 = (longlong *)
               (**(code **)((longlong)*this + 0x20))
                         (this,FVar8.Data,(param_3 ^ 1) * 2 | (uint)param_4 << 2 | param_8);
      if (plVar4 == (longlong *)0x0) {
        uVar9 = 1;
      }
      else {
        lVar5 = (**(code **)(*plVar3 + 0x30))(plVar3);
        local_68 = 0;
        pvVar6 = operator_new__(0x8000);
        fVar1 = __real_3c23d70a;
        lVar11 = lVar10;
        lVar12 = lVar5;
        if (0 < lVar5) {
          do {
            lVar7 = 8;
            if (lVar12 < 8) {
              lVar7 = lVar12;
            }
            (**(code **)(*plVar3 + 0x188))(plVar3,pvVar6,lVar7);
            if (((*(byte *)((longlong)plVar3 + 0x29) & 2) != 0) ||
               ((**(code **)(*plVar4 + 0x188))(plVar4,pvVar6,lVar7),
               (*(byte *)((longlong)plVar4 + 0x29) & 2) != 0)) {
              uVar9 = 1;
              operator_delete__(pvVar6);
              (**(code **)*plVar4)(plVar4,1);
              goto LAB_14168caed;
            }
            lVar7 = lVar10 / lVar5;
            if ((local_68 != lVar7) &&
               (cVar2 = (**(code **)*param_6)(param_6,(float)lVar7 * fVar1), cVar2 == '\0')) {
              uVar9 = 2;
              operator_delete__(pvVar6);
              (**(code **)*plVar4)(plVar4,1);
              goto LAB_14168caed;
            }
            lVar11 = lVar11 + 8;
            lVar10 = lVar10 + 800;
            lVar12 = lVar12 + -8;
            local_68 = lVar7;
          } while (lVar11 < lVar5);
        }
        operator_delete__(pvVar6);
        cVar2 = (**(code **)(*plVar4 + 0x210))(plVar4);
        if (cVar2 == '\0') {
          uVar9 = 1;
          (**(code **)*plVar4)();
LAB_14168caed:
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_58.Data.ArrayNum != 0) {
            FVar8.Data = local_58.Data.AllocatorInstance.Data;
          }
          (**(code **)((longlong)*this + 0x38))(this,FVar8.Data,0,0,0);
        }
        else {
          (**(code **)*plVar4)(plVar4,1);
          cVar2 = (**(code **)(*plVar3 + 0x210))(plVar3);
          if (cVar2 == '\0') {
            uVar9 = 1;
          }
        }
      }
      (**(code **)*plVar3)(plVar3,1);
      if ((uVar9 == 0) && (cVar2 = (**(code **)*param_6)(param_6,__real_3f800000), cVar2 == '\0')) {
        uVar9 = 2;
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
  }
  return uVar9;
}

// CreateDebugFileWriter @ 14168d510

FArchive * __thiscall
FFileManagerGeneric::CreateDebugFileWriter(FFileManagerGeneric *this,wchar_t *param_1,uint param_2)

{
  FArchive *pFVar1;
  
  pFVar1 = CreateFileWriterInternal(this,param_1,param_2,0x1000);
  return pFVar1;
}

// CreateFileReader @ 14168d530

/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __thiscall
FFileManagerGeneric::CreateFileReader(FFileManagerGeneric *this,wchar_t *param_1,uint param_2)

{
  longlong lVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  longlong *plVar3;
  FArchiveState *this_01;
  uchar *puVar4;
  uchar *puVar5;
  
  this_00 = FPlatformFileManager::Get();
  pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
  plVar3 = (longlong *)
           (**(code **)((longlong)*pIVar2 + 0xe8))(pIVar2,param_1,param_2 >> 2 & 0x3fffff01);
  if (plVar3 != (longlong *)0x0) {
    this_01 = ::operator_new(0xe8);
    if (this_01 != (FArchiveState *)0x0) {
      puVar4 = (uchar *)(**(code **)(*plVar3 + 0x50))(plVar3);
      FArchiveState::FArchiveState(this_01);
      this_01->_padding_ = (longlong)&___7FArchiveFileReaderGeneric__6B_;
      ::FString::FString((FString *)(this_01 + 1),param_1);
      *(longlong **)&this_01[1].field_0x28 = plVar3;
      this_01[1].ArSerializingDefaults = 0;
      this_01[1].ArPortFlags = 0;
      this_01[1].ArMaxSerializeSize = 0;
      this_01[1].ArUEVer.FileVersionUE4 = 0;
      this_01[1].ArUEVer.FileVersionUE5 = 0;
      this_01[1].InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      this_01[1].InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      *(undefined1 *)&this_01[1].ArEngineVer.Changelist = 0;
      for (lVar1 = 0x3f; 0x3ffUL >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
      this_01[1].InlineFPLB.StartFastPathLoadBuffer = puVar4;
      *(uint *)&this_01[1].ArEngineVer.Patch = param_2;
      puVar5 = (uchar *)(1L << (0x40U - ('?' - (char)lVar1) & 0x3f));
      lVar1 = this_01->_padding_;
      if (puVar5 < puVar4) {
        puVar4 = puVar5;
      }
      *(uchar **)&this_01[1].ArLicenseeUEVer = puVar4;
      (**(code **)(lVar1 + 200))(this_01,CONCAT71((int7)((ulonglong)puVar5 >> 8),1));
      (**(code **)(this_01->_padding_ + 0x108))(this_01,1);
    }
    return (FArchive *)this_01;
  }
  if ((param_2 & 1) != 0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogFileManager);
  }
  return (FArchive *)0x0;
}

// CreateFileReaderInternal @ 14168d6b0

/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __thiscall
FFileManagerGeneric::CreateFileReaderInternal
          (FFileManagerGeneric *this,wchar_t *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  longlong *plVar3;
  FArchiveState *this_01;
  uchar *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uchar *puVar7;
  
  this_00 = FPlatformFileManager::Get();
  pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
  plVar3 = (longlong *)
           (**(code **)((longlong)*pIVar2 + 0xe8))(pIVar2,param_1,param_2 >> 2 & 0x3fffff01);
  if (plVar3 != (longlong *)0x0) {
    this_01 = ::operator_new(0xe8);
    if (this_01 != (FArchiveState *)0x0) {
      puVar4 = (uchar *)(**(code **)(*plVar3 + 0x50))(plVar3);
      FArchiveState::FArchiveState(this_01);
      this_01->_padding_ = (longlong)&___7FArchiveFileReaderGeneric__6B_;
      ::FString::FString((FString *)(this_01 + 1),param_1);
      *(longlong **)&this_01[1].field_0x28 = plVar3;
      this_01[1].ArSerializingDefaults = 0;
      this_01[1].ArPortFlags = 0;
      this_01[1].ArMaxSerializeSize = 0;
      this_01[1].ArUEVer.FileVersionUE4 = 0;
      this_01[1].ArUEVer.FileVersionUE5 = 0;
      uVar5 = 1;
      if (param_3 != 0) {
        uVar5 = (ulonglong)param_3;
      }
      this_01[1].InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      uVar5 = uVar5 - 1;
      this_01[1].InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      uVar6 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
        }
      }
      *(undefined1 *)&this_01[1].ArEngineVer.Changelist = 0;
      this_01[1].InlineFPLB.StartFastPathLoadBuffer = puVar4;
      uVar6 = uVar6 & 0xffffffff;
      if (uVar5 == 0) {
        uVar6 = 0xffffffff;
      }
      *(uint *)&this_01[1].ArEngineVer.Patch = param_2;
      lVar1 = this_01->_padding_;
      puVar7 = (uchar *)(1L << (0x40U - ('?' - (char)uVar6) & 0x3f));
      if (puVar7 < puVar4) {
        puVar4 = puVar7;
      }
      *(uchar **)&this_01[1].ArLicenseeUEVer = puVar4;
      (**(code **)(lVar1 + 200))(this_01,CONCAT71((int7)(uVar6 >> 8),1));
      (**(code **)(this_01->_padding_ + 0x108))(this_01,1);
    }
    return (FArchive *)this_01;
  }
  if ((param_2 & 1) != 0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogFileManager);
  }
  return (FArchive *)0x0;
}

// CreateFileWriter @ 14168d840

FArchive * __thiscall
FFileManagerGeneric::CreateFileWriter(FFileManagerGeneric *this,wchar_t *param_1,uint param_2)

{
  FArchive *pFVar1;
  
  pFVar1 = CreateFileWriterInternal(this,param_1,param_2,0x1000);
  return pFVar1;
}

// CreateFileWriterInternal @ 14168d860

/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __thiscall
FFileManagerGeneric::CreateFileWriterInternal
          (FFileManagerGeneric *this,wchar_t *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  long64 lVar2;
  bool bVar3;
  longlong lVar4;
  FArchiveState *pFVar5;
  FPlatformFileManager *pFVar6;
  IPlatformFile *pIVar7;
  longlong *plVar8;
  FString *pFVar9;
  uchar *puVar10;
  ulonglong uVar11;
  char cVar12;
  FLogCategoryLogFileManager *pFVar13;
  undefined7 uVar15;
  wchar_t *pwVar14;
  byte bVar16;
  FPackageFileVersion FVar17;
  byte bVar18;
  FString local_38;
  FString local_28;
  
  bVar3 = FSHA1::GetFileSHAHash(param_1,(uchar *)0x0,true);
  if ((bVar3) &&
     (pFVar13 = (FLogCategoryLogFileManager *)param_1,
     lVar4 = (**(code **)((longlong)*this + 0x110))(this,param_1), lVar4 != -1)) {
    if (4 < (byte)LogFileManager._0_1_) {
      pFVar13 = &LogFileManager;
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFileManager);
    }
    pFVar5 = ::operator_new(0x98);
    if (pFVar5 != (FArchiveState *)0x0) {
      FArchiveState::FArchiveState(pFVar5);
      pFVar5[1]._padding_ = 0;
      uVar15 = (undefined7)((ulonglong)pFVar13 >> 8);
      pFVar5->_padding_ = (longlong)&___7FArchiveFileWriterDummy__6B_;
      FArchiveState::SetIsSaving(pFVar5,true);
      (**(code **)(pFVar5->_padding_ + 0x108))(pFVar5,CONCAT71(uVar15,1));
      return (FArchive *)pFVar5;
    }
    return (FArchive *)0x0;
  }
  if ((param_2 & 4) != 0) {
    pFVar6 = FPlatformFileManager::Get();
    pIVar7 = FPlatformFileManager::GetPlatformFile(pFVar6);
    (**(code **)((longlong)*pIVar7 + 0xa8))(pIVar7,param_1,0);
  }
  pFVar6 = FPlatformFileManager::Get();
  pIVar7 = FPlatformFileManager::GetPlatformFile(pFVar6);
  bVar16 = (byte)(param_2 >> 4) & 1;
  bVar18 = (byte)(param_2 >> 3) & 1;
  plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x110))(pIVar7,param_1,bVar18,bVar16);
  if (plVar8 == (longlong *)0x0) {
    pcVar1 = *(code **)((longlong)*this + 0x60);
    ::FString::FString(&local_38,param_1);
    pFVar9 = FPaths::GetPath(&local_28,&local_38);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    (*pcVar1)(this,pwVar14,1);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar6 = FPlatformFileManager::Get();
    pIVar7 = FPlatformFileManager::GetPlatformFile(pFVar6);
    plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x110))(pIVar7,param_1,bVar18,bVar16);
    if (plVar8 == (longlong *)0x0) {
      if ((param_2 & 1) != 0) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogFileManager);
      }
      return (FArchive *)0x0;
    }
  }
  pFVar5 = ::operator_new(0xe0);
  if (pFVar5 == (FArchiveState *)0x0) {
    pFVar5 = (FArchiveState *)0x0;
  }
  else {
    puVar10 = (uchar *)(**(code **)(*plVar8 + 8))(plVar8);
    FArchiveState::FArchiveState(pFVar5);
    pFVar5->_padding_ = (longlong)&___7FArchiveFileWriterGeneric__6B_;
    ::FString::FString((FString *)(pFVar5 + 1),param_1);
    pFVar5[1].InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)plVar8;
    *(uint *)&pFVar5[1].InlineFPLB.StartFastPathLoadBuffer = param_2;
    *(undefined8 *)&pFVar5[1].field_0x28 = 0;
    pFVar5[1].ArSerializingDefaults = 0;
    pFVar5[1].ArPortFlags = 0;
    uVar11 = 1;
    if (param_3 != 0) {
      uVar11 = (ulonglong)param_3;
    }
    pFVar5[1].ArMaxSerializeSize = 0;
    uVar11 = uVar11 - 1;
    pFVar5[1].InlineFPLB.EndFastPathLoadBuffer = puVar10;
    lVar4 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    *(undefined1 *)&pFVar5[1].ArLicenseeUEVer = 0;
    cVar12 = (char)lVar4;
    if (uVar11 == 0) {
      cVar12 = -1;
    }
    FVar17 = (FPackageFileVersion)(1L << (0x40U - ('?' - cVar12) & 0x3f));
    pFVar5[1].ArUEVer = FVar17;
    if ((longlong)FVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulong64)FVar17);
    }
    if (pFVar5[1].ArMaxSerializeSize < (longlong)FVar17) {
      lVar2._0_4_ = pFVar5[1].ArSerializingDefaults;
      lVar2._4_4_ = pFVar5[1].ArPortFlags;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,(long64)FVar17,(ForAnyElementType *)&pFVar5[1].field_0x28,lVar2,
                 &pFVar5[1].ArMaxSerializeSize);
    }
    (**(code **)(pFVar5->_padding_ + 0xd8))(pFVar5,1);
    (**(code **)(pFVar5->_padding_ + 0x108))(pFVar5,1);
  }
  return (FArchive *)pFVar5;
}

// DefaultConvertToRelativePath @ 14168dee0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
FFileManagerGeneric::DefaultConvertToRelativePath(FString *__return_storage_ptr__,wchar_t *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  int iVar6;
  FString local_28;
  FString local_18;
  
  ::FString::FString(__return_storage_ptr__,param_1);
  FPaths::NormalizeFilename(__return_storage_ptr__);
  pwVar4 = FGenericPlatformMisc::RootDir();
  ::FString::FString(&local_28,pwVar4);
  FPaths::NormalizeFilename(&local_28);
  do {
    iVar2 = ::FString::Find(&local_28,L"/",1,CaseSensitive,FromEnd,-1);
    if (iVar2 == -1) {
LAB_14168e036:
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    iVar6 = local_28.Data.ArrayNum + -1;
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
    if (local_28.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar5.Data = (FScriptContainerElement *)L"";
    }
    bVar1 = ::FString::StartsWith(__return_storage_ptr__,(wchar_t *)FVar5.Data,iVar6,IgnoreCase);
    if (bVar1) {
      pwVar4 = FWindowsPlatformProcess::BaseDir();
      ::FString::FString(&local_18,pwVar4);
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar5.Data = local_18.Data.AllocatorInstance.Data;
      }
      FPaths::MakePathRelativeTo(__return_storage_ptr__,(wchar_t *)FVar5.Data);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      goto LAB_14168e036;
    }
    iVar2 = ::FString::Find(&local_28,L"/",1,CaseSensitive,FromEnd,iVar2);
    if (iVar2 == -1) {
      ::FString::Empty(&local_28);
    }
    else {
      iVar6 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      iVar3 = iVar6;
      if (iVar2 + 1 < iVar6) {
        iVar3 = iVar2 + 1;
      }
      iVar2 = 0;
      if (0 < iVar3) {
        iVar2 = iVar3;
      }
      ::FString::RemoveAt(&local_28,iVar2,iVar6 - iVar2,No);
    }
  } while( true );
}

// Delete @ 14168e070

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FFileManagerGeneric::Delete
          (FFileManagerGeneric *this,wchar_t *param_1,bool param_2,bool param_3,bool param_4)

{
  bool bVar1;
  char cVar2;
  FPlatformFileManager *pFVar3;
  IPlatformFile *pIVar4;
  
  bVar1 = FSHA1::GetFileSHAHash(param_1,(uchar *)0x0,true);
  if (bVar1) {
    if ((!param_4) && (4 < (byte)LogFileManager._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFileManager);
      return false;
    }
  }
  else {
    pFVar3 = FPlatformFileManager::Get();
    pIVar4 = FPlatformFileManager::GetPlatformFile(pFVar3);
    cVar2 = (**(code **)((longlong)*pIVar4 + 0x78))(pIVar4,param_1);
    if (param_2) {
      if (cVar2 == '\0') {
        if (param_4) {
          return false;
        }
        if ((byte)LogFileManager._0_1_ < 3) {
          return false;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFileManager);
        return false;
      }
    }
    else if (cVar2 == '\0') {
      return true;
    }
    if (param_3) {
      pFVar3 = FPlatformFileManager::Get();
      pIVar4 = FPlatformFileManager::GetPlatformFile(pFVar3);
      (**(code **)((longlong)*pIVar4 + 0xa8))(pIVar4,param_1,0);
    }
    pFVar3 = FPlatformFileManager::Get();
    pIVar4 = FPlatformFileManager::GetPlatformFile(pFVar3);
    cVar2 = (**(code **)((longlong)*pIVar4 + 0x88))(pIVar4,param_1);
    if (cVar2 != '\0') {
      return true;
    }
    if ((!param_4) && (2 < (byte)LogFileManager._0_1_)) {
      FWindowsPlatformMisc::GetLastError();
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFileManager);
    }
  }
  return false;
}

// DeleteDirectory @ 14168e1f0

bool __thiscall
FFileManagerGeneric::DeleteDirectory
          (FFileManagerGeneric *this,wchar_t *param_1,bool param_2,bool param_3)

{
  char cVar1;
  char cVar2;
  DWORD dwErrCode;
  FPlatformFileManager *pFVar3;
  IPlatformFile *pIVar4;
  
  if (param_3) {
    pFVar3 = FPlatformFileManager::Get();
    pIVar4 = FPlatformFileManager::GetPlatformFile(pFVar3);
    cVar1 = (**(code **)((longlong)*pIVar4 + 0x1f8))(pIVar4,param_1);
  }
  else {
    pFVar3 = FPlatformFileManager::Get();
    pIVar4 = FPlatformFileManager::GetPlatformFile(pFVar3);
    cVar1 = (**(code **)((longlong)*pIVar4 + 0x128))(pIVar4,param_1);
  }
  if ((cVar1 == '\0') && (!param_2)) {
    dwErrCode = FWindowsPlatformMisc::GetLastError();
    pFVar3 = FPlatformFileManager::Get();
    pIVar4 = FPlatformFileManager::GetPlatformFile(pFVar3);
    cVar2 = (**(code **)((longlong)*pIVar4 + 0x118))(pIVar4,param_1);
    cVar1 = cVar2 == '\0';
    if (cVar2 != '\0') {
      FWindowsPlatformMisc::SetLastError(dwErrCode);
    }
  }
  return (bool)cVar1;
}

// DirectoryExists @ 14168e750

bool __thiscall FFileManagerGeneric::DirectoryExists(FFileManagerGeneric *this,wchar_t *param_1)

{
  undefined1 uVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  
  this_00 = FPlatformFileManager::Get();
  pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
                    /* WARNING: Could not recover jumptable at 0x00014168e77b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x118))
                    (pIVar2,param_1,*(code **)((longlong)*pIVar2 + 0x118));
  return (bool)uVar1;
}

// FileExists @ 141692970

bool __thiscall FFileManagerGeneric::FileExists(FFileManagerGeneric *this,wchar_t *param_1)

{
  undefined1 uVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  
  this_00 = FPlatformFileManager::Get();
  pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
                    /* WARNING: Could not recover jumptable at 0x000141692998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x78))
                    (pIVar2,param_1,*(code **)((longlong)*pIVar2 + 0x78));
  return (bool)uVar1;
}

// FileSize @ 1416929b0

long64 __thiscall FFileManagerGeneric::FileSize(FFileManagerGeneric *this,wchar_t *param_1)

{
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar1;
  long64 lVar2;
  
  this_00 = FPlatformFileManager::Get();
  pIVar1 = FPlatformFileManager::GetPlatformFile(this_00);
                    /* WARNING: Could not recover jumptable at 0x0001416929db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (**(code **)((longlong)*pIVar1 + 0x80))
                    (pIVar1,param_1,*(code **)((longlong)*pIVar1 + 0x80));
  return lVar2;
}

// FindFiles @ 141693340

void __thiscall
FFileManagerGeneric::FindFiles
          (FFileManagerGeneric *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          wchar_t *param_2,wchar_t *param_3)

{
  int iVar1;
  FString *pFVar2;
  ForAnyElementType FVar3;
  char *pcVar4;
  int iVar5;
  FString *__return_storage_ptr__;
  bool bVar6;
  uint uVar7;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (param_2 != (wchar_t *)0x0) {
    ::FString::FString(&local_98,param_2);
    bVar6 = param_3 == (wchar_t *)0x0;
    if (bVar6) {
      pFVar2 = ::FString::FString(&local_68,"");
    }
    else {
      pFVar2 = ::FString::FString(&local_88,param_3);
    }
    local_a8.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = (pFVar2->Data).ArrayNum;
    local_a8.Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
    if ((bVar6) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((!bVar6) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    iVar1 = local_98.Data.ArrayNum + -1;
    if (local_98.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    if (0 < iVar1) {
      FPaths::NormalizeDirectoryName(&local_98);
      uVar7 = 0;
      iVar1 = ::FString::Find(&local_a8,L"*",1,IgnoreCase,FromStart,-1);
      if (iVar1 == -1) {
        FVar3.Data = (FScriptContainerElement *)L"";
        if (local_a8.Data.ArrayNum != 0) {
          FVar3.Data = local_a8.Data.AllocatorInstance.Data;
        }
        iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar3.Data,"");
        if (iVar1 == 0) {
          ::FString::FString(&local_88,"*.*");
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          local_a8.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
          local_a8.Data.ArrayNum = local_88.Data.ArrayNum;
          local_a8.Data.ArrayMax = local_88.Data.ArrayMax;
        }
        else {
          iVar1 = local_a8.Data.ArrayNum + -1;
          if (local_a8.Data.ArrayNum == 0) {
            iVar1 = 0;
          }
          if (1 < iVar1) {
            iVar1 = 1;
          }
          iVar5 = 0;
          if (0 < iVar1) {
            iVar5 = iVar1;
          }
          FVar3.Data = (FScriptContainerElement *)L"";
          if (local_a8.Data.ArrayNum != 0) {
            FVar3.Data = local_a8.Data.AllocatorInstance.Data;
          }
          ::FString::ConstructFromPtrSize(&local_88,(wchar_t *)FVar3.Data,iVar5);
          FVar3.Data = (FScriptContainerElement *)L"";
          if (local_88.Data.ArrayNum != 0) {
            FVar3.Data = local_88.Data.AllocatorInstance.Data;
          }
          iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar3.Data,".");
          __return_storage_ptr__ = &local_58;
          pFVar2 = &local_68;
          if (iVar1 == 0) {
            __return_storage_ptr__ = &local_48;
            pFVar2 = &local_38;
          }
          pcVar4 = "*";
          bVar6 = iVar1 != 0;
          if (iVar1 != 0) {
            pcVar4 = "*.";
          }
          ::FString::FString(pFVar2,pcVar4);
          ::FString::ConcatFF(__return_storage_ptr__,pFVar2,&local_a8);
          if (&local_a8 != __return_storage_ptr__) {
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            local_a8.Data.AllocatorInstance.Data =
                 (__return_storage_ptr__->Data).AllocatorInstance.Data;
            (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a8.Data.ArrayNum = (__return_storage_ptr__->Data).ArrayNum;
            local_a8.Data.ArrayMax = (__return_storage_ptr__->Data).ArrayMax;
            (__return_storage_ptr__->Data).ArrayNum = 0;
            (__return_storage_ptr__->Data).ArrayMax = 0;
          }
          if ((bVar6) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if ((bVar6) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if ((!bVar6) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if ((!bVar6) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
      }
      ::FString::FString(&local_68,"/");
      ::FString::ConcatFF(&local_88,&local_98,&local_68);
      ::FString::ConcatFF(&local_78,&local_88,&local_a8);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        FVar3.Data = local_78.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*this + 0x80))(this,param_1,FVar3.Data,1,uVar7 & 0xffffff00);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// FindFiles @ 1416936b0

void __thiscall
FFileManagerGeneric::FindFiles
          (FFileManagerGeneric *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          wchar_t *param_2,bool param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar5;
  FString *pFVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  undefined **local_58;
  undefined1 local_50;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_48;
  FString local_40;
  undefined1 local_30;
  bool local_2f;
  undefined2 local_2e;
  
  ::FString::FString(&local_78,param_2);
  FPaths::NormalizeFilename(&local_78);
  FPaths::GetCleanFilename(&local_88,&local_78);
  pwVar8 = L"";
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar7.Data = local_88.Data.AllocatorInstance.Data;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"*");
  if (iVar4 != 0) {
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar7.Data = local_88.Data.AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"*.*");
    FVar7.Data = local_88.Data.AllocatorInstance.Data;
    if (iVar4 != 0) {
      bVar3 = false;
      bVar2 = true;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_88.Data.ArrayNum == 0) {
        pFVar6 = &local_98;
        local_98.Data.ArrayMax = local_88.Data.ArrayNum;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_98,
                   local_88.Data.ArrayNum,&local_98.Data.ArrayMax);
        memcpy(local_98.Data.AllocatorInstance.Data,FVar7.Data,(longlong)local_88.Data.ArrayNum * 2)
        ;
        pFVar6 = &local_98;
      }
      goto LAB_1416937d5;
    }
  }
  pFVar6 = ::FString::FString(&local_68,L"*");
  bVar3 = true;
  bVar2 = false;
LAB_1416937d5:
  local_50 = 1;
  local_58 = &___7FFileMatch_FileManagerGenericImpl__6B_;
  local_48 = param_1;
  ::FString::FString(&local_40,pFVar6);
  local_2f = param_4;
  local_2e = 0;
  local_30 = param_3;
  if (bVar2) {
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar3) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  this_00 = FPlatformFileManager::Get();
  pIVar5 = FPlatformFileManager::GetPlatformFile(this_00);
  pcVar1 = *(code **)((longlong)*pIVar5 + 0x140);
  pFVar6 = FPaths::GetPath(&local_68,&local_78);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  (*pcVar1)(pIVar5,pwVar8,&local_58);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  local_58 = &___7FDirectoryVisitor_IPlatformFile__6B_;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// FindFilesRecursive @ 1416938f0

void __thiscall
FFileManagerGeneric::FindFilesRecursive
          (FFileManagerGeneric *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          wchar_t *param_2,wchar_t *param_3,bool param_4,bool param_5,bool param_6)

{
  if (param_6) {
    DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
  }
  FindFilesRecursiveInternal(this,param_1,param_2,param_3,param_4,param_5);
  return;
}

// FindFilesRecursiveInternal @ 141693990

void __thiscall
FFileManagerGeneric::FindFilesRecursiveInternal
          (FFileManagerGeneric *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          wchar_t *param_2,wchar_t *param_3,bool param_4,bool param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar5;
  ForAnyElementType FVar6;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  undefined **local_48;
  undefined1 local_40;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_38;
  FString local_30;
  bool local_20;
  bool local_1f;
  undefined2 local_1e;
  
  ::FString::FString(&local_68,param_3);
  FPaths::NormalizeFilename(&local_68);
  FPaths::GetCleanFilename(&local_78,&local_68);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar6.Data = local_78.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,L"*");
  if (iVar3 != 0) {
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar6.Data = local_78.Data.AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,L"*.*");
    FVar6.Data = local_78.Data.AllocatorInstance.Data;
    if (iVar3 != 0) {
      bVar2 = false;
      bVar1 = true;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_78.Data.ArrayNum == 0) {
        local_88.Data.ArrayMax = local_78.Data.ArrayNum;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_88,
                   local_78.Data.ArrayNum,&local_88.Data.ArrayMax);
        memcpy(local_88.Data.AllocatorInstance.Data,FVar6.Data,(longlong)local_78.Data.ArrayNum * 2)
        ;
      }
      pFVar4 = &local_88;
      goto LAB_141693ab0;
    }
  }
  pFVar4 = ::FString::FString(&local_58,L"*");
  bVar2 = true;
  bVar1 = false;
LAB_141693ab0:
  local_40 = 1;
  local_48 = &___7FFileMatch_FileManagerGenericImpl__6B_;
  local_38 = param_1;
  ::FString::FString(&local_30,pFVar4);
  local_20 = param_4;
  local_1f = param_5;
  local_1e = 1;
  if (bVar1) {
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar2) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  this_00 = FPlatformFileManager::Get();
  pIVar5 = FPlatformFileManager::GetPlatformFile(this_00);
  (**(code **)((longlong)*pIVar5 + 0x1d0))(pIVar5,param_2,&local_48);
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  local_48 = &___7FDirectoryVisitor_IPlatformFile__6B_;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// GetAccessTimeStamp @ 1416984b0

FDateTime __thiscall
FFileManagerGeneric::GetAccessTimeStamp(FFileManagerGeneric *this,wchar_t *param_1)

{
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar1;
  
  this_00 = FPlatformFileManager::Get();
  pIVar1 = FPlatformFileManager::GetPlatformFile(this_00);
  (**(code **)((longlong)*pIVar1 + 0xc0))(pIVar1,param_1);
  return (FDateTime)(long64)param_1;
}

// GetFileAgeSeconds @ 1416995f0

double __thiscall FFileManagerGeneric::GetFileAgeSeconds(FFileManagerGeneric *this,wchar_t *param_1)

{
  char cVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  FDateTime FVar3;
  longlong *plVar4;
  undefined1 local_res20 [8];
  
  this_00 = FPlatformFileManager::Get();
  pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x78))(pIVar2,param_1);
  if (cVar1 == '\0') {
    return __real_bff0000000000000;
  }
  FVar3 = FDateTime::UtcNow();
  plVar4 = (longlong *)(**(code **)((longlong)*this + 0xd8))(this,local_res20,param_1);
  return (double)(*(longlong *)FVar3.Ticks - *plVar4) * __real_3e7ad7f29abcaf48;
}

// GetFilenameOnDisk @ 141699690

FString * __thiscall
FFileManagerGeneric::GetFilenameOnDisk
          (FFileManagerGeneric *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar1;
  
  this_00 = FPlatformFileManager::Get();
  pIVar1 = FPlatformFileManager::GetPlatformFile(this_00);
  (**(code **)((longlong)*pIVar1 + 200))(pIVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetStatData @ 14169ae70

FFileStatData * __thiscall
FFileManagerGeneric::GetStatData
          (FFileManagerGeneric *this,FFileStatData *__return_storage_ptr__,wchar_t *param_1)

{
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar1;
  
  this_00 = FPlatformFileManager::Get();
  pIVar1 = FPlatformFileManager::GetPlatformFile(this_00);
  (**(code **)((longlong)*pIVar1 + 0x130))(pIVar1,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetTimeStamp @ 1416a1440

FDateTime __thiscall FFileManagerGeneric::GetTimeStamp(FFileManagerGeneric *this,wchar_t *param_1)

{
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar1;
  
  this_00 = FPlatformFileManager::Get();
  pIVar1 = FPlatformFileManager::GetPlatformFile(this_00);
  (**(code **)((longlong)*pIVar1 + 0xb0))(pIVar1,param_1);
  return (FDateTime)(long64)param_1;
}

// GetTimeStampPair @ 1416a1490

void __thiscall
FFileManagerGeneric::GetTimeStampPair
          (FFileManagerGeneric *this,wchar_t *param_1,wchar_t *param_2,FDateTime *param_3,
          FDateTime *param_4)

{
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar1;
  
  this_00 = FPlatformFileManager::Get();
  pIVar1 = FPlatformFileManager::GetPlatformFile(this_00);
                    /* WARNING: Could not recover jumptable at 0x0001416a14da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x1b8))(pIVar1,param_1,param_2,param_3);
  return;
}

// IsReadOnly @ 1416b0c40

bool __thiscall FFileManagerGeneric::IsReadOnly(FFileManagerGeneric *this,wchar_t *param_1)

{
  undefined1 uVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  
  this_00 = FPlatformFileManager::Get();
  pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
                    /* WARNING: Could not recover jumptable at 0x0001416b0c6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x98))
                    (pIVar2,param_1,*(code **)((longlong)*pIVar2 + 0x98));
  return (bool)uVar1;
}

// IsSandboxEnabled @ 1416b0cd0

bool __thiscall FFileManagerGeneric::IsSandboxEnabled(FFileManagerGeneric *this)

{
  undefined1 uVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  
  this_00 = FPlatformFileManager::Get();
  pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
                    /* WARNING: Could not recover jumptable at 0x0001416b0cef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,*(code **)((longlong)*pIVar2 + 0x10));
  return (bool)uVar1;
}

// IterateDirectory @ 1416b0f30

bool __thiscall
FFileManagerGeneric::IterateDirectory
          (FFileManagerGeneric *this,wchar_t *param_1,FDirectoryVisitor *param_2)

{
  undefined1 uVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  
  this_00 = FPlatformFileManager::Get();
  pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
                    /* WARNING: Could not recover jumptable at 0x0001416b0f6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x140))
                    (pIVar2,param_1,param_2,*(code **)((longlong)*pIVar2 + 0x140));
  return (bool)uVar1;
}

// IterateDirectory @ 1416b0f80

bool __thiscall
FFileManagerGeneric::IterateDirectory
          (FFileManagerGeneric *this,wchar_t *param_1,
          TFunctionRef<bool___cdecl(wchar_t_const_*,bool)> *param_2)

{
  undefined1 uVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  this_00 = FPlatformFileManager::Get();
  pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
  local_18 = *(undefined8 *)param_2;
  local_10 = *(undefined8 *)&param_2->field_0x8;
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x138))(pIVar2,param_1,&local_18);
  return (bool)uVar1;
}

// IterateDirectoryRecursively @ 1416b0fe0

bool __thiscall
FFileManagerGeneric::IterateDirectoryRecursively
          (FFileManagerGeneric *this,wchar_t *param_1,FDirectoryVisitor *param_2)

{
  undefined1 uVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  
  this_00 = FPlatformFileManager::Get();
  pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
                    /* WARNING: Could not recover jumptable at 0x0001416b101a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x1d0))
                    (pIVar2,param_1,param_2,*(code **)((longlong)*pIVar2 + 0x1d0));
  return (bool)uVar1;
}

// IterateDirectoryRecursively @ 1416b1030

bool __thiscall
FFileManagerGeneric::IterateDirectoryRecursively
          (FFileManagerGeneric *this,wchar_t *param_1,
          TFunctionRef<bool___cdecl(wchar_t_const_*,bool)> *param_2)

{
  undefined1 uVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  this_00 = FPlatformFileManager::Get();
  pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
  local_18 = *(undefined8 *)param_2;
  local_10 = *(undefined8 *)&param_2->field_0x8;
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x1c8))(pIVar2,param_1,&local_18);
  return (bool)uVar1;
}

// IterateDirectoryStat @ 1416b1090

bool __thiscall
FFileManagerGeneric::IterateDirectoryStat
          (FFileManagerGeneric *this,wchar_t *param_1,FDirectoryStatVisitor *param_2)

{
  undefined1 uVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  
  this_00 = FPlatformFileManager::Get();
  pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
                    /* WARNING: Could not recover jumptable at 0x0001416b10ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x150))
                    (pIVar2,param_1,param_2,*(code **)((longlong)*pIVar2 + 0x150));
  return (bool)uVar1;
}

// IterateDirectoryStat @ 1416b10e0

bool __thiscall
FFileManagerGeneric::IterateDirectoryStat
          (FFileManagerGeneric *this,wchar_t *param_1,
          TFunctionRef<bool___cdecl(wchar_t_const_*,FFileStatData_const_&)> *param_2)

{
  undefined1 uVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  this_00 = FPlatformFileManager::Get();
  pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
  local_18 = *(undefined8 *)param_2;
  local_10 = *(undefined8 *)&param_2->field_0x8;
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x148))(pIVar2,param_1,&local_18);
  return (bool)uVar1;
}

// IterateDirectoryStatRecursively @ 1416b1140

bool __thiscall
FFileManagerGeneric::IterateDirectoryStatRecursively
          (FFileManagerGeneric *this,wchar_t *param_1,FDirectoryStatVisitor *param_2)

{
  undefined1 uVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  
  this_00 = FPlatformFileManager::Get();
  pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
                    /* WARNING: Could not recover jumptable at 0x0001416b117a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x1e0))
                    (pIVar2,param_1,param_2,*(code **)((longlong)*pIVar2 + 0x1e0));
  return (bool)uVar1;
}

// IterateDirectoryStatRecursively @ 1416b1190

bool __thiscall
FFileManagerGeneric::IterateDirectoryStatRecursively
          (FFileManagerGeneric *this,wchar_t *param_1,
          TFunctionRef<bool___cdecl(wchar_t_const_*,FFileStatData_const_&)> *param_2)

{
  undefined1 uVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  this_00 = FPlatformFileManager::Get();
  pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
  local_18 = *(undefined8 *)param_2;
  local_10 = *(undefined8 *)&param_2->field_0x8;
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x1d8))(pIVar2,param_1,&local_18);
  return (bool)uVar1;
}

// MakeDirectory @ 1416b2030

bool __thiscall
FFileManagerGeneric::MakeDirectory(FFileManagerGeneric *this,wchar_t *param_1,bool param_2)

{
  undefined1 uVar1;
  FPlatformFileManager *pFVar2;
  IPlatformFile *pIVar3;
  
  if (param_2) {
    pFVar2 = FPlatformFileManager::Get();
    pIVar3 = FPlatformFileManager::GetPlatformFile(pFVar2);
                    /* WARNING: Could not recover jumptable at 0x0001416b2060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((longlong)*pIVar3 + 0x200))
                      (pIVar3,param_1,*(code **)((longlong)*pIVar3 + 0x200));
    return (bool)uVar1;
  }
  pFVar2 = FPlatformFileManager::Get();
  pIVar3 = FPlatformFileManager::GetPlatformFile(pFVar2);
                    /* WARNING: Could not recover jumptable at 0x0001416b2085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*pIVar3 + 0x120))
                    (pIVar3,param_1,*(code **)((longlong)*pIVar3 + 0x120));
  return (bool)uVar1;
}

// Move @ 1416b43f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FFileManagerGeneric::Move
          (FFileManagerGeneric *this,wchar_t *param_1,wchar_t *param_2,bool param_3,bool param_4,
          bool param_5,bool param_6)

{
  code *pcVar1;
  float fVar2;
  char cVar3;
  FString *pFVar4;
  FPlatformFileManager *pFVar5;
  IPlatformFile *pIVar6;
  wchar_t *pwVar7;
  int iVar8;
  FString local_38;
  FString local_28 [2];
  
  pcVar1 = *(code **)((longlong)*this + 0x60);
  ::FString::FString(&local_38,param_1);
  pFVar4 = FPaths::GetPath(local_28,&local_38);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  (*pcVar1)(this,pwVar7,1);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar5 = FPlatformFileManager::Get();
  pIVar6 = FPlatformFileManager::GetPlatformFile(pFVar5);
  cVar3 = (**(code **)((longlong)*pIVar6 + 0x78))(pIVar6,param_1);
  fVar2 = __real_3f000000;
  if ((cVar3 != '\0') && (param_3)) {
    pFVar5 = FPlatformFileManager::Get();
    pIVar6 = FPlatformFileManager::GetPlatformFile(pFVar5);
    cVar3 = (**(code **)((longlong)*pIVar6 + 0x88))(pIVar6,param_1);
    if ((cVar3 == '\0') && (!param_6)) {
      if (2 < (byte)LogFileManager._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFileManager);
      }
      FWindowsPlatformProcess::Sleep(fVar2);
      pFVar5 = FPlatformFileManager::Get();
      pIVar6 = FPlatformFileManager::GetPlatformFile(pFVar5);
      cVar3 = (**(code **)((longlong)*pIVar6 + 0x88))(pIVar6,param_1);
      if (cVar3 == '\0') {
        if ((byte)LogFileManager._0_1_ < 2) {
          return false;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFileManager);
        return false;
      }
      if (2 < (byte)LogFileManager._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFileManager);
      }
    }
  }
  pFVar5 = FPlatformFileManager::Get();
  pIVar6 = FPlatformFileManager::GetPlatformFile(pFVar5);
  cVar3 = (**(code **)((longlong)*pIVar6 + 0xa0))(pIVar6,param_1,param_2);
  if (cVar3 != '\0') {
    return true;
  }
  if (!param_6) {
    iVar8 = 10;
    FWindowsPlatformMisc::GetLastError();
    do {
      iVar8 = iVar8 + -1;
      if (2 < (byte)LogFileManager._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFileManager);
      }
      FWindowsPlatformProcess::Sleep(fVar2);
      pFVar5 = FPlatformFileManager::Get();
      pIVar6 = FPlatformFileManager::GetPlatformFile(pFVar5);
      cVar3 = (**(code **)((longlong)*pIVar6 + 0xa0))(pIVar6,param_1,param_2);
      if (cVar3 != '\0') {
        if ((byte)LogFileManager._0_1_ < 3) {
          return true;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFileManager);
        return true;
      }
      FWindowsPlatformMisc::GetLastError();
    } while (iVar8 != 0);
    if (1 < (byte)LogFileManager._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFileManager);
      return false;
    }
  }
  return false;
}

// ProcessCommandLineOptions @ 1416b6ea0

void __thiscall FFileManagerGeneric::ProcessCommandLineOptions(FFileManagerGeneric *this)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  pwVar3 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar3,L"CLEANSCREENSHOTS");
  pwVar3 = L"";
  if (bVar2) {
    pcVar1 = *(code **)((longlong)*this + 0x68);
    pFVar4 = FPaths::ScreenShotDir(&local_18);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    (*pcVar1)(this,pwVar5,0,1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pwVar5 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar5,L"CLEANLOGS");
  if (bVar2) {
    pcVar1 = *(code **)((longlong)*this + 0x68);
    pFVar4 = FPaths::ProjectLogDir(&local_18);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar3 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    (*pcVar1)(this,pwVar3,0,1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SendMessageToServer @ 1416bf370

bool __thiscall
FFileManagerGeneric::SendMessageToServer
          (FFileManagerGeneric *this,wchar_t *param_1,IFileServerMessageHandler *param_2)

{
  undefined1 uVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  
  this_00 = FPlatformFileManager::Get();
  pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
                    /* WARNING: Could not recover jumptable at 0x0001416bf3aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x228))
                    (pIVar2,param_1,param_2,*(code **)((longlong)*pIVar2 + 0x228));
  return (bool)uVar1;
}

// SetSandboxEnabled @ 1416c0900

void __thiscall FFileManagerGeneric::SetSandboxEnabled(FFileManagerGeneric *this,bool param_1)

{
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar1;
  
  this_00 = FPlatformFileManager::Get();
  pIVar1 = FPlatformFileManager::GetPlatformFile(this_00);
                    /* WARNING: Could not recover jumptable at 0x0001416c0928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 8))(pIVar1,param_1,*(code **)((longlong)*pIVar1 + 8));
  return;
}

// SetTimeStamp @ 1416c11a0

bool __thiscall
FFileManagerGeneric::SetTimeStamp(FFileManagerGeneric *this,wchar_t *param_1,FDateTime param_2)

{
  char cVar1;
  FPlatformFileManager *pFVar2;
  IPlatformFile *pIVar3;
  
  pFVar2 = FPlatformFileManager::Get();
  pIVar3 = FPlatformFileManager::GetPlatformFile(pFVar2);
  cVar1 = (**(code **)((longlong)*pIVar3 + 0x78))(pIVar3,param_1);
  if (cVar1 == '\0') {
    return false;
  }
  pFVar2 = FPlatformFileManager::Get();
  pIVar3 = FPlatformFileManager::GetPlatformFile(pFVar2);
  (**(code **)((longlong)*pIVar3 + 0xb8))(pIVar3,param_1,param_2.Ticks);
  return true;
}

