// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 12

// Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,1>_> @ 148eeca80

void __cdecl
TAreaWeightingModeBinder<TUNiagaraDataInterfaceSkeletalMesh_GetFilteredTriangleAtBinder>::
Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,1>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  USkeletalMesh *pUVar7;
  FSkeletalMeshSamplingRegionBuiltData *pFVar8;
  FSkeletalMeshSamplingRegion *pFVar9;
  UObject *pUVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  FMRSWRecursiveAccessDetector *this;
  int *piVar14;
  undefined1 local_res18 [8];
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
  *local_res20;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  undefined1 local_d0 [8];
  FDelegateAllocation local_c8;
  int *local_b8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  local_res20 = param_4;
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                         ,0x21f,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  CastChecked<UNiagaraDataInterfaceSkeletalMesh,UNiagaraDataInterface>(param_1);
  if (*(char *)((longlong)param_3 + 0x318) != '\0') {
    if (*(int *)((longlong)param_3 + 0xa8) < 2) {
      if (*(int *)((longlong)param_3 + 0xa8) == 1) {
        iVar1 = **(int **)((longlong)param_3 + 0xa0);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        pFVar9 = FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar1);
        if ((pFVar9->bSupportUniformlyDistributedSampling != 0) &&
           (pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar1),
           0 < (int)(pFVar8->AreaWeightedSampler)._padding_)) goto LAB_148eecdd1;
      }
      else {
        iVar1 = *(int *)((longlong)param_3 + 0x31c);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        if ((-1 < iVar1) && (iVar1 < (pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.ArrayNum))
        {
          if ((iVar1 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (0 < *(int *)((pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.AllocatorInstance.
                           Data + (longlong)iVar1 * 0x48 + 0x10)) {
            pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
            lVar11 = (**(code **)(*(longlong *)pUVar10 + 0x330))(pUVar10,iVar1);
            bVar6 = (*(byte *)(lVar11 + 0xd0) & 0x20) == 0;
            goto LAB_148eecdcb;
          }
        }
      }
    }
    else if (0.0 < *(float *)((longlong)param_3 + 0xd8)) {
      pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
      USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
      piVar14 = *(int **)((longlong)param_3 + 0xa0);
      iVar1 = *(int *)((longlong)param_3 + 0xa8);
      local_b8 = piVar14 + iVar1;
      bVar5 = true;
      while( true ) {
        bVar6 = bVar5;
        piVar4 = local_b8;
        if (*(int *)((longlong)param_3 + 0xa8) != iVar1) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (piVar14 == piVar4) break;
        iVar2 = *piVar14;
        FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar2);
        pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar2);
        piVar14 = piVar14 + 1;
        bVar5 = false;
        if ((int)(pFVar8->AreaWeightedSampler)._padding_ != 0) {
          bVar5 = bVar6;
        }
      }
      bVar6 = !bVar6;
      param_4 = local_res20;
LAB_148eecdcb:
      if (!bVar6) {
LAB_148eecdd1:
        local_e8 = (undefined1  [8])0x0;
        local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_e0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_80);
        local_68 = &local_e0;
        puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_e0);
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar13 = FDelegateHandle::GenerateNewID();
          puVar12[2] = uVar13;
          *puVar12 = &
                     ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___00__U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___00___TUNiagaraDataInterfaceSkeletalMesh_GetFilteredTriangleAtBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
          ;
          puVar12[3] = param_1;
        }
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_b0);
        if ((local_e0.DelegateSize != 0) &&
           (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_e0,0,0,0x10);
          local_e0.DelegateSize = 0;
        }
        if (local_b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
        }
        if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_e0.DelegateAllocator);
        }
        this = (FMRSWRecursiveAccessDetector *)local_e8;
        goto LAB_148eeccf8;
      }
    }
  }
  local_d0 = (undefined1  [8])0x0;
  local_c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_60);
  local_48 = &local_c8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_c8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___00__U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___0A____TUNiagaraDataInterfaceSkeletalMesh_GetFilteredTriangleAtBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar12[3] = param_1;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_98);
  if ((local_c8.DelegateSize != 0) &&
     (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c8,0,0,0x10);
    local_c8.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c8.DelegateAllocator);
  }
  this = (FMRSWRecursiveAccessDetector *)local_d0;
LAB_148eeccf8:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,1>_> @ 148eeced0

void __cdecl
TAreaWeightingModeBinder<TUNiagaraDataInterfaceSkeletalMesh_GetFilteredTriangleCountBinder>::
Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,1>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  USkeletalMesh *pUVar7;
  FSkeletalMeshSamplingRegionBuiltData *pFVar8;
  FSkeletalMeshSamplingRegion *pFVar9;
  UObject *pUVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  FMRSWRecursiveAccessDetector *this;
  int *piVar14;
  undefined1 local_res18 [8];
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
  *local_res20;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  undefined1 local_d0 [8];
  FDelegateAllocation local_c8;
  int *local_b8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  local_res20 = param_4;
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                         ,0x21f,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  CastChecked<UNiagaraDataInterfaceSkeletalMesh,UNiagaraDataInterface>(param_1);
  if (*(char *)((longlong)param_3 + 0x318) != '\0') {
    if (*(int *)((longlong)param_3 + 0xa8) < 2) {
      if (*(int *)((longlong)param_3 + 0xa8) == 1) {
        iVar1 = **(int **)((longlong)param_3 + 0xa0);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        pFVar9 = FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar1);
        if ((pFVar9->bSupportUniformlyDistributedSampling != 0) &&
           (pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar1),
           0 < (int)(pFVar8->AreaWeightedSampler)._padding_)) goto LAB_148eed221;
      }
      else {
        iVar1 = *(int *)((longlong)param_3 + 0x31c);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        if ((-1 < iVar1) && (iVar1 < (pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.ArrayNum))
        {
          if ((iVar1 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (0 < *(int *)((pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.AllocatorInstance.
                           Data + (longlong)iVar1 * 0x48 + 0x10)) {
            pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
            lVar11 = (**(code **)(*(longlong *)pUVar10 + 0x330))(pUVar10,iVar1);
            bVar6 = (*(byte *)(lVar11 + 0xd0) & 0x20) == 0;
            goto LAB_148eed21b;
          }
        }
      }
    }
    else if (0.0 < *(float *)((longlong)param_3 + 0xd8)) {
      pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
      USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
      piVar14 = *(int **)((longlong)param_3 + 0xa0);
      iVar1 = *(int *)((longlong)param_3 + 0xa8);
      local_b8 = piVar14 + iVar1;
      bVar5 = true;
      while( true ) {
        bVar6 = bVar5;
        piVar4 = local_b8;
        if (*(int *)((longlong)param_3 + 0xa8) != iVar1) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (piVar14 == piVar4) break;
        iVar2 = *piVar14;
        FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar2);
        pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar2);
        piVar14 = piVar14 + 1;
        bVar5 = false;
        if ((int)(pFVar8->AreaWeightedSampler)._padding_ != 0) {
          bVar5 = bVar6;
        }
      }
      bVar6 = !bVar6;
      param_4 = local_res20;
LAB_148eed21b:
      if (!bVar6) {
LAB_148eed221:
        local_e8 = (undefined1  [8])0x0;
        local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_e0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_80);
        local_68 = &local_e0;
        puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_e0);
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar13 = FDelegateHandle::GenerateNewID();
          puVar12[2] = uVar13;
          *puVar12 = &
                     ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___00__U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___00___TUNiagaraDataInterfaceSkeletalMesh_GetFilteredTriangleCountBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
          ;
          puVar12[3] = param_1;
        }
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_b0);
        if ((local_e0.DelegateSize != 0) &&
           (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_e0,0,0,0x10);
          local_e0.DelegateSize = 0;
        }
        if (local_b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
        }
        if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_e0.DelegateAllocator);
        }
        this = (FMRSWRecursiveAccessDetector *)local_e8;
        goto LAB_148eed148;
      }
    }
  }
  local_d0 = (undefined1  [8])0x0;
  local_c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_60);
  local_48 = &local_c8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_c8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___00__U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___0A____TUNiagaraDataInterfaceSkeletalMesh_GetFilteredTriangleCountBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar12[3] = param_1;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_98);
  if ((local_c8.DelegateSize != 0) &&
     (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c8,0,0,0x10);
    local_c8.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c8.DelegateAllocator);
  }
  this = (FMRSWRecursiveAccessDetector *)local_d0;
LAB_148eed148:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,1>_> @ 148eed320

void __cdecl
TAreaWeightingModeBinder<TUNiagaraDataInterfaceSkeletalMesh_IsValidTriCoordBinder>::
Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,1>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  USkeletalMesh *pUVar7;
  FSkeletalMeshSamplingRegionBuiltData *pFVar8;
  FSkeletalMeshSamplingRegion *pFVar9;
  UObject *pUVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  FMRSWRecursiveAccessDetector *this;
  int *piVar14;
  undefined1 local_res18 [8];
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
  *local_res20;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  undefined1 local_d0 [8];
  FDelegateAllocation local_c8;
  int *local_b8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  local_res20 = param_4;
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                         ,0x21f,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  CastChecked<UNiagaraDataInterfaceSkeletalMesh,UNiagaraDataInterface>(param_1);
  if (*(char *)((longlong)param_3 + 0x318) != '\0') {
    if (*(int *)((longlong)param_3 + 0xa8) < 2) {
      if (*(int *)((longlong)param_3 + 0xa8) == 1) {
        iVar1 = **(int **)((longlong)param_3 + 0xa0);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        pFVar9 = FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar1);
        if ((pFVar9->bSupportUniformlyDistributedSampling != 0) &&
           (pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar1),
           0 < (int)(pFVar8->AreaWeightedSampler)._padding_)) goto LAB_148eed671;
      }
      else {
        iVar1 = *(int *)((longlong)param_3 + 0x31c);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        if ((-1 < iVar1) && (iVar1 < (pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.ArrayNum))
        {
          if ((iVar1 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (0 < *(int *)((pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.AllocatorInstance.
                           Data + (longlong)iVar1 * 0x48 + 0x10)) {
            pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
            lVar11 = (**(code **)(*(longlong *)pUVar10 + 0x330))(pUVar10,iVar1);
            bVar6 = (*(byte *)(lVar11 + 0xd0) & 0x20) == 0;
            goto LAB_148eed66b;
          }
        }
      }
    }
    else if (0.0 < *(float *)((longlong)param_3 + 0xd8)) {
      pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
      USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
      piVar14 = *(int **)((longlong)param_3 + 0xa0);
      iVar1 = *(int *)((longlong)param_3 + 0xa8);
      local_b8 = piVar14 + iVar1;
      bVar5 = true;
      while( true ) {
        bVar6 = bVar5;
        piVar4 = local_b8;
        if (*(int *)((longlong)param_3 + 0xa8) != iVar1) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (piVar14 == piVar4) break;
        iVar2 = *piVar14;
        FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar2);
        pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar2);
        piVar14 = piVar14 + 1;
        bVar5 = false;
        if ((int)(pFVar8->AreaWeightedSampler)._padding_ != 0) {
          bVar5 = bVar6;
        }
      }
      bVar6 = !bVar6;
      param_4 = local_res20;
LAB_148eed66b:
      if (!bVar6) {
LAB_148eed671:
        local_e8 = (undefined1  [8])0x0;
        local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_e0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_80);
        local_68 = &local_e0;
        puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_e0);
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar13 = FDelegateHandle::GenerateNewID();
          puVar12[2] = uVar13;
          *puVar12 = &
                     ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___00__U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___00___TUNiagaraDataInterfaceSkeletalMesh_IsValidTriCoordBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
          ;
          puVar12[3] = param_1;
        }
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_b0);
        if ((local_e0.DelegateSize != 0) &&
           (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_e0,0,0,0x10);
          local_e0.DelegateSize = 0;
        }
        if (local_b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
        }
        if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_e0.DelegateAllocator);
        }
        this = (FMRSWRecursiveAccessDetector *)local_e8;
        goto LAB_148eed598;
      }
    }
  }
  local_d0 = (undefined1  [8])0x0;
  local_c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_60);
  local_48 = &local_c8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_c8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___00__U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___0A____TUNiagaraDataInterfaceSkeletalMesh_IsValidTriCoordBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar12[3] = param_1;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_98);
  if ((local_c8.DelegateSize != 0) &&
     (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c8,0,0,0x10);
    local_c8.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c8.DelegateAllocator);
  }
  this = (FMRSWRecursiveAccessDetector *)local_d0;
LAB_148eed598:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,1>_> @ 148eed770

void __cdecl
TAreaWeightingModeBinder<TUNiagaraDataInterfaceSkeletalMesh_RandomTriCoordBinder>::
Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,1>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  USkeletalMesh *pUVar7;
  FSkeletalMeshSamplingRegionBuiltData *pFVar8;
  FSkeletalMeshSamplingRegion *pFVar9;
  UObject *pUVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  FMRSWRecursiveAccessDetector *this;
  int *piVar14;
  undefined1 local_res18 [8];
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
  *local_res20;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  undefined1 local_d0 [8];
  FDelegateAllocation local_c8;
  int *local_b8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  local_res20 = param_4;
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                         ,0x21f,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  CastChecked<UNiagaraDataInterfaceSkeletalMesh,UNiagaraDataInterface>(param_1);
  if (*(char *)((longlong)param_3 + 0x318) != '\0') {
    if (*(int *)((longlong)param_3 + 0xa8) < 2) {
      if (*(int *)((longlong)param_3 + 0xa8) == 1) {
        iVar1 = **(int **)((longlong)param_3 + 0xa0);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        pFVar9 = FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar1);
        if ((pFVar9->bSupportUniformlyDistributedSampling != 0) &&
           (pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar1),
           0 < (int)(pFVar8->AreaWeightedSampler)._padding_)) goto LAB_148eedac1;
      }
      else {
        iVar1 = *(int *)((longlong)param_3 + 0x31c);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        if ((-1 < iVar1) && (iVar1 < (pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.ArrayNum))
        {
          if ((iVar1 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (0 < *(int *)((pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.AllocatorInstance.
                           Data + (longlong)iVar1 * 0x48 + 0x10)) {
            pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
            lVar11 = (**(code **)(*(longlong *)pUVar10 + 0x330))(pUVar10,iVar1);
            bVar6 = (*(byte *)(lVar11 + 0xd0) & 0x20) == 0;
            goto LAB_148eedabb;
          }
        }
      }
    }
    else if (0.0 < *(float *)((longlong)param_3 + 0xd8)) {
      pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
      USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
      piVar14 = *(int **)((longlong)param_3 + 0xa0);
      iVar1 = *(int *)((longlong)param_3 + 0xa8);
      local_b8 = piVar14 + iVar1;
      bVar5 = true;
      while( true ) {
        bVar6 = bVar5;
        piVar4 = local_b8;
        if (*(int *)((longlong)param_3 + 0xa8) != iVar1) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (piVar14 == piVar4) break;
        iVar2 = *piVar14;
        FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar2);
        pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar2);
        piVar14 = piVar14 + 1;
        bVar5 = false;
        if ((int)(pFVar8->AreaWeightedSampler)._padding_ != 0) {
          bVar5 = bVar6;
        }
      }
      bVar6 = !bVar6;
      param_4 = local_res20;
LAB_148eedabb:
      if (!bVar6) {
LAB_148eedac1:
        local_e8 = (undefined1  [8])0x0;
        local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_e0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_80);
        local_68 = &local_e0;
        puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_e0);
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar13 = FDelegateHandle::GenerateNewID();
          puVar12[2] = uVar13;
          *puVar12 = &
                     ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___00__U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___00___TUNiagaraDataInterfaceSkeletalMesh_RandomTriCoordBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
          ;
          puVar12[3] = param_1;
        }
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_b0);
        if ((local_e0.DelegateSize != 0) &&
           (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_e0,0,0,0x10);
          local_e0.DelegateSize = 0;
        }
        if (local_b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
        }
        if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_e0.DelegateAllocator);
        }
        this = (FMRSWRecursiveAccessDetector *)local_e8;
        goto LAB_148eed9e8;
      }
    }
  }
  local_d0 = (undefined1  [8])0x0;
  local_c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_60);
  local_48 = &local_c8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_c8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___00__U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___0A____TUNiagaraDataInterfaceSkeletalMesh_RandomTriCoordBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar12[3] = param_1;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_98);
  if ((local_c8.DelegateSize != 0) &&
     (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c8,0,0,0x10);
    local_c8.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c8.DelegateAllocator);
  }
  this = (FMRSWRecursiveAccessDetector *)local_d0;
LAB_148eed9e8:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,2>_> @ 148eedbc0

void __cdecl
TAreaWeightingModeBinder<TUNiagaraDataInterfaceSkeletalMesh_GetFilteredTriangleAtBinder>::
Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,2>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  USkeletalMesh *pUVar7;
  FSkeletalMeshSamplingRegionBuiltData *pFVar8;
  FSkeletalMeshSamplingRegion *pFVar9;
  UObject *pUVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  FMRSWRecursiveAccessDetector *this;
  int *piVar14;
  undefined1 local_res18 [8];
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
  *local_res20;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  undefined1 local_d0 [8];
  FDelegateAllocation local_c8;
  int *local_b8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  local_res20 = param_4;
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                         ,0x21f,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  CastChecked<UNiagaraDataInterfaceSkeletalMesh,UNiagaraDataInterface>(param_1);
  if (*(char *)((longlong)param_3 + 0x318) != '\0') {
    if (*(int *)((longlong)param_3 + 0xa8) < 2) {
      if (*(int *)((longlong)param_3 + 0xa8) == 1) {
        iVar1 = **(int **)((longlong)param_3 + 0xa0);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        pFVar9 = FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar1);
        if ((pFVar9->bSupportUniformlyDistributedSampling != 0) &&
           (pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar1),
           0 < (int)(pFVar8->AreaWeightedSampler)._padding_)) goto LAB_148eedf11;
      }
      else {
        iVar1 = *(int *)((longlong)param_3 + 0x31c);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        if ((-1 < iVar1) && (iVar1 < (pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.ArrayNum))
        {
          if ((iVar1 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (0 < *(int *)((pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.AllocatorInstance.
                           Data + (longlong)iVar1 * 0x48 + 0x10)) {
            pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
            lVar11 = (**(code **)(*(longlong *)pUVar10 + 0x330))(pUVar10,iVar1);
            bVar6 = (*(byte *)(lVar11 + 0xd0) & 0x20) == 0;
            goto LAB_148eedf0b;
          }
        }
      }
    }
    else if (0.0 < *(float *)((longlong)param_3 + 0xd8)) {
      pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
      USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
      piVar14 = *(int **)((longlong)param_3 + 0xa0);
      iVar1 = *(int *)((longlong)param_3 + 0xa8);
      local_b8 = piVar14 + iVar1;
      bVar5 = true;
      while( true ) {
        bVar6 = bVar5;
        piVar4 = local_b8;
        if (*(int *)((longlong)param_3 + 0xa8) != iVar1) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (piVar14 == piVar4) break;
        iVar2 = *piVar14;
        FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar2);
        pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar2);
        piVar14 = piVar14 + 1;
        bVar5 = false;
        if ((int)(pFVar8->AreaWeightedSampler)._padding_ != 0) {
          bVar5 = bVar6;
        }
      }
      bVar6 = !bVar6;
      param_4 = local_res20;
LAB_148eedf0b:
      if (!bVar6) {
LAB_148eedf11:
        local_e8 = (undefined1  [8])0x0;
        local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_e0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_80);
        local_68 = &local_e0;
        puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_e0);
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar13 = FDelegateHandle::GenerateNewID();
          puVar12[2] = uVar13;
          *puVar12 = &
                     ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___01__U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___00___TUNiagaraDataInterfaceSkeletalMesh_GetFilteredTriangleAtBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
          ;
          puVar12[3] = param_1;
        }
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_b0);
        if ((local_e0.DelegateSize != 0) &&
           (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_e0,0,0,0x10);
          local_e0.DelegateSize = 0;
        }
        if (local_b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
        }
        if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_e0.DelegateAllocator);
        }
        this = (FMRSWRecursiveAccessDetector *)local_e8;
        goto LAB_148eede38;
      }
    }
  }
  local_d0 = (undefined1  [8])0x0;
  local_c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_60);
  local_48 = &local_c8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_c8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___01__U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___0A____TUNiagaraDataInterfaceSkeletalMesh_GetFilteredTriangleAtBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar12[3] = param_1;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_98);
  if ((local_c8.DelegateSize != 0) &&
     (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c8,0,0,0x10);
    local_c8.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c8.DelegateAllocator);
  }
  this = (FMRSWRecursiveAccessDetector *)local_d0;
LAB_148eede38:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,2>_> @ 148eee010

void __cdecl
TAreaWeightingModeBinder<TUNiagaraDataInterfaceSkeletalMesh_GetFilteredTriangleCountBinder>::
Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,2>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  USkeletalMesh *pUVar7;
  FSkeletalMeshSamplingRegionBuiltData *pFVar8;
  FSkeletalMeshSamplingRegion *pFVar9;
  UObject *pUVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  FMRSWRecursiveAccessDetector *this;
  int *piVar14;
  undefined1 local_res18 [8];
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
  *local_res20;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  undefined1 local_d0 [8];
  FDelegateAllocation local_c8;
  int *local_b8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  local_res20 = param_4;
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                         ,0x21f,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  CastChecked<UNiagaraDataInterfaceSkeletalMesh,UNiagaraDataInterface>(param_1);
  if (*(char *)((longlong)param_3 + 0x318) != '\0') {
    if (*(int *)((longlong)param_3 + 0xa8) < 2) {
      if (*(int *)((longlong)param_3 + 0xa8) == 1) {
        iVar1 = **(int **)((longlong)param_3 + 0xa0);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        pFVar9 = FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar1);
        if ((pFVar9->bSupportUniformlyDistributedSampling != 0) &&
           (pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar1),
           0 < (int)(pFVar8->AreaWeightedSampler)._padding_)) goto LAB_148eee361;
      }
      else {
        iVar1 = *(int *)((longlong)param_3 + 0x31c);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        if ((-1 < iVar1) && (iVar1 < (pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.ArrayNum))
        {
          if ((iVar1 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (0 < *(int *)((pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.AllocatorInstance.
                           Data + (longlong)iVar1 * 0x48 + 0x10)) {
            pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
            lVar11 = (**(code **)(*(longlong *)pUVar10 + 0x330))(pUVar10,iVar1);
            bVar6 = (*(byte *)(lVar11 + 0xd0) & 0x20) == 0;
            goto LAB_148eee35b;
          }
        }
      }
    }
    else if (0.0 < *(float *)((longlong)param_3 + 0xd8)) {
      pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
      USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
      piVar14 = *(int **)((longlong)param_3 + 0xa0);
      iVar1 = *(int *)((longlong)param_3 + 0xa8);
      local_b8 = piVar14 + iVar1;
      bVar5 = true;
      while( true ) {
        bVar6 = bVar5;
        piVar4 = local_b8;
        if (*(int *)((longlong)param_3 + 0xa8) != iVar1) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (piVar14 == piVar4) break;
        iVar2 = *piVar14;
        FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar2);
        pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar2);
        piVar14 = piVar14 + 1;
        bVar5 = false;
        if ((int)(pFVar8->AreaWeightedSampler)._padding_ != 0) {
          bVar5 = bVar6;
        }
      }
      bVar6 = !bVar6;
      param_4 = local_res20;
LAB_148eee35b:
      if (!bVar6) {
LAB_148eee361:
        local_e8 = (undefined1  [8])0x0;
        local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_e0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_80);
        local_68 = &local_e0;
        puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_e0);
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar13 = FDelegateHandle::GenerateNewID();
          puVar12[2] = uVar13;
          *puVar12 = &
                     ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___01__U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___00___TUNiagaraDataInterfaceSkeletalMesh_GetFilteredTriangleCountBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
          ;
          puVar12[3] = param_1;
        }
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_b0);
        if ((local_e0.DelegateSize != 0) &&
           (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_e0,0,0,0x10);
          local_e0.DelegateSize = 0;
        }
        if (local_b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
        }
        if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_e0.DelegateAllocator);
        }
        this = (FMRSWRecursiveAccessDetector *)local_e8;
        goto LAB_148eee288;
      }
    }
  }
  local_d0 = (undefined1  [8])0x0;
  local_c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_60);
  local_48 = &local_c8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_c8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___01__U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___0A____TUNiagaraDataInterfaceSkeletalMesh_GetFilteredTriangleCountBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar12[3] = param_1;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_98);
  if ((local_c8.DelegateSize != 0) &&
     (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c8,0,0,0x10);
    local_c8.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c8.DelegateAllocator);
  }
  this = (FMRSWRecursiveAccessDetector *)local_d0;
LAB_148eee288:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,2>_> @ 148eee460

void __cdecl
TAreaWeightingModeBinder<TUNiagaraDataInterfaceSkeletalMesh_IsValidTriCoordBinder>::
Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,2>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  USkeletalMesh *pUVar7;
  FSkeletalMeshSamplingRegionBuiltData *pFVar8;
  FSkeletalMeshSamplingRegion *pFVar9;
  UObject *pUVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  FMRSWRecursiveAccessDetector *this;
  int *piVar14;
  undefined1 local_res18 [8];
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
  *local_res20;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  undefined1 local_d0 [8];
  FDelegateAllocation local_c8;
  int *local_b8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  local_res20 = param_4;
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                         ,0x21f,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  CastChecked<UNiagaraDataInterfaceSkeletalMesh,UNiagaraDataInterface>(param_1);
  if (*(char *)((longlong)param_3 + 0x318) != '\0') {
    if (*(int *)((longlong)param_3 + 0xa8) < 2) {
      if (*(int *)((longlong)param_3 + 0xa8) == 1) {
        iVar1 = **(int **)((longlong)param_3 + 0xa0);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        pFVar9 = FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar1);
        if ((pFVar9->bSupportUniformlyDistributedSampling != 0) &&
           (pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar1),
           0 < (int)(pFVar8->AreaWeightedSampler)._padding_)) goto LAB_148eee7b1;
      }
      else {
        iVar1 = *(int *)((longlong)param_3 + 0x31c);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        if ((-1 < iVar1) && (iVar1 < (pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.ArrayNum))
        {
          if ((iVar1 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (0 < *(int *)((pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.AllocatorInstance.
                           Data + (longlong)iVar1 * 0x48 + 0x10)) {
            pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
            lVar11 = (**(code **)(*(longlong *)pUVar10 + 0x330))(pUVar10,iVar1);
            bVar6 = (*(byte *)(lVar11 + 0xd0) & 0x20) == 0;
            goto LAB_148eee7ab;
          }
        }
      }
    }
    else if (0.0 < *(float *)((longlong)param_3 + 0xd8)) {
      pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
      USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
      piVar14 = *(int **)((longlong)param_3 + 0xa0);
      iVar1 = *(int *)((longlong)param_3 + 0xa8);
      local_b8 = piVar14 + iVar1;
      bVar5 = true;
      while( true ) {
        bVar6 = bVar5;
        piVar4 = local_b8;
        if (*(int *)((longlong)param_3 + 0xa8) != iVar1) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (piVar14 == piVar4) break;
        iVar2 = *piVar14;
        FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar2);
        pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar2);
        piVar14 = piVar14 + 1;
        bVar5 = false;
        if ((int)(pFVar8->AreaWeightedSampler)._padding_ != 0) {
          bVar5 = bVar6;
        }
      }
      bVar6 = !bVar6;
      param_4 = local_res20;
LAB_148eee7ab:
      if (!bVar6) {
LAB_148eee7b1:
        local_e8 = (undefined1  [8])0x0;
        local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_e0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_80);
        local_68 = &local_e0;
        puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_e0);
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar13 = FDelegateHandle::GenerateNewID();
          puVar12[2] = uVar13;
          *puVar12 = &
                     ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___01__U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___00___TUNiagaraDataInterfaceSkeletalMesh_IsValidTriCoordBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
          ;
          puVar12[3] = param_1;
        }
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_b0);
        if ((local_e0.DelegateSize != 0) &&
           (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_e0,0,0,0x10);
          local_e0.DelegateSize = 0;
        }
        if (local_b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
        }
        if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_e0.DelegateAllocator);
        }
        this = (FMRSWRecursiveAccessDetector *)local_e8;
        goto LAB_148eee6d8;
      }
    }
  }
  local_d0 = (undefined1  [8])0x0;
  local_c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_60);
  local_48 = &local_c8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_c8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___01__U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___0A____TUNiagaraDataInterfaceSkeletalMesh_IsValidTriCoordBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar12[3] = param_1;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_98);
  if ((local_c8.DelegateSize != 0) &&
     (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c8,0,0,0x10);
    local_c8.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c8.DelegateAllocator);
  }
  this = (FMRSWRecursiveAccessDetector *)local_d0;
LAB_148eee6d8:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,2>_> @ 148eee8b0

void __cdecl
TAreaWeightingModeBinder<TUNiagaraDataInterfaceSkeletalMesh_RandomTriCoordBinder>::
Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,2>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  USkeletalMesh *pUVar7;
  FSkeletalMeshSamplingRegionBuiltData *pFVar8;
  FSkeletalMeshSamplingRegion *pFVar9;
  UObject *pUVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  FMRSWRecursiveAccessDetector *this;
  int *piVar14;
  undefined1 local_res18 [8];
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
  *local_res20;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  undefined1 local_d0 [8];
  FDelegateAllocation local_c8;
  int *local_b8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  local_res20 = param_4;
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                         ,0x21f,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  CastChecked<UNiagaraDataInterfaceSkeletalMesh,UNiagaraDataInterface>(param_1);
  if (*(char *)((longlong)param_3 + 0x318) != '\0') {
    if (*(int *)((longlong)param_3 + 0xa8) < 2) {
      if (*(int *)((longlong)param_3 + 0xa8) == 1) {
        iVar1 = **(int **)((longlong)param_3 + 0xa0);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        pFVar9 = FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar1);
        if ((pFVar9->bSupportUniformlyDistributedSampling != 0) &&
           (pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar1),
           0 < (int)(pFVar8->AreaWeightedSampler)._padding_)) goto LAB_148eeec01;
      }
      else {
        iVar1 = *(int *)((longlong)param_3 + 0x31c);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        if ((-1 < iVar1) && (iVar1 < (pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.ArrayNum))
        {
          if ((iVar1 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (0 < *(int *)((pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.AllocatorInstance.
                           Data + (longlong)iVar1 * 0x48 + 0x10)) {
            pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
            lVar11 = (**(code **)(*(longlong *)pUVar10 + 0x330))(pUVar10,iVar1);
            bVar6 = (*(byte *)(lVar11 + 0xd0) & 0x20) == 0;
            goto LAB_148eeebfb;
          }
        }
      }
    }
    else if (0.0 < *(float *)((longlong)param_3 + 0xd8)) {
      pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
      USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
      piVar14 = *(int **)((longlong)param_3 + 0xa0);
      iVar1 = *(int *)((longlong)param_3 + 0xa8);
      local_b8 = piVar14 + iVar1;
      bVar5 = true;
      while( true ) {
        bVar6 = bVar5;
        piVar4 = local_b8;
        if (*(int *)((longlong)param_3 + 0xa8) != iVar1) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (piVar14 == piVar4) break;
        iVar2 = *piVar14;
        FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar2);
        pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar2);
        piVar14 = piVar14 + 1;
        bVar5 = false;
        if ((int)(pFVar8->AreaWeightedSampler)._padding_ != 0) {
          bVar5 = bVar6;
        }
      }
      bVar6 = !bVar6;
      param_4 = local_res20;
LAB_148eeebfb:
      if (!bVar6) {
LAB_148eeec01:
        local_e8 = (undefined1  [8])0x0;
        local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_e0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_80);
        local_68 = &local_e0;
        puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_e0);
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar13 = FDelegateHandle::GenerateNewID();
          puVar12[2] = uVar13;
          *puVar12 = &
                     ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___01__U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___00___TUNiagaraDataInterfaceSkeletalMesh_RandomTriCoordBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
          ;
          puVar12[3] = param_1;
        }
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_b0);
        if ((local_e0.DelegateSize != 0) &&
           (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_e0,0,0,0x10);
          local_e0.DelegateSize = 0;
        }
        if (local_b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
        }
        if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_e0.DelegateAllocator);
        }
        this = (FMRSWRecursiveAccessDetector *)local_e8;
        goto LAB_148eeeb28;
      }
    }
  }
  local_d0 = (undefined1  [8])0x0;
  local_c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_60);
  local_48 = &local_c8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_c8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___01__U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___0A____TUNiagaraDataInterfaceSkeletalMesh_RandomTriCoordBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar12[3] = param_1;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_98);
  if ((local_c8.DelegateSize != 0) &&
     (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c8,0,0,0x10);
    local_c8.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c8.DelegateAllocator);
  }
  this = (FMRSWRecursiveAccessDetector *)local_d0;
LAB_148eeeb28:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,0>_> @ 148eeed00

void __cdecl
TAreaWeightingModeBinder<TUNiagaraDataInterfaceSkeletalMesh_GetFilteredTriangleAtBinder>::
Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,0>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  USkeletalMesh *pUVar7;
  FSkeletalMeshSamplingRegionBuiltData *pFVar8;
  FSkeletalMeshSamplingRegion *pFVar9;
  UObject *pUVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  FMRSWRecursiveAccessDetector *this;
  int *piVar14;
  undefined1 local_res18 [8];
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
  *local_res20;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  undefined1 local_d0 [8];
  FDelegateAllocation local_c8;
  int *local_b8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  local_res20 = param_4;
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                         ,0x21f,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  CastChecked<UNiagaraDataInterfaceSkeletalMesh,UNiagaraDataInterface>(param_1);
  if (*(char *)((longlong)param_3 + 0x318) != '\0') {
    if (*(int *)((longlong)param_3 + 0xa8) < 2) {
      if (*(int *)((longlong)param_3 + 0xa8) == 1) {
        iVar1 = **(int **)((longlong)param_3 + 0xa0);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        pFVar9 = FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar1);
        if ((pFVar9->bSupportUniformlyDistributedSampling != 0) &&
           (pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar1),
           0 < (int)(pFVar8->AreaWeightedSampler)._padding_)) goto LAB_148eef051;
      }
      else {
        iVar1 = *(int *)((longlong)param_3 + 0x31c);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        if ((-1 < iVar1) && (iVar1 < (pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.ArrayNum))
        {
          if ((iVar1 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (0 < *(int *)((pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.AllocatorInstance.
                           Data + (longlong)iVar1 * 0x48 + 0x10)) {
            pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
            lVar11 = (**(code **)(*(longlong *)pUVar10 + 0x330))(pUVar10,iVar1);
            bVar6 = (*(byte *)(lVar11 + 0xd0) & 0x20) == 0;
            goto LAB_148eef04b;
          }
        }
      }
    }
    else if (0.0 < *(float *)((longlong)param_3 + 0xd8)) {
      pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
      USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
      piVar14 = *(int **)((longlong)param_3 + 0xa0);
      iVar1 = *(int *)((longlong)param_3 + 0xa8);
      local_b8 = piVar14 + iVar1;
      bVar5 = true;
      while( true ) {
        bVar6 = bVar5;
        piVar4 = local_b8;
        if (*(int *)((longlong)param_3 + 0xa8) != iVar1) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (piVar14 == piVar4) break;
        iVar2 = *piVar14;
        FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar2);
        pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar2);
        piVar14 = piVar14 + 1;
        bVar5 = false;
        if ((int)(pFVar8->AreaWeightedSampler)._padding_ != 0) {
          bVar5 = bVar6;
        }
      }
      bVar6 = !bVar6;
      param_4 = local_res20;
LAB_148eef04b:
      if (!bVar6) {
LAB_148eef051:
        local_e8 = (undefined1  [8])0x0;
        local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_e0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_80);
        local_68 = &local_e0;
        puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_e0);
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar13 = FDelegateHandle::GenerateNewID();
          puVar12[2] = uVar13;
          *puVar12 = &
                     ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___0A___U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___00___TUNiagaraDataInterfaceSkeletalMesh_GetFilteredTriangleAtBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
          ;
          puVar12[3] = param_1;
        }
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_b0);
        if ((local_e0.DelegateSize != 0) &&
           (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_e0,0,0,0x10);
          local_e0.DelegateSize = 0;
        }
        if (local_b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
        }
        if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_e0.DelegateAllocator);
        }
        this = (FMRSWRecursiveAccessDetector *)local_e8;
        goto LAB_148eeef78;
      }
    }
  }
  local_d0 = (undefined1  [8])0x0;
  local_c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_60);
  local_48 = &local_c8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_c8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___0A___U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___0A____TUNiagaraDataInterfaceSkeletalMesh_GetFilteredTriangleAtBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar12[3] = param_1;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_98);
  if ((local_c8.DelegateSize != 0) &&
     (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c8,0,0,0x10);
    local_c8.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c8.DelegateAllocator);
  }
  this = (FMRSWRecursiveAccessDetector *)local_d0;
LAB_148eeef78:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,0>_> @ 148eef150

void __cdecl
TAreaWeightingModeBinder<TUNiagaraDataInterfaceSkeletalMesh_GetFilteredTriangleCountBinder>::
Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,0>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  USkeletalMesh *pUVar7;
  FSkeletalMeshSamplingRegionBuiltData *pFVar8;
  FSkeletalMeshSamplingRegion *pFVar9;
  UObject *pUVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  FMRSWRecursiveAccessDetector *this;
  int *piVar14;
  undefined1 local_res18 [8];
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
  *local_res20;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  undefined1 local_d0 [8];
  FDelegateAllocation local_c8;
  int *local_b8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  local_res20 = param_4;
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                         ,0x21f,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  CastChecked<UNiagaraDataInterfaceSkeletalMesh,UNiagaraDataInterface>(param_1);
  if (*(char *)((longlong)param_3 + 0x318) != '\0') {
    if (*(int *)((longlong)param_3 + 0xa8) < 2) {
      if (*(int *)((longlong)param_3 + 0xa8) == 1) {
        iVar1 = **(int **)((longlong)param_3 + 0xa0);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        pFVar9 = FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar1);
        if ((pFVar9->bSupportUniformlyDistributedSampling != 0) &&
           (pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar1),
           0 < (int)(pFVar8->AreaWeightedSampler)._padding_)) goto LAB_148eef4a1;
      }
      else {
        iVar1 = *(int *)((longlong)param_3 + 0x31c);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        if ((-1 < iVar1) && (iVar1 < (pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.ArrayNum))
        {
          if ((iVar1 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (0 < *(int *)((pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.AllocatorInstance.
                           Data + (longlong)iVar1 * 0x48 + 0x10)) {
            pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
            lVar11 = (**(code **)(*(longlong *)pUVar10 + 0x330))(pUVar10,iVar1);
            bVar6 = (*(byte *)(lVar11 + 0xd0) & 0x20) == 0;
            goto LAB_148eef49b;
          }
        }
      }
    }
    else if (0.0 < *(float *)((longlong)param_3 + 0xd8)) {
      pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
      USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
      piVar14 = *(int **)((longlong)param_3 + 0xa0);
      iVar1 = *(int *)((longlong)param_3 + 0xa8);
      local_b8 = piVar14 + iVar1;
      bVar5 = true;
      while( true ) {
        bVar6 = bVar5;
        piVar4 = local_b8;
        if (*(int *)((longlong)param_3 + 0xa8) != iVar1) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (piVar14 == piVar4) break;
        iVar2 = *piVar14;
        FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar2);
        pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar2);
        piVar14 = piVar14 + 1;
        bVar5 = false;
        if ((int)(pFVar8->AreaWeightedSampler)._padding_ != 0) {
          bVar5 = bVar6;
        }
      }
      bVar6 = !bVar6;
      param_4 = local_res20;
LAB_148eef49b:
      if (!bVar6) {
LAB_148eef4a1:
        local_e8 = (undefined1  [8])0x0;
        local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_e0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_80);
        local_68 = &local_e0;
        puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_e0);
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar13 = FDelegateHandle::GenerateNewID();
          puVar12[2] = uVar13;
          *puVar12 = &
                     ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___0A___U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___00___TUNiagaraDataInterfaceSkeletalMesh_GetFilteredTriangleCountBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
          ;
          puVar12[3] = param_1;
        }
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_b0);
        if ((local_e0.DelegateSize != 0) &&
           (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_e0,0,0,0x10);
          local_e0.DelegateSize = 0;
        }
        if (local_b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
        }
        if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_e0.DelegateAllocator);
        }
        this = (FMRSWRecursiveAccessDetector *)local_e8;
        goto LAB_148eef3c8;
      }
    }
  }
  local_d0 = (undefined1  [8])0x0;
  local_c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_60);
  local_48 = &local_c8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_c8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___0A___U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___0A____TUNiagaraDataInterfaceSkeletalMesh_GetFilteredTriangleCountBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar12[3] = param_1;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_98);
  if ((local_c8.DelegateSize != 0) &&
     (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c8,0,0,0x10);
    local_c8.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c8.DelegateAllocator);
  }
  this = (FMRSWRecursiveAccessDetector *)local_d0;
LAB_148eef3c8:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,0>_> @ 148eef5a0

void __cdecl
TAreaWeightingModeBinder<TUNiagaraDataInterfaceSkeletalMesh_IsValidTriCoordBinder>::
Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,0>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  USkeletalMesh *pUVar7;
  FSkeletalMeshSamplingRegionBuiltData *pFVar8;
  FSkeletalMeshSamplingRegion *pFVar9;
  UObject *pUVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  FMRSWRecursiveAccessDetector *this;
  int *piVar14;
  undefined1 local_res18 [8];
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
  *local_res20;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  undefined1 local_d0 [8];
  FDelegateAllocation local_c8;
  int *local_b8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  local_res20 = param_4;
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                         ,0x21f,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  CastChecked<UNiagaraDataInterfaceSkeletalMesh,UNiagaraDataInterface>(param_1);
  if (*(char *)((longlong)param_3 + 0x318) != '\0') {
    if (*(int *)((longlong)param_3 + 0xa8) < 2) {
      if (*(int *)((longlong)param_3 + 0xa8) == 1) {
        iVar1 = **(int **)((longlong)param_3 + 0xa0);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        pFVar9 = FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar1);
        if ((pFVar9->bSupportUniformlyDistributedSampling != 0) &&
           (pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar1),
           0 < (int)(pFVar8->AreaWeightedSampler)._padding_)) goto LAB_148eef8f1;
      }
      else {
        iVar1 = *(int *)((longlong)param_3 + 0x31c);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        if ((-1 < iVar1) && (iVar1 < (pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.ArrayNum))
        {
          if ((iVar1 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (0 < *(int *)((pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.AllocatorInstance.
                           Data + (longlong)iVar1 * 0x48 + 0x10)) {
            pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
            lVar11 = (**(code **)(*(longlong *)pUVar10 + 0x330))(pUVar10,iVar1);
            bVar6 = (*(byte *)(lVar11 + 0xd0) & 0x20) == 0;
            goto LAB_148eef8eb;
          }
        }
      }
    }
    else if (0.0 < *(float *)((longlong)param_3 + 0xd8)) {
      pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
      USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
      piVar14 = *(int **)((longlong)param_3 + 0xa0);
      iVar1 = *(int *)((longlong)param_3 + 0xa8);
      local_b8 = piVar14 + iVar1;
      bVar5 = true;
      while( true ) {
        bVar6 = bVar5;
        piVar4 = local_b8;
        if (*(int *)((longlong)param_3 + 0xa8) != iVar1) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (piVar14 == piVar4) break;
        iVar2 = *piVar14;
        FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar2);
        pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar2);
        piVar14 = piVar14 + 1;
        bVar5 = false;
        if ((int)(pFVar8->AreaWeightedSampler)._padding_ != 0) {
          bVar5 = bVar6;
        }
      }
      bVar6 = !bVar6;
      param_4 = local_res20;
LAB_148eef8eb:
      if (!bVar6) {
LAB_148eef8f1:
        local_e8 = (undefined1  [8])0x0;
        local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_e0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_80);
        local_68 = &local_e0;
        puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_e0);
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar13 = FDelegateHandle::GenerateNewID();
          puVar12[2] = uVar13;
          *puVar12 = &
                     ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___0A___U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___00___TUNiagaraDataInterfaceSkeletalMesh_IsValidTriCoordBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
          ;
          puVar12[3] = param_1;
        }
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_b0);
        if ((local_e0.DelegateSize != 0) &&
           (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_e0,0,0,0x10);
          local_e0.DelegateSize = 0;
        }
        if (local_b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
        }
        if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_e0.DelegateAllocator);
        }
        this = (FMRSWRecursiveAccessDetector *)local_e8;
        goto LAB_148eef818;
      }
    }
  }
  local_d0 = (undefined1  [8])0x0;
  local_c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_60);
  local_48 = &local_c8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_c8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___0A___U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___0A____TUNiagaraDataInterfaceSkeletalMesh_IsValidTriCoordBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar12[3] = param_1;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_98);
  if ((local_c8.DelegateSize != 0) &&
     (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c8,0,0,0x10);
    local_c8.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c8.DelegateAllocator);
  }
  this = (FMRSWRecursiveAccessDetector *)local_d0;
LAB_148eef818:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,0>_> @ 148eef9f0

void __cdecl
TAreaWeightingModeBinder<TUNiagaraDataInterfaceSkeletalMesh_RandomTriCoordBinder>::
Bind<TIntegralConstant<enum_ENDISkeletalMesh_FilterMode,0>_>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  USkeletalMesh *pUVar7;
  FSkeletalMeshSamplingRegionBuiltData *pFVar8;
  FSkeletalMeshSamplingRegion *pFVar9;
  UObject *pUVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  FMRSWRecursiveAccessDetector *this;
  int *piVar14;
  undefined1 local_res18 [8];
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
  *local_res20;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  undefined1 local_d0 [8];
  FDelegateAllocation local_c8;
  int *local_b8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  local_res20 = param_4;
  if ((param_3 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                         ,0x21f,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  CastChecked<UNiagaraDataInterfaceSkeletalMesh,UNiagaraDataInterface>(param_1);
  if (*(char *)((longlong)param_3 + 0x318) != '\0') {
    if (*(int *)((longlong)param_3 + 0xa8) < 2) {
      if (*(int *)((longlong)param_3 + 0xa8) == 1) {
        iVar1 = **(int **)((longlong)param_3 + 0xa0);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        pFVar9 = FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar1);
        if ((pFVar9->bSupportUniformlyDistributedSampling != 0) &&
           (pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar1),
           0 < (int)(pFVar8->AreaWeightedSampler)._padding_)) goto LAB_148eefd41;
      }
      else {
        iVar1 = *(int *)((longlong)param_3 + 0x31c);
        pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
        USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
        if ((-1 < iVar1) && (iVar1 < (pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.ArrayNum))
        {
          if ((iVar1 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (0 < *(int *)((pUVar7->SamplingInfo).BuiltData.WholeMeshBuiltData.AllocatorInstance.
                           Data + (longlong)iVar1 * 0x48 + 0x10)) {
            pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
            lVar11 = (**(code **)(*(longlong *)pUVar10 + 0x330))(pUVar10,iVar1);
            bVar6 = (*(byte *)(lVar11 + 0xd0) & 0x20) == 0;
            goto LAB_148eefd3b;
          }
        }
      }
    }
    else if (0.0 < *(float *)((longlong)param_3 + 0xd8)) {
      pUVar7 = (USkeletalMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_3 + 0x50));
      USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar7,SamplingInfo,ReadOnly);
      piVar14 = *(int **)((longlong)param_3 + 0xa0);
      iVar1 = *(int *)((longlong)param_3 + 0xa8);
      local_b8 = piVar14 + iVar1;
      bVar5 = true;
      while( true ) {
        bVar6 = bVar5;
        piVar4 = local_b8;
        if (*(int *)((longlong)param_3 + 0xa8) != iVar1) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (piVar14 == piVar4) break;
        iVar2 = *piVar14;
        FSkeletalMeshSamplingInfo::GetRegion(&pUVar7->SamplingInfo,iVar2);
        pFVar8 = FSkeletalMeshSamplingInfo::GetRegionBuiltData(&pUVar7->SamplingInfo,iVar2);
        piVar14 = piVar14 + 1;
        bVar5 = false;
        if ((int)(pFVar8->AreaWeightedSampler)._padding_ != 0) {
          bVar5 = bVar6;
        }
      }
      bVar6 = !bVar6;
      param_4 = local_res20;
LAB_148eefd3b:
      if (!bVar6) {
LAB_148eefd41:
        local_e8 = (undefined1  [8])0x0;
        local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_e0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_80);
        local_68 = &local_e0;
        puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_e0);
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar13 = FDelegateHandle::GenerateNewID();
          puVar12[2] = uVar13;
          *puVar12 = &
                     ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___0A___U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___00___TUNiagaraDataInterfaceSkeletalMesh_RandomTriCoordBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
          ;
          puVar12[3] = param_1;
        }
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_b0);
        if ((local_e0.DelegateSize != 0) &&
           (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_e0,0,0,0x10);
          local_e0.DelegateSize = 0;
        }
        if (local_b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
        }
        if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_e0.DelegateAllocator);
        }
        this = (FMRSWRecursiveAccessDetector *)local_e8;
        goto LAB_148eefc68;
      }
    }
  }
  local_d0 = (undefined1  [8])0x0;
  local_c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_60);
  local_48 = &local_c8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_c8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant_W4ENDISkeletalMesh_FilterMode___0A___U__TIntegralConstant_W4ENDISkelMesh_AreaWeightingMode___0A____TUNiagaraDataInterfaceSkeletalMesh_RandomTriCoordBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar12[3] = param_1;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d0,
             (FWriteAccessScope *)&local_98);
  if ((local_c8.DelegateSize != 0) &&
     (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c8,0,0,0x10);
    local_c8.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c8.DelegateAllocator);
  }
  this = (FMRSWRecursiveAccessDetector *)local_d0;
LAB_148eefc68:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

