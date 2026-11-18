// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FScopeMarker @ 14808aad0

FScopeMarker * __thiscall
UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker
          (FScopeMarker *this,FArchive *param_1,FString *param_2)

{
  FArchive *pFVar1;
  FNetworkMemoryTrackingScopeStack *this_00;
  bool bVar2;
  bool bVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  FString *pFVar8;
  undefined8 *puVar9;
  TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack>_>
  *pTVar10;
  void *local_38 [2];
  FString local_28;
  
  this->Ar = param_1;
  bVar3 = false;
  bVar2 = false;
  this->PreWorkPos = 0;
  ::FString::FString(&this->ScopeName,param_2);
  pTVar4 = CVarUseGranularNetworkTracking.Ref;
  pFVar1 = this->Ar;
  bVar5 = IsInParallelGameThread();
  if (bVar5) {
LAB_14808ab27:
    lVar7 = 0;
  }
  else {
    bVar5 = IsInGameThread();
    if (bVar5) goto LAB_14808ab27;
    lVar7 = 4;
  }
  if ((*(int *)((longlong)pTVar4->ShadowedValue + lVar7) == 0) || ((pFVar1->field_0x2b & 4) == 0)) {
LAB_14808ab9a:
    bVar5 = false;
  }
  else {
    pFVar8 = ::FString::FString(&local_28,L"FArchiveCountMem");
    puVar9 = (undefined8 *)(**(code **)(*(longlong *)pFVar1 + 0x18))(pFVar1,local_38);
    iVar6 = (pFVar8->Data).ArrayNum;
    bVar3 = true;
    bVar2 = true;
    if (iVar6 == *(int *)(puVar9 + 1)) {
      if (1 < iVar6) {
        iVar6 = wcscmp((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,(wchar_t *)*puVar9);
        bVar5 = iVar6 == 0;
        goto LAB_14808ab8e;
      }
    }
    else {
      bVar5 = *(int *)(puVar9 + 1) + iVar6 == 1;
LAB_14808ab8e:
      if (!bVar5) goto LAB_14808ab9a;
    }
    bVar5 = true;
  }
  if (bVar2) {
    if (local_38[0] != (void *)0x0) {
      FMemory::Free(local_38[0]);
    }
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pTVar10 = FNetworkMemoryTrackingScopeStack::Get();
    this_00 = pTVar10->Ptr;
    this->ScopeStack = this_00;
    if (this_00 != (FNetworkMemoryTrackingScopeStack *)0x0) {
      FNetworkMemoryTrackingScopeStack::PushScope(this_00,&this->ScopeName);
      return this;
    }
  }
  else {
    this->ScopeStack = (FNetworkMemoryTrackingScopeStack *)0x0;
  }
  return this;
}

// ~FScopeMarker @ 14808efd0

void __thiscall
UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(FScopeMarker *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FNetworkMemoryTrackingScopeStack *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FNetworkMemoryTrackingScope *pFVar8;
  
  pFVar4 = this->ScopeStack;
  if (pFVar4 != (FNetworkMemoryTrackingScopeStack *)0x0) {
    pFVar8 = (FNetworkMemoryTrackingScope *)0x0;
    if ((pFVar4->ScopeStack).ArrayNum < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar3 = (pFVar4->ScopeStack).ArrayNum;
    uVar7 = iVar3 - 1;
    pFVar2 = (pFVar4->ScopeStack).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
    iVar3 = ~uVar7 + iVar3;
    if (iVar3 != 0) {
      memmove(pFVar2,pFVar2 + 8,(longlong)iVar3 << 3);
    }
    piVar1 = &(pFVar4->ScopeStack).ArrayNum;
    *piVar1 = *piVar1 + -1;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(pFVar4->ScopeStack).AllocatorInstance,(pFVar4->ScopeStack).ArrayNum,
               &(pFVar4->ScopeStack).ArrayMax);
    iVar3 = (pFVar4->ScopeStack).ArrayNum;
    if (0 < iVar3) {
      uVar7 = 0;
      if ((int)(iVar3 - 1U) < iVar3) {
        uVar7 = ~(iVar3 - 1U) >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar8 = *(FNetworkMemoryTrackingScope **)
                ((pFVar4->ScopeStack).AllocatorInstance.Data +
                (longlong)(pFVar4->ScopeStack).ArrayNum * 8 + -8);
    }
    pFVar4->CurrentScope = pFVar8;
  }
  pFVar2 = (this->ScopeName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// BeginWork @ 148097fa0

void __thiscall
UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(FScopeMarker *this)

{
  if (this->ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    this->PreWorkPos = *(ulong64 *)&this->Ar[1].field_0x8;
  }
  return;
}

// EndWork @ 14809f730

void __thiscall
UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(FScopeMarker *this,FString *param_1)

{
  if (this->ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
    FNetworkMemoryTrackingScopeStack::TrackWork
              (this->ScopeStack,param_1,*(longlong *)&this->Ar[1].field_0x8 - this->PreWorkPos);
    return;
  }
  return;
}

// LogCustomWork @ 1480b7870

void __thiscall
UE::Net::Private::GranularMemoryTracking::FScopeMarker::LogCustomWork
          (FScopeMarker *this,FString *param_1,ulong64 param_2)

{
  int iVar1;
  FNetworkMemoryTrackingScopeStack *pFVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>
  *pTVar6;
  FNetworkMemoryTrackingScope *pFVar7;
  FNetworkMemoryTrackingScope *pFVar8;
  ulong64 *puVar9;
  int iVar10;
  wchar_t *pwVar11;
  TPairInitializer<FString_const_&,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_&&>
  TStackX_8;
  FString *pFStack_38;
  TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>
  **ppTStack_30;
  
  pFVar2 = this->ScopeStack;
  if (pFVar2 == (FNetworkMemoryTrackingScopeStack *)0x0) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork(FString_const&___ptr64,unsigned___int64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork(FString_const&___ptr64,unsigned___int64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork(FString_const&___ptr64,unsigned___int64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork(FString_const&___ptr64,unsigned___int64)___ptr64'
                        ::__l2::UnknownScopeName,L"UNKNOWN");
    atexit(`UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork'::
           __l2::_dynamic_atexit_destructor_for__UnknownScopeName__);
    _Init_thread_footer(&`public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork(FString_const&___ptr64,unsigned___int64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar7 = pFVar2->CurrentScope;
  pFVar8 = (FNetworkMemoryTrackingScope *)0x0;
  iVar10 = 0;
  if (pFVar7 == (FNetworkMemoryTrackingScope *)0x0) {
    pTVar6 = TMapBase<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>
             ::Find((TMapBase<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>
                     *)&pFVar2->TopLevelScopes,
                    &`public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork(FString_const&___ptr64,unsigned___int64)___ptr64'
                     ::__l2::UnknownScopeName);
    if (pTVar6 == (TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>
                   *)0x0) {
      pFVar7 = ::operator_new(0xc0);
      if (pFVar7 != (FNetworkMemoryTrackingScope *)0x0) {
        pFVar8 = FNetworkMemoryTrackingScope::FNetworkMemoryTrackingScope
                           (pFVar7,&`public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork(FString_const&___ptr64,unsigned___int64)___ptr64'
                                    ::__l2::UnknownScopeName);
      }
      ppTStack_30 = &TStackX_8.Value;
      pFStack_38 = &`public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork(FString_const&___ptr64,unsigned___int64)___ptr64'
                    ::__l2::UnknownScopeName;
      TStackX_8.Value =
           (TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>
            *)pFVar8;
      TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FString_const_&,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_&&>_>
                ((TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>
                  *)&pFVar2->TopLevelScopes,&TStackX_8,(bool *)&pFStack_38);
      pTVar6 = TStackX_8.Value;
      pFVar7 = *(FNetworkMemoryTrackingScope **)
                ((longlong)(int)TStackX_8.Key * 0x20 + 0x10 + *(longlong *)&pFVar2->TopLevelScopes);
      if ((FNetworkMemoryTrackingScope *)TStackX_8.Value != (FNetworkMemoryTrackingScope *)0x0) {
        *(undefined4 *)
         &((TMap<FString,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>_>
            *)((longlong)TStackX_8.Value + 0x60))->field_0x48 = 0;
        pvVar3 = *(void **)&((TMap<FString,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>_>
                              *)((longlong)TStackX_8.Value + 0x60))->field_0x40;
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)((longlong)pTVar6 + 0x60));
        *(undefined4 *)
         &((TMap<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>
            *)((longlong)pTVar6 + 0x10))->field_0x48 = 0;
        pvVar3 = *(void **)&((TMap<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>
                              *)((longlong)pTVar6 + 0x10))->field_0x40;
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)((longlong)pTVar6 + 0x10));
        pFVar4 = (((FString *)&pTVar6->Ptr)->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        ::operator_delete(pTVar6,0xc0);
      }
    }
    else {
      pFVar7 = pTVar6->Ptr;
    }
  }
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar10 = iVar1 + -1;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar11);
  puVar9 = TMapBase<FString,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>_>
           ::FindOrAddImpl<FString_const_&>
                     ((TMapBase<FString,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>_>
                       *)&pFVar7->Fields,uVar5,param_1);
  *puVar9 = *puVar9 + param_2;
  pFVar7->TotalBytes = pFVar7->TotalBytes + param_2;
  return;
}

