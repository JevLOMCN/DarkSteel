// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// FArchiveStackTrace @ 141ed1db0

FArchiveStackTrace * __thiscall
FArchiveStackTrace::FArchiveStackTrace
          (FArchiveStackTrace *this,UObject *param_1,wchar_t *param_2,bool param_3,
          FArchiveDiffMap *param_4)

{
  TUniquePtr<char_[0],TDefaultDelete<char_[0]>_> *pTVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 local_18 [2];
  
  FLargeMemoryWriter::FLargeMemoryWriter((FLargeMemoryWriter *)this,0,false,param_2);
  this->_padding_ = (longlong)&___7FArchiveStackTrace__6B_;
  pTVar1 = &(this->Callstacks).StackTrace;
  (this->Callstacks).CallstackAtOffsetMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Callstacks).CallstackAtOffsetMap.ArrayNum = 0;
  (this->Callstacks).CallstackAtOffsetMap.ArrayMax = 0;
  *(undefined8 *)&(this->Callstacks).UniqueCallstacks = 0;
  *(undefined8 *)&(this->Callstacks).UniqueCallstacks.field_0x8 = 0;
  *(undefined8 *)&(this->Callstacks).UniqueCallstacks.field_0x20 = 0;
  (this->Callstacks).Asset = param_1;
  *(undefined4 *)&(this->Callstacks).UniqueCallstacks.field_0x28 = 0;
  *(undefined4 *)&(this->Callstacks).UniqueCallstacks.field_0x2c = 0x80;
  *(undefined4 *)&(this->Callstacks).UniqueCallstacks.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Callstacks).UniqueCallstacks.field_0x34 = 0;
  *(undefined8 *)&(this->Callstacks).UniqueCallstacks.field_0x40 = 0;
  *(undefined4 *)&(this->Callstacks).UniqueCallstacks.field_0x48 = 0;
  (this->Callstacks).bCallstacksDirty = true;
  (this->Callstacks).StackTraceSize = 0xffff;
  pTVar1->Ptr = (char *)0x0;
  (this->Callstacks).LastSerializeCallstack = (char *)0x0;
  (this->Callstacks).TotalSize = 0;
  pcVar3 = operator_new__(0xffff);
  pcVar4 = (char *)0x0;
  if (pcVar3 != (char *)0x0) {
    memset(pcVar3,0,0xffff);
    pcVar4 = pcVar3;
  }
  if (pTVar1 != (TUniquePtr<char_[0],TDefaultDelete<char_[0]>_> *)local_18) {
    pcVar3 = pTVar1->Ptr;
    pTVar1->Ptr = pcVar4;
    operator_delete__(pcVar3);
    pcVar4 = (char *)0x0;
  }
  operator_delete__(pcVar4);
  *pTVar1->Ptr = '\0';
  FArchiveProxy::FArchiveProxy((FArchiveProxy *)&this->StackTraceWriter,(FArchive *)this);
  (this->StackTraceWriter).Callstacks = &this->Callstacks;
  (this->StackTraceWriter)._padding_ = (longlong)&___7FArchiveStackTraceWriter__6B_;
  (this->StackTraceWriter).DiffMap = param_4;
  (this->StackTraceWriter).DiffMapOffset = 0;
  (this->StackTraceWriter).StackIgnoreCount = 2;
  piVar2 = &(this->StackTraceWriter).StackIgnoreCount;
  *piVar2 = *piVar2 + 1;
  (this->StackTraceWriter).bInnerArchiveDisabled = true;
  return this;
}

// ~FArchiveStackTrace @ 141ed5000

void __thiscall FArchiveStackTrace::~FArchiveStackTrace(FArchiveStackTrace *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FArchiveStackTrace__6B_;
  (this->StackTraceWriter)._padding_ = (longlong)&___7FArchiveStackTraceWriter__6B_;
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)&this->StackTraceWriter);
  operator_delete__((this->Callstacks).StackTrace.Ptr);
  *(undefined4 *)&(this->Callstacks).UniqueCallstacks.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Callstacks).UniqueCallstacks.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArchiveCallstacks::FCallstackData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArchiveCallstacks::FCallstackData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FArchiveCallstacks::FCallstackData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Callstacks).UniqueCallstacks);
  pFVar2 = (this->Callstacks).CallstackAtOffsetMap.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FLargeMemoryWriter::~FLargeMemoryWriter((FLargeMemoryWriter *)this);
  return;
}

// CompareWith @ 141ee1b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FArchiveStackTrace::CompareWith
          (FArchiveStackTrace *this,FPackageData *param_1,wchar_t *param_2,long64 param_3,
          wchar_t *param_4,int param_5,
          TMap<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
          *param_6,EPackageHeaderFormat param_7)

{
  longlong lVar1;
  code *pcVar2;
  uchar *puVar3;
  FName FVar4;
  uchar *puVar5;
  bool bVar6;
  uint uVar7;
  long64 lVar8;
  FArchiveDiffStats *pFVar9;
  FArchiveDiffMap *pFVar10;
  FString *pFVar11;
  IFileManager *pIVar12;
  longlong *plVar13;
  ForAnyElementType FVar14;
  ForAnyElementType FVar15;
  wchar_t *pwVar16;
  int iVar17;
  wchar_t *pwVar18;
  int local_res8 [2];
  FName local_res10;
  FString local_2a8;
  FString local_298;
  FString local_288;
  long64 local_278;
  FString local_270;
  void *local_260 [2];
  FPackageData local_250;
  FArchiveStackTraceWriter *local_230;
  longlong local_228;
  FString local_220;
  FPackageData local_210;
  FPackageData local_1f0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FPackageData local_130;
  FPackageData local_110;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  void *local_90 [2];
  FString local_80;
  FString local_70 [3];
  
  local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)&this->Callstacks;
  if (((FArchiveCallstacks *)local_2a8.Data.AllocatorInstance.Data)->Asset == (UObject *)0x0) {
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
  }
  else {
    local_res10 = *(FName *)(*(longlong *)
                              &((FArchiveCallstacks *)local_2a8.Data.AllocatorInstance.Data)->Asset
                               ->field_0x10 + 0x18);
  }
  lVar8 = (**(code **)(this->_padding_ + 0x30))(this);
  FVar4 = local_res10;
  uVar7 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  pFVar9 = TMapBase<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
                       *)param_6,uVar7 + FVar4.Number,&local_res10);
  pFVar9->NewFileTotalSize = lVar8;
  if (param_1->Size == 0) {
    if (2 < (byte)LogArchiveDiff._0_1_) {
      (**(code **)(this->_padding_ + 0x18))(this,local_260);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogArchiveDiff);
      if (local_260[0] != (void *)0x0) {
        FMemory::Free(local_260[0]);
      }
    }
    FVar4 = local_res10;
    uVar7 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
    pFVar9 = TMapBase<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
                         *)param_6,uVar7 + FVar4.Number,&local_res10);
    FVar4 = local_res10;
    lVar8 = pFVar9->NewFileTotalSize;
    uVar7 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
    pFVar9 = TMapBase<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
                         *)param_6,uVar7 + FVar4.Number,&local_res10);
    pFVar9->DiffSize = lVar8;
  }
  else {
    local_250.Data = FLargeMemoryWriter::GetData((FLargeMemoryWriter *)this);
    local_250.Size = (**(code **)(this->_padding_ + 0x30))(this);
    pwVar16 = L"";
    local_250.StartOffset = 0;
    local_250.HeaderSize = param_3;
    if (3 < (byte)LogArchiveDiff._0_1_) {
      (**(code **)(this->_padding_ + 0x18))(this,local_90);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogArchiveDiff);
      if (local_90[0] != (void *)0x0) {
        FMemory::Free(local_90[0]);
      }
      if (3 < (byte)LogArchiveDiff._0_1_) {
        ::FName::ToString(&local_res10,&local_80);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogArchiveDiff);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
      }
    }
    local_1f0.Data = param_1->Data;
    local_278 = param_1->HeaderSize;
    local_res8[0] = 0;
    local_1f0.HeaderSize = 0;
    local_1f0.StartOffset = 0;
    local_210.Data = local_250.Data;
    local_230 = &this->StackTraceWriter;
    local_210.HeaderSize = 0;
    local_210.StartOffset = 0;
    local_260[0] = (void *)param_3;
    local_228 = (longlong)param_5;
    local_210.Size = param_3;
    local_1f0.Size = local_278;
    pFVar10 = FArchiveStackTraceWriter::GetDiffMap(local_230);
    FVar14.Data = local_2a8.Data.AllocatorInstance.Data;
    FArchiveStackTraceWriter::Compare
              (&local_1f0,&local_210,(FArchiveCallstacks *)local_2a8.Data.AllocatorInstance.Data,
               pFVar10,param_2,param_4,(longlong)param_5,local_res8,param_6,false);
    FVar4 = local_res10;
    if (0 < param_3) {
      uVar7 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
      pFVar9 = TMapBase<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
               ::FindOrAddImpl<FName_const_&>
                         ((TMapBase<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
                           *)param_6,uVar7 + FVar4.Number,&local_res10);
      if (0 < pFVar9->NumDiffs) {
        ::FString::FString(&local_160,param_2);
        if (param_7 == PackageFileSummary) {
          DumpPackageHeaderDiffs_LinkerLoad(param_1,&local_250,&local_160,param_5);
        }
        else if ((param_7 != ZenPackageSummary) &&
                (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!\"Unimplemented function called\"",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\ArchiveStackTrace.cpp"
                                    ,0x67d,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
      }
    }
    lVar8 = local_250.Size;
    puVar5 = local_250.Data;
    puVar3 = param_1->Data;
    local_110.Size = param_1->Size;
    lVar1 = param_1->HeaderSize;
    local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.HeaderSize = 0;
    local_298.Data.ArrayNum = 0;
    local_298.Data.ArrayMax = 0;
    local_130.HeaderSize = 0;
    local_130.Data = local_250.Data;
    local_130.Size = local_250.Size;
    local_130.StartOffset = param_3;
    local_110.Data = puVar3;
    local_110.StartOffset = lVar1;
    if (local_250.HeaderSize < 1) {
      ::FString::operator=(&local_298,param_2);
    }
    else {
      ::FString::FString(&local_140,L"uexp");
      ::FString::FString(&local_150,param_2);
      pFVar11 = FPaths::ChangeExtension(local_70,&local_150,&local_140);
      if (&local_298 != pFVar11) {
        if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
        }
        local_298.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
        (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_298.Data.ArrayNum = (pFVar11->Data).ArrayNum;
        local_298.Data.ArrayMax = (pFVar11->Data).ArrayMax;
        (pFVar11->Data).ArrayNum = 0;
        (pFVar11->Data).ArrayMax = 0;
      }
      if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
    }
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_298.Data.ArrayNum != 0) {
      FVar15.Data = local_298.Data.AllocatorInstance.Data;
    }
    pFVar10 = FArchiveStackTraceWriter::GetDiffMap(local_230);
    FArchiveStackTraceWriter::Compare
              (&local_110,&local_130,(FArchiveCallstacks *)FVar14.Data,pFVar10,
               (wchar_t *)FVar15.Data,param_4,local_228,local_res8,param_6,false);
    FVar4 = local_res10;
    uVar7 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
    pFVar9 = TMapBase<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
                         *)param_6,uVar7 + FVar4.Number,&local_res10);
    if (0 < pFVar9->NumDiffs) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_288.Data.ArrayNum = 0;
        local_288.Data.ArrayMax = 0;
        pwVar18 = FCommandLine::Get();
        bVar6 = FParse::Value(pwVar18,L"diffoutputdir=",&local_288,true,(wchar_t **)0x0);
        if (bVar6) {
          FPaths::NormalizeDirectoryName(&local_288);
          ::FString::ConcatFC(&local_220,&local_288,L"/");
          if (DiffOutputSettings.DiffOutputDir.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(DiffOutputSettings.DiffOutputDir.Data.AllocatorInstance.Data);
          }
          DiffOutputSettings.DiffOutputDir.Data.AllocatorInstance.Data =
               local_220.Data.AllocatorInstance.Data;
          DiffOutputSettings.DiffOutputDir.Data.ArrayNum = local_220.Data.ArrayNum;
          DiffOutputSettings.DiffOutputDir.Data.ArrayMax = local_220.Data.ArrayMax;
        }
        if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_288.Data.AllocatorInstance.Data);
        }
        atexit(`FArchiveStackTrace::CompareWith'::__l70::
               _dynamic_atexit_destructor_for__DiffOutputSettings__);
        _Init_thread_footer(&::_TSS0);
      }
      if (1 < DiffOutputSettings.DiffOutputDir.Data.ArrayNum) {
        ::FString::FString(&local_1d0,param_2);
        FPaths::ConvertRelativePathToFull(&local_2a8,&local_1d0);
        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
        pFVar11 = FPaths::ProjectSavedDir();
        FPaths::ConvertRelativePathToFull(&local_270,pFVar11);
        iVar17 = local_270.Data.ArrayNum + -1;
        FVar14.Data = local_270.Data.AllocatorInstance.Data;
        if (local_270.Data.ArrayNum == 0) {
          iVar17 = 0;
          FVar14.Data = (FScriptContainerElement *)L"";
        }
        bVar6 = ::FString::StartsWith(&local_2a8,(wchar_t *)FVar14.Data,iVar17,IgnoreCase);
        if (bVar6) {
          pwVar18 = L"";
          if (DiffOutputSettings.DiffOutputDir.Data.ArrayNum != 0) {
            pwVar18 = (wchar_t *)DiffOutputSettings.DiffOutputDir.Data.AllocatorInstance;
          }
          FVar14.Data = (FScriptContainerElement *)L"";
          if (local_270.Data.ArrayNum != 0) {
            FVar14.Data = local_270.Data.AllocatorInstance.Data;
          }
          ::FString::ReplaceInline(&local_2a8,(wchar_t *)FVar14.Data,pwVar18,IgnoreCase);
          pIVar12 = IFileManager::Get();
          pcVar2 = *(code **)((longlong)*pIVar12 + 0x20);
          ::FString::FString(&local_1b0,param_2);
          pFVar11 = FPaths::GetExtension(&local_e0,&local_1b0,false);
          ::FString::ConcatCF(&local_1c0,L".before.",pFVar11);
          pFVar11 = FPaths::SetExtension(&local_f0,&local_2a8,&local_1c0);
          if ((pFVar11->Data).ArrayNum == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
          plVar13 = (longlong *)(*pcVar2)(pIVar12,pwVar18,0);
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
          if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
          }
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
          }
          (**(code **)(*plVar13 + 0x188))
                    (plVar13,local_1f0.Data + local_1f0.StartOffset,
                     local_278 - local_1f0.StartOffset);
          (**(code **)*plVar13)(plVar13,1);
          pcVar2 = *(code **)((longlong)*pIVar12 + 0x20);
          ::FString::FString(&local_1a0,L".before.uexp");
          pFVar11 = FPaths::SetExtension(&local_d0,&local_2a8,&local_1a0);
          if ((pFVar11->Data).ArrayNum == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
          plVar13 = (longlong *)(*pcVar2)(pIVar12,pwVar18,0);
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
          if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
          }
          (**(code **)(*plVar13 + 0x188))(plVar13,puVar3 + lVar1);
          if (plVar13 != (longlong *)0x0) {
            (**(code **)*plVar13)(plVar13,1);
          }
          pcVar2 = *(code **)((longlong)*pIVar12 + 0x20);
          ::FString::FString(&local_180,param_2);
          pFVar11 = FPaths::GetExtension(&local_b0,&local_180,false);
          ::FString::ConcatCF(&local_190,L".after.",pFVar11);
          pFVar11 = FPaths::SetExtension(&local_c0,&local_2a8,&local_190);
          if ((pFVar11->Data).ArrayNum == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
          plVar13 = (longlong *)(*pcVar2)(pIVar12,pwVar18,0);
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
          if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.Data.AllocatorInstance.Data);
          }
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
          if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.Data.AllocatorInstance.Data);
          }
          (**(code **)(*plVar13 + 0x188))
                    (plVar13,local_210.Data + local_210.StartOffset,
                     (longlong)local_260[0] - local_210.StartOffset);
          (**(code **)*plVar13)(plVar13,1);
          pcVar2 = *(code **)((longlong)*pIVar12 + 0x20);
          ::FString::FString(&local_170,L".after.uexp");
          pFVar11 = FPaths::SetExtension(&local_a0,&local_2a8,&local_170);
          if ((pFVar11->Data).ArrayNum != 0) {
            pwVar16 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
          plVar13 = (longlong *)(*pcVar2)(pIVar12,pwVar16,0);
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
          if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.Data.AllocatorInstance.Data);
          }
          (**(code **)(*plVar13 + 0x188))(plVar13,puVar5 + param_3,lVar8 - param_3);
          if (plVar13 != (longlong *)0x0) {
            (**(code **)*plVar13)(plVar13,1);
          }
        }
        else if (2 < (byte)LogArchiveDiff._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogArchiveDiff);
        }
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
        if ((FArchiveCallstacks *)local_2a8.Data.AllocatorInstance.Data != (FArchiveCallstacks *)0x0
           ) {
          FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// CompareWith @ 141ee2530

void __thiscall
FArchiveStackTrace::CompareWith
          (FArchiveStackTrace *this,wchar_t *param_1,long64 param_2,wchar_t *param_3,int param_4,
          TMap<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
          *param_5)

{
  TUniquePtr<unsigned_char,UE::ArchiveStackTrace::FDeleteByFree> local_58;
  FPackageData local_50;
  FPackageData local_30;
  
  local_58.Ptr = (uchar *)0x0;
  local_50.Data = (uchar *)0x0;
  local_50.Size = 0;
  local_50.HeaderSize = 0;
  local_50.StartOffset = 0;
  UE::ArchiveStackTrace::LoadPackageIntoMemory(param_1,&local_50,&local_58);
  local_30.Data = local_50.Data;
  local_30.Size = local_50.Size;
  local_30.HeaderSize = local_50.HeaderSize;
  local_30.StartOffset = local_50.StartOffset;
  CompareWith(this,&local_30,param_1,param_2,param_3,param_4,param_5,PackageFileSummary);
  FMemory::Free(local_58.Ptr);
  return;
}

// GenerateDiffMap @ 141ef7470

bool __thiscall
FArchiveStackTrace::GenerateDiffMap
          (FArchiveStackTrace *this,FPackageData *param_1,long64 param_2,int param_3,
          FArchiveDiffMap *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  uchar *puVar5;
  long64 lVar6;
  FPackageData local_a8;
  FPackageData local_88;
  FPackageData local_68;
  FPackageData local_48;
  
  if (param_3 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxDiffsToFind > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\ArchiveStackTrace.cpp"
                       ,0x46b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  puVar5 = FLargeMemoryWriter::GetData((FLargeMemoryWriter *)this);
  lVar6 = (**(code **)(this->_padding_ + 0x30))(this);
  local_48.Data = param_1->Data;
  local_48.Size = param_1->HeaderSize;
  local_48.HeaderSize = 0;
  local_48.StartOffset = 0;
  local_68.HeaderSize = 0;
  local_68.StartOffset = 0;
  local_68.Data = puVar5;
  local_68.Size = param_2;
  bVar2 = FArchiveStackTraceWriter::GenerateDiffMap
                    (&local_48,&local_68,&this->Callstacks,param_3,param_4);
  local_88.StartOffset = param_1->HeaderSize;
  local_88.Data = param_1->Data;
  local_88.Size = param_1->Size;
  local_88.HeaderSize = 0;
  local_a8.HeaderSize = 0;
  local_a8.Data = puVar5;
  local_a8.Size = lVar6;
  local_a8.StartOffset = param_2;
  bVar4 = FArchiveStackTraceWriter::GenerateDiffMap
                    (&local_88,&local_a8,&this->Callstacks,param_3,param_4);
  if ((bVar2) && (bVar4)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// GenerateDiffMap @ 141ef75e0

bool __thiscall
FArchiveStackTrace::GenerateDiffMap
          (FArchiveStackTrace *this,wchar_t *param_1,long64 param_2,int param_3,
          FArchiveDiffMap *param_4)

{
  code *pcVar1;
  uchar *puVar2;
  long64 lVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  uchar *puVar7;
  long64 lVar8;
  TUniquePtr<unsigned_char,UE::ArchiveStackTrace::FDeleteByFree> local_e8;
  uchar *local_e0;
  long64 local_d8;
  long64 local_d0;
  FPackageData local_c8;
  FPackageData local_a8;
  FPackageData local_88;
  FPackageData local_68;
  FPackageData local_48;
  
  local_e8.Ptr = (uchar *)0x0;
  local_c8.Data = (uchar *)0x0;
  local_c8.Size = 0;
  local_c8.HeaderSize = 0;
  local_c8.StartOffset = 0;
  bVar4 = UE::ArchiveStackTrace::LoadPackageIntoMemory(param_1,&local_c8,&local_e8);
  lVar3 = local_c8.HeaderSize;
  puVar2 = local_c8.Data;
  local_d8 = local_c8.Size;
  local_e0 = local_c8.Data;
  local_d0 = local_c8.HeaderSize;
  if (bVar4) {
    if (param_3 < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxDiffsToFind > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\ArchiveStackTrace.cpp"
                         ,0x46b,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    puVar7 = FLargeMemoryWriter::GetData((FLargeMemoryWriter *)this);
    lVar8 = (**(code **)(this->_padding_ + 0x30))(this);
    local_48.Data = puVar2;
    local_48.Size = lVar3;
    local_48.HeaderSize = 0;
    local_48.StartOffset = 0;
    local_68.HeaderSize = 0;
    local_68.StartOffset = 0;
    local_68.Data = puVar7;
    local_68.Size = param_2;
    bVar4 = FArchiveStackTraceWriter::GenerateDiffMap
                      (&local_48,&local_68,&this->Callstacks,param_3,param_4);
    local_88.Data = local_e0;
    local_88.Size = local_d8;
    local_88.HeaderSize = 0;
    local_a8.HeaderSize = 0;
    local_88.StartOffset = local_d0;
    local_a8.Data = puVar7;
    local_a8.Size = lVar8;
    local_a8.StartOffset = param_2;
    bVar6 = FArchiveStackTraceWriter::GenerateDiffMap
                      (&local_88,&local_a8,&this->Callstacks,param_3,param_4);
    if ((bVar4) && (bVar6)) {
      bVar4 = true;
      goto LAB_141ef7750;
    }
  }
  bVar4 = false;
LAB_141ef7750:
  FMemory::Free(local_e8.Ptr);
  return bVar4;
}

// IsIdentical @ 141efbe70

bool __cdecl FArchiveStackTrace::IsIdentical(FPackageData *param_1,long64 param_2,uchar *param_3)

{
  int iVar1;
  
  if (param_2 == param_1->Size) {
    iVar1 = memcmp(param_1->Data,param_3,param_2);
    return iVar1 == 0;
  }
  return false;
}

// IsIdentical @ 141efbeb0

bool __cdecl FArchiveStackTrace::IsIdentical(wchar_t *param_1,long64 param_2,uchar *param_3)

{
  bool bVar1;
  int iVar2;
  TUniquePtr<unsigned_char,UE::ArchiveStackTrace::FDeleteByFree> local_res20;
  FPackageData local_28;
  
  local_res20.Ptr = (uchar *)0x0;
  local_28.Data = (uchar *)0x0;
  local_28.Size = 0;
  local_28.HeaderSize = 0;
  local_28.StartOffset = 0;
  bVar1 = UE::ArchiveStackTrace::LoadPackageIntoMemory(param_1,&local_28,&local_res20);
  if ((bVar1) && (param_2 == local_28.Size)) {
    iVar2 = memcmp(local_28.Data,param_3,param_2);
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  FMemory::Free(local_res20.Ptr);
  return bVar1;
}

// LoadPackageIntoMemory @ 141efeda0

bool __cdecl
FArchiveStackTrace::LoadPackageIntoMemory
          (wchar_t *param_1,FPackageData *param_2,
          TUniquePtr<unsigned_char,UE::ArchiveStackTrace::FDeleteByFree> *param_3)

{
  bool bVar1;
  FPackageData local_28;
  
  local_28.Data = (uchar *)0x0;
  local_28.Size = 0;
  local_28.HeaderSize = 0;
  local_28.StartOffset = 0;
  bVar1 = UE::ArchiveStackTrace::LoadPackageIntoMemory(param_1,&local_28,param_3);
  param_2->Data = local_28.Data;
  param_2->Size = local_28.Size;
  param_2->HeaderSize = local_28.HeaderSize;
  param_2->StartOffset = local_28.StartOffset;
  return bVar1;
}

// Serialize @ 141f0f350

void __thiscall FArchiveStackTrace::Serialize(FArchiveStackTrace *this,void *param_1,long64 param_2)

{
  (**(code **)((this->StackTraceWriter)._padding_ + 0x188))();
  FLargeMemoryWriter::Serialize((FLargeMemoryWriter *)this,param_1,param_2);
  return;
}

