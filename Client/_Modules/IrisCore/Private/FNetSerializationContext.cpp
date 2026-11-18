// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 11

// FNetSerializationContext @ 1441f8ae0

FNetSerializationContext * __thiscall
UE::Net::FNetSerializationContext::FNetSerializationContext
          (FNetSerializationContext *this,FNetBitStreamReader *param_1,FNetBitStreamWriter *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  FNetRefHandle_u_0 *pFVar3;
  
  (this->ErrorContext).ObjectHandle.field0_0x0.Value = 0;
  lVar2 = 0x20;
  (this->ErrorContext).Error.ComparisonIndex = 0;
  (this->ErrorContext).Error.Number = 0;
  pFVar3 = (FNetRefHandle_u_0 *)this;
  do {
    pFVar3 = pFVar3 + 3;
    pFVar3->Value = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  (this->ReadJournal).NumEntries = 0;
  this->bIsInitState = 0;
  this->bIsInitializingDefaultState = 0;
  this->BitStreamReader = param_1;
  this->BitStreamWriter = param_2;
  this->TraceCollector = (FNetTraceCollector *)0x0;
  this->InternalContext = (FInternalNetSerializationContext *)0x0;
  this->ExportContext = (FNetExportContext *)0x0;
  this->NetStatsContext = (FNetStatsContext *)0x0;
  this->ChangeMask = (FNetBitArrayView *)0x0;
  this->NetBlobReceiver = (INetBlobReceiver *)0x0;
  this->LocalConnectionId = 0;
  this->PacketId = -1;
  return this;
}

// AddReadJournalEntry @ 144327e60

void __thiscall
UE::Net::FNetSerializationContext::AddReadJournalEntry
          (FNetSerializationContext *this,FNetDebugName *param_1)

{
  uint *puVar1;
  FJournalEntry *pFVar2;
  uint uVar3;
  uint uVar4;
  FNetBitStreamReader *pFVar5;
  FNetRefHandle_u_0 FVar6;
  uint uVar7;
  undefined4 uStack_14;
  
  if ((((this->ErrorContext).Error == (FName)0x0) &&
      ((pFVar5 = this->BitStreamReader, pFVar5 == (FNetBitStreamReader *)0x0 ||
       (pFVar5->OverflowBitCount == 0)))) &&
     ((this->BitStreamWriter == (FNetBitStreamWriter *)0x0 ||
      (this->BitStreamWriter->OverflowBitCount == 0)))) {
    FVar6 = (this->ErrorContext).ObjectHandle.field0_0x0;
    uVar3 = pFVar5->BufferBitPosition;
    uVar4 = pFVar5->BufferBitStartOffset;
    uVar7 = (this->ReadJournal).NumEntries & 0x1f;
    pFVar2 = (this->ReadJournal).Entries + uVar7;
    pFVar2->Name = param_1->Name;
    (pFVar2->NetRefHandle).field0_0x0 = FVar6;
    *(ulonglong *)&(this->ReadJournal).Entries[uVar7].BitOffset = CONCAT44(uStack_14,uVar3 - uVar4);
    puVar1 = &(this->ReadJournal).NumEntries;
    *puVar1 = *puVar1 + 1;
  }
  return;
}

// AddReadJournalEntry @ 144327ee0

void __thiscall
UE::Net::FNetSerializationContext::AddReadJournalEntry
          (FNetSerializationContext *this,wchar_t *param_1)

{
  uint *puVar1;
  FJournalEntry *pFVar2;
  uint uVar3;
  uint uVar4;
  FNetBitStreamReader *pFVar5;
  FNetRefHandle_u_0 FVar6;
  uint uVar7;
  undefined4 uStack_14;
  
  if ((((this->ErrorContext).Error == (FName)0x0) &&
      ((pFVar5 = this->BitStreamReader, pFVar5 == (FNetBitStreamReader *)0x0 ||
       (pFVar5->OverflowBitCount == 0)))) &&
     ((this->BitStreamWriter == (FNetBitStreamWriter *)0x0 ||
      (this->BitStreamWriter->OverflowBitCount == 0)))) {
    FVar6 = (this->ErrorContext).ObjectHandle.field0_0x0;
    uVar3 = pFVar5->BufferBitPosition;
    uVar4 = pFVar5->BufferBitStartOffset;
    uVar7 = (this->ReadJournal).NumEntries & 0x1f;
    pFVar2 = (this->ReadJournal).Entries + uVar7;
    pFVar2->Name = param_1;
    (pFVar2->NetRefHandle).field0_0x0 = FVar6;
    *(ulonglong *)&(this->ReadJournal).Entries[uVar7].BitOffset = CONCAT44(uStack_14,uVar3 - uVar4);
    puVar1 = &(this->ReadJournal).NumEntries;
    *puVar1 = *puVar1 + 1;
  }
  return;
}

// GetLocalConnectionUserData @ 144330650

/* WARNING: Type propagation algorithm not settling */

UObject * __thiscall
UE::Net::FNetSerializationContext::GetLocalConnectionUserData
          (FNetSerializationContext *this,uint param_1)

{
  FReplicationSystemImpl *pFVar1;
  UReplicationSystem *pUVar2;
  bool bVar3;
  FReplicationConnection *pFVar4;
  uint *puStackX_8;
  uint auStackX_10 [6];
  
  if (((this->InternalContext == (FInternalNetSerializationContext *)0x0) ||
      (pUVar2 = this->InternalContext->ReplicationSystem, pUVar2 == (UReplicationSystem *)0x0)) ||
     (param_1 == 0)) {
    return (UObject *)0x0;
  }
  pFVar1 = (pUVar2->Impl).Ptr;
  auStackX_10[0] = param_1;
  if (((pFVar1->ReplicationSystemInternal).Connections.ValidConnections.BitCount <= param_1) ||
     ((*(uint *)((pFVar1->ReplicationSystemInternal).Connections.ValidConnections.Storage.
                 AllocatorInstance.Data + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) ==
      0)) {
    puStackX_8 = auStackX_10;
    bVar3 = `UReplicationSystem::GetConnectionUserData'::__l3::<lambda_1>::operator()(&puStackX_8);
    if (!bVar3) {
      return (UObject *)0x0;
    }
  }
  pFVar4 = Net::Private::FReplicationConnections::GetConnection
                     (&(pFVar1->ReplicationSystemInternal).Connections,auStackX_10[0]);
  if (pFVar4 == (FReplicationConnection *)0x0) {
    return (UObject *)0x0;
  }
  return (pFVar4->UserData).field0_0x0.Handle;
}

// GetNetTokenStore @ 1443306b0

FNetTokenStore * __thiscall
UE::Net::FNetSerializationContext::GetNetTokenStore(FNetSerializationContext *this)

{
  UReplicationSystem *pUVar1;
  
  if ((this->InternalContext != (FInternalNetSerializationContext *)0x0) &&
     (pUVar1 = this->InternalContext->ReplicationSystem, pUVar1 != (UReplicationSystem *)0x0)) {
    return ((pUVar1->Impl).Ptr)->NetTokenStore;
  }
  return (FNetTokenStore *)0x0;
}

// GetNetTokenStore @ 1443306e0

FNetTokenStore * __thiscall
UE::Net::FNetSerializationContext::GetNetTokenStore(FNetSerializationContext *this)

{
  UReplicationSystem *pUVar1;
  
  if ((this->InternalContext != (FInternalNetSerializationContext *)0x0) &&
     (pUVar1 = this->InternalContext->ReplicationSystem, pUVar1 != (UReplicationSystem *)0x0)) {
    return ((pUVar1->Impl).Ptr)->NetTokenStore;
  }
  return (FNetTokenStore *)0x0;
}

// GetRemoteNetTokenStoreState @ 144331290

FNetTokenStoreState * __thiscall
UE::Net::FNetSerializationContext::GetRemoteNetTokenStoreState(FNetSerializationContext *this)

{
  if (this->InternalContext != (FInternalNetSerializationContext *)0x0) {
    return (this->InternalContext->ResolveContext).RemoteNetTokenStoreState;
  }
  return (FNetTokenStoreState *)0x0;
}

// IsBitStreamOverflown @ 144332e90

bool __thiscall
UE::Net::FNetSerializationContext::IsBitStreamOverflown(FNetSerializationContext *this)

{
  if ((this->BitStreamReader != (FNetBitStreamReader *)0x0) &&
     (this->BitStreamReader->OverflowBitCount != 0)) {
    return true;
  }
  if (this->BitStreamWriter != (FNetBitStreamWriter *)0x0) {
    return this->BitStreamWriter->OverflowBitCount != 0;
  }
  return false;
}

// PrintReadJournal @ 144335120

FString * __thiscall
UE::Net::FNetSerializationContext::PrintReadJournal
          (FNetSerializationContext *this,FString *__return_storage_ptr__)

{
  uint uVar1;
  UReplicationSystem *this_00;
  uint uVar2;
  FReplicationSystemInternal *pFVar3;
  FNetRefHandleManager *pFVar4;
  FNetRefHandleManager *this_01;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  FString local_58;
  FString local_48;
  FNetRefHandleManager *pFVar6;
  
  pFVar4 = (FNetRefHandleManager *)0x0;
  uVar8 = 0;
  this_01 = pFVar4;
  if ((this->InternalContext != (FInternalNetSerializationContext *)0x0) &&
     (this_00 = this->InternalContext->ReplicationSystem, this_00 != (UReplicationSystem *)0x0)) {
    pFVar3 = UReplicationSystem::GetReplicationSystemInternal(this_00);
    this_01 = &pFVar3->NetRefHandleManager;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  uVar1 = (this->ReadJournal).NumEntries;
  uVar7 = 0x20;
  if (uVar1 < 0x20) {
    uVar7 = uVar1;
  }
  ::FString::AppendfImpl(__return_storage_ptr__,L"ErrorContext:\n");
  pFVar6 = pFVar4;
  if (uVar7 != 0) {
    do {
      uVar2 = uVar8 + (uVar1 - uVar7) & 0x1f;
      if ((((ulonglong)pFVar4 ^ (this->ReadJournal).Entries[uVar2].NetRefHandle.field0_0x0.Value) &
          0x3fffffffffffff) != 0) {
        if (this_01 == (FNetRefHandleManager *)0x0) {
          uVar5 = (uint)pFVar6 | 2;
          FNetRefHandle::ToString(&(this->ReadJournal).Entries[uVar2].NetRefHandle,&local_58);
        }
        else {
          uVar5 = (uint)pFVar6 | 1;
          Net::Private::FNetRefHandleManager::PrintObjectFromNetRefHandle
                    (this_01,&local_48,
                     (FNetRefHandle)
                     *(FNetRefHandle_u_0 *)
                      &(this->ReadJournal).Entries[uVar2].NetRefHandle.field0_0x0._s_0);
        }
        pFVar6 = (FNetRefHandleManager *)(ulonglong)uVar5;
        ::FString::AppendfImpl(__return_storage_ptr__,L"%s\n");
        if (((uVar5 & 2) != 0) &&
           (pFVar6 = (FNetRefHandleManager *)(ulonglong)(uVar5 & 0xfffffffd),
           local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if ((((ulonglong)pFVar6 & 1) != 0) &&
           (pFVar6 = (FNetRefHandleManager *)(ulonglong)((uint)pFVar6 & 0xfffffffe),
           local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        pFVar4 = (FNetRefHandleManager *)
                 (this->ReadJournal).Entries[uVar2].NetRefHandle.field0_0x0.Value;
      }
      ::FString::AppendfImpl(__return_storage_ptr__,L"%u: - BitOffset: %u:%s\n");
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  return __return_storage_ptr__;
}

// SetBitStreamOverflow @ 14433e8a0

void __thiscall
UE::Net::FNetSerializationContext::SetBitStreamOverflow(FNetSerializationContext *this)

{
  uint uVar1;
  FNetBitStreamReader *this_00;
  FNetBitStreamWriter *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  this_00 = this->BitStreamReader;
  if ((this_00 != (FNetBitStreamReader *)0x0) && (this_00->OverflowBitCount == 0)) {
    FNetBitStreamReader::DoOverflow(this_00);
  }
  pFVar2 = this->BitStreamWriter;
  if ((pFVar2 != (FNetBitStreamWriter *)0x0) && (pFVar2->OverflowBitCount == 0)) {
    uVar5 = pFVar2->BufferBitCapacity + 1;
    if ((~(pFVar2->bIsInvalid | pFVar2->bHasSubstream) & 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(!bIsInvalid) & (!bHasSubstream)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamWriter.cpp"
                         ,0xd9,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar1 = pFVar2->BufferBitCapacity;
    uVar6 = pFVar2->BufferBitStartOffset + uVar5;
    if (uVar6 < uVar5 || uVar1 < uVar6) {
      uVar5 = uVar1 + 1;
      if (uVar1 + 1 < uVar6) {
        uVar5 = uVar6;
      }
      pFVar2->OverflowBitCount = uVar5 - uVar1;
      return;
    }
    uVar5 = uVar1 + 0x1f & 0xffffffe0;
    pFVar2->OverflowBitCount = 0;
    if (pFVar2->BufferBitPosition < uVar5) {
      pFVar2->Buffer[pFVar2->BufferBitPosition >> 5] = pFVar2->PendingWord;
    }
    pFVar2->BufferBitPosition = uVar6;
    if (uVar6 < uVar5) {
      pFVar2->PendingWord = pFVar2->Buffer[uVar6 >> 5];
    }
  }
  return;
}

// SetError @ 14433e9e0

void __thiscall
UE::Net::FNetSerializationContext::SetError
          (FNetSerializationContext *this,FName param_1,bool param_2)

{
  uint uVar1;
  FNetBitStreamReader *this_00;
  FNetBitStreamWriter *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FNetSerializationContext *local_res8;
  
  if (param_2) {
    this_00 = this->BitStreamReader;
    if ((this_00 != (FNetBitStreamReader *)0x0) && (this_00->OverflowBitCount == 0)) {
      FNetBitStreamReader::DoOverflow(this_00);
    }
    pFVar2 = this->BitStreamWriter;
    if ((pFVar2 != (FNetBitStreamWriter *)0x0) && (pFVar2->OverflowBitCount == 0)) {
      uVar5 = pFVar2->BufferBitCapacity + 1;
      if (((~(pFVar2->bIsInvalid | pFVar2->bHasSubstream) & 1) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(!bIsInvalid) & (!bHasSubstream)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamWriter.cpp"
                             ,0xd9,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar1 = pFVar2->BufferBitCapacity;
      uVar6 = pFVar2->BufferBitStartOffset + uVar5;
      if (uVar6 < uVar5 || uVar1 < uVar6) {
        uVar5 = uVar1 + 1;
        if (uVar1 + 1 < uVar6) {
          uVar5 = uVar6;
        }
        pFVar2->OverflowBitCount = uVar5 - uVar1;
      }
      else {
        uVar5 = uVar1 + 0x1f & 0xffffffe0;
        pFVar2->OverflowBitCount = 0;
        if (pFVar2->BufferBitPosition < uVar5) {
          pFVar2->Buffer[pFVar2->BufferBitPosition >> 5] = pFVar2->PendingWord;
        }
        pFVar2->BufferBitPosition = uVar6;
        if (uVar6 < uVar5) {
          pFVar2->PendingWord = pFVar2->Buffer[uVar6 >> 5];
        }
      }
    }
  }
  if (param_1 == (FName)0x0) {
    local_res8 = this;
    `UE::Net::FNetErrorContext::SetError'::__l2::<lambda_1>::operator()(&local_res8);
  }
  if ((this->ErrorContext).Error == (FName)0x0) {
    (this->ErrorContext).Error = param_1;
  }
  return;
}

