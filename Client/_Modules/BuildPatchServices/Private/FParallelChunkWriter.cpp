// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 5

// FParallelChunkWriter @ 143224640

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FParallelChunkWriter * __thiscall
BuildPatchServices::FParallelChunkWriter::FParallelChunkWriter
          (FParallelChunkWriter *this,FParallelChunkWriterConfig *param_1,IFileSystem *param_2,
          IChunkDataSerialization *param_3,FStatsCollector *param_4)

{
  FStatsCollector *pFVar1;
  code *pcVar2;
  TFuture<void> *pTVar3;
  FScriptContainerElement *pFVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  TNode *pTVar8;
  TNode *pTVar9;
  long64 *plVar10;
  TFuture<void> *pTVar11;
  FParallelChunkWriter *pFVar12;
  wchar_t *pwVar13;
  uint uVar14;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  undefined1 local_58 [16];
  TUniqueFunction<void___cdecl(void)> local_48;
  TNode *pTVar15;
  
  pTVar15 = (TNode *)0x0;
  this->_padding_ = (longlong)&___7FParallelChunkWriter_BuildPatchServices__6B_;
  (this->Config).SaveRetryCount = param_1->SaveRetryCount;
  (this->Config).SaveRetryTime = param_1->SaveRetryTime;
  (this->Config).MaxQueueSize = param_1->MaxQueueSize;
  iVar7 = param_1->NumberOfThreads;
  (this->Config).ChunkDirectory.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Config).NumberOfThreads = iVar7;
  (this->Config).ChunkDirectory.Data.AllocatorInstance.Data =
       (param_1->ChunkDirectory).Data.AllocatorInstance.Data;
  (param_1->ChunkDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Config).ChunkDirectory.Data.ArrayNum = (param_1->ChunkDirectory).Data.ArrayNum;
  (this->Config).ChunkDirectory.Data.ArrayMax = (param_1->ChunkDirectory).Data.ArrayMax;
  (param_1->ChunkDirectory).Data.ArrayNum = 0;
  (param_1->ChunkDirectory).Data.ArrayMax = 0;
  (this->Config).FeatureLevel = param_1->FeatureLevel;
  this->StatsCollector = param_4;
  this->FileSystem = param_2;
  (this->WriterThreads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WriterThreads).ArrayNum = 0;
  (this->WriterThreads).ArrayMax = 0;
  this->ChunkDataSerialization = param_3;
  this->bMoreDataIsExpected = (FThreadSafeBool)0x1;
  this->bShouldAbort = (FThreadSafeBool)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ChunkDataJobQueueConsumerCS,4000)
  ;
  pTVar8 = ::operator_new(0x48);
  pTVar9 = pTVar15;
  if (pTVar8 != (TNode *)0x0) {
    pTVar8->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar8->Item = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x8 = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x10 = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x18 = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x20 = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x28 = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x30 = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x38 = 0;
    pTVar8->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar8->Item = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x8 = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x10 = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x18 = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x20 = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x28 = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x30 = 0;
    *(undefined4 *)&(pTVar8->Item).field_0x38 = 0;
    pTVar9 = pTVar8;
  }
  (this->ChunkDataJobQueue).Tail = pTVar9;
  (this->ChunkDataJobQueue).Head = pTVar9;
  (this->ChunkDataJobQueueCount).Counter = 0;
  pTVar8 = ::operator_new(0x20);
  pTVar9 = pTVar15;
  if (pTVar8 != (TNode *)0x0) {
    pTVar8->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar8->Item = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x8 = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x10 = 0;
    pTVar8->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar8->Item = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x8 = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x10 = 0;
    pTVar9 = pTVar8;
  }
  (this->ChunkOutputSizeQueue).Tail = (TNode *)pTVar9;
  (this->ChunkOutputSizeQueue).Head = (TNode *)pTVar9;
  pTVar8 = ::operator_new(0x20);
  pTVar9 = pTVar15;
  if (pTVar8 != (TNode *)0x0) {
    pTVar8->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar8->Item = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x8 = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x10 = 0;
    pTVar8->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar8->Item = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x8 = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x10 = 0;
    pTVar9 = pTVar8;
  }
  (this->ChunkOutputHashQueue).Tail = (TNode *)pTVar9;
  (this->ChunkOutputHashQueue).Head = (TNode *)pTVar9;
  pTVar8 = ::operator_new(0x30);
  pTVar9 = pTVar15;
  if (pTVar8 != (TNode *)0x0) {
    pTVar8->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar8->Item = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x8 = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x10 = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x18 = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x20 = 0;
    pTVar8->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar8->Item = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x8 = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x10 = 0;
    *(undefined8 *)&(pTVar8->Item).field_0x18 = 0;
    *(undefined4 *)&(pTVar8->Item).field_0x20 = 0;
    pTVar9 = pTVar8;
  }
  (this->ChunkOutputShaQueue).Tail = (TNode *)pTVar9;
  (this->ChunkOutputShaQueue).Head = (TNode *)pTVar9;
  *(undefined8 *)&(this->ParallelChunkWriterSummaries).ChunkOutputSizes = 0;
  *(undefined8 *)&(this->ParallelChunkWriterSummaries).ChunkOutputSizes.field_0x8 = 0;
  *(undefined8 *)&(this->ParallelChunkWriterSummaries).ChunkOutputSizes.field_0x20 = 0;
  *(undefined4 *)&(this->ParallelChunkWriterSummaries).ChunkOutputSizes.field_0x28 = 0;
  *(undefined4 *)&(this->ParallelChunkWriterSummaries).ChunkOutputSizes.field_0x2c = 0x80;
  *(undefined4 *)&(this->ParallelChunkWriterSummaries).ChunkOutputSizes.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParallelChunkWriterSummaries).ChunkOutputSizes.field_0x34 = 0;
  *(undefined8 *)&(this->ParallelChunkWriterSummaries).ChunkOutputSizes.field_0x40 = 0;
  *(undefined4 *)&(this->ParallelChunkWriterSummaries).ChunkOutputSizes.field_0x48 = 0;
  *(undefined8 *)&(this->ParallelChunkWriterSummaries).ChunkOutputHashes = 0;
  *(undefined8 *)&(this->ParallelChunkWriterSummaries).ChunkOutputHashes.field_0x8 = 0;
  *(undefined8 *)&(this->ParallelChunkWriterSummaries).ChunkOutputHashes.field_0x20 = 0;
  *(undefined4 *)&(this->ParallelChunkWriterSummaries).ChunkOutputHashes.field_0x28 = 0;
  *(undefined4 *)&(this->ParallelChunkWriterSummaries).ChunkOutputHashes.field_0x2c = 0x80;
  *(undefined4 *)&(this->ParallelChunkWriterSummaries).ChunkOutputHashes.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParallelChunkWriterSummaries).ChunkOutputHashes.field_0x34 = 0;
  *(undefined8 *)&(this->ParallelChunkWriterSummaries).ChunkOutputHashes.field_0x40 = 0;
  *(undefined4 *)&(this->ParallelChunkWriterSummaries).ChunkOutputHashes.field_0x48 = 0;
  *(undefined8 *)&(this->ParallelChunkWriterSummaries).ChunkOutputShas = 0;
  *(undefined8 *)&(this->ParallelChunkWriterSummaries).ChunkOutputShas.field_0x8 = 0;
  *(undefined8 *)&(this->ParallelChunkWriterSummaries).ChunkOutputShas.field_0x20 = 0;
  *(undefined4 *)&(this->ParallelChunkWriterSummaries).ChunkOutputShas.field_0x28 = 0;
  *(undefined4 *)&(this->ParallelChunkWriterSummaries).ChunkOutputShas.field_0x2c = 0x80;
  *(undefined4 *)&(this->ParallelChunkWriterSummaries).ChunkOutputShas.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParallelChunkWriterSummaries).ChunkOutputShas.field_0x34 = 0;
  *(undefined8 *)&(this->ParallelChunkWriterSummaries).ChunkOutputShas.field_0x40 = 0;
  *(undefined4 *)&(this->ParallelChunkWriterSummaries).ChunkOutputShas.field_0x48 = 0;
  (this->ProducerThreadId).bIsSet = false;
  pFVar1 = this->StatsCollector;
  this->StatUncompressesData = 0;
  pcVar2 = *(code **)((longlong)*pFVar1 + 8);
  ::FString::FString(&local_a8,L"Chunk Writer: Serialize Time");
  plVar10 = (long64 *)(*pcVar2)(pFVar1,&local_a8,0,0);
  this->StatSerlialiseTime = plVar10;
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->StatsCollector;
  pcVar2 = *(code **)((longlong)*pFVar1 + 8);
  ::FString::FString(&local_98,L"Chunk Writer: Num Saved");
  plVar10 = (long64 *)(*pcVar2)(pFVar1,&local_98,4,0);
  this->StatChunksSaved = plVar10;
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->StatsCollector;
  pcVar2 = *(code **)((longlong)*pFVar1 + 8);
  ::FString::FString(&local_88,L"Chunk Writer: Data Size Written");
  plVar10 = (long64 *)(*pcVar2)(pFVar1,&local_88,1,0);
  this->StatDataWritten = plVar10;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->StatsCollector;
  pcVar2 = *(code **)((longlong)*pFVar1 + 8);
  ::FString::FString(&local_78,L"Chunk Writer: Compression Ratio");
  plVar10 = (long64 *)(*pcVar2)(pFVar1,&local_78,3,0);
  this->StatCompressionRatio = plVar10;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->StatsCollector;
  pcVar2 = *(code **)((longlong)*pFVar1 + 8);
  ::FString::FString(&local_68,L"Chunk Writer: Data Write Speed");
  plVar10 = (long64 *)(*pcVar2)(pFVar1,&local_68,2,0);
  this->StatDataWriteSpeed = plVar10;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((this->Config).ChunkDirectory.Data.ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(this->Config).ChunkDirectory.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*this->FileSystem + 0x10))(this->FileSystem,pwVar13);
  if ((this->Config).ChunkDirectory.Data.ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(this->Config).ChunkDirectory.Data.AllocatorInstance.Data;
  }
  cVar5 = (**(code **)((longlong)*this->FileSystem + 8))(this->FileSystem,pwVar13);
  if (cVar5 == '\0') {
    UE::Logging::Private::BasicFatalLog
              (&`public:___cdecl_BuildPatchServices::FParallelChunkWriter::FParallelChunkWriter(BuildPatchServices::FParallelChunkWriterConfig,BuildPatchServices::IFileSystem*___ptr64,BuildPatchServices::IChunkDataSerialization*___ptr64,BuildPatchServices::FStatsCollector*___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogChunkWriter);
  }
  if (0 < (this->Config).NumberOfThreads) {
    do {
      local_48._0_8_ = 0;
      local_48._40_8_ = 0;
      param_4 = (FStatsCollector *)this;
      pTVar11 = Async<_BuildPatchServices::FParallelChunkWriter::FParallelChunkWriter_::__l25::<lambda_1>_>
                          ((TFuture<void> *)local_58,Thread,(<lambda_1> *)&param_4,&local_48);
      pTVar3 = (TFuture<void> *)(this->WriterThreads).AllocatorInstance.Data;
      if (((pTVar3 <= pTVar11) && (pTVar11 < pTVar3 + (this->WriterThreads).ArrayMax)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        pFVar12 = (FParallelChunkWriter *)(*pcVar2)();
        return pFVar12;
      }
      iVar7 = (this->WriterThreads).ArrayNum;
      if (iVar7 == (this->WriterThreads).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->WriterThreads).AllocatorInstance,
                           &(this->WriterThreads).ArrayMax);
      }
      (this->WriterThreads).ArrayNum = iVar7 + 1;
      pFVar4 = (this->WriterThreads).AllocatorInstance.Data;
      *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = *(undefined8 *)pTVar11;
      *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = *(undefined8 *)&pTVar11->field_0x8;
      *(undefined8 *)&pTVar11->field_0x8 = 0;
      *(undefined8 *)pTVar11 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_58._8_8_);
      uVar14 = (int)pTVar15 + 1;
      pTVar15 = (TNode *)(ulonglong)uVar14;
    } while ((int)uVar14 < (this->Config).NumberOfThreads);
  }
  pFVar4 = (param_1->ChunkDirectory).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return this;
}

// ~FParallelChunkWriter @ 1432288e0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FParallelChunkWriter::~FParallelChunkWriter(FParallelChunkWriter *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  TNode *pTVar6;
  TNode *pTVar7;
  char cVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FParallelChunkWriter_BuildPatchServices__6B_;
  LOCK();
  this->bShouldAbort = (FThreadSafeBool)0x1;
  UNLOCK();
  iVar2 = (this->WriterThreads).ArrayNum;
  pFVar10 = (this->WriterThreads).AllocatorInstance.Data;
  pFVar9 = pFVar10 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->WriterThreads).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TFuture<void>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar9) break;
    if (*(longlong *)pFVar10 != 0) {
      do {
        do {
        } while (*(longlong *)pFVar10 == 0);
        plVar3 = *(longlong **)(*(longlong *)pFVar10 + 0x60);
        cVar8 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff);
      } while (cVar8 == '\0');
    }
    pFVar10 = pFVar10 + 0x10;
  }
  DestructItems<TFuture<void>,int>
            ((TFuture<void> *)(this->WriterThreads).AllocatorInstance.Data,
             (this->WriterThreads).ArrayNum);
  piVar1 = &(this->WriterThreads).ArrayMax;
  (this->WriterThreads).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->WriterThreads).AllocatorInstance,0,piVar1);
  }
  FParallelChunkWriterSummaries::~FParallelChunkWriterSummaries(&this->ParallelChunkWriterSummaries)
  ;
  pTVar4 = (this->ChunkOutputShaQueue).Tail;
  while (pTVar4 != (TNode *)0x0) {
    (this->ChunkOutputShaQueue).Tail = pTVar4->NextNode;
    ::operator_delete(pTVar4,0x30);
    pTVar4 = (this->ChunkOutputShaQueue).Tail;
  }
  pTVar5 = (this->ChunkOutputHashQueue).Tail;
  while (pTVar5 != (TNode *)0x0) {
    (this->ChunkOutputHashQueue).Tail = pTVar5->NextNode;
    ::operator_delete(pTVar5,0x20);
    pTVar5 = (this->ChunkOutputHashQueue).Tail;
  }
  pTVar6 = (this->ChunkOutputSizeQueue).Tail;
  while (pTVar6 != (TNode *)0x0) {
    (this->ChunkOutputSizeQueue).Tail = pTVar6->NextNode;
    ::operator_delete(pTVar6,0x20);
    pTVar6 = (this->ChunkOutputSizeQueue).Tail;
  }
  pTVar7 = (this->ChunkDataJobQueue).Tail;
  while (pTVar7 != (TNode *)0x0) {
    (this->ChunkDataJobQueue).Tail = pTVar7->NextNode;
    if (*(void **)&pTVar7->Item != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar7->Item);
    }
    ::operator_delete(pTVar7,0x48);
    pTVar7 = (this->ChunkDataJobQueue).Tail;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ChunkDataJobQueueConsumerCS);
  DestructItems<TFuture<void>,int>
            ((TFuture<void> *)(this->WriterThreads).AllocatorInstance.Data,
             (this->WriterThreads).ArrayNum);
  pFVar10 = (this->WriterThreads).AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  pFVar10 = (this->Config).ChunkDirectory.Data.AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  this->_padding_ = (longlong)&___7IParallelChunkWriter_BuildPatchServices__6B_;
  return;
}

// AddChunkData @ 1432327f0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FParallelChunkWriter::AddChunkData
          (FParallelChunkWriter *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          FGuid *param_2,ulong64 *param_3,FSHAHash *param_4)

{
  TOptional<unsigned_int> *pTVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ulong64 uVar5;
  TNode *pTVar6;
  code *pcVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  uchar uVar22;
  uchar uVar23;
  uchar uVar24;
  uchar uVar25;
  uchar uVar26;
  uchar uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  bool bVar32;
  DWORD DVar33;
  TNode *pTVar34;
  DWORD local_68 [12];
  
  DVar33 = GetCurrentThreadId();
  pTVar1 = &this->ProducerThreadId;
  if ((this->ProducerThreadId).bIsSet == false) {
    if ((TOptional<unsigned_int> *)local_68 != pTVar1) {
      pTVar1->TypedValue = DVar33;
      (this->ProducerThreadId).bIsSet = true;
    }
  }
  else if (DVar33 != pTVar1->TypedValue) {
    bVar32 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThreadId == ProducerThreadId.GetValue()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ChunkWriter.cpp"
                        ,0xf1,L"");
    if (bVar32) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (((int)(this->Config).FeatureLevel < 0xf) && (param_1->ArrayNum != 0x100000)) {
    bVar32 = ::FDebug::CheckVerifyFailedImpl2
                       ("Config.FeatureLevel >= EFeatureLevel::VariableSizeChunksWithoutWindowSizeChunkInfo || ChunkData.Num() == LegacyFixedChunkWindow"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Generation\\ChunkWriter.cpp"
                        ,0x68,L"");
    if (bVar32) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if ((this->Config).MaxQueueSize <= (this->ChunkDataJobQueueCount).Counter) {
    do {
      FWindowsPlatformProcess::Sleep(0.0);
    } while ((this->Config).MaxQueueSize <= (this->ChunkDataJobQueueCount).Counter);
  }
  LOCK();
  (this->ChunkDataJobQueueCount).Counter = (this->ChunkDataJobQueueCount).Counter + 1;
  UNLOCK();
  pFVar4 = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = param_1->ArrayNum;
  iVar3 = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  uVar28 = param_2->A;
  uVar29 = param_2->B;
  uVar30 = param_2->C;
  uVar31 = param_2->D;
  uVar24 = param_4->Hash[0x10];
  uVar25 = param_4->Hash[0x11];
  uVar26 = param_4->Hash[0x12];
  uVar27 = param_4->Hash[0x13];
  uVar5 = *param_3;
  uVar8 = param_4->Hash[0];
  uVar9 = param_4->Hash[1];
  uVar10 = param_4->Hash[2];
  uVar11 = param_4->Hash[3];
  uVar12 = param_4->Hash[4];
  uVar13 = param_4->Hash[5];
  uVar14 = param_4->Hash[6];
  uVar15 = param_4->Hash[7];
  uVar16 = param_4->Hash[8];
  uVar17 = param_4->Hash[9];
  uVar18 = param_4->Hash[10];
  uVar19 = param_4->Hash[0xb];
  uVar20 = param_4->Hash[0xc];
  uVar21 = param_4->Hash[0xd];
  uVar22 = param_4->Hash[0xe];
  uVar23 = param_4->Hash[0xf];
  pTVar34 = ::operator_new(0x48);
  if (pTVar34 == (TNode *)0x0) {
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  else {
    pTVar34->NextNode = (TNode *)0x0;
    *(FScriptContainerElement **)&pTVar34->Item = pFVar4;
    *(int *)&(pTVar34->Item).field_0x8 = iVar2;
    *(int *)&(pTVar34->Item).field_0xc = iVar3;
    (pTVar34->Item).field_0x28 = uVar8;
    (pTVar34->Item).field_0x29 = uVar9;
    (pTVar34->Item).field_0x2a = uVar10;
    (pTVar34->Item).field_0x2b = uVar11;
    (pTVar34->Item).field_0x2c = uVar12;
    (pTVar34->Item).field_0x2d = uVar13;
    (pTVar34->Item).field_0x2e = uVar14;
    (pTVar34->Item).field_0x2f = uVar15;
    (pTVar34->Item).field_0x30 = uVar16;
    (pTVar34->Item).field_0x31 = uVar17;
    (pTVar34->Item).field_0x32 = uVar18;
    (pTVar34->Item).field_0x33 = uVar19;
    (pTVar34->Item).field_0x34 = uVar20;
    (pTVar34->Item).field_0x35 = uVar21;
    (pTVar34->Item).field_0x36 = uVar22;
    (pTVar34->Item).field_0x37 = uVar23;
    (pTVar34->Item).field_0x38 = uVar24;
    (pTVar34->Item).field_0x39 = uVar25;
    (pTVar34->Item).field_0x3a = uVar26;
    (pTVar34->Item).field_0x3b = uVar27;
    *(uint *)&(pTVar34->Item).field_0x10 = uVar28;
    *(uint *)&(pTVar34->Item).field_0x14 = uVar29;
    *(uint *)&(pTVar34->Item).field_0x18 = uVar30;
    *(uint *)&(pTVar34->Item).field_0x1c = uVar31;
    *(ulong64 *)&(pTVar34->Item).field_0x20 = uVar5;
    pTVar6 = (this->ChunkDataJobQueue).Head;
    (this->ChunkDataJobQueue).Head = pTVar34;
    pTVar6->NextNode = pTVar34;
  }
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// OnProcessComplete @ 14325c5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FParallelChunkWriterSummaries * __thiscall
BuildPatchServices::FParallelChunkWriter::OnProcessComplete
          (FParallelChunkWriter *this,FParallelChunkWriterSummaries *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  EFeatureLevel EVar3;
  longlong *plVar4;
  TNode *pTVar5;
  TNode *pTVar6;
  TNode *pTVar7;
  TNode *pTVar8;
  TNode *pTVar9;
  TNode *pTVar10;
  char cVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  TPairInitializer<FGuid_const_&,unsigned___int64_const_&> local_b8;
  undefined8 *local_a8;
  ulong64 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong64 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  FGuid local_70;
  FSHAHash local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  LOCK();
  this->bMoreDataIsExpected = (FThreadSafeBool)0x0;
  UNLOCK();
  iVar2 = (this->WriterThreads).ArrayNum;
  pFVar12 = (this->WriterThreads).AllocatorInstance.Data;
  pFVar13 = pFVar12 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->WriterThreads).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TFuture<void>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_e8);
    }
    if (pFVar12 == pFVar13) break;
    if (*(longlong *)pFVar12 != 0) {
      do {
        do {
        } while (*(longlong *)pFVar12 == 0);
        plVar4 = *(longlong **)(*(longlong *)pFVar12 + 0x60);
        cVar11 = (**(code **)(*plVar4 + 0x20))(plVar4,0xffffffff);
      } while (cVar11 == '\0');
    }
    pFVar12 = pFVar12 + 0x10;
  }
  DestructItems<TFuture<void>,int>
            ((TFuture<void> *)(this->WriterThreads).AllocatorInstance.Data,
             (this->WriterThreads).ArrayNum);
  piVar1 = &(this->WriterThreads).ArrayMax;
  (this->WriterThreads).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->WriterThreads).AllocatorInstance,0,piVar1);
  }
  (this->ParallelChunkWriterSummaries).FeatureLevel = (this->Config).FeatureLevel;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  while (pTVar5 = ((this->ChunkOutputSizeQueue).Tail)->NextNode, pTVar5 != (TNode *)0x0) {
    local_a0 = *(ulong64 *)&pTVar5->Item;
    uStack_98 = *(undefined8 *)&(pTVar5->Item).field_0x8;
    pTVar6 = (this->ChunkOutputSizeQueue).Tail;
    local_e0 = 0;
    uStack_d8 = 0;
    local_90 = *(undefined8 *)&(pTVar5->Item).field_0x10;
    (this->ChunkOutputSizeQueue).Tail = pTVar5;
    *(undefined8 *)&pTVar5->Item = 0;
    *(undefined8 *)&(pTVar5->Item).field_0x8 = 0;
    local_d0 = 0;
    *(undefined8 *)&(pTVar5->Item).field_0x10 = 0;
    ::operator_delete(pTVar6,0x20);
    local_b8.Value = &local_a0;
    local_a8 = &local_90;
    TSet<TTuple<FGuid,__int64>,TDefaultMapHashableKeyFuncs<FGuid,__int64,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FGuid_const_&,__int64_const_&>_>
              ((TSet<TTuple<FGuid,__int64>,TDefaultMapHashableKeyFuncs<FGuid,__int64,0>,FDefaultSetAllocator>
                *)&(this->ParallelChunkWriterSummaries).ChunkOutputSizes,
               (TPairInitializer<FGuid_const_&,__int64_const_&> *)&local_b8,(bool *)&local_b8.Value)
    ;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  while (pTVar7 = ((this->ChunkOutputHashQueue).Tail)->NextNode, pTVar7 != (TNode *)0x0) {
    local_88 = *(ulong64 *)&pTVar7->Item;
    uStack_80 = *(undefined8 *)&(pTVar7->Item).field_0x8;
    pTVar8 = (this->ChunkOutputHashQueue).Tail;
    local_e0 = 0;
    uStack_d8 = 0;
    local_78 = *(undefined8 *)&(pTVar7->Item).field_0x10;
    (this->ChunkOutputHashQueue).Tail = pTVar7;
    *(undefined8 *)&pTVar7->Item = 0;
    *(undefined8 *)&(pTVar7->Item).field_0x8 = 0;
    local_d0 = 0;
    *(undefined8 *)&(pTVar7->Item).field_0x10 = 0;
    ::operator_delete(pTVar8,0x20);
    local_b8.Value = &local_88;
    local_a8 = &local_78;
    TSet<TTuple<FGuid,unsigned___int64>,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGuid_const_&,unsigned___int64_const_&>_>
              ((TSet<TTuple<FGuid,unsigned___int64>,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>,FDefaultSetAllocator>
                *)&(this->ParallelChunkWriterSummaries).ChunkOutputHashes,&local_b8,
               (bool *)&local_b8.Value);
  }
  local_70.A = 0;
  local_70.B = 0;
  local_70.C = 0;
  local_70.D = 0;
  local_60.Hash[0] = '\0';
  local_60.Hash[1] = '\0';
  local_60.Hash[2] = '\0';
  local_60.Hash[3] = '\0';
  local_60.Hash[4] = '\0';
  local_60.Hash[5] = '\0';
  local_60.Hash[6] = '\0';
  local_60.Hash[7] = '\0';
  local_60.Hash[8] = '\0';
  local_60.Hash[9] = '\0';
  local_60.Hash[10] = '\0';
  local_60.Hash[0xb] = '\0';
  local_60.Hash[0xc] = '\0';
  local_60.Hash[0xd] = '\0';
  local_60.Hash[0xe] = '\0';
  local_60.Hash[0xf] = '\0';
  local_60.Hash[0x10] = '\0';
  local_60.Hash[0x11] = '\0';
  local_60.Hash[0x12] = '\0';
  local_60.Hash[0x13] = '\0';
  while (pTVar9 = ((this->ChunkOutputShaQueue).Tail)->NextNode, pTVar9 != (TNode *)0x0) {
    local_70.A = *(uint *)&(pTVar9->Item).field_0x0;
    local_70.B = *(uint *)&(pTVar9->Item).field_0x4;
    local_70.C = *(uint *)&(pTVar9->Item).field_0x8;
    local_70.D = *(uint *)&(pTVar9->Item).field_0xc;
    pTVar10 = (this->ChunkOutputShaQueue).Tail;
    local_e0 = 0;
    uStack_d8 = 0;
    local_60.Hash[0] = (pTVar9->Item).field_0x10;
    local_60.Hash[1] = (pTVar9->Item).field_0x11;
    local_60.Hash[2] = (pTVar9->Item).field_0x12;
    local_60.Hash[3] = (pTVar9->Item).field_0x13;
    local_60.Hash[4] = (pTVar9->Item).field_0x14;
    local_60.Hash[5] = (pTVar9->Item).field_0x15;
    local_60.Hash[6] = (pTVar9->Item).field_0x16;
    local_60.Hash[7] = (pTVar9->Item).field_0x17;
    local_60.Hash[8] = (pTVar9->Item).field_0x18;
    local_60.Hash[9] = (pTVar9->Item).field_0x19;
    local_60.Hash[10] = (pTVar9->Item).field_0x1a;
    local_60.Hash[0xb] = (pTVar9->Item).field_0x1b;
    local_60.Hash[0xc] = (pTVar9->Item).field_0x1c;
    local_60.Hash[0xd] = (pTVar9->Item).field_0x1d;
    local_60.Hash[0xe] = (pTVar9->Item).field_0x1e;
    local_60.Hash[0xf] = (pTVar9->Item).field_0x1f;
    local_60.Hash[0x10] = (pTVar9->Item).field_0x20;
    local_60.Hash[0x11] = (pTVar9->Item).field_0x21;
    local_60.Hash[0x12] = (pTVar9->Item).field_0x22;
    local_60.Hash[0x13] = (pTVar9->Item).field_0x23;
    (this->ChunkOutputShaQueue).Tail = pTVar9;
    *(undefined8 *)&pTVar9->Item = 0;
    *(undefined8 *)&(pTVar9->Item).field_0x8 = 0;
    *(undefined8 *)&(pTVar9->Item).field_0x10 = 0;
    *(undefined8 *)&(pTVar9->Item).field_0x18 = 0;
    *(undefined4 *)&(pTVar9->Item).field_0x20 = 0;
    ::operator_delete(pTVar10,0x30);
    TMapBase<FGuid,FSHAHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>_>::
    Emplace<FGuid_const_&,FSHAHash_const_&>
              ((TMapBase<FGuid,FSHAHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>_>
                *)&(this->ParallelChunkWriterSummaries).ChunkOutputShas,&local_70,&local_60);
  }
  EVar3 = (this->ParallelChunkWriterSummaries).FeatureLevel;
  *(undefined8 *)&(__return_storage_ptr__->ChunkOutputSizes).field_0x0 = 0;
  *(undefined8 *)&(__return_storage_ptr__->ChunkOutputSizes).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->ChunkOutputSizes).field_0x20 = 0;
  __return_storage_ptr__->FeatureLevel = EVar3;
  *(undefined4 *)&(__return_storage_ptr__->ChunkOutputSizes).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ChunkOutputSizes).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->ChunkOutputSizes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->ChunkOutputSizes).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->ChunkOutputSizes).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ChunkOutputSizes).field_0x48 = 0;
  TSet<TTuple<FGuid,__int64>,TDefaultMapHashableKeyFuncs<FGuid,__int64,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FGuid,__int64>,TDefaultMapHashableKeyFuncs<FGuid,__int64,0>,FDefaultSetAllocator>
             *)&__return_storage_ptr__->ChunkOutputSizes,
            (TSet<TTuple<FGuid,__int64>,TDefaultMapHashableKeyFuncs<FGuid,__int64,0>,FDefaultSetAllocator>
             *)&(this->ParallelChunkWriterSummaries).ChunkOutputSizes);
  *(undefined8 *)&(__return_storage_ptr__->ChunkOutputHashes).field_0x0 = 0;
  *(undefined8 *)&(__return_storage_ptr__->ChunkOutputHashes).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->ChunkOutputHashes).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ChunkOutputHashes).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ChunkOutputHashes).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->ChunkOutputHashes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->ChunkOutputHashes).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->ChunkOutputHashes).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ChunkOutputHashes).field_0x48 = 0;
  TSet<TTuple<FGuid,unsigned___int64>,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FGuid,unsigned___int64>,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>,FDefaultSetAllocator>
               *)&__return_storage_ptr__->ChunkOutputHashes,
              (TSet<TTuple<FGuid,unsigned___int64>,TDefaultMapHashableKeyFuncs<FGuid,unsigned___int64,0>,FDefaultSetAllocator>
               *)&(this->ParallelChunkWriterSummaries).ChunkOutputHashes);
  *(undefined8 *)&(__return_storage_ptr__->ChunkOutputShas).field_0x0 = 0;
  *(undefined8 *)&(__return_storage_ptr__->ChunkOutputShas).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->ChunkOutputShas).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ChunkOutputShas).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ChunkOutputShas).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->ChunkOutputShas).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->ChunkOutputShas).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->ChunkOutputShas).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->ChunkOutputShas).field_0x48 = 0;
  TSet<TTuple<FGuid,FSHAHash>,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FGuid,FSHAHash>,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>,FDefaultSetAllocator>
             *)&__return_storage_ptr__->ChunkOutputShas,
            (TSet<TTuple<FGuid,FSHAHash>,TDefaultMapHashableKeyFuncs<FGuid,FSHAHash,0>,FDefaultSetAllocator>
             *)&(this->ParallelChunkWriterSummaries).ChunkOutputShas);
  return __return_storage_ptr__;
}

// WriterThread @ 14326e6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall BuildPatchServices::FParallelChunkWriter::WriterThread(FParallelChunkWriter *this)

{
  TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FGuid,unsigned___int64,FSHAHash> *this_00
  ;
  TQueue<TTuple<FGuid,__int64>,0> *pTVar1;
  TQueue<TTuple<FGuid,unsigned___int64>,0> *pTVar2;
  TQueue<TTuple<FGuid,FSHAHash>,0> *pTVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  TNode *pTVar6;
  FThreadSafeBool FVar7;
  TNode *pTVar8;
  TNode *pTVar9;
  IFileSystem *pIVar10;
  code *pcVar11;
  longlong *plVar12;
  bool bVar13;
  double dVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong64 uVar20;
  ulong64 uVar21;
  undefined4 uVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  uint uVar26;
  FString *pFVar27;
  longlong lVar28;
  TNode *pTVar29;
  TNode *pTVar30;
  TNode *pTVar31;
  int iVar32;
  wchar_t *pwVar33;
  ForAnyElementType FVar34;
  FScriptContainerElement *_Src;
  int iVar35;
  int iVar36;
  double dVar37;
  undefined1 auStackY_1c8 [32];
  FString local_188;
  longlong *local_178;
  undefined8 *local_170;
  undefined8 local_168 [3];
  ulong64 local_150;
  LARGE_INTEGER local_148;
  LARGE_INTEGER local_140;
  FString local_138;
  FString local_128;
  void *local_118;
  undefined8 local_110;
  FGuid local_108;
  ulong64 local_f8 [3];
  undefined4 local_e0;
  undefined1 local_d8 [16];
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulong64 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  ulonglong local_88;
  
  fVar15 = __real_3dcccccd;
  dVar14 = __real_40c3880000000000;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_e0 = 0;
  FVar7 = this->bShouldAbort;
  local_118 = (void *)0x0;
  local_110 = 0;
  local_108.A = 0;
  local_108.B = 0;
  local_108.C = 0;
  local_108.D = 0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  do {
    if ((FVar7 != (FThreadSafeBool)0x0) ||
       ((this->bMoreDataIsExpected == (FThreadSafeBool)0x0 &&
        ((this->ChunkDataJobQueueCount).Counter < 1)))) {
      if (local_118 != (void *)0x0) {
        FMemory::Free(local_118);
      }
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->ChunkDataJobQueueConsumerCS);
    pTVar8 = ((this->ChunkDataJobQueue).Tail)->NextNode;
    if (pTVar8 == (TNode *)0x0) {
      bVar13 = false;
    }
    else {
      this_00 = &pTVar8->Item;
      if ((TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FGuid,unsigned___int64,FSHAHash>
           *)&local_118 != this_00) {
        if (local_118 != (void *)0x0) {
          FMemory::Free(local_118);
        }
        local_118 = *(void **)this_00;
        *(undefined8 *)this_00 = 0;
        local_110 = *(undefined8 *)&(pTVar8->Item).field_0x8;
        *(undefined8 *)&(pTVar8->Item).field_0x8 = 0;
      }
      local_108.A = *(uint *)&(pTVar8->Item).field_0x10;
      local_108.B = *(uint *)&(pTVar8->Item).field_0x14;
      local_108.C = *(uint *)&(pTVar8->Item).field_0x18;
      local_108.D = *(uint *)&(pTVar8->Item).field_0x1c;
      pTVar9 = (this->ChunkDataJobQueue).Tail;
      local_d8._0_8_ = (void *)0x0;
      local_f8[0] = *(ulong64 *)&(pTVar8->Item).field_0x20;
      local_f8[1] = *(ulong64 *)&(pTVar8->Item).field_0x28;
      local_f8[2] = *(ulong64 *)&(pTVar8->Item).field_0x30;
      local_d8._8_4_ = 0;
      local_d8._12_4_ = 0;
      uStack_c8._0_4_ = 0;
      uStack_c8._4_4_ = 0;
      local_e0 = *(undefined4 *)&(pTVar8->Item).field_0x38;
      uStack_a0 = 0;
      (this->ChunkDataJobQueue).Tail = pTVar8;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FGuid,unsigned___int64,FSHAHash>::
      operator=(this_00,(TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FGuid,unsigned___int64,FSHAHash>
                         *)local_d8);
      if ((void *)local_d8._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_d8._0_8_);
      }
      if (pTVar9 != (TNode *)0x0) {
        if (*(void **)&pTVar9->Item != (void *)0x0) {
          FMemory::Free(*(void **)&pTVar9->Item);
        }
        ::operator_delete(pTVar9,0x48);
      }
      bVar13 = true;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->ChunkDataJobQueueConsumerCS);
    if (bVar13) {
      LOCK();
      (this->ChunkDataJobQueueCount).Counter = (this->ChunkDataJobQueueCount).Counter + -1;
      UNLOCK();
      local_c0._4_4_ = (undefined4)local_110;
      local_c0._0_4_ = (undefined4)local_110;
      local_d8._8_4_ = local_108.A;
      local_d8._12_4_ = local_108.B;
      uStack_c8._0_4_ = local_108.C;
      uStack_c8._4_4_ = local_108.D;
      local_b0 = local_f8[0];
      uStack_a8 = local_f8[1];
      uStack_a0 = local_f8[2];
      local_d8._0_8_ = (void *)0x4200000003;
      local_b8._0_2_ = 0x300;
      local_98 = local_e0;
      local_170 = ::operator_new(0x18);
      if (local_170 == (undefined8 *)0x0) {
        local_170 = (undefined8 *)0x0;
      }
      else {
        *local_170 = &___7FWriterChunkDataAccess_BuildPatchServices__6B_;
        local_170[1] = &local_118;
        local_170[2] = local_d8;
      }
      pFVar27 = FBuildPatchUtils::GetChunkNewFilename
                          (&local_138,(this->Config).FeatureLevel,&local_108,local_f8);
      iVar35 = (this->Config).ChunkDirectory.Data.ArrayNum;
      iVar32 = (pFVar27->Data).ArrayNum;
      iVar36 = iVar32 + -1;
      if (iVar32 == 0) {
        iVar36 = 0;
      }
      iVar32 = iVar36 + 1;
      local_188.Data.ArrayNum = iVar35;
      if ((iVar35 == 0) && (iVar32 != 0)) {
        _Src = (this->Config).ChunkDirectory.Data.AllocatorInstance.Data;
        iVar32 = iVar36 + 2;
LAB_14326e96d:
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (iVar32 != 0) goto LAB_14326e978;
        local_188.Data.ArrayMax = 0;
      }
      else {
        _Src = (this->Config).ChunkDirectory.Data.AllocatorInstance.Data;
        if (iVar35 == 0) goto LAB_14326e96d;
LAB_14326e978:
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar26 = iVar35 + iVar32;
        if ((int)uVar26 < iVar35) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar26,0,(ForAnyElementType *)&local_188,iVar35,&local_188.Data.ArrayMax);
        if (iVar35 != 0) {
          memcpy(local_188.Data.AllocatorInstance.Data,_Src,(longlong)iVar35 * 2);
        }
      }
      ::FString::PathAppend(&local_188,(wchar_t *)(pFVar27->Data).AllocatorInstance.Data,iVar36);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      local_168[0] = 0xffffffffffffffff;
      FVar34.Data = (FScriptContainerElement *)L"";
      if (local_188.Data.ArrayNum != 0) {
        FVar34.Data = local_188.Data.AllocatorInstance.Data;
      }
      cVar23 = (**(code **)((longlong)*this->FileSystem + 0x18))
                         (this->FileSystem,FVar34.Data,local_168);
      uVar18 = local_108._8_8_;
      uVar16 = local_108._0_8_;
      if (cVar23 == '\0') {
        bVar13 = false;
        iVar35 = (this->Config).SaveRetryCount;
        if (this->bShouldAbort == (FThreadSafeBool)0x0) {
          do {
            if (bVar13) goto LAB_14326ee64;
            if (iVar35 < 0) goto LAB_14326ee35;
            QueryPerformanceCounter(&local_140);
            pIVar10 = this->FileSystem;
            pcVar11 = *(code **)((longlong)*pIVar10 + 0x10);
            pFVar27 = FPaths::GetPath(&local_128,&local_188);
            if ((pFVar27->Data).ArrayNum == 0) {
              pwVar33 = L"";
            }
            else {
              pwVar33 = (wchar_t *)(pFVar27->Data).AllocatorInstance.Data;
            }
            (*pcVar11)(pIVar10,pwVar33);
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
            FVar34.Data = (FScriptContainerElement *)L"";
            if (local_188.Data.ArrayNum != 0) {
              FVar34.Data = local_188.Data.AllocatorInstance.Data;
            }
            (**(code **)((longlong)*this->FileSystem + 0x50))
                      (this->FileSystem,&local_178,FVar34.Data,0);
            if (local_178 == (longlong *)0x0) {
              if (4 < (byte)LogChunkWriter._0_1_) {
                UE::Logging::Private::BasicLog<5>
                          (&`private:_void___cdecl_BuildPatchServices::FParallelChunkWriter::WriterThread(void)___ptr64'
                            ::__l16::LOG_Static,(FLogCategoryBase *)&LogChunkWriter);
              }
LAB_14326ee03:
              FWindowsPlatformProcess::Sleep((this->Config).SaveRetryTime);
            }
            else {
              cVar23 = (**(code **)((longlong)*this->ChunkDataSerialization + 0x30))
                                 (this->ChunkDataSerialization,local_178,local_170);
              plVar12 = this->StatSerlialiseTime;
              QueryPerformanceCounter(&local_148);
              LOCK();
              *plVar12 = *plVar12 + (local_148.QuadPart - (longlong)local_140);
              UNLOCK();
              lVar28 = (**(code **)(*local_178 + 0x30))();
              cVar24 = (**(code **)(*local_178 + 0x210))();
              FVar34.Data = (FScriptContainerElement *)L"";
              if (local_188.Data.ArrayNum != 0) {
                FVar34.Data = local_188.Data.AllocatorInstance.Data;
              }
              cVar25 = (**(code **)((longlong)*this->FileSystem + 0x80))
                                 (this->FileSystem,FVar34.Data);
              uVar18 = local_108._8_8_;
              uVar16 = local_108._0_8_;
              if (((cVar24 == '\0') || (cVar25 == '\0')) || (cVar23 != '\0')) {
                if (4 < (byte)LogChunkWriter._0_1_) {
                  UE::Logging::Private::BasicLog<5>
                            (&`private:_void___cdecl_BuildPatchServices::FParallelChunkWriter::WriterThread(void)___ptr64'
                              ::__l37::LOG_Static,(FLogCategoryBase *)&LogChunkWriter);
                }
                goto LAB_14326ee03;
              }
              pTVar1 = &this->ChunkOutputSizeQueue;
              bVar13 = true;
              local_150 = lVar28;
              pTVar29 = ::operator_new(0x20);
              uVar19 = local_108._8_8_;
              uVar17 = local_108._0_8_;
              if (pTVar29 != (TNode *)0x0) {
                pTVar29->NextNode = (TNode *)0x0;
                local_108.A = (uint)uVar16;
                local_108.B = SUB84(uVar16,4);
                *(uint *)&(pTVar29->Item).field_0x0 = local_108.A;
                *(uint *)&(pTVar29->Item).field_0x4 = local_108.B;
                local_108.C = (uint)uVar18;
                local_108.D = SUB84(uVar18,4);
                *(uint *)&(pTVar29->Item).field_0x8 = local_108.C;
                *(uint *)&(pTVar29->Item).field_0xc = local_108.D;
                *(ulong64 *)&(pTVar29->Item).field_0x10 = local_150;
                local_108._0_8_ = uVar17;
                local_108._8_8_ = uVar19;
                if (((ulonglong)pTVar1 & 7) != 0) {
                  FWindowsPlatformAtomics::HandleAtomicsFailure
                            (
                            L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                            );
                }
                LOCK();
                pTVar4 = pTVar1->Head;
                pTVar1->Head = pTVar29;
                UNLOCK();
                if (((ulonglong)pTVar4 & 7) != 0) {
                  FWindowsPlatformAtomics::HandleAtomicsFailure
                            (
                            L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                            );
                }
                LOCK();
                pTVar4->NextNode = pTVar29;
                UNLOCK();
              }
              uVar17 = local_108._8_8_;
              uVar16 = local_108._0_8_;
              pTVar2 = &this->ChunkOutputHashQueue;
              local_150 = local_f8[0];
              pTVar30 = ::operator_new(0x20);
              uVar19 = local_108._8_8_;
              uVar18 = local_108._0_8_;
              if (pTVar30 != (TNode *)0x0) {
                pTVar30->NextNode = (TNode *)0x0;
                local_108.A = (uint)uVar16;
                local_108.B = SUB84(uVar16,4);
                *(uint *)&(pTVar30->Item).field_0x0 = local_108.A;
                *(uint *)&(pTVar30->Item).field_0x4 = local_108.B;
                local_108.C = (uint)uVar17;
                local_108.D = SUB84(uVar17,4);
                *(uint *)&(pTVar30->Item).field_0x8 = local_108.C;
                *(uint *)&(pTVar30->Item).field_0xc = local_108.D;
                *(ulong64 *)&(pTVar30->Item).field_0x10 = local_150;
                local_108._0_8_ = uVar18;
                local_108._8_8_ = uVar19;
                if (((ulonglong)pTVar2 & 7) != 0) {
                  FWindowsPlatformAtomics::HandleAtomicsFailure
                            (
                            L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                            );
                }
                LOCK();
                pTVar5 = pTVar2->Head;
                pTVar2->Head = pTVar30;
                UNLOCK();
                if (((ulonglong)pTVar5 & 7) != 0) {
                  FWindowsPlatformAtomics::HandleAtomicsFailure
                            (
                            L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                            );
                }
                LOCK();
                pTVar5->NextNode = pTVar30;
                UNLOCK();
              }
              uVar22 = local_e0;
              uVar21 = local_f8[2];
              uVar20 = local_f8[1];
              uVar17 = local_108._8_8_;
              uVar16 = local_108._0_8_;
              pTVar3 = &this->ChunkOutputShaQueue;
              pTVar31 = ::operator_new(0x30);
              uVar19 = local_108._8_8_;
              uVar18 = local_108._0_8_;
              if (pTVar31 != (TNode *)0x0) {
                pTVar31->NextNode = (TNode *)0x0;
                local_108.A = (uint)uVar16;
                local_108.B = SUB84(uVar16,4);
                *(uint *)&(pTVar31->Item).field_0x0 = local_108.A;
                *(uint *)&(pTVar31->Item).field_0x4 = local_108.B;
                local_108.C = (uint)uVar17;
                local_108.D = SUB84(uVar17,4);
                *(uint *)&(pTVar31->Item).field_0x8 = local_108.C;
                *(uint *)&(pTVar31->Item).field_0xc = local_108.D;
                *(ulong64 *)&(pTVar31->Item).field_0x10 = uVar20;
                *(ulong64 *)&(pTVar31->Item).field_0x18 = uVar21;
                *(undefined4 *)&(pTVar31->Item).field_0x20 = uVar22;
                local_108._0_8_ = uVar18;
                local_108._8_8_ = uVar19;
                if (((ulonglong)pTVar3 & 7) != 0) {
                  FWindowsPlatformAtomics::HandleAtomicsFailure
                            (
                            L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                            );
                }
                LOCK();
                pTVar6 = pTVar3->Head;
                pTVar3->Head = pTVar31;
                UNLOCK();
                if (((ulonglong)pTVar6 & 7) != 0) {
                  FWindowsPlatformAtomics::HandleAtomicsFailure
                            (
                            L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                            );
                }
                LOCK();
                pTVar6->NextNode = pTVar31;
                UNLOCK();
              }
              LOCK();
              *this->StatChunksSaved = *this->StatChunksSaved + 1;
              UNLOCK();
              LOCK();
              *this->StatDataWritten = *this->StatDataWritten + lVar28;
              UNLOCK();
              LOCK();
              this->StatUncompressesData =
                   this->StatUncompressesData + (ulonglong)(uint)(local_d8._4_4_ + local_c0._4_4_);
              UNLOCK();
              if (0.0 < (double)this->StatUncompressesData) {
                LOCK();
                *this->StatCompressionRatio =
                     (longlong)
                     (((double)*this->StatDataWritten / (double)this->StatUncompressesData) * dVar14
                     );
                UNLOCK();
              }
              dVar37 = (double)(ulonglong)*this->StatSerlialiseTime *
                       FGenericPlatformTime::SecondsPerCycle64;
              if (0.0 < dVar37) {
                LOCK();
                *this->StatDataWriteSpeed = (longlong)((double)*this->StatDataWritten / dVar37);
                UNLOCK();
              }
            }
            if (local_178 != (longlong *)0x0) {
              (**(code **)*local_178)(local_178,1);
            }
            iVar35 = iVar35 + -1;
          } while (this->bShouldAbort == (FThreadSafeBool)0x0);
          if (bVar13) goto LAB_14326ee64;
        }
LAB_14326ee35:
        UE::Logging::Private::BasicFatalLog
                  (&`private:_void___cdecl_BuildPatchServices::FParallelChunkWriter::WriterThread(void)___ptr64'
                    ::__l64::LOG_Static,(FLogCategoryBase *)&LogChunkWriter);
      }
      else {
        pTVar1 = &this->ChunkOutputSizeQueue;
        local_150 = local_168[0];
        pTVar29 = ::operator_new(0x20);
        uVar19 = local_108._8_8_;
        uVar17 = local_108._0_8_;
        if (pTVar29 != (TNode *)0x0) {
          pTVar29->NextNode = (TNode *)0x0;
          local_108.A = (uint)uVar16;
          local_108.B = SUB84(uVar16,4);
          *(uint *)&(pTVar29->Item).field_0x0 = local_108.A;
          *(uint *)&(pTVar29->Item).field_0x4 = local_108.B;
          local_108.C = (uint)uVar18;
          local_108.D = SUB84(uVar18,4);
          *(uint *)&(pTVar29->Item).field_0x8 = local_108.C;
          *(uint *)&(pTVar29->Item).field_0xc = local_108.D;
          *(ulong64 *)&(pTVar29->Item).field_0x10 = local_150;
          local_108._0_8_ = uVar17;
          local_108._8_8_ = uVar19;
          if (((ulonglong)pTVar1 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar4 = pTVar1->Head;
          pTVar1->Head = pTVar29;
          UNLOCK();
          if (((ulonglong)pTVar4 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar4->NextNode = pTVar29;
          UNLOCK();
        }
        uVar17 = local_108._8_8_;
        uVar16 = local_108._0_8_;
        pTVar2 = &this->ChunkOutputHashQueue;
        local_150 = local_f8[0];
        pTVar30 = ::operator_new(0x20);
        uVar19 = local_108._8_8_;
        uVar18 = local_108._0_8_;
        if (pTVar30 != (TNode *)0x0) {
          pTVar30->NextNode = (TNode *)0x0;
          local_108.A = (uint)uVar16;
          local_108.B = SUB84(uVar16,4);
          *(uint *)&(pTVar30->Item).field_0x0 = local_108.A;
          *(uint *)&(pTVar30->Item).field_0x4 = local_108.B;
          local_108.C = (uint)uVar17;
          local_108.D = SUB84(uVar17,4);
          *(uint *)&(pTVar30->Item).field_0x8 = local_108.C;
          *(uint *)&(pTVar30->Item).field_0xc = local_108.D;
          *(ulong64 *)&(pTVar30->Item).field_0x10 = local_150;
          local_108._0_8_ = uVar18;
          local_108._8_8_ = uVar19;
          if (((ulonglong)pTVar2 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar5 = pTVar2->Head;
          pTVar2->Head = pTVar30;
          UNLOCK();
          if (((ulonglong)pTVar5 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar5->NextNode = pTVar30;
          UNLOCK();
        }
        uVar22 = local_e0;
        uVar21 = local_f8[2];
        uVar20 = local_f8[1];
        uVar17 = local_108._8_8_;
        uVar16 = local_108._0_8_;
        pTVar3 = &this->ChunkOutputShaQueue;
        pTVar31 = ::operator_new(0x30);
        uVar19 = local_108._8_8_;
        uVar18 = local_108._0_8_;
        if (pTVar31 != (TNode *)0x0) {
          pTVar31->NextNode = (TNode *)0x0;
          local_108.A = (uint)uVar16;
          local_108.B = SUB84(uVar16,4);
          *(uint *)&(pTVar31->Item).field_0x0 = local_108.A;
          *(uint *)&(pTVar31->Item).field_0x4 = local_108.B;
          local_108.C = (uint)uVar17;
          local_108.D = SUB84(uVar17,4);
          *(uint *)&(pTVar31->Item).field_0x8 = local_108.C;
          *(uint *)&(pTVar31->Item).field_0xc = local_108.D;
          *(ulong64 *)&(pTVar31->Item).field_0x10 = uVar20;
          *(ulong64 *)&(pTVar31->Item).field_0x18 = uVar21;
          *(undefined4 *)&(pTVar31->Item).field_0x20 = uVar22;
          local_108._0_8_ = uVar18;
          local_108._8_8_ = uVar19;
          if (((ulonglong)pTVar3 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar6 = pTVar3->Head;
          pTVar3->Head = pTVar31;
          UNLOCK();
          if (((ulonglong)pTVar6 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          pTVar6->NextNode = pTVar31;
          UNLOCK();
        }
      }
LAB_14326ee64:
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      if (local_170 != (undefined8 *)0x0) {
        (**(code **)*local_170)(local_170,1);
      }
    }
    else {
      FWindowsPlatformProcess::Sleep(fVar15);
    }
    FVar7 = this->bShouldAbort;
  } while( true );
}

