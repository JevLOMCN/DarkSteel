// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 24

// Bind<TIntegralConstant<bool,1>,FNDITransformHandler> @ 1491efac0

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,1>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandler__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandler__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,1>,FNDITransformHandler> @ 1491efd20

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,1>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandler__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandler__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,1>,FNDITransformHandler> @ 1491eff80

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,1>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandler__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandler__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,1>,FNDITransformHandler> @ 1491f01e0

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,1>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandler__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandler__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,1>,FNDITransformHandler> @ 1491f0440

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,1>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandler__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandler__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,1>,FNDITransformHandler> @ 1491f06a0

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,1>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandler__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandler__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop> @ 1491f0900

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandlerNoop__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandlerNoop__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop> @ 1491f0b60

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandlerNoop__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandlerNoop__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop> @ 1491f0dc0

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandlerNoop__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandlerNoop__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop> @ 1491f1020

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandlerNoop__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandlerNoop__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop> @ 1491f1280

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandlerNoop__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandlerNoop__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop> @ 1491f14e0

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandlerNoop__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_00__UFNDITransformHandlerNoop__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,0>,FNDITransformHandler> @ 1491f1740

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,0>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandler__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandler__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,0>,FNDITransformHandler> @ 1491f19a0

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,0>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandler__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandler__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,0>,FNDITransformHandler> @ 1491f1c00

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,0>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandler__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandler__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,0>,FNDITransformHandler> @ 1491f1e60

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,0>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandler__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandler__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,0>,FNDITransformHandler> @ 1491f20c0

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,0>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandler__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandler__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,0>,FNDITransformHandler> @ 1491f2320

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,0>,FNDITransformHandler>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandler__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandler__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop> @ 1491f2580

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandlerNoop__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandlerNoop__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop> @ 1491f27e0

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandlerNoop__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandlerNoop__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop> @ 1491f2a40

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandlerNoop__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandlerNoop__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop> @ 1491f2ca0

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandlerNoop__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandlerNoop__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop> @ 1491f2f00

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandlerNoop__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandlerNoop__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

// Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop> @ 1491f3160

void __cdecl
TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder>::
Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop>
          (UNiagaraDataInterface *param_1,FVMExternalFunctionBindingInfo *param_2,void *param_3,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if ((param_2->InputParamLocations).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->InputParamLocations).AllocatorInstance.Data[1] == (FScriptContainerElement)0x0) {
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandlerNoop__U__FExternalFuncRegisterHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_90;
  }
  else {
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_U__TIntegralConstant__N_0A___UFNDITransformHandlerNoop__U__FExternalFuncConstHandler_M_VectorVM___TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder__SAXPEAVUNiagaraDataInterface__AEBUFVMExternalFunctionBindingInfo__PEAXAEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = param_1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return;
}

