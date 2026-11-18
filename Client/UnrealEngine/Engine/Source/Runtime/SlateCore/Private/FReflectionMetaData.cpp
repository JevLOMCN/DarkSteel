// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 6

// GetTypeId @ 1425e3fc0

FName * __cdecl FReflectionMetaData::GetTypeId(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_FReflectionMetaData::GetTypeId(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_FReflectionMetaData::GetTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_FReflectionMetaData::GetTypeId(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_FReflectionMetaData::GetTypeId(void)'
                      ::__l2::Type,L"FReflectionMetaData");
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_FReflectionMetaData::GetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FName_const&___ptr64___cdecl_FReflectionMetaData::GetTypeId(void)'
              ::__l2::Type;
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_FReflectionMetaData::GetTypeId(void)'::
          __l2::Type;
}

// GetWidgetDebugInfo @ 1425e45f0

FString * __cdecl
FReflectionMetaData::GetWidgetDebugInfo(FString *__return_storage_ptr__,SWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  UObject *pUVar4;
  FName local_res18;
  FName local_res20;
  TSharedPtr<FReflectionMetaData,1> local_98;
  TSharedPtr<FReflectionMetaData,1> local_88;
  FName local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  
  SWidget::GetMetaData<FReflectionMetaData>(param_1,&local_98);
  if (local_98.Object != (FReflectionMetaData *)0x0) {
    if ((local_98.Object == (FReflectionMetaData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    pUVar4 = FWeakObjectPtr::Get(&((local_98.Object)->Asset).WeakPtr);
    if (pUVar4 != (UObject *)0x0) {
      local_res20.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
      local_res20.Number = *(uint *)&pUVar4->field_0x1c;
      if ((local_98.Object == (FReflectionMetaData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
      local_res18 = (local_98.Object)->Name;
      ::FName::ToString(&local_res18,&local_58);
      ::FName::ToString(&local_res20,&local_68);
      ::FString::PrintfImpl(__return_storage_ptr__,L"%s [%s]");
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      goto LAB_1425e485b;
    }
  }
  GetWidgetOrParentMetaData(&local_88,param_1);
  if (local_88.Object == (FReflectionMetaData *)0x0) {
LAB_1425e4843:
    (**(code **)(param_1->_padding_ + 0x1e0))(param_1,__return_storage_ptr__);
  }
  else {
    if ((local_88.Object == (FReflectionMetaData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    pUVar4 = FWeakObjectPtr::Get(&((local_88.Object)->Asset).WeakPtr);
    if (pUVar4 == (UObject *)0x0) goto LAB_1425e4843;
    local_70.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
    local_70.Number = *(uint *)&pUVar4->field_0x1c;
    if ((local_88.Object == (FReflectionMetaData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    local_78 = (local_88.Object)->Name;
    (**(code **)(param_1->_padding_ + 0x1e8))(param_1,local_28);
    ::FName::ToString(&local_78,&local_38);
    ::FName::ToString(&local_70,&local_48);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s [%s(%s)]");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
LAB_1425e485b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetWidgetDebugInfo @ 1425e4890

FString * __cdecl
FReflectionMetaData::GetWidgetDebugInfo(FString *__return_storage_ptr__,SWidget *param_1)

{
  if (param_1 == (SWidget *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  }
  GetWidgetDebugInfo(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetWidgetOrParentMetaData @ 1425e4d00

TSharedPtr<FReflectionMetaData,1> * __cdecl
FReflectionMetaData::GetWidgetOrParentMetaData
          (TSharedPtr<FReflectionMetaData,1> *__return_storage_ptr__,SWidget *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  FReflectionMetaData *pFVar4;
  bool bVar5;
  atomic<int> aVar6;
  TSharedPtr<FReflectionMetaData,1> *pTVar7;
  UObject *pUVar8;
  SWidget *pSVar9;
  TSharedPtr<FReflectionMetaData,1> local_18;
  
  do {
    if (param_1 == (SWidget *)0x0) {
LAB_1425e4db2:
      __return_storage_ptr__->Object = (FReflectionMetaData *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    SWidget::GetMetaData<FReflectionMetaData>(param_1,&local_18);
    pFVar4 = local_18.Object;
    if (local_18.Object != (FReflectionMetaData *)0x0) {
      if ((local_18.Object == (FReflectionMetaData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FReflectionMetaData,1> *)(*pcVar2)();
        return pTVar7;
      }
      pUVar8 = FWeakObjectPtr::Get(&(pFVar4->Asset).WeakPtr);
      if (pUVar8 != (UObject *)0x0) {
        __return_storage_ptr__->Object = pFVar4;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             local_18.SharedReferenceCount.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return __return_storage_ptr__;
      }
    }
    pSVar9 = (SWidget *)0x0;
    pTVar1 = (param_1->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar1->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18.SharedReferenceCount.ReferenceController);
          goto LAB_1425e4db2;
        }
        LOCK();
        aVar6 = pTVar1->SharedReferenceCount;
        bVar5 = aVar3 == aVar6;
        if (bVar5) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar6 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar6;
      } while (!bVar5);
      pSVar9 = (param_1->ParentWidgetPtr).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    param_1 = pSVar9;
  } while( true );
}

// GetWidgetPath @ 1425e4e20

/* WARNING: Type propagation algorithm not settling */

FString * __cdecl
FReflectionMetaData::GetWidgetPath
          (FString *__return_storage_ptr__,SWidget *param_1,bool param_2,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  FReflectionMetaData *pFVar4;
  bool bVar5;
  atomic<int> aVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  SWidget *pSVar9;
  int iVar10;
  TSharedPtr<FReflectionMetaData,1> local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FScriptContainerElement *local_28;
  
  iVar10 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  do {
    if (param_1 == (SWidget *)0x0) {
      return __return_storage_ptr__;
    }
    SWidget::GetMetaData<FReflectionMetaData>(param_1,&local_68);
    pFVar4 = local_68.Object;
    if ((param_3) || (local_68.Object == (FReflectionMetaData *)0x0)) {
      pFVar7 = (FString *)(**(code **)(param_1->_padding_ + 0x1e8))(param_1);
      ::FString::InsertAt(__return_storage_ptr__,0,pFVar7);
      FVar8.Data = local_28;
    }
    else {
      if ((local_68.Object == (FReflectionMetaData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar2)();
        return pFVar7;
      }
      pFVar7 = ::FName::ToString(&pFVar4->Name,&local_38);
      ::FString::InsertAt(__return_storage_ptr__,0,pFVar7);
      FVar8.Data = local_38.Data.AllocatorInstance.Data;
    }
    if (FVar8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar8.Data);
    }
    pSVar9 = (SWidget *)0x0;
    pTVar1 = (param_1->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar1->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_1425e4fc9;
        }
        LOCK();
        aVar6 = pTVar1->SharedReferenceCount;
        bVar5 = aVar3 == aVar6;
        if (bVar5) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar6 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar6;
      } while (!bVar5);
      pSVar9 = (param_1->ParentWidgetPtr).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (pSVar9 != (SWidget *)0x0) {
      ::FString::FString(&local_58,L"/");
      ::FString::InsertAt(__return_storage_ptr__,0,&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      iVar10 = iVar10 + 1;
      if ((param_2) && (4 < iVar10)) {
        ::FString::FString(&local_48,L"...");
        ::FString::InsertAt(__return_storage_ptr__,0,&local_48);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
LAB_1425e4fc9:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        return __return_storage_ptr__;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    param_1 = pSVar9;
  } while( true );
}

// GetWidgetPath @ 1425e5000

FString * __cdecl
FReflectionMetaData::GetWidgetPath
          (FString *__return_storage_ptr__,SWidget *param_1,bool param_2,bool param_3)

{
  if (param_1 == (SWidget *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  }
  GetWidgetPath(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

