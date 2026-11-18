// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 15

// StaticClass @ 1442a0f10

UClass * __cdecl UReplicationDataStream::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplicationDataStream.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ReplicationDataStream",
               &Z_Registration_Info_UClass_UReplicationDataStream.InnerSingleton,
               StaticRegisterNativesUReplicationDataStream,0x60,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UReplicationDataStream>,
               InternalVTableHelperCtorCaller<UReplicationDataStream>,local_res8,
               UDataStream::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplicationDataStream.InnerSingleton;
}

// UReplicationDataStream @ 1442af4f0

UReplicationDataStream * __thiscall
UReplicationDataStream::UReplicationDataStream(UReplicationDataStream *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UDataStream::UDataStream((UDataStream *)this,pFVar1);
  this->_padding_ = (longlong)&___7UReplicationDataStream__6B_;
  this->ReplicationReader = (FReplicationReader *)0x0;
  this->ReplicationWriter = (FReplicationWriter *)0x0;
  return this;
}

// UReplicationDataStream @ 1442af530

UReplicationDataStream * __thiscall
UReplicationDataStream::UReplicationDataStream(UReplicationDataStream *this,FVTableHelper *param_1)

{
  UDataStream::UDataStream((UDataStream *)this,param_1);
  this->_padding_ = (longlong)&___7UReplicationDataStream__6B_;
  return this;
}

// ~UReplicationDataStream @ 1442b0e90

void __thiscall UReplicationDataStream::~UReplicationDataStream(UReplicationDataStream *this)

{
  this->_padding_ = (longlong)&___7UReplicationDataStream__6B_;
  UDataStream::~UDataStream((UDataStream *)this);
  return;
}

// BeginWrite @ 1442b6590

EWriteResult __thiscall
UReplicationDataStream::BeginWrite(UReplicationDataStream *this,FBeginWriteParameters *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  EDataStreamWriteMode EVar3;
  uint uVar4;
  int iVar5;
  FReplicationWriter *pFVar6;
  FNetRefHandleManager *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  EWriteResult EVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  byte bVar16;
  bool bVar17;
  uint auStackX_8 [2];
  FScheduleObjectInfo *apFStackX_18 [2];
  <lambda_1> <Stack_58;
  
  pFVar6 = this->ReplicationWriter;
  if (pFVar6 == (FReplicationWriter *)0x0) {
    return NoData;
  }
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3725,"FReplicationWriter_PrepareWrite",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
               ,0xe8d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3725);
  }
  if (((pFVar6->WriteContext).bIsValid != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!WriteContext.bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                         ,0xe90,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    EVar11 = (*pcVar8)();
    return EVar11;
  }
  uVar14 = 0;
  EVar11 = NoData;
  if ((pFVar6->bReplicationEnabled != false) &&
     ((pFVar6->ReplicationRecord).RecordInfos.Tail - (pFVar6->ReplicationRecord).RecordInfos.Head !=
      -0xffff)) {
    (pFVar6->WriteContext).bHasDestroyedObjectsToSend = 0;
    (pFVar6->WriteContext).bHasOOBAttachmentsToSend = 0;
    (pFVar6->WriteContext).bHasHugeObjectToSend = 0;
    (pFVar6->WriteContext).bHasUpdatedObjectsToSend = 0;
    (pFVar6->WriteContext).ScheduledObjectCount = 0;
    EVar3 = param_1->WriteMode;
    (pFVar6->WriteContext).WriteMode = EVar3;
    if (EVar3 == PostTickDispatch) {
      bVar9 = UE::Net::Private::FNetObjectAttachmentsWriter::HasUnsentUnreliableAttachments
                        (&pFVar6->Attachments,OutOfBand,0);
      if (!bVar9) goto LAB_1442fbb58;
      (pFVar6->WriteContext).bHasOOBAttachmentsToSend = 0;
      puVar1 = &(pFVar6->WriteContext).field_0xd4;
      *(uint *)puVar1 = *(uint *)puVar1 | (uint)bVar9 << 4;
    }
    else {
      uVar4 = (pFVar6->ObjectsWithDirtyChanges).Storage.ArrayNum;
      pFVar12 = (pFVar6->ObjectsWithDirtyChanges).Storage.AllocatorInstance.Data;
      uVar13 = uVar14;
      if (uVar4 != 0) {
        do {
          if (*(int *)pFVar12 != 0) {
            bVar16 = 1;
            goto LAB_1442fb8c5;
          }
          uVar13 = uVar13 + 1;
          pFVar12 = pFVar12 + 4;
        } while (uVar13 < uVar4);
      }
      bVar16 = 0;
LAB_1442fb8c5:
      uVar4 = (pFVar6->ObjectsPendingDestroy).Storage.ArrayNum;
      pFVar12 = (pFVar6->ObjectsPendingDestroy).Storage.AllocatorInstance.Data;
      if (uVar4 != 0) {
        do {
          if (*(int *)pFVar12 != 0) {
            bVar15 = 1;
            goto LAB_1442fb8ed;
          }
          uVar14 = uVar14 + 1;
          pFVar12 = pFVar12 + 4;
        } while (uVar14 < uVar4);
      }
      bVar15 = 0;
LAB_1442fb8ed:
      bVar9 = UE::Net::Private::FNetObjectAttachmentsWriter::HasUnsentAttachments
                        (&pFVar6->Attachments,OutOfBand,0);
      bVar10 = UE::Net::Private::FNetObjectAttachmentsWriter::HasUnsentAttachments
                         (&pFVar6->Attachments,HugeObject,0);
      if (((!bVar10 && !bVar9) && bVar15 == 0) && bVar16 == 0) goto LAB_1442fbb58;
      (pFVar6->WriteContext).bHasDestroyedObjectsToSend = 0;
      (pFVar6->WriteContext).bHasHugeObjectToSend = 0;
      (pFVar6->WriteContext).bHasUpdatedObjectsToSend = 0;
      pFVar7 = pFVar6->NetRefHandleManager;
      *(uint *)&(pFVar6->WriteContext).field_0xd4 =
           (((uint)((bVar10 || bVar9) | bVar16) | (uint)bVar9 << 2) * 2 | (uint)bVar15) * 2 |
           (uint)bVar10 << 3 | *(uint *)&(pFVar6->WriteContext).field_0xd4 & 0xffffffef;
      apFStackX_18[0] = FMemory::Malloc((ulonglong)pFVar7->CurrentMaxInternalNetRefIndex << 3,0);
      (pFVar6->WriteContext).ScheduledObjectInfos = apFStackX_18[0];
      bVar9 = -1 < CpuChannel->Enabled;
      if (bVar9) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1144,"FReplicationWriter_ScheduleObjects",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                   ,0x478);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1144);
      }
      pFVar12 = (pFVar6->ObjectsWithDirtyChanges).Storage.AllocatorInstance.Data;
      auStackX_8[0] = 0;
      if (((pFVar6->ObjectsWithDirtyChanges).BitCount == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < BitCount",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                              ,0x2b7,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        EVar11 = (*pcVar8)();
        return EVar11;
      }
      *(uint *)pFVar12 = *(uint *)pFVar12 & 0xfffffffe;
      <Stack_58.ScheduledObjectIndices = apFStackX_18;
      pFVar7 = pFVar6->NetRefHandleManager;
      <Stack_58.ScheduledObjectCount = auStackX_8;
      <Stack_58.__this = pFVar6;
      if (((pFVar6->ObjectsWithDirtyChanges).BitCount != (pFVar7->SubObjectInternalIndices).BitCount
          ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("A.GetNumBits() == B.GetNumBits()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                    ,0x555,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        EVar11 = (*pcVar8)();
        return EVar11;
      }
      UE::Net::FNetBitArrayHelper::
      ForAllSetBits<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int),_UE::Net::Private::FReplicationWriter::ScheduleObjects_::__l2::<lambda_1>_&>
                ((uint *)(pFVar6->ObjectsWithDirtyChanges).Storage.AllocatorInstance.Data,
                 (uint *)(pFVar7->SubObjectInternalIndices).Storage.AllocatorInstance.Data,
                 (pFVar6->ObjectsWithDirtyChanges).Storage.ArrayNum,
                 (pFVar6->ObjectsWithDirtyChanges).BitCount,UE::Net::FNetBitArrayBase::AndNotOp,
                 &<Stack_58);
      uVar14 = auStackX_8[0];
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      (pFVar6->WriteContext).ScheduledObjectCount = uVar14;
    }
    piVar2 = &(pFVar6->WriteContext).DependentObjectsPendingSend.ArrayMax;
    iVar5 = *piVar2;
    (pFVar6->WriteContext).DependentObjectsPendingSend.ArrayNum = 0;
    if (iVar5 < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,0,&(pFVar6->WriteContext).DependentObjectsPendingSend.AllocatorInstance,0,
                 piVar2);
    }
    (pFVar6->WriteContext).SortedObjectCount = 0;
    (pFVar6->WriteContext).CurrentIndex = 0;
    (pFVar6->WriteContext).FailedToWriteSmallObjectCount = 0;
    (pFVar6->WriteContext).WrittenDestroyObjectCount = 0;
    (pFVar6->WriteContext).NumWrittenPacketsInThisBatch = 0;
    uVar14 = param_1->MaxPackets;
    (pFVar6->WriteContext).bIsInReplicationRecordStarvation = 0;
    (pFVar6->WriteContext).bIsOOBPacket = 0;
    (pFVar6->WriteContext).MaxPacketsToSend = uVar14;
    UE::Net::Private::FNetSendStats::Reset(&(pFVar6->WriteContext).Stats);
    (pFVar6->WriteContext).bIsValid = 1;
    (pFVar6->WriteContext).Stats.Stats.ScheduledForReplicationRootObjectCount =
         (pFVar6->WriteContext).ScheduledObjectCount;
    EVar11 = HasMoreData;
  }
LAB_1442fbb58:
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar11;
}

// Deinit @ 1442bb490

void __thiscall UReplicationDataStream::Deinit(UReplicationDataStream *this)

{
  UDataStream::Deinit((UDataStream *)this);
  this->ReplicationWriter = (FReplicationWriter *)0x0;
  this->ReplicationReader = (FReplicationReader *)0x0;
  return;
}

// EndWrite @ 1442bfa80

void __thiscall UReplicationDataStream::EndWrite(UReplicationDataStream *this)

{
  int *piVar1;
  FReplicationStats *pFVar2;
  ulong64 *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  FReplicationWriter *pFVar9;
  FReplicationSystemImpl *pFVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  double dVar14;
  LARGE_INTEGER LStackX_8;
  
  pFVar9 = this->ReplicationWriter;
  if (pFVar9 == (FReplicationWriter *)0x0) {
    return;
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3813,"FReplicationWriter_FinishWrite",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
               ,0xee5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3813);
  }
  if ((pFVar9->WriteContext).bIsValid != 0) {
    iVar6 = *(int *)&(pFVar9->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x34;
    iVar7 = *(int *)&(pFVar9->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x8;
    if (iVar7 != iVar6) {
      (pFVar9->WriteContext).Stats.Stats.ActiveHugeObjectCount = iVar7 - iVar6;
      if ((pFVar9->HugeObjectSendQueue).Stats.EndSendingTime != 0) {
        QueryPerformanceCounter(&LStackX_8);
        dVar14 = (double)(LStackX_8.QuadPart - (pFVar9->HugeObjectSendQueue).Stats.EndSendingTime) *
                 FGenericPlatformTime::SecondsPerCycle64;
        piVar1 = &(pFVar9->WriteContext).Stats.Stats.HugeObjectsWaitingForAckCount;
        *piVar1 = *piVar1 + 1;
        (pFVar9->WriteContext).Stats.Stats.HugeObjectWaitingForAckTimeInSeconds =
             dVar14 + (pFVar9->WriteContext).Stats.Stats.HugeObjectWaitingForAckTimeInSeconds;
      }
      if ((pFVar9->HugeObjectSendQueue).Stats.StartStallTime != 0) {
        QueryPerformanceCounter(&LStackX_8);
        dVar14 = (double)(LStackX_8.QuadPart - (pFVar9->HugeObjectSendQueue).Stats.StartStallTime) *
                 FGenericPlatformTime::SecondsPerCycle64;
        piVar1 = &(pFVar9->WriteContext).Stats.Stats.HugeObjectsStallingCount;
        *piVar1 = *piVar1 + 1;
        (pFVar9->WriteContext).Stats.Stats.HugeObjectStallingTimeInSeconds =
             dVar14 + (pFVar9->WriteContext).Stats.Stats.HugeObjectStallingTimeInSeconds;
      }
    }
    UE::Net::Private::FNetSendStats::Accumulate
              (&(((((pFVar9->Parameters).ReplicationSystem)->Impl).Ptr)->ReplicationSystemInternal).
                SendStats,&(pFVar9->WriteContext).Stats);
    uVar11 = (pFVar9->WriteContext).ScheduledObjectCount - (pFVar9->WriteContext).CurrentIndex;
    uVar12 = (pFVar9->WriteContext).DependentObjectsPendingSend.ArrayNum;
    pFVar10 = (((pFVar9->Parameters).ReplicationSystem)->Impl).Ptr;
    pFVar2 = &(pFVar10->ReplicationSystemInternal).TickReplicationStats;
    pFVar2->PendingObjectCount = pFVar2->PendingObjectCount + (ulonglong)uVar11;
    puVar3 = &(pFVar10->ReplicationSystemInternal).TickReplicationStats.PendingDependentObjectCount;
    *puVar3 = *puVar3 + (ulonglong)uVar12;
    puVar3 = &(pFVar10->ReplicationSystemInternal).TickReplicationStats.HugeObjectSendQueue;
    *puVar3 = *puVar3 + (ulonglong)
                        (uint)(*(int *)&(pFVar9->HugeObjectSendQueue).RootObjectsInTransit.Elements.
                                        field_0x8 -
                              *(int *)&(pFVar9->HugeObjectSendQueue).RootObjectsInTransit.Elements.
                                       field_0x34);
    uVar8 = (pFVar10->ReplicationSystemInternal).TickReplicationStats.MaxPendingObjectCount;
    if (uVar11 < uVar8) {
      uVar11 = uVar8;
    }
    uVar8 = (pFVar10->ReplicationSystemInternal).TickReplicationStats.MaxPendingDependentObjectCount
    ;
    (pFVar10->ReplicationSystemInternal).TickReplicationStats.MaxPendingObjectCount = uVar11;
    if (uVar12 < uVar8) {
      uVar12 = uVar8;
    }
    uVar8 = (pFVar10->ReplicationSystemInternal).TickReplicationStats.MaxHugeObjectSendQueue;
    (pFVar10->ReplicationSystemInternal).TickReplicationStats.MaxPendingDependentObjectCount =
         uVar12;
    uVar12 = *(int *)&(pFVar9->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x8 -
             *(int *)&(pFVar9->HugeObjectSendQueue).RootObjectsInTransit.Elements.field_0x34;
    if (uVar12 < uVar8) {
      uVar12 = uVar8;
    }
    puVar4 = &(pFVar10->ReplicationSystemInternal).TickReplicationStats.SampleCount;
    *puVar4 = *puVar4 + 1;
    (pFVar10->ReplicationSystemInternal).TickReplicationStats.MaxHugeObjectSendQueue = uVar12;
    FMemory::Free((pFVar9->WriteContext).ScheduledObjectInfos);
    (pFVar9->WriteContext).bIsValid = 0;
    (pFVar9->WriteContext).ScheduledObjectInfos = (FScheduleObjectInfo *)0x0;
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// GetPrivateStaticClass @ 1442c37b0

UClass * __cdecl UReplicationDataStream::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplicationDataStream.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"ReplicationDataStream",
               &Z_Registration_Info_UClass_UReplicationDataStream.InnerSingleton,
               StaticRegisterNativesUReplicationDataStream,0x60,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UReplicationDataStream>,
               InternalVTableHelperCtorCaller<UReplicationDataStream>,local_res8,
               UDataStream::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplicationDataStream.InnerSingleton;
}

// HasAcknowledgedAllReliableData @ 1442c42b0

bool __thiscall UReplicationDataStream::HasAcknowledgedAllReliableData(UReplicationDataStream *this)

{
  FReplicationWriter *pFVar1;
  bool bVar2;
  
  pFVar1 = this->ReplicationWriter;
  if (pFVar1 == (FReplicationWriter *)0x0) {
    return true;
  }
  bVar2 = UE::Net::Private::FNetBlobManager::HasAnyUnprocessedReliableAttachments
                    (&pFVar1->ReplicationSystemInternal->NetBlobManager);
  if (!bVar2) {
    bVar2 = UE::Net::Private::FNetObjectAttachmentsWriter::AreAllObjectsReliableSentAndAcked
                      (&pFVar1->Attachments);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// Init @ 1442c4970

void __thiscall UReplicationDataStream::Init(UReplicationDataStream *this,FInitParameters *param_1)

{
  FReplicationWriter *this_00;
  code *pcVar1;
  bool bVar2;
  UReplicationSystem *this_01;
  FReplicationSystemInternal *pFVar3;
  FReplicationConnection *pFVar4;
  
  UDataStream::Init((UDataStream *)this,param_1);
  this_01 = UE::Net::GetReplicationSystem(param_1->ReplicationSystemId);
  if (this_01 == (UReplicationSystem *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2104983894339092451>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationDataStream.cpp"
                       ,0x1d,"ReplicationSystem");
    if (!bVar2) {
      return;
    }
code_r0x0001442c4a68:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = UReplicationSystem::GetReplicationSystemInternal(this_01);
  if (pFVar3 != (FReplicationSystemInternal *)0x0) {
    pFVar4 = UE::Net::Private::FReplicationConnections::GetConnection
                       (&pFVar3->Connections,param_1->ConnectionId);
    if (pFVar4 == (FReplicationConnection *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2104983894339092444>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationDataStream.cpp"
                         ,0x24,"Connection");
      if (!bVar2) {
        return;
      }
      goto code_r0x0001442c4a68;
    }
    this_00 = pFVar4->ReplicationWriter;
    this->ReplicationWriter = this_00;
    this->ReplicationReader = pFVar4->ReplicationReader;
    if (param_1->NetExports == (FNetExports *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2104983894339092439>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationDataStream.cpp"
                         ,0x29,"Params.NetExports");
      if (bVar2) goto code_r0x0001442c4a68;
    }
    else {
      UE::Net::Private::FReplicationWriter::SetNetExports(this_00,param_1->NetExports);
    }
  }
  return;
}

// ProcessPacketDeliveryStatus @ 1442d5310

void __thiscall
UReplicationDataStream::ProcessPacketDeliveryStatus
          (UReplicationDataStream *this,EPacketDeliveryStatus param_1,FDataStreamRecord *param_2)

{
  FReplicationRecord *this_00;
  FReplicationWriter *pFVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  <lambda_1> a<StackX_8 [2];
  <lambda_2> <StackX_18;
  <lambda_3> <StackX_20;
  TReplicationRecordHelper TStack_38;
  
  pFVar1 = this->ReplicationWriter;
  if (pFVar1 == (FReplicationWriter *)0x0) {
    return;
  }
  this_00 = &pFVar1->ReplicationRecord;
  bVar3 = UE::Net::Private::s_ValidateReplicationRecord
                    (this_00,pFVar1->NetRefHandleManager->MaxActiveObjectCount + 1,true);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("s_ValidateReplicationRecord(&ReplicationRecord, NetRefHandleManager->GetMaxActiveObjectCount() + 1U, true)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                       ,0x704,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = UE::Net::Private::FReplicationRecord::PopRecord(this_00);
  if (uVar4 != 0) {
    TStack_38.ReplicationInfos = &pFVar1->ReplicatedObjects;
    TStack_38.ReplicationInfosRecordInfoLists = &pFVar1->ReplicatedObjectsRecordInfoLists;
    uVar5 = (uint)uVar4;
    TStack_38.ReplicationRecord = this_00;
    if (param_1 == Delivered) {
      a<StackX_8[0].__this = pFVar1;
      UE::Net::Private::TReplicationRecordHelper::
      Process<_UE::Net::Private::FReplicationWriter::ProcessDeliveryNotification_::__l15::<lambda_1>_>
                (&TStack_38,uVar5,a<StackX_8);
      return;
    }
    if (param_1 == Lost) {
      <StackX_18.__this = pFVar1;
      UE::Net::Private::TReplicationRecordHelper::
      Process<_UE::Net::Private::FReplicationWriter::ProcessDeliveryNotification_::__l19::<lambda_2>_>
                (&TStack_38,uVar5,&<StackX_18);
      return;
    }
    if (param_1 == Discard) {
      <StackX_20.__this = pFVar1;
      UE::Net::Private::TReplicationRecordHelper::
      Process<_UE::Net::Private::FReplicationWriter::ProcessDeliveryNotification_::__l23::<lambda_3>_>
                (&TStack_38,uVar5,&<StackX_20);
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                       ,0x72a,L"Unknown packet delivery status %u");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// ReadData @ 1442d81b0

void __thiscall
UReplicationDataStream::ReadData(UReplicationDataStream *this,FNetSerializationContext *param_1)

{
  FNetBitStreamReader *this_00;
  FNetBitStreamReader *pFVar1;
  FReplicationReader *this_01;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  EReplicationDataStreamDebugFeatures EVar6;
  uint uVar7;
  FNetObjectAttachmentReceiveQueue *this_02;
  TRefCountPtr<UE::Net::FNetBlob> *pTVar8;
  ForElementType<FNetTracePacketContentEvent> FVar9;
  int *piVar10;
  FName FVar11;
  FNetTraceCollector *pFVar12;
  FMemMark FStack_c8;
  FInitParameters FStack_a0;
  FInternalNetSerializationContext FStack_78;
  FObjectsToDispatchArray FStack_40;
  
  this_01 = this->ReplicationReader;
  if (this_01 == (FReplicationReader *)0x0) {
    return;
  }
  FStack_a0.ReplicationSystem = (this_01->Parameters).ReplicationSystem;
  FStack_78.bSerializeObjectReferencesAsRemoteIds = 0;
  FStack_78.bInlineObjectReferenceExports = 0;
  FStack_78.bDowngradeAutonomousProxyRole = 0;
  this_00 = param_1->BitStreamReader;
  FStack_a0.ObjectResolveContext.bForceSyncLoad = (this_01->ResolveContext).bForceSyncLoad;
  FStack_a0.ObjectResolveContext._17_7_ = *(undefined7 *)&(this_01->ResolveContext).field_0x11;
  FStack_78.ReplicationSystem = (UReplicationSystem *)0x0;
  FStack_78.ObjectReferenceCache = (FObjectReferenceCache *)0x0;
  FStack_a0.ObjectResolveContext.RemoteNetTokenStoreState =
       (this_01->ResolveContext).RemoteNetTokenStoreState;
  FStack_a0.ObjectResolveContext.ConnectionId = (this_01->ResolveContext).ConnectionId;
  FStack_a0.ObjectResolveContext.AsyncLoadingPriority =
       (this_01->ResolveContext).AsyncLoadingPriority;
  FStack_78.ResolveContext.RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
  FStack_78.ResolveContext.ConnectionId = 0;
  FStack_78.ResolveContext.AsyncLoadingPriority = -1;
  FStack_78.ResolveContext.bForceSyncLoad = false;
  FStack_78.PackageMap = (UIrisObjectReferencePackageMap *)0x0;
  FStack_a0.PackageMap = this_01->ReplicationSystemInternal->IrisObjectReferencePackageMap;
  UE::Net::Private::FInternalNetSerializationContext::Init(&FStack_78,&FStack_a0);
  pFVar1 = param_1->BitStreamReader;
  uVar4 = 0xffffffff;
  param_1->LocalConnectionId = (this_01->Parameters).ConnectionId;
  param_1->InternalContext = &FStack_78;
  param_1->NetBlobReceiver = (INetBlobReceiver *)&this_01->ReplicationSystemInternal->NetBlobManager
  ;
  pFVar12 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar12 = param_1->TraceCollector;
  }
  if (pFVar12 != (FNetTraceCollector *)0x0) {
    uVar4 = FNetTrace::BeginPacketContentEvent(pFVar12,NameId,pFVar1->BufferBitPosition);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ReplicationData = UE::Net::CreatePersistentNetDebugName(L"ReplicationData",0xf);
      _Init_thread_footer(&::_TSS0);
    }
    uVar5 = FNetTrace::TraceName(ReplicationData);
    FVar9 = (pFVar12->Events).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar9 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
    }
    *(uint *)((longlong)FVar9 + (ulonglong)uVar4 * 0x10) = uVar5;
  }
  EVar6 = UE::Net::FNetBitStreamReader::ReadBits(param_1->BitStreamReader,2);
  this_01->StreamDebugFeatures = EVar6;
  if (((param_1->ErrorContext).Error == (FName)0x0) &&
     (bVar3 = UE::Net::FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar3)) {
    FStack_c8.Top = (this_01->TempLinearAllocator).Top;
    FStack_c8.SavedChunk = (this_01->TempLinearAllocator).TopChunk;
    FStack_c8.NextTopmostMark = (this_01->TempLinearAllocator).TopMark;
    FStack_c8.bPopped = false;
    (this_01->TempLinearAllocator).TopMark = &FStack_c8;
    piVar10 = &(this_01->TempLinearAllocator).NumMarks;
    *piVar10 = *piVar10 + 1;
    FStack_c8.Mem = &this_01->TempLinearAllocator;
    uVar7 = UE::Net::FNetBitStreamReader::ReadBits(this_00,0x10);
    uVar5 = this_00->OverflowBitCount;
    if ((uVar5 == 0) && (uVar7 < 0x2000)) {
      if (uVar7 != 0) {
        UE::Net::Private::FReplicationReader::FObjectsToDispatchArray::FObjectsToDispatchArray
                  (&FStack_40,uVar7 + 0x20,&this_01->TempLinearAllocator);
        this_01->ObjectsToDispatchArray = &FStack_40;
        uVar5 = UE::Net::Private::FReplicationReader::ReadRootObjectsPendingDestroy(this_01,param_1)
        ;
        if (((((param_1->ErrorContext).Error == (FName)0x0) &&
             (bVar3 = UE::Net::FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar3)) &&
            ((uVar7 - uVar5 != 0 || (this_01->ObjectsToDispatchArray->ObjectsToDispatchCount != 0)))
            ) && ((UE::Net::Private::FReplicationReader::ReadObjects
                             (this_01,param_1,uVar7 - uVar5,0),
                  (param_1->ErrorContext).Error == (FName)0x0 &&
                  (bVar3 = UE::Net::FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar3)
                  ))) {
          bVar3 = UE::Net::Private::FNetObjectAttachmentsReader::HasUnprocessedAttachments
                            (&this_01->Attachments,HugeObject,0);
          if (bVar3) {
            this_02 = UE::Net::Private::FNetObjectAttachmentsReader::GetQueue
                                (&this_01->Attachments,HugeObject,0);
            pTVar8 = UE::Net::Private::FNetObjectAttachmentReceiveQueue::PeekReliable(this_02);
            while (pTVar8 != (TRefCountPtr<UE::Net::FNetBlob> *)0x0) {
              UE::Net::Private::FReplicationReader::ProcessHugeObjectAttachment
                        (this_01,param_1,pTVar8);
              UE::Net::Private::FNetObjectAttachmentReceiveQueue::PopReliable(this_02);
              if ((param_1->ErrorContext).Error != (FName)0x0) goto LAB_1442d80f8;
              pTVar8 = UE::Net::Private::FNetObjectAttachmentReceiveQueue::PeekReliable(this_02);
            }
            pTVar8 = UE::Net::Private::FNetObjectAttachmentReceiveQueue::PeekUnreliable(this_02);
            while (pTVar8 != (TRefCountPtr<UE::Net::FNetBlob> *)0x0) {
              UE::Net::Private::FReplicationReader::ProcessHugeObjectAttachment
                        (this_01,param_1,pTVar8);
              UE::Net::Private::FNetObjectAttachmentReceiveQueue::PopUnreliable(this_02);
              if ((param_1->ErrorContext).Error != (FName)0x0) goto LAB_1442d80f8;
              pTVar8 = UE::Net::Private::FNetObjectAttachmentReceiveQueue::PeekUnreliable(this_02);
            }
          }
          if (((param_1->ErrorContext).Error == (FName)0x0) &&
             (bVar3 = UE::Net::FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar3)) {
            piVar10 = (int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x9d4c);
            if ((*piVar10 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              NetTraceNameId_3194 =
                   UE::Net::CreatePersistentNetDebugName
                             (L"ReplicationReader.ReadObjectBatchCount",0x26);
              _Init_thread_footer(&::_TSS0);
            }
            uVar5 = FNetTrace::TraceName(NetTraceNameId_3194);
            FNetTrace::TracePacketStatsCounter
                      (((this_01->Parameters).ReplicationSystem)->Id,
                       (this_01->Parameters).ConnectionId,uVar5,uVar7);
            if ((*piVar10 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
              NetTraceNameId_3195 =
                   UE::Net::CreatePersistentNetDebugName
                             (L"ReplicationReader.ReadObjectsAndSubObjectsToDispatchCount",0x39);
              _Init_thread_footer(&::_TSS1);
            }
            uVar5 = this_01->ObjectsToDispatchArray->ObjectsToDispatchCount;
            uVar7 = FNetTrace::TraceName(NetTraceNameId_3195);
            FNetTrace::TracePacketStatsCounter
                      (((this_01->Parameters).ReplicationSystem)->Id,
                       (this_01->Parameters).ConnectionId,uVar7,uVar5);
            UE::Net::Private::FReplicationReader::DispatchStateData(this_01,param_1);
            if (((param_1->ErrorContext).Error == (FName)0x0) &&
               (bVar3 = UE::Net::FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar3)) {
              UE::Net::Private::FReplicationReader::ResolveAndDispatchUnresolvedReferences(this_01);
              UE::Net::Private::FReplicationReader::DispatchEndReplication(this_01,param_1);
              this_01->ObjectsToDispatchArray = (FObjectsToDispatchArray *)0x0;
            }
          }
        }
      }
    }
    else {
      FVar11 = UE::Net::GNetError_BitStreamError;
      if (uVar5 != 0) {
        FVar11 = UE::Net::GNetError_BitStreamOverflow;
      }
      UE::Net::FNetSerializationContext::SetBitStreamOverflow(param_1);
      UE::Net::FNetErrorContext::SetError(&param_1->ErrorContext,FVar11);
    }
LAB_1442d80f8:
    if (FStack_c8.bPopped == false) {
      if (((FStack_c8.Mem)->TopMark != &FStack_c8) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mem.TopMark == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                             ,0x215,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FStack_c8.bPopped = true;
      (FStack_c8.Mem)->NumMarks = (FStack_c8.Mem)->NumMarks + -1;
      if (FStack_c8.SavedChunk != (FStack_c8.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(FStack_c8.Mem,FStack_c8.SavedChunk);
      }
      (FStack_c8.Mem)->Top = FStack_c8.Top;
      (FStack_c8.Mem)->TopMark = FStack_c8.NextTopmostMark;
      FStack_c8.Top = (uchar *)0x0;
    }
  }
  if (uVar4 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar12,uVar4,pFVar1->BufferBitPosition);
  }
  return;
}

// StaticRegisterNativesUReplicationDataStream @ 1442e6350

void __cdecl UReplicationDataStream::StaticRegisterNativesUReplicationDataStream(void)

{
  return;
}

// Update @ 1442e8400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UReplicationDataStream::Update(UReplicationDataStream *this,FUpdateParameters *param_1)

{
  FReplicationWriter *pFVar1;
  ulong64 uVar2;
  bool abStackX_10 [24];
  
  pFVar1 = this->ReplicationWriter;
  if (pFVar1 == (FReplicationWriter *)0x0) {
    return;
  }
  if (param_1->UpdateType == PostTickFlush) {
    abStackX_10[0] = false;
    if (UE::Net::Private::GMaxUnsentOrderedUnreliableAttachmentAtEndOfTick == 0) {
      UE::Net::Private::FNetObjectAttachmentsWriter::DropUnreliableAttachments
                (&pFVar1->Attachments,OutOfBand,0,abStackX_10);
      return;
    }
    if (0 < UE::Net::Private::GMaxUnsentOrderedUnreliableAttachmentAtEndOfTick) {
      uVar2 = UE::Net::Private::FNetObjectAttachmentsWriter::GetUnreliableAttachmentCount
                        (&pFVar1->Attachments,OutOfBand,0);
      if (((ulonglong)(longlong)UE::Net::Private::GMaxUnsentOrderedUnreliableAttachmentAtEndOfTick
           <= uVar2) &&
         (UE::Net::Private::FNetObjectAttachmentsWriter::DropUnreliableAttachments
                    (&pFVar1->Attachments,OutOfBand,0,abStackX_10), 2 < (byte)LogIris._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
    }
  }
  return;
}

// WriteData @ 1442eca50

/* WARNING: Enum "Type": Some values do not have unique names */

EWriteResult __thiscall
UReplicationDataStream::WriteData
          (UReplicationDataStream *this,FNetSerializationContext *param_1,
          FDataStreamRecord **param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  FReplicationWriter *this_00;
  UReplicationSystem *pUVar5;
  FNetBitStreamWriter *this_01;
  FNetTypeStats *pFVar6;
  FNetTraceCollector *this_02;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  EWriteResult EVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  FNetTraceCollector *pFVar19;
  ForElementType<FNetTracePacketContentEvent> FVar20;
  ulong64 uVar21;
  bool bVar22;
  uint uStackX_8;
  short sStack_88;
  FInternalNetSerializationContext FStack_70;
  
  this_00 = this->ReplicationWriter;
  if (this_00 == (FReplicationWriter *)0x0) {
    return NoData;
  }
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3899,"FReplicationWriter_Write",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
               ,0xf3b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3899);
  }
  puVar1 = &(this_00->WriteContext).field_0xd4;
  uVar3 = *(undefined4 *)puVar1;
  EVar11 = NoData;
  uVar16 = 0;
  if ((((this_00->WriteContext).bHasOOBAttachmentsToSend | ZPULL(uVar3,3,1) |
        (this_00->WriteContext).bHasUpdatedObjectsToSend |
       (this_00->WriteContext).bHasDestroyedObjectsToSend) & (byte)((uint)uVar3 >> 6) & 1) != 0) {
    (this_00->WriteContext).WrittenBatchCount = 0;
    (this_00->WriteContext).FailedToWriteSmallObjectCount = 0;
    if (((this_00->WriteContext).WriteMode == PostTickDispatch) ||
       ((uVar12 = (this_00->WriteContext).MaxPacketsToSend, uVar10 = uVar16, uVar12 != 0 &&
        (uVar12 <= (this_00->WriteContext).NumWrittenPacketsInThisBatch)))) {
      uVar10 = 0x20;
    }
    pUVar5 = (this_00->Parameters).ReplicationSystem;
    *(uint *)&(this_00->WriteContext).field_0xd4 =
         (uint)(((this_00->ReplicationRecord).RecordInfos.Tail -
                (this_00->ReplicationRecord).RecordInfos.Head) + 0xffff <
               (uint)UE::Net::Private::GReplicationWriterReplicationRecordStarvationThreshold) |
         uVar3 & 0xffffffde | uVar10;
    this_01 = param_1->BitStreamWriter;
    UE::Net::Private::FInternalNetSerializationContext::FInternalNetSerializationContext
              (&FStack_70,pUVar5);
    param_1->LocalConnectionId = (this_00->Parameters).ConnectionId;
    param_1->InternalContext = &FStack_70;
    pFVar6 = this_00->NetTypeStats;
    if ((pFVar6->bIsInParallelPhase != false) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsInParallelPhase",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStats.h"
                           ,0xc6,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      EVar11 = (*pcVar8)();
      return EVar11;
    }
    pFVar19 = (FNetTraceCollector *)0x0;
    if (pFVar6->bIsEnabled != false) {
      pFVar19 = (FNetTraceCollector *)pFVar6->ParentStatsContext;
    }
    param_1->NetStatsContext = (FNetStatsContext *)pFVar19;
    (this_00->WriteBitStreamInfo).ReplicationStartPos =
         this_01->BufferBitPosition - this_01->BufferBitStartOffset;
    uVar10 = 0;
    uVar12 = uVar10;
    if (this_01->OverflowBitCount == 0) {
      uVar12 = this_01->BufferBitCapacity - this_01->BufferBitPosition;
    }
    (this_00->WriteBitStreamInfo).ReplicationCapacity = uVar12;
    pUVar5 = (this_00->Parameters).ReplicationSystem;
    this_00->StreamDebugFeatures = None;
    if ((pUVar5 != (UReplicationSystem *)0x0) && (pUVar5->bIsServer != 0)) {
      bVar9 = UE::Net::Private::bDebugBatchSizePerObjectEnabled != false;
      this_00->StreamDebugFeatures = (uint)bVar9;
      this_00->StreamDebugFeatures =
           -(uint)(UE::Net::Private::bDebugSentinelsEnabled != false) & Sentinels | (uint)bVar9;
    }
    pFVar19 = (FNetTraceCollector *)0x0;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar19 = param_1->TraceCollector;
    }
    uStackX_8 = 0xffffffff;
    if (pFVar19 != (FNetTraceCollector *)0x0) {
      uVar12 = this_01->BufferBitPosition;
      if (this_01->OverflowBitCount != 0) {
        uVar12 = uVar10;
      }
      uStackX_8 = FNetTrace::BeginPacketContentEvent(pFVar19,NameId,uVar12);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ReplicationData = UE::Net::CreatePersistentNetDebugName(L"ReplicationData",0xf);
        _Init_thread_footer(&::_TSS0);
      }
      uVar12 = FNetTrace::TraceName(ReplicationData);
      FVar20 = (pFVar19->Events).AllocatorInstance.SecondaryData;
      if (FVar20 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar20 = (ForElementType<FNetTracePacketContentEvent>)&pFVar19->Events;
      }
      *(uint *)((longlong)FVar20 + (ulonglong)uStackX_8 * 0x10) = uVar12;
    }
    uVar12 = this_01->BufferBitPosition;
    uVar4 = this_01->BufferBitStartOffset;
    UE::Net::FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,this_00->StreamDebugFeatures,2)
    ;
    uVar17 = this_01->BufferBitPosition;
    uVar18 = this_01->BufferBitStartOffset;
    sStack_88 = (short)(this_00->ReplicationRecord).RecordInfos.Head -
                (short)(this_00->ReplicationRecord).RecordInfos.Tail;
    UE::Net::FNetBitStreamWriter::WriteBits(this_01,0,0x10);
    uVar13 = UE::Net::Private::FReplicationWriter::WriteRootObjectsPendingDestroy(this_00,param_1);
    EVar11 = NoData;
    if (this_01->OverflowBitCount == 0) {
      uVar14 = UE::Net::Private::FReplicationWriter::WriteOOBAttachments(this_00,param_1);
      uVar15 = UE::Net::Private::FReplicationWriter::WriteObjects(this_00,param_1);
      puVar1 = &(this_00->WriteContext).field_0xd4;
      uVar15 = uVar14 + uVar13 + uVar15;
      EVar11 = Ok;
      if (((((this_00->WriteContext).bHasUpdatedObjectsToSend |
             (this_00->WriteContext).bHasDestroyedObjectsToSend |
             (this_00->WriteContext).bHasOOBAttachmentsToSend |
            (this_00->WriteContext).bHasHugeObjectToSend) & (byte)((uint)*(undefined4 *)puVar1 >> 6)
           & 1) != 0) &&
         ((((this_00->WriteContext).bHasHugeObjectToSend != 0 ||
           ((ZPULL(*(undefined4 *)puVar1,4,1) != 0 &&
            (bVar9 = UE::Net::Private::FReplicationWriter::CanSendObject(this_00,0), bVar9)))) ||
          (((this_00->WriteContext).bIsInReplicationRecordStarvation == 0 &&
           ((uVar14 = (this_00->WriteContext).MaxPacketsToSend, uVar14 == 0 ||
            ((this_00->WriteContext).NumWrittenPacketsInThisBatch < uVar14 - 1)))))))) {
        EVar11 = HasMoreData;
      }
      if ((this_01->OverflowBitCount == 0) && (uVar15 != 0)) {
        uVar14 = this_01->BufferBitPosition - this_01->BufferBitStartOffset;
        UE::Net::FNetBitStreamWriter::Seek(this_01,uVar17 - uVar18);
        UE::Net::FNetBitStreamWriter::WriteBits
                  (this_01,uVar13 + (this_00->WriteContext).WrittenBatchCount,0x10);
        if ((uVar14 < this_01->BufferBitPosition - this_01->BufferBitStartOffset) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Writer.GetPosBits() <= OriginalPos",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetBitStreamUtil.h"
                               ,0x21,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          EVar11 = (*pcVar8)();
          return EVar11;
        }
        UE::Net::FNetBitStreamWriter::Seek(this_01,uVar14);
        uVar17 = (this_00->ReplicationRecord).RecordInfos.Head;
        uVar21 = (ulonglong)
                 ((this_00->ReplicationRecord).Record.Head -
                 (this_00->ReplicationRecord).Record.Tail) + 1;
        uVar18 = (this_00->ReplicationRecord).RecordInfos.Tail;
        if ((ulonglong)(longlong)(this_00->ReplicationRecord).Record.Storage.ArrayNum < uVar21) {
          TResizableCircularQueue<unsigned_short,TSizedDefaultAllocator<32>_>::SetCapacity
                    (&(this_00->ReplicationRecord).Record,uVar21);
        }
        uVar13 = (this_00->ReplicationRecord).Record.Head;
        uVar14 = (this_00->ReplicationRecord).Record.IndexMask;
        (this_00->ReplicationRecord).Record.Head = uVar13 + 1;
        *(short *)((this_00->ReplicationRecord).Record.Storage.AllocatorInstance.Data +
                  (ulonglong)(uVar14 & uVar13) * 2) = ((short)uVar17 - (short)uVar18) - sStack_88;
        bVar9 = UE::Net::Private::s_ValidateReplicationRecord
                          (&this_00->ReplicationRecord,
                           this_00->NetRefHandleManager->MaxActiveObjectCount + 1,false);
        if ((!bVar9) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("s_ValidateReplicationRecord(&ReplicationRecord, NetRefHandleManager->GetMaxActiveObjectCount() + 1U, false)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                               ,0xf9c,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          EVar11 = (*pcVar8)();
          return EVar11;
        }
        this_02 = (this_00->HugeObjectSendQueue).TraceCollector;
        if (this_02 != (FNetTraceCollector *)0x0) {
          uVar17 = this_01->BufferBitPosition;
          if (this_01->OverflowBitCount != 0) {
            uVar17 = uVar16;
          }
          FNetTrace::FoldTraceCollector(param_1->TraceCollector,this_02,uVar17,0);
          FNetTraceCollector::Reset(this_02);
        }
        puVar2 = &(this_00->WriteContext).NumWrittenPacketsInThisBatch;
        *puVar2 = *puVar2 + 1;
      }
      else {
        UE::Net::FNetBitStreamWriter::DoOverflow(this_01);
        EVar11 = NoData;
        if ((5 < (byte)LogIris._0_1_) && (EVar11 = NoData, uVar15 != 0)) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
      }
      lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        NetTraceNameId_4019 =
             UE::Net::CreatePersistentNetDebugName(L"ReplicationWriter.WrittenObjectCount",0x24);
        _Init_thread_footer(&::_TSS0);
      }
      uVar16 = FNetTrace::TraceName(NetTraceNameId_4019);
      FNetTrace::TracePacketStatsCounter
                (((this_00->Parameters).ReplicationSystem)->Id,(this_00->Parameters).ConnectionId,
                 uVar16,uVar15);
      if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        NetTraceNameId_4020 =
             UE::Net::CreatePersistentNetDebugName(L"ReplicationWriter.WrittenBatchCount",0x23);
        _Init_thread_footer(&::_TSS1);
      }
      uVar16 = (this_00->WriteContext).WrittenBatchCount;
      uVar17 = FNetTrace::TraceName(NetTraceNameId_4020);
      FNetTrace::TracePacketStatsCounter
                (((this_00->Parameters).ReplicationSystem)->Id,(this_00->Parameters).ConnectionId,
                 uVar17,uVar16);
      if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        NetTraceNameId_4021 =
             UE::Net::CreatePersistentNetDebugName
                       (L"ReplicationWriter.FailedToWriteSmallObjectCount",0x2f);
        _Init_thread_footer(&::_TSS2);
      }
      uVar16 = (this_00->WriteContext).FailedToWriteSmallObjectCount;
      uVar17 = FNetTrace::TraceName(NetTraceNameId_4021);
      FNetTrace::TracePacketStatsCounter
                (((this_00->Parameters).ReplicationSystem)->Id,(this_00->Parameters).ConnectionId,
                 uVar17,uVar16);
      if ((*(int *)(lVar7 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
        NetTraceNameId_4022 =
             UE::Net::CreatePersistentNetDebugName
                       (L"ReplicationWriter.RemainingObjectsPendingWriteCount",0x33);
        _Init_thread_footer(&::_TSS3);
      }
      uVar16 = (this_00->WriteContext).ScheduledObjectCount;
      uVar17 = (this_00->WriteContext).CurrentIndex;
      uVar18 = FNetTrace::TraceName(NetTraceNameId_4022);
      FNetTrace::TracePacketStatsCounter
                (((this_00->Parameters).ReplicationSystem)->Id,(this_00->Parameters).ConnectionId,
                 uVar18,uVar16 - uVar17);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
        NetTraceNameId_4023 =
             UE::Net::CreatePersistentNetDebugName(L"ReplicationWriter.ScheduledObjectCount",0x26);
        _Init_thread_footer(&::_TSS4);
      }
      uVar16 = (this_00->WriteContext).ScheduledObjectCount;
      uVar17 = FNetTrace::TraceName(NetTraceNameId_4023);
      FNetTrace::TracePacketStatsCounter
                (((this_00->Parameters).ReplicationSystem)->Id,(this_00->Parameters).ConnectionId,
                 uVar17,uVar16);
    }
    if (this_01->OverflowBitCount != 0) {
      UE::Net::FNetBitStreamWriter::Seek(this_01,uVar12 - uVar4);
    }
    if (uStackX_8 != 0xffffffff) {
      uVar16 = this_01->BufferBitPosition;
      if (this_01->OverflowBitCount != 0) {
        uVar16 = uVar10;
      }
      FNetTrace::EndPacketContentEvent(pFVar19,uStackX_8,uVar16);
    }
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar11;
}

