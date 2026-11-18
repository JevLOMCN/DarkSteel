// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamingFile
// Functions: 34

// InitializeInternal @ 148be7d90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FStreamingNetworkPlatformFile::InitializeInternal
          (FStreamingNetworkPlatformFile *this,IPlatformFile *param_1,wchar_t *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  wchar_t *pwVar4;
  FString *pFVar5;
  size_t sVar6;
  longlong *plVar7;
  ulong64 uVar8;
  void *pvVar9;
  undefined8 uVar10;
  ForAnyElementType FVar11;
  int iVar12;
  uint local_res18 [2];
  int local_res20 [2];
  undefined8 local_1e8;
  FString local_1e0;
  FString local_1d0;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_1b8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_110;
  TStringView<wchar_t> local_f8;
  wchar_t *local_e8;
  undefined4 local_e0;
  FArchiveState local_d8;
  undefined8 local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  if (param_2 == (wchar_t *)0x0) {
    if (1 < (byte)LogStreamingPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreamingPlatformFile)
      ;
    }
    *(undefined1 *)&this->_padding_ = 0;
    return false;
  }
  pwVar4 = FCommandLine::Get();
  bVar2 = FParse::Value(pwVar4,L"fileserverport=",local_res20);
  if (bVar2) {
    if (3 < (byte)LogStreamingPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogStreamingPlatformFile)
      ;
    }
    *(int *)((longlong)&this->_padding_ + 4) = local_res20[0];
  }
  local_res18[0] = 0x17;
  bVar2 = false;
  iVar12 = 0;
  local_1e8 = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  local_1b8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_1b8);
  local_1b8._padding_ = 0;
  local_1b8.ArchiveName.ComparisonIndex.Value = 0;
  local_1b8.ArchiveName.Number = 0;
  local_1b8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_1b8.Bytes = &local_110;
  FArchiveState::SetIsSaving((FArchiveState *)&local_1b8,true);
  (**(code **)(local_1b8._padding_ + 0x108))(&local_1b8,0);
  local_1b8._padding_ = (longlong)&___7FNetworkFileArchive__6B_;
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  if (*(uint **)(local_1b8._padding_ + 8) < *(uint **)local_1b8._padding_ + 1) {
    if ((local_1b8._padding_ & 0x10000U) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1b8,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1b8,local_res18);
    }
  }
  else {
    local_res18[0] = **(uint **)local_1b8._padding_;
    *(longlong *)local_1b8._padding_ = *(longlong *)local_1b8._padding_ + 4;
  }
  (**(code **)(this->_padding_ + 0x290))(this,&local_1b8);
  local_d8._padding_ = 0;
  local_d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_d8._40_8_ = 0;
  local_d8.ArSerializingDefaults = 0;
  local_d8.ArPortFlags = 0;
  local_d8.ArMaxSerializeSize = 0;
  local_d8.ArUEVer.FileVersionUE4 = 0;
  local_d8.ArUEVer.FileVersionUE5 = 0;
  local_d8.ArLicenseeUEVer = 0;
  local_d8.ArEngineVer.Major = 0;
  local_d8.ArEngineVer.Minor = 0;
  local_d8.ArEngineVer.Patch = 0;
  local_d8.ArEngineVer._6_2_ = 0;
  local_d8.ArEngineVer.Changelist = 0;
  local_d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_d8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_d8.SerializedProperty = (FProperty *)0x0;
  local_d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_d8.bCustomVersionsAreReset = false;
  local_d8._129_7_ = 0;
  local_d8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_d8);
  local_38 = 0;
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_d8._padding_ = (longlong)&___7FArrayReader__6B_;
  FArchiveState::SetIsLoading(&local_d8,true);
  (**(code **)(local_d8._padding_ + 0x108))(&local_d8,0);
  cVar3 = (**(code **)(this->_padding_ + 0x260))(this,&local_110,&pvStack_40);
  if (cVar3 != '\0') {
    local_1e8 = 0;
    local_res18[0] = 0;
    (**(code **)(this->_padding_ + 0x298))(this,&local_d8,&local_1e8,local_res18);
    pFVar5 = FPaths::EngineDir(&local_1d0);
    if ((pFVar5->Data).ArrayNum == 0) {
      local_f8.DataPtr = L"";
    }
    else {
      local_f8.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    if ((FScriptContainerElement *)local_f8.DataPtr != (FScriptContainerElement *)0x0) {
      sVar6 = wcslen(local_f8.DataPtr);
      iVar12 = (int)sVar6;
    }
    local_e8 = L"Config/BaseEngine.ini";
    local_e0 = 0x15;
    local_f8.Size = iVar12;
    FPaths::CombineInternal(&local_1e0,&local_f8,2);
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    }
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_1e0.Data.ArrayNum != 0) {
      FVar11.Data = local_1e0.Data.AllocatorInstance.Data;
    }
    plVar7 = (longlong *)(**(code **)(this->_padding_ + 0xe8))(this,FVar11.Data,0);
    if (plVar7 == (longlong *)0x0) {
      UE::Logging::Private::BasicFatalLog
                (&::LOG_Static,(FLogCategoryBase *)&LogStreamingPlatformFile);
    }
    else {
      uVar8 = (**(code **)(*plVar7 + 0x50))(plVar7);
      pvVar9 = FMemory::Malloc(uVar8,0);
      lVar1 = *plVar7;
      uVar10 = (**(code **)(lVar1 + 0x50))(plVar7);
      cVar3 = (**(code **)(lVar1 + 0x20))(plVar7,pvVar9,uVar10);
      if (cVar3 == '\0') {
        UE::Logging::Private::BasicFatalLog
                  (&::LOG_Static,(FLogCategoryBase *)&LogStreamingPlatformFile);
      }
      FMemory::Free(pvVar9);
      (**(code **)*plVar7)(plVar7,1);
    }
    ::FString::PrintfImpl(&local_1d0,L"-StreamingHostIP=%s");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_1d0.Data.ArrayNum != 0) {
      FVar11.Data = local_1d0.Data.AllocatorInstance.Data;
    }
    FCommandLine::AddToSubprocessCommandLine((wchar_t *)FVar11.Data,AllContexts);
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    }
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    bVar2 = true;
  }
  if (pvStack_40 != (void *)0x0) {
    FMemory::Free(pvStack_40);
  }
  FArchive::~FArchive((FArchive *)&local_d8);
  if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_1b8);
  return bVar2;
}

// InitializeAfterSetActive @ 148be81c0

void __thiscall
FStreamingNetworkPlatformFile::InitializeAfterSetActive(FStreamingNetworkPlatformFile *this)

{
  return;
}

// ShouldBeUsed @ 148be81d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FStreamingNetworkPlatformFile::ShouldBeUsed
          (FStreamingNetworkPlatformFile *this,IPlatformFile *param_1,wchar_t *param_2)

{
  bool bVar1;
  
  bVar1 = FNetworkPlatformFile::ShouldBeUsed((FNetworkPlatformFile *)this,param_1,param_2);
  if (!bVar1) {
    return bVar1;
  }
  bVar1 = FParse::Param(param_2,L"Streaming");
  if (bVar1) {
    FParse::Param(param_2,L"AllowCaching");
  }
  else {
    bVar1 = FParse::Param(param_2,L"AllowCaching");
    if (bVar1) {
      bVar1 = false;
      goto LAB_148be8231;
    }
    if (3 < (byte)LogStreamingPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogStreamingPlatformFile)
      ;
    }
  }
  bVar1 = true;
LAB_148be8231:
  if ((3 < (byte)LogStreamingPlatformFile._0_1_) && (bVar1 != false)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogStreamingPlatformFile);
  }
  return bVar1;
}

// GetLowerLevel @ 148be8260

IPlatformFile * __thiscall
FStreamingNetworkPlatformFile::GetLowerLevel(FStreamingNetworkPlatformFile *this)

{
  return (IPlatformFile *)0x0;
}

// SetLowerLevel @ 148be8270

void __thiscall
FStreamingNetworkPlatformFile::SetLowerLevel
          (FStreamingNetworkPlatformFile *this,IPlatformFile *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StreamingFile\\Public\\StreamingNetworkPlatformFile.h"
                     ,0xbc,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetName @ 148be82b0

wchar_t * __thiscall FStreamingNetworkPlatformFile::GetName(FStreamingNetworkPlatformFile *this)

{
  return L"StreamingFile";
}

// DeleteFile @ 148be82c0

bool __thiscall
FStreamingNetworkPlatformFile::DeleteFile(FStreamingNetworkPlatformFile *this,wchar_t *param_1)

{
  longlong *lpCriticalSection;
  char cVar1;
  bool bVar2;
  uint local_res8 [4];
  uint local_res18 [2];
  undefined8 local_res20;
  FString local_1a8;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_198;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f0;
  undefined1 local_d8 [8];
  FFastPathLoadBuffer *pFStack_d0;
  uchar *local_c8;
  uchar *puStack_c0;
  uchar *local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  long64 lStack_a0;
  FPackageFileVersion local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  FCustomVersionContainer *pFStack_80;
  FCustomPropertyListNode *local_78;
  FArchiveSavePackageData *pFStack_70;
  FProperty *local_68;
  FArchiveSerializedPropertyChain *pFStack_60;
  undefined8 local_58;
  FArchiveState *pFStack_50;
  undefined8 local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::FString::FString(&local_1a8,param_1);
    FNetworkPlatformFile::MakeStandardNetworkFilename((FNetworkPlatformFile *)this,&local_1a8);
    local_res18[0] = 1;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_res20 = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_198);
    local_198._padding_ = 0;
    local_198._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_198.Bytes = &local_f0;
    local_198.ArchiveName.ComparisonIndex.Value = 0;
    local_198.ArchiveName.Number = 0;
    FArchiveState::SetIsSaving((FArchiveState *)&local_198,true);
    (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
    local_198._padding_ = (longlong)&___7FStreamingNetworkFileArchive__6B_;
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    if (*(uint **)(local_198._padding_ + 8) < *(uint **)local_198._padding_ + 1) {
      if ((local_198._padding_ & 0x10000U) == 0) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_198,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_198,local_res18);
      }
    }
    else {
      local_res18[0] = **(uint **)local_198._padding_;
      *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 4;
    }
    ::operator<<((FArchive *)&local_198,&local_1a8);
    local_d8 = (undefined1  [8])0x0;
    pFStack_d0 = (FFastPathLoadBuffer *)0x0;
    local_c8 = (uchar *)0x0;
    puStack_c0 = (uchar *)0x0;
    local_b8 = (uchar *)0x0;
    uStack_b0 = 0;
    local_a8 = 0;
    lStack_a0 = 0;
    local_98.FileVersionUE4 = 0;
    local_98.FileVersionUE5 = 0;
    uStack_90 = 0;
    local_88._0_2_ = 0;
    local_88._2_2_ = 0;
    local_88._4_4_ = 0;
    pFStack_80 = (FCustomVersionContainer *)0x0;
    local_78 = (FCustomPropertyListNode *)0x0;
    pFStack_70 = (FArchiveSavePackageData *)0x0;
    local_68 = (FProperty *)0x0;
    pFStack_60 = (FArchiveSerializedPropertyChain *)0x0;
    local_58 = 0;
    pFStack_50 = (FArchiveState *)0x0;
    FArchiveState::FArchiveState((FArchiveState *)local_d8);
    local_38 = 0;
    local_48 = 0;
    pvStack_40 = (void *)0x0;
    local_d8 = (undefined1  [8])&___7FArrayReader__6B_;
    FArchiveState::SetIsLoading((FArchiveState *)local_d8,true);
    (**(code **)((longlong)local_d8 + 0x108))(local_d8,0);
    cVar1 = (**(code **)(this->_padding_ + 0x260))(this,&local_f0,&pvStack_40);
    if (cVar1 == '\0') {
      bVar2 = false;
    }
    else {
      local_res8[0] = 0;
      if (pFStack_d0->EndFastPathLoadBuffer <
          (uint *)((longlong)pFStack_d0->StartFastPathLoadBuffer + 4)) {
        if ((uStack_b0 & 0x10000) == 0) {
          if (*(code **)((longlong)local_d8 + 0x188) == FArrayReader::Serialize) {
            FArrayReader::Serialize((FArrayReader *)local_d8,local_res8,4);
          }
          else {
            (**(code **)((longlong)local_d8 + 0x188))();
          }
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)local_d8,local_res8);
        }
      }
      else {
        local_res8[0] = *(uint *)pFStack_d0->StartFastPathLoadBuffer;
        pFStack_d0->StartFastPathLoadBuffer = pFStack_d0->StartFastPathLoadBuffer + 4;
      }
      bVar2 = local_res8[0] != 0;
    }
    if (pvStack_40 != (void *)0x0) {
      FMemory::Free(pvStack_40);
    }
    FArchive::~FArchive((FArchive *)local_d8);
    if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_198);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsReadOnly @ 148be8570

bool __thiscall
FStreamingNetworkPlatformFile::IsReadOnly(FStreamingNetworkPlatformFile *this,wchar_t *param_1)

{
  undefined2 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0xffffffffffffffff;
  (**(code **)(this->_padding_ + 0x288))(0,param_1,&local_28);
  return (bool)local_28._1_1_;
}

// MoveFile @ 148be85b0

bool __thiscall
FStreamingNetworkPlatformFile::MoveFile
          (FStreamingNetworkPlatformFile *this,wchar_t *param_1,wchar_t *param_2)

{
  longlong *lpCriticalSection;
  char cVar1;
  bool bVar2;
  uint local_res8 [2];
  uint local_res20 [2];
  FString local_1b0;
  FString local_1a0;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_188;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_e0;
  undefined1 local_c8 [8];
  FFastPathLoadBuffer *pFStack_c0;
  uchar *local_b8;
  uchar *puStack_b0;
  uchar *local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  long64 lStack_90;
  FPackageFileVersion local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  FCustomVersionContainer *pFStack_70;
  FCustomPropertyListNode *local_68;
  FArchiveSavePackageData *pFStack_60;
  FProperty *local_58;
  FArchiveSerializedPropertyChain *pFStack_50;
  undefined8 local_48;
  FArchiveState *pFStack_40;
  undefined8 local_38;
  void *pvStack_30;
  undefined8 local_28;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::FString::FString(&local_1a0,param_2);
    FNetworkPlatformFile::MakeStandardNetworkFilename((FNetworkPlatformFile *)this,&local_1a0);
    ::FString::FString(&local_1b0,param_1);
    FNetworkPlatformFile::MakeStandardNetworkFilename((FNetworkPlatformFile *)this,&local_1b0);
    local_res20[0] = 2;
    local_188._padding_ = 0;
    local_188._padding_ = 0;
    local_188._padding_ = 0;
    local_188._padding_ = 0;
    local_188._padding_ = 0;
    local_188._padding_ = 0;
    local_188._padding_ = 0;
    local_188._padding_ = 0;
    local_188._padding_ = 0;
    local_188._padding_ = 0;
    local_188._padding_ = 0;
    local_188._padding_ = 0;
    local_188._padding_ = 0;
    local_188._padding_ = 0;
    local_188._padding_ = 0;
    local_188._padding_ = 0;
    local_188._padding_ = 0;
    local_188._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_188);
    local_188._padding_ = 0;
    local_188._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_188.Bytes = &local_e0;
    local_188.ArchiveName.ComparisonIndex.Value = 0;
    local_188.ArchiveName.Number = 0;
    FArchiveState::SetIsSaving((FArchiveState *)&local_188,true);
    (**(code **)(local_188._padding_ + 0x108))(&local_188,0);
    local_188._padding_ = (longlong)&___7FStreamingNetworkFileArchive__6B_;
    local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.ArrayNum = 0;
    local_e0.ArrayMax = 0;
    if (*(uint **)(local_188._padding_ + 8) < *(uint **)local_188._padding_ + 1) {
      if ((local_188._padding_ & 0x10000U) == 0) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_188,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_188,local_res20);
      }
    }
    else {
      local_res20[0] = **(uint **)local_188._padding_;
      *(longlong *)local_188._padding_ = *(longlong *)local_188._padding_ + 4;
    }
    ::operator<<((FArchive *)&local_188,&local_1a0);
    ::operator<<((FArchive *)&local_188,&local_1b0);
    local_c8 = (undefined1  [8])0x0;
    pFStack_c0 = (FFastPathLoadBuffer *)0x0;
    local_b8 = (uchar *)0x0;
    puStack_b0 = (uchar *)0x0;
    local_a8 = (uchar *)0x0;
    uStack_a0 = 0;
    local_98 = 0;
    lStack_90 = 0;
    local_88.FileVersionUE4 = 0;
    local_88.FileVersionUE5 = 0;
    uStack_80 = 0;
    local_78._0_2_ = 0;
    local_78._2_2_ = 0;
    local_78._4_4_ = 0;
    pFStack_70 = (FCustomVersionContainer *)0x0;
    local_68 = (FCustomPropertyListNode *)0x0;
    pFStack_60 = (FArchiveSavePackageData *)0x0;
    local_58 = (FProperty *)0x0;
    pFStack_50 = (FArchiveSerializedPropertyChain *)0x0;
    local_48 = 0;
    pFStack_40 = (FArchiveState *)0x0;
    FArchiveState::FArchiveState((FArchiveState *)local_c8);
    local_28 = 0;
    local_38 = 0;
    pvStack_30 = (void *)0x0;
    local_c8 = (undefined1  [8])&___7FArrayReader__6B_;
    FArchiveState::SetIsLoading((FArchiveState *)local_c8,true);
    (**(code **)((longlong)local_c8 + 0x108))(local_c8,0);
    cVar1 = (**(code **)(this->_padding_ + 0x260))(this,&local_e0,&pvStack_30);
    if (cVar1 == '\0') {
      bVar2 = false;
    }
    else {
      local_res8[0] = 0;
      if (pFStack_c0->EndFastPathLoadBuffer <
          (uint *)((longlong)pFStack_c0->StartFastPathLoadBuffer + 4)) {
        if ((uStack_a0 & 0x10000) == 0) {
          if (*(code **)((longlong)local_c8 + 0x188) == FArrayReader::Serialize) {
            FArrayReader::Serialize((FArrayReader *)local_c8,local_res8,4);
          }
          else {
            (**(code **)((longlong)local_c8 + 0x188))();
          }
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)local_c8,local_res8);
        }
      }
      else {
        local_res8[0] = *(uint *)pFStack_c0->StartFastPathLoadBuffer;
        pFStack_c0->StartFastPathLoadBuffer = pFStack_c0->StartFastPathLoadBuffer + 4;
      }
      bVar2 = local_res8[0] != 0;
    }
    if (pvStack_30 != (void *)0x0) {
      FMemory::Free(pvStack_30);
    }
    FArchive::~FArchive((FArchive *)local_c8);
    if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_188);
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetReadOnly @ 148be88a0

bool __thiscall
FStreamingNetworkPlatformFile::SetReadOnly
          (FStreamingNetworkPlatformFile *this,wchar_t *param_1,bool param_2)

{
  uint *puVar1;
  longlong *lpCriticalSection;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint local_res8 [2];
  FString local_1a8;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_198;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f0;
  undefined1 local_d8 [8];
  FFastPathLoadBuffer *pFStack_d0;
  uchar *local_c8;
  uchar *puStack_c0;
  uchar *local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  long64 lStack_a0;
  FPackageFileVersion local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  FCustomVersionContainer *pFStack_80;
  FCustomPropertyListNode *local_78;
  FArchiveSavePackageData *pFStack_70;
  FProperty *local_68;
  FArchiveSerializedPropertyChain *pFStack_60;
  undefined8 local_58;
  FArchiveState *pFStack_50;
  undefined8 local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res8[0] = 3;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_198);
  local_198._padding_ = 0;
  local_198._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_198.Bytes = &local_f0;
  local_198.ArchiveName.ComparisonIndex.Value = 0;
  local_198.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_198,true);
  (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
  local_198._padding_ = (longlong)&___7FStreamingNetworkFileArchive__6B_;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  if (*(uint **)(local_198._padding_ + 8) < *(uint **)local_198._padding_ + 1) {
    if ((local_198._padding_ & 0x10000U) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_198,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_198,local_res8);
    }
  }
  else {
    local_res8[0] = **(uint **)local_198._padding_;
    *(ulonglong *)local_198._padding_ = *(ulonglong *)local_198._padding_ + 4;
  }
  ::FString::FString(&local_1a8,param_1);
  FNetworkPlatformFile::MakeStandardNetworkFilename((FNetworkPlatformFile *)this,&local_1a8);
  ::operator<<((FArchive *)&local_198,&local_1a8);
  if (*(ulonglong *)(local_198._padding_ + 8) < *(ulonglong *)local_198._padding_ + 4) {
    local_res8[0] = 0;
    if ((local_198._padding_ & 1U) == 0) {
      local_res8[0] = (uint)param_2;
    }
    if (*(code **)(local_198._padding_ + 0x188) ==
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_198,local_res8,4);
    }
    else {
      (**(code **)(local_198._padding_ + 0x188))();
    }
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)&local_198);
    }
  }
  else {
    *(ulonglong *)local_198._padding_ = *(ulonglong *)local_198._padding_ + 4;
  }
  local_d8 = (undefined1  [8])0x0;
  pFStack_d0 = (FFastPathLoadBuffer *)0x0;
  local_c8 = (uchar *)0x0;
  puStack_c0 = (uchar *)0x0;
  local_b8 = (uchar *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  lStack_a0 = 0;
  local_98.FileVersionUE4 = 0;
  local_98.FileVersionUE5 = 0;
  uStack_90 = 0;
  local_88._0_2_ = 0;
  local_88._2_2_ = 0;
  local_88._4_4_ = 0;
  pFStack_80 = (FCustomVersionContainer *)0x0;
  local_78 = (FCustomPropertyListNode *)0x0;
  pFStack_70 = (FArchiveSavePackageData *)0x0;
  local_68 = (FProperty *)0x0;
  pFStack_60 = (FArchiveSerializedPropertyChain *)0x0;
  local_58 = 0;
  pFStack_50 = (FArchiveState *)0x0;
  FArchiveState::FArchiveState((FArchiveState *)local_d8);
  local_38 = 0;
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_d8 = (undefined1  [8])&___7FArrayReader__6B_;
  FArchiveState::SetIsLoading((FArchiveState *)local_d8,true);
  (**(code **)((longlong)local_d8 + 0x108))(local_d8,0);
  cVar3 = (**(code **)(this->_padding_ + 0x260))(this,&local_f0,&pvStack_40);
  bVar4 = false;
  if (cVar3 != '\0') {
    puVar1 = (uint *)((longlong)pFStack_d0->StartFastPathLoadBuffer + 4);
    if (pFStack_d0->EndFastPathLoadBuffer < puVar1) {
      local_res8[0] = 0;
      if (*(code **)((longlong)local_d8 + 0x188) == FArrayReader::Serialize) {
        FArrayReader::Serialize((FArrayReader *)local_d8,local_res8,4);
      }
      else {
        (**(code **)((longlong)local_d8 + 0x188))();
      }
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)local_d8);
      }
      uVar2 = local_res8[0];
      if ((uStack_b0 & 1) == 0) goto LAB_148be8b6a;
    }
    else {
      uVar2 = *(uint *)pFStack_d0->StartFastPathLoadBuffer;
      pFStack_d0->StartFastPathLoadBuffer = (uchar *)puVar1;
    }
    bVar4 = uVar2 != 0;
  }
LAB_148be8b6a:
  if (pvStack_40 != (void *)0x0) {
    FMemory::Free(pvStack_40);
  }
  FArchive::~FArchive((FArchive *)local_d8);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_198);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar4;
}

// GetTimeStamp @ 148be8be0

FDateTime __thiscall
FStreamingNetworkPlatformFile::GetTimeStamp(FStreamingNetworkPlatformFile *this,wchar_t *param_1)

{
  (**(code **)(this->_padding_ + 0x288))();
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  return (FDateTime)(long64)param_1;
}

// SetTimeStamp @ 148be8c30

void __thiscall
FStreamingNetworkPlatformFile::SetTimeStamp
          (FStreamingNetworkPlatformFile *this,wchar_t *param_1,FDateTime param_2)

{
  longlong *lpCriticalSection;
  char cVar1;
  uint local_res8 [2];
  ulong64 local_res18 [2];
  FString local_1a8;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_198;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f0;
  undefined1 local_d8 [8];
  FFastPathLoadBuffer *pFStack_d0;
  uchar *local_c8;
  uchar *puStack_c0;
  uchar *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long64 lStack_a0;
  FPackageFileVersion local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  FCustomVersionContainer *pFStack_80;
  FCustomPropertyListNode *local_78;
  FArchiveSavePackageData *pFStack_70;
  FProperty *local_68;
  FArchiveSerializedPropertyChain *pFStack_60;
  undefined8 local_58;
  FArchiveState *pFStack_50;
  undefined8 local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  lpCriticalSection = &this->_padding_;
  local_res18[0] = param_2.Ticks;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8[0] = 0x13;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_res18[1] = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_198);
    local_198._padding_ = 0;
    local_198._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_198.Bytes = &local_f0;
    local_198.ArchiveName.ComparisonIndex.Value = 0;
    local_198.ArchiveName.Number = 0;
    FArchiveState::SetIsSaving((FArchiveState *)&local_198,true);
    (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
    local_198._padding_ = (longlong)&___7FStreamingNetworkFileArchive__6B_;
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    if (*(uint **)(local_198._padding_ + 8) < *(uint **)local_198._padding_ + 1) {
      if ((local_198._padding_ & 0x10000U) == 0) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_198,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_198,local_res8);
      }
    }
    else {
      local_res8[0] = **(uint **)local_198._padding_;
      *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 4;
    }
    ::FString::FString(&local_1a8,param_1);
    FNetworkPlatformFile::MakeStandardNetworkFilename((FNetworkPlatformFile *)this,&local_1a8);
    ::operator<<((FArchive *)&local_198,&local_1a8);
    if (*(ulong64 **)(local_198._padding_ + 8) < *(ulong64 **)local_198._padding_ + 1) {
      if ((local_198._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_198._padding_ + 0x188) ==
            TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_198,local_res18,8);
        }
        else {
          (**(code **)(local_198._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_198,local_res18);
      }
    }
    else {
      local_res18[0] = **(ulong64 **)local_198._padding_;
      *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 8;
    }
    local_d8 = (undefined1  [8])0x0;
    pFStack_d0 = (FFastPathLoadBuffer *)0x0;
    local_c8 = (uchar *)0x0;
    puStack_c0 = (uchar *)0x0;
    local_b8 = (uchar *)0x0;
    uStack_b0 = 0;
    local_a8 = 0;
    lStack_a0 = 0;
    local_98.FileVersionUE4 = 0;
    local_98.FileVersionUE5 = 0;
    uStack_90 = 0;
    local_88._0_2_ = 0;
    local_88._2_2_ = 0;
    local_88._4_4_ = 0;
    pFStack_80 = (FCustomVersionContainer *)0x0;
    local_78 = (FCustomPropertyListNode *)0x0;
    pFStack_70 = (FArchiveSavePackageData *)0x0;
    local_68 = (FProperty *)0x0;
    pFStack_60 = (FArchiveSerializedPropertyChain *)0x0;
    local_58 = 0;
    pFStack_50 = (FArchiveState *)0x0;
    FArchiveState::FArchiveState((FArchiveState *)local_d8);
    local_38 = 0;
    local_48 = 0;
    pvStack_40 = (void *)0x0;
    local_d8 = (undefined1  [8])&___7FArrayReader__6B_;
    FArchiveState::SetIsLoading((FArchiveState *)local_d8,true);
    (**(code **)((longlong)local_d8 + 0x108))(local_d8,0);
    cVar1 = (**(code **)(this->_padding_ + 0x260))(this,&local_f0,&pvStack_40);
    if (cVar1 != '\0') {
      if (pFStack_d0->EndFastPathLoadBuffer < pFStack_d0->StartFastPathLoadBuffer + 4) {
        local_res8[0] = 0;
        if (*(code **)((longlong)local_d8 + 0x188) == FArrayReader::Serialize) {
          FArrayReader::Serialize((FArrayReader *)local_d8,local_res8,4);
        }
        else {
          (**(code **)((longlong)local_d8 + 0x188))();
        }
        if (1 < local_res8[0]) {
          FArchiveState::SetError((FArchiveState *)local_d8);
        }
      }
      else {
        pFStack_d0->StartFastPathLoadBuffer = pFStack_d0->StartFastPathLoadBuffer + 4;
      }
    }
    if (pvStack_40 != (void *)0x0) {
      FMemory::Free(pvStack_40);
    }
    FArchive::~FArchive((FArchive *)local_d8);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_198);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetAccessTimeStamp @ 148be8f40

FDateTime __thiscall
FStreamingNetworkPlatformFile::GetAccessTimeStamp
          (FStreamingNetworkPlatformFile *this,wchar_t *param_1)

{
  (**(code **)(this->_padding_ + 0x288))();
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  return (FDateTime)(long64)param_1;
}

// OpenRead @ 148be8f90

IFileHandle * __thiscall
FStreamingNetworkPlatformFile::OpenRead
          (FStreamingNetworkPlatformFile *this,wchar_t *param_1,bool param_2)

{
  FStreamingNetworkFileHandle *pFVar1;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  FNetworkPlatformFile::MakeStandardNetworkFilename((FNetworkPlatformFile *)this,&local_18);
  pFVar1 = SendOpenMessage(this,&local_18,false,false,false);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (IFileHandle *)pFVar1;
}

// OpenWrite @ 148be8ff0

IFileHandle * __thiscall
FStreamingNetworkPlatformFile::OpenWrite
          (FStreamingNetworkPlatformFile *this,wchar_t *param_1,bool param_2,bool param_3)

{
  FStreamingNetworkFileHandle *pFVar1;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  FNetworkPlatformFile::MakeStandardNetworkFilename((FNetworkPlatformFile *)this,&local_18);
  pFVar1 = SendOpenMessage(this,&local_18,true,param_2,param_3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (IFileHandle *)pFVar1;
}

// DirectoryExists @ 148be9070

bool __thiscall
FStreamingNetworkPlatformFile::DirectoryExists(FStreamingNetworkPlatformFile *this,wchar_t *param_1)

{
  TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>
  *pTVar1;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  FNetworkPlatformFile::MakeStandardNetworkFilename((FNetworkPlatformFile *)this,&local_18);
  pTVar1 = FServerTOC::FindDirectory((FServerTOC *)&this->_padding_,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pTVar1 != (TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>
                    *)0x0;
}

// CreateDirectoryTree @ 148be90d0

bool __thiscall
FStreamingNetworkPlatformFile::CreateDirectoryTree
          (FStreamingNetworkPlatformFile *this,wchar_t *param_1)

{
  bool bVar1;
  FString FStack_18;
  
  ::FString::FString(&FStack_18,param_1);
  FPaths::NormalizeDirectoryName(&FStack_18);
  bVar1 = InternalCreateDirectoryTree((IPlatformFile *)this,&FStack_18);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// CreateDirectory @ 148be90e0

bool __thiscall
FStreamingNetworkPlatformFile::CreateDirectory(FStreamingNetworkPlatformFile *this,wchar_t *param_1)

{
  uint *puVar1;
  longlong *lpCriticalSection;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint local_res8 [2];
  FString local_1a8;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_198;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f0;
  undefined1 local_d8 [8];
  FFastPathLoadBuffer *pFStack_d0;
  uchar *local_c8;
  uchar *puStack_c0;
  uchar *local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  long64 lStack_a0;
  FPackageFileVersion local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  FCustomVersionContainer *pFStack_80;
  FCustomPropertyListNode *local_78;
  FArchiveSavePackageData *pFStack_70;
  FProperty *local_68;
  FArchiveSerializedPropertyChain *pFStack_60;
  undefined8 local_58;
  FArchiveState *pFStack_50;
  undefined8 local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res8[0] = 7;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_198);
  local_198._padding_ = 0;
  local_198._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_198.Bytes = &local_f0;
  local_198.ArchiveName.ComparisonIndex.Value = 0;
  local_198.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_198,true);
  (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
  local_198._padding_ = (longlong)&___7FStreamingNetworkFileArchive__6B_;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  if (*(uint **)(local_198._padding_ + 8) < *(uint **)local_198._padding_ + 1) {
    if ((local_198._padding_ & 0x10000U) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_198,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_198,local_res8);
    }
  }
  else {
    local_res8[0] = **(uint **)local_198._padding_;
    *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 4;
  }
  ::FString::FString(&local_1a8,param_1);
  FNetworkPlatformFile::MakeStandardNetworkFilename((FNetworkPlatformFile *)this,&local_1a8);
  ::operator<<((FArchive *)&local_198,&local_1a8);
  local_d8 = (undefined1  [8])0x0;
  pFStack_d0 = (FFastPathLoadBuffer *)0x0;
  local_c8 = (uchar *)0x0;
  puStack_c0 = (uchar *)0x0;
  local_b8 = (uchar *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  lStack_a0 = 0;
  local_98.FileVersionUE4 = 0;
  local_98.FileVersionUE5 = 0;
  uStack_90 = 0;
  local_88._0_2_ = 0;
  local_88._2_2_ = 0;
  local_88._4_4_ = 0;
  pFStack_80 = (FCustomVersionContainer *)0x0;
  local_78 = (FCustomPropertyListNode *)0x0;
  pFStack_70 = (FArchiveSavePackageData *)0x0;
  local_68 = (FProperty *)0x0;
  pFStack_60 = (FArchiveSerializedPropertyChain *)0x0;
  local_58 = 0;
  pFStack_50 = (FArchiveState *)0x0;
  FArchiveState::FArchiveState((FArchiveState *)local_d8);
  local_38 = 0;
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_d8 = (undefined1  [8])&___7FArrayReader__6B_;
  FArchiveState::SetIsLoading((FArchiveState *)local_d8,true);
  (**(code **)((longlong)local_d8 + 0x108))(local_d8,0);
  cVar3 = (**(code **)(this->_padding_ + 0x260))(this,&local_f0,&pvStack_40);
  bVar4 = false;
  if (cVar3 != '\0') {
    puVar1 = (uint *)((longlong)pFStack_d0->StartFastPathLoadBuffer + 4);
    if (pFStack_d0->EndFastPathLoadBuffer < puVar1) {
      local_res8[0] = 0;
      if (*(code **)((longlong)local_d8 + 0x188) == FArrayReader::Serialize) {
        FArrayReader::Serialize((FArrayReader *)local_d8,local_res8,4);
      }
      else {
        (**(code **)((longlong)local_d8 + 0x188))();
      }
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)local_d8);
      }
      uVar2 = local_res8[0];
      if ((uStack_b0 & 1) == 0) goto LAB_148be9330;
    }
    else {
      uVar2 = *(uint *)pFStack_d0->StartFastPathLoadBuffer;
      pFStack_d0->StartFastPathLoadBuffer = (uchar *)puVar1;
    }
    bVar4 = uVar2 != 0;
  }
LAB_148be9330:
  if (pvStack_40 != (void *)0x0) {
    FMemory::Free(pvStack_40);
  }
  FArchive::~FArchive((FArchive *)local_d8);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_198);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar4;
}

// DeleteDirectory @ 148be93a0

bool __thiscall
FStreamingNetworkPlatformFile::DeleteDirectory(FStreamingNetworkPlatformFile *this,wchar_t *param_1)

{
  uint *puVar1;
  longlong *lpCriticalSection;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint local_res8 [2];
  FString local_1a8;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_198;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f0;
  undefined1 local_d8 [8];
  FFastPathLoadBuffer *pFStack_d0;
  uchar *local_c8;
  uchar *puStack_c0;
  uchar *local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  long64 lStack_a0;
  FPackageFileVersion local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  FCustomVersionContainer *pFStack_80;
  FCustomPropertyListNode *local_78;
  FArchiveSavePackageData *pFStack_70;
  FProperty *local_68;
  FArchiveSerializedPropertyChain *pFStack_60;
  undefined8 local_58;
  FArchiveState *pFStack_50;
  undefined8 local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res8[0] = 8;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_198);
  local_198._padding_ = 0;
  local_198._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_198.Bytes = &local_f0;
  local_198.ArchiveName.ComparisonIndex.Value = 0;
  local_198.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_198,true);
  (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
  local_198._padding_ = (longlong)&___7FStreamingNetworkFileArchive__6B_;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  if (*(uint **)(local_198._padding_ + 8) < *(uint **)local_198._padding_ + 1) {
    if ((local_198._padding_ & 0x10000U) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_198,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_198,local_res8);
    }
  }
  else {
    local_res8[0] = **(uint **)local_198._padding_;
    *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 4;
  }
  ::FString::FString(&local_1a8,param_1);
  FNetworkPlatformFile::MakeStandardNetworkFilename((FNetworkPlatformFile *)this,&local_1a8);
  ::operator<<((FArchive *)&local_198,&local_1a8);
  local_d8 = (undefined1  [8])0x0;
  pFStack_d0 = (FFastPathLoadBuffer *)0x0;
  local_c8 = (uchar *)0x0;
  puStack_c0 = (uchar *)0x0;
  local_b8 = (uchar *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  lStack_a0 = 0;
  local_98.FileVersionUE4 = 0;
  local_98.FileVersionUE5 = 0;
  uStack_90 = 0;
  local_88._0_2_ = 0;
  local_88._2_2_ = 0;
  local_88._4_4_ = 0;
  pFStack_80 = (FCustomVersionContainer *)0x0;
  local_78 = (FCustomPropertyListNode *)0x0;
  pFStack_70 = (FArchiveSavePackageData *)0x0;
  local_68 = (FProperty *)0x0;
  pFStack_60 = (FArchiveSerializedPropertyChain *)0x0;
  local_58 = 0;
  pFStack_50 = (FArchiveState *)0x0;
  FArchiveState::FArchiveState((FArchiveState *)local_d8);
  local_38 = 0;
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_d8 = (undefined1  [8])&___7FArrayReader__6B_;
  FArchiveState::SetIsLoading((FArchiveState *)local_d8,true);
  (**(code **)((longlong)local_d8 + 0x108))(local_d8,0);
  cVar3 = (**(code **)(this->_padding_ + 0x260))(this,&local_f0,&pvStack_40);
  bVar4 = false;
  if (cVar3 != '\0') {
    puVar1 = (uint *)((longlong)pFStack_d0->StartFastPathLoadBuffer + 4);
    if (pFStack_d0->EndFastPathLoadBuffer < puVar1) {
      local_res8[0] = 0;
      if (*(code **)((longlong)local_d8 + 0x188) == FArrayReader::Serialize) {
        FArrayReader::Serialize((FArrayReader *)local_d8,local_res8,4);
      }
      else {
        (**(code **)((longlong)local_d8 + 0x188))();
      }
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)local_d8);
      }
      uVar2 = local_res8[0];
      if ((uStack_b0 & 1) == 0) goto LAB_148be95f0;
    }
    else {
      uVar2 = *(uint *)pFStack_d0->StartFastPathLoadBuffer;
      pFStack_d0->StartFastPathLoadBuffer = (uchar *)puVar1;
    }
    bVar4 = uVar2 != 0;
  }
LAB_148be95f0:
  if (pvStack_40 != (void *)0x0) {
    FMemory::Free(pvStack_40);
  }
  FArchive::~FArchive((FArchive *)local_d8);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_198);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar4;
}

// IterateDirectory @ 148be9660

bool __thiscall
FStreamingNetworkPlatformFile::IterateDirectory
          (FStreamingNetworkPlatformFile *this,wchar_t *param_1,FDirectoryVisitor *param_2)

{
  wchar_t wVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *pTVar5;
  FString *pFVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  FString local_d8;
  longlong *local_c8;
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  uint uStack_ac;
  longlong local_a8;
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *pTStack_a0;
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *local_98;
  undefined2 local_90;
  FString local_88;
  FString local_78;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  bVar9 = false;
  ::FString::FString(&local_d8,param_1);
  FNetworkPlatformFile::MakeStandardNetworkFilename((FNetworkPlatformFile *)this,&local_d8);
  wVar1 = *param_1;
  bVar3 = true;
  pTVar5 = (TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
            *)FServerTOC::FindDirectory((FServerTOC *)&this->_padding_,&local_d8);
  if (pTVar5 != (TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
                 *)0x0) {
    TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_68,pTVar5);
    local_90 = 0;
    stack0xffffffffffffff48 = local_68._16_16_;
    local_c8 = (longlong *)local_68._0_8_;
    auStack_c0._0_8_ = local_68._8_8_;
    local_a8 = local_48;
    pTStack_a0 = pTStack_40;
    uVar7 = local_68._24_8_ >> 0x20;
    uVar10 = local_68._28_4_;
    local_98 = pTVar5;
    if ((int)uVar10 < *(int *)(local_68._16_8_ + 0x18)) {
      do {
        plVar2 = local_c8;
        if (bVar3 != true) break;
        lVar11 = (longlong)(int)uVar7 * 0x20;
        pFVar6 = FPaths::GetPath(&local_88,(FString *)(*local_c8 + lVar11));
        iVar4 = (pFVar6->Data).ArrayNum;
        if (iVar4 == local_d8.Data.ArrayNum) {
          if (iVar4 < 2) {
            bVar12 = true;
          }
          else {
            iVar4 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,
                               (wchar_t *)local_d8.Data.AllocatorInstance.Data);
            bVar12 = iVar4 == 0;
          }
        }
        else {
          bVar12 = iVar4 + local_d8.Data.ArrayNum == 1;
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (bVar12) {
          pFVar6 = (FString *)(*plVar2 + lVar11);
          lVar11 = *(longlong *)((longlong)(int)uVar10 * 0x20 + 0x10 + *plVar2);
          if (wVar1 == L'\0') {
            bVar9 = true;
            pFVar6 = FPaths::GetCleanFilename(&local_78,pFVar6);
            if ((pFVar6->Data).ArrayNum == 0) {
LAB_148be97dc:
              pwVar8 = L"";
            }
            else {
              pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
            }
          }
          else {
            if ((pFVar6->Data).ArrayNum == 0) goto LAB_148be97dc;
            pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
          }
          bVar3 = IPlatformFile::FDirectoryVisitor::CallShouldVisitAndVisit
                            (param_2,pwVar8,lVar11 == 0);
          if ((bVar9) &&
             (bVar9 = false, local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
        uStack_b0 = uStack_b0 & ~auStack_c0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
        uVar7 = (ulonglong)uStack_ac;
        uVar10 = uStack_ac;
      } while ((int)uStack_ac < *(int *)(auStack_c0._8_8_ + 0x18));
      if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
        uVar10 = *(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar4 = 1;
        }
        else {
          uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar11 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar4 = 1 << ((byte)lVar11 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_98->HashSize < iVar4)) || (iVar4 < local_98->HashSize)) {
          local_98->HashSize = iVar4;
          TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
          ::Rehash(local_98);
        }
      }
    }
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// IterateDirectoryRecursively @ 148be98e0

bool __thiscall
FStreamingNetworkPlatformFile::IterateDirectoryRecursively
          (FStreamingNetworkPlatformFile *this,wchar_t *param_1,FDirectoryVisitor *param_2)

{
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *pTVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  FString local_d8;
  longlong *local_c8;
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  uint uStack_ac;
  longlong local_a8;
  TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
  *pTStack_a0;
  TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
  *local_98;
  undefined2 local_90;
  longlong *local_88;
  undefined1 auStack_80 [16];
  uint uStack_70;
  uint uStack_6c;
  longlong local_68;
  TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
  *pTStack_60;
  TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
  *local_58;
  undefined2 local_50;
  undefined1 local_48 [32];
  longlong local_28;
  TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  
  ::FString::FString(&local_d8,param_1);
  FNetworkPlatformFile::MakeStandardNetworkFilename((FNetworkPlatformFile *)this,&local_d8);
  plVar8 = &this->_padding_;
  bVar3 = true;
  TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_48,
             (TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
              *)plVar8);
  local_50 = 0;
  stack0xffffffffffffff88 = local_48._16_16_;
  local_88 = (longlong *)local_48._0_8_;
  auStack_80._0_8_ = local_48._8_8_;
  local_68 = local_28;
  pTStack_60 = pTStack_20;
  uVar13 = local_48._24_8_ >> 0x20;
  local_58 = (TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
              *)plVar8;
  if (local_48._28_4_ < *(int *)(local_48._16_8_ + 0x18)) {
    iVar10 = 1;
    do {
      plVar8 = local_88;
      if (bVar3 != true) break;
      iVar4 = local_d8.Data.ArrayNum;
      FVar6.Data = (FScriptContainerElement *)L"";
      if (iVar4 != 0) {
        FVar6.Data = local_d8.Data.AllocatorInstance.Data;
      }
      iVar11 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar11 = 0;
      }
      lVar9 = (longlong)(int)uVar13 * 0x20;
      bVar2 = ::FString::StartsWith
                        ((FString *)(*local_88 + lVar9),(wchar_t *)FVar6.Data,iVar11,IgnoreCase);
      if (bVar2) {
        pTVar1 = *(TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
                   **)(*plVar8 + 0x10 + lVar9);
        TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
        ::TIterator::TIterator((TIterator *)local_48,pTVar1);
        local_90 = 0;
        stack0xffffffffffffff48 = local_48._16_16_;
        local_c8 = (longlong *)local_48._0_8_;
        auStack_c0._0_8_ = local_48._8_8_;
        local_a8 = local_28;
        pTStack_a0 = pTStack_20;
        uVar13 = local_48._24_8_ >> 0x20;
        uVar12 = local_48._28_4_;
        local_98 = pTVar1;
        if ((int)uVar12 < *(int *)(local_48._16_8_ + 0x18)) {
          do {
            if (bVar3 != true) break;
            lVar9 = *local_c8;
            lVar5 = (longlong)(int)uVar13 * 0x20;
            if (*(int *)(lVar5 + 8 + lVar9) == 0) {
              pwVar7 = L"";
            }
            else {
              pwVar7 = *(wchar_t **)(lVar5 + lVar9);
            }
            bVar3 = IPlatformFile::FDirectoryVisitor::CallShouldVisitAndVisit
                              (param_2,pwVar7,
                               *(longlong *)((longlong)(int)uVar12 * 0x20 + 0x10 + lVar9) == 0);
            uStack_b0 = uStack_b0 & ~auStack_c0._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
            uVar13 = (ulonglong)uStack_ac;
            uVar12 = uStack_ac;
          } while ((int)uStack_ac < *(int *)(auStack_c0._8_8_ + 0x18));
          if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
            uVar12 = *(int *)&(local_98->Elements).field_0x8 -
                     *(int *)&(local_98->Elements).field_0x34;
            if (uVar12 < 4) {
              iVar4 = 1;
            }
            else {
              uVar13 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
              lVar9 = 0x3f;
              if (uVar13 != 0) {
                for (; uVar13 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                }
              }
              iVar4 = 1 << ((byte)lVar9 & 0x1f);
            }
            if (((0 < (int)uVar12) && (local_98->HashSize < iVar4)) || (iVar4 < local_98->HashSize))
            {
              local_98->HashSize = iVar4;
              TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
              ::Rehash(local_98);
            }
          }
        }
      }
      uStack_70 = uStack_70 & ~auStack_80._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_80);
      uVar13 = (ulonglong)uStack_6c;
    } while ((int)uStack_6c < *(int *)(auStack_80._8_8_ + 0x18));
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      uVar12 = *(int *)&(local_58->Elements).field_0x8 - *(int *)&(local_58->Elements).field_0x34;
      if (3 < uVar12) {
        uVar13 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar10 = 1 << ((byte)lVar9 & 0x1f);
      }
      if (((0 < (int)uVar12) && (local_58->HashSize < iVar10)) || (iVar10 < local_58->HashSize)) {
        local_58->HashSize = iVar10;
        TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
        ::Rehash(local_58);
      }
    }
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// DeleteDirectoryRecursively @ 148be9bb0

bool __thiscall
FStreamingNetworkPlatformFile::DeleteDirectoryRecursively
          (FStreamingNetworkPlatformFile *this,wchar_t *param_1)

{
  uint *puVar1;
  longlong *lpCriticalSection;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint local_res8 [2];
  FString local_1a8;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_198;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f0;
  undefined1 local_d8 [8];
  FFastPathLoadBuffer *pFStack_d0;
  uchar *local_c8;
  uchar *puStack_c0;
  uchar *local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  long64 lStack_a0;
  FPackageFileVersion local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  FCustomVersionContainer *pFStack_80;
  FCustomPropertyListNode *local_78;
  FArchiveSavePackageData *pFStack_70;
  FProperty *local_68;
  FArchiveSerializedPropertyChain *pFStack_60;
  undefined8 local_58;
  FArchiveState *pFStack_50;
  undefined8 local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res8[0] = 0xb;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_198);
  local_198._padding_ = 0;
  local_198._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_198.Bytes = &local_f0;
  local_198.ArchiveName.ComparisonIndex.Value = 0;
  local_198.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_198,true);
  (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
  local_198._padding_ = (longlong)&___7FStreamingNetworkFileArchive__6B_;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  if (*(uint **)(local_198._padding_ + 8) < *(uint **)local_198._padding_ + 1) {
    if ((local_198._padding_ & 0x10000U) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_198,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_198,local_res8);
    }
  }
  else {
    local_res8[0] = **(uint **)local_198._padding_;
    *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 4;
  }
  ::FString::FString(&local_1a8,param_1);
  FNetworkPlatformFile::MakeStandardNetworkFilename((FNetworkPlatformFile *)this,&local_1a8);
  ::operator<<((FArchive *)&local_198,&local_1a8);
  local_d8 = (undefined1  [8])0x0;
  pFStack_d0 = (FFastPathLoadBuffer *)0x0;
  local_c8 = (uchar *)0x0;
  puStack_c0 = (uchar *)0x0;
  local_b8 = (uchar *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  lStack_a0 = 0;
  local_98.FileVersionUE4 = 0;
  local_98.FileVersionUE5 = 0;
  uStack_90 = 0;
  local_88._0_2_ = 0;
  local_88._2_2_ = 0;
  local_88._4_4_ = 0;
  pFStack_80 = (FCustomVersionContainer *)0x0;
  local_78 = (FCustomPropertyListNode *)0x0;
  pFStack_70 = (FArchiveSavePackageData *)0x0;
  local_68 = (FProperty *)0x0;
  pFStack_60 = (FArchiveSerializedPropertyChain *)0x0;
  local_58 = 0;
  pFStack_50 = (FArchiveState *)0x0;
  FArchiveState::FArchiveState((FArchiveState *)local_d8);
  local_38 = 0;
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_d8 = (undefined1  [8])&___7FArrayReader__6B_;
  FArchiveState::SetIsLoading((FArchiveState *)local_d8,true);
  (**(code **)((longlong)local_d8 + 0x108))(local_d8,0);
  cVar3 = (**(code **)(this->_padding_ + 0x260))(this,&local_f0,&pvStack_40);
  bVar4 = false;
  if (cVar3 != '\0') {
    puVar1 = (uint *)((longlong)pFStack_d0->StartFastPathLoadBuffer + 4);
    if (pFStack_d0->EndFastPathLoadBuffer < puVar1) {
      local_res8[0] = 0;
      if (*(code **)((longlong)local_d8 + 0x188) == FArrayReader::Serialize) {
        FArrayReader::Serialize((FArrayReader *)local_d8,local_res8,4);
      }
      else {
        (**(code **)((longlong)local_d8 + 0x188))();
      }
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)local_d8);
      }
      uVar2 = local_res8[0];
      if ((uStack_b0 & 1) == 0) goto LAB_148be9e00;
    }
    else {
      uVar2 = *(uint *)pFStack_d0->StartFastPathLoadBuffer;
      pFStack_d0->StartFastPathLoadBuffer = (uchar *)puVar1;
    }
    bVar4 = uVar2 != 0;
  }
LAB_148be9e00:
  if (pvStack_40 != (void *)0x0) {
    FMemory::Free(pvStack_40);
  }
  FArchive::~FArchive((FArchive *)local_d8);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_198);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar4;
}

// CopyFile @ 148be9e70

bool __thiscall
FStreamingNetworkPlatformFile::CopyFile
          (FStreamingNetworkPlatformFile *this,wchar_t *param_1,wchar_t *param_2,
          EPlatformFileRead param_3,EPlatformFileWrite param_4)

{
  uint *puVar1;
  longlong *lpCriticalSection;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint local_res8 [2];
  FString local_1c0;
  FString local_1b0;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_198;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f0;
  undefined1 local_d8 [8];
  FFastPathLoadBuffer *pFStack_d0;
  uchar *local_c8;
  uchar *puStack_c0;
  uchar *local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  long64 lStack_a0;
  FPackageFileVersion local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  FCustomVersionContainer *pFStack_80;
  FCustomPropertyListNode *local_78;
  FArchiveSavePackageData *pFStack_70;
  FProperty *local_68;
  FArchiveSerializedPropertyChain *pFStack_60;
  undefined8 local_58;
  FArchiveState *pFStack_50;
  undefined8 local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res8[0] = 0xc;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_198);
  local_198._padding_ = 0;
  local_198._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_198.Bytes = &local_f0;
  local_198.ArchiveName.ComparisonIndex.Value = 0;
  local_198.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_198,true);
  (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
  local_198._padding_ = (longlong)&___7FStreamingNetworkFileArchive__6B_;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  if (*(uint **)(local_198._padding_ + 8) < *(uint **)local_198._padding_ + 1) {
    if ((local_198._padding_ & 0x10000U) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_198,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_198,local_res8);
    }
  }
  else {
    local_res8[0] = **(uint **)local_198._padding_;
    *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 4;
  }
  ::FString::FString(&local_1b0,param_1);
  FNetworkPlatformFile::MakeStandardNetworkFilename((FNetworkPlatformFile *)this,&local_1b0);
  ::FString::FString(&local_1c0,param_2);
  FNetworkPlatformFile::MakeStandardNetworkFilename((FNetworkPlatformFile *)this,&local_1c0);
  ::operator<<((FArchive *)&local_198,&local_1b0);
  ::operator<<((FArchive *)&local_198,&local_1c0);
  local_d8 = (undefined1  [8])0x0;
  pFStack_d0 = (FFastPathLoadBuffer *)0x0;
  local_c8 = (uchar *)0x0;
  puStack_c0 = (uchar *)0x0;
  local_b8 = (uchar *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  lStack_a0 = 0;
  local_98.FileVersionUE4 = 0;
  local_98.FileVersionUE5 = 0;
  uStack_90 = 0;
  local_88._0_2_ = 0;
  local_88._2_2_ = 0;
  local_88._4_4_ = 0;
  pFStack_80 = (FCustomVersionContainer *)0x0;
  local_78 = (FCustomPropertyListNode *)0x0;
  pFStack_70 = (FArchiveSavePackageData *)0x0;
  local_68 = (FProperty *)0x0;
  pFStack_60 = (FArchiveSerializedPropertyChain *)0x0;
  local_58 = 0;
  pFStack_50 = (FArchiveState *)0x0;
  FArchiveState::FArchiveState((FArchiveState *)local_d8);
  local_38 = 0;
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_d8 = (undefined1  [8])&___7FArrayReader__6B_;
  FArchiveState::SetIsLoading((FArchiveState *)local_d8,true);
  (**(code **)((longlong)local_d8 + 0x108))(local_d8,0);
  cVar3 = (**(code **)(this->_padding_ + 0x260))(this,&local_f0,&pvStack_40);
  bVar4 = false;
  if (cVar3 != '\0') {
    puVar1 = (uint *)((longlong)pFStack_d0->StartFastPathLoadBuffer + 4);
    if (pFStack_d0->EndFastPathLoadBuffer < puVar1) {
      local_res8[0] = 0;
      if (*(code **)((longlong)local_d8 + 0x188) == FArrayReader::Serialize) {
        FArrayReader::Serialize((FArrayReader *)local_d8,local_res8,4);
      }
      else {
        (**(code **)((longlong)local_d8 + 0x188))();
      }
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)local_d8);
      }
      uVar2 = local_res8[0];
      if ((uStack_b0 & 1) == 0) goto LAB_148bea0f2;
    }
    else {
      uVar2 = *(uint *)pFStack_d0->StartFastPathLoadBuffer;
      pFStack_d0->StartFastPathLoadBuffer = (uchar *)puVar1;
    }
    bVar4 = uVar2 != 0;
  }
LAB_148bea0f2:
  if (pvStack_40 != (void *)0x0) {
    FMemory::Free(pvStack_40);
  }
  FArchive::~FArchive((FArchive *)local_d8);
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_198);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar4;
}

// ConvertToAbsolutePathForExternalAppForRead @ 148bea170

FString * __thiscall
FStreamingNetworkPlatformFile::ConvertToAbsolutePathForExternalAppForRead
          (FStreamingNetworkPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  longlong *lpCriticalSection;
  char cVar1;
  uint local_res8 [2];
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_198;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f0;
  FArchiveState local_d8;
  undefined8 local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8[0] = 0x14;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_198);
    local_198._padding_ = 0;
    local_198._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_198.Bytes = &local_f0;
    local_198.ArchiveName.ComparisonIndex.Value = 0;
    local_198.ArchiveName.Number = 0;
    FArchiveState::SetIsSaving((FArchiveState *)&local_198,true);
    (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
    local_198._padding_ = (longlong)&___7FStreamingNetworkFileArchive__6B_;
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    if (*(uint **)(local_198._padding_ + 8) < *(uint **)local_198._padding_ + 1) {
      if ((local_198._padding_ & 0x10000U) == 0) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_198,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_198,local_res8);
      }
    }
    else {
      local_res8[0] = **(uint **)local_198._padding_;
      *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 4;
    }
    ::FString::FString(__return_storage_ptr__,param_1);
    FNetworkPlatformFile::MakeStandardNetworkFilename
              ((FNetworkPlatformFile *)this,__return_storage_ptr__);
    ::operator<<((FArchive *)&local_198,__return_storage_ptr__);
    local_d8._padding_ = 0;
    local_d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_d8._40_8_ = 0;
    local_d8.ArSerializingDefaults = 0;
    local_d8.ArPortFlags = 0;
    local_d8.ArMaxSerializeSize = 0;
    local_d8.ArUEVer.FileVersionUE4 = 0;
    local_d8.ArUEVer.FileVersionUE5 = 0;
    local_d8.ArLicenseeUEVer = 0;
    local_d8.ArEngineVer.Major = 0;
    local_d8.ArEngineVer.Minor = 0;
    local_d8.ArEngineVer.Patch = 0;
    local_d8.ArEngineVer._6_2_ = 0;
    local_d8.ArEngineVer.Changelist = 0;
    local_d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_d8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_d8.SerializedProperty = (FProperty *)0x0;
    local_d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_d8.bCustomVersionsAreReset = false;
    local_d8._129_7_ = 0;
    local_d8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_d8);
    local_38 = 0;
    local_48 = 0;
    pvStack_40 = (void *)0x0;
    local_d8._padding_ = (longlong)&___7FArrayReader__6B_;
    FArchiveState::SetIsLoading(&local_d8,true);
    (**(code **)(local_d8._padding_ + 0x108))(&local_d8,0);
    cVar1 = (**(code **)(this->_padding_ + 0x260))(this,&local_f0,&pvStack_40);
    if (cVar1 == '\x01') {
      ::operator<<((FArchive *)&local_d8,__return_storage_ptr__);
    }
    if (pvStack_40 != (void *)0x0) {
      FMemory::Free(pvStack_40);
    }
    FArchive::~FArchive((FArchive *)&local_d8);
    if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_198);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConvertToAbsolutePathForExternalAppForWrite @ 148bea3b0

FString * __thiscall
FStreamingNetworkPlatformFile::ConvertToAbsolutePathForExternalAppForWrite
          (FStreamingNetworkPlatformFile *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  longlong *lpCriticalSection;
  char cVar1;
  uint local_res8 [2];
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_198;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f0;
  FArchiveState local_d8;
  undefined8 local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8[0] = 0x15;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_198);
    local_198._padding_ = 0;
    local_198._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_198.Bytes = &local_f0;
    local_198.ArchiveName.ComparisonIndex.Value = 0;
    local_198.ArchiveName.Number = 0;
    FArchiveState::SetIsSaving((FArchiveState *)&local_198,true);
    (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
    local_198._padding_ = (longlong)&___7FStreamingNetworkFileArchive__6B_;
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    if (*(uint **)(local_198._padding_ + 8) < *(uint **)local_198._padding_ + 1) {
      if ((local_198._padding_ & 0x10000U) == 0) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_198,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_198,local_res8);
      }
    }
    else {
      local_res8[0] = **(uint **)local_198._padding_;
      *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 4;
    }
    ::FString::FString(__return_storage_ptr__,param_1);
    FNetworkPlatformFile::MakeStandardNetworkFilename
              ((FNetworkPlatformFile *)this,__return_storage_ptr__);
    ::operator<<((FArchive *)&local_198,__return_storage_ptr__);
    local_d8._padding_ = 0;
    local_d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_d8._40_8_ = 0;
    local_d8.ArSerializingDefaults = 0;
    local_d8.ArPortFlags = 0;
    local_d8.ArMaxSerializeSize = 0;
    local_d8.ArUEVer.FileVersionUE4 = 0;
    local_d8.ArUEVer.FileVersionUE5 = 0;
    local_d8.ArLicenseeUEVer = 0;
    local_d8.ArEngineVer.Major = 0;
    local_d8.ArEngineVer.Minor = 0;
    local_d8.ArEngineVer.Patch = 0;
    local_d8.ArEngineVer._6_2_ = 0;
    local_d8.ArEngineVer.Changelist = 0;
    local_d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_d8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_d8.SerializedProperty = (FProperty *)0x0;
    local_d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_d8.bCustomVersionsAreReset = false;
    local_d8._129_7_ = 0;
    local_d8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_d8);
    local_38 = 0;
    local_48 = 0;
    pvStack_40 = (void *)0x0;
    local_d8._padding_ = (longlong)&___7FArrayReader__6B_;
    FArchiveState::SetIsLoading(&local_d8,true);
    (**(code **)(local_d8._padding_ + 0x108))(&local_d8,0);
    cVar1 = (**(code **)(this->_padding_ + 0x260))(this,&local_f0,&pvStack_40);
    if (cVar1 == '\x01') {
      ::operator<<((FArchive *)&local_d8,__return_storage_ptr__);
    }
    if (pvStack_40 != (void *)0x0) {
      FMemory::Free(pvStack_40);
    }
    FArchive::~FArchive((FArchive *)&local_d8);
    if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_198);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PerformHeartbeat @ 148bea5f0

void __thiscall FStreamingNetworkPlatformFile::PerformHeartbeat(FStreamingNetworkPlatformFile *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint local_res8 [2];
  undefined8 local_res10;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_188;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_e0;
  FArchiveState local_c8;
  undefined8 local_38;
  void *pvStack_30;
  undefined8 local_28;
  
  local_res8[0] = 0x18;
  local_res10 = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_188);
  local_188._padding_ = 0;
  local_188._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_188.Bytes = &local_e0;
  local_188.ArchiveName.ComparisonIndex.Value = 0;
  local_188.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_188,true);
  (**(code **)(local_188._padding_ + 0x108))(&local_188,0);
  local_188._padding_ = (longlong)&___7FNetworkFileArchive__6B_;
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  if (*(uint **)(local_188._padding_ + 8) < *(uint **)local_188._padding_ + 1) {
    if ((local_188._padding_ & 0x10000U) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_188,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_188,local_res8);
    }
  }
  else {
    local_res8[0] = **(uint **)local_188._padding_;
    *(longlong *)local_188._padding_ = *(longlong *)local_188._padding_ + 4;
  }
  local_c8._padding_ = 0;
  local_c8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_c8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_c8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_c8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_c8._40_8_ = 0;
  local_c8.ArSerializingDefaults = 0;
  local_c8.ArPortFlags = 0;
  local_c8.ArMaxSerializeSize = 0;
  local_c8.ArUEVer.FileVersionUE4 = 0;
  local_c8.ArUEVer.FileVersionUE5 = 0;
  local_c8.ArLicenseeUEVer = 0;
  local_c8.ArEngineVer.Major = 0;
  local_c8.ArEngineVer.Minor = 0;
  local_c8.ArEngineVer.Patch = 0;
  local_c8.ArEngineVer._6_2_ = 0;
  local_c8.ArEngineVer.Changelist = 0;
  local_c8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_c8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_c8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_c8.SerializedProperty = (FProperty *)0x0;
  local_c8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_c8.bCustomVersionsAreReset = false;
  local_c8._129_7_ = 0;
  local_c8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_c8);
  local_28 = 0;
  local_38 = 0;
  pvStack_30 = (void *)0x0;
  local_c8._padding_ = (longlong)&___7FArrayReader__6B_;
  FArchiveState::SetIsLoading(&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,0);
  cVar2 = (**(code **)(this->_padding_ + 0x260))(this,&local_e0,&pvStack_30);
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StreamingFile\\Private\\StreamingNetworkPlatformFile.cpp"
                       ,0x3c8,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (pvStack_30 != (void *)0x0) {
    FMemory::Free(pvStack_30);
  }
  FArchive::~FArchive((FArchive *)&local_c8);
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_188);
  return;
}

// GetFileInfo @ 148bea7e0

void __thiscall
FStreamingNetworkPlatformFile::GetFileInfo
          (FStreamingNetworkPlatformFile *this,wchar_t *param_1,FFileInfo *param_2)

{
  long64 *plVar1;
  FDateTime *pFVar2;
  longlong *lpCriticalSection;
  char cVar3;
  uint local_res8 [2];
  undefined1 local_1a8 [8];
  FFastPathLoadBuffer *pFStack_1a0;
  uchar *local_198;
  uchar *puStack_190;
  uchar *local_188;
  ulonglong uStack_180;
  undefined8 local_178;
  long64 lStack_170;
  FPackageFileVersion local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  FCustomVersionContainer *pFStack_150;
  FCustomPropertyListNode *local_148;
  FArchiveSavePackageData *pFStack_140;
  FProperty *local_138;
  FArchiveSerializedPropertyChain *pFStack_130;
  undefined8 local_128;
  FArchiveState *pFStack_120;
  undefined8 local_118;
  void *pvStack_110;
  undefined8 local_108;
  FString local_f8;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_e8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_40;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::FString::FString(&local_f8,param_1);
    FNetworkPlatformFile::MakeStandardNetworkFilename((FNetworkPlatformFile *)this,&local_f8);
    local_res8[0] = 0xd;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_e8);
    local_e8._padding_ = 0;
    local_e8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_e8.Bytes = &local_40;
    local_e8.ArchiveName.ComparisonIndex.Value = 0;
    local_e8.ArchiveName.Number = 0;
    FArchiveState::SetIsSaving((FArchiveState *)&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
    local_e8._padding_ = (longlong)&___7FStreamingNetworkFileArchive__6B_;
    local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ArrayNum = 0;
    local_40.ArrayMax = 0;
    if (*(uint **)(local_e8._padding_ + 8) < *(uint **)local_e8._padding_ + 1) {
      if ((local_e8._padding_ & 0x10000U) == 0) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_e8,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_e8,local_res8);
      }
    }
    else {
      local_res8[0] = **(uint **)local_e8._padding_;
      *(longlong *)local_e8._padding_ = *(longlong *)local_e8._padding_ + 4;
    }
    ::operator<<((FArchive *)&local_e8,&local_f8);
    local_1a8 = (undefined1  [8])0x0;
    pFStack_1a0 = (FFastPathLoadBuffer *)0x0;
    local_198 = (uchar *)0x0;
    puStack_190 = (uchar *)0x0;
    local_188 = (uchar *)0x0;
    uStack_180 = 0;
    local_178 = 0;
    lStack_170 = 0;
    local_168.FileVersionUE4 = 0;
    local_168.FileVersionUE5 = 0;
    uStack_160 = 0;
    local_158._0_2_ = 0;
    local_158._2_2_ = 0;
    local_158._4_4_ = 0;
    pFStack_150 = (FCustomVersionContainer *)0x0;
    local_148 = (FCustomPropertyListNode *)0x0;
    pFStack_140 = (FArchiveSavePackageData *)0x0;
    local_138 = (FProperty *)0x0;
    pFStack_130 = (FArchiveSerializedPropertyChain *)0x0;
    local_128 = 0;
    pFStack_120 = (FArchiveState *)0x0;
    FArchiveState::FArchiveState((FArchiveState *)local_1a8);
    local_108 = 0;
    local_118 = 0;
    pvStack_110 = (void *)0x0;
    local_1a8 = (undefined1  [8])&___7FArrayReader__6B_;
    FArchiveState::SetIsLoading((FArchiveState *)local_1a8,true);
    (**(code **)((longlong)local_1a8 + 0x108))(local_1a8,0);
    cVar3 = (**(code **)(this->_padding_ + 0x260))(this,&local_40,&pvStack_110);
    if (cVar3 != '\0') {
      if (pFStack_1a0->EndFastPathLoadBuffer <
          (int *)((longlong)pFStack_1a0->StartFastPathLoadBuffer + 4)) {
        local_res8[0] = 0;
        if ((uStack_180 & 1) == 0) {
          local_res8[0] = (uint)(param_2->FileExists != false);
        }
        if (*(code **)((longlong)local_1a8 + 0x188) == FArrayReader::Serialize) {
          FArrayReader::Serialize((FArrayReader *)local_1a8,local_res8,4);
        }
        else {
          (**(code **)((longlong)local_1a8 + 0x188))();
        }
        if (1 < local_res8[0]) {
          FArchiveState::SetError((FArchiveState *)local_1a8);
        }
        if ((uStack_180 & 1) != 0) {
          param_2->FileExists = local_res8[0] != 0;
        }
      }
      else {
        param_2->FileExists = *(int *)pFStack_1a0->StartFastPathLoadBuffer != 0;
        pFStack_1a0->StartFastPathLoadBuffer = pFStack_1a0->StartFastPathLoadBuffer + 4;
      }
      if (pFStack_1a0->EndFastPathLoadBuffer <
          (int *)((longlong)pFStack_1a0->StartFastPathLoadBuffer + 4)) {
        local_res8[0] = 0;
        if (((byte)uStack_180 & 1) == 0) {
          local_res8[0] = (uint)(param_2->ReadOnly != false);
        }
        if (*(code **)((longlong)local_1a8 + 0x188) == FArrayReader::Serialize) {
          FArrayReader::Serialize((FArrayReader *)local_1a8,local_res8,4);
        }
        else {
          (**(code **)((longlong)local_1a8 + 0x188))();
        }
        if (1 < local_res8[0]) {
          FArchiveState::SetError((FArchiveState *)local_1a8);
        }
        if ((uStack_180 & 1) != 0) {
          param_2->ReadOnly = local_res8[0] != 0;
        }
      }
      else {
        param_2->ReadOnly = *(int *)pFStack_1a0->StartFastPathLoadBuffer != 0;
        pFStack_1a0->StartFastPathLoadBuffer = pFStack_1a0->StartFastPathLoadBuffer + 4;
      }
      plVar1 = &param_2->Size;
      if (pFStack_1a0->EndFastPathLoadBuffer <
          (long64 *)((longlong)pFStack_1a0->StartFastPathLoadBuffer + 8)) {
        if ((uStack_180 & 0x10000) == 0) {
          if (*(code **)((longlong)local_1a8 + 0x188) == FArrayReader::Serialize) {
            FArrayReader::Serialize((FArrayReader *)local_1a8,plVar1,8);
          }
          else {
            (**(code **)((longlong)local_1a8 + 0x188))();
          }
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)local_1a8,(ulong64 *)plVar1);
        }
      }
      else {
        *plVar1 = *(long64 *)pFStack_1a0->StartFastPathLoadBuffer;
        pFStack_1a0->StartFastPathLoadBuffer = pFStack_1a0->StartFastPathLoadBuffer + 8;
      }
      pFVar2 = &param_2->TimeStamp;
      if (pFStack_1a0->EndFastPathLoadBuffer <
          (long64 *)((longlong)pFStack_1a0->StartFastPathLoadBuffer + 8)) {
        if ((uStack_180 & 0x10000) == 0) {
          if (*(code **)((longlong)local_1a8 + 0x188) == FArrayReader::Serialize) {
            FArrayReader::Serialize((FArrayReader *)local_1a8,pFVar2,8);
          }
          else {
            (**(code **)((longlong)local_1a8 + 0x188))();
          }
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)local_1a8,(ulong64 *)pFVar2);
        }
      }
      else {
        pFVar2->Ticks = *(long64 *)pFStack_1a0->StartFastPathLoadBuffer;
        pFStack_1a0->StartFastPathLoadBuffer = pFStack_1a0->StartFastPathLoadBuffer + 8;
      }
      pFVar2 = &param_2->AccessTimeStamp;
      if (pFStack_1a0->EndFastPathLoadBuffer <
          (long64 *)((longlong)pFStack_1a0->StartFastPathLoadBuffer + 8)) {
        if ((uStack_180 & 0x10000) == 0) {
          if (*(code **)((longlong)local_1a8 + 0x188) == FArrayReader::Serialize) {
            FArrayReader::Serialize((FArrayReader *)local_1a8,pFVar2,8);
          }
          else {
            (**(code **)((longlong)local_1a8 + 0x188))();
          }
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)local_1a8,(ulong64 *)pFVar2);
        }
      }
      else {
        pFVar2->Ticks = *(long64 *)pFStack_1a0->StartFastPathLoadBuffer;
        pFStack_1a0->StartFastPathLoadBuffer = pFStack_1a0->StartFastPathLoadBuffer + 8;
      }
    }
    if (pvStack_110 != (void *)0x0) {
      FMemory::Free(pvStack_110);
    }
    FArchive::~FArchive((FArchive *)local_1a8);
    if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_e8);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ~FStreamingNetworkPlatformFile @ 148beae00

void __thiscall
FStreamingNetworkPlatformFile::~FStreamingNetworkPlatformFile(FStreamingNetworkPlatformFile *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__IPlatformFile__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  DestructItems<FString,int>
            ((FString *)(this->FilesToSyncAsync).AllocatorInstance.Data,
             (this->FilesToSyncAsync).ArrayNum);
  pFVar1 = (this->FilesToSyncAsync).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNetworkPlatformFile::~FNetworkPlatformFile((FNetworkPlatformFile *)this);
  return;
}

// SendCloseMessage @ 148beb470

bool __thiscall
FStreamingNetworkPlatformFile::SendCloseMessage(FStreamingNetworkPlatformFile *this,ulong64 param_1)

{
  longlong *lpCriticalSection;
  undefined1 uVar1;
  uint local_res8 [2];
  ulong64 local_res10 [3];
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_198;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f0;
  FArchiveState local_d8;
  undefined8 local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  lpCriticalSection = &this->_padding_;
  local_res10[0] = param_1;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8[0] = 0x11;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_res10[1] = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_198);
    local_198._padding_ = 0;
    local_198._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_198.Bytes = &local_f0;
    local_198.ArchiveName.ComparisonIndex.Value = 0;
    local_198.ArchiveName.Number = 0;
    FArchiveState::SetIsSaving((FArchiveState *)&local_198,true);
    (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
    local_198._padding_ = (longlong)&___7FStreamingNetworkFileArchive__6B_;
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    if (*(uint **)(local_198._padding_ + 8) < *(uint **)local_198._padding_ + 1) {
      if ((local_198._padding_ & 0x10000U) == 0) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_198,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_198,local_res8);
      }
    }
    else {
      local_res8[0] = **(uint **)local_198._padding_;
      *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 4;
    }
    if (*(ulong64 **)(local_198._padding_ + 8) < *(ulong64 **)local_198._padding_ + 1) {
      if ((local_198._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_198._padding_ + 0x188) ==
            TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_198,local_res10,8);
        }
        else {
          (**(code **)(local_198._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_198,local_res10);
      }
    }
    else {
      local_res10[0] = **(ulong64 **)local_198._padding_;
      *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 8;
    }
    local_d8._padding_ = 0;
    local_d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_d8._40_8_ = 0;
    local_d8.ArSerializingDefaults = 0;
    local_d8.ArPortFlags = 0;
    local_d8.ArMaxSerializeSize = 0;
    local_d8.ArUEVer.FileVersionUE4 = 0;
    local_d8.ArUEVer.FileVersionUE5 = 0;
    local_d8.ArLicenseeUEVer = 0;
    local_d8.ArEngineVer.Major = 0;
    local_d8.ArEngineVer.Minor = 0;
    local_d8.ArEngineVer.Patch = 0;
    local_d8.ArEngineVer._6_2_ = 0;
    local_d8.ArEngineVer.Changelist = 0;
    local_d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_d8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_d8.SerializedProperty = (FProperty *)0x0;
    local_d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_d8.bCustomVersionsAreReset = false;
    local_d8._129_7_ = 0;
    local_d8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_d8);
    local_38 = 0;
    local_48 = 0;
    pvStack_40 = (void *)0x0;
    local_d8._padding_ = (longlong)&___7FArrayReader__6B_;
    FArchiveState::SetIsLoading(&local_d8,true);
    (**(code **)(local_d8._padding_ + 0x108))(&local_d8,0);
    uVar1 = (**(code **)(this->_padding_ + 0x260))(this,&local_f0,&pvStack_40);
    if (pvStack_40 != (void *)0x0) {
      FMemory::Free(pvStack_40);
    }
    FArchive::~FArchive((FArchive *)&local_d8);
    if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_198);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SendOpenMessage @ 148beb6e0

FStreamingNetworkFileHandle * __thiscall
FStreamingNetworkPlatformFile::SendOpenMessage
          (FStreamingNetworkPlatformFile *this,FString *param_1,bool param_2,bool param_3,
          bool param_4)

{
  ulong64 uVar1;
  ulong64 uVar2;
  char cVar3;
  FStreamingNetworkFileHandle *pFVar4;
  wchar_t *pwVar5;
  FStreamingNetworkFileHandle *pFVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  uint local_res8 [2];
  ulong64 local_1c8;
  ulong64 local_1c0;
  ulong64 local_1b8 [2];
  LPCRITICAL_SECTION local_1a8;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_198;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f0;
  undefined1 local_d8 [8];
  FFastPathLoadBuffer *pFStack_d0;
  uchar *local_c8;
  uchar *puStack_c0;
  uchar *local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  long64 lStack_a0;
  FPackageFileVersion local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  FCustomVersionContainer *pFStack_80;
  FCustomPropertyListNode *local_78;
  FArchiveSavePackageData *pFStack_70;
  FProperty *local_68;
  FArchiveSerializedPropertyChain *pFStack_60;
  undefined8 local_58;
  FArchiveState *pFStack_50;
  undefined8 local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  lpCriticalSection = (LPCRITICAL_SECTION)&this->_padding_;
  local_1a8 = lpCriticalSection;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    local_res8[0] = param_2 + 4;
    pFVar6 = (FStreamingNetworkFileHandle *)0x0;
    local_1b8[1] = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_198);
    local_198._padding_ = 0;
    local_198._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_198.Bytes = &local_f0;
    local_198.ArchiveName.ComparisonIndex.Value = 0;
    local_198.ArchiveName.Number = 0;
    FArchiveState::SetIsSaving((FArchiveState *)&local_198,true);
    (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
    local_198._padding_ = (longlong)&___7FStreamingNetworkFileArchive__6B_;
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    if (*(uint **)(local_198._padding_ + 8) < *(uint **)local_198._padding_ + 1) {
      if ((local_198._padding_ & 0x10000U) == 0) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_198,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_198,local_res8);
      }
    }
    else {
      local_res8[0] = **(uint **)local_198._padding_;
      *(ulonglong *)local_198._padding_ = *(ulonglong *)local_198._padding_ + 4;
    }
    ::operator<<((FArchive *)&local_198,param_1);
    if (param_2) {
      if (*(ulonglong *)(local_198._padding_ + 8) < *(ulonglong *)local_198._padding_ + 4) {
        local_res8[0] = 0;
        if ((local_198._padding_ & 1U) == 0) {
          local_res8[0] = (uint)param_3;
        }
        if (*(code **)(local_198._padding_ + 0x188) ==
            TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_198,local_res8,4);
        }
        else {
          (**(code **)(local_198._padding_ + 0x188))();
        }
        if (1 < local_res8[0]) {
          FArchiveState::SetError((FArchiveState *)&local_198);
        }
      }
      else {
        *(ulonglong *)local_198._padding_ = *(ulonglong *)local_198._padding_ + 4;
      }
      if (*(ulonglong *)(local_198._padding_ + 8) < *(ulonglong *)local_198._padding_ + 4) {
        local_res8[0] = 0;
        if ((local_198._padding_ & 1U) == 0) {
          local_res8[0] = (uint)param_4;
        }
        if (*(code **)(local_198._padding_ + 0x188) ==
            TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_198,local_res8,4);
        }
        else {
          (**(code **)(local_198._padding_ + 0x188))();
        }
        if (1 < local_res8[0]) {
          FArchiveState::SetError((FArchiveState *)&local_198);
        }
      }
      else {
        *(ulonglong *)local_198._padding_ = *(ulonglong *)local_198._padding_ + 4;
      }
    }
    local_d8 = (undefined1  [8])0x0;
    pFStack_d0 = (FFastPathLoadBuffer *)0x0;
    local_c8 = (uchar *)0x0;
    puStack_c0 = (uchar *)0x0;
    local_b8 = (uchar *)0x0;
    uStack_b0 = 0;
    local_a8 = 0;
    lStack_a0 = 0;
    local_98.FileVersionUE4 = 0;
    local_98.FileVersionUE5 = 0;
    uStack_90 = 0;
    local_88._0_2_ = 0;
    local_88._2_2_ = 0;
    local_88._4_4_ = 0;
    pFStack_80 = (FCustomVersionContainer *)0x0;
    local_78 = (FCustomPropertyListNode *)0x0;
    pFStack_70 = (FArchiveSavePackageData *)0x0;
    local_68 = (FProperty *)0x0;
    pFStack_60 = (FArchiveSerializedPropertyChain *)0x0;
    local_58 = 0;
    pFStack_50 = (FArchiveState *)0x0;
    FArchiveState::FArchiveState((FArchiveState *)local_d8);
    local_38 = 0;
    local_48 = 0;
    pvStack_40 = (void *)0x0;
    local_d8 = (undefined1  [8])&___7FArrayReader__6B_;
    FArchiveState::SetIsLoading((FArchiveState *)local_d8,true);
    (**(code **)((longlong)local_d8 + 0x108))(local_d8,0);
    cVar3 = (**(code **)(this->_padding_ + 0x260))(this,&local_f0,&pvStack_40);
    if (cVar3 != '\0') {
      local_1c0 = 0;
      if (pFStack_d0->EndFastPathLoadBuffer <
          (ulong64 *)((longlong)pFStack_d0->StartFastPathLoadBuffer + 8)) {
        if ((uStack_b0 & 0x10000) == 0) {
          if (*(code **)((longlong)local_d8 + 0x188) == FArrayReader::Serialize) {
            FArrayReader::Serialize((FArrayReader *)local_d8,&local_1c0,8);
          }
          else {
            (**(code **)((longlong)local_d8 + 0x188))();
          }
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)local_d8,&local_1c0);
        }
      }
      else {
        local_1c0 = *(ulong64 *)pFStack_d0->StartFastPathLoadBuffer;
        pFStack_d0->StartFastPathLoadBuffer = pFStack_d0->StartFastPathLoadBuffer + 8;
      }
      local_1b8[0] = 0;
      if (pFStack_d0->EndFastPathLoadBuffer <
          (ulong64 *)((longlong)pFStack_d0->StartFastPathLoadBuffer + 8)) {
        if ((uStack_b0 & 0x10000) == 0) {
          if (*(code **)((longlong)local_d8 + 0x188) == FArrayReader::Serialize) {
            FArrayReader::Serialize((FArrayReader *)local_d8,local_1b8,8);
          }
          else {
            (**(code **)((longlong)local_d8 + 0x188))();
          }
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)local_d8,local_1b8);
        }
      }
      else {
        local_1b8[0] = *(ulong64 *)pFStack_d0->StartFastPathLoadBuffer;
        pFStack_d0->StartFastPathLoadBuffer = pFStack_d0->StartFastPathLoadBuffer + 8;
      }
      local_1c8 = 0;
      if (pFStack_d0->EndFastPathLoadBuffer <
          (ulong64 *)((longlong)pFStack_d0->StartFastPathLoadBuffer + 8)) {
        if ((uStack_b0 & 0x10000) == 0) {
          if (*(code **)((longlong)local_d8 + 0x188) == FArrayReader::Serialize) {
            FArrayReader::Serialize((FArrayReader *)local_d8,&local_1c8,8);
          }
          else {
            (**(code **)((longlong)local_d8 + 0x188))();
          }
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)local_d8,&local_1c8);
        }
      }
      else {
        local_1c8 = *(ulong64 *)pFStack_d0->StartFastPathLoadBuffer;
        pFStack_d0->StartFastPathLoadBuffer = pFStack_d0->StartFastPathLoadBuffer + 8;
      }
      if ((param_2) || (0 < (longlong)local_1c8)) {
        pFVar4 = ::operator_new(0x20068);
        uVar2 = local_1c0;
        uVar1 = local_1c8;
        if (pFVar4 != (FStreamingNetworkFileHandle *)0x0) {
          if ((param_1->Data).ArrayNum == 0) {
            pwVar5 = L"";
          }
          else {
            pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
          }
          pFVar4->Network = this;
          pFVar4->_padding_ = (longlong)&___7FStreamingNetworkFileHandle__6B_;
          ::FString::FString(&pFVar4->Filename,pwVar5);
          pFVar4->bWritable = param_2;
          pFVar4->FilePos = 0;
          pFVar4->FileSize = uVar1;
          pFVar4->LazySeek = false;
          pFVar4->CurrentCache = 0;
          pFVar4->bReadable = !param_2;
          pFVar4->HandleId = uVar2;
          pFVar4->CacheStart[1] = -1;
          pFVar4->CacheStart[0] = -1;
          pFVar4->CacheEnd[1] = -1;
          pFVar4->CacheEnd[0] = -1;
          pFVar6 = pFVar4;
          lpCriticalSection = local_1a8;
        }
      }
    }
    if (pvStack_40 != (void *)0x0) {
      FMemory::Free(pvStack_40);
    }
    FArchive::~FArchive((FArchive *)local_d8);
    if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_198);
    LeaveCriticalSection(lpCriticalSection);
    return pFVar6;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SendReadMessage @ 148bebbe0

bool __thiscall
FStreamingNetworkPlatformFile::SendReadMessage
          (FStreamingNetworkPlatformFile *this,ulong64 param_1,uchar *param_2,long64 param_3,
          long64 param_4)

{
  char cVar1;
  bool bVar2;
  uint local_res8 [2];
  ulong64 local_res10;
  ulong64 local_res20;
  ulong64 local_1a8 [2];
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_198;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f0;
  undefined1 local_d8 [8];
  FFastPathLoadBuffer *pFStack_d0;
  uchar *local_c8;
  uchar *puStack_c0;
  uchar *local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  long64 lStack_a0;
  FPackageFileVersion local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  FCustomVersionContainer *pFStack_80;
  FCustomPropertyListNode *local_78;
  FArchiveSavePackageData *pFStack_70;
  FProperty *local_68;
  FArchiveSerializedPropertyChain *pFStack_60;
  undefined8 local_58;
  FArchiveState *pFStack_50;
  undefined8 local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  local_res8[0] = 0xf;
  local_1a8[1] = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_198._padding_ = 0;
  local_res10 = param_1;
  local_res20 = param_3;
  FArchiveState::FArchiveState((FArchiveState *)&local_198);
  local_198._padding_ = 0;
  local_198._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_198.Bytes = &local_f0;
  local_198.ArchiveName.ComparisonIndex.Value = 0;
  local_198.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_198,true);
  (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
  local_198._padding_ = (longlong)&___7FStreamingNetworkFileArchive__6B_;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  if (*(uint **)(local_198._padding_ + 8) < *(uint **)local_198._padding_ + 1) {
    if ((local_198._padding_ & 0x10000U) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_198,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_198,local_res8);
    }
  }
  else {
    local_res8[0] = **(uint **)local_198._padding_;
    *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 4;
  }
  if (*(ulong64 **)(local_198._padding_ + 8) < *(ulong64 **)local_198._padding_ + 1) {
    if ((local_198._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_198._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_198,&local_res10,8);
      }
      else {
        (**(code **)(local_198._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_198,&local_res10);
    }
  }
  else {
    local_res10 = **(ulong64 **)local_198._padding_;
    *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 8;
  }
  if (*(ulong64 **)(local_198._padding_ + 8) < *(ulong64 **)local_198._padding_ + 1) {
    if ((local_198._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_198._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_198,&local_res20,8);
      }
      else {
        (**(code **)(local_198._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_198,&local_res20);
    }
  }
  else {
    local_res20 = **(ulong64 **)local_198._padding_;
    *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 8;
  }
  if (*(long64 **)(local_198._padding_ + 8) < *(long64 **)local_198._padding_ + 1) {
    if ((local_198._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_198._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_198,&param_4,8);
      }
      else {
        (**(code **)(local_198._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_198,(ulong64 *)&param_4);
    }
  }
  else {
    param_4 = **(long64 **)local_198._padding_;
    *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 8;
  }
  local_d8 = (undefined1  [8])0x0;
  pFStack_d0 = (FFastPathLoadBuffer *)0x0;
  local_c8 = (uchar *)0x0;
  puStack_c0 = (uchar *)0x0;
  local_b8 = (uchar *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  lStack_a0 = 0;
  local_98.FileVersionUE4 = 0;
  local_98.FileVersionUE5 = 0;
  uStack_90 = 0;
  local_88._0_2_ = 0;
  local_88._2_2_ = 0;
  local_88._4_4_ = 0;
  pFStack_80 = (FCustomVersionContainer *)0x0;
  local_78 = (FCustomPropertyListNode *)0x0;
  pFStack_70 = (FArchiveSavePackageData *)0x0;
  local_68 = (FProperty *)0x0;
  pFStack_60 = (FArchiveSerializedPropertyChain *)0x0;
  local_58 = 0;
  pFStack_50 = (FArchiveState *)0x0;
  FArchiveState::FArchiveState((FArchiveState *)local_d8);
  local_38 = 0;
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_d8 = (undefined1  [8])&___7FArrayReader__6B_;
  FArchiveState::SetIsLoading((FArchiveState *)local_d8,true);
  (**(code **)((longlong)local_d8 + 0x108))(local_d8,0);
  cVar1 = (**(code **)(this->_padding_ + 0x260))(this,&local_f0,&pvStack_40);
  if (cVar1 != '\0') {
    local_1a8[0] = 0;
    if (pFStack_d0->EndFastPathLoadBuffer <
        (ulong64 *)((longlong)pFStack_d0->StartFastPathLoadBuffer + 8)) {
      if ((uStack_b0 & 0x10000) == 0) {
        if (*(code **)((longlong)local_d8 + 0x188) == FArrayReader::Serialize) {
          FArrayReader::Serialize((FArrayReader *)local_d8,local_1a8,8);
        }
        else {
          (**(code **)((longlong)local_d8 + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)local_d8,local_1a8);
      }
    }
    else {
      local_1a8[0] = *(ulong64 *)pFStack_d0->StartFastPathLoadBuffer;
      pFStack_d0->StartFastPathLoadBuffer = pFStack_d0->StartFastPathLoadBuffer + 8;
    }
    if (local_1a8[0] == local_res20) {
      FArrayReader::Serialize((FArrayReader *)local_d8,param_2,local_res20);
      bVar2 = true;
      goto LAB_148bebf12;
    }
  }
  bVar2 = false;
LAB_148bebf12:
  if (pvStack_40 != (void *)0x0) {
    FMemory::Free(pvStack_40);
  }
  FArchive::~FArchive((FArchive *)local_d8);
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_198);
  return bVar2;
}

// SendReadMessage @ 148bebf70

bool __thiscall
FStreamingNetworkPlatformFile::SendReadMessage
          (FStreamingNetworkPlatformFile *this,ulong64 param_1,uchar *param_2,long64 param_3)

{
  longlong *lpCriticalSection;
  char cVar1;
  bool bVar2;
  uint local_res8 [2];
  ulong64 local_res10 [2];
  ulong64 local_res20;
  ulong64 local_1b8 [2];
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_1a8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_100;
  undefined1 local_e8 [8];
  FFastPathLoadBuffer *pFStack_e0;
  uchar *local_d8;
  uchar *puStack_d0;
  uchar *local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  long64 lStack_b0;
  FPackageFileVersion local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  FCustomVersionContainer *pFStack_90;
  FCustomPropertyListNode *local_88;
  FArchiveSavePackageData *pFStack_80;
  FProperty *local_78;
  FArchiveSerializedPropertyChain *pFStack_70;
  undefined8 local_68;
  FArchiveState *pFStack_60;
  undefined8 local_58;
  void *pvStack_50;
  undefined8 local_48;
  
  lpCriticalSection = &this->_padding_;
  local_res10[0] = param_1;
  local_res20 = param_3;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8[0] = 0xe;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1b8[1] = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_1a8);
    local_1a8._padding_ = 0;
    local_1a8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_1a8.Bytes = &local_100;
    local_1a8.ArchiveName.ComparisonIndex.Value = 0;
    local_1a8.ArchiveName.Number = 0;
    FArchiveState::SetIsSaving((FArchiveState *)&local_1a8,true);
    (**(code **)(local_1a8._padding_ + 0x108))(&local_1a8,0);
    local_1a8._padding_ = (longlong)&___7FStreamingNetworkFileArchive__6B_;
    local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.ArrayNum = 0;
    local_100.ArrayMax = 0;
    if (*(uint **)(local_1a8._padding_ + 8) < *(uint **)local_1a8._padding_ + 1) {
      if ((local_1a8._padding_ & 0x10000U) == 0) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1a8,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1a8,local_res8);
      }
    }
    else {
      local_res8[0] = **(uint **)local_1a8._padding_;
      *(longlong *)local_1a8._padding_ = *(longlong *)local_1a8._padding_ + 4;
    }
    if (*(ulong64 **)(local_1a8._padding_ + 8) < *(ulong64 **)local_1a8._padding_ + 1) {
      if ((local_1a8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_1a8._padding_ + 0x188) ==
            TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1a8,local_res10,8);
        }
        else {
          (**(code **)(local_1a8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1a8,local_res10);
      }
    }
    else {
      local_res10[0] = **(ulong64 **)local_1a8._padding_;
      *(longlong *)local_1a8._padding_ = *(longlong *)local_1a8._padding_ + 8;
    }
    if (*(ulong64 **)(local_1a8._padding_ + 8) < *(ulong64 **)local_1a8._padding_ + 1) {
      if ((local_1a8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_1a8._padding_ + 0x188) ==
            TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1a8,&local_res20,8);
        }
        else {
          (**(code **)(local_1a8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1a8,&local_res20);
      }
    }
    else {
      local_res20 = **(ulong64 **)local_1a8._padding_;
      *(longlong *)local_1a8._padding_ = *(longlong *)local_1a8._padding_ + 8;
    }
    local_e8 = (undefined1  [8])0x0;
    pFStack_e0 = (FFastPathLoadBuffer *)0x0;
    local_d8 = (uchar *)0x0;
    puStack_d0 = (uchar *)0x0;
    local_c8 = (uchar *)0x0;
    uStack_c0 = 0;
    local_b8 = 0;
    lStack_b0 = 0;
    local_a8.FileVersionUE4 = 0;
    local_a8.FileVersionUE5 = 0;
    uStack_a0 = 0;
    local_98._0_2_ = 0;
    local_98._2_2_ = 0;
    local_98._4_4_ = 0;
    pFStack_90 = (FCustomVersionContainer *)0x0;
    local_88 = (FCustomPropertyListNode *)0x0;
    pFStack_80 = (FArchiveSavePackageData *)0x0;
    local_78 = (FProperty *)0x0;
    pFStack_70 = (FArchiveSerializedPropertyChain *)0x0;
    local_68 = 0;
    pFStack_60 = (FArchiveState *)0x0;
    FArchiveState::FArchiveState((FArchiveState *)local_e8);
    local_48 = 0;
    local_58 = 0;
    pvStack_50 = (void *)0x0;
    local_e8 = (undefined1  [8])&___7FArrayReader__6B_;
    FArchiveState::SetIsLoading((FArchiveState *)local_e8,true);
    (**(code **)((longlong)local_e8 + 0x108))(local_e8,0);
    cVar1 = (**(code **)(this->_padding_ + 0x260))(this,&local_100,&pvStack_50);
    if (cVar1 == '\0') {
      bVar2 = false;
    }
    else {
      local_1b8[0] = 0;
      if (pFStack_e0->EndFastPathLoadBuffer <
          (ulong64 *)((longlong)pFStack_e0->StartFastPathLoadBuffer + 8)) {
        if ((uStack_c0 & 0x10000) == 0) {
          if (*(code **)((longlong)local_e8 + 0x188) == FArrayReader::Serialize) {
            FArrayReader::Serialize((FArrayReader *)local_e8,local_1b8,8);
          }
          else {
            (**(code **)((longlong)local_e8 + 0x188))();
          }
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)local_e8,local_1b8);
        }
      }
      else {
        local_1b8[0] = *(ulong64 *)pFStack_e0->StartFastPathLoadBuffer;
        pFStack_e0->StartFastPathLoadBuffer = pFStack_e0->StartFastPathLoadBuffer + 8;
      }
      bVar2 = local_1b8[0] == local_res20;
      if (bVar2) {
        FArrayReader::Serialize((FArrayReader *)local_e8,param_2,local_res20);
      }
    }
    if (pvStack_50 != (void *)0x0) {
      FMemory::Free(pvStack_50);
    }
    FArchive::~FArchive((FArchive *)local_e8);
    if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_1a8);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SendSeekMessage @ 148bec2e0

bool __thiscall
FStreamingNetworkPlatformFile::SendSeekMessage
          (FStreamingNetworkPlatformFile *this,ulong64 param_1,long64 param_2)

{
  longlong *lpCriticalSection;
  char cVar1;
  bool bVar2;
  uint local_res8 [2];
  ulong64 local_res10;
  ulong64 local_res18;
  ulong64 local_res20;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_1a8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_100;
  undefined1 local_e8 [8];
  FFastPathLoadBuffer *pFStack_e0;
  uchar *local_d8;
  uchar *puStack_d0;
  uchar *local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  long64 lStack_b0;
  FPackageFileVersion local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  FCustomVersionContainer *pFStack_90;
  FCustomPropertyListNode *local_88;
  FArchiveSavePackageData *pFStack_80;
  FProperty *local_78;
  FArchiveSerializedPropertyChain *pFStack_70;
  undefined8 local_68;
  FArchiveState *pFStack_60;
  undefined8 local_58;
  void *pvStack_50;
  undefined8 local_48;
  
  lpCriticalSection = &this->_padding_;
  local_res10 = param_1;
  local_res18 = param_2;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8[0] = 0x12;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    local_1a8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_1a8);
    local_1a8._padding_ = 0;
    local_1a8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_1a8.Bytes = &local_100;
    local_1a8.ArchiveName.ComparisonIndex.Value = 0;
    local_1a8.ArchiveName.Number = 0;
    FArchiveState::SetIsSaving((FArchiveState *)&local_1a8,true);
    (**(code **)(local_1a8._padding_ + 0x108))(&local_1a8,0);
    local_1a8._padding_ = (longlong)&___7FStreamingNetworkFileArchive__6B_;
    local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.ArrayNum = 0;
    local_100.ArrayMax = 0;
    if (*(uint **)(local_1a8._padding_ + 8) < *(uint **)local_1a8._padding_ + 1) {
      if ((local_1a8._padding_ & 0x10000U) == 0) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1a8,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1a8,local_res8);
      }
    }
    else {
      local_res8[0] = **(uint **)local_1a8._padding_;
      *(longlong *)local_1a8._padding_ = *(longlong *)local_1a8._padding_ + 4;
    }
    if (*(ulong64 **)(local_1a8._padding_ + 8) < *(ulong64 **)local_1a8._padding_ + 1) {
      if ((local_1a8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_1a8._padding_ + 0x188) ==
            TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1a8,&local_res10,8);
        }
        else {
          (**(code **)(local_1a8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1a8,&local_res10);
      }
    }
    else {
      local_res10 = **(ulong64 **)local_1a8._padding_;
      *(longlong *)local_1a8._padding_ = *(longlong *)local_1a8._padding_ + 8;
    }
    if (*(ulong64 **)(local_1a8._padding_ + 8) < *(ulong64 **)local_1a8._padding_ + 1) {
      if ((local_1a8._padding_ & 0x10000U) == 0) {
        if (*(code **)(local_1a8._padding_ + 0x188) ==
            TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_1a8,&local_res18,8);
        }
        else {
          (**(code **)(local_1a8._padding_ + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1a8,&local_res18);
      }
    }
    else {
      local_res18 = **(ulong64 **)local_1a8._padding_;
      *(longlong *)local_1a8._padding_ = *(longlong *)local_1a8._padding_ + 8;
    }
    local_e8 = (undefined1  [8])0x0;
    pFStack_e0 = (FFastPathLoadBuffer *)0x0;
    local_d8 = (uchar *)0x0;
    puStack_d0 = (uchar *)0x0;
    local_c8 = (uchar *)0x0;
    uStack_c0 = 0;
    local_b8 = 0;
    lStack_b0 = 0;
    local_a8.FileVersionUE4 = 0;
    local_a8.FileVersionUE5 = 0;
    uStack_a0 = 0;
    local_98._0_2_ = 0;
    local_98._2_2_ = 0;
    local_98._4_4_ = 0;
    pFStack_90 = (FCustomVersionContainer *)0x0;
    local_88 = (FCustomPropertyListNode *)0x0;
    pFStack_80 = (FArchiveSavePackageData *)0x0;
    local_78 = (FProperty *)0x0;
    pFStack_70 = (FArchiveSerializedPropertyChain *)0x0;
    local_68 = 0;
    pFStack_60 = (FArchiveState *)0x0;
    FArchiveState::FArchiveState((FArchiveState *)local_e8);
    local_48 = 0;
    local_58 = 0;
    pvStack_50 = (void *)0x0;
    local_e8 = (undefined1  [8])&___7FArrayReader__6B_;
    FArchiveState::SetIsLoading((FArchiveState *)local_e8,true);
    (**(code **)((longlong)local_e8 + 0x108))(local_e8,0);
    cVar1 = (**(code **)(this->_padding_ + 0x260))(this,&local_100,&pvStack_50);
    if (cVar1 == '\0') {
      bVar2 = false;
    }
    else {
      local_res20 = 0xffffffffffffffff;
      if (pFStack_e0->EndFastPathLoadBuffer <
          (ulong64 *)((longlong)pFStack_e0->StartFastPathLoadBuffer + 8)) {
        if ((uStack_c0 & 0x10000) == 0) {
          if (*(code **)((longlong)local_e8 + 0x188) == FArrayReader::Serialize) {
            FArrayReader::Serialize((FArrayReader *)local_e8,&local_res20,8);
          }
          else {
            (**(code **)((longlong)local_e8 + 0x188))();
          }
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)local_e8,&local_res20);
        }
      }
      else {
        local_res20 = *(ulong64 *)pFStack_e0->StartFastPathLoadBuffer;
        pFStack_e0->StartFastPathLoadBuffer = pFStack_e0->StartFastPathLoadBuffer + 8;
      }
      bVar2 = local_res20 == local_res18;
    }
    if (pvStack_50 != (void *)0x0) {
      FMemory::Free(pvStack_50);
    }
    FArchive::~FArchive((FArchive *)local_e8);
    if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_1a8);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SendWriteMessage @ 148bec640

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FStreamingNetworkPlatformFile::SendWriteMessage
          (FStreamingNetworkPlatformFile *this,ulong64 param_1,uchar *param_2,long64 param_3)

{
  longlong *lpCriticalSection;
  code *pcVar1;
  size_t _Size;
  ForAnyElementType *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint local_res8 [2];
  ulong64 local_res10;
  size_t local_res20;
  ulong64 local_208 [2];
  FArchiveState local_1f8;
  longlong local_168;
  ForAnyElementType *local_160;
  FName local_158;
  ForAnyElementType local_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined1 local_128 [8];
  FFastPathLoadBuffer *pFStack_120;
  uchar *local_118;
  uchar *puStack_110;
  uchar *local_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  long64 lStack_f0;
  FPackageFileVersion local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  FCustomVersionContainer *pFStack_d0;
  FCustomPropertyListNode *local_c8;
  FArchiveSavePackageData *pFStack_c0;
  FProperty *local_b8;
  FArchiveSerializedPropertyChain *pFStack_b0;
  undefined8 local_a8;
  FArchiveState *pFStack_a0;
  undefined8 local_98;
  void *pvStack_90;
  undefined8 local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  lpCriticalSection = &this->_padding_;
  local_res10 = param_1;
  local_res20 = param_3;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res8[0] = 0x10;
  local_1f8._padding_ = 0;
  local_1f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_138 = 0;
  local_1f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_1f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_1f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_1f8._40_8_ = 0;
  local_1f8.ArSerializingDefaults = 0;
  local_1f8.ArPortFlags = 0;
  local_1f8.ArMaxSerializeSize = 0;
  local_1f8.ArUEVer.FileVersionUE4 = 0;
  local_1f8.ArUEVer.FileVersionUE5 = 0;
  local_1f8.ArLicenseeUEVer = 0;
  local_1f8.ArEngineVer.Major = 0;
  local_1f8.ArEngineVer.Minor = 0;
  local_1f8.ArEngineVer.Patch = 0;
  local_1f8.ArEngineVer._6_2_ = 0;
  local_1f8.ArEngineVer.Changelist = 0;
  local_1f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_1f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_1f8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_1f8.SerializedProperty = (FProperty *)0x0;
  local_1f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_1f8.bCustomVersionsAreReset = false;
  local_1f8._129_7_ = 0;
  local_1f8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_1f8);
  local_168 = 0;
  local_1f8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_160 = &local_150;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  FArchiveState::SetIsSaving(&local_1f8,true);
  (**(code **)(local_1f8._padding_ + 0x108))(&local_1f8,0);
  local_1f8._padding_ = (longlong)&___7FStreamingNetworkFileArchive__6B_;
  local_150.Data = (FScriptContainerElement *)0x0;
  local_148 = 0;
  if ((local_1f8.ActiveFPLB)->EndFastPathLoadBuffer <
      (uint *)((longlong)(local_1f8.ActiveFPLB)->StartFastPathLoadBuffer + 4)) {
    if (local_1f8.ArForceByteSwapping == 0) {
      lVar7 = (local_168 - *(int *)&local_160[1].Data) + 4;
      if (0 < lVar7) {
        if (0x7ffffffe < *(int *)&local_160[1].Data + lVar7) {
          ::FName::ToString(&local_158,&local_78);
          UE::Logging::Private::BasicFatalLog
                    (&`public:_virtual_void___cdecl_TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(void*___ptr64,__int64)___ptr64'
                      ::__l12::LOG_Static,(FLogCategoryBase *)&LogSerialization);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,(int)lVar7,local_160,(int *)(local_160 + 1),
                   (int *)((longlong)&local_160[1].Data + 4));
      }
      if (((longlong)*(int *)&local_160[1].Data < local_168 + 4) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Offset + Num) <= Bytes.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryWriter.h"
                             ,0x39,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      pFVar2 = local_160;
      lVar7 = (longlong)(int)(uint)local_168;
      uVar6 = 0;
      if ((int)(uint)local_168 < *(int *)&local_160[1].Data) {
        uVar6 = ~(uint)local_168 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      *(uint *)(pFVar2->Data + lVar7) = local_res8[0];
      local_168 = local_168 + 4;
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1f8,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)(local_1f8.ActiveFPLB)->StartFastPathLoadBuffer;
    (local_1f8.ActiveFPLB)->StartFastPathLoadBuffer =
         (local_1f8.ActiveFPLB)->StartFastPathLoadBuffer + 4;
  }
  if ((local_1f8.ActiveFPLB)->EndFastPathLoadBuffer <
      (ulong64 *)((longlong)(local_1f8.ActiveFPLB)->StartFastPathLoadBuffer + 8)) {
    if (local_1f8.ArForceByteSwapping == 0) {
      if (*(code **)(local_1f8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        lVar7 = (local_168 - *(int *)&local_160[1].Data) + 8;
        if (0 < lVar7) {
          if (0x7ffffffe < *(int *)&local_160[1].Data + lVar7) {
            ::FName::ToString(&local_158,&local_68);
            UE::Logging::Private::BasicFatalLog
                      (&`public:_virtual_void___cdecl_TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(void*___ptr64,__int64)___ptr64'
                        ::__l12::LOG_Static,(FLogCategoryBase *)&LogSerialization);
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
          }
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,(int)lVar7,local_160,(int *)(local_160 + 1),
                     (int *)((longlong)&local_160[1].Data + 4));
        }
        if (((longlong)*(int *)&local_160[1].Data < local_168 + 8) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Offset + Num) <= Bytes.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryWriter.h"
                               ,0x39,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        pFVar2 = local_160;
        lVar7 = (longlong)(int)(uint)local_168;
        uVar6 = 0;
        if ((int)(uint)local_168 < *(int *)&local_160[1].Data) {
          uVar6 = ~(uint)local_168 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        *(ulong64 *)(pFVar2->Data + lVar7) = local_res10;
        local_168 = local_168 + 8;
      }
      else {
        (**(code **)(local_1f8._padding_ + 0x188))(&local_1f8,&local_res10,8);
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1f8,&local_res10);
    }
  }
  else {
    local_res10 = *(ulong64 *)(local_1f8.ActiveFPLB)->StartFastPathLoadBuffer;
    (local_1f8.ActiveFPLB)->StartFastPathLoadBuffer =
         (local_1f8.ActiveFPLB)->StartFastPathLoadBuffer + 8;
  }
  if ((local_1f8.ActiveFPLB)->EndFastPathLoadBuffer <
      (size_t *)((longlong)(local_1f8.ActiveFPLB)->StartFastPathLoadBuffer + 8)) {
    if (local_1f8.ArForceByteSwapping == 0) {
      if (*(code **)(local_1f8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        lVar7 = (local_168 - *(int *)&local_160[1].Data) + 8;
        if (0 < lVar7) {
          if (0x7ffffffe < *(int *)&local_160[1].Data + lVar7) {
            ::FName::ToString(&local_158,&local_58);
            UE::Logging::Private::BasicFatalLog
                      (&`public:_virtual_void___cdecl_TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(void*___ptr64,__int64)___ptr64'
                        ::__l12::LOG_Static,(FLogCategoryBase *)&LogSerialization);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
          }
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,(int)lVar7,local_160,(int *)(local_160 + 1),
                     (int *)((longlong)&local_160[1].Data + 4));
        }
        if (((longlong)*(int *)&local_160[1].Data < local_168 + 8) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Offset + Num) <= Bytes.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryWriter.h"
                               ,0x39,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        pFVar2 = local_160;
        lVar7 = (longlong)(int)(uint)local_168;
        uVar6 = 0;
        if ((int)(uint)local_168 < *(int *)&local_160[1].Data) {
          uVar6 = ~(uint)local_168 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        *(size_t *)(pFVar2->Data + lVar7) = local_res20;
        local_168 = local_168 + 8;
      }
      else {
        (**(code **)(local_1f8._padding_ + 0x188))(&local_1f8,&local_res20,8);
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_1f8,&local_res20);
    }
  }
  else {
    local_res20 = *(size_t *)(local_1f8.ActiveFPLB)->StartFastPathLoadBuffer;
    (local_1f8.ActiveFPLB)->StartFastPathLoadBuffer =
         (local_1f8.ActiveFPLB)->StartFastPathLoadBuffer + 8;
  }
  _Size = local_res20;
  lVar7 = (local_168 - *(int *)&local_160[1].Data) + local_res20;
  if (0 < lVar7) {
    if (0x7ffffffe < *(int *)&local_160[1].Data + lVar7) {
      ::FName::ToString(&local_158,&local_48);
      UE::Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(void*___ptr64,__int64)___ptr64'
                  ::__l12::LOG_Static,(FLogCategoryBase *)&LogSerialization);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)lVar7,local_160,(int *)(local_160 + 1),
               (int *)((longlong)&local_160[1].Data + 4));
  }
  if (((longlong)*(int *)&local_160[1].Data < (longlong)(local_168 + _Size)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Offset + Num) <= Bytes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryWriter.h"
                         ,0x39,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  pFVar2 = local_160;
  if (_Size != 0) {
    lVar7 = (longlong)(int)(uint)local_168;
    uVar6 = 0;
    if ((int)(uint)local_168 < *(int *)&local_160[1].Data) {
      uVar6 = ~(uint)local_168 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    memcpy(pFVar2->Data + lVar7,param_2,_Size);
    local_168 = local_168 + _Size;
  }
  local_128 = (undefined1  [8])0x0;
  pFStack_120 = (FFastPathLoadBuffer *)0x0;
  local_118 = (uchar *)0x0;
  puStack_110 = (uchar *)0x0;
  local_108 = (uchar *)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  lStack_f0 = 0;
  local_e8.FileVersionUE4 = 0;
  local_e8.FileVersionUE5 = 0;
  uStack_e0 = 0;
  local_d8._0_2_ = 0;
  local_d8._2_2_ = 0;
  local_d8._4_4_ = 0;
  pFStack_d0 = (FCustomVersionContainer *)0x0;
  local_c8 = (FCustomPropertyListNode *)0x0;
  pFStack_c0 = (FArchiveSavePackageData *)0x0;
  local_b8 = (FProperty *)0x0;
  pFStack_b0 = (FArchiveSerializedPropertyChain *)0x0;
  local_a8 = 0;
  pFStack_a0 = (FArchiveState *)0x0;
  FArchiveState::FArchiveState((FArchiveState *)local_128);
  local_88 = 0;
  local_98 = 0;
  pvStack_90 = (void *)0x0;
  local_128 = (undefined1  [8])&___7FArrayReader__6B_;
  FArchiveState::SetIsLoading((FArchiveState *)local_128,true);
  (**(code **)((longlong)local_128 + 0x108))(local_128,0);
  cVar5 = (**(code **)(this->_padding_ + 0x260))(this,&local_150,&pvStack_90);
  if (cVar5 == '\0') {
    bVar3 = false;
  }
  else {
    local_208[0] = 0;
    if (pFStack_120->EndFastPathLoadBuffer <
        (size_t *)((longlong)pFStack_120->StartFastPathLoadBuffer + 8)) {
      if ((uStack_100 & 0x10000) == 0) {
        if (*(code **)((longlong)local_128 + 0x188) == FArrayReader::Serialize) {
          FArrayReader::Serialize((FArrayReader *)local_128,local_208,8);
        }
        else {
          (**(code **)((longlong)local_128 + 0x188))();
        }
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)local_128,local_208);
      }
    }
    else {
      local_208[0] = *(ulong64 *)pFStack_120->StartFastPathLoadBuffer;
      pFStack_120->StartFastPathLoadBuffer = pFStack_120->StartFastPathLoadBuffer + 8;
    }
    bVar3 = local_208[0] == local_res20;
  }
  if (pvStack_90 != (void *)0x0) {
    FMemory::Free(pvStack_90);
  }
  FArchive::~FArchive((FArchive *)local_128);
  if (local_150.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data);
  }
  FArchive::~FArchive((FArchive *)&local_1f8);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar3;
}

