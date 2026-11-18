// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 33

// CreateCopy @ 14d853dd0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_24c33795 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d853e60

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_24c33795 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d853eb0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_24c33795 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d853f60

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_59e8909f *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d853ff0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_59e8909f *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d854040

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_59e8909f *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8540f0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE____A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_4542d425 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d854180

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE____A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_4542d425 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d8541d0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE____A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_4542d425 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d85cf30

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
          *this,TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
                *param_1)

{
  FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pFVar1;
  FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *local_res8;
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
           DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_*_&>
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

// Execute @ 14d85cf90

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
          *this,TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
                *param_1)

{
  FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pFVar1;
  FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *local_res8;
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
           DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_*_&>
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

// Execute @ 14d85cff0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *this,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,
         TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>
         *param_2)

{
  pmf_4542d425 pVar1;
  FPropertyViewerImpl *pFVar2;
  FPropertyViewerImpl *local_res8;
  FTreeNode *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::Private::FPropertyViewerImpl,UE::PropertyViewer::Private::FPropertyViewerImpl_*_&>
                     (&local_res8);
  local_18 = param_1->Object;
  pVar1 = this->MethodPtr;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FTreeNode *)0x0;
  (*(code *)pVar1)(pFVar2,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ExecuteIfSafe @ 14d85f020

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
                *this,TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
                      *param_1)

{
  FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pFVar1;
  FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *local_res8;
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
           DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_*_&>
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

// ExecuteIfSafe @ 14d85f080

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
                *this,TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
                      *param_1)

{
  FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pFVar1;
  FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *local_res8;
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
           DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_*_&>
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

// ExecuteIfSafe @ 14d85f0e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,
               TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>
               *param_2)

{
  pmf_4542d425 pVar1;
  FPropertyViewerImpl *pFVar2;
  FPropertyViewerImpl *local_res8;
  FTreeNode *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::Private::FPropertyViewerImpl,UE::PropertyViewer::Private::FPropertyViewerImpl_*_&>
                     (&local_res8);
  local_18 = param_1->Object;
  pVar1 = this->MethodPtr;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FTreeNode *)0x0;
  (*(code *)pVar1)(pFVar2,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14d865ff0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866000

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866010

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14d8697b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d8697c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14d8697d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14d86d490

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d4a0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d4b0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14d870580

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d870590

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14d8705a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14d871d70

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d871d80

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14d871d90

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14d88b3a0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b3b0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b3c0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

