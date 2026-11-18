// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 3

// ~FJournalPageBase @ 148cb6310

void __thiscall StorageServer::FJournalPageBase::~FJournalPageBase(FJournalPageBase *this)

{
  this->_padding_ = (longlong)&___7FJournalPageBase_StorageServer__6B_;
  return;
}

// Flush @ 148cc58d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
StorageServer::FJournalPageBase::Flush
          (FJournalPageBase *this,IFileHandle *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  FBlake3Hash *pFVar5;
  undefined1 *puVar6;
  bool bVar7;
  undefined1 auStackY_2e8 [32];
  FJournalPageBase *local_2a8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_2a0;
  FArchiveState local_298;
  undefined8 local_208;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_200;
  undefined8 local_1f8;
  FArchiveState local_1e8;
  undefined8 local_158;
  undefined1 *local_150;
  undefined8 local_148;
  uchar local_138 [8];
  uchar auStack_130 [8];
  uchar local_128 [4];
  FJournalPageHeader local_124;
  undefined1 local_f8 [128];
  undefined1 *local_78;
  int local_70;
  undefined4 local_6c;
  FBlake3Hash local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId506,"FJournalPageBase::Flush",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheJournalSectioned.cpp"
               ,0x1fa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId506);
  }
  if (this->bDirty == false) {
    bVar2 = false;
    goto LAB_148cc5bbe;
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(param_2,0,No);
  local_298._padding_ = 0;
  local_298.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_298.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_298.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_298.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_298._40_8_ = 0;
  local_298.ArSerializingDefaults = 0;
  local_298.ArPortFlags = 0;
  local_298.ArMaxSerializeSize = 0;
  local_298.ArUEVer.FileVersionUE4 = 0;
  local_298.ArUEVer.FileVersionUE5 = 0;
  local_298.ArLicenseeUEVer = 0;
  local_298.ArEngineVer.Major = 0;
  local_298.ArEngineVer.Minor = 0;
  local_298.ArEngineVer.Patch = 0;
  local_298.ArEngineVer._6_2_ = 0;
  local_298.ArEngineVer.Changelist = 0;
  local_298.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_298.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_298.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_298.SerializedProperty = (FProperty *)0x0;
  local_298.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_298.bCustomVersionsAreReset = false;
  local_298._129_7_ = 0;
  local_298.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_298);
  local_208 = 0;
  local_298._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_1f8 = 0;
  local_200 = param_2;
  FArchiveState::SetIsSaving(&local_298,true);
  (**(code **)(local_298._padding_ + 0x108))(&local_298,0);
  local_298._padding_ = (longlong)&___7FMemoryWriter__6B_;
  (**(code **)(this->_padding_ + 0x18))(this,&local_298);
  if (((longlong)(param_2->ArrayNum + 0x40) <= this->PageSize) ||
     (local_2a8 = this, local_2a0 = param_2,
     bVar2 = `StorageServer::FJournalPageBase::Flush'::__l6::<lambda_1>::operator()(&local_2a8),
     bVar2)) {
    local_124.Magic = 0x50414745;
    local_124.DataHash.Hash[0x10] = '\0';
    local_124.DataHash.Hash[0x11] = '\0';
    local_124.DataHash.Hash[0x12] = '\0';
    local_124.DataHash.Hash[0x13] = '\0';
    local_124.Type = this->PageType;
    local_124.PageSize = (uint)this->PageSize;
    local_124.DataSize = param_2->ArrayNum;
    local_124.DataHash.Hash[0] = '\0';
    local_124.DataHash.Hash[1] = '\0';
    local_124.DataHash.Hash[2] = '\0';
    local_124.DataHash.Hash[3] = '\0';
    local_124.DataHash.Hash[4] = '\0';
    local_124.DataHash.Hash[5] = '\0';
    local_124.DataHash.Hash[6] = '\0';
    local_124.DataHash.Hash[7] = '\0';
    local_124.DataHash.Hash[8] = '\0';
    local_124.DataHash.Hash[9] = '\0';
    local_124.DataHash.Hash[10] = '\0';
    local_124.DataHash.Hash[0xb] = '\0';
    local_124.DataHash.Hash[0xc] = '\0';
    local_124.DataHash.Hash[0xd] = '\0';
    local_124.DataHash.Hash[0xe] = '\0';
    local_124.DataHash.Hash[0xf] = '\0';
    pFVar5 = FBlake3::HashBuffer(&local_68,(param_2->AllocatorInstance).Data,
                                 (longlong)(int)local_124.DataSize);
    local_138 = *(uchar (*) [8])pFVar5->Hash;
    auStack_130 = *(uchar (*) [8])(pFVar5->Hash + 8);
    local_128 = *(uchar (*) [4])(pFVar5->Hash + 0x10);
    local_78 = (undefined1 *)0x0;
    local_70 = 0;
    local_1e8._padding_ = 0;
    local_1e8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_6c = 0x80;
    local_1e8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_1e8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_1e8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_1e8._40_8_ = 0;
    local_1e8.ArSerializingDefaults = 0;
    local_1e8.ArPortFlags = 0;
    local_1e8.ArMaxSerializeSize = 0;
    local_1e8.ArUEVer.FileVersionUE4 = 0;
    local_1e8.ArUEVer.FileVersionUE5 = 0;
    local_1e8.ArLicenseeUEVer = 0;
    local_1e8.ArEngineVer.Major = 0;
    local_1e8.ArEngineVer.Minor = 0;
    local_1e8.ArEngineVer.Patch = 0;
    local_1e8.ArEngineVer._6_2_ = 0;
    local_1e8.ArEngineVer.Changelist = 0;
    local_1e8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_1e8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_1e8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_1e8.SerializedProperty = (FProperty *)0x0;
    local_1e8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_1e8.bCustomVersionsAreReset = false;
    local_1e8._129_7_ = 0;
    local_1e8.NextProxy = (FArchiveState *)0x0;
    local_124.DataHash.Hash._0_8_ = local_138;
    local_124.DataHash.Hash._8_8_ = auStack_130;
    local_124.DataHash.Hash._16_4_ = local_128;
    FArchiveState::FArchiveState(&local_1e8);
    local_158 = 0;
    local_1e8._padding_ =
         (longlong)
         &
         ___7__TMemoryWriterBase_V__TSizedInlineAllocator__0IA__0CA_V__TSizedDefaultAllocator__0CA_______6B_
    ;
    local_150 = local_f8;
    local_148 = 0;
    FArchiveState::SetIsSaving(&local_1e8,true);
    (**(code **)(local_1e8._padding_ + 0x108))(&local_1e8,0);
    StorageServer::operator<<((FArchive *)&local_1e8,&local_124);
    if (local_70 < 0x41) {
      cVar4 = (**(code **)((longlong)*param_1 + 0x10))(param_1,this->FilePos);
      if (cVar4 == '\0') goto LAB_148cc5b87;
      puVar6 = local_f8;
      if (local_78 != (undefined1 *)0x0) {
        puVar6 = local_78;
      }
      cVar4 = (**(code **)((longlong)*param_1 + 0x30))(param_1,puVar6,(longlong)local_70);
      if (((cVar4 == '\0') ||
          (cVar4 = (**(code **)((longlong)*param_1 + 0x10))(param_1,this->FilePos + 0x40),
          cVar4 == '\0')) ||
         (cVar4 = (**(code **)((longlong)*param_1 + 0x30))
                            (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum),
         cVar4 == '\0')) goto LAB_148cc5b87;
      this->bDirty = false;
      bVar2 = true;
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6971948200311651819>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheJournalSectioned.cpp"
                         ,0x215,"HeaderBuffer.Num() <= FJournalPageHeader::SerializedSize");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
LAB_148cc5b87:
      bVar2 = false;
    }
    FArchive::~FArchive((FArchive *)&local_1e8);
    if (local_78 != (undefined1 *)0x0) {
      FMemory::Free(local_78);
    }
  }
  else {
    bVar2 = false;
  }
  FArchive::~FArchive((FArchive *)&local_298);
LAB_148cc5bbe:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar2;
}

// operator() @ 150539840

bool __thiscall `StorageServer::FJournalPageBase::Flush'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6971948200311651835>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6971948200311651835>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

