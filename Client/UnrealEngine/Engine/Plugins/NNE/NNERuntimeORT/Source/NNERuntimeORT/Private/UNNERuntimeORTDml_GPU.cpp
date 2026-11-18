// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 10

// StaticClass @ 14eb007e0

UClass * __cdecl UNNERuntimeORTDml_GPU::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTDml_GPU",
               &Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU.InnerSingleton,
               StaticRegisterNativesUNNERuntimeORTDml_GPU,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNNERuntimeORTDml_GPU>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTDml_GPU>,local_res8,
               UNNERuntimeORTDmlProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU.InnerSingleton;
}

// UNNERuntimeORTDml_GPU @ 14eb05e40

UNNERuntimeORTDml_GPU * __thiscall
UNNERuntimeORTDml_GPU::UNNERuntimeORTDml_GPU(UNNERuntimeORTDml_GPU *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INNERuntime__;
  *(undefined ***)&this->field_0x38 = &___7UNNERuntimeORTDml_GPU__6B_;
  return this;
}

// UNNERuntimeORTDml_GPU @ 14eb05e90

UNNERuntimeORTDml_GPU * __thiscall
UNNERuntimeORTDml_GPU::UNNERuntimeORTDml_GPU(UNNERuntimeORTDml_GPU *this)

{
  UNNERuntimeORTDmlProxy::UNNERuntimeORTDmlProxy((UNNERuntimeORTDmlProxy *)this);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INNERuntime__;
  *(undefined ***)&this->field_0x38 = &___7UNNERuntimeORTDml_GPU__6B_;
  return this;
}

// ~UNNERuntimeORTDml_GPU @ 14eb07210

void __thiscall UNNERuntimeORTDml_GPU::~UNNERuntimeORTDml_GPU(UNNERuntimeORTDml_GPU *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INNERuntime__;
  *(undefined ***)&this->field_0x38 = &___7INNERuntimeGPU__6B_;
  puVar1 = *(undefined8 **)&this->field_0x30;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined ***)&this->field_0x28 = &___7INNERuntime__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CanCreateModelGPU @ 14eb0c280

EResultStatus __thiscall
UNNERuntimeORTDml_GPU::CanCreateModelGPU
          (UNNERuntimeORTDml_GPU *this,TObjectPtr<UNNEModelData> param_1)

{
  longlong lVar1;
  code *pcVar2;
  EResultStatus EVar3;
  UObject *local_res8;
  
  lVar1 = *(longlong *)&this[-1].field_0x38;
  local_res8 = *(UObject **)param_1.field0_0x0;
  pcVar2 = *(code **)(*(longlong *)(lVar1 + 8) + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  EVar3 = (*pcVar2)(lVar1 + 8,&local_res8);
  return EVar3;
}

// CreateModelGPU @ 14eb10880

TSharedPtr<UE::NNE::IModelGPU,1> * __thiscall
UNNERuntimeORTDml_GPU::CreateModelGPU
          (UNNERuntimeORTDml_GPU *this,TSharedPtr<UE::NNE::IModelGPU,1> *__return_storage_ptr__,
          TObjectPtr<UNNEModelData> param_1)

{
  longlong lVar1;
  code *pcVar2;
  UObject *local_res8;
  
  lVar1 = *(longlong *)&this[-1].field_0x38;
  local_res8 = *(UObject **)param_1.field0_0x0;
  pcVar2 = *(code **)(*(longlong *)(lVar1 + 8) + 0x18);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  (*pcVar2)(lVar1 + 8,__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14eb16190

UClass * __cdecl UNNERuntimeORTDml_GPU::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTDml_GPU",
               &Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU.InnerSingleton,
               StaticRegisterNativesUNNERuntimeORTDml_GPU,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNNERuntimeORTDml_GPU>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTDml_GPU>,local_res8,
               UNNERuntimeORTDmlProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU.InnerSingleton;
}

// StaticRegisterNativesUNNERuntimeORTDml_GPU @ 14eb1de90

void __cdecl UNNERuntimeORTDml_GPU::StaticRegisterNativesUNNERuntimeORTDml_GPU(void)

{
  return;
}

// _getUObject @ 14eb1ed40

UObject * __thiscall UNNERuntimeORTDml_GPU::_getUObject(UNNERuntimeORTDml_GPU *this)

{
  return (UObject *)&this[-1].field_0x18;
}

// _getUObject`adjustor{16}' @ 14eb1ed4c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UNNERuntimeORTDml_GPU::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall UNNERuntimeORTDml_GPU::_getUObject_adjustor_16__(UNNERuntimeORTDml_GPU *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UNNERuntimeORTDml_GPU *)&this[-1].field_0x30);
  return (UObject *)pUVar1;
}

