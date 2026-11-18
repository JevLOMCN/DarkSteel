// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// FChunkDatabaseWriter @ 143220500

FChunkDatabaseWriter * __thiscall
BuildPatchServices::FChunkDatabaseWriter::FChunkDatabaseWriter
          (FChunkDatabaseWriter *this,IChunkSource *param_1,IFileSystem *param_2,
          IInstallerError *param_3,IChunkReferenceTracker *param_4,IChunkDataSerialization *param_5,
          TArray<BuildPatchServices::FChunkDatabaseFile,TSizedDefaultAllocator<32>_> *param_6,
          TFunction<void___cdecl(bool)> *param_7)

{
  TFuture<void> *pTVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  FEvent *pFVar6;
  TFuture<void> *pTVar7;
  TFuture<void> *pTVar8;
  longlong *plVar9;
  <lambda_1> local_78;
  undefined1 local_70 [24];
  TUniqueFunction<void___cdecl(void)> local_58;
  
  pTVar5 = (TNode *)0x0;
  *(undefined ***)this = &___7FChunkDatabaseWriter_BuildPatchServices__6B_;
  this->ChunkReferenceTracker = param_4;
  (this->ChunkDatabaseList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ChunkDataSerialization = param_5;
  this->ChunkSource = param_1;
  this->FileSystem = param_2;
  this->InstallerError = param_3;
  (this->ChunkDatabaseList).AllocatorInstance.Data = (param_6->AllocatorInstance).Data;
  (param_6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ChunkDatabaseList).ArrayNum = param_6->ArrayNum;
  (this->ChunkDatabaseList).ArrayMax = param_6->ArrayMax;
  param_6->ArrayNum = 0;
  param_6->ArrayMax = 0;
  *(undefined8 *)&this->OnComplete = *(undefined8 *)param_7;
  *(undefined8 *)&(this->OnComplete).field_0x28 = *(undefined8 *)&param_7->field_0x28;
  *(undefined8 *)&param_7->field_0x28 = 0;
  uVar3 = *(undefined8 *)&param_7->field_0x18;
  *(undefined8 *)&(this->OnComplete).field_0x10 = *(undefined8 *)&param_7->field_0x10;
  *(undefined8 *)&(this->OnComplete).field_0x18 = uVar3;
  *(undefined8 *)&(this->OnComplete).field_0x20 = *(undefined8 *)&param_7->field_0x20;
  if (*(longlong *)&this->OnComplete != 0) {
    *(undefined8 *)param_7 = 0;
  }
  pTVar8 = &this->ProcessingWorkerFuture;
  pTVar1 = &this->OutputWorkerFuture;
  *(undefined8 *)pTVar8 = 0;
  *(undefined8 *)&(this->ProcessingWorkerFuture).field_0x8 = 0;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->OutputWorkerFuture).field_0x8 = 0;
  this->bShouldCancel = (FThreadSafeBool)0x0;
  this->bProcessingComplete = (FThreadSafeBool)0x0;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TNode *)0x0) {
    pTVar4->NextNode = (TNode *)0x0;
    (pTVar4->Item).Object = (FDataMessage *)0x0;
    (pTVar4->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar4->NextNode = (TNode *)0x0;
    (pTVar4->Item).Object = (FDataMessage *)0x0;
    (pTVar4->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar5 = pTVar4;
  }
  (this->DataPipe).Tail = pTVar5;
  (this->DataPipe).Head = pTVar5;
  pFVar6 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  this->ThreadTrigger = pFVar6;
  local_58._0_8_ = 0;
  local_58._40_8_ = 0;
  local_78.__this = this;
  pTVar7 = Async<_BuildPatchServices::FChunkDatabaseWriter::FChunkDatabaseWriter_::__l2::<lambda_1>_>
                     ((TFuture<void> *)local_70,Thread,&local_78,&local_58);
  if (pTVar8 != pTVar7) {
    *(undefined8 *)pTVar8 = *(undefined8 *)pTVar7;
    *(undefined8 *)pTVar7 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->ProcessingWorkerFuture).field_0x8,
               (FSharedReferencer<1> *)&pTVar7->field_0x8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_70._8_8_);
  local_58._0_8_ = 0;
  local_58._40_8_ = 0;
  local_78.__this = this;
  pTVar8 = Async<_BuildPatchServices::FChunkDatabaseWriter::FChunkDatabaseWriter_::__l2::<lambda_2>_>
                     ((TFuture<void> *)local_70,Thread,(<lambda_2> *)&local_78,&local_58);
  if (pTVar1 != pTVar8) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar8;
    *(undefined8 *)pTVar8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->OutputWorkerFuture).field_0x8,
               (FSharedReferencer<1> *)&pTVar8->field_0x8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_70._8_8_);
  DestructItems<BuildPatchServices::FChunkDatabaseFile,int>
            ((FChunkDatabaseFile *)(param_6->AllocatorInstance).Data,param_6->ArrayNum);
  pFVar2 = (param_6->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (*(longlong *)param_7 != 0) {
    plVar9 = (longlong *)&param_7->field_0x10;
    if (*(longlong **)&param_7->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_7->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return this;
}

// ~FChunkDatabaseWriter @ 143227b20

void __thiscall
BuildPatchServices::FChunkDatabaseWriter::~FChunkDatabaseWriter(FChunkDatabaseWriter *this)

{
  longlong *plVar1;
  TNode *pTVar2;
  FScriptContainerElement *pFVar3;
  char cVar4;
  longlong *plVar5;
  
  *(undefined ***)this = &___7FChunkDatabaseWriter_BuildPatchServices__6B_;
  LOCK();
  this->bShouldCancel = (FThreadSafeBool)0x1;
  UNLOCK();
  if (*(longlong *)&this->ProcessingWorkerFuture != 0) {
    do {
      do {
      } while (*(longlong *)&this->ProcessingWorkerFuture == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->ProcessingWorkerFuture + 0x60);
      cVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar4 == '\0');
  }
  if (*(longlong *)&this->OutputWorkerFuture != 0) {
    do {
      do {
      } while (*(longlong *)&this->OutputWorkerFuture == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->OutputWorkerFuture + 0x60);
      cVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar4 == '\0');
  }
  FGenericPlatformProcess::ReturnSynchEventToPool(this->ThreadTrigger);
  pTVar2 = (this->DataPipe).Tail;
  while (pTVar2 != (TNode *)0x0) {
    (this->DataPipe).Tail = pTVar2->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar2->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar2,0x18);
    pTVar2 = (this->DataPipe).Tail;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->OutputWorkerFuture).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->ProcessingWorkerFuture).field_0x8);
  if (*(longlong *)&this->OnComplete != 0) {
    plVar1 = *(longlong **)&(this->OnComplete).field_0x28;
    plVar5 = (longlong *)&(this->OnComplete).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  DestructItems<BuildPatchServices::FChunkDatabaseFile,int>
            ((FChunkDatabaseFile *)(this->ChunkDatabaseList).AllocatorInstance.Data,
             (this->ChunkDatabaseList).ArrayNum);
  pFVar3 = (this->ChunkDatabaseList).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined ***)this = &___7IChunkDatabaseWriter_BuildPatchServices__6B_;
  return;
}

// ProcessingWorkerThread @ 14325e5f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FChunkDatabaseWriter::ProcessingWorkerThread(FChunkDatabaseWriter *this)

{
  TNode *pTVar1;
  IInstallerError *pIVar2;
  void *_Src;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType _Src_00;
  char cVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  FArchiveState *pFVar10;
  TNode *pTVar11;
  FDataMessage *pFVar12;
  FArchiveState *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  FDataMessage *pFVar15;
  FText *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  int *piVar18;
  FArchiveState *pFVar19;
  undefined8 *puVar20;
  FGuid *this_00;
  wchar_t *pwVar21;
  FArchiveState *pFVar22;
  int iVar23;
  undefined8 *puVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  longlong lVar27;
  longlong lVar28;
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  FChunkDatabaseHeader local_1b8;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  FString local_180;
  FString local_170;
  FString local_160;
  uchar *local_150;
  uchar *local_148;
  FGuid *local_140;
  longlong local_138;
  FScriptContainerElement *local_130;
  uchar *local_128;
  longlong local_120;
  TSharedPtr<BuildPatchServices::FDataMessage,1> local_118;
  TSharedPtr<BuildPatchServices::FDataMessage,1> local_108;
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  undefined1 local_f0 [8];
  TRawPtrProxy<BuildPatchServices::FDataMessage> local_e8;
  TRawPtrProxy<BuildPatchServices::FDataMessage> local_e0;
  ITextData *local_d8;
  uint local_d0;
  ITextData *local_c8;
  uint local_c0;
  ITextData *local_b8;
  uint local_b0;
  FString local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_60;
  undefined4 uStack_58;
  uint uStack_54;
  
  cVar7 = '\x01';
  local_res20 = 0;
  if (0 < (this->ChunkDatabaseList).ArrayNum) {
    local_120 = 0;
    do {
      lVar28 = local_120;
      uVar9 = local_res20;
      pFVar22 = (FArchiveState *)0x0;
      if (((cVar7 == '\0') || (this->bShouldCancel != (FThreadSafeBool)0x0)) ||
         (cVar5 = (**(code **)((longlong)*this->InstallerError + 8))(), cVar5 != '\0')) break;
      uVar8 = 0;
      if ((int)uVar9 < (this->ChunkDatabaseList).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar26 = (this->ChunkDatabaseList).AllocatorInstance.Data + lVar28 * 0x20;
      local_130 = pFVar26;
      if (4 < (byte)LogChunkDatabaseWriter._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDatabaseWriter)
        ;
      }
      ::FString::ConcatFC(&local_a8,(FString *)pFVar26,L"tmp");
      pFVar10 = ::operator_new(0x28);
      _Src_00.Data = local_a8.Data.AllocatorInstance.Data;
      pFVar13 = pFVar22;
      if (pFVar10 != (FArchiveState *)0x0) {
        local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar23 = local_a8.Data.ArrayNum;
        local_180.Data.ArrayNum = iVar23;
        if (iVar23 == 0) {
          local_180.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar23,0,(ForAnyElementType *)&local_180,iVar23,&local_180.Data.ArrayMax);
          memcpy(local_180.Data.AllocatorInstance.Data,_Src_00.Data,(longlong)iVar23 * 2);
        }
        ::FString::FString((FString *)pFVar10,&local_180);
        iVar23 = *(int *)&pFVar10->ActiveFPLB;
        (pFVar10->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0xffffffffffffffff;
        (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
         &(pFVar10->InlineFPLB).EndFastPathLoadBuffer)->AllocatorInstance).Data =
             (FScriptContainerElement *)0x0;
        (pFVar10->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
        if ((iVar23 < 2) && (1 < (byte)LogChunkDatabaseWriter._0_1_)) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)
                     &`public:___cdecl_BuildPatchServices::FDataMessage::FDataMessage(FString,__int64)___ptr64'
                      ::__l6::LOG_Static,(FLogCategoryBase *)&LogChunkDatabaseWriter);
        }
        pFVar13 = pFVar10;
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
        }
      }
      local_e8.Object = (FDataMessage *)pFVar13;
      TSharedPtr<BuildPatchServices::FDataMessage,1>::
      TSharedPtr<BuildPatchServices::FDataMessage,1><BuildPatchServices::FDataMessage>
                (&local_118,&local_e8);
      pTVar11 = ::operator_new(0x18);
      if (pTVar11 != (TNode *)0x0) {
        (pTVar11->Item).Object = local_118.Object;
        (pTVar11->Item).SharedReferenceCount.ReferenceController =
             local_118.SharedReferenceCount.ReferenceController;
        pTVar11->NextNode = (TNode *)0x0;
        pTVar1 = (this->DataPipe).Head;
        (this->DataPipe).Head = pTVar11;
        local_118.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_118.Object = (FDataMessage *)0x0;
        pTVar1->NextNode = pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_118.SharedReferenceCount.ReferenceController);
      (**(code **)(this->ThreadTrigger->_padding_ + 0x10))();
      local_1b8.Version = 1;
      local_1b8.Contents.ArrayNum = 0;
      local_1b8.HeaderSize = 0x18;
      local_1b8.Contents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.Contents.ArrayMax = 0;
      iVar23 = *(int *)(pFVar26 + 0x18);
      puVar20 = *(undefined8 **)&pFVar26[0x10].field_0x0;
      puVar24 = puVar20 + (longlong)iVar23 * 2;
      pFVar13 = pFVar22;
      while( true ) {
        uVar9 = (uint)pFVar13;
        if (*(int *)(pFVar26 + 0x18) != iVar23) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FGuid_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
          uVar9 = local_1b8.Contents.ArrayNum;
        }
        if (puVar20 == puVar24) break;
        local_98 = *puVar20;
        uStack_90 = puVar20[1];
        local_60 = 0;
        uStack_58 = 0;
        lStack_80 = (ulonglong)uStack_54 << 0x20;
        local_88 = 0;
        if (((local_1b8.Contents.AllocatorInstance.Data <= (FScriptContainerElement *)&local_98) &&
            ((FScriptContainerElement *)&local_98 <
             local_1b8.Contents.AllocatorInstance.Data +
             (longlong)local_1b8.Contents.ArrayMax * 0x20)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), uVar9 = local_1b8.Contents.ArrayNum, bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar9 == local_1b8.Contents.ArrayMax) {
          uVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&local_1b8.Contents.AllocatorInstance,
                             &local_1b8.Contents.ArrayMax);
        }
        local_1b8.Contents.ArrayNum = uVar9 + 1;
        puVar20 = puVar20 + 2;
        *(undefined8 *)(local_1b8.Contents.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20) =
             local_98;
        *(undefined8 *)(local_1b8.Contents.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20 + 8)
             = uStack_90;
        *(undefined8 *)
         (local_1b8.Contents.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20 + 0x10) = local_88
        ;
        *(longlong *)
         (local_1b8.Contents.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20 + 0x10 + 8) =
             lStack_80;
        pFVar13 = (FArchiveState *)(ulonglong)(uint)local_1b8.Contents.ArrayNum;
      }
      pFVar12 = ::operator_new(0x28);
      pFVar13 = pFVar22;
      if (pFVar12 != (FDataMessage *)0x0) {
        pFVar13 = (FArchiveState *)FDataMessage::FDataMessage(pFVar12,0);
      }
      pFVar10 = ::operator_new(0xa8);
      if (pFVar10 != (FArchiveState *)0x0) {
        local_150 = (uchar *)0x0;
        pFVar10->_padding_ = 0;
        pFVar10->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        (pFVar10->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
        (pFVar10->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
        (pFVar10->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
        *(undefined8 *)&pFVar10->field_0x28 = 0;
        pFVar10->ArSerializingDefaults = 0;
        pFVar10->ArPortFlags = 0;
        pFVar10->ArMaxSerializeSize = 0;
        (pFVar10->ArUEVer).FileVersionUE4 = 0;
        (pFVar10->ArUEVer).FileVersionUE5 = 0;
        pFVar10->ArLicenseeUEVer = 0;
        (pFVar10->ArEngineVer).Major = 0;
        (pFVar10->ArEngineVer).Minor = 0;
        (pFVar10->ArEngineVer).Patch = 0;
        *(undefined2 *)&(pFVar10->ArEngineVer).field_0x6 = 0;
        (pFVar10->ArEngineVer).Changelist = 0;
        pFVar10->CustomVersionContainer = (FCustomVersionContainer *)0x0;
        pFVar10->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        pFVar10->SavePackageData = (FArchiveSavePackageData *)0x0;
        pFVar10->SerializedProperty = (FProperty *)0x0;
        pFVar10->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        *(undefined8 *)&pFVar10->bCustomVersionsAreReset = 0;
        pFVar10->NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(pFVar10);
        pFVar10[1]._padding_ = 0;
        pFVar10->_padding_ =
             (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
        pFVar10[1].ActiveFPLB = (FFastPathLoadBuffer *)&(pFVar13->InlineFPLB).EndFastPathLoadBuffer;
        pFVar10[1].InlineFPLB.StartFastPathLoadBuffer = local_150;
        FArchiveState::SetIsSaving(pFVar10,true);
        (**(code **)(pFVar10->_padding_ + 0x108))(pFVar10,0);
        pFVar10->_padding_ = (longlong)&___7FMemoryWriter__6B_;
        pFVar22 = pFVar10;
      }
      BuildPatchServices::operator<<((FArchive *)pFVar22,&local_1b8);
      lVar28 = (longlong)*(int *)&(pFVar13->InlineFPLB).OriginalFastPathLoadBuffer;
      local_198 = lVar28;
      pTVar14 = ::operator_new(0x18);
      if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
        pTVar14 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar14[1]._padding_ = (longlong)pFVar13;
        pTVar14->SharedReferenceCount = (atomic<int>)0x1;
        pTVar14->WeakReferenceCount = (atomic<int>)0x1;
        pTVar14->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDataMessage_BuildPatchServices__U__DefaultDeleter_UFDataMessage_BuildPatchServices___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
      }
      pTVar11 = ::operator_new(0x18);
      if (pTVar11 != (TNode *)0x0) {
        (pTVar11->Item).SharedReferenceCount.ReferenceController = pTVar14;
        pTVar14 = (TReferenceControllerBase<1> *)0x0;
        pTVar11->NextNode = (TNode *)0x0;
        (pTVar11->Item).Object = (FDataMessage *)pFVar13;
        pTVar1 = (this->DataPipe).Head;
        (this->DataPipe).Head = pTVar11;
        pTVar1->NextNode = pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      (**(code **)(this->ThreadTrigger->_padding_ + 0x10))();
      local_res18 = 0;
      local_190 = 0;
      if (*(int *)(pFVar26 + 0x18) < 1) {
LAB_14325ef68:
        local_1b8.DataSize = lVar28 - (ulonglong)local_1b8.HeaderSize;
        pFVar12 = ::operator_new(0x28);
        pFVar13 = (FArchiveState *)0x0;
        if (pFVar12 == (FDataMessage *)0x0) {
          pFVar12 = (FDataMessage *)0x0;
        }
        else {
          (pFVar12->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar12->Filename).Data.ArrayNum = 0;
          (pFVar12->Filename).Data.ArrayMax = 0;
          pFVar12->DataInfo = 0;
          piVar18 = &(pFVar12->Memory).ArrayMax;
          (pFVar12->Memory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *piVar18 = 0;
          (pFVar12->Memory).ArrayNum = 0;
          if ((pFVar12->Memory).ArrayMax != 0x200000) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,0x200000,&(pFVar12->Memory).AllocatorInstance,0,piVar18);
          }
        }
        pFVar19 = ::operator_new(0xa8);
        pFVar10 = pFVar13;
        if (pFVar19 != (FArchiveState *)0x0) {
          local_128 = (uchar *)0x0;
          pFVar19->_padding_ = 0;
          pFVar19->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
          (pFVar19->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
          (pFVar19->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
          (pFVar19->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
          *(undefined8 *)&pFVar19->field_0x28 = 0;
          pFVar19->ArSerializingDefaults = 0;
          pFVar19->ArPortFlags = 0;
          pFVar19->ArMaxSerializeSize = 0;
          (pFVar19->ArUEVer).FileVersionUE4 = 0;
          (pFVar19->ArUEVer).FileVersionUE5 = 0;
          pFVar19->ArLicenseeUEVer = 0;
          (pFVar19->ArEngineVer).Major = 0;
          (pFVar19->ArEngineVer).Minor = 0;
          (pFVar19->ArEngineVer).Patch = 0;
          *(undefined2 *)&(pFVar19->ArEngineVer).field_0x6 = 0;
          (pFVar19->ArEngineVer).Changelist = 0;
          pFVar19->CustomVersionContainer = (FCustomVersionContainer *)0x0;
          pFVar19->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
          pFVar19->SavePackageData = (FArchiveSavePackageData *)0x0;
          pFVar19->SerializedProperty = (FProperty *)0x0;
          pFVar19->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
          *(undefined8 *)&pFVar19->bCustomVersionsAreReset = 0;
          pFVar19->NextProxy = (FArchiveState *)0x0;
          FArchiveState::FArchiveState(pFVar19);
          pFVar19[1]._padding_ = 0;
          pFVar19->_padding_ =
               (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
          pFVar19[1].ActiveFPLB = (FFastPathLoadBuffer *)&pFVar12->Memory;
          pFVar19[1].InlineFPLB.StartFastPathLoadBuffer = local_128;
          FArchiveState::SetIsSaving(pFVar19,true);
          (**(code **)(pFVar19->_padding_ + 0x108))(pFVar19,0);
          pFVar19->_padding_ = (longlong)&___7FMemoryWriter__6B_;
          pFVar10 = pFVar19;
        }
        pFVar19 = pFVar22;
        if ((pFVar22 != pFVar10) && (pFVar19 = pFVar10, pFVar22 != (FArchiveState *)0x0)) {
          (**(code **)pFVar22->_padding_)(pFVar22,1);
        }
        BuildPatchServices::operator<<((FArchive *)pFVar19,&local_1b8);
        pFVar10 = ::operator_new(0x18);
        pFVar22 = pFVar13;
        if (pFVar10 != (FArchiveState *)0x0) {
          *(undefined4 *)&pFVar10->ActiveFPLB = 1;
          *(undefined4 *)((longlong)&pFVar10->ActiveFPLB + 4) = 1;
          pFVar10->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDataMessage_BuildPatchServices__U__DefaultDeleter_UFDataMessage_BuildPatchServices___SharedPointerInternals___00_SharedPointerInternals__6B_
          ;
          (pFVar10->InlineFPLB).StartFastPathLoadBuffer = (uchar *)pFVar12;
          pFVar22 = pFVar10;
        }
        pTVar11 = ::operator_new(0x18);
        if (pTVar11 != (TNode *)0x0) {
          (pTVar11->Item).SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar22;
          pTVar11->NextNode = (TNode *)0x0;
          (pTVar11->Item).Object = pFVar12;
          pTVar1 = (this->DataPipe).Head;
          (this->DataPipe).Head = pTVar11;
          pTVar1->NextNode = pTVar11;
          pFVar22 = pFVar13;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar22);
        (**(code **)(this->ThreadTrigger->_padding_ + 0x10))();
        pFVar22 = pFVar19;
      }
      else {
        local_188 = 0;
        local_138 = 0;
        do {
          lVar27 = local_138;
          uVar9 = local_res18;
          if (cVar7 == '\0') goto LAB_14325f115;
          if ((this->bShouldCancel != (FThreadSafeBool)0x0) ||
             (cVar5 = (**(code **)((longlong)*this->InstallerError + 8))(), pFVar4 = local_130,
             cVar5 != '\0')) goto LAB_14325ef68;
          uVar25 = ~uVar9 >> 0x1f;
          uVar8 = 0;
          if ((int)uVar9 < *(int *)(local_130 + 0x18)) {
            uVar8 = uVar25;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this_00 = (FGuid *)(*(longlong *)&pFVar4[0x10].field_0x0 + lVar27);
          local_140 = this_00;
          lVar28 = (**(code **)((longlong)*this->ChunkSource + 8))(this->ChunkSource,this_00);
          if (lVar28 == 0) {
            cVar7 = '\0';
            lVar27 = local_188;
LAB_14325ee76:
            if (1 < (byte)LogChunkDatabaseWriter._0_1_) {
              local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_160.Data.ArrayNum = 0;
              local_160.Data.ArrayMax = 0;
              FGuid::AppendString(this_00,&local_160,Digits);
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogChunkDatabaseWriter);
              if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_160.Data.AllocatorInstance.Data);
              }
            }
            pIVar2 = this->InstallerError;
            pcVar3 = *(code **)((longlong)*pIVar2 + 0x38);
            pFVar16 = FText::GetEmpty();
            local_b8 = (pFVar16->TextData).Reference;
            if (local_b8 != (ITextData *)0x0) {
              (**(code **)((longlong)*local_b8 + 8))(local_b8,local_f0);
            }
            local_b0 = pFVar16->Flags;
            (*pcVar3)(pIVar2,2,ConstructionErrorCodes::UnknownFail,0,&local_b8);
            lVar28 = local_198;
          }
          else {
            pFVar12 = ::operator_new(0x28);
            if (pFVar12 == (FDataMessage *)0x0) {
              pFVar12 = (FDataMessage *)0x0;
            }
            else {
              pFVar15 = FDataMessage::FDataMessage(pFVar12,local_198);
              pFVar12 = (FDataMessage *)0x0;
              if (pFVar15 != (FDataMessage *)0x0) {
                pFVar12 = pFVar15;
              }
            }
            pFVar13 = (FArchiveState *)0x0;
            pFVar10 = ::operator_new(0xa8);
            if (pFVar10 != (FArchiveState *)0x0) {
              local_148 = (uchar *)0x0;
              pFVar10->_padding_ = 0;
              pFVar10->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
              (pFVar10->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
              (pFVar10->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
              (pFVar10->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
              *(undefined8 *)&pFVar10->field_0x28 = 0;
              pFVar10->ArSerializingDefaults = 0;
              pFVar10->ArPortFlags = 0;
              pFVar10->ArMaxSerializeSize = 0;
              (pFVar10->ArUEVer).FileVersionUE4 = 0;
              (pFVar10->ArUEVer).FileVersionUE5 = 0;
              pFVar10->ArLicenseeUEVer = 0;
              (pFVar10->ArEngineVer).Major = 0;
              (pFVar10->ArEngineVer).Minor = 0;
              (pFVar10->ArEngineVer).Patch = 0;
              *(undefined2 *)&(pFVar10->ArEngineVer).field_0x6 = 0;
              (pFVar10->ArEngineVer).Changelist = 0;
              pFVar10->CustomVersionContainer = (FCustomVersionContainer *)0x0;
              pFVar10->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
              pFVar10->SavePackageData = (FArchiveSavePackageData *)0x0;
              pFVar10->SerializedProperty = (FProperty *)0x0;
              pFVar10->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
              *(undefined8 *)&pFVar10->bCustomVersionsAreReset = 0;
              pFVar10->NextProxy = (FArchiveState *)0x0;
              FArchiveState::FArchiveState(pFVar10);
              pFVar10[1]._padding_ = 0;
              pFVar10->_padding_ =
                   (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
              pFVar10[1].ActiveFPLB = (FFastPathLoadBuffer *)&pFVar12->Memory;
              pFVar10[1].InlineFPLB.StartFastPathLoadBuffer = local_148;
              FArchiveState::SetIsSaving(pFVar10,true);
              (**(code **)(pFVar10->_padding_ + 0x108))(pFVar10,0);
              pFVar10->_padding_ = (longlong)&___7FMemoryWriter__6B_;
              pFVar13 = pFVar10;
            }
            pFVar10 = pFVar22;
            if ((pFVar22 != pFVar13) && (pFVar10 = pFVar13, pFVar22 != (FArchiveState *)0x0)) {
              (**(code **)pFVar22->_padding_)(pFVar22,1);
            }
            cVar7 = (**(code **)((longlong)*this->ChunkDataSerialization + 0x30))
                              (this->ChunkDataSerialization,pFVar10);
            if (cVar7 != '\0') {
              pwVar21 = ConstructionErrorCodes::FileCreateFail;
              if ((cVar7 != '\x01') &&
                 (pwVar21 = ConstructionErrorCodes::UnknownFail, cVar7 == '\x03')) {
                pwVar21 = ConstructionErrorCodes::SerializationError;
              }
              pIVar2 = this->InstallerError;
              pcVar3 = *(code **)((longlong)*pIVar2 + 0x38);
              pFVar16 = FText::GetEmpty();
              local_d8 = (pFVar16->TextData).Reference;
              if (local_d8 != (ITextData *)0x0) {
                (**(code **)((longlong)*local_d8 + 8))(local_d8,local_f8);
              }
              local_d0 = pFVar16->Flags;
              (*pcVar3)(pIVar2,2,pwVar21,0,&local_d8);
            }
            uVar9 = 0;
            if ((int)local_res18 < local_1b8.Contents.ArrayNum) {
              uVar9 = uVar25;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar27 = local_188;
            *(longlong *)(local_1b8.Contents.AllocatorInstance.Data + local_188 + 0x10) = local_198;
            uVar9 = (pFVar12->Memory).ArrayNum;
            *(uint *)(local_1b8.Contents.AllocatorInstance.Data + local_188 + 0x18) = uVar9;
            lVar28 = local_198 + (ulonglong)uVar9;
            local_198 = lVar28;
            pTVar17 = ::operator_new(0x18);
            pTVar14 = (TReferenceControllerBase<1> *)0x0;
            if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
              pTVar17[1]._padding_ = (longlong)pFVar12;
              pTVar17->SharedReferenceCount = (atomic<int>)0x1;
              pTVar17->WeakReferenceCount = (atomic<int>)0x1;
              pTVar17->_padding_ =
                   (longlong)
                   &
                   ___7__TReferenceControllerWithDeleter_UFDataMessage_BuildPatchServices__U__DefaultDeleter_UFDataMessage_BuildPatchServices___SharedPointerInternals___00_SharedPointerInternals__6B_
              ;
              pTVar14 = pTVar17;
            }
            pTVar11 = ::operator_new(0x18);
            if (pTVar11 != (TNode *)0x0) {
              (pTVar11->Item).SharedReferenceCount.ReferenceController = pTVar14;
              pTVar11->NextNode = (TNode *)0x0;
              (pTVar11->Item).Object = pFVar12;
              pTVar1 = (this->DataPipe).Head;
              (this->DataPipe).Head = pTVar11;
              pTVar1->NextNode = pTVar11;
              pTVar14 = (TReferenceControllerBase<1> *)0x0;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar14);
            (**(code **)(this->ThreadTrigger->_padding_ + 0x10))();
            cVar7 = (**(code **)((longlong)*this->ChunkReferenceTracker + 0x30))
                              (this->ChunkReferenceTracker,local_140);
            pFVar22 = pFVar10;
            if (cVar7 == '\0') {
              pIVar2 = this->InstallerError;
              pcVar3 = *(code **)((longlong)*pIVar2 + 0x38);
              pFVar16 = FText::GetEmpty();
              local_c8 = (pFVar16->TextData).Reference;
              if (local_c8 != (ITextData *)0x0) {
                (**(code **)((longlong)*local_c8 + 8))(local_c8,local_f4);
              }
              local_c0 = pFVar16->Flags;
              (*pcVar3)(pIVar2,9,InitializationErrorCodes::ChunkReferenceTracking,0,&local_c8);
              this_00 = local_140;
              goto LAB_14325ee76;
            }
          }
          local_188 = lVar27 + 0x20;
          local_res18 = local_res18 + 1;
          local_190 = local_190 + 1;
          local_138 = local_138 + 0x10;
          pFVar26 = local_130;
        } while ((int)local_res18 < *(int *)(local_130 + 0x18));
        if (cVar7 != '\0') goto LAB_14325ef68;
      }
LAB_14325f115:
      pFVar12 = ::operator_new(0x28);
      if (pFVar12 == (FDataMessage *)0x0) {
        pFVar12 = (FDataMessage *)0x0;
      }
      else {
        local_170.Data.ArrayNum = *(int *)(pFVar26 + 8);
        lVar28 = (longlong)local_170.Data.ArrayNum;
        local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        _Src = *(void **)&pFVar26->field_0x0;
        if (local_170.Data.ArrayNum == 0) {
          local_170.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_170.Data.ArrayNum,0,(ForAnyElementType *)&local_170,
                     local_170.Data.ArrayNum,&local_170.Data.ArrayMax);
          memcpy(local_170.Data.AllocatorInstance.Data,_Src,lVar28 * 2);
        }
        ::FString::FString(&pFVar12->Filename,&local_170);
        iVar23 = (pFVar12->Filename).Data.ArrayNum;
        pFVar12->DataInfo = -2;
        (pFVar12->Memory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar12->Memory).ArrayNum = 0;
        (pFVar12->Memory).ArrayMax = 0;
        if ((iVar23 < 2) && (1 < (byte)LogChunkDatabaseWriter._0_1_)) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)
                     &`public:___cdecl_BuildPatchServices::FDataMessage::FDataMessage(FString,__int64)___ptr64'
                      ::__l6::LOG_Static,(FLogCategoryBase *)&LogChunkDatabaseWriter);
        }
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
      }
      local_e0.Object = pFVar12;
      TSharedPtr<BuildPatchServices::FDataMessage,1>::
      TSharedPtr<BuildPatchServices::FDataMessage,1><BuildPatchServices::FDataMessage>
                (&local_108,&local_e0);
      pTVar11 = ::operator_new(0x18);
      if (pTVar11 != (TNode *)0x0) {
        (pTVar11->Item).Object = local_108.Object;
        (pTVar11->Item).SharedReferenceCount.ReferenceController =
             local_108.SharedReferenceCount.ReferenceController;
        pTVar11->NextNode = (TNode *)0x0;
        pTVar1 = (this->DataPipe).Head;
        (this->DataPipe).Head = pTVar11;
        local_108.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_108.Object = (FDataMessage *)0x0;
        pTVar1->NextNode = pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.SharedReferenceCount.ReferenceController);
      (**(code **)(this->ThreadTrigger->_padding_ + 0x10))();
      if (pFVar22 != (FArchiveState *)0x0) {
        (**(code **)pFVar22->_padding_)(pFVar22,1);
      }
      if (local_1b8.Contents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Contents.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      local_res20 = local_res20 + 1;
      local_120 = local_120 + 1;
    } while ((int)local_res20 < (this->ChunkDatabaseList).ArrayNum);
  }
  LOCK();
  this->bProcessingComplete = (FThreadSafeBool)0x1;
  UNLOCK();
  (**(code **)(this->ThreadTrigger->_padding_ + 0x10))();
  if (4 < (byte)LogChunkDatabaseWriter._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChunkDatabaseWriter);
  }
  return;
}

