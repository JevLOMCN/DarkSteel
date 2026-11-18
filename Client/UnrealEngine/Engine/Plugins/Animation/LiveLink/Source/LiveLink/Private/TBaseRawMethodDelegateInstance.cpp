// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 143

// CreateCopy @ 14d031d20

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkDebugUIEntry___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_V__TSharedPtr_UFLiveLinkDebugUIEntry___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkDebugUIEntry___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_9f6e481d *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d031db0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkDebugUIEntry___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_V__TSharedPtr_UFLiveLinkDebugUIEntry___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkDebugUIEntry___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_9f6e481d *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d031e00

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkDebugUIEntry___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_V__TSharedPtr_UFLiveLinkDebugUIEntry___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkDebugUIEntry___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_9f6e481d *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d031eb0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_V__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_9422041d *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d031f40

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_V__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_9422041d *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d031f90

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_V__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_9422041d *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d032040

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkDebugUIEntry___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_V__TSharedPtr_UFLiveLinkDebugUIEntry___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkDebugUIEntry___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_7c065457 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0320d0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkDebugUIEntry___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_V__TSharedPtr_UFLiveLinkDebugUIEntry___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkDebugUIEntry___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_7c065457 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d032120

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkDebugUIEntry___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_V__TSharedPtr_UFLiveLinkDebugUIEntry___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkDebugUIEntry___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_7c065457 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d0321d0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_V__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_cb034bd7 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d032260

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_V__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_cb034bd7 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d0322b0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_V__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFLiveLinkSource_SLiveLinkMessageBusSourceFactory___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_cb034bd7 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d032360

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkClient____A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0323f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkClient____A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14d032440

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkClient____A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d0324f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(enum_ELiveLinkTickType),FDefaultTSDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ELiveLinkTickType___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkClient____A6AXW4ELiveLinkTickType___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d032580

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(enum_ELiveLinkTickType),FDefaultTSDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ELiveLinkTickType___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkClient____A6AXW4ELiveLinkTickType___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14d0325d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(enum_ELiveLinkTickType),FDefaultTSDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ELiveLinkTickType___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkClient____A6AXW4ELiveLinkTickType___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d032680

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkClient____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d032710

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkClient____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14d032760

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkClient____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d032810

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy,enum_ELiveLinkTickType>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__W4ELiveLinkTickType____6B_
    ;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)this + 8);
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkClient____A6AXXZUFDefaultDelegateUserPolicy__W4ELiveLinkTickType____6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0328a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy,enum_ELiveLinkTickType>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__W4ELiveLinkTickType____6B_
    ;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)this + 8);
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkClient____A6AXXZUFDefaultDelegateUserPolicy__W4ELiveLinkTickType____6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14d032900

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy,enum_ELiveLinkTickType>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__W4ELiveLinkTickType____6B_
    ;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((longlong)this + 8);
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkClient____A6AXXZUFDefaultDelegateUserPolicy__W4ELiveLinkTickType____6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d0329b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultTSDelegateUserPolicy,enum_ELiveLinkTickType>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy__W4ELiveLinkTickType____6B_
    ;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)this + 8);
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkClient____A6AXXZUFDefaultTSDelegateUserPolicy__W4ELiveLinkTickType____6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d032a40

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultTSDelegateUserPolicy,enum_ELiveLinkTickType>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy__W4ELiveLinkTickType____6B_
    ;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)this + 8);
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkClient____A6AXXZUFDefaultTSDelegateUserPolicy__W4ELiveLinkTickType____6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14d032aa0

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultTSDelegateUserPolicy,enum_ELiveLinkTickType>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy__W4ELiveLinkTickType____6B_
    ;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((longlong)this + 8);
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkClient____A6AXXZUFDefaultTSDelegateUserPolicy__W4ELiveLinkTickType____6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d032b50

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkDebugCommand____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_afe05896 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d032be0

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkDebugCommand____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_afe05896 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d032c30

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkDebugCommand____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_afe05896 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d032ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_1714868a *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d032d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_1714868a *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d032dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_1714868a *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d032e70

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkMotionController____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d032f00

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkMotionController____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14d032f50

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkMotionController____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d033000

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkSourceCollection,void___cdecl(enum_ELiveLinkSubjectState),FDefaultDelegateUserPolicy,FLiveLinkSubjectKey>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ELiveLinkSubjectState___ZUFDefaultDelegateUserPolicy__UFLiveLinkSubjectKey____6B_
    ;
    uVar1 = *(undefined8 *)((longlong)this + 0x10);
    puVar2[1] = *(undefined8 *)((longlong)this + 8);
    puVar2[2] = uVar1;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkSourceCollection____A6AXW4ELiveLinkSubjectState___ZUFDefaultDelegateUserPolicy__UFLiveLinkSubjectKey____6B_
    ;
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = *(undefined8 *)((longlong)this + 0x30);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0330a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkSourceCollection,void___cdecl(enum_ELiveLinkSubjectState),FDefaultDelegateUserPolicy,FLiveLinkSubjectKey>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ELiveLinkSubjectState___ZUFDefaultDelegateUserPolicy__UFLiveLinkSubjectKey____6B_
    ;
    uVar1 = *(undefined8 *)((longlong)this + 0x10);
    puVar2[1] = *(undefined8 *)((longlong)this + 8);
    puVar2[2] = uVar1;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkSourceCollection____A6AXW4ELiveLinkSubjectState___ZUFDefaultDelegateUserPolicy__UFLiveLinkSubjectKey____6B_
    ;
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = *(undefined8 *)((longlong)this + 0x30);
  }
  return;
}

// CreateCopy @ 14d033110

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkSourceCollection,void___cdecl(enum_ELiveLinkSubjectState),FDefaultDelegateUserPolicy,FLiveLinkSubjectKey>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ELiveLinkSubjectState___ZUFDefaultDelegateUserPolicy__UFLiveLinkSubjectKey____6B_
    ;
    uVar2 = *(undefined4 *)((longlong)this + 0xc);
    uVar3 = *(undefined4 *)((longlong)this + 0x10);
    uVar4 = *(undefined4 *)((longlong)this + 0x14);
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((longlong)this + 8);
    *(undefined4 *)((longlong)puVar6 + 0xc) = uVar2;
    *(undefined4 *)(puVar6 + 2) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uVar4;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar6[4] = *(undefined8 *)((longlong)this + 0x20);
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkSourceCollection____A6AXW4ELiveLinkSubjectState___ZUFDefaultDelegateUserPolicy__UFLiveLinkSubjectKey____6B_
    ;
    puVar6[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar6[6] = *(undefined8 *)((longlong)this + 0x30);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d03cd60

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
          *this,TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *param_1)

{
  FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *pFVar1;
  FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int local_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>_*_&>
                     (&local_res8);
  local_28 = *(undefined4 *)&(param_1->Array).DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&(param_1->Array).DataPtr + 4);
  iStack_20 = (param_1->Array).ArrayNum;
  uStack_1c = *(undefined4 *)&(param_1->Array).field_0xc;
  local_18 = param_1->StartIndex;
  iStack_14 = param_1->MoveIndex;
  uStack_10 = *(undefined4 *)&param_1->Action;
  uStack_c = *(undefined4 *)&param_1->field_0x1c;
  (*(code *)this->MethodPtr)(pFVar1,&local_28);
  return;
}

// Execute @ 14d03cdc0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
          *this,TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>
                *param_1)

{
  FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *pFVar1;
  FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>
  *local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int local_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_*_&>
                     (&local_res8);
  local_28 = *(undefined4 *)&(param_1->Array).DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&(param_1->Array).DataPtr + 4);
  iStack_20 = (param_1->Array).ArrayNum;
  uStack_1c = *(undefined4 *)&(param_1->Array).field_0xc;
  local_18 = param_1->StartIndex;
  iStack_14 = param_1->MoveIndex;
  uStack_10 = *(undefined4 *)&param_1->Action;
  uStack_c = *(undefined4 *)&param_1->field_0x1c;
  (*(code *)this->MethodPtr)(pFVar1,&local_28);
  return;
}

// Execute @ 14d03ce20

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
          *this,TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *param_1)

{
  FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *pFVar1;
  FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int local_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>_*_&>
                     (&local_res8);
  local_28 = *(undefined4 *)&(param_1->Array).DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&(param_1->Array).DataPtr + 4);
  iStack_20 = (param_1->Array).ArrayNum;
  uStack_1c = *(undefined4 *)&(param_1->Array).field_0xc;
  local_18 = param_1->StartIndex;
  iStack_14 = param_1->MoveIndex;
  uStack_10 = *(undefined4 *)&param_1->Action;
  uStack_c = *(undefined4 *)&param_1->field_0x1c;
  (*(code *)this->MethodPtr)(pFVar1,&local_28);
  return;
}

// Execute @ 14d03ce80

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
          *this,TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>
                *param_1)

{
  FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *pFVar1;
  FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>
  *local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int local_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_*_&>
                     (&local_res8);
  local_28 = *(undefined4 *)&(param_1->Array).DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&(param_1->Array).DataPtr + 4);
  iStack_20 = (param_1->Array).ArrayNum;
  uStack_1c = *(undefined4 *)&(param_1->Array).field_0xc;
  local_18 = param_1->StartIndex;
  iStack_14 = param_1->MoveIndex;
  uStack_10 = *(undefined4 *)&param_1->Action;
  uStack_c = *(undefined4 *)&param_1->field_0x1c;
  (*(code *)this->MethodPtr)(pFVar1,&local_28);
  return;
}

// Execute @ 14d03cee0

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
          *this,FLiveLinkSubjectKey *param_1)

{
  FLiveLinkClient *pFVar1;
  FLiveLinkClient *local_res8 [4];
  undefined8 local_28;
  undefined8 uStack_20;
  FName local_18;
  
  local_28._0_4_ = (param_1->Source).A;
  local_28._4_4_ = (param_1->Source).B;
  uStack_20._0_4_ = (param_1->Source).C;
  uStack_20._4_4_ = (param_1->Source).D;
  local_res8[0] = this->UserObject;
  local_18 = (param_1->SubjectName).Name;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FLiveLinkClient,FLiveLinkClient_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)(pFVar1->PendingFramesCriticalSection).CriticalSection.Opaque1 +
             (longlong)*(int *)&(this->MethodPtr).field_0x8 + -0x20,&local_28);
  return;
}

// Execute @ 14d03cf40

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(enum_ELiveLinkTickType),FDefaultTSDelegateUserPolicy>
::Execute(void *this,ELiveLinkTickType param_1)

{
  FLiveLinkClient *pFVar1;
  FLiveLinkClient *local_res8;
  
  local_res8 = *(FLiveLinkClient **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FLiveLinkClient,FLiveLinkClient_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)(pFVar1->PendingFramesCriticalSection).CriticalSection.Opaque1 +
             (longlong)*(int *)((longlong)this + 0x28) + -0x20,param_1);
  return;
}

// Execute @ 14d03cf90

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  FLiveLinkClient *pFVar1;
  FLiveLinkClient *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FLiveLinkClient,FLiveLinkClient_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)(pFVar1->PendingFramesCriticalSection).CriticalSection.Opaque1 +
             (longlong)*(int *)&(this->MethodPtr).field_0x8 + -0x20);
  return;
}

// Execute @ 14d03cfd0

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy,enum_ELiveLinkTickType>
::Execute(void *this)

{
  FLiveLinkClient *pFVar1;
  FLiveLinkClient *local_res8 [4];
  
  local_res8[0] = *(FLiveLinkClient **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FLiveLinkClient,FLiveLinkClient_*_&>
                     (local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)(pFVar1->PendingFramesCriticalSection).CriticalSection.Opaque1 +
             (longlong)*(int *)((longlong)this + 0x28) + -0x20,*(undefined4 *)((longlong)this + 8));
  return;
}

// Execute @ 14d03d010

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultTSDelegateUserPolicy,enum_ELiveLinkTickType>
::Execute(void *this)

{
  FLiveLinkClient *pFVar1;
  FLiveLinkClient *local_res8 [4];
  
  local_res8[0] = *(FLiveLinkClient **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FLiveLinkClient,FLiveLinkClient_*_&>
                     (local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)(pFVar1->PendingFramesCriticalSection).CriticalSection.Opaque1 +
             (longlong)*(int *)((longlong)this + 0x28) + -0x20,*(undefined4 *)((longlong)this + 8));
  return;
}

// Execute @ 14d03d050

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FLiveLinkDebugCommand *pFVar1;
  FLiveLinkDebugCommand *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FLiveLinkDebugCommand,FLiveLinkDebugCommand_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// Execute @ 14d03d090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  FLiveLinkModule *pFVar1;
  FLiveLinkModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FLiveLinkModule,FLiveLinkModule_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// Execute @ 14d03d0d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FLiveLinkMotionController *pFVar1;
  FLiveLinkMotionController *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FLiveLinkMotionController,FLiveLinkMotionController_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 14d03d110

void __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkSourceCollection,void___cdecl(enum_ELiveLinkSubjectState),FDefaultDelegateUserPolicy,FLiveLinkSubjectKey>
::Execute(void *this,ELiveLinkSubjectState param_1)

{
  FLiveLinkSourceCollection *pFVar1;
  FLiveLinkSourceCollection *local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_res8 = *(FLiveLinkSourceCollection **)((longlong)this + 0x28);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FLiveLinkSourceCollection,FLiveLinkSourceCollection_*_&>
                     (&local_res8);
  local_28 = *(undefined4 *)((longlong)this + 8);
  uStack_24 = *(undefined4 *)((longlong)this + 0xc);
  uStack_20 = *(undefined4 *)((longlong)this + 0x10);
  uStack_1c = *(undefined4 *)((longlong)this + 0x14);
  local_18 = *(undefined8 *)((longlong)this + 0x18);
  (**(code **)((longlong)this + 0x30))(pFVar1,param_1,&local_28);
  return;
}

// ExecuteIfSafe @ 14d03e270

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
                *this,TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *param_1)

{
  FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *pFVar1;
  FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int local_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>_*_&>
                     (&local_res8);
  local_28 = *(undefined4 *)&(param_1->Array).DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&(param_1->Array).DataPtr + 4);
  iStack_20 = (param_1->Array).ArrayNum;
  uStack_1c = *(undefined4 *)&(param_1->Array).field_0xc;
  local_18 = param_1->StartIndex;
  iStack_14 = param_1->MoveIndex;
  uStack_10 = *(undefined4 *)&param_1->Action;
  uStack_c = *(undefined4 *)&param_1->field_0x1c;
  (*(code *)this->MethodPtr)(pFVar1,&local_28);
  return true;
}

// ExecuteIfSafe @ 14d03e2d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
                *this,TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>
                      *param_1)

{
  FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *pFVar1;
  FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>
  *local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int local_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_*_&>
                     (&local_res8);
  local_28 = *(undefined4 *)&(param_1->Array).DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&(param_1->Array).DataPtr + 4);
  iStack_20 = (param_1->Array).ArrayNum;
  uStack_1c = *(undefined4 *)&(param_1->Array).field_0xc;
  local_18 = param_1->StartIndex;
  iStack_14 = param_1->MoveIndex;
  uStack_10 = *(undefined4 *)&param_1->Action;
  uStack_c = *(undefined4 *)&param_1->field_0x1c;
  (*(code *)this->MethodPtr)(pFVar1,&local_28);
  return true;
}

// ExecuteIfSafe @ 14d03e330

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
                *this,TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *param_1)

{
  FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *pFVar1;
  FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int local_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>_*_&>
                     (&local_res8);
  local_28 = *(undefined4 *)&(param_1->Array).DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&(param_1->Array).DataPtr + 4);
  iStack_20 = (param_1->Array).ArrayNum;
  uStack_1c = *(undefined4 *)&(param_1->Array).field_0xc;
  local_18 = param_1->StartIndex;
  iStack_14 = param_1->MoveIndex;
  uStack_10 = *(undefined4 *)&param_1->Action;
  uStack_c = *(undefined4 *)&param_1->field_0x1c;
  (*(code *)this->MethodPtr)(pFVar1,&local_28);
  return true;
}

// ExecuteIfSafe @ 14d03e390

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
                *this,TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>
                      *param_1)

{
  FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *pFVar1;
  FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>
  *local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int local_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_*_&>
                     (&local_res8);
  local_28 = *(undefined4 *)&(param_1->Array).DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&(param_1->Array).DataPtr + 4);
  iStack_20 = (param_1->Array).ArrayNum;
  uStack_1c = *(undefined4 *)&(param_1->Array).field_0xc;
  local_18 = param_1->StartIndex;
  iStack_14 = param_1->MoveIndex;
  uStack_10 = *(undefined4 *)&param_1->Action;
  uStack_c = *(undefined4 *)&param_1->field_0x1c;
  (*(code *)this->MethodPtr)(pFVar1,&local_28);
  return true;
}

// ExecuteIfSafe @ 14d03e3f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
                *this,FLiveLinkSubjectKey *param_1)

{
  FLiveLinkClient *pFVar1;
  FLiveLinkClient *local_res8 [4];
  undefined8 local_28;
  undefined8 uStack_20;
  FName local_18;
  
  local_28._0_4_ = (param_1->Source).A;
  local_28._4_4_ = (param_1->Source).B;
  uStack_20._0_4_ = (param_1->Source).C;
  uStack_20._4_4_ = (param_1->Source).D;
  local_res8[0] = this->UserObject;
  local_18 = (param_1->SubjectName).Name;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FLiveLinkClient,FLiveLinkClient_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)(pFVar1->PendingFramesCriticalSection).CriticalSection.Opaque1 +
             (longlong)*(int *)&(this->MethodPtr).field_0x8 + -0x20,&local_28);
  return true;
}

// ExecuteIfSafe @ 14d03e450

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(enum_ELiveLinkTickType),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(void *this,ELiveLinkTickType param_1)

{
  FLiveLinkClient *pFVar1;
  FLiveLinkClient *local_res8;
  
  local_res8 = *(FLiveLinkClient **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FLiveLinkClient,FLiveLinkClient_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)(pFVar1->PendingFramesCriticalSection).CriticalSection.Opaque1 +
             (longlong)*(int *)((longlong)this + 0x28) + -0x20,param_1);
  return true;
}

// ExecuteIfSafe @ 14d03e4a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  FLiveLinkClient *pFVar1;
  FLiveLinkClient *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FLiveLinkClient,FLiveLinkClient_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)(pFVar1->PendingFramesCriticalSection).CriticalSection.Opaque1 +
             (longlong)*(int *)&(this->MethodPtr).field_0x8 + -0x20);
  return true;
}

// ExecuteIfSafe @ 14d03e4e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy,enum_ELiveLinkTickType>
::ExecuteIfSafe(void *this)

{
  FLiveLinkClient *pFVar1;
  FLiveLinkClient *local_res8 [4];
  
  local_res8[0] = *(FLiveLinkClient **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FLiveLinkClient,FLiveLinkClient_*_&>
                     (local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)(pFVar1->PendingFramesCriticalSection).CriticalSection.Opaque1 +
             (longlong)*(int *)((longlong)this + 0x28) + -0x20,*(undefined4 *)((longlong)this + 8));
  return true;
}

// ExecuteIfSafe @ 14d03e520

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultTSDelegateUserPolicy,enum_ELiveLinkTickType>
::ExecuteIfSafe(void *this)

{
  FLiveLinkClient *pFVar1;
  FLiveLinkClient *local_res8 [4];
  
  local_res8[0] = *(FLiveLinkClient **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FLiveLinkClient,FLiveLinkClient_*_&>
                     (local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)(pFVar1->PendingFramesCriticalSection).CriticalSection.Opaque1 +
             (longlong)*(int *)((longlong)this + 0x28) + -0x20,*(undefined4 *)((longlong)this + 8));
  return true;
}

// ExecuteIfSafe @ 14d03e560

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FLiveLinkDebugCommand *pFVar1;
  FLiveLinkDebugCommand *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FLiveLinkDebugCommand,FLiveLinkDebugCommand_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// ExecuteIfSafe @ 14d03e5a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  FLiveLinkModule *pFVar1;
  FLiveLinkModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FLiveLinkModule,FLiveLinkModule_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// ExecuteIfSafe @ 14d03e5e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FLiveLinkMotionController *pFVar1;
  FLiveLinkMotionController *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FLiveLinkMotionController,FLiveLinkMotionController_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return true;
}

// ExecuteIfSafe @ 14d03e620

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkSourceCollection,void___cdecl(enum_ELiveLinkSubjectState),FDefaultDelegateUserPolicy,FLiveLinkSubjectKey>
::ExecuteIfSafe(void *this,ELiveLinkSubjectState param_1)

{
  FLiveLinkSourceCollection *pFVar1;
  FLiveLinkSourceCollection *local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_res8 = *(FLiveLinkSourceCollection **)((longlong)this + 0x28);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FLiveLinkSourceCollection,FLiveLinkSourceCollection_*_&>
                     (&local_res8);
  local_28 = *(undefined4 *)((longlong)this + 8);
  uStack_24 = *(undefined4 *)((longlong)this + 0xc);
  uStack_20 = *(undefined4 *)((longlong)this + 0x10);
  uStack_1c = *(undefined4 *)((longlong)this + 0x14);
  local_18 = *(undefined8 *)((longlong)this + 0x18);
  (**(code **)((longlong)this + 0x30))(pFVar1,param_1,&local_28);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14d049ae0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d049af0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d049b00

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d049b10

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d049b20

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d049b30

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(enum_ELiveLinkTickType),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14d049b40

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d049b50

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy,enum_ELiveLinkTickType>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14d049b60

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultTSDelegateUserPolicy,enum_ELiveLinkTickType>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14d049b70

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d049b80

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d049b90

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d049ba0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkSourceCollection,void___cdecl(enum_ELiveLinkSubjectState),FDefaultDelegateUserPolicy,FLiveLinkSubjectKey>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x30);
}

// GetObjectForTimerManager @ 14d0507d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d0507e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d0507f0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d050800

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d050810

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d050820

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(enum_ELiveLinkTickType),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 14d050830

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d050840

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy,enum_ELiveLinkTickType>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 14d050850

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultTSDelegateUserPolicy,enum_ELiveLinkTickType>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 14d050860

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d050870

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d050880

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d050890

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkSourceCollection,void___cdecl(enum_ELiveLinkSubjectState),FDefaultDelegateUserPolicy,FLiveLinkSubjectKey>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x28);
}

// GetUObject @ 14d057c40

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d057c50

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d057c60

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d057c70

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d057c80

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d057c90

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(enum_ELiveLinkTickType),FDefaultTSDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d057ca0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d057cb0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy,enum_ELiveLinkTickType>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d057cc0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultTSDelegateUserPolicy,enum_ELiveLinkTickType>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d057cd0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d057ce0

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d057cf0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d057d00

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkSourceCollection,void___cdecl(enum_ELiveLinkSubjectState),FDefaultDelegateUserPolicy,FLiveLinkSubjectKey>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14d05a020

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d05a030

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d05a040

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d05a050

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d05a060

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d05a070

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(enum_ELiveLinkTickType),FDefaultTSDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// HasSameObject @ 14d05a080

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d05a090

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy,enum_ELiveLinkTickType>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// HasSameObject @ 14d05a0a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultTSDelegateUserPolicy,enum_ELiveLinkTickType>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// HasSameObject @ 14d05a0b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d05a0c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d05a0d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d05a0e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkSourceCollection,void___cdecl(enum_ELiveLinkSubjectState),FDefaultDelegateUserPolicy,FLiveLinkSubjectKey>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x28) == param_1;
}

// IsSafeToExecute @ 14d05fbd0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d05fbe0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d05fbf0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d05fc00

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d05fc10

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d05fc20

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(enum_ELiveLinkTickType),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d05fc30

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 14d05fc40

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy,enum_ELiveLinkTickType>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d05fc50

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultTSDelegateUserPolicy,enum_ELiveLinkTickType>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d05fc60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d05fc70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 14d05fc80

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d05fc90

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkSourceCollection,void___cdecl(enum_ELiveLinkSubjectState),FDefaultDelegateUserPolicy,FLiveLinkSubjectKey>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14d083de0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d083df0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d083e00

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FLiveLinkDebugUIEntry,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d083e10

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d083e20

FName __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d083e30

FName __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(enum_ELiveLinkTickType),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d083e40

FName __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d083e50

FName __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultDelegateUserPolicy,enum_ELiveLinkTickType>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d083e60

FName __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkClient,void___cdecl(void),FDefaultTSDelegateUserPolicy,enum_ELiveLinkTickType>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d083e70

FName __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FLiveLinkDebugCommand,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d083e80

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FLiveLinkModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d083e90

FName __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FLiveLinkMotionController,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d083ea0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FLiveLinkSourceCollection,void___cdecl(enum_ELiveLinkSubjectState),FDefaultDelegateUserPolicy,FLiveLinkSubjectKey>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

