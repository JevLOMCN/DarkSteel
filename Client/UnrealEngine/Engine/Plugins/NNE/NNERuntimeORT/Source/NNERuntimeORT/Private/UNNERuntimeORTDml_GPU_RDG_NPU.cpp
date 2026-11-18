// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 16

// StaticClass @ 14eb01930

UClass * __cdecl UNNERuntimeORTDml_GPU_RDG_NPU::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG_NPU.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTDml_GPU_RDG_NPU",
               &Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG_NPU.InnerSingleton,
               StaticRegisterNativesUNNERuntimeORTDml_GPU_RDG_NPU,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNNERuntimeORTDml_GPU_RDG_NPU>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTDml_GPU_RDG_NPU>,local_res8,
               UNNERuntimeORTDmlProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG_NPU.InnerSingleton;
}

// UNNERuntimeORTDml_GPU_RDG_NPU @ 14eb06010

UNNERuntimeORTDml_GPU_RDG_NPU * __thiscall
UNNERuntimeORTDml_GPU_RDG_NPU::UNNERuntimeORTDml_GPU_RDG_NPU
          (UNNERuntimeORTDml_GPU_RDG_NPU *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INNERuntime__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__INNERuntimeGPU__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__INNERuntimeRDG__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__INNERuntimeNPU__;
  return this;
}

// UNNERuntimeORTDml_GPU_RDG_NPU @ 14eb06070

UNNERuntimeORTDml_GPU_RDG_NPU * __thiscall
UNNERuntimeORTDml_GPU_RDG_NPU::UNNERuntimeORTDml_GPU_RDG_NPU(UNNERuntimeORTDml_GPU_RDG_NPU *this)

{
  UNNERuntimeORTDmlProxy::UNNERuntimeORTDmlProxy((UNNERuntimeORTDmlProxy *)this);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INNERuntime__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__INNERuntimeGPU__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__INNERuntimeRDG__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__INNERuntimeNPU__;
  return this;
}

// ~UNNERuntimeORTDml_GPU_RDG_NPU @ 14eb07350

void __thiscall
UNNERuntimeORTDml_GPU_RDG_NPU::~UNNERuntimeORTDml_GPU_RDG_NPU(UNNERuntimeORTDml_GPU_RDG_NPU *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INNERuntime__;
  *(undefined ***)&this->field_0x48 = &___7INNERuntimeNPU__6B_;
  *(undefined ***)&this->field_0x40 = &___7INNERuntimeRDG__6B_;
  *(undefined ***)&this->field_0x38 = &___7INNERuntimeGPU__6B_;
  puVar1 = *(undefined8 **)&this->field_0x30;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined ***)&this->field_0x28 = &___7INNERuntime__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CanCreateModelGPU @ 14eb0c370

EResultStatus __thiscall
UNNERuntimeORTDml_GPU_RDG_NPU::CanCreateModelGPU
          (UNNERuntimeORTDml_GPU_RDG_NPU *this,TObjectPtr<UNNEModelData> param_1)

{
  longlong lVar1;
  code *pcVar2;
  EResultStatus EVar3;
  UObject *local_res8;
  
  lVar1 = *(longlong *)&this[-1].field_0x48;
  local_res8 = *(UObject **)param_1.field0_0x0;
  pcVar2 = *(code **)(*(longlong *)(lVar1 + 8) + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  EVar3 = (*pcVar2)(lVar1 + 8,&local_res8);
  return EVar3;
}

// CanCreateModelNPU @ 14eb0c490

EResultStatus __thiscall
UNNERuntimeORTDml_GPU_RDG_NPU::CanCreateModelNPU
          (UNNERuntimeORTDml_GPU_RDG_NPU *this,TObjectPtr<UNNEModelData> param_1)

{
  longlong lVar1;
  code *pcVar2;
  EResultStatus EVar3;
  UObject *local_res8;
  
  lVar1 = *(longlong *)&this[-1].field_0x38;
  local_res8 = *(UObject **)param_1.field0_0x0;
  pcVar2 = *(code **)(*(longlong *)(lVar1 + 0x18) + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  EVar3 = (*pcVar2)(lVar1 + 0x18,&local_res8);
  return EVar3;
}

// CanCreateModelRDG @ 14eb0c650

EResultStatus __thiscall
UNNERuntimeORTDml_GPU_RDG_NPU::CanCreateModelRDG
          (UNNERuntimeORTDml_GPU_RDG_NPU *this,TObjectPtr<UNNEModelData> param_1)

{
  longlong lVar1;
  code *pcVar2;
  EResultStatus EVar3;
  UObject *local_res8;
  
  lVar1 = *(longlong *)&this[-1].field_0x40;
  local_res8 = *(UObject **)param_1.field0_0x0;
  pcVar2 = *(code **)(*(longlong *)(lVar1 + 0x10) + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  EVar3 = (*pcVar2)(lVar1 + 0x10,&local_res8);
  return EVar3;
}

// CreateModelGPU @ 14eb109a0

TSharedPtr<UE::NNE::IModelGPU,1> * __thiscall
UNNERuntimeORTDml_GPU_RDG_NPU::CreateModelGPU
          (UNNERuntimeORTDml_GPU_RDG_NPU *this,
          TSharedPtr<UE::NNE::IModelGPU,1> *__return_storage_ptr__,TObjectPtr<UNNEModelData> param_1
          )

{
  longlong lVar1;
  code *pcVar2;
  UObject *local_res8;
  
  lVar1 = *(longlong *)&this[-1].field_0x48;
  local_res8 = *(UObject **)param_1.field0_0x0;
  pcVar2 = *(code **)(*(longlong *)(lVar1 + 8) + 0x18);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  (*pcVar2)(lVar1 + 8,__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// CreateModelNPU @ 14eb11400

TSharedPtr<UE::NNE::IModelNPU,1> * __thiscall
UNNERuntimeORTDml_GPU_RDG_NPU::CreateModelNPU
          (UNNERuntimeORTDml_GPU_RDG_NPU *this,
          TSharedPtr<UE::NNE::IModelNPU,1> *__return_storage_ptr__,TObjectPtr<UNNEModelData> param_1
          )

{
  longlong lVar1;
  code *pcVar2;
  UObject *local_res8;
  
  lVar1 = *(longlong *)&this[-1].field_0x38;
  local_res8 = *(UObject **)param_1.field0_0x0;
  pcVar2 = *(code **)(*(longlong *)(lVar1 + 0x18) + 0x18);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  (*pcVar2)(lVar1 + 0x18,__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// CreateModelRDG @ 14eb118a0

TSharedPtr<UE::NNE::IModelRDG,1> * __thiscall
UNNERuntimeORTDml_GPU_RDG_NPU::CreateModelRDG
          (UNNERuntimeORTDml_GPU_RDG_NPU *this,
          TSharedPtr<UE::NNE::IModelRDG,1> *__return_storage_ptr__,TObjectPtr<UNNEModelData> param_1
          )

{
  longlong lVar1;
  code *pcVar2;
  UObject *local_res8;
  
  lVar1 = *(longlong *)&this[-1].field_0x40;
  local_res8 = *(UObject **)param_1.field0_0x0;
  pcVar2 = *(code **)(*(longlong *)(lVar1 + 0x10) + 0x18);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  (*pcVar2)(lVar1 + 0x10,__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14eb163d0

UClass * __cdecl UNNERuntimeORTDml_GPU_RDG_NPU::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG_NPU.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTDml_GPU_RDG_NPU",
               &Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG_NPU.InnerSingleton,
               StaticRegisterNativesUNNERuntimeORTDml_GPU_RDG_NPU,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNNERuntimeORTDml_GPU_RDG_NPU>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTDml_GPU_RDG_NPU>,local_res8,
               UNNERuntimeORTDmlProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG_NPU.InnerSingleton;
}

// StaticRegisterNativesUNNERuntimeORTDml_GPU_RDG_NPU @ 14eb1dec0

void __cdecl UNNERuntimeORTDml_GPU_RDG_NPU::StaticRegisterNativesUNNERuntimeORTDml_GPU_RDG_NPU(void)

{
  return;
}

// _getUObject @ 14eb1edc0

UObject * __thiscall UNNERuntimeORTDml_GPU_RDG_NPU::_getUObject(UNNERuntimeORTDml_GPU_RDG_NPU *this)

{
  return (UObject *)&this[-1].field_0x28;
}

// _getUObject`adjustor{16}' @ 14eb1edcc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UNNERuntimeORTDml_GPU_RDG_NPU::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall
UNNERuntimeORTDml_GPU_RDG_NPU::_getUObject_adjustor_16__(UNNERuntimeORTDml_GPU_RDG_NPU *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UNNERuntimeORTDml_GPU_RDG_NPU *)&this[-1].field_0x40);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{24}' @ 14eb1eddc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UNNERuntimeORTDml_GPU_RDG_NPU::_getUObject`adjustor{24}' (void)const __ptr64 */

UObject * __thiscall
UNNERuntimeORTDml_GPU_RDG_NPU::_getUObject_adjustor_24__(UNNERuntimeORTDml_GPU_RDG_NPU *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UNNERuntimeORTDml_GPU_RDG_NPU *)&this[-1].field_0x38);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{32}' @ 14eb1edec

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UNNERuntimeORTDml_GPU_RDG_NPU::_getUObject`adjustor{32}' (void)const __ptr64 */

UObject * __thiscall
UNNERuntimeORTDml_GPU_RDG_NPU::_getUObject_adjustor_32__(UNNERuntimeORTDml_GPU_RDG_NPU *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UNNERuntimeORTDml_GPU_RDG_NPU *)&this[-1].field_0x30);
  return (UObject *)pUVar1;
}

