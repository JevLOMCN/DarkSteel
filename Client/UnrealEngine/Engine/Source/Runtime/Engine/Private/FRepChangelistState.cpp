// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FRepChangelistState @ 1484bbe60

/* WARNING: Enum "Type": Some values do not have unique names */

FRepChangelistState * __thiscall
FRepChangelistState::FRepChangelistState
          (FRepChangelistState *this,TSharedRef<FRepLayout_const_,1> *param_1,uchar *param_2,
          UObject *param_3,FCustomDeltaChangelistState *param_4)

{
  FRepLayout *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedRef<FRepLayout_const_,1> *pTVar3;
  longlong lVar4;
  TSharedRef<FRepLayout_const_,1> local_18;
  
  lVar4 = 0x40;
  pTVar2 = &this->ChangeHistory[0].Changed;
  do {
    *(undefined8 *)((longlong)(pTVar2 + -1) + 8) = 0xffffffffffffffff;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
    *(bool *)(pTVar2 + 1) = false;
    pTVar2 = pTVar2 + 2;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  (this->CustomDeltaChangelistState).Ptr = param_4;
  this->HistoryStart = 0;
  this->HistoryEnd = 0;
  this->CompareIndex = 0;
  this->CustomDeltaChangeIndex = 0;
  this_00 = param_1->Object;
  pTVar3 = TSharedFromThis<FRepLayout,1>::AsShared
                     ((TSharedFromThis<FRepLayout,1> *)&this_00->_padding_,&local_18);
  (this->StaticBuffer).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticBuffer).Buffer.ArrayNum = 0;
  (this->StaticBuffer).Buffer.ArrayMax = 0;
  (this->StaticBuffer).RepLayout.Object = pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (this->StaticBuffer).RepLayout.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_18.SharedReferenceCount.ReferenceController._4_4_,
                      local_18.SharedReferenceCount.ReferenceController._0_4_));
  if (((this_00->Flags & NoReplicatedProperties) == None) && ((this_00->Parents).ArrayNum != 0)) {
    if (this_00->ShadowDataBufferSize == 0) {
      if (1 < (byte)LogRep._0_1_) {
        if (this_00->Owner == (UStruct *)0x0) {
          ::FString::FString((FString *)&local_18,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this_00->Owner,(FString *)&local_18,(UObject *)0x0);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
        if (local_18.Object != (FRepLayout *)0x0) {
          FMemory::Free(local_18.Object);
        }
      }
    }
    else {
      FRepLayout::InitRepStateStaticBuffer
                (this_00,&this->StaticBuffer,(TRepDataBufferBase<0,unsigned_char_const_>)param_2);
    }
  }
  (this->SharedSerialization).SharedPropertyInfo.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SharedSerialization).SharedPropertyInfo.ArrayNum = 0;
  (this->SharedSerialization).SharedPropertyInfo.ArrayMax = 0;
  (this->SharedSerialization).SerializedProperties.Ptr = (FNetBitWriter *)0x0;
  (this->SharedSerialization).NetTokensPendingExport.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetToken>)0x0;
  (this->SharedSerialization).NetTokensPendingExport.ArrayNum = 0;
  (this->SharedSerialization).NetTokensPendingExport.ArrayMax = 4;
  (this->SharedSerialization).bIsValid = false;
  return this;
}

// ~FRepChangelistState @ 1484bd900

void __thiscall FRepChangelistState::~FRepChangelistState(FRepChangelistState *this)

{
  int *piVar1;
  FRepStateStaticBuffer *pFVar2;
  int iVar3;
  FCustomDeltaChangelistState *pFVar4;
  FScriptContainerElement *pFVar5;
  FRepLayout *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->CustomDeltaChangelistState).Ptr;
  (this->CustomDeltaChangelistState).Ptr = (FCustomDeltaChangelistState *)0x0;
  if (pFVar4 != (FCustomDeltaChangelistState *)0x0) {
    DestructItems<FDeltaArrayHistoryState,int>
              ((FDeltaArrayHistoryState *)(pFVar4->ArrayStates).AllocatorInstance.Data,
               (pFVar4->ArrayStates).ArrayNum);
    pFVar5 = (pFVar4->ArrayStates).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    ::operator_delete(pFVar4,0x18);
  }
  pFVar2 = &this->StaticBuffer;
  piVar1 = &(this->StaticBuffer).Buffer.ArrayMax;
  (this->StaticBuffer).Buffer.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)pFVar2,0,piVar1);
  }
  FRepSerializationSharedInfo::~FRepSerializationSharedInfo(&this->SharedSerialization);
  if (0 < (this->StaticBuffer).Buffer.ArrayNum) {
    pFVar5 = (pFVar2->Buffer).AllocatorInstance.Data;
    pFVar6 = (this->StaticBuffer).RepLayout.Object;
    iVar3 = (pFVar6->Parents).ArrayNum;
    pFVar11 = (pFVar6->Parents).AllocatorInstance.Data;
    pFVar13 = pFVar11 + (longlong)iVar3 * 0x30;
    while( true ) {
      if ((pFVar6->Parents).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRepParentCmd_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar11 == pFVar13) break;
      if (*(int *)(pFVar11 + 0x10) == 0) {
        if ((this->StaticBuffer).Buffer.ArrayNum <
            *(int *)(*(longlong *)pFVar11 + 0x34) * *(int *)(*(longlong *)pFVar11 + 0x30) +
            *(int *)(pFVar11 + 0x18)) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Parent.ShadowOffset + Parent.Property->GetSize()) <= InShadowData.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                             ,0x1ce5,L"");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        plVar7 = *(longlong **)pFVar11;
        if ((plVar7[7] & 0x1000000000U) == 0) {
          (**(code **)(*plVar7 + 0x138))(plVar7,pFVar5 + *(int *)(pFVar11 + 0x18));
        }
      }
      pFVar11 = pFVar11 + 0x30;
    }
    (this->StaticBuffer).Buffer.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)pFVar2,0,piVar1);
    }
  }
  iVar3 = *piVar1;
  (this->StaticBuffer).Buffer.ArrayNum = 0;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (1,1,0,iVar3,(ForAnyElementType *)pFVar2,0,piVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StaticBuffer).RepLayout.SharedReferenceCount.ReferenceController);
  pFVar5 = (pFVar2->Buffer).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar4 = (this->CustomDeltaChangelistState).Ptr;
  if (pFVar4 != (FCustomDeltaChangelistState *)0x0) {
    DestructItems<FDeltaArrayHistoryState,int>
              ((FDeltaArrayHistoryState *)(pFVar4->ArrayStates).AllocatorInstance.Data,
               (pFVar4->ArrayStates).ArrayNum);
    pFVar5 = (pFVar4->ArrayStates).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    ::operator_delete(pFVar4,0x18);
  }
  pTVar12 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)&this->HistoryStart;
  lVar10 = 0x40;
  do {
    pFVar5 = pTVar12[-2].AllocatorInstance.Data;
    pTVar12 = pTVar12 + -2;
    lVar10 = lVar10 + -1;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
  } while (lVar10 != 0);
  return;
}

// CountBytes @ 1484ccf10

void __thiscall FRepChangelistState::CountBytes(FRepChangelistState *this,FArchive *param_1)

{
  int *piVar1;
  TUniquePtr<FCustomDeltaChangelistState,TDefaultDelete<FCustomDeltaChangelistState>_> *pTVar2;
  int *piVar3;
  FString local_48;
  FScopeMarker local_38;
  
  ::FString::FString(&local_48,"FRepChangelistState::CountBytes");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker(&local_38,param_1,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  pTVar2 = &this->CustomDeltaChangelistState;
  if (this != (FRepChangelistState *)pTVar2) {
    piVar3 = &this->ChangeHistory[0].Changed.ArrayNum;
    do {
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(longlong)*piVar3 * 2,(longlong)piVar3[1] * 2);
      piVar1 = piVar3 + 4;
      piVar3 = piVar3 + 8;
    } while ((TUniquePtr<FCustomDeltaChangelistState,TDefaultDelete<FCustomDeltaChangelistState>_> *
             )piVar1 != pTVar2);
  }
  ::FString::FString(&local_48,"ChangeHistory");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  FRepStateStaticBuffer::CountBytes(&this->StaticBuffer,param_1);
  ::FString::FString(&local_48,"StaticBuffer");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  FRepSerializationSharedInfo::CountBytes(&this->SharedSerialization,param_1);
  ::FString::FString(&local_48,"SharedSerialization");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (pTVar2->Ptr != (FCustomDeltaChangelistState *)0x0) {
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x18,0x18);
    FCustomDeltaChangelistState::CountBytes(pTVar2->Ptr,param_1);
    ::FString::FString(&local_48,"CustomDeltaChangelistState");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_38);
  return;
}

