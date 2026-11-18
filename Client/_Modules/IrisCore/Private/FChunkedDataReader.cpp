// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 12

// FChunkedDataReader @ 1442288c0

FChunkedDataReader * __thiscall
UE::Net::Private::FChunkedDataReader::FChunkedDataReader
          (FChunkedDataReader *this,FInitParameters *param_1)

{
  uint uVar1;
  FName FVar2;
  uint uVar3;
  undefined4 uVar4;
  UReplicationSystem *this_00;
  FReplicationSystemInternal *pFVar5;
  FNetTokenStore *this_01;
  FNetTokenStoreState *pFVar6;
  
  (this->DataChunksPendingAssembly).IndexMask = 0xffffffff;
  (this->DataChunksPendingAssembly).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataChunksPendingAssembly).Front = 0;
  (this->DataChunksPendingAssembly).AfterBack = 0;
  (this->ReceiveQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReceiveQueue).Front = 0;
  (this->ReceiveQueue).AfterBack = 0;
  (this->ReceiveQueue).IndexMask = 0xffffffff;
  this->ExpectedSeq = 0;
  this->bHasError = false;
  FVar2 = param_1->Name;
  (this->InitParams).NetExports = param_1->NetExports;
  (this->InitParams).Name = FVar2;
  uVar1 = param_1->ConnectionId;
  uVar3 = param_1->PacketWindowSize;
  uVar4 = *(undefined4 *)&param_1->field_0x1c;
  (this->InitParams).ReplicationSystemId = param_1->ReplicationSystemId;
  (this->InitParams).ConnectionId = uVar1;
  (this->InitParams).PacketWindowSize = uVar3;
  *(undefined4 *)&(this->InitParams).field_0x1c = uVar4;
  (this->InitParams).DataStreamManager = param_1->DataStreamManager;
  this_00 = GetReplicationSystem(param_1->ReplicationSystemId);
  this->ReplicationSystem = this_00;
  pFVar5 = UReplicationSystem::GetReplicationSystemInternal(this_00);
  (this->ResolveContext).RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
  (this->ResolveContext).ConnectionId = 0;
  (this->ResolveContext).AsyncLoadingPriority = -1;
  (this->ResolveContext).bForceSyncLoad = false;
  (this->NetTokenResolveContext).NetTokenStore = (FNetTokenStore *)0x0;
  (this->NetTokenResolveContext).RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
  (this->ResolvedReferences).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetRefHandle>)0x0;
  this->ObjectReferenceCache = &pFVar5->ObjectReferenceCache;
  (this->ResolvedReferences).ArrayNum = 0;
  (this->ResolvedReferences).ArrayMax = 4;
  (this->PackageMapExports).References.AllocatorInstance.SecondaryData =
       (ForElementType<TObjectPtr<UObject>_>)0x0;
  (this->PackageMapExports).References.ArrayNum = 0;
  (this->PackageMapExports).References.ArrayMax = 4;
  (this->PackageMapExports).Names.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->PackageMapExports).Names.ArrayNum = 0;
  (this->PackageMapExports).Names.ArrayMax = 4;
  this->MaxUndispatchedPayloadBytes = 0xa00000;
  this->CurrentUndispatchedPayloadBytes = 0;
  this->MultiExportsPayLoadOffset = 0;
  this_01 = UReplicationSystem::GetNetTokenStore(this->ReplicationSystem);
  uVar1 = (this->InitParams).ConnectionId;
  (this->ResolveContext).ConnectionId = uVar1;
  pFVar6 = FNetTokenStore::GetRemoteNetTokenStoreState(this_01,uVar1);
  (this->ResolveContext).RemoteNetTokenStoreState = pFVar6;
  (this->NetTokenResolveContext).RemoteNetTokenStoreState = pFVar6;
  (this->NetTokenResolveContext).NetTokenStore = this_01;
  return this;
}

// ~FChunkedDataReader @ 14422adc0

void __thiscall UE::Net::Private::FChunkedDataReader::~FChunkedDataReader(FChunkedDataReader *this)

{
  ForElementType<FName> FVar1;
  ForElementType<TObjectPtr<UObject>_> FVar2;
  ForElementType<UE::Net::FNetRefHandle> FVar3;
  FScriptContainerElement *pFVar4;
  
  ResetResolvedReferences(this);
  FVar1 = (this->PackageMapExports).Names.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar2 = (this->PackageMapExports).References.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TObjectPtr<UObject>_>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar3 = (this->ResolvedReferences).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>::
  DestructRange(&this->ReceiveQueue,(this->ReceiveQueue).Front,(this->ReceiveQueue).AfterBack);
  (this->ReceiveQueue).Front = 0;
  (this->ReceiveQueue).AfterBack = 0;
  TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>::
  Reallocate(&this->ReceiveQueue,0);
  pFVar4 = (this->ReceiveQueue).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>::
  DestructRange(&this->DataChunksPendingAssembly,(this->DataChunksPendingAssembly).Front,
                (this->DataChunksPendingAssembly).AfterBack);
  (this->DataChunksPendingAssembly).Front = 0;
  (this->DataChunksPendingAssembly).AfterBack = 0;
  TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>::
  Reallocate(&this->DataChunksPendingAssembly,0);
  pFVar4 = (this->DataChunksPendingAssembly).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// AssemblePayloadsPendingAssembly @ 144231dc0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FChunkedDataReader::AssemblePayloadsPendingAssembly
          (FChunkedDataReader *this,FNetSerializationContext *param_1)

{
  TUniquePtr<UE::Net::Private::FChunkedDataReader::FReferencesForImport,TDefaultDelete<UE::Net::Private::FChunkedDataReader::FReferencesForImport>_>
  *pTVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FRecvQueueEntry *pFVar11;
  FRecvQueueEntry *pFVar12;
  FReferencesForImport *pFVar13;
  ForAnyElementType FVar14;
  FReferencesForImport *this_00;
  undefined8 local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  this->MultiExportsPayLoadOffset = 0;
  if ((this->DataChunksPendingAssembly).AfterBack != (this->DataChunksPendingAssembly).Front) {
    do {
      pFVar11 = (FRecvQueueEntry *)
                TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>
                ::operator[](&this->DataChunksPendingAssembly,0);
      if (*(ushort *)((longlong)&(pFVar11->References).Ptr + 4) != this->ExpectedSeq) break;
      if (this->bHasError == false) {
        if (((ulonglong)(pFVar11->References).Ptr & 0x4000000000000000) != 0) {
          uVar10 = (this->ReceiveQueue).Front;
          uVar4 = (this->ReceiveQueue).AfterBack;
          if ((uVar4 == uVar10) ||
             (pFVar12 = TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>
                        ::operator[](&this->ReceiveQueue,(uVar4 - uVar10) + -1),
             pFVar12 == (FRecvQueueEntry *)0x0)) {
LAB_144231f19:
            uVar10 = TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>
                     ::NormalizeCapacity(&this->ReceiveQueue,
                                         ((this->ReceiveQueue).AfterBack -
                                         (this->ReceiveQueue).Front) + 1);
            if ((this->ReceiveQueue).IndexMask + 1 < uVar10) {
              TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>
              ::Reallocate(&this->ReceiveQueue,uVar10);
            }
            uVar10 = (this->ReceiveQueue).AfterBack;
            pFVar12 = (FRecvQueueEntry *)
                      ((this->ReceiveQueue).AllocatorInstance.Data +
                      (ulonglong)((this->ReceiveQueue).IndexMask & uVar10) * 0x20);
            (this->ReceiveQueue).AfterBack = uVar10 + 1;
            *(undefined2 *)&pFVar12->field_0x1d = 0;
            pTVar1 = &pFVar12->References;
            pFVar12->field_0x1f = 0;
            (pFVar12->Payload).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar12->Payload).ArrayNum = 0;
            (pFVar12->Payload).ArrayMax = 0;
            pTVar1->Ptr = (FReferencesForImport *)0x0;
            pFVar12->RemainingByteCount = 0;
            pFVar12->bHasProcessedExports = false;
            if (*(short *)((longlong)&(pFVar11->References).Ptr + 6) < 0) {
              pFVar13 = ::operator_new(0x118);
              this_00 = (FReferencesForImport *)0x0;
              if (pFVar13 != (FReferencesForImport *)0x0) {
                memset(pFVar13,0,0x118);
                (pFVar13->QuantizedExports).ObjectReferenceStorage.ArrayMaxCapacity = 4;
                (pFVar13->QuantizedExports).NameStorage.ArrayMaxCapacity = 4;
                (pFVar13->QuantizedExports).NetTokenStorage.ArrayMaxCapacity = 4;
                this_00 = pFVar13;
              }
              if (pTVar1 == (TUniquePtr<UE::Net::Private::FChunkedDataReader::FReferencesForImport,TDefaultDelete<UE::Net::Private::FChunkedDataReader::FReferencesForImport>_>
                             *)&local_78) {
                if (this_00 != (FReferencesForImport *)0x0) {
                  FIrisPackageMapExportsUtil::FreeDynamicState(&this_00->QuantizedExports);
                  pFVar6 = (this_00->MustBeMappedReferences).AllocatorInstance.Data;
                  if (pFVar6 != (FScriptContainerElement *)0x0) {
                    FMemory::Free(pFVar6);
                  }
                  FIrisPackageMapExportsQuantizedType::~FIrisPackageMapExportsQuantizedType
                            (&this_00->QuantizedExports);
                  ::operator_delete(this_00,0x118);
                }
              }
              else {
                pFVar13 = pTVar1->Ptr;
                pTVar1->Ptr = this_00;
                if (pFVar13 != (FReferencesForImport *)0x0) {
                  FIrisPackageMapExportsUtil::FreeDynamicState(&pFVar13->QuantizedExports);
                  pFVar6 = (pFVar13->MustBeMappedReferences).AllocatorInstance.Data;
                  if (pFVar6 != (FScriptContainerElement *)0x0) {
                    FMemory::Free(pFVar6);
                  }
                  FIrisPackageMapExportsQuantizedType::~FIrisPackageMapExportsQuantizedType
                            (&pFVar13->QuantizedExports);
                  ::operator_delete(pFVar13,0x118);
                }
              }
            }
          }
          else {
            if (pFVar12->RemainingByteCount != 0) {
              bVar8 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_1481513990541541183>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ChunkedDataStream\\ChunkedDataReader.cpp"
                                 ,0xc1,"!CurrentEntry || (CurrentEntry->RemainingByteCount == 0U)");
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              ::FString::FString(&local_70,
                                 L"Error: Encountered new payload when previous one still is not fully received, DataStream will be closed."
                                );
              if (1 < (byte)LogIrisChunkedDataStream._0_1_) {
                Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogIrisChunkedDataStream);
              }
              if (this->bHasError == false) {
                this->bHasError = true;
              }
              if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_70.Data.AllocatorInstance.Data);
              }
              goto LAB_144232172;
            }
            if (((*(short *)((longlong)&(pFVar11->References).Ptr + 6) < 0) ||
                (pFVar12->bHasProcessedExports == false)) || ((pFVar12->Payload).ArrayNum != 0))
            goto LAB_144231f19;
          }
          pFVar12->RemainingByteCount =
               *(uint *)&(pFVar11->References).Ptr * 0xc0 + -0xc0 +
               (*(ushort *)((longlong)&(pFVar11->References).Ptr + 6) & 0x3fff);
          if (5 < (byte)LogIrisChunkedDataStream._0_1_) {
            Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogIrisChunkedDataStream);
          }
          uVar10 = pFVar12->RemainingByteCount;
          if (this->MaxUndispatchedPayloadBytes <
              this->CurrentUndispatchedPayloadBytes + (ulonglong)uVar10) {
            ::FString::FString(&local_60,L"Error: MaxUndispatchedPayloadBytes exceeded.");
            if (1 < (byte)LogIrisChunkedDataStream._0_1_) {
              Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogIrisChunkedDataStream);
            }
            if (this->bHasError == false) {
              this->bHasError = true;
            }
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
          }
          else {
            if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
              Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
            }
            if ((pFVar12->Payload).ArrayMax < (int)uVar10) {
              Core::Private::ReallocTo<2,TAlignedHeapAllocator<4>::ForAnyElementType>
                        (1,1,uVar10,(ForAnyElementType *)pFVar12,(pFVar12->Payload).ArrayNum,
                         &(pFVar12->Payload).ArrayMax);
            }
            this->CurrentUndispatchedPayloadBytes =
                 this->CurrentUndispatchedPayloadBytes + (ulonglong)pFVar12->RemainingByteCount;
          }
        }
LAB_144232172:
        if (this->bHasError == false) {
          pFVar12 = TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>
                    ::operator[](&this->ReceiveQueue,
                                 ((this->ReceiveQueue).AfterBack - (this->ReceiveQueue).Front) + -1)
          ;
          if (pFVar12->RemainingByteCount <
              (uint)((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pFVar11->Payload)->
                    ArrayNum) {
            bVar8 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1481513990541541147>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ChunkedDataStream\\ChunkedDataReader.cpp"
                               ,0xe5,
                               "(uint32)CurrentChunk.PartPayload.Num() <= CurrentEntry.RemainingByteCount"
                              );
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            ::FString::FString(&local_50,
                               L"Error: Received more data than expected when assembling payload, DataStream will be closed."
                              );
            if (1 < (byte)LogIrisChunkedDataStream._0_1_) {
              Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogIrisChunkedDataStream);
            }
            FVar14.Data = local_50.Data.AllocatorInstance.Data;
            if (this->bHasError == false) {
              this->bHasError = true;
            }
LAB_144232357:
            if (FVar14.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar14.Data);
            }
          }
          else {
            if ((pFVar12 == pFVar11) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(void*)this != (void*)&Source",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x96e,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar5 = ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pFVar11->Payload)->
                    ArrayNum;
            if (iVar5 != 0) {
              iVar9 = Core::Private::ReallocGrow<2,TAlignedHeapAllocator<4>::ForAnyElementType>
                                (1,1,iVar5,(ForAnyElementType *)pFVar12,&(pFVar12->Payload).ArrayNum
                                 ,&(pFVar12->Payload).ArrayMax);
              memcpy((pFVar12->Payload).AllocatorInstance.Data + iVar9,
                     (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pFVar11->Payload)->
                     AllocatorInstance).Data,(longlong)iVar5);
            }
            puVar2 = &pFVar12->RemainingByteCount;
            *puVar2 = *puVar2 - ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                                &pFVar11->Payload)->ArrayNum;
            if (((*puVar2 == 0) && (pFVar12->bHasProcessedExports == false)) &&
               ((pFVar12->References).Ptr != (FReferencesForImport *)0x0)) {
              bVar8 = ProcessExportPayload(this,param_1,pFVar12);
              if (!bVar8) {
                ::FString::FString(&local_40,
                                   L"Error: Failed to ProcessExportPayload, DataStream will be closed."
                                  );
                if (1 < (byte)LogIrisChunkedDataStream._0_1_) {
                  Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogIrisChunkedDataStream);
                }
                FVar14.Data = local_40.Data.AllocatorInstance.Data;
                if (this->bHasError == false) {
                  this->bHasError = true;
                }
                goto LAB_144232357;
              }
              piVar3 = &(pFVar12->Payload).ArrayMax;
              this->CurrentUndispatchedPayloadBytes =
                   this->CurrentUndispatchedPayloadBytes - (longlong)(pFVar12->Payload).ArrayNum;
              (pFVar12->Payload).ArrayNum = 0;
              if (*piVar3 < 0) {
                Core::Private::ReallocTo<2,TAlignedHeapAllocator<4>::ForAnyElementType>
                          (1,1,0,(ForAnyElementType *)pFVar12,0,piVar3);
              }
              pFVar12->bHasProcessedExports = true;
            }
          }
        }
      }
      this->ExpectedSeq = this->ExpectedSeq + 1;
      if (((this->DataChunksPendingAssembly).AfterBack == (this->DataChunksPendingAssembly).Front)
         && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("PopCount <= static_cast<SizeType>(Num())",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                                ,0x3ec,
                                L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i"
                               ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar10 = (this->DataChunksPendingAssembly).Front;
      TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>::
      DestructRange(&this->DataChunksPendingAssembly,uVar10,uVar10 + 1);
      puVar2 = &(this->DataChunksPendingAssembly).Front;
      *puVar2 = *puVar2 + 1;
    } while ((this->DataChunksPendingAssembly).AfterBack != (this->DataChunksPendingAssembly).Front)
    ;
  }
  uVar10 = (this->DataChunksPendingAssembly).Front;
  uVar4 = (this->DataChunksPendingAssembly).AfterBack;
  if (uVar4 == uVar10) {
    uVar10 = TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>
             ::NormalizeCapacity(&this->DataChunksPendingAssembly,uVar4 - uVar10);
    TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>::
    Reallocate(&this->DataChunksPendingAssembly,uVar10);
  }
  return;
}

// DispatchReceivedPayload @ 1442374c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EDispatchResult __thiscall
UE::Net::Private::FChunkedDataReader::DispatchReceivedPayload
          (FChunkedDataReader *this,
          TFunctionRef<void___cdecl(TArrayView<unsigned_char_const_,__int64>)> *param_1)

{
  FReferencesForImport *pFVar1;
  FReferencesForImport *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  EDispatchResult EVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FRecvQueueEntry *pFVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_478 [32];
  int local_458;
  int local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  FInternalNetSerializationContext local_438;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  int iStack_3f0;
  int iStack_3ec;
  FInitParameters local_3e8;
  FNetRefHandle_u_0 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a0 [95];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  FInternalNetSerializationContext *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  uint local_60;
  undefined4 local_5c;
  uint local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_478;
  if ((((this->ReceiveQueue).AfterBack == (this->ReceiveQueue).Front) || (this->bHasError != false))
     || (pFVar10 = TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>
                   ::operator[](&this->ReceiveQueue,0), pFVar10->RemainingByteCount != 0)) {
    EVar6 = NothingToDispatch;
  }
  else {
    pFVar1 = (pFVar10->References).Ptr;
    if (pFVar1 != (FReferencesForImport *)0x0) {
      bVar5 = FObjectReferenceCache::ShouldAsyncLoad(this->ObjectReferenceCache);
      if ((bVar5) &&
         (pFVar2 = (pFVar10->References).Ptr,
         bVar5 = TryResolveUnresolvedMustBeMappedReferences
                           (this,&pFVar2->MustBeMappedReferences,pFVar2->IrisAsyncLoadingPriority),
         !bVar5)) {
        if (5 < (byte)LogIrisChunkedDataStream._0_1_) {
          local_458 = (((pFVar10->References).Ptr)->MustBeMappedReferences).ArrayNum;
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisChunkedDataStream)
          ;
        }
        return WaitingForMustBeMappedReferences;
      }
      local_3e8.ReplicationSystem = this->ReplicationSystem;
      local_3e8.ObjectResolveContext.bForceSyncLoad = (this->ResolveContext).bForceSyncLoad;
      local_3e8.ObjectResolveContext._17_7_ = *(undefined7 *)&(this->ResolveContext).field_0x11;
      local_438.bSerializeObjectReferencesAsRemoteIds = 0;
      local_438.bInlineObjectReferenceExports = 0;
      local_438.bDowngradeAutonomousProxyRole = 0;
      local_438.ResolveContext.RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
      local_438.ReplicationSystem = (UReplicationSystem *)0x0;
      local_438.ObjectReferenceCache = (FObjectReferenceCache *)0x0;
      local_438.ResolveContext.ConnectionId = 0;
      local_3e8.ObjectResolveContext.RemoteNetTokenStoreState =
           (this->ResolveContext).RemoteNetTokenStoreState;
      local_3e8.ObjectResolveContext.ConnectionId = (this->ResolveContext).ConnectionId;
      local_3e8.ObjectResolveContext.AsyncLoadingPriority =
           (this->ResolveContext).AsyncLoadingPriority;
      local_438.ResolveContext.AsyncLoadingPriority = -1;
      local_438.ResolveContext.bForceSyncLoad = false;
      local_438.PackageMap = (UIrisObjectReferencePackageMap *)0x0;
      local_3e8.PackageMap = (UIrisObjectReferencePackageMap *)0x0;
      FInternalNetSerializationContext::Init(&local_438,&local_3e8);
      lVar11 = 0x20;
      local_3b8.Value = 0;
      puVar12 = local_3a0;
      local_3b0 = 0;
      do {
        *puVar12 = 0;
        puVar12 = puVar12 + 3;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      local_60 = (this->InitParams).ConnectionId;
      local_58 = local_58 & 0xfffffffc;
      local_88 = &local_438;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_5c = 0xffffffff;
      FIrisPackageMapExportsUtil::Dequantize
                ((FNetSerializationContext *)&local_3b8._s_0,
                 &((pFVar10->References).Ptr)->QuantizedExports,&this->PackageMapExports);
    }
    iVar7 = (pFVar10->Payload).ArrayNum;
    if (iVar7 != 0) {
      if (5 < (byte)LogIrisChunkedDataStream._0_1_) {
        local_450 = (this->PackageMapExports).References.ArrayNum;
        local_458 = iVar7;
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisChunkedDataStream);
      }
      iVar7 = (pFVar10->Payload).ArrayNum;
      pFVar3 = (pFVar10->Payload).AllocatorInstance.Data;
      if ((iVar7 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      local_448._0_4_ = SUB84(pFVar3,0);
      local_448._4_4_ = (undefined4)((ulonglong)pFVar3 >> 0x20);
      uStack_440._4_4_ = iVar7 >> 0x1f;
      local_3f8 = (undefined4)local_448;
      uStack_3f4 = local_448._4_4_;
      iStack_3ec = uStack_440._4_4_;
      local_448 = pFVar3;
      uStack_440 = (longlong)iVar7;
      iStack_3f0 = iVar7;
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_3f8);
      this->CurrentUndispatchedPayloadBytes =
           this->CurrentUndispatchedPayloadBytes - (longlong)(pFVar10->Payload).ArrayNum;
    }
    if (pFVar1 == (FReferencesForImport *)0x0) {
      ResetResolvedReferences(this);
    }
    iVar7 = (this->ReceiveQueue).AfterBack - (this->ReceiveQueue).Front;
    if (iVar7 == 0) {
      local_458 = 1;
      local_450 = iVar7;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PopCount <= static_cast<SizeType>(Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x3ec,
                         L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
    }
    uVar9 = (this->ReceiveQueue).Front;
    TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>::
    DestructRange(&this->ReceiveQueue,uVar9,uVar9 + 1);
    uVar8 = (this->ReceiveQueue).Front + 1;
    (this->ReceiveQueue).Front = uVar8;
    uVar9 = (this->ReceiveQueue).AfterBack;
    if (uVar9 == uVar8) {
      uVar9 = TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>
              ::NormalizeCapacity(&this->ReceiveQueue,uVar9 - uVar8);
      TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>
      ::Reallocate(&this->ReceiveQueue,uVar9);
    }
    EVar6 = Ok;
  }
  return EVar6;
}

// DispatchReceivedPayloads @ 144237840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EDispatchResult __thiscall
UE::Net::Private::FChunkedDataReader::DispatchReceivedPayloads
          (FChunkedDataReader *this,
          TFunctionRef<void___cdecl(TArrayView<unsigned_char_const_,__int64>)> *param_1)

{
  code *pcVar1;
  FReferencesForImport *pFVar2;
  FReferencesForImport *pFVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  EDispatchResult EVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FRecvQueueEntry *pFVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_478 [32];
  int local_458;
  int local_450;
  TFunctionRef<void___cdecl(TArrayView<unsigned_char_const_,__int64>)> *local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  FInternalNetSerializationContext local_428;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  int iStack_3e0;
  int iStack_3dc;
  FInitParameters local_3d8;
  FNetRefHandle_u_0 local_3a8;
  undefined8 local_3a0;
  undefined8 local_390 [95];
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  FInternalNetSerializationContext *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  uint local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_478;
  local_448 = param_1;
  do {
    local_440 = *(undefined8 *)&local_448->field_0x8;
    pcVar1 = *(code **)local_448;
    if ((((this->ReceiveQueue).AfterBack == (this->ReceiveQueue).Front) ||
        (this->bHasError != false)) ||
       (pFVar10 = TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>
                  ::operator[](&this->ReceiveQueue,0), pFVar10->RemainingByteCount != 0)) {
      return NothingToDispatch;
    }
    pFVar2 = (pFVar10->References).Ptr;
    if (pFVar2 != (FReferencesForImport *)0x0) {
      bVar5 = FObjectReferenceCache::ShouldAsyncLoad(this->ObjectReferenceCache);
      if ((bVar5) &&
         (pFVar3 = (pFVar10->References).Ptr,
         bVar5 = TryResolveUnresolvedMustBeMappedReferences
                           (this,&pFVar3->MustBeMappedReferences,pFVar3->IrisAsyncLoadingPriority),
         !bVar5)) {
        if (5 < (byte)LogIrisChunkedDataStream._0_1_) {
          local_458 = (((pFVar10->References).Ptr)->MustBeMappedReferences).ArrayNum;
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisChunkedDataStream)
          ;
        }
        return WaitingForMustBeMappedReferences;
      }
      local_3d8.ReplicationSystem = this->ReplicationSystem;
      local_3d8.ObjectResolveContext.bForceSyncLoad = (this->ResolveContext).bForceSyncLoad;
      local_3d8.ObjectResolveContext._17_7_ = *(undefined7 *)&(this->ResolveContext).field_0x11;
      local_428.bSerializeObjectReferencesAsRemoteIds = 0;
      local_428.bInlineObjectReferenceExports = 0;
      local_428.bDowngradeAutonomousProxyRole = 0;
      local_428.ReplicationSystem = (UReplicationSystem *)0x0;
      local_428.ObjectReferenceCache = (FObjectReferenceCache *)0x0;
      local_428.ResolveContext.RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
      local_3d8.ObjectResolveContext.RemoteNetTokenStoreState =
           (this->ResolveContext).RemoteNetTokenStoreState;
      local_3d8.ObjectResolveContext.ConnectionId = (this->ResolveContext).ConnectionId;
      local_3d8.ObjectResolveContext.AsyncLoadingPriority =
           (this->ResolveContext).AsyncLoadingPriority;
      local_428.ResolveContext.ConnectionId = 0;
      local_428.ResolveContext.AsyncLoadingPriority = -1;
      local_428.ResolveContext.bForceSyncLoad = false;
      local_428.PackageMap = (UIrisObjectReferencePackageMap *)0x0;
      local_3d8.PackageMap = (UIrisObjectReferencePackageMap *)0x0;
      FInternalNetSerializationContext::Init(&local_428,&local_3d8);
      lVar11 = 0x20;
      local_3a8.Value = 0;
      puVar12 = local_390;
      local_3a0 = 0;
      do {
        *puVar12 = 0;
        puVar12 = puVar12 + 3;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      local_50 = (this->InitParams).ConnectionId;
      local_48 = local_48 & 0xfffffffc;
      local_78 = &local_428;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_4c = 0xffffffff;
      FIrisPackageMapExportsUtil::Dequantize
                ((FNetSerializationContext *)&local_3a8._s_0,
                 &((pFVar10->References).Ptr)->QuantizedExports,&this->PackageMapExports);
    }
    iVar7 = (pFVar10->Payload).ArrayNum;
    if (iVar7 != 0) {
      if (5 < (byte)LogIrisChunkedDataStream._0_1_) {
        local_450 = (this->PackageMapExports).References.ArrayNum;
        local_458 = iVar7;
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisChunkedDataStream);
      }
      iVar7 = (pFVar10->Payload).ArrayNum;
      pFVar4 = (pFVar10->Payload).AllocatorInstance.Data;
      if ((iVar7 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        EVar6 = (*pcVar1)();
        return EVar6;
      }
      local_438._0_4_ = SUB84(pFVar4,0);
      local_438._4_4_ = (undefined4)((ulonglong)pFVar4 >> 0x20);
      uStack_430._4_4_ = iVar7 >> 0x1f;
      local_3e8 = (undefined4)local_438;
      uStack_3e4 = local_438._4_4_;
      iStack_3dc = uStack_430._4_4_;
      local_438 = pFVar4;
      uStack_430 = (longlong)iVar7;
      iStack_3e0 = iVar7;
      (*pcVar1)(local_440,&local_3e8);
      this->CurrentUndispatchedPayloadBytes =
           this->CurrentUndispatchedPayloadBytes - (longlong)(pFVar10->Payload).ArrayNum;
    }
    if (pFVar2 == (FReferencesForImport *)0x0) {
      ResetResolvedReferences(this);
    }
    iVar7 = (this->ReceiveQueue).AfterBack - (this->ReceiveQueue).Front;
    if (iVar7 == 0) {
      local_458 = 1;
      local_450 = iVar7;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PopCount <= static_cast<SizeType>(Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x3ec,
                         L"RingBuffer PopCount out of bounds: %i from a RingBuffer of size %i");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        EVar6 = (*pcVar1)();
        return EVar6;
      }
    }
    uVar9 = (this->ReceiveQueue).Front;
    TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>::
    DestructRange(&this->ReceiveQueue,uVar9,uVar9 + 1);
    uVar8 = (this->ReceiveQueue).Front + 1;
    (this->ReceiveQueue).Front = uVar8;
    uVar9 = (this->ReceiveQueue).AfterBack;
    if (uVar9 == uVar8) {
      uVar9 = TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>
              ::NormalizeCapacity(&this->ReceiveQueue,uVar9 - uVar8);
      TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>
      ::Reallocate(&this->ReceiveQueue,uVar9);
    }
  } while( true );
}

// GetNumReceivedPayloadsPendingDispatch @ 14423cff0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

uint __thiscall
UE::Net::Private::FChunkedDataReader::GetNumReceivedPayloadsPendingDispatch
          (FChunkedDataReader *this)

{
  uint uVar1;
  uint uVar2;
  FRecvQueueEntry *pFVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = (this->ReceiveQueue).AfterBack;
  uVar5 = 0;
  uVar2 = (this->ReceiveQueue).Front;
  for (iVar4 = 0; iVar4 != uVar1 - uVar2; iVar4 = iVar4 + 1) {
    pFVar3 = TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>
             ::operator[](&this->ReceiveQueue,iVar4);
    uVar5 = uVar5 + (pFVar3->RemainingByteCount == 0);
  }
  return uVar5;
}

// HasError @ 14423f8a0

bool __thiscall UE::Net::Private::FChunkedDataReader::HasError(FChunkedDataReader *this)

{
  return this->bHasError;
}

// ProcessExportPayload @ 144249280

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FChunkedDataReader::ProcessExportPayload
          (FChunkedDataReader *this,FNetSerializationContext *param_1,FRecvQueueEntry *param_2)

{
  FReferencesForImport *pFVar1;
  FName FVar2;
  wchar_t *pwVar3;
  FNetRefHandle_u_0 FVar4;
  wchar_t *pwVar5;
  FNetRefHandle_u_0 FVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  FNetSerializationContext *pFVar9;
  FNetSerializationContext *pFVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  FNetSerializationContext *pFVar14;
  FNetSerializationContext *pFVar15;
  longlong lVar16;
  ForElementType<FNetTracePacketContentEvent> FVar17;
  FNetTraceCollector *pFVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStackY_1948 [32];
  FNetBitStreamReader local_1918;
  FNetSerializationContext *local_18f8;
  FNetRefHandle_u_0 local_18f0;
  FNetSerializationContext local_18e8;
  FNetTraceCollector local_1578;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1948;
  local_18f8 = param_1;
  FNetBitStreamReader::FNetBitStreamReader(&local_1918);
  FNetBitStreamReader::InitBits
            (&local_1918,(param_2->Payload).AllocatorInstance.Data,(param_2->Payload).ArrayNum << 3)
  ;
  lVar16 = 6;
  pFVar9 = &local_18e8;
  pFVar10 = param_1;
  do {
    pFVar15 = pFVar10;
    pFVar14 = pFVar9;
    FVar2 = (pFVar15->ErrorContext).Error;
    pwVar3 = (pFVar15->ReadJournal).Entries[0].Name;
    FVar4 = (pFVar15->ReadJournal).Entries[0].NetRefHandle.field0_0x0;
    (pFVar14->ErrorContext).ObjectHandle.field0_0x0 =
         (pFVar15->ErrorContext).ObjectHandle.field0_0x0;
    (pFVar14->ErrorContext).Error = FVar2;
    uVar12 = (pFVar15->ReadJournal).Entries[0].BitOffset;
    uVar7 = *(undefined4 *)&(pFVar15->ReadJournal).Entries[0].field_0x14;
    pwVar5 = (pFVar15->ReadJournal).Entries[1].Name;
    (pFVar14->ReadJournal).Entries[0].Name = pwVar3;
    (pFVar14->ReadJournal).Entries[0].NetRefHandle.field0_0x0 = FVar4;
    FVar4 = (pFVar15->ReadJournal).Entries[1].NetRefHandle.field0_0x0;
    uVar13 = (pFVar15->ReadJournal).Entries[1].BitOffset;
    uVar8 = *(undefined4 *)&(pFVar15->ReadJournal).Entries[1].field_0x14;
    (pFVar14->ReadJournal).Entries[0].BitOffset = uVar12;
    *(undefined4 *)&(pFVar14->ReadJournal).Entries[0].field_0x14 = uVar7;
    (pFVar14->ReadJournal).Entries[1].Name = pwVar5;
    pwVar3 = (pFVar15->ReadJournal).Entries[2].Name;
    FVar6 = (pFVar15->ReadJournal).Entries[2].NetRefHandle.field0_0x0;
    (pFVar14->ReadJournal).Entries[1].NetRefHandle.field0_0x0 = FVar4;
    (pFVar14->ReadJournal).Entries[1].BitOffset = uVar13;
    *(undefined4 *)&(pFVar14->ReadJournal).Entries[1].field_0x14 = uVar8;
    uVar12 = (pFVar15->ReadJournal).Entries[2].BitOffset;
    uVar7 = *(undefined4 *)&(pFVar15->ReadJournal).Entries[2].field_0x14;
    pwVar5 = (pFVar15->ReadJournal).Entries[3].Name;
    (pFVar14->ReadJournal).Entries[2].Name = pwVar3;
    (pFVar14->ReadJournal).Entries[2].NetRefHandle.field0_0x0 = FVar6;
    FVar4 = (pFVar15->ReadJournal).Entries[3].NetRefHandle.field0_0x0;
    uVar13 = (pFVar15->ReadJournal).Entries[3].BitOffset;
    uVar8 = *(undefined4 *)&(pFVar15->ReadJournal).Entries[3].field_0x14;
    (pFVar14->ReadJournal).Entries[2].BitOffset = uVar12;
    *(undefined4 *)&(pFVar14->ReadJournal).Entries[2].field_0x14 = uVar7;
    (pFVar14->ReadJournal).Entries[3].Name = pwVar5;
    pwVar3 = (pFVar15->ReadJournal).Entries[4].Name;
    FVar6 = (pFVar15->ReadJournal).Entries[4].NetRefHandle.field0_0x0;
    (pFVar14->ReadJournal).Entries[3].NetRefHandle.field0_0x0 = FVar4;
    (pFVar14->ReadJournal).Entries[3].BitOffset = uVar13;
    *(undefined4 *)&(pFVar14->ReadJournal).Entries[3].field_0x14 = uVar8;
    (pFVar14->ReadJournal).Entries[4].Name = pwVar3;
    (pFVar14->ReadJournal).Entries[4].NetRefHandle.field0_0x0 = FVar6;
    lVar16 = lVar16 + -1;
    pFVar9 = (FNetSerializationContext *)&(pFVar14->ReadJournal).Entries[4].BitOffset;
    pFVar10 = (FNetSerializationContext *)&(pFVar15->ReadJournal).Entries[4].BitOffset;
  } while (lVar16 != 0);
  uVar7 = *(undefined4 *)&(pFVar15->ReadJournal).Entries[4].field_0x14;
  pwVar3 = (pFVar15->ReadJournal).Entries[5].Name;
  uVar20 = 0;
  FVar4 = (pFVar15->ReadJournal).Entries[5].NetRefHandle.field0_0x0;
  uVar12 = (pFVar15->ReadJournal).Entries[5].BitOffset;
  uVar8 = *(undefined4 *)&(pFVar15->ReadJournal).Entries[5].field_0x14;
  (pFVar14->ReadJournal).Entries[4].BitOffset = (pFVar15->ReadJournal).Entries[4].BitOffset;
  *(undefined4 *)&(pFVar14->ReadJournal).Entries[4].field_0x14 = uVar7;
  (pFVar14->ReadJournal).Entries[5].Name = pwVar3;
  pwVar3 = (pFVar15->ReadJournal).Entries[6].Name;
  FVar6 = (pFVar15->ReadJournal).Entries[6].NetRefHandle.field0_0x0;
  (pFVar14->ReadJournal).Entries[5].NetRefHandle.field0_0x0 = FVar4;
  (pFVar14->ReadJournal).Entries[5].BitOffset = uVar12;
  *(undefined4 *)&(pFVar14->ReadJournal).Entries[5].field_0x14 = uVar8;
  uVar12 = (pFVar15->ReadJournal).Entries[6].BitOffset;
  uVar7 = *(undefined4 *)&(pFVar15->ReadJournal).Entries[6].field_0x14;
  pwVar5 = (pFVar15->ReadJournal).Entries[7].Name;
  (pFVar14->ReadJournal).Entries[6].Name = pwVar3;
  (pFVar14->ReadJournal).Entries[6].NetRefHandle.field0_0x0 = FVar6;
  FVar4 = (pFVar15->ReadJournal).Entries[7].NetRefHandle.field0_0x0;
  uVar13 = (pFVar15->ReadJournal).Entries[7].BitOffset;
  uVar8 = *(undefined4 *)&(pFVar15->ReadJournal).Entries[7].field_0x14;
  (pFVar14->ReadJournal).Entries[6].BitOffset = uVar12;
  *(undefined4 *)&(pFVar14->ReadJournal).Entries[6].field_0x14 = uVar7;
  (pFVar14->ReadJournal).Entries[7].Name = pwVar5;
  pwVar3 = (pFVar15->ReadJournal).Entries[8].Name;
  FVar6 = (pFVar15->ReadJournal).Entries[8].NetRefHandle.field0_0x0;
  uVar12 = (pFVar15->ReadJournal).Entries[8].BitOffset;
  uVar7 = *(undefined4 *)&(pFVar15->ReadJournal).Entries[8].field_0x14;
  (pFVar14->ReadJournal).Entries[7].NetRefHandle.field0_0x0 = FVar4;
  (pFVar14->ReadJournal).Entries[7].BitOffset = uVar13;
  *(undefined4 *)&(pFVar14->ReadJournal).Entries[7].field_0x14 = uVar8;
  (pFVar14->ReadJournal).Entries[8].Name = pwVar3;
  (pFVar14->ReadJournal).Entries[8].NetRefHandle.field0_0x0 = FVar6;
  (pFVar14->ReadJournal).Entries[8].BitOffset = uVar12;
  *(undefined4 *)&(pFVar14->ReadJournal).Entries[8].field_0x14 = uVar7;
  local_18e8.BitStreamReader = &local_1918;
  local_18e8.BitStreamWriter = (FNetBitStreamWriter *)0x0;
  FNetTraceCollector::FNetTraceCollector(&local_1578,0x100);
  local_18e8.TraceCollector = &local_1578;
  uVar12 = 0xffffffff;
  pFVar18 = &local_1578;
  if (GNetTraceRuntimeVerbosity == 0) {
    pFVar18 = (FNetTraceCollector *)0x0;
  }
  if (pFVar18 != (FNetTraceCollector *)0x0) {
    uVar12 = FNetTrace::BeginPacketContentEvent(pFVar18,NameId,local_1918.BufferBitPosition);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Name = CreatePersistentNetDebugName(L"ExportsPayload",0xe);
      _Init_thread_footer(&::_TSS0);
    }
    uVar13 = FNetTrace::TraceName(::Name);
    FVar17 = (pFVar18->Events).AllocatorInstance.SecondaryData;
    if (FVar17 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar17 = (ForElementType<FNetTracePacketContentEvent>)&pFVar18->Events;
    }
    *(uint *)((longlong)FVar17 + (ulonglong)uVar12 * 0x10) = uVar13;
  }
  uVar13 = FNetBitStreamReader::ReadBits(&local_1918,0x20);
  if ((local_18e8.ErrorContext.Error == (FName)0x0) &&
     (bVar11 = FNetSerializationContext::IsBitStreamOverflown(&local_18e8), !bVar11)) {
    if (uVar13 != 0) {
      uVar19 = local_1918.BufferBitPosition - local_1918.BufferBitStartOffset;
      FNetBitStreamReader::Seek(&local_1918,uVar19 + uVar13);
      pFVar1 = (param_2->References).Ptr;
      local_18f0.Value = 0;
      bVar11 = FObjectReferenceCache::ReadExports
                         (this->ObjectReferenceCache,(FNetRefHandle *)&local_18f0._s_0,&local_18e8,
                          &pFVar1->MustBeMappedReferences,&pFVar1->IrisAsyncLoadingPriority);
      param_1 = local_18f8;
      if (!bVar11) goto LAB_14424951e;
      uVar20 = local_1918.BufferBitPosition - local_1918.BufferBitStartOffset;
      FNetBitStreamReader::Seek(&local_1918,uVar19);
      param_1 = local_18f8;
    }
    FIrisPackageMapExportsUtil::Deserialize
              (&local_18e8,&((param_2->References).Ptr)->QuantizedExports);
    if (local_18e8.ErrorContext.Error == (FName)0x0) {
      bVar11 = FNetSerializationContext::IsBitStreamOverflown(&local_18e8);
      if ((!bVar11) && (uVar13 != 0)) {
        FNetBitStreamReader::Seek(&local_1918,uVar20);
      }
      if ((local_18e8.ErrorContext.Error == (FName)0x0) &&
         (bVar11 = FNetSerializationContext::IsBitStreamOverflown(&local_18e8), !bVar11)) {
        bVar11 = true;
        goto LAB_144249521;
      }
    }
  }
LAB_14424951e:
  bVar11 = false;
LAB_144249521:
  if (uVar12 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar18,uVar12,local_1918.BufferBitPosition);
    uVar12 = 0xffffffff;
  }
  if (param_1->TraceCollector != (FNetTraceCollector *)0x0) {
    FNetTrace::FoldTraceCollector
              (param_1->TraceCollector,&local_1578,
               param_1->BitStreamReader->BufferBitPosition + this->MultiExportsPayLoadOffset,3);
    this->MultiExportsPayLoadOffset =
         this->MultiExportsPayLoadOffset +
         (local_1918.BufferBitPosition - local_1918.BufferBitStartOffset);
  }
  if (uVar12 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar18,uVar12,local_1918.BufferBitPosition);
  }
  if (local_1578.ReferencedObjectIds.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_1578.ReferencedObjectIds.AllocatorInstance.SecondaryData);
  }
  if (local_1578.Events.AllocatorInstance.SecondaryData !=
      (ForElementType<FNetTracePacketContentEvent>)0x0) {
    FMemory::Free((void *)local_1578.Events.AllocatorInstance.SecondaryData);
  }
  FNetBitStreamReader::~FNetBitStreamReader(&local_1918);
  return bVar11;
}

// ReadData @ 144249e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FChunkedDataReader::ReadData
          (FChunkedDataReader *this,FNetSerializationContext *param_1)

{
  FDataChunk *this_00;
  ForElementType<FNetTracePacketContentEvent> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  ulonglong uVar11;
  ForElementType<FNetTracePacketContentEvent> FVar12;
  FNetTraceCollector *pFVar13;
  FNetBitStreamReader *this_01;
  FNetTraceCollector *pFVar14;
  undefined1 auStack_1b8 [32];
  uint local_198;
  uint local_190;
  uint local_188;
  uint local_178;
  FNetSerializationContext *local_170;
  FNetBitStreamReader *local_168;
  FNetTraceCollector *local_158;
  FInternalNetSerializationContext local_150;
  FInitParameters local_118;
  TStringBuilderBase<wchar_t> local_e8;
  wchar_t local_c8 [64];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_1b8;
  this_01 = param_1->BitStreamReader;
  local_118.ReplicationSystem = this->ReplicationSystem;
  local_118.ObjectResolveContext.bForceSyncLoad = (this->ResolveContext).bForceSyncLoad;
  local_118.ObjectResolveContext._17_7_ = *(undefined7 *)&(this->ResolveContext).field_0x11;
  local_150.bSerializeObjectReferencesAsRemoteIds = 0;
  local_150.bInlineObjectReferenceExports = 0;
  local_150.bDowngradeAutonomousProxyRole = 0;
  local_150.ReplicationSystem = (UReplicationSystem *)0x0;
  local_150.ObjectReferenceCache = (FObjectReferenceCache *)0x0;
  local_118.ObjectResolveContext.RemoteNetTokenStoreState =
       (this->ResolveContext).RemoteNetTokenStoreState;
  local_118.ObjectResolveContext.ConnectionId = (this->ResolveContext).ConnectionId;
  local_118.ObjectResolveContext.AsyncLoadingPriority = (this->ResolveContext).AsyncLoadingPriority;
  local_150.ResolveContext.RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
  local_150.ResolveContext.ConnectionId = 0;
  local_150.ResolveContext.AsyncLoadingPriority = -1;
  local_150.ResolveContext.bForceSyncLoad = false;
  local_150.PackageMap = (UIrisObjectReferencePackageMap *)0x0;
  local_118.PackageMap = (UIrisObjectReferencePackageMap *)0x0;
  local_170 = param_1;
  local_168 = this_01;
  FInternalNetSerializationContext::Init(&local_150,&local_118);
  param_1->LocalConnectionId = (this->InitParams).ConnectionId;
  uVar8 = 0xffff;
  param_1->InternalContext = &local_150;
  uVar5 = FNetBitStreamReader::ReadBits(this_01,1);
  if ((uVar5 & 1) != 0) {
    while (this_01->OverflowBitCount == 0) {
      uVar5 = 0xffffffff;
      local_178 = 0xffffffff;
      pFVar13 = (FNetTraceCollector *)0x0;
      if (1 < GNetTraceRuntimeVerbosity) {
        pFVar13 = param_1->TraceCollector;
      }
      local_158 = pFVar13;
      if (pFVar13 != (FNetTraceCollector *)0x0) {
        uVar5 = FNetTrace::BeginPacketContentEvent(pFVar13,NameId,this_01->BufferBitPosition);
        local_178 = uVar5;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          DataChunk = CreatePersistentNetDebugName(L"DataChunk",9);
          _Init_thread_footer(&::_TSS0);
        }
        uVar6 = FNetTrace::TraceName(DataChunk);
        FVar1 = (pFVar13->Events).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar13->Events;
        if (FVar1 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar12 = FVar1;
        }
        *(uint *)((longlong)FVar12 + (ulonglong)uVar5 * 0x10) = uVar6;
      }
      pFVar14 = (FNetTraceCollector *)0x0;
      if (2 < GNetTraceRuntimeVerbosity) {
        pFVar14 = param_1->TraceCollector;
      }
      uVar6 = 0xffffffff;
      if (pFVar14 != (FNetTraceCollector *)0x0) {
        uVar6 = FNetTrace::BeginPacketContentEvent(pFVar14,NameId,this_01->BufferBitPosition);
        uVar7 = FNetTrace::TraceName((wchar_t *)0x0);
        FVar1 = (pFVar14->Events).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar14->Events;
        if (FVar1 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar12 = FVar1;
        }
        *(uint *)((longlong)FVar12 + (ulonglong)uVar6 * 0x10) = uVar7;
      }
      uVar7 = FNetBitStreamReader::ReadBits(this_01,1);
      if ((uVar7 & 1) == 0) {
        uVar8 = FNetBitStreamReader::ReadBits(this_01,0xb);
      }
      else {
        uVar8 = (uint)((short)uVar8 + 1U & 0x7ff);
      }
      if (this_01->OverflowBitCount != 0) {
        if (uVar6 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar14,uVar6,this_01->BufferBitPosition);
        }
        param_1 = local_170;
        if (uVar5 != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(pFVar13,uVar5,this_01->BufferBitPosition);
          param_1 = local_170;
        }
        break;
      }
      uVar9 = (short)uVar8 - this->ExpectedSeq & 0x7ff;
      uVar7 = (this->DataChunksPendingAssembly).AfterBack - (this->DataChunksPendingAssembly).Front;
      uVar5 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar7) {
        uVar5 = uVar7;
      }
      uVar5 = TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>
              ::NormalizeCapacity(&this->DataChunksPendingAssembly,uVar5);
      if ((this->DataChunksPendingAssembly).IndexMask + 1 < uVar5) {
        TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>::
        Reallocate(&this->DataChunksPendingAssembly,uVar5);
      }
      uVar5 = (this->DataChunksPendingAssembly).AfterBack;
      uVar7 = (this->DataChunksPendingAssembly).Front;
      uVar10 = uVar5 - uVar7;
      while (uVar10 <= uVar9) {
        uVar5 = TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>
                ::NormalizeCapacity(&this->DataChunksPendingAssembly,(uVar5 - uVar7) + 1);
        if ((this->DataChunksPendingAssembly).IndexMask + 1 < uVar5) {
          TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>
          ::Reallocate(&this->DataChunksPendingAssembly,uVar5);
        }
        uVar5 = (this->DataChunksPendingAssembly).AfterBack;
        uVar11 = (ulonglong)((this->DataChunksPendingAssembly).IndexMask & uVar5);
        (this->DataChunksPendingAssembly).AfterBack = uVar5 + 1;
        pFVar2 = (this->DataChunksPendingAssembly).AllocatorInstance.Data;
        *(undefined8 *)(pFVar2 + uVar11 * 0x18) = 0;
        *(undefined8 *)(pFVar2 + uVar11 * 0x18 + 8) = 0;
        *(undefined4 *)(pFVar2 + uVar11 * 0x18 + 0x10) = 0;
        *(undefined4 *)(pFVar2 + uVar11 * 0x18 + 0x14) = 0xffff;
        uVar5 = (this->DataChunksPendingAssembly).AfterBack;
        uVar7 = (this->DataChunksPendingAssembly).Front;
        this_01 = local_168;
        uVar10 = uVar5 - uVar7;
      }
      uVar10 = (uint)uVar9;
      if (((int)(uVar5 - uVar7) <= (int)uVar10) &&
         (local_198 = uVar10, local_190 = uVar5 - uVar7,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < Num())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                            ,0x3e3,
                            L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = (FDataChunk *)
                ((this->DataChunksPendingAssembly).AllocatorInstance.Data +
                (ulonglong)
                ((this->DataChunksPendingAssembly).Front + uVar10 &
                (this->DataChunksPendingAssembly).IndexMask) * 0x18);
      this_00->SequenceNumber = uVar9 + this->ExpectedSeq;
      FDataChunk::Deserialize(this_00,local_170);
      local_e8.Base = local_c8;
      local_e8.CurPos = local_c8;
      local_e8.bIsDynamic = false;
      local_e8.bIsExternal = false;
      local_e8.End = (wchar_t *)local_48;
      if (this_00->bIsFirstChunk == 0) {
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_e8,L"Seq %u");
      }
      else {
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_e8,L"Seq %u First part of %u");
      }
      if (uVar6 != 0xffffffff) {
        if (local_e8.End < local_e8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
        }
        *local_e8.CurPos = L'\0';
        uVar5 = FNetTrace::TraceName(local_e8.Base);
        FVar1 = (pFVar14->Events).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<FNetTracePacketContentEvent>)&pFVar14->Events;
        if (FVar1 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar12 = FVar1;
        }
        *(uint *)((longlong)FVar12 + (ulonglong)uVar6 * 0x10) = uVar5;
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
      if (5 < (byte)LogIrisChunkedDataStream._0_1_) {
        local_188 = (uint)this->ExpectedSeq;
        local_198 = uVar8 & 0xffff;
        local_190 = (uint)this_00->SequenceNumber;
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisChunkedDataStream);
      }
      if (uVar6 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar14,uVar6,this_01->BufferBitPosition);
      }
      if (local_178 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(local_158,local_178,this_01->BufferBitPosition);
      }
      uVar5 = FNetBitStreamReader::ReadBits(this_01,1);
      param_1 = local_170;
      if ((uVar5 & 1) == 0) break;
    }
  }
  AssemblePayloadsPendingAssembly(this,param_1);
  param_1->InternalContext = (FInternalNetSerializationContext *)0x0;
  return;
}

// ResetResolvedReferences @ 14424fd00

void __thiscall
UE::Net::Private::FChunkedDataReader::ResetResolvedReferences(FChunkedDataReader *this)

{
  ForElementType<UE::Net::FNetRefHandle> FVar1;
  int iVar2;
  ForElementType<UE::Net::FNetRefHandle> FVar3;
  undefined1 local_res8 [8];
  
  if (this->ObjectReferenceCache != (FObjectReferenceCache *)0x0) {
    FVar3 = (this->ResolvedReferences).AllocatorInstance.SecondaryData;
    iVar2 = (this->ResolvedReferences).ArrayNum;
    if (FVar3 == (ForElementType<UE::Net::FNetRefHandle>)0x0) {
      FVar3 = (ForElementType<UE::Net::FNetRefHandle>)&this->ResolvedReferences;
    }
    FVar1 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar3 + (longlong)iVar2 * 8);
    while( true ) {
      if ((this->ResolvedReferences).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Net::FNetRefHandle,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar3 == FVar1) break;
      FObjectReferenceCache::RemoveTrackedQueuedBatchObjectReference
                (this->ObjectReferenceCache,(FNetRefHandle)*(FNetRefHandle_u_0 *)FVar3);
      FVar3 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar3 + 8);
    }
  }
  return;
}

// SetError @ 144251780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FChunkedDataReader::SetError(FChunkedDataReader *this,FString *param_1)

{
  if (1 < (byte)LogIrisChunkedDataStream._0_1_) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisChunkedDataStream);
  }
  if (this->bHasError == false) {
    this->bHasError = true;
  }
  return;
}

// TryResolveUnresolvedMustBeMappedReferences @ 144254e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FChunkedDataReader::TryResolveUnresolvedMustBeMappedReferences
          (FChunkedDataReader *this,
          TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *param_1,
          EIrisAsyncLoadingPriority param_2)

{
  int *piVar1;
  ForElementType<UE::Net::FNetRefHandle> FVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ENetObjectReferenceResolveResult EVar9;
  FNetRefHandle_u_0 *pFVar10;
  ForElementType<UE::Net::FNetRefHandle> FVar11;
  int iVar12;
  FNetRefHandle_u_0 *pFVar13;
  ForElementType<UE::Net::FNetRefHandle> FVar14;
  ForElementType<UE::Net::FNetRefHandle> FVar15;
  uint uVar16;
  ForElementType<UE::Net::FNetRefHandle> FVar17;
  ForElementType<UE::Net::FNetRefHandle> FVar18;
  undefined1 auStackY_118 [32];
  undefined1 local_c8;
  undefined1 local_c7 [7];
  TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> local_c0;
  FNetRefHandle_u_0 local_b0;
  UObject *local_a8;
  FNetRefHandle_u_0 local_a0;
  undefined8 local_98;
  ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_> local_90;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_44 = 4;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar3 = param_1->ArrayNum;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  local_90.SecondaryData = (ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>)0x0;
  local_48 = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&local_c0.AllocatorInstance,0,&local_c0.ArrayMax);
  }
  uVar3 = param_1->ArrayNum;
  if (local_48 < (int)uVar3) {
    iVar12 = uVar3 - local_48;
    iVar8 = Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>_>
                      (0x10,8,iVar12,&local_90,&local_48,&local_44);
    FVar14 = (ForElementType<UE::Net::FNetRefHandle>)&local_90;
    if (local_90.SecondaryData != (ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>)0x0) {
      FVar14 = (ForElementType<UE::Net::FNetRefHandle>)local_90.SecondaryData;
    }
    DefaultConstructItems<TTuple<UE::Net::FNetRefHandle,UObject_*>,int>
              ((FNetRefHandle_u_0 *)((longlong)iVar8 * 0x10 + (longlong)FVar14),iVar12);
  }
  else {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if ((int)uVar3 < local_48) {
      uVar16 = local_48 - uVar3;
      if (((int)(uVar3 | uVar16) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (uVar16 != 0) {
        FVar14 = (ForElementType<UE::Net::FNetRefHandle>)&local_90;
        if (local_90.SecondaryData != (ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>)0x0
           ) {
          FVar14 = (ForElementType<UE::Net::FNetRefHandle>)local_90.SecondaryData;
        }
        pFVar10 = (FNetRefHandle_u_0 *)((longlong)(int)uVar3 * 0x10 + (longlong)FVar14);
        iVar8 = (local_48 - uVar3) - uVar16;
        if (iVar8 != 0) {
          memmove(pFVar10,pFVar10 + (longlong)(int)uVar16 * 2,(longlong)iVar8 << 4);
        }
        local_48 = local_48 - uVar16;
        Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>_>
                  (0x10,8,&local_90,local_48,&local_44);
      }
    }
  }
  iVar8 = ConvertAsyncLoadingPriority(param_2);
  (this->ResolveContext).AsyncLoadingPriority = iVar8;
  pFVar13 = (FNetRefHandle_u_0 *)(param_1->AllocatorInstance).Data;
  iVar8 = param_1->ArrayNum;
  pFVar10 = pFVar13 + iVar8;
  while( true ) {
    if (param_1->ArrayNum != iVar8) {
      local_c8 = 0;
      `TCheckedPointerIterator<UE::Net::FNetRefHandle,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_c8);
    }
    iVar12 = local_48;
    if (pFVar13 == pFVar10) break;
    local_b0 = (FNetRefHandle_u_0)*(FNetRefHandle_u_0 *)&pFVar13->_s_0;
    local_a8 = (UObject *)0x0;
    local_98 = 0;
    local_a0 = local_b0;
    EVar9 = FObjectReferenceCache::ResolveObjectReference
                      (this->ObjectReferenceCache,(FNetObjectReference *)&local_a0._s_0,
                       &this->ResolveContext,&local_a8);
    if (((EVar9 & HasUnresolvedMustBeMappedReferences) == None) ||
       (bVar6 = FObjectReferenceCache::IsNetRefHandleBroken
                          (this->ObjectReferenceCache,(FNetRefHandle)local_b0._s_0,true), bVar6)) {
      if (EVar9 == None) {
        iVar12 = local_48;
        if (local_48 == local_44) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>_>
                             (0x810,&local_90,&local_44);
        }
        local_48 = iVar12 + 1;
        FVar14 = (ForElementType<UE::Net::FNetRefHandle>)&local_90;
        if (local_90.SecondaryData != (ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>)0x0
           ) {
          FVar14 = (ForElementType<UE::Net::FNetRefHandle>)local_90.SecondaryData;
        }
        ((FNetRefHandle_u_0 *)((longlong)FVar14 + (longlong)iVar12 * 0x10))->_s_0 =
             (FNetRefHandle_u_0_s_0)local_b0;
        ((FNetRefHandle_u_0 *)((longlong)FVar14 + 8))[(longlong)iVar12 * 2].Value =
             (ulong64)local_a8;
      }
      pFVar13 = pFVar13 + 1;
    }
    else {
      if (((local_c0.AllocatorInstance.Data <= &local_b0) &&
          (&local_b0 <
           (FNetRefHandle_u_0 *)(local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayMax * 8))
          ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar12 = local_c0.ArrayNum;
      if (local_c0.ArrayNum == local_c0.ArrayMax) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_c0.AllocatorInstance,&local_c0.ArrayMax);
      }
      pFVar13 = pFVar13 + 1;
      local_c0.ArrayNum = iVar12 + 1;
      ((FNetRefHandle_u_0 *)(local_c0.AllocatorInstance.Data + (longlong)iVar12 * 8))->_s_0 =
           (FNetRefHandle_u_0_s_0)local_b0;
    }
  }
  FVar14 = (ForElementType<UE::Net::FNetRefHandle>)&local_90;
  if (local_90.SecondaryData != (ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>)0x0) {
    FVar14 = (ForElementType<UE::Net::FNetRefHandle>)local_90.SecondaryData;
  }
  FVar15 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)local_48 * 0x10 + (longlong)FVar14);
  do {
    if (local_48 != iVar12) {
      local_c7[0] = 0;
      `TCheckedPointerIterator<TTuple<UE::Net::FNetRefHandle,UObject_*>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_c7);
    }
    if (FVar14 == FVar15) {
      if (local_c0.ArrayNum == 0) {
        param_1->ArrayNum = 0;
        if (param_1->ArrayMax < 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
        }
        bVar6 = true;
      }
      else {
        if (param_1 != &local_c0) {
          pFVar4 = (param_1->AllocatorInstance).Data;
          iVar8 = local_c0.ArrayNum;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
            iVar8 = local_c0.ArrayNum;
          }
          (param_1->AllocatorInstance).Data = local_c0.AllocatorInstance.Data;
          param_1->ArrayMax = local_c0.ArrayMax;
          local_c0.ArrayNum = 0;
          local_c0.ArrayMax = 0;
          local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          param_1->ArrayNum = iVar8;
        }
        bVar6 = false;
      }
      (this->ResolveContext).AsyncLoadingPriority = -1;
      if (local_90.SecondaryData != (ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>)0x0)
      {
        FMemory::Free((void *)local_90.SecondaryData);
      }
      if ((FNetRefHandle_u_0 *)local_c0.AllocatorInstance.Data != (FNetRefHandle_u_0 *)0x0) {
        FMemory::Free(local_c0.AllocatorInstance.Data);
      }
      return bVar6;
    }
    FVar17 = (ForElementType<UE::Net::FNetRefHandle>)&this->ResolvedReferences;
    FVar18 = (this->ResolvedReferences).AllocatorInstance.SecondaryData;
    FVar11 = FVar17;
    if (FVar18 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
      FVar11 = FVar18;
    }
    FVar2 = (ForElementType<UE::Net::FNetRefHandle>)
            ((longlong)FVar11 + (longlong)(this->ResolvedReferences).ArrayNum * 8);
    if (FVar11 != FVar2) {
      do {
        if ((*(ulonglong *)FVar11 & 0x3fffffffffffff) == (*(ulonglong *)FVar14 & 0x3fffffffffffff))
        goto LAB_1442552c2;
        FVar11 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar11 + 8);
      } while (FVar11 != FVar2);
    }
    FVar11 = FVar17;
    if (FVar18 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
      FVar11 = FVar18;
    }
    if ((ulonglong)FVar11 <= (ulonglong)FVar14) {
      if (FVar18 == (ForElementType<UE::Net::FNetRefHandle>)0x0) {
        FVar18 = FVar17;
      }
      if (((ulonglong)FVar14 <
           (ulonglong)((longlong)FVar18 + (longlong)(this->ResolvedReferences).ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    iVar8 = (this->ResolvedReferences).ArrayNum;
    piVar1 = &(this->ResolvedReferences).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
                        (0x808,(ForElementType<UE::Net::FNetRefHandle> *)FVar17,piVar1);
    }
    (this->ResolvedReferences).ArrayNum = iVar8 + 1;
    FVar18 = (this->ResolvedReferences).AllocatorInstance.SecondaryData;
    if (FVar18 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
      FVar17 = FVar18;
    }
    ((FNetRefHandle_u_0 *)((longlong)FVar17 + (longlong)iVar8 * 8))->_s_0 =
         *(FNetRefHandle_u_0_s_0 *)FVar14;
    FObjectReferenceCache::AddTrackedQueuedBatchObjectReference
              (this->ObjectReferenceCache,(FNetRefHandle)*(FNetRefHandle_u_0 *)FVar14,
               (UObject *)*(FNetRefHandle_u_0 *)((longlong)FVar14 + 8));
LAB_1442552c2:
    FVar14 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)FVar14 + 0x10);
  } while( true );
}

