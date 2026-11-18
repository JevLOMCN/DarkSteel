// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// Get @ 148b3f080

FDebugMemoryEater * __cdecl FDebugMemoryEater::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FDebugMemoryEater&___ptr64___cdecl_FDebugMemoryEater::Get(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FDebugMemoryEater&___ptr64___cdecl_FDebugMemoryEater::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FDebugMemoryEater&___ptr64___cdecl_FDebugMemoryEater::Get(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FDebugMemoryEater&___ptr64___cdecl_FDebugMemoryEater::Get(void)'::__l2::
      Instance.MemoryListHead = (BlockHeader *)0x0;
      `public:_static_class_FDebugMemoryEater&___ptr64___cdecl_FDebugMemoryEater::Get(void)'::__l2::
      Instance.TickHandle = (TWeakPtr<FTSTicker::FElement,1>)ZEXT816(0);
      atexit(`FDebugMemoryEater::Get'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&`public:_static_class_FDebugMemoryEater&___ptr64___cdecl_FDebugMemoryEater::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FDebugMemoryEater&___ptr64___cdecl_FDebugMemoryEater::Get(void)'
              ::__l2::Instance;
    }
  }
  return &`public:_static_class_FDebugMemoryEater&___ptr64___cdecl_FDebugMemoryEater::Get(void)'::
          __l2::Instance;
}

// ParseSizeParam @ 148b6a290

bool __thiscall
FDebugMemoryEater::ParseSizeParam
          (FDebugMemoryEater *this,wchar_t *param_1,wchar_t *param_2,ulong64 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  int iVar10;
  ulonglong uVar11;
  bool bVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  uVar11 = 0;
  lVar13 = 1;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar12 = true;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  bVar4 = FParse::Value(param_1,param_2,&local_58,true,(wchar_t **)0x0);
  if (bVar4) {
    bVar4 = ::FString::EndsWith(&local_58,L"kb",2,IgnoreCase);
    iVar6 = 0;
    if (bVar4) {
      lVar13 = 0x400;
      iVar7 = local_58.Data.ArrayNum + -1;
      if (local_58.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      if (iVar7 + -2 < iVar7) {
        iVar7 = iVar7 + -2;
      }
      iVar15 = 0;
      if (0 < iVar7) {
        iVar15 = iVar7;
      }
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar9.Data = local_58.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_48,(wchar_t *)FVar9.Data,iVar15);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      uVar2 = local_48.Data._8_8_;
      iVar7 = local_48.Data.ArrayNum;
      local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      uVar3 = local_48.Data._8_8_;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = (int)uVar2;
      local_48.Data.ArrayMax = SUB84(uVar2,4);
      local_58.Data.ArrayNum = local_48.Data.ArrayNum;
      local_58.Data.ArrayMax = local_48.Data.ArrayMax;
      local_48.Data._8_8_ = uVar3;
    }
    else {
      bVar4 = ::FString::EndsWith(&local_58,L"mb",2,IgnoreCase);
      if (bVar4) {
        lVar13 = 0x100000;
        iVar7 = local_58.Data.ArrayNum + -1;
        if (local_58.Data.ArrayNum == 0) {
          iVar7 = iVar6;
        }
        if (iVar7 + -2 < iVar7) {
          iVar7 = iVar7 + -2;
        }
        iVar15 = iVar6;
        if (0 < iVar7) {
          iVar15 = iVar7;
        }
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar9.Data = local_58.Data.AllocatorInstance.Data;
        }
        ::FString::ConstructFromPtrSize(&local_38,(wchar_t *)FVar9.Data,iVar15);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        uVar2 = local_38.Data._8_8_;
        iVar7 = local_38.Data.ArrayNum;
        local_58.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        uVar3 = local_38.Data._8_8_;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = (int)uVar2;
        local_38.Data.ArrayMax = SUB84(uVar2,4);
        local_58.Data.ArrayNum = local_38.Data.ArrayNum;
        local_58.Data.ArrayMax = local_38.Data.ArrayMax;
        local_38.Data._8_8_ = uVar3;
      }
      else {
        bVar4 = ::FString::EndsWith(&local_58,L"gb",2,IgnoreCase);
        iVar7 = local_58.Data.ArrayNum;
        if (bVar4) {
          lVar13 = 0x40000000;
          iVar7 = local_58.Data.ArrayNum + -1;
          if (local_58.Data.ArrayNum == 0) {
            iVar7 = iVar6;
          }
          if (iVar7 + -2 < iVar7) {
            iVar7 = iVar7 + -2;
          }
          iVar15 = iVar6;
          if (0 < iVar7) {
            iVar15 = iVar7;
          }
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_58.Data.ArrayNum != 0) {
            FVar9.Data = local_58.Data.AllocatorInstance.Data;
          }
          ::FString::ConstructFromPtrSize(&local_28,(wchar_t *)FVar9.Data,iVar15);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          uVar2 = local_28.Data._8_8_;
          iVar7 = local_28.Data.ArrayNum;
          local_58.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
          local_28.Data.ArrayNum = 0;
          local_28.Data.ArrayMax = 0;
          uVar3 = local_28.Data._8_8_;
          local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_28.Data.ArrayNum = (int)uVar2;
          local_28.Data.ArrayMax = SUB84(uVar2,4);
          local_58.Data.ArrayNum = local_28.Data.ArrayNum;
          local_58.Data.ArrayMax = local_28.Data.ArrayMax;
          local_28.Data._8_8_ = uVar3;
        }
      }
    }
    uVar14 = uVar11;
    if (1 < iVar7) {
      while( true ) {
        iVar15 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar15 = iVar6;
        }
        iVar10 = (int)uVar11;
        if (iVar15 <= iVar10) {
          FVar9.Data = (FScriptContainerElement *)L"";
          if (iVar7 != 0) {
            FVar9.Data = local_58.Data.AllocatorInstance.Data;
          }
          lVar8 = _wtoi64((wchar_t *)FVar9.Data);
          bVar12 = true;
          *param_3 = lVar8 * lVar13;
          goto LAB_148b6a51e;
        }
        if ((((iVar10 < 0) || (iVar7 == 0)) || (iVar7 + -1 <= iVar10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x107,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        iVar7 = iswdigit(*(wint_t *)(local_58.Data.AllocatorInstance.Data + uVar14));
        if (iVar7 == 0) break;
        uVar11 = (ulonglong)(iVar10 + 1);
        uVar14 = uVar14 + 2;
        iVar7 = local_58.Data.ArrayNum;
      }
    }
    bVar12 = false;
  }
LAB_148b6a51e:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return bVar12;
}

// Purge @ 148b6e430

void __thiscall FDebugMemoryEater::Purge(FDebugMemoryEater *this)

{
  BlockHeader *pBVar1;
  
  while (pBVar1 = this->MemoryListHead, pBVar1 != (BlockHeader *)0x0) {
    this->MemoryListHead = pBVar1->Next;
    FMemory::Free(pBVar1);
  }
  return;
}

// Start @ 148b78cf0

bool __thiscall
FDebugMemoryEater::Start(FDebugMemoryEater *this,wchar_t *param_1,FOutputDevice *param_2)

{
  bool bVar1;
  
  this->Target = 0;
  this->LimitPerTick = 0xa00000;
  bVar1 = ParseSizeParam(this,param_1,L"Target=",&this->Target);
  if (bVar1) {
    bVar1 = ParseSizeParam(this,param_1,L"TickMax=",&this->LimitPerTick);
    if (bVar1) {
      FOutputDevice::LogfImpl(param_2,L"Target Free Memory: %llu, Max Allocation Per Tick: %llu");
      StartTicking(this);
      bVar1 = true;
    }
    else {
      FOutputDevice::Log(param_2,L"Failed to parse TickMax parameter!");
      bVar1 = false;
    }
  }
  else {
    FOutputDevice::Log(param_2,L"Failed to parse Target parameter!");
    bVar1 = false;
  }
  return bVar1;
}

// StartTicking @ 148b78de0

void __thiscall FDebugMemoryEater::StartTicking(FDebugMemoryEater *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FTSTicker *this_00;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDebugMemoryEater *pFVar7;
  TWeakPtr<FTSTicker::FElement,1> local_58;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  if ((((this->TickHandle).Object != (FElement *)0x0) &&
      (pTVar3 = (this->TickHandle).WeakReferenceCount.ReferenceController,
      pTVar3 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar3->SharedReferenceCount)) {
    StopTicking(this);
  }
  this_00 = FTSTicker::GetCoreTicker();
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_40);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDebugMemoryEater____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[4] = Tick;
    puVar5[3] = this;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  pFVar7 = (FDebugMemoryEater *)
           FTSTicker::AddTicker
                     (this_00,&local_58,
                      (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_48,0.0);
  if (this != pFVar7) {
    (this->TickHandle).Object = (pFVar7->TickHandle).Object;
    pTVar3 = (pFVar7->TickHandle).WeakReferenceCount.ReferenceController;
    (pFVar7->TickHandle).Object = (FElement *)0x0;
    pTVar4 = (this->TickHandle).WeakReferenceCount.ReferenceController;
    (this->TickHandle).WeakReferenceCount.ReferenceController = pTVar3;
    (pFVar7->TickHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_58.WeakReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  return;
}

// StopTicking @ 148b78fb0

void __thiscall FDebugMemoryEater::StopTicking(FDebugMemoryEater *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TWeakPtr<FTSTicker::FElement,1> local_28;
  
  if ((((this->TickHandle).Object != (FElement *)0x0) &&
      (pTVar3 = (this->TickHandle).WeakReferenceCount.ReferenceController,
      pTVar3 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar3->SharedReferenceCount)) {
    FTSTicker::GetCoreTicker();
    local_28.Object = (this->TickHandle).Object;
    local_28.WeakReferenceCount.ReferenceController =
         (this->TickHandle).WeakReferenceCount.ReferenceController;
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_28);
    if (this != (FDebugMemoryEater *)&stack0xffffffffffffffe8) {
      pTVar3 = (this->TickHandle).WeakReferenceCount.ReferenceController;
      (this->TickHandle).Object = (FElement *)0x0;
      (this->TickHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
      ;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000148b79030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
          return;
        }
      }
    }
  }
  return;
}

// Tick @ 148b79950

bool __thiscall FDebugMemoryEater::Tick(FDebugMemoryEater *this,float param_1)

{
  ulonglong uVar1;
  BlockHeader *pBVar2;
  FPlatformMemoryStats *pFVar3;
  ulonglong uVar4;
  bool bVar5;
  bool bVar6;
  FPlatformMemoryStats local_128;
  FPlatformMemoryStats local_98;
  
  uVar4 = 0;
  FWindowsPlatformMemory::GetStats(&local_128);
  uVar1 = this->Target;
  bVar5 = (ulonglong)local_128._padding_ < uVar1;
  bVar6 = local_128._padding_ == uVar1;
  if (uVar1 < (ulonglong)local_128._padding_) {
    do {
      if ((this->LimitPerTick <= uVar4) ||
         (pBVar2 = FMemory::Malloc(0x10000,0), pBVar2 == (BlockHeader *)0x0)) break;
      uVar4 = uVar4 + 0x10000;
      pBVar2->Next = this->MemoryListHead;
      this->MemoryListHead = pBVar2;
      pFVar3 = FWindowsPlatformMemory::GetStats(&local_98);
      local_128._padding_ = pFVar3->_padding_;
      local_128._padding_ = pFVar3->_padding_;
      local_128._padding_ = pFVar3->_padding_;
      local_128._padding_ = pFVar3->_padding_;
      local_128._padding_ = pFVar3->_padding_;
      local_128._padding_ = pFVar3->_padding_;
      local_128._padding_ = pFVar3->_padding_;
      local_128._padding_ = pFVar3->_padding_;
      local_128._padding_ = pFVar3->_padding_;
      local_128._padding_ = pFVar3->_padding_;
      local_128._padding_ = pFVar3->_padding_;
      local_128._padding_ = pFVar3->_padding_;
      local_128._padding_ = pFVar3->_padding_;
      local_128._padding_ = pFVar3->_padding_;
      local_128._padding_ = pFVar3->_padding_;
      local_128.WindowsSpecificMemoryStat = pFVar3->WindowsSpecificMemoryStat;
      local_128.MemoryPressureStatus = pFVar3->MemoryPressureStatus;
      local_128._129_7_ = *(undefined7 *)&pFVar3->field_0x81;
    } while (this->Target < (ulonglong)local_128._padding_);
    bVar5 = (ulonglong)local_128._padding_ < this->Target;
    bVar6 = local_128._padding_ == this->Target;
  }
  return !bVar5 && !bVar6;
}

