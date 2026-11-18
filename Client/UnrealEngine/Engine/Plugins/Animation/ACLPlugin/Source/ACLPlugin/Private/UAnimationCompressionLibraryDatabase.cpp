// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ACLPlugin
// Functions: 21

// StaticClass @ 14de8f560

UClass * __cdecl UAnimationCompressionLibraryDatabase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationCompressionLibraryDatabase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ACLPlugin",L"AnimationCompressionLibraryDatabase",
               &Z_Registration_Info_UClass_UAnimationCompressionLibraryDatabase.InnerSingleton,
               StaticRegisterNativesUAnimationCompressionLibraryDatabase,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationCompressionLibraryDatabase>,
               InternalVTableHelperCtorCaller<UAnimationCompressionLibraryDatabase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationCompressionLibraryDatabase.InnerSingleton;
}

// UAnimationCompressionLibraryDatabase @ 14deb1af0

UAnimationCompressionLibraryDatabase * __thiscall
UAnimationCompressionLibraryDatabase::UAnimationCompressionLibraryDatabase
          (UAnimationCompressionLibraryDatabase *this,FVTableHelper *param_1)

{
  database_context<UEDefaultDatabaseSettings> *pdVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimationCompressionLibraryDatabase__6B_;
  (this->CookedCompressedBytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookedCompressedBytes).ArrayNum = 0;
  (this->CookedCompressedBytes).ArrayMax = 0;
  (this->CookedAnimSequenceMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookedAnimSequenceMappings).ArrayNum = 0;
  (this->CookedAnimSequenceMappings).ArrayMax = 0;
  *(undefined8 *)&this->CookedBulkData = 0;
  *(undefined8 *)&(this->CookedBulkData).field_0x8 = 0;
  *(undefined8 *)&(this->CookedBulkData).field_0x10 = 0;
  *(undefined4 *)&(this->CookedBulkData).field_0xd = 0xffffffff;
  (this->CookedBulkData).field_0x11 = 0xff;
  uVar2 = FIoChunkId::InvalidChunkId.Id[1];
  uVar3 = FIoChunkId::InvalidChunkId.Id[2];
  uVar4 = FIoChunkId::InvalidChunkId.Id[3];
  uVar5 = FIoChunkId::InvalidChunkId.Id[4];
  uVar6 = FIoChunkId::InvalidChunkId.Id[5];
  uVar7 = FIoChunkId::InvalidChunkId.Id[6];
  uVar8 = FIoChunkId::InvalidChunkId.Id[7];
  (this->CookedBulkData).field_0x18 = FIoChunkId::InvalidChunkId.Id[0];
  (this->CookedBulkData).field_0x19 = uVar2;
  (this->CookedBulkData).field_0x1a = uVar3;
  (this->CookedBulkData).field_0x1b = uVar4;
  (this->CookedBulkData).field_0x1c = uVar5;
  (this->CookedBulkData).field_0x1d = uVar6;
  (this->CookedBulkData).field_0x1e = uVar7;
  (this->CookedBulkData).field_0x1f = uVar8;
  uVar2 = FIoChunkId::InvalidChunkId.Id[9];
  uVar3 = FIoChunkId::InvalidChunkId.Id[10];
  uVar4 = FIoChunkId::InvalidChunkId.Id[0xb];
  (this->CookedBulkData).field_0x20 = FIoChunkId::InvalidChunkId.Id[8];
  (this->CookedBulkData).field_0x21 = uVar2;
  (this->CookedBulkData).field_0x22 = uVar3;
  (this->CookedBulkData).field_0x23 = uVar4;
  (this->DatabaseContext).m_context.clip_segment_headers = (uchar *)0x0;
  (this->DatabaseContext).m_context.bulk_data[0] = (uchar *)0x0;
  (this->DatabaseContext).m_context.bulk_data[1] = (uchar *)0x0;
  (this->DatabaseContext).m_context.streamers[0] = (database_streamer *)0x0;
  (this->DatabaseContext).m_context.streamers[1] = (database_streamer *)0x0;
  (this->DatabaseContext).m_context.loaded_chunks[0] = (uint *)0x0;
  (this->DatabaseContext).m_context.loaded_chunks[1] = (uint *)0x0;
  (this->DatabaseContext).m_context.streaming_chunks[0] = (uint *)0x0;
  (this->DatabaseContext).m_context.streaming_chunks[1] = (uint *)0x0;
  (this->DatabaseContext).m_context.allocator = (iallocator *)0x0;
  (this->DatabaseContext).m_context.db_hash = 0;
  (this->DatabaseContext).m_context.padding1[0] = '\0';
  (this->DatabaseContext).m_context.padding1[1] = '\0';
  (this->DatabaseContext).m_context.padding1[2] = '\0';
  (this->DatabaseContext).m_context.padding1[3] = '\0';
  (this->DatabaseContext).m_context.padding1[4] = '\0';
  (this->DatabaseContext).m_context.padding1[5] = '\0';
  (this->DatabaseContext).m_context.padding1[6] = '\0';
  (this->DatabaseContext).m_context.padding1[7] = '\0';
  pdVar1 = &this->DatabaseContext;
  (pdVar1->m_context).padding1[8] = '\0';
  (pdVar1->m_context).padding1[9] = '\0';
  (pdVar1->m_context).padding1[10] = '\0';
  (pdVar1->m_context).padding1[0xb] = '\0';
  (pdVar1->m_context).padding1[0xc] = '\0';
  (pdVar1->m_context).padding1[0xd] = '\0';
  (pdVar1->m_context).padding1[0xe] = '\0';
  (pdVar1->m_context).padding1[0xf] = '\0';
  pdVar1 = &this->DatabaseContext;
  (pdVar1->m_context).padding1[0x10] = '\0';
  (pdVar1->m_context).padding1[0x11] = '\0';
  (pdVar1->m_context).padding1[0x12] = '\0';
  (pdVar1->m_context).padding1[0x13] = '\0';
  (pdVar1->m_context).padding1[0x14] = '\0';
  (pdVar1->m_context).padding1[0x15] = '\0';
  (pdVar1->m_context).padding1[0x16] = '\0';
  (pdVar1->m_context).padding1[0x17] = '\0';
  pdVar1 = &this->DatabaseContext;
  (pdVar1->m_context).padding1[0x18] = '\0';
  (pdVar1->m_context).padding1[0x19] = '\0';
  (pdVar1->m_context).padding1[0x1a] = '\0';
  (pdVar1->m_context).padding1[0x1b] = '\0';
  (pdVar1->m_context).padding1[0x1c] = '\0';
  (pdVar1->m_context).padding1[0x1d] = '\0';
  (pdVar1->m_context).padding1[0x1e] = '\0';
  (pdVar1->m_context).padding1[0x1f] = '\0';
  pdVar1 = &this->DatabaseContext;
  (pdVar1->m_context).padding1[0x20] = '\0';
  (pdVar1->m_context).padding1[0x21] = '\0';
  (pdVar1->m_context).padding1[0x22] = '\0';
  (pdVar1->m_context).padding1[0x23] = '\0';
  (this->DatabaseContext).m_context.db = (compressed_database *)0x0;
  (this->DatabaseStreamer).Ptr = (database_streamer *)0x0;
  (this->FidelityChangeRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FidelityChangeRequests).ArrayNum = 0;
  (this->FidelityChangeRequests).ArrayMax = 0;
  (this->FidelityUpdateTickerHandle).Object = (FElement *)0x0;
  (this->FidelityUpdateTickerHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UAnimationCompressionLibraryDatabase @ 14deb1be0

UAnimationCompressionLibraryDatabase * __thiscall
UAnimationCompressionLibraryDatabase::UAnimationCompressionLibraryDatabase
          (UAnimationCompressionLibraryDatabase *this,FObjectInitializer *param_1)

{
  database_context<UEDefaultDatabaseSettings> *pdVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimationCompressionLibraryDatabase__6B_;
  (this->CookedCompressedBytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookedCompressedBytes).ArrayNum = 0;
  (this->CookedCompressedBytes).ArrayMax = 0;
  (this->CookedAnimSequenceMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookedAnimSequenceMappings).ArrayNum = 0;
  (this->CookedAnimSequenceMappings).ArrayMax = 0;
  *(undefined8 *)&this->CookedBulkData = 0;
  *(undefined8 *)&(this->CookedBulkData).field_0x8 = 0;
  *(undefined8 *)&(this->CookedBulkData).field_0x10 = 0;
  *(undefined4 *)&(this->CookedBulkData).field_0xd = 0xffffffff;
  (this->CookedBulkData).field_0x11 = 0xff;
  uVar2 = FIoChunkId::InvalidChunkId.Id[1];
  uVar3 = FIoChunkId::InvalidChunkId.Id[2];
  uVar4 = FIoChunkId::InvalidChunkId.Id[3];
  uVar5 = FIoChunkId::InvalidChunkId.Id[4];
  uVar6 = FIoChunkId::InvalidChunkId.Id[5];
  uVar7 = FIoChunkId::InvalidChunkId.Id[6];
  uVar8 = FIoChunkId::InvalidChunkId.Id[7];
  (this->CookedBulkData).field_0x18 = FIoChunkId::InvalidChunkId.Id[0];
  (this->CookedBulkData).field_0x19 = uVar2;
  (this->CookedBulkData).field_0x1a = uVar3;
  (this->CookedBulkData).field_0x1b = uVar4;
  (this->CookedBulkData).field_0x1c = uVar5;
  (this->CookedBulkData).field_0x1d = uVar6;
  (this->CookedBulkData).field_0x1e = uVar7;
  (this->CookedBulkData).field_0x1f = uVar8;
  uVar2 = FIoChunkId::InvalidChunkId.Id[9];
  uVar3 = FIoChunkId::InvalidChunkId.Id[10];
  uVar4 = FIoChunkId::InvalidChunkId.Id[0xb];
  (this->CookedBulkData).field_0x20 = FIoChunkId::InvalidChunkId.Id[8];
  (this->CookedBulkData).field_0x21 = uVar2;
  (this->CookedBulkData).field_0x22 = uVar3;
  (this->CookedBulkData).field_0x23 = uVar4;
  (this->DatabaseContext).m_context.clip_segment_headers = (uchar *)0x0;
  (this->DatabaseContext).m_context.bulk_data[0] = (uchar *)0x0;
  (this->DatabaseContext).m_context.bulk_data[1] = (uchar *)0x0;
  (this->DatabaseContext).m_context.streamers[0] = (database_streamer *)0x0;
  (this->DatabaseContext).m_context.streamers[1] = (database_streamer *)0x0;
  (this->DatabaseContext).m_context.loaded_chunks[0] = (uint *)0x0;
  (this->DatabaseContext).m_context.loaded_chunks[1] = (uint *)0x0;
  (this->DatabaseContext).m_context.streaming_chunks[0] = (uint *)0x0;
  (this->DatabaseContext).m_context.streaming_chunks[1] = (uint *)0x0;
  (this->DatabaseContext).m_context.allocator = (iallocator *)0x0;
  (this->DatabaseContext).m_context.db_hash = 0;
  (this->DatabaseContext).m_context.padding1[0] = '\0';
  (this->DatabaseContext).m_context.padding1[1] = '\0';
  (this->DatabaseContext).m_context.padding1[2] = '\0';
  (this->DatabaseContext).m_context.padding1[3] = '\0';
  (this->DatabaseContext).m_context.padding1[4] = '\0';
  (this->DatabaseContext).m_context.padding1[5] = '\0';
  (this->DatabaseContext).m_context.padding1[6] = '\0';
  (this->DatabaseContext).m_context.padding1[7] = '\0';
  pdVar1 = &this->DatabaseContext;
  (pdVar1->m_context).padding1[8] = '\0';
  (pdVar1->m_context).padding1[9] = '\0';
  (pdVar1->m_context).padding1[10] = '\0';
  (pdVar1->m_context).padding1[0xb] = '\0';
  (pdVar1->m_context).padding1[0xc] = '\0';
  (pdVar1->m_context).padding1[0xd] = '\0';
  (pdVar1->m_context).padding1[0xe] = '\0';
  (pdVar1->m_context).padding1[0xf] = '\0';
  pdVar1 = &this->DatabaseContext;
  (pdVar1->m_context).padding1[0x10] = '\0';
  (pdVar1->m_context).padding1[0x11] = '\0';
  (pdVar1->m_context).padding1[0x12] = '\0';
  (pdVar1->m_context).padding1[0x13] = '\0';
  (pdVar1->m_context).padding1[0x14] = '\0';
  (pdVar1->m_context).padding1[0x15] = '\0';
  (pdVar1->m_context).padding1[0x16] = '\0';
  (pdVar1->m_context).padding1[0x17] = '\0';
  pdVar1 = &this->DatabaseContext;
  (pdVar1->m_context).padding1[0x18] = '\0';
  (pdVar1->m_context).padding1[0x19] = '\0';
  (pdVar1->m_context).padding1[0x1a] = '\0';
  (pdVar1->m_context).padding1[0x1b] = '\0';
  (pdVar1->m_context).padding1[0x1c] = '\0';
  (pdVar1->m_context).padding1[0x1d] = '\0';
  (pdVar1->m_context).padding1[0x1e] = '\0';
  (pdVar1->m_context).padding1[0x1f] = '\0';
  pdVar1 = &this->DatabaseContext;
  (pdVar1->m_context).padding1[0x20] = '\0';
  (pdVar1->m_context).padding1[0x21] = '\0';
  (pdVar1->m_context).padding1[0x22] = '\0';
  (pdVar1->m_context).padding1[0x23] = '\0';
  (this->DatabaseContext).m_context.db = (compressed_database *)0x0;
  (this->DatabaseStreamer).Ptr = (database_streamer *)0x0;
  this->CurrentVisualFidelity = Lowest;
  this->NextFidelityChangeRequestID = 0;
  (this->FidelityChangeRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FidelityChangeRequests).ArrayNum = 0;
  (this->FidelityChangeRequests).ArrayMax = 0;
  (this->FidelityUpdateTickerHandle).Object = (FElement *)0x0;
  (this->FidelityUpdateTickerHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->MaxStreamRequestSizeKB = 0x400;
  this->DefaultVisualFidelity = Lowest;
  return this;
}

// ~UAnimationCompressionLibraryDatabase @ 14deb1e10

void __thiscall
UAnimationCompressionLibraryDatabase::~UAnimationCompressionLibraryDatabase
          (UAnimationCompressionLibraryDatabase *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  database_streamer *pdVar5;
  compressed_database *pcVar6;
  uint *puVar7;
  iallocator *piVar8;
  
  this->_padding_ = (longlong)&___7UAnimationCompressionLibraryDatabase__6B_;
  pTVar3 = (this->FidelityUpdateTickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pFVar4 = (this->FidelityChangeRequests).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pdVar5 = (this->DatabaseStreamer).Ptr;
  if (pdVar5 != (database_streamer *)0x0) {
    (**(code **)pdVar5->_padding_)(pdVar5,1);
  }
  pcVar6 = (this->DatabaseContext).m_context.db;
  if (pcVar6 != (compressed_database *)0x0) {
    puVar7 = (this->DatabaseContext).m_context.loaded_chunks[0];
    piVar8 = (this->DatabaseContext).m_context.allocator;
    if (puVar7 != (uint *)0x0) {
      (**(code **)((longlong)*piVar8 + 0x10))
                (piVar8,puVar7,
                 (pcVar6[1].m_padding[1] + pcVar6[2].m_buffer_header.size * 2 +
                  (pcVar6[1].m_buffer_header.hash + 0x1f >> 5) +
                 (pcVar6[1].m_buffer_header.size + 0x1f >> 5)) * 8);
    }
    (this->DatabaseContext).m_context.db = (compressed_database *)0x0;
  }
  FBulkData::~FBulkData((FBulkData *)&this->CookedBulkData);
  pFVar4 = (this->CookedAnimSequenceMappings).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->CookedCompressedBytes).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 14deb2c60

void __thiscall
UAnimationCompressionLibraryDatabase::BeginDestroy(UAnimationCompressionLibraryDatabase *this)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  int *piVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  UEDatabaseStreamer *this_00;
  compressed_database *pcVar6;
  uint *puVar7;
  iallocator *piVar8;
  TWeakPtr<FTSTicker::FElement,1> local_28;
  longlong local_18 [2];
  
  UObject::BeginDestroy((UObject *)this);
  pTVar2 = &this->FidelityUpdateTickerHandle;
  if (((pTVar2->Object != (FElement *)0x0) &&
      (pTVar5 = (this->FidelityUpdateTickerHandle).WeakReferenceCount.ReferenceController,
      pTVar5 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar5->SharedReferenceCount)) {
    local_28.Object = pTVar2->Object;
    local_28.WeakReferenceCount.ReferenceController =
         (this->FidelityUpdateTickerHandle).WeakReferenceCount.ReferenceController;
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_28);
    if (pTVar2 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
      pTVar5 = (this->FidelityUpdateTickerHandle).WeakReferenceCount.ReferenceController;
      pTVar2->Object = (FElement *)0x0;
      (this->FidelityUpdateTickerHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar4 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
  }
  FailAllRequests(&this->FidelityChangeRequests);
  piVar3 = &(this->FidelityChangeRequests).ArrayMax;
  (this->FidelityChangeRequests).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->FidelityChangeRequests).AllocatorInstance,0,piVar3);
  }
  this_00 = (UEDatabaseStreamer *)(this->DatabaseStreamer).Ptr;
  if (this_00 != (UEDatabaseStreamer *)0x0) {
    (this->DatabaseStreamer).Ptr = (database_streamer *)0x0;
    UEDatabaseStreamer::WaitForStreamingToComplete(this_00);
    acl::database_context<UEDefaultDatabaseSettings>::reset(&this->DatabaseContext);
    this_00->_padding_ = (longlong)&___7UEDatabaseStreamer__6B_;
    UEDatabaseStreamer::WaitForStreamingToComplete(this_00);
    operator_delete__(this_00->BulkData[0]);
    operator_delete__(this_00->BulkData[1]);
    ::operator_delete(this_00,0x78);
  }
  pcVar6 = (this->DatabaseContext).m_context.db;
  if (pcVar6 != (compressed_database *)0x0) {
    puVar7 = (this->DatabaseContext).m_context.loaded_chunks[0];
    piVar8 = (this->DatabaseContext).m_context.allocator;
    if (puVar7 != (uint *)0x0) {
      (**(code **)((longlong)*piVar8 + 0x10))
                (piVar8,puVar7,
                 (pcVar6[1].m_padding[1] + pcVar6[2].m_buffer_header.size * 2 +
                  (pcVar6[1].m_buffer_header.hash + 0x1f >> 5) +
                 (pcVar6[1].m_buffer_header.size + 0x1f >> 5)) * 8);
    }
    (this->DatabaseContext).m_context.db = (compressed_database *)0x0;
  }
  return;
}

// CancelVisualFidelityRequestImpl @ 14deb30d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UAnimationCompressionLibraryDatabase::CancelVisualFidelityRequestImpl
          (UAnimationCompressionLibraryDatabase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimationCompressionLibraryDatabase.cpp"
                         ,0x31d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 != 0xffffffff) &&
     (uVar5 = (this->FidelityChangeRequests).ArrayNum - 1, -1 < (int)uVar5)) {
    lVar6 = (longlong)(int)uVar5 << 4;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->FidelityChangeRequests).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->FidelityChangeRequests).AllocatorInstance.Data;
      if (*(uint *)(pFVar1 + lVar6 + 8) == param_1) {
        if (pFVar1[lVar6 + 0xd] == (FScriptContainerElement)0x0) {
          TArray<FFidelityChangeRequest,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->FidelityChangeRequests,uVar5,Default);
        }
        else {
          *(undefined8 *)(pFVar1 + lVar6) = 0;
        }
      }
      lVar6 = lVar6 + -0x10;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return;
}

// GetPrivateStaticClass @ 14deb5cf0

UClass * __cdecl UAnimationCompressionLibraryDatabase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationCompressionLibraryDatabase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ACLPlugin",L"AnimationCompressionLibraryDatabase",
               &Z_Registration_Info_UClass_UAnimationCompressionLibraryDatabase.InnerSingleton,
               StaticRegisterNativesUAnimationCompressionLibraryDatabase,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationCompressionLibraryDatabase>,
               InternalVTableHelperCtorCaller<UAnimationCompressionLibraryDatabase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationCompressionLibraryDatabase.InnerSingleton;
}

// GetVisualFidelity @ 14deb5db0

ACLVisualFidelity __cdecl
UAnimationCompressionLibraryDatabase::GetVisualFidelity
          (UAnimationCompressionLibraryDatabase *param_1)

{
  code *pcVar1;
  bool bVar2;
  ACLVisualFidelity AVar3;
  
  if (param_1 != (UAnimationCompressionLibraryDatabase *)0x0) {
    return param_1->CurrentVisualFidelity;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("DatabaseAsset != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimationCompressionLibraryDatabase.cpp"
                     ,0x48b,L"Cannot query null ACL database asset");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    AVar3 = (*pcVar1)();
    return AVar3;
  }
  return Lowest;
}

// PostLoad @ 14deb72e0

void __thiscall
UAnimationCompressionLibraryDatabase::PostLoad(UAnimationCompressionLibraryDatabase *this)

{
  uint uVar1;
  compressed_database *pcVar2;
  code *pcVar3;
  bool bVar4;
  database_streamer *pdVar5;
  database_streamer *pdVar6;
  
  UObject::PostLoad((UObject *)this);
  if ((this->CookedCompressedBytes).ArrayNum != 0) {
    pcVar2 = (compressed_database *)(this->CookedCompressedBytes).AllocatorInstance.Data;
    if (((((pcVar2 == (compressed_database *)0x0) || (((ulonglong)pcVar2 & 0xf) != 0)) ||
         (pcVar2->m_padding[0] != 0xac11db01)) || (3 < (ushort)((short)pcVar2->m_padding[1] - 7U)))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("CompressedDatabase != nullptr && CompressedDatabase->is_valid(false).empty()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimationCompressionLibraryDatabase.cpp"
                              ,0x270,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pdVar5 = ::operator_new(0x78);
    pdVar6 = (database_streamer *)0x0;
    if (pdVar5 != (database_streamer *)0x0) {
      pdVar5->m_context = (database_context_v0 *)0x0;
      pdVar5->m_requests = (streaming_request *)(pdVar5 + 2);
      pdVar5->m_generation_id = 0;
      pdVar5->m_next_request_index = 0;
      pdVar5->m_num_requests = 2;
      pdVar5->_padding_ = (longlong)&___7UEDatabaseStreamer__6B_;
      pdVar5[1]._padding_ = (longlong)&this->CookedBulkData;
      *(undefined8 *)&pdVar5[1].m_num_requests = 0;
      pdVar5[2]._padding_ = 0;
      pdVar5[2].m_context = (database_context_v0 *)0x0;
      pdVar5[2].m_requests = (streaming_request *)0x0;
      pdVar5[2].m_generation_id = 0;
      pdVar5[2].m_next_request_index = 0;
      *(undefined8 *)&pdVar5[2].m_num_requests = 0;
      pdVar5[1].m_requests = (streaming_request *)0x0;
      pdVar5[1].m_context = (database_context_v0 *)0x0;
      uVar1 = pcVar2[2].m_padding[1];
      pdVar5[1].m_generation_id = pcVar2[2].m_padding[0];
      pdVar5[1].m_next_request_index = uVar1;
      pdVar6 = pdVar5;
    }
    pdVar5 = (this->DatabaseStreamer).Ptr;
    (this->DatabaseStreamer).Ptr = pdVar6;
    if (pdVar5 != (database_streamer *)0x0) {
      (**(code **)pdVar5->_padding_)(pdVar5,1);
    }
    pdVar6 = (this->DatabaseStreamer).Ptr;
    bVar4 = acl::database_context<UEDefaultDatabaseSettings>::initialize
                      (&this->DatabaseContext,(iallocator *)&ACLAllocatorImpl,pcVar2,pdVar6,pdVar6);
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContextInitResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimationCompressionLibraryDatabase.cpp"
                           ,0x275,L"ACL failed to initialize the database context"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SetVisualFidelityImpl(this,this->DefaultVisualFidelity,(ACLVisualFidelityChangeResult *)0x0);
  return;
}

// Serialize @ 14deb7530

void __thiscall
UAnimationCompressionLibraryDatabase::Serialize
          (UAnimationCompressionLibraryDatabase *this,FArchive *param_1)

{
  uint *puVar1;
  ulonglong *puVar2;
  database_streamer *pdVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  uint local_res10 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_28;
  
  UObject::Serialize((UObject *)this,param_1);
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  bVar7 = SUB41(uVar6,0);
  puVar2 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_res10[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res10[0] = uVar6;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar6 = local_res10[0];
    if ((param_1->field_0x28 & 1) == 0) goto LAB_14deb75c6;
  }
  else {
    uVar6 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  bVar7 = uVar6 != 0;
LAB_14deb75c6:
  if (bVar7 == false) {
    if ((((param_1->field_0x2b & 4) != 0) &&
        ((this->DatabaseContext).m_context.db != (compressed_database *)0x0)) &&
       (pdVar3 = (this->DatabaseStreamer).Ptr, pdVar3 != (database_streamer *)0x0)) {
      lVar5 = (**(code **)(pdVar3->_padding_ + 0x10))(pdVar3,1);
      if (lVar5 != 0) {
        uVar6 = (this->DatabaseContext).m_context.db[2].m_padding[0];
        local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.ArrayMax = 0;
        if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
        }
        local_28.ArrayNum = 0;
        if (uVar6 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar6,&local_28.AllocatorInstance,0,&local_28.ArrayMax);
        }
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,uVar6,&local_28.AllocatorInstance,&local_28.ArrayNum,
                           &local_28.ArrayMax);
        memset(local_28.AllocatorInstance.Data + iVar4,0,(longlong)(int)uVar6);
        TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&local_28)
        ;
        if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.AllocatorInstance.Data);
        }
      }
      pdVar3 = (this->DatabaseStreamer).Ptr;
      lVar5 = (**(code **)(pdVar3->_padding_ + 0x10))(pdVar3,2);
      if (lVar5 != 0) {
        uVar6 = (this->DatabaseContext).m_context.db[2].m_padding[1];
        local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.ArrayMax = 0;
        if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
        }
        local_28.ArrayNum = 0;
        if (uVar6 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar6,&local_28.AllocatorInstance,0,&local_28.ArrayMax);
        }
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,uVar6,&local_28.AllocatorInstance,&local_28.ArrayNum,
                           &local_28.ArrayMax);
        memset(local_28.AllocatorInstance.Data + iVar4,0,(longlong)(int)uVar6);
        TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&local_28)
        ;
        if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.AllocatorInstance.Data);
        }
      }
    }
  }
  else {
    FBulkData::SetBulkDataFlags((FBulkData *)&this->CookedBulkData,0x400);
    FBulkData::Serialize((FBulkData *)&this->CookedBulkData,param_1,(UObject *)this,false,1,None);
  }
  return;
}

// Serialize @ 14deb77a0

void __thiscall
UAnimationCompressionLibraryDatabase::Serialize
          (UAnimationCompressionLibraryDatabase *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetVisualFidelity @ 14deb7bd0

void __thiscall
UAnimationCompressionLibraryDatabase::SetVisualFidelity
          (UAnimationCompressionLibraryDatabase *this,ACLVisualFidelity param_1)

{
  SetVisualFidelityImpl(this,param_1,(ACLVisualFidelityChangeResult *)0x0);
  return;
}

// SetVisualFidelity @ 14deb7be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UAnimationCompressionLibraryDatabase::SetVisualFidelity
          (UObject *param_1,FLatentActionInfo *param_2,UAnimationCompressionLibraryDatabase *param_3
          ,ACLVisualFidelityChangeResult *param_4,ACLVisualFidelity param_5)

{
  FPendingLatentAction FVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *this;
  FLatentActionManager *this_00;
  FSetDatabaseVisualFidelityAction *pFVar4;
  FPendingLatentAction *pFVar5;
  FFirstItemPredicate local_18 [16];
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimationCompressionLibraryDatabase.cpp"
                         ,0x47c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (this != (UWorld *)0x0) {
    this_00 = UWorld::GetLatentActionManager(this);
    pFVar4 = FLatentActionManager::
             FindExistingActionWithPredicate<FSetDatabaseVisualFidelityAction,_FLatentActionManager::FindExistingAction<FSetDatabaseVisualFidelityAction>_::__l2::FFirstItemPredicate>
                       (this_00,(param_2->CallbackTarget).field0_0x0.DebugPtr,param_2->UUID,local_18
                       );
    if (pFVar4 == (FSetDatabaseVisualFidelityAction *)0x0) {
      pFVar5 = ::operator_new(0x40);
      if (pFVar5 == (FPendingLatentAction *)0x0) {
        pFVar5 = (FPendingLatentAction *)0x0;
      }
      else {
        pFVar5[1] = (FPendingLatentAction)param_3;
        *pFVar5 = (FPendingLatentAction)&___7FSetDatabaseVisualFidelityAction__6B_;
        *(ACLVisualFidelity *)(pFVar5 + 2) = param_5;
        pFVar5[3] = (FPendingLatentAction)param_4;
        *(int *)(pFVar5 + 4) = param_2->Linkage;
        *(int *)&pFVar5[4].field_0x4 = param_2->UUID;
        *(FName *)(pFVar5 + 5) = param_2->ExecutionFunction;
        FVar1 = (FPendingLatentAction)(param_2->CallbackTarget).field0_0x0.DebugPtr;
        pFVar5[6] = FVar1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (FVar1 != (FPendingLatentAction)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar1);
        }
        *(undefined1 *)(pFVar5 + 7) = 0;
        *(undefined4 *)&pFVar5[7].field_0x4 = 0xffffffff;
      }
      FLatentActionManager::AddNewAction
                (this_00,(param_2->CallbackTarget).field0_0x0.DebugPtr,param_2->UUID,pFVar5);
    }
  }
  return;
}

// SetVisualFidelityImpl @ 14deb7d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
UAnimationCompressionLibraryDatabase::SetVisualFidelityImpl
          (UAnimationCompressionLibraryDatabase *this,ACLVisualFidelity param_1,
          ACLVisualFidelityChangeResult *param_2)

{
  int *piVar1;
  atomic<int> *paVar2;
  TArray<FFidelityChangeRequest,TSizedDefaultAllocator<32>_> *pTVar3;
  TWeakPtr<FTSTicker::FElement,1> *pTVar4;
  atomic<int> aVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FTSTicker *this_00;
  TWeakPtr<FTSTicker::FElement,1> *pTVar13;
  undefined ***pppuVar14;
  FScriptContainerElement FVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStackY_168 [32];
  undefined8 local_118;
  uint uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  uint uStack_100;
  undefined2 uStack_fc;
  undefined2 uStack_fa;
  undefined8 local_f8;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  uint uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  uint uStack_c0;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined8 local_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  uint uStack_a0;
  uint uStack_9c;
  FString local_98;
  TWeakPtr<FTSTicker::FElement,1> local_88;
  code *local_78 [2];
  undefined **local_68;
  UAnimationCompressionLibraryDatabase *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar10 = IsInGameThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimationCompressionLibraryDatabase.cpp"
                          ,0x2b7,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return uVar11;
  }
  if (((this->DatabaseContext).m_context.db == (compressed_database *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("DatabaseContext.is_initialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimationCompressionLibraryDatabase.cpp"
                          ,0x2c2,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return uVar11;
  }
  iVar6 = (this->FidelityChangeRequests).ArrayNum;
  pTVar3 = &this->FidelityChangeRequests;
  if (iVar6 == 0) {
    FVar15 = (FScriptContainerElement)this->CurrentVisualFidelity;
  }
  else {
    uVar11 = 0;
    if ((int)(iVar6 - 1U) < iVar6) {
      uVar11 = ~(iVar6 - 1U) >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return uVar11;
    }
    FVar15 = (pTVar3->AllocatorInstance).Data
             [(longlong)(this->FidelityChangeRequests).ArrayNum * 0x10 + -4];
  }
  if ((FScriptContainerElement)param_1 == FVar15) {
    if (param_2 != (ACLVisualFidelityChangeResult *)0x0) {
      *param_2 = Completed;
    }
    return 0xffffffff;
  }
  if (4 < (byte)LogAnimationCompression._0_1_) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_98,(UObject *)0x0);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  uVar11 = this->NextFidelityChangeRequestID;
  this->NextFidelityChangeRequestID = uVar11 + 1;
  if (FVar15 == (FScriptContainerElement)0x0) {
    if (param_1 == Medium) {
      pFVar7 = (pTVar3->AllocatorInstance).Data;
      uStack_9c = CONCAT22(uStack_9c._2_2_,1);
      local_a8 = param_2;
      uStack_a0 = uVar11;
      if (((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 <
           pFVar7 + (longlong)(this->FidelityChangeRequests).ArrayMax * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return uVar11;
      }
      iVar12 = (this->FidelityChangeRequests).ArrayNum;
      piVar1 = &(this->FidelityChangeRequests).ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar3->AllocatorInstance,piVar1);
        (this->FidelityChangeRequests).ArrayNum = iVar12;
      }
      uVar16 = (undefined4)local_a8;
      uVar17 = local_a8._4_4_;
      uVar18 = uStack_a0;
      uVar19 = uStack_9c;
    }
    else {
      if (param_1 != Lowest) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimationCompressionLibraryDatabase.cpp"
                            ,0x2e8,L"Unexpected visual fidelity value");
        if (!bVar10) goto LAB_14deb84dd;
        goto code_r0x00014deb82d4;
      }
      pFVar7 = (pTVar3->AllocatorInstance).Data;
      local_c8 = 0;
      uStack_bc = 1;
      uStack_c0 = uVar11;
      if (((pFVar7 <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 <
           pFVar7 + (longlong)(this->FidelityChangeRequests).ArrayMax * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return uVar11;
      }
      iVar12 = (this->FidelityChangeRequests).ArrayNum;
      if (iVar12 == (this->FidelityChangeRequests).ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar3->AllocatorInstance,
                            &(this->FidelityChangeRequests).ArrayMax);
        (this->FidelityChangeRequests).ArrayNum = iVar12;
      }
      (this->FidelityChangeRequests).ArrayNum = iVar12 + 1;
      uStack_ac = CONCAT22(uStack_ac._2_2_,2);
      pFVar7 = (pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
      *(undefined8 *)pFVar7 = local_c8;
      *(ulonglong *)(pFVar7 + 8) = CONCAT26(uStack_ba,CONCAT24(uStack_bc,uStack_c0));
      pFVar7 = (pTVar3->AllocatorInstance).Data;
      local_b8 = param_2;
      uStack_b0 = uVar11;
      if (((pFVar7 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 <
           pFVar7 + (longlong)(this->FidelityChangeRequests).ArrayMax * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return uVar11;
      }
      iVar12 = (this->FidelityChangeRequests).ArrayNum;
      if (iVar12 == (this->FidelityChangeRequests).ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar3->AllocatorInstance,
                            &(this->FidelityChangeRequests).ArrayMax);
        (this->FidelityChangeRequests).ArrayNum = iVar12;
      }
      uVar16 = (undefined4)local_b8;
      uVar17 = local_b8._4_4_;
      uVar18 = uStack_b0;
      uVar19 = uStack_ac;
    }
  }
  else if (FVar15 == (FScriptContainerElement)0x1) {
    if (param_1 == Highest) {
      pFVar7 = (pTVar3->AllocatorInstance).Data;
      uStack_cc = uStack_cc & 0xffff0000;
      local_d8 = param_2;
      uStack_d0 = uVar11;
      if (((pFVar7 <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 <
           pFVar7 + (longlong)(this->FidelityChangeRequests).ArrayMax * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return uVar11;
      }
      iVar12 = (this->FidelityChangeRequests).ArrayNum;
      piVar1 = &(this->FidelityChangeRequests).ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar3->AllocatorInstance,piVar1);
        (this->FidelityChangeRequests).ArrayNum = iVar12;
      }
      uVar16 = (undefined4)local_d8;
      uVar17 = local_d8._4_4_;
      uVar18 = uStack_d0;
      uVar19 = uStack_cc;
    }
    else {
      if (param_1 != Lowest) {
        iVar12 = 0x2f8;
LAB_14deb8132:
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimationCompressionLibraryDatabase.cpp"
                            ,iVar12,L"Unexpected visual fidelity value");
        if (bVar10) {
code_r0x00014deb82d4:
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return uVar11;
        }
        goto LAB_14deb84dd;
      }
      pFVar7 = (pTVar3->AllocatorInstance).Data;
      uStack_dc = CONCAT22(uStack_dc._2_2_,2);
      local_e8 = param_2;
      uStack_e0 = uVar11;
      if (((pFVar7 <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 <
           pFVar7 + (longlong)(this->FidelityChangeRequests).ArrayMax * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return uVar11;
      }
      iVar12 = (this->FidelityChangeRequests).ArrayNum;
      piVar1 = &(this->FidelityChangeRequests).ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar3->AllocatorInstance,piVar1);
        (this->FidelityChangeRequests).ArrayNum = iVar12;
      }
      uVar16 = (undefined4)local_e8;
      uVar17 = local_e8._4_4_;
      uVar18 = uStack_e0;
      uVar19 = uStack_dc;
    }
  }
  else {
    if (FVar15 != (FScriptContainerElement)0x2) goto LAB_14deb84dd;
    if (param_1 == Highest) {
      pFVar7 = (pTVar3->AllocatorInstance).Data;
      local_108 = 0;
      uStack_fc = 1;
      uStack_100 = uVar11;
      if (((pFVar7 <= (FScriptContainerElement *)&local_108) &&
          ((FScriptContainerElement *)&local_108 <
           pFVar7 + (longlong)(this->FidelityChangeRequests).ArrayMax * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return uVar11;
      }
      iVar12 = (this->FidelityChangeRequests).ArrayNum;
      if (iVar12 == (this->FidelityChangeRequests).ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar3->AllocatorInstance,
                            &(this->FidelityChangeRequests).ArrayMax);
        (this->FidelityChangeRequests).ArrayNum = iVar12;
      }
      (this->FidelityChangeRequests).ArrayNum = iVar12 + 1;
      uStack_ec = (uint)uStack_ec._2_2_ << 0x10;
      pFVar7 = (pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
      *(undefined8 *)pFVar7 = local_108;
      *(ulonglong *)(pFVar7 + 8) = CONCAT26(uStack_fa,CONCAT24(uStack_fc,uStack_100));
      pFVar7 = (pTVar3->AllocatorInstance).Data;
      local_f8 = param_2;
      uStack_f0 = uVar11;
      if (((pFVar7 <= (FScriptContainerElement *)&local_f8) &&
          ((FScriptContainerElement *)&local_f8 <
           pFVar7 + (longlong)(this->FidelityChangeRequests).ArrayMax * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return uVar11;
      }
      iVar12 = (this->FidelityChangeRequests).ArrayNum;
      if (iVar12 == (this->FidelityChangeRequests).ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar3->AllocatorInstance,
                            &(this->FidelityChangeRequests).ArrayMax);
        (this->FidelityChangeRequests).ArrayNum = iVar12;
      }
      uVar16 = (undefined4)local_f8;
      uVar17 = local_f8._4_4_;
      uVar18 = uStack_f0;
      uVar19 = uStack_ec;
    }
    else {
      if (param_1 != Medium) {
        iVar12 = 0x309;
        goto LAB_14deb8132;
      }
      pFVar7 = (this->FidelityChangeRequests).AllocatorInstance.Data;
      uStack_10c = CONCAT22(uStack_10c._2_2_,1);
      local_118 = param_2;
      uStack_110 = uVar11;
      if (((pFVar7 <= (FScriptContainerElement *)&local_118) &&
          ((FScriptContainerElement *)&local_118 <
           pFVar7 + (longlong)(this->FidelityChangeRequests).ArrayMax * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return uVar11;
      }
      iVar12 = (this->FidelityChangeRequests).ArrayNum;
      piVar1 = &(this->FidelityChangeRequests).ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this->FidelityChangeRequests).AllocatorInstance,piVar1);
      }
      uVar16 = (undefined4)local_118;
      uVar17 = local_118._4_4_;
      uVar18 = uStack_110;
      uVar19 = uStack_10c;
    }
  }
  (this->FidelityChangeRequests).ArrayNum = iVar12 + 1;
  pFVar7 = (this->FidelityChangeRequests).AllocatorInstance.Data + (longlong)iVar12 * 0x10;
  *(undefined4 *)pFVar7 = uVar16;
  *(undefined4 *)(pFVar7 + 4) = uVar17;
  *(uint *)(pFVar7 + 8) = uVar18;
  *(uint *)(pFVar7 + 0xc) = uVar19;
LAB_14deb84dd:
  if (iVar6 == 0) {
    pTVar4 = &this->FidelityUpdateTickerHandle;
    if (((pTVar4->Object != (FElement *)0x0) &&
        (pTVar8 = (this->FidelityUpdateTickerHandle).WeakReferenceCount.ReferenceController,
        pTVar8 != (TReferenceControllerBase<1> *)0x0)) &&
       ((0 < (int)pTVar8->SharedReferenceCount &&
        (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("!FidelityUpdateTickerHandle.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimationCompressionLibraryDatabase.cpp"
                             ,0x312,L""), bVar10)))) {
      pcVar9 = (code *)swi(3);
      uVar11 = (*pcVar9)();
      return uVar11;
    }
    this_00 = FTSTicker::GetCoreTicker();
    local_50 = (undefined ***)0x0;
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAnimationCompressionLibraryDatabase::SetVisualFidelityImpl'::`78'::<lambda_1>,1,0>
                ::_vftable_;
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAnimationCompressionLibraryDatabase::SetVisualFidelityImpl'::__l78::<lambda_1>,bool,float>
                  ::Call;
    local_60 = this;
    pTVar13 = FTSTicker::AddTicker
                        (this_00,&local_88,L"ACLDBStreamOut",0.0,
                         (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (pTVar4 != pTVar13) {
      pTVar4->Object = pTVar13->Object;
      pTVar13->Object = (FElement *)0x0;
      pTVar8 = (this->FidelityUpdateTickerHandle).WeakReferenceCount.ReferenceController;
      (this->FidelityUpdateTickerHandle).WeakReferenceCount.ReferenceController =
           (pTVar13->WeakReferenceCount).ReferenceController;
      (pTVar13->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar8->WeakReferenceCount;
        aVar5 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar5 == (atomic<int>)0x1) {
          (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
        }
      }
    }
    if (local_88.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_88.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar5 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar5 == (atomic<int>)0x1) {
        (**(code **)((local_88.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_88.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      pppuVar14 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar14 = local_50;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  return uVar11;
}

// StaticRegisterNativesUAnimationCompressionLibraryDatabase @ 14deb8690

void __cdecl
UAnimationCompressionLibraryDatabase::StaticRegisterNativesUAnimationCompressionLibraryDatabase
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateVisualFidelityTicker @ 14deb8a40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UAnimationCompressionLibraryDatabase::UpdateVisualFidelityTicker
          (UAnimationCompressionLibraryDatabase *this,float param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  TArray<FFidelityChangeRequest,TSizedDefaultAllocator<32>_> *pTVar3;
  streaming_request *psVar4;
  uint *puVar5;
  atomic<int> aVar6;
  ACLVisualFidelity AVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  compressed_database *pcVar11;
  database_streamer *pdVar12;
  uchar *puVar13;
  TReferenceControllerBase<1> *pTVar14;
  code *pcVar15;
  bool bVar16;
  undefined1 uVar17;
  uint uVar18;
  database_stream_request_result dVar19;
  int iVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  bitset_description bVar25;
  uint uVar26;
  ulonglong uVar27;
  FScriptContainerElement *pFVar28;
  uint uVar29;
  uint uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  database_context<UEDefaultDatabaseSettings> *this_00;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FString local_58;
  undefined8 local_48 [2];
  
  if (((this->DatabaseContext).m_context.db == (compressed_database *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("DatabaseContext.is_initialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimationCompressionLibraryDatabase.cpp"
                          ,0x370,L""), bVar16)) {
    pcVar15 = (code *)swi(3);
    uVar17 = (*pcVar15)();
    return (bool)uVar17;
  }
  if (this->MaxStreamRequestSizeKB == 0) {
    uVar23 = 0xffffffff;
  }
  else {
    uVar26 = (this->MaxStreamRequestSizeKB << 10) /
             (this->DatabaseContext).m_context.db[1].m_padding[0];
    uVar23 = 1;
    if (1 < uVar26) {
      uVar23 = uVar26;
    }
  }
  if ((this->FidelityChangeRequests).ArrayNum != 0) {
    pTVar3 = &this->FidelityChangeRequests;
    while( true ) {
      this_00 = &this->DatabaseContext;
      if (((this->FidelityChangeRequests).ArrayNum < 1) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar15 = (code *)swi(3);
        uVar17 = (*pcVar15)();
        return (bool)uVar17;
      }
      pFVar24 = (pTVar3->AllocatorInstance).Data;
      if ((pFVar24[0xc] == (FScriptContainerElement)this->CurrentVisualFidelity) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Request.Fidelity != CurrentVisualFidelity",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimationCompressionLibraryDatabase.cpp"
                              ,0x377,L""), bVar16)) {
        pcVar15 = (code *)swi(3);
        uVar17 = (*pcVar15)();
        return (bool)uVar17;
      }
      AVar7 = this->CurrentVisualFidelity;
      if (AVar7 != Highest) break;
LAB_14deb8cfb:
      if (pFVar24[0xc] != (FScriptContainerElement)0x1) {
        local_res18[0] = 0;
        bVar16 = `UAnimationCompressionLibraryDatabase::UpdateVisualFidelityTicker'::__l21::
                 <lambda_1>::operator()(local_res18);
        if (!bVar16) {
          iVar20 = (this->FidelityChangeRequests).ArrayNum;
          pFVar24 = (this->FidelityChangeRequests).AllocatorInstance.Data;
          pFVar28 = pFVar24 + (longlong)iVar20 * 0x10;
          while( true ) {
            if ((this->FidelityChangeRequests).ArrayNum != iVar20) {
              `TCheckedPointerIterator<FFidelityChangeRequest_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res20);
            }
            if (pFVar24 == pFVar28) break;
            if (*(undefined1 **)pFVar24 != (undefined1 *)0x0) {
              **(undefined1 **)pFVar24 = 2;
            }
            pFVar24 = pFVar24 + 0x10;
          }
LAB_14deb912d:
          piVar1 = &(this->FidelityChangeRequests).ArrayMax;
          (this->FidelityChangeRequests).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&(this->FidelityChangeRequests).AllocatorInstance,0,piVar1);
          }
          goto LAB_14deb8fc1;
        }
      }
      dVar19 = acl::database_context<UEDefaultDatabaseSettings>::stream_out
                         (this_00,lowest_importance,uVar23);
      LogRequestResult(this,dVar19);
      if (dVar19 != done) {
        if (dVar19 == dispatched) goto LAB_14deb8fa5;
        if (dVar19 != streaming_in_progress) {
          iVar20 = 0x39f;
LAB_14deb9105:
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimationCompressionLibraryDatabase.cpp"
                              ,iVar20,L"Something unexpected happened while ACL is streaming");
          if (bVar16) {
            pcVar15 = (code *)swi(3);
            uVar17 = (*pcVar15)();
            return (bool)uVar17;
          }
LAB_14deb9125:
          FailAllRequests(pTVar3);
          goto LAB_14deb912d;
        }
        if ((pFVar24[0xd] == (FScriptContainerElement)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Request.bIsInProgress",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimationCompressionLibraryDatabase.cpp"
                                ,0x39b,L"Expected request to already be in progress"), bVar16))
        goto code_r0x00014deb919a;
        goto LAB_14deb8fc1;
      }
LAB_14deb8d43:
      if (4 < (byte)LogAnimationCompression._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0);
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      this->CurrentVisualFidelity = (ACLVisualFidelity)pFVar24[0xc];
      if (*(undefined1 **)pFVar24 != (undefined1 *)0x0) {
        **(undefined1 **)pFVar24 = 1;
      }
      if (((this->FidelityChangeRequests).ArrayNum < 1) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar15 = (code *)swi(3);
        uVar17 = (*pcVar15)();
        return (bool)uVar17;
      }
      pFVar24 = (pTVar3->AllocatorInstance).Data;
      iVar20 = (this->FidelityChangeRequests).ArrayNum + -1;
      if (iVar20 != 0) {
        memmove(pFVar24,pFVar24 + 0x10,(longlong)iVar20 << 4);
      }
      piVar1 = &(this->FidelityChangeRequests).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&pTVar3->AllocatorInstance,(this->FidelityChangeRequests).ArrayNum,
                 &(this->FidelityChangeRequests).ArrayMax);
      if ((this->FidelityChangeRequests).ArrayNum == 0) goto LAB_14deb8fc1;
    }
    if (AVar7 == Medium) {
      if (((pFVar24[0xc] != (FScriptContainerElement)0x0) &&
          (pFVar24[0xc] != (FScriptContainerElement)0x2)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Request.Fidelity == ACLVisualFidelity::Highest || Request.Fidelity == ACLVisualFidelity::Lowest"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimationCompressionLibraryDatabase.cpp"
                              ,0x3ac,L"Unexpected visual fidelity value"), bVar16)) {
        pcVar15 = (code *)swi(3);
        uVar17 = (*pcVar15)();
        return (bool)uVar17;
      }
      if (pFVar24[0xc] != (FScriptContainerElement)0x0) {
        if (pFVar24[0xc] == (FScriptContainerElement)0x2) {
          dVar19 = acl::database_context<UEDefaultDatabaseSettings>::stream_out
                             (this_00,medium_importance,uVar23);
          goto LAB_14deb8cce;
        }
        goto LAB_14deb9125;
      }
      dVar19 = acl::database_context<UEDefaultDatabaseSettings>::stream_in
                         (this_00,lowest_importance,uVar23);
LAB_14deb8cce:
      LogRequestResult(this,dVar19);
      if (dVar19 == done) goto LAB_14deb8d43;
      if (dVar19 == dispatched) goto LAB_14deb8fa5;
      if (dVar19 != streaming_in_progress) {
        iVar20 = 0x3d2;
        goto LAB_14deb9105;
      }
      if (pFVar24[0xd] != (FScriptContainerElement)0x0) goto LAB_14deb8fc1;
      iVar20 = 0x3ce;
    }
    else {
      if (AVar7 != Lowest) goto LAB_14deb8cfb;
      if (pFVar24[0xc] != (FScriptContainerElement)0x1) {
        local_res8[0] = 0;
        bVar16 = `UAnimationCompressionLibraryDatabase::UpdateVisualFidelityTicker'::__l85::
                 <lambda_2>::operator()(local_res8);
        if (!bVar16) goto LAB_14deb9125;
      }
      pcVar11 = (this_00->m_context).db;
      if (pcVar11 == (compressed_database *)0x0) {
        LogRequestResult(this,context_not_initialized);
        iVar20 = 0x3fb;
        goto LAB_14deb9105;
      }
      uVar26 = pcVar11[1].m_buffer_header.size;
      bVar25.m_size = uVar26 + 0x1f >> 5;
      uVar18 = acl::bitset_count_set_bits
                         ((this->DatabaseContext).m_context.streaming_chunks[0],bVar25);
      if (uVar18 == 0) {
        uVar18 = pcVar11[1].m_padding[0];
        puVar21 = (this->DatabaseContext).m_context.loaded_chunks[0];
        uVar8 = uVar23;
        if (uVar26 < uVar23) {
          uVar8 = uVar26;
        }
        uVar29 = 0;
        if (uVar26 + 0x1f >> 5 != 0) {
LAB_14deb8bf0:
          iVar20 = 0;
          if (*puVar21 != 0) {
            for (; (*puVar21 >> iVar20 & 1) == 0; iVar20 = iVar20 + 1) {
            }
          }
          iVar22 = 0x20;
          if (*puVar21 != 0) {
            iVar22 = iVar20;
          }
          if (iVar22 == 0) goto code_r0x00014deb8c03;
          uVar29 = (uVar29 + 1) * 0x20 - iVar22;
          uVar31 = (ulonglong)uVar29;
          if (uVar29 != 0xffffffff) {
            uVar27 = (uVar31 - 1) + (ulonglong)uVar8;
            uVar32 = (ulonglong)uVar29;
            if (uVar26 <= uVar27) {
              uVar27 = (ulonglong)(uVar26 - 1);
            }
            iVar20 = (int)uVar27 - uVar29;
            uVar26 = iVar20 + 1;
            if (uVar26 != 0) {
              pdVar12 = (this->DatabaseContext).m_context.streamers[0];
              uVar23 = pdVar12->m_next_request_index;
              psVar4 = pdVar12->m_requests + uVar23;
              if (pdVar12->m_requests[uVar23].tier == highest_importance) {
                uVar8 = pdVar12->m_generation_id;
                pdVar12->m_generation_id = uVar8 + 1;
                pdVar12->m_next_request_index = (uVar23 + 1) % pdVar12->m_num_requests;
                psVar4->action = stream_in;
                psVar4->tier = medium_importance;
                psVar4->first_chunk_index = uVar29;
                psVar4->num_streaming_chunks = uVar26;
                psVar4->generation_id = uVar8;
                if (CONCAT44(uVar8,uVar23) == -1) goto LAB_14deb9023;
                uVar9 = pcVar11[4].m_padding[uVar31 * 2 + -1];
                puVar21 = (this->DatabaseContext).m_context.streaming_chunks[0];
                uVar26 = uVar26 + uVar29;
                uVar10 = pcVar11[4].m_padding[(uVar27 & 0xffffffff) * 2 + -2];
                puVar13 = (this->DatabaseContext).m_context.bulk_data[0];
                while (uVar29 < uVar26) {
                  uVar27 = uVar32 >> 5;
                  uVar32 = uVar32 + 1;
                  puVar5 = puVar21 + uVar27;
                  uVar30 = (uint)uVar31;
                  uVar29 = uVar30 + 1;
                  uVar31 = (ulonglong)uVar29;
                  *puVar5 = *puVar5 | 1 << (0x1f - (uVar30 & 0x1f) & 0x1f);
                }
                (**(code **)(pdVar12->_padding_ + 0x18))
                          (pdVar12,uVar9,iVar20 * uVar18 + uVar10,puVar13 == (uchar *)0x0,1,
                           CONCAT44(uVar8,uVar23));
                LogRequestResult(this,dispatched);
                goto LAB_14deb8fa5;
              }
LAB_14deb9023:
              LogRequestResult(this,no_free_streaming_requests);
              iVar20 = 0x3fb;
              goto LAB_14deb9105;
            }
          }
        }
LAB_14deb8c4e:
        LogRequestResult(this,done);
        goto LAB_14deb8d43;
      }
      LogRequestResult(this,streaming_in_progress);
      if (pFVar24[0xd] != (FScriptContainerElement)0x0) goto LAB_14deb8fc1;
      iVar20 = 0x3f7;
    }
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Request.bIsInProgress",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimationCompressionLibraryDatabase.cpp"
                        ,iVar20,L"Expected request to already be in progress");
    if (bVar16) {
code_r0x00014deb919a:
      pcVar15 = (code *)swi(3);
      uVar17 = (*pcVar15)();
      return (bool)uVar17;
    }
  }
LAB_14deb8fc1:
  iVar20 = (this->FidelityChangeRequests).ArrayNum;
  if ((iVar20 == 0) &&
     (&this->FidelityUpdateTickerHandle != (TWeakPtr<FTSTicker::FElement,1> *)local_48)) {
    pTVar14 = (this->FidelityUpdateTickerHandle).WeakReferenceCount.ReferenceController;
    (this->FidelityUpdateTickerHandle).Object = (FElement *)0x0;
    (this->FidelityUpdateTickerHandle).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar14->WeakReferenceCount;
      aVar6 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar6 == (atomic<int>)0x1) {
        (**(code **)(pTVar14->_padding_ + 8))(pTVar14,1);
      }
    }
  }
  return iVar20 != 0;
code_r0x00014deb8c03:
  uVar29 = uVar29 + 1;
  puVar21 = puVar21 + 1;
  if (bVar25.m_size <= uVar29) goto LAB_14deb8c4e;
  goto LAB_14deb8bf0;
LAB_14deb8fa5:
  pFVar24[0xd] = (FScriptContainerElement)0x1;
  goto LAB_14deb8fc1;
}

// __VTableCtorCaller @ 14deb9970

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UAnimationCompressionLibraryDatabase::__VTableCtorCaller(FVTableHelper *param_1)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  
  pUVar8 = GetTransientPackageAsObject();
  pUVar9 = GetPrivateStaticClass();
  pUVar8 = StaticAllocateObject
                     (pUVar9,pUVar8,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar8 != (UObject *)0x0) {
    UObject::UObject(pUVar8,param_1);
    *(undefined ***)pUVar8 = &___7UAnimationCompressionLibraryDatabase__6B_;
    *(undefined8 *)(pUVar8 + 1) = 0;
    *(undefined8 *)&pUVar8[1].field_0x8 = 0;
    *(undefined8 *)&pUVar8[1].field_0x10 = 0;
    *(undefined8 *)&pUVar8[1].field_0x18 = 0;
    *(undefined8 *)&pUVar8[1].field_0x20 = 0;
    *(undefined8 *)(pUVar8 + 2) = 0;
    *(undefined8 *)&pUVar8[2].field_0x8 = 0;
    *(undefined4 *)&pUVar8[2].field_0x5 = 0xffffffff;
    pUVar8[2].field_0x9 = 0xff;
    uVar1 = FIoChunkId::InvalidChunkId.Id[1];
    uVar2 = FIoChunkId::InvalidChunkId.Id[2];
    uVar3 = FIoChunkId::InvalidChunkId.Id[3];
    uVar4 = FIoChunkId::InvalidChunkId.Id[4];
    uVar5 = FIoChunkId::InvalidChunkId.Id[5];
    uVar6 = FIoChunkId::InvalidChunkId.Id[6];
    uVar7 = FIoChunkId::InvalidChunkId.Id[7];
    pUVar8[2].field_0x10 = FIoChunkId::InvalidChunkId.Id[0];
    pUVar8[2].field_0x11 = uVar1;
    pUVar8[2].field_0x12 = uVar2;
    pUVar8[2].field_0x13 = uVar3;
    pUVar8[2].field_0x14 = uVar4;
    pUVar8[2].field_0x15 = uVar5;
    pUVar8[2].field_0x16 = uVar6;
    pUVar8[2].field_0x17 = uVar7;
    uVar1 = FIoChunkId::InvalidChunkId.Id[9];
    uVar2 = FIoChunkId::InvalidChunkId.Id[10];
    uVar3 = FIoChunkId::InvalidChunkId.Id[0xb];
    pUVar8[2].field_0x18 = FIoChunkId::InvalidChunkId.Id[8];
    pUVar8[2].field_0x19 = uVar1;
    pUVar8[2].field_0x1a = uVar2;
    pUVar8[2].field_0x1b = uVar3;
    *(undefined8 *)(pUVar8 + 3) = 0;
    *(undefined8 *)&pUVar8[3].field_0x8 = 0;
    *(undefined8 *)&pUVar8[3].field_0x10 = 0;
    *(undefined8 *)&pUVar8[3].field_0x18 = 0;
    *(undefined8 *)&pUVar8[3].field_0x20 = 0;
    *(undefined8 *)(pUVar8 + 4) = 0;
    *(undefined8 *)&pUVar8[4].field_0x8 = 0;
    *(undefined8 *)&pUVar8[4].field_0x10 = 0;
    *(undefined8 *)&pUVar8[4].field_0x18 = 0;
    *(undefined8 *)&pUVar8[4].field_0x20 = 0;
    *(undefined4 *)(pUVar8 + 5) = 0;
    *(undefined8 *)&pUVar8[5].field_0x4 = 0;
    *(undefined8 *)&pUVar8[5].field_0xc = 0;
    *(undefined8 *)&pUVar8[5].field_0x14 = 0;
    *(undefined8 *)&pUVar8[5].field_0x1c = 0;
    *(undefined4 *)&pUVar8[5].field_0x24 = 0;
    *(undefined8 *)&pUVar8[2].field_0x20 = 0;
    *(undefined8 *)(pUVar8 + 6) = 0;
    *(undefined8 *)&pUVar8[6].field_0x10 = 0;
    *(undefined8 *)&pUVar8[6].field_0x18 = 0;
    *(undefined8 *)&pUVar8[6].field_0x20 = 0;
    *(undefined8 *)(pUVar8 + 7) = 0;
    return pUVar8;
  }
  return (UObject *)0x0;
}

// execGetVisualFidelity @ 14deb9c80

void __cdecl
UAnimationCompressionLibraryDatabase::execGetVisualFidelity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DatabaseAsset != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimationCompressionLibraryDatabase.cpp"
                       ,0x48b,L"Cannot query null ACL database asset");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined1 *)param_3 = 2;
    return;
  }
  *(undefined1 *)param_3 = *(undefined1 *)(local_res10 + 0xf8);
  return;
}

// execSetVisualFidelity @ 14deb9d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UAnimationCompressionLibraryDatabase::execSetVisualFidelity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  FPendingLatentAction FVar4;
  UObject *pUVar5;
  int iVar6;
  FPendingLatentAction FVar7;
  bool bVar8;
  UWorld *this;
  FLatentActionManager *this_00;
  FSetDatabaseVisualFidelityAction *pFVar9;
  FPendingLatentAction *pFVar10;
  FPendingLatentAction FVar11;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  FFirstItemPredicate local_78 [4];
  undefined4 local_74;
  FPendingLatentAction local_70;
  UObject *local_68;
  FPendingLatentAction local_60;
  undefined8 local_58;
  FPendingLatentAction local_50;
  FPendingLatentAction local_48;
  
  local_68 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_58 = 0xffffffffffffffff;
  local_50 = (FPendingLatentAction)0x0;
  local_48 = (FPendingLatentAction)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_70 = (FPendingLatentAction)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FVar11 = (FPendingLatentAction)local_res10;
  if ((FPendingLatentAction)param_2->MostRecentPropertyAddress != (FPendingLatentAction)0x0) {
    FVar11 = (FPendingLatentAction)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  FVar7 = local_48;
  FVar4 = local_70;
  uVar3 = local_res20[0];
  iVar6 = local_58._4_4_;
  local_74 = (undefined4)local_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_60 = local_50;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_48 != (FPendingLatentAction)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_48);
  }
  pUVar5 = local_68;
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimationCompressionLibraryDatabase.cpp"
                         ,0x47c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = UEngine::GetWorldFromContextObject(GEngine,pUVar5,LogAndReturnNull);
  if (this != (UWorld *)0x0) {
    this_00 = UWorld::GetLatentActionManager(this);
    pFVar9 = FLatentActionManager::
             FindExistingActionWithPredicate<FSetDatabaseVisualFidelityAction,_FLatentActionManager::FindExistingAction<FSetDatabaseVisualFidelityAction>_::__l2::FFirstItemPredicate>
                       (this_00,(UObject *)FVar7,iVar6,local_78);
    if (pFVar9 == (FSetDatabaseVisualFidelityAction *)0x0) {
      pFVar10 = ::operator_new(0x40);
      if (pFVar10 == (FPendingLatentAction *)0x0) {
        pFVar10 = (FPendingLatentAction *)0x0;
      }
      else {
        pFVar10[1] = FVar4;
        *pFVar10 = (FPendingLatentAction)&___7FSetDatabaseVisualFidelityAction__6B_;
        *(undefined4 *)(pFVar10 + 4) = local_74;
        *(undefined1 *)(pFVar10 + 2) = uVar3;
        pFVar10[3] = FVar11;
        pFVar10[5] = local_60;
        *(int *)&pFVar10[4].field_0x4 = iVar6;
        pFVar10[6] = FVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (FVar7 != (FPendingLatentAction)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar7);
        }
        *(undefined1 *)(pFVar10 + 7) = 0;
        *(undefined4 *)&pFVar10[7].field_0x4 = 0xffffffff;
      }
      FLatentActionManager::AddNewAction(this_00,(UObject *)FVar7,iVar6,pFVar10);
    }
  }
  return;
}

// operator() @ 150590380

bool __thiscall
`UAnimationCompressionLibraryDatabase::UpdateVisualFidelityTicker'::__l21::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_118707445747940477>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_118707445747940477>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505903c0

bool __thiscall
`UAnimationCompressionLibraryDatabase::UpdateVisualFidelityTicker'::__l85::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_118707445747940385>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_118707445747940385>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

