// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 2

// Construct<FIoRequestImpl_*_&,UE::IoStore::FChunkRequestParams_const_&> @ 144596120

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FChunkRequest * __thiscall
TSingleThreadedSlabAllocator<UE::IoStore::FChunkRequest,128>::
Construct<FIoRequestImpl_*_&,UE::IoStore::FChunkRequestParams_const_&>
          (TSingleThreadedSlabAllocator<UE::IoStore::FChunkRequest,128> *this,
          FIoRequestImpl **param_1,FChunkRequestParams *param_2)

{
  FElement *pFVar1;
  ushort uVar2;
  int iVar3;
  FSlab *pFVar4;
  FIoRequestImpl *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  FChunkRequest *pFVar10;
  FSlab *pFVar11;
  FLaneTrace *pFVar12;
  FSlab *pFVar13;
  FSlab *pFVar14;
  longlong lVar15;
  LARGE_INTEGER local_res8;
  TStringView<char> local_38;
  
  lVar15 = 0x80;
  uVar2 = this->CurrentSlab->Allocated;
  this->CurrentSlab->Allocated = uVar2 + 1;
  if ((0x7f < uVar2) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementIndex < SlabSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                         ,0x36,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FChunkRequest *)(*pcVar7)();
    return pFVar10;
  }
  pFVar4 = this->CurrentSlab;
  pFVar4->Elements[uVar2].Slab = pFVar4;
  if (this->CurrentSlab->Allocated == 0x80) {
    pFVar11 = ::operator_new(0x4c08);
    pFVar14 = (FSlab *)0x0;
    if (pFVar11 != (FSlab *)0x0) {
      memset(&pFVar11->field_0x4,0,0x4c04);
      pFVar11->Allocated = 0;
      pFVar11->Freed = 0;
      pFVar13 = pFVar11;
      do {
        pFVar13 = (FSlab *)&pFVar13->Elements[0].Slab;
        *(FSlab **)pFVar13 = (FSlab *)0x0;
        lVar15 = lVar15 + -1;
        pFVar14 = pFVar11;
      } while (lVar15 != 0);
    }
    this->CurrentSlab = pFVar14;
  }
  pFVar5 = *param_1;
  pFVar1 = pFVar4->Elements + uVar2;
  (pFVar1->Data).Pad[0] = '\0';
  (pFVar1->Data).Pad[1] = '\0';
  (pFVar1->Data).Pad[2] = '\0';
  (pFVar1->Data).Pad[3] = '\0';
  (pFVar1->Data).Pad[4] = '\0';
  (pFVar1->Data).Pad[5] = '\0';
  (pFVar1->Data).Pad[6] = '\0';
  (pFVar1->Data).Pad[7] = '\0';
  uVar8 = *(undefined8 *)((param_2->ChunkKey).Hash + 8);
  *(undefined8 *)(pFVar4->Elements[uVar2].Data.Pad + 8) = *(undefined8 *)(param_2->ChunkKey).Hash;
  *(undefined8 *)(pFVar4->Elements[uVar2].Data.Pad + 0x10) = uVar8;
  *(undefined4 *)(pFVar4->Elements[uVar2].Data.Pad + 0x18) =
       *(undefined4 *)((param_2->ChunkKey).Hash + 0x10);
  *(undefined8 *)(pFVar4->Elements[uVar2].Data.Pad + 0x1c) =
       *(undefined8 *)(param_2->ChunkRange).OffsetAndLength;
  *(undefined2 *)(pFVar4->Elements[uVar2].Data.Pad + 0x24) =
       *(undefined2 *)((param_2->ChunkRange).OffsetAndLength + 8);
  *(FOnDemandContainer **)(pFVar4->Elements[uVar2].Data.Pad + 0x28) =
       (param_2->ChunkInfo).SharedContainer.Object;
  pTVar6 = (param_2->ChunkInfo).SharedContainer.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar4->Elements[uVar2].Data.Pad + 0x30) = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(FOnDemandChunkEntry **)(pFVar4->Elements[uVar2].Data.Pad + 0x38) = (param_2->ChunkInfo).Entry;
  *(FIoRequestImpl **)(pFVar4->Elements[uVar2].Data.Pad + 0x40) = pFVar5;
  *(FIoRequestImpl **)(pFVar4->Elements[uVar2].Data.Pad + 0x48) = pFVar5;
  pFVar1 = pFVar4->Elements + uVar2;
  (pFVar1->Data).Pad[0x50] = '\0';
  (pFVar1->Data).Pad[0x51] = '\0';
  (pFVar1->Data).Pad[0x52] = '\0';
  (pFVar1->Data).Pad[0x53] = '\0';
  (pFVar1->Data).Pad[0x54] = '\0';
  (pFVar1->Data).Pad[0x55] = '\0';
  (pFVar1->Data).Pad[0x56] = '\0';
  (pFVar1->Data).Pad[0x57] = '\0';
  UE::IoStore::FIASHostGroup::FIASHostGroup
            ((FIASHostGroup *)(pFVar4->Elements[uVar2].Data.Pad + 0x58));
  FIoBuffer::FIoBuffer((FIoBuffer *)(pFVar4->Elements[uVar2].Data.Pad + 0x68));
  QueryPerformanceCounter(&local_res8);
  *(LARGE_INTEGER *)(pFVar4->Elements[uVar2].Data.Pad + 0x70) = local_res8;
  iVar3 = pFVar5->Priority;
  pFVar1 = pFVar4->Elements + uVar2;
  (pFVar1->Data).Pad[0x88] = '\0';
  (pFVar1->Data).Pad[0x89] = '\0';
  (pFVar1->Data).Pad[0x8a] = '\0';
  (pFVar1->Data).Pad[0x8b] = '\0';
  (pFVar1->Data).Pad[0x8c] = '\0';
  (pFVar1->Data).Pad[0x8d] = '\0';
  (pFVar1->Data).Pad[0x8e] = '\0';
  (pFVar1->Data).Pad[0x8f] = '\0';
  lVar15 = *(longlong *)pFVar4->Elements[uVar2].Data.Pad;
  *(int *)(pFVar4->Elements[uVar2].Data.Pad + 0x78) = iVar3;
  pFVar1 = pFVar4->Elements + uVar2;
  (pFVar1->Data).Pad[0x7c] = '\x01';
  (pFVar1->Data).Pad[0x7d] = '\0';
  (pFVar1->Data).Pad[0x7e] = '\0';
  (pFVar1->Data).Pad[0x7f] = '\0';
  if ((lVar15 != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Request && NextRequest == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoDispatcherBackend.cpp"
                         ,0x122,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FChunkRequest *)(*pcVar7)();
    return pFVar10;
  }
  pFVar12 = LaneEstate_Build(UE::IoStore::GRequestLaneEstate,
                             (FLanePostcode)(pFVar4->Elements + uVar2));
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_UE::IoStore::FChunkRequest::FChunkRequest(FIoRequestImpl*___ptr64,UE::IoStore::FChunkRequestParams_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_UE::IoStore::FChunkRequest::FChunkRequest(FIoRequestImpl*___ptr64,UE::IoStore::FChunkRequestParams_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_UE::IoStore::FChunkRequest::FChunkRequest(FIoRequestImpl*___ptr64,UE::IoStore::FChunkRequestParams_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    local_38.Size = 0xb;
    local_38.DataPtr = "Iax/Request";
    `public:___cdecl_UE::IoStore::FChunkRequest::FChunkRequest(FIoRequestImpl*___ptr64,UE::IoStore::FChunkRequestParams_const&___ptr64)___ptr64'
    ::__l2::LaneScopeId = LaneTrace_NewScope(&local_38);
    _Init_thread_footer(&`public:___cdecl_UE::IoStore::FChunkRequest::FChunkRequest(FIoRequestImpl*___ptr64,UE::IoStore::FChunkRequestParams_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  LaneTrace_Enter(pFVar12,`public:___cdecl_UE::IoStore::FChunkRequest::FChunkRequest(FIoRequestImpl*___ptr64,UE::IoStore::FChunkRequestParams_const&___ptr64)___ptr64'
                          ::__l2::LaneScopeId);
  return (FChunkRequest *)(pFVar4->Elements + uVar2);
}

// Alloc @ 1445b36a0

FRequest * __thiscall
TSingleThreadedSlabAllocator<UE::IoStore::FOnDemandContentInstaller::FRequest,32>::Alloc
          (TSingleThreadedSlabAllocator<UE::IoStore::FOnDemandContentInstaller::FRequest,32> *this)

{
  ushort uVar1;
  FSlab *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRequest *pFVar5;
  FSlab *pFVar6;
  FSlab *pFVar7;
  longlong lVar8;
  
  uVar1 = this->CurrentSlab->Allocated;
  this->CurrentSlab->Allocated = uVar1 + 1;
  if ((0x1f < uVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementIndex < SlabSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                         ,0x36,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FRequest *)(*pcVar3)();
    return pFVar5;
  }
  pFVar2 = this->CurrentSlab;
  pFVar2->Elements[uVar1].Slab = pFVar2;
  if (this->CurrentSlab->Allocated == 0x20) {
    pFVar6 = ::operator_new(0x2c10);
    if (pFVar6 == (FSlab *)0x0) {
      pFVar6 = (FSlab *)0x0;
    }
    else {
      memset(&pFVar6->field_0x4,0,0x2c0c);
      pFVar6->Allocated = 0;
      pFVar6->Freed = 0;
      lVar8 = 0x20;
      pFVar7 = pFVar6;
      do {
        pFVar7 = (FSlab *)&pFVar7->Elements[0].Slab;
        *(FSlab **)pFVar7 = (FSlab *)0x0;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    this->CurrentSlab = pFVar6;
  }
  return (FRequest *)(pFVar2->Elements + uVar1);
}

