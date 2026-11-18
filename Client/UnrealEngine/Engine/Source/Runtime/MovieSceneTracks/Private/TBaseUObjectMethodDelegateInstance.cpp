// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 36

// CreateCopy @ 146654970

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFPropertyRecomposerPropertyInfo_MovieScene_UE__UFMovieSceneEntityID_23_PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUMovieSceneInterrogatedPropertyInstantiatorSystem____A6A_AUFPropertyRecomposerPropertyInfo_MovieScene_UE__UFMovieSceneEntityID_34_PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_b713e9d4 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146654a00

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFPropertyRecomposerPropertyInfo_MovieScene_UE__UFMovieSceneEntityID_23_PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUMovieSceneInterrogatedPropertyInstantiatorSystem____A6A_AUFPropertyRecomposerPropertyInfo_MovieScene_UE__UFMovieSceneEntityID_34_PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_b713e9d4 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146654a50

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFPropertyRecomposerPropertyInfo_MovieScene_UE__UFMovieSceneEntityID_23_PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUMovieSceneInterrogatedPropertyInstantiatorSystem____A6A_AUFPropertyRecomposerPropertyInfo_MovieScene_UE__UFMovieSceneEntityID_34_PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_b713e9d4 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146669ce0

FPropertyRecomposerPropertyInfo * __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
          *this,FPropertyRecomposerPropertyInfo *__return_storage_ptr__,FMovieSceneEntityID param_1,
         UObject *param_2)

{
  undefined8 uVar1;
  UMovieSceneBlenderSystem *pUVar2;
  UMovieSceneInterrogatedPropertyInstantiatorSystem *pUVar3;
  undefined8 *puVar4;
  UMovieSceneInterrogatedPropertyInstantiatorSystem *local_res8;
  undefined1 local_28 [32];
  
  local_res8 = (UMovieSceneInterrogatedPropertyInstantiatorSystem *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar3 = UE::Core::Private::
           DereferenceIfNecessary<UMovieSceneInterrogatedPropertyInstantiatorSystem,UMovieSceneInterrogatedPropertyInstantiatorSystem_*_&>
                     (&local_res8);
  puVar4 = (undefined8 *)(*(code *)this->MethodPtr)(pUVar3,local_28,param_1.Value,param_2);
  pUVar2 = (UMovieSceneBlenderSystem *)puVar4[1];
  uVar1 = puVar4[2];
  *(undefined8 *)__return_storage_ptr__ = *puVar4;
  __return_storage_ptr__->BlenderSystem = pUVar2;
  *(undefined8 *)&__return_storage_ptr__->PropertyEntityID = uVar1;
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 14666ae40

/* WARNING: Removing unreachable block (ram,0x00014666ae7c) */
/* WARNING: Removing unreachable block (ram,0x00014666aec6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
                *this,FMovieSceneEntityID param_1,UObject *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMovieSceneInterrogatedPropertyInstantiatorSystem *pUVar3;
  UMovieSceneInterrogatedPropertyInstantiatorSystem *pUVar4;
  UObject *pUVar5;
  UMovieSceneInterrogatedPropertyInstantiatorSystem *local_res8;
  undefined1 local_48 [32];
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMovieSceneInterrogatedPropertyInstantiatorSystem *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMovieSceneInterrogatedPropertyInstantiatorSystem *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UMovieSceneInterrogatedPropertyInstantiatorSystem *)
           FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMovieSceneInterrogatedPropertyInstantiatorSystem *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMovieSceneInterrogatedPropertyInstantiatorSystem,UMovieSceneInterrogatedPropertyInstantiatorSystem_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,local_48,param_1.Value,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMovieSceneInterrogatedPropertyInstantiatorSystem *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 1466894c0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14668cbd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146699d20

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14669b500

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 1466a5c20

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 1466a5d20

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 1466ff7e0

FName __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<1,UMovieSceneInterrogatedPropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 146823470

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFPropertyRecomposerPropertyInfo_MovieScene_UE__UFMovieSceneEntityID_23_PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUMovieScenePropertyInstantiatorSystem____A6A_AUFPropertyRecomposerPropertyInfo_MovieScene_UE__UFMovieSceneEntityID_34_PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_63ff1e74 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146823500

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFPropertyRecomposerPropertyInfo_MovieScene_UE__UFMovieSceneEntityID_23_PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUMovieScenePropertyInstantiatorSystem____A6A_AUFPropertyRecomposerPropertyInfo_MovieScene_UE__UFMovieSceneEntityID_34_PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_63ff1e74 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146823550

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFPropertyRecomposerPropertyInfo_MovieScene_UE__UFMovieSceneEntityID_23_PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUMovieScenePropertyInstantiatorSystem____A6A_AUFPropertyRecomposerPropertyInfo_MovieScene_UE__UFMovieSceneEntityID_34_PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_63ff1e74 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146823600

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieScenePostEvalEventSystem____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d8045f66 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146823690

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieScenePostEvalEventSystem____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d8045f66 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1468236e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieScenePostEvalEventSystem____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d8045f66 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146828a50

FPropertyRecomposerPropertyInfo * __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
          *this,FPropertyRecomposerPropertyInfo *__return_storage_ptr__,FMovieSceneEntityID param_1,
         UObject *param_2)

{
  undefined8 uVar1;
  UMovieSceneBlenderSystem *pUVar2;
  UMovieScenePropertyInstantiatorSystem *pUVar3;
  undefined8 *puVar4;
  UMovieScenePropertyInstantiatorSystem *local_res8;
  undefined1 local_28 [32];
  
  local_res8 = (UMovieScenePropertyInstantiatorSystem *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar3 = UE::Core::Private::
           DereferenceIfNecessary<UMovieScenePropertyInstantiatorSystem,UMovieScenePropertyInstantiatorSystem_*_&>
                     (&local_res8);
  puVar4 = (undefined8 *)(*(code *)this->MethodPtr)(pUVar3,local_28,param_1.Value,param_2);
  pUVar2 = (UMovieSceneBlenderSystem *)puVar4[1];
  uVar1 = puVar4[2];
  *(undefined8 *)__return_storage_ptr__ = *puVar4;
  __return_storage_ptr__->BlenderSystem = pUVar2;
  *(undefined8 *)&__return_storage_ptr__->PropertyEntityID = uVar1;
  return __return_storage_ptr__;
}

// Execute @ 146828ae0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UMovieScenePostEvalEventSystem *pUVar1;
  UMovieScenePostEvalEventSystem *local_res8 [4];
  
  local_res8[0] = (UMovieScenePostEvalEventSystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr)
  ;
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMovieScenePostEvalEventSystem,UMovieScenePostEvalEventSystem_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// ExecuteIfSafe @ 146828c90

/* WARNING: Removing unreachable block (ram,0x000146828ccc) */
/* WARNING: Removing unreachable block (ram,0x000146828d16) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
                *this,FMovieSceneEntityID param_1,UObject *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMovieScenePropertyInstantiatorSystem *pUVar3;
  UMovieScenePropertyInstantiatorSystem *pUVar4;
  UObject *pUVar5;
  UMovieScenePropertyInstantiatorSystem *local_res8;
  undefined1 local_48 [32];
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMovieScenePropertyInstantiatorSystem *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMovieScenePropertyInstantiatorSystem *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UMovieScenePropertyInstantiatorSystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr)
  ;
  if (pUVar3 != (UMovieScenePropertyInstantiatorSystem *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMovieScenePropertyInstantiatorSystem,UMovieScenePropertyInstantiatorSystem_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,local_48,param_1.Value,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMovieScenePropertyInstantiatorSystem *)0x0;
}

// ExecuteIfSafe @ 146828d90

/* WARNING: Removing unreachable block (ram,0x000146828df6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMovieScenePostEvalEventSystem *pUVar3;
  UMovieScenePostEvalEventSystem *pUVar4;
  UObject *pUVar5;
  UMovieScenePostEvalEventSystem *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMovieScenePostEvalEventSystem *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMovieScenePostEvalEventSystem *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMovieScenePostEvalEventSystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMovieScenePostEvalEventSystem *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMovieScenePostEvalEventSystem,UMovieScenePostEvalEventSystem_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMovieScenePostEvalEventSystem *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 146834440

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146834450

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 146834bb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146834bc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 1468381f0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146838200

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 1468392c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 1468392f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14683ef60

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14683ef80

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14683f8c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14683f8e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14686f500

FName __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<1,UMovieScenePropertyInstantiatorSystem_const_,UE::MovieScene::FPropertyRecomposerPropertyInfo___cdecl(UE::MovieScene::FMovieSceneEntityID,UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14686f510

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMovieScenePostEvalEventSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

