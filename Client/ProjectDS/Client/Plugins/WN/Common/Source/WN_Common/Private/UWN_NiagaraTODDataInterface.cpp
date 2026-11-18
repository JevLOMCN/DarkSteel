// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 10

// StaticClass @ 149481870

UClass * __cdecl UWN_NiagaraTODDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_NiagaraTODDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_NiagaraTODDataInterface",
               &Z_Registration_Info_UClass_UWN_NiagaraTODDataInterface.InnerSingleton,
               StaticRegisterNativesUWN_NiagaraTODDataInterface,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_NiagaraTODDataInterface>,
               InternalVTableHelperCtorCaller<UWN_NiagaraTODDataInterface>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_NiagaraTODDataInterface.InnerSingleton;
}

// UWN_NiagaraTODDataInterface @ 14948e3d0

UWN_NiagaraTODDataInterface * __thiscall
UWN_NiagaraTODDataInterface::UWN_NiagaraTODDataInterface
          (UWN_NiagaraTODDataInterface *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  *(undefined ***)this = &___7UWN_NiagaraTODDataInterface__6B_;
  return this;
}

// UWN_NiagaraTODDataInterface @ 14948e400

UWN_NiagaraTODDataInterface * __thiscall
UWN_NiagaraTODDataInterface::UWN_NiagaraTODDataInterface
          (UWN_NiagaraTODDataInterface *this,FObjectInitializer *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  *(undefined ***)this = &___7UWN_NiagaraTODDataInterface__6B_;
  return this;
}

// ~UWN_NiagaraTODDataInterface @ 1494906f0

void __thiscall
UWN_NiagaraTODDataInterface::~UWN_NiagaraTODDataInterface(UWN_NiagaraTODDataInterface *this)

{
  *(undefined ***)this = &___7UWN_NiagaraTODDataInterface__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 149491bb0

void __thiscall
`UWN_NiagaraTODDataInterface::GetVMExternalFunction'::__l5::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_40 [4];
  int local_30 [4];
  int local_20 [4];
  int local_10 [2];
  
  iVar8 = 0;
  local_40[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar5 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  local_30[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar6 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  iVar7 = local_20[0] * param_1->PerInstanceFnInstanceIdx;
  local_10[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_10);
  if (0 < param_1->NumInstances) {
    pfVar4 = pfVar4 + local_10[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar3 = pfVar3 + iVar7;
    pfVar2 = pfVar2 + iVar6;
    pfVar1 = pfVar1 + iVar5;
    do {
      iVar8 = iVar8 + 1;
      *pfVar1 = WN_gTOD;
      *pfVar2 = WN_gDawnTOD;
      *pfVar3 = WN_gDuskTOD;
      *pfVar4 = WN_gTODDayNightTransitionRatio;
      pfVar4 = pfVar4 + local_10[0];
      pfVar3 = pfVar3 + local_20[0];
      pfVar2 = pfVar2 + local_30[0];
      pfVar1 = pfVar1 + local_40[0];
    } while (iVar8 < param_1->NumInstances);
  }
  return;
}

// CanExecuteOnTarget @ 149497e50

bool __thiscall
UWN_NiagaraTODDataInterface::CanExecuteOnTarget
          (UWN_NiagaraTODDataInterface *this,ENiagaraSimTarget param_1)

{
  return true;
}

// GetPrivateStaticClass @ 1494a1a90

UClass * __cdecl UWN_NiagaraTODDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_NiagaraTODDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_NiagaraTODDataInterface",
               &Z_Registration_Info_UClass_UWN_NiagaraTODDataInterface.InnerSingleton,
               StaticRegisterNativesUWN_NiagaraTODDataInterface,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_NiagaraTODDataInterface>,
               InternalVTableHelperCtorCaller<UWN_NiagaraTODDataInterface>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_NiagaraTODDataInterface.InnerSingleton;
}

// GetTODRelatedValues_VM @ 1494a2a60

void __thiscall
UWN_NiagaraTODDataInterface::GetTODRelatedValues_VM
          (UWN_NiagaraTODDataInterface *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_40 [4];
  int local_30 [4];
  int local_20 [4];
  int local_10 [2];
  
  iVar8 = 0;
  local_40[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar5 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  local_30[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar6 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  iVar7 = local_20[0] * param_1->PerInstanceFnInstanceIdx;
  local_10[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_10);
  if (0 < param_1->NumInstances) {
    pfVar4 = pfVar4 + local_10[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar3 = pfVar3 + iVar7;
    pfVar2 = pfVar2 + iVar6;
    pfVar1 = pfVar1 + iVar5;
    do {
      iVar8 = iVar8 + 1;
      *pfVar1 = WN_gTOD;
      *pfVar2 = WN_gDawnTOD;
      *pfVar3 = WN_gDuskTOD;
      *pfVar4 = WN_gTODDayNightTransitionRatio;
      pfVar4 = pfVar4 + local_10[0];
      pfVar3 = pfVar3 + local_20[0];
      pfVar2 = pfVar2 + local_30[0];
      pfVar1 = pfVar1 + local_40[0];
    } while (iVar8 < param_1->NumInstances);
  }
  return;
}

// GetVMExternalFunction @ 1494a3790

void __thiscall
UWN_NiagaraTODDataInterface::GetVMExternalFunction
          (UWN_NiagaraTODDataInterface *this,FVMExternalFunctionBindingInfo *param_1,void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  bVar1 = ::FName::Equals(param_1->Name,L"GetTODRelatedValues");
  if (bVar1) {
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UWN_NiagaraTODDataInterface::GetVMExternalFunction'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
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
  }
  return;
}

// StaticRegisterNativesUWN_NiagaraTODDataInterface @ 1494ae2d0

void __cdecl UWN_NiagaraTODDataInterface::StaticRegisterNativesUWN_NiagaraTODDataInterface(void)

{
  return;
}

