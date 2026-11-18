// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 4

// GatherSelectedRows @ 1469c95e0

TArray<TSharedPtr<ITableRow,1>,TSizedDefaultAllocator<32>_> * __thiscall
TTableViewMetadata<UObject_*>::GatherSelectedRows
          (TTableViewMetadata<UObject_*> *this,
          TArray<TSharedPtr<ITableRow,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  void *pvVar1;
  TReferenceControllerBase<1> *pTVar2;
  ITypedTableView<UObject_*> *pIVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  int iVar7;
  TArray<TSharedPtr<ITableRow,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  void *pvVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_48;
  TReferenceControllerBase<1> *local_40;
  void *local_38 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar2 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
  pTVar11 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar2->SharedReferenceCount;
    do {
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1469c9621;
      LOCK();
      aVar6 = pTVar2->SharedReferenceCount;
      bVar13 = aVar5 == aVar6;
      if (bVar13) {
        pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar13);
    pIVar3 = (this->OwnerTableView).Object;
    pTVar11 = pTVar2;
    if (pIVar3 != (ITypedTableView<UObject_*> *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0xd0))(pIVar3,local_38);
      iVar9 = (int)local_38[1];
      pvVar1 = (void *)((longlong)local_38[0] + (longlong)iVar9 * 8);
      pvVar12 = local_38[0];
      while( true ) {
        if ((int)local_38[1] != iVar9) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pvVar12 == pvVar1) break;
        (**(code **)((longlong)*pIVar3 + 0xd8))(pIVar3,&local_48,pvVar12);
        if (local_48 != 0) {
          pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar10 <= (FScriptContainerElement *)&local_48) &&
              ((FScriptContainerElement *)&local_48 <
               pFVar10 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<TSharedPtr<ITableRow,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar8;
          }
          iVar7 = __return_storage_ptr__->ArrayNum;
          if (iVar7 == __return_storage_ptr__->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar7 + 1;
          pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
          *(longlong *)pFVar10 = local_48;
          *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_40;
          if (local_40 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40);
        pvVar12 = (void *)((longlong)pvVar12 + 8);
      }
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
    }
  }
LAB_1469c9621:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return __return_storage_ptr__;
}

// GatherSelectedRows @ 1469c97c0

TArray<TSharedPtr<ITableRow,1>,TSizedDefaultAllocator<32>_> * __thiscall
TTableViewMetadata<FName>::GatherSelectedRows
          (TTableViewMetadata<FName> *this,
          TArray<TSharedPtr<ITableRow,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  void *pvVar1;
  TReferenceControllerBase<1> *pTVar2;
  ITypedTableView<FName> *pIVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  int iVar7;
  TArray<TSharedPtr<ITableRow,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  void *pvVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_48;
  TReferenceControllerBase<1> *local_40;
  void *local_38 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar2 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
  pTVar11 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar2->SharedReferenceCount;
    do {
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1469c9801;
      LOCK();
      aVar6 = pTVar2->SharedReferenceCount;
      bVar13 = aVar5 == aVar6;
      if (bVar13) {
        pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar13);
    pIVar3 = (this->OwnerTableView).Object;
    pTVar11 = pTVar2;
    if (pIVar3 != (ITypedTableView<FName> *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0xd0))(pIVar3,local_38);
      iVar9 = (int)local_38[1];
      pvVar1 = (void *)((longlong)local_38[0] + (longlong)iVar9 * 8);
      pvVar12 = local_38[0];
      while( true ) {
        if ((int)local_38[1] != iVar9) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pvVar12 == pvVar1) break;
        (**(code **)((longlong)*pIVar3 + 0xd8))(pIVar3,&local_48,pvVar12);
        if (local_48 != 0) {
          pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar10 <= (FScriptContainerElement *)&local_48) &&
              ((FScriptContainerElement *)&local_48 <
               pFVar10 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<TSharedPtr<ITableRow,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar8;
          }
          iVar7 = __return_storage_ptr__->ArrayNum;
          if (iVar7 == __return_storage_ptr__->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar7 + 1;
          pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
          *(longlong *)pFVar10 = local_48;
          *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_40;
          if (local_40 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40);
        pvVar12 = (void *)((longlong)pvVar12 + 8);
      }
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
    }
  }
LAB_1469c9801:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return __return_storage_ptr__;
}

// IsOfTypeImpl @ 1469e24f0

bool __thiscall
TTableViewMetadata<UObject_*>::IsOfTypeImpl(TTableViewMetadata<UObject_*> *this,FName *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_class_FName_const&___ptr64___cdecl_TTableViewMetadata<UObject*___ptr64>::GetTypeId(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_TTableViewMetadata<UObject*___ptr64>::GetTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_TTableViewMetadata<UObject*___ptr64>::GetTypeId(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_TTableViewMetadata<UObject*___ptr64>::GetTypeId(void)'
                      ::__l2::Type,L"TTableViewMetadata");
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_TTableViewMetadata<UObject*___ptr64>::GetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (`public:_static_class_FName_const&___ptr64___cdecl_TTableViewMetadata<UObject*___ptr64>::GetTypeId(void)'
      ::__l2::Type != *param_1) {
    if (*piVar1 < `public:_static_class_FName_const&___ptr64___cdecl_ITableViewMetadata::GetTypeId(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_ITableViewMetadata::GetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName_const&___ptr64___cdecl_ITableViewMetadata::GetTypeId(void)'::
          __l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_ITableViewMetadata::GetTypeId(void)'
                        ::__l2::Type,L"ITableViewMetadata");
        _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_ITableViewMetadata::GetTypeId(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    if (`public:_static_class_FName_const&___ptr64___cdecl_ITableViewMetadata::GetTypeId(void)'::
        __l2::Type != *param_1) {
      return false;
    }
  }
  return true;
}

// IsOfTypeImpl @ 1469e25e0

bool __thiscall
TTableViewMetadata<FName>::IsOfTypeImpl(TTableViewMetadata<FName> *this,FName *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_class_FName_const&___ptr64___cdecl_TTableViewMetadata<FName>::GetTypeId(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_TTableViewMetadata<FName>::GetTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_TTableViewMetadata<FName>::GetTypeId(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_TTableViewMetadata<FName>::GetTypeId(void)'
                      ::__l2::Type,L"TTableViewMetadata");
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_TTableViewMetadata<FName>::GetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (`public:_static_class_FName_const&___ptr64___cdecl_TTableViewMetadata<FName>::GetTypeId(void)'
      ::__l2::Type != *param_1) {
    if (*piVar1 < `public:_static_class_FName_const&___ptr64___cdecl_ITableViewMetadata::GetTypeId(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_ITableViewMetadata::GetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName_const&___ptr64___cdecl_ITableViewMetadata::GetTypeId(void)'::
          __l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_ITableViewMetadata::GetTypeId(void)'
                        ::__l2::Type,L"ITableViewMetadata");
        _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_ITableViewMetadata::GetTypeId(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    if (`public:_static_class_FName_const&___ptr64___cdecl_ITableViewMetadata::GetTypeId(void)'::
        __l2::Type != *param_1) {
      return false;
    }
  }
  return true;
}

