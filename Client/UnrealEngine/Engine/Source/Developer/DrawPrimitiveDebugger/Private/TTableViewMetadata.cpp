// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 2

// GatherSelectedRows @ 146d18700

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArray<TSharedPtr<ITableRow,1>,TSizedDefaultAllocator<32>_> * __thiscall
TTableViewMetadata<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::GatherSelectedRows
          (TTableViewMetadata<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *this,
          TArray<TSharedPtr<ITableRow,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  ITypedTableView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *pIVar2;
  code *pcVar3;
  atomic<int> aVar4;
  int iVar5;
  atomic<int> aVar6;
  int iVar7;
  TArray<TSharedPtr<ITableRow,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *local_38;
  int local_30;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar1 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
  pTVar11 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar1->SharedReferenceCount;
    do {
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_146d18741;
      LOCK();
      aVar6 = pTVar1->SharedReferenceCount;
      bVar13 = aVar4 == aVar6;
      if (bVar13) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar13);
    pIVar2 = (this->OwnerTableView).Object;
    pTVar11 = pTVar1;
    if (pIVar2 != (ITypedTableView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0xd0))(pIVar2,&local_38);
      iVar5 = local_30;
      pTVar10 = local_38 + local_30;
      pTVar12 = local_38;
      while( true ) {
        if (local_30 != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pTVar12 == pTVar10) break;
        (**(code **)((longlong)*pIVar2 + 0xd8))(pIVar2,&local_48,pTVar12);
        if (local_48 != 0) {
          pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar9 <= (FScriptContainerElement *)&local_48) &&
              ((FScriptContainerElement *)&local_48 <
               pFVar9 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar3 = (code *)swi(3);
            pTVar8 = (TArray<TSharedPtr<ITableRow,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
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
          pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
          *(longlong *)pFVar9 = local_48;
          *(TReferenceControllerBase<1> **)(pFVar9 + 8) = local_40;
          if (local_40 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40);
        pTVar12 = pTVar12 + 1;
      }
      DestructItems<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,int>(local_38,local_30);
      if (local_38 != (TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *)0x0) {
        FMemory::Free(local_38);
      }
    }
  }
LAB_146d18741:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return __return_storage_ptr__;
}

// IsOfTypeImpl @ 146d24100

bool __thiscall
TTableViewMetadata<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::IsOfTypeImpl
          (TTableViewMetadata<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *this,
          FName *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_class_FName_const&___ptr64___cdecl_TTableViewMetadata<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::GetTypeId(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_TTableViewMetadata<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::GetTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_TTableViewMetadata<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::GetTypeId(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_TTableViewMetadata<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::GetTypeId(void)'
                      ::__l2::Type,L"TTableViewMetadata");
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_TTableViewMetadata<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::GetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (`public:_static_class_FName_const&___ptr64___cdecl_TTableViewMetadata<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::GetTypeId(void)'
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

