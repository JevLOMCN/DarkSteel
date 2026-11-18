// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 77

// CreateCopy @ 146910f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy__U__TComponentTypeID_PEAVUObject___MovieScene_UE__U__TComponentTypeID_VFWidgetMaterialHandle___45___6B_
    ;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__TMovieSceneMaterialSystem_UFWidgetMaterialAccessor_MovieScene_UE__PEAVUObject__VFWidgetMaterialHandle___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy__U__TComponentTypeID_PEAVUObject___23_U__TComponentTypeID_VFWidgetMaterialHandle___23___6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b7e4b4f4 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146911010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy__U__TComponentTypeID_PEAVUObject___MovieScene_UE__U__TComponentTypeID_VFWidgetMaterialHandle___45___6B_
    ;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__TMovieSceneMaterialSystem_UFWidgetMaterialAccessor_MovieScene_UE__PEAVUObject__VFWidgetMaterialHandle___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy__U__TComponentTypeID_PEAVUObject___23_U__TComponentTypeID_VFWidgetMaterialHandle___23___6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b7e4b4f4 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146911070

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy__U__TComponentTypeID_PEAVUObject___MovieScene_UE__U__TComponentTypeID_VFWidgetMaterialHandle___45___6B_
    ;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__TMovieSceneMaterialSystem_UFWidgetMaterialAccessor_MovieScene_UE__PEAVUObject__VFWidgetMaterialHandle___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy__U__TComponentTypeID_PEAVUObject___23_U__TComponentTypeID_VFWidgetMaterialHandle___23___6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_b7e4b4f4 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146916580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
::Execute(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
          *this,UMovieSceneEntitySystemLinker *param_1)

{
  TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
  *pTVar1;
  TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
  *local_res8;
  
  local_res8 = this->UserObject;
  pTVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)
            (pTVar1,param_1,(short)this->_padding_,*(undefined2 *)((longlong)&this->_padding_ + 2));
  return;
}

// ExecuteIfSafe @ 146916eb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
                *this,UMovieSceneEntitySystemLinker *param_1)

{
  TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
  *pTVar1;
  TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
  *local_res8;
  
  local_res8 = this->UserObject;
  pTVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)
            (pTVar1,param_1,(short)this->_padding_,*(undefined2 *)((longlong)&this->_padding_ + 2));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14691dc70

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14691ff30

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 146925130

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146928ec0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14692cc20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1469493f0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FWidgetMaterialHandle>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1469b3340

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_PEAVUObject___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_PEAVUObject___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_PEAVUObject___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_ae9b6b15 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b33d0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_PEAVUObject___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_PEAVUObject___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_PEAVUObject___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_ae9b6b15 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1469b3420

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_PEAVUObject___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_PEAVUObject___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_PEAVUObject___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_ae9b6b15 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b34d0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_VFName___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_VFName___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_VFName___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_7d62eed5 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b3560

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_VFName___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_VFName___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_VFName___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_7d62eed5 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1469b35b0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_VFName___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FObservableArrayPointer_VFName___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_VFName___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_7d62eed5 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b3660

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_PEAVUObject___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_PEAVUObject___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_PEAVUObject___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b6cf61f7 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b36f0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_PEAVUObject___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_PEAVUObject___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_PEAVUObject___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b6cf61f7 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1469b3740

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_PEAVUObject___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_PEAVUObject___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_PEAVUObject___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_b6cf61f7 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b37f0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_VFName___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_VFName___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_VFName___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_87de3803 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b3880

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_VFName___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_VFName___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_VFName___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_87de3803 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1469b38d0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_VFName___Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__FSharedObservableArray_VFName___ItemsSource_Slate_UE____A6AXU__TObservableArrayChangedArgs_VFName___Containers_34__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_87de3803 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1469bf410

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
          *this,TObservableArrayChangedArgs<UObject_*> *param_1)

{
  FObservableArrayPointer<UObject_*> *pFVar1;
  FObservableArrayPointer<UObject_*> *local_res8;
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
           DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>_*_&>
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

// Execute @ 1469bf470

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
          *this,TObservableArrayChangedArgs<FName> *param_1)

{
  FObservableArrayPointer<FName> *pFVar1;
  FObservableArrayPointer<FName> *local_res8;
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
           DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<FName>,UE::Slate::ItemsSource::FObservableArrayPointer<FName>_*_&>
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

// Execute @ 1469bf4d0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
          *this,TObservableArrayChangedArgs<UObject_*> *param_1)

{
  FSharedObservableArray<UObject_*> *pFVar1;
  FSharedObservableArray<UObject_*> *local_res8;
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
           DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>_*_&>
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

// Execute @ 1469bf530

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
          *this,TObservableArrayChangedArgs<FName> *param_1)

{
  FSharedObservableArray<FName> *pFVar1;
  FSharedObservableArray<FName> *local_res8;
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
           DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<FName>,UE::Slate::ItemsSource::FSharedObservableArray<FName>_*_&>
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

// ExecuteIfSafe @ 1469c1f30

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
                *this,TObservableArrayChangedArgs<UObject_*> *param_1)

{
  FObservableArrayPointer<UObject_*> *pFVar1;
  FObservableArrayPointer<UObject_*> *local_res8;
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
           DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>_*_&>
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

// ExecuteIfSafe @ 1469c1f90

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
                *this,TObservableArrayChangedArgs<FName> *param_1)

{
  FObservableArrayPointer<FName> *pFVar1;
  FObservableArrayPointer<FName> *local_res8;
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
           DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<FName>,UE::Slate::ItemsSource::FObservableArrayPointer<FName>_*_&>
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

// ExecuteIfSafe @ 1469c1ff0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
                *this,TObservableArrayChangedArgs<UObject_*> *param_1)

{
  FSharedObservableArray<UObject_*> *pFVar1;
  FSharedObservableArray<UObject_*> *local_res8;
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
           DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>_*_&>
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

// ExecuteIfSafe @ 1469c2050

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
                *this,TObservableArrayChangedArgs<FName> *param_1)

{
  FSharedObservableArray<FName> *pFVar1;
  FSharedObservableArray<FName> *local_res8;
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
           DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<FName>,UE::Slate::ItemsSource::FSharedObservableArray<FName>_*_&>
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

// GetBoundProgramCounterForTimerManager @ 1469cd9e0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1469cd9f0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1469cda00

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1469cda10

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 1469d2270

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 1469d2280

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 1469d2290

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 1469d22a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 1469d9120

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1469d9130

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1469d9140

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1469d9150

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1469de3e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1469de3f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1469de400

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1469de410

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 1469e2960

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1469e2970

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1469e2980

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1469e2990

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146a2a870

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2a880

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2a890

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<UObject_*>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2a8a0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<FName>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<FName>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 146a682e0

void __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VSRetainerWidget____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146a68370

void __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VSRetainerWidget____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146a683c0

void __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VSRetainerWidget____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146a68470

void __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VSRetainerWidget____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146a68500

void __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VSRetainerWidget____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146a68550

void __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VSRetainerWidget____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
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

// Execute @ 146a70700

void __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  SRetainerWidget *pSVar1;
  SRetainerWidget *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pSVar1 = UE::Core::Private::DereferenceIfNecessary<SRetainerWidget,SRetainerWidget_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)(&pSVar1->field_0x0 + *(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 146a70740

void __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>::
Execute(TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
        *this,bool param_1)

{
  SRetainerWidget *pSVar1;
  SRetainerWidget *local_res8;
  
  local_res8 = this->UserObject;
  pSVar1 = UE::Core::Private::DereferenceIfNecessary<SRetainerWidget,SRetainerWidget_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)(&pSVar1->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// ExecuteIfSafe @ 146a70ad0

bool __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  SRetainerWidget *pSVar1;
  SRetainerWidget *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pSVar1 = UE::Core::Private::DereferenceIfNecessary<SRetainerWidget,SRetainerWidget_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)(&pSVar1->field_0x0 + *(int *)&(this->MethodPtr).field_0x8);
  return true;
}

// ExecuteIfSafe @ 146a70b10

bool __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
              *this,bool param_1)

{
  SRetainerWidget *pSVar1;
  SRetainerWidget *local_res8;
  
  local_res8 = this->UserObject;
  pSVar1 = UE::Core::Private::DereferenceIfNecessary<SRetainerWidget,SRetainerWidget_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)(&pSVar1->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 146a733f0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146a73400

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 146a77450

void * __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 146a77460

void * __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 146a79670

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146a79680

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>::
GetUObject(TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146a79f30

bool __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 146a79f40

bool __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 146a7c5f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 146a7c600

bool __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146a99c50

FName __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a99c60

FName __thiscall
TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,SRetainerWidget,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

