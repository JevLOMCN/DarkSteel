// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 30

// ~FConcurrentEntityStorage @ 1471df8c0

void __thiscall
UE::Mass::FConcurrentEntityStorage::~FConcurrentEntityStorage(FConcurrentEntityStorage *this)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  
  this->_padding_ = (longlong)&___7FConcurrentEntityStorage_Mass_UE__6B_;
  if (this->EntityPages != (FEntityData **)0x0) {
    uVar2 = 0;
    if (this->PageCount != 0) {
      do {
        FMemory::Free(this->EntityPages[uVar2]);
        uVar3 = (int)uVar2 + 1;
        this->EntityPages[uVar2] = (FEntityData *)0x0;
        uVar2 = (ulonglong)uVar3;
      } while (uVar3 < this->PageCount);
    }
    FMemory::Free(this->EntityPages);
    this->EntityPages = (FEntityData **)0x0;
  }
  pFVar1 = (this->EntityFreeIndexList).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar1);
  return;
}

// operator() @ 1471e3a60

void __thiscall
`UE::Mass::FConcurrentEntityStorage::Release'::__l2::<lambda_1>::operator()(void *this)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  if (0 < **(int **)((longlong)this + 0x10)) {
    lVar3 = *(longlong *)this;
    LOCK();
    bVar12 = *(char *)(lVar3 + 0x38) == '\0';
    if (bVar12) {
      *(char *)(lVar3 + 0x38) = '\x01';
    }
    UNLOCK();
    if (!bVar12) {
      UE::FMutex::LockSlow((FMutex *)(lVar3 + 0x38));
    }
    lVar8 = *(longlong *)this;
    uVar7 = **(int **)((longlong)this + 0x10) + *(int *)(lVar8 + 0x30);
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (*(int *)(lVar8 + 0x34) < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar7,(ForAnyElementType *)(lVar8 + 0x28),*(int *)(lVar8 + 0x30),
                 (int *)(lVar8 + 0x34));
    }
    iVar6 = **(int **)((longlong)this + 8);
    uVar10 = (ulonglong)iVar6;
    if (iVar6 < **(int **)((longlong)this + 0x10) + iVar6) {
      lVar8 = uVar10 * 8;
      do {
        uVar9 = (uint)uVar10;
        uVar7 = 0;
        if ((int)uVar9 < *(int *)((longlong)this + 0x20)) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar4 = *(longlong *)this;
        puVar11 = (undefined4 *)(*(longlong *)((longlong)this + 0x18) + lVar8);
        if (((*(undefined4 **)(lVar4 + 0x28) <= puVar11) &&
            (puVar11 < *(undefined4 **)(lVar4 + 0x28) + *(int *)(lVar4 + 0x34))) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar6 = *(int *)(lVar4 + 0x30);
        if (iVar6 == *(int *)(lVar4 + 0x34)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
        }
        *(int *)(lVar4 + 0x30) = iVar6 + 1;
        uVar10 = (ulonglong)(uVar9 + 1);
        lVar8 = lVar8 + 8;
        *(undefined4 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar6 * 4) = *puVar11;
      } while ((int)(uVar9 + 1) < **(int **)((longlong)this + 0x10) + **(int **)((longlong)this + 8)
              );
    }
    LOCK();
    pbVar1 = (byte *)(lVar3 + 0x38);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 - 1;
    UNLOCK();
    if ((bVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread((FMutex *)(lVar3 + 0x38));
    }
  }
  **(int **)((longlong)this + 8) =
       **(int **)((longlong)this + 8) + **(int **)((longlong)this + 0x10) + 1;
  **(undefined4 **)((longlong)this + 0x10) = 0;
  return;
}

// Acquire @ 1471ea840

int __thiscall
UE::Mass::FConcurrentEntityStorage::Acquire
          (FConcurrentEntityStorage *this,TArrayView<FMassEntityHandle,int> *param_1)

{
  uint uVar1;
  FMutex *pFVar2;
  undefined1 *puVar3;
  atomic<unsigned_char> aVar4;
  uint uVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  ulonglong local_res18;
  int local_res20;
  uint local_58;
  longlong local_48;
  
  local_58 = param_1->ArrayNum;
  uVar15 = 0;
  local_res20 = 0;
  if ((int)local_58 < 1) {
    return 0;
  }
  lVar11 = 0;
  local_48 = 0;
  do {
    LOCK();
    bVar16 = (this->FreeListMutex).State == (atomic<unsigned_char>)0x0;
    if (bVar16) {
      (this->FreeListMutex).State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar16) {
      FMutex::LockSlow(&this->FreeListMutex);
    }
    if (((this->EntityFreeIndexList).ArrayNum == 0) && (bVar16 = AddPage(this), !bVar16)) {
      LOCK();
      pFVar2 = &this->FreeListMutex;
      aVar4 = pFVar2->State;
      pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
      UNLOCK();
      if (((byte)aVar4 & 2) == 0) {
        return local_res20;
      }
      FMutex::WakeWaitingThread(&this->FreeListMutex);
      return local_res20;
    }
    uVar13 = (this->EntityFreeIndexList).ArrayNum;
    if ((int)local_58 < (int)uVar13) {
      uVar13 = local_58;
    }
    if (0 < (int)uVar13) {
      local_res18 = (ulonglong)uVar13;
      lVar12 = lVar11 * 8;
      do {
        if (((this->EntityFreeIndexList).ArrayNum < 1) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          iVar8 = (*pcVar7)();
          return iVar8;
        }
        iVar8 = (this->EntityFreeIndexList).ArrayNum;
        uVar5 = *(uint *)((this->EntityFreeIndexList).AllocatorInstance.Data +
                         (longlong)iVar8 * 4 + -4);
        (this->EntityFreeIndexList).ArrayNum = iVar8 + -1;
        bVar10 = (byte)this->MaxEntitiesPerPageShift;
        uVar14 = uVar5 >> (bVar10 & 0x1f);
        iVar8 = uVar14 << (bVar10 & 0x1f);
        if ((((int)uVar5 < 0) || ((int)uVar5 < iVar8)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) && (Index >= static_cast<int32>(EntityOffset))",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManagerStorage.cpp"
                                ,0x27b,L""), bVar16)) {
          pcVar7 = (code *)swi(3);
          iVar8 = (*pcVar7)();
          return iVar8;
        }
        uVar9 = uVar5 - iVar8;
        puVar3 = &this->EntityPages[uVar14][uVar9].field_0x10;
        uVar6 = *(undefined4 *)puVar3;
        uVar1 = ZPULL(uVar6,0,0x1e) + 1;
        iVar8 = param_1->ArrayNum;
        *(uint *)&this->EntityPages[uVar14][uVar9].field_0x10 =
             (uVar1 ^ this->EntityPages[uVar14][uVar9].GenerationId) & 0x3fffffff ^ uVar6 |
             0x40000000;
        uVar14 = 0;
        if ((int)uVar15 < iVar8) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          iVar8 = (*pcVar7)();
          return iVar8;
        }
        lVar11 = local_48 + 1;
        uVar15 = uVar15 + 1;
        local_res18 = local_res18 - 1;
        *(ulonglong *)((longlong)&param_1->DataPtr->Index + lVar12) =
             CONCAT44(uVar1,uVar5) & 0x3fffffffffffffff;
        lVar12 = lVar12 + 8;
        local_48 = lVar11;
      } while (local_res18 != 0);
    }
    this->EntityCount = this->EntityCount + uVar13;
    local_res20 = local_res20 + uVar13;
    local_58 = local_58 - uVar13;
    LOCK();
    pFVar2 = &this->FreeListMutex;
    aVar4 = pFVar2->State;
    pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
    UNLOCK();
    if (((byte)aVar4 & 2) != 0) {
      FMutex::WakeWaitingThread(&this->FreeListMutex);
    }
    if ((int)local_58 < 1) {
      return local_res20;
    }
  } while( true );
}

// AcquireOne @ 1471eb140

FMassEntityHandle __thiscall
UE::Mass::FConcurrentEntityStorage::AcquireOne(FConcurrentEntityStorage *this)

{
  uint uVar1;
  FMutex *pFVar2;
  atomic<unsigned_char> aVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  FMassEntityHandle FVar8;
  FEntityData *pFVar9;
  FMassEntityHandle in_RDX;
  bool bVar10;
  
  LOCK();
  bVar10 = (this->FreeListMutex).State == (atomic<unsigned_char>)0x0;
  if (bVar10) {
    (this->FreeListMutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar10) {
    FMutex::LockSlow(&this->FreeListMutex);
  }
  if ((this->EntityFreeIndexList).ArrayNum == 0) {
    AddPage(this);
  }
  if (((this->EntityFreeIndexList).ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    FVar8 = (FMassEntityHandle)(*pcVar7)();
    return FVar8;
  }
  iVar4 = (this->EntityFreeIndexList).ArrayNum;
  iVar5 = *(int *)((this->EntityFreeIndexList).AllocatorInstance.Data + (longlong)iVar4 * 4 + -4);
  (this->EntityFreeIndexList).ArrayNum = iVar4 + -1;
  this->EntityCount = this->EntityCount + 1;
  LOCK();
  pFVar2 = &this->FreeListMutex;
  aVar3 = pFVar2->State;
  pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
  UNLOCK();
  if (((byte)aVar3 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->FreeListMutex);
  }
  pFVar9 = LookupEntity(this,iVar5);
  *(int *)in_RDX = iVar5;
  uVar6 = *(undefined4 *)&pFVar9->field_0x10;
  uVar1 = ZPULL(uVar6,0,0x1e) + 1;
  *(uint *)&pFVar9->field_0x10 = (uVar1 ^ pFVar9->GenerationId) & 0x3fffffff ^ uVar6 | 0x40000000;
  *(uint *)((longlong)in_RDX + 4) = uVar1 & 0x3fffffff;
  return in_RDX;
}

// AddPage @ 1471eec10

bool __thiscall UE::Mass::FConcurrentEntityStorage::AddPage(FConcurrentEntityStorage *this)

{
  FMutex *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FEntityData *_Dst;
  ulong64 _Size;
  uint uVar7;
  int iVar8;
  int iVar9;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  int local_48 [4];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name388,L"Mass/ConcurrentStorage");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name388,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&LLMScope_Name388,true);
  if ((((byte)(this->FreeListMutex).State & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FreeListMutex.IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManagerStorage.cpp"
                         ,0x185,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  this_00 = &this->PageAllocateMutex;
  LOCK();
  bVar5 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    FMutex::LockSlow(this_00);
  }
  uVar7 = this->PageCount;
  if (((uint)(1 << ((byte)this->MaximumEntityCountShift & 0x1f)) <=
       uVar7 + 1 << ((byte)this->MaxEntitiesPerPageShift & 0x1f)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("((NewPageIndex + 1) << MaxEntitiesPerPageShift) < (1u << MaximumEntityCountShift)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManagerStorage.cpp"
                         ,0x18a,L"Exhausted number of entities"), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  _Size = 0x18L << ((byte)this->MaxEntitiesPerPageShift & 0x3f);
  _Dst = FMemory::Malloc(_Size,8);
  if (_Dst == (FEntityData *)0x0) {
    bVar5 = false;
  }
  else {
    memset(_Dst,0,_Size);
    this->EntityPages[this->PageCount] = _Dst;
    this->PageCount = this->PageCount + 1;
    if (uVar7 == 0) {
      iVar8 = 1;
      *(undefined8 *)&_Dst->field_0x10 = 0;
      (_Dst->CurrentArchetype).Object = (FMassArchetypeData *)0x0;
      (_Dst->CurrentArchetype).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      _Dst->GenerationId = 1;
      _Dst->bIsAllocated = 1;
    }
    else {
      iVar8 = uVar7 << ((byte)this->MaxEntitiesPerPageShift & 0x1f);
    }
    iVar9 = uVar7 + 1 << ((byte)this->MaxEntitiesPerPageShift & 0x1f);
    uVar7 = iVar9 - iVar8;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    piVar1 = &(this->EntityFreeIndexList).ArrayMax;
    if ((this->EntityFreeIndexList).ArrayMax < (int)uVar7) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar7,&(this->EntityFreeIndexList).AllocatorInstance,
                 (this->EntityFreeIndexList).ArrayNum,piVar1);
    }
    while (local_48[0] = iVar9 + -1, iVar8 <= local_48[0]) {
      pFVar3 = (this->EntityFreeIndexList).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_48) &&
          ((FScriptContainerElement *)local_48 < pFVar3 + (longlong)*piVar1 * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar9 = (this->EntityFreeIndexList).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->EntityFreeIndexList).AllocatorInstance,piVar1);
        (this->EntityFreeIndexList).ArrayNum = iVar9;
      }
      (this->EntityFreeIndexList).ArrayNum = iVar9 + 1;
      *(int *)((this->EntityFreeIndexList).AllocatorInstance.Data + (longlong)iVar9 * 4) =
           local_48[0];
      iVar9 = local_48[0];
    }
    bVar5 = true;
  }
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return bVar5;
}

// ComputeFreeSize @ 147204d30

int __thiscall UE::Mass::FConcurrentEntityStorage::ComputeFreeSize(FConcurrentEntityStorage *this)

{
  return (this->EntityFreeIndexList).ArrayNum;
}

// ComputePageSize @ 147204d50

ulong64 __thiscall
UE::Mass::FConcurrentEntityStorage::ComputePageSize(FConcurrentEntityStorage *this)

{
  return 0x18L << ((byte)this->MaxEntitiesPerPageShift & 0x3f);
}

// DebugAssumptionsSelfTest @ 14720dca0

bool __cdecl UE::Mass::FConcurrentEntityStorage::DebugAssumptionsSelfTest(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return true;
}

// ForceRelease @ 14721d370

int __thiscall
UE::Mass::FConcurrentEntityStorage::ForceRelease
          (FConcurrentEntityStorage *this,TArrayView<FMassEntityHandle_const_,int> *param_1)

{
  int *piVar1;
  FMutex *pFVar2;
  FMassEntityHandle *pFVar3;
  FEntityData *pFVar4;
  undefined1 *puVar5;
  atomic<unsigned_char> aVar6;
  undefined4 uVar7;
  int iVar8;
  FMassEntityHandle *pFVar9;
  code *pcVar10;
  int *piVar11;
  bool bVar12;
  byte bVar13;
  FMassEntityHandle *pFVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  FLLMScope local_res10 [2];
  FMemScope local_res18;
  FMassArchetypeData *local_48;
  FSharedReferencer<1> FStack_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name585,L"Mass/ConcurrentStorage");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name585,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,&LLMScope_Name585,true);
  pFVar14 = param_1->DataPtr;
  pFVar3 = pFVar14 + param_1->ArrayNum;
  for (; pFVar14 != pFVar3; pFVar14 = pFVar14 + 1) {
    uVar17 = pFVar14->Index;
    bVar13 = (byte)this->MaxEntitiesPerPageShift;
    uVar15 = uVar17 >> (bVar13 & 0x1f);
    iVar16 = uVar15 << (bVar13 & 0x1f);
    if ((((int)uVar17 < 0) || ((int)uVar17 < iVar16)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) && (Index >= static_cast<int32>(EntityOffset))",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManagerStorage.cpp"
                            ,0x27b,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      iVar16 = (*pcVar10)();
      return iVar16;
    }
    uVar17 = uVar17 - iVar16;
    local_48 = (FMassArchetypeData *)0x0;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar4 = this->EntityPages[uVar15] + uVar17;
    puVar5 = &this->EntityPages[uVar15][uVar17].field_0x10;
    uVar7 = *(undefined4 *)puVar5;
    *(uint *)&pFVar4->field_0x10 =
         ((ZPULL(uVar7,0,0x1e) + 1 ^ this->EntityPages[uVar15][uVar17].GenerationId) & 0x3fffffff ^
         uVar7) & 0xbfffffff;
    if (pFVar4 != (FEntityData *)&local_48) {
      (pFVar4->CurrentArchetype).Object = (FMassArchetypeData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar4->CurrentArchetype).SharedReferenceCount,&FStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_40.ReferenceController);
  }
  LOCK();
  bVar12 = (this->FreeListMutex).State == (atomic<unsigned_char>)0x0;
  if (bVar12) {
    (this->FreeListMutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar12) {
    FMutex::LockSlow(&this->FreeListMutex);
  }
  iVar16 = param_1->ArrayNum;
  iVar8 = (this->EntityFreeIndexList).ArrayNum;
  uVar17 = iVar8 + iVar16;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  piVar1 = &(this->EntityFreeIndexList).ArrayMax;
  if ((this->EntityFreeIndexList).ArrayMax < (int)uVar17) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,&(this->EntityFreeIndexList).AllocatorInstance,iVar8,piVar1);
  }
  pFVar14 = param_1->DataPtr;
  pFVar3 = pFVar14 + iVar16;
  while( true ) {
    if (pFVar14 == pFVar3) {
      iVar16 = param_1->ArrayNum;
      this->EntityCount = this->EntityCount - iVar16;
      LOCK();
      pFVar2 = &this->FreeListMutex;
      aVar6 = pFVar2->State;
      pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
      UNLOCK();
      if (((byte)aVar6 & 2) != 0) {
        FMutex::WakeWaitingThread(&this->FreeListMutex);
      }
      FMemScope::~FMemScope(&local_res18);
      FLLMScope::~FLLMScope(local_res10);
      return iVar16;
    }
    pFVar9 = (FMassEntityHandle *)(this->EntityFreeIndexList).AllocatorInstance.Data;
    if (((pFVar9 <= pFVar14) && (pFVar14 < (FMassEntityHandle *)(&pFVar9->Index + *piVar1))) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) break;
    iVar16 = (this->EntityFreeIndexList).ArrayNum;
    if (iVar16 == *piVar1) {
      iVar16 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&(this->EntityFreeIndexList).AllocatorInstance,piVar1);
    }
    (this->EntityFreeIndexList).ArrayNum = iVar16 + 1;
    piVar11 = &pFVar14->Index;
    pFVar14 = pFVar14 + 1;
    *(int *)((this->EntityFreeIndexList).AllocatorInstance.Data + (longlong)iVar16 * 4) = *piVar11;
  }
  pcVar10 = (code *)swi(3);
  iVar16 = (*pcVar10)();
  return iVar16;
}

// ForceReleaseOne @ 14721d920

int __thiscall
UE::Mass::FConcurrentEntityStorage::ForceReleaseOne
          (FConcurrentEntityStorage *this,FMassEntityHandle param_1)

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

// GetAllocatedSize @ 14721e6d0

ulong64 __thiscall
UE::Mass::FConcurrentEntityStorage::GetAllocatedSize(FConcurrentEntityStorage *this)

{
  return (0x18L << ((byte)this->MaxEntitiesPerPageShift & 0x3f)) * (ulonglong)this->PageCount +
         ((longlong)(this->EntityFreeIndexList).ArrayMax +
         ((ulonglong)(uint)(1 << ((byte)this->MaximumEntityCountShift & 0x1f)) /
         (ulonglong)this->MaxEntitiesPerPage) * 2) * 4;
}

// GetArchetype @ 14721e8f0

FMassArchetypeData * __thiscall
UE::Mass::FConcurrentEntityStorage::GetArchetype(FConcurrentEntityStorage *this,int param_1)

{
  FEntityData *pFVar1;
  
  pFVar1 = LookupEntity(this,param_1);
  return (pFVar1->CurrentArchetype).Object;
}

// GetArchetype @ 14721e910

FMassArchetypeData * __thiscall
UE::Mass::FConcurrentEntityStorage::GetArchetype(FConcurrentEntityStorage *this,int param_1)

{
  FEntityData *pFVar1;
  
  pFVar1 = LookupEntity(this,param_1);
  return (pFVar1->CurrentArchetype).Object;
}

// GetArchetypeAsShared @ 14721e970

TSharedPtr<FMassArchetypeData,1> * __thiscall
UE::Mass::FConcurrentEntityStorage::GetArchetypeAsShared(FConcurrentEntityStorage *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FMassArchetypeData,1> *pTVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  bVar4 = (byte)this->MaxEntitiesPerPageShift;
  uVar5 = (uint)param_1 >> (bVar4 & 0x1f);
  iVar6 = uVar5 << (bVar4 & 0x1f);
  if ((param_1 < 0) || (param_1 < iVar6)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) && (Index >= static_cast<int32>(EntityOffset))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManagerStorage.cpp"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FMassArchetypeData,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->EntityPages[uVar5][(uint)(param_1 - iVar6)].CurrentArchetype;
}

// GetArchetypeAsShared @ 14721e980

TSharedPtr<FMassArchetypeData,1> * __thiscall
UE::Mass::FConcurrentEntityStorage::GetArchetypeAsShared(FConcurrentEntityStorage *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FMassArchetypeData,1> *pTVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  bVar4 = (byte)this->MaxEntitiesPerPageShift;
  uVar5 = (uint)param_1 >> (bVar4 & 0x1f);
  iVar6 = uVar5 << (bVar4 & 0x1f);
  if ((param_1 < 0) || (param_1 < iVar6)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) && (Index >= static_cast<int32>(EntityOffset))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManagerStorage.cpp"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FMassArchetypeData,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->EntityPages[uVar5][(uint)(param_1 - iVar6)].CurrentArchetype;
}

// GetEntityState @ 147221640

EEntityState __thiscall
UE::Mass::FConcurrentEntityStorage::GetEntityState(FConcurrentEntityStorage *this,int param_1)

{
  FEntityData *pFVar1;
  
  pFVar1 = LookupEntity(this,param_1);
  if ((pFVar1->CurrentArchetype).Object != (FMassArchetypeData *)0x0) {
    return Created;
  }
  return pFVar1->bIsAllocated;
}

// GetEntityStateInternal @ 1472216d0

EEntityState __thiscall
UE::Mass::FConcurrentEntityStorage::GetEntityStateInternal
          (FConcurrentEntityStorage *this,FEntityData *param_1)

{
  if ((param_1->CurrentArchetype).Object != (FMassArchetypeData *)0x0) {
    return Created;
  }
  return param_1->bIsAllocated;
}

// GetSerialNumber @ 147226e60

int __thiscall
UE::Mass::FConcurrentEntityStorage::GetSerialNumber(FConcurrentEntityStorage *this,int param_1)

{
  FEntityData *pFVar1;
  
  pFVar1 = LookupEntity(this,param_1);
  return pFVar1->GenerationId;
}

// Initialize @ 14722b7e0

void __thiscall
UE::Mass::FConcurrentEntityStorage::Initialize
          (FConcurrentEntityStorage *this,FMassEntityManager_InitParams_Concurrent *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FEntityData **_Dst;
  ulong64 _Size;
  FLLMScope local_res8 [2];
  uint local_res10;
  uint local_res18;
  FMemScope local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name249,L"Mass/ConcurrentStorage");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name249,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name249,true);
  if ((param_1->MaxEntitiesPerPage & param_1->MaxEntitiesPerPage - 1) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FMath::IsPowerOfTwo(InInitializationParams.MaxEntitiesPerPage)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManagerStorage.cpp"
                       ,0xfb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1->MaxEntityCount & param_1->MaxEntityCount - 1) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FMath::IsPowerOfTwo(InInitializationParams.MaxEntityCount)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManagerStorage.cpp"
                       ,0xfc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MaxEntitiesPerPage = param_1->MaxEntitiesPerPage;
  local_res10 = 0x1f;
  bVar2 = param_1->MaxEntitiesPerPage != 0;
  if (bVar2) {
    for (; param_1->MaxEntitiesPerPage >> local_res10 == 0; local_res10 = local_res10 - 1) {
    }
  }
  uVar3 = 0;
  if (bVar2) {
    uVar3 = local_res10;
  }
  this->MaxEntitiesPerPageShift = uVar3;
  local_res18 = 0x1f;
  bVar2 = param_1->MaxEntityCount != 0;
  if (bVar2) {
    for (; param_1->MaxEntityCount >> local_res18 == 0; local_res18 = local_res18 - 1) {
    }
  }
  uVar3 = 0;
  if (bVar2) {
    uVar3 = local_res18;
  }
  this->MaximumEntityCountShift = uVar3;
  if (0x1f < uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaximumEntityCountShift < 32",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManagerStorage.cpp"
                       ,0x100,L"Invalid maximum entity count, cannot exceed 31 bits");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Size = (ulonglong)param_1->MaxEntityCount / (ulonglong)param_1->MaxEntitiesPerPage << 3;
  _Dst = FMemory::Malloc(_Size,8);
  this->EntityPages = _Dst;
  memset(_Dst,0,_Size);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// IsEntityActive @ 147232520

bool __thiscall
UE::Mass::FConcurrentEntityStorage::IsEntityActive
          (FConcurrentEntityStorage *this,FMassEntityHandle param_1)

{
  FEntityData *pFVar1;
  uint uVar2;
  uint uStackX_14;
  
  uVar2 = param_1.Index;
  if ((-1 < (int)uVar2) && (uVar2 >> ((byte)this->MaxEntitiesPerPageShift & 0x1f) < this->PageCount)
     ) {
    pFVar1 = LookupEntity(this,uVar2);
    uStackX_14 = param_1.SerialNumber;
    if ((pFVar1->GenerationId == uStackX_14) &&
       ((pFVar1->CurrentArchetype).Object != (FMassArchetypeData *)0x0)) {
      return true;
    }
  }
  return false;
}

// IsValid @ 1472339b0

bool __thiscall
UE::Mass::FConcurrentEntityStorage::IsValid(FConcurrentEntityStorage *this,int param_1)

{
  FEntityData *pFVar1;
  
  pFVar1 = LookupEntity(this,param_1);
  return (pFVar1->CurrentArchetype).Object != (FMassArchetypeData *)0x0;
}

// IsValidHandle @ 147233b10

bool __thiscall
UE::Mass::FConcurrentEntityStorage::IsValidHandle
          (FConcurrentEntityStorage *this,FMassEntityHandle param_1)

{
  FEntityData *pFVar1;
  uint uVar2;
  uint uStackX_14;
  
  uVar2 = param_1.Index;
  if ((-1 < (int)uVar2) && (uVar2 >> ((byte)this->MaxEntitiesPerPageShift & 0x1f) < this->PageCount)
     ) {
    pFVar1 = LookupEntity(this,uVar2);
    uStackX_14 = param_1.SerialNumber;
    if (pFVar1->GenerationId == uStackX_14) {
      return true;
    }
  }
  return false;
}

// IsValidIndex @ 147233ba0

bool __thiscall
UE::Mass::FConcurrentEntityStorage::IsValidIndex(FConcurrentEntityStorage *this,int param_1)

{
  if (-1 < param_1) {
    return (uint)param_1 >> ((byte)this->MaxEntitiesPerPageShift & 0x1f) < this->PageCount;
  }
  return false;
}

// LookupEntity @ 147234ba0

FEntityData * __thiscall
UE::Mass::FConcurrentEntityStorage::LookupEntity(FConcurrentEntityStorage *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FEntityData *pFVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  bVar4 = (byte)this->MaxEntitiesPerPageShift;
  uVar5 = (uint)param_1 >> (bVar4 & 0x1f);
  iVar6 = uVar5 << (bVar4 & 0x1f);
  if ((param_1 < 0) || (param_1 < iVar6)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) && (Index >= static_cast<int32>(EntityOffset))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManagerStorage.cpp"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FEntityData *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this->EntityPages[uVar5] + (uint)(param_1 - iVar6);
}

// LookupEntity @ 147234c20

FEntityData * __thiscall
UE::Mass::FConcurrentEntityStorage::LookupEntity(FConcurrentEntityStorage *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FEntityData *pFVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  bVar4 = (byte)this->MaxEntitiesPerPageShift;
  uVar5 = (uint)param_1 >> (bVar4 & 0x1f);
  iVar6 = uVar5 << (bVar4 & 0x1f);
  if ((param_1 < 0) || (param_1 < iVar6)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) && (Index >= static_cast<int32>(EntityOffset))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManagerStorage.cpp"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FEntityData *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this->EntityPages[uVar5] + (uint)(param_1 - iVar6);
}

// Num @ 147235e30

int __thiscall UE::Mass::FConcurrentEntityStorage::Num(FConcurrentEntityStorage *this)

{
  return this->PageCount * this->MaxEntitiesPerPage;
}

// Release @ 147243540

int __thiscall
UE::Mass::FConcurrentEntityStorage::Release
          (FConcurrentEntityStorage *this,TArrayView<FMassEntityHandle_const_,int> *param_1)

{
  int *piVar1;
  FMutex *pFVar2;
  FEntityData *pFVar3;
  atomic<unsigned_char> aVar4;
  undefined4 uVar5;
  FMassEntityHandle *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  FConcurrentEntityStorage *pFVar9;
  FConcurrentEntityStorage *pFVar10;
  bool bVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  FLLMScope local_res20 [2];
  int local_a8;
  int local_a4;
  int local_a0 [2];
  FConcurrentEntityStorage *local_98;
  int *local_90;
  int *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  longlong local_70;
  longlong local_68;
  FMemScope local_60;
  FEntityData local_58;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name521,L"Mass/ConcurrentStorage");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res20,LLMScope_Name521,false,None,Default,true);
  FMemScope::FMemScope(&local_60,&LLMScope_Name521,true);
  local_80 = *(undefined4 *)&param_1->DataPtr;
  uStack_7c = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_78 = param_1->ArrayNum;
  uStack_74 = *(undefined4 *)&param_1->field_0xc;
  local_90 = local_a0;
  local_a4 = 0;
  local_88 = &local_a8;
  uVar19 = 0;
  local_a0[0] = 0;
  local_a8 = 0;
  local_98 = this;
  if (0 < param_1->ArrayNum) {
    local_70 = 0;
    local_68 = (longlong)param_1->ArrayNum;
    do {
      lVar18 = local_70;
      uVar14 = 0;
      if ((int)uVar19 < param_1->ArrayNum) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        iVar12 = (*pcVar8)();
        return iVar12;
      }
      pFVar6 = param_1->DataPtr;
      uVar14 = pFVar6[lVar18].Index;
      bVar13 = (byte)this->MaxEntitiesPerPageShift;
      uVar15 = uVar14 >> (bVar13 & 0x1f);
      iVar12 = uVar15 << (bVar13 & 0x1f);
      if ((((int)uVar14 < 0) || ((int)uVar14 < iVar12)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) && (Index >= static_cast<int32>(EntityOffset))",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManagerStorage.cpp"
                              ,0x27b,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        iVar12 = (*pcVar8)();
        return iVar12;
      }
      pFVar9 = local_98;
      uVar14 = uVar14 - iVar12;
      pFVar3 = this->EntityPages[uVar15] + uVar14;
      if (this->EntityPages[uVar15][uVar14].GenerationId == pFVar6[lVar18].SerialNumber) {
        local_a8 = local_a8 + 1;
        uVar5 = *(undefined4 *)&pFVar3->field_0x10;
        local_58.CurrentArchetype.Object = (FMassArchetypeData *)0x0;
        local_58.CurrentArchetype.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        *(uint *)&pFVar3->field_0x10 =
             ((ZPULL(uVar5,0,0x1e) + 1 ^ pFVar3->GenerationId) & 0x3fffffff ^ uVar5) & 0xbfffffff;
        if (pFVar3 != &local_58) {
          (pFVar3->CurrentArchetype).Object = (FMassArchetypeData *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(pFVar3->CurrentArchetype).SharedReferenceCount,
                     &local_58.CurrentArchetype.SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.CurrentArchetype.SharedReferenceCount.ReferenceController);
        local_a4 = local_a4 + 1;
      }
      else {
        if (0 < local_a8) {
          LOCK();
          bVar11 = (local_98->FreeListMutex).State == (atomic<unsigned_char>)0x0;
          if (bVar11) {
            (local_98->FreeListMutex).State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar11) {
            FMutex::LockSlow(&local_98->FreeListMutex);
          }
          iVar12 = (local_98->EntityFreeIndexList).ArrayNum;
          uVar14 = local_a8 + iVar12;
          if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
          }
          if ((local_98->EntityFreeIndexList).ArrayMax < (int)uVar14) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar14,&(local_98->EntityFreeIndexList).AllocatorInstance,iVar12,
                       &(local_98->EntityFreeIndexList).ArrayMax);
          }
          iVar12 = *local_90;
          uVar16 = (ulonglong)iVar12;
          if (iVar12 < local_a8 + iVar12) {
            lVar17 = uVar16 * 8;
            do {
              uVar15 = (uint)uVar16;
              uVar14 = 0;
              if ((int)uVar15 < iStack_78) {
                uVar14 = ~uVar15 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar11)) {
                pcVar8 = (code *)swi(3);
                iVar12 = (*pcVar8)();
                return iVar12;
              }
              pFVar10 = local_98;
              pFVar20 = (FScriptContainerElement *)(CONCAT44(uStack_7c,local_80) + lVar17);
              pFVar7 = (local_98->EntityFreeIndexList).AllocatorInstance.Data;
              if (((pFVar7 <= pFVar20) &&
                  (pFVar20 < pFVar7 + (longlong)(local_98->EntityFreeIndexList).ArrayMax * 4)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar8 = (code *)swi(3);
                iVar12 = (*pcVar8)();
                return iVar12;
              }
              iVar12 = (pFVar10->EntityFreeIndexList).ArrayNum;
              piVar1 = &(pFVar10->EntityFreeIndexList).ArrayMax;
              if (iVar12 == *piVar1) {
                iVar12 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&(pFVar10->EntityFreeIndexList).AllocatorInstance,piVar1);
              }
              (pFVar10->EntityFreeIndexList).ArrayNum = iVar12 + 1;
              uVar16 = (ulonglong)(uVar15 + 1);
              lVar17 = lVar17 + 8;
              *(undefined4 *)
               ((pFVar10->EntityFreeIndexList).AllocatorInstance.Data + (longlong)iVar12 * 4) =
                   *(undefined4 *)pFVar20;
              lVar18 = local_70;
            } while ((int)(uVar15 + 1) < local_a8 + *local_90);
          }
          LOCK();
          pFVar2 = &pFVar9->FreeListMutex;
          aVar4 = pFVar2->State;
          pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
          UNLOCK();
          if (((byte)aVar4 & 2) != 0) {
            FMutex::WakeWaitingThread(&pFVar9->FreeListMutex);
          }
        }
        *local_90 = *local_90 + local_a8 + 1;
        local_a8 = 0;
      }
      local_70 = lVar18 + 1;
      uVar19 = uVar19 + 1;
    } while (local_70 < local_68);
  }
  iVar12 = local_a4;
  `UE::Mass::FConcurrentEntityStorage::Release'::__l2::<lambda_1>::operator()(&local_98);
  LOCK();
  bVar11 = (this->FreeListMutex).State == (atomic<unsigned_char>)0x0;
  if (bVar11) {
    (this->FreeListMutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar11) {
    FMutex::LockSlow(&this->FreeListMutex);
  }
  this->EntityCount = this->EntityCount - iVar12;
  LOCK();
  pFVar2 = &this->FreeListMutex;
  aVar4 = pFVar2->State;
  pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
  UNLOCK();
  if (((byte)aVar4 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->FreeListMutex);
  }
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_res20);
  return iVar12;
}

// ReleaseOne @ 1472440b0

int __thiscall
UE::Mass::FConcurrentEntityStorage::ReleaseOne
          (FConcurrentEntityStorage *this,FMassEntityHandle param_1)

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

// SetArchetypeFromShared @ 14724b430

void __thiscall
UE::Mass::FConcurrentEntityStorage::SetArchetypeFromShared
          (FConcurrentEntityStorage *this,int param_1,TSharedPtr<FMassArchetypeData,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FMassArchetypeData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEntityData *pFVar4;
  
  pFVar4 = LookupEntity(this,param_1);
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

// SetArchetypeFromShared @ 14724b480

void __thiscall
UE::Mass::FConcurrentEntityStorage::SetArchetypeFromShared
          (FConcurrentEntityStorage *this,int param_1,TSharedPtr<FMassArchetypeData,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FMassArchetypeData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEntityData *pFVar4;
  
  pFVar4 = LookupEntity(this,param_1);
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

