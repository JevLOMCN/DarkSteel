// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// BindIgnoreCPUAccess<> @ 148eefe40

void __cdecl
TSkinningModeBinder<TNDIExplicitBinder<FNDITransformHandler,TNDIExplicitBinder<TIntegralConstant<bool,1>,TUNiagaraDataInterfaceSkeletalMesh_GetSkinnedBoneDataBinder>_>_>
::BindIgnoreCPUAccess<>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  ENDISkeletalMesh_SkinningMode EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UNiagaraDataInterfaceSkeletalMesh *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  undefined1 local_100 [8];
  FDelegateAllocation local_f8;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FString local_28;
  
  pUVar5 = CastChecked<UNiagaraDataInterfaceSkeletalMesh,UNiagaraDataInterface>(param_1);
  pUVar6 = FWeakObjectPtr::Get(param_3);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar7->_padding_)) goto LAB_148eefea7;
  }
  pUVar6 = (UObject *)0x0;
LAB_148eefea7:
  EVar1 = pUVar5->SkinningMode;
  if ((EVar1 == None) || (pUVar6 == (UObject *)0x0)) {
    local_e8 = (undefined1  [8])0x0;
    local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_e0;
    puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_e0);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandler__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetSkinnedBoneDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar8[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
               (FWriteAccessScope *)&local_a0);
    if ((local_e0.DelegateSize != 0) &&
       (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_e0,0,0,0x10);
      local_e0.DelegateSize = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_e0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e8;
  }
  else if (EVar1 == SkinOnTheFly) {
    local_118 = (undefined1  [8])0x0;
    local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_110.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_88);
    local_70 = &local_110;
    puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_110);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandler__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetSkinnedBoneDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar8[3] = param_1;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_d0);
    if ((local_110.DelegateSize != 0) &&
       (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_110,0,0,0x10);
      local_110.DelegateSize = 0;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_110.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_118;
  }
  else {
    if (EVar1 != PreSkin) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                         ,0x2ae,L"Invalid skinning mode in %s");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (!bVar4) {
        return;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_100 = (undefined1  [8])0x0;
    local_f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_f8);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandler__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetSkinnedBoneDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar8[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_100);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
               (FWriteAccessScope *)&local_b8);
    if ((local_f8.DelegateSize != 0) &&
       (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f8,0,0,0x10);
      local_f8.DelegateSize = 0;
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    if (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_100;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// BindIgnoreCPUAccess<> @ 148ef0220

void __cdecl
TSkinningModeBinder<TNDIExplicitBinder<FNDITransformHandler,TNDIExplicitBinder<TIntegralConstant<bool,0>,TUNiagaraDataInterfaceSkeletalMesh_GetSkinnedBoneDataBinder>_>_>
::BindIgnoreCPUAccess<>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  ENDISkeletalMesh_SkinningMode EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UNiagaraDataInterfaceSkeletalMesh *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  undefined1 local_100 [8];
  FDelegateAllocation local_f8;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FString local_28;
  
  pUVar5 = CastChecked<UNiagaraDataInterfaceSkeletalMesh,UNiagaraDataInterface>(param_1);
  pUVar6 = FWeakObjectPtr::Get(param_3);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar7->_padding_)) goto LAB_148ef0287;
  }
  pUVar6 = (UObject *)0x0;
LAB_148ef0287:
  EVar1 = pUVar5->SkinningMode;
  if ((EVar1 == None) || (pUVar6 == (UObject *)0x0)) {
    local_e8 = (undefined1  [8])0x0;
    local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_e0;
    puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_e0);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandler__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetSkinnedBoneDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar8[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
               (FWriteAccessScope *)&local_a0);
    if ((local_e0.DelegateSize != 0) &&
       (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_e0,0,0,0x10);
      local_e0.DelegateSize = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_e0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e8;
  }
  else if (EVar1 == SkinOnTheFly) {
    local_118 = (undefined1  [8])0x0;
    local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_110.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_88);
    local_70 = &local_110;
    puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_110);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandler__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetSkinnedBoneDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar8[3] = param_1;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_d0);
    if ((local_110.DelegateSize != 0) &&
       (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_110,0,0,0x10);
      local_110.DelegateSize = 0;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_110.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_118;
  }
  else {
    if (EVar1 != PreSkin) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                         ,0x2ae,L"Invalid skinning mode in %s");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (!bVar4) {
        return;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_100 = (undefined1  [8])0x0;
    local_f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_f8);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandler__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetSkinnedBoneDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar8[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_100);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
               (FWriteAccessScope *)&local_b8);
    if ((local_f8.DelegateSize != 0) &&
       (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f8,0,0,0x10);
      local_f8.DelegateSize = 0;
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    if (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_100;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// BindIgnoreCPUAccess<> @ 148ef0600

void __cdecl
TSkinningModeBinder<TNDIExplicitBinder<FNDITransformHandlerNoop,TNDIExplicitBinder<TIntegralConstant<bool,1>,TUNiagaraDataInterfaceSkeletalMesh_GetSkinnedBoneDataBinder>_>_>
::BindIgnoreCPUAccess<>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  ENDISkeletalMesh_SkinningMode EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UNiagaraDataInterfaceSkeletalMesh *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  undefined1 local_100 [8];
  FDelegateAllocation local_f8;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FString local_28;
  
  pUVar5 = CastChecked<UNiagaraDataInterfaceSkeletalMesh,UNiagaraDataInterface>(param_1);
  pUVar6 = FWeakObjectPtr::Get(param_3);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar7->_padding_)) goto LAB_148ef0667;
  }
  pUVar6 = (UObject *)0x0;
LAB_148ef0667:
  EVar1 = pUVar5->SkinningMode;
  if ((EVar1 == None) || (pUVar6 == (UObject *)0x0)) {
    local_e8 = (undefined1  [8])0x0;
    local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_e0;
    puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_e0);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandlerNoop__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetSkinnedBoneDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar8[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
               (FWriteAccessScope *)&local_a0);
    if ((local_e0.DelegateSize != 0) &&
       (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_e0,0,0,0x10);
      local_e0.DelegateSize = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_e0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e8;
  }
  else if (EVar1 == SkinOnTheFly) {
    local_118 = (undefined1  [8])0x0;
    local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_110.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_88);
    local_70 = &local_110;
    puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_110);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandlerNoop__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetSkinnedBoneDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar8[3] = param_1;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_d0);
    if ((local_110.DelegateSize != 0) &&
       (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_110,0,0,0x10);
      local_110.DelegateSize = 0;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_110.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_118;
  }
  else {
    if (EVar1 != PreSkin) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                         ,0x2ae,L"Invalid skinning mode in %s");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (!bVar4) {
        return;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_100 = (undefined1  [8])0x0;
    local_f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_f8);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandlerNoop__U__TIntegralConstant__N_00___TUNiagaraDataInterfaceSkeletalMesh_GetSkinnedBoneDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar8[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_100);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
               (FWriteAccessScope *)&local_b8);
    if ((local_f8.DelegateSize != 0) &&
       (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f8,0,0,0x10);
      local_f8.DelegateSize = 0;
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    if (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_100;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// BindIgnoreCPUAccess<> @ 148ef09e0

void __cdecl
TSkinningModeBinder<TNDIExplicitBinder<FNDITransformHandlerNoop,TNDIExplicitBinder<TIntegralConstant<bool,0>,TUNiagaraDataInterfaceSkeletalMesh_GetSkinnedBoneDataBinder>_>_>
::BindIgnoreCPUAccess<>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  ENDISkeletalMesh_SkinningMode EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UNiagaraDataInterfaceSkeletalMesh *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  undefined1 local_100 [8];
  FDelegateAllocation local_f8;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FString local_28;
  
  pUVar5 = CastChecked<UNiagaraDataInterfaceSkeletalMesh,UNiagaraDataInterface>(param_1);
  pUVar6 = FWeakObjectPtr::Get(param_3);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar7->_padding_)) goto LAB_148ef0a47;
  }
  pUVar6 = (UObject *)0x0;
LAB_148ef0a47:
  EVar1 = pUVar5->SkinningMode;
  if ((EVar1 == None) || (pUVar6 == (UObject *)0x0)) {
    local_e8 = (undefined1  [8])0x0;
    local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_e0;
    puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_e0);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___0A_____UFNDITransformHandlerNoop__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetSkinnedBoneDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar8[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
               (FWriteAccessScope *)&local_a0);
    if ((local_e0.DelegateSize != 0) &&
       (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_e0,0,0,0x10);
      local_e0.DelegateSize = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_e0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_e8;
  }
  else if (EVar1 == SkinOnTheFly) {
    local_118 = (undefined1  [8])0x0;
    local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_110.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_88);
    local_70 = &local_110;
    puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_110);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___00____UFNDITransformHandlerNoop__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetSkinnedBoneDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar8[3] = param_1;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_d0);
    if ((local_110.DelegateSize != 0) &&
       (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_110,0,0,0x10);
      local_110.DelegateSize = 0;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_110.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_118;
  }
  else {
    if (EVar1 != PreSkin) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                         ,0x2ae,L"Invalid skinning mode in %s");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (!bVar4) {
        return;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_100 = (undefined1  [8])0x0;
    local_f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_f8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_f8);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__FSkinnedPositionAccessorHelper_U__TIntegralConstant_W4ENDISkeletalMesh_SkinningMode___01____UFNDITransformHandlerNoop__U__TIntegralConstant__N_0A____TUNiagaraDataInterfaceSkeletalMesh_GetSkinnedBoneDataBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar8[3] = param_1;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_100);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
               (FWriteAccessScope *)&local_b8);
    if ((local_f8.DelegateSize != 0) &&
       (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f8,0,0,0x10);
      local_f8.DelegateSize = 0;
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    if (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f8.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_100;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

