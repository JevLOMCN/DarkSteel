// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 22

// Acquire @ 1471eaad0

int __thiscall
UE::Mass::FSingleThreadedEntityStorage::Acquire
          (FSingleThreadedEntityStorage *this,TArrayView<FMassEntityHandle,int> *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *_Dst;
  uint uVar9;
  uint uVar10;
  atomic<int> aVar11;
  atomic<int> aVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  FLLMScope local_res8 [2];
  atomic<int> local_res10;
  atomic<int> aStackX_14;
  uint local_res18;
  uint local_res20;
  FMemScope local_58 [3];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name134,L"Mass/SingleThreadedStorage");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name134,false,None,Default,true);
  FMemScope::FMemScope(local_58,&LLMScope_Name134,true);
  local_res18 = param_1->ArrayNum;
  LOCK();
  paVar1 = &this->NextSerialNumber;
  aVar12 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  uVar8 = (this->EntityFreeIndexList).ArrayNum;
  uVar9 = 0;
  uVar10 = 0;
  local_res20 = uVar8;
  if ((int)local_res18 < (int)uVar8) {
    local_res20 = local_res18;
  }
  local_res10 = aVar12;
  if (0 < (int)local_res20) {
    uVar14 = uVar8 - local_res20;
    if ((int)uVar14 < (int)uVar8) {
      lVar15 = 0;
      lVar13 = (longlong)(int)uVar14 * 4;
      uVar9 = uVar14;
      do {
        uVar5 = 0;
        if ((int)uVar9 < (this->EntityFreeIndexList).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        iVar6 = *(int *)((this->EntityFreeIndexList).AllocatorInstance.Data + lVar13);
        uVar5 = iVar6 / 0x2aa;
        uVar7 = 0;
        if ((int)uVar5 < (this->Entities).Chunks.Array.ArrayNum) {
          uVar7 = ~uVar5 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        *(atomic<int> *)
         (*(longlong *)
           ((this->Entities).Chunks.Array.AllocatorInstance.Data + (longlong)(int)uVar5 * 8) + 0x10
         + (ulonglong)(uint)(iVar6 % 0x2aa) * 0x18) = local_res10;
        uVar5 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        uVar10 = uVar10 + 1;
        uVar9 = uVar9 + 1;
        lVar13 = lVar13 + 4;
        *(ulonglong *)((longlong)&param_1->DataPtr->Index + lVar15) = CONCAT44(aVar12,iVar6);
        lVar15 = lVar15 + 8;
      } while ((int)uVar9 < (this->EntityFreeIndexList).ArrayNum);
    }
    uVar9 = local_res20;
    aVar12 = local_res10;
    uVar5 = 0;
    if ((int)uVar8 <= (this->EntityFreeIndexList).ArrayNum) {
      uVar5 = ~(uVar14 | local_res20) >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    _Dst = (this->EntityFreeIndexList).AllocatorInstance.Data + (longlong)(int)uVar14 * 4;
    iVar6 = ((this->EntityFreeIndexList).ArrayNum - uVar14) - uVar9;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + (longlong)(int)uVar9 * 4,(longlong)iVar6 << 2);
    }
    piVar2 = &(this->EntityFreeIndexList).ArrayNum;
    *piVar2 = *piVar2 - uVar9;
  }
  if ((int)uVar9 < (int)local_res18) {
    aVar11 = (atomic<int>)(this->Entities).NumElements;
    TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
    ::Add(&this->Entities,local_res18 - uVar9);
    uVar9 = local_res18;
    if ((int)aVar11 < (this->Entities).NumElements) {
      lVar13 = (longlong)(int)uVar10 * 8;
      aStackX_14 = aVar12;
      do {
        uVar8 = (int)aVar11 / 0x2aa;
        uVar9 = 0;
        if ((int)uVar8 < (this->Entities).Chunks.Array.ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        *(atomic<int> *)
         (*(longlong *)
           ((this->Entities).Chunks.Array.AllocatorInstance.Data + (longlong)(int)uVar8 * 8) + 0x10
         + (ulonglong)(uint)((int)aVar11 % 0x2aa) * 0x18) = aVar12;
        uVar8 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        local_res10 = aVar11;
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        aVar11 = (atomic<int>)((int)aVar11 + 1);
        uVar10 = uVar10 + 1;
        *(ulonglong *)((longlong)&param_1->DataPtr->Index + lVar13) =
             CONCAT44(aStackX_14,local_res10);
        lVar13 = lVar13 + 8;
        uVar9 = local_res18;
      } while ((int)aVar11 < (this->Entities).NumElements);
    }
  }
  FMemScope::~FMemScope(local_58);
  FLLMScope::~FLLMScope(local_res8);
  return uVar9;
}

// AcquireOne @ 1471eb240

FMassEntityHandle __thiscall
UE::Mass::FSingleThreadedEntityStorage::AcquireOne(FSingleThreadedEntityStorage *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  int iVar4;
  FEntityData *pFVar5;
  FMassEntityHandle in_RDX;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name121,L"Mass/SingleThreadedStorage");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name121,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name121,true);
  LOCK();
  paVar1 = &this->NextSerialNumber;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((this->EntityFreeIndexList).ArrayNum < 1) {
    iVar4 = TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
            ::Add(&this->Entities,1);
  }
  else {
    iVar3 = (this->EntityFreeIndexList).ArrayNum;
    iVar4 = *(int *)((this->EntityFreeIndexList).AllocatorInstance.Data + (longlong)iVar3 * 4 + -4);
    (this->EntityFreeIndexList).ArrayNum = iVar3 + -1;
  }
  pFVar5 = TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
           ::operator[](&this->Entities,iVar4);
  *(atomic<int> *)((longlong)in_RDX + 4) = aVar2;
  *(int *)in_RDX = iVar4;
  pFVar5->SerialNumber = (int)aVar2;
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return in_RDX;
}

// ComputeFreeSize @ 147204d40

int __thiscall
UE::Mass::FSingleThreadedEntityStorage::ComputeFreeSize(FSingleThreadedEntityStorage *this)

{
  return (this->EntityFreeIndexList).ArrayNum;
}

// ForceRelease @ 14721d660

int __thiscall
UE::Mass::FSingleThreadedEntityStorage::ForceRelease
          (FSingleThreadedEntityStorage *this,TArrayView<FMassEntityHandle_const_,int> *param_1)

{
  int *piVar1;
  FMassEntityHandle *pFVar2;
  undefined8 *puVar3;
  int iVar4;
  FMassEntityHandle *pFVar5;
  code *pcVar6;
  int *piVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FMassEntityHandle *pFVar11;
  uint uVar12;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name200,L"Mass/SingleThreadedStorage");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name200,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name200,true);
  iVar10 = (this->EntityFreeIndexList).ArrayNum;
  iVar4 = param_1->ArrayNum;
  uVar12 = iVar10 + iVar4;
  if (-1 < (int)uVar12) {
    piVar1 = &(this->EntityFreeIndexList).ArrayMax;
    if (*piVar1 < (int)uVar12) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar12,&(this->EntityFreeIndexList).AllocatorInstance,iVar10,piVar1);
    }
    pFVar11 = param_1->DataPtr;
    pFVar2 = pFVar11 + iVar4;
    while( true ) {
      if (pFVar11 == pFVar2) {
        FMemScope::~FMemScope(&local_res10);
        FLLMScope::~FLLMScope(local_res8);
        return param_1->ArrayNum;
      }
      iVar10 = pFVar11->Index;
      uVar12 = iVar10 / 0x2aa;
      uVar9 = 0;
      if ((int)uVar12 < (this->Entities).Chunks.Array.ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) break;
      local_48 = 0;
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      puVar3 = (undefined8 *)
               (*(longlong *)
                 ((this->Entities).Chunks.Array.AllocatorInstance.Data + (longlong)(int)uVar12 * 8)
               + (ulonglong)(uint)(iVar10 % 0x2aa) * 0x18);
      if (puVar3 != &local_48) {
        *puVar3 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(puVar3 + 1),&FStack_40);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_40.ReferenceController);
      *(undefined4 *)(puVar3 + 2) = 0;
      pFVar5 = (FMassEntityHandle *)(this->EntityFreeIndexList).AllocatorInstance.Data;
      if (((pFVar5 <= pFVar11) && (pFVar11 < (FMassEntityHandle *)(&pFVar5->Index + *piVar1))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        iVar10 = (*pcVar6)();
        return iVar10;
      }
      iVar10 = (this->EntityFreeIndexList).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(this->EntityFreeIndexList).AllocatorInstance,piVar1);
      }
      (this->EntityFreeIndexList).ArrayNum = iVar10 + 1;
      piVar7 = &pFVar11->Index;
      pFVar11 = pFVar11 + 1;
      *(int *)((this->EntityFreeIndexList).AllocatorInstance.Data + (longlong)iVar10 * 4) = *piVar7;
    }
    pcVar6 = (code *)swi(3);
    iVar10 = (*pcVar6)();
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
}

// ForceReleaseOne @ 14721d960

int __thiscall
UE::Mass::FSingleThreadedEntityStorage::ForceReleaseOne
          (FSingleThreadedEntityStorage *this,FMassEntityHandle param_1)

{
  int iVar1;
  FMassEntityHandle local_res10 [3];
  TArrayView<FMassEntityHandle_const_,int> local_18;
  
  local_18.ArrayNum = 1;
  local_18.DataPtr = local_res10;
  local_res10[0] = param_1;
  iVar1 = ForceRelease(this,&local_18);
  return iVar1;
}

// GetAllocatedSize @ 14721e8c0

ulong64 __thiscall
UE::Mass::FSingleThreadedEntityStorage::GetAllocatedSize(FSingleThreadedEntityStorage *this)

{
  return ((longlong)(this->EntityFreeIndexList).ArrayMax +
         ((longlong)(this->Entities).Chunks.Array.ArrayNum * 0x7fe +
         (longlong)(this->Entities).Chunks.Array.ArrayMax) * 2) * 4;
}

// GetArchetype @ 14721e930

FMassArchetypeData * __thiscall
UE::Mass::FSingleThreadedEntityStorage::GetArchetype(FSingleThreadedEntityStorage *this,int param_1)

{
  FEntityData *pFVar1;
  
  pFVar1 = TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
           ::operator[](&this->Entities,param_1);
  return (pFVar1->CurrentArchetype).Object;
}

// GetArchetype @ 14721e950

FMassArchetypeData * __thiscall
UE::Mass::FSingleThreadedEntityStorage::GetArchetype(FSingleThreadedEntityStorage *this,int param_1)

{
  FEntityData *pFVar1;
  
  pFVar1 = TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
           ::operator[](&this->Entities,param_1);
  return (pFVar1->CurrentArchetype).Object;
}

// GetArchetypeAsShared @ 14721e990

TSharedPtr<FMassArchetypeData,1> * __thiscall
UE::Mass::FSingleThreadedEntityStorage::GetArchetypeAsShared
          (FSingleThreadedEntityStorage *this,int param_1)

{
  FEntityData *pFVar1;
  
  pFVar1 = TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
           ::operator[](&this->Entities,param_1);
  return &pFVar1->CurrentArchetype;
}

// GetArchetypeAsShared @ 14721e9a0

TSharedPtr<FMassArchetypeData,1> * __thiscall
UE::Mass::FSingleThreadedEntityStorage::GetArchetypeAsShared
          (FSingleThreadedEntityStorage *this,int param_1)

{
  FEntityData *pFVar1;
  
  pFVar1 = TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
           ::operator[](&this->Entities,param_1);
  return &pFVar1->CurrentArchetype;
}

// GetEntityState @ 147221670

EEntityState __thiscall
UE::Mass::FSingleThreadedEntityStorage::GetEntityState
          (FSingleThreadedEntityStorage *this,int param_1)

{
  FEntityData *pFVar1;
  
  pFVar1 = TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
           ::operator[](&this->Entities,param_1);
  if (pFVar1->SerialNumber != 0) {
    pFVar1 = TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
             ::operator[](&this->Entities,param_1);
    return ((pFVar1->CurrentArchetype).Object != (FMassArchetypeData *)0x0) + Reserved;
  }
  return Free;
}

// GetSerialNumber @ 147226e90

int __thiscall
UE::Mass::FSingleThreadedEntityStorage::GetSerialNumber
          (FSingleThreadedEntityStorage *this,int param_1)

{
  FEntityData *pFVar1;
  
  pFVar1 = TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
           ::operator[](&this->Entities,param_1);
  return pFVar1->SerialNumber;
}

// Initialize @ 14722f230

void __thiscall
UE::Mass::FSingleThreadedEntityStorage::Initialize
          (FSingleThreadedEntityStorage *this,FMassEntityManager_InitParams_SingleThreaded *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FEntityData *pFVar7;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name121,L"Mass/SingleThreadedStorage");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name121,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,&LLMScope_Name121,true);
  LOCK();
  paVar1 = &this->NextSerialNumber;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((this->EntityFreeIndexList).ArrayNum < 1) {
    iVar6 = TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
            ::Add(&this->Entities,1);
  }
  else {
    iVar3 = (this->EntityFreeIndexList).ArrayNum;
    iVar6 = *(int *)((this->EntityFreeIndexList).AllocatorInstance.Data + (longlong)iVar3 * 4 + -4);
    (this->EntityFreeIndexList).ArrayNum = iVar3 + -1;
  }
  pFVar7 = TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
           ::operator[](&this->Entities,iVar6);
  pFVar7->SerialNumber = (int)aVar2;
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  if (iVar6 != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SentinelEntity.Index == UE::Mass::Private::InvalidEntityIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManagerStorage.cpp"
                       ,0x27,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// IsEntityActive @ 1472325d0

bool __thiscall
UE::Mass::FSingleThreadedEntityStorage::IsEntityActive
          (FSingleThreadedEntityStorage *this,FMassEntityHandle param_1)

{
  TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
  *this_00;
  FEntityData *pFVar1;
  int iVar2;
  int iStackX_14;
  
  iVar2 = param_1.Index;
  if ((-1 < iVar2) && (iVar2 < (this->Entities).NumElements)) {
    this_00 = &this->Entities;
    pFVar1 = TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
             ::operator[](this_00,iVar2);
    iStackX_14 = param_1.SerialNumber;
    if (pFVar1->SerialNumber == iStackX_14) {
      pFVar1 = TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
               ::operator[](this_00,iVar2);
      if (pFVar1->SerialNumber != 0) {
        pFVar1 = TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
                 ::operator[](this_00,iVar2);
        if ((pFVar1->CurrentArchetype).Object != (FMassArchetypeData *)0x0) {
          return true;
        }
      }
    }
  }
  return false;
}

// IsValid @ 147233ae0

bool __thiscall
UE::Mass::FSingleThreadedEntityStorage::IsValid(FSingleThreadedEntityStorage *this,int param_1)

{
  FEntityData *pFVar1;
  
  pFVar1 = TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
           ::operator[](&this->Entities,param_1);
  if ((pFVar1->SerialNumber != 0) &&
     ((pFVar1->CurrentArchetype).Object != (FMassArchetypeData *)0x0)) {
    return true;
  }
  return false;
}

// IsValidHandle @ 147233b60

bool __thiscall
UE::Mass::FSingleThreadedEntityStorage::IsValidHandle
          (FSingleThreadedEntityStorage *this,FMassEntityHandle param_1)

{
  FEntityData *pFVar1;
  int iVar2;
  int iStackX_14;
  
  iVar2 = param_1.Index;
  if ((-1 < iVar2) && (iVar2 < (this->Entities).NumElements)) {
    pFVar1 = TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
             ::operator[](&this->Entities,iVar2);
    iStackX_14 = param_1.SerialNumber;
    if (pFVar1->SerialNumber == iStackX_14) {
      return true;
    }
  }
  return false;
}

// IsValidIndex @ 147233bc0

bool __thiscall
UE::Mass::FSingleThreadedEntityStorage::IsValidIndex(FSingleThreadedEntityStorage *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (this->Entities).NumElements)) {
    return true;
  }
  return false;
}

// Num @ 147235e40

int __thiscall UE::Mass::FSingleThreadedEntityStorage::Num(FSingleThreadedEntityStorage *this)

{
  return (this->Entities).NumElements;
}

// Release @ 147243b40

int __thiscall
UE::Mass::FSingleThreadedEntityStorage::Release
          (FSingleThreadedEntityStorage *this,TArrayView<FMassEntityHandle_const_,int> *param_1)

{
  int *piVar1;
  FMassEntityHandle *pFVar2;
  undefined8 *puVar3;
  int iVar4;
  FMassEntityHandle *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FMassEntityHandle *pFVar11;
  uint uVar12;
  int iVar13;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name174,L"Mass/SingleThreadedStorage");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name174,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name174,true);
  iVar10 = (this->EntityFreeIndexList).ArrayNum;
  iVar13 = 0;
  iVar4 = param_1->ArrayNum;
  uVar12 = iVar10 + iVar4;
  if (-1 < (int)uVar12) {
    piVar1 = &(this->EntityFreeIndexList).ArrayMax;
    if (*piVar1 < (int)uVar12) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar12,&(this->EntityFreeIndexList).AllocatorInstance,iVar10,piVar1);
    }
    pFVar11 = param_1->DataPtr;
    pFVar2 = pFVar11 + iVar4;
    while( true ) {
      if (pFVar11 == pFVar2) {
        FMemScope::~FMemScope(&local_res10);
        FLLMScope::~FLLMScope(local_res8);
        return iVar13;
      }
      iVar10 = pFVar11->Index;
      uVar12 = iVar10 / 0x2aa;
      uVar9 = 0;
      if ((int)uVar12 < (this->Entities).Chunks.Array.ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) break;
      puVar3 = (undefined8 *)
               (*(longlong *)
                 ((this->Entities).Chunks.Array.AllocatorInstance.Data + (longlong)(int)uVar12 * 8)
               + (ulonglong)(uint)(iVar10 % 0x2aa) * 0x18);
      if (*(int *)(puVar3 + 2) == pFVar11->SerialNumber) {
        local_48 = 0;
        FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (puVar3 != &local_48) {
          *puVar3 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(puVar3 + 1),&FStack_40);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_40.ReferenceController);
        *(undefined4 *)(puVar3 + 2) = 0;
        pFVar5 = (FMassEntityHandle *)(this->EntityFreeIndexList).AllocatorInstance.Data;
        if (((pFVar5 <= pFVar11) && (pFVar11 < (FMassEntityHandle *)(&pFVar5->Index + *piVar1))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          iVar10 = (*pcVar7)();
          return iVar10;
        }
        iVar10 = (this->EntityFreeIndexList).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(this->EntityFreeIndexList).AllocatorInstance,piVar1);
        }
        pFVar6 = (this->EntityFreeIndexList).AllocatorInstance.Data;
        (this->EntityFreeIndexList).ArrayNum = iVar10 + 1;
        iVar13 = iVar13 + 1;
        *(int *)(pFVar6 + (longlong)iVar10 * 4) = pFVar11->Index;
      }
      pFVar11 = pFVar11 + 1;
    }
    pcVar7 = (code *)swi(3);
    iVar10 = (*pcVar7)();
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
}

// ReleaseOne @ 1472440f0

int __thiscall
UE::Mass::FSingleThreadedEntityStorage::ReleaseOne
          (FSingleThreadedEntityStorage *this,FMassEntityHandle param_1)

{
  int iVar1;
  FMassEntityHandle local_res10 [3];
  TArrayView<FMassEntityHandle_const_,int> local_18;
  
  local_18.ArrayNum = 1;
  local_18.DataPtr = local_res10;
  local_res10[0] = param_1;
  iVar1 = Release(this,&local_18);
  return iVar1;
}

// SetArchetypeFromShared @ 14724b4d0

void __thiscall
UE::Mass::FSingleThreadedEntityStorage::SetArchetypeFromShared
          (FSingleThreadedEntityStorage *this,int param_1,TSharedPtr<FMassArchetypeData,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FMassArchetypeData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEntityData *pFVar4;
  
  pFVar4 = TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
           ::operator[](&this->Entities,param_1);
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar2 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar4->CurrentArchetype).SharedReferenceCount.ReferenceController;
  (pFVar4->CurrentArchetype).Object = pFVar2;
  (pFVar4->CurrentArchetype).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetArchetypeFromShared @ 14724b520

void __thiscall
UE::Mass::FSingleThreadedEntityStorage::SetArchetypeFromShared
          (FSingleThreadedEntityStorage *this,int param_1,TSharedPtr<FMassArchetypeData,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FMassArchetypeData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEntityData *pFVar4;
  
  pFVar4 = TChunkedArray<UE::Mass::FSingleThreadedEntityStorage::FEntityData,16384,TSizedDefaultAllocator<32>_>
           ::operator[](&this->Entities,param_1);
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar2 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar4->CurrentArchetype).SharedReferenceCount.ReferenceController;
  (pFVar4->CurrentArchetype).Object = pFVar2;
  (pFVar4->CurrentArchetype).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

