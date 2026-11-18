// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// operator() @ 14e0d2b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`TUNiagaraDataInterfaceHairStrands_GetWorldInverseBinder::Bind'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  TMatrix<double> *this_00;
  undefined1 auStack_148 [32];
  FUserPtrHandler<FNDIHairStrandsData> local_128;
  TMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_128,param_1);
  this_00 = UE::Math::TTransform<double>::ToMatrixWithScale
                      (&(local_128.Ptr)->WorldTransform,&local_98);
  UE::Math::TMatrix<double>::Inverse(this_00,&local_118);
  WriteTransform(&local_118,param_1);
  return;
}

// Bind @ 14e0d6cd0

void __cdecl
TUNiagaraDataInterfaceHairStrands_GetWorldInverseBinder::Bind
          (UNiagaraDataInterface *param_1,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetWorldInverseBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
    ;
    puVar1[3] = param_1;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  return;
}

