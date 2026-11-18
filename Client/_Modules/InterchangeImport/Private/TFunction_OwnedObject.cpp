// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 68

// ~TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(float_const_*),0,0> @ 14e6912e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(float_const_*),0,0>::
~TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(float_const_*),0,0>
          (TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(float_const_*),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector_M_Math_UE__PEBM_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 14e698560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(float_const_*),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(float_const_*),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AU__TVector_M_Math_UE__PEBM_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TVector<float>_float_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e698580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l9::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::`9'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14e6985e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::__l14::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::`14'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e698600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::__l24::<lambda_2>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::`24'::<lambda_2>,0,1>
             ::_vftable_;
  `UInterchangeAnimSequenceFactory::CreatePayloadTasks'::__l24::<lambda_2>::<lambda_2>
            (puVar1 + 1,(<lambda_2> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14e698660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l12::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::`12'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e698680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l13::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::`13'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14e69a220

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(float_const_*),0,0>::Destroy
          (TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(float_const_*),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e69a225. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14e69a230

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l9::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e69a260

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::__l14::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e69a265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e69a270

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::__l24::<lambda_2>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e69a2a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l12::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e69a2a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e69a2b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l13::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e69a2b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14e69b7e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(float_const_*),0,0>::GetAddress
          (TFunction_OwnedObject<UE::Math::TVector<float>_(__cdecl*)(float_const_*),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14e69b7f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l9::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e69b800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::__l14::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e69b810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::__l24::<lambda_2>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e69b820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l12::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e69b830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l13::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 14e6c0ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeGLTFTranslator::GetVariantSetPayloadData'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x68,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UInterchangeGLTFTranslator::GetVariantSetPayloadData'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)
   &((TSet<TTuple<wchar_t_const_*,UE::Interchange::FVariant_*>,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>,FDefaultSetAllocator>
      *)(puVar1 + 2))->Elements = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
  *(undefined4 *)(puVar1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  TSet<TTuple<wchar_t_const_*,UE::Interchange::FVariant_*>,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<wchar_t_const_*,UE::Interchange::FVariant_*>,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>,FDefaultSetAllocator>
               *)(puVar1 + 2),
              (TSet<TTuple<wchar_t_const_*,UE::Interchange::FVariant_*>,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>,FDefaultSetAllocator>
               *)((longlong)this + 0x10));
  puVar1[0xc] = *(undefined8 *)((longlong)this + 0x60);
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14e6c1080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeGLTFTranslator::HandleGltfVariants'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UInterchangeGLTFTranslator::HandleGltfVariants'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14e6c10e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeGroomFactory::CreatePayloadTasks'::__l32::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UInterchangeGroomFactory::CreatePayloadTasks'::`32'::<lambda_1>,0,1>
             ::_vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
  ::FString::FString((FString *)(puVar1 + 3),(FString *)((longlong)this + 0x18));
  *(undefined1 *)(puVar1 + 5) = *(undefined1 *)((longlong)this + 0x28);
  *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)((longlong)this + 0x2c);
  return puVar1 + 1;
}

// Destroy @ 14e6c20f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeGLTFTranslator::GetVariantSetPayloadData'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e6c2120

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeGLTFTranslator::HandleGltfVariants'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e6c2150

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeGroomFactory::CreatePayloadTasks'::__l32::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14e6c27f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeGLTFTranslator::GetVariantSetPayloadData'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e6c2800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeGLTFTranslator::HandleGltfVariants'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e6c2810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeGroomFactory::CreatePayloadTasks'::__l32::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<void_(__cdecl*)(TObjectPtr<UMaterialInterface>_&),0,0> @ 14e6e0d40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(TObjectPtr<UMaterialInterface>_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(TObjectPtr<UMaterialInterface>_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(TObjectPtr<UMaterialInterface>_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAU__TObjectPtr_VUMaterialInterface_____Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(FSkeletalMaterial_&),0,0> @ 14e6e0d60

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FSkeletalMaterial_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(FSkeletalMaterial_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FSkeletalMaterial_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAUFSkeletalMaterial___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(FStaticMaterial_&),0,0> @ 14e6e0d80

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FStaticMaterial_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(FStaticMaterial_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FStaticMaterial_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAUFStaticMaterial___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(FObjData_&,TStringView<wchar_t>),0,0> @ 14e6e0da0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(FObjData_&,TStringView<wchar_t>),0,0>::
~TFunction_OwnedObject<bool_(__cdecl*)(FObjData_&,TStringView<wchar_t>),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(FObjData_&,TStringView<wchar_t>),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NAEAUFObjData__V__TStringView__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 14e6ec1c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(TObjectPtr<UMaterialInterface>_&),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<void_(__cdecl*)(TObjectPtr<UMaterialInterface>_&),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAU__TObjectPtr_VUMaterialInterface_____Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_TObjectPtr<UMaterialInterface>_ptr **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e6ec1e0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FSkeletalMaterial_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(FSkeletalMaterial_&),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAUFSkeletalMaterial___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FSkeletalMaterial_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e6ec200

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FStaticMaterial_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(FStaticMaterial_&),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAUFStaticMaterial___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FStaticMaterial_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e6ec220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(FObjData_&,TStringView<wchar_t>),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<bool_(__cdecl*)(FObjData_&,TStringView<wchar_t>),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_NAEAUFObjData__V__TStringView__W___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_bool_FObjData_ptr_TStringView<wchar_t> **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e6ec240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<TObjectPtr<UMaterialInterface>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____InternalMeshFactorySetupAssetMaterialArray_U__TObjectPtr_VUMaterialInterface_____MeshHelper_Private_Interchange_UE__YAXAEAV__FMeshMaterialArrayViewer_U__TObjectPtr_VUMaterialInterface_____2345_V__TMap_VFString__V1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFString__V1__0A_____PEBVUInterchangeBaseNodeContainer___N_Z_QEBA_AEBVFName__PEAVUMaterialInterface__H_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e6ec260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<FSkeletalMaterial>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____InternalMeshFactorySetupAssetMaterialArray_UFSkeletalMaterial___MeshHelper_Private_Interchange_UE__YAXAEAV__FMeshMaterialArrayViewer_UFSkeletalMaterial___2345_V__TMap_VFString__V1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFString__V1__0A_____PEBVUInterchangeBaseNodeContainer___N_Z_QEBA_AEBVFName__PEAVUMaterialInterface__H_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e6ec280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<FStaticMaterial>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____InternalMeshFactorySetupAssetMaterialArray_UFStaticMaterial___MeshHelper_Private_Interchange_UE__YAXAEAV__FMeshMaterialArrayViewer_UFStaticMaterial___2345_V__TMap_VFString__V1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFString__V1__0A_____PEBVUInterchangeBaseNodeContainer___N_Z_QEBA_AEBVFName__PEAVUMaterialInterface__H_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e6ec2a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeGeometryCacheFactory::CreatePayloadTasks'::__l12::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UInterchangeGeometryCacheFactory::CreatePayloadTasks'::`12'::<lambda_1>,0,1>
             ::_vftable_;
  `UInterchangeGeometryCacheFactory::CreatePayloadTasks'::__l12::<lambda_1>::<lambda_1>
            (puVar1 + 1,(<lambda_1> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14e6ec300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<TObjectPtr<UMaterialInterface>_>'::__l26::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__BK_____InternalMeshFactorySetupAssetMaterialArray_U__TObjectPtr_VUMaterialInterface_____MeshHelper_Private_Interchange_UE__YAXAEAV__FMeshMaterialArrayViewer_U__TObjectPtr_VUMaterialInterface_____2345_V__TMap_VFString__V1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFString__V1__0A_____PEBVUInterchangeBaseNodeContainer___N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e6ec320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<FSkeletalMaterial>'::__l26::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__BK_____InternalMeshFactorySetupAssetMaterialArray_UFSkeletalMaterial___MeshHelper_Private_Interchange_UE__YAXAEAV__FMeshMaterialArrayViewer_UFSkeletalMaterial___2345_V__TMap_VFString__V1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFString__V1__0A_____PEBVUInterchangeBaseNodeContainer___N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e6ec340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<FStaticMaterial>'::__l26::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__BK_____InternalMeshFactorySetupAssetMaterialArray_UFStaticMaterial___MeshHelper_Private_Interchange_UE__YAXAEAV__FMeshMaterialArrayViewer_UFStaticMaterial___2345_V__TMap_VFString__V1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFString__V1__0A_____PEBVUInterchangeBaseNodeContainer___N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14e6eeb20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(TObjectPtr<UMaterialInterface>_&),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(TObjectPtr<UMaterialInterface>_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e6eeb25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14e6eeb30

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FSkeletalMaterial_&),0,0>::
Destroy(TFunction_OwnedObject<void_(__cdecl*)(FSkeletalMaterial_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e6eeb35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14e6eeb40

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FStaticMaterial_&),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(FStaticMaterial_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e6eeb45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14e6eeb50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(FObjData_&,TStringView<wchar_t>),0,0>::Destroy
          (TFunction_OwnedObject<bool_(__cdecl*)(FObjData_&,TStringView<wchar_t>),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e6eeb55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14e6eeb60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<TObjectPtr<UMaterialInterface>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e6eeb65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e6eeb70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<FSkeletalMaterial>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e6eeb75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e6eeb80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<FStaticMaterial>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e6eeb85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e6eeb90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeGeometryCacheFactory::CreatePayloadTasks'::__l12::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e6eebc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<TObjectPtr<UMaterialInterface>_>'::__l26::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e6eebc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e6eebd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<FSkeletalMaterial>'::__l26::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e6eebd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e6eebe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<FStaticMaterial>'::__l26::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e6eebe5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14e6efb50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(TObjectPtr<UMaterialInterface>_&),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(TObjectPtr<UMaterialInterface>_&),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14e6efb60

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FSkeletalMaterial_&),0,0>::
GetAddress(TFunction_OwnedObject<void_(__cdecl*)(FSkeletalMaterial_&),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14e6efb70

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FStaticMaterial_&),0,0>::
GetAddress(TFunction_OwnedObject<void_(__cdecl*)(FStaticMaterial_&),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14e6efb80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(FObjData_&,TStringView<wchar_t>),0,0>::GetAddress
          (TFunction_OwnedObject<bool_(__cdecl*)(FObjData_&,TStringView<wchar_t>),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14e6efb90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<TObjectPtr<UMaterialInterface>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e6efba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<FSkeletalMaterial>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e6efbb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<FStaticMaterial>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e6efbc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UInterchangeGeometryCacheFactory::CreatePayloadTasks'::__l12::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e6efbd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<TObjectPtr<UMaterialInterface>_>'::__l26::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e6efbe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<FSkeletalMaterial>'::__l26::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e6efbf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<FStaticMaterial>'::__l26::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 14e711980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UInterchangeStaticMeshFactory::CreatePayloadTasks'::__l34::<lambda_2>::operator()'::__l46::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x140,0x10);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<``UInterchangeStaticMeshFactory::CreatePayloadTasks'::`34'::<lambda_2>::operator()'::`46'::<lambda_1>,0,1>
             ::_vftable_;
  ``UInterchangeStaticMeshFactory::CreatePayloadTasks'::__l34::<lambda_2>::operator()'::__l46::
  <lambda_1>::<lambda_1>(puVar1 + 2,(<lambda_1> *)((longlong)this + 0x10));
  return puVar1 + 2;
}

// Destroy @ 14e712e00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UInterchangeStaticMeshFactory::CreatePayloadTasks'::__l34::<lambda_2>::operator()'::__l46::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14e715f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UInterchangeStaticMeshFactory::CreatePayloadTasks'::__l34::<lambda_2>::operator()'::__l46::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

