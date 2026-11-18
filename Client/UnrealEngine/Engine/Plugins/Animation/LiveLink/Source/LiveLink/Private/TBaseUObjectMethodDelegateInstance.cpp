// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 96

// CreateCopy @ 14d034c80

void __thiscall
TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFProviderPollResult___00___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXV__TSharedPtr_VILiveLinkSource___00__VFString___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                *)(puVar1 + 1),
               (TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVULiveLinkMessageBusSourceFactory____A6AXV__TSharedPtr_UFProviderPollResult___00___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXV__TSharedPtr_VILiveLinkSource___00__VFString___ZUFDefaultDelegateUserPolicy______6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObject).WeakPtr;
    *(pmf_f0e894ac *)(puVar1 + 6) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d034d20

void __thiscall
TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFProviderPollResult___00___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXV__TSharedPtr_VILiveLinkSource___00__VFString___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                *)(puVar1 + 1),
               (TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVULiveLinkMessageBusSourceFactory____A6AXV__TSharedPtr_UFProviderPollResult___00___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXV__TSharedPtr_VILiveLinkSource___00__VFString___ZUFDefaultDelegateUserPolicy______6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObject).WeakPtr;
    *(pmf_f0e894ac *)(puVar1 + 6) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d034d90

void __thiscall
TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFProviderPollResult___00___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXV__TSharedPtr_VILiveLinkSource___00__VFString___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                *)(puVar3 + 1),
               (TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                *)&this->_padding_);
    puVar3[4] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVULiveLinkMessageBusSourceFactory____A6AXV__TSharedPtr_UFProviderPollResult___00___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXV__TSharedPtr_VILiveLinkSource___00__VFString___ZUFDefaultDelegateUserPolicy______6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 5) = (this->UserObject).WeakPtr;
    *(pmf_f0e894ac *)(puVar3 + 6) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d034e50

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__FLiveLinkBaseDataStruct_UFLiveLinkBaseFrameData_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkCustomTimeStep____A6AXAEBV__FLiveLinkBaseDataStruct_UFLiveLinkBaseFrameData_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_2458ebb6 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d034ee0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__FLiveLinkBaseDataStruct_UFLiveLinkBaseFrameData_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkCustomTimeStep____A6AXAEBV__FLiveLinkBaseDataStruct_UFLiveLinkBaseFrameData_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_2458ebb6 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d034f30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__FLiveLinkBaseDataStruct_UFLiveLinkBaseFrameData_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkCustomTimeStep____A6AXAEBV__FLiveLinkBaseDataStruct_UFLiveLinkBaseFrameData_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_2458ebb6 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d034fe0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkCustomTimeStep____A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_bdbd9f6e *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d035070

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkCustomTimeStep____A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_bdbd9f6e *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d0350c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkCustomTimeStep____A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_bdbd9f6e *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d035170

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkCustomTimeStep____A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_89d7b50e *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d035200

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkCustomTimeStep____A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_89d7b50e *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d035250

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkCustomTimeStep____A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_89d7b50e *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d035300

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkTimeSynchronizationSource____A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a312ab9c *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d035390

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkTimeSynchronizationSource____A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a312ab9c *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d0353e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkTimeSynchronizationSource____A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a312ab9c *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d035490

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__FLiveLinkBaseDataStruct_UFLiveLinkBaseFrameData_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkTimecodeProvider____A6AXAEBV__FLiveLinkBaseDataStruct_UFLiveLinkBaseFrameData_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_7a55b853 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d035520

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__FLiveLinkBaseDataStruct_UFLiveLinkBaseFrameData_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkTimecodeProvider____A6AXAEBV__FLiveLinkBaseDataStruct_UFLiveLinkBaseFrameData_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_7a55b853 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d035570

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__FLiveLinkBaseDataStruct_UFLiveLinkBaseFrameData_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkTimecodeProvider____A6AXAEBV__FLiveLinkBaseDataStruct_UFLiveLinkBaseFrameData_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_7a55b853 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d035620

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkTimecodeProvider____A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_1bc38e4b *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d0356b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkTimecodeProvider____A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_1bc38e4b *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d035700

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkTimecodeProvider____A6AXAEBVFName__PEAVIModularFeature___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_1bc38e4b *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d0357b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkTimecodeProvider____A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_cfbba92b *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d035840

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkTimecodeProvider____A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_cfbba92b *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d035890

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULiveLinkTimecodeProvider____A6AXUFLiveLinkSubjectKey___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_cfbba92b *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d03da80

void __thiscall
TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::Execute(TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
          *this,TSharedPtr<FProviderPollResult,1> *param_1)

{
  pmf_f0e894ac pVar1;
  ULiveLinkMessageBusSourceFactory *pUVar2;
  TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy> *pTVar3;
  UObject *local_res8;
  FProviderPollResult *local_38;
  TReferenceControllerBase<1> *local_30;
  TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy> local_28
  ;
  
  local_res8 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<ULiveLinkMessageBusSourceFactory,ULiveLinkMessageBusSourceFactory_*_&>
                     ((ULiveLinkMessageBusSourceFactory **)&local_res8);
  pVar1 = this->MethodPtr;
  pTVar3 = TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
           ::
           TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                     (&local_28,
                      (TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                       *)&this->_padding_);
  local_38 = param_1->Object;
  local_30 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FProviderPollResult *)0x0;
  (*(code *)pVar1)(pUVar2,&local_38,pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 14d03db20

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
          *this,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_1)

{
  ULiveLinkCustomTimeStep *pUVar1;
  ULiveLinkCustomTimeStep *local_res8;
  
  local_res8 = (ULiveLinkCustomTimeStep *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<ULiveLinkCustomTimeStep,ULiveLinkCustomTimeStep_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 14d03db70

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
          *this,FName *param_1,IModularFeature *param_2)

{
  ULiveLinkCustomTimeStep *pUVar1;
  ULiveLinkCustomTimeStep *local_res8;
  
  local_res8 = (ULiveLinkCustomTimeStep *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<ULiveLinkCustomTimeStep,ULiveLinkCustomTimeStep_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2);
  return;
}

// Execute @ 14d03dbd0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
          *this,FLiveLinkSubjectKey *param_1)

{
  ULiveLinkCustomTimeStep *pUVar1;
  ULiveLinkCustomTimeStep *local_res8;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  FName local_18;
  
  local_res8 = (ULiveLinkCustomTimeStep *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<ULiveLinkCustomTimeStep,ULiveLinkCustomTimeStep_*_&>(&local_res8);
  local_28 = (param_1->Source).A;
  uStack_24 = (param_1->Source).B;
  uStack_20 = (param_1->Source).C;
  uStack_1c = (param_1->Source).D;
  local_18 = (param_1->SubjectName).Name;
  (*(code *)this->MethodPtr)(pUVar1,&local_28);
  return;
}

// Execute @ 14d03dc30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
          *this,FName *param_1,IModularFeature *param_2)

{
  ULiveLinkTimeSynchronizationSource *pUVar1;
  ULiveLinkTimeSynchronizationSource *local_res8;
  
  local_res8 = (ULiveLinkTimeSynchronizationSource *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<ULiveLinkTimeSynchronizationSource,ULiveLinkTimeSynchronizationSource_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2);
  return;
}

// Execute @ 14d03dc90

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
          *this,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_1)

{
  ULiveLinkTimecodeProvider *pUVar1;
  ULiveLinkTimecodeProvider *local_res8;
  
  local_res8 = (ULiveLinkTimecodeProvider *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<ULiveLinkTimecodeProvider,ULiveLinkTimecodeProvider_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 14d03dce0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
          *this,FName *param_1,IModularFeature *param_2)

{
  ULiveLinkTimecodeProvider *pUVar1;
  ULiveLinkTimecodeProvider *local_res8;
  
  local_res8 = (ULiveLinkTimecodeProvider *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<ULiveLinkTimecodeProvider,ULiveLinkTimecodeProvider_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2);
  return;
}

// Execute @ 14d03dd40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
          *this,FLiveLinkSubjectKey *param_1)

{
  ULiveLinkTimecodeProvider *pUVar1;
  ULiveLinkTimecodeProvider *local_res8;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  FName local_18;
  
  local_res8 = (ULiveLinkTimecodeProvider *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<ULiveLinkTimecodeProvider,ULiveLinkTimecodeProvider_*_&>
                     (&local_res8);
  local_28 = (param_1->Source).A;
  uStack_24 = (param_1->Source).B;
  uStack_20 = (param_1->Source).C;
  uStack_1c = (param_1->Source).D;
  local_18 = (param_1->SubjectName).Name;
  (*(code *)this->MethodPtr)(pUVar1,&local_28);
  return;
}

// ExecuteIfSafe @ 14d03f070

/* WARNING: Removing unreachable block (ram,0x00014d03f0e5) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
                *this,TSharedPtr<FProviderPollResult,1> *param_1)

{
  pmf_f0e894ac pVar1;
  bool bVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  UObject *pUVar4;
  ULiveLinkMessageBusSourceFactory *pUVar5;
  TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy> *pTVar6;
  UObject *pUVar7;
  ULiveLinkMessageBusSourceFactory *local_res8;
  FProviderPollResult *local_58;
  TReferenceControllerBase<1> *local_50;
  TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy> local_48
  ;
  
  pUVar7 = (UObject *)0x0;
  bVar2 = IsInGameThread();
  if (bVar2) {
    local_res8 = (ULiveLinkMessageBusSourceFactory *)0x0;
  }
  else {
    TVar3 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar7 = *TVar3.Object;
    *(undefined8 *)TVar3.Object = 0;
    if (local_res8 != (ULiveLinkMessageBusSourceFactory *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar4 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar4 != (UObject *)0x0) {
    local_res8 = (ULiveLinkMessageBusSourceFactory *)pUVar4;
    pUVar5 = UE::Core::Private::
             DereferenceIfNecessary<ULiveLinkMessageBusSourceFactory,ULiveLinkMessageBusSourceFactory_*_&>
                       (&local_res8);
    pVar1 = this->MethodPtr;
    pTVar6 = TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
             ::
             TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                       (&local_48,
                        (TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                         *)&this->_padding_);
    local_58 = param_1->Object;
    local_50 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FProviderPollResult *)0x0;
    (*(code *)pVar1)(pUVar5,&local_58,pTVar6);
    if (pUVar7 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar7);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
  if (pUVar7 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar7);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfSafe @ 14d03f1c0

/* WARNING: Removing unreachable block (ram,0x00014d03f22e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
                *this,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  ULiveLinkCustomTimeStep *pUVar3;
  ULiveLinkCustomTimeStep *pUVar4;
  UObject *pUVar5;
  ULiveLinkCustomTimeStep *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (ULiveLinkCustomTimeStep *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (ULiveLinkCustomTimeStep *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (ULiveLinkCustomTimeStep *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (ULiveLinkCustomTimeStep *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<ULiveLinkCustomTimeStep,ULiveLinkCustomTimeStep_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (ULiveLinkCustomTimeStep *)0x0;
}

// ExecuteIfSafe @ 14d03f2a0

/* WARNING: Removing unreachable block (ram,0x00014d03f316) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
                *this,FName *param_1,IModularFeature *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  ULiveLinkCustomTimeStep *pUVar3;
  ULiveLinkCustomTimeStep *pUVar4;
  UObject *pUVar5;
  ULiveLinkCustomTimeStep *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (ULiveLinkCustomTimeStep *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (ULiveLinkCustomTimeStep *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (ULiveLinkCustomTimeStep *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (ULiveLinkCustomTimeStep *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<ULiveLinkCustomTimeStep,ULiveLinkCustomTimeStep_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (ULiveLinkCustomTimeStep *)0x0;
}

// ExecuteIfSafe @ 14d03f390

/* WARNING: Removing unreachable block (ram,0x00014d03f3fe) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
                *this,FLiveLinkSubjectKey *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  ULiveLinkCustomTimeStep *pUVar3;
  ULiveLinkCustomTimeStep *pUVar4;
  UObject *pUVar5;
  ULiveLinkCustomTimeStep *local_res8;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  FName local_28;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (ULiveLinkCustomTimeStep *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (ULiveLinkCustomTimeStep *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (ULiveLinkCustomTimeStep *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (ULiveLinkCustomTimeStep *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<ULiveLinkCustomTimeStep,ULiveLinkCustomTimeStep_*_&>
                       (&local_res8);
    local_38 = (param_1->Source).A;
    uStack_34 = (param_1->Source).B;
    uStack_30 = (param_1->Source).C;
    uStack_2c = (param_1->Source).D;
    local_28 = (param_1->SubjectName).Name;
    (*(code *)this->MethodPtr)(pUVar4,&local_38);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (ULiveLinkCustomTimeStep *)0x0;
}

// ExecuteIfSafe @ 14d03f480

/* WARNING: Removing unreachable block (ram,0x00014d03f4f6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
                *this,FName *param_1,IModularFeature *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  ULiveLinkTimeSynchronizationSource *pUVar3;
  ULiveLinkTimeSynchronizationSource *pUVar4;
  UObject *pUVar5;
  ULiveLinkTimeSynchronizationSource *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (ULiveLinkTimeSynchronizationSource *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (ULiveLinkTimeSynchronizationSource *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (ULiveLinkTimeSynchronizationSource *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (ULiveLinkTimeSynchronizationSource *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<ULiveLinkTimeSynchronizationSource,ULiveLinkTimeSynchronizationSource_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (ULiveLinkTimeSynchronizationSource *)0x0;
}

// ExecuteIfSafe @ 14d03f570

/* WARNING: Removing unreachable block (ram,0x00014d03f5de) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
                *this,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  ULiveLinkTimecodeProvider *pUVar3;
  ULiveLinkTimecodeProvider *pUVar4;
  UObject *pUVar5;
  ULiveLinkTimecodeProvider *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (ULiveLinkTimecodeProvider *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (ULiveLinkTimecodeProvider *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (ULiveLinkTimecodeProvider *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (ULiveLinkTimecodeProvider *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<ULiveLinkTimecodeProvider,ULiveLinkTimecodeProvider_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (ULiveLinkTimecodeProvider *)0x0;
}

// ExecuteIfSafe @ 14d03f650

/* WARNING: Removing unreachable block (ram,0x00014d03f6c6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
                *this,FName *param_1,IModularFeature *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  ULiveLinkTimecodeProvider *pUVar3;
  ULiveLinkTimecodeProvider *pUVar4;
  UObject *pUVar5;
  ULiveLinkTimecodeProvider *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (ULiveLinkTimecodeProvider *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (ULiveLinkTimecodeProvider *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (ULiveLinkTimecodeProvider *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (ULiveLinkTimecodeProvider *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<ULiveLinkTimecodeProvider,ULiveLinkTimecodeProvider_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (ULiveLinkTimecodeProvider *)0x0;
}

// ExecuteIfSafe @ 14d03f740

/* WARNING: Removing unreachable block (ram,0x00014d03f7ae) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
                *this,FLiveLinkSubjectKey *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  ULiveLinkTimecodeProvider *pUVar3;
  ULiveLinkTimecodeProvider *pUVar4;
  UObject *pUVar5;
  ULiveLinkTimecodeProvider *local_res8;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  FName local_28;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (ULiveLinkTimecodeProvider *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (ULiveLinkTimecodeProvider *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (ULiveLinkTimecodeProvider *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (ULiveLinkTimecodeProvider *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<ULiveLinkTimecodeProvider,ULiveLinkTimecodeProvider_*_&>
                       (&local_res8);
    local_38 = (param_1->Source).A;
    uStack_34 = (param_1->Source).B;
    uStack_30 = (param_1->Source).C;
    uStack_2c = (param_1->Source).D;
    local_28 = (param_1->SubjectName).Name;
    (*(code *)this->MethodPtr)(pUVar4,&local_38);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (ULiveLinkTimecodeProvider *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14d049ca0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d049cb0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d049cc0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d049cd0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d049ce0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d049cf0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d049d00

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d049d10

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14d050da0

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14d050db0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14d050dc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14d050dd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14d050de0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14d050df0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14d050e00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14d050e10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14d057e00

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14d057e10

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14d057e20

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14d057e30

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14d057e40

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14d057e50

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14d057e60

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14d057e70

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14d05a5f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14d05a620

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14d05a650

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14d05a680

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14d05a6b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14d05a6e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14d05a710

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14d05a740

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14d05ea50

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::IsCompactable(TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14d05ea70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14d05ea90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14d05eab0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14d05ead0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14d05eaf0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14d05eb10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14d05eb30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14d05ff30

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14d05ff50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14d05ff70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14d05ff90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14d05ffb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14d05ffd0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14d05fff0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14d060010

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14d083fa0

FName __thiscall
TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<1,ULiveLinkMessageBusSourceFactory_const_,void___cdecl(TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d083fb0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d083fc0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d083fd0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkCustomTimeStep,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d083fe0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimeSynchronizationSource,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d083ff0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d084000

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d084010

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,ULiveLinkTimecodeProvider,void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

