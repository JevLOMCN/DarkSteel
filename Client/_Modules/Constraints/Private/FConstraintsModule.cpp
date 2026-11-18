// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 2

// StartupModule @ 14648f550

void __thiscall FConstraintsModule::StartupModule(FConstraintsModule *this)

{
  FTransformableRegistry *this_00;
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
  
  this_00 = FTransformableRegistry::Get();
  local_40 = 0;
  local_58 = &
             ___7__TFunction_OwnedObject_P6AIPEBVUObject__AEBVFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = `FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_2>::<lambda_invoker_cdecl>
  ;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<unsigned_int_(__cdecl*)(UObject_const_*,FName_const_&),unsigned_int,UObject_const_*,FName_const_&>
                ::Call;
  local_28 = &
             ___7__TFunction_OwnedObject_P6APEAVUTransformableHandle__PEAVUObject__AEBVFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = `FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_1>::<lambda_invoker_cdecl>
  ;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<UTransformableHandle_*_(__cdecl*)(UObject_*,FName_const_&),UTransformableHandle_*,UObject_*,FName_const_&>
                ::Call;
  local_10 = 0;
  pUVar1 = Z_Construct_UClass_USceneComponent_NoRegister();
  FTransformableRegistry::Register
            (this_00,pUVar1,
             (TFunction<UTransformableHandle_*___cdecl(UObject_*,FName_const_&)> *)local_38,
             (TFunction<unsigned_int___cdecl(UObject_const_*,FName_const_&)> *)local_68);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTransformableRegistry::RegisterBaseObjects'::`2'::<lambda_4>,0,0>
              ::_vftable_;
  local_20 = (code *)CONCAT71(local_20._1_7_,local_res10);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_4>,unsigned_int,UObject_const_*,FName_const_&>
                ::Call;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTransformableRegistry::RegisterBaseObjects'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_50 = (code *)CONCAT71(local_50._1_7_,local_res10);
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_3>,UTransformableHandle_*,UObject_*,FName_const_&>
                ::Call;
  local_40 = 0;
  pUVar1 = Z_Construct_UClass_AActor_NoRegister();
  FTransformableRegistry::Register
            (this_00,pUVar1,
             (TFunction<UTransformableHandle_*___cdecl(UObject_*,FName_const_&)> *)local_68,
             (TFunction<unsigned_int___cdecl(UObject_const_*,FName_const_&)> *)local_38);
  return;
}

// ShutdownModule @ 14648f660

void __thiscall FConstraintsModule::ShutdownModule(FConstraintsModule *this)

{
  TSet<TTuple<UClass_*,FTransformableRegistry::FTransformableInfo>,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>,FDefaultSetAllocator>
  *this_00;
  
  this_00 = (TSet<TTuple<UClass_*,FTransformableRegistry::FTransformableInfo>,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>,FDefaultSetAllocator>
             *)FTransformableRegistry::Get();
  TSet<TTuple<UClass_*,FTransformableRegistry::FTransformableInfo>,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>,FDefaultSetAllocator>
  ::Reset(this_00);
  return;
}

