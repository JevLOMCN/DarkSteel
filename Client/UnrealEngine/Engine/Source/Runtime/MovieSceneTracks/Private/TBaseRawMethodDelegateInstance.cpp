// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 99

// CreateCopy @ 146785c60

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_UFAnimatedCustomPrimitiveDataInfo_MovieScene_UE__UFObjectKey__VFName___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_15ec5eb3 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146785cf0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_UFAnimatedCustomPrimitiveDataInfo_MovieScene_UE__UFObjectKey__VFName___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_15ec5eb3 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146785d40

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_UFAnimatedCustomPrimitiveDataInfo_MovieScene_UE__UFObjectKey__VFName___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_15ec5eb3 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146785df0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_UFAnimatedCustomPrimitiveDataInfo_MovieScene_UE__UFObjectKey__VFName___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker__AEAVFReferenceCollector___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_cf5c7f27 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146785e80

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_UFAnimatedCustomPrimitiveDataInfo_MovieScene_UE__UFObjectKey__VFName___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker__AEAVFReferenceCollector___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_cf5c7f27 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146785ed0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_UFAnimatedCustomPrimitiveDataInfo_MovieScene_UE__UFObjectKey__VFName___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker__AEAVFReferenceCollector___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_cf5c7f27 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146785f80

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_UFPreAnimAttachment_MovieScene_UE__UFObjectKey___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_d97fbea4 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146786010

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_UFPreAnimAttachment_MovieScene_UE__UFObjectKey___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_d97fbea4 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146786060

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_UFPreAnimAttachment_MovieScene_UE__UFObjectKey___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_d97fbea4 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146786110

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_UFPreAnimAttachment_MovieScene_UE__UFObjectKey___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker__AEAVFReferenceCollector___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_8b72b718 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1467861a0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_UFPreAnimAttachment_MovieScene_UE__UFObjectKey___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker__AEAVFReferenceCollector___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_8b72b718 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1467861f0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_UFPreAnimAttachment_MovieScene_UE__UFObjectKey___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker__AEAVFReferenceCollector___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_8b72b718 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1467862a0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_W4Type_EComponentMobility__UFObjectKey___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146786330

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_W4Type_EComponentMobility__UFObjectKey___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 146786380

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_W4Type_EComponentMobility__UFObjectKey___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146786430

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_W4Type_EComponentMobility__UFObjectKey___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker__AEAVFReferenceCollector___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1467864c0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneEntitySystemLinker__AEAVFReferenceCollector___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_W4Type_EComponentMobility__UFObjectKey___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker__AEAVFReferenceCollector___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 146786510

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_W4Type_EComponentMobility__UFObjectKey___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker__AEAVFReferenceCollector___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1467865c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy__U__TComponentTypeID_PEAVUObject___MovieScene_UE__U__TComponentTypeID_UFComponentMaterialInfo___45___6B_
    ;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__TMovieSceneMaterialSystem_UFComponentMaterialAccessor_MovieScene_UE__PEAVUObject__UFComponentMaterialInfo___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy__U__TComponentTypeID_PEAVUObject___23_U__TComponentTypeID_UFComponentMaterialInfo___23___6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_f5c4d515 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146786650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy__U__TComponentTypeID_PEAVUObject___MovieScene_UE__U__TComponentTypeID_UFComponentMaterialInfo___45___6B_
    ;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__TMovieSceneMaterialSystem_UFComponentMaterialAccessor_MovieScene_UE__PEAVUObject__UFComponentMaterialInfo___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy__U__TComponentTypeID_PEAVUObject___23_U__TComponentTypeID_UFComponentMaterialInfo___23___6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_f5c4d515 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1467866b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy__U__TComponentTypeID_PEAVUObject___MovieScene_UE__U__TComponentTypeID_UFComponentMaterialInfo___45___6B_
    ;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_V__TMovieSceneMaterialSystem_UFComponentMaterialAccessor_MovieScene_UE__PEAVUObject__UFComponentMaterialInfo___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy__U__TComponentTypeID_PEAVUObject___23_U__TComponentTypeID_UFComponentMaterialInfo___23___6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_f5c4d515 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14678cb00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
          *this,UMovieSceneEntitySystemLinker *param_1)

{
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
  *pTVar1;
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
  *local_res8;
  
  local_res8 = this->UserObject;
  pTVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pTVar1,param_1);
  return;
}

// Execute @ 14678cb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
          *this,UMovieSceneEntitySystemLinker *param_1,FReferenceCollector *param_2)

{
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
  *pTVar1;
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
  *local_res8;
  
  local_res8 = this->UserObject;
  pTVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pTVar1,param_1,param_2);
  return;
}

// Execute @ 14678cbb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
          *this,UMovieSceneEntitySystemLinker *param_1)

{
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey> *pTVar1;
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey> *local_res8;
  
  local_res8 = this->UserObject;
  pTVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pTVar1,param_1);
  return;
}

// Execute @ 14678cc00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
          *this,UMovieSceneEntitySystemLinker *param_1,FReferenceCollector *param_2)

{
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey> *pTVar1;
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey> *local_res8;
  
  local_res8 = this->UserObject;
  pTVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pTVar1,param_1,param_2);
  return;
}

// Execute @ 14678cc60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::Execute(void *this,UMovieSceneEntitySystemLinker *param_1)

{
  TOverlappingEntityTracker_WithGarbage<EComponentMobility::Type,FObjectKey> *pTVar1;
  TOverlappingEntityTracker_WithGarbage<EComponentMobility::Type,FObjectKey> *local_res8;
  
  local_res8 = *(TOverlappingEntityTracker_WithGarbage<EComponentMobility::Type,FObjectKey> **)
                ((longlong)this + 0x18);
  pTVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pTVar1,param_1);
  return;
}

// Execute @ 14678ccb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::Execute(void *this,UMovieSceneEntitySystemLinker *param_1,FReferenceCollector *param_2)

{
  TOverlappingEntityTracker_WithGarbage<EComponentMobility::Type,FObjectKey> *pTVar1;
  TOverlappingEntityTracker_WithGarbage<EComponentMobility::Type,FObjectKey> *local_res8;
  
  local_res8 = *(TOverlappingEntityTracker_WithGarbage<EComponentMobility::Type,FObjectKey> **)
                ((longlong)this + 0x18);
  pTVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pTVar1,param_1,param_2);
  return;
}

// Execute @ 14678cd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
::Execute(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
          *this,UMovieSceneEntitySystemLinker *param_1)

{
  TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>
  *pTVar1;
  TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>
  *local_res8;
  
  local_res8 = this->UserObject;
  pTVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)
            (pTVar1,param_1,(short)this->_padding_,*(undefined2 *)((longlong)&this->_padding_ + 2));
  return;
}

// ExecuteIfSafe @ 14678cd80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
                *this,UMovieSceneEntitySystemLinker *param_1)

{
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
  *pTVar1;
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
  *local_res8;
  
  local_res8 = this->UserObject;
  pTVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pTVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14678cdd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
                *this,UMovieSceneEntitySystemLinker *param_1,FReferenceCollector *param_2)

{
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
  *pTVar1;
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
  *local_res8;
  
  local_res8 = this->UserObject;
  pTVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pTVar1,param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14678ce30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
                *this,UMovieSceneEntitySystemLinker *param_1)

{
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey> *pTVar1;
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey> *local_res8;
  
  local_res8 = this->UserObject;
  pTVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pTVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14678ce80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
                *this,UMovieSceneEntitySystemLinker *param_1,FReferenceCollector *param_2)

{
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey> *pTVar1;
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey> *local_res8;
  
  local_res8 = this->UserObject;
  pTVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pTVar1,param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14678cee0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,UMovieSceneEntitySystemLinker *param_1)

{
  TOverlappingEntityTracker_WithGarbage<EComponentMobility::Type,FObjectKey> *pTVar1;
  TOverlappingEntityTracker_WithGarbage<EComponentMobility::Type,FObjectKey> *local_res8;
  
  local_res8 = *(TOverlappingEntityTracker_WithGarbage<EComponentMobility::Type,FObjectKey> **)
                ((longlong)this + 0x18);
  pTVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pTVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14678cf30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,UMovieSceneEntitySystemLinker *param_1,FReferenceCollector *param_2)

{
  TOverlappingEntityTracker_WithGarbage<EComponentMobility::Type,FObjectKey> *pTVar1;
  TOverlappingEntityTracker_WithGarbage<EComponentMobility::Type,FObjectKey> *local_res8;
  
  local_res8 = *(TOverlappingEntityTracker_WithGarbage<EComponentMobility::Type,FObjectKey> **)
                ((longlong)this + 0x18);
  pTVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pTVar1,param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14678cf90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
                *this,UMovieSceneEntitySystemLinker *param_1)

{
  TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>
  *pTVar1;
  TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>
  *local_res8;
  
  local_res8 = this->UserObject;
  pTVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)
            (pTVar1,param_1,(short)this->_padding_,*(undefined2 *)((longlong)&this->_padding_ + 2));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 146794700

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146794710

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146794720

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146794730

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146794740

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 146794750

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 146794760

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 146796280

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 146796290

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 1467962a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 1467962b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 1467962c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 1467962d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 1467962e0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14679c0f0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14679c100

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14679c110

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14679c120

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14679c130

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14679c140

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14679c150

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14679cd30

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14679cd40

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14679cd50

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14679cd60

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14679cd70

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// HasSameObject @ 14679cd80

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// HasSameObject @ 14679cd90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 1467a5c20

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1467a5c30

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1467a5c40

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1467a5c50

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1467a5c60

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1467a5c70

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1467a5c80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1467c47a0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1467c47b0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1467c47c0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1467c47d0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1467c47e0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1467c47f0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1467c4800

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy,UE::MovieScene::TComponentTypeID<UObject_*>,UE::MovieScene::TComponentTypeID<FComponentMaterialInfo>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 146823150

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_UFAnimatedMaterialParameterInfo_MovieScene_UE__UFObjectComponent_23_UFMaterialParameterInfo___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_2a8ec038 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1468231e0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_UFAnimatedMaterialParameterInfo_MovieScene_UE__UFObjectComponent_23_UFMaterialParameterInfo___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_2a8ec038 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146823230

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_UFAnimatedMaterialParameterInfo_MovieScene_UE__UFObjectComponent_23_UFMaterialParameterInfo___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_2a8ec038 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1468232e0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_UFAnimatedMaterialParameterInfo_MovieScene_UE__UFObjectComponent_23_UFMaterialParameterInfo___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker__AEAVFReferenceCollector___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_be093026 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146823370

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_UFAnimatedMaterialParameterInfo_MovieScene_UE__UFObjectComponent_23_UFMaterialParameterInfo___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker__AEAVFReferenceCollector___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_be093026 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1468233c0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_U__TOverlappingEntityTracker_WithGarbage_UFAnimatedMaterialParameterInfo_MovieScene_UE__UFObjectComponent_23_UFMaterialParameterInfo___MovieScene_UE____A6AXPEAVUMovieSceneEntitySystemLinker__AEAVFReferenceCollector___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_be093026 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1468289a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
          *this,UMovieSceneEntitySystemLinker *param_1)

{
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
  *pTVar1;
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
  *local_res8;
  
  local_res8 = this->UserObject;
  pTVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pTVar1,param_1);
  return;
}

// Execute @ 1468289f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
          *this,UMovieSceneEntitySystemLinker *param_1,FReferenceCollector *param_2)

{
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
  *pTVar1;
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
  *local_res8;
  
  local_res8 = this->UserObject;
  pTVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pTVar1,param_1,param_2);
  return;
}

// ExecuteIfSafe @ 146828be0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
                *this,UMovieSceneEntitySystemLinker *param_1)

{
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
  *pTVar1;
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
  *local_res8;
  
  local_res8 = this->UserObject;
  pTVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pTVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 146828c30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
                *this,UMovieSceneEntitySystemLinker *param_1,FReferenceCollector *param_2)

{
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
  *pTVar1;
  TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
  *local_res8;
  
  local_res8 = this->UserObject;
  pTVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pTVar1,param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 146834420

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146834430

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 146834b90

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 146834ba0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 1468381d0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1468381e0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1468392a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1468392b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14683f8a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14683f8b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14686f4e0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14686f4f0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,void___cdecl(UMovieSceneEntitySystemLinker_*,FReferenceCollector_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

