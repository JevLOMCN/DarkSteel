// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// FUniqueRequestList @ 1458ccc10

FUniqueRequestList * __thiscall
FUniqueRequestList::FUniqueRequestList
          (FUniqueRequestList *this,
          TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> *param_1)

{
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar3;
  bool bVar4;
  
  memset(&this->ContinuousUpdateRequestHash,0xff,0x800);
  aVar1 = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>)
          TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0x8018,8);
  *(undefined8 *)((longlong)aVar1 + 8) = 0;
  *(undefined ***)aVar1 =
       &
       ___7__TObjectArray_TFVirtualTextureLocalTileRequest_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
  ;
  *(undefined8 *)((longlong)aVar1 + 0x10) = 0x1000;
  aVar2 = param_1->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> *)
     ((longlong)aVar1 + 8) = aVar2;
    LOCK();
    aVar3 = param_1->Next;
    bVar4 = aVar2 == aVar3;
    if (bVar4) {
      param_1->Next = aVar1;
      aVar3 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar3;
  } while (!bVar4);
  this->LoadRequests = (FVirtualTextureLocalTileRequest *)((longlong)aVar1 + 0x18);
  aVar1 = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>)
          TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0xf818,8);
  *(undefined8 *)((longlong)aVar1 + 8) = 0;
  *(undefined ***)aVar1 =
       &
       ___7__TObjectArray_TFMappingRequest_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
  ;
  *(undefined8 *)((longlong)aVar1 + 0x10) = 0x1f00;
  aVar2 = param_1->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> *)
     ((longlong)aVar1 + 8) = aVar2;
    LOCK();
    aVar3 = param_1->Next;
    bVar4 = aVar2 == aVar3;
    if (bVar4) {
      param_1->Next = aVar1;
      aVar3 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar3;
  } while (!bVar4);
  this->MappingRequests = (FMappingRequest *)((longlong)aVar1 + 0x18);
  aVar1 = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>)
          TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0x17418,8);
  *(undefined8 *)((longlong)aVar1 + 8) = 0;
  *(undefined ***)aVar1 =
       &
       ___7__TObjectArray_TFDirectMappingRequest_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
  ;
  *(undefined8 *)((longlong)aVar1 + 0x10) = 0x1f00;
  aVar2 = param_1->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> *)
     ((longlong)aVar1 + 8) = aVar2;
    LOCK();
    aVar3 = param_1->Next;
    bVar4 = aVar2 == aVar3;
    if (bVar4) {
      param_1->Next = aVar1;
      aVar3 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar3;
  } while (!bVar4);
  this->DirectMappingRequests = (FDirectMappingRequest *)((longlong)aVar1 + 0x18);
  aVar1 = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>)
          TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0x8018,8);
  *(undefined8 *)((longlong)aVar1 + 8) = 0;
  *(undefined ***)aVar1 =
       &
       ___7__TObjectArray_TFVirtualTextureLocalTileRequest_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
  ;
  *(undefined8 *)((longlong)aVar1 + 0x10) = 0x1000;
  aVar2 = param_1->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> *)
     ((longlong)aVar1 + 8) = aVar2;
    LOCK();
    aVar3 = param_1->Next;
    bVar4 = aVar2 == aVar3;
    if (bVar4) {
      param_1->Next = aVar1;
      aVar3 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar3;
  } while (!bVar4);
  this->ContinuousUpdateRequests = (FVirtualTextureLocalTileRequest *)((longlong)aVar1 + 0x18);
  aVar1 = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>)
          TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0x4010,8);
  *(undefined ***)aVar1 =
       &___7FAllocation___TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_;
  *(undefined8 *)((longlong)aVar1 + 8) = 0;
  aVar2 = param_1->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> *)
     ((longlong)aVar1 + 8) = aVar2;
    LOCK();
    aVar3 = param_1->Next;
    bVar4 = aVar2 == aVar3;
    if (bVar4) {
      param_1->Next = aVar1;
      aVar3 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar3;
  } while (!bVar4);
  this->AdaptiveAllocationsRequests = (uint *)((longlong)aVar1 + 0x13U & 0xfffffffffffffffc);
  aVar1 = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>)
          TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0x2010,8);
  *(undefined ***)aVar1 =
       &___7FAllocation___TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_;
  *(undefined8 *)((longlong)aVar1 + 8) = 0;
  aVar2 = param_1->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> *)
     ((longlong)aVar1 + 8) = aVar2;
    LOCK();
    aVar3 = param_1->Next;
    bVar4 = aVar2 == aVar3;
    if (bVar4) {
      param_1->Next = aVar1;
      aVar3 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar3;
  } while (!bVar4);
  this->LoadRequestCount = (ushort *)((longlong)aVar1 + 0x11U & 0xfffffffffffffffe);
  aVar1 = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>)
          TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0x1010,8);
  *(undefined ***)aVar1 =
       &___7FAllocation___TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_;
  *(undefined8 *)((longlong)aVar1 + 8) = 0;
  aVar2 = param_1->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> *)
     ((longlong)aVar1 + 8) = aVar2;
    LOCK();
    aVar3 = param_1->Next;
    bVar4 = aVar2 == aVar3;
    if (bVar4) {
      param_1->Next = aVar1;
      aVar3 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar3;
  } while (!bVar4);
  this->LoadRequestGroupMask = (uchar *)((longlong)aVar1 + 0x10);
  aVar1 = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>)
          TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0x1010,8);
  *(undefined ***)aVar1 =
       &___7FAllocation___TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_;
  *(undefined8 *)((longlong)aVar1 + 8) = 0;
  aVar2 = param_1->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> *)
     ((longlong)aVar1 + 8) = aVar2;
    LOCK();
    aVar3 = param_1->Next;
    bVar4 = aVar2 == aVar3;
    if (bVar4) {
      param_1->Next = aVar1;
      aVar3 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar3;
  } while (!bVar4);
  this->NumLoadRequests = 0;
  this->NumLockRequests = 0;
  this->NumNonStreamingLoadRequests = 0;
  this->NumMappingRequests = 0;
  this->NumDirectMappingRequests = 0;
  this->NumContinuousUpdateRequests = 0;
  this->NumAdaptiveAllocationRequests = 0;
  this->LoadRequestFlags = (FLoadRequestFlags *)((longlong)aVar1 + 0x10);
  return this;
}

// AddAdaptiveAllocationRequest @ 1458d7780

void __thiscall
FUniqueRequestList::AddAdaptiveAllocationRequest(FUniqueRequestList *this,uint param_1)

{
  if (this->NumAdaptiveAllocationRequests < 0x1000) {
    this->AdaptiveAllocationsRequests[this->NumAdaptiveAllocationRequests] = param_1;
    this->NumAdaptiveAllocationRequests = this->NumAdaptiveAllocationRequests + 1;
  }
  return;
}

// AddContinuousUpdateRequest @ 1458d8480

void __thiscall
FUniqueRequestList::AddContinuousUpdateRequest
          (FUniqueRequestList *this,FVirtualTextureLocalTileRequest *param_1)

{
  uint uVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = param_1->PackedValue & 0xfffffffffffffff;
  uVar3 = (uVar6 >> 0x21 ^ uVar6) * -0xae502812aa7333;
  lVar4 = (uVar3 >> 0x21 ^ uVar3) * -0x3b314601e57a13ad;
  uVar5 = ((uint)((ulonglong)lVar4 >> 0x21) ^ (uint)lVar4) & 0x3ff;
  uVar2 = (this->ContinuousUpdateRequestHash).Hash[uVar5];
  if (uVar2 != 0xffff) {
    do {
      if (uVar6 == (this->ContinuousUpdateRequests[uVar2].PackedValue & 0xfffffffffffffff)) {
        FVirtualTextureLocalTileRequest::MergeWith
                  ((FVirtualTextureLocalTileRequest *)&this->ContinuousUpdateRequests[uVar2]._s_1,
                   param_1);
        return;
      }
      uVar2 = (this->ContinuousUpdateRequestHash).NextIndex[uVar2];
    } while (uVar2 != 0xffff);
  }
  uVar1 = this->NumContinuousUpdateRequests;
  if (uVar1 < 0x1000) {
    this->NumContinuousUpdateRequests = uVar1 + 1;
    (this->ContinuousUpdateRequestHash).NextIndex[(ulonglong)uVar1 & 0xffff] =
         (this->ContinuousUpdateRequestHash).Hash[uVar5];
    (this->ContinuousUpdateRequestHash).Hash[uVar5] = (ushort)uVar1;
    this->ContinuousUpdateRequests[uVar1] = *param_1;
  }
  return;
}

// AddDirectMappingRequest @ 1458d8860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FUniqueRequestList::AddDirectMappingRequest(FUniqueRequestList *this,FDirectMappingRequest *param_1)

{
  int iVar1;
  uint uVar2;
  FDirectMappingRequest *pFVar3;
  ushort uVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  uint local_28 [3];
  int local_1c [5];
  
  puVar6 = local_28;
  local_28[0] = param_1->PackedValue[0];
  uVar7 = 0;
  local_28[1] = param_1->PackedValue[1];
  local_28[2] = param_1->PackedValue[2];
  do {
    iVar1 = *puVar6;
    puVar6 = puVar6 + 1;
    uVar7 = uVar7 ^ ((uint)(iVar1 * -0x3361d2af) >> 0x11 | iVar1 * 0x16a88000) * 0x1b873593;
    uVar7 = ((uVar7 >> 0x13 | uVar7 << 0xd) + 0xfaddaf14) * 5;
  } while (puVar6 != (uint *)local_1c);
  uVar7 = (uVar7 >> 0x10 ^ uVar7) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = (uVar7 >> 0x10 ^ uVar7) & 0x1ff;
  uVar4 = (this->DirectMappingRequestHash).Hash[uVar7];
  if (uVar4 != 0xffff) {
    pFVar3 = this->DirectMappingRequests;
    do {
      uVar5 = (ulonglong)uVar4;
      if (((param_1->PackedValue[0] == pFVar3[uVar5].PackedValue[0]) &&
          (param_1->PackedValue[1] == *(uint *)((longlong)pFVar3 + uVar5 * 0xc + 4))) &&
         (param_1->PackedValue[2] == *(uint *)((longlong)pFVar3 + uVar5 * 0xc + 8))) {
        return;
      }
      uVar4 = (this->DirectMappingRequestHash).NextIndex[uVar5];
    } while (uVar4 != 0xffff);
  }
  uVar2 = this->NumDirectMappingRequests;
  uVar5 = (ulonglong)uVar2;
  if (uVar2 < 0x1f00) {
    this->NumDirectMappingRequests = uVar2 + 1;
    (this->DirectMappingRequestHash).NextIndex[uVar5 & 0xffff] =
         (this->DirectMappingRequestHash).Hash[uVar7];
    (this->DirectMappingRequestHash).Hash[uVar7] = (ushort)uVar2;
    pFVar3 = this->DirectMappingRequests;
    *(undefined8 *)(pFVar3 + uVar5) = *(undefined8 *)param_1;
    pFVar3->PackedValue[uVar5 * 3 + 2] = param_1->PackedValue[2];
  }
  return;
}

// AddDirectMappingRequest @ 1458d89c0

void __thiscall
FUniqueRequestList::AddDirectMappingRequest
          (FUniqueRequestList *this,uchar param_1,ushort param_2,uchar param_3,uint param_4,
          uint param_5,uchar param_6,uchar param_7,ushort param_8)

{
  FDirectMappingRequest local_18 [2];
  
  local_18[0]._8_4_ = param_3 & 0xf;
  local_18[0]._0_4_ = ((uint)param_1 << 4 | param_6 & 0xf) << 0x18 | param_5 & 0xffffff;
  local_18[0]._4_4_ =
       ((param_7 & 0xf | param_4 << 4) << 8 | (uint)(byte)param_2) << 0x10 | (uint)param_8;
  AddDirectMappingRequest(this,local_18);
  return;
}

// AddLoadRequest @ 1458d8c30

ushort __thiscall
FUniqueRequestList::AddLoadRequest
          (FUniqueRequestList *this,FVirtualTextureLocalTileRequest *param_1,uchar param_2,
          ushort param_3,bool param_4)

{
  ushort *puVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  ulonglong uVar7;
  byte local_res18;
  
  uVar7 = ((param_1->PackedValue & 0xfffffffffffffff) >> 0x21 ^
          param_1->PackedValue & 0xfffffffffffffff) * -0xae502812aa7333;
  uVar7 = (uVar7 >> 0x21 ^ uVar7) * -0x3b314601e57a13ad;
  if ((param_2 == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GroupMask != 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\UniqueRequestList.h"
                         ,0xc1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  uVar5 = (ushort)((ushort)(uVar7 >> 0x21) ^ (ushort)uVar7) & 0x3ff;
  puVar1 = (this->LoadRequestHash).Hash + uVar5;
  uVar4 = (this->LoadRequestHash).Hash[uVar5];
  if (uVar4 != 0xffff) {
    do {
      if ((param_1->PackedValue & 0xfffffffffffffff) ==
          (this->LoadRequests[uVar4].PackedValue & 0xfffffffffffffff)) {
        FVirtualTextureLocalTileRequest::MergeWith
                  ((FVirtualTextureLocalTileRequest *)&this->LoadRequests[uVar4]._s_1,param_1);
        if ((this->LoadRequestFlags[uVar4].bStreaming != param_4) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("LoadRequestFlags[Index].bStreaming == bStreamingRequest",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\UniqueRequestList.h"
                               ,200,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return uVar4;
        }
        uVar5 = (uint)this->LoadRequestCount[uVar4] + (uint)param_3;
        uVar6 = 0xffff;
        if (uVar5 < 0xffff) {
          uVar6 = (ushort)uVar5;
        }
        this->LoadRequestCount[uVar4] = uVar6;
        this->LoadRequestGroupMask[uVar4] = this->LoadRequestGroupMask[uVar4] | param_2;
        return uVar4;
      }
      uVar4 = (this->LoadRequestHash).NextIndex[uVar4];
    } while (uVar4 != 0xffff);
  }
  uVar5 = this->NumLoadRequests;
  if (uVar5 < 0x1000) {
    this->NumLoadRequests = uVar5 + 1;
    (this->LoadRequestHash).NextIndex[uVar5 & 0xffff] = *puVar1;
    uVar4 = (ushort)uVar5;
    *puVar1 = uVar4;
    this->LoadRequests[uVar5] = *param_1;
    this->LoadRequestCount[uVar5] = param_3;
    this->LoadRequestGroupMask[uVar5] = param_2;
    this->LoadRequestFlags[uVar5] = (FLoadRequestFlags)(local_res18 & 0xfc | param_4 * '\x02');
  }
  else {
    uVar4 = 0xffff;
  }
  return uVar4;
}

// AddMappingRequest @ 1458d8e40

void __thiscall
FUniqueRequestList::AddMappingRequest
          (FUniqueRequestList *this,ushort param_1,uchar param_2,uchar param_3,uchar param_4,
          uint param_5,uint param_6,uchar param_7,uchar param_8)

{
  code *pcVar1;
  ulong64 uVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  if ((this->NumLoadRequests <= (uint)param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LoadRequestIndex < NumLoadRequests",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\UniqueRequestList.h"
                         ,0x107,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar8 = ((uint)param_3 << 4 | param_7 & 0xf) << 0x18 | param_6 & 0xffffff;
  uVar4 = (param_8 & 0xf | ((param_4 & 0xf | param_5 << 4) << 4 | param_2 & 0xf) << 4) << 0x10 |
          (uint)param_1;
  uVar7 = ((ulonglong)(uVar4 >> 1) ^ CONCAT44(uVar4,uVar8)) * -0xae502812aa7333;
  lVar5 = (uVar7 >> 0x21 ^ uVar7) * -0x3b314601e57a13ad;
  uVar2 = CONCAT44(uVar4,uVar8);
  uVar4 = ((uint)((ulonglong)lVar5 >> 0x21) ^ (uint)lVar5) & 0x3ff;
  uVar6 = (this->MappingRequestHash).Hash[uVar4];
  if (uVar6 != 0xffff) {
    do {
      if (uVar2 == this->MappingRequests[uVar6].PackedValue) {
        return;
      }
      uVar6 = (this->MappingRequestHash).NextIndex[uVar6];
    } while (uVar6 != 0xffff);
  }
  uVar8 = this->NumMappingRequests;
  if (uVar8 < 0x1f00) {
    this->NumMappingRequests = uVar8 + 1;
    (this->MappingRequestHash).NextIndex[(ulonglong)uVar8 & 0xffff] =
         (this->MappingRequestHash).Hash[uVar4];
    (this->MappingRequestHash).Hash[uVar4] = (ushort)uVar8;
    this->MappingRequests[uVar8].PackedValue = uVar2;
  }
  return;
}

// LockLoadRequest @ 14590fee0

ushort __thiscall
FUniqueRequestList::LockLoadRequest
          (FUniqueRequestList *this,FVirtualTextureLocalTileRequest *param_1,uchar param_2,
          bool param_3)

{
  ushort *puVar1;
  FLoadRequestFlags *pFVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  ulonglong uVar7;
  byte local_res18;
  
  uVar7 = ((param_1->PackedValue & 0xfffffffffffffff) >> 0x21 ^
          param_1->PackedValue & 0xfffffffffffffff) * -0xae502812aa7333;
  uVar7 = (uVar7 >> 0x21 ^ uVar7) * -0x3b314601e57a13ad;
  if ((param_2 == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GroupMask != 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\UniqueRequestList.h"
                         ,0xe0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  uVar6 = (ushort)((ushort)(uVar7 >> 0x21) ^ (ushort)uVar7) & 0x3ff;
  uVar5 = (this->LoadRequestHash).Hash[uVar6];
  puVar1 = (this->LoadRequestHash).Hash + uVar6;
  if (uVar5 != 0xffff) {
    do {
      if ((param_1->PackedValue & 0xfffffffffffffff) ==
          (this->LoadRequests[uVar5].PackedValue & 0xfffffffffffffff)) {
        FVirtualTextureLocalTileRequest::MergeWith
                  ((FVirtualTextureLocalTileRequest *)&this->LoadRequests[uVar5]._s_1,param_1);
        pFVar2 = this->LoadRequestFlags;
        if ((param_3 != pFVar2[uVar5].bStreaming) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("bStreamingRequest == Flags.bStreaming",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\UniqueRequestList.h"
                               ,0xe9,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return uVar5;
        }
        if (pFVar2[uVar5].bLocked == 0) {
          pFVar2[uVar5] = (FLoadRequestFlags)((byte)pFVar2[uVar5] | 1);
          this->LoadRequestCount[uVar5] = 0xffff;
          this->NumLockRequests = this->NumLockRequests + 1;
        }
        this->LoadRequestGroupMask[uVar5] = this->LoadRequestGroupMask[uVar5] | param_2;
        return uVar5;
      }
      uVar5 = (this->LoadRequestHash).NextIndex[uVar5];
    } while (uVar5 != 0xffff);
  }
  uVar6 = this->NumLoadRequests;
  if (uVar6 < 0x1000) {
    this->NumLoadRequests = uVar6 + 1;
    (this->LoadRequestHash).NextIndex[uVar6 & 0xffff] = *puVar1;
    uVar5 = (ushort)uVar6;
    *puVar1 = uVar5;
    this->LoadRequests[uVar6] = *param_1;
    this->LoadRequestCount[uVar6] = 0xffff;
    this->LoadRequestGroupMask[uVar6] = param_2;
    this->LoadRequestFlags[uVar6] = (FLoadRequestFlags)(local_res18 & 0xfd | param_3 * '\x02' | 1);
    this->NumLockRequests = this->NumLockRequests + 1;
  }
  else {
    uVar5 = 0xffff;
  }
  return uVar5;
}

// MergeRequests @ 145912770

void __thiscall
FUniqueRequestList::MergeRequests
          (FUniqueRequestList *this,FUniqueRequestList *param_1,
          TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag> *param_2)

{
  ushort *puVar1;
  FMappingRequest *pFVar2;
  undefined4 uVar3;
  code *pcVar4;
  ushort uVar5;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar6;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar7;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar8;
  ulonglong uVar9;
  uint uVar10;
  byte bVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  
  aVar6 = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>)
          TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc
                    ((ulonglong)param_1->NumLoadRequests * 2 + 0x10,8);
  uVar13 = 0;
  *(undefined ***)aVar6 =
       &___7FAllocation___TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_;
  *(undefined8 *)((longlong)aVar6 + 8) = 0;
  uVar12 = (longlong)aVar6 + 0x11U & 0xfffffffffffffffe;
  aVar7 = param_2->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> *)
     ((longlong)aVar6 + 8) = aVar7;
    LOCK();
    aVar8 = param_2->Next;
    bVar14 = aVar7 == aVar8;
    if (bVar14) {
      param_2->Next = aVar6;
      aVar8 = aVar7;
    }
    UNLOCK();
    aVar7 = aVar8;
  } while (!bVar14);
  uVar9 = uVar13;
  if (param_1->NumLoadRequests != 0) {
    do {
      if ((uint)uVar9 < param_1->NumLockRequests) {
        uVar5 = LockLoadRequest(this,param_1->LoadRequests + uVar9,
                                param_1->LoadRequestGroupMask[uVar9],
                                param_1->LoadRequestFlags[uVar9].bStreaming);
      }
      else {
        uVar5 = AddLoadRequest(this,param_1->LoadRequests + uVar9,
                               param_1->LoadRequestGroupMask[uVar9],param_1->LoadRequestCount[uVar9]
                               ,param_1->LoadRequestFlags[uVar9].bStreaming);
      }
      uVar10 = (uint)uVar9 + 1;
      *(ushort *)(uVar9 * 2 + uVar12) = uVar5;
      uVar9 = (ulonglong)uVar10;
    } while (uVar10 < param_1->NumLoadRequests);
  }
  uVar9 = uVar13;
  if (param_1->NumMappingRequests != 0) {
    do {
      pFVar2 = param_1->MappingRequests + uVar9;
      if ((param_1->NumLoadRequests <=
           (uint)*(ushort *)((longlong)param_1->MappingRequests + uVar9 * 8 + 4)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Request.LoadRequestIndex < Other->NumLoadRequests",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\UniqueRequestList.h"
                              ,0x163,L""), bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar1 = &(pFVar2->_s_1).LoadRequestIndex;
      uVar3._0_2_ = *(ushort *)((longlong)pFVar2 + 4);
      uVar3._2_2_ = *(undefined2 *)((longlong)pFVar2 + 6);
      uVar5 = *(ushort *)(uVar12 + (ulonglong)(uVar3 & 0xffff) * 2);
      if (uVar5 != 0xffff) {
        bVar11 = (byte)(*(uint *)pFVar2 >> 0x18);
        AddMappingRequest(this,uVar5,ZPULL(uVar3,0x14,4),bVar11 >> 4,
                          (pFVar2->_s_1).PageTableLayerIndex,(pFVar2->_s_1).MaxLevel,
                          *(uint *)pFVar2 & 0xffffff,bVar11 & 0xf,(pFVar2->_s_1).Local_vLevel);
      }
      uVar10 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar10;
    } while (uVar10 < param_1->NumMappingRequests);
  }
  uVar12 = uVar13;
  if (param_1->NumDirectMappingRequests != 0) {
    do {
      AddDirectMappingRequest(this,param_1->DirectMappingRequests + uVar12);
      uVar10 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar10;
    } while (uVar10 < param_1->NumDirectMappingRequests);
  }
  uVar12 = uVar13;
  if (param_1->NumContinuousUpdateRequests != 0) {
    do {
      AddContinuousUpdateRequest(this,param_1->ContinuousUpdateRequests + uVar12);
      uVar10 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar10;
    } while (uVar10 < param_1->NumContinuousUpdateRequests);
  }
  if (param_1->NumAdaptiveAllocationRequests != 0) {
    uVar12 = (ulonglong)param_1->NumAdaptiveAllocationRequests;
    do {
      if (this->NumAdaptiveAllocationRequests < 0x1000) {
        this->AdaptiveAllocationsRequests[this->NumAdaptiveAllocationRequests] =
             *(uint *)(uVar13 + (longlong)param_1->AdaptiveAllocationsRequests);
        this->NumAdaptiveAllocationRequests = this->NumAdaptiveAllocationRequests + 1;
      }
      uVar13 = uVar13 + 4;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}

