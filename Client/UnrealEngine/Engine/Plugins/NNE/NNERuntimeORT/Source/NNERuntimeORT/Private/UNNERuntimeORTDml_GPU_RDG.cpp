// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 13

// StaticClass @ 14eb01c30

UClass * __cdecl UNNERuntimeORTDml_GPU_RDG::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTDml_GPU_RDG",
               &Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG.InnerSingleton,
               StaticRegisterNativesUNNERuntimeORTDml_GPU_RDG,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNNERuntimeORTDml_GPU_RDG>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTDml_GPU_RDG>,local_res8,
               UNNERuntimeORTDmlProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG.InnerSingleton;
}

// UNNERuntimeORTDml_GPU_RDG @ 14eb05f70

UNNERuntimeORTDml_GPU_RDG * __thiscall
UNNERuntimeORTDml_GPU_RDG::UNNERuntimeORTDml_GPU_RDG
          (UNNERuntimeORTDml_GPU_RDG *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INNERuntime__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__INNERuntimeGPU__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__INNERuntimeRDG__;
  return this;
}

// UNNERuntimeORTDml_GPU_RDG @ 14eb05fc0

UNNERuntimeORTDml_GPU_RDG * __thiscall
UNNERuntimeORTDml_GPU_RDG::UNNERuntimeORTDml_GPU_RDG(UNNERuntimeORTDml_GPU_RDG *this)

{
  UNNERuntimeORTDmlProxy::UNNERuntimeORTDmlProxy((UNNERuntimeORTDmlProxy *)this);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INNERuntime__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__INNERuntimeGPU__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__INNERuntimeRDG__;
  return this;
}

// ~UNNERuntimeORTDml_GPU_RDG @ 14eb072e0

void __thiscall
UNNERuntimeORTDml_GPU_RDG::~UNNERuntimeORTDml_GPU_RDG(UNNERuntimeORTDml_GPU_RDG *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INNERuntime__;
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

// CanCreateModelGPU @ 14eb0c320

EResultStatus __thiscall
UNNERuntimeORTDml_GPU_RDG::CanCreateModelGPU
          (UNNERuntimeORTDml_GPU_RDG *this,TObjectPtr<UNNEModelData> param_1)

{
  longlong lVar1;
  code *pcVar2;
  EResultStatus EVar3;
  UObject *local_res8;
  
  lVar1 = *(longlong *)&this[-1].field_0x40;
  local_res8 = *(UObject **)param_1.field0_0x0;
  pcVar2 = *(code **)(*(longlong *)(lVar1 + 8) + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  EVar3 = (*pcVar2)(lVar1 + 8,&local_res8);
  return EVar3;
}

// CanCreateModelRDG @ 14eb0c600

EResultStatus __thiscall
UNNERuntimeORTDml_GPU_RDG::CanCreateModelRDG
          (UNNERuntimeORTDml_GPU_RDG *this,TObjectPtr<UNNEModelData> param_1)

{
  longlong lVar1;
  code *pcVar2;
  EResultStatus EVar3;
  UObject *local_res8;
  
  lVar1 = *(longlong *)&this[-1].field_0x38;
  local_res8 = *(UObject **)param_1.field0_0x0;
  pcVar2 = *(code **)(*(longlong *)(lVar1 + 0x10) + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  EVar3 = (*pcVar2)(lVar1 + 0x10,&local_res8);
  return EVar3;
}

// CreateModelGPU @ 14eb10940

TSharedPtr<UE::NNE::IModelGPU,1> * __thiscall
UNNERuntimeORTDml_GPU_RDG::CreateModelGPU
          (UNNERuntimeORTDml_GPU_RDG *this,TSharedPtr<UE::NNE::IModelGPU,1> *__return_storage_ptr__,
          TObjectPtr<UNNEModelData> param_1)

{
  longlong lVar1;
  code *pcVar2;
  UObject *local_res8;
  
  lVar1 = *(longlong *)&this[-1].field_0x40;
  local_res8 = *(UObject **)param_1.field0_0x0;
  pcVar2 = *(code **)(*(longlong *)(lVar1 + 8) + 0x18);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  (*pcVar2)(lVar1 + 8,__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// CreateModelRDG @ 14eb11840

TSharedPtr<UE::NNE::IModelRDG,1> * __thiscall
UNNERuntimeORTDml_GPU_RDG::CreateModelRDG
          (UNNERuntimeORTDml_GPU_RDG *this,TSharedPtr<UE::NNE::IModelRDG,1> *__return_storage_ptr__,
          TObjectPtr<UNNEModelData> param_1)

{
  longlong lVar1;
  code *pcVar2;
  UObject *local_res8;
  
  lVar1 = *(longlong *)&this[-1].field_0x38;
  local_res8 = *(UObject **)param_1.field0_0x0;
  pcVar2 = *(code **)(*(longlong *)(lVar1 + 0x10) + 0x18);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  (*pcVar2)(lVar1 + 0x10,__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14eb16310

UClass * __cdecl UNNERuntimeORTDml_GPU_RDG::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTDml_GPU_RDG",
               &Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG.InnerSingleton,
               StaticRegisterNativesUNNERuntimeORTDml_GPU_RDG,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNNERuntimeORTDml_GPU_RDG>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTDml_GPU_RDG>,local_res8,
               UNNERuntimeORTDmlProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG.InnerSingleton;
}

// StaticRegisterNativesUNNERuntimeORTDml_GPU_RDG @ 14eb1deb0

void __cdecl UNNERuntimeORTDml_GPU_RDG::StaticRegisterNativesUNNERuntimeORTDml_GPU_RDG(void)

{
  return;
}

// _getUObject @ 14eb1ed90

UObject * __thiscall UNNERuntimeORTDml_GPU_RDG::_getUObject(UNNERuntimeORTDml_GPU_RDG *this)

{
  return (UObject *)&this[-1].field_0x20;
}

// _getUObject`adjustor{16}' @ 14eb1ed9c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UNNERuntimeORTDml_GPU_RDG::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall
UNNERuntimeORTDml_GPU_RDG::_getUObject_adjustor_16__(UNNERuntimeORTDml_GPU_RDG *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UNNERuntimeORTDml_GPU_RDG *)&this[-1].field_0x38);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{24}' @ 14eb1edac

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UNNERuntimeORTDml_GPU_RDG::_getUObject`adjustor{24}' (void)const __ptr64 */

UObject * __thiscall
UNNERuntimeORTDml_GPU_RDG::_getUObject_adjustor_24__(UNNERuntimeORTDml_GPU_RDG *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UNNERuntimeORTDml_GPU_RDG *)&this[-1].field_0x30);
  return (UObject *)pUVar1;
}

