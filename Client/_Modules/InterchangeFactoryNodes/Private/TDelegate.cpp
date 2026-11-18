// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 13

// CreateUObject<UInterchangeActorFactoryNode> @ 14e5252d0

TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
CreateUObject<UInterchangeActorFactoryNode>
          (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          UInterchangeActorFactoryNode *param_1,pmf_12c8aeb5 param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UInterchangeActorFactoryNode *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangeActorFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangeActorFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_12c8aeb5 *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UInterchangeActorFactoryNode> @ 14e5253d0

TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
CreateUObject<UInterchangeActorFactoryNode>
          (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          UInterchangeActorFactoryNode *param_1,pmf_7f69798c param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UInterchangeActorFactoryNode *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeActorFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangeActorFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangeActorFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_7f69798c *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UInterchangeMeshFactoryNode> @ 14e5254d0

TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
CreateUObject<UInterchangeMeshFactoryNode>
          (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          UInterchangeMeshFactoryNode *param_1,pmf_741380bb param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UInterchangeMeshFactoryNode *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangeMeshFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangeMeshFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_741380bb *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UInterchangeMeshFactoryNode> @ 14e5255d0

TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
CreateUObject<UInterchangeMeshFactoryNode>
          (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          UInterchangeMeshFactoryNode *param_1,pmf_ac4c7e6c param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UInterchangeMeshFactoryNode *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangeMeshFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangeMeshFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_ac4c7e6c *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UInterchangePhysicalCameraFactoryNode> @ 14e5256d0

TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
CreateUObject<UInterchangePhysicalCameraFactoryNode>
          (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          UInterchangePhysicalCameraFactoryNode *param_1,pmf_24216b0c param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UInterchangePhysicalCameraFactoryNode *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangePhysicalCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangePhysicalCameraFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangePhysicalCameraFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_24216b0c *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UInterchangePhysicalCameraFactoryNode> @ 14e5257d0

TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
CreateUObject<UInterchangePhysicalCameraFactoryNode>
          (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          UInterchangePhysicalCameraFactoryNode *param_1,pmf_107317fb param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UInterchangePhysicalCameraFactoryNode *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangePhysicalCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangePhysicalCameraFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangePhysicalCameraFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_107317fb *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UInterchangeSkeletalMeshFactoryNode> @ 14e5258d0

TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
CreateUObject<UInterchangeSkeletalMeshFactoryNode>
          (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          UInterchangeSkeletalMeshFactoryNode *param_1,pmf_9d62b442 param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UInterchangeSkeletalMeshFactoryNode *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeSkeletalMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangeSkeletalMeshFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangeSkeletalMeshFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_9d62b442 *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UInterchangeSkeletalMeshFactoryNode> @ 14e5259d0

TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
CreateUObject<UInterchangeSkeletalMeshFactoryNode>
          (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          UInterchangeSkeletalMeshFactoryNode *param_1,pmf_21d7ab45 param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UInterchangeSkeletalMeshFactoryNode *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeSkeletalMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangeSkeletalMeshFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangeSkeletalMeshFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_21d7ab45 *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UInterchangeStandardCameraFactoryNode> @ 14e525ad0

TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
CreateUObject<UInterchangeStandardCameraFactoryNode>
          (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          UInterchangeStandardCameraFactoryNode *param_1,pmf_8f1482a6 param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UInterchangeStandardCameraFactoryNode *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeStandardCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangeStandardCameraFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangeStandardCameraFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_8f1482a6 *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UInterchangeStandardCameraFactoryNode> @ 14e525bd0

TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
CreateUObject<UInterchangeStandardCameraFactoryNode>
          (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          UInterchangeStandardCameraFactoryNode *param_1,pmf_4e560aa1 param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UInterchangeStandardCameraFactoryNode *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeStandardCameraFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangeStandardCameraFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangeStandardCameraFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_4e560aa1 *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UInterchangeStaticMeshFactoryNode> @ 14e525cd0

TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
CreateUObject<UInterchangeStaticMeshFactoryNode>
          (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          UInterchangeStaticMeshFactoryNode *param_1,pmf_95c8f66d param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UInterchangeStaticMeshFactoryNode *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangeStaticMeshFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangeStaticMeshFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_95c8f66d *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UInterchangeStaticMeshFactoryNode> @ 14e525dd0

TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
CreateUObject<UInterchangeStaticMeshFactoryNode>
          (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          UInterchangeStaticMeshFactoryNode *param_1,pmf_a3ea3bba param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UInterchangeStaticMeshFactoryNode *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUInterchangeStaticMeshFactoryNode____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangeStaticMeshFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UInterchangeStaticMeshFactoryNode *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_a3ea3bba *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> @ 14e52e760

TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this,
          TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *param_1)

{
  FDestructionSentinel local_28;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  *(undefined8 *)&this->field_0x8 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&param_1->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&param_1->field_0x10 = 0;
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

