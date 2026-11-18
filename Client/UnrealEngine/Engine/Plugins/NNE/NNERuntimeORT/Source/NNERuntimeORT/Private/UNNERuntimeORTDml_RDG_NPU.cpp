// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 13

// StaticClass @ 14eb00720

UClass * __cdecl UNNERuntimeORTDml_RDG_NPU::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTDml_RDG_NPU.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTDml_RDG_NPU",
               &Z_Registration_Info_UClass_UNNERuntimeORTDml_RDG_NPU.InnerSingleton,
               StaticRegisterNativesUNNERuntimeORTDml_RDG_NPU,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNNERuntimeORTDml_RDG_NPU>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTDml_RDG_NPU>,local_res8,
               UNNERuntimeORTDmlProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDml_RDG_NPU.InnerSingleton;
}

// UNNERuntimeORTDml_RDG_NPU @ 14eb061f0

UNNERuntimeORTDml_RDG_NPU * __thiscall
UNNERuntimeORTDml_RDG_NPU::UNNERuntimeORTDml_RDG_NPU
          (UNNERuntimeORTDml_RDG_NPU *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INNERuntime__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__INNERuntimeRDG__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__INNERuntimeNPU__;
  return this;
}

// UNNERuntimeORTDml_RDG_NPU @ 14eb06240

UNNERuntimeORTDml_RDG_NPU * __thiscall
UNNERuntimeORTDml_RDG_NPU::UNNERuntimeORTDml_RDG_NPU(UNNERuntimeORTDml_RDG_NPU *this)

{
  UNNERuntimeORTDmlProxy::UNNERuntimeORTDmlProxy((UNNERuntimeORTDmlProxy *)this);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INNERuntime__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__INNERuntimeRDG__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__INNERuntimeNPU__;
  return this;
}

// ~UNNERuntimeORTDml_RDG_NPU @ 14eb07480

void __thiscall
UNNERuntimeORTDml_RDG_NPU::~UNNERuntimeORTDml_RDG_NPU(UNNERuntimeORTDml_RDG_NPU *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INNERuntime__;
  *(undefined ***)&this->field_0x40 = &___7INNERuntimeNPU__6B_;
  *(undefined ***)&this->field_0x38 = &___7INNERuntimeRDG__6B_;
  puVar1 = *(undefined8 **)&this->field_0x30;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined ***)&this->field_0x28 = &___7INNERuntime__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CanCreateModelNPU @ 14eb0c530

EResultStatus __thiscall
UNNERuntimeORTDml_RDG_NPU::CanCreateModelNPU
          (UNNERuntimeORTDml_RDG_NPU *this,TObjectPtr<UNNEModelData> param_1)

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

// CanCreateModelRDG @ 14eb0c6f0

EResultStatus __thiscall
UNNERuntimeORTDml_RDG_NPU::CanCreateModelRDG
          (UNNERuntimeORTDml_RDG_NPU *this,TObjectPtr<UNNEModelData> param_1)

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

// CreateModelNPU @ 14eb114c0

TSharedPtr<UE::NNE::IModelNPU,1> * __thiscall
UNNERuntimeORTDml_RDG_NPU::CreateModelNPU
          (UNNERuntimeORTDml_RDG_NPU *this,TSharedPtr<UE::NNE::IModelNPU,1> *__return_storage_ptr__,
          TObjectPtr<UNNEModelData> param_1)

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

// CreateModelRDG @ 14eb11960

TSharedPtr<UE::NNE::IModelRDG,1> * __thiscall
UNNERuntimeORTDml_RDG_NPU::CreateModelRDG
          (UNNERuntimeORTDml_RDG_NPU *this,TSharedPtr<UE::NNE::IModelRDG,1> *__return_storage_ptr__,
          TObjectPtr<UNNEModelData> param_1)

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

// GetPrivateStaticClass @ 14eb16610

UClass * __cdecl UNNERuntimeORTDml_RDG_NPU::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTDml_RDG_NPU.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTDml_RDG_NPU",
               &Z_Registration_Info_UClass_UNNERuntimeORTDml_RDG_NPU.InnerSingleton,
               StaticRegisterNativesUNNERuntimeORTDml_RDG_NPU,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNNERuntimeORTDml_RDG_NPU>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTDml_RDG_NPU>,local_res8,
               UNNERuntimeORTDmlProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDml_RDG_NPU.InnerSingleton;
}

// StaticRegisterNativesUNNERuntimeORTDml_RDG_NPU @ 14eb1def0

void __cdecl UNNERuntimeORTDml_RDG_NPU::StaticRegisterNativesUNNERuntimeORTDml_RDG_NPU(void)

{
  return;
}

// _getUObject @ 14eb1ee40

UObject * __thiscall UNNERuntimeORTDml_RDG_NPU::_getUObject(UNNERuntimeORTDml_RDG_NPU *this)

{
  return (UObject *)&this[-1].field_0x20;
}

// _getUObject`adjustor{16}' @ 14eb1ee4c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UNNERuntimeORTDml_RDG_NPU::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall
UNNERuntimeORTDml_RDG_NPU::_getUObject_adjustor_16__(UNNERuntimeORTDml_RDG_NPU *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UNNERuntimeORTDml_RDG_NPU *)&this[-1].field_0x38);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{24}' @ 14eb1ee5c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UNNERuntimeORTDml_RDG_NPU::_getUObject`adjustor{24}' (void)const __ptr64 */

UObject * __thiscall
UNNERuntimeORTDml_RDG_NPU::_getUObject_adjustor_24__(UNNERuntimeORTDml_RDG_NPU *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UNNERuntimeORTDml_RDG_NPU *)&this[-1].field_0x30);
  return (UObject *)pUVar1;
}

