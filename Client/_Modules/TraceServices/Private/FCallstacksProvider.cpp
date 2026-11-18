// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 7

// FCallstacksProvider @ 14d420b40

FCallstacksProvider * __thiscall
TraceServices::FCallstacksProvider::FCallstacksProvider
          (FCallstacksProvider *this,IAnalysisSession *param_1)

{
  ILinearAllocator *pIVar1;
  
  this->_padding_ = (longlong)&___7FCallstacksProvider_TraceServices__6B_;
  (this->EntriesLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->Session = param_1;
  this->ModuleProvider = (IModuleProvider *)0x0;
  pIVar1 = (ILinearAllocator *)(**(code **)((longlong)*param_1 + 0xb8))(param_1);
  (this->Callstacks).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Callstacks).Allocator = pIVar1;
  (this->Callstacks).PagesArray.ArrayNum = 0;
  (this->Callstacks).PagesArray.ArrayMax = 0;
  (this->Callstacks).FirstPage = (TPagedArrayPage<TraceServices::FCallstack> *)0x0;
  (this->Callstacks).LastPage = (TPagedArrayPage<TraceServices::FCallstack> *)0x0;
  (this->Callstacks).PageSize = 0x20000;
  (this->Callstacks).TotalItemCount = 0;
  pIVar1 = (ILinearAllocator *)(**(code **)((longlong)*param_1 + 0xb8))(param_1);
  (this->Frames).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Frames).Allocator = pIVar1;
  (this->Frames).PagesArray.ArrayNum = 0;
  (this->Frames).PagesArray.ArrayMax = 0;
  (this->Frames).FirstPage = (TPagedArrayPage<TraceServices::FStackFrame> *)0x0;
  (this->Frames).LastPage = (TPagedArrayPage<TraceServices::FStackFrame> *)0x0;
  (this->Frames).PageSize = 0x10000;
  (this->Frames).TotalItemCount = 0;
  *(undefined8 *)&this->CallstackMap = 0;
  *(undefined8 *)&(this->CallstackMap).field_0x8 = 0;
  *(undefined8 *)&(this->CallstackMap).field_0x20 = 0;
  *(undefined4 *)&(this->CallstackMap).field_0x28 = 0;
  *(undefined4 *)&(this->CallstackMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CallstackMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CallstackMap).field_0x34 = 0;
  *(undefined8 *)&(this->CallstackMap).field_0x40 = 0;
  *(undefined4 *)&(this->CallstackMap).field_0x48 = 0;
  TPagedArray<TraceServices::FCallstack,TraceServices::TPagedArrayPage<TraceServices::FCallstack>_>
  ::PushBack(&this->Callstacks);
  return this;
}

// ~FCallstacksProvider @ 14d42ae50

void __thiscall TraceServices::FCallstacksProvider::~FCallstacksProvider(FCallstacksProvider *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7FCallstacksProvider_TraceServices__6B_;
  *(undefined4 *)&(this->CallstackMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CallstackMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CallstackMap);
  TPagedArray<TraceServices::FStackFrame,TraceServices::TPagedArrayPage<TraceServices::FStackFrame>_>
  ::
  ~TPagedArray<TraceServices::FStackFrame,TraceServices::TPagedArrayPage<TraceServices::FStackFrame>_>
            (&this->Frames);
  TPagedArray<TraceServices::FCallstack,TraceServices::TPagedArrayPage<TraceServices::FCallstack>_>
  ::
  ~TPagedArray<TraceServices::FCallstack,TraceServices::TPagedArrayPage<TraceServices::FCallstack>_>
            (&this->Callstacks);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->EntriesLock);
  if (BVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014d42aebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&this->EntriesLock);
    return;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// AddCallstack @ 14d439b90

void __thiscall
TraceServices::FCallstacksProvider::AddCallstack
          (FCallstacksProvider *this,uint param_1,ulong64 *param_2,uchar param_3)

{
  int *piVar1;
  ulong64 *puVar2;
  IAnalysisSession *pIVar3;
  TPagedArrayPage<TraceServices::FStackFrame> *pTVar4;
  ILinearAllocator *pIVar5;
  TPagedArrayPage<TraceServices::FCallstack> *pTVar6;
  ulong64 uVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  FStackFrame *pFVar12;
  FResolvedSymbol *pFVar13;
  FCallstack *pFVar14;
  IModuleProvider *pIVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  TPagedArrayPage<TraceServices::FStackFrame> *pTVar18;
  TPagedArrayPage<TraceServices::FCallstack> *pTVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  
  if (param_1 != 0) {
    uVar20 = (ulonglong)param_3;
    uVar21 = (ulonglong)param_1;
    if (this->ModuleProvider == (IModuleProvider *)0x0) {
      pIVar3 = this->Session;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&::Name,"ModuleProvider");
        _Init_thread_footer(&::_TSS0);
      }
      lVar11 = (**(code **)((longlong)*pIVar3 + 0x100))(pIVar3);
      pIVar15 = (IModuleProvider *)(lVar11 + -8);
      if (lVar11 == 0) {
        pIVar15 = (IModuleProvider *)0x0;
      }
      this->ModuleProvider = pIVar15;
    }
    if (param_3 != '\0') {
      uVar17 = (this->Frames).PageSize;
      uVar17 = uVar17 - (this->Frames).TotalItemCount % uVar17;
      uVar16 = uVar20;
      if (uVar17 < uVar20) {
        AcquireSRWLockExclusive((PSRWLOCK)&this->EntriesLock);
        lVar11 = uVar17 + 1;
        do {
          pTVar4 = (this->Frames).LastPage;
          if ((pTVar4 == (TPagedArrayPage<TraceServices::FStackFrame> *)0x0) ||
             (pTVar4->Count == (this->Frames).PageSize)) {
            iVar10 = (this->Frames).PagesArray.ArrayNum;
            piVar1 = &(this->Frames).PagesArray.ArrayMax;
            if (iVar10 == *piVar1) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&(this->Frames).PagesArray.AllocatorInstance,piVar1);
              (this->Frames).PagesArray.ArrayNum = iVar10;
            }
            pTVar18 = (TPagedArrayPage<TraceServices::FStackFrame> *)
                      ((this->Frames).PagesArray.AllocatorInstance.Data + (longlong)iVar10 * 0x10);
            (this->Frames).PagesArray.ArrayNum = iVar10 + 1;
            DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FStackFrame>,int>
                      (pTVar18,1);
            pTVar4 = (TPagedArrayPage<TraceServices::FStackFrame> *)
                     (this->Frames).PagesArray.AllocatorInstance.Data;
            pIVar5 = (this->Frames).Allocator;
            (this->Frames).LastPage = pTVar18;
            (this->Frames).FirstPage = pTVar4;
            pFVar12 = (FStackFrame *)
                      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,(this->Frames).PageSize << 4);
            ((this->Frames).LastPage)->Items = pFVar12;
          }
          pTVar4 = (this->Frames).LastPage;
          puVar2 = &(this->Frames).TotalItemCount;
          *puVar2 = *puVar2 + 1;
          pFVar12 = pTVar4->Items + pTVar4->Count;
          pFVar12->Addr = 0;
          pFVar12->Symbol = (FResolvedSymbol *)0x0;
          puVar2 = &((this->Frames).LastPage)->Count;
          *puVar2 = *puVar2 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        ReleaseSRWLockExclusive((PSRWLOCK)&this->EntriesLock);
      }
      do {
        pTVar4 = (this->Frames).LastPage;
        if ((pTVar4 == (TPagedArrayPage<TraceServices::FStackFrame> *)0x0) ||
           (pTVar4->Count == (this->Frames).PageSize)) {
          iVar10 = (this->Frames).PagesArray.ArrayNum;
          piVar1 = &(this->Frames).PagesArray.ArrayMax;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(this->Frames).PagesArray.AllocatorInstance,piVar1);
            (this->Frames).PagesArray.ArrayNum = iVar10;
          }
          pTVar18 = (TPagedArrayPage<TraceServices::FStackFrame> *)
                    ((this->Frames).PagesArray.AllocatorInstance.Data + (longlong)iVar10 * 0x10);
          (this->Frames).PagesArray.ArrayNum = iVar10 + 1;
          DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FStackFrame>,int>
                    (pTVar18,1);
          pTVar4 = (TPagedArrayPage<TraceServices::FStackFrame> *)
                   (this->Frames).PagesArray.AllocatorInstance.Data;
          (this->Frames).LastPage = pTVar18;
          (this->Frames).FirstPage = pTVar4;
          pFVar12 = (FStackFrame *)(**(code **)((longlong)*(this->Frames).Allocator + 8))();
          ((this->Frames).LastPage)->Items = pFVar12;
        }
        puVar2 = &(this->Frames).TotalItemCount;
        *puVar2 = *puVar2 + 1;
        pTVar4 = (this->Frames).LastPage;
        pFVar12 = pTVar4->Items + pTVar4->Count;
        pFVar12->Addr = 0;
        pFVar12->Symbol = (FResolvedSymbol *)0x0;
        puVar2 = &((this->Frames).LastPage)->Count;
        *puVar2 = *puVar2 + 1;
        pFVar12->Addr = *param_2;
        if (this->ModuleProvider == (IModuleProvider *)0x0) {
          pFVar13 = &GNeverResolveSymbol;
        }
        else {
          pFVar13 = (FResolvedSymbol *)(**(code **)(*(longlong *)this->ModuleProvider + 0x20))();
        }
        param_2 = param_2 + 1;
        pFVar12->Symbol = pFVar13;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    AcquireSRWLockExclusive((PSRWLOCK)&this->EntriesLock);
    if (uVar21 < (this->Callstacks).TotalItemCount) {
      uVar17 = (this->Callstacks).PageSize;
      pFVar14 = (this->Callstacks).FirstPage[uVar21 / uVar17].Items + uVar21 % uVar17;
    }
    else {
      do {
        pTVar6 = (this->Callstacks).LastPage;
        if ((pTVar6 == (TPagedArrayPage<TraceServices::FCallstack> *)0x0) ||
           (pTVar6->Count == (this->Callstacks).PageSize)) {
          iVar10 = (this->Callstacks).PagesArray.ArrayNum;
          piVar1 = &(this->Callstacks).PagesArray.ArrayMax;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(this->Callstacks).PagesArray.AllocatorInstance,piVar1);
            (this->Callstacks).PagesArray.ArrayNum = iVar10;
          }
          pTVar19 = (TPagedArrayPage<TraceServices::FCallstack> *)
                    ((this->Callstacks).PagesArray.AllocatorInstance.Data + (longlong)iVar10 * 0x10)
          ;
          (this->Callstacks).PagesArray.ArrayNum = iVar10 + 1;
          DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FCallstack>,int>
                    (pTVar19,1);
          pTVar6 = (TPagedArrayPage<TraceServices::FCallstack> *)
                   (this->Callstacks).PagesArray.AllocatorInstance.Data;
          (this->Callstacks).LastPage = pTVar19;
          (this->Callstacks).FirstPage = pTVar6;
          pFVar14 = (FCallstack *)(**(code **)((longlong)*(this->Callstacks).Allocator + 8))();
          ((this->Callstacks).LastPage)->Items = pFVar14;
        }
        puVar2 = &(this->Callstacks).TotalItemCount;
        *puVar2 = *puVar2 + 1;
        pTVar6 = (this->Callstacks).LastPage;
        uVar7 = pTVar6->Count;
        pFVar14 = pTVar6->Items;
        pFVar14[uVar7].CallstackLenIndex = 0;
        pFVar14 = pFVar14 + uVar7;
        puVar2 = &((this->Callstacks).LastPage)->Count;
        *puVar2 = *puVar2 + 1;
        uVar17 = (this->Callstacks).TotalItemCount - 1;
        if (((uVar17 & 0xff00000000000000) != 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Id & EntryLenMask) == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\TraceServices\\Model\\Callstack.h"
                               ,0x85,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar14->CallstackLenIndex = uVar17 & 0xffffffffffffff;
      } while ((this->Callstacks).TotalItemCount <= uVar21);
    }
    if ((pFVar14 == (FCallstack *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Callstack",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\CallstacksProvider.cpp"
                           ,0x71,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((0xffffffffffffff < pFVar14->CallstackLenIndex) ||
        ((pFVar14->CallstackLenIndex & 0xffffffffffffff) != uVar21)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Callstack->IsEmpty() && Callstack->GetEmptyId() == uint64(InCallstackId)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\CallstacksProvider.cpp"
                           ,0x72,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (param_3 != '\0') {
      if (((this->Frames).TotalItemCount < uVar20) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InFrameCount <= Frames.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\CallstacksProvider.cpp"
                             ,0x75,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar17 = (this->Frames).TotalItemCount - uVar20;
      uVar21 = (this->Frames).PageSize;
      pFVar12 = (this->Frames).FirstPage[uVar17 / uVar21].Items + uVar17 % uVar21;
      if ((((ulonglong)pFVar12 & 0xff00000000000000) != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint64(InFirstFrame) & EntryLenMask) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\TraceServices\\Model\\Callstack.h"
                             ,0x7e,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar14->CallstackLenIndex = uVar20 << 0x38 | (ulonglong)pFVar12 & 0xffffffffffffff;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->EntriesLock);
  }
  return;
}

// AddCallstackWithHash @ 14d43a090

uint __thiscall
TraceServices::FCallstacksProvider::AddCallstackWithHash
          (FCallstacksProvider *this,ulong64 param_1,ulong64 *param_2,uchar param_3)

{
  ulong64 local_res10;
  uint local_28;
  undefined1 local_24 [4];
  ulong64 *local_20;
  uint *local_18;
  
  if (param_1 == 0) {
    return 0;
  }
  local_res10 = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)&this->EntriesLock);
  local_28 = (uint)(this->Callstacks).TotalItemCount;
  local_20 = &local_res10;
  local_18 = &local_28;
  TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->CallstackMap,
             (TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> *)local_24,
             (bool *)(local_24 + 4));
  ReleaseSRWLockExclusive((PSRWLOCK)&this->EntriesLock);
  AddCallstack(this,local_28,param_2,param_3);
  return local_28;
}

// GetCallstack @ 14d461cf0

FCallstack * __thiscall
TraceServices::FCallstacksProvider::GetCallstack(FCallstacksProvider *this,uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  FCallstack *pFVar3;
  
  uVar2 = (ulonglong)param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->EntriesLock);
  if (uVar2 < (this->Callstacks).TotalItemCount) {
    uVar1 = (this->Callstacks).PageSize;
    pFVar3 = (this->Callstacks).FirstPage[uVar2 / uVar1].Items + uVar2 % uVar1;
  }
  else {
    pFVar3 = &GNotFoundCallstack;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->EntriesLock);
  return pFVar3;
}

// GetCallstackIdForHash @ 14d461d60

uint __thiscall
TraceServices::FCallstacksProvider::GetCallstackIdForHash(FCallstacksProvider *this,ulong64 param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  AcquireSRWLockShared((PSRWLOCK)&this->EntriesLock);
  puVar1 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
           ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                   *)&this->CallstackMap,param_1);
  if (puVar1 == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->EntriesLock);
  return uVar2;
}

// GetCallstacks @ 14d461dd0

void __thiscall
TraceServices::FCallstacksProvider::GetCallstacks
          (FCallstacksProvider *this,TArrayView<unsigned_int,int> *param_1,FCallstack **param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  uint *puVar6;
  FCallstack *pFVar7;
  
  if ((param_2 == (FCallstack **)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutCallstacks != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\CallstacksProvider.cpp"
                         ,0xb7,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)&this->EntriesLock);
  puVar6 = param_1->DataPtr;
  puVar1 = puVar6 + param_1->ArrayNum;
  for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    uVar5 = (ulonglong)*puVar6;
    if (uVar5 < (this->Callstacks).TotalItemCount) {
      uVar2 = (this->Callstacks).PageSize;
      pFVar7 = (this->Callstacks).FirstPage[uVar5 / uVar2].Items + uVar5 % uVar2;
    }
    else {
      pFVar7 = &GNotFoundCallstack;
    }
    *param_2 = pFVar7;
    param_2 = param_2 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d461e8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->EntriesLock);
  return;
}

