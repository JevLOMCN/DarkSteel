// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 22

// CreateCopy @ 14619aa80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneEntitySystemLinker__AEAVFReferenceCollector___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFPreAnimatedStateExtension_MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker__AEAVFReferenceCollector___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_bae92cd5 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14619ab10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneEntitySystemLinker__AEAVFReferenceCollector___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFPreAnimatedStateExtension_MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker__AEAVFReferenceCollector___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_bae92cd5 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14619ab60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneEntitySystemLinker__AEAVFReferenceCollector___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFPreAnimatedStateExtension_MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker__AEAVFReferenceCollector___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_bae92cd5 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1461a4640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
          *this,UMovieSceneEntitySystemLinker *param_1,FReferenceCollector *param_2)

{
  FPreAnimatedStateExtension *pFVar1;
  FPreAnimatedStateExtension *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::MovieScene::FPreAnimatedStateExtension,UE::MovieScene::FPreAnimatedStateExtension_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return;
}

// ExecuteIfSafe @ 1461a4790

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
                *this,UMovieSceneEntitySystemLinker *param_1,FReferenceCollector *param_2)

{
  FPreAnimatedStateExtension *pFVar1;
  FPreAnimatedStateExtension *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::MovieScene::FPreAnimatedStateExtension,UE::MovieScene::FPreAnimatedStateExtension_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1461b0630

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 1461b1a50

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 1461b48e0

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1461b5600

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 1461bbe60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1461da750

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::FPreAnimatedStateExtension,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14620cc20

void __thiscall
TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_UFCachedLegacyConversionFrameRate____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_ecdecdcb *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14620ccb0

void __thiscall
TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFCachedLegacyConversionFrameRate____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_ecdecdcb *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14620cd00

void __thiscall
TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_UFCachedLegacyConversionFrameRate____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_ecdecdcb *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14620fc80

void __thiscall
TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FCachedLegacyConversionFrameRate *pFVar1;
  FCachedLegacyConversionFrameRate *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FCachedLegacyConversionFrameRate,FCachedLegacyConversionFrameRate_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// ExecuteIfSafe @ 14620ffa0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FCachedLegacyConversionFrameRate *pFVar1;
  FCachedLegacyConversionFrameRate *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FCachedLegacyConversionFrameRate,FCachedLegacyConversionFrameRate_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1462171c0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 146219d60

void * __thiscall
TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14621dbe0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14621dfd0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 1462227a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14623a090

FName __thiscall
TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FCachedLegacyConversionFrameRate,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

