// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 5

// StartupModule @ 14a2029c0

void __thiscall FControlRigModule::StartupModule(FControlRigModule *this)

{
  UClass *pUVar1;
  UMaterial *pUVar2;
  FModuleManager *this_00;
  FTransformableRegistry *this_01;
  ulonglong uVar3;
  undefined1 local_res8;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  code *local_68 [2];
  undefined **local_58;
  code *local_50;
  undefined8 local_40;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_78.Size = 0x1b;
  local_88.Size = 0;
  local_88._12_4_ = 0;
  local_88.DataPtr = (wchar_t *)0x0;
  local_78.DataPtr = L"/ControlRig/M_Manip.M_Manip";
  pUVar1 = Z_Construct_UClass_UMaterial_NoRegister();
  pUVar2 = (UMaterial *)
           StaticLoadObject(pUVar1,(UObject *)0x0,&local_78,&local_88,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  uVar3 = (ulonglong)_tls_index;
  this->ManipulatorMaterial = pUVar2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ConstraintsModuleName,L"Constraints");
      _Init_thread_footer(&::_TSS0);
    }
  }
  this_00 = FModuleManager::Get();
  FModuleManager::LoadModule(this_00,ConstraintsModuleName,None);
  this_01 = FTransformableRegistry::Get();
  local_50 = (code *)CONCAT71(local_50._1_7_,local_res8);
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FControlRigModule::RegisterTransformableCustomization'::`2'::<lambda_4>,0,0>
              ::_vftable_;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_4>,unsigned_int,UObject_const_*,FName_const_&>
                ::Call;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FControlRigModule::RegisterTransformableCustomization'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_3>,UTransformableHandle_*,UObject_*,FName_const_&>
                ::Call;
  local_40 = 0;
  local_10 = 0;
  local_20 = (code *)CONCAT71(local_20._1_7_,local_res8);
  pUVar1 = AControlRigShapeActor::StaticClass();
  FTransformableRegistry::Register
            (this_01,pUVar1,
             (TFunction<UTransformableHandle_*___cdecl(UObject_*,FName_const_&)> *)local_38,
             (TFunction<unsigned_int___cdecl(UObject_const_*,FName_const_&)> *)local_68);
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6AIPEBVUObject__AEBVFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = `FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_2>::
             <lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<unsigned_int_(__cdecl*)(UObject_const_*,FName_const_&),unsigned_int,UObject_const_*,FName_const_&>
                ::Call;
  local_58 = &
             ___7__TFunction_OwnedObject_P6APEAVUTransformableHandle__PEAVUObject__AEBVFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = `FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<UTransformableHandle_*_(__cdecl*)(UObject_*,FName_const_&),UTransformableHandle_*,UObject_*,FName_const_&>
                ::Call;
  local_40 = 0;
  pUVar1 = UControlRig::StaticClass();
  FTransformableRegistry::Register
            (this_01,pUVar1,
             (TFunction<UTransformableHandle_*___cdecl(UObject_*,FName_const_&)> *)local_68,
             (TFunction<unsigned_int___cdecl(UObject_const_*,FName_const_&)> *)local_38);
  return;
}

// ShutdownModule @ 14a202b90

void __thiscall FControlRigModule::ShutdownModule(FControlRigModule *this)

{
  return;
}

// <lambda_invoker_cdecl> @ 14a205ec0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UTransformableHandle * __cdecl
`FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (UObject *param_1,FName *param_2)

{
  int iVar1;
  UClass *pUVar2;
  UTransformableControlHandle *pUVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UControlRig::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      pUVar3 = UControlRig::CreateTransformableControlHandle((UControlRig *)param_1,param_2);
      return (UTransformableHandle *)pUVar3;
    }
  }
  return (UTransformableHandle *)0x0;
}

// <lambda_invoker_cdecl> @ 14a205f20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __cdecl
`FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (UObject *param_1,FName *param_2)

{
  int iVar1;
  uint uVar2;
  UClass *pUVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = UControlRig::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      uVar2 = UTransformableControlHandle::ComputeHash((UControlRig *)param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}

// RegisterTransformableCustomization @ 14a280000

void __thiscall FControlRigModule::RegisterTransformableCustomization(FControlRigModule *this)

{
  FModuleManager *this_00;
  FTransformableRegistry *this_01;
  UClass *pUVar1;
  undefined1 local_res10;
  code *local_68 [2];
  undefined **local_58;
  code *local_50;
  undefined8 local_40;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ConstraintsModuleName,L"Constraints");
      _Init_thread_footer(&::_TSS0);
    }
  }
  this_00 = FModuleManager::Get();
  FModuleManager::LoadModule(this_00,ConstraintsModuleName,None);
  this_01 = FTransformableRegistry::Get();
  local_50 = (code *)CONCAT71(local_50._1_7_,local_res10);
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FControlRigModule::RegisterTransformableCustomization'::`2'::<lambda_4>,0,0>
              ::_vftable_;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_4>,unsigned_int,UObject_const_*,FName_const_&>
                ::Call;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FControlRigModule::RegisterTransformableCustomization'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_3>,UTransformableHandle_*,UObject_*,FName_const_&>
                ::Call;
  local_40 = 0;
  local_10 = 0;
  local_20 = (code *)CONCAT71(local_20._1_7_,local_res10);
  pUVar1 = AControlRigShapeActor::StaticClass();
  FTransformableRegistry::Register
            (this_01,pUVar1,
             (TFunction<UTransformableHandle_*___cdecl(UObject_*,FName_const_&)> *)local_38,
             (TFunction<unsigned_int___cdecl(UObject_const_*,FName_const_&)> *)local_68);
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6AIPEBVUObject__AEBVFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = `FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_2>::
             <lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<unsigned_int_(__cdecl*)(UObject_const_*,FName_const_&),unsigned_int,UObject_const_*,FName_const_&>
                ::Call;
  local_58 = &
             ___7__TFunction_OwnedObject_P6APEAVUTransformableHandle__PEAVUObject__AEBVFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = `FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<UTransformableHandle_*_(__cdecl*)(UObject_*,FName_const_&),UTransformableHandle_*,UObject_*,FName_const_&>
                ::Call;
  local_40 = 0;
  pUVar1 = UControlRig::StaticClass();
  FTransformableRegistry::Register
            (this_01,pUVar1,
             (TFunction<UTransformableHandle_*___cdecl(UObject_*,FName_const_&)> *)local_68,
             (TFunction<unsigned_int___cdecl(UObject_const_*,FName_const_&)> *)local_38);
  return;
}

