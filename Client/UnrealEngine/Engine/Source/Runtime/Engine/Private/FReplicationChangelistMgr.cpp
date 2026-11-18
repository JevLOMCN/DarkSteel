// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FReplicationChangelistMgr @ 1484bc0f0

/* WARNING: Enum "Type": Some values do not have unique names */

FReplicationChangelistMgr * __thiscall
FReplicationChangelistMgr::FReplicationChangelistMgr
          (FReplicationChangelistMgr *this,TSharedRef<FRepLayout_const_,1> *param_1,uchar *param_2,
          UObject *param_3,FCustomDeltaChangelistState *param_4)

{
  FRepStateStaticBuffer *pFVar1;
  FRepLayout *this_00;
  TReferenceControllerBase<1> *pTVar2;
  FRepChangelistState *pFVar3;
  TSharedRef<FRepLayout_const_,1> *pTVar4;
  longlong lVar5;
  TSharedRef<FRepLayout_const_,1> local_28;
  
  pFVar3 = &this->RepChangelistState;
  this->LastReplicationFrame = 0;
  this->LastInitialReplicationFrame = 0;
  lVar5 = 0x40;
  do {
    pFVar3->ChangeHistory[0].OutPacketIdRange.First = -1;
    pFVar3->ChangeHistory[0].OutPacketIdRange.Last = -1;
    pFVar3->ChangeHistory[0].Changed.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar3->ChangeHistory[0].Changed.ArrayNum = 0;
    pFVar3->ChangeHistory[0].Changed.ArrayMax = 0;
    pFVar3->ChangeHistory[0].Resend = false;
    pFVar3 = (FRepChangelistState *)(pFVar3->ChangeHistory + 1);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  pFVar1 = &(this->RepChangelistState).StaticBuffer;
  (this->RepChangelistState).CustomDeltaChangelistState.Ptr = param_4;
  (this->RepChangelistState).HistoryStart = 0;
  (this->RepChangelistState).HistoryEnd = 0;
  (this->RepChangelistState).CompareIndex = 0;
  (this->RepChangelistState).CustomDeltaChangeIndex = 0;
  this_00 = param_1->Object;
  pTVar4 = TSharedFromThis<FRepLayout,1>::AsShared
                     ((TSharedFromThis<FRepLayout,1> *)&this_00->_padding_,&local_28);
  (pFVar1->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepChangelistState).StaticBuffer.Buffer.ArrayNum = 0;
  (this->RepChangelistState).StaticBuffer.Buffer.ArrayMax = 0;
  (this->RepChangelistState).StaticBuffer.RepLayout.Object = pTVar4->Object;
  pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
  (this->RepChangelistState).StaticBuffer.RepLayout.SharedReferenceCount.ReferenceController =
       pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_28.SharedReferenceCount.ReferenceController._4_4_,
                      local_28.SharedReferenceCount.ReferenceController._0_4_));
  if (((this_00->Flags & NoReplicatedProperties) == None) && ((this_00->Parents).ArrayNum != 0)) {
    if (this_00->ShadowDataBufferSize == 0) {
      if (1 < (byte)LogRep._0_1_) {
        if (this_00->Owner == (UStruct *)0x0) {
          ::FString::FString((FString *)&local_28,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this_00->Owner,(FString *)&local_28,(UObject *)0x0);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
        if (local_28.Object != (FRepLayout *)0x0) {
          FMemory::Free(local_28.Object);
        }
      }
    }
    else {
      FRepLayout::InitRepStateStaticBuffer
                (this_00,pFVar1,(TRepDataBufferBase<0,unsigned_char_const_>)param_2);
    }
  }
  (this->RepChangelistState).SharedSerialization.SharedPropertyInfo.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RepChangelistState).SharedSerialization.SharedPropertyInfo.ArrayNum = 0;
  (this->RepChangelistState).SharedSerialization.SharedPropertyInfo.ArrayMax = 0;
  (this->RepChangelistState).SharedSerialization.SerializedProperties.Ptr = (FNetBitWriter *)0x0;
  (this->RepChangelistState).SharedSerialization.NetTokensPendingExport.AllocatorInstance.
  SecondaryData = (ForElementType<UE::Net::FNetToken>)0x0;
  (this->RepChangelistState).SharedSerialization.NetTokensPendingExport.ArrayNum = 0;
  (this->RepChangelistState).SharedSerialization.NetTokensPendingExport.ArrayMax = 4;
  (this->RepChangelistState).SharedSerialization.bIsValid = false;
  return this;
}

// ~FReplicationChangelistMgr @ 1484bde90

void __thiscall
FReplicationChangelistMgr::~FReplicationChangelistMgr(FReplicationChangelistMgr *this)

{
  FRepChangelistState::~FRepChangelistState(&this->RepChangelistState);
  return;
}

// CountBytes @ 1484cd9d0

void __thiscall
FReplicationChangelistMgr::CountBytes(FReplicationChangelistMgr *this,FArchive *param_1)

{
  FString local_48;
  FScopeMarker local_38;
  
  ::FString::FString(&local_48,"FReplicationChangelistMgr::CountBytes");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker(&local_38,param_1,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  FRepChangelistState::CountBytes(&this->RepChangelistState,param_1);
  ::FString::FString(&local_48,"RepChangelistState");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_38);
  return;
}

