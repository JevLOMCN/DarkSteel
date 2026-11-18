// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeNv
// Functions: 43

// `dynamic_initializer_for_'GRegisterClothConfigNvCustomVersion'' @ 141166030

void __cdecl _dynamic_initializer_for__GRegisterClothConfigNvCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FClothConfigNvCustomVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,1,L"ClothConfigNvVer",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterClothConfigNvCustomVersion__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantClothingSystemRuntimeNv'' @ 141166070

void __cdecl _dynamic_initializer_for__ModuleRegistrantClothingSystemRuntimeNv__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ClothingSystemRuntimeNv";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ClothingSystemRuntimeNv",0x17);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FClothingSystemRuntimeModuleNv>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h__Script_ClothingSystemRuntimeNv_3634206989'' @ 1411660c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h__Script_ClothingSystemRuntimeNv_3634206989__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ClothingSystemRuntimeNv",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h__Script_ClothingSystemRuntimeNv_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h__Script_ClothingSystemRuntimeNv_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h__Script_ClothingSystemRuntimeNv_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothPhysicalMeshDataNv_Legacy_h__Script_ClothingSystemRuntimeNv_800993085'' @ 141166110

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothPhysicalMeshDataNv_Legacy_h__Script_ClothingSystemRuntimeNv_800993085__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ClothingSystemRuntimeNv",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothPhysicalMeshDataNv_Legacy_h__Script_ClothingSystemRuntimeNv_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationFactoryNv_h__Script_ClothingSystemRuntimeNv_2662310849'' @ 141166150

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationFactoryNv_h__Script_ClothingSystemRuntimeNv_2662310849__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ClothingSystemRuntimeNv",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationFactoryNv_h__Script_ClothingSystemRuntimeNv_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationInteractorNv_h__Script_ClothingSystemRuntimeNv_2849928075'' @ 141166190

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationInteractorNv_h__Script_ClothingSystemRuntimeNv_2849928075__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ClothingSystemRuntimeNv",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationInteractorNv_h__Script_ClothingSystemRuntimeNv_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ClothingSystemRuntimeNv'' @ 1411661d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ClothingSystemRuntimeNv__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xe9758d6b;
  local_res8[0].DeclarationsHash = 0xf887ea8a;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ClothingSystemRuntimeNv,L"/Script/ClothingSystemRuntimeNv"
             ,&Z_Registration_Info_UPackage__Script_ClothingSystemRuntimeNv,local_res8);
  return;
}

// Z_Construct_UPackage__Script_ClothingSystemRuntimeNv @ 148c35540

UPackage * __cdecl Z_Construct_UPackage__Script_ClothingSystemRuntimeNv(void)

{
  if (Z_Registration_Info_UPackage__Script_ClothingSystemRuntimeNv.OuterSingleton == (UPackage *)0x0
     ) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ClothingSystemRuntimeNv.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_ClothingSystemRuntimeNv.OuterSingleton;
}

// Z_Construct_UClass_UClothConfigNv @ 148c35740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UClothConfigNv(void)

{
  if (Z_Registration_Info_UClass_UClothConfigNv.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UClothConfigNv.OuterSingleton,
               &Z_Construct_UClass_UClothConfigNv_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UClothConfigNv.OuterSingleton;
}

// Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv @ 148c35780

UEnum * __cdecl Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv(void)

{
  if (Z_Registration_Info_UEnum_EClothingWindMethodNv.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EClothingWindMethodNv.InnerSingleton,
               &Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_EClothingWindMethodNv.InnerSingleton;
}

// Z_Construct_UScriptStruct_FClothConstraintSetupNv @ 148c357c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FClothConstraintSetupNv(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FClothConstraintSetupNv.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FClothConstraintSetupNv.InnerSingleton,
               &Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FClothConstraintSetupNv.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FClothConstraintSetupNv.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 148c35840

void * __cdecl Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FClothConstraintSetupNv,&UE::CoreUObject::Private::Construct<FClothConstraintSetupNv>,&UE::CoreUObject::Private::ConstructForTests<FClothConstraintSetupNv>,&UE::CoreUObject::Private::Destruct<FClothConstraintSetupNv>,&UE::CoreUObject::Private::Copy<FClothConstraintSetupNv>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// EClothingWindMethodNv_StaticEnum @ 148c35880

UEnum * __cdecl EClothingWindMethodNv_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EClothingWindMethodNv.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeNv();
    Z_Registration_Info_UEnum_EClothingWindMethodNv.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv,
                       (UObject *)pUVar1,L"EClothingWindMethodNv");
  }
  return Z_Registration_Info_UEnum_EClothingWindMethodNv.OuterSingleton;
}

// NewProp_bUseGravityOverride_SetBit @ 148c358c0

void __cdecl
Z_Construct_UClass_UClothConfigNv_Statics::NewProp_bUseGravityOverride_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x140) = 1;
  return;
}

// Z_Construct_UClass_UClothingSimulationFactoryNv @ 148c35990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UClothingSimulationFactoryNv(void)

{
  if (Z_Registration_Info_UClass_UClothingSimulationFactoryNv.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UClothingSimulationFactoryNv.OuterSingleton,
               &Z_Construct_UClass_UClothingSimulationFactoryNv_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UClothingSimulationFactoryNv.OuterSingleton;
}

// Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy @ 148c359d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy(void)

{
  if (Z_Registration_Info_UClass_UClothPhysicalMeshDataNv_Legacy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UClothPhysicalMeshDataNv_Legacy.OuterSingleton,
               &Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UClothPhysicalMeshDataNv_Legacy.OuterSingleton;
}

// Z_Construct_UClass_UClothingSimulationInteractorNv @ 148c35b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UClothingSimulationInteractorNv(void)

{
  if (Z_Registration_Info_UClass_UClothingSimulationInteractorNv.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UClothingSimulationInteractorNv.OuterSingleton,
               &Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UClothingSimulationInteractorNv.OuterSingleton;
}

// Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness @ 148c35bb0

UFunction * __cdecl
Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// InternalConstructor<UClothConfigNv> @ 148c35bf0

void __cdecl InternalConstructor<UClothConfigNv>(FObjectInitializer *param_1)

{
  UClothConfigCommon *this;
  undefined8 uVar1;
  
  this = (UClothConfigCommon *)param_1->Obj;
  if (this != (UClothConfigCommon *)0x0) {
    UClothConfigCommon::UClothConfigCommon(this);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UClothConfigNv__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x8 = 0x3f800000;
    *(undefined4 *)&this[1].field_0xc = 0x3f800000;
    *(undefined4 *)&this[1].field_0x10 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x14 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x18 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x1c = 0x3f800000;
    *(undefined4 *)&this[1].field_0x20 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x24 = 0x3f800000;
    *(undefined4 *)(this + 2) = 0x3f800000;
    *(undefined4 *)&this[2].field_0x4 = 0x3f800000;
    *(undefined4 *)&this[2].field_0x8 = 0x3f800000;
    *(undefined4 *)&this[2].field_0xc = 0x3f800000;
    *(undefined4 *)&this[2].field_0x10 = 0x3f800000;
    *(undefined4 *)&this[2].field_0x14 = 0x3f800000;
    *(undefined8 *)&this[2].field_0x18 = 0x3f800000;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0x3fd99999a0000000;
    *(undefined8 *)&this[3].field_0x8 = 0x3fd99999a0000000;
    *(undefined8 *)&this[3].field_0x10 = 0x3fd99999a0000000;
    *(undefined8 *)(this + 4) = 0x3fc99999a0000000;
    *(undefined8 *)&this[4].field_0x8 = 0x3fc99999a0000000;
    *(undefined8 *)&this[4].field_0x10 = 0x3fc99999a0000000;
    *(undefined8 *)&this[4].field_0x18 = 0x3fc99999a0000000;
    *(undefined8 *)&this[4].field_0x20 = 0x3fc99999a0000000;
    *(undefined8 *)(this + 5) = 0x3fc99999a0000000;
    *(undefined8 *)&this[5].field_0x8 = 0x3ff0000000000000;
    *(undefined8 *)&this[5].field_0x10 = 0x3ff0000000000000;
    *(undefined8 *)&this[5].field_0x18 = 0x3ff0000000000000;
    *(undefined8 *)&this[5].field_0x20 = 0x3ff0000000000000;
    *(undefined8 *)(this + 6) = 0x3ff0000000000000;
    *(undefined8 *)&this[6].field_0x8 = 0x3ff0000000000000;
    *(undefined8 *)&this[6].field_0x10 = 0x3ff0000000000000;
    *(undefined8 *)&this[6].field_0x18 = 0x3ff0000000000000;
    *(undefined8 *)&this[6].field_0x20 = 0x3ff0000000000000;
    *(undefined4 *)&this[2].field_0x24 = 0x3f800000;
    *(undefined4 *)&this[3].field_0x18 = 0x3dcccccd;
    *(undefined4 *)&this[3].field_0x1c = 0x3951b717;
    *(undefined4 *)&this[3].field_0x20 = 0x3951b717;
    *(undefined4 *)(this + 7) = 0x42f00000;
    *(undefined4 *)&this[7].field_0x4 = 0x42c80000;
    *(undefined4 *)&this[7].field_0x8 = 0x3f800000;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[7].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[7].field_0x18 = uVar1;
    *(double *)&this[7].field_0x20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined4 *)&this[8].field_0x1c = 0x3f800000;
    *(undefined4 *)&this[8].field_0x20 = 0x3f800000;
    *(undefined4 *)&this[8].field_0x24 = 0x3f800000;
    *(undefined4 *)(this + 9) = 0x3f800000;
    *(undefined4 *)&this[9].field_0x4 = 0x3f800000;
    *(undefined4 *)&this[9].field_0x8 = 0x3f800000;
    *(undefined4 *)&this[9].field_0xc = 0x3f800000;
    *(undefined4 *)&this[9].field_0x10 = 0x3f800000;
    *(undefined4 *)&this[9].field_0x14 = 0x3f800000;
    *(undefined4 *)&this[9].field_0x18 = 0x3f800000;
    *(undefined4 *)&this[9].field_0x1c = 0x3f800000;
    *(undefined4 *)&this[9].field_0x20 = 0x3f800000;
    *(undefined4 *)&this[9].field_0x24 = 0x3f800000;
    *(undefined4 *)(this + 10) = 0x3f800000;
    *(undefined4 *)&this[10].field_0x4 = 0x3f800000;
    *(undefined4 *)&this[10].field_0x8 = 0x3f800000;
    *(undefined1 *)(this + 8) = 0;
    *(undefined4 *)&this[8].field_0x4 = 0x3f800000;
    *(undefined4 *)&this[8].field_0x8 = 0x3f800000;
    *(undefined4 *)&this[8].field_0xc = 0x3f800000;
    *(undefined4 *)&this[8].field_0x10 = 0x3f800000;
    *(undefined4 *)&this[8].field_0x14 = 0x3f800000;
  }
  return;
}

// InternalConstructor<UClothPhysicalMeshDataNv_Legacy> @ 148c35e70

void __cdecl InternalConstructor<UClothPhysicalMeshDataNv_Legacy>(FObjectInitializer *param_1)

{
  UClothPhysicalMeshDataBase_Legacy *this;
  
  this = (UClothPhysicalMeshDataBase_Legacy *)param_1->Obj;
  if (this != (UClothPhysicalMeshDataBase_Legacy *)0x0) {
    UClothPhysicalMeshDataBase_Legacy::UClothPhysicalMeshDataBase_Legacy(this);
    this->_padding_ = (longlong)&___7UClothPhysicalMeshDataNv_Legacy__6B_;
    ((ForAnyElementType *)&this[1]._padding_)->Data = (FScriptContainerElement *)0x0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].Vertices.ArrayNum = 0;
    this[1].Vertices.ArrayMax = 0;
    this[1].Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    UClothPhysicalMeshDataBase_Legacy::RegisterFloatArray
              (this,1,(TArray<float,TSizedDefaultAllocator<32>_> *)(this + 1));
    UClothPhysicalMeshDataBase_Legacy::RegisterFloatArray
              (this,2,(TArray<float,TSizedDefaultAllocator<32>_> *)&this[1]._padding_);
    UClothPhysicalMeshDataBase_Legacy::RegisterFloatArray
              (this,3,(TArray<float,TSizedDefaultAllocator<32>_> *)&this[1]._padding_);
    UClothPhysicalMeshDataBase_Legacy::RegisterFloatArray
              (this,4,(TArray<float,TSizedDefaultAllocator<32>_> *)&this[1].Vertices.ArrayNum);
  }
  return;
}

// InternalConstructor<UClothingSimulationFactoryNv> @ 148c35f50

void __cdecl InternalConstructor<UClothingSimulationFactoryNv>(FObjectInitializer *param_1)

{
  UClothingSimulationFactory *this;
  
  this = (UClothingSimulationFactory *)param_1->Obj;
  if (this != (UClothingSimulationFactory *)0x0) {
    UClothingSimulationFactory::UClothingSimulationFactory(this,param_1);
    *(undefined ***)this = &___7UClothingSimulationFactoryNv__6B_;
  }
  return;
}

// InternalConstructor<UClothingSimulationInteractorNv> @ 148c35f80

void __cdecl InternalConstructor<UClothingSimulationInteractorNv>(FObjectInitializer *param_1)

{
  UClothingSimulationInteractor *this;
  
  this = (UClothingSimulationInteractor *)param_1->Obj;
  if (this != (UClothingSimulationInteractor *)0x0) {
    UClothingSimulationInteractor::UClothingSimulationInteractor(this,param_1);
    this->_padding_ = (longlong)&___7UClothingSimulationInteractorNv__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UClothConfigNv> @ 148c35fb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UClothConfigNv>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UClothConfigNv::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UClothConfigCommon::UClothConfigCommon((UClothConfigCommon *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UClothConfigNv__6B_;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x8 = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0xc = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x14 = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x1c = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x20 = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x24 = 0x3f800000;
    *(undefined4 *)(pUVar1 + 2) = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0xc = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0x3f800000;
    *(undefined4 *)&pUVar1[8].field_0x1c = 0x3f800000;
    *(undefined4 *)&pUVar1[8].field_0x20 = 0x3f800000;
    *(undefined4 *)&pUVar1[8].field_0x24 = 0x3f800000;
    *(undefined4 *)(pUVar1 + 9) = 0x3f800000;
    *(undefined4 *)&pUVar1[9].field_0x4 = 0x3f800000;
    *(undefined4 *)&pUVar1[9].field_0x8 = 0x3f800000;
    *(undefined4 *)&pUVar1[9].field_0xc = 0x3f800000;
    *(undefined4 *)&pUVar1[9].field_0x10 = 0x3f800000;
    *(undefined4 *)&pUVar1[9].field_0x14 = 0x3f800000;
    *(undefined4 *)&pUVar1[9].field_0x18 = 0x3f800000;
    *(undefined4 *)&pUVar1[9].field_0x1c = 0x3f800000;
    *(undefined4 *)&pUVar1[9].field_0x20 = 0x3f800000;
    *(undefined4 *)&pUVar1[9].field_0x24 = 0x3f800000;
    *(undefined4 *)(pUVar1 + 10) = 0x3f800000;
    *(undefined4 *)&pUVar1[10].field_0x4 = 0x3f800000;
    *(undefined4 *)&pUVar1[10].field_0x8 = 0x3f800000;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UClothPhysicalMeshDataNv_Legacy> @ 148c36170

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UClothPhysicalMeshDataNv_Legacy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UClothPhysicalMeshDataBase_Legacy *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UClothPhysicalMeshDataNv_Legacy::GetPrivateStaticClass();
  this = (UClothPhysicalMeshDataBase_Legacy *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UClothPhysicalMeshDataBase_Legacy *)0x0) {
    UClothPhysicalMeshDataBase_Legacy::UClothPhysicalMeshDataBase_Legacy(this,param_1);
    this->_padding_ = (longlong)&___7UClothPhysicalMeshDataNv_Legacy__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].Vertices.ArrayNum = 0;
    this[1].Vertices.ArrayMax = 0;
    this[1].Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UClothingSimulationFactoryNv> @ 148c36260

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UClothingSimulationFactoryNv>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UClothingSimulationFactoryNv::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UClothingSimulationFactory::UClothingSimulationFactory
              ((UClothingSimulationFactory *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UClothingSimulationFactoryNv__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UClothingSimulationInteractorNv> @ 148c36310

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UClothingSimulationInteractorNv>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UClothingSimulationInteractor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UClothingSimulationInteractorNv::GetPrivateStaticClass();
  this = (UClothingSimulationInteractor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UClothingSimulationInteractor *)0x0) {
    UClothingSimulationInteractor::UClothingSimulationInteractor(this,param_1);
    this->_padding_ = (longlong)&___7UClothingSimulationInteractorNv__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_EClothingWindMethodNv> @ 148c363c0

UEnum * __cdecl StaticEnum<enum_EClothingWindMethodNv>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EClothingWindMethodNv.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeNv();
    Z_Registration_Info_UEnum_EClothingWindMethodNv.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv,
                       (UObject *)pUVar1,L"EClothingWindMethodNv");
  }
  return Z_Registration_Info_UEnum_EClothingWindMethodNv.OuterSingleton;
}

// `scalar_deleting_destructor' @ 148c36ae0

void * __thiscall
FClothingSystemRuntimeModuleNv::_scalar_deleting_destructor_
          (FClothingSystemRuntimeModuleNv *this,uint param_1)

{
  *(undefined ***)this = IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c36b20

void * __thiscall UClothConfigNv::_scalar_deleting_destructor_(UClothConfigNv *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UClothConfigNv__6B_;
  UClothConfigCommon::~UClothConfigCommon((UClothConfigCommon *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c36b80

void * __thiscall
UClothPhysicalMeshDataNv_Legacy::_scalar_deleting_destructor_
          (UClothPhysicalMeshDataNv_Legacy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UClothPhysicalMeshDataNv_Legacy__6B_;
  pFVar1 = (this->AnimDriveMultipliers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BackstopRadiuses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BackstopDistances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaxDistances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UClothPhysicalMeshDataBase_Legacy::~UClothPhysicalMeshDataBase_Legacy
            ((UClothPhysicalMeshDataBase_Legacy *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c36c30

void * __thiscall
UClothingSimulationFactoryNv::_scalar_deleting_destructor_
          (UClothingSimulationFactoryNv *this,uint param_1)

{
  *(undefined ***)this = &___7UClothingSimulationFactoryNv__6B_;
  UClothingSimulationFactory::~UClothingSimulationFactory((UClothingSimulationFactory *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c36c90

void * __thiscall
UClothingSimulationInteractorNv::_scalar_deleting_destructor_
          (UClothingSimulationInteractorNv *this,uint param_1)

{
  *(undefined ***)this = &___7UClothingSimulationInteractorNv__6B_;
  UClothingSimulationInteractor::~UClothingSimulationInteractor
            ((UClothingSimulationInteractor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeClothConfigNv @ 148c36d50

void __cdecl EmptyLinkFunctionForGeneratedCodeClothConfigNv(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeClothPhysicalMeshDataNv_Legacy @ 148c36d60

void __cdecl EmptyLinkFunctionForGeneratedCodeClothPhysicalMeshDataNv_Legacy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeClothingSimulationFactoryNv @ 148c36d70

void __cdecl EmptyLinkFunctionForGeneratedCodeClothingSimulationFactoryNv(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeClothingSimulationInteractorNv @ 148c36d80

void __cdecl EmptyLinkFunctionForGeneratedCodeClothingSimulationInteractorNv(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeClothingSystemRuntimeNv_init @ 148c36d90

void __cdecl EmptyLinkFunctionForGeneratedCodeClothingSystemRuntimeNv_init(void)

{
  return;
}

// Z_Construct_UClass_UClothConfigNv_NoRegister @ 148c37850

UClass * __cdecl Z_Construct_UClass_UClothConfigNv_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothConfigNv.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeNv",L"ClothConfigNv",
               &Z_Registration_Info_UClass_UClothConfigNv.InnerSingleton,
               UClothConfigNv::StaticRegisterNativesUClothConfigNv,0x1a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothConfigNv>,
               InternalVTableHelperCtorCaller<UClothConfigNv>,local_res8,
               UClothConfigCommon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothConfigNv.InnerSingleton;
}

// Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_NoRegister @ 148c37910

UClass * __cdecl Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothPhysicalMeshDataNv_Legacy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeNv",L"ClothPhysicalMeshDataNv_Legacy",
               &Z_Registration_Info_UClass_UClothPhysicalMeshDataNv_Legacy.InnerSingleton,
               UClothPhysicalMeshDataNv_Legacy::StaticRegisterNativesUClothPhysicalMeshDataNv_Legacy
               ,0x120,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UClothPhysicalMeshDataNv_Legacy>,
               InternalVTableHelperCtorCaller<UClothPhysicalMeshDataNv_Legacy>,local_res8,
               UClothPhysicalMeshDataBase_Legacy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothPhysicalMeshDataNv_Legacy.InnerSingleton;
}

// Z_Construct_UClass_UClothingSimulationFactoryNv_NoRegister @ 148c379d0

UClass * __cdecl Z_Construct_UClass_UClothingSimulationFactoryNv_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingSimulationFactoryNv.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeNv",L"ClothingSimulationFactoryNv",
               &Z_Registration_Info_UClass_UClothingSimulationFactoryNv.InnerSingleton,
               UClothingSimulationFactoryNv::StaticRegisterNativesUClothingSimulationFactoryNv,0x28,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UClothingSimulationFactoryNv>,
               InternalVTableHelperCtorCaller<UClothingSimulationFactoryNv>,local_res8,
               UClothingSimulationFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingSimulationFactoryNv.InnerSingleton;
}

// Z_Construct_UClass_UClothingSimulationInteractorNv_NoRegister @ 148c37a90

UClass * __cdecl Z_Construct_UClass_UClothingSimulationInteractorNv_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingSimulationInteractorNv.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeNv",L"ClothingSimulationInteractorNv",
               &Z_Registration_Info_UClass_UClothingSimulationInteractorNv.InnerSingleton,
               UClothingSimulationInteractorNv::StaticRegisterNativesUClothingSimulationInteractorNv
               ,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UClothingSimulationInteractorNv>,
               InternalVTableHelperCtorCaller<UClothingSimulationInteractorNv>,local_res8,
               UClothingSimulationInteractor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingSimulationInteractorNv.InnerSingleton;
}

// IMPLEMENT_MODULE_ClothingSystemRuntimeNv @ 148c37bc0

void __cdecl IMPLEMENT_MODULE_ClothingSystemRuntimeNv(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterClothConfigNvCustomVersion'' @ 15040b330

void __cdecl _dynamic_atexit_destructor_for__GRegisterClothConfigNvCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterClothConfigNvCustomVersion.Key);
  return;
}

