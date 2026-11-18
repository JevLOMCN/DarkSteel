// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 17

// StaticClass @ 14e0cad00

UClass * __cdecl UNiagaraDataInterfacePressureGrid::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfacePressureGrid.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"NiagaraDataInterfacePressureGrid",
               &Z_Registration_Info_UClass_UNiagaraDataInterfacePressureGrid.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfacePressureGrid,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfacePressureGrid>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfacePressureGrid>,local_res8,
               UNiagaraDataInterfaceVelocityGrid::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfacePressureGrid.InnerSingleton;
}

// UNiagaraDataInterfacePressureGrid @ 14e0d11e0

UNiagaraDataInterfacePressureGrid * __thiscall
UNiagaraDataInterfacePressureGrid::UNiagaraDataInterfacePressureGrid
          (UNiagaraDataInterfacePressureGrid *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,param_1);
  *(undefined ***)this = &___7UNiagaraDataInterfacePressureGrid__6B_;
  return this;
}

// UNiagaraDataInterfacePressureGrid @ 14e0d1210

UNiagaraDataInterfacePressureGrid * __thiscall
UNiagaraDataInterfacePressureGrid::UNiagaraDataInterfacePressureGrid
          (UNiagaraDataInterfacePressureGrid *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UNiagaraDataInterfaceVelocityGrid::UNiagaraDataInterfaceVelocityGrid
            ((UNiagaraDataInterfaceVelocityGrid *)this,param_1);
  *(undefined ***)this = &___7UNiagaraDataInterfacePressureGrid__6B_;
  puVar1 = ::operator_new(0x60);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    puVar1[10] = 0;
    *puVar1 = &___7FNDIPressureGridProxy__6B_;
    puVar2 = puVar1;
  }
  puVar1 = *(undefined8 **)&this->field_0x28;
  if ((puVar1 != puVar2) &&
     (*(undefined8 **)&this->field_0x28 = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined4 *)&this->field_0x44 = 0x12;
  return this;
}

// ~UNiagaraDataInterfacePressureGrid @ 14e0d1670

void __thiscall
UNiagaraDataInterfacePressureGrid::~UNiagaraDataInterfacePressureGrid
          (UNiagaraDataInterfacePressureGrid *this)

{
  *(undefined ***)this = &___7UNiagaraDataInterfaceVelocityGrid__6B_;
  UNiagaraDataInterfaceRWBase::~UNiagaraDataInterfaceRWBase((UNiagaraDataInterfaceRWBase *)this);
  return;
}

// BuildDensityField @ 14e0d9080

void __thiscall
UNiagaraDataInterfacePressureGrid::BuildDensityField
          (UNiagaraDataInterfacePressureGrid *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// BuildDistanceField @ 14e0d9090

void __thiscall
UNiagaraDataInterfacePressureGrid::BuildDistanceField
          (UNiagaraDataInterfacePressureGrid *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// ComputeBoundaryWeights @ 14e0d9f60

void __thiscall
UNiagaraDataInterfacePressureGrid::ComputeBoundaryWeights
          (UNiagaraDataInterfacePressureGrid *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// GetDensityField @ 14e0e9be0

void __thiscall
UNiagaraDataInterfacePressureGrid::GetDensityField
          (UNiagaraDataInterfacePressureGrid *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// GetNodePosition @ 14e0ea070

void __thiscall
UNiagaraDataInterfacePressureGrid::GetNodePosition
          (UNiagaraDataInterfacePressureGrid *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// GetPrivateStaticClass @ 14e0ea970

UClass * __cdecl UNiagaraDataInterfacePressureGrid::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfacePressureGrid.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"NiagaraDataInterfacePressureGrid",
               &Z_Registration_Info_UClass_UNiagaraDataInterfacePressureGrid.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfacePressureGrid,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfacePressureGrid>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfacePressureGrid>,local_res8,
               UNiagaraDataInterfaceVelocityGrid::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfacePressureGrid.InnerSingleton;
}

// GetVMExternalFunction @ 14e0f0180

void __thiscall
UNiagaraDataInterfacePressureGrid::GetVMExternalFunction
          (UNiagaraDataInterfacePressureGrid *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FMRSWRecursiveAccessDetector *this_00;
  undefined1 local_2d8 [8];
  FDelegateAllocation local_2d0;
  undefined1 local_2c0 [8];
  FDelegateAllocation local_2b8;
  undefined1 local_2a8 [8];
  FDelegateAllocation local_2a0;
  undefined1 local_290 [8];
  FDelegateAllocation local_288;
  undefined1 local_278 [8];
  FDelegateAllocation local_270;
  undefined1 local_260 [8];
  FDelegateAllocation local_258;
  undefined1 local_248 [8];
  FDelegateAllocation local_240;
  undefined1 local_230 [8];
  FDelegateAllocation local_228;
  undefined1 local_218 [8];
  FDelegateAllocation local_210;
  FDestructionSentinel local_200;
  FDestructionSentinel local_1e8;
  FDestructionSentinel local_1d0;
  FDestructionSentinel local_1b8;
  FDestructionSentinel local_1a0;
  FDestructionSentinel local_188;
  FDestructionSentinel local_170;
  FDestructionSentinel local_158;
  FDestructionSentinel local_140;
  FDestructionSentinel local_128;
  FDelegateAllocation *local_110;
  FDestructionSentinel local_108;
  FDelegateAllocation *local_f0;
  FDestructionSentinel local_e8;
  FDelegateAllocation *local_d0;
  FDestructionSentinel local_c8;
  FDelegateAllocation *local_b0;
  FDestructionSentinel local_a8;
  FDelegateAllocation *local_90;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  UNiagaraDataInterfaceVelocityGrid::GetVMExternalFunction
            ((UNiagaraDataInterfaceVelocityGrid *)this,param_1,param_2,param_3);
  FVar1 = param_1->Name;
  if (FVar1 == NDIPressureGridLocal::BuildDistanceFieldName) {
    if ((((param_1->InputParamLocations).ArrayNum != 8) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 8 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfacePressureGrid.cpp"
                           ,0xdc,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_2d8 = (undefined1  [8])0x0;
    local_2d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_2d0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2d8,
               (FWriteAccessScope *)&local_128);
    local_110 = &local_2d0;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_2d0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_BuildDistanceFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_128.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2d8,
               (FWriteAccessScope *)&local_200);
    if ((local_2d0.DelegateSize != 0) &&
       (local_2d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_2d0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_2d0,0,0,0x10);
      local_2d0.DelegateSize = 0;
    }
    if (local_200.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_200.Accessor,&local_200);
    }
    if (local_2d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_2d0.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_2d8;
  }
  else if (FVar1 == NDIPressureGridLocal::BuildDensityFieldName) {
    if ((((param_1->InputParamLocations).ArrayNum != 10) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 10 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfacePressureGrid.cpp"
                           ,0xe1,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_2c0 = (undefined1  [8])0x0;
    local_2b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_2b8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c0,
               (FWriteAccessScope *)&local_108);
    local_f0 = &local_2b8;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_2b8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_BuildDensityFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_108.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2c0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c0,
               (FWriteAccessScope *)&local_1e8);
    if ((local_2b8.DelegateSize != 0) &&
       (local_2b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_2b8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_2b8,0,0,0x10);
      local_2b8.DelegateSize = 0;
    }
    if (local_1e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
    }
    if (local_2b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_2b8.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_2c0;
  }
  else if (FVar1 == NDIPressureGridLocal::UpdateDeformationGradientName) {
    if ((((param_1->InputParamLocations).ArrayNum != 0x22) || (param_1->NumOutputs != 0x11)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 34 && BindingInfo.GetNumOutputs() == 17",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfacePressureGrid.cpp"
                           ,0xe6,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_2a8 = (undefined1  [8])0x0;
    local_2a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_2a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2a8,
               (FWriteAccessScope *)&local_e8);
    local_d0 = &local_2a0;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_2a0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_UpdateDeformationGradientBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2a8,
               (FWriteAccessScope *)&local_1d0);
    if ((local_2a0.DelegateSize != 0) &&
       (local_2a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_2a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_2a0,0,0,0x10);
      local_2a0.DelegateSize = 0;
    }
    if (local_1d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d0.Accessor,&local_1d0);
    }
    if (local_2a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_2a0.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_2a8;
  }
  else if (FVar1 == NDIPressureGridLocal::GetNodePositionName) {
    if ((((param_1->InputParamLocations).ArrayNum != 6) || (param_1->NumOutputs != 3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 6 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfacePressureGrid.cpp"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_290 = (undefined1  [8])0x0;
    local_288.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_288.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_290,
               (FWriteAccessScope *)&local_c8);
    local_b0 = &local_288;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_288);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_GetNodePositionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_290);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_290,
               (FWriteAccessScope *)&local_1b8);
    if ((local_288.DelegateSize != 0) &&
       (local_288.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_288.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_288,0,0,0x10);
      local_288.DelegateSize = 0;
    }
    if (local_1b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
    }
    if (local_288.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_288.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_290;
  }
  else if (FVar1 == NDIPressureGridLocal::GetDensityFieldName) {
    if ((((param_1->InputParamLocations).ArrayNum != 8) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 8 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfacePressureGrid.cpp"
                           ,0xf0,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_278 = (undefined1  [8])0x0;
    local_270.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_270.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_278,
               (FWriteAccessScope *)&local_a8);
    local_90 = &local_270;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_270);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_GetDensityFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_278);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_278,
               (FWriteAccessScope *)&local_1a0);
    if ((local_270.DelegateSize != 0) &&
       (local_270.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_270.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_270,0,0,0x10);
      local_270.DelegateSize = 0;
    }
    if (local_1a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
    }
    if (local_270.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_270.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_278;
  }
  else if (FVar1 == NDIPressureGridLocal::SolveGridPressureName) {
    if ((((param_1->InputParamLocations).ArrayNum != 3) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 3 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfacePressureGrid.cpp"
                           ,0xf5,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_260 = (undefined1  [8])0x0;
    local_258.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_258.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_260,
               (FWriteAccessScope *)&local_88);
    local_70 = &local_258;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_258);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_SolveGridPressureBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_260);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_260,
               (FWriteAccessScope *)&local_188);
    if ((local_258.DelegateSize != 0) &&
       (local_258.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_258.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_258,0,0,0x10);
      local_258.DelegateSize = 0;
    }
    if (local_188.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
    }
    if (local_258.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_258.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_260;
  }
  else if (FVar1 == NDIPressureGridLocal::SetSolidBoundaryName) {
    if ((((param_1->InputParamLocations).ArrayNum != 6) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 6 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfacePressureGrid.cpp"
                           ,0xfa,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_248 = (undefined1  [8])0x0;
    local_240.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_240.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_248,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_240;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_240);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_SetSolidBoundaryBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_248);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_248,
               (FWriteAccessScope *)&local_170);
    if ((local_240.DelegateSize != 0) &&
       (local_240.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_240.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_240,0,0,0x10);
      local_240.DelegateSize = 0;
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    if (local_240.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_240.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_248;
  }
  else if (FVar1 == NDIPressureGridLocal::ComputeBoundaryWeightsName) {
    if ((((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfacePressureGrid.cpp"
                           ,0xff,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_230 = (undefined1  [8])0x0;
    local_228.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_228.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_230,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_228;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_228);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_ComputeBoundaryWeightsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_230);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_230,
               (FWriteAccessScope *)&local_158);
    if ((local_228.DelegateSize != 0) &&
       (local_228.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_228.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_228,0,0,0x10);
      local_228.DelegateSize = 0;
    }
    if (local_158.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
    }
    if (local_228.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_228.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_230;
  }
  else {
    if (FVar1 != NDIPressureGridLocal::ScaleCellFieldsName) {
      return;
    }
    if ((((param_1->InputParamLocations).ArrayNum != 4) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 4 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfacePressureGrid.cpp"
                           ,0x104,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_218 = (undefined1  [8])0x0;
    local_210.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_210.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_218,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_210;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_210);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePressureGrid_ScaleCellFieldsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_218);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_218,
               (FWriteAccessScope *)&local_140);
    if ((local_210.DelegateSize != 0) &&
       (local_210.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_210.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_210,0,0,0x10);
      local_210.DelegateSize = 0;
    }
    if (local_140.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
    }
    if (local_210.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_210.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_218;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
  return;
}

// HasPreSimulateTick @ 14e0f1720

bool __thiscall
UNiagaraDataInterfacePressureGrid::HasPreSimulateTick(UNiagaraDataInterfacePressureGrid *this)

{
  return true;
}

// ScaleCellFields @ 14e0f6460

void __thiscall
UNiagaraDataInterfacePressureGrid::ScaleCellFields
          (UNiagaraDataInterfacePressureGrid *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// SetSolidBoundary @ 14e0f7550

void __thiscall
UNiagaraDataInterfacePressureGrid::SetSolidBoundary
          (UNiagaraDataInterfacePressureGrid *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// SolveGridPressure @ 14e0f7dd0

void __thiscall
UNiagaraDataInterfacePressureGrid::SolveGridPressure
          (UNiagaraDataInterfacePressureGrid *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// StaticRegisterNativesUNiagaraDataInterfacePressureGrid @ 14e0f8480

void __cdecl
UNiagaraDataInterfacePressureGrid::StaticRegisterNativesUNiagaraDataInterfacePressureGrid(void)

{
  return;
}

// UpdateDeformationGradient @ 14e0f9c80

void __thiscall
UNiagaraDataInterfacePressureGrid::UpdateDeformationGradient
          (UNiagaraDataInterfacePressureGrid *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

