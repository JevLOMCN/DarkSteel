// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimLLRun
// Functions: 28

// `dynamic_initializer_for_'LogAnimDistanceMatchingLibrary'' @ 1411cba10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAnimDistanceMatchingLibrary__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAnimDistanceMatchingLibrary,L"LogAnimDistanceMatchingLibrary",
             Verbose,All);
  atexit(_dynamic_atexit_destructor_for__LogAnimDistanceMatchingLibrary__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAnimationLocomotionLibraryRuntime'' @ 1411cba50

void __cdecl _dynamic_initializer_for__ModuleRegistrantAnimationLocomotionLibraryRuntime__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AnimationLocomotionLibraryRuntime";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AnimationLocomotionLibraryRuntime",0x21);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FAnimationLocomotionLibraryRuntimeModule>::
             InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimCharacterMovementLibrary_h__Script_AnimationLocomotionLibraryRuntime_3212942826'' @ 1411cbaa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimCharacterMovementLibrary_h__Script_AnimationLocomotionLibraryRuntime_3212942826__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationLocomotionLibraryRuntime",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimCharacterMovementLibrary_h__Script_AnimationLocomotionLibraryRuntime_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimDistanceMatchingLibrary_h__Script_AnimationLocomotionLibraryRuntime_3491436052'' @ 1411cbae0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimDistanceMatchingLibrary_h__Script_AnimationLocomotionLibraryRuntime_3491436052__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationLocomotionLibraryRuntime",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimDistanceMatchingLibrary_h__Script_AnimationLocomotionLibraryRuntime_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AnimationLocomotionLibraryRuntime'' @ 1411cbb20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AnimationLocomotionLibraryRuntime__
          (void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x9f67279b;
  local_res8[0].DeclarationsHash = 0x88bd5a30;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AnimationLocomotionLibraryRuntime,
             L"/Script/AnimationLocomotionLibraryRuntime",
             &Z_Registration_Info_UPackage__Script_AnimationLocomotionLibraryRuntime,local_res8);
  return;
}

// Z_Construct_UPackage__Script_AnimationLocomotionLibraryRuntime @ 14a732f10

UPackage * __cdecl Z_Construct_UPackage__Script_AnimationLocomotionLibraryRuntime(void)

{
  if (Z_Registration_Info_UPackage__Script_AnimationLocomotionLibraryRuntime.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AnimationLocomotionLibraryRuntime.
                OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AnimationLocomotionLibraryRuntime.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14a732f70

void * __thiscall
FAnimationLocomotionLibraryRuntimeModule::_scalar_deleting_destructor_
          (FAnimationLocomotionLibraryRuntimeModule *this,uint param_1)

{
  *this = (FAnimationLocomotionLibraryRuntimeModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UAnimCharacterMovementLibrary @ 14a733070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimCharacterMovementLibrary(void)

{
  if (Z_Registration_Info_UClass_UAnimCharacterMovementLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimCharacterMovementLibrary.OuterSingleton,
               &Z_Construct_UClass_UAnimCharacterMovementLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimCharacterMovementLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation @ 14a7330b0

UFunction * __cdecl
Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseSeparateBrakingFriction_SetBit @ 14a7330f0

void __cdecl
Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::
NewProp_bUseSeparateBrakingFriction_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation @ 14a733100

UFunction * __cdecl
Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAnimDistanceMatchingLibrary @ 14a733200

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimDistanceMatchingLibrary(void)

{
  if (Z_Registration_Info_UClass_UAnimDistanceMatchingLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimDistanceMatchingLibrary.OuterSingleton,
               &Z_Construct_UClass_UAnimDistanceMatchingLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimDistanceMatchingLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching @ 14a733240

UFunction * __cdecl
Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget @ 14a733280

UFunction * __cdecl Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed @ 14a7332c0

UFunction * __cdecl Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// InternalConstructor<UAnimCharacterMovementLibrary> @ 14a733300

void __cdecl InternalConstructor<UAnimCharacterMovementLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UAnimCharacterMovementLibrary__6B_;
  }
  return;
}

// InternalConstructor<UAnimDistanceMatchingLibrary> @ 14a733330

void __cdecl InternalConstructor<UAnimDistanceMatchingLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UAnimDistanceMatchingLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAnimCharacterMovementLibrary> @ 14a733360

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimCharacterMovementLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimCharacterMovementLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimCharacterMovementLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimDistanceMatchingLibrary> @ 14a733410

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimDistanceMatchingLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimDistanceMatchingLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimDistanceMatchingLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// `scalar_deleting_destructor' @ 14a733c80

void * __thiscall
UAnimCharacterMovementLibrary::_scalar_deleting_destructor_
          (UAnimCharacterMovementLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimCharacterMovementLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a733ce0

void * __thiscall
UAnimDistanceMatchingLibrary::_scalar_deleting_destructor_
          (UAnimDistanceMatchingLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimDistanceMatchingLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAnimCharacterMovementLibrary @ 14a733f00

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimCharacterMovementLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimDistanceMatchingLibrary @ 14a733f10

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimDistanceMatchingLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimationLocomotionLibraryRuntime_init @ 14a733f20

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimationLocomotionLibraryRuntime_init(void)

{
  return;
}

// Z_Construct_UClass_UAnimCharacterMovementLibrary_NoRegister @ 14a734980

UClass * __cdecl Z_Construct_UClass_UAnimCharacterMovementLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCharacterMovementLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationLocomotionLibraryRuntime",L"AnimCharacterMovementLibrary",
               &Z_Registration_Info_UClass_UAnimCharacterMovementLibrary.InnerSingleton,
               UAnimCharacterMovementLibrary::StaticRegisterNativesUAnimCharacterMovementLibrary,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimCharacterMovementLibrary>,
               InternalVTableHelperCtorCaller<UAnimCharacterMovementLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCharacterMovementLibrary.InnerSingleton;
}

// Z_Construct_UClass_UAnimDistanceMatchingLibrary_NoRegister @ 14a734a40

UClass * __cdecl Z_Construct_UClass_UAnimDistanceMatchingLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimDistanceMatchingLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationLocomotionLibraryRuntime",L"AnimDistanceMatchingLibrary",
               &Z_Registration_Info_UClass_UAnimDistanceMatchingLibrary.InnerSingleton,
               UAnimDistanceMatchingLibrary::StaticRegisterNativesUAnimDistanceMatchingLibrary,0x28,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimDistanceMatchingLibrary>,
               InternalVTableHelperCtorCaller<UAnimDistanceMatchingLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimDistanceMatchingLibrary.InnerSingleton;
}

// IMPLEMENT_MODULE_AnimationLocomotionLibraryRuntime @ 14a735760

void __cdecl IMPLEMENT_MODULE_AnimationLocomotionLibraryRuntime(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogAnimDistanceMatchingLibrary'' @ 1504208a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAnimDistanceMatchingLibrary__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAnimDistanceMatchingLibrary);
  return;
}

