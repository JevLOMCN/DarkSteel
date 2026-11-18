// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 136

// Identity'' @ 140f32ef0

void __cdecl `dynamic_initializer_for_'FTransformNoScale::Identity__(void)

{
  FTransformNoScale::Identity.Rotation.X = UE::Math::TQuat<double>::Identity.X;
  FTransformNoScale::Identity.Rotation.Y = UE::Math::TQuat<double>::Identity.Y;
  FTransformNoScale::Identity.Rotation.Z = UE::Math::TQuat<double>::Identity.Z;
  FTransformNoScale::Identity.Rotation.W = UE::Math::TQuat<double>::Identity.W;
  return;
}

// `dynamic_initializer_for_'FBoneWeightTestBasicAutomationTestInstance'' @ 140f32f20

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FBoneWeightTestBasicAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FBoneWeightTestBasic");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FBoneWeightTestBasicAutomationTestInstance,&local_18,false);
  FBoneWeightTestBasicAutomationTestInstance._0_8_ = &___7FBoneWeightTestBasic__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FBoneWeightTestBasicAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FBoneWeightsSettingsTestAutomationTestInstance'' @ 140f32f80

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FBoneWeightsSettingsTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FBoneWeightsSettingsTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FBoneWeightsSettingsTestAutomationTestInstance,&local_18,false)
  ;
  FBoneWeightsSettingsTestAutomationTestInstance._0_8_ = &___7FBoneWeightsSettingsTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FBoneWeightsSettingsTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FBoneWeightsTestBasicAutomationTestInstance'' @ 140f32fe0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FBoneWeightsTestBasicAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FBoneWeightsTestBasic");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FBoneWeightsTestBasicAutomationTestInstance,&local_18,false);
  FBoneWeightsTestBasicAutomationTestInstance._0_8_ = &___7FBoneWeightsTestBasic__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FBoneWeightsTestBasicAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FBoneWeightsTestBlendAutomationTestInstance'' @ 140f33040

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FBoneWeightsTestBlendAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FBoneWeightsTestBlend");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FBoneWeightsTestBlendAutomationTestInstance,&local_18,false);
  FBoneWeightsTestBlendAutomationTestInstance._0_8_ = &___7FBoneWeightsTestBlend__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FBoneWeightsTestBlendAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FBoneWeightsTestCreateAutomationTestInstance'' @ 140f330a0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FBoneWeightsTestCreateAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FBoneWeightsTestCreate");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FBoneWeightsTestCreateAutomationTestInstance,&local_18,false);
  FBoneWeightsTestCreateAutomationTestInstance._0_8_ = &___7FBoneWeightsTestCreate__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FBoneWeightsTestCreateAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'LogAnimationCore'' @ 140f33100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAnimationCore__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAnimationCore,L"LogAnimationCore",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAnimationCore__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAnimationCore'' @ 140f33140

void __cdecl _dynamic_initializer_for__ModuleRegistrantAnimationCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AnimationCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AnimationCore",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h__Script_AnimationCore_865027376'' @ 140f33190

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h__Script_AnimationCore_865027376__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h__Script_AnimationCore_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_CCDIK_h__Script_AnimationCore_1630893815'' @ 140f331d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_CCDIK_h__Script_AnimationCore_1630893815__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_CCDIK_h__Script_AnimationCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_CommonAnimTypes_h__Script_AnimationCore_2215564937'' @ 140f33210

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_CommonAnimTypes_h__Script_AnimationCore_2215564937__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_CommonAnimTypes_h__Script_AnimationCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h__Script_AnimationCore_3844199381'' @ 140f33250

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h__Script_AnimationCore_3844199381__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h__Script_AnimationCore_Statics
             ::ScriptStructInfo,10,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h__Script_AnimationCore_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_EulerTransform_h__Script_AnimationCore_3300678253'' @ 140f332a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_EulerTransform_h__Script_AnimationCore_3300678253__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_EulerTransform_h__Script_AnimationCore_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_EulerTransform_h__Script_AnimationCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_FABRIK_h__Script_AnimationCore_2560978773'' @ 140f332f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_FABRIK_h__Script_AnimationCore_2560978773__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_FABRIK_h__Script_AnimationCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_NodeChain_h__Script_AnimationCore_1453119966'' @ 140f33330

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_NodeChain_h__Script_AnimationCore_1453119966__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_NodeChain_h__Script_AnimationCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_NodeHierarchy_h__Script_AnimationCore_268172453'' @ 140f33370

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_NodeHierarchy_h__Script_AnimationCore_268172453__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_NodeHierarchy_h__Script_AnimationCore_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_TransformNoScale_h__Script_AnimationCore_4019325793'' @ 140f333b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_TransformNoScale_h__Script_AnimationCore_4019325793__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_TransformNoScale_h__Script_AnimationCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AnimationCore'' @ 140f333f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AnimationCore__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xe12a4f5d;
  local_res8[0].DeclarationsHash = 0xf0aabc22;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AnimationCore,L"/Script/AnimationCore",
             &Z_Registration_Info_UPackage__Script_AnimationCore,local_res8);
  return;
}

// Z_Construct_UScriptStruct_FNodeHierarchyData @ 1423734a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNodeHierarchyData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNodeHierarchyData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNodeHierarchyData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNodeHierarchyData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNodeHierarchyData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNodeObject @ 142373520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNodeObject(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNodeObject.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNodeObject.InnerSingleton,
               &Z_Construct_UScriptStruct_FNodeObject_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNodeObject.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNodeObject.InnerSingleton;
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

// NewStructOps @ 1423735a0

void * __cdecl Z_Construct_UScriptStruct_FNodeObject_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNodeObject,&UE::CoreUObject::Private::Construct<FNodeObject>,&UE::CoreUObject::Private::ConstructForTests<FNodeObject>,&UE::CoreUObject::Private::Destruct<FNodeObject>,&UE::CoreUObject::Private::Copy<FNodeObject>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 142373ce0

void * __thiscall
FBoneWeightTestBasic::_scalar_deleting_destructor_(FBoneWeightTestBasic *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// NewStructOps @ 142373d70

void * __cdecl Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNodeHierarchyData,&UE::CoreUObject::Private::Construct<FNodeHierarchyData>,&UE::CoreUObject::Private::ConstructForTests<FNodeHierarchyData>,&UE::CoreUObject::Private::Destruct<FNodeHierarchyData>,&UE::CoreUObject::Private::Copy<FNodeHierarchyData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142373db0

void * __cdecl Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNodeHierarchyWithUserData,&UE::CoreUObject::Private::Construct<FNodeHierarchyWithUserData>,&UE::CoreUObject::Private::ConstructForTests<FNodeHierarchyWithUserData>,&UE::CoreUObject::Private::Destruct<FNodeHierarchyWithUserData>,&UE::CoreUObject::Private::Copy<FNodeHierarchyWithUserData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1423740d0

void * __thiscall
FBoneWeightsSettingsTest::_scalar_deleting_destructor_(FBoneWeightsSettingsTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142375af0

void * __thiscall
FBoneWeightsTestBasic::_scalar_deleting_destructor_(FBoneWeightsTestBasic *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142376380

void * __thiscall
FBoneWeightsTestCreate::_scalar_deleting_destructor_(FBoneWeightsTestCreate *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142378520

void * __thiscall
FBoneWeightsTestBlend::_scalar_deleting_destructor_(FBoneWeightsTestBlend *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// NewStructOps @ 142378630

void * __cdecl Z_Construct_UScriptStruct_FTransformNoScale_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTransformNoScale,&UE::CoreUObject::Private::Construct<FTransformNoScale>,&UE::CoreUObject::Private::ConstructForTests<FTransformNoScale>,&UE::CoreUObject::Private::Destruct<FTransformNoScale>,&UE::CoreUObject::Private::Copy<FTransformNoScale>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1423787b0

void * __cdecl Z_Construct_UScriptStruct_FCCDIKChainLink_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCCDIKChainLink,&UE::CoreUObject::Private::Construct<FCCDIKChainLink>,&UE::CoreUObject::Private::ConstructForTests<FCCDIKChainLink>,&UE::CoreUObject::Private::Destruct<FCCDIKChainLink>,&UE::CoreUObject::Private::Copy<FCCDIKChainLink>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_AnimationCore_EConstraintType @ 142378b80

UEnum * __cdecl Z_Construct_UEnum_AnimationCore_EConstraintType(void)

{
  if (Z_Registration_Info_UEnum_EConstraintType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EConstraintType.InnerSingleton,
               &Z_Construct_UEnum_AnimationCore_EConstraintType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EConstraintType.InnerSingleton;
}

// Z_Construct_UEnum_AnimationCore_ETransformConstraintType @ 142378bc0

UEnum * __cdecl Z_Construct_UEnum_AnimationCore_ETransformConstraintType(void)

{
  if (Z_Registration_Info_UEnum_ETransformConstraintType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETransformConstraintType.InnerSingleton,
               &Z_Construct_UEnum_AnimationCore_ETransformConstraintType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETransformConstraintType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FConstraintDescription @ 142378c00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConstraintDescription(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConstraintDescription.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConstraintDescription.InnerSingleton,
               &Z_Construct_UScriptStruct_FConstraintDescription_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConstraintDescription.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConstraintDescription.InnerSingleton;
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

// Z_Construct_UScriptStruct_FConstraintDescriptionEx @ 142378c80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConstraintDescriptionEx(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConstraintDescriptionEx.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConstraintDescriptionEx.InnerSingleton,
               &Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConstraintDescriptionEx.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConstraintDescriptionEx.InnerSingleton;
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

// Z_Construct_UScriptStruct_FConstraintDescriptor @ 142378d00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConstraintDescriptor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConstraintDescriptor.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConstraintDescriptor.InnerSingleton,
               &Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConstraintDescriptor.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FConstraintDescriptor.InnerSingleton;
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

// Z_Construct_UScriptStruct_FFilterOptionPerAxis @ 142378d80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFilterOptionPerAxis(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFilterOptionPerAxis.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFilterOptionPerAxis.InnerSingleton,
               &Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFilterOptionPerAxis.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FFilterOptionPerAxis.InnerSingleton;
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

// NewProp_bX_SetBit @ 142378e00

void __cdecl
Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bX_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bY_SetBit @ 142378e10

void __cdecl
Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bY_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bZ_SetBit @ 142378e20

void __cdecl
Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bZ_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewStructOps @ 142378e30

void * __cdecl Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFilterOptionPerAxis,&UE::CoreUObject::Private::Construct<FFilterOptionPerAxis>,&UE::CoreUObject::Private::ConstructForTests<FFilterOptionPerAxis>,&UE::CoreUObject::Private::Destruct<FFilterOptionPerAxis>,&UE::CoreUObject::Private::Copy<FFilterOptionPerAxis>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142378e70

void * __cdecl Z_Construct_UScriptStruct_FTransformFilter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 9;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTransformFilter,&UE::CoreUObject::Private::Construct<FTransformFilter>,&UE::CoreUObject::Private::ConstructForTests<FTransformFilter>,&UE::CoreUObject::Private::Destruct<FTransformFilter>,&UE::CoreUObject::Private::Copy<FTransformFilter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bTranslation_SetBit @ 142378eb0

void __cdecl
Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bTranslation_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bRotation_SetBit @ 142378ec0

void __cdecl
Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bRotation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bScale_SetBit @ 142378ed0

void __cdecl
Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bScale_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewProp_bParent_SetBit @ 142378ee0

void __cdecl
Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bParent_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 3) = 1;
  return;
}

// NewStructOps @ 142378ef0

void * __cdecl Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConstraintDescription,&UE::CoreUObject::Private::Construct<FConstraintDescription>,&UE::CoreUObject::Private::ConstructForTests<FConstraintDescription>,&UE::CoreUObject::Private::Destruct<FConstraintDescription>,&UE::CoreUObject::Private::Copy<FConstraintDescription>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UPackage__Script_AnimationCore @ 142378f30

UPackage * __cdecl Z_Construct_UPackage__Script_AnimationCore(void)

{
  if (Z_Registration_Info_UPackage__Script_AnimationCore.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AnimationCore.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AnimationCore.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAxis @ 142378fb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAxis(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAxis.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAxis.InnerSingleton,
               &Z_Construct_UScriptStruct_FAxis_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAxis.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAxis.InnerSingleton;
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

// NewProp_bInLocalSpace_SetBit @ 142379030

void __cdecl Z_Construct_UScriptStruct_FAxis_Statics::NewProp_bInLocalSpace_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 142379040

void * __cdecl Z_Construct_UScriptStruct_FAxis_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAxis,&UE::CoreUObject::Private::Construct<FAxis>,&UE::CoreUObject::Private::ConstructForTests<FAxis>,&UE::CoreUObject::Private::Destruct<FAxis>,&UE::CoreUObject::Private::Copy<FAxis>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142379140

void * __cdecl Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConstraintOffset,&UE::CoreUObject::Private::Construct<FConstraintOffset>,&UE::CoreUObject::Private::ConstructForTests<FConstraintOffset>,&UE::CoreUObject::Private::Destruct<FConstraintOffset>,&UE::CoreUObject::Private::Copy<FConstraintOffset>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bMaintainOffset_SetBit @ 142379180

void __cdecl
Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_bMaintainOffset_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// NewStructOps @ 142379190

void * __cdecl Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTransformConstraint,&UE::CoreUObject::Private::Construct<FTransformConstraint>,&UE::CoreUObject::Private::ConstructForTests<FTransformConstraint>,&UE::CoreUObject::Private::Destruct<FTransformConstraint>,&UE::CoreUObject::Private::Copy<FTransformConstraint>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142379210

void * __cdecl Z_Construct_UScriptStruct_FNodeChain_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNodeChain,&UE::CoreUObject::Private::Construct<FNodeChain>,&UE::CoreUObject::Private::ConstructForTests<FNodeChain>,&UE::CoreUObject::Private::Destruct<FNodeChain>,&UE::CoreUObject::Private::Copy<FNodeChain>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EConstraintType_StaticEnum @ 1423793d0

UEnum * __cdecl EConstraintType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EConstraintType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationCore();
    Z_Registration_Info_UEnum_EConstraintType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AnimationCore_EConstraintType,(UObject *)pUVar1,
                       L"EConstraintType");
  }
  return Z_Registration_Info_UEnum_EConstraintType.OuterSingleton;
}

// NewStructOps @ 142379410

void * __cdecl Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConstraintDescriptionEx,&UE::CoreUObject::Private::Construct<FConstraintDescriptionEx>,&UE::CoreUObject::Private::ConstructForTests<FConstraintDescriptionEx>,&UE::CoreUObject::Private::Destruct<FConstraintDescriptionEx>,&UE::CoreUObject::Private::Copy<FConstraintDescriptionEx>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ETransformConstraintType_StaticEnum @ 142379490

UEnum * __cdecl ETransformConstraintType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETransformConstraintType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationCore();
    Z_Registration_Info_UEnum_ETransformConstraintType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AnimationCore_ETransformConstraintType,(UObject *)pUVar1,
                       L"ETransformConstraintType");
  }
  return Z_Registration_Info_UEnum_ETransformConstraintType.OuterSingleton;
}

// NewStructOps @ 1423794d0

void * __cdecl Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTransformConstraintDescription,&UE::CoreUObject::Private::Construct<FTransformConstraintDescription>,&UE::CoreUObject::Private::ConstructForTests<FTransformConstraintDescription>,&UE::CoreUObject::Private::Destruct<FTransformConstraintDescription>,&UE::CoreUObject::Private::Copy<FTransformConstraintDescription>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bUseLookUp_SetBit @ 1423795d0

void __cdecl
Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_bUseLookUp_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewStructOps @ 1423795e0

void * __cdecl Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAimConstraintDescription,&UE::CoreUObject::Private::Construct<FAimConstraintDescription>,&UE::CoreUObject::Private::ConstructForTests<FAimConstraintDescription>,&UE::CoreUObject::Private::Destruct<FAimConstraintDescription>,&UE::CoreUObject::Private::Copy<FAimConstraintDescription>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1423799a0

void * __cdecl Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConstraintDescriptor,&UE::CoreUObject::Private::Construct<FConstraintDescriptor>,&UE::CoreUObject::Private::ConstructForTests<FConstraintDescriptor>,&UE::CoreUObject::Private::Destruct<FConstraintDescriptor>,&UE::CoreUObject::Private::Copy<FConstraintDescriptor>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bMaintainOffset_SetBit @ 142379a20

void __cdecl
Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_bMaintainOffset_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewStructOps @ 142379a30

void * __cdecl Z_Construct_UScriptStruct_FConstraintData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConstraintData,&UE::CoreUObject::Private::Construct<FConstraintData>,&UE::CoreUObject::Private::ConstructForTests<FConstraintData>,&UE::CoreUObject::Private::Destruct<FConstraintData>,&UE::CoreUObject::Private::Copy<FConstraintData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 142379bc0

void * __thiscall
FConstraintDescriptionEx::_scalar_deleting_destructor_(FConstraintDescriptionEx *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FConstraintDescriptionEx__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14237a030

void * __thiscall
FTransformConstraintDescription::_scalar_deleting_destructor_
          (FTransformConstraintDescription *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FConstraintDescriptionEx__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// Z_Construct_UClass_UAnimationDataSourceRegistry @ 14237a210

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimationDataSourceRegistry(void)

{
  if (Z_Registration_Info_UClass_UAnimationDataSourceRegistry.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimationDataSourceRegistry.OuterSingleton,
               &Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimationDataSourceRegistry.OuterSingleton;
}

// EEulerRotationOrder_StaticEnum @ 14237a7f0

UEnum * __cdecl EEulerRotationOrder_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEulerRotationOrder.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationCore();
    Z_Registration_Info_UEnum_EEulerRotationOrder.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AnimationCore_EEulerRotationOrder,(UObject *)pUVar1,
                       L"EEulerRotationOrder");
  }
  return Z_Registration_Info_UEnum_EEulerRotationOrder.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14237a8f0

void * __thiscall
FAimConstraintDescription::_scalar_deleting_destructor_
          (FAimConstraintDescription *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FConstraintDescriptionEx__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// NewStructOps @ 14237a930

void * __cdecl Z_Construct_UScriptStruct_FEulerTransform_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEulerTransform,&UE::CoreUObject::Private::Construct<FEulerTransform>,&UE::CoreUObject::Private::ConstructForTests<FEulerTransform>,&UE::CoreUObject::Private::Destruct<FEulerTransform>,&UE::CoreUObject::Private::Copy<FEulerTransform>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14237a9f0

void * __cdecl Z_Construct_UScriptStruct_FFABRIKChainLink_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFABRIKChainLink,&UE::CoreUObject::Private::Construct<FFABRIKChainLink>,&UE::CoreUObject::Private::ConstructForTests<FFABRIKChainLink>,&UE::CoreUObject::Private::Destruct<FFABRIKChainLink>,&UE::CoreUObject::Private::Copy<FFABRIKChainLink>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14237b6a0

void * __thiscall
FNodeHierarchyWithUserData::_scalar_deleting_destructor_
          (FNodeHierarchyWithUserData *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->Hierarchy).NodeNameToIndexMapping.field_0x48 = 0;
  this->_padding_ = (longlong)&___7FNodeHierarchyWithUserData__6B_;
  pvVar1 = *(void **)&(this->Hierarchy).NodeNameToIndexMapping.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Hierarchy).NodeNameToIndexMapping);
  pFVar2 = (this->Hierarchy).Transforms.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Hierarchy).Nodes.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// DefaultConstructItems<UE::Math::TTransform<double>,int> @ 14237c410

void __cdecl DefaultConstructItems<UE::Math::TTransform<double>,int>(void *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double *pdVar4;
  
  if (param_2 != 0) {
    pdVar4 = (double *)((longlong)param_1 + 0x20);
    do {
      fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
      pdVar4[-4] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      pdVar4[-3] = (double)fVar1;
      pdVar4[-2] = (double)fVar2;
      pdVar4[-1] = (double)fVar3;
      fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
      fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
      *pdVar4 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      pdVar4[1] = (double)fVar1;
      pdVar4[2] = (double)fVar2;
      pdVar4[3] = (double)fVar3;
      fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
      pdVar4[4] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      pdVar4[5] = (double)fVar1;
      pdVar4[6] = (double)fVar2;
      pdVar4[7] = (double)fVar3;
      param_2 = param_2 + -1;
      pdVar4 = pdVar4 + 0xc;
    } while (param_2 != 0);
  }
  return;
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,``UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>::Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>::operator()<UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_>'::__l2::<lambda_1>_>_> @ 14237c850

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,__UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>::Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_::__l2::<lambda_1>::operator()<UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_>_::__l2::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:_UNKNOWN___cdecl__public:_void___cdecl_UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>::Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>(UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_const_&,UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_const_&,float,UE::AnimationCore::FBoneWeightsSettings_const_&)_::_2_::<lambda_1>::operator()<UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_>(UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_const_&,TArrayView<int,int>)const_::_2_::<lambda_1>_>
          param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ushort uVar9;
  longlong lVar10;
  <lambda_1> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<int,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<int,__UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>::Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_::__l2::<lambda_1>::operator()<UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_>_::__l2::<lambda_1>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<int,_public:_UNKNOWN___cdecl__public:_void___cdecl_UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>::Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>(UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_const_&,UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_const_&,float,UE::AnimationCore::FBoneWeightsSettings_const_&)_::_2_::<lambda_1>::operator()<UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_>(UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_const_&,TArrayView<int,int>)const_::_2_::<lambda_1>_>
              *)&local_res20);
  iVar7 = param_2 + -1;
  lVar10 = (longlong)iVar7;
  if (0 < iVar7) {
    do {
      iVar5 = *param_1;
      iVar6 = 0;
      *param_1 = param_1[lVar10];
      param_1[lVar10] = iVar5;
      if (1 < iVar7) {
        do {
          iVar1 = iVar6 * 2;
          iVar5 = iVar1 + 1;
          if (iVar1 + 2 < iVar7) {
            lVar8 = *(longlong *)local_res20;
            lVar2 = *(longlong *)(lVar8 + 0x30);
            if (lVar2 == 0) {
              uVar9 = *(ushort *)(lVar8 + (longlong)param_1[(longlong)iVar1 + 2] * 4);
            }
            else {
              uVar9 = *(ushort *)(lVar2 + (longlong)param_1[(longlong)iVar1 + 2] * 4);
              lVar8 = lVar2;
            }
            if (uVar9 < *(ushort *)(lVar8 + (longlong)param_1[iVar5] * 4)) {
              iVar5 = iVar1;
            }
            iVar5 = iVar5 + 1;
          }
          iVar1 = param_1[iVar6];
          lVar8 = *(longlong *)local_res20;
          lVar2 = *(longlong *)(lVar8 + 0x30);
          if (lVar2 == 0) {
            uVar9 = *(ushort *)(lVar8 + (longlong)iVar1 * 4);
          }
          else {
            uVar9 = *(ushort *)(lVar2 + (longlong)iVar1 * 4);
            lVar8 = lVar2;
          }
          if (*(ushort *)(lVar8 + (longlong)param_1[iVar5] * 4) <= uVar9) break;
          param_1[iVar6] = param_1[iVar5];
          param_1[iVar5] = iVar1;
          iVar6 = iVar5;
        } while (iVar5 * 2 + 1 < iVar7);
      }
      iVar7 = iVar7 + -1;
      lVar10 = lVar10 + -1;
    } while (0 < lVar10);
  }
  return;
}

// HeapSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool___cdecl(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_> @ 14237c9b0

void __cdecl
AlgoImpl::
HeapSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool___cdecl(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_>
          (FBoneWeight *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool___cdecl(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>
          param_4)

{
  FBoneWeight *pFVar1;
  FBoneWeight *pFVar2;
  FBoneWeight FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar11 = iVar7;
  iVar9 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_14237caab:
      if (iVar9 == 0) {
        iVar7 = param_2 + -1;
        lVar10 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            FVar3 = *param_1;
            iVar11 = 0;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = FVar3;
            if (1 < iVar7) {
              do {
                iVar9 = iVar11 * 2;
                iVar6 = iVar9 + 1;
                if (iVar9 + 2 < iVar7) {
                  bVar5 = (*param_4.Predicate)(param_1 + (iVar9 + 2),param_1 + iVar6);
                  if (bVar5) {
                    iVar6 = iVar9;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1 + iVar6;
                pFVar2 = param_1 + iVar11;
                bVar5 = (*param_4.Predicate)(pFVar2,pFVar1);
                if (!bVar5) break;
                FVar3 = *pFVar2;
                *pFVar2 = *pFVar1;
                *pFVar1 = FVar3;
                iVar11 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar6 = iVar9 + -1;
      iVar7 = iVar11 + -2;
      iVar11 = iVar7;
      iVar9 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar5 = (*param_4.Predicate)(param_1 + (iVar7 + 2),param_1 + iVar8);
      if (bVar5) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar1 = param_1 + iVar8;
    pFVar2 = param_1 + iVar6;
    bVar5 = (*param_4.Predicate)(pFVar2,pFVar1);
    if (!bVar5) goto LAB_14237caab;
    FVar3 = *pFVar2;
    *pFVar2 = *pFVar1;
    iVar7 = iVar8 * 2 + 1;
    *pFVar1 = FVar3;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_> @ 14237cb80

void __cdecl
AlgoImpl::
HeapSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_>
          (FBoneWeight *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>
          param_4)

{
  FBoneWeight *pFVar1;
  FBoneWeight *pFVar2;
  FBoneWeight FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar11 = iVar7;
  iVar9 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_14237cc81:
      if (iVar9 == 0) {
        iVar7 = param_2 + -1;
        lVar10 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            FVar3 = *param_1;
            iVar11 = 0;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = FVar3;
            if (1 < iVar7) {
              do {
                iVar9 = iVar11 * 2;
                iVar6 = iVar9 + 1;
                if (iVar9 + 2 < iVar7) {
                  bVar5 = (**param_4.Predicate)(param_1 + (iVar9 + 2),param_1 + iVar6);
                  if (bVar5) {
                    iVar6 = iVar9;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1 + iVar6;
                pFVar2 = param_1 + iVar11;
                bVar5 = (**param_4.Predicate)(pFVar2,pFVar1);
                if (!bVar5) break;
                FVar3 = *pFVar2;
                *pFVar2 = *pFVar1;
                *pFVar1 = FVar3;
                iVar11 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar6 = iVar9 + -1;
      iVar7 = iVar11 + -2;
      iVar11 = iVar7;
      iVar9 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar5 = (**param_4.Predicate)(param_1 + (iVar7 + 2),param_1 + iVar8);
      if (bVar5) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar1 = param_1 + iVar8;
    pFVar2 = param_1 + iVar6;
    bVar5 = (**param_4.Predicate)(pFVar2,pFVar1);
    if (!bVar5) goto LAB_14237cc81;
    FVar3 = *pFVar2;
    *pFVar2 = *pFVar1;
    iVar7 = iVar8 * 2 + 1;
    *pFVar1 = FVar3;
    iVar6 = iVar8;
  } while( true );
}

// HeapifyInternal<int,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<int,``UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>::Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>::operator()<UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_>'::__l2::<lambda_1>_>_>_> @ 14237cd60

void __cdecl
AlgoImpl::
HeapifyInternal<int,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<int,__UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>::Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_::__l2::<lambda_1>::operator()<UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_>_::__l2::<lambda_1>_>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<int,_public:_UNKNOWN___cdecl__public:_void___cdecl_UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>::Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>(UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_const_&,UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_const_&,float,UE::AnimationCore::FBoneWeightsSettings_const_&)_::_2_::<lambda_1>::operator()<UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_>(UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_const_&,TArrayView<int,int>)const_::_2_::<lambda_1>_>_>
          param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar10 = iVar6 * 2;
  iVar4 = iVar10;
  iVar11 = iVar6;
  do {
    while (param_2 <= iVar10 + 1) {
LAB_14237ce88:
      if (iVar11 == 0) {
        return;
      }
      iVar6 = iVar11 + -1;
      iVar10 = iVar4 + -2;
      iVar4 = iVar10;
      iVar11 = iVar6;
    }
    iVar9 = iVar10;
    if (iVar10 + 2 < param_2) {
      lVar7 = *(longlong *)(param_4.Predicate)->Predicate;
      lVar2 = *(longlong *)(lVar7 + 0x30);
      iVar9 = iVar10 + 1;
      if (lVar2 == 0) {
        if (*(ushort *)(lVar7 + (longlong)param_1[(longlong)iVar10 + 2] * 4) <
            *(ushort *)(lVar7 + (longlong)param_1[(longlong)iVar10 + 1] * 4)) {
          iVar9 = iVar10;
        }
      }
      else if (*(ushort *)(lVar2 + (longlong)param_1[(longlong)iVar10 + 2] * 4) <
               *(ushort *)(lVar2 + (longlong)param_1[(longlong)iVar10 + 1] * 4)) {
        iVar9 = iVar10;
      }
    }
    iVar1 = param_1[iVar6];
    lVar7 = *(longlong *)(param_4.Predicate)->Predicate;
    lVar2 = *(longlong *)(lVar7 + 0x30);
    if (lVar2 == 0) {
      uVar8 = *(ushort *)(lVar7 + (longlong)iVar1 * 4);
    }
    else {
      uVar8 = *(ushort *)(lVar2 + (longlong)iVar1 * 4);
      lVar7 = lVar2;
    }
    if (*(ushort *)(lVar7 + (longlong)param_1[(longlong)iVar9 + 1] * 4) <= uVar8)
    goto LAB_14237ce88;
    param_1[iVar6] = param_1[(longlong)iVar9 + 1];
    iVar10 = (iVar9 + 1) * 2;
    param_1[(longlong)iVar9 + 1] = iVar1;
    iVar6 = iVar9 + 1;
  } while( true );
}

// InternalConstructor<UAnimationDataSourceRegistry> @ 14237cec0

void __cdecl InternalConstructor<UAnimationDataSourceRegistry>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAnimationDataSourceRegistry__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAnimationDataSourceRegistry> @ 14237cf20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimationDataSourceRegistry>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimationDataSourceRegistry::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimationDataSourceRegistry__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,``UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>::Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>::operator()<UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_>'::__l2::<lambda_1>_>_> @ 14237d000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,__UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>::Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_::__l2::<lambda_1>::operator()<UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_>_::__l2::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:_UNKNOWN___cdecl__public:_void___cdecl_UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>::Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>(UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_const_&,UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_const_&,float,UE::AnimationCore::FBoneWeightsSettings_const_&)_::_2_::<lambda_1>::operator()<UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_>(UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_const_&,TArrayView<int,int>)const_::_2_::<lambda_1>_>
          param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  ushort uVar9;
  int *piVar10;
  int *piVar11;
  int **ppiVar12;
  float fVar13;
  undefined1 auStack_378 [48];
  int *local_348;
  int *local_338;
  int *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar13;
    memset(local_320,0,0x2e8);
    ppiVar12 = &local_338;
    do {
      piVar11 = ppiVar12[1];
      piVar7 = *ppiVar12;
      piVar1 = ppiVar12[2];
      iVar4 = (int)((longlong)piVar11 - (longlong)piVar7 >> 2) + 1;
      local_348._0_4_ = (int)piVar1;
      piVar10 = piVar7;
      if ((int)local_348 != 0) {
LAB_14237d0c0:
        if (8 < iVar4) {
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar2 = piVar10[iVar4 >> 1];
          piVar10[iVar4 >> 1] = *piVar10;
          piVar6 = piVar11 + 1;
          *piVar10 = iVar2;
          piVar7 = piVar10;
LAB_14237d0f0:
          piVar7 = piVar7 + 1;
          if (piVar7 <= piVar11) goto code_r0x00014237d0f9;
          goto LAB_14237d121;
        }
        if (piVar10 < piVar11) {
          piVar1 = piVar10 + 1;
          do {
            piVar7 = piVar10;
            if (piVar1 <= piVar11) {
              lVar5 = *(longlong *)param_4.Predicate;
              lVar3 = *(longlong *)(lVar5 + 0x30);
              piVar8 = piVar10;
              piVar6 = piVar1;
              if (lVar3 == 0) {
                for (; piVar6 <= piVar11; piVar6 = piVar6 + 1) {
                  if (*(ushort *)(lVar5 + (longlong)*piVar7 * 4) <
                      *(ushort *)(lVar5 + (longlong)*piVar6 * 4)) {
                    piVar7 = piVar6;
                  }
                }
              }
              else {
                do {
                  piVar7 = piVar6;
                  if (*(ushort *)(lVar3 + (longlong)*piVar6 * 4) <=
                      *(ushort *)(lVar3 + (longlong)*piVar8 * 4)) {
                    piVar7 = piVar8;
                  }
                  piVar6 = piVar6 + 1;
                  piVar8 = piVar7;
                } while (piVar6 <= piVar11);
              }
            }
            iVar4 = *piVar7;
            piVar6 = piVar11 + -1;
            *piVar7 = *piVar11;
            *piVar11 = iVar4;
            piVar11 = piVar6;
          } while (piVar10 < piVar6);
        }
        goto LAB_14237d1f6;
      }
LAB_14237d1e5:
      local_348 = piVar1;
      HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,__UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>::Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_::__l2::<lambda_1>::operator()<UE::AnimationCore::TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>_>_::__l2::<lambda_1>_>_>
                (piVar7,iVar4,param_3,param_4);
LAB_14237d1f6:
      ppiVar12 = ppiVar12 + -3;
    } while (&local_338 <= ppiVar12);
  }
  return;
code_r0x00014237d0f9:
  lVar5 = *(longlong *)param_4.Predicate;
  lVar3 = *(longlong *)(lVar5 + 0x30);
  if (lVar3 == 0) {
    uVar9 = *(ushort *)(lVar5 + (longlong)*piVar10 * 4);
  }
  else {
    uVar9 = *(ushort *)(lVar3 + (longlong)*piVar10 * 4);
    lVar5 = lVar3;
  }
  if (*(ushort *)(lVar5 + (longlong)*piVar7 * 4) <= uVar9) goto LAB_14237d0f0;
LAB_14237d121:
  do {
    piVar8 = piVar6;
    piVar6 = piVar8 + -1;
    if (piVar6 <= piVar10) break;
    lVar5 = *(longlong *)param_4.Predicate;
    lVar3 = *(longlong *)(lVar5 + 0x30);
    if (lVar3 == 0) {
      uVar9 = *(ushort *)(lVar5 + (longlong)*piVar6 * 4);
    }
    else {
      uVar9 = *(ushort *)(lVar3 + (longlong)*piVar6 * 4);
      lVar5 = lVar3;
    }
  } while (*(ushort *)(lVar5 + (longlong)*piVar10 * 4) <= uVar9);
  if (piVar7 <= piVar6) {
    iVar4 = *piVar7;
    *piVar7 = *piVar6;
    *piVar6 = iVar4;
    goto LAB_14237d0f0;
  }
  iVar4 = *piVar10;
  local_348._0_4_ = (int)local_348 + -1;
  *piVar10 = *piVar6;
  *piVar6 = iVar4;
  if ((longlong)((longlong)piVar6 + (-4 - (longlong)piVar10) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar11 - (longlong)piVar7 & 0xfffffffffffffffcU)) {
    if (piVar7 < piVar11) {
      *ppiVar12 = piVar7;
      ppiVar12[1] = piVar11;
      *(int *)(ppiVar12 + 2) = (int)local_348;
      ppiVar12 = ppiVar12 + 3;
    }
    if (piVar6 <= piVar10 + 1) goto LAB_14237d1f6;
    piVar11 = piVar8 + -2;
    piVar7 = piVar10;
  }
  else {
    if (piVar10 + 1 < piVar6) {
      *ppiVar12 = piVar10;
      ppiVar12[1] = piVar8 + -2;
      *(int *)(ppiVar12 + 2) = (int)local_348;
      ppiVar12 = ppiVar12 + 3;
    }
    if (piVar11 <= piVar7) goto LAB_14237d1f6;
  }
  iVar4 = (int)((longlong)piVar11 - (longlong)piVar7 >> 2) + 1;
  piVar10 = piVar7;
  if ((int)local_348 == 0) goto LAB_14237d1e5;
  goto LAB_14237d0c0;
}

// IntroSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool___cdecl(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_> @ 14237d2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool___cdecl(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_>
          (FBoneWeight *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool___cdecl(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>
          param_4)

{
  FBoneWeight FVar1;
  bool bVar2;
  int iVar3;
  FBoneWeight *pFVar4;
  FBoneWeight *pFVar5;
  FBoneWeight **ppFVar6;
  int iVar7;
  FBoneWeight *pFVar8;
  FBoneWeight *pFVar9;
  FBoneWeight *pFVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  FBoneWeight *local_358;
  FBoneWeight *local_348;
  FBoneWeight *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    ppFVar6 = &local_348;
    do {
      pFVar4 = ppFVar6[1];
      pFVar5 = *ppFVar6;
      local_358 = ppFVar6[2];
      iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar5 >> 2) + 1;
      pFVar10 = pFVar5;
      iVar7 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14237d3a0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar8 = pFVar4 + 1;
          FVar1 = pFVar10[iVar3 >> 1];
          pFVar10[iVar3 >> 1] = *pFVar10;
          *pFVar10 = FVar1;
          pFVar5 = pFVar10;
LAB_14237d3d0:
          pFVar5 = pFVar5 + 1;
          if (pFVar5 <= pFVar4) goto code_r0x00014237d3d9;
          goto LAB_14237d3e5;
        }
        for (; pFVar8 = pFVar10, pFVar5 = pFVar10, pFVar10 < pFVar4; pFVar4 = pFVar4 + -1) {
          while (pFVar9 = pFVar8, pFVar5 = pFVar5 + 1, pFVar5 <= pFVar4) {
            bVar2 = (*param_4.Predicate)(pFVar9,pFVar5);
            pFVar8 = pFVar5;
            if (!bVar2) {
              pFVar8 = pFVar9;
            }
          }
          FVar1 = *pFVar9;
          *pFVar9 = *pFVar4;
          *pFVar4 = FVar1;
        }
        goto LAB_14237d4a7;
      }
LAB_14237d496:
      HeapSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool___cdecl(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_>
                (pFVar5,iVar3,param_3,param_4);
LAB_14237d4a7:
      ppFVar6 = ppFVar6 + -3;
    } while (&local_348 <= ppFVar6);
  }
  return;
code_r0x00014237d3d9:
  bVar2 = (*param_4.Predicate)(pFVar10,pFVar5);
  if (!bVar2) goto LAB_14237d3d0;
LAB_14237d3e5:
  do {
    pFVar9 = pFVar8;
    pFVar8 = pFVar9 + -1;
    if (pFVar8 <= pFVar10) break;
    bVar2 = (*param_4.Predicate)(pFVar8,pFVar10);
  } while (!bVar2);
  if (pFVar5 <= pFVar8) {
    FVar1 = *pFVar5;
    *pFVar5 = *pFVar8;
    *pFVar8 = FVar1;
    goto LAB_14237d3d0;
  }
  FVar1 = *pFVar10;
  iVar7 = iVar7 + -1;
  *pFVar10 = *pFVar8;
  *pFVar8 = FVar1;
  if ((longlong)((longlong)pFVar8 + (-4 - (longlong)pFVar10) & 0xfffffffffffffffcU) <
      (longlong)((longlong)pFVar4 - (longlong)pFVar5 & 0xfffffffffffffffcU)) {
    if (pFVar5 < pFVar4) {
      *ppFVar6 = pFVar5;
      ppFVar6[1] = pFVar4;
      *(int *)(ppFVar6 + 2) = iVar7;
      ppFVar6 = ppFVar6 + 3;
    }
    if (pFVar8 <= pFVar10 + 1) goto LAB_14237d4a7;
    pFVar4 = pFVar9 + -2;
    pFVar5 = pFVar10;
  }
  else {
    if (pFVar10 + 1 < pFVar8) {
      *ppFVar6 = pFVar10;
      ppFVar6[1] = pFVar9 + -2;
      *(int *)(ppFVar6 + 2) = iVar7;
      ppFVar6 = ppFVar6 + 3;
    }
    if (pFVar4 <= pFVar5) goto LAB_14237d4a7;
  }
  iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar5 >> 2) + 1;
  pFVar10 = pFVar5;
  if (iVar7 == 0) goto LAB_14237d496;
  goto LAB_14237d3a0;
}

// IntroSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_> @ 14237d560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_>
          (FBoneWeight *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>
          param_4)

{
  FBoneWeight FVar1;
  bool bVar2;
  int iVar3;
  FBoneWeight *pFVar4;
  FBoneWeight *pFVar5;
  int iVar6;
  FBoneWeight **ppFVar7;
  FBoneWeight *pFVar8;
  FBoneWeight *pFVar9;
  FBoneWeight *pFVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  FBoneWeight *local_358;
  FBoneWeight *local_348;
  FBoneWeight *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    ppFVar7 = &local_348;
    do {
      pFVar4 = ppFVar7[1];
      pFVar5 = *ppFVar7;
      local_358 = ppFVar7[2];
      iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar5 >> 2) + 1;
      pFVar10 = pFVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14237d620:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar8 = pFVar4 + 1;
          FVar1 = pFVar10[iVar3 >> 1];
          pFVar10[iVar3 >> 1] = *pFVar10;
          *pFVar10 = FVar1;
          pFVar5 = pFVar10;
LAB_14237d650:
          pFVar5 = pFVar5 + 1;
          if (pFVar5 <= pFVar4) goto code_r0x00014237d659;
          goto LAB_14237d670;
        }
        for (; pFVar8 = pFVar10, pFVar5 = pFVar10, pFVar10 < pFVar4; pFVar4 = pFVar4 + -1) {
          while (pFVar9 = pFVar8, pFVar5 = pFVar5 + 1, pFVar5 <= pFVar4) {
            bVar2 = (**param_4.Predicate)(pFVar9,pFVar5);
            pFVar8 = pFVar5;
            if (!bVar2) {
              pFVar8 = pFVar9;
            }
          }
          FVar1 = *pFVar9;
          *pFVar9 = *pFVar4;
          *pFVar4 = FVar1;
        }
        goto LAB_14237d731;
      }
LAB_14237d720:
      HeapSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_>
                (pFVar5,iVar3,param_3,param_4);
LAB_14237d731:
      ppFVar7 = ppFVar7 + -3;
    } while (&local_348 <= ppFVar7);
  }
  return;
code_r0x00014237d659:
  bVar2 = (**param_4.Predicate)(pFVar10,pFVar5);
  if (!bVar2) goto LAB_14237d650;
LAB_14237d670:
  do {
    pFVar9 = pFVar8;
    pFVar8 = pFVar9 + -1;
    if (pFVar8 <= pFVar10) break;
    bVar2 = (**param_4.Predicate)(pFVar8,pFVar10);
  } while (!bVar2);
  if (pFVar5 <= pFVar8) {
    FVar1 = *pFVar5;
    *pFVar5 = *pFVar8;
    *pFVar8 = FVar1;
    goto LAB_14237d650;
  }
  FVar1 = *pFVar10;
  iVar6 = iVar6 + -1;
  *pFVar10 = *pFVar8;
  *pFVar8 = FVar1;
  if ((longlong)((longlong)pFVar8 + (-4 - (longlong)pFVar10) & 0xfffffffffffffffcU) <
      (longlong)((longlong)pFVar4 - (longlong)pFVar5 & 0xfffffffffffffffcU)) {
    if (pFVar5 < pFVar4) {
      *ppFVar7 = pFVar5;
      ppFVar7[1] = pFVar4;
      *(int *)(ppFVar7 + 2) = iVar6;
      ppFVar7 = ppFVar7 + 3;
    }
    if (pFVar8 <= pFVar10 + 1) goto LAB_14237d731;
    pFVar4 = pFVar9 + -2;
    pFVar5 = pFVar10;
  }
  else {
    if (pFVar10 + 1 < pFVar8) {
      *ppFVar7 = pFVar10;
      ppFVar7[1] = pFVar9 + -2;
      *(int *)(ppFVar7 + 2) = iVar6;
      ppFVar7 = ppFVar7 + 3;
    }
    if (pFVar4 <= pFVar5) goto LAB_14237d731;
  }
  iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar5 >> 2) + 1;
  pFVar10 = pFVar5;
  if (iVar6 == 0) goto LAB_14237d720;
  goto LAB_14237d620;
}

// StaticEnum<enum_EConstraintType> @ 14237e4a0

UEnum * __cdecl StaticEnum<enum_EConstraintType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EConstraintType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationCore();
    Z_Registration_Info_UEnum_EConstraintType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AnimationCore_EConstraintType,(UObject *)pUVar1,
                       L"EConstraintType");
  }
  return Z_Registration_Info_UEnum_EConstraintType.OuterSingleton;
}

// StaticEnum<enum_EEulerRotationOrder> @ 14237e4e0

UEnum * __cdecl StaticEnum<enum_EEulerRotationOrder>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEulerRotationOrder.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationCore();
    Z_Registration_Info_UEnum_EEulerRotationOrder.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AnimationCore_EEulerRotationOrder,(UObject *)pUVar1,
                       L"EEulerRotationOrder");
  }
  return Z_Registration_Info_UEnum_EEulerRotationOrder.OuterSingleton;
}

// StaticEnum<enum_ETransformConstraintType> @ 14237e520

UEnum * __cdecl StaticEnum<enum_ETransformConstraintType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETransformConstraintType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationCore();
    Z_Registration_Info_UEnum_ETransformConstraintType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AnimationCore_ETransformConstraintType,(UObject *)pUVar1,
                       L"ETransformConstraintType");
  }
  return Z_Registration_Info_UEnum_ETransformConstraintType.OuterSingleton;
}

// operator<< @ 14237edd0

FArchive * __cdecl operator<<(FArchive *param_1,FBoneWeight *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->BoneIndex);
    }
  }
  else {
    param_2->BoneIndex = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar1 = &param_2->RawWeight;
  puVar2 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (ushort *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// `scalar_deleting_destructor' @ 14237f0d0

void * __thiscall
TThreadSingleton<AnimationCore::FSplineIKSolverScratchArea>::_scalar_deleting_destructor_
          (TThreadSingleton<AnimationCore::FSplineIKSolverScratchArea> *this,uint param_1)

{
  ~TThreadSingleton<AnimationCore::FSplineIKSolverScratchArea>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14237f110

void * __thiscall
AnimationCore::FSplineIKSolverScratchArea::_scalar_deleting_destructor_
          (FSplineIKSolverScratchArea *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->SplineAlphas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TThreadSingleton<AnimationCore::FSplineIKSolverScratchArea>::
  ~TThreadSingleton<AnimationCore::FSplineIKSolverScratchArea>
            ((TThreadSingleton<AnimationCore::FSplineIKSolverScratchArea> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14237f160

void * __thiscall
UAnimationDataSourceRegistry::_scalar_deleting_destructor_
          (UAnimationDataSourceRegistry *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAnimationDataSourceRegistry__6B_;
  *(undefined4 *)&(this->DataSources).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DataSources).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DataSources);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// ChangeEulerRotationOrder @ 142380c50

TVector<double> * __cdecl
AnimationCore::ChangeEulerRotationOrder
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          EEulerRotationOrder param_2,EEulerRotationOrder param_3,bool param_4)

{
  double dVar1;
  TQuat<double> local_28;
  
  if (param_2 == param_3) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    return __return_storage_ptr__;
  }
  QuatFromEuler(&local_28,param_1,param_2,param_4);
  EulerFromQuat(__return_storage_ptr__,&local_28,param_3,param_4);
  return __return_storage_ptr__;
}

// ConstrainAngularRangeUsingEuler @ 142380f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
AnimationCore::ConstrainAngularRangeUsingEuler
          (TQuat<double> *param_1,TQuat<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  int iVar24;
  TQuat<double> *pTVar25;
  uint uVar26;
  TRotator<double> *this;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar44;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  TRotator<double> local_c8;
  TRotator<double> local_b0;
  undefined1 local_98 [32];
  TQuat<double> local_78 [3];
  
  dVar10 = param_1->Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar11 = param_1->W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar57._8_4_ = SUB84(dVar11,0);
  auVar57._0_8_ = dVar10;
  auVar57._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  uVar1 = param_2->X;
  uVar3 = param_2->Y;
  dVar14 = param_1->X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar16 = param_1->Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar55._8_4_ = (int)uVar1;
  auVar55._0_8_ = uVar1;
  auVar55._12_4_ = (int)((ulonglong)uVar1 >> 0x20);
  uVar2 = param_2->Z;
  uVar4 = param_2->W;
  auVar45._8_4_ = (int)uVar3;
  auVar45._0_8_ = uVar3;
  auVar45._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
  auVar37._8_4_ = (int)uVar4;
  auVar37._0_8_ = uVar4;
  auVar37._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
  auVar33._8_4_ = (int)uVar2;
  auVar33._0_8_ = uVar2;
  auVar33._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
  local_98._0_8_ =
       (double)uVar1 * auVar57._8_8_ *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + (double)uVar4 * dVar14 +
       (double)uVar3 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       (double)uVar2 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_98._8_8_ =
       auVar55._8_8_ * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
       auVar37._8_8_ * dVar16 +
       auVar45._8_8_ * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
       auVar33._8_8_ * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar11 = (double)uVar1 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
           + (double)uVar4 * dVar11 +
           (double)uVar3 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
           + (double)uVar2 * dVar10 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_98._24_4_ = SUB84(dVar11,0);
  local_98._16_8_ =
       (double)uVar1 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       (double)uVar4 * dVar10 +
       (double)uVar3 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       (double)uVar2 * auVar57._8_8_ *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_98._28_4_ = (int)((ulonglong)dVar11 >> 0x20);
  UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_98,&local_b0);
  local_c8.Pitch = (param_4->field0_0x0)._s_0.Y;
  this = &local_c8;
  local_c8.Yaw = (param_4->field0_0x0)._s_0.X;
  if (local_b0.Pitch <= local_c8.Pitch) {
    local_c8.Pitch = local_b0.Pitch;
  }
  if (local_b0.Yaw <= local_c8.Yaw) {
    local_c8.Yaw = local_b0.Yaw;
  }
  dVar10 = (param_3->field0_0x0)._s_0.Y;
  if (local_c8.Pitch <= dVar10) {
    local_c8.Pitch = dVar10;
  }
  dVar10 = (param_3->field0_0x0)._s_0.X;
  if (local_c8.Yaw <= dVar10) {
    local_c8.Yaw = dVar10;
  }
  local_c8.Roll = (param_4->field0_0x0)._s_0.Z;
  if (local_b0.Roll <= local_c8.Roll) {
    local_c8.Roll = local_b0.Roll;
  }
  dVar10 = (param_3->field0_0x0)._s_0.Z;
  if (local_c8.Roll <= dVar10) {
    local_c8.Roll = dVar10;
  }
  pTVar25 = UE::Math::TRotator<double>::Quaternion(this,local_78);
  dVar20 = param_2->Z;
  dVar21 = param_2->W;
  dVar22 = param_2->X;
  dVar23 = param_2->Y;
  dVar18 = pTVar25->Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar19 = pTVar25->W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar15 = pTVar25->X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar17 = pTVar25->Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar34._8_4_ = SUB84(dVar19,0);
  auVar34._0_8_ = dVar19;
  auVar34._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar16 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  auVar35._8_4_ = SUB84(dVar18,0);
  auVar35._0_8_ = dVar18;
  auVar35._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  auVar46._8_4_ = SUB84(dVar17,0);
  auVar46._0_8_ = dVar17;
  auVar46._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  auVar47._8_8_ = 0;
  auVar47._0_8_ = local_b0.Roll;
  dVar44 = dVar15 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar19 * dVar22 +
           dVar17 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar18 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar54 = dVar15 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           auVar34._8_8_ * dVar23 +
           auVar46._8_8_ * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + auVar35._8_8_ * dVar22 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_c8.Yaw = local_c8.Yaw - local_b0.Yaw;
  auVar36._8_4_ = SUB84(local_c8.Yaw,0);
  auVar36._0_8_ = local_c8.Pitch - local_b0.Pitch;
  auVar36._12_4_ = (int)((ulonglong)local_c8.Yaw >> 0x20);
  dVar14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar9._8_4_ = SUB84(dVar54,0);
  auVar9._0_8_ = dVar44;
  auVar9._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
  param_1->X = dVar44;
  param_1->Y = (double)auVar9._8_8_;
  dVar10 = dVar15 * dVar23 * dVar10 + dVar19 * dVar20 + dVar17 * dVar22 * dVar11 +
           dVar18 * dVar21 * dVar14;
  dVar11 = dVar15 * dVar22 * dVar16 + dVar19 * dVar21 + dVar17 * dVar23 * dVar5 +
           dVar18 * dVar20 * dVar6;
  auVar12._8_4_ = SUB84(dVar11,0);
  auVar12._0_8_ = dVar10;
  auVar12._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  param_1->Z = dVar10;
  param_1->W = (double)auVar12._8_8_;
  auVar37 = divpd(auVar36,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar37 = roundpd(auVar47,auVar37,3);
  dVar5 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar48._0_8_ = auVar37._0_8_ * dVar5;
  dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar48._8_8_ = auVar37._8_8_ * dVar6;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = local_c8.Roll - local_b0.Roll;
  dVar54 = (local_c8.Pitch - local_b0.Pitch) - auVar48._0_8_;
  local_c8.Yaw = local_c8.Yaw - auVar48._8_8_;
  auVar37 = divpd(auVar38,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  auVar37 = roundpd(auVar48,auVar37,3);
  dVar14 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  dVar16 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar39._8_4_ = SUB84(local_c8.Yaw,0);
  auVar39._0_8_ = dVar54;
  auVar39._12_4_ = (int)((ulonglong)local_c8.Yaw >> 0x20);
  dVar10 = (local_c8.Roll - local_b0.Roll) - auVar37._0_8_ * dVar14;
  dVar11 = 0.0 - auVar37._8_8_ * dVar16;
  dVar44 = auVar39._8_8_ + dVar6;
  uVar27 = -(ulonglong)(0.0 <= dVar54);
  uVar29 = -(ulonglong)(0.0 <= local_c8.Yaw);
  auVar49._0_8_ = uVar27 & (ulonglong)dVar54;
  auVar49._8_4_ = (undefined4)(uVar29 & (ulonglong)local_c8.Yaw);
  auVar49._12_4_ = (undefined4)((uVar29 & (ulonglong)local_c8.Yaw) >> 0x20);
  auVar58._0_4_ = ~(uint)uVar27 & SUB84(dVar54 + dVar5,0);
  auVar58._4_4_ = ~(uint)(uVar27 >> 0x20) & (uint)((ulonglong)(dVar54 + dVar5) >> 0x20);
  auVar58._8_4_ = ~(uint)uVar29 & SUB84(dVar44,0);
  auVar58._12_4_ = ~(uint)(uVar29 >> 0x20) & (uint)((ulonglong)dVar44 >> 0x20);
  auVar40._8_4_ = SUB84(dVar11,0);
  auVar40._0_8_ = dVar10;
  auVar40._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  dVar44 = auVar40._8_8_ + dVar16;
  auVar58 = auVar58 | auVar49;
  uVar27 = -(ulonglong)(0.0 <= dVar10);
  uVar29 = -(ulonglong)(0.0 <= dVar11);
  auVar56._0_4_ = ~(uint)uVar27 & SUB84(dVar10 + dVar14,0);
  auVar56._4_4_ = ~(uint)(uVar27 >> 0x20) & (uint)((ulonglong)(dVar10 + dVar14) >> 0x20);
  auVar56._8_4_ = ~(uint)uVar29 & SUB84(dVar44,0);
  auVar56._12_4_ = ~(uint)(uVar29 >> 0x20) & (uint)((ulonglong)dVar44 >> 0x20);
  auVar7._8_4_ = (int)((ulonglong)dVar11 & uVar29);
  auVar7._0_8_ = (ulonglong)dVar10 & uVar27;
  auVar7._12_4_ = (int)(((ulonglong)dVar11 & uVar29) >> 0x20);
  auVar56 = auVar56 | auVar7;
  uVar29 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar56._0_8_);
  uVar30 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar56._8_8_);
  uVar28 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar58._0_8_);
  uVar31 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar58._8_8_);
  auVar50._0_8_ = uVar29 & (ulonglong)(auVar56._0_8_ - dVar14);
  uVar27 = uVar30 & (ulonglong)(auVar56._8_8_ - dVar16);
  auVar50._8_4_ = (undefined4)uVar27;
  auVar50._12_4_ = (undefined4)(uVar27 >> 0x20);
  auVar41._0_4_ = ~(uint)uVar29 & auVar56._0_4_;
  auVar41._4_4_ = ~(uint)(uVar29 >> 0x20) & auVar56._4_4_;
  auVar41._8_4_ = ~(uint)uVar30 & auVar56._8_4_;
  auVar41._12_4_ = ~(uint)(uVar30 >> 0x20) & auVar56._12_4_;
  auVar50 = auVar50 | auVar41;
  auVar42._8_4_ = SUB84(__real_3f1a36e2e0000000,0);
  auVar42._0_8_ = __real_3f1a36e2e0000000;
  auVar42._12_4_ = (int)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
  auVar51._0_8_ =
       (double)CONCAT44(auVar50._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar50._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar51._8_4_ = auVar50._8_4_ & _UNK_15061cc88;
  auVar51._12_4_ = auVar50._12_4_ & _UNK_15061cc8c;
  auVar43._8_8_ = -(ulonglong)(auVar42._8_8_ < auVar51._8_8_);
  auVar43._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar51._0_8_);
  uVar26 = movmskpd((int)this,auVar43);
  auVar52._0_8_ = uVar28 & (ulonglong)(auVar58._0_8_ - dVar5);
  uVar27 = uVar31 & (ulonglong)(auVar58._8_8_ - dVar6);
  auVar52._8_4_ = (undefined4)uVar27;
  auVar52._12_4_ = (undefined4)(uVar27 >> 0x20);
  auVar8._4_4_ = ~(uint)(uVar28 >> 0x20) & auVar58._4_4_;
  auVar8._0_4_ = ~(uint)uVar28 & auVar58._0_4_;
  auVar8._8_4_ = ~(uint)uVar31 & auVar58._8_4_;
  auVar8._12_4_ = ~(uint)(uVar31 >> 0x20) & auVar58._12_4_;
  auVar52 = auVar52 | auVar8;
  auVar53._0_8_ =
       (double)CONCAT44(auVar52._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar52._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar53._8_4_ = auVar52._8_4_ & _UNK_15061cc88;
  auVar53._12_4_ = auVar52._12_4_ & _UNK_15061cc8c;
  lVar32 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar53._8_8_);
  auVar13._8_4_ = (int)lVar32;
  auVar13._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar53._0_8_);
  auVar13._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
  iVar24 = movmskpd((int)pTVar25,auVar13);
  return (uVar26 & 0x3fffffff) != 0 || iVar24 != 0;
}

// CreateWeights @ 142381360

FBoneWeights * __cdecl
CreateWeights(FBoneWeights *__return_storage_ptr__,initializer_list<FSimpleWeight> *param_1)

{
  FSimpleWeight *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  FBoneWeights *pFVar10;
  FSimpleWeight *pFVar11;
  int iVar12;
  ulonglong uVar13;
  float fVar14;
  FBoneWeight local_b8 [2];
  ForAnyElementType local_b0;
  int local_a8;
  int local_a4;
  FBoneWeightsSettings local_a0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_90;
  FBoneWeight *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<UE::AnimationCore::FBoneWeight_const_,int> local_78 [5];
  
  pFVar1 = param_1->_Last;
  pFVar11 = param_1->_First;
  local_a0.MaxWeightCount = 0xc;
  uVar13 = (longlong)pFVar1 - (longlong)pFVar11 >> 3;
  local_a0.WeightThreshold = 1;
  local_a0.DefaultBoneIndex = 0;
  local_a0.bHasDefaultBoneIndex = false;
  local_a0.bBlendZeroInfluence = true;
  local_a0.NormalizeType = None;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  local_a4 = 0;
  iVar12 = (int)uVar13;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar13 & 0xffffffff);
  }
  fVar3 = __real_3f800000;
  fVar4 = __real_3f000000;
  fVar5 = __real_477fff00;
  iStack_80 = local_a8;
  if (0 < iVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,iVar12,&local_b0,0,&local_a4);
    fVar3 = __real_3f800000;
    fVar4 = __real_3f000000;
    fVar5 = __real_477fff00;
    iStack_80 = local_a8;
  }
  while( true ) {
    fVar8 = __real_477fff00;
    fVar7 = __real_3f000000;
    fVar6 = __real_3f800000;
    local_a8 = iStack_80;
    if (pFVar11 == pFVar1) {
      __real_3f800000 = fVar3;
      __real_3f000000 = fVar4;
      __real_477fff00 = fVar5;
      local_88 = (FBoneWeight *)local_b0.Data;
      if ((iStack_80 < 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        pFVar10 = (FBoneWeights *)(*pcVar2)();
        return pFVar10;
      }
      (__return_storage_ptr__->BoneWeights).AllocatorInstance.SecondaryData =
           (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
      local_78[0]._12_4_ = uStack_7c;
      local_78[0].ArrayNum = iStack_80;
      local_78[0].DataPtr = local_88;
      (__return_storage_ptr__->BoneWeights).ArrayNum = 0;
      (__return_storage_ptr__->BoneWeights).ArrayMax = 0xc;
      local_90.Container = &__return_storage_ptr__->BoneWeights;
      UE::AnimationCore::
      TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
      ::
      SetBoneWeights<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                (&local_90,local_78,&local_a0);
      if ((FBoneWeight *)local_b0.Data != (FBoneWeight *)0x0) {
        FMemory::Free(local_b0.Data);
      }
      return __return_storage_ptr__;
    }
    fVar14 = pFVar11->Weight;
    if (__real_3f800000 <= pFVar11->Weight) {
      fVar14 = __real_3f800000;
    }
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    local_b8[0].RawWeight = (ushort)(int)(fVar14 * __real_477fff00 + __real_3f000000);
    local_b8[0].BoneIndex = (ushort)pFVar11->Index;
    __real_3f800000 = fVar3;
    __real_3f000000 = fVar4;
    __real_477fff00 = fVar5;
    if (((local_b0.Data <= local_b8) &&
        (local_b8 < (FBoneWeight *)((longlong)local_b0.Data + (longlong)local_a4 * 4))) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) break;
    if (local_a8 == local_a4) {
      local_a8 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x204,&local_b0,&local_a4);
    }
    pFVar11 = pFVar11 + 1;
    *(FBoneWeight *)(local_b0.Data + (longlong)local_a8 * 4) = local_b8[0];
    fVar3 = __real_3f800000;
    fVar4 = __real_3f000000;
    fVar5 = __real_477fff00;
    iStack_80 = local_a8 + 1;
    __real_477fff00 = fVar8;
    __real_3f000000 = fVar7;
    __real_3f800000 = fVar6;
  }
  pcVar2 = (code *)swi(3);
  pFVar10 = (FBoneWeights *)(*pcVar2)();
  return pFVar10;
}

// EmptyLinkFunctionForGeneratedCodeAnimationCore_init @ 142381820

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimationCore_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimationDataSource @ 142381830

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimationDataSource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCCDIK @ 142381840

void __cdecl EmptyLinkFunctionForGeneratedCodeCCDIK(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCommonAnimTypes @ 142381850

void __cdecl EmptyLinkFunctionForGeneratedCodeCommonAnimTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeConstraint @ 142381860

void __cdecl EmptyLinkFunctionForGeneratedCodeConstraint(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEulerTransform @ 142381870

void __cdecl EmptyLinkFunctionForGeneratedCodeEulerTransform(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFABRIK @ 142381880

void __cdecl EmptyLinkFunctionForGeneratedCodeFABRIK(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNodeChain @ 142381890

void __cdecl EmptyLinkFunctionForGeneratedCodeNodeChain(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNodeHierarchy @ 1423818a0

void __cdecl EmptyLinkFunctionForGeneratedCodeNodeHierarchy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTransformNoScale @ 1423818b0

void __cdecl EmptyLinkFunctionForGeneratedCodeTransformNoScale(void)

{
  return;
}

// EulerFromQuat @ 1423818c0

TVector<double> * __cdecl
AnimationCore::EulerFromQuat
          (TVector<double> *__return_storage_ptr__,TQuat<double> *param_1,
          EEulerRotationOrder param_2,bool param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint uVar27;
  uint local_b8;
  uint uStack_b4;
  
  dVar1 = param_1->X;
  dVar14 = param_1->Y;
  dVar2 = param_1->Z;
  dVar15 = param_1->W;
  dVar16 = dVar2 + dVar2;
  dVar5 = dVar14 + dVar14;
  dVar3 = (dVar1 + dVar1) * dVar1;
  dVar8 = dVar16 * dVar1;
  dVar6 = dVar5 * dVar15;
  dVar4 = (dVar1 + dVar1) * dVar15;
  uVar11 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
  uVar18 = (uint)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
  dVar10 = __real_3ff0000000000000 - (dVar16 * dVar2 + dVar5 * dVar14);
  dVar2 = __real_3ff0000000000000 - (dVar16 * dVar2 + dVar3);
  dVar13 = __real_3ff0000000000000 - (dVar5 * dVar14 + dVar3);
  uVar12 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uVar17 = (uint)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  dVar9 = dVar8 - dVar6;
  uVar27 = (uint)((ulonglong)dVar9 >> 0x20);
  uVar25 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar26 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  dVar7 = dVar16 * dVar15 + dVar5 * dVar1;
  dVar3 = dVar4 + dVar16 * dVar14;
  dVar4 = dVar16 * dVar14 - dVar4;
  uVar21 = SUB84(dVar4,0);
  uVar22 = (uint)((ulonglong)dVar4 >> 0x20);
  uVar19 = (uint)__xmm_80000000000000008000000000000000;
  uVar20 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar1 = dVar5 * dVar1 - dVar16 * dVar15;
  uVar23 = SUB84(dVar1,0);
  uVar24 = (uint)((ulonglong)dVar1 >> 0x20);
  dVar14 = dVar6 + dVar8;
  if (param_2 == XYZ) {
    dVar1 = dVar9;
    if (__real_3ff0000000000000 <= dVar9) {
      dVar1 = __real_3ff0000000000000;
    }
    if (dVar1 <= __real_bff0000000000000) {
      dVar1 = __real_bff0000000000000;
    }
    uVar11 = SUB84(dVar1,0) ^ uVar19;
    uVar12 = (uint)((ulonglong)dVar1 >> 0x20) ^ uVar20;
    dVar1 = (double)CONCAT44(uVar12,uVar11);
    dVar14 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar1) &&
       (dVar14 = dVar1, __real_3ff0000000000000 <= (double)CONCAT44(uVar12,uVar11))) {
      dVar14 = __real_3ff0000000000000;
    }
    dVar1 = asin(dVar14);
    uVar11 = SUB84(dVar1,0);
    uVar18 = (uint)((ulonglong)dVar1 >> 0x20);
    if (__real_3fefff2e48e8a71e <=
        (double)CONCAT44(uVar27 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar7 = (double)CONCAT44(uVar24 ^ uVar20,uVar23 ^ uVar19);
      uVar12 = 0;
      uVar17 = 0;
    }
    else {
      dVar1 = FGenericPlatformMath::Atan2(dVar3,dVar13);
      uVar12 = SUB84(dVar1,0);
      uVar17 = (uint)((ulonglong)dVar1 >> 0x20);
      dVar2 = dVar10;
    }
    dVar1 = FGenericPlatformMath::Atan2(dVar7,dVar2);
    uVar25 = SUB84(dVar1,0);
    uVar26 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  else if (param_2 == XZY) {
    dVar1 = dVar7;
    if (__real_3ff0000000000000 <= dVar7) {
      dVar1 = __real_3ff0000000000000;
    }
    if (dVar1 <= __real_bff0000000000000) {
      dVar1 = __real_bff0000000000000;
    }
    dVar15 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar1) && (dVar15 = dVar1, __real_3ff0000000000000 <= dVar1)) {
      dVar15 = __real_3ff0000000000000;
    }
    dVar1 = asin(dVar15);
    uVar25 = SUB84(dVar1,0);
    uVar26 = (undefined4)((ulonglong)dVar1 >> 0x20);
    if (__real_3fefff2e48e8a71e <=
        (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      uVar12 = 0;
      uVar17 = 0;
    }
    else {
      dVar1 = FGenericPlatformMath::Atan2((double)CONCAT44(uVar22 ^ uVar20,uVar21 ^ uVar19),dVar2);
      uVar12 = SUB84(dVar1,0);
      uVar17 = (uint)((ulonglong)dVar1 >> 0x20);
      dVar14 = (double)CONCAT44(uVar27 ^ uVar20,SUB84(dVar9,0) ^ uVar19);
      dVar13 = dVar10;
    }
    dVar1 = FGenericPlatformMath::Atan2(dVar14,dVar13);
    uVar11 = SUB84(dVar1,0);
    uVar18 = (uint)((ulonglong)dVar1 >> 0x20);
  }
  else if (param_2 == YXZ) {
    dVar1 = dVar3;
    if (__real_3ff0000000000000 <= dVar3) {
      dVar1 = __real_3ff0000000000000;
    }
    if (dVar1 <= __real_bff0000000000000) {
      dVar1 = __real_bff0000000000000;
    }
    dVar14 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar1) && (dVar14 = dVar1, __real_3ff0000000000000 <= dVar1)) {
      dVar14 = __real_3ff0000000000000;
    }
    dVar1 = asin(dVar14);
    uVar12 = SUB84(dVar1,0);
    uVar17 = (uint)((ulonglong)dVar1 >> 0x20);
    local_b8 = SUB84(dVar3,0);
    uStack_b4 = (uint)((ulonglong)dVar3 >> 0x20);
    if (__real_3fefff2e48e8a71e <=
        (double)CONCAT44(uStack_b4 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         local_b8 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      uVar11 = 0;
      uVar18 = 0;
      dVar1 = FGenericPlatformMath::Atan2(dVar7,dVar10);
      uVar25 = SUB84(dVar1,0);
      uVar26 = (undefined4)((ulonglong)dVar1 >> 0x20);
    }
    else {
      dVar1 = FGenericPlatformMath::Atan2(dVar6 - dVar8,dVar13);
      uVar11 = SUB84(dVar1,0);
      uVar18 = (uint)((ulonglong)dVar1 >> 0x20);
      dVar1 = FGenericPlatformMath::Atan2((double)CONCAT44(uVar24 ^ uVar20,uVar23 ^ uVar19),dVar2);
      uVar25 = SUB84(dVar1,0);
      uVar26 = (undefined4)((ulonglong)dVar1 >> 0x20);
    }
  }
  else if (param_2 == YZX) {
    if (__real_3ff0000000000000 <= dVar1) {
      dVar1 = __real_3ff0000000000000;
    }
    if (dVar1 <= __real_bff0000000000000) {
      dVar1 = __real_bff0000000000000;
    }
    uVar11 = SUB84(dVar1,0) ^ uVar19;
    uVar12 = (uint)((ulonglong)dVar1 >> 0x20) ^ uVar20;
    dVar1 = (double)CONCAT44(uVar12,uVar11);
    dVar15 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar1) &&
       (dVar15 = dVar1, __real_3ff0000000000000 <= (double)CONCAT44(uVar12,uVar11))) {
      dVar15 = __real_3ff0000000000000;
    }
    dVar1 = asin(dVar15);
    uVar25 = SUB84(dVar1,0);
    uVar26 = (undefined4)((ulonglong)dVar1 >> 0x20);
    if ((double)CONCAT44(uVar24 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         uVar23 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
        __real_3fefff2e48e8a71e) {
      dVar1 = FGenericPlatformMath::Atan2(dVar3,dVar2);
      uVar12 = SUB84(dVar1,0);
      uVar17 = (uint)((ulonglong)dVar1 >> 0x20);
      dVar1 = FGenericPlatformMath::Atan2(dVar14,dVar10);
      uVar11 = SUB84(dVar1,0);
      uVar18 = (uint)((ulonglong)dVar1 >> 0x20);
    }
    else {
      dVar1 = FGenericPlatformMath::Atan2((double)CONCAT44(uVar22 ^ uVar20,uVar21 ^ uVar19),dVar13);
      uVar12 = SUB84(dVar1,0);
      uVar17 = (uint)((ulonglong)dVar1 >> 0x20);
      uVar11 = 0;
      uVar18 = 0;
    }
  }
  else if (param_2 == ZXY) {
    if (__real_3ff0000000000000 <= dVar4) {
      dVar4 = __real_3ff0000000000000;
    }
    if (dVar4 <= __real_bff0000000000000) {
      dVar4 = __real_bff0000000000000;
    }
    uVar11 = SUB84(dVar4,0) ^ uVar19;
    uVar12 = (uint)((ulonglong)dVar4 >> 0x20) ^ uVar20;
    dVar1 = (double)CONCAT44(uVar12,uVar11);
    dVar15 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar1) &&
       (dVar15 = dVar1, __real_3ff0000000000000 <= (double)CONCAT44(uVar12,uVar11))) {
      dVar15 = __real_3ff0000000000000;
    }
    dVar1 = asin(dVar15);
    uVar12 = SUB84(dVar1,0);
    uVar17 = (uint)((ulonglong)dVar1 >> 0x20);
    if (__real_3fefff2e48e8a71e <=
        (double)CONCAT44(uVar22 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         uVar21 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar1 = FGenericPlatformMath::Atan2(dVar6 - dVar8,dVar10);
      uVar11 = SUB84(dVar1,0);
      uVar18 = (uint)((ulonglong)dVar1 >> 0x20);
      uVar25 = 0;
      uVar26 = 0;
    }
    else {
      dVar1 = FGenericPlatformMath::Atan2(dVar14,dVar13);
      uVar11 = SUB84(dVar1,0);
      uVar18 = (uint)((ulonglong)dVar1 >> 0x20);
      dVar1 = FGenericPlatformMath::Atan2(dVar7,dVar2);
      uVar25 = SUB84(dVar1,0);
      uVar26 = (undefined4)((ulonglong)dVar1 >> 0x20);
    }
  }
  else if (param_2 == ZYX) {
    dVar1 = dVar14;
    if (__real_3ff0000000000000 <= dVar14) {
      dVar1 = __real_3ff0000000000000;
    }
    if (dVar1 <= __real_bff0000000000000) {
      dVar1 = __real_bff0000000000000;
    }
    dVar15 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar1) && (dVar15 = dVar1, __real_3ff0000000000000 <= dVar1)) {
      dVar15 = __real_3ff0000000000000;
    }
    dVar1 = asin(dVar15);
    uVar11 = SUB84(dVar1,0);
    uVar18 = (uint)((ulonglong)dVar1 >> 0x20);
    if ((double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
        __real_3fefff2e48e8a71e) {
      dVar1 = FGenericPlatformMath::Atan2((double)CONCAT44(uVar22 ^ uVar20,uVar21 ^ uVar19),dVar13);
      uVar12 = SUB84(dVar1,0);
      uVar17 = (uint)((ulonglong)dVar1 >> 0x20);
      dVar1 = FGenericPlatformMath::Atan2((double)CONCAT44(uVar24 ^ uVar20,uVar23 ^ uVar19),dVar10);
      uVar25 = SUB84(dVar1,0);
      uVar26 = (undefined4)((ulonglong)dVar1 >> 0x20);
    }
    else {
      dVar1 = FGenericPlatformMath::Atan2(dVar3,dVar2);
      uVar12 = SUB84(dVar1,0);
      uVar17 = (uint)((ulonglong)dVar1 >> 0x20);
      uVar25 = 0;
      uVar26 = 0;
    }
  }
  if (param_3) {
    uVar12 = uVar12 ^ uVar19;
    uVar17 = uVar17 ^ uVar20;
    uVar11 = uVar11 ^ uVar19;
    uVar18 = uVar18 ^ uVar20;
  }
  dVar1 = (double)CONCAT44(uVar18,uVar11) * __real_404ca5dc1a63c1f8;
  dVar14 = (double)CONCAT44(uVar26,uVar25) * __real_404ca5dc1a63c1f8;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)CONCAT44(uVar17,uVar12) * __real_404ca5dc1a63c1f8;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar14;
  return __return_storage_ptr__;
}

// QuatFromEuler @ 142384470

TQuat<double> * __cdecl
AnimationCore::QuatFromEuler
          (TQuat<double> *__return_storage_ptr__,TVector<double> *param_1,
          EEulerRotationOrder param_2,bool param_3)

{
  double dVar1;
  double dVar2;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  __libm_sse2_sincos_();
  dVar2 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  __libm_sse2_sincos_();
  dVar1 = (double)CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
  __libm_sse2_sincos_();
  dVar5 = UE::Math::TQuat<double>::Identity.W;
  dVar3 = UE::Math::TQuat<double>::Identity.Z;
  dVar4 = UE::Math::TQuat<double>::Identity.Y;
  dVar6 = (double)CONCAT44(extraout_XMM0_Dd_01,extraout_XMM0_Dc_01);
  if (param_2 == XYZ) {
    dVar5 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) * dVar2;
    dVar3 = dVar1 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    dVar4 = dVar3 * dVar6 - dVar5 * (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
    __return_storage_ptr__->Y =
         dVar5 * dVar6 + dVar3 * (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
LAB_14238456b:
    __return_storage_ptr__->X = dVar4;
    dVar3 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) *
            (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    dVar4 = dVar1 * dVar2 * (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01) -
            dVar3 * dVar6;
LAB_14238458b:
    __return_storage_ptr__->Z = dVar4;
    __return_storage_ptr__->W =
         dVar1 * dVar2 * dVar6 + dVar3 * (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
  }
  else {
    if (param_2 == XZY) {
      dVar4 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) * dVar2;
      dVar5 = dVar1 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      dVar3 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) *
              (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      __return_storage_ptr__->X =
           dVar5 * dVar6 + dVar4 * (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
      __return_storage_ptr__->Y =
           dVar4 * dVar6 + dVar5 * (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
      dVar4 = dVar1 * dVar2 * (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01) -
              dVar3 * dVar6;
    }
    else {
      if (param_2 != YXZ) {
        if (param_2 != YZX) {
          if (param_2 != ZXY) {
            if (param_2 == ZYX) {
              dVar3 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) * dVar2;
              dVar5 = dVar1 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
              dVar4 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) *
                      (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
              __return_storage_ptr__->X =
                   dVar5 * dVar6 + dVar3 * (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01)
              ;
              __return_storage_ptr__->Y =
                   dVar3 * dVar6 - dVar5 * (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01)
              ;
              __return_storage_ptr__->Z =
                   dVar4 * dVar6 +
                   dVar1 * dVar2 * (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
              __return_storage_ptr__->W =
                   dVar1 * dVar2 * dVar6 -
                   dVar4 * (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
              return __return_storage_ptr__;
            }
            __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
            __return_storage_ptr__->Y = dVar4;
            __return_storage_ptr__->Z = dVar3;
            __return_storage_ptr__->W = dVar5;
            return __return_storage_ptr__;
          }
          dVar3 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) * dVar2;
          dVar5 = dVar1 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
          dVar4 = dVar5 * dVar6 + dVar3 * (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
          __return_storage_ptr__->Y =
               dVar3 * dVar6 - dVar5 * (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
          goto LAB_14238456b;
        }
        dVar5 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) * dVar2;
        dVar4 = dVar1 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
        dVar3 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) *
                (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
        __return_storage_ptr__->X =
             dVar4 * dVar6 - dVar5 * (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
        __return_storage_ptr__->Y =
             dVar5 * dVar6 - dVar4 * (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
        dVar4 = dVar3 * dVar6 +
                dVar1 * dVar2 * (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
        goto LAB_14238458b;
      }
      dVar5 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) * dVar2;
      dVar4 = dVar1 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      dVar3 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) *
              (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      __return_storage_ptr__->X =
           dVar4 * dVar6 - dVar5 * (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
      __return_storage_ptr__->Y =
           dVar5 * dVar6 + dVar4 * (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
      dVar4 = dVar3 * dVar6 +
              dVar1 * dVar2 * (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
    }
    __return_storage_ptr__->Z = dVar4;
    __return_storage_ptr__->W =
         dVar1 * dVar2 * dVar6 - dVar3 * (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
  }
  return __return_storage_ptr__;
}

// SoftenIKEffectorPosition @ 142385cf0

void __cdecl
AnimationCore::SoftenIKEffectorPosition
          (TVector<double> *param_1,float param_2,float param_3,float param_4,
          TVector<double> *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  
  fVar9 = __real_3f800000;
  if ((__real_38d1b717 <=
       (float)((uint)(__real_3f800000 - param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
     (__real_38d1b717 < param_2)) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    dVar13 = (param_5->field0_0x0)._s_0.Y - dVar1;
    dVar2 = (param_1->field0_0x0)._s_0.X;
    dVar14 = (param_5->field0_0x0)._s_0.X - dVar2;
    dVar3 = (param_1->field0_0x0)._s_0.Z;
    dVar5 = (param_5->field0_0x0)._s_0.Z - dVar3;
    auVar11._0_8_ = dVar14 * dVar14;
    auVar11._8_8_ = 0;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = dVar13 * dVar13 + auVar11._0_8_ + dVar5 * dVar5;
    auVar12 = sqrtpd(auVar11,auVar12);
    fVar16 = (float)auVar12._0_8_;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_322bcc77 < fVar16) {
      dVar4 = (double)(__real_3f800000 / fVar16);
      uVar6 = dVar4 * dVar14;
      uVar7 = dVar4 * dVar13;
      uVar8 = dVar4 * dVar5;
    }
    if (__real_3f800000 <= param_3) {
      param_3 = __real_3f800000;
    }
    fVar15 = (__real_3f800000 - param_3) * param_2;
    fVar10 = fVar16 - (param_2 - fVar15);
    if ((__real_38d1b717 < fVar10) && (__real_38d1b717 < fVar15)) {
      fVar10 = expf((float)((uint)(fVar10 / fVar15) ^ __xmm_80000000800000008000000080000000));
      dVar13 = (double)param_4;
      if (__real_3ff0000000000000 <= (double)param_4) {
        dVar13 = __real_3ff0000000000000;
      }
      fVar10 = (fVar9 - fVar10) * fVar15 + (param_2 - fVar15);
      if (dVar13 <= 0.0) {
        dVar13 = 0.0;
      }
      if ((float)dVar13 < fVar9) {
        if (param_2 <= fVar16) {
          fVar16 = param_2;
        }
        fVar10 = (fVar10 - fVar16) * param_4 + fVar16;
      }
      dVar13 = (double)fVar10;
      (param_5->field0_0x0)._s_0.Y = dVar13 * (double)uVar7 + dVar1;
      (param_5->field0_0x0)._s_0.X = dVar13 * (double)uVar6 + dVar2;
      (param_5->field0_0x0)._s_0.Z = dVar13 * (double)uVar8 + dVar3;
    }
  }
  return;
}

// SolveAim @ 142385f50

TQuat<double> * __cdecl
AnimationCore::SolveAim
          (TQuat<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,bool param_4,TVector<double> *param_5,
          float param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  bool bVar10;
  TQuat<double> *pTVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  TVector<double>_u_0 local_b0;
  double local_98;
  double dStack_90;
  double local_88;
  
  dVar9 = __real_3e45798ee0000000;
  dVar15 = __real_3ff0000000000000;
  dVar16 = (param_3->field0_0x0)._s_0.X;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.Z;
  dVar14 = __real_3ff0000000000000 - (dVar1 * dVar1 + dVar16 * dVar16 + dVar2 * dVar2);
  if ((double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
      __real_3f847ae140000000) {
    if ((!param_4) ||
       (dVar14 = (param_5->field0_0x0)._s_0.X, dVar3 = (param_5->field0_0x0)._s_0.Y,
       dVar4 = (param_5->field0_0x0)._s_0.Z,
       dVar14 = __real_3ff0000000000000 - (dVar3 * dVar3 + dVar14 * dVar14 + dVar4 * dVar4),
       (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
       __real_3f847ae140000000)) {
      local_98 = (param_1->Translation).XY.m128d_f64[0];
      dStack_90 = (param_1->Translation).XY.m128d_f64[1];
      local_88 = (param_1->Translation).ZW.m128d_f64[0];
      uVar6 = (param_2->field0_0x0)._s_0.X - local_98;
      uVar7 = (param_2->field0_0x0)._s_0.Y - dStack_90;
      uVar8 = (param_2->field0_0x0)._s_0.Z - local_88;
      dVar14 = (double)uVar7 * (double)uVar7 + (double)uVar6 * (double)uVar6 +
               (double)uVar8 * (double)uVar8;
      if (__real_3e45798ee0000000 < dVar14) {
        dVar14 = __real_3ff0000000000000 / SQRT(dVar14);
        uVar6 = (double)uVar6 * dVar14;
        uVar7 = (double)uVar7 * dVar14;
        uVar8 = (double)uVar8 * dVar14;
      }
      local_b0._s_0.X = (double)uVar6;
      local_b0._s_0.Y = (double)uVar7;
      local_b0._s_0.Z = (double)uVar8;
      if (__real_3727c5ac < param_6) {
        uVar12 = SUB84(__real_bff0000000000000,0);
        uVar13 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
        dVar14 = (double)param_6;
        if (__real_4066800000000000 <= (double)param_6) {
          dVar14 = __real_4066800000000000;
        }
        dVar14 = dVar14 * __real_3f91df46a2529d39;
        dVar16 = dVar1 * (double)uVar7 + dVar16 * (double)uVar6 + dVar2 * (double)uVar8;
        if (__real_bff0000000000000 <= dVar16) {
          if (__real_3ff0000000000000 <= dVar16) {
            dVar16 = __real_3ff0000000000000;
          }
          uVar12 = SUB84(dVar16,0);
          uVar13 = (undefined4)((ulonglong)dVar16 >> 0x20);
        }
        dVar16 = acos((double)CONCAT44(uVar13,uVar12));
        if (dVar14 < dVar16) {
          if ((dVar16 <= 0.0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("DiffAngle > 0.0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\AnimationCoreLibrary.cpp"
                                  ,0x74,L""), uVar6 = local_b0._s_0.X, uVar7 = local_b0._s_0.Y,
             uVar8 = local_b0._s_0.Z, bVar10)) {
            pcVar5 = (code *)swi(3);
            pTVar11 = (TQuat<double> *)(*pcVar5)();
            return pTVar11;
          }
          dVar14 = dVar14 / dVar16;
          local_b0._s_0.X =
               ((double)uVar6 - (param_3->field0_0x0)._s_0.X) * dVar14 +
               (param_3->field0_0x0)._s_0.X;
          local_b0._s_0.Y =
               ((double)uVar7 - (param_3->field0_0x0)._s_0.Y) * dVar14 +
               (param_3->field0_0x0)._s_0.Y;
          local_b0._s_0.Z =
               ((double)uVar8 - (param_3->field0_0x0)._s_0.Z) * dVar14 +
               (param_3->field0_0x0)._s_0.Z;
          UE::Math::TVector<double>::Normalize((TVector<double> *)&local_b0._s_0,dVar9);
          uVar6 = local_b0._s_0.X;
          uVar7 = local_b0._s_0.Y;
          uVar8 = local_b0._s_0.Z;
        }
      }
      if (param_4) {
        dVar16 = (param_5->field0_0x0)._s_0.Y * (double)uVar7 +
                 (param_5->field0_0x0)._s_0.X * (double)uVar6 +
                 (param_5->field0_0x0)._s_0.Z * (double)uVar8;
        local_b0._s_0.X = (double)uVar6 - dVar16 * (param_5->field0_0x0)._s_0.X;
        local_b0._s_0.Y = (double)uVar7 - dVar16 * (param_5->field0_0x0)._s_0.Y;
        local_b0._s_0.Z = (double)uVar8 - dVar16 * (param_5->field0_0x0)._s_0.Z;
        dVar16 = local_b0._s_0.Y * local_b0._s_0.Y + local_b0._s_0.X * local_b0._s_0.X +
                 local_b0._s_0.Z * local_b0._s_0.Z;
        if (dVar9 < dVar16) {
          dVar15 = dVar15 / SQRT(dVar16);
          local_b0._s_0.X = dVar15 * local_b0._s_0.X;
          local_b0._s_0.Y = dVar15 * local_b0._s_0.Y;
          local_b0._s_0.Z = dVar15 * local_b0._s_0.Z;
        }
      }
      UE::Math::TQuat<double>::FindBetweenNormals
                (__return_storage_ptr__,param_3,(TVector<double> *)&local_b0._s_0);
      return __return_storage_ptr__;
    }
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<3980764582594478180>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\AnimationCoreLibrary.cpp"
                        ,100,"!bUseUpVector || UpVector.IsNormalized()");
    if (bVar10) goto code_r0x00014238606f;
  }
  else {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<3980764582594478180>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\AnimationCoreLibrary.cpp"
                        ,100,"AimVector.IsNormalized()");
    if (bVar10) {
code_r0x00014238606f:
      pcVar5 = (code *)swi(3);
      pTVar11 = (TQuat<double> *)(*pcVar5)();
      return pTVar11;
    }
  }
  dVar16 = UE::Math::TQuat<double>::Identity.Y;
  __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
  __return_storage_ptr__->Y = dVar16;
  dVar16 = UE::Math::TQuat<double>::Identity.W;
  __return_storage_ptr__->Z = UE::Math::TQuat<double>::Identity.Z;
  __return_storage_ptr__->W = dVar16;
  return __return_storage_ptr__;
}

// SolveCCDIK @ 142386370

bool __cdecl
AnimationCore::SolveCCDIK
          (TArray<FCCDIKChainLink,TSizedDefaultAllocator<32>_> *param_1,TVector<double> *param_2,
          float param_3,int param_4,bool param_5,bool param_6,
          TArray<float,TSizedDefaultAllocator<32>_> *param_7)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  TVector<double>_u_0 local_a8;
  double local_90;
  double dStack_88;
  double local_80;
  double local_68;
  
  local_a8._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_a8._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  bVar15 = false;
  local_a8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  bVar13 = 0;
  iVar2 = param_1->ArrayNum;
  uVar12 = iVar2 - 1;
  uVar9 = 0;
  if ((int)uVar12 < iVar2) {
    uVar9 = ~uVar12 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar14 = 0;
  lVar10 = (longlong)(int)uVar12 * 0xe0;
  pFVar1 = pFVar3 + lVar10 + 0x20;
  local_90 = *(double *)pFVar1;
  dStack_88 = *(double *)(pFVar1 + 8);
  local_80 = *(double *)(pFVar3 + lVar10 + 0x30);
  if (SQRT((dStack_88 - local_a8._s_0.Y) * (dStack_88 - local_a8._s_0.Y) +
           (local_90 - local_a8._s_0.X) * (local_90 - local_a8._s_0.X) +
           (local_80 - local_a8._s_0.Z) * (local_80 - local_a8._s_0.Z)) <= (double)param_3) {
    bVar15 = false;
  }
  else {
    while (iVar14 < param_4) {
      if (param_5) {
        for (iVar11 = iVar2 + -2; 0 < iVar11; iVar11 = iVar11 + -1) {
          bVar7 = `AnimationCore::SolveCCDIK'::__l2::Local::UpdateChainLink
                            (param_1,iVar11,(TVector<double> *)&local_a8._s_0,param_6,param_7);
          bVar13 = bVar13 | bVar7;
        }
      }
      else {
        iVar11 = 1;
        if (1 < (int)uVar12) {
          do {
            bVar7 = `AnimationCore::SolveCCDIK'::__l2::Local::UpdateChainLink
                              (param_1,iVar11,(TVector<double> *)&local_a8._s_0,param_6,param_7);
            bVar13 = bVar13 | bVar7;
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)uVar12);
        }
      }
      uVar9 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      bVar15 = (bool)(bVar15 | bVar13);
      pFVar3 = (param_1->AllocatorInstance).Data;
      pFVar1 = pFVar3 + lVar10 + 0x20;
      dVar6 = *(double *)(pFVar1 + 8);
      local_68 = *(double *)(pFVar3 + lVar10 + 0x30);
      dVar17 = (param_2->field0_0x0)._s_0.X - *(double *)pFVar1;
      auVar16._8_8_ = dVar6;
      auVar16._0_8_ = dVar6;
      dVar18 = (param_2->field0_0x0)._s_0.Z - local_68;
      dVar6 = (param_2->field0_0x0)._s_0.Y - dVar6;
      if (bVar13 == 0) {
        return bVar15;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = dVar6 * dVar6 + dVar17 * dVar17 + dVar18 * dVar18;
      auVar16 = sqrtpd(auVar16,auVar5);
      iVar14 = iVar14 + 1;
      if (auVar16._0_8_ <= (double)param_3) {
        return bVar15;
      }
    }
  }
  return bVar15;
}

// SolveConstraints @ 142386630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
AnimationCore::SolveConstraints
          (TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TTransform<double> *param_2,TArray<FConstraintData,TSizedDefaultAllocator<32>_> *param_3)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FConstraintDescriptionEx *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  longlong lVar16;
  float fVar17;
  __m128 _Var18;
  bool bVar19;
  uint uVar20;
  TTransform<double> *pTVar21;
  longlong lVar22;
  FConstraintData *this;
  ForAnyElementType FVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  undefined1 auVar30 [16];
  double dVar33;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar37 [16];
  double dVar40;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auStackY_388 [32];
  undefined1 local_358;
  undefined1 local_357;
  undefined1 local_356 [14];
  FMultiTransformBlendHelper local_348;
  double local_2c8 [2];
  double local_2b8;
  double local_2b0;
  double dStack_2a8;
  double local_2a0;
  TTransform<double> *local_298;
  TTransform<double> *local_290;
  TTransform<double> local_288;
  double local_228;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_388;
  iVar3 = param_3->ArrayNum;
  lVar22 = (longlong)iVar3;
  local_298 = param_2;
  local_290 = __return_storage_ptr__;
  if ((iVar3 < 1) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3980764582594478224>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\AnimationCoreLibrary.cpp"
                          ,0x90,"TotalNum > 0"), bVar19)) {
    pcVar5 = (code *)swi(3);
    pTVar21 = (TTransform<double> *)(*pcVar5)();
    return pTVar21;
  }
  uVar25 = 0;
  local_348.Transforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.Transforms.ArrayNum = 0;
  local_348.Transforms.ArrayMax = 0;
  local_348.Translations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.Translations.ArrayNum = 0;
  local_348.Translations.ArrayMax = 0;
  local_348.Rotations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.Rotations.ArrayNum = 0;
  local_348.Rotations.ArrayMax = 0;
  local_348.Scales.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.Scales.ArrayNum = 0;
  local_348.Scales.ArrayMax = 0;
  local_348.ParentWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.ParentWeights.ArrayNum = 0;
  local_348.ParentWeights.ArrayMax = 0;
  local_348.TranslationWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.TranslationWeights.ArrayNum = 0;
  local_348.TranslationWeights.ArrayMax = 0;
  local_348.RotationWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.RotationWeights.ArrayNum = 0;
  local_348.RotationWeights.ArrayMax = 0;
  local_348.ScaleWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.ScaleWeights.ArrayNum = 0;
  local_348.ScaleWeights.ArrayMax = 0;
  UE::Math::TTransform<double>::GetRelativeTransform(param_1,&local_218,param_2);
  pTVar21 = local_298;
  fVar17 = __real_3727c5ac;
  uVar27 = uVar25;
  if (0 < iVar3) {
    do {
      uVar26 = (uint)uVar27;
      uVar24 = 0;
      if ((int)uVar26 < param_3->ArrayNum) {
        uVar24 = ~uVar26 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        pTVar21 = (TTransform<double> *)(*pcVar5)();
        return pTVar21;
      }
      this = (FConstraintData *)((param_3->AllocatorInstance).Data + uVar25);
      if (fVar17 < this->Weight) {
        local_158.Rotation.XY.m128d_f64[0] = (this->CurrentTransform).Rotation.XY.m128d_f64[0];
        local_158.Rotation.XY.m128d_f64[1] = (this->CurrentTransform).Rotation.XY.m128d_f64[1];
        local_158.Rotation.ZW.m128d_f64[0] = (this->CurrentTransform).Rotation.ZW.m128d_f64[0];
        local_158.Rotation.ZW.m128d_f64[1] = (this->CurrentTransform).Rotation.ZW.m128d_f64[1];
        local_158.Translation.XY.m128d_f64[0] = (this->CurrentTransform).Translation.XY.m128d_f64[0]
        ;
        local_158.Translation.XY.m128d_f64[1] = (this->CurrentTransform).Translation.XY.m128d_f64[1]
        ;
        local_158.Translation.ZW.m128d_f64[0] = (this->CurrentTransform).Translation.ZW.m128d_f64[0]
        ;
        local_158.Translation.ZW.m128d_f64[1] = (this->CurrentTransform).Translation.ZW.m128d_f64[1]
        ;
        local_158.Scale3D.XY.m128d_f64[0] = (this->CurrentTransform).Scale3D.XY.m128d_f64[0];
        local_158.Scale3D.XY.m128d_f64[1] = (this->CurrentTransform).Scale3D.XY.m128d_f64[1];
        local_158.Scale3D.ZW.m128d_f64[0] = (this->CurrentTransform).Scale3D.ZW.m128d_f64[0];
        local_158.Scale3D.ZW.m128d_f64[1] = (this->CurrentTransform).Scale3D.ZW.m128d_f64[1];
        local_1b8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_1b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1b8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_1b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_1b8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_1b8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_1b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1b8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_1b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1b8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_1b8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_1b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_1b8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_1b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_1b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        FConstraintData::ApplyInverseOffset(this,&local_158,&local_1b8,pTVar21);
        pFVar4 = (this->Constraint).ConstraintDescription;
        if (pFVar4 != (FConstraintDescriptionEx *)0x0) {
          (**(code **)(pFVar4->_padding_ + 8))(pFVar4,&local_1b8,param_1,pTVar21);
        }
      }
      uVar25 = uVar25 + 0xe0;
      lVar22 = lVar22 + -1;
      uVar27 = (ulonglong)(uVar26 + 1);
      __return_storage_ptr__ = local_290;
    } while (lVar22 != 0);
  }
  local_288.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_288.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_288.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_288.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_288.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_288.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_288.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_288.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_288.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_288.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  auVar37._8_8_ = GlobalVectorConstants::Float1110.m128_u64[1];
  auVar37._0_8_ = auVar37._8_8_;
  local_288.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_288.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_288.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_288.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_288.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_288.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  bVar19 = FMultiTransformBlendHelper::GetBlendedParent(&local_348,&local_288);
  fVar45 = __real_3f800000;
  if (bVar19) {
    fVar41 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar42 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar43 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar44 = GlobalVectorConstants::Float0001.m128_f32[3];
    local_218.Rotation.XY.m128d_f64[0] = local_288.Rotation.XY.m128d_f64[0];
    local_218.Rotation.XY.m128d_f64[1] = local_288.Rotation.XY.m128d_f64[1];
    local_218.Rotation.ZW.m128d_f64[0] = local_288.Rotation.ZW.m128d_f64[0];
    local_218.Rotation.ZW.m128d_f64[1] = local_288.Rotation.ZW.m128d_f64[1];
    local_218.Translation.XY.m128d_f64[1] = local_288.Translation.XY.m128d_f64[1];
    local_218.Translation.XY.m128d_f64[0] = local_288.Translation.XY.m128d_f64[0];
    local_218.Translation.ZW.m128d_f64[0] = local_288.Translation.ZW.m128d_f64[0];
    local_218.Translation.ZW.m128d_f64[1] = local_288.Translation.ZW.m128d_f64[1];
    local_218.Scale3D.XY.m128d_f64[0] = local_288.Scale3D.XY.m128d_f64[0];
    local_218.Scale3D.XY.m128d_f64[1] = local_288.Scale3D.XY.m128d_f64[1];
    local_218.Scale3D.ZW.m128d_f64[0] = local_288.Scale3D.ZW.m128d_f64[0];
    local_218.Scale3D.ZW.m128d_f64[1] = local_288.Scale3D.ZW.m128d_f64[1];
    goto LAB_1423870c0;
  }
  uVar24 = 1;
  fVar46 = 0.0;
  if (0 < local_348.Translations.ArrayNum) {
    fVar41 = 0.0;
    iVar3 = local_348.TranslationWeights.ArrayNum;
    pFVar2 = local_348.TranslationWeights.AllocatorInstance.Data +
             (longlong)local_348.TranslationWeights.ArrayNum * 4;
    FVar23.Data = local_348.TranslationWeights.AllocatorInstance.Data;
    while( true ) {
      if (local_348.TranslationWeights.ArrayNum != iVar3) {
        local_358 = 0;
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_358);
      }
      if (FVar23.Data == pFVar2) break;
      fVar41 = fVar41 + *(float *)FVar23.Data;
      FVar23.Data = FVar23.Data + 4;
    }
    if (fVar17 < fVar41) {
      fVar42 = fVar45;
      if (fVar45 < fVar41) {
        fVar42 = fVar45 / fVar41;
      }
      if ((local_348.Translations.ArrayNum < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        pTVar21 = (TTransform<double> *)(*pcVar5)();
        return pTVar21;
      }
      FVar23.Data = local_348.Translations.AllocatorInstance.Data;
      if ((local_348.TranslationWeights.ArrayNum < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        pTVar21 = (TTransform<double> *)(*pcVar5)();
        return pTVar21;
      }
      uVar26 = 1;
      dVar34 = (double)(fVar42 * *(float *)local_348.TranslationWeights.AllocatorInstance.Data);
      local_2b8 = dVar34 * *(double *)(FVar23.Data + 0x10);
      local_2c8[1]._0_4_ = SUB84(*(double *)(FVar23.Data + 8) * dVar34,0);
      local_2c8[0] = *(double *)FVar23.Data * dVar34;
      local_2c8[1]._4_4_ = (int)((ulonglong)(*(double *)(FVar23.Data + 8) * dVar34) >> 0x20);
      if (1 < local_348.Translations.ArrayNum) {
        lVar28 = 1;
        lVar22 = 0x18;
        do {
          uVar20 = 0;
          if ((int)uVar26 < local_348.Translations.ArrayNum) {
            uVar20 = ~uVar26 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar5 = (code *)swi(3);
            pTVar21 = (TTransform<double> *)(*pcVar5)();
            return pTVar21;
          }
          FVar23.Data = local_348.Translations.AllocatorInstance.Data;
          uVar20 = 0;
          if ((int)uVar26 < local_348.TranslationWeights.ArrayNum) {
            uVar20 = ~uVar26 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar5 = (code *)swi(3);
            pTVar21 = (TTransform<double> *)(*pcVar5)();
            return pTVar21;
          }
          uVar26 = uVar26 + 1;
          lVar1 = lVar28 * 4;
          lVar28 = lVar28 + 1;
          dVar34 = (double)(fVar42 * *(float *)(local_348.TranslationWeights.AllocatorInstance.Data
                                               + lVar1));
          pFVar2 = FVar23.Data + lVar22;
          lVar1 = lVar22 + 8;
          lVar16 = lVar22 + 0x10;
          lVar22 = lVar22 + 0x18;
          local_2c8[1] = local_2c8[1] + dVar34 * *(double *)(FVar23.Data + lVar1);
          local_2c8[0] = local_2c8[0] + dVar34 * *(double *)pFVar2;
          local_2b8 = local_2b8 + dVar34 * *(double *)(FVar23.Data + lVar16);
        } while ((int)uVar26 < local_348.Translations.ArrayNum);
      }
      local_218.Translation.XY.m128d_f64[0] = local_2c8[0];
      local_218.Translation.XY.m128d_f64[1] = local_2c8[1];
      local_218.Translation.ZW.m128d_f64[0] = local_2b8;
      local_218.Translation.ZW.m128d_f64[1] = 0.0;
    }
  }
  if (local_348.Rotations.ArrayNum < 1) {
LAB_142386f01:
    fVar41 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar42 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar43 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar44 = GlobalVectorConstants::Float0001.m128_f32[3];
  }
  else {
    fVar41 = 0.0;
    iVar3 = local_348.RotationWeights.ArrayNum;
    pFVar2 = local_348.RotationWeights.AllocatorInstance.Data +
             (longlong)local_348.RotationWeights.ArrayNum * 4;
    FVar23.Data = local_348.RotationWeights.AllocatorInstance.Data;
    while( true ) {
      if (local_348.RotationWeights.ArrayNum != iVar3) {
        local_357 = 0;
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_357);
      }
      if (FVar23.Data == pFVar2) break;
      fVar41 = fVar41 + *(float *)FVar23.Data;
      FVar23.Data = FVar23.Data + 4;
    }
    if (fVar41 <= fVar17) goto LAB_142386f01;
    fVar42 = fVar45;
    if (fVar45 < fVar41) {
      fVar42 = fVar45 / fVar41;
    }
    if ((local_348.Rotations.ArrayNum < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar5 = (code *)swi(3);
      pTVar21 = (TTransform<double> *)(*pcVar5)();
      return pTVar21;
    }
    FVar23.Data = local_348.Rotations.AllocatorInstance.Data;
    if ((local_348.RotationWeights.ArrayNum < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar5 = (code *)swi(3);
      pTVar21 = (TTransform<double> *)(*pcVar5)();
      return pTVar21;
    }
    dVar34 = (double)(fVar42 * *(float *)local_348.RotationWeights.AllocatorInstance.Data);
    dVar14 = dVar34 * *(double *)FVar23.Data;
    dVar15 = dVar34 * *(double *)(FVar23.Data + 8);
    dVar13 = dVar34 * *(double *)(FVar23.Data + 0x10);
    dVar34 = dVar34 * *(double *)(FVar23.Data + 0x18);
    if (1 < local_348.Rotations.ArrayNum) {
      lVar22 = 1;
      lVar28 = 0x20;
      do {
        uVar26 = 0;
        if ((int)uVar24 < local_348.Rotations.ArrayNum) {
          uVar26 = ~uVar24 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          pTVar21 = (TTransform<double> *)(*pcVar5)();
          return pTVar21;
        }
        FVar23.Data = local_348.Rotations.AllocatorInstance.Data;
        uVar26 = 0;
        if ((int)uVar24 < local_348.RotationWeights.ArrayNum) {
          uVar26 = ~uVar24 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          pTVar21 = (TTransform<double> *)(*pcVar5)();
          return pTVar21;
        }
        dVar36 = (double)(fVar42 * *(float *)(local_348.RotationWeights.AllocatorInstance.Data +
                                             lVar22 * 4));
        auVar38._8_4_ = SUB84(dVar36,0);
        auVar38._0_8_ = dVar36;
        auVar38._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
        pFVar2 = FVar23.Data + lVar28 + 0x10;
        auVar37._0_8_ = dVar36 * *(double *)pFVar2;
        auVar37._8_8_ = dVar36 * *(double *)(pFVar2 + 8);
        pFVar2 = FVar23.Data + lVar28;
        dVar36 = dVar36 * *(double *)pFVar2;
        dVar40 = auVar38._8_8_ * *(double *)(pFVar2 + 8);
        if (0.0 <= dVar34 * auVar37._8_8_ + dVar13 * auVar37._0_8_ +
                   dVar15 * dVar40 + dVar14 * dVar36) {
          dVar14 = dVar14 + dVar36;
          dVar15 = dVar15 + dVar40;
          dVar13 = dVar13 + auVar37._0_8_;
          dVar34 = dVar34 + auVar37._8_8_;
        }
        else {
          dVar14 = dVar14 - dVar36;
          dVar15 = dVar15 - dVar40;
          dVar13 = dVar13 - auVar37._0_8_;
          dVar34 = dVar34 - auVar37._8_8_;
        }
        uVar24 = uVar24 + 1;
        lVar22 = lVar22 + 1;
        lVar28 = lVar28 + 0x20;
      } while ((int)uVar24 < local_348.Rotations.ArrayNum);
    }
    fVar41 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar42 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar43 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar44 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar30._8_4_ = SUB84(dVar34,0);
    auVar30._0_8_ = dVar13;
    auVar30._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
    local_228 = __real_3e45798ee0000000;
    dVar40 = dVar13 * dVar13 + dVar14 * dVar14;
    dVar33 = auVar30._8_8_ * dVar34 + dVar15 * dVar15;
    dVar36 = dVar33 + dVar40;
    dVar40 = dVar40 + dVar33;
    auVar12._8_4_ = SUB84(dVar40,0);
    auVar12._0_8_ = dVar36;
    auVar12._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
    auVar37 = sqrtpd(auVar37,auVar12);
    uVar25 = -(ulonglong)(__real_3e45798ee0000000 <= dVar36);
    uVar29 = -(ulonglong)(__real_3e45798ee0000000 <= dVar40);
    uVar24 = (uint)(uVar25 >> 0x20);
    uVar26 = (uint)(uVar29 >> 0x20);
    auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar37);
    auVar31._0_4_ = ~(uint)uVar25 & SUB84((double)fVar41,0);
    auVar31._4_4_ = ~uVar24 & (uint)((ulonglong)(double)fVar41 >> 0x20);
    auVar31._8_4_ = ~(uint)uVar29 & SUB84((double)fVar42,0);
    auVar31._12_4_ = ~uVar26 & (uint)((ulonglong)(double)fVar42 >> 0x20);
    auVar39._0_8_ = uVar25 & (ulonglong)(auVar38._0_8_ * dVar14);
    uVar27 = uVar29 & (ulonglong)(auVar38._8_8_ * dVar15);
    auVar39._8_4_ = (undefined4)uVar27;
    auVar39._12_4_ = (undefined4)(uVar27 >> 0x20);
    local_218.Rotation.XY.m128d_f64 = (double  [2])(auVar39 | auVar31);
    auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar37);
    auVar32._0_8_ = (ulonglong)(auVar37._0_8_ * dVar13) & uVar25;
    uVar27 = (ulonglong)(auVar37._8_8_ * dVar34) & uVar29;
    auVar32._8_4_ = (undefined4)uVar27;
    auVar32._12_4_ = (undefined4)(uVar27 >> 0x20);
    auVar35._0_4_ = ~(uint)uVar25 & SUB84((double)fVar43,0);
    auVar35._4_4_ = ~uVar24 & (uint)((ulonglong)(double)fVar43 >> 0x20);
    auVar35._8_4_ = ~(uint)uVar29 & SUB84((double)fVar44,0);
    auVar35._12_4_ = ~uVar26 & (uint)((ulonglong)(double)fVar44 >> 0x20);
    local_218.Rotation.ZW.m128d_f64 = (double  [2])(auVar35 | auVar32);
  }
  if (0 < local_348.Scales.ArrayNum) {
    iVar3 = local_348.ScaleWeights.ArrayNum;
    pFVar2 = local_348.ScaleWeights.AllocatorInstance.Data +
             (longlong)local_348.ScaleWeights.ArrayNum * 4;
    FVar23.Data = local_348.ScaleWeights.AllocatorInstance.Data;
    while( true ) {
      if (local_348.ScaleWeights.ArrayNum != iVar3) {
        local_356[0] = 0;
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_356);
      }
      if (FVar23.Data == pFVar2) break;
      fVar46 = fVar46 + *(float *)FVar23.Data;
      FVar23.Data = FVar23.Data + 4;
    }
    if (fVar17 < fVar46) {
      if (fVar45 < fVar46) {
        fVar45 = fVar45 / fVar46;
      }
      uVar24 = 0;
      local_2b0 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      dStack_2a8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                    UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      local_2a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (0 < local_348.Scales.ArrayNum) {
        lVar28 = 0;
        lVar22 = 0;
        do {
          uVar26 = 0;
          if ((int)uVar24 < local_348.Scales.ArrayNum) {
            uVar26 = ~uVar24 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar5 = (code *)swi(3);
            pTVar21 = (TTransform<double> *)(*pcVar5)();
            return pTVar21;
          }
          FVar23.Data = local_348.Scales.AllocatorInstance.Data;
          uVar26 = 0;
          if ((int)uVar24 < local_348.ScaleWeights.ArrayNum) {
            uVar26 = ~uVar24 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar5 = (code *)swi(3);
            pTVar21 = (TTransform<double> *)(*pcVar5)();
            return pTVar21;
          }
          uVar24 = uVar24 + 1;
          lVar1 = lVar28 * 4;
          lVar28 = lVar28 + 1;
          dVar34 = (double)(fVar45 * *(float *)(local_348.ScaleWeights.AllocatorInstance.Data +
                                               lVar1));
          local_2b0 = local_2b0 + dVar34 * *(double *)(FVar23.Data + lVar22);
          lVar1 = lVar22 + 8;
          lVar16 = lVar22 + 0x10;
          lVar22 = lVar22 + 0x18;
          dStack_2a8 = dStack_2a8 + dVar34 * *(double *)(FVar23.Data + lVar1);
          local_2a0 = local_2a0 + dVar34 * *(double *)(FVar23.Data + lVar16);
        } while ((int)uVar24 < local_348.Scales.ArrayNum);
      }
      local_218.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_218.Scale3D.XY.m128d_f64[0] = local_2b0;
      local_218.Scale3D.XY.m128d_f64[1] = dStack_2a8;
      local_218.Scale3D.ZW.m128d_f64[0] = local_2a0;
    }
    fVar41 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar42 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar43 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar44 = GlobalVectorConstants::Float0001.m128_f32[3];
  }
LAB_1423870c0:
  auVar6._8_4_ = SUB84((double)fVar42,0);
  auVar6._0_8_ = (double)fVar41;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar42 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar44,0);
  auVar7._0_8_ = (double)fVar43;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar44 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar7;
  _Var18 = GlobalVectorConstants::FloatZero;
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar8;
  dVar34 = (double)_Var18.m128_f32[3];
  auVar9._8_4_ = SUB84(dVar34,0);
  auVar9._0_8_ = (double)_Var18.m128_f32[2];
  auVar9._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar9;
  _Var18 = GlobalVectorConstants::Float1110;
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar10;
  dVar34 = (double)_Var18.m128_f32[3];
  auVar11._8_4_ = SUB84(dVar34,0);
  auVar11._0_8_ = (double)_Var18.m128_f32[2];
  auVar11._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar11;
  UE::Math::TTransform<double>::Multiply(__return_storage_ptr__,&local_218,local_298);
  if (local_348.ScaleWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.ScaleWeights.AllocatorInstance.Data);
  }
  if (local_348.RotationWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.RotationWeights.AllocatorInstance.Data);
  }
  if (local_348.TranslationWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.TranslationWeights.AllocatorInstance.Data);
  }
  if (local_348.ParentWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.ParentWeights.AllocatorInstance.Data);
  }
  if (local_348.Scales.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Scales.AllocatorInstance.Data);
  }
  if (local_348.Rotations.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Rotations.AllocatorInstance.Data);
  }
  if (local_348.Translations.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Translations.AllocatorInstance.Data);
  }
  if (local_348.Transforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Transforms.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// SolveConstraints @ 1423871f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
AnimationCore::SolveConstraints
          (TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TTransform<double> *param_2,
          TArray<FTransformConstraint,TSizedDefaultAllocator<32>_> *param_3,
          TDelegate<UE::Math::TTransform<double>___cdecl(FName),FDefaultDelegateUserPolicy> *param_4
          )

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  code *pcVar6;
  double dVar7;
  TArray<FTransformConstraint,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  char cVar10;
  TTransform<double> *pTVar11;
  TRotator<double> *pTVar12;
  TQuat<double> *pTVar13;
  longlong *plVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  undefined1 auStackY_378 [32];
  undefined1 local_348 [8];
  double local_340;
  double dStack_338;
  double local_330;
  FComponentBlendHelper local_328;
  TArray<FTransformConstraint,TSizedDefaultAllocator<32>_> *local_2a8;
  TTransform<double> *local_2a0;
  TTransform<double> *local_298;
  TVector<double>_u_0 local_290;
  TVector<double>_u_0 local_278;
  TRotator<double> local_260;
  TQuat<double> local_248;
  TTransform<double> local_228;
  FReadAccessScope local_1c8;
  TVector<double>_u_0 local_1b0;
  TQuat<double> local_198;
  FReadAccessScope local_178;
  TRotator<double> local_160;
  TQuat<double> local_148;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_378;
  iVar3 = param_3->ArrayNum;
  lVar17 = (longlong)iVar3;
  local_2a8 = param_3;
  local_2a0 = param_2;
  local_298 = __return_storage_ptr__;
  if ((iVar3 < 1) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3980764582594478129>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\AnimationCoreLibrary.cpp"
                         ,0x31,"TotalNum > 0"), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TTransform<double> *)(*pcVar6)();
    return pTVar11;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_1c8);
  if (((*(int *)&param_4->field_0x10 == 0) || (*(longlong **)&param_4->field_0x8 == (longlong *)0x0)
      ) || (cVar10 = (**(code **)(**(longlong **)&param_4->field_0x8 + 0x38))(), cVar10 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1c8);
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("OnGetGlobalTransform.IsBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\AnimationCoreLibrary.cpp"
                       ,0x32,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TTransform<double> *)(*pcVar6)();
      return pTVar11;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1c8);
  }
  pTVar8 = local_2a8;
  fVar23 = __real_3727c5ac;
  dVar7 = (param_1->Rotation).XY.m128d_f64[1];
  uVar18 = 0;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar7;
  dVar7 = (param_1->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar7;
  dVar7 = (param_1->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar7;
  local_328.Transforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.Transforms.ArrayNum = 0;
  local_328.Transforms.ArrayMax = 0;
  local_328.Translations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.Translations.ArrayNum = 0;
  local_328.Translations.ArrayMax = 0;
  local_328.Rotations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.Rotations.ArrayNum = 0;
  local_328.Rotations.ArrayMax = 0;
  local_328.Scales.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.Scales.ArrayNum = 0;
  local_328.Scales.ArrayMax = 0;
  local_328.ParentWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.ParentWeights.ArrayNum = 0;
  local_328.ParentWeights.ArrayMax = 0;
  local_328.TranslationWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.TranslationWeights.ArrayNum = 0;
  local_328.TranslationWeights.ArrayMax = 0;
  local_328.RotationWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.RotationWeights.ArrayNum = 0;
  local_328.RotationWeights.ArrayMax = 0;
  local_328.ScaleWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.ScaleWeights.ArrayNum = 0;
  local_328.ScaleWeights.ArrayMax = 0;
  uVar20 = uVar18;
  if (0 < iVar3) {
    do {
      uVar19 = (uint)uVar20;
      uVar16 = 0;
      if ((int)uVar19 < pTVar8->ArrayNum) {
        uVar16 = ~uVar19 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TTransform<double> *)(*pcVar6)();
        return pTVar11;
      }
      pFVar4 = (pTVar8->AllocatorInstance).Data;
      if (fVar23 < *(float *)(pFVar4 + uVar18 + 0x20)) {
        uVar5 = *(undefined8 *)(pFVar4 + uVar18 + 0x18);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_178);
        if (*(int *)&param_4->field_0x10 == 0) {
          plVar14 = (longlong *)0x0;
        }
        else {
          plVar14 = *(longlong **)&param_4->field_0x8;
        }
        (**(code **)(*plVar14 + 0x60))(plVar14,&local_c8,uVar5);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_178);
        UE::Math::TTransform<double>::GetRelativeTransform(&local_c8,&local_128,local_2a0);
        fVar22 = *(float *)(pFVar4 + uVar18 + 0x20);
        if (pFVar4[uVar18 + 3] == (FScriptContainerElement)0x0) {
          if (pFVar4[uVar18] != (FScriptContainerElement)0x0) {
            local_290._s_0.X = local_128.Translation.XY.m128d_f64[0];
            local_290._s_0.Y = local_128.Translation.XY.m128d_f64[1];
            local_290._s_0.Z = local_128.Translation.ZW.m128d_f64[0];
            if (pFVar4[uVar18 + 4] == (FScriptContainerElement)0x0) {
              local_290._s_0.X =
                   (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                    UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
            }
            if (pFVar4[uVar18 + 5] == (FScriptContainerElement)0x0) {
              local_290._s_0.Y =
                   (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                    UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
            }
            if (pFVar4[uVar18 + 6] == (FScriptContainerElement)0x0) {
              local_290._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            }
            FComponentBlendHelper::AddTranslation
                      (&local_328,(TVector<double> *)&local_290._s_0,fVar22);
          }
          if (pFVar4[uVar18 + 1] != (FScriptContainerElement)0x0) {
            local_248.X = local_128.Rotation.XY.m128d_f64[0];
            local_248.Y = local_128.Rotation.XY.m128d_f64[1];
            local_248.Z = local_128.Rotation.ZW.m128d_f64[0];
            local_248.W = local_128.Rotation.ZW.m128d_f64[1];
            UE::Math::TQuat<double>::Rotator(&local_248,&local_260);
            pTVar12 = UE::Math::TQuat<double>::Rotator
                                (&UE::Math::TQuat<double>::Identity,&local_160);
            if (pFVar4[uVar18 + 7] == (FScriptContainerElement)0x0) {
              local_260.Roll = pTVar12->Roll;
            }
            if (pFVar4[uVar18 + 8] == (FScriptContainerElement)0x0) {
              local_260.Pitch = pTVar12->Pitch;
            }
            if (pFVar4[uVar18 + 9] == (FScriptContainerElement)0x0) {
              local_260.Yaw = pTVar12->Yaw;
            }
            pTVar13 = UE::Math::TRotator<double>::Quaternion(&local_260,&local_148);
            local_248.X = pTVar13->X;
            local_248.Y = pTVar13->Y;
            local_248.Z = pTVar13->Z;
            local_248.W = pTVar13->W;
            FComponentBlendHelper::AddRotation(&local_328,&local_248,fVar22);
          }
          if (pFVar4[uVar18 + 2] != (FScriptContainerElement)0x0) {
            local_278._s_0.X = local_128.Scale3D.XY.m128d_f64[0];
            local_278._s_0.Y = local_128.Scale3D.XY.m128d_f64[1];
            local_278._s_0.Z = local_128.Scale3D.ZW.m128d_f64[0];
            if (pFVar4[uVar18 + 10] == (FScriptContainerElement)0x0) {
              local_278._s_0.X =
                   (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                    UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
            }
            if (pFVar4[uVar18 + 0xb] == (FScriptContainerElement)0x0) {
              local_278._s_0.Y =
                   (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                    UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
            }
            if (pFVar4[uVar18 + 0xc] == (FScriptContainerElement)0x0) {
              local_278._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            }
            FComponentBlendHelper::AddScale(&local_328,(TVector<double> *)&local_278._s_0,fVar22);
          }
        }
        else {
          FComponentBlendHelper::AddParent(&local_328,&local_128,fVar22);
        }
      }
      uVar20 = (ulonglong)(uVar19 + 1);
      uVar18 = uVar18 + 0x28;
      lVar17 = lVar17 + -1;
      __return_storage_ptr__ = local_298;
    } while (lVar17 != 0);
  }
  local_228.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_228.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_228.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_228.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_228.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_228.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_228.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_228.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_228.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_228.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_228.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_228.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_228.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_228.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_228.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_228.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_228.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_228.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  bVar9 = FComponentBlendHelper::GetBlendedParent(&local_328,&local_228);
  if (bVar9) {
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_228.Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_228.Rotation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_228.Rotation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_228.Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_228.Translation.XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_228.Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_228.Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_228.Translation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_228.Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_228.Scale3D.XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_228.Scale3D.ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_228.Scale3D.ZW.m128d_f64[1];
  }
  else {
    bVar9 = FComponentBlendHelper::GetBlendedTranslation
                      (&local_328,(TVector<double> *)&local_1b0._s_0);
    if (bVar9) {
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_1b0._s_0.X;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_1b0._s_0.Y;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_1b0._s_0.Z;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    }
    bVar9 = FComponentBlendHelper::GetBlendedRotation(&local_328,&local_198);
    if (bVar9) {
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_198.X;
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_198.Y;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_198.Z;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_198.W;
    }
    if (0 < local_328.Scales.ArrayNum) {
      fVar22 = 0.0;
      iVar3 = local_328.ScaleWeights.ArrayNum;
      pFVar4 = local_328.ScaleWeights.AllocatorInstance.Data +
               (longlong)local_328.ScaleWeights.ArrayNum * 4;
      FVar15.Data = local_328.ScaleWeights.AllocatorInstance.Data;
      while( true ) {
        if (local_328.ScaleWeights.ArrayNum != iVar3) {
          local_348[0] = 0;
          `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_348);
        }
        if (FVar15.Data == pFVar4) break;
        fVar22 = fVar22 + *(float *)FVar15.Data;
        FVar15.Data = FVar15.Data + 4;
      }
      if (fVar23 < fVar22) {
        fVar23 = __real_3f800000;
        if (__real_3f800000 < fVar22) {
          fVar23 = __real_3f800000 / fVar22;
        }
        uVar16 = 0;
        local_340 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                     UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
        dStack_338 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
        local_330 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if (0 < local_328.Scales.ArrayNum) {
          lVar21 = 0;
          lVar17 = 0;
          do {
            uVar19 = 0;
            if ((int)uVar16 < local_328.Scales.ArrayNum) {
              uVar19 = ~uVar16 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              pTVar11 = (TTransform<double> *)(*pcVar6)();
              return pTVar11;
            }
            FVar15.Data = local_328.Scales.AllocatorInstance.Data;
            uVar19 = 0;
            if ((int)uVar16 < local_328.ScaleWeights.ArrayNum) {
              uVar19 = ~uVar16 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              pTVar11 = (TTransform<double> *)(*pcVar6)();
              return pTVar11;
            }
            uVar16 = uVar16 + 1;
            lVar1 = lVar21 * 4;
            lVar21 = lVar21 + 1;
            dVar7 = (double)(fVar23 * *(float *)(local_328.ScaleWeights.AllocatorInstance.Data +
                                                lVar1));
            local_340 = local_340 + dVar7 * *(double *)(FVar15.Data + lVar17);
            lVar1 = lVar17 + 8;
            lVar2 = lVar17 + 0x10;
            lVar17 = lVar17 + 0x18;
            dStack_338 = dStack_338 + dVar7 * *(double *)(FVar15.Data + lVar1);
            local_330 = local_330 + dVar7 * *(double *)(FVar15.Data + lVar2);
          } while ((int)uVar16 < local_328.Scales.ArrayNum);
        }
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_340;
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dStack_338;
        (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_330;
        (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
      }
    }
  }
  if (local_328.ScaleWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.ScaleWeights.AllocatorInstance.Data);
  }
  if (local_328.RotationWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.RotationWeights.AllocatorInstance.Data);
  }
  if (local_328.TranslationWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.TranslationWeights.AllocatorInstance.Data);
  }
  if (local_328.ParentWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.ParentWeights.AllocatorInstance.Data);
  }
  if (local_328.Scales.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Scales.AllocatorInstance.Data);
  }
  if (local_328.Rotations.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Rotations.AllocatorInstance.Data);
  }
  if (local_328.Translations.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Translations.AllocatorInstance.Data);
  }
  if (local_328.Transforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Transforms.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// SolveFabrik @ 142387990

bool __cdecl
AnimationCore::SolveFabrik
          (TArray<FFABRIKChainLink,TSizedDefaultAllocator<32>_> *param_1,TVector<double> *param_2,
          double param_3,double param_4,int param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  uint uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  
  if ((param_1->ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  dVar23 = __real_3ff0000000000000;
  pFVar16 = (param_1->AllocatorInstance).Data;
  dVar29 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar16 + 8);
  dVar27 = (param_2->field0_0x0)._s_0.X - *(double *)pFVar16;
  dVar22 = (param_2->field0_0x0)._s_0.Z - *(double *)(pFVar16 + 0x10);
  iVar1 = param_1->ArrayNum;
  if (dVar29 * dVar29 + dVar27 * dVar27 + dVar22 * dVar22 <= param_3 * param_3) {
    uVar12 = iVar1 - 1;
    uVar18 = ~uVar12 >> 0x1f;
    uVar9 = 0;
    uVar17 = uVar9;
    if ((int)uVar12 < iVar1) {
      uVar17 = uVar18;
    }
    if ((uVar17 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    pFVar16 = (param_1->AllocatorInstance).Data;
    lVar19 = (longlong)(int)uVar12;
    lVar14 = lVar19 * 0x50;
    dVar29 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar16 + lVar14 + 8);
    dVar23 = (param_2->field0_0x0)._s_0.Z - *(double *)(pFVar16 + lVar14 + 0x10);
    dVar22 = (param_2->field0_0x0)._s_0.X - *(double *)(pFVar16 + lVar14);
    auVar24._0_8_ = dVar23 * dVar23;
    auVar24._8_8_ = 0;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = dVar29 * dVar29 + dVar22 * dVar22 + auVar24._0_8_;
    auVar25 = sqrtpd(auVar24,auVar25);
    if (auVar25._0_8_ <= param_4) {
      bVar7 = false;
    }
    else {
      dVar23 = (param_2->field0_0x0)._s_0.X;
      dVar22 = (param_2->field0_0x0)._s_0.Y;
      dVar29 = (param_2->field0_0x0)._s_0.Z;
      uVar17 = uVar9;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar17 = uVar18;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar17 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      dVar27 = __real_3ff0000000000000;
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar16 = pFVar2 + lVar14;
      *(double *)pFVar16 = dVar23;
      *(double *)(pFVar16 + 8) = dVar22;
      *(double *)(pFVar2 + lVar14 + 0x10) = dVar29;
      iVar11 = 0;
      do {
        if (param_5 <= iVar11) break;
        uVar15 = iVar1 - 2;
        if (0 < (int)uVar15) {
          uVar13 = uVar12;
          lVar21 = lVar19 * 0x50;
          do {
            lVar20 = lVar21 + -0x50;
            uVar10 = uVar9;
            if ((int)uVar15 < param_1->ArrayNum) {
              uVar10 = ~uVar15 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            pFVar16 = (param_1->AllocatorInstance).Data;
            uVar10 = uVar9;
            if ((int)uVar13 < param_1->ArrayNum) {
              uVar10 = ~uVar13 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            pFVar2 = (param_1->AllocatorInstance).Data;
            uVar15 = uVar15 - 1;
            uVar13 = uVar13 - 1;
            dVar31 = *(double *)(pFVar16 + lVar20) - *(double *)(pFVar2 + lVar21);
            dVar29 = *(double *)(pFVar2 + lVar21 + 8);
            dVar23 = *(double *)(pFVar2 + lVar21 + 0x10);
            dVar5 = *(double *)(pFVar16 + lVar21 + -0x48) - dVar29;
            dVar22 = *(double *)(pFVar2 + lVar21 + 0x18);
            dVar28 = *(double *)(pFVar16 + lVar21 + -0x40) - dVar23;
            dVar30 = dVar27 / SQRT(dVar5 * dVar5 + dVar31 * dVar31 + dVar28 * dVar28);
            *(double *)(pFVar16 + lVar20) = dVar30 * dVar31 * dVar22 + *(double *)(pFVar2 + lVar21);
            *(double *)(pFVar16 + lVar21 + -0x48) = dVar30 * dVar5 * dVar22 + dVar29;
            *(double *)(pFVar16 + lVar21 + -0x40) = dVar22 * dVar30 * dVar28 + dVar23;
            lVar21 = lVar20;
          } while (0 < (int)uVar15);
        }
        uVar13 = 1;
        lVar21 = 1;
        uVar15 = 0;
        if (1 < lVar19) {
          lVar20 = 0x50;
          do {
            uVar10 = uVar15;
            if ((int)(uVar13 - 1) < param_1->ArrayNum) {
              uVar10 = -uVar13 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            pFVar16 = (param_1->AllocatorInstance).Data;
            uVar10 = uVar15;
            if ((int)uVar13 < param_1->ArrayNum) {
              uVar10 = ~uVar13 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            pFVar2 = (param_1->AllocatorInstance).Data;
            uVar13 = uVar13 + 1;
            dVar29 = *(double *)(pFVar16 + lVar20 + -0x48);
            lVar21 = lVar21 + 1;
            dVar23 = *(double *)(pFVar16 + lVar20 + -0x40);
            dVar5 = *(double *)(pFVar2 + lVar20) - *(double *)(pFVar16 + lVar20 + -0x50);
            dVar30 = *(double *)(pFVar2 + lVar20 + 8) - dVar29;
            dVar31 = *(double *)(pFVar2 + lVar20 + 0x10) - dVar23;
            dVar28 = dVar27 / SQRT(dVar30 * dVar30 + dVar5 * dVar5 + dVar31 * dVar31);
            dVar22 = *(double *)(pFVar2 + lVar20 + 0x18);
            *(double *)(pFVar2 + lVar20) =
                 dVar5 * dVar28 * dVar22 + *(double *)(pFVar16 + lVar20 + -0x50);
            *(double *)(pFVar2 + lVar20 + 8) = dVar30 * dVar28 * dVar22 + dVar29;
            *(double *)(pFVar2 + lVar20 + 0x10) = dVar22 * dVar31 * dVar28 + dVar23;
            lVar20 = lVar20 + 0x50;
          } while (lVar21 < lVar19);
        }
        uVar13 = uVar15;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar13 = uVar18;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        pFVar16 = (param_1->AllocatorInstance).Data;
        if ((int)(iVar1 - 2U) < param_1->ArrayNum) {
          uVar15 = ~(iVar1 - 2U) >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        dVar22 = (param_2->field0_0x0)._s_0.X - *(double *)(pFVar2 + lVar19 * 0x50 + -0x50);
        dVar29 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar2 + lVar19 * 0x50 + -0x48);
        dVar23 = (param_2->field0_0x0)._s_0.Z - *(double *)(pFVar2 + lVar19 * 0x50 + -0x40);
        auVar26._0_8_ = dVar23 * dVar23;
        auVar26._8_8_ = 0;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = dVar29 * dVar29 + dVar22 * dVar22 + auVar26._0_8_;
        auVar25 = sqrtpd(auVar26,auVar4);
        dVar29 = *(double *)(pFVar16 + lVar14 + 0x18) - auVar25._0_8_;
        iVar11 = iVar11 + 1;
      } while (param_4 < (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar6,
                                          SUB84(dVar29,0) & uVar17));
      uVar17 = iVar1 - 2;
      uVar9 = 0;
      if ((int)uVar17 < param_1->ArrayNum) {
        uVar9 = ~uVar17 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      pFVar16 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x50;
      uVar17 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar17 = uVar18;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      dVar29 = *(double *)(pFVar16 + 8);
      dVar30 = *(double *)(pFVar2 + lVar19 * 0x50) - *(double *)pFVar16;
      dVar28 = *(double *)(pFVar2 + lVar19 * 0x50 + 8) - dVar29;
      dVar5 = *(double *)(pFVar2 + lVar19 * 0x50 + 0x10) - *(double *)(pFVar16 + 0x10);
      dVar23 = *(double *)(pFVar2 + lVar19 * 0x50 + 0x18);
      dVar27 = dVar27 / SQRT(dVar28 * dVar28 + dVar30 * dVar30 + dVar5 * dVar5);
      dVar22 = *(double *)(pFVar16 + 0x10);
      *(double *)(pFVar2 + lVar19 * 0x50) = dVar30 * dVar27 * dVar23 + *(double *)pFVar16;
      *(double *)(pFVar2 + lVar19 * 0x50 + 8) = dVar28 * dVar27 * dVar23 + dVar29;
      *(double *)(pFVar2 + lVar19 * 0x50 + 0x10) = dVar5 * dVar27 * dVar23 + dVar22;
      bVar7 = true;
    }
  }
  else {
    uVar17 = 1;
    if (1 < (longlong)iVar1) {
      lVar14 = (longlong)iVar1 + -1;
      lVar19 = 0x50;
      do {
        uVar9 = 0;
        if ((int)(uVar17 - 1) < param_1->ArrayNum) {
          uVar9 = -uVar17 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        pFVar16 = (param_1->AllocatorInstance).Data;
        uVar9 = 0;
        if ((int)uVar17 < param_1->ArrayNum) {
          uVar9 = ~uVar17 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        dVar29 = *(double *)(pFVar16 + lVar19 + -0x48);
        uVar17 = uVar17 + 1;
        dVar22 = *(double *)(pFVar16 + lVar19 + -0x40);
        dVar31 = (param_2->field0_0x0)._s_0.X - *(double *)(pFVar16 + lVar19 + -0x50);
        dVar5 = (param_2->field0_0x0)._s_0.Y - dVar29;
        pFVar2 = (param_1->AllocatorInstance).Data;
        dVar30 = (param_2->field0_0x0)._s_0.Z - dVar22;
        dVar28 = dVar23 / SQRT(dVar5 * dVar5 + dVar31 * dVar31 + dVar30 * dVar30);
        dVar27 = *(double *)(pFVar2 + lVar19 + 0x18);
        *(double *)(pFVar2 + lVar19) =
             dVar31 * dVar28 * dVar27 + *(double *)(pFVar16 + lVar19 + -0x50);
        *(double *)(pFVar2 + lVar19 + 8) = dVar5 * dVar28 * dVar27 + dVar29;
        *(double *)(pFVar2 + lVar19 + 0x10) = dVar30 * dVar28 * dVar27 + dVar22;
        lVar19 = lVar19 + 0x50;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    bVar7 = true;
  }
  return bVar7;
}

// SolveSplineIK @ 142388350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
AnimationCore::SolveSplineIK
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          FInterpCurveVector *param_2,FInterpCurveQuat *param_3,FInterpCurveVector *param_4,
          float param_5,float param_6,
          TDelegate<float___cdecl(float),FDefaultDelegateUserPolicy> *param_7,float param_8,
          float param_9,float param_10,Type param_11,
          TDelegate<float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
          *param_12,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *param_13,
          TArray<float,TSizedDefaultAllocator<32>_> *param_14,float param_15,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_16)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *this;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [12];
  bool bVar15;
  int iVar16;
  FTlsAutoCleanup *pFVar17;
  TVector<double> *pTVar18;
  TQuat<double> *pTVar19;
  longlong *plVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  float fVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar40;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  double dVar50;
  undefined1 auVar52 [16];
  double dVar51;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  double dVar57;
  undefined1 auVar56 [16];
  double dVar58;
  double dVar59;
  undefined1 auVar60 [16];
  double dVar66;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar67;
  double dVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  double dVar75;
  double dVar76;
  double dVar78;
  undefined1 auVar77 [16];
  float fVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  double dVar92;
  double dVar93;
  undefined4 uVar94;
  undefined4 uVar95;
  undefined1 local_428 [4];
  int local_424;
  int *local_420;
  longlong local_418;
  FScriptContainerElement *local_410;
  longlong local_408;
  double local_400;
  double dStack_3f8;
  undefined8 local_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  undefined1 local_3d0 [16];
  double local_3c0;
  TVector<double>_u_0 local_3b8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  code *local_368;
  undefined1 *local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined1 local_348 [16];
  TRotator<double> local_328;
  double local_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  TVector<double>_u_0 local_2e8;
  TVector<double>_u_0 local_2d0;
  TVector<double>_u_0 local_2b8;
  double local_2a0;
  undefined1 local_298 [32];
  TQuat<double> local_278;
  TQuat<double> local_258;
  double local_238;
  double dStack_230;
  double local_228;
  FReadAccessScope local_220;
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  undefined1 local_1d8 [16];
  undefined8 local_1c8;
  undefined1 local_1c0 [16];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  FReadAccessScope local_190;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  TVector<double> local_158;
  TVector<double> local_140;
  TVector<double> local_128;
  TQuat<double> local_108 [6];
  
  if ((param_1->ArrayNum != param_14->ArrayNum) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("BoneTransforms.Num() == BoneLengths.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\SplineIK.cpp"
                          ,0xf,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_1->ArrayNum != param_13->ArrayNum) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("BoneTransforms.Num() == BoneOffsetRotations.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\SplineIK.cpp"
                          ,0x10,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar15 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                     ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_7);
  if ((!bVar15) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Twist.IsBound()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\SplineIK.cpp"
                          ,0x11,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar15 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                     ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_12);
  if ((!bVar15) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("FindParamAtFirstSphereIntersection.IsBound()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\SplineIK.cpp"
                          ,0x12,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  piVar1 = &param_16->ArrayNum;
  *piVar1 = 0;
  lVar24 = 0x60;
  local_420 = piVar1;
  if (param_16->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&param_16->AllocatorInstance,0,&param_16->ArrayMax);
  }
  uVar88 = 0;
  uVar89 = 0;
  local_424 = 0;
  local_3a0 = 0;
  fVar79 = 0.0;
  if (param_10 == 0.0) {
    if ((*(int *)&param_2->field_0x8 < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar26 = *(longlong *)param_2;
    local_3e8 = *(double *)(lVar26 + 8);
    dStack_3e0 = *(double *)(lVar26 + 0x10);
    local_3d8 = *(double *)(lVar26 + 0x18);
  }
  else {
    if ((*(int *)&param_2->field_0x8 < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    fVar79 = TDelegate<float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
             ::Execute(param_12,(TVector<double> *)(*(longlong *)param_2 + 8),param_10,&local_424);
    local_2e8._s_0.Z = 0.0;
    local_2e8._s_0.X = 0.0;
    local_2e8._s_0.Y = 0.0;
    pTVar18 = FInterpCurve<UE::Math::TVector<double>_>::Eval
                        ((FInterpCurve<UE::Math::TVector<double>_> *)param_2,&local_158,fVar79,
                         (TVector<double> *)&local_2e8._s_0);
    local_3e8 = (pTVar18->field0_0x0)._s_0.X;
    dStack_3e0 = (pTVar18->field0_0x0)._s_0.Y;
    local_3d8 = (pTVar18->field0_0x0)._s_0.Z;
  }
  uVar2 = param_1->ArrayNum;
  local_360 = local_428;
  local_368 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<AnimationCore::FSplineIKSolverScratchArea>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar17 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_368,
                       &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<AnimationCore::FSplineIKSolverScratchArea>::GetTlsSlot(void)'
                        ::__l2::TlsSlot);
  this = (TArray<float,TSizedDefaultAllocator<32>_> *)(pFVar17 + 2);
  iVar3 = *(int *)(pFVar17 + 3);
  if (iVar3 < (int)uVar2) {
    iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,uVar2 - iVar3,(ForAnyElementType *)this,(int *)(pFVar17 + 3),
                        (int *)&pFVar17[3].field_0x4);
    memset((this->AllocatorInstance).Data + (longlong)iVar16 * 4,0,
           (longlong)(int)(uVar2 - iVar3) << 2);
  }
  else {
    if ((int)uVar2 < 0) goto LAB_14238958d;
    if ((int)uVar2 < iVar3) {
      uVar25 = iVar3 - uVar2;
      if (((int)(uVar25 | uVar2) < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar25 != 0) {
        TArray<float,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this,uVar2,uVar25);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)this,*(int *)(pFVar17 + 3),(int *)&pFVar17[3].field_0x4)
        ;
      }
    }
  }
  iVar3 = *piVar1;
  if (iVar3 < (int)uVar2) {
    iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x60,0x10,uVar2 - iVar3,&param_16->AllocatorInstance,piVar1,
                        &param_16->ArrayMax);
    DefaultConstructItems<UE::Math::TTransform<double>,int>
              ((param_16->AllocatorInstance).Data + (longlong)iVar16 * 0x60,uVar2 - iVar3);
  }
  else {
    if ((int)uVar2 < 0) {
LAB_14238958d:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((int)uVar2 < iVar3) {
      uVar25 = iVar3 - uVar2;
      if (((int)(uVar25 | uVar2) < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar25 != 0) {
        TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (param_16,uVar2,uVar25);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,&param_16->AllocatorInstance,*piVar1,&param_16->ArrayMax);
      }
    }
  }
  uVar25 = 0;
  local_408 = (longlong)(int)uVar2;
  if (0 < (int)uVar2) {
    lVar26 = 0;
    lVar27 = 0;
    do {
      uVar21 = ~uVar25 >> 0x1f;
      fVar28 = fVar79;
      if (0 < (int)uVar25) {
        uVar22 = 0;
        if ((int)uVar25 < param_14->ArrayNum) {
          uVar22 = uVar21;
        }
        if ((uVar22 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_12,&local_190);
        if (*(int *)&param_12->field_0x10 == 0) {
          plVar20 = (longlong *)0x0;
        }
        else {
          plVar20 = *(longlong **)&param_12->field_0x8;
        }
        fVar28 = (float)(**(code **)(*plVar20 + 0x60))(plVar20,&local_3e8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_190);
      }
      uVar22 = 0;
      if ((int)uVar25 < *(int *)(pFVar17 + 3)) {
        uVar22 = uVar21;
      }
      if ((uVar22 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(float *)((this->AllocatorInstance).Data + lVar26 * 4) = fVar28;
      uVar22 = 0;
      if ((int)uVar25 < *local_420) {
        uVar22 = uVar21;
      }
      if ((uVar22 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_2d0._s_0.Z = 0.0;
      local_2d0._s_0.X = 0.0;
      local_2d0._s_0.Y = 0.0;
      pFVar4 = (param_16->AllocatorInstance).Data;
      uVar22 = 0;
      if ((int)uVar25 < *(int *)(pFVar17 + 3)) {
        uVar22 = uVar21;
      }
      if ((uVar22 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar18 = FInterpCurve<UE::Math::TVector<double>_>::Eval
                          ((FInterpCurve<UE::Math::TVector<double>_> *)param_2,&local_140,
                           *(float *)((this->AllocatorInstance).Data + lVar26 * 4),
                           (TVector<double> *)&local_2d0._s_0);
      dVar58 = (pTVar18->field0_0x0)._s_0.Y;
      dVar51 = (pTVar18->field0_0x0)._s_0.Z;
      *(double *)(pFVar4 + lVar27 + 0x20) = (pTVar18->field0_0x0)._s_0.X;
      *(double *)(pFVar4 + lVar27 + 0x20 + 8) = dVar58;
      *(double *)(pFVar4 + lVar27 + 0x30) = dVar51;
      *(double *)(pFVar4 + lVar27 + 0x30 + 8) = 0.0;
      local_2b8._s_0.Z = 0.0;
      local_2b8._s_0.X = 0.0;
      local_2b8._s_0.Y = 0.0;
      uVar22 = 0;
      if ((int)uVar25 < *(int *)(pFVar17 + 3)) {
        uVar22 = uVar21;
      }
      if ((uVar22 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar18 = FInterpCurve<UE::Math::TVector<double>_>::Eval
                          ((FInterpCurve<UE::Math::TVector<double>_> *)param_4,&local_128,
                           *(float *)((this->AllocatorInstance).Data + lVar26 * 4),
                           (TVector<double> *)&local_2b8._s_0);
      uVar25 = uVar25 + 1;
      lVar26 = lVar26 + 1;
      dVar58 = (pTVar18->field0_0x0)._s_0.Y;
      dVar51 = (pTVar18->field0_0x0)._s_0.Z;
      *(double *)(pFVar4 + lVar27 + 0x40) = (pTVar18->field0_0x0)._s_0.X;
      *(double *)(pFVar4 + lVar27 + 0x40 + 8) = dVar58;
      *(double *)(pFVar4 + lVar27 + 0x50) = dVar51;
      *(double *)(pFVar4 + lVar27 + 0x50 + 8) = 0.0;
      local_3e8 = *(double *)(pFVar4 + lVar27 + 0x20);
      dStack_3e0 = *(double *)(pFVar4 + lVar27 + 0x20 + 8);
      local_3d8 = *(double *)(pFVar4 + lVar27 + 0x30);
      lVar27 = lVar27 + 0x60;
      local_238 = local_3e8;
      dStack_230 = dStack_3e0;
      local_228 = local_3d8;
    } while (lVar26 < local_408);
  }
  uVar25 = 0;
  if (0 < local_408) {
    param_14 = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
    local_418 = 0x20;
    param_6 = 1.4013e-45;
    uVar90 = (undefined4)__real_3ff0000000000000;
    uVar91 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar94 = (undefined4)__real_3e45798ee0000000;
    uVar95 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    local_398 = __real_3ff0000000000000;
    local_308 = ___xmm_3ff00000000000000000000000000000;
    local_2f8 = ___xmm_00000000000000003ff0000000000000;
    do {
      auVar32 = local_2f8;
      auVar30 = local_308;
      uVar22 = ~uVar25 >> 0x1f;
      uVar21 = 0;
      if ((int)uVar25 < *local_420) {
        uVar21 = uVar22;
      }
      if ((uVar21 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_298._0_8_ = 0.0;
      local_298._8_8_ = 0.0;
      local_410 = (param_16->AllocatorInstance).Data;
      uVar21 = 0;
      if ((int)uVar25 < *(int *)(pFVar17 + 3)) {
        uVar21 = uVar22;
      }
      local_298._16_16_ = auVar30;
      if ((uVar21 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FInterpCurve<UE::Math::TQuat<double>_>::Eval
                ((FInterpCurve<UE::Math::TQuat<double>_> *)param_3,&local_258,
                 *(float *)((this->AllocatorInstance).Data + (longlong)param_14 * 4),
                 (TQuat<double> *)local_298);
      uVar21 = 0;
      if ((int)uVar25 < *(int *)(pFVar17 + 3)) {
        uVar21 = uVar22;
      }
      if ((uVar21 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_7,&local_220);
      if (*(int *)&param_7->field_0x10 == 0) {
        plVar20 = (longlong *)0x0;
      }
      else {
        plVar20 = *(longlong **)&param_7->field_0x8;
      }
      fVar79 = (float)(**(code **)(*plVar20 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_220);
      fVar79 = fVar79 + param_8;
      if (param_11 == Z) {
        fVar28 = 0.0;
        fVar48 = fVar79;
LAB_142388cd5:
        fVar41 = fVar28;
        fVar79 = 0.0;
        fVar49 = fVar48;
      }
      else {
        fVar48 = 0.0;
        fVar28 = fVar79;
        if (param_11 == X) goto LAB_142388cd5;
        fVar41 = 0.0;
        fVar49 = 0.0;
        fVar48 = 0.0;
        fVar28 = 0.0;
        if (param_11 != Y) goto LAB_142388cd5;
      }
      local_328.Pitch = (double)fVar79;
      local_328.Yaw = (double)fVar41;
      local_328.Roll = (double)fVar49;
      UE::Math::TRotator<double>::Quaternion(&local_328,&local_278);
      uVar87 = UE::Math::TQuat<double>::Identity.W._4_4_;
      uVar86 = UE::Math::TQuat<double>::Identity.W._0_4_;
      uVar85 = UE::Math::TQuat<double>::Identity.Z._4_4_;
      uVar84 = UE::Math::TQuat<double>::Identity.Z._0_4_;
      uVar83 = UE::Math::TQuat<double>::Identity.Y._4_4_;
      uVar81 = UE::Math::TQuat<double>::Identity.Y._0_4_;
      uVar80 = UE::Math::TQuat<double>::Identity.X._4_4_;
      uVar82 = UE::Math::TQuat<double>::Identity.X._0_4_;
      local_348._4_4_ = UE::Math::TQuat<double>::Identity.X._4_4_;
      local_348._0_4_ = UE::Math::TQuat<double>::Identity.X._0_4_;
      local_348._8_4_ = UE::Math::TQuat<double>::Identity.Y._0_4_;
      local_348._12_4_ = UE::Math::TQuat<double>::Identity.Y._4_4_;
      local_178 = UE::Math::TQuat<double>::Identity.X._0_4_;
      uStack_174 = UE::Math::TQuat<double>::Identity.X._4_4_;
      uStack_170 = UE::Math::TQuat<double>::Identity.Y._0_4_;
      uStack_16c = UE::Math::TQuat<double>::Identity.Y._4_4_;
      local_358 = (double)CONCAT44(UE::Math::TQuat<double>::Identity.Z._4_4_,
                                   UE::Math::TQuat<double>::Identity.Z._0_4_);
      uStack_350 = (double)CONCAT44(UE::Math::TQuat<double>::Identity.W._4_4_,
                                    UE::Math::TQuat<double>::Identity.W._0_4_);
      local_168 = UE::Math::TQuat<double>::Identity.Z._0_4_;
      uStack_164 = UE::Math::TQuat<double>::Identity.Z._4_4_;
      uStack_160 = UE::Math::TQuat<double>::Identity.W._0_4_;
      uStack_15c = UE::Math::TQuat<double>::Identity.W._4_4_;
      local_388 = UE::Math::TQuat<double>::Identity.X._0_4_;
      uStack_384 = UE::Math::TQuat<double>::Identity.X._4_4_;
      uStack_380 = UE::Math::TQuat<double>::Identity.Y._0_4_;
      uStack_37c = UE::Math::TQuat<double>::Identity.Y._4_4_;
      local_378 = UE::Math::TQuat<double>::Identity.Z._0_4_;
      uStack_374 = UE::Math::TQuat<double>::Identity.Z._4_4_;
      uStack_370 = UE::Math::TQuat<double>::Identity.W._0_4_;
      uStack_36c = UE::Math::TQuat<double>::Identity.W._4_4_;
      dVar51 = auVar32._8_8_;
      dVar58 = auVar30._8_8_;
      if ((int)uVar25 < (int)(uVar2 - 1)) {
        uVar21 = uVar25 + 1;
        uVar23 = ~uVar21 >> 0x1f;
        uVar22 = 0;
        if ((int)param_6 < *local_420) {
          uVar22 = uVar23;
        }
        if ((uVar22 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (param_16->AllocatorInstance).Data;
        pFVar4 = pFVar5 + lVar24 + 0x20;
        local_208 = *(double *)pFVar4;
        dStack_200 = *(double *)(pFVar4 + 8);
        local_1f8 = *(double *)(pFVar5 + lVar24 + 0x30);
        local_1f0 = *(double *)(local_410 + lVar24 + -0x40);
        dStack_1e8 = *(double *)(local_410 + lVar24 + -0x40 + 8);
        local_1e0 = *(double *)(local_410 + lVar24 + -0x30);
        local_3b8._s_0.X = local_208 - local_1f0;
        local_3b8._s_0.Y = dStack_200 - dStack_1e8;
        local_3b8._s_0.Z = local_1f8 - local_1e0;
        dVar50 = local_3b8._s_0.Y * local_3b8._s_0.Y + local_3b8._s_0.X * local_3b8._s_0.X +
                 local_3b8._s_0.Z * local_3b8._s_0.Z;
        if ((double)CONCAT44(uVar95,uVar94) <= dVar50 && dVar50 != (double)CONCAT44(uVar95,uVar94))
        {
          uVar22 = 0;
          if ((int)uVar21 < param_1->ArrayNum) {
            uVar22 = uVar23;
          }
          local_2a0 = (double)CONCAT44(uVar91,uVar90) / SQRT(dVar50);
          local_3b8._s_0.X = local_3b8._s_0.X * local_2a0;
          local_3b8._s_0.Y = local_3b8._s_0.Y * local_2a0;
          local_3b8._s_0.Z = local_3b8._s_0.Z * local_2a0;
          if ((uVar22 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (param_1->AllocatorInstance).Data;
          local_348 = *(undefined1 (*) [16])(pFVar4 + lVar24);
          auVar34 = *(undefined1 (*) [16])(pFVar4 + lVar24 + 0x10);
          dVar50 = auVar34._8_8_;
          dVar42 = auVar34._0_8_;
          dVar29 = local_348._8_8_;
          dVar59 = local_348._0_8_;
          if (param_11 == X) {
            local_1c8 = CONCAT44(uVar89,uVar88);
            auVar52 = blendpd(local_348,auVar34,2);
            auVar69._0_8_ = dVar51 * dVar59 - dVar29 * auVar32._0_8_;
            auVar69._8_8_ = (double)CONCAT44(uVar89,uVar88) * dVar29 - dVar42 * dVar51;
            auVar7._4_4_ = uVar89;
            auVar7._0_4_ = uVar88;
            auVar7._8_8_ = 0;
            auVar30 = blendpd(auVar32,auVar7,2);
            auVar31._0_8_ = auVar30._0_8_ * dVar42 - auVar52._0_8_ * (double)CONCAT44(uVar89,uVar88)
            ;
            auVar31._8_8_ = auVar30._8_8_ * dVar50 - auVar52._8_8_ * 0.0;
            auVar30 = blendpd(auVar69,auVar31,2);
            dVar58 = auVar69._8_8_ + auVar69._8_8_;
            dVar11 = auVar31._0_8_ + auVar31._0_8_;
            uVar82 = (undefined4)((ulonglong)dVar11 >> 0x20);
            auVar70._0_8_ = auVar30._0_8_ + auVar30._0_8_;
            auVar70._8_8_ = auVar30._8_8_ + auVar30._8_8_;
            auVar60._8_4_ = SUB84(dVar11,0);
            auVar60._0_8_ = dVar58;
            auVar60._12_4_ = uVar82;
            auVar43._8_4_ = SUB84(dVar11,0);
            auVar43._0_8_ = dVar58;
            auVar43._12_4_ = uVar82;
            dVar59 = auVar60._8_8_ * dVar59;
            dVar66 = auVar70._0_8_ * dVar29;
            dVar29 = dVar29 * dVar58;
            dVar40 = dVar42 * dVar11;
            auVar52 = blendpd(auVar43,auVar70,2);
            auVar30 = blendpd(local_348,auVar34,2);
            dVar55 = auVar30._0_8_ * auVar70._0_8_;
            dVar57 = auVar30._8_8_ * auVar70._8_8_;
            local_3c0 = auVar70._0_8_ * dVar50 + (double)CONCAT44(uVar89,uVar88);
            dVar10 = dVar58 * dVar50 + auVar32._0_8_;
            dVar51 = dVar11 * dVar50 + dVar51;
            local_1d8 = auVar32;
          }
          else if (param_11 == Y) {
            local_1b0 = CONCAT44(uVar89,uVar88);
            auVar52 = blendpd(local_348,auVar34,2);
            auVar71._0_8_ = dVar58 * dVar59 - dVar29 * auVar30._0_8_;
            auVar71._8_8_ = (double)CONCAT44(uVar89,uVar88) * dVar29 - dVar42 * dVar58;
            auVar9._4_4_ = uVar89;
            auVar9._0_4_ = uVar88;
            auVar9._8_8_ = 0;
            auVar32 = blendpd(auVar30,auVar9,2);
            auVar33._0_8_ = auVar32._0_8_ * dVar42 - auVar52._0_8_ * (double)CONCAT44(uVar89,uVar88)
            ;
            auVar33._8_8_ = auVar32._8_8_ * dVar50 - auVar52._8_8_ * 0.0;
            auVar32 = blendpd(auVar71,auVar33,2);
            dVar51 = auVar71._8_8_ + auVar71._8_8_;
            dVar11 = auVar33._0_8_ + auVar33._0_8_;
            uVar82 = (undefined4)((ulonglong)dVar11 >> 0x20);
            auVar72._0_8_ = auVar32._0_8_ + auVar32._0_8_;
            auVar72._8_8_ = auVar32._8_8_ + auVar32._8_8_;
            auVar61._8_4_ = SUB84(dVar11,0);
            auVar61._0_8_ = dVar51;
            auVar61._12_4_ = uVar82;
            auVar44._8_4_ = SUB84(dVar11,0);
            auVar44._0_8_ = dVar51;
            auVar44._12_4_ = uVar82;
            dVar59 = auVar61._8_8_ * dVar59;
            dVar66 = auVar72._0_8_ * dVar29;
            dVar29 = dVar29 * dVar51;
            dVar40 = dVar42 * dVar11;
            auVar52 = blendpd(auVar44,auVar72,2);
            auVar32 = blendpd(local_348,auVar34,2);
            dVar55 = auVar32._0_8_ * auVar72._0_8_;
            dVar57 = auVar32._8_8_ * auVar72._8_8_;
            local_3c0 = auVar72._0_8_ * dVar50 + (double)CONCAT44(uVar89,uVar88);
            dVar10 = dVar51 * dVar50 + auVar30._0_8_;
            dVar51 = dVar11 * dVar50 + dVar58;
            local_1c0 = auVar30;
          }
          else {
            local_198 = CONCAT44(uVar91,uVar90);
            auVar52 = blendpd(local_348,auVar34,2);
            auVar73._0_8_ = dVar59 * 0.0 - dVar29 * 0.0;
            auVar73._8_8_ = (double)CONCAT44(uVar91,uVar90) * dVar29 - dVar42 * 0.0;
            auVar30._4_4_ = uVar91;
            auVar30._0_4_ = uVar90;
            auVar30._8_8_ = 0;
            auVar30 = blendpd(ZEXT816(0),auVar30,2);
            local_1a8 = 0;
            uStack_1a0 = 0;
            auVar32._0_8_ = auVar30._0_8_ * dVar42 - auVar52._0_8_ * (double)CONCAT44(uVar91,uVar90)
            ;
            auVar32._8_8_ = auVar30._8_8_ * dVar50 - auVar52._8_8_ * 0.0;
            auVar30 = blendpd(auVar73,auVar32,2);
            auVar74._0_8_ = auVar30._0_8_ + auVar30._0_8_;
            auVar74._8_8_ = auVar30._8_8_ + auVar30._8_8_;
            dVar10 = auVar73._8_8_ + auVar73._8_8_;
            dVar51 = auVar32._0_8_ + auVar32._0_8_;
            uVar88 = (undefined4)((ulonglong)dVar51 >> 0x20);
            auVar62._8_4_ = SUB84(dVar51,0);
            auVar62._0_8_ = dVar10;
            auVar62._12_4_ = uVar88;
            auVar52._8_4_ = SUB84(dVar51,0);
            auVar52._0_8_ = dVar10;
            auVar52._12_4_ = uVar88;
            dVar59 = auVar62._8_8_ * dVar59;
            dVar66 = auVar74._0_8_ * dVar29;
            auVar52 = blendpd(auVar52,auVar74,2);
            auVar30 = blendpd(local_348,auVar34,2);
            dVar55 = auVar30._0_8_ * auVar74._0_8_;
            dVar57 = auVar30._8_8_ * auVar74._8_8_;
            dVar29 = dVar29 * dVar10;
            dVar40 = dVar42 * dVar51;
            local_3c0 = auVar74._0_8_ * dVar50 + (double)CONCAT44(uVar91,uVar90);
            dVar10 = dVar10 * dVar50;
            dVar51 = dVar51 * dVar50;
          }
          auVar63._0_8_ = dVar59 - dVar29;
          auVar63._8_8_ = dVar66 - dVar40;
          auVar45._0_8_ = auVar52._0_8_ * dVar42 - dVar55;
          auVar45._8_8_ = auVar52._8_8_ * dVar50 - dVar57;
          auVar34._8_4_ = SUB84(auVar63._8_8_,0);
          auVar34._0_8_ = auVar63._0_8_;
          auVar34._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
          dVar10 = dVar10 + auVar34._8_8_;
          uVar88 = SUB84(dVar51 + auVar45._0_8_,0);
          uVar89 = (undefined4)((ulonglong)(dVar51 + auVar45._0_8_) >> 0x20);
          auVar30 = blendpd(auVar63,auVar45,2);
          local_3c0 = local_3c0 + auVar30._0_8_;
          auVar14._4_8_ = dVar57;
          auVar14._0_4_ = (int)((ulonglong)dVar10 >> 0x20);
          auVar56._0_8_ = auVar14._0_8_ << 0x20;
          auVar56._8_4_ = uVar88;
          auVar56._12_4_ = uVar89;
          dVar58 = auVar56._8_8_;
          local_3d0._8_4_ = uVar88;
          local_3d0._0_8_ = dVar10;
          local_3d0._12_4_ = uVar89;
          dVar51 = dVar58 * dVar58 + dVar10 * dVar10 + local_3c0 * local_3c0;
          if (dVar51 == (double)CONCAT44(uVar91,uVar90)) {
            unique0x10000903 = uVar88;
            local_400 = dVar10;
            unique0x10000907 = uVar89;
            local_3f0 = local_3c0;
          }
          else if ((double)CONCAT44(uVar95,uVar94) <= dVar51) {
            local_310 = (double)CONCAT44(uVar91,uVar90) / SQRT(dVar51);
            local_3f0 = local_310 * local_3c0;
            dStack_3f8 = local_310 * dVar58;
            local_400 = local_310 * dVar10;
          }
          else {
            dStack_3f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_400 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_3f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          pTVar19 = UE::Math::TQuat<double>::FindBetweenNormals
                              (local_108,(TVector<double> *)&local_400,
                               (TVector<double> *)&local_3b8._s_0);
          uVar82 = *(undefined4 *)&pTVar19->X;
          uVar80 = *(undefined4 *)((longlong)&pTVar19->X + 4);
          uVar81 = *(undefined4 *)&pTVar19->Y;
          uVar83 = *(undefined4 *)((longlong)&pTVar19->Y + 4);
          uVar84 = *(undefined4 *)&pTVar19->Z;
          uVar85 = *(undefined4 *)((longlong)&pTVar19->Z + 4);
          uVar86 = *(undefined4 *)&pTVar19->W;
          uVar87 = *(undefined4 *)((longlong)&pTVar19->W + 4);
          local_388 = uVar82;
          uStack_384 = uVar80;
          uStack_380 = uVar81;
          uStack_37c = uVar83;
          local_378 = uVar84;
          uStack_374 = uVar85;
          uStack_370 = uVar86;
          uStack_36c = uVar87;
        }
        uVar22 = 0;
        if ((int)uVar21 < param_13->ArrayNum) {
          uVar22 = uVar23;
        }
        if ((uVar22 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (param_13->AllocatorInstance).Data;
        local_348 = *(undefined1 (*) [16])(pFVar4 + local_418);
        pFVar4 = pFVar4 + local_418 + 0x10;
        local_358 = *(double *)pFVar4;
        uStack_350 = *(double *)(pFVar4 + 8);
      }
      dVar42 = local_278.X;
      auVar64._4_4_ = uVar85;
      auVar64._0_4_ = uVar84;
      auVar64._8_4_ = uVar86;
      auVar64._12_4_ = uVar87;
      dVar92 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      auVar53._4_4_ = uVar80;
      auVar53._0_4_ = uVar82;
      auVar53._8_4_ = uVar81;
      auVar53._12_4_ = uVar83;
      dVar59 = local_278.Y;
      dVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
      dVar58 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
      dVar29 = local_278.W;
      auVar35._8_4_ = local_278.W._0_4_;
      auVar35._0_8_ = dVar29;
      auVar35._12_4_ = local_278.W._4_4_;
      auVar46._8_4_ = local_278.Y._0_4_;
      auVar46._0_8_ = dVar59;
      auVar46._12_4_ = local_278.Y._4_4_;
      dVar50 = local_278.Z;
      dVar93 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
      dVar55 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      dVar57 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
      dVar68 = local_348._0_8_;
      auVar36._8_4_ = local_278.Z._0_4_;
      auVar36._0_8_ = dVar50;
      auVar36._12_4_ = local_278.Z._4_4_;
      dVar66 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
      dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
      dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar40 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      dVar76 = dVar42 * auVar53._8_8_ * dVar92 + dVar29 * (double)CONCAT44(uVar85,uVar84) +
               dVar59 * (double)CONCAT44(uVar80,uVar82) * dVar55 + dVar50 * auVar64._8_8_ * dVar10;
      dVar78 = dVar42 * (double)CONCAT44(uVar80,uVar82) * dVar93 +
               dVar29 * (double)CONCAT44(uVar87,uVar86) +
               dVar59 * (double)CONCAT44(uVar83,uVar81) * dVar57 +
               dVar50 * (double)CONCAT44(uVar85,uVar84) * dVar40;
      dVar50 = dVar42 * auVar64._8_8_ * dVar51 + dVar29 * (double)CONCAT44(uVar80,uVar82) +
               dVar59 * (double)CONCAT44(uVar85,uVar84) * dVar12 + dVar50 * auVar53._8_8_ * dVar66;
      dVar29 = dVar42 * (double)CONCAT44(uVar85,uVar84) * dVar58 +
               auVar35._8_8_ * (double)CONCAT44(uVar83,uVar81) +
               auVar46._8_8_ * (double)CONCAT44(uVar87,uVar86) * dVar13 +
               auVar36._8_8_ * (double)CONCAT44(uVar80,uVar82) * dVar11;
      auVar65._8_4_ = SUB84(dVar78,0);
      auVar65._0_8_ = dVar76;
      uVar88 = (undefined4)((ulonglong)dVar78 >> 0x20);
      auVar65._12_4_ = uVar88;
      dVar75 = local_348._8_8_;
      dVar67 = auVar65._8_8_;
      auVar37._8_4_ = SUB84(dVar78,0);
      auVar37._0_8_ = dVar67;
      auVar37._12_4_ = uVar88;
      auVar38._8_4_ = local_348._0_4_;
      auVar38._0_8_ = dVar75;
      auVar38._12_4_ = local_348._4_4_;
      auVar47._8_4_ = SUB84(dVar29,0);
      auVar47._0_8_ = dVar29;
      auVar47._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      dVar42 = dVar50 * dVar75 * dVar92 + dVar67 * local_358 + dVar29 * dVar68 * dVar55 +
               uStack_350 * dVar76 * dVar10;
      dVar59 = dVar50 * dVar68 * dVar93 + dVar78 * uStack_350 + dVar29 * dVar75 * dVar57 +
               local_358 * dVar76 * dVar40;
      dVar29 = dVar50 * uStack_350 * dVar51 + dVar67 * dVar68 + dVar29 * local_358 * dVar12 +
               dVar75 * dVar76 * dVar66;
      dVar50 = dVar50 * local_358 * dVar58 + auVar37._8_8_ * dVar75 +
               auVar47._8_8_ * uStack_350 * dVar13 + auVar38._8_8_ * dVar76 * dVar11;
      auVar77._8_4_ = SUB84(dVar59,0);
      auVar77._0_8_ = dVar42;
      auVar77._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
      auVar54._8_4_ = SUB84(dVar29,0);
      auVar54._0_8_ = dVar29;
      auVar54._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      param_14 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                 ((longlong)&(param_14->AllocatorInstance).Data + 1);
      local_418 = local_418 + 0x20;
      uVar25 = uVar25 + 1;
      auVar39._8_4_ = SUB84(dVar42,0);
      auVar39._0_8_ = dVar42;
      auVar39._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
      uVar90 = (undefined4)local_398;
      uVar91 = (undefined4)((ulonglong)local_398 >> 0x20);
      uVar88 = (undefined4)local_3a0;
      uVar89 = (undefined4)((ulonglong)local_3a0 >> 0x20);
      dVar58 = dVar29 * local_258.Z * dVar58 + local_258.Y * dVar59 + local_258.W * dVar50 * dVar13
               + dVar42 * local_258.X * dVar11;
      auVar8._8_4_ = SUB84(dVar58,0);
      auVar8._0_8_ = dVar29 * local_258.W * dVar51 + local_258.X * auVar77._8_8_ +
                     local_258.Z * dVar50 * dVar12 + dVar42 * local_258.Y * dVar66;
      auVar8._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
      *(undefined1 (*) [16])(local_410 + lVar24 + -0x60) = auVar8;
      *(double *)(local_410 + lVar24 + -0x50) =
           dVar29 * local_258.Y * dVar92 + local_258.Z * auVar77._8_8_ +
           local_258.X * dVar50 * dVar55 + dVar42 * local_258.W * dVar10;
      *(double *)(local_410 + lVar24 + -0x50 + 8) =
           auVar54._8_8_ * local_258.X * dVar93 + local_258.W * dVar59 +
           local_258.Y * dVar50 * dVar57 + auVar39._8_8_ * local_258.Z * dVar40;
      lVar24 = lVar24 + 0x60;
      param_6 = (float)((int)param_6 + 1);
      uVar94 = (undefined4)__real_3e45798ee0000000;
      uVar95 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    } while ((longlong)param_14 < local_408);
  }
  return;
}

// SolveTwoBoneIK @ 1423895a0

void __cdecl
AnimationCore::SolveTwoBoneIK
          (TTransform<double> *param_1,TTransform<double> *param_2,TTransform<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,double param_6,double param_7,
          bool param_8,double param_9,double param_10)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  TVector<double>_u_0 local_188;
  double local_170;
  double dStack_168;
  undefined8 local_160;
  TVector<double>_u_0 local_158;
  double dStack_140;
  TVector<double>_u_0 local_138;
  double dStack_120;
  double local_110;
  double dStack_108;
  undefined1 local_100 [16];
  undefined1 local_e8 [16];
  TVector<double> local_d8 [8];
  
  dVar23 = (param_1->Translation).ZW.m128d_f64[0];
  auVar1 = *(undefined1 (*) [16])(param_2->Translation).XY.m128d_f64;
  dVar22 = (param_1->Translation).XY.m128d_f64[0];
  dVar2 = (param_1->Translation).XY.m128d_f64[1];
  dVar5 = (param_3->Translation).XY.m128d_f64[0];
  dVar4 = (param_3->Translation).XY.m128d_f64[1];
  local_160 = (param_2->Translation).ZW.m128d_f64[0];
  local_d8[0].field0_0x0._16_8_ = (param_3->Translation).ZW.m128d_f64[0];
  local_188._s_0.X = dVar22;
  local_188._s_0.Y = dVar2;
  local_188._s_0.Z = dVar23;
  _local_170 = auVar1;
  local_110 = dVar22;
  dStack_108 = dVar2;
  local_100 = auVar1;
  SolveTwoBoneIK((TVector<double> *)&local_188._s_0,(TVector<double> *)&local_170,local_d8,param_4,
                 param_5,(TVector<double> *)&local_158._s_0,(TVector<double> *)&local_138._s_0,
                 param_6,param_7,param_8,param_9,param_10);
  uVar17 = local_158._s_0.Z;
  uVar16 = local_158._s_0.Y;
  uVar15 = local_158._s_0.X;
  uVar14 = local_160;
  dVar9 = __real_3e45798ee0000000;
  dVar24 = __real_3ff0000000000000;
  local_170 = auVar1._0_8_ - dVar22;
  local_e8._8_4_ = auVar1._8_4_;
  local_e8._0_8_ = auVar1._8_8_;
  local_e8._12_4_ = auVar1._12_4_;
  local_160 = (double)local_160 - local_188._s_0.Z;
  dStack_168 = auVar1._8_8_ - dVar2;
  dVar21 = dStack_168 * dStack_168 + local_170 * local_170 + (double)local_160 * (double)local_160;
  if (dVar21 != __real_3ff0000000000000) {
    if (__real_3e45798ee0000000 <= dVar21) {
      dVar21 = __real_3ff0000000000000 / SQRT(dVar21);
      local_170 = local_170 * dVar21;
      dStack_168 = dStack_168 * dVar21;
      local_160 = dVar21 * (double)local_160;
    }
    else {
      local_170 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_160 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  local_188._s_0.Z = local_158._s_0.Z - local_188._s_0.Z;
  local_188._s_0.X = local_158._s_0.X - dVar22;
  local_188._s_0.Y = local_158._s_0.Y - dVar2;
  dVar22 = local_188._s_0.Y * local_188._s_0.Y + local_188._s_0.X * local_188._s_0.X +
           local_188._s_0.Z * local_188._s_0.Z;
  if (dVar22 != __real_3ff0000000000000) {
    if (__real_3e45798ee0000000 <= dVar22) {
      dVar22 = __real_3ff0000000000000 / SQRT(dVar22);
      local_188._s_0.X = local_188._s_0.X * dVar22;
      local_188._s_0.Y = local_188._s_0.Y * dVar22;
      local_188._s_0.Z = local_188._s_0.Z * dVar22;
    }
    else {
      local_188._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_188._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_188._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  UE::Math::TQuat<double>::FindBetweenNormals
            ((TQuat<double> *)&local_158._s_0,(TVector<double> *)&local_170,
             (TVector<double> *)&local_188._s_0);
  uVar20 = local_138._s_0.Z;
  uVar19 = local_138._s_0.Y;
  uVar18 = local_138._s_0.X;
  dVar10 = (param_1->Rotation).XY.m128d_f64[0];
  dVar11 = (param_1->Rotation).XY.m128d_f64[1];
  dVar12 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar13 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar22 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar21 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  local_188._s_0.Y = dVar4 - (double)local_e8._0_8_;
  dVar4 = local_158._s_0.X * dVar10 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar13 * dStack_140 +
          dVar11 * local_158._s_0.Y *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          local_158._s_0.Z * dVar12 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar8 = dVar12 * local_158._s_0.X *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar11 * dStack_140 +
          dVar13 * local_158._s_0.Y *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          local_158._s_0.Z * dVar10 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar6._8_4_ = SUB84(dVar8,0);
  auVar6._0_8_ = dVar13 * local_158._s_0.X *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar10 * dStack_140 +
                 dVar12 * local_158._s_0.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 local_158._s_0.Z * dVar11 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar6;
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = local_158._s_0.X * dVar11 * dVar22 + dVar12 * dStack_140 +
                 dVar10 * local_158._s_0.Y * dVar21 + local_158._s_0.Z * dVar13 * dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar1;
  (param_1->Translation).XY.m128d_f64[0] = local_110;
  (param_1->Translation).XY.m128d_f64[1] = dStack_108;
  (param_1->Translation).ZW.m128d_f64[0] = dVar23;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  local_188._s_0.X = dVar5 - (double)local_100._0_8_;
  local_188._s_0.Z = (double)local_d8[0].field0_0x0._16_8_ - (double)uVar14;
  dVar23 = local_188._s_0.Y * local_188._s_0.Y + local_188._s_0.X * local_188._s_0.X +
           local_188._s_0.Z * local_188._s_0.Z;
  if (dVar23 != dVar24) {
    if (dVar9 <= dVar23) {
      dVar23 = dVar24 / SQRT(dVar23);
      local_188._s_0.X = local_188._s_0.X * dVar23;
      local_188._s_0.Y = local_188._s_0.Y * dVar23;
      local_188._s_0.Z = local_188._s_0.Z * dVar23;
    }
    else {
      local_188._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_188._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_188._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  local_170 = local_138._s_0.X - (double)uVar15;
  dStack_168 = local_138._s_0.Y - (double)uVar16;
  local_160 = local_138._s_0.Z - (double)uVar17;
  dVar23 = dStack_168 * dStack_168 + local_170 * local_170 + (double)local_160 * (double)local_160;
  if (dVar23 != dVar24) {
    if (dVar23 < dVar9) {
      dStack_168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_170 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_160 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      goto LAB_142389a76;
    }
    dVar24 = dVar24 / SQRT(dVar23);
    local_170 = local_170 * dVar24;
    dStack_168 = dStack_168 * dVar24;
    local_160 = (double)local_160 * dVar24;
  }
LAB_142389a76:
  UE::Math::TQuat<double>::FindBetweenNormals
            ((TQuat<double> *)&local_138._s_0,(TVector<double> *)&local_188._s_0,
             (TVector<double> *)&local_170);
  dVar21 = (param_2->Rotation).XY.m128d_f64[0];
  dVar8 = (param_2->Rotation).XY.m128d_f64[1];
  dVar10 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar11 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar23 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar22 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar24 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar9 = dVar10 * local_138._s_0.X *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar8 * dStack_120 +
          dVar11 * local_138._s_0.Y *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          local_138._s_0.Z * dVar21 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar7._8_4_ = SUB84(dVar9,0);
  auVar7._0_8_ = dVar11 * local_138._s_0.X *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar21 * dStack_120 +
                 dVar10 * local_138._s_0.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 local_138._s_0.Z * dVar8 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64 = auVar7;
  dVar5 = local_138._s_0.X * dVar21 * dVar5 + dVar11 * dStack_120 +
          dVar8 * local_138._s_0.Y * dVar24 + local_138._s_0.Z * dVar10 * dVar4;
  auVar3._8_4_ = SUB84(dVar5,0);
  auVar3._0_8_ = local_138._s_0.X * dVar8 * dVar23 + dVar10 * dStack_120 +
                 dVar21 * local_138._s_0.Y * dVar2 + local_138._s_0.Z * dVar11 * dVar22;
  auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64 = auVar3;
  (param_2->Translation).XY.m128d_f64[0] = (double)uVar15;
  (param_2->Translation).XY.m128d_f64[1] = (double)uVar16;
  (param_2->Translation).ZW.m128d_f64[0] = (double)uVar17;
  (param_2->Translation).ZW.m128d_f64[1] = 0.0;
  (param_3->Translation).XY.m128d_f64[0] = (double)uVar18;
  (param_3->Translation).XY.m128d_f64[1] = (double)uVar19;
  (param_3->Translation).ZW.m128d_f64[0] = (double)uVar20;
  (param_3->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// SolveTwoBoneIK @ 142389bc0

void __cdecl
AnimationCore::SolveTwoBoneIK
          (TTransform<double> *param_1,TTransform<double> *param_2,TTransform<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,bool param_6,double param_7,
          double param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = (param_2->Translation).ZW.m128d_f64[0];
  dVar1 = (param_3->Translation).ZW.m128d_f64[0] - dVar5;
  dVar4 = (param_3->Translation).XY.m128d_f64[0] - (param_2->Translation).XY.m128d_f64[0];
  dVar5 = dVar5 - (param_1->Translation).ZW.m128d_f64[0];
  dVar2 = (param_3->Translation).XY.m128d_f64[1] - (param_2->Translation).XY.m128d_f64[1];
  dVar3 = (param_2->Translation).XY.m128d_f64[0] - (param_1->Translation).XY.m128d_f64[0];
  dVar6 = (param_2->Translation).XY.m128d_f64[1] - (param_1->Translation).XY.m128d_f64[1];
  SolveTwoBoneIK(param_1,param_2,param_3,param_4,param_5,
                 SQRT(dVar6 * dVar6 + dVar3 * dVar3 + dVar5 * dVar5),
                 SQRT(dVar2 * dVar2 + dVar4 * dVar4 + dVar1 * dVar1),param_6,param_7,param_8);
  return;
}

// SolveTwoBoneIK @ 142389cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
AnimationCore::SolveTwoBoneIK
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6,
          TVector<double> *param_7,double param_8,double param_9,bool param_10,double param_11,
          double param_12)

{
  double dVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [12];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 unaff_XMM15_Qb;
  double local_138;
  TVector<double>_u_0 local_128;
  double local_108;
  double local_100;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  undefined1 local_c8 [176];
  
  dVar6 = __real_3ff0000000000000;
  dVar11 = 0.0;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar4 = param_8 + param_9;
  local_c8._0_16_ = *(undefined1 (*) [16])&param_5->field0_0x0;
  local_100 = (param_5->field0_0x0)._s_0.Z;
  auVar5._4_8_ = unaff_XMM15_Qb;
  auVar5._0_4_ = local_c8._4_4_;
  auVar12._0_8_ = auVar5._0_8_ << 0x20;
  auVar12._8_4_ = local_c8._8_4_;
  auVar12._12_4_ = local_c8._12_4_;
  dVar16 = auVar12._8_8_ - (param_1->field0_0x0)._s_0.Y;
  dVar8 = local_100 - (param_1->field0_0x0)._s_0.Z;
  dVar9 = local_c8._0_8_ - dVar1;
  dVar13 = dVar16 * dVar16 + dVar9 * dVar9 + dVar8 * dVar8;
  dVar7 = SQRT(dVar13);
  if (__real_3f1a36e2eb1c432d <= dVar7) {
    local_128._s_0.Z = dVar8;
    uVar10 = dVar9;
    uVar17 = dVar16;
    if ((dVar13 != __real_3ff0000000000000) &&
       (local_128._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       __real_3e45798ee0000000 <= dVar13)) {
      dVar13 = __real_3ff0000000000000 / SQRT(dVar13);
      local_128._s_0.Z = dVar8 * dVar13;
      uVar10 = dVar9 * dVar13;
      uVar17 = dVar16 * dVar13;
    }
    uVar14 = SUB84(local_128._s_0.Z,0);
    uVar15 = (undefined4)((ulonglong)local_128._s_0.Z >> 0x20);
    dVar13 = (double)uVar10;
    local_138 = (double)uVar17;
    local_f8._s_0.Z = local_128._s_0.Z;
  }
  else {
    uVar14 = 0;
    uVar15 = 0;
    local_f8._s_0.Z = 0.0;
    local_138 = 0.0;
    uVar10 = __real_3ff0000000000000;
    dVar7 = __real_3f1a36e2eb1c432d;
    dVar13 = ___xmm_00000000000000003ff0000000000000;
    uVar17 = _UNK_150689518;
  }
  local_108 = (param_4->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_4->field0_0x0)._s_0.X - dVar1;
  dVar8 = (param_4->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  local_f8._s_0.X = dVar13;
  local_f8._s_0.Y = (double)uVar17;
  local_e0._s_0.Z = local_100;
  if (__real_3e45798ee2308c3a <= local_108 * local_108 + dVar1 * dVar1 + dVar8 * dVar8) {
    local_128._s_0.X = dVar8 * local_138 - local_108 * local_f8._s_0.Z;
    local_128._s_0.Y = local_f8._s_0.Z * dVar1 - dVar8 * (double)uVar10;
    local_128._s_0.Z = (double)uVar10 * local_108 - dVar1 * local_138;
    if (__real_3e45798ee2308c3a <=
        local_128._s_0.Y * local_128._s_0.Y + local_128._s_0.X * local_128._s_0.X +
        local_128._s_0.Z * local_128._s_0.Z) {
      dVar9 = local_108 * local_138 + dVar1 * (double)uVar10 + dVar8 * local_f8._s_0.Z;
      local_e0._s_0.X = dVar1 - dVar9 * (double)uVar10;
      uVar10 = dVar8 - dVar9 * local_f8._s_0.Z;
      local_128._s_0.X = local_108 - dVar9 * local_138;
      local_128._s_0.Y = (double)0;
      dVar1 = local_128._s_0.X * local_128._s_0.X + local_e0._s_0.X * local_e0._s_0.X +
              (double)uVar10 * (double)uVar10;
      if (__real_3e45798ee0000000 < dVar1) {
        dVar1 = __real_3ff0000000000000 / SQRT(dVar1);
        local_e0._s_0.X = dVar1 * local_e0._s_0.X;
        uVar10 = dVar1 * (double)uVar10;
        local_128._s_0.Y = (double)0;
        local_128._s_0.X = dVar1 * local_128._s_0.X;
      }
    }
    else {
      UE::Math::TVector<double>::FindBestAxisVectors
                ((TVector<double> *)&local_f8._s_0,(TVector<double> *)&local_128._s_0,
                 (TVector<double> *)&local_e0._s_0);
      local_128._s_0.Y = (double)0;
      local_128._s_0.X = local_e0._s_0.Y;
      uVar10 = local_e0._s_0.Z;
    }
  }
  else {
    local_128._8_4_ = __xmm_3ff00000000000000000000000000000._8_4_;
    local_128._s_0.X = (double)__xmm_3ff00000000000000000000000000000._8_8_;
    local_128._12_4_ = __xmm_3ff00000000000000000000000000000._12_4_;
    uVar10 = 0.0;
    local_e0._s_0.X = (double)__xmm_3ff00000000000000000000000000000;
  }
  if (((param_10) && (__real_3f1a36e2eb1c432d < param_12 - param_11)) &&
     (__real_3f1a36e2eb1c432d < dVar4)) {
    dVar1 = (dVar7 / dVar4 - param_11) / (param_12 - param_11);
    if (dVar6 <= dVar1) {
      dVar1 = dVar6;
    }
    if (dVar1 <= 0.0) {
      dVar1 = 0.0;
    }
    dVar1 = dVar1 * (param_12 - dVar6);
    if (__real_3f1a36e2eb1c432d < dVar1) {
      dVar1 = dVar1 + dVar6;
      param_9 = param_9 * dVar1;
      param_8 = param_8 * dVar1;
      dVar4 = dVar4 * dVar1;
    }
  }
  (param_7->field0_0x0)._s_0.X = (double)local_c8._0_8_;
  (param_7->field0_0x0)._s_0.Y = (double)local_c8._8_8_;
  (param_7->field0_0x0)._s_0.Z = local_100;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (param_6->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (param_6->field0_0x0)._s_0.Y = dVar1;
  (param_6->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  if (dVar4 <= dVar7) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    dVar7 = (param_1->field0_0x0)._s_0.Z;
    (param_7->field0_0x0)._s_0.X = dVar13 * dVar4 + (param_1->field0_0x0)._s_0.X;
    (param_7->field0_0x0)._s_0.Y = (double)uVar17 * dVar4 + dVar1;
    (param_7->field0_0x0)._s_0.Z = (double)CONCAT44(uVar15,uVar14) * dVar4 + dVar7;
    dVar1 = (double)CONCAT44(uVar15,uVar14) * param_8 + (param_1->field0_0x0)._s_0.Z;
    dVar7 = (double)uVar17 * param_8 + (param_1->field0_0x0)._s_0.Y;
    dVar13 = dVar13 * param_8 + (param_1->field0_0x0)._s_0.X;
    goto LAB_14238a2e7;
  }
  dVar1 = (param_8 + param_8) * dVar7;
  if (dVar1 == 0.0) {
    dVar1 = 0.0;
    bVar2 = false;
LAB_14238a261:
    dVar7 = dVar1;
    if (dVar6 <= dVar1) {
      dVar7 = dVar6;
    }
  }
  else {
    dVar1 = ((dVar7 * dVar7 + param_8 * param_8) - param_9 * param_9) / dVar1;
    bVar2 = dVar1 < 0.0;
    dVar7 = __real_bff0000000000000;
    if (__real_bff0000000000000 <= dVar1) goto LAB_14238a261;
  }
  dVar1 = acos(dVar7);
  dVar4 = sin(dVar1);
  dVar4 = dVar4 * param_8;
  dVar1 = param_8 * param_8 - dVar4 * dVar4;
  if (0.0 < dVar1) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = dVar1;
    auVar12 = sqrtpd(ZEXT816(0),auVar3);
    dVar11 = auVar12._0_8_;
  }
  if (bVar2) {
    dVar11 = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(dVar11,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  dVar1 = (double)CONCAT44(uVar15,uVar14) * dVar11 + (param_1->field0_0x0)._s_0.Z +
          (double)uVar10 * dVar4;
  dVar7 = (double)uVar17 * dVar11 + (param_1->field0_0x0)._s_0.Y + local_128._s_0.X * dVar4;
  dVar13 = dVar13 * dVar11 + (param_1->field0_0x0)._s_0.X + local_e0._s_0.X * dVar4;
LAB_14238a2e7:
  (param_6->field0_0x0)._s_0.X = dVar13;
  (param_6->field0_0x0)._s_0.Y = dVar7;
  (param_6->field0_0x0)._s_0.Z = dVar1;
  return;
}

// SolveTwoBoneIK @ 14238a350

void __cdecl
AnimationCore::SolveTwoBoneIK
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6,
          TVector<double> *param_7,bool param_8,double param_9,double param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  
  dVar9 = (param_2->field0_0x0)._s_0.X;
  dVar8 = (param_2->field0_0x0)._s_0.Z;
  dVar3 = (param_3->field0_0x0)._s_0.X - dVar9;
  dVar9 = dVar9 - (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_3->field0_0x0)._s_0.Z - dVar8;
  dVar8 = dVar8 - (param_1->field0_0x0)._s_0.Z;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar4 = (param_3->field0_0x0)._s_0.Y - dVar1;
  dVar1 = dVar1 - (param_1->field0_0x0)._s_0.Y;
  auVar5._0_8_ = dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2;
  auVar5._8_8_ = 0;
  auVar7 = sqrtpd(in_XMM3,auVar5);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar1 * dVar1 + dVar9 * dVar9 + dVar8 * dVar8;
  auVar6 = sqrtpd(auVar5,auVar6);
  SolveTwoBoneIK(param_1,param_2,param_3,param_4,param_5,param_6,param_7,auVar6._0_8_,auVar7._0_8_,
                 param_8,param_9,param_10);
  return;
}

// UpdateChainLink @ 14238a4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __cdecl
`AnimationCore::SolveCCDIK'::__l2::Local::UpdateChainLink
          (TArray<FCCDIKChainLink,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          TVector<double> *param_3,bool param_4,TArray<float,TSizedDefaultAllocator<32>_> *param_5)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  undefined1 uVar12;
  TTransform<double> *pTVar13;
  TTransform<double> *this;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar36 [16];
  double dVar42;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar35;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  uint uVar53;
  undefined1 auStackY_348 [32];
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_348;
  uVar17 = param_1->ArrayNum - 1;
  lVar15 = (longlong)param_2;
  if ((((int)uVar17 < 0) || (param_1->ArrayNum <= (int)uVar17)) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6765492871899381778>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\CCDIK.cpp"
                          ,0x12,"Chain.IsValidIndex(TipBoneLinkIndex)"), bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  uVar14 = 0;
  if (param_2 < param_1->ArrayNum) {
    uVar14 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  this = (TTransform<double> *)((param_1->AllocatorInstance).Data + lVar15 * 0xe0);
  uVar14 = 0;
  if ((int)uVar17 < param_1->ArrayNum) {
    uVar14 = ~uVar17 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  dVar10 = __real_3e45798ee0000000;
  dVar34 = (this->Translation).ZW.m128d_f64[0];
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar3 + (longlong)(int)uVar17 * 0xe0 + 0x20;
  dVar42 = *(double *)pFVar2 - (this->Translation).XY.m128d_f64[0];
  dVar35 = SUB168(*(undefined1 (*) [16])(pFVar3 + (longlong)(int)uVar17 * 0xe0 + 0x30),0) - dVar34;
  dVar34 = (param_3->field0_0x0)._s_0.Z - dVar34;
  dVar7 = *(double *)(pFVar2 + 8) - (this->Translation).XY.m128d_f64[1];
  dVar45 = (param_3->field0_0x0)._s_0.X - (this->Translation).XY.m128d_f64[0];
  dVar6 = (param_3->field0_0x0)._s_0.Y - (this->Translation).XY.m128d_f64[1];
  dVar43 = dVar7 * dVar7 + dVar42 * dVar42 + dVar35 * dVar35;
  if (__real_3e45798ee0000000 < dVar43) {
    dVar43 = __real_3ff0000000000000 / SQRT(dVar43);
    dVar35 = dVar35 * dVar43;
    dVar42 = dVar42 * dVar43;
    dVar7 = dVar7 * dVar43;
  }
  dVar43 = dVar45 * dVar45 + dVar6 * dVar6 + dVar34 * dVar34;
  if (__real_3e45798ee0000000 < dVar43) {
    dVar43 = __real_3ff0000000000000 / SQRT(dVar43);
    dVar45 = dVar45 * dVar43;
    dVar6 = dVar6 * dVar43;
    dVar34 = dVar34 * dVar43;
  }
  uVar14 = 0;
  if (param_2 < param_5->ArrayNum) {
    uVar14 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  dVar43 = (double)(*(float *)((param_5->AllocatorInstance).Data + lVar15 * 4) * __real_3c8efa35);
  dVar44 = dVar6 * dVar7 + dVar45 * dVar42 + dVar34 * dVar35;
  dVar22 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar44) && (dVar22 = dVar44, __real_3ff0000000000000 <= dVar44)) {
    dVar22 = __real_3ff0000000000000;
  }
  dVar44 = acos(dVar22);
  dVar9 = __real_4076800000000000;
  dVar22 = FGenericPlatformMath::Fmod(dVar43 + dVar43,__real_4076800000000000);
  if (dVar22 < 0.0) {
    dVar22 = dVar22 + dVar9;
  }
  dVar22 = dVar22 * __real_3fe0000000000000;
  dVar23 = FGenericPlatformMath::Fmod(dVar22 - dVar43,dVar9);
  if (dVar23 < 0.0) {
    dVar23 = dVar23 + dVar9;
  }
  dVar24 = FGenericPlatformMath::Fmod(dVar44 - dVar23,dVar9);
  if (dVar24 < 0.0) {
    dVar24 = dVar24 + dVar9;
  }
  if (__real_4066800000000000 < dVar24) {
    dVar24 = dVar24 - dVar9;
  }
  if (dVar24 <= dVar22) {
    if (dVar24 < (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) ^
                                  __xmm_80000000000000008000000000000000._4_4_,
                                  SUB84(dVar22,0) ^ (uint)__xmm_80000000000000008000000000000000)) {
      dVar44 = dVar23 - dVar22;
    }
  }
  else {
    dVar44 = dVar22 + dVar23;
  }
  dVar22 = FGenericPlatformMath::Fmod(dVar44,dVar9);
  if (dVar22 < 0.0) {
    dVar22 = dVar22 + dVar9;
  }
  if (__real_4066800000000000 < dVar22) {
    dVar22 = dVar22 - dVar9;
  }
  if (__real_3f1a36e2eb1c432d <
      (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    if (param_4) {
      pdVar1 = this[2].Rotation.ZW.m128d_f64 + 1;
      if (dVar43 < *pdVar1 || dVar43 == *pdVar1) {
        return false;
      }
      dVar44 = this[2].Rotation.ZW.m128d_f64[1];
      if ((dVar43 < dVar44 + dVar22) &&
         (dVar22 = dVar43 - dVar44, dVar22 <= __real_3f1a36e2eb1c432d)) {
        return false;
      }
      this[2].Rotation.ZW.m128d_f64[1] = dVar44 + dVar22;
    }
    dVar43 = dVar34 * dVar7 - dVar6 * dVar35;
    dVar34 = dVar45 * dVar35 - dVar34 * dVar42;
    dVar6 = dVar6 * dVar42 - dVar45 * dVar7;
    dVar45 = dVar34 * dVar34 + dVar43 * dVar43 + dVar6 * dVar6;
    if (0.0 < dVar45) {
      if (dVar10 < dVar45) {
        dVar45 = __real_3ff0000000000000 / SQRT(dVar45);
        dVar6 = dVar6 * dVar45;
        dVar34 = dVar34 * dVar45;
        dVar43 = dVar43 * dVar45;
      }
      __libm_sse2_sincos_();
      dVar42 = (this->Rotation).ZW.m128d_f64[0];
      dVar22 = (this->Rotation).ZW.m128d_f64[1];
      dVar44 = (this->Rotation).XY.m128d_f64[0];
      dVar9 = (this->Rotation).XY.m128d_f64[1];
      dVar6 = dVar6 * extraout_XMM0_Qa;
      dVar43 = dVar43 * extraout_XMM0_Qa;
      dVar34 = dVar34 * extraout_XMM0_Qa;
      auVar46._8_8_ = dVar44;
      auVar46._0_8_ = dVar9;
      auVar47._8_4_ = SUB84(dVar6,0);
      auVar47._0_8_ = dVar6;
      auVar47._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      dVar45 = dVar22 * dVar43 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar44 * extraout_XMM0_Qb +
               dVar42 * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar6 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar7 = dVar42 * dVar43 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              dVar9 * extraout_XMM0_Qb +
              dVar22 * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              auVar47._8_8_ * dVar44 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      auVar25._8_4_ = SUB84(dVar7,0);
      auVar25._0_8_ = dVar45;
      auVar25._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      dVar35 = dVar43 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               dVar42 * extraout_XMM0_Qb +
               dVar44 * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar6 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar6 = dVar43 * dVar44 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar22 * extraout_XMM0_Qb +
              dVar9 * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar6 * dVar42 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      auVar36._8_4_ = SUB84(dVar6,0);
      auVar36._0_8_ = dVar35;
      auVar36._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      dVar34 = dVar35 * dVar35 + dVar45 * dVar45;
      dVar42 = auVar36._8_8_ * dVar6 + auVar25._8_8_ * dVar7;
      auVar26._8_4_ = SUB84(dVar42,0);
      auVar26._0_8_ = dVar34;
      auVar26._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
      auVar27._0_8_ = auVar26._8_8_ + dVar34;
      auVar27._8_8_ = dVar34 + dVar42;
      auVar47 = sqrtpd(auVar46,auVar27);
      uVar18 = -(ulonglong)(dVar10 <= auVar27._0_8_);
      uVar19 = -(ulonglong)(dVar10 <= auVar27._8_8_);
      uVar14 = (uint)(uVar18 >> 0x20);
      uVar53 = (uint)(uVar19 >> 0x20);
      auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar47);
      auVar50._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      auVar50._4_4_ =
           ~uVar14 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      auVar50._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      auVar50._12_4_ =
           ~uVar53 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      auVar38._0_8_ = uVar18 & (ulonglong)(auVar37._0_8_ * dVar35);
      uVar8 = uVar19 & (ulonglong)(auVar37._8_8_ * dVar6);
      auVar38._8_4_ = (undefined4)uVar8;
      auVar38._12_4_ = (undefined4)(uVar8 >> 0x20);
      auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar47);
      auVar39._0_8_ = (ulonglong)(auVar37._0_8_ * dVar45) & uVar18;
      uVar8 = (ulonglong)(auVar37._8_8_ * dVar7) & uVar19;
      auVar39._8_4_ = (undefined4)uVar8;
      auVar39._12_4_ = (undefined4)(uVar8 >> 0x20);
      auVar37._4_4_ =
           ~uVar14 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar37._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar37._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar37._12_4_ =
           ~uVar53 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      *(undefined1 (*) [16])(this->Rotation).XY.m128d_f64 = auVar39 | auVar37;
      *(undefined1 (*) [16])(this->Rotation).ZW.m128d_f64 = auVar50 | auVar38;
      if (0 < param_2) {
        uVar14 = 0;
        if ((int)(param_2 - 1U) < param_1->ArrayNum) {
          uVar14 = ~(param_2 - 1U) >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          uVar12 = (*pcVar4)();
          return (bool)uVar12;
        }
        pTVar13 = UE::Math::TTransform<double>::GetRelativeTransform
                            (this,&local_148,
                             (TTransform<double> *)
                             ((param_1->AllocatorInstance).Data + lVar15 * 0xe0 + -0xe0));
        dVar6 = (pTVar13->Rotation).XY.m128d_f64[1];
        this[1].Rotation.XY.m128d_f64[0] = (pTVar13->Rotation).XY.m128d_f64[0];
        this[1].Rotation.XY.m128d_f64[1] = dVar6;
        dVar6 = (pTVar13->Rotation).ZW.m128d_f64[1];
        this[1].Rotation.ZW.m128d_f64[0] = (pTVar13->Rotation).ZW.m128d_f64[0];
        this[1].Rotation.ZW.m128d_f64[1] = dVar6;
        dVar6 = (pTVar13->Translation).XY.m128d_f64[1];
        this[1].Translation.XY.m128d_f64[0] = (pTVar13->Translation).XY.m128d_f64[0];
        this[1].Translation.XY.m128d_f64[1] = dVar6;
        dVar6 = (pTVar13->Translation).ZW.m128d_f64[1];
        this[1].Translation.ZW.m128d_f64[0] = (pTVar13->Translation).ZW.m128d_f64[0];
        this[1].Translation.ZW.m128d_f64[1] = dVar6;
        dVar6 = (pTVar13->Scale3D).XY.m128d_f64[1];
        this[1].Scale3D.XY.m128d_f64[0] = (pTVar13->Scale3D).XY.m128d_f64[0];
        this[1].Scale3D.XY.m128d_f64[1] = dVar6;
        dVar6 = (pTVar13->Scale3D).ZW.m128d_f64[1];
        this[1].Scale3D.ZW.m128d_f64[0] = (pTVar13->Scale3D).ZW.m128d_f64[0];
        this[1].Scale3D.ZW.m128d_f64[1] = dVar6;
        dVar6 = this[1].Rotation.XY.m128d_f64[0];
        dVar45 = this[1].Rotation.XY.m128d_f64[1];
        dVar34 = this[1].Rotation.ZW.m128d_f64[0];
        dVar7 = this[1].Rotation.ZW.m128d_f64[1];
        dVar35 = dVar34 * dVar34 + dVar6 * dVar6;
        dVar42 = dVar7 * dVar7 + dVar45 * dVar45;
        auVar28._8_4_ = SUB84(dVar42,0);
        auVar28._0_8_ = dVar35;
        auVar28._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
        auVar29._0_8_ = auVar28._8_8_ + dVar35;
        auVar29._8_8_ = dVar35 + dVar42;
        auVar47 = sqrtpd(auVar47,auVar29);
        uVar18 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar29._0_8_);
        uVar20 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar29._8_8_);
        uVar19 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar29._0_8_);
        uVar21 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar29._8_8_);
        auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar47);
        auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar47);
        auVar30._0_8_ = uVar19 & (ulonglong)(auVar37._0_8_ * dVar6);
        uVar8 = uVar21 & (ulonglong)(auVar37._8_8_ * dVar45);
        auVar30._8_4_ = (undefined4)uVar8;
        auVar30._12_4_ = (undefined4)(uVar8 >> 0x20);
        auVar51._0_8_ = uVar18 & (ulonglong)(auVar47._0_8_ * dVar34);
        uVar8 = uVar20 & (ulonglong)(auVar47._8_8_ * dVar7);
        auVar51._8_4_ = (undefined4)uVar8;
        auVar51._12_4_ = (undefined4)(uVar8 >> 0x20);
        auVar5._4_4_ = ~(uint)(uVar19 >> 0x20) &
                       GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar5._0_4_ = ~(uint)uVar19 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar5._8_4_ = ~(uint)uVar21 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar5._12_4_ =
             ~(uint)(uVar21 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        auVar40._0_4_ = ~(uint)uVar18 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        auVar40._4_4_ =
             ~(uint)(uVar18 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        auVar40._8_4_ = ~(uint)uVar20 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        auVar40._12_4_ =
             ~(uint)(uVar20 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        *(undefined1 (*) [16])this[1].Rotation.XY.m128d_f64 = auVar30 | auVar5;
        *(undefined1 (*) [16])this[1].Rotation.ZW.m128d_f64 = auVar51 | auVar40;
      }
      local_208.Rotation.XY.m128d_f64[0] = (this->Rotation).XY.m128d_f64[0];
      local_208.Rotation.XY.m128d_f64[1] = (this->Rotation).XY.m128d_f64[1];
      uVar14 = param_2 + 1;
      local_208.Rotation.ZW.m128d_f64[0] = (this->Rotation).ZW.m128d_f64[0];
      local_208.Rotation.ZW.m128d_f64[1] = (this->Rotation).ZW.m128d_f64[1];
      local_208.Translation.XY.m128d_f64[0] = (this->Translation).XY.m128d_f64[0];
      local_208.Translation.XY.m128d_f64[1] = (this->Translation).XY.m128d_f64[1];
      local_208.Translation.ZW.m128d_f64[0] = (this->Translation).ZW.m128d_f64[0];
      local_208.Translation.ZW.m128d_f64[1] = (this->Translation).ZW.m128d_f64[1];
      local_208.Scale3D.XY.m128d_f64[0] = (this->Scale3D).XY.m128d_f64[0];
      local_208.Scale3D.XY.m128d_f64[1] = (this->Scale3D).XY.m128d_f64[1];
      local_208.Scale3D.ZW.m128d_f64[0] = (this->Scale3D).ZW.m128d_f64[0];
      local_208.Scale3D.ZW.m128d_f64[1] = (this->Scale3D).ZW.m128d_f64[1];
      lVar15 = (longlong)(int)uVar14;
      if (lVar15 <= (int)uVar17) {
        lVar16 = lVar15 * 0xe0;
        lVar15 = ((int)uVar17 - lVar15) + 1;
        do {
          uVar17 = 0;
          if ((int)uVar14 < param_1->ArrayNum) {
            uVar17 = ~uVar14 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar4 = (code *)swi(3);
            uVar12 = (*pcVar4)();
            return (bool)uVar12;
          }
          pFVar2 = (param_1->AllocatorInstance).Data;
          local_1a8.Rotation.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar16 + 0x60);
          local_1a8.Rotation.XY.m128d_f64[1] = *(double *)(pFVar2 + lVar16 + 0x60 + 8);
          local_1a8.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar16 + 0x70);
          local_1a8.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar2 + lVar16 + 0x70 + 8);
          local_1a8.Translation.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar16 + 0x80);
          local_1a8.Translation.XY.m128d_f64[1] = *(double *)(pFVar2 + lVar16 + 0x80 + 8);
          local_1a8.Translation.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar16 + 0x90);
          local_1a8.Translation.ZW.m128d_f64[1] = *(double *)(pFVar2 + lVar16 + 0x90 + 8);
          local_1a8.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar16 + 0xa0);
          local_1a8.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar2 + lVar16 + 0xa0 + 8);
          local_1a8.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar16 + 0xb0);
          local_1a8.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar2 + lVar16 + 0xb0 + 8);
          local_268.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_268.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_268.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_268.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_268.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_268.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_268.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_268.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_268.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_268.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_268.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_268.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply(&local_268,&local_1a8,&local_208);
          *(double *)(pFVar2 + lVar16) = local_268.Rotation.XY.m128d_f64[0];
          *(double *)(pFVar2 + lVar16 + 8) = local_268.Rotation.XY.m128d_f64[1];
          *(double *)(pFVar2 + lVar16 + 0x10) = local_268.Rotation.ZW.m128d_f64[0];
          *(double *)(pFVar2 + lVar16 + 0x10 + 8) = local_268.Rotation.ZW.m128d_f64[1];
          *(double *)(pFVar2 + lVar16 + 0x20) = local_268.Translation.XY.m128d_f64[0];
          *(double *)(pFVar2 + lVar16 + 0x20 + 8) = local_268.Translation.XY.m128d_f64[1];
          *(double *)(pFVar2 + lVar16 + 0x30) = local_268.Translation.ZW.m128d_f64[0];
          *(double *)(pFVar2 + lVar16 + 0x30 + 8) = local_268.Translation.ZW.m128d_f64[1];
          *(double *)(pFVar2 + lVar16 + 0x40) = local_268.Scale3D.XY.m128d_f64[0];
          *(double *)(pFVar2 + lVar16 + 0x40 + 8) = local_268.Scale3D.XY.m128d_f64[1];
          *(double *)(pFVar2 + lVar16 + 0x50) = local_268.Scale3D.ZW.m128d_f64[0];
          *(double *)(pFVar2 + lVar16 + 0x50 + 8) = local_268.Scale3D.ZW.m128d_f64[1];
          dVar6 = *(double *)(pFVar2 + lVar16);
          dVar45 = *(double *)(pFVar2 + lVar16 + 8);
          dVar34 = *(double *)(pFVar2 + lVar16 + 0x10);
          dVar7 = *(double *)(pFVar2 + lVar16 + 0x10 + 8);
          auVar41._0_8_ = dVar34 * dVar34 + dVar6 * dVar6;
          auVar41._8_8_ = dVar7 * dVar7 + dVar45 * dVar45;
          auVar31._8_4_ = SUB84(auVar41._8_8_,0);
          auVar31._0_8_ = auVar41._0_8_;
          auVar31._12_4_ = (int)((ulonglong)auVar41._8_8_ >> 0x20);
          auVar32._0_8_ = auVar31._8_8_ + auVar41._0_8_;
          auVar32._8_8_ = auVar41._0_8_ + auVar41._8_8_;
          auVar47 = sqrtpd(auVar41,auVar32);
          uVar18 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar32._0_8_);
          uVar20 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar32._8_8_);
          uVar19 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar32._0_8_);
          uVar21 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar32._8_8_);
          auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar47);
          auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar47);
          auVar33._0_8_ = (ulonglong)(auVar37._0_8_ * dVar6) & uVar19;
          uVar8 = uVar21 & (ulonglong)(auVar37._8_8_ * dVar45);
          auVar33._8_4_ = (undefined4)uVar8;
          auVar33._12_4_ = (undefined4)(uVar8 >> 0x20);
          auVar52._0_4_ = ~(uint)uVar19 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar52._4_4_ =
               ~(uint)(uVar19 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar52._8_4_ = ~(uint)uVar21 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar52._12_4_ =
               ~(uint)(uVar21 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          auVar49._0_8_ = uVar18 & (ulonglong)(auVar47._0_8_ * dVar34);
          uVar8 = uVar20 & (ulonglong)(auVar47._8_8_ * dVar7);
          auVar49._8_4_ = (undefined4)uVar8;
          auVar49._12_4_ = (undefined4)(uVar8 >> 0x20);
          auVar48._0_4_ = ~(uint)uVar18 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar48._4_4_ =
               ~(uint)(uVar18 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar48._8_4_ = ~(uint)uVar20 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar48._12_4_ =
               ~(uint)(uVar20 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          *(undefined1 (*) [16])(pFVar2 + lVar16) = auVar33 | auVar52;
          *(undefined1 (*) [16])(pFVar2 + lVar16 + 0x10) = auVar49 | auVar48;
          local_208.Rotation.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar16);
          local_208.Rotation.XY.m128d_f64[1] = *(double *)(pFVar2 + lVar16 + 8);
          local_208.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar16 + 0x10);
          local_208.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar2 + lVar16 + 0x10 + 8);
          local_208.Translation.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar16 + 0x20);
          local_208.Translation.XY.m128d_f64[1] = *(double *)(pFVar2 + lVar16 + 0x20 + 8);
          uVar14 = uVar14 + 1;
          local_208.Translation.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar16 + 0x30);
          local_208.Translation.ZW.m128d_f64[1] = *(double *)(pFVar2 + lVar16 + 0x30 + 8);
          local_208.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar16 + 0x40);
          local_208.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar2 + lVar16 + 0x40 + 8);
          local_208.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar16 + 0x50);
          local_208.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar2 + lVar16 + 0x50 + 8);
          lVar16 = lVar16 + 0xe0;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      return true;
    }
  }
  return false;
}

// Z_Construct_UClass_UAnimationDataSourceRegistry_NoRegister @ 14238af80

UClass * __cdecl Z_Construct_UClass_UAnimationDataSourceRegistry_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationDataSourceRegistry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationCore",L"AnimationDataSourceRegistry",
               &Z_Registration_Info_UClass_UAnimationDataSourceRegistry.InnerSingleton,
               UAnimationDataSourceRegistry::StaticRegisterNativesUAnimationDataSourceRegistry,0x78,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimationDataSourceRegistry>,
               InternalVTableHelperCtorCaller<UAnimationDataSourceRegistry>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationDataSourceRegistry.InnerSingleton;
}

// Z_Construct_UEnum_AnimationCore_EEulerRotationOrder @ 14238b030

UEnum * __cdecl Z_Construct_UEnum_AnimationCore_EEulerRotationOrder(void)

{
  if (Z_Registration_Info_UEnum_EEulerRotationOrder.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEulerRotationOrder.InnerSingleton,
               &Z_Construct_UEnum_AnimationCore_EEulerRotationOrder_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEulerRotationOrder.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAimConstraintDescription @ 14238b070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAimConstraintDescription(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAimConstraintDescription.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAimConstraintDescription.InnerSingleton,
               &Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAimConstraintDescription.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAimConstraintDescription.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCCDIKChainLink @ 14238b0f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCCDIKChainLink(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCCDIKChainLink.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCCDIKChainLink.InnerSingleton,
               &Z_Construct_UScriptStruct_FCCDIKChainLink_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCCDIKChainLink.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCCDIKChainLink.InnerSingleton;
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

// Z_Construct_UScriptStruct_FConstraintData @ 14238b170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConstraintData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConstraintData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConstraintData.InnerSingleton,
               &Z_Construct_UScriptStruct_FConstraintData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConstraintData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConstraintData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FConstraintOffset @ 14238b1f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConstraintOffset(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConstraintOffset.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConstraintOffset.InnerSingleton,
               &Z_Construct_UScriptStruct_FConstraintOffset_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConstraintOffset.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConstraintOffset.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEulerTransform @ 14238b270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEulerTransform(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEulerTransform.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEulerTransform.InnerSingleton,
               &Z_Construct_UScriptStruct_FEulerTransform_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEulerTransform.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEulerTransform.InnerSingleton;
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

// Z_Construct_UScriptStruct_FFABRIKChainLink @ 14238b2f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFABRIKChainLink(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFABRIKChainLink.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFABRIKChainLink.InnerSingleton,
               &Z_Construct_UScriptStruct_FFABRIKChainLink_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFABRIKChainLink.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFABRIKChainLink.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNodeChain @ 14238b370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNodeChain(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNodeChain.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNodeChain.InnerSingleton,
               &Z_Construct_UScriptStruct_FNodeChain_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNodeChain.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNodeChain.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNodeHierarchyWithUserData @ 14238b3f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNodeHierarchyWithUserData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNodeHierarchyWithUserData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNodeHierarchyWithUserData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNodeHierarchyWithUserData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNodeHierarchyWithUserData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTransformConstraint @ 14238b470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTransformConstraint(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTransformConstraint.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTransformConstraint.InnerSingleton,
               &Z_Construct_UScriptStruct_FTransformConstraint_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTransformConstraint.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FTransformConstraint.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTransformConstraintDescription @ 14238b4f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTransformConstraintDescription(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTransformConstraintDescription.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTransformConstraintDescription.InnerSingleton,
               &Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTransformConstraintDescription.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTransformConstraintDescription.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTransformFilter @ 14238b570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTransformFilter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTransformFilter.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTransformFilter.InnerSingleton,
               &Z_Construct_UScriptStruct_FTransformFilter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTransformFilter.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTransformFilter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTransformNoScale @ 14238b5f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTransformNoScale(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTransformNoScale.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTransformNoScale.InnerSingleton,
               &Z_Construct_UScriptStruct_FTransformNoScale_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTransformNoScale.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTransformNoScale.InnerSingleton;
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

// IMPLEMENT_MODULE_AnimationCore @ 14238b670

void __cdecl IMPLEMENT_MODULE_AnimationCore(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'FBoneWeightTestBasicAutomationTestInstance'' @ 1503552a0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FBoneWeightTestBasicAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FBoneWeightTestBasicAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FBoneWeightsSettingsTestAutomationTestInstance'' @ 1503552c0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FBoneWeightsSettingsTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FBoneWeightsSettingsTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FBoneWeightsTestBasicAutomationTestInstance'' @ 1503552e0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FBoneWeightsTestBasicAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FBoneWeightsTestBasicAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FBoneWeightsTestBlendAutomationTestInstance'' @ 150355300

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FBoneWeightsTestBlendAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FBoneWeightsTestBlendAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FBoneWeightsTestCreateAutomationTestInstance'' @ 150355320

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FBoneWeightsTestCreateAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FBoneWeightsTestCreateAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'LogAnimationCore'' @ 150355340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAnimationCore__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAnimationCore);
  return;
}

