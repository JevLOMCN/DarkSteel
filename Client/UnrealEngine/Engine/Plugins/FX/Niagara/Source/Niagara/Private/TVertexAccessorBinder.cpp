// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 45

// Bind<> @ 148ee6db0

void __cdecl
TVertexAccessorBinder<TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordUVBinder>::Bind<>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_UFSkelMeshVertexAccessorNoop___TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordUVBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkelMeshVertexAccessor__0A____TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordUVBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkelMeshVertexAccessor__00___TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordUVBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<> @ 148ee7120

void __cdecl
TVertexAccessorBinder<TUNiagaraDataInterfaceSkeletalMesh_GetTriangleCoordAtUVBinder>::Bind<>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_UFSkelMeshVertexAccessorNoop___TUNiagaraDataInterfaceSkeletalMesh_GetTriangleCoordAtUVBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkelMeshVertexAccessor__0A____TUNiagaraDataInterfaceSkeletalMesh_GetTriangleCoordAtUVBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkelMeshVertexAccessor__00___TUNiagaraDataInterfaceSkeletalMesh_GetTriangleCoordAtUVBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<> @ 148ee7490

void __cdecl
TVertexAccessorBinder<TUNiagaraDataInterfaceSkeletalMesh_GetTriangleCoordInAabbBinder>::Bind<>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_UFSkelMeshVertexAccessorNoop___TUNiagaraDataInterfaceSkeletalMesh_GetTriangleCoordInAabbBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkelMeshVertexAccessor__0A____TUNiagaraDataInterfaceSkeletalMesh_GetTriangleCoordInAabbBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkelMeshVertexAccessor__00___TUNiagaraDataInterfaceSkeletalMesh_GetTriangleCoordInAabbBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandler> @ 148ee7800

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,1>,TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandler__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandler__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandler__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandler> @ 148ee7b70

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,1>,TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandler__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandler__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandler__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandler> @ 148ee7ee0

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,0>,TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandler__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandler__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandler__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandler> @ 148ee8250

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,0>,TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandler__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandler__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandler__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandlerNoop> @ 148ee85c0

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,1>,TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandlerNoop__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandlerNoop> @ 148ee8930

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,1>,TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandlerNoop__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandlerNoop> @ 148ee8ca0

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,0>,TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandlerNoop__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandlerNoop> @ 148ee9010

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,0>,TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandlerNoop__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandler> @ 148ee9380

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,1>,TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandler__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandler__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandler__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandler> @ 148ee96f0

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,1>,TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandler__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandler__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandler__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandler> @ 148ee9a60

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,0>,TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandler__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandler__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandler__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandler> @ 148ee9dd0

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,0>,TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandler__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandler__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandler__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandlerNoop> @ 148eea140

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,1>,TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandlerNoop__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandlerNoop> @ 148eea4b0

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,1>,TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandlerNoop__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandlerNoop> @ 148eea820

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,0>,TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandlerNoop__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandlerNoop> @ 148eeab90

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,0>,TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandlerNoop__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandler> @ 148eeaf00

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,1>,TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandler__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandler__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandler__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandler> @ 148eeb270

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,1>,TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandler__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandler__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandler__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandler> @ 148eeb5e0

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,0>,TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandler__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandler__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandler__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandler> @ 148eeb950

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,0>,TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandler__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandler__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandler__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandlerNoop> @ 148eebcc0

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,1>,TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandlerNoop__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandlerNoop> @ 148eec030

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,1>,TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandlerNoop__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandlerNoop> @ 148eec3a0

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,0>,TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandlerNoop__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetTriCoordSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandlerNoop> @ 148eec710

void __cdecl
TVertexAccessorBinder<TNDIExplicitBinder<TIntegralConstant<bool,0>,TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder>_>
::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandlerNoop__UFSkelMeshVertexAccessorNoop__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__0A___U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandlerNoop__U__FSkelMeshVertexAccessor__00__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_VMGetSkinnedTriangleVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<> @ 148fea080

void __cdecl
TVertexAccessorBinder<TUNiagaraDataInterfaceSkeletalMesh_GetVertexDataBinder>::Bind<>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_UFSkelMeshVertexAccessorNoop___TUNiagaraDataInterfaceSkeletalMesh_GetVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkelMeshVertexAccessor__0A____TUNiagaraDataInterfaceSkeletalMesh_GetVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkelMeshVertexAccessor__00___TUNiagaraDataInterfaceSkeletalMesh_GetVertexDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<> @ 148fea3f0

void __cdecl
TVertexAccessorBinder<TUNiagaraDataInterfaceSkeletalMesh_GetVertexUVBinder>::Bind<>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_UFSkelMeshVertexAccessorNoop___TUNiagaraDataInterfaceSkeletalMesh_GetVertexUVBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkelMeshVertexAccessor__0A____TUNiagaraDataInterfaceSkeletalMesh_GetVertexUVBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkelMeshVertexAccessor__00___TUNiagaraDataInterfaceSkeletalMesh_GetVertexUVBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandler,TIntegralConstant<bool,1>_> @ 148fea760

void __cdecl
TVertexAccessorBinder<TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder>::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandler,TIntegralConstant<bool,1>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandler__U__TIntegralConstant__N_00__UFSkelMeshVertexAccessorNoop___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandler__U__TIntegralConstant__N_00__U__FSkelMeshVertexAccessor__0A____TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandler__U__TIntegralConstant__N_00__U__FSkelMeshVertexAccessor__00___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandler,TIntegralConstant<bool,0>_> @ 148feaad0

void __cdecl
TVertexAccessorBinder<TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder>::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandler,TIntegralConstant<bool,0>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandler__U__TIntegralConstant__N_0A___UFSkelMeshVertexAccessorNoop___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandler__U__TIntegralConstant__N_0A___U__FSkelMeshVertexAccessor__0A____TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandler__U__TIntegralConstant__N_0A___U__FSkelMeshVertexAccessor__00___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandlerNoop,TIntegralConstant<bool,1>_> @ 148feae40

void __cdecl
TVertexAccessorBinder<TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder>::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandlerNoop,TIntegralConstant<bool,1>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandlerNoop__U__TIntegralConstant__N_00__UFSkelMeshVertexAccessorNoop___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandlerNoop__U__TIntegralConstant__N_00__U__FSkelMeshVertexAccessor__0A____TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandlerNoop__U__TIntegralConstant__N_00__U__FSkelMeshVertexAccessor__00___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandlerNoop,TIntegralConstant<bool,0>_> @ 148feb1b0

void __cdecl
TVertexAccessorBinder<TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder>::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>,FNDITransformHandlerNoop,TIntegralConstant<bool,0>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandlerNoop__U__TIntegralConstant__N_0A___UFSkelMeshVertexAccessorNoop___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandlerNoop__U__TIntegralConstant__N_0A___U__FSkelMeshVertexAccessor__0A____TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandlerNoop__U__TIntegralConstant__N_0A___U__FSkelMeshVertexAccessor__00___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandler,TIntegralConstant<bool,1>_> @ 148feb520

void __cdecl
TVertexAccessorBinder<TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder>::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandler,TIntegralConstant<bool,1>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandler__U__TIntegralConstant__N_00__UFSkelMeshVertexAccessorNoop___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandler__U__TIntegralConstant__N_00__U__FSkelMeshVertexAccessor__0A____TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandler__U__TIntegralConstant__N_00__U__FSkelMeshVertexAccessor__00___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandler,TIntegralConstant<bool,0>_> @ 148feb890

void __cdecl
TVertexAccessorBinder<TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder>::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandler,TIntegralConstant<bool,0>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandler__U__TIntegralConstant__N_0A___UFSkelMeshVertexAccessorNoop___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandler__U__TIntegralConstant__N_0A___U__FSkelMeshVertexAccessor__0A____TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandler__U__TIntegralConstant__N_0A___U__FSkelMeshVertexAccessor__00___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandlerNoop,TIntegralConstant<bool,1>_> @ 148febc00

void __cdecl
TVertexAccessorBinder<TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder>::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandlerNoop,TIntegralConstant<bool,1>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandlerNoop__U__TIntegralConstant__N_00__UFSkelMeshVertexAccessorNoop___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandlerNoop__U__TIntegralConstant__N_00__U__FSkelMeshVertexAccessor__0A____TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandlerNoop__U__TIntegralConstant__N_00__U__FSkelMeshVertexAccessor__00___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandlerNoop,TIntegralConstant<bool,0>_> @ 148febf70

void __cdecl
TVertexAccessorBinder<TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder>::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>,FNDITransformHandlerNoop,TIntegralConstant<bool,0>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandlerNoop__U__TIntegralConstant__N_0A___UFSkelMeshVertexAccessorNoop___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandlerNoop__U__TIntegralConstant__N_0A___U__FSkelMeshVertexAccessor__0A____TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandlerNoop__U__TIntegralConstant__N_0A___U__FSkelMeshVertexAccessor__00___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandler,TIntegralConstant<bool,1>_> @ 148fec2e0

void __cdecl
TVertexAccessorBinder<TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder>::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandler,TIntegralConstant<bool,1>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandler__U__TIntegralConstant__N_00__UFSkelMeshVertexAccessorNoop___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandler__U__TIntegralConstant__N_00__U__FSkelMeshVertexAccessor__0A____TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandler__U__TIntegralConstant__N_00__U__FSkelMeshVertexAccessor__00___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandler,TIntegralConstant<bool,0>_> @ 148fec650

void __cdecl
TVertexAccessorBinder<TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder>::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandler,TIntegralConstant<bool,0>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandler__U__TIntegralConstant__N_0A___UFSkelMeshVertexAccessorNoop___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandler__U__TIntegralConstant__N_0A___U__FSkelMeshVertexAccessor__0A____TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandler__U__TIntegralConstant__N_0A___U__FSkelMeshVertexAccessor__00___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandlerNoop,TIntegralConstant<bool,1>_> @ 148fec9c0

void __cdecl
TVertexAccessorBinder<TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder>::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandlerNoop,TIntegralConstant<bool,1>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandlerNoop__U__TIntegralConstant__N_00__UFSkelMeshVertexAccessorNoop___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandlerNoop__U__TIntegralConstant__N_00__U__FSkelMeshVertexAccessor__0A____TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandlerNoop__U__TIntegralConstant__N_00__U__FSkelMeshVertexAccessor__00___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandlerNoop,TIntegralConstant<bool,0>_> @ 148fecd30

void __cdecl
TVertexAccessorBinder<TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder>::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>,FNDITransformHandlerNoop,TIntegralConstant<bool,0>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandlerNoop__U__TIntegralConstant__N_0A___UFSkelMeshVertexAccessorNoop___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandlerNoop__U__TIntegralConstant__N_0A___U__FSkelMeshVertexAccessor__0A____TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandlerNoop__U__TIntegralConstant__N_0A___U__FSkelMeshVertexAccessor__00___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,255>_>,FNDITransformHandler,TIntegralConstant<bool,1>_> @ 148fed0a0

void __cdecl
TVertexAccessorBinder<TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder>::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,255>_>,FNDITransformHandler,TIntegralConstant<bool,1>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0PP_____UFNDITransformHandler__U__TIntegralConstant__N_00__UFSkelMeshVertexAccessorNoop___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0PP_____UFNDITransformHandler__U__TIntegralConstant__N_00__U__FSkelMeshVertexAccessor__0A____TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0PP_____UFNDITransformHandler__U__TIntegralConstant__N_00__U__FSkelMeshVertexAccessor__00___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,255>_>,FNDITransformHandler,TIntegralConstant<bool,0>_> @ 148fed410

void __cdecl
TVertexAccessorBinder<TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder>::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,255>_>,FNDITransformHandler,TIntegralConstant<bool,0>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0PP_____UFNDITransformHandler__U__TIntegralConstant__N_0A___UFSkelMeshVertexAccessorNoop___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0PP_____UFNDITransformHandler__U__TIntegralConstant__N_0A___U__FSkelMeshVertexAccessor__0A____TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0PP_____UFNDITransformHandler__U__TIntegralConstant__N_0A___U__FSkelMeshVertexAccessor__00___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,255>_>,FNDITransformHandlerNoop,TIntegralConstant<bool,1>_> @ 148fed780

void __cdecl
TVertexAccessorBinder<TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder>::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,255>_>,FNDITransformHandlerNoop,TIntegralConstant<bool,1>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0PP_____UFNDITransformHandlerNoop__U__TIntegralConstant__N_00__UFSkelMeshVertexAccessorNoop___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0PP_____UFNDITransformHandlerNoop__U__TIntegralConstant__N_00__U__FSkelMeshVertexAccessor__0A____TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0PP_____UFNDITransformHandlerNoop__U__TIntegralConstant__N_00__U__FSkelMeshVertexAccessor__00___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,255>_>,FNDITransformHandlerNoop,TIntegralConstant<bool,0>_> @ 148fedaf0

void __cdecl
TVertexAccessorBinder<TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder>::
Bind<FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,255>_>,FNDITransformHandlerNoop,TIntegralConstant<bool,0>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  undefined1 local_e0 [8];
  FDelegateAllocation local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x27f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)((longlong)param_3 + 0x318) == '\0') {
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_c0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0PP_____UFNDITransformHandlerNoop__U__TIntegralConstant__N_0A___UFSkelMeshVertexAccessorNoop___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_c8;
  }
  else if (*(char *)(*(longlong *)((longlong)param_3 + 800) + 0xe0) == '\0') {
    local_e0 = (undefined1  [8])0x0;
    local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_d8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0PP_____UFNDITransformHandlerNoop__U__TIntegralConstant__N_0A___U__FSkelMeshVertexAccessor__0A____TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
               (FWriteAccessScope *)&local_98);
    if ((local_d8.DelegateSize != 0) &&
       (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d8,0,0,0x10);
      local_d8.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e0;
  }
  else {
    local_f8 = (undefined1  [8])0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0PP_____UFNDITransformHandlerNoop__U__TIntegralConstant__N_0A___U__FSkelMeshVertexAccessor__00___TUNiagaraDataInterfaceSkeletalMesh_GetVertexSkinnedDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
               (FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_f8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

