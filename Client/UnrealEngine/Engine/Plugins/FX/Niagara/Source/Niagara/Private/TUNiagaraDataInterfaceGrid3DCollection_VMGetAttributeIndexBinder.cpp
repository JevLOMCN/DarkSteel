// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// Bind<FName,int> @ 14915d520

void __cdecl
TUNiagaraDataInterfaceGrid3DCollection_VMGetAttributeIndexBinder::Bind<FName,int>
          (UNiagaraDataInterface *param_1,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_2,FName param_3,int param_4)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  UNiagaraDataInterface *local_40;
  FName FStack_38;
  int local_30;
  undefined4 uStack_2c;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  local_40 = param_1;
  FStack_38 = param_3;
  local_30 = param_4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[3] = local_40;
    *(FName *)(puVar1 + 4) = FStack_38;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_VFName__H_TUNiagaraDataInterfaceGrid3DCollection_VMGetAttributeIndexBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____VFName__H_Z___V__6B_
    ;
    puVar1[5] = CONCAT44(uStack_2c,local_30);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_30._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)FStack_38,(FDestructionSentinel *)&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return;
}

// operator() @ 14916bbc0

void __thiscall
`TUNiagaraDataInterfaceGrid3DCollection_VMGetAttributeIndexBinder::Bind<FName,int>'::__l2::
<lambda_1>::operator()(void *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int local_20 [2];
  FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread> local_18;
  
  iVar1 = *(int *)((longlong)this + 0x10);
  VectorVM::FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread>::
  FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread>(&local_18,param_1);
  iVar4 = 0;
  local_20[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  fVar2 = -NAN;
  iVar5 = local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (local_18.Ptr != (FGrid3DCollectionRWInstanceData_GameThread *)0x0) {
    fVar2 = (float)FGrid3DCollectionRWInstanceData_GameThread::FindAttributeIndexByName
                             (local_18.Ptr,(FName *)((longlong)this + 8),iVar1);
  }
  if (0 < param_1->NumInstances) {
    pfVar3 = pfVar3 + iVar5;
    do {
      iVar4 = iVar4 + 1;
      *pfVar3 = fVar2;
      pfVar3 = pfVar3 + local_20[0];
    } while (iVar4 < param_1->NumInstances);
  }
  return;
}

