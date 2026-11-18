// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 279

// `dynamic_initializer_for_'CVarDebugDependencies'' @ 1410981c0

void __cdecl DependencyLocals::_dynamic_initializer_for__CVarDebugDependencies__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDebugDependencies,L"Constraints.DebugDependencies",&bDebugDependencies,
             L"Print debug info about dependencies when creating a new constraint.",0);
  atexit(_dynamic_atexit_destructor_for__CVarDebugDependencies__);
  return;
}

// `dynamic_initializer_for_'CVarDebugEvaluationGraph'' @ 141098210

void __cdecl ConstraintsEvaluationGraph::_dynamic_initializer_for__CVarDebugEvaluationGraph__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDebugEvaluationGraph,L"Constraints.DebugEvaluationGraph",&bDebugGraph,
             L"Print debug info about constraints evaluation graph.",0);
  atexit(_dynamic_atexit_destructor_for__CVarDebugEvaluationGraph__);
  return;
}

// `dynamic_initializer_for_'CVarLogNewEvaluation'' @ 141098260

void __cdecl UE::Anim::_dynamic_initializer_for__CVarLogNewEvaluation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLogNewEvaluation,L"Constraints.LogNewEvaluation",&bLogNewEvaluation,
             L"Log new constraints\' evaluation scheme.",0);
  atexit(_dynamic_atexit_destructor_for__CVarLogNewEvaluation__);
  return;
}

// `dynamic_initializer_for_'CVarNewEvaluation'' @ 1410982b0

void __cdecl TransformableHandleUtils::_dynamic_initializer_for__CVarNewEvaluation__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNewEvaluation,L"Constraints.NewEvaluation",&bNewEvaluation,
             L"Set constraints new evaluation scheme.",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarNewEvaluation__);
  return;
}

// `dynamic_initializer_for_'CVarSkeletalMeshTickingMode'' @ 1410983f0

void __cdecl TransformableHandleUtils::_dynamic_initializer_for__CVarSkeletalMeshTickingMode__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkeletalMeshTickingMode,L"Constraints.SkeletalMesh.TickingMode",
             &SkeletalMeshTickingMode,
             L"Constraint skeletal mesh ticking mode ([0, 2] - default: 2):\n0 - do not tick any related skeletal mesh\n1 - only tick the constrained skeletal mesh\n2 - tick all the skeletal meshes attached to the constrained actor\n"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarSkeletalMeshTickingMode__);
  return;
}

// `dynamic_initializer_for_'CVarUseEvaluationGraph'' @ 141098530

void __cdecl ConstraintsEvaluationGraph::_dynamic_initializer_for__CVarUseEvaluationGraph__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseEvaluationGraph,L"Constraints.UseEvaluationGraph",&bUseEvaluationGraph,
             L"Use Evaluation Graph to update constraints when manipulating.",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseEvaluationGraph__);
  return;
}

// `dynamic_initializer_for_'LogConstraints'' @ 141098580

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogConstraints__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogConstraints,L"LogConstraints",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogConstraints__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantConstraints'' @ 1410985c0

void __cdecl _dynamic_initializer_for__ModuleRegistrantConstraints__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Constraints";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Constraints",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FConstraintsModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h__Script_Constraints_1248976426'' @ 141098610

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h__Script_Constraints_1248976426__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Constraints",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h__Script_Constraints_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h__Script_Constraints_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintChannel_h__Script_Constraints_4060362698'' @ 141098660

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintChannel_h__Script_Constraints_4060362698__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Constraints",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintChannel_h__Script_Constraints_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsActor_h__Script_Constraints_2925394697'' @ 1410986a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsActor_h__Script_Constraints_2925394697__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Constraints",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsActor_h__Script_Constraints_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h__Script_Constraints_3867203734'' @ 1410986e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h__Script_Constraints_3867203734__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Constraints",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h__Script_Constraints_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h__Script_Constraints_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h__Script_Constraints_4289838698'' @ 141098730

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h__Script_Constraints_4289838698__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Constraints",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h__Script_Constraints_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_Transform_TransformConstraint_h__Script_Constraints_1234440471'' @ 141098770

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_Transform_TransformConstraint_h__Script_Constraints_1234440471__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Constraints",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_Transform_TransformConstraint_h__Script_Constraints_Statics
             ::ClassInfo,6,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_Transform_TransformableHandle_h__Script_Constraints_3768542673'' @ 1410987b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_Transform_TransformableHandle_h__Script_Constraints_3768542673__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Constraints",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_Transform_TransformableHandle_h__Script_Constraints_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_Transform_TransformableHandle_h__Script_Constraints_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_Constraints'' @ 141098800

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_Constraints__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xfc1e1c72;
  local_res8[0].DeclarationsHash = 0x3a263fa5;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_Constraints,L"/Script/Constraints",
             &Z_Registration_Info_UPackage__Script_Constraints,local_res8);
  return;
}

// Z_Construct_UClass_UConstraintsManager @ 14648d2e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UConstraintsManager(void)

{
  if (Z_Registration_Info_UClass_UConstraintsManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UConstraintsManager.OuterSingleton,
               &Z_Construct_UClass_UConstraintsManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UConstraintsManager.OuterSingleton;
}

// Z_Construct_UClass_UTickableConstraint @ 14648d320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTickableConstraint(void)

{
  if (Z_Registration_Info_UClass_UTickableConstraint.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTickableConstraint.OuterSingleton,
               &Z_Construct_UClass_UTickableConstraint_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTickableConstraint.OuterSingleton;
}

// NewStructOps @ 14648d360

void * __cdecl Z_Construct_UScriptStruct_FConstraintTickFunction_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConstraintTickFunction,&UE::CoreUObject::Private::Construct<FConstraintTickFunction>,&UE::CoreUObject::Private::ConstructForTests<FConstraintTickFunction>,&UE::CoreUObject::Private::Destruct<FConstraintTickFunction>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_Active_SetBit @ 14648d460

void __cdecl Z_Construct_UClass_UTickableConstraint_Statics::NewProp_Active_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bValid_SetBit @ 14648d470

void __cdecl Z_Construct_UClass_UTickableConstraint_Statics::NewProp_bValid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// Z_Construct_UClass_UTransformableComponentHandle @ 14648d480

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTransformableComponentHandle(void)

{
  if (Z_Registration_Info_UClass_UTransformableComponentHandle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTransformableComponentHandle.OuterSingleton,
               &Z_Construct_UClass_UTransformableComponentHandle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTransformableComponentHandle.OuterSingleton;
}

// Z_Construct_UClass_UTransformableHandle @ 14648d4c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTransformableHandle(void)

{
  if (Z_Registration_Info_UClass_UTransformableHandle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTransformableHandle.OuterSingleton,
               &Z_Construct_UClass_UTransformableHandle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTransformableHandle.OuterSingleton;
}

// EHandleEvent_StaticEnum @ 14648d500

UEnum * __cdecl EHandleEvent_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EHandleEvent.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Constraints();
    Z_Registration_Info_UEnum_EHandleEvent.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Constraints_EHandleEvent,(UObject *)pUVar1,L"EHandleEvent")
    ;
  }
  return Z_Registration_Info_UEnum_EHandleEvent.OuterSingleton;
}

// Z_Construct_UClass_UTickableTransformConstraint_NoRegister @ 14648d540

UClass * __cdecl Z_Construct_UClass_UTickableTransformConstraint_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTickableTransformConstraint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TickableTransformConstraint",
               &Z_Registration_Info_UClass_UTickableTransformConstraint.InnerSingleton,
               UTickableTransformConstraint::StaticRegisterNativesUTickableTransformConstraint,0xb0,
               8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTickableTransformConstraint>,
               InternalVTableHelperCtorCaller<UTickableTransformConstraint>,local_res8,
               UTickableConstraint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTickableTransformConstraint.InnerSingleton;
}

// NewProp_bDoNotCompensate_SetBit @ 14648d6c0

void __cdecl
Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics
::NewProp_bDoNotCompensate_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature @ 14648db80

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature @ 14648dbc0

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature @ 14648dc00

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature @ 14648dc40

UFunction * __cdecl
Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUSparseDelegateFunction
              (&ReturnFunction,
               &Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_Constraints @ 14648dd40

UPackage * __cdecl Z_Construct_UPackage__Script_Constraints(void)

{
  if (Z_Registration_Info_UPackage__Script_Constraints.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_Constraints.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_Constraints.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14648dfd0

void * __thiscall
FMovieSceneConstraintChannel::_scalar_deleting_destructor_
          (FMovieSceneConstraintChannel *this,uint param_1)

{
  FMovieSceneBoolChannel::~FMovieSceneBoolChannel((FMovieSceneBoolChannel *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// Z_Construct_UClass_UTickableConstraint_NoRegister @ 14648e010

UClass * __cdecl Z_Construct_UClass_UTickableConstraint_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTickableConstraint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TickableConstraint",
               &Z_Registration_Info_UClass_UTickableConstraint.InnerSingleton,
               UTickableConstraint::StaticRegisterNativesUTickableConstraint,0x90,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTickableConstraint>,
               InternalVTableHelperCtorCaller<UTickableConstraint>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTickableConstraint.InnerSingleton;
}

// Z_Construct_UClass_UConstraintsManager_NoRegister @ 14648e0c0

UClass * __cdecl Z_Construct_UClass_UConstraintsManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstraintsManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"ConstraintsManager",
               &Z_Registration_Info_UClass_UConstraintsManager.InnerSingleton,
               UConstraintsManager::StaticRegisterNativesUConstraintsManager,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UConstraintsManager>,
               InternalVTableHelperCtorCaller<UConstraintsManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstraintsManager.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneConstraintChannel @ 14648e1f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneConstraintChannel(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneConstraintChannel.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneConstraintChannel.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneConstraintChannel_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneConstraintChannel.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneConstraintChannel.InnerSingleton;
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

// NewStructOps @ 14648e270

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneConstraintChannel_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x120;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneConstraintChannel,&UE::CoreUObject::Private::Construct<FMovieSceneConstraintChannel>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneConstraintChannel>,&UE::CoreUObject::Private::Destruct<FMovieSceneConstraintChannel>,&UE::CoreUObject::Private::Copy<FMovieSceneConstraintChannel>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FMovieSceneConstraintChannel>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14648e360

void * __cdecl Z_Construct_UScriptStruct_FConstraintAndActiveChannel_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x128;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConstraintAndActiveChannel,&UE::CoreUObject::Private::Construct<FConstraintAndActiveChannel>,&UE::CoreUObject::Private::ConstructForTests<FConstraintAndActiveChannel>,&UE::CoreUObject::Private::Destruct<FConstraintAndActiveChannel>,&UE::CoreUObject::Private::Copy<FConstraintAndActiveChannel>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_AConstraintsActor @ 14648e520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AConstraintsActor(void)

{
  if (Z_Registration_Info_UClass_AConstraintsActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AConstraintsActor.OuterSingleton,
               &Z_Construct_UClass_AConstraintsActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AConstraintsActor.OuterSingleton;
}

// Z_Construct_UClass_UConstraintSubsystem_NoRegister @ 14648e560

UClass * __cdecl Z_Construct_UClass_UConstraintSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstraintSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"ConstraintSubsystem",
               &Z_Registration_Info_UClass_UConstraintSubsystem.InnerSingleton,
               UConstraintSubsystem::StaticRegisterNativesUConstraintSubsystem,0xa0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UConstraintSubsystem>,
               InternalVTableHelperCtorCaller<UConstraintSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstraintSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UTransformableHandle_NoRegister @ 14648e980

UClass * __cdecl Z_Construct_UClass_UTransformableHandle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransformableHandle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TransformableHandle",
               &Z_Registration_Info_UClass_UTransformableHandle.InnerSingleton,
               UTransformableHandle::StaticRegisterNativesUTransformableHandle,0x68,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTransformableHandle>,
               InternalVTableHelperCtorCaller<UTransformableHandle>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransformableHandle.InnerSingleton;
}

// Z_Construct_UClass_UTransformableComponentHandle_NoRegister @ 14648ea30

UClass * __cdecl Z_Construct_UClass_UTransformableComponentHandle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransformableComponentHandle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TransformableComponentHandle",
               &Z_Registration_Info_UClass_UTransformableComponentHandle.InnerSingleton,
               UTransformableComponentHandle::StaticRegisterNativesUTransformableComponentHandle,
               0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTransformableComponentHandle>,
               InternalVTableHelperCtorCaller<UTransformableComponentHandle>,local_res8,
               UTransformableHandle::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransformableComponentHandle.InnerSingleton;
}

// `scalar_deleting_destructor' @ 14648edc0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_24>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14648f070

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,TransformableHandleUtils::<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UConstraintsScriptingLibrary @ 14648f0a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UConstraintsScriptingLibrary(void)

{
  if (Z_Registration_Info_UClass_UConstraintsScriptingLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UConstraintsScriptingLibrary.OuterSingleton,
               &Z_Construct_UClass_UConstraintsScriptingLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UConstraintsScriptingLibrary.OuterSingleton;
}

// NewProp_bMaintainOffset_SetBit @ 14648f0e0

void __cdecl
Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::
NewProp_bMaintainOffset_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14648f0f0

void __cdecl
Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint @ 14648f100

UFunction * __cdecl Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType @ 14648f140

UFunction * __cdecl Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle @ 14648f180

UFunction * __cdecl
Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle @ 14648f1c0

UFunction * __cdecl
Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray @ 14648f2c0

UFunction * __cdecl Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14648f300

void __cdecl
Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint @ 14648f310

UFunction * __cdecl Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14648f350

void __cdecl
Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint @ 14648f360

UFunction * __cdecl Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UTickableLookAtConstraint @ 14648f3a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTickableLookAtConstraint(void)

{
  if (Z_Registration_Info_UClass_UTickableLookAtConstraint.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTickableLookAtConstraint.OuterSingleton,
               &Z_Construct_UClass_UTickableLookAtConstraint_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTickableLookAtConstraint.OuterSingleton;
}

// Z_Construct_UClass_UTickableParentConstraint @ 14648f3e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTickableParentConstraint(void)

{
  if (Z_Registration_Info_UClass_UTickableParentConstraint.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTickableParentConstraint.OuterSingleton,
               &Z_Construct_UClass_UTickableParentConstraint_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTickableParentConstraint.OuterSingleton;
}

// Z_Construct_UClass_UTickableRotationConstraint @ 14648f420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTickableRotationConstraint(void)

{
  if (Z_Registration_Info_UClass_UTickableRotationConstraint.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTickableRotationConstraint.OuterSingleton,
               &Z_Construct_UClass_UTickableRotationConstraint_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTickableRotationConstraint.OuterSingleton;
}

// Z_Construct_UClass_UTickableScaleConstraint @ 14648f460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTickableScaleConstraint(void)

{
  if (Z_Registration_Info_UClass_UTickableScaleConstraint.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTickableScaleConstraint.OuterSingleton,
               &Z_Construct_UClass_UTickableScaleConstraint_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTickableScaleConstraint.OuterSingleton;
}

// Z_Construct_UClass_UTickableTransformConstraint @ 14648f4a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTickableTransformConstraint(void)

{
  if (Z_Registration_Info_UClass_UTickableTransformConstraint.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTickableTransformConstraint.OuterSingleton,
               &Z_Construct_UClass_UTickableTransformConstraint_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTickableTransformConstraint.OuterSingleton;
}

// Z_Construct_UClass_UTickableTranslationConstraint @ 14648f4e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTickableTranslationConstraint(void)

{
  if (Z_Registration_Info_UClass_UTickableTranslationConstraint.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTickableTranslationConstraint.OuterSingleton,
               &Z_Construct_UClass_UTickableTranslationConstraint_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTickableTranslationConstraint.OuterSingleton;
}

// NewProp_bMaintainOffset_SetBit @ 14648f520

void __cdecl
Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bMaintainOffset_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
  return;
}

// NewProp_bDynamicOffset_SetBit @ 14648f530

void __cdecl
Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bDynamicOffset_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa8) = 1;
  return;
}

// NewProp_bUseCurrentOffset_SetBit @ 14648f540

void __cdecl
Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bUseCurrentOffset_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xaa) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14648f680

void * __thiscall
FConstraintsModule::_scalar_deleting_destructor_(FConstraintsModule *this,uint param_1)

{
  *this = (FConstraintsModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewProp_bScaling_SetBit @ 14648f6c0

void __cdecl
Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_bScaling_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x120) = 1;
  return;
}

// Z_Construct_UClass_UConstraintSubsystem @ 14648f6d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UConstraintSubsystem(void)

{
  if (Z_Registration_Info_UClass_UConstraintSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UConstraintSubsystem.OuterSingleton,
               &Z_Construct_UClass_UConstraintSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UConstraintSubsystem.OuterSingleton;
}

// Z_Construct_UScriptStruct_FConstraintsInWorld @ 14648f710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConstraintsInWorld(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConstraintsInWorld.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConstraintsInWorld.InnerSingleton,
               &Z_Construct_UScriptStruct_FConstraintsInWorld_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConstraintsInWorld.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FConstraintsInWorld.InnerSingleton;
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

// NewStructOps @ 14648f790

void * __cdecl Z_Construct_UScriptStruct_FConstraintsInWorld_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FConstraintsInWorld,&UE::CoreUObject::Private::Construct<FConstraintsInWorld>,&UE::CoreUObject::Private::ConstructForTests<FConstraintsInWorld>,&UE::CoreUObject::Private::Destruct<FConstraintsInWorld>,&UE::CoreUObject::Private::Copy<FConstraintsInWorld>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bDoNotCompensate_SetBit @ 14648f7d0

void __cdecl
Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature_Statics
::NewProp_bDoNotCompensate_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// AddLambda<`UE::Anim::FAnimationEvaluationCache::RegisterNotifications'::__l5::<lambda_1>_> @ 14648fb20

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy>
::AddLambda<_UE::Anim::FAnimationEvaluationCache::RegisterNotifications_::__l5::<lambda_1>_>
          (void *this,<lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FAnimationEvaluationCache *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FAnimationEvaluationCache *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EConstraintsManagerNotifyType__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::Anim::FAnimationEvaluationCache::RegisterNotifications'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_38);
  param_1->__this = (FAnimationEvaluationCache *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar5 = (FAnimationEvaluationCache *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)((longlong)this + 0x10);
    param_1->__this = pFVar5;
    if (iVar2 == *(int *)((longlong)this + 0x14)) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)((longlong)this + 8),
                         (int *)((longlong)this + 0x14));
    }
    *(int *)((longlong)this + 0x10) = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)((longlong)this + 8) + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`UE::TransformConstraintUtil::FConstraintsInteractionCache::RegisterNotifications'::__l5::<lambda_1>_> @ 14648fd70

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy>
::
AddLambda<_UE::TransformConstraintUtil::FConstraintsInteractionCache::RegisterNotifications_::__l5::<lambda_1>_>
          (void *this,<lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FConstraintsInteractionCache *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FConstraintsInteractionCache *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EConstraintsManagerNotifyType__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::TransformConstraintUtil::FConstraintsInteractionCache::RegisterNotifications'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_38);
  param_1->__this = (FConstraintsInteractionCache *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar5 = (FConstraintsInteractionCache *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)((longlong)this + 0x10);
    param_1->__this = pFVar5;
    if (iVar2 == *(int *)((longlong)this + 0x14)) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)((longlong)this + 8),
                         (int *)((longlong)this + 0x14));
    }
    *(int *)((longlong)this + 0x10) = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)((longlong)this + 8) + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// CastChecked<AConstraintsActor,AActor> @ 146490e00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AConstraintsActor * __cdecl CastChecked<AConstraintsActor,AActor>(AActor *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    if (param_2 != NullChecked) {
      return (AConstraintsActor *)0x0;
    }
    pFVar3 = GetTypeName<AConstraintsActor>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = AConstraintsActor::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AConstraintsActor *)param_1;
  }
  pFVar3 = GetTypeName<AConstraintsActor>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CompareItems<FTickPrerequisite,int> @ 146490ee0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
CompareItems<FTickPrerequisite,int>
          (FTickPrerequisite *param_1,FTickPrerequisite *param_2,int param_3)

{
  TWeakObjectPtr<UObject,FWeakObjectPtr> *this;
  bool bVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      this = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)(lVar2 + (longlong)param_2);
      bVar1 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                        (this,&param_2->PrerequisiteObject);
      if ((!bVar1) || (this[1].WeakPtr != (FWeakObjectPtr)param_2->PrerequisiteTickFunction)) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TObjectPtr<UTickableConstraint>,int> @ 146490f60

void __cdecl
ConstructItems<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TObjectPtr<UTickableConstraint>,int>
          (void *param_1,TObjectPtr<UTickableConstraint> *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  UObject *local_res20;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      pUVar1 = *(UObject **)(lVar2 + (longlong)param_1);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar1 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar1);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar1);
        }
      }
      ((FWeakObjectPtr *)param_1)->ObjectIndex = 0;
      ((FWeakObjectPtr *)param_1)->ObjectSerialNumber = 0;
      local_res20 = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      FWeakObjectPtr::operator=(param_1,(FObjectPtr)&local_res20);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FConstraintNode,FConstraintNode,int> @ 146491020

void __cdecl
ConstructItems<FConstraintNode,FConstraintNode,int>
          (void *param_1,FConstraintNode *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0x18);
    piVar4 = &param_2->NodeIndex;
    do {
      uVar2 = *(undefined8 *)(piVar4 + -4);
      puVar1 = (undefined8 *)((longlong)piVar4 + (longlong)param_1 + (-0x18 - (longlong)param_2));
      *puVar1 = *(undefined8 *)&((FConstraintNode *)(piVar4 + -6))->ConstraintID;
      puVar1[1] = uVar2;
      *(FConstraintTickFunction **)(piVar3 + -2) = *(FConstraintTickFunction **)(piVar4 + -2);
      *piVar3 = *piVar4;
      piVar3[1] = piVar4[1];
      *(undefined8 *)
       &((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)(piVar3 + 2))->
        Elements = 0;
      piVar3[4] = 0;
      piVar3[5] = 0;
      piVar3[10] = 0;
      piVar3[0xb] = 0;
      piVar3[0xc] = 0;
      piVar3[0xd] = 0x80;
      piVar3[0xe] = -1;
      piVar3[0xf] = 0;
      piVar3[0x12] = 0;
      piVar3[0x13] = 0;
      piVar3[0x14] = 0;
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::operator=
                ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                 (piVar3 + 2),
                 (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                 (piVar4 + 2));
      piVar3[0x16] = 0;
      piVar3[0x17] = 0;
      piVar3[0x18] = 0;
      piVar3[0x19] = 0;
      piVar3[0x1e] = 0;
      piVar3[0x1f] = 0;
      piVar3[0x20] = 0;
      piVar3[0x21] = 0x80;
      piVar3[0x22] = -1;
      piVar3[0x23] = 0;
      piVar3[0x26] = 0;
      piVar3[0x27] = 0;
      piVar3[0x28] = 0;
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::operator=
                ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                 (piVar3 + 0x16),
                 (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                 (piVar4 + 0x16));
      *(bool *)(piVar3 + 0x2a) = *(bool *)(piVar4 + 0x2a);
      *(bool *)((longlong)piVar3 + 0xa9) = *(bool *)((longlong)piVar4 + 0xa9);
      param_3 = param_3 + -1;
      piVar3 = piVar3 + 0x32;
      piVar4 = piVar4 + 0x32;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FConstraintNode,int> @ 1464912f0

void __cdecl DestructItems<FConstraintNode,int>(FConstraintNode *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Children).Hash.SecondaryData;
    do {
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      *(undefined4 *)(pFVar1 + -9) = 0;
      if (pFVar1[-10] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[-10]);
      }
      TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -0x12));
      pFVar1 = pFVar1 + 0x19;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FConstraintsInWorld,int> @ 146491370

void __cdecl DestructItems<FConstraintsInWorld,int>(FConstraintsInWorld *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pTVar2 = &param_1->Constraints;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((((TSharedPtr<FConstraintsEvaluationGraph,1> *)(pTVar2 + 1))->SharedReferenceCount).
               ReferenceController);
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FConstraintsInWorld *)(pTVar2 + 2);
  }
  return;
}

// DuplicateObject<UTickableConstraint> @ 1464913c0

UTickableConstraint * __cdecl
DuplicateObject<UTickableConstraint>(UTickableConstraint *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  UTickableConstraint *pUVar2;
  
  pUVar1 = UTickableConstraint::StaticClass();
  pUVar2 = (UTickableConstraint *)
           DuplicateObject_Internal(pUVar1,(UObject *)param_1,param_2,param_3);
  return pUVar2;
}

// DuplicateObject<UTickableTransformConstraint> @ 146491410

UTickableTransformConstraint * __cdecl
DuplicateObject<UTickableTransformConstraint>
          (UTickableTransformConstraint *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  UTickableTransformConstraint *pUVar2;
  
  pUVar1 = UTickableTransformConstraint::StaticClass();
  pUVar2 = (UTickableTransformConstraint *)
           DuplicateObject_Internal(pUVar1,(UObject *)param_1,param_2,param_3);
  return pUVar2;
}

// DuplicateObject<UTransformableComponentHandle> @ 146491460

UTransformableComponentHandle * __cdecl
DuplicateObject<UTransformableComponentHandle>
          (UTransformableComponentHandle *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  UTransformableComponentHandle *pUVar2;
  
  pUVar1 = UTransformableComponentHandle::StaticClass();
  pUVar2 = (UTransformableComponentHandle *)
           DuplicateObject_Internal(pUVar1,(UObject *)param_1,param_2,param_3);
  return pUVar2;
}

// FilterByPredicate<`UE::TransformConstraintUtil::FConstraintsInteractionCache::Get'::__l2::<lambda_1>_> @ 1464931f0

TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
FilterByPredicate<_UE::TransformConstraintUtil::FConstraintsInteractionCache::Get_::__l2::<lambda_1>_>
          (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                 *__return_storage_ptr__,<lambda_1> param_1)

{
  FWeakObjectPtr *pFVar1;
  FWeakObjectPtr FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  FWeakObjectPtr *pFVar8;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar9;
  FWeakObjectPtr *this_00;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (FWeakObjectPtr *)(this->AllocatorInstance).Data;
  pFVar1 = this_00 + this->ArrayNum;
  do {
    if (this_00 == pFVar1) {
      return __return_storage_ptr__;
    }
    pUVar6 = FWeakObjectPtr::Get(this_00);
    if (pUVar6 != (UObject *)0x0) {
      pUVar7 = UTickableTransformConstraint::StaticClass();
      iVar5 = (int)pUVar7->_padding_;
      if ((((iVar5 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
            &pUVar7->_padding_)) && (*(longlong *)&pUVar6[3].field_0x20 != 0)) &&
         ((*(uint *)(*(longlong *)&pUVar6[3].field_0x20 + 8) >> 0x1e & 1) == 0)) {
        pFVar8 = (FWeakObjectPtr *)
                 (**(code **)(**(longlong **)&pUVar6[3].field_0x20 + 0x330))
                           (*(longlong **)&pUVar6[3].field_0x20,local_res8);
        pUVar6 = FWeakObjectPtr::Get(pFVar8);
        if ((pUVar6 != (UObject *)0x0) && (pUVar6 == param_1.InTarget)) {
          pFVar8 = (FWeakObjectPtr *)(__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar8 <= this_00) &&
             ((this_00 < pFVar8 + __return_storage_ptr__->ArrayMax &&
              (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)))) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                      *)(*pcVar3)();
            return pTVar9;
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          FVar2 = *this_00;
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          *(FWeakObjectPtr *)
           ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) = FVar2;
        }
      }
    }
    this_00 = this_00 + 1;
  } while( true );
}

// FilterByPredicate<`FDependencyBuilder::BuildExternalDependencies'::__l9::<lambda_1>_> @ 146493380

TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
FilterByPredicate<_FDependencyBuilder::BuildExternalDependencies_::__l9::<lambda_1>_>
          (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                 *__return_storage_ptr__,<lambda_1> param_1)

{
  FWeakObjectPtr *pFVar1;
  FWeakObjectPtr FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  FWeakObjectPtr *pFVar8;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar9;
  FWeakObjectPtr *this_00;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (FWeakObjectPtr *)(this->AllocatorInstance).Data;
  pFVar1 = this_00 + this->ArrayNum;
  do {
    if (this_00 == pFVar1) {
      return __return_storage_ptr__;
    }
    pUVar6 = FWeakObjectPtr::Get(this_00);
    if (pUVar6 != (UObject *)0x0) {
      pUVar7 = UTickableTransformConstraint::StaticClass();
      iVar5 = (int)pUVar7->_padding_;
      if ((((iVar5 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
            &pUVar7->_padding_)) && (*(longlong *)&pUVar6[3].field_0x20 != 0)) &&
         ((*(uint *)(*(longlong *)&pUVar6[3].field_0x20 + 8) >> 0x1e & 1) == 0)) {
        pFVar8 = (FWeakObjectPtr *)
                 (**(code **)(**(longlong **)&pUVar6[3].field_0x20 + 0x330))
                           (*(longlong **)&pUVar6[3].field_0x20,local_res8);
        pUVar6 = FWeakObjectPtr::Get(pFVar8);
        if ((pUVar6 != (UObject *)0x0) && (pUVar6 == param_1.ChildTarget)) {
          pFVar8 = (FWeakObjectPtr *)(__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar8 <= this_00) &&
             ((this_00 < pFVar8 + __return_storage_ptr__->ArrayMax &&
              (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)))) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                      *)(*pcVar3)();
            return pTVar9;
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          FVar2 = *this_00;
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          *(FWeakObjectPtr *)
           ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) = FVar2;
        }
      }
    }
    this_00 = this_00 + 1;
  } while( true );
}

// FilterByPredicate<`FDependencyBuilder::BuildExternalDependencies'::__l64::<lambda_2>_> @ 146493510

TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
FilterByPredicate<_FDependencyBuilder::BuildExternalDependencies_::__l64::<lambda_2>_>
          (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                 *__return_storage_ptr__,<lambda_2> param_1)

{
  FWeakObjectPtr *pFVar1;
  FWeakObjectPtr FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  FWeakObjectPtr *pFVar8;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar9;
  FWeakObjectPtr *this_00;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (FWeakObjectPtr *)(this->AllocatorInstance).Data;
  pFVar1 = this_00 + this->ArrayNum;
  do {
    if (this_00 == pFVar1) {
      return __return_storage_ptr__;
    }
    pUVar6 = FWeakObjectPtr::Get(this_00);
    if (pUVar6 != (UObject *)0x0) {
      pUVar7 = UTickableTransformConstraint::StaticClass();
      iVar5 = (int)pUVar7->_padding_;
      if ((((iVar5 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
            &pUVar7->_padding_)) && (*(longlong *)&pUVar6[3].field_0x20 != 0)) &&
         ((*(uint *)(*(longlong *)&pUVar6[3].field_0x20 + 8) >> 0x1e & 1) == 0)) {
        pFVar8 = (FWeakObjectPtr *)
                 (**(code **)(**(longlong **)&pUVar6[3].field_0x20 + 0x330))
                           (*(longlong **)&pUVar6[3].field_0x20,local_res8);
        pUVar6 = FWeakObjectPtr::Get(pFVar8);
        if ((pUVar6 != (UObject *)0x0) && (pUVar6 == param_1.ParentTarget)) {
          pFVar8 = (FWeakObjectPtr *)(__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar8 <= this_00) &&
             ((this_00 < pFVar8 + __return_storage_ptr__->ArrayMax &&
              (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)))) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                      *)(*pcVar3)();
            return pTVar9;
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          FVar2 = *this_00;
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          *(FWeakObjectPtr *)
           ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) = FVar2;
        }
      }
    }
    this_00 = this_00 + 1;
  } while( true );
}

// FindByPredicate<`FConstraintsManagerController::AllocateConstraintT<UTickableLookAtConstraint>'::__l2::<lambda_1>_> @ 1464936a0

TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> * __thiscall
TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableLookAtConstraint>_::__l2::<lambda_1>_>
          (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,<lambda_1> param_1)

{
  FWeakObjectPtr *pFVar1;
  FName FVar2;
  bool bVar3;
  UObject *pUVar4;
  FWeakObjectPtr *this_00;
  
  this_00 = (FWeakObjectPtr *)(this->AllocatorInstance).Data;
  pFVar1 = this_00 + this->ArrayNum;
  while( true ) {
    if (this_00 == pFVar1) {
      return (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0;
    }
    bVar3 = FWeakObjectPtr::IsValid(this_00);
    if ((bVar3) &&
       (pUVar4 = FWeakObjectPtr::Get(this_00),
       FVar2.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18,
       FVar2.Number = *(uint *)&pUVar4->field_0x1c, FVar2 == param_1.Name)) break;
    this_00 = this_00 + 1;
  }
  return (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)this_00;
}

// FindByPredicate<`FConstraintsManagerController::AllocateConstraintT<UTickableParentConstraint>'::__l2::<lambda_1>_> @ 146493710

TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> * __thiscall
TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableParentConstraint>_::__l2::<lambda_1>_>
          (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,<lambda_1> param_1)

{
  FWeakObjectPtr *pFVar1;
  FName FVar2;
  bool bVar3;
  UObject *pUVar4;
  FWeakObjectPtr *this_00;
  
  this_00 = (FWeakObjectPtr *)(this->AllocatorInstance).Data;
  pFVar1 = this_00 + this->ArrayNum;
  while( true ) {
    if (this_00 == pFVar1) {
      return (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0;
    }
    bVar3 = FWeakObjectPtr::IsValid(this_00);
    if ((bVar3) &&
       (pUVar4 = FWeakObjectPtr::Get(this_00),
       FVar2.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18,
       FVar2.Number = *(uint *)&pUVar4->field_0x1c, FVar2 == param_1.Name)) break;
    this_00 = this_00 + 1;
  }
  return (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)this_00;
}

// FindByPredicate<`FConstraintsManagerController::AllocateConstraintT<UTickableRotationConstraint>'::__l2::<lambda_1>_> @ 146493780

TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> * __thiscall
TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableRotationConstraint>_::__l2::<lambda_1>_>
          (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,<lambda_1> param_1)

{
  FWeakObjectPtr *pFVar1;
  FName FVar2;
  bool bVar3;
  UObject *pUVar4;
  FWeakObjectPtr *this_00;
  
  this_00 = (FWeakObjectPtr *)(this->AllocatorInstance).Data;
  pFVar1 = this_00 + this->ArrayNum;
  while( true ) {
    if (this_00 == pFVar1) {
      return (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0;
    }
    bVar3 = FWeakObjectPtr::IsValid(this_00);
    if ((bVar3) &&
       (pUVar4 = FWeakObjectPtr::Get(this_00),
       FVar2.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18,
       FVar2.Number = *(uint *)&pUVar4->field_0x1c, FVar2 == param_1.Name)) break;
    this_00 = this_00 + 1;
  }
  return (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)this_00;
}

// FindByPredicate<`FConstraintsManagerController::AllocateConstraintT<UTickableScaleConstraint>'::__l2::<lambda_1>_> @ 1464937f0

TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> * __thiscall
TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableScaleConstraint>_::__l2::<lambda_1>_>
          (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,<lambda_1> param_1)

{
  FWeakObjectPtr *pFVar1;
  FName FVar2;
  bool bVar3;
  UObject *pUVar4;
  FWeakObjectPtr *this_00;
  
  this_00 = (FWeakObjectPtr *)(this->AllocatorInstance).Data;
  pFVar1 = this_00 + this->ArrayNum;
  while( true ) {
    if (this_00 == pFVar1) {
      return (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0;
    }
    bVar3 = FWeakObjectPtr::IsValid(this_00);
    if ((bVar3) &&
       (pUVar4 = FWeakObjectPtr::Get(this_00),
       FVar2.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18,
       FVar2.Number = *(uint *)&pUVar4->field_0x1c, FVar2 == param_1.Name)) break;
    this_00 = this_00 + 1;
  }
  return (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)this_00;
}

// FindByPredicate<`FConstraintsManagerController::AllocateConstraintT<UTickableTranslationConstraint>'::__l2::<lambda_1>_> @ 146493860

TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> * __thiscall
TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableTranslationConstraint>_::__l2::<lambda_1>_>
          (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,<lambda_1> param_1)

{
  FWeakObjectPtr *pFVar1;
  FName FVar2;
  bool bVar3;
  UObject *pUVar4;
  FWeakObjectPtr *this_00;
  
  this_00 = (FWeakObjectPtr *)(this->AllocatorInstance).Data;
  pFVar1 = this_00 + this->ArrayNum;
  while( true ) {
    if (this_00 == pFVar1) {
      return (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0;
    }
    bVar3 = FWeakObjectPtr::IsValid(this_00);
    if ((bVar3) &&
       (pUVar4 = FWeakObjectPtr::Get(this_00),
       FVar2.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18,
       FVar2.Number = *(uint *)&pUVar4->field_0x1c, FVar2 == param_1.Name)) break;
    this_00 = this_00 + 1;
  }
  return (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)this_00;
}

// FindByPredicate<`UE::TransformConstraintUtil::FConstraintsInteractionCache::HasAnyActiveConstraint'::__l2::<lambda_1>_> @ 1464938d0

TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> * __thiscall
TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UE::TransformConstraintUtil::FConstraintsInteractionCache::HasAnyActiveConstraint_::__l2::<lambda_1>_>
          (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,<lambda_1> param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr *this_00;
  
  this_00 = (FWeakObjectPtr *)(this->AllocatorInstance).Data;
  pFVar1 = this_00 + this->ArrayNum;
  do {
    if (this_00 == pFVar1) {
      return (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0;
    }
    pUVar3 = FWeakObjectPtr::Get(this_00);
    if (pUVar3 != (UObject *)0x0) {
      pUVar4 = UTickableTransformConstraint::StaticClass();
      iVar2 = (int)pUVar4->_padding_;
      if (((iVar2 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
           &pUVar4->_padding_)) && (*(char *)(pUVar3 + 1) != '\0')) {
        return (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)this_00;
      }
    }
    this_00 = this_00 + 1;
  } while( true );
}

// FindByPredicate<`FConstraintCycleChecker::HasPrerequisiteDependencyWith'::__l2::<lambda_1>_> @ 146493960

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTickPrerequisite * __thiscall
TArray<FTickPrerequisite,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FConstraintCycleChecker::HasPrerequisiteDependencyWith_::__l2::<lambda_1>_>
          (TArray<FTickPrerequisite,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  bool bVar1;
  FTickPrerequisite *pFVar2;
  FTickPrerequisite *this_00;
  
  this_00 = (FTickPrerequisite *)(this->AllocatorInstance).Data;
  pFVar2 = this_00 + this->ArrayNum;
  while( true ) {
    if (this_00 == pFVar2) {
      return (FTickPrerequisite *)0x0;
    }
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00,true,false);
    if (((bVar1) && (this_00->PrerequisiteTickFunction != (FTickFunction *)0x0)) &&
       (this_00->PrerequisiteTickFunction == param_1.InSecondary)) break;
    this_00 = this_00 + 1;
  }
  return this_00;
}

// FindLastByPredicate<``UE::TransformConstraintUtil::GetConstraintsRelativeTransform'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 146493cf0

int __thiscall
TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<__UE::TransformConstraintUtil::GetConstraintsRelativeTransform_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,<lambda_1> param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  EMovieSceneTransformChannel local_res10 [6];
  
  local_res10[0] = param_1.InChannel;
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  pFVar5 = pFVar1 + (longlong)param_2 * 8;
  do {
    if (pFVar5 == pFVar1) {
      return -1;
    }
    pFVar5 = pFVar5 + -8;
    bVar3 = ``UE::TransformConstraintUtil::GetConstraintsRelativeTransform'::__l2::<lambda_1>::
            operator()'::__l2::<lambda_1>::operator()
                      (local_res10,(TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)pFVar5);
  } while (!bVar3);
  return (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
}

// FindLastByPredicate<`UE::TransformConstraintUtil::GetLastActiveConstraintIndex'::__l2::<lambda_1>_> @ 146493d90

int __thiscall
TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<_UE::TransformConstraintUtil::GetLastActiveConstraintIndex_::__l2::<lambda_1>_>
          (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,<lambda_1> param_1,int param_2)

{
  FWeakObjectPtr *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FWeakObjectPtr *this_00;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  pFVar1 = (FWeakObjectPtr *)(this->AllocatorInstance).Data;
  this_00 = pFVar1 + param_2;
  do {
    do {
      if (this_00 == pFVar1) {
        return -1;
      }
      this_00 = this_00 + -1;
      pUVar5 = FWeakObjectPtr::Get(this_00);
    } while (pUVar5 == (UObject *)0x0);
    pUVar6 = UTickableTransformConstraint::StaticClass();
    iVar4 = (int)pUVar6->_padding_;
  } while (((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar4) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
            &pUVar6->_padding_)) ||
          ((pUVar7 = FWeakObjectPtr::Get(this_00), *(char *)(pUVar7 + 1) == '\0' ||
           (pUVar5[4].field_0x8 == '\0'))));
  return (int)((longlong)this_00 - (longlong)pFVar1 >> 3);
}

// ForEachComponent_Internal<USceneComponent,1,1,`AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 146493ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<USceneComponent,1,1,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  USceneComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_146494113;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_146494113:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_1464941ad;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_1464941ad:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_1464942b0;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_1464942b0:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<USceneComponent,1,1,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(USceneComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (USceneComponent *)0x0) {
      `AActor::
      GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::
      __l2::<lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8[1]._padding_, local_1a0 != 0)) {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<USceneComponent,1,0,`AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 146494520

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<USceneComponent,1,0,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  USceneComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar9->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar9 != pUVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (pUVar10 != (UClass *)0x0) {
    iVar3 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_146494626;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_146494626:
  iVar14 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1464946ad;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_1464946ad:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1464947b1;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_1464947b1:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(USceneComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (USceneComponent *)0x0) {
      `AActor::
      GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::
      __l2::<lambda_1>::operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<USceneComponent,0,1,`AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 146494830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<USceneComponent,0,1,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  USceneComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_146494923;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_146494923:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_1464949d0;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_1464949d0:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_146494ae0;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_146494ae0:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<USceneComponent,0,1,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(USceneComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (USceneComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::
        GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::
        __l2::<lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8[1]._padding_, local_1a0 != 0)) {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<USceneComponent,0,0,`AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 146494d70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<USceneComponent,0,0,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  USceneComponent *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar12 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_146494e4e;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_146494e4e:
  iVar14 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar11 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_146494edf;
      uVar13 = puVar17[iVar14];
    }
    uVar10 = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar11 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_146494edf:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar10) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      uVar18 = uVar18 + 0x20;
      uVar13 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar14)
      goto LAB_146494ff0;
      uVar13 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_146494ff0:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(USceneComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (USceneComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `AActor::
        GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::
        __l2::<lambda_1>::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetConstraintsByPredicate<`FDependencyBuilder::BuildSelfDependencies'::__l2::<lambda_1>_> @ 146495cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
FConstraintsManagerController::
GetConstraintsByPredicate<_FDependencyBuilder::BuildSelfDependencies_::__l2::<lambda_1>_>
          (FConstraintsManagerController *this,
          TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,<lambda_1> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  UConstraintSubsystem *this_00;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FIdentityFunctor local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  UTickableTransformConstraint *local_38;
  UObject *pUStack_30;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_28;
  
  this_00 = UConstraintSubsystem::Get();
  if (this_00 == (UConstraintSubsystem *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FConstraintsManagerController::
             GetConstraintsByPredicate<`FDependencyBuilder::BuildSelfDependencies'::__l2::<lambda_1>_>'
             ::__l5::_dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    _Src = ::Empty.AllocatorInstance;
    iVar4 = ::Empty.ArrayNum;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar4,0,&__return_storage_ptr__->AllocatorInstance,iVar4,
                 &__return_storage_ptr__->ArrayMax);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,(longlong)iVar4 << 3);
    }
  }
  else {
    pTVar5 = UConstraintSubsystem::GetConstraints(this_00,&local_28,this->World);
    local_38 = param_1->InConstraint;
    pUStack_30 = param_1->SelfTarget;
    local_48._0_4_ = 0;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    pFVar6 = (pTVar5->AllocatorInstance).Data;
    pFVar1 = pFVar6 + (longlong)pTVar5->ArrayNum * 8;
    if (pFVar6 != pFVar1) {
      do {
        bVar3 = `FDependencyBuilder::BuildSelfDependencies'::__l2::<lambda_1>::operator()
                          (&local_38,(TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)pFVar6);
        if (bVar3) {
          if (((local_50.Data <= pFVar6) && (pFVar6 < local_50.Data + (longlong)local_48._4_4_ * 8))
             && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar5 = (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                      *)(*pcVar2)();
            return pTVar5;
          }
          iVar4 = (int)local_48;
          if ((int)local_48 == local_48._4_4_) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_50,(int *)((longlong)&local_48 + 4));
          }
          local_48 = CONCAT44(local_48._4_4_,iVar4 + 1);
          *(undefined8 *)(local_50.Data + (longlong)iVar4 * 8) = *(undefined8 *)pFVar6;
        }
        pFVar6 = pFVar6 + 8;
      } while (pFVar6 != pFVar1);
    }
    iVar4 = (int)local_48;
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
      iVar4 = (int)local_48;
    }
    if (param_2) {
      AlgoImpl::
      StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_FDependencyBuilder::BuildSelfDependencies_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
                ((TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)local_50.Data,iVar4,local_58,
                 (<lambda_2>)this);
      (__return_storage_ptr__->AllocatorInstance).Data = local_50.Data;
      __return_storage_ptr__->ArrayNum = (int)local_48;
    }
    else {
      (__return_storage_ptr__->AllocatorInstance).Data = local_50.Data;
      __return_storage_ptr__->ArrayNum = iVar4;
    }
    __return_storage_ptr__->ArrayMax = local_48._4_4_;
  }
  return __return_storage_ptr__;
}

// GetConstraintsByPredicate<`FConstraintCycleChecker::CheckAndFixCycles'::__l2::<lambda_1>_> @ 146495f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
FConstraintsManagerController::
GetConstraintsByPredicate<_FConstraintCycleChecker::CheckAndFixCycles_::__l2::<lambda_1>_>
          (FConstraintsManagerController *this,
          TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,<lambda_1> param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  UConstraintSubsystem *this_00;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FIdentityFunctor local_48;
  FTickFunction *local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_28;
  
  this_00 = UConstraintSubsystem::Get();
  if (this_00 == (UConstraintSubsystem *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FConstraintsManagerController::
             GetConstraintsByPredicate<`FConstraintCycleChecker::CheckAndFixCycles'::__l2::<lambda_1>_>'
             ::__l5::_dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    _Src = ::Empty.AllocatorInstance;
    iVar4 = ::Empty.ArrayNum;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar4,0,&__return_storage_ptr__->AllocatorInstance,iVar4,
                 &__return_storage_ptr__->ArrayMax);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,(longlong)iVar4 << 3);
    }
  }
  else {
    pTVar5 = UConstraintSubsystem::GetConstraints(this_00,&local_28,this->World);
    local_30._0_4_ = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = 0;
    pFVar6 = (pTVar5->AllocatorInstance).Data;
    pFVar1 = pFVar6 + (longlong)pTVar5->ArrayNum * 8;
    local_40 = param_1.ChildTickFunction;
    if (pFVar6 != pFVar1) {
      do {
        bVar3 = `FConstraintCycleChecker::CheckAndFixCycles'::__l2::<lambda_1>::operator()
                          (&local_40,(TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)pFVar6);
        if (bVar3) {
          if (((local_38.Data <= pFVar6) && (pFVar6 < local_38.Data + (longlong)local_30._4_4_ * 8))
             && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar5 = (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                      *)(*pcVar2)();
            return pTVar5;
          }
          iVar4 = (int)local_30;
          if ((int)local_30 == local_30._4_4_) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_38,(int *)((longlong)&local_30 + 4));
          }
          local_30 = CONCAT44(local_30._4_4_,iVar4 + 1);
          *(undefined8 *)(local_38.Data + (longlong)iVar4 * 8) = *(undefined8 *)pFVar6;
        }
        pFVar6 = pFVar6 + 8;
      } while (pFVar6 != pFVar1);
    }
    iVar4 = (int)local_30;
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
      iVar4 = (int)local_30;
    }
    if (param_2) {
      AlgoImpl::
      StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_FConstraintCycleChecker::CheckAndFixCycles_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
                ((TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)local_38.Data,iVar4,local_48,
                 (<lambda_2>)this);
      (__return_storage_ptr__->AllocatorInstance).Data = local_38.Data;
      __return_storage_ptr__->ArrayNum = (int)local_30;
    }
    else {
      (__return_storage_ptr__->AllocatorInstance).Data = local_38.Data;
      __return_storage_ptr__->ArrayNum = iVar4;
    }
    __return_storage_ptr__->ArrayMax = local_30._4_4_;
  }
  return __return_storage_ptr__;
}

// GetConstraintsByPredicate<`UE::TransformConstraintUtil::GetChildrenConstraints'::__l2::<lambda_1>_> @ 146496180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
FConstraintsManagerController::
GetConstraintsByPredicate<_UE::TransformConstraintUtil::GetChildrenConstraints_::__l2::<lambda_1>_>
          (FConstraintsManagerController *this,
          TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,<lambda_1> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  UConstraintSubsystem *this_00;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FIdentityFunctor local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_60;
  UTickableTransformConstraint *local_48;
  UTransformableHandle *pUStack_40;
  undefined8 local_38;
  UObject *pUStack_30;
  UWorld *local_28;
  
  this_00 = UConstraintSubsystem::Get();
  if (this_00 == (UConstraintSubsystem *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FConstraintsManagerController::
             GetConstraintsByPredicate<`UE::TransformConstraintUtil::GetChildrenConstraints'::__l2::<lambda_1>_>'
             ::__l5::_dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    _Src = ::Empty.AllocatorInstance;
    iVar4 = ::Empty.ArrayNum;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar4,0,&__return_storage_ptr__->AllocatorInstance,iVar4,
                 &__return_storage_ptr__->ArrayMax);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,(longlong)iVar4 << 3);
    }
  }
  else {
    pTVar5 = UConstraintSubsystem::GetConstraints(this_00,&local_60,this->World);
    local_48 = param_1->InConstraint;
    pUStack_40 = param_1->Handle;
    local_68._0_4_ = 0;
    local_38._0_4_ = param_1->ParentHash;
    local_38._4_1_ = param_1->bIncludeTarget;
    local_38._5_3_ = *(undefined3 *)&param_1->field_0x15;
    pUStack_30 = param_1->ParentTarget;
    local_70.Data = (FScriptContainerElement *)0x0;
    local_68 = 0;
    local_28 = param_1->World;
    pFVar6 = (pTVar5->AllocatorInstance).Data;
    pFVar1 = pFVar6 + (longlong)pTVar5->ArrayNum * 8;
    if (pFVar6 != pFVar1) {
      do {
        bVar3 = `UE::TransformConstraintUtil::GetChildrenConstraints'::__l2::<lambda_1>::operator()
                          (&local_48,(TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)pFVar6);
        if (bVar3) {
          if (((local_70.Data <= pFVar6) && (pFVar6 < local_70.Data + (longlong)local_68._4_4_ * 8))
             && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar5 = (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                      *)(*pcVar2)();
            return pTVar5;
          }
          iVar4 = (int)local_68;
          if ((int)local_68 == local_68._4_4_) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_70,(int *)((longlong)&local_68 + 4));
          }
          local_68 = CONCAT44(local_68._4_4_,iVar4 + 1);
          *(undefined8 *)(local_70.Data + (longlong)iVar4 * 8) = *(undefined8 *)pFVar6;
        }
        pFVar6 = pFVar6 + 8;
      } while (pFVar6 != pFVar1);
    }
    iVar4 = (int)local_68;
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
      iVar4 = (int)local_68;
    }
    if (param_2) {
      AlgoImpl::
      StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_UE::TransformConstraintUtil::GetChildrenConstraints_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
                ((TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)local_70.Data,iVar4,local_78,
                 (<lambda_2>)this);
      (__return_storage_ptr__->AllocatorInstance).Data = local_70.Data;
      __return_storage_ptr__->ArrayNum = (int)local_68;
    }
    else {
      (__return_storage_ptr__->AllocatorInstance).Data = local_70.Data;
      __return_storage_ptr__->ArrayNum = iVar4;
    }
    __return_storage_ptr__->ArrayMax = local_68._4_4_;
  }
  return __return_storage_ptr__;
}

// GetConstraintsByPredicate<`FConstraintCycleChecker::UpdateCyclingDependency'::__l2::<lambda_1>_> @ 1464963f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
FConstraintsManagerController::
GetConstraintsByPredicate<_FConstraintCycleChecker::UpdateCyclingDependency_::__l2::<lambda_1>_>
          (FConstraintsManagerController *this,
          TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,<lambda_1> param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  UConstraintSubsystem *this_00;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FIdentityFunctor local_48;
  UObject *local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_28;
  
  this_00 = UConstraintSubsystem::Get();
  if (this_00 == (UConstraintSubsystem *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FConstraintsManagerController::
             GetConstraintsByPredicate<`FConstraintCycleChecker::UpdateCyclingDependency'::__l2::<lambda_1>_>'
             ::__l5::_dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    _Src = ::Empty.AllocatorInstance;
    iVar4 = ::Empty.ArrayNum;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar4,0,&__return_storage_ptr__->AllocatorInstance,iVar4,
                 &__return_storage_ptr__->ArrayMax);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,(longlong)iVar4 << 3);
    }
  }
  else {
    pTVar5 = UConstraintSubsystem::GetConstraints(this_00,&local_28,this->World);
    local_30._0_4_ = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = 0;
    pFVar6 = (pTVar5->AllocatorInstance).Data;
    pFVar1 = pFVar6 + (longlong)pTVar5->ArrayNum * 8;
    local_40 = param_1.TargetObject;
    if (pFVar6 != pFVar1) {
      do {
        bVar3 = `FConstraintCycleChecker::UpdateCyclingDependency'::__l2::<lambda_1>::operator()
                          (&local_40,(TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)pFVar6);
        if (bVar3) {
          if (((local_38.Data <= pFVar6) && (pFVar6 < local_38.Data + (longlong)local_30._4_4_ * 8))
             && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar5 = (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                      *)(*pcVar2)();
            return pTVar5;
          }
          iVar4 = (int)local_30;
          if ((int)local_30 == local_30._4_4_) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_38,(int *)((longlong)&local_30 + 4));
          }
          local_30 = CONCAT44(local_30._4_4_,iVar4 + 1);
          *(undefined8 *)(local_38.Data + (longlong)iVar4 * 8) = *(undefined8 *)pFVar6;
        }
        pFVar6 = pFVar6 + 8;
      } while (pFVar6 != pFVar1);
    }
    iVar4 = (int)local_30;
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
      iVar4 = (int)local_30;
    }
    if (param_2) {
      AlgoImpl::
      StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_FConstraintCycleChecker::UpdateCyclingDependency_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
                ((TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)local_38.Data,iVar4,local_48,
                 (<lambda_2>)this);
      (__return_storage_ptr__->AllocatorInstance).Data = local_38.Data;
      __return_storage_ptr__->ArrayNum = (int)local_30;
    }
    else {
      (__return_storage_ptr__->AllocatorInstance).Data = local_38.Data;
      __return_storage_ptr__->ArrayNum = iVar4;
    }
    __return_storage_ptr__->ArrayMax = local_30._4_4_;
  }
  return __return_storage_ptr__;
}

// GetConstraintsByPredicate<`FDependencyBuilder::BuildAttachmentsDependencies'::__l18::<lambda_1>_> @ 146496640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
FConstraintsManagerController::
GetConstraintsByPredicate<_FDependencyBuilder::BuildAttachmentsDependencies_::__l18::<lambda_1>_>
          (FConstraintsManagerController *this,
          TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,<lambda_1> param_1,bool param_2)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  char cVar5;
  bool bVar6;
  uint uVar7;
  UConstraintSubsystem *this_00;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  FWeakObjectPtr *this_01;
  FIdentityFunctor local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_40;
  
  this_00 = UConstraintSubsystem::Get();
  if (this_00 == (UConstraintSubsystem *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FConstraintsManagerController::
             GetConstraintsByPredicate<`FDependencyBuilder::BuildAttachmentsDependencies'::__l18::<lambda_1>_>'
             ::__l5::_dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar2 = ::Empty.ArrayNum;
    _Src = ::Empty.AllocatorInstance;
    lVar11 = (longlong)::Empty.ArrayNum;
    __return_storage_ptr__->ArrayNum = ::Empty.ArrayNum;
    if (iVar2 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,
                 &__return_storage_ptr__->ArrayMax);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,lVar11 << 3);
    }
  }
  else {
    pTVar8 = UConstraintSubsystem::GetConstraints(this_00,&local_40,this->World);
    local_44 = 0;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    this_01 = (FWeakObjectPtr *)(pTVar8->AllocatorInstance).Data;
    pFVar1 = this_01 + pTVar8->ArrayNum;
    for (; this_01 != pFVar1; this_01 = this_01 + 1) {
      pUVar9 = FWeakObjectPtr::Get(this_01);
      if (pUVar9 != (UObject *)0x0) {
        pUVar10 = UTickableTransformConstraint::StaticClass();
        lVar11 = *(longlong *)&pUVar9->field_0x10;
        iVar2 = (int)pUVar10->_padding_;
        if ((((iVar2 <= *(int *)(lVar11 + 0x38)) &&
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar10->_padding_)) &&
            (plVar3 = *(longlong **)&pUVar9[3].field_0x20, plVar3 != (longlong *)0x0)) &&
           ((cVar5 = (**(code **)(*plVar3 + 0x2b0))
                               (plVar3,CONCAT71((int7)((ulonglong)lVar11 >> 8),1)), cVar5 != '\0' &&
            (uVar7 = (**(code **)(*plVar3 + 0x328))(plVar3), uVar7 == param_1.ChildHash)))) {
          if ((local_50.Data <= this_01) &&
             ((this_01 < (FWeakObjectPtr *)(local_50.Data + (longlong)local_44 * 8) &&
              (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)))) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                      *)(*pcVar4)();
            return pTVar8;
          }
          if (local_48 == local_44) {
            local_48 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&local_50,&local_44);
          }
          *(FWeakObjectPtr *)(local_50.Data + (longlong)local_48 * 8) = *this_01;
          local_48 = local_48 + 1;
        }
      }
    }
    if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.AllocatorInstance.Data);
    }
    if (param_2) {
      AlgoImpl::
      StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_FDependencyBuilder::BuildAttachmentsDependencies_::__l18::<lambda_1>_>_::__l2::<lambda_2>_>
                ((TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)local_50.Data,local_48,
                 local_58,(<lambda_2>)this);
      (__return_storage_ptr__->AllocatorInstance).Data = local_50.Data;
      __return_storage_ptr__->ArrayNum = local_48;
    }
    else {
      (__return_storage_ptr__->AllocatorInstance).Data = local_50.Data;
      __return_storage_ptr__->ArrayNum = local_48;
    }
    __return_storage_ptr__->ArrayMax = local_44;
  }
  return __return_storage_ptr__;
}

// GetConstraintsByPredicate<`FDependencyBuilder::BuildExternalDependencies'::__l108::<lambda_3>_> @ 146496910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
FConstraintsManagerController::
GetConstraintsByPredicate<_FDependencyBuilder::BuildExternalDependencies_::__l108::<lambda_3>_>
          (FConstraintsManagerController *this,
          TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,<lambda_3> *param_1,bool param_2)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  UTransformableHandle *pUVar3;
  code *pcVar4;
  UObject *pUVar5;
  UTickableTransformConstraint *pUVar6;
  ForAnyElementType _Src;
  bool bVar7;
  UConstraintSubsystem *this_00;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar8;
  UTickableTransformConstraint *pUVar9;
  UClass *pUVar10;
  FWeakObjectPtr *this_01;
  UObject *pUVar11;
  longlong lVar12;
  FWeakObjectPtr *this_02;
  FIdentityFunctor local_78;
  UObject *local_68;
  UTickableTransformConstraint *pUStack_60;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_48;
  
  this_00 = UConstraintSubsystem::Get();
  if (this_00 == (UConstraintSubsystem *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FConstraintsManagerController::
             GetConstraintsByPredicate<`FDependencyBuilder::BuildExternalDependencies'::__l108::<lambda_3>_>'
             ::__l5::_dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar2 = ::Empty.ArrayNum;
    _Src = ::Empty.AllocatorInstance;
    lVar12 = (longlong)::Empty.ArrayNum;
    __return_storage_ptr__->ArrayNum = ::Empty.ArrayNum;
    if (iVar2 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,
                 &__return_storage_ptr__->ArrayMax);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,lVar12 << 3);
    }
  }
  else {
    pTVar8 = UConstraintSubsystem::GetConstraints(this_00,&local_48,this->World);
    pUVar5 = param_1->ChildTarget;
    pUVar6 = param_1->InConstraint;
    local_4c = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    this_02 = (FWeakObjectPtr *)(pTVar8->AllocatorInstance).Data;
    pFVar1 = this_02 + pTVar8->ArrayNum;
    local_68 = pUVar5;
    pUStack_60 = pUVar6;
    for (; this_02 != pFVar1; this_02 = this_02 + 1) {
      pUVar9 = (UTickableTransformConstraint *)FWeakObjectPtr::Get(this_02);
      if (pUVar9 != (UTickableTransformConstraint *)0x0) {
        pUVar10 = UTickableTransformConstraint::StaticClass();
        iVar2 = (int)pUVar10->_padding_;
        if ((((iVar2 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar10->_padding_)) && (pUVar9 != pUVar6)) &&
           ((pUVar3 = (pUVar9->ParentTRSHandle).field0_0x0.DebugPtr,
            pUVar3 != (UTransformableHandle *)0x0 && (((uint)pUVar3->_padding_ >> 0x1e & 1) == 0))))
        {
          pUVar3 = (pUVar9->ParentTRSHandle).field0_0x0.DebugPtr;
          this_01 = (FWeakObjectPtr *)(**(code **)(pUVar3->_padding_ + 0x330))(pUVar3,&local_68);
          pUVar11 = FWeakObjectPtr::Get(this_01);
          if ((pUVar11 != (UObject *)0x0) && (pUVar11 == pUVar5)) {
            if (((local_58.Data <= this_02) &&
                (this_02 < (FWeakObjectPtr *)(local_58.Data + (longlong)local_4c * 8))) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar4 = (code *)swi(3);
              pTVar8 = (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar4)();
              return pTVar8;
            }
            if (local_50 == local_4c) {
              local_50 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,&local_58,&local_4c);
            }
            *(FWeakObjectPtr *)(local_58.Data + (longlong)local_50 * 8) = *this_02;
            local_50 = local_50 + 1;
          }
        }
      }
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (param_2) {
      AlgoImpl::
      StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_FDependencyBuilder::BuildExternalDependencies_::__l108::<lambda_3>_>_::__l2::<lambda_2>_>
                ((TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)local_58.Data,local_50,
                 local_78,(<lambda_2>)this);
      (__return_storage_ptr__->AllocatorInstance).Data = local_58.Data;
      __return_storage_ptr__->ArrayNum = local_50;
    }
    else {
      (__return_storage_ptr__->AllocatorInstance).Data = local_58.Data;
      __return_storage_ptr__->ArrayNum = local_50;
    }
    __return_storage_ptr__->ArrayMax = local_4c;
  }
  return __return_storage_ptr__;
}

// GetTypeName<AConstraintsActor> @ 146496c10

FString * __cdecl GetTypeName<AConstraintsActor>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = AConstraintsActor::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSiftDown<FConstraintNode,int,FIdentityFunctor,TReversePredicate<`UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes'::__l35::<lambda_3>_>_> @ 146496c50

void __cdecl
AlgoImpl::
HeapSiftDown<FConstraintNode,int,FIdentityFunctor,TReversePredicate<_UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes_::__l35::<lambda_3>_>_>
          (FConstraintNode *param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TReversePredicate<_private:_void___cdecl_UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes(void)const_::_35_::<lambda_3>_>
          *param_5)

{
  int iVar1;
  FConstraintTickFunction *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ForElementType<FSetElementId> FVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ForElementType<FSetElementId> FVar18;
  undefined8 uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uchar uVar24;
  uchar uVar25;
  uchar uVar26;
  uchar uVar27;
  undefined4 uVar28;
  undefined6 uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  uchar uVar36;
  uchar uVar37;
  uchar uVar38;
  uchar uVar39;
  int iVar40;
  int iVar41;
  undefined4 uVar42;
  uchar uVar43;
  uchar uVar44;
  uchar uVar45;
  uchar uVar46;
  int iVar47;
  int iVar48;
  undefined4 uVar49;
  bool bVar50;
  bool bVar51;
  undefined6 uVar52;
  bool bVar53;
  int iVar54;
  FConstraintNode *pFVar55;
  FConstraintNode *pFVar56;
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar1 = param_2 * 2;
    iVar54 = iVar1 + 1;
    if (iVar1 + 2 < param_3) {
      bVar53 = `UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes'::__l35::<lambda_3>::
               operator()(param_5->Predicate,param_1 + (iVar1 + 2),param_1 + iVar54);
      if (bVar53) {
        iVar54 = iVar1;
      }
      iVar54 = iVar54 + 1;
    }
    pFVar56 = param_1 + iVar54;
    pFVar55 = param_1 + param_2;
    bVar53 = `UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes'::__l35::<lambda_3>::
             operator()(param_5->Predicate,pFVar55,pFVar56);
    if (!bVar53) break;
    uVar30 = (pFVar55->ConstraintID).A;
    uVar31 = (pFVar55->ConstraintID).B;
    uVar32 = (pFVar55->ConstraintID).C;
    uVar33 = (pFVar55->ConstraintID).D;
    bVar50 = pFVar55->bMarkedForEvaluation;
    bVar51 = pFVar55->bEvaluating;
    uVar52 = *(undefined6 *)&pFVar55->field_0xc2;
    pFVar2 = pFVar55->ConstraintTick;
    iVar34 = pFVar55->NodeIndex;
    iVar35 = pFVar55->ConstraintIndex;
    uVar3 = *(undefined8 *)&(pFVar55->Parents).Elements;
    uVar4 = *(undefined8 *)&(pFVar55->Parents).Elements.field_0x8;
    uVar5 = *(undefined8 *)&(pFVar55->Parents).Elements.field_0x10;
    uVar6 = *(undefined8 *)&(pFVar55->Parents).Elements.field_0x18;
    uVar7 = *(undefined8 *)&(pFVar55->Parents).Elements.field_0x20;
    uVar8 = *(undefined8 *)&(pFVar55->Parents).Elements.field_0x28;
    uVar9 = *(undefined8 *)&(pFVar55->Parents).Elements.field_0x30;
    uVar36 = (pFVar55->Parents).Hash.InlineData[0];
    uVar37 = (pFVar55->Parents).Hash.InlineData[1];
    uVar38 = (pFVar55->Parents).Hash.InlineData[2];
    uVar39 = (pFVar55->Parents).Hash.InlineData[3];
    iVar40 = (pFVar55->Parents).Hash._padding_;
    FVar10 = (pFVar55->Parents).Hash.SecondaryData;
    iVar41 = (pFVar55->Parents).HashSize;
    uVar42 = *(undefined4 *)&(pFVar55->Parents).field_0x4c;
    uVar11 = *(undefined8 *)&(pFVar55->Children).Elements;
    uVar12 = *(undefined8 *)&(pFVar55->Children).Elements.field_0x8;
    uVar13 = *(undefined8 *)&(pFVar55->Children).Elements.field_0x10;
    uVar14 = *(undefined8 *)&(pFVar55->Children).Elements.field_0x18;
    uVar15 = *(undefined8 *)&(pFVar55->Children).Elements.field_0x20;
    uVar16 = *(undefined8 *)&(pFVar55->Children).Elements.field_0x28;
    uVar17 = *(undefined8 *)&(pFVar55->Children).Elements.field_0x30;
    uVar43 = (pFVar55->Children).Hash.InlineData[0];
    uVar44 = (pFVar55->Children).Hash.InlineData[1];
    uVar45 = (pFVar55->Children).Hash.InlineData[2];
    uVar46 = (pFVar55->Children).Hash.InlineData[3];
    iVar47 = (pFVar55->Children).Hash._padding_;
    FVar18 = (pFVar55->Children).Hash.SecondaryData;
    iVar48 = (pFVar55->Children).HashSize;
    uVar49 = *(undefined4 *)&(pFVar55->Children).field_0x4c;
    uVar20 = (pFVar56->ConstraintID).B;
    uVar21 = (pFVar56->ConstraintID).C;
    uVar22 = (pFVar56->ConstraintID).D;
    (pFVar55->ConstraintID).A = (pFVar56->ConstraintID).A;
    (pFVar55->ConstraintID).B = uVar20;
    (pFVar55->ConstraintID).C = uVar21;
    (pFVar55->ConstraintID).D = uVar22;
    iVar1 = pFVar56->NodeIndex;
    iVar23 = pFVar56->ConstraintIndex;
    pFVar55->ConstraintTick = pFVar56->ConstraintTick;
    pFVar55->NodeIndex = iVar1;
    pFVar55->ConstraintIndex = iVar23;
    uVar19 = *(undefined8 *)&(pFVar56->Parents).Elements.field_0x8;
    *(undefined8 *)&(pFVar55->Parents).Elements = *(undefined8 *)&(pFVar56->Parents).Elements;
    *(undefined8 *)&(pFVar55->Parents).Elements.field_0x8 = uVar19;
    uVar19 = *(undefined8 *)&(pFVar56->Parents).Elements.field_0x18;
    *(undefined8 *)&(pFVar55->Parents).Elements.field_0x10 =
         *(undefined8 *)&(pFVar56->Parents).Elements.field_0x10;
    *(undefined8 *)&(pFVar55->Parents).Elements.field_0x18 = uVar19;
    uVar19 = *(undefined8 *)&(pFVar56->Parents).Elements.field_0x28;
    *(undefined8 *)&(pFVar55->Parents).Elements.field_0x20 =
         *(undefined8 *)&(pFVar56->Parents).Elements.field_0x20;
    *(undefined8 *)&(pFVar55->Parents).Elements.field_0x28 = uVar19;
    uVar24 = (pFVar56->Parents).Hash.InlineData[0];
    uVar25 = (pFVar56->Parents).Hash.InlineData[1];
    uVar26 = (pFVar56->Parents).Hash.InlineData[2];
    uVar27 = (pFVar56->Parents).Hash.InlineData[3];
    iVar1 = (pFVar56->Parents).Hash._padding_;
    *(undefined8 *)&(pFVar55->Parents).Elements.field_0x30 =
         *(undefined8 *)&(pFVar56->Parents).Elements.field_0x30;
    (pFVar55->Parents).Hash.InlineData[0] = uVar24;
    (pFVar55->Parents).Hash.InlineData[1] = uVar25;
    (pFVar55->Parents).Hash.InlineData[2] = uVar26;
    (pFVar55->Parents).Hash.InlineData[3] = uVar27;
    (pFVar55->Parents).Hash._padding_ = iVar1;
    iVar1 = (pFVar56->Parents).HashSize;
    uVar28 = *(undefined4 *)&(pFVar56->Parents).field_0x4c;
    (pFVar55->Parents).Hash.SecondaryData = (pFVar56->Parents).Hash.SecondaryData;
    (pFVar55->Parents).HashSize = iVar1;
    *(undefined4 *)&(pFVar55->Parents).field_0x4c = uVar28;
    uVar19 = *(undefined8 *)&(pFVar56->Children).Elements.field_0x8;
    *(undefined8 *)&(pFVar55->Children).Elements = *(undefined8 *)&(pFVar56->Children).Elements;
    *(undefined8 *)&(pFVar55->Children).Elements.field_0x8 = uVar19;
    uVar19 = *(undefined8 *)&(pFVar56->Children).Elements.field_0x18;
    *(undefined8 *)&(pFVar55->Children).Elements.field_0x10 =
         *(undefined8 *)&(pFVar56->Children).Elements.field_0x10;
    *(undefined8 *)&(pFVar55->Children).Elements.field_0x18 = uVar19;
    uVar19 = *(undefined8 *)&(pFVar56->Children).Elements.field_0x28;
    *(undefined8 *)&(pFVar55->Children).Elements.field_0x20 =
         *(undefined8 *)&(pFVar56->Children).Elements.field_0x20;
    *(undefined8 *)&(pFVar55->Children).Elements.field_0x28 = uVar19;
    uVar24 = (pFVar56->Children).Hash.InlineData[0];
    uVar25 = (pFVar56->Children).Hash.InlineData[1];
    uVar26 = (pFVar56->Children).Hash.InlineData[2];
    uVar27 = (pFVar56->Children).Hash.InlineData[3];
    iVar1 = (pFVar56->Children).Hash._padding_;
    *(undefined8 *)&(pFVar55->Children).Elements.field_0x30 =
         *(undefined8 *)&(pFVar56->Children).Elements.field_0x30;
    (pFVar55->Children).Hash.InlineData[0] = uVar24;
    (pFVar55->Children).Hash.InlineData[1] = uVar25;
    (pFVar55->Children).Hash.InlineData[2] = uVar26;
    (pFVar55->Children).Hash.InlineData[3] = uVar27;
    (pFVar55->Children).Hash._padding_ = iVar1;
    iVar1 = (pFVar56->Children).HashSize;
    uVar28 = *(undefined4 *)&(pFVar56->Children).field_0x4c;
    (pFVar55->Children).Hash.SecondaryData = (pFVar56->Children).Hash.SecondaryData;
    (pFVar55->Children).HashSize = iVar1;
    *(undefined4 *)&(pFVar55->Children).field_0x4c = uVar28;
    bVar53 = pFVar56->bEvaluating;
    uVar29 = *(undefined6 *)&pFVar56->field_0xc2;
    pFVar55->bMarkedForEvaluation = pFVar56->bMarkedForEvaluation;
    pFVar55->bEvaluating = bVar53;
    *(undefined6 *)&pFVar55->field_0xc2 = uVar29;
    (pFVar56->ConstraintID).A = uVar30;
    (pFVar56->ConstraintID).B = uVar31;
    (pFVar56->ConstraintID).C = uVar32;
    (pFVar56->ConstraintID).D = uVar33;
    pFVar56->ConstraintTick = pFVar2;
    pFVar56->NodeIndex = iVar34;
    pFVar56->ConstraintIndex = iVar35;
    *(undefined8 *)&(pFVar56->Parents).Elements = uVar3;
    *(undefined8 *)&(pFVar56->Parents).Elements.field_0x8 = uVar4;
    *(undefined8 *)&(pFVar56->Parents).Elements.field_0x10 = uVar5;
    *(undefined8 *)&(pFVar56->Parents).Elements.field_0x18 = uVar6;
    *(undefined8 *)&(pFVar56->Parents).Elements.field_0x20 = uVar7;
    *(undefined8 *)&(pFVar56->Parents).Elements.field_0x28 = uVar8;
    *(undefined8 *)&(pFVar56->Parents).Elements.field_0x30 = uVar9;
    (pFVar56->Parents).Hash.InlineData[0] = uVar36;
    (pFVar56->Parents).Hash.InlineData[1] = uVar37;
    (pFVar56->Parents).Hash.InlineData[2] = uVar38;
    (pFVar56->Parents).Hash.InlineData[3] = uVar39;
    (pFVar56->Parents).Hash._padding_ = iVar40;
    (pFVar56->Parents).Hash.SecondaryData = FVar10;
    (pFVar56->Parents).HashSize = iVar41;
    *(undefined4 *)&(pFVar56->Parents).field_0x4c = uVar42;
    *(undefined8 *)&(pFVar56->Children).Elements = uVar11;
    *(undefined8 *)&(pFVar56->Children).Elements.field_0x8 = uVar12;
    *(undefined8 *)&(pFVar56->Children).Elements.field_0x10 = uVar13;
    *(undefined8 *)&(pFVar56->Children).Elements.field_0x18 = uVar14;
    *(undefined8 *)&(pFVar56->Children).Elements.field_0x20 = uVar15;
    *(undefined8 *)&(pFVar56->Children).Elements.field_0x28 = uVar16;
    *(undefined8 *)&(pFVar56->Children).Elements.field_0x30 = uVar17;
    (pFVar56->Children).Hash.InlineData[0] = uVar43;
    (pFVar56->Children).Hash.InlineData[1] = uVar44;
    (pFVar56->Children).Hash.InlineData[2] = uVar45;
    (pFVar56->Children).Hash.InlineData[3] = uVar46;
    (pFVar56->Children).Hash._padding_ = iVar47;
    (pFVar56->Children).Hash.SecondaryData = FVar18;
    (pFVar56->Children).HashSize = iVar48;
    *(undefined4 *)&(pFVar56->Children).field_0x4c = uVar49;
    pFVar56->bMarkedForEvaluation = bVar50;
    pFVar56->bEvaluating = bVar51;
    *(undefined6 *)&pFVar56->field_0xc2 = uVar52;
    param_2 = iVar54;
  }
  return;
}

// HeapSortInternal<FConstraintNode,int,FIdentityFunctor,`UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes'::__l35::<lambda_3>_> @ 146496ec0

void __cdecl
AlgoImpl::
HeapSortInternal<FConstraintNode,int,FIdentityFunctor,_UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes_::__l35::<lambda_3>_>
          (FConstraintNode *param_1,int param_2,FIdentityFunctor param_3,<lambda_3> param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  undefined4 uVar12;
  undefined6 uVar13;
  bool bVar14;
  int iVar15;
  FConstraintNode *pFVar16;
  FIdentityFunctor local_res10 [8];
  FIdentityFunctor local_res18 [8];
  <lambda_3> local_res20 [8];
  TReversePredicate<_private:_void___cdecl_UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes(void)const_::_35_::<lambda_3>_>
  local_f8;
  TReversePredicate<_private:_void___cdecl_UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes(void)const_::_35_::<lambda_3>_>
  local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  FConstraintTickFunction *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ForElementType<FSetElementId> local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ForElementType<FSetElementId> local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar14) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  local_f0.Predicate = local_res20;
  local_f8.Predicate = local_res20;
  local_res10[0] = param_3;
  if ((param_2 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                          ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar14)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar15 = (param_2 + -2) / 2;
  HeapSiftDown<FConstraintNode,int,FIdentityFunctor,TReversePredicate<_UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes_::__l35::<lambda_3>_>_>
            (param_1,iVar15,param_2,local_res10,&local_f8);
  while (iVar15 != 0) {
    iVar15 = iVar15 + -1;
    HeapSiftDown<FConstraintNode,int,FIdentityFunctor,TReversePredicate<_UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes_::__l35::<lambda_3>_>_>
              (param_1,iVar15,param_2,local_res10,&local_f8);
  }
  iVar15 = param_2 + -1;
  if (0 < iVar15) {
    pFVar16 = param_1 + iVar15;
    do {
      local_e8._0_4_ = (param_1->ConstraintID).A;
      local_e8._4_4_ = (param_1->ConstraintID).B;
      uStack_e0._0_4_ = (param_1->ConstraintID).C;
      uStack_e0._4_4_ = (param_1->ConstraintID).D;
      local_28._0_1_ = param_1->bMarkedForEvaluation;
      local_28._1_1_ = param_1->bEvaluating;
      local_28._2_6_ = *(undefined6 *)&param_1->field_0xc2;
      local_d8 = param_1->ConstraintTick;
      uStack_d0._0_4_ = param_1->NodeIndex;
      uStack_d0._4_4_ = param_1->ConstraintIndex;
      local_c8 = *(undefined8 *)&(param_1->Parents).Elements;
      uStack_c0 = *(undefined8 *)&(param_1->Parents).Elements.field_0x8;
      local_b8 = *(undefined8 *)&(param_1->Parents).Elements.field_0x10;
      uStack_b0 = *(undefined8 *)&(param_1->Parents).Elements.field_0x18;
      local_a8 = *(undefined8 *)&(param_1->Parents).Elements.field_0x20;
      uStack_a0 = *(undefined8 *)&(param_1->Parents).Elements.field_0x28;
      local_98 = *(undefined8 *)&(param_1->Parents).Elements.field_0x30;
      uStack_90._0_1_ = (param_1->Parents).Hash.InlineData[0];
      uStack_90._1_1_ = (param_1->Parents).Hash.InlineData[1];
      uStack_90._2_1_ = (param_1->Parents).Hash.InlineData[2];
      uStack_90._3_1_ = (param_1->Parents).Hash.InlineData[3];
      uStack_90._4_4_ = (param_1->Parents).Hash._padding_;
      local_88 = (param_1->Parents).Hash.SecondaryData;
      uStack_80 = *(undefined8 *)&(param_1->Parents).HashSize;
      local_78 = *(undefined8 *)&(param_1->Children).Elements;
      uStack_70 = *(undefined8 *)&(param_1->Children).Elements.field_0x8;
      local_68 = *(undefined8 *)&(param_1->Children).Elements.field_0x10;
      uStack_60 = *(undefined8 *)&(param_1->Children).Elements.field_0x18;
      local_58 = *(undefined8 *)&(param_1->Children).Elements.field_0x20;
      uStack_50 = *(undefined8 *)&(param_1->Children).Elements.field_0x28;
      local_48 = *(undefined8 *)&(param_1->Children).Elements.field_0x30;
      uStack_40._0_1_ = (param_1->Children).Hash.InlineData[0];
      uStack_40._1_1_ = (param_1->Children).Hash.InlineData[1];
      uStack_40._2_1_ = (param_1->Children).Hash.InlineData[2];
      uStack_40._3_1_ = (param_1->Children).Hash.InlineData[3];
      uStack_40._4_4_ = (param_1->Children).Hash._padding_;
      local_38 = (param_1->Children).Hash.SecondaryData;
      uStack_30 = *(undefined8 *)&(param_1->Children).HashSize;
      uVar3 = (pFVar16->ConstraintID).B;
      uVar4 = (pFVar16->ConstraintID).C;
      uVar5 = (pFVar16->ConstraintID).D;
      (param_1->ConstraintID).A = (pFVar16->ConstraintID).A;
      (param_1->ConstraintID).B = uVar3;
      (param_1->ConstraintID).C = uVar4;
      (param_1->ConstraintID).D = uVar5;
      iVar6 = pFVar16->NodeIndex;
      iVar7 = pFVar16->ConstraintIndex;
      param_1->ConstraintTick = pFVar16->ConstraintTick;
      param_1->NodeIndex = iVar6;
      param_1->ConstraintIndex = iVar7;
      uVar2 = *(undefined8 *)&(pFVar16->Parents).Elements.field_0x8;
      *(undefined8 *)&(param_1->Parents).Elements = *(undefined8 *)&(pFVar16->Parents).Elements;
      *(undefined8 *)&(param_1->Parents).Elements.field_0x8 = uVar2;
      uVar2 = *(undefined8 *)&(pFVar16->Parents).Elements.field_0x18;
      *(undefined8 *)&(param_1->Parents).Elements.field_0x10 =
           *(undefined8 *)&(pFVar16->Parents).Elements.field_0x10;
      *(undefined8 *)&(param_1->Parents).Elements.field_0x18 = uVar2;
      uVar2 = *(undefined8 *)&(pFVar16->Parents).Elements.field_0x28;
      *(undefined8 *)&(param_1->Parents).Elements.field_0x20 =
           *(undefined8 *)&(pFVar16->Parents).Elements.field_0x20;
      *(undefined8 *)&(param_1->Parents).Elements.field_0x28 = uVar2;
      uVar8 = (pFVar16->Parents).Hash.InlineData[0];
      uVar9 = (pFVar16->Parents).Hash.InlineData[1];
      uVar10 = (pFVar16->Parents).Hash.InlineData[2];
      uVar11 = (pFVar16->Parents).Hash.InlineData[3];
      iVar6 = (pFVar16->Parents).Hash._padding_;
      *(undefined8 *)&(param_1->Parents).Elements.field_0x30 =
           *(undefined8 *)&(pFVar16->Parents).Elements.field_0x30;
      (param_1->Parents).Hash.InlineData[0] = uVar8;
      (param_1->Parents).Hash.InlineData[1] = uVar9;
      (param_1->Parents).Hash.InlineData[2] = uVar10;
      (param_1->Parents).Hash.InlineData[3] = uVar11;
      (param_1->Parents).Hash._padding_ = iVar6;
      iVar6 = (pFVar16->Parents).HashSize;
      uVar12 = *(undefined4 *)&(pFVar16->Parents).field_0x4c;
      (param_1->Parents).Hash.SecondaryData = (pFVar16->Parents).Hash.SecondaryData;
      (param_1->Parents).HashSize = iVar6;
      *(undefined4 *)&(param_1->Parents).field_0x4c = uVar12;
      uVar2 = *(undefined8 *)&(pFVar16->Children).Elements.field_0x8;
      *(undefined8 *)&(param_1->Children).Elements = *(undefined8 *)&(pFVar16->Children).Elements;
      *(undefined8 *)&(param_1->Children).Elements.field_0x8 = uVar2;
      uVar2 = *(undefined8 *)&(pFVar16->Children).Elements.field_0x18;
      *(undefined8 *)&(param_1->Children).Elements.field_0x10 =
           *(undefined8 *)&(pFVar16->Children).Elements.field_0x10;
      *(undefined8 *)&(param_1->Children).Elements.field_0x18 = uVar2;
      uVar2 = *(undefined8 *)&(pFVar16->Children).Elements.field_0x28;
      *(undefined8 *)&(param_1->Children).Elements.field_0x20 =
           *(undefined8 *)&(pFVar16->Children).Elements.field_0x20;
      *(undefined8 *)&(param_1->Children).Elements.field_0x28 = uVar2;
      uVar8 = (pFVar16->Children).Hash.InlineData[0];
      uVar9 = (pFVar16->Children).Hash.InlineData[1];
      uVar10 = (pFVar16->Children).Hash.InlineData[2];
      uVar11 = (pFVar16->Children).Hash.InlineData[3];
      iVar6 = (pFVar16->Children).Hash._padding_;
      *(undefined8 *)&(param_1->Children).Elements.field_0x30 =
           *(undefined8 *)&(pFVar16->Children).Elements.field_0x30;
      (param_1->Children).Hash.InlineData[0] = uVar8;
      (param_1->Children).Hash.InlineData[1] = uVar9;
      (param_1->Children).Hash.InlineData[2] = uVar10;
      (param_1->Children).Hash.InlineData[3] = uVar11;
      (param_1->Children).Hash._padding_ = iVar6;
      iVar6 = (pFVar16->Children).HashSize;
      uVar12 = *(undefined4 *)&(pFVar16->Children).field_0x4c;
      (param_1->Children).Hash.SecondaryData = (pFVar16->Children).Hash.SecondaryData;
      (param_1->Children).HashSize = iVar6;
      *(undefined4 *)&(param_1->Children).field_0x4c = uVar12;
      bVar14 = pFVar16->bEvaluating;
      uVar13 = *(undefined6 *)&pFVar16->field_0xc2;
      param_1->bMarkedForEvaluation = pFVar16->bMarkedForEvaluation;
      param_1->bEvaluating = bVar14;
      *(undefined6 *)&param_1->field_0xc2 = uVar13;
      (pFVar16->ConstraintID).A = (undefined4)local_e8;
      (pFVar16->ConstraintID).B = local_e8._4_4_;
      (pFVar16->ConstraintID).C = (undefined4)uStack_e0;
      (pFVar16->ConstraintID).D = uStack_e0._4_4_;
      pFVar16->ConstraintTick = local_d8;
      pFVar16->NodeIndex = (undefined4)uStack_d0;
      pFVar16->ConstraintIndex = uStack_d0._4_4_;
      *(undefined8 *)&(pFVar16->Parents).Elements = local_c8;
      *(undefined8 *)&(pFVar16->Parents).Elements.field_0x8 = uStack_c0;
      *(undefined8 *)&(pFVar16->Parents).Elements.field_0x10 = local_b8;
      *(undefined8 *)&(pFVar16->Parents).Elements.field_0x18 = uStack_b0;
      *(undefined8 *)&(pFVar16->Parents).Elements.field_0x20 = local_a8;
      *(undefined8 *)&(pFVar16->Parents).Elements.field_0x28 = uStack_a0;
      *(undefined8 *)&(pFVar16->Parents).Elements.field_0x30 = local_98;
      (pFVar16->Parents).Hash.InlineData[0] = (undefined1)uStack_90;
      (pFVar16->Parents).Hash.InlineData[1] = uStack_90._1_1_;
      (pFVar16->Parents).Hash.InlineData[2] = uStack_90._2_1_;
      (pFVar16->Parents).Hash.InlineData[3] = uStack_90._3_1_;
      (pFVar16->Parents).Hash._padding_ = uStack_90._4_4_;
      (pFVar16->Parents).Hash.SecondaryData = local_88;
      *(undefined8 *)&(pFVar16->Parents).HashSize = uStack_80;
      *(undefined8 *)&(pFVar16->Children).Elements = local_78;
      *(undefined8 *)&(pFVar16->Children).Elements.field_0x8 = uStack_70;
      *(undefined8 *)&(pFVar16->Children).Elements.field_0x10 = local_68;
      *(undefined8 *)&(pFVar16->Children).Elements.field_0x18 = uStack_60;
      *(undefined8 *)&(pFVar16->Children).Elements.field_0x20 = local_58;
      *(undefined8 *)&(pFVar16->Children).Elements.field_0x28 = uStack_50;
      *(undefined8 *)&(pFVar16->Children).Elements.field_0x30 = local_48;
      (pFVar16->Children).Hash.InlineData[0] = (undefined1)uStack_40;
      (pFVar16->Children).Hash.InlineData[1] = uStack_40._1_1_;
      (pFVar16->Children).Hash.InlineData[2] = uStack_40._2_1_;
      (pFVar16->Children).Hash.InlineData[3] = uStack_40._3_1_;
      (pFVar16->Children).Hash._padding_ = uStack_40._4_4_;
      (pFVar16->Children).Hash.SecondaryData = local_38;
      *(undefined8 *)&(pFVar16->Children).HashSize = uStack_30;
      pFVar16->bMarkedForEvaluation = (bool)(undefined1)local_28;
      pFVar16->bEvaluating = (bool)local_28._1_1_;
      *(undefined6 *)&pFVar16->field_0xc2 = local_28._2_6_;
      HeapSiftDown<FConstraintNode,int,FIdentityFunctor,TReversePredicate<_UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes_::__l35::<lambda_3>_>_>
                (param_1,0,iVar15,local_res18,&local_f0);
      iVar15 = iVar15 + -1;
      pFVar16 = pFVar16 + -1;
    } while (0 < iVar15);
  }
  return;
}

// InternalConstructor<AConstraintsActor> @ 146497230

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AConstraintsActor>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  AActor *this;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    pbVar1 = (byte *)((longlong)&(this->PrimaryActorTick)._padding_ + 2);
    *pbVar1 = *pbVar1 | 2;
    this->_padding_ = (longlong)&___7AConstraintsActor__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UConstraintSubsystem> @ 146497270

void __cdecl InternalConstructor<UConstraintSubsystem>(FObjectInitializer *param_1)

{
  UEngineSubsystem *this;
  
  this = (UEngineSubsystem *)param_1->Obj;
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this);
    *(undefined ***)this = &___7UConstraintSubsystem__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined2 *)(this + 1) = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x1c = 0x80;
    *(undefined4 *)&this[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x24 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UConstraintsManager> @ 1464972f0

void __cdecl InternalConstructor<UConstraintsManager>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UConstraintsManager__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined2 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UConstraintsScriptingLibrary> @ 146497330

void __cdecl InternalConstructor<UConstraintsScriptingLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UConstraintsScriptingLibrary__6B_;
  }
  return;
}

// InternalConstructor<UTickableConstraint> @ 146497360

void __cdecl InternalConstructor<UTickableConstraint>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  UObject::UObject(this);
  *(undefined2 *)(this + 1) = 1;
  *(undefined ***)this = &___7UTickableConstraint__6B_;
  *(undefined8 *)&this[1].field_0x4 = 0;
  *(undefined8 *)&this[1].field_0xc = 0;
  *(undefined8 *)&this[1].field_0x18 = 0;
  *(undefined8 *)&this[1].field_0x20 = 0;
  *(undefined8 *)&this[2].field_0x10 = 0;
  *(undefined4 *)&this[2].field_0x18 = 0;
  *(undefined4 *)&this[2].field_0x1c = 0x80;
  *(undefined4 *)&this[2].field_0x24 = 0;
  *(undefined4 *)&this[2].field_0x20 = 0xffffffff;
  *(undefined8 *)&this[3].field_0x8 = 0;
  *(undefined4 *)&this[3].field_0x10 = 0;
  return;
}

// InternalConstructor<UTickableLookAtConstraint> @ 146497380

void __cdecl InternalConstructor<UTickableLookAtConstraint>(FObjectInitializer *param_1)

{
  UTickableTransformConstraint *this;
  undefined8 uVar1;
  
  this = (UTickableTransformConstraint *)param_1->Obj;
  if (this != (UTickableTransformConstraint *)0x0) {
    UTickableTransformConstraint::UTickableTransformConstraint(this);
    this->_padding_ = (longlong)&___7UTickableLookAtConstraint__6B_;
    uVar1 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    this->bMaintainOffset = false;
    this->bDynamicOffset = false;
    this->Type = LookAt;
  }
  return;
}

// InternalConstructor<UTickableParentConstraint> @ 1464973e0

void __cdecl InternalConstructor<UTickableParentConstraint>(FObjectInitializer *param_1)

{
  UTickableTransformConstraint *this;
  double dVar1;
  
  this = (UTickableTransformConstraint *)param_1->Obj;
  if (this != (UTickableTransformConstraint *)0x0) {
    UTickableTransformConstraint::UTickableTransformConstraint(this);
    this->_padding_ = (longlong)&___7UTickableParentConstraint__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x1010101;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined4 *)&this[1]._padding_ = 0x1010100;
    this->Type = Parent;
  }
  return;
}

// InternalConstructor<UTickableRotationConstraint> @ 1464974a0

void __cdecl InternalConstructor<UTickableRotationConstraint>(FObjectInitializer *param_1)

{
  UTickableTransformConstraint *this;
  double dVar1;
  
  this = (UTickableTransformConstraint *)param_1->Obj;
  if (this != (UTickableTransformConstraint *)0x0) {
    UTickableTransformConstraint::UTickableTransformConstraint(this);
    this->_padding_ = (longlong)&___7UTickableRotationConstraint__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    dVar1 = UE::Math::TQuat<double>::Identity.Y;
    this[1]._padding_ = (longlong)UE::Math::TQuat<double>::Identity.X;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TQuat<double>::Identity.W;
    this[1]._padding_ = (longlong)UE::Math::TQuat<double>::Identity.Z;
    this[1]._padding_ = (longlong)dVar1;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
    this->Type = Rotation;
  }
  return;
}

// InternalConstructor<UTickableScaleConstraint> @ 146497510

void __cdecl InternalConstructor<UTickableScaleConstraint>(FObjectInitializer *param_1)

{
  UTickableTransformConstraint *this;
  undefined8 uVar1;
  
  this = (UTickableTransformConstraint *)param_1->Obj;
  if (this != (UTickableTransformConstraint *)0x0) {
    UTickableTransformConstraint::UTickableTransformConstraint(this);
    this->_padding_ = (longlong)&___7UTickableScaleConstraint__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
    this->Type = Scale;
  }
  return;
}

// InternalConstructor<UTickableTransformConstraint> @ 146497580

void __cdecl InternalConstructor<UTickableTransformConstraint>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  UObject::UObject(this);
  *(undefined2 *)(this + 1) = 1;
  *(undefined8 *)&this[1].field_0x4 = 0;
  *(undefined8 *)&this[1].field_0xc = 0;
  *(undefined8 *)&this[1].field_0x18 = 0;
  *(undefined8 *)&this[1].field_0x20 = 0;
  *(undefined8 *)&this[2].field_0x10 = 0;
  *(undefined4 *)&this[2].field_0x18 = 0;
  *(undefined4 *)&this[2].field_0x1c = 0x80;
  *(undefined4 *)&this[2].field_0x20 = 0xffffffff;
  *(undefined4 *)&this[2].field_0x24 = 0;
  *(undefined8 *)&this[3].field_0x8 = 0;
  *(undefined4 *)&this[3].field_0x10 = 0;
  *(undefined ***)this = &___7UTickableTransformConstraint__6B_;
  *(undefined8 *)&this[3].field_0x18 = 0;
  *(undefined8 *)&this[3].field_0x20 = 0;
  *(undefined1 *)(this + 4) = 1;
  *(undefined4 *)&this[4].field_0x4 = 0x3f800000;
  *(undefined2 *)&this[4].field_0x8 = 0x300;
  this[4].field_0xa = 1;
  return;
}

// InternalConstructor<UTickableTranslationConstraint> @ 1464975a0

void __cdecl InternalConstructor<UTickableTranslationConstraint>(FObjectInitializer *param_1)

{
  UTickableTransformConstraint *this;
  undefined8 uVar1;
  
  this = (UTickableTransformConstraint *)param_1->Obj;
  if (this != (UTickableTransformConstraint *)0x0) {
    UTickableTransformConstraint::UTickableTransformConstraint(this);
    this->_padding_ = (longlong)&___7UTickableTranslationConstraint__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
    this->Type = Translation;
  }
  return;
}

// InternalConstructor<UTransformableComponentHandle> @ 146497610

void __cdecl InternalConstructor<UTransformableComponentHandle>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0xc = 0;
    *(undefined4 *)&this[1].field_0x14 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined ***)this = &___7UTransformableComponentHandle__6B_;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0xffffffff;
    *(undefined8 *)&this[2].field_0x10 = 2;
    *(undefined8 *)&this[2].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UTransformableHandle> @ 146497680

void __cdecl InternalConstructor<UTransformableHandle>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UTransformableHandle__6B_;
    *(undefined8 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0xc = 0;
    *(undefined4 *)&this[1].field_0x14 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0xffffffff;
    *(undefined8 *)&this[2].field_0x10 = 2;
  }
  return;
}

// InternalVTableHelperCtorCaller<AConstraintsActor> @ 1464976e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AConstraintsActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AConstraintsActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AConstraintsActor__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UConstraintSubsystem> @ 1464977a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UConstraintSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEngineSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UConstraintSubsystem::GetPrivateStaticClass();
  this = (UEngineSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this,param_1);
    this[1].field_0x18 = 0;
    *(undefined ***)this = &___7UConstraintSubsystem__6B_;
    *(undefined2 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x1c = 0x80;
    *(undefined4 *)&this[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x24 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UConstraintsManager> @ 146497890

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UConstraintsManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UConstraintsManager::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UConstraintsManager__6B_;
    *(undefined2 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UConstraintsScriptingLibrary> @ 146497950

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UConstraintsScriptingLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UConstraintsScriptingLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UConstraintsScriptingLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTickableConstraint> @ 146497a00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTickableConstraint>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTickableConstraint::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 1;
    *(undefined ***)pUVar1 = &___7UTickableConstraint__6B_;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTickableLookAtConstraint> @ 146497af0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTickableLookAtConstraint>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UTickableTransformConstraint *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UTickableLookAtConstraint::GetPrivateStaticClass();
  this = (UTickableTransformConstraint *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTickableTransformConstraint *)0x0) {
    UTickableTransformConstraint::UTickableTransformConstraint(this,param_1);
    this->_padding_ = (longlong)&___7UTickableLookAtConstraint__6B_;
    uVar1 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTickableParentConstraint> @ 146497bc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTickableParentConstraint>(FVTableHelper *param_1)

{
  double dVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UTickableTransformConstraint *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UTickableParentConstraint::GetPrivateStaticClass();
  this = (UTickableTransformConstraint *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTickableTransformConstraint *)0x0) {
    UTickableTransformConstraint::UTickableTransformConstraint(this,param_1);
    this->_padding_ = (longlong)&___7UTickableParentConstraint__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x1010101;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined4 *)&this[1]._padding_ = 0x1010100;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTickableRotationConstraint> @ 146497cf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTickableRotationConstraint>(FVTableHelper *param_1)

{
  double dVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UTickableTransformConstraint *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UTickableRotationConstraint::GetPrivateStaticClass();
  this = (UTickableTransformConstraint *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTickableTransformConstraint *)0x0) {
    UTickableTransformConstraint::UTickableTransformConstraint(this,param_1);
    this->_padding_ = (longlong)&___7UTickableRotationConstraint__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    dVar1 = UE::Math::TQuat<double>::Identity.Y;
    this[1]._padding_ = (longlong)UE::Math::TQuat<double>::Identity.X;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TQuat<double>::Identity.W;
    this[1]._padding_ = (longlong)UE::Math::TQuat<double>::Identity.Z;
    this[1]._padding_ = (longlong)dVar1;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTickableScaleConstraint> @ 146497dd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTickableScaleConstraint>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UTickableTransformConstraint *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UTickableScaleConstraint::GetPrivateStaticClass();
  this = (UTickableTransformConstraint *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTickableTransformConstraint *)0x0) {
    UTickableTransformConstraint::UTickableTransformConstraint(this,param_1);
    this->_padding_ = (longlong)&___7UTickableScaleConstraint__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTickableTransformConstraint> @ 146497eb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTickableTransformConstraint>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTickableTransformConstraint *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTickableTransformConstraint::GetPrivateStaticClass();
  pUVar3 = (UTickableTransformConstraint *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UTickableTransformConstraint *)0x0) {
    pUVar3 = UTickableTransformConstraint::UTickableTransformConstraint(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTickableTranslationConstraint> @ 146497f50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTickableTranslationConstraint>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UTickableTransformConstraint *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UTickableTranslationConstraint::GetPrivateStaticClass();
  this = (UTickableTransformConstraint *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTickableTransformConstraint *)0x0) {
    UTickableTransformConstraint::UTickableTransformConstraint(this,param_1);
    this->_padding_ = (longlong)&___7UTickableTranslationConstraint__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[1]._padding_ = uVar1;
    this[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTransformableComponentHandle> @ 146498030

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTransformableComponentHandle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTransformableComponentHandle::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UTransformableComponentHandle__6B_;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    *(undefined4 *)&pUVar1[1].field_0x14 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0xffffffff;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 2;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTransformableHandle> @ 146498110

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTransformableHandle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTransformableHandle::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UTransformableHandle__6B_;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    *(undefined4 *)&pUVar1[1].field_0x14 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0xffffffff;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FConstraintNode,int,FIdentityFunctor,`UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes'::__l35::<lambda_3>_> @ 1464981f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FConstraintNode,int,FIdentityFunctor,_UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes_::__l35::<lambda_3>_>
          (FConstraintNode *param_1,int param_2,FIdentityFunctor param_3,<lambda_3> param_4)

{
  undefined1 *puVar1;
  uchar *puVar2;
  FConstraintNode *pFVar3;
  FConstraintTickFunction *pFVar4;
  FConstraintTickFunction *pFVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ForElementType<FSetElementId> FVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  uchar uVar22;
  undefined4 uVar23;
  undefined6 uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  uchar uVar31;
  uchar uVar32;
  uchar uVar33;
  uchar uVar34;
  int iVar35;
  int iVar36;
  undefined4 uVar37;
  bool bVar38;
  int iVar39;
  longlong lVar40;
  longlong lVar41;
  FConstraintNode *pFVar42;
  FConstraintNode *pFVar43;
  FConstraintNode *pFVar44;
  FConstraintNode *pFVar45;
  FConstraintNode *pFVar46;
  FConstraintNode **ppFVar47;
  int iVar48;
  FConstraintNode *pFVar49;
  float fVar50;
  undefined1 auStackY_488 [32];
  <lambda_3> local_458 [8];
  FIdentityFunctor local_450 [8];
  FIdentityFunctor local_448 [8];
  TReversePredicate<_private:_void___cdecl_UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes(void)const_::_35_::<lambda_3>_>
  local_440;
  TReversePredicate<_private:_void___cdecl_UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes(void)const_::_35_::<lambda_3>_>
  local_438 [3];
  FConstraintNode *local_420;
  undefined8 local_418;
  ForElementType<FSetElementId> FStack_410;
  FConstraintTickFunction *local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  ForElementType<FSetElementId> local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  ForElementType<FSetElementId> local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  FConstraintNode *local_348;
  FConstraintNode *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_488;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar50 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar50;
    memset(local_330,0,0x2e8);
    ppFVar47 = &local_348;
    do {
      pFVar49 = ppFVar47[1];
      pFVar43 = *ppFVar47;
      pFVar3 = ppFVar47[2];
      local_420._0_4_ = (int)pFVar3;
      lVar40 = ((longlong)pFVar49 - (longlong)pFVar43) +
               SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)pFVar49 - (longlong)pFVar43),
                      8);
      iVar48 = ((int)(lVar40 >> 7) - (int)(lVar40 >> 0x3f)) + 1;
      pFVar42 = pFVar43;
      if ((int)local_420 != 0) {
LAB_1464982d5:
        if (8 < iVar48) {
          pFVar44 = pFVar49 + 1;
          pFVar43 = pFVar42 + iVar48 / 2;
          uVar25 = (pFVar43->ConstraintID).A;
          uVar26 = (pFVar43->ConstraintID).B;
          uVar27 = (pFVar43->ConstraintID).C;
          uVar28 = (pFVar43->ConstraintID).D;
          local_358._0_1_ = pFVar43->bMarkedForEvaluation;
          local_358._1_1_ = pFVar43->bEvaluating;
          local_358._2_6_ = *(undefined6 *)&pFVar43->field_0xc2;
          pFVar4 = pFVar43->ConstraintTick;
          iVar29 = pFVar43->NodeIndex;
          iVar30 = pFVar43->ConstraintIndex;
          uVar6 = *(undefined8 *)&(pFVar43->Parents).Elements;
          uVar8 = *(undefined8 *)&(pFVar43->Parents).Elements.field_0x8;
          uVar9 = *(undefined8 *)&(pFVar43->Parents).Elements.field_0x10;
          uVar10 = *(undefined8 *)&(pFVar43->Parents).Elements.field_0x18;
          uVar11 = *(undefined8 *)&(pFVar43->Parents).Elements.field_0x20;
          uVar12 = *(undefined8 *)&(pFVar43->Parents).Elements.field_0x28;
          uVar13 = *(undefined8 *)&(pFVar43->Parents).Elements.field_0x30;
          uVar31 = (pFVar43->Parents).Hash.InlineData[0];
          uVar32 = (pFVar43->Parents).Hash.InlineData[1];
          uVar33 = (pFVar43->Parents).Hash.InlineData[2];
          uVar34 = (pFVar43->Parents).Hash.InlineData[3];
          iVar35 = (pFVar43->Parents).Hash._padding_;
          FVar14 = (pFVar43->Parents).Hash.SecondaryData;
          iVar36 = (pFVar43->Parents).HashSize;
          uVar37 = *(undefined4 *)&(pFVar43->Parents).field_0x4c;
          local_3a8 = *(undefined8 *)&(pFVar43->Children).Elements;
          uStack_3a0 = *(undefined8 *)&(pFVar43->Children).Elements.field_0x8;
          local_398 = *(undefined8 *)&(pFVar43->Children).Elements.field_0x10;
          uStack_390 = *(undefined8 *)&(pFVar43->Children).Elements.field_0x18;
          local_388 = *(undefined8 *)&(pFVar43->Children).Elements.field_0x20;
          uStack_380 = *(undefined8 *)&(pFVar43->Children).Elements.field_0x28;
          local_378 = *(undefined8 *)&(pFVar43->Children).Elements.field_0x30;
          uStack_370._0_1_ = (pFVar43->Children).Hash.InlineData[0];
          uStack_370._1_1_ = (pFVar43->Children).Hash.InlineData[1];
          uStack_370._2_1_ = (pFVar43->Children).Hash.InlineData[2];
          uStack_370._3_1_ = (pFVar43->Children).Hash.InlineData[3];
          uStack_370._4_4_ = (pFVar43->Children).Hash._padding_;
          local_368 = (pFVar43->Children).Hash.SecondaryData;
          uStack_360 = *(undefined8 *)&(pFVar43->Children).HashSize;
          uVar16 = (pFVar42->ConstraintID).B;
          uVar17 = (pFVar42->ConstraintID).C;
          uVar18 = (pFVar42->ConstraintID).D;
          (pFVar43->ConstraintID).A = (pFVar42->ConstraintID).A;
          (pFVar43->ConstraintID).B = uVar16;
          (pFVar43->ConstraintID).C = uVar17;
          (pFVar43->ConstraintID).D = uVar18;
          iVar48 = pFVar42->NodeIndex;
          iVar39 = pFVar42->ConstraintIndex;
          pFVar43->ConstraintTick = pFVar42->ConstraintTick;
          pFVar43->NodeIndex = iVar48;
          pFVar43->ConstraintIndex = iVar39;
          uVar15 = *(undefined8 *)&(pFVar42->Parents).Elements.field_0x8;
          *(undefined8 *)&(pFVar43->Parents).Elements = *(undefined8 *)&(pFVar42->Parents).Elements;
          *(undefined8 *)&(pFVar43->Parents).Elements.field_0x8 = uVar15;
          uVar15 = *(undefined8 *)&(pFVar42->Parents).Elements.field_0x18;
          *(undefined8 *)&(pFVar43->Parents).Elements.field_0x10 =
               *(undefined8 *)&(pFVar42->Parents).Elements.field_0x10;
          *(undefined8 *)&(pFVar43->Parents).Elements.field_0x18 = uVar15;
          uVar15 = *(undefined8 *)&(pFVar42->Parents).Elements.field_0x28;
          *(undefined8 *)&(pFVar43->Parents).Elements.field_0x20 =
               *(undefined8 *)&(pFVar42->Parents).Elements.field_0x20;
          *(undefined8 *)&(pFVar43->Parents).Elements.field_0x28 = uVar15;
          uVar19 = (pFVar42->Parents).Hash.InlineData[0];
          uVar20 = (pFVar42->Parents).Hash.InlineData[1];
          uVar21 = (pFVar42->Parents).Hash.InlineData[2];
          uVar22 = (pFVar42->Parents).Hash.InlineData[3];
          iVar48 = (pFVar42->Parents).Hash._padding_;
          *(undefined8 *)&(pFVar43->Parents).Elements.field_0x30 =
               *(undefined8 *)&(pFVar42->Parents).Elements.field_0x30;
          (pFVar43->Parents).Hash.InlineData[0] = uVar19;
          (pFVar43->Parents).Hash.InlineData[1] = uVar20;
          (pFVar43->Parents).Hash.InlineData[2] = uVar21;
          (pFVar43->Parents).Hash.InlineData[3] = uVar22;
          (pFVar43->Parents).Hash._padding_ = iVar48;
          iVar48 = (pFVar42->Parents).HashSize;
          uVar23 = *(undefined4 *)&(pFVar42->Parents).field_0x4c;
          (pFVar43->Parents).Hash.SecondaryData = (pFVar42->Parents).Hash.SecondaryData;
          (pFVar43->Parents).HashSize = iVar48;
          *(undefined4 *)&(pFVar43->Parents).field_0x4c = uVar23;
          uVar15 = *(undefined8 *)&(pFVar42->Children).Elements.field_0x8;
          *(undefined8 *)&(pFVar43->Children).Elements =
               *(undefined8 *)&(pFVar42->Children).Elements;
          *(undefined8 *)&(pFVar43->Children).Elements.field_0x8 = uVar15;
          uVar15 = *(undefined8 *)&(pFVar42->Children).Elements.field_0x18;
          *(undefined8 *)&(pFVar43->Children).Elements.field_0x10 =
               *(undefined8 *)&(pFVar42->Children).Elements.field_0x10;
          *(undefined8 *)&(pFVar43->Children).Elements.field_0x18 = uVar15;
          uVar15 = *(undefined8 *)&(pFVar42->Children).Elements.field_0x28;
          *(undefined8 *)&(pFVar43->Children).Elements.field_0x20 =
               *(undefined8 *)&(pFVar42->Children).Elements.field_0x20;
          *(undefined8 *)&(pFVar43->Children).Elements.field_0x28 = uVar15;
          uVar19 = (pFVar42->Children).Hash.InlineData[0];
          uVar20 = (pFVar42->Children).Hash.InlineData[1];
          uVar21 = (pFVar42->Children).Hash.InlineData[2];
          uVar22 = (pFVar42->Children).Hash.InlineData[3];
          iVar48 = (pFVar42->Children).Hash._padding_;
          *(undefined8 *)&(pFVar43->Children).Elements.field_0x30 =
               *(undefined8 *)&(pFVar42->Children).Elements.field_0x30;
          (pFVar43->Children).Hash.InlineData[0] = uVar19;
          (pFVar43->Children).Hash.InlineData[1] = uVar20;
          (pFVar43->Children).Hash.InlineData[2] = uVar21;
          (pFVar43->Children).Hash.InlineData[3] = uVar22;
          (pFVar43->Children).Hash._padding_ = iVar48;
          iVar48 = (pFVar42->Children).HashSize;
          uVar23 = *(undefined4 *)&(pFVar42->Children).field_0x4c;
          (pFVar43->Children).Hash.SecondaryData = (pFVar42->Children).Hash.SecondaryData;
          (pFVar43->Children).HashSize = iVar48;
          *(undefined4 *)&(pFVar43->Children).field_0x4c = uVar23;
          bVar38 = pFVar42->bEvaluating;
          uVar24 = *(undefined6 *)&pFVar42->field_0xc2;
          pFVar43->bMarkedForEvaluation = pFVar42->bMarkedForEvaluation;
          pFVar43->bEvaluating = bVar38;
          *(undefined6 *)&pFVar43->field_0xc2 = uVar24;
          (pFVar42->ConstraintID).A = uVar25;
          (pFVar42->ConstraintID).B = uVar26;
          (pFVar42->ConstraintID).C = uVar27;
          (pFVar42->ConstraintID).D = uVar28;
          pFVar42->ConstraintTick = pFVar4;
          pFVar42->NodeIndex = iVar29;
          pFVar42->ConstraintIndex = iVar30;
          *(undefined8 *)&(pFVar42->Parents).Elements = uVar6;
          *(undefined8 *)&(pFVar42->Parents).Elements.field_0x8 = uVar8;
          *(undefined8 *)&(pFVar42->Parents).Elements.field_0x10 = uVar9;
          *(undefined8 *)&(pFVar42->Parents).Elements.field_0x18 = uVar10;
          *(undefined8 *)&(pFVar42->Parents).Elements.field_0x20 = uVar11;
          *(undefined8 *)&(pFVar42->Parents).Elements.field_0x28 = uVar12;
          *(undefined8 *)&(pFVar42->Parents).Elements.field_0x30 = uVar13;
          (pFVar42->Parents).Hash.InlineData[0] = uVar31;
          (pFVar42->Parents).Hash.InlineData[1] = uVar32;
          (pFVar42->Parents).Hash.InlineData[2] = uVar33;
          (pFVar42->Parents).Hash.InlineData[3] = uVar34;
          (pFVar42->Parents).Hash._padding_ = iVar35;
          (pFVar42->Parents).Hash.SecondaryData = FVar14;
          (pFVar42->Parents).HashSize = iVar36;
          *(undefined4 *)&(pFVar42->Parents).field_0x4c = uVar37;
          pFVar43 = pFVar42;
          pFVar46 = pFVar42;
LAB_146498439:
          *(undefined8 *)&(pFVar46->Children).Elements = local_3a8;
          *(undefined8 *)&(pFVar46->Children).Elements.field_0x8 = uStack_3a0;
          *(undefined8 *)&(pFVar46->Children).Elements.field_0x10 = local_398;
          *(undefined8 *)&(pFVar46->Children).Elements.field_0x18 = uStack_390;
          *(undefined8 *)&(pFVar46->Children).Elements.field_0x20 = local_388;
          *(undefined8 *)&(pFVar46->Children).Elements.field_0x28 = uStack_380;
          *(undefined8 *)&(pFVar46->Children).Elements.field_0x30 = local_378;
          (pFVar46->Children).Hash.InlineData[0] = (undefined1)uStack_370;
          (pFVar46->Children).Hash.InlineData[1] = uStack_370._1_1_;
          (pFVar46->Children).Hash.InlineData[2] = uStack_370._2_1_;
          (pFVar46->Children).Hash.InlineData[3] = uStack_370._3_1_;
          (pFVar46->Children).Hash._padding_ = uStack_370._4_4_;
          (pFVar46->Children).Hash.SecondaryData = local_368;
          *(undefined8 *)&(pFVar46->Children).HashSize = uStack_360;
          pFVar46->bMarkedForEvaluation = (bool)(undefined1)local_358;
          pFVar46->bEvaluating = (bool)local_358._1_1_;
          *(undefined6 *)&pFVar46->field_0xc2 = local_358._2_6_;
LAB_146498480:
          do {
            pFVar46 = pFVar43;
            pFVar43 = pFVar46 + 1;
            if (pFVar49 < pFVar43) goto LAB_146498500;
            pFVar4 = pFVar42->ConstraintTick;
            if ((pFVar4 != (FConstraintTickFunction *)0x0) &&
               (pFVar5 = pFVar46[1].ConstraintTick, pFVar5 != (FConstraintTickFunction *)0x0)) {
              lVar40 = pFVar5->_padding_;
              lVar41 = (longlong)(int)pFVar5->_padding_ * 0x10 + lVar40;
              for (; lVar40 != lVar41; lVar40 = lVar40 + 0x10) {
                if (*(FConstraintTickFunction **)(lVar40 + 8) == pFVar4) goto LAB_146498500;
              }
              lVar40 = pFVar4->_padding_;
              lVar41 = (longlong)(int)pFVar4->_padding_ * 0x10 + lVar40;
              for (; lVar40 != lVar41; lVar40 = lVar40 + 0x10) {
                if (*(FConstraintTickFunction **)(lVar40 + 8) == pFVar5) goto LAB_146498480;
              }
            }
            if (pFVar42->ConstraintIndex < pFVar46[1].ConstraintIndex) goto LAB_146498500;
          } while( true );
        }
        for (; pFVar3 = pFVar42, pFVar43 = pFVar42, pFVar42 < pFVar49; pFVar49 = pFVar49 + -1) {
          while (pFVar44 = pFVar3, pFVar3 = pFVar43 + 1, pFVar3 <= pFVar49) {
            pFVar4 = pFVar44->ConstraintTick;
            if ((pFVar4 != (FConstraintTickFunction *)0x0) &&
               (pFVar5 = pFVar43[1].ConstraintTick, pFVar5 != (FConstraintTickFunction *)0x0)) {
              lVar40 = pFVar5->_padding_;
              lVar41 = (longlong)(int)pFVar5->_padding_ * 0x10 + lVar40;
              for (; lVar40 != lVar41; lVar40 = lVar40 + 0x10) {
                if (*(FConstraintTickFunction **)(lVar40 + 8) == pFVar4) {
                  bVar38 = true;
                  goto LAB_146498a4e;
                }
              }
              lVar40 = pFVar4->_padding_;
              lVar41 = (longlong)(int)pFVar4->_padding_ * 0x10 + lVar40;
              for (; lVar40 != lVar41; lVar40 = lVar40 + 0x10) {
                if (*(FConstraintTickFunction **)(lVar40 + 8) == pFVar5) {
                  bVar38 = false;
                  goto LAB_146498a4e;
                }
              }
            }
            bVar38 = pFVar44->ConstraintIndex < pFVar43[1].ConstraintIndex;
LAB_146498a4e:
            pFVar43 = pFVar3;
            if (!bVar38) {
              pFVar3 = pFVar44;
            }
          }
          local_418._0_4_ = (pFVar44->ConstraintID).A;
          local_418._4_4_ = (pFVar44->ConstraintID).B;
          FStack_410 = *(ForElementType<FSetElementId> *)&(pFVar44->ConstraintID).C;
          local_358._0_1_ = pFVar44->bMarkedForEvaluation;
          local_358._1_1_ = pFVar44->bEvaluating;
          local_358._2_6_ = *(undefined6 *)&pFVar44->field_0xc2;
          local_408 = pFVar44->ConstraintTick;
          uStack_400._0_4_ = pFVar44->NodeIndex;
          uStack_400._4_4_ = pFVar44->ConstraintIndex;
          local_3f8 = *(undefined8 *)&(pFVar44->Parents).Elements;
          uStack_3f0 = *(undefined8 *)&(pFVar44->Parents).Elements.field_0x8;
          puVar1 = &(pFVar44->Children).Elements.field_0x10;
          local_3e8 = *(undefined8 *)&(pFVar44->Parents).Elements.field_0x10;
          uStack_3e0 = *(undefined8 *)&(pFVar44->Parents).Elements.field_0x18;
          local_3d8 = *(undefined8 *)&(pFVar44->Parents).Elements.field_0x20;
          uStack_3d0 = *(undefined8 *)&(pFVar44->Parents).Elements.field_0x28;
          local_3c8 = *(undefined8 *)&(pFVar44->Parents).Elements.field_0x30;
          uStack_3c0._0_1_ = (pFVar44->Parents).Hash.InlineData[0];
          uStack_3c0._1_1_ = (pFVar44->Parents).Hash.InlineData[1];
          uStack_3c0._2_1_ = (pFVar44->Parents).Hash.InlineData[2];
          uStack_3c0._3_1_ = (pFVar44->Parents).Hash.InlineData[3];
          uStack_3c0._4_4_ = (pFVar44->Parents).Hash._padding_;
          local_3b8 = (pFVar44->Parents).Hash.SecondaryData;
          uStack_3b0 = *(undefined8 *)&(pFVar44->Parents).HashSize;
          local_3a8 = *(undefined8 *)&(pFVar44->Children).Elements;
          uStack_3a0 = *(undefined8 *)&(pFVar44->Children).Elements.field_0x8;
          local_398 = *(undefined8 *)puVar1;
          uStack_390 = *(undefined8 *)&(pFVar44->Children).Elements.field_0x18;
          local_388 = *(undefined8 *)&(pFVar44->Children).Elements.field_0x20;
          uStack_380 = *(undefined8 *)&(pFVar44->Children).Elements.field_0x28;
          local_378 = *(undefined8 *)&(pFVar44->Children).Elements.field_0x30;
          uStack_370._0_1_ = (pFVar44->Children).Hash.InlineData[0];
          uStack_370._1_1_ = (pFVar44->Children).Hash.InlineData[1];
          uStack_370._2_1_ = (pFVar44->Children).Hash.InlineData[2];
          uStack_370._3_1_ = (pFVar44->Children).Hash.InlineData[3];
          uStack_370._4_4_ = (pFVar44->Children).Hash._padding_;
          local_368 = (pFVar44->Children).Hash.SecondaryData;
          uStack_360 = *(undefined8 *)&(pFVar44->Children).HashSize;
          uVar16 = (pFVar49->ConstraintID).B;
          uVar17 = (pFVar49->ConstraintID).C;
          uVar18 = (pFVar49->ConstraintID).D;
          (pFVar44->ConstraintID).A = (pFVar49->ConstraintID).A;
          (pFVar44->ConstraintID).B = uVar16;
          (pFVar44->ConstraintID).C = uVar17;
          (pFVar44->ConstraintID).D = uVar18;
          iVar48 = pFVar49->NodeIndex;
          iVar39 = pFVar49->ConstraintIndex;
          pFVar44->ConstraintTick = pFVar49->ConstraintTick;
          pFVar44->NodeIndex = iVar48;
          pFVar44->ConstraintIndex = iVar39;
          uVar6 = *(undefined8 *)&(pFVar49->Parents).Elements.field_0x8;
          *(undefined8 *)&(pFVar44->Parents).Elements = *(undefined8 *)&(pFVar49->Parents).Elements;
          *(undefined8 *)&(pFVar44->Parents).Elements.field_0x8 = uVar6;
          uVar6 = *(undefined8 *)&(pFVar49->Parents).Elements.field_0x18;
          *(undefined8 *)&(pFVar44->Parents).Elements.field_0x10 =
               *(undefined8 *)&(pFVar49->Parents).Elements.field_0x10;
          *(undefined8 *)&(pFVar44->Parents).Elements.field_0x18 = uVar6;
          uVar6 = *(undefined8 *)&(pFVar49->Parents).Elements.field_0x28;
          *(undefined8 *)&(pFVar44->Parents).Elements.field_0x20 =
               *(undefined8 *)&(pFVar49->Parents).Elements.field_0x20;
          *(undefined8 *)&(pFVar44->Parents).Elements.field_0x28 = uVar6;
          uVar19 = (pFVar49->Parents).Hash.InlineData[0];
          uVar20 = (pFVar49->Parents).Hash.InlineData[1];
          uVar21 = (pFVar49->Parents).Hash.InlineData[2];
          uVar22 = (pFVar49->Parents).Hash.InlineData[3];
          iVar48 = (pFVar49->Parents).Hash._padding_;
          *(undefined8 *)&(pFVar44->Parents).Elements.field_0x30 =
               *(undefined8 *)&(pFVar49->Parents).Elements.field_0x30;
          (pFVar44->Parents).Hash.InlineData[0] = uVar19;
          (pFVar44->Parents).Hash.InlineData[1] = uVar20;
          (pFVar44->Parents).Hash.InlineData[2] = uVar21;
          (pFVar44->Parents).Hash.InlineData[3] = uVar22;
          (pFVar44->Parents).Hash._padding_ = iVar48;
          iVar48 = (pFVar49->Parents).HashSize;
          uVar23 = *(undefined4 *)&(pFVar49->Parents).field_0x4c;
          (pFVar44->Parents).Hash.SecondaryData = (pFVar49->Parents).Hash.SecondaryData;
          (pFVar44->Parents).HashSize = iVar48;
          *(undefined4 *)&(pFVar44->Parents).field_0x4c = uVar23;
          uVar6 = *(undefined8 *)&(pFVar49->Children).Elements.field_0x8;
          *(undefined8 *)&(pFVar44->Children).Elements =
               *(undefined8 *)&(pFVar49->Children).Elements;
          *(undefined8 *)&(pFVar44->Children).Elements.field_0x8 = uVar6;
          uVar6 = *(undefined8 *)&(pFVar49->Children).Elements.field_0x18;
          *(undefined8 *)puVar1 = *(undefined8 *)&(pFVar49->Children).Elements.field_0x10;
          *(undefined8 *)&(pFVar44->Children).Elements.field_0x18 = uVar6;
          uVar6 = *(undefined8 *)&(pFVar49->Children).Elements.field_0x28;
          *(undefined8 *)&(pFVar44->Children).Elements.field_0x20 =
               *(undefined8 *)&(pFVar49->Children).Elements.field_0x20;
          *(undefined8 *)&(pFVar44->Children).Elements.field_0x28 = uVar6;
          uVar19 = (pFVar49->Children).Hash.InlineData[0];
          uVar20 = (pFVar49->Children).Hash.InlineData[1];
          uVar21 = (pFVar49->Children).Hash.InlineData[2];
          uVar22 = (pFVar49->Children).Hash.InlineData[3];
          iVar48 = (pFVar49->Children).Hash._padding_;
          *(undefined8 *)&(pFVar44->Children).Elements.field_0x30 =
               *(undefined8 *)&(pFVar49->Children).Elements.field_0x30;
          (pFVar44->Children).Hash.InlineData[0] = uVar19;
          (pFVar44->Children).Hash.InlineData[1] = uVar20;
          (pFVar44->Children).Hash.InlineData[2] = uVar21;
          (pFVar44->Children).Hash.InlineData[3] = uVar22;
          (pFVar44->Children).Hash._padding_ = iVar48;
          iVar48 = (pFVar49->Children).HashSize;
          uVar23 = *(undefined4 *)&(pFVar49->Children).field_0x4c;
          (pFVar44->Children).Hash.SecondaryData = (pFVar49->Children).Hash.SecondaryData;
          (pFVar44->Children).HashSize = iVar48;
          *(undefined4 *)&(pFVar44->Children).field_0x4c = uVar23;
          bVar38 = pFVar49->bEvaluating;
          uVar24 = *(undefined6 *)&pFVar49->field_0xc2;
          pFVar44->bMarkedForEvaluation = pFVar49->bMarkedForEvaluation;
          pFVar44->bEvaluating = bVar38;
          *(undefined6 *)&pFVar44->field_0xc2 = uVar24;
          (pFVar49->ConstraintID).A = (undefined4)local_418;
          (pFVar49->ConstraintID).B = local_418._4_4_;
          *(ForElementType<FSetElementId> *)&(pFVar49->ConstraintID).C = FStack_410;
          pFVar49->ConstraintTick = local_408;
          pFVar49->NodeIndex = (undefined4)uStack_400;
          pFVar49->ConstraintIndex = uStack_400._4_4_;
          *(undefined8 *)&(pFVar49->Parents).Elements = local_3f8;
          *(undefined8 *)&(pFVar49->Parents).Elements.field_0x8 = uStack_3f0;
          *(undefined8 *)&(pFVar49->Parents).Elements.field_0x10 = local_3e8;
          *(undefined8 *)&(pFVar49->Parents).Elements.field_0x18 = uStack_3e0;
          *(undefined8 *)&(pFVar49->Parents).Elements.field_0x20 = local_3d8;
          *(undefined8 *)&(pFVar49->Parents).Elements.field_0x28 = uStack_3d0;
          *(undefined8 *)&(pFVar49->Parents).Elements.field_0x30 = local_3c8;
          (pFVar49->Parents).Hash.InlineData[0] = (undefined1)uStack_3c0;
          (pFVar49->Parents).Hash.InlineData[1] = uStack_3c0._1_1_;
          (pFVar49->Parents).Hash.InlineData[2] = uStack_3c0._2_1_;
          (pFVar49->Parents).Hash.InlineData[3] = uStack_3c0._3_1_;
          (pFVar49->Parents).Hash._padding_ = uStack_3c0._4_4_;
          (pFVar49->Parents).Hash.SecondaryData = local_3b8;
          *(undefined8 *)&(pFVar49->Parents).HashSize = uStack_3b0;
          *(undefined8 *)&(pFVar49->Children).Elements = local_3a8;
          *(undefined8 *)&(pFVar49->Children).Elements.field_0x8 = uStack_3a0;
          *(undefined8 *)&(pFVar49->Children).Elements.field_0x10 = local_398;
          *(undefined8 *)&(pFVar49->Children).Elements.field_0x18 = uStack_390;
          *(undefined8 *)&(pFVar49->Children).Elements.field_0x20 = local_388;
          *(undefined8 *)&(pFVar49->Children).Elements.field_0x28 = uStack_380;
          *(undefined8 *)&(pFVar49->Children).Elements.field_0x30 = local_378;
          (pFVar49->Children).Hash.InlineData[0] = (undefined1)uStack_370;
          (pFVar49->Children).Hash.InlineData[1] = uStack_370._1_1_;
          (pFVar49->Children).Hash.InlineData[2] = uStack_370._2_1_;
          (pFVar49->Children).Hash.InlineData[3] = uStack_370._3_1_;
          (pFVar49->Children).Hash._padding_ = uStack_370._4_4_;
          (pFVar49->Children).Hash.SecondaryData = local_368;
          *(undefined8 *)&(pFVar49->Children).HashSize = uStack_360;
          pFVar49->bMarkedForEvaluation = (bool)(undefined1)local_358;
          pFVar49->bEvaluating = (bool)local_358._1_1_;
          *(undefined6 *)&pFVar49->field_0xc2 = local_358._2_6_;
        }
        goto LAB_146498e70;
      }
LAB_14649895a:
      local_458[0] = param_4;
      local_448[0] = param_3;
      local_420 = pFVar3;
      if (iVar48 < 0) {
        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                           ("Num >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                            ,0xb9,L"Algo::HeapSortInternal called with negative count");
        if (bVar38) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
LAB_146498c1a:
        local_438[0].Predicate = local_458;
        local_440.Predicate = local_458;
        local_450[0] = param_3;
        if ((iVar48 < 0) &&
           (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                               ("Num >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                                ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar38))
        {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar39 = (iVar48 + -2) / 2;
        HeapSiftDown<FConstraintNode,int,FIdentityFunctor,TReversePredicate<_UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes_::__l35::<lambda_3>_>_>
                  (pFVar43,iVar39,iVar48,local_450,&local_440);
        while (iVar39 != 0) {
          iVar39 = iVar39 + -1;
          HeapSiftDown<FConstraintNode,int,FIdentityFunctor,TReversePredicate<_UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes_::__l35::<lambda_3>_>_>
                    (pFVar43,iVar39,iVar48,local_450,&local_440);
        }
        iVar48 = iVar48 + -1;
        if (0 < iVar48) {
          lVar40 = (longlong)iVar48 * 200;
          do {
            local_418._0_4_ = (pFVar43->ConstraintID).A;
            local_418._4_4_ = (pFVar43->ConstraintID).B;
            FStack_410 = *(ForElementType<FSetElementId> *)&(pFVar43->ConstraintID).C;
            local_358._0_1_ = pFVar43->bMarkedForEvaluation;
            local_358._1_1_ = pFVar43->bEvaluating;
            local_358._2_6_ = *(undefined6 *)&pFVar43->field_0xc2;
            puVar2 = (pFVar43->Parents).Hash.InlineData + lVar40 + -0x58;
            local_408 = pFVar43->ConstraintTick;
            uStack_400._0_4_ = pFVar43->NodeIndex;
            uStack_400._4_4_ = pFVar43->ConstraintIndex;
            local_3f8 = *(undefined8 *)&(pFVar43->Parents).Elements;
            uStack_3f0 = *(undefined8 *)&(pFVar43->Parents).Elements.field_0x8;
            local_3e8 = *(undefined8 *)&(pFVar43->Parents).Elements.field_0x10;
            uStack_3e0 = *(undefined8 *)&(pFVar43->Parents).Elements.field_0x18;
            local_3d8 = *(undefined8 *)&(pFVar43->Parents).Elements.field_0x20;
            uStack_3d0 = *(undefined8 *)&(pFVar43->Parents).Elements.field_0x28;
            local_3c8 = *(undefined8 *)&(pFVar43->Parents).Elements.field_0x30;
            uStack_3c0._0_1_ = (pFVar43->Parents).Hash.InlineData[0];
            uStack_3c0._1_1_ = (pFVar43->Parents).Hash.InlineData[1];
            uStack_3c0._2_1_ = (pFVar43->Parents).Hash.InlineData[2];
            uStack_3c0._3_1_ = (pFVar43->Parents).Hash.InlineData[3];
            uStack_3c0._4_4_ = (pFVar43->Parents).Hash._padding_;
            local_3b8 = (pFVar43->Parents).Hash.SecondaryData;
            uStack_3b0 = *(undefined8 *)&(pFVar43->Parents).HashSize;
            local_3a8 = *(undefined8 *)&(pFVar43->Children).Elements;
            uStack_3a0 = *(undefined8 *)&(pFVar43->Children).Elements.field_0x8;
            local_398 = *(undefined8 *)&(pFVar43->Children).Elements.field_0x10;
            uStack_390 = *(undefined8 *)&(pFVar43->Children).Elements.field_0x18;
            local_388 = *(undefined8 *)&(pFVar43->Children).Elements.field_0x20;
            uStack_380 = *(undefined8 *)&(pFVar43->Children).Elements.field_0x28;
            local_378 = *(undefined8 *)&(pFVar43->Children).Elements.field_0x30;
            uStack_370._0_1_ = (pFVar43->Children).Hash.InlineData[0];
            uStack_370._1_1_ = (pFVar43->Children).Hash.InlineData[1];
            uStack_370._2_1_ = (pFVar43->Children).Hash.InlineData[2];
            uStack_370._3_1_ = (pFVar43->Children).Hash.InlineData[3];
            uStack_370._4_4_ = (pFVar43->Children).Hash._padding_;
            local_368 = (pFVar43->Children).Hash.SecondaryData;
            uStack_360 = *(undefined8 *)&(pFVar43->Children).HashSize;
            uVar6 = *(undefined8 *)puVar2;
            FVar14 = *(ForElementType<FSetElementId> *)(puVar2 + 8);
            (pFVar43->ConstraintID).A = (int)uVar6;
            (pFVar43->ConstraintID).B = (int)((ulonglong)uVar6 >> 0x20);
            *(ForElementType<FSetElementId> *)&(pFVar43->ConstraintID).C = FVar14;
            uVar6 = *(undefined8 *)(puVar2 + 0x18);
            pFVar43->ConstraintTick = *(FConstraintTickFunction **)(puVar2 + 0x10);
            pFVar43->NodeIndex = (int)uVar6;
            pFVar43->ConstraintIndex = (int)((ulonglong)uVar6 >> 0x20);
            uVar6 = *(undefined8 *)(puVar2 + 0x28);
            *(undefined8 *)&(pFVar43->Parents).Elements = *(undefined8 *)(puVar2 + 0x20);
            *(undefined8 *)&(pFVar43->Parents).Elements.field_0x8 = uVar6;
            uVar6 = *(undefined8 *)(puVar2 + 0x38);
            *(undefined8 *)&(pFVar43->Parents).Elements.field_0x10 = *(undefined8 *)(puVar2 + 0x30);
            *(undefined8 *)&(pFVar43->Parents).Elements.field_0x18 = uVar6;
            uVar6 = *(undefined8 *)(puVar2 + 0x48);
            *(undefined8 *)&(pFVar43->Parents).Elements.field_0x20 = *(undefined8 *)(puVar2 + 0x40);
            *(undefined8 *)&(pFVar43->Parents).Elements.field_0x28 = uVar6;
            uVar6 = *(undefined8 *)(puVar2 + 0x58);
            *(undefined8 *)&(pFVar43->Parents).Elements.field_0x30 = *(undefined8 *)(puVar2 + 0x50);
            (pFVar43->Parents).Hash.InlineData[0] = (char)uVar6;
            (pFVar43->Parents).Hash.InlineData[1] = (char)((ulonglong)uVar6 >> 8);
            (pFVar43->Parents).Hash.InlineData[2] = (char)((ulonglong)uVar6 >> 0x10);
            (pFVar43->Parents).Hash.InlineData[3] = (char)((ulonglong)uVar6 >> 0x18);
            (pFVar43->Parents).Hash._padding_ = (int)((ulonglong)uVar6 >> 0x20);
            uVar6 = *(undefined8 *)(puVar2 + 0x68);
            (pFVar43->Parents).Hash.SecondaryData =
                 *(ForElementType<FSetElementId> *)(puVar2 + 0x60);
            *(undefined8 *)&(pFVar43->Parents).HashSize = uVar6;
            uVar6 = *(undefined8 *)(puVar2 + 0x78);
            *(undefined8 *)&(pFVar43->Children).Elements = *(undefined8 *)(puVar2 + 0x70);
            *(undefined8 *)&(pFVar43->Children).Elements.field_0x8 = uVar6;
            uVar6 = *(undefined8 *)(puVar2 + 0x88);
            *(undefined8 *)&(pFVar43->Children).Elements.field_0x10 = *(undefined8 *)(puVar2 + 0x80)
            ;
            *(undefined8 *)&(pFVar43->Children).Elements.field_0x18 = uVar6;
            uVar6 = *(undefined8 *)(puVar2 + 0x98);
            *(undefined8 *)&(pFVar43->Children).Elements.field_0x20 = *(undefined8 *)(puVar2 + 0x90)
            ;
            *(undefined8 *)&(pFVar43->Children).Elements.field_0x28 = uVar6;
            uVar6 = *(undefined8 *)(puVar2 + 0xa8);
            *(undefined8 *)&(pFVar43->Children).Elements.field_0x30 = *(undefined8 *)(puVar2 + 0xa0)
            ;
            (pFVar43->Children).Hash.InlineData[0] = (char)uVar6;
            (pFVar43->Children).Hash.InlineData[1] = (char)((ulonglong)uVar6 >> 8);
            (pFVar43->Children).Hash.InlineData[2] = (char)((ulonglong)uVar6 >> 0x10);
            (pFVar43->Children).Hash.InlineData[3] = (char)((ulonglong)uVar6 >> 0x18);
            (pFVar43->Children).Hash._padding_ = (int)((ulonglong)uVar6 >> 0x20);
            uVar6 = *(undefined8 *)(puVar2 + 0xb8);
            (pFVar43->Children).Hash.SecondaryData =
                 *(ForElementType<FSetElementId> *)(puVar2 + 0xb0);
            *(undefined8 *)&(pFVar43->Children).HashSize = uVar6;
            uVar6 = *(undefined8 *)(puVar2 + 0xc0);
            pFVar43->bMarkedForEvaluation = (bool)(char)uVar6;
            pFVar43->bEvaluating = (bool)(char)((ulonglong)uVar6 >> 8);
            *(int6 *)&pFVar43->field_0xc2 = (int6)((ulonglong)uVar6 >> 0x10);
            *(undefined8 *)puVar2 = local_418;
            *(ForElementType<FSetElementId> *)(puVar2 + 8) = FStack_410;
            *(FConstraintTickFunction **)(puVar2 + 0x10) = local_408;
            *(undefined8 *)(puVar2 + 0x18) = uStack_400;
            *(undefined8 *)(puVar2 + 0x20) = local_3f8;
            *(undefined8 *)(puVar2 + 0x28) = uStack_3f0;
            *(undefined8 *)(puVar2 + 0x30) = local_3e8;
            *(undefined8 *)(puVar2 + 0x38) = uStack_3e0;
            *(undefined8 *)(puVar2 + 0x40) = local_3d8;
            *(undefined8 *)(puVar2 + 0x48) = uStack_3d0;
            *(undefined8 *)(puVar2 + 0x50) = local_3c8;
            *(undefined8 *)(puVar2 + 0x58) = uStack_3c0;
            *(ForElementType<FSetElementId> *)(puVar2 + 0x60) = local_3b8;
            *(undefined8 *)(puVar2 + 0x68) = uStack_3b0;
            *(undefined8 *)(puVar2 + 0x70) = local_3a8;
            *(undefined8 *)(puVar2 + 0x78) = uStack_3a0;
            *(undefined8 *)(puVar2 + 0x80) = local_398;
            *(undefined8 *)(puVar2 + 0x88) = uStack_390;
            *(undefined8 *)(puVar2 + 0x90) = local_388;
            *(undefined8 *)(puVar2 + 0x98) = uStack_380;
            *(undefined8 *)(puVar2 + 0xa0) = local_378;
            *(undefined8 *)(puVar2 + 0xa8) = uStack_370;
            *(ForElementType<FSetElementId> *)(puVar2 + 0xb0) = local_368;
            *(undefined8 *)(puVar2 + 0xb8) = uStack_360;
            *(undefined8 *)(puVar2 + 0xc0) = local_358;
            HeapSiftDown<FConstraintNode,int,FIdentityFunctor,TReversePredicate<_UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes_::__l35::<lambda_3>_>_>
                      (pFVar43,0,iVar48,local_448,local_438);
            iVar48 = iVar48 + -1;
            lVar40 = lVar40 + -200;
          } while (0 < iVar48);
        }
      }
      else if (iVar48 != 0) goto LAB_146498c1a;
LAB_146498e70:
      ppFVar47 = ppFVar47 + -3;
    } while (&local_348 <= ppFVar47);
  }
  return;
LAB_146498500:
  pFVar45 = pFVar44;
  pFVar44 = pFVar45 + -1;
  if (pFVar44 <= pFVar42) goto LAB_146498580;
  pFVar4 = pFVar45[-1].ConstraintTick;
  if ((pFVar4 != (FConstraintTickFunction *)0x0) &&
     (pFVar5 = pFVar42->ConstraintTick, pFVar5 != (FConstraintTickFunction *)0x0)) {
    lVar40 = pFVar5->_padding_;
    lVar41 = (longlong)(int)pFVar5->_padding_ * 0x10 + lVar40;
    for (; lVar40 != lVar41; lVar40 = lVar40 + 0x10) {
      if (*(FConstraintTickFunction **)(lVar40 + 8) == pFVar4) goto LAB_146498580;
    }
    lVar40 = pFVar4->_padding_;
    lVar41 = (longlong)(int)pFVar4->_padding_ * 0x10 + lVar40;
    for (; lVar40 != lVar41; lVar40 = lVar40 + 0x10) {
      if (*(FConstraintTickFunction **)(lVar40 + 8) == pFVar5) goto LAB_146498500;
    }
  }
  if (pFVar45[-1].ConstraintIndex < pFVar42->ConstraintIndex) goto LAB_146498580;
  goto LAB_146498500;
LAB_146498580:
  if (pFVar44 < pFVar43) goto LAB_1464986f2;
  uVar25 = (pFVar43->ConstraintID).A;
  uVar26 = (pFVar43->ConstraintID).B;
  uVar27 = pFVar46[1].ConstraintID.C;
  uVar28 = pFVar46[1].ConstraintID.D;
  local_358._0_1_ = pFVar46[1].bMarkedForEvaluation;
  local_358._1_1_ = pFVar46[1].bEvaluating;
  local_358._2_6_ = *(undefined6 *)&pFVar46[1].field_0xc2;
  pFVar4 = pFVar46[1].ConstraintTick;
  iVar29 = pFVar46[1].NodeIndex;
  iVar30 = pFVar46[1].ConstraintIndex;
  uVar6 = *(undefined8 *)&pFVar46[1].Parents.Elements;
  uVar8 = *(undefined8 *)&pFVar46[1].Parents.Elements.field_0x8;
  uVar9 = *(undefined8 *)&pFVar46[1].Parents.Elements.field_0x10;
  uVar10 = *(undefined8 *)&pFVar46[1].Parents.Elements.field_0x18;
  uVar11 = *(undefined8 *)&pFVar46[1].Parents.Elements.field_0x20;
  uVar12 = *(undefined8 *)&pFVar46[1].Parents.Elements.field_0x28;
  uVar13 = *(undefined8 *)&pFVar46[1].Parents.Elements.field_0x30;
  uVar31 = pFVar46[1].Parents.Hash.InlineData[0];
  uVar32 = pFVar46[1].Parents.Hash.InlineData[1];
  uVar33 = pFVar46[1].Parents.Hash.InlineData[2];
  uVar34 = pFVar46[1].Parents.Hash.InlineData[3];
  iVar35 = pFVar46[1].Parents.Hash._padding_;
  FVar14 = pFVar46[1].Parents.Hash.SecondaryData;
  iVar36 = pFVar46[1].Parents.HashSize;
  uVar37 = *(undefined4 *)&pFVar46[1].Parents.field_0x4c;
  local_3a8 = *(undefined8 *)&pFVar46[1].Children.Elements;
  uStack_3a0 = *(undefined8 *)&pFVar46[1].Children.Elements.field_0x8;
  local_398 = *(undefined8 *)&pFVar46[1].Children.Elements.field_0x10;
  uStack_390 = *(undefined8 *)&pFVar46[1].Children.Elements.field_0x18;
  local_388 = *(undefined8 *)&pFVar46[1].Children.Elements.field_0x20;
  uStack_380 = *(undefined8 *)&pFVar46[1].Children.Elements.field_0x28;
  local_378 = *(undefined8 *)&pFVar46[1].Children.Elements.field_0x30;
  uStack_370._0_1_ = pFVar46[1].Children.Hash.InlineData[0];
  uStack_370._1_1_ = pFVar46[1].Children.Hash.InlineData[1];
  uStack_370._2_1_ = pFVar46[1].Children.Hash.InlineData[2];
  uStack_370._3_1_ = pFVar46[1].Children.Hash.InlineData[3];
  uStack_370._4_4_ = pFVar46[1].Children.Hash._padding_;
  local_368 = pFVar46[1].Children.Hash.SecondaryData;
  uStack_360 = *(undefined8 *)&pFVar46[1].Children.HashSize;
  uVar16 = (pFVar44->ConstraintID).B;
  uVar17 = pFVar45[-1].ConstraintID.C;
  uVar18 = pFVar45[-1].ConstraintID.D;
  (pFVar43->ConstraintID).A = (pFVar44->ConstraintID).A;
  (pFVar43->ConstraintID).B = uVar16;
  pFVar46[1].ConstraintID.C = uVar17;
  pFVar46[1].ConstraintID.D = uVar18;
  iVar48 = pFVar45[-1].NodeIndex;
  iVar39 = pFVar45[-1].ConstraintIndex;
  pFVar46[1].ConstraintTick = pFVar45[-1].ConstraintTick;
  pFVar46[1].NodeIndex = iVar48;
  pFVar46[1].ConstraintIndex = iVar39;
  uVar15 = *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x8;
  *(undefined8 *)&pFVar46[1].Parents.Elements = *(undefined8 *)&pFVar45[-1].Parents.Elements;
  *(undefined8 *)&pFVar46[1].Parents.Elements.field_0x8 = uVar15;
  uVar15 = *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x18;
  *(undefined8 *)&pFVar46[1].Parents.Elements.field_0x10 =
       *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x10;
  *(undefined8 *)&pFVar46[1].Parents.Elements.field_0x18 = uVar15;
  uVar15 = *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x28;
  *(undefined8 *)&pFVar46[1].Parents.Elements.field_0x20 =
       *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x20;
  *(undefined8 *)&pFVar46[1].Parents.Elements.field_0x28 = uVar15;
  uVar19 = pFVar45[-1].Parents.Hash.InlineData[0];
  uVar20 = pFVar45[-1].Parents.Hash.InlineData[1];
  uVar21 = pFVar45[-1].Parents.Hash.InlineData[2];
  uVar22 = pFVar45[-1].Parents.Hash.InlineData[3];
  iVar48 = pFVar45[-1].Parents.Hash._padding_;
  *(undefined8 *)&pFVar46[1].Parents.Elements.field_0x30 =
       *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x30;
  pFVar46[1].Parents.Hash.InlineData[0] = uVar19;
  pFVar46[1].Parents.Hash.InlineData[1] = uVar20;
  pFVar46[1].Parents.Hash.InlineData[2] = uVar21;
  pFVar46[1].Parents.Hash.InlineData[3] = uVar22;
  pFVar46[1].Parents.Hash._padding_ = iVar48;
  iVar48 = pFVar45[-1].Parents.HashSize;
  uVar23 = *(undefined4 *)&pFVar45[-1].Parents.field_0x4c;
  pFVar46[1].Parents.Hash.SecondaryData = pFVar45[-1].Parents.Hash.SecondaryData;
  pFVar46[1].Parents.HashSize = iVar48;
  *(undefined4 *)&pFVar46[1].Parents.field_0x4c = uVar23;
  uVar15 = *(undefined8 *)&pFVar45[-1].Children.Elements.field_0x8;
  *(undefined8 *)&pFVar46[1].Children.Elements = *(undefined8 *)&pFVar45[-1].Children.Elements;
  *(undefined8 *)&pFVar46[1].Children.Elements.field_0x8 = uVar15;
  uVar15 = *(undefined8 *)&pFVar45[-1].Children.Elements.field_0x18;
  *(undefined8 *)&pFVar46[1].Children.Elements.field_0x10 =
       *(undefined8 *)&pFVar45[-1].Children.Elements.field_0x10;
  *(undefined8 *)&pFVar46[1].Children.Elements.field_0x18 = uVar15;
  uVar15 = *(undefined8 *)&pFVar45[-1].Children.Elements.field_0x28;
  *(undefined8 *)&pFVar46[1].Children.Elements.field_0x20 =
       *(undefined8 *)&pFVar45[-1].Children.Elements.field_0x20;
  *(undefined8 *)&pFVar46[1].Children.Elements.field_0x28 = uVar15;
  uVar19 = pFVar45[-1].Children.Hash.InlineData[0];
  uVar20 = pFVar45[-1].Children.Hash.InlineData[1];
  uVar21 = pFVar45[-1].Children.Hash.InlineData[2];
  uVar22 = pFVar45[-1].Children.Hash.InlineData[3];
  iVar48 = pFVar45[-1].Children.Hash._padding_;
  *(undefined8 *)&pFVar46[1].Children.Elements.field_0x30 =
       *(undefined8 *)&pFVar45[-1].Children.Elements.field_0x30;
  pFVar46[1].Children.Hash.InlineData[0] = uVar19;
  pFVar46[1].Children.Hash.InlineData[1] = uVar20;
  pFVar46[1].Children.Hash.InlineData[2] = uVar21;
  pFVar46[1].Children.Hash.InlineData[3] = uVar22;
  pFVar46[1].Children.Hash._padding_ = iVar48;
  iVar48 = pFVar45[-1].Children.HashSize;
  uVar23 = *(undefined4 *)&pFVar45[-1].Children.field_0x4c;
  pFVar46[1].Children.Hash.SecondaryData = pFVar45[-1].Children.Hash.SecondaryData;
  pFVar46[1].Children.HashSize = iVar48;
  *(undefined4 *)&pFVar46[1].Children.field_0x4c = uVar23;
  bVar38 = pFVar45[-1].bEvaluating;
  uVar24 = *(undefined6 *)&pFVar45[-1].field_0xc2;
  pFVar46[1].bMarkedForEvaluation = pFVar45[-1].bMarkedForEvaluation;
  pFVar46[1].bEvaluating = bVar38;
  *(undefined6 *)&pFVar46[1].field_0xc2 = uVar24;
  pFVar46 = pFVar45 + -1;
  (pFVar44->ConstraintID).A = uVar25;
  (pFVar44->ConstraintID).B = uVar26;
  pFVar45[-1].ConstraintID.C = uVar27;
  pFVar45[-1].ConstraintID.D = uVar28;
  pFVar45[-1].ConstraintTick = pFVar4;
  pFVar45[-1].NodeIndex = iVar29;
  pFVar45[-1].ConstraintIndex = iVar30;
  *(undefined8 *)&pFVar45[-1].Parents.Elements = uVar6;
  *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x8 = uVar8;
  *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x10 = uVar9;
  *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x18 = uVar10;
  *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x20 = uVar11;
  *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x28 = uVar12;
  *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x30 = uVar13;
  pFVar45[-1].Parents.Hash.InlineData[0] = uVar31;
  pFVar45[-1].Parents.Hash.InlineData[1] = uVar32;
  pFVar45[-1].Parents.Hash.InlineData[2] = uVar33;
  pFVar45[-1].Parents.Hash.InlineData[3] = uVar34;
  pFVar45[-1].Parents.Hash._padding_ = iVar35;
  pFVar45[-1].Parents.Hash.SecondaryData = FVar14;
  pFVar45[-1].Parents.HashSize = iVar36;
  *(undefined4 *)&pFVar45[-1].Parents.field_0x4c = uVar37;
  goto LAB_146498439;
LAB_1464986f2:
  local_418._0_4_ = (pFVar42->ConstraintID).A;
  local_418._4_4_ = (pFVar42->ConstraintID).B;
  FStack_410 = *(ForElementType<FSetElementId> *)&(pFVar42->ConstraintID).C;
  local_358._0_1_ = pFVar42->bMarkedForEvaluation;
  local_358._1_1_ = pFVar42->bEvaluating;
  local_358._2_6_ = *(undefined6 *)&pFVar42->field_0xc2;
  local_408 = pFVar42->ConstraintTick;
  uStack_400._0_4_ = pFVar42->NodeIndex;
  uStack_400._4_4_ = pFVar42->ConstraintIndex;
  local_3f8 = *(undefined8 *)&(pFVar42->Parents).Elements;
  uStack_3f0 = *(undefined8 *)&(pFVar42->Parents).Elements.field_0x8;
  local_3e8 = *(undefined8 *)&(pFVar42->Parents).Elements.field_0x10;
  uStack_3e0 = *(undefined8 *)&(pFVar42->Parents).Elements.field_0x18;
  local_3d8 = *(undefined8 *)&(pFVar42->Parents).Elements.field_0x20;
  uStack_3d0 = *(undefined8 *)&(pFVar42->Parents).Elements.field_0x28;
  local_3c8 = *(undefined8 *)&(pFVar42->Parents).Elements.field_0x30;
  uStack_3c0._0_1_ = (pFVar42->Parents).Hash.InlineData[0];
  uStack_3c0._1_1_ = (pFVar42->Parents).Hash.InlineData[1];
  uStack_3c0._2_1_ = (pFVar42->Parents).Hash.InlineData[2];
  uStack_3c0._3_1_ = (pFVar42->Parents).Hash.InlineData[3];
  uStack_3c0._4_4_ = (pFVar42->Parents).Hash._padding_;
  local_3b8 = (pFVar42->Parents).Hash.SecondaryData;
  uStack_3b0 = *(undefined8 *)&(pFVar42->Parents).HashSize;
  local_3a8 = *(undefined8 *)&(pFVar42->Children).Elements;
  uStack_3a0 = *(undefined8 *)&(pFVar42->Children).Elements.field_0x8;
  local_398 = *(undefined8 *)&(pFVar42->Children).Elements.field_0x10;
  uStack_390 = *(undefined8 *)&(pFVar42->Children).Elements.field_0x18;
  local_388 = *(undefined8 *)&(pFVar42->Children).Elements.field_0x20;
  uStack_380 = *(undefined8 *)&(pFVar42->Children).Elements.field_0x28;
  local_378 = *(undefined8 *)&(pFVar42->Children).Elements.field_0x30;
  uStack_370._0_1_ = (pFVar42->Children).Hash.InlineData[0];
  uStack_370._1_1_ = (pFVar42->Children).Hash.InlineData[1];
  uStack_370._2_1_ = (pFVar42->Children).Hash.InlineData[2];
  uStack_370._3_1_ = (pFVar42->Children).Hash.InlineData[3];
  uStack_370._4_4_ = (pFVar42->Children).Hash._padding_;
  local_368 = (pFVar42->Children).Hash.SecondaryData;
  uStack_360 = *(undefined8 *)&(pFVar42->Children).HashSize;
  uVar16 = (pFVar44->ConstraintID).B;
  uVar17 = pFVar45[-1].ConstraintID.C;
  uVar18 = pFVar45[-1].ConstraintID.D;
  (pFVar42->ConstraintID).A = (pFVar44->ConstraintID).A;
  (pFVar42->ConstraintID).B = uVar16;
  (pFVar42->ConstraintID).C = uVar17;
  (pFVar42->ConstraintID).D = uVar18;
  iVar48 = pFVar45[-1].NodeIndex;
  iVar39 = pFVar45[-1].ConstraintIndex;
  pFVar42->ConstraintTick = pFVar45[-1].ConstraintTick;
  pFVar42->NodeIndex = iVar48;
  pFVar42->ConstraintIndex = iVar39;
  uVar6 = *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x8;
  *(undefined8 *)&(pFVar42->Parents).Elements = *(undefined8 *)&pFVar45[-1].Parents.Elements;
  *(undefined8 *)&(pFVar42->Parents).Elements.field_0x8 = uVar6;
  uVar6 = *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x18;
  *(undefined8 *)&(pFVar42->Parents).Elements.field_0x10 =
       *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x10;
  *(undefined8 *)&(pFVar42->Parents).Elements.field_0x18 = uVar6;
  uVar6 = *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x28;
  *(undefined8 *)&(pFVar42->Parents).Elements.field_0x20 =
       *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x20;
  *(undefined8 *)&(pFVar42->Parents).Elements.field_0x28 = uVar6;
  uVar19 = pFVar45[-1].Parents.Hash.InlineData[0];
  uVar20 = pFVar45[-1].Parents.Hash.InlineData[1];
  uVar21 = pFVar45[-1].Parents.Hash.InlineData[2];
  uVar22 = pFVar45[-1].Parents.Hash.InlineData[3];
  iVar48 = pFVar45[-1].Parents.Hash._padding_;
  *(undefined8 *)&(pFVar42->Parents).Elements.field_0x30 =
       *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x30;
  (pFVar42->Parents).Hash.InlineData[0] = uVar19;
  (pFVar42->Parents).Hash.InlineData[1] = uVar20;
  (pFVar42->Parents).Hash.InlineData[2] = uVar21;
  (pFVar42->Parents).Hash.InlineData[3] = uVar22;
  (pFVar42->Parents).Hash._padding_ = iVar48;
  iVar48 = pFVar45[-1].Parents.HashSize;
  uVar23 = *(undefined4 *)&pFVar45[-1].Parents.field_0x4c;
  (pFVar42->Parents).Hash.SecondaryData = pFVar45[-1].Parents.Hash.SecondaryData;
  (pFVar42->Parents).HashSize = iVar48;
  *(undefined4 *)&(pFVar42->Parents).field_0x4c = uVar23;
  uVar6 = *(undefined8 *)&pFVar45[-1].Children.Elements.field_0x8;
  *(undefined8 *)&(pFVar42->Children).Elements = *(undefined8 *)&pFVar45[-1].Children.Elements;
  *(undefined8 *)&(pFVar42->Children).Elements.field_0x8 = uVar6;
  uVar6 = *(undefined8 *)&pFVar45[-1].Children.Elements.field_0x18;
  *(undefined8 *)&(pFVar42->Children).Elements.field_0x10 =
       *(undefined8 *)&pFVar45[-1].Children.Elements.field_0x10;
  *(undefined8 *)&(pFVar42->Children).Elements.field_0x18 = uVar6;
  uVar6 = *(undefined8 *)&pFVar45[-1].Children.Elements.field_0x28;
  *(undefined8 *)&(pFVar42->Children).Elements.field_0x20 =
       *(undefined8 *)&pFVar45[-1].Children.Elements.field_0x20;
  *(undefined8 *)&(pFVar42->Children).Elements.field_0x28 = uVar6;
  uVar19 = pFVar45[-1].Children.Hash.InlineData[0];
  uVar20 = pFVar45[-1].Children.Hash.InlineData[1];
  uVar21 = pFVar45[-1].Children.Hash.InlineData[2];
  uVar22 = pFVar45[-1].Children.Hash.InlineData[3];
  iVar48 = pFVar45[-1].Children.Hash._padding_;
  *(undefined8 *)&(pFVar42->Children).Elements.field_0x30 =
       *(undefined8 *)&pFVar45[-1].Children.Elements.field_0x30;
  (pFVar42->Children).Hash.InlineData[0] = uVar19;
  (pFVar42->Children).Hash.InlineData[1] = uVar20;
  (pFVar42->Children).Hash.InlineData[2] = uVar21;
  (pFVar42->Children).Hash.InlineData[3] = uVar22;
  (pFVar42->Children).Hash._padding_ = iVar48;
  iVar48 = pFVar45[-1].Children.HashSize;
  uVar23 = *(undefined4 *)&pFVar45[-1].Children.field_0x4c;
  (pFVar42->Children).Hash.SecondaryData = pFVar45[-1].Children.Hash.SecondaryData;
  (pFVar42->Children).HashSize = iVar48;
  *(undefined4 *)&(pFVar42->Children).field_0x4c = uVar23;
  bVar38 = pFVar45[-1].bEvaluating;
  uVar24 = *(undefined6 *)&pFVar45[-1].field_0xc2;
  pFVar42->bMarkedForEvaluation = pFVar45[-1].bMarkedForEvaluation;
  pFVar42->bEvaluating = bVar38;
  *(undefined6 *)&pFVar42->field_0xc2 = uVar24;
  (pFVar44->ConstraintID).A = (undefined4)local_418;
  (pFVar44->ConstraintID).B = local_418._4_4_;
  *(ForElementType<FSetElementId> *)&pFVar45[-1].ConstraintID.C = FStack_410;
  pFVar45[-1].ConstraintTick = local_408;
  pFVar45[-1].NodeIndex = (undefined4)uStack_400;
  pFVar45[-1].ConstraintIndex = uStack_400._4_4_;
  *(undefined8 *)&pFVar45[-1].Parents.Elements = local_3f8;
  *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x8 = uStack_3f0;
  *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x10 = local_3e8;
  *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x18 = uStack_3e0;
  *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x20 = local_3d8;
  *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x28 = uStack_3d0;
  *(undefined8 *)&pFVar45[-1].Parents.Elements.field_0x30 = local_3c8;
  pFVar45[-1].Parents.Hash.InlineData[0] = (undefined1)uStack_3c0;
  pFVar45[-1].Parents.Hash.InlineData[1] = uStack_3c0._1_1_;
  pFVar45[-1].Parents.Hash.InlineData[2] = uStack_3c0._2_1_;
  pFVar45[-1].Parents.Hash.InlineData[3] = uStack_3c0._3_1_;
  pFVar45[-1].Parents.Hash._padding_ = uStack_3c0._4_4_;
  pFVar45[-1].Parents.Hash.SecondaryData = local_3b8;
  *(undefined8 *)&pFVar45[-1].Parents.HashSize = uStack_3b0;
  *(undefined8 *)&pFVar45[-1].Children.Elements = local_3a8;
  *(undefined8 *)&pFVar45[-1].Children.Elements.field_0x8 = uStack_3a0;
  *(undefined8 *)&pFVar45[-1].Children.Elements.field_0x10 = local_398;
  *(undefined8 *)&pFVar45[-1].Children.Elements.field_0x18 = uStack_390;
  *(undefined8 *)&pFVar45[-1].Children.Elements.field_0x20 = local_388;
  *(undefined8 *)&pFVar45[-1].Children.Elements.field_0x28 = uStack_380;
  *(undefined8 *)&pFVar45[-1].Children.Elements.field_0x30 = local_378;
  pFVar45[-1].Children.Hash.InlineData[0] = (undefined1)uStack_370;
  pFVar45[-1].Children.Hash.InlineData[1] = uStack_370._1_1_;
  pFVar45[-1].Children.Hash.InlineData[2] = uStack_370._2_1_;
  pFVar45[-1].Children.Hash.InlineData[3] = uStack_370._3_1_;
  pFVar45[-1].Children.Hash._padding_ = uStack_370._4_4_;
  pFVar45[-1].Children.Hash.SecondaryData = local_368;
  *(undefined8 *)&pFVar45[-1].Children.HashSize = uStack_360;
  pFVar45[-1].bMarkedForEvaluation = (bool)(undefined1)local_358;
  pFVar45[-1].bEvaluating = (bool)local_358._1_1_;
  *(undefined6 *)&pFVar45[-1].field_0xc2 = local_358._2_6_;
  local_420._0_4_ = (int)local_420 + -1;
  lVar40 = (longlong)pFVar44 + (-200 - (longlong)pFVar42);
  lVar40 = lVar40 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar40),8);
  lVar41 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)pFVar49 - (longlong)pFVar43),8) +
           ((longlong)pFVar49 - (longlong)pFVar43);
  if ((lVar40 >> 7) - (lVar40 >> 0x3f) < (lVar41 >> 7) - (lVar41 >> 0x3f)) {
    if (pFVar43 < pFVar49) {
      *ppFVar47 = pFVar43;
      ppFVar47[1] = pFVar49;
      *(int *)(ppFVar47 + 2) = (int)local_420;
      ppFVar47 = ppFVar47 + 3;
    }
    if (pFVar44 <= pFVar42 + 1) goto LAB_146498e70;
    pFVar49 = pFVar45 + -2;
    pFVar43 = pFVar42;
  }
  else {
    if (pFVar42 + 1 < pFVar44) {
      *ppFVar47 = pFVar42;
      ppFVar47[1] = pFVar45 + -2;
      *(int *)(ppFVar47 + 2) = (int)local_420;
      ppFVar47 = ppFVar47 + 3;
    }
    if (pFVar49 <= pFVar43) goto LAB_146498e70;
  }
  lVar40 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)pFVar49 - (longlong)pFVar43),8) +
           ((longlong)pFVar49 - (longlong)pFVar43);
  iVar48 = ((int)(lVar40 >> 7) - (int)(lVar40 >> 0x3f)) + 1;
  pFVar42 = pFVar43;
  if ((int)local_420 == 0) goto LAB_14649895a;
  goto LAB_1464982d5;
}

// IsObjectPtrEqual<UTickableConstraint,UTickableConstraint_*,0> @ 146498ee0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UTickableConstraint,UTickableConstraint_*,0>
          (TObjectPtr<UTickableConstraint> *param_1,UTickableConstraint **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UTickableConstraint *)0x0) {
    return *param_2 == (UTickableConstraint *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UTransformableHandle,UTransformableHandle_*,0> @ 146498f00

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UTransformableHandle,UTransformableHandle_*,0>
          (TObjectPtr<UTransformableHandle> *param_1,UTransformableHandle **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UTransformableHandle *)0x0) {
    return *param_2 == (UTransformableHandle *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// KahnTopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>_&,`UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes'::__l2::<lambda_2>_> @ 146498f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
Algo::
KahnTopologicalSort<TArray<int,TSizedDefaultAllocator<32>_>_&,_UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes_::__l2::<lambda_2>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,<lambda_2> param_2,
          ETopologicalSort param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ForElementType<FSetElementId> FVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  ulonglong uVar17;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar18;
  byte bVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  uint *puVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined1 *puVar32;
  uint *puVar33;
  uint uVar34;
  ForElementType<unsigned_int> FVar35;
  undefined1 auStackY_4c8 [32];
  undefined1 local_478;
  undefined1 local_477;
  undefined1 local_476;
  undefined1 local_475;
  undefined1 local_474 [4];
  uint local_470 [2];
  ForAnyElementType local_468;
  undefined8 local_460;
  ForAnyElementType local_458;
  undefined8 local_450;
  uint local_448;
  uint local_444;
  uint local_440 [2];
  uint local_438 [2];
  ETopologicalSort local_430;
  uint local_42c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_428;
  int iStack_420;
  uint uStack_41c;
  TBitArray<FDefaultBitArrayAllocator> *local_418;
  undefined4 uStack_410;
  uint uStack_40c;
  uint local_408;
  undefined4 uStack_404;
  int iStack_400;
  undefined4 uStack_3fc;
  uint local_3f8;
  uint uStack_3f4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3f0;
  undefined4 local_3e8;
  uint uStack_3e4;
  uint uStack_3e0;
  undefined4 uStack_3dc;
  int local_3d8;
  int local_3d4;
  int local_3d0;
  int local_3cc;
  int local_3c4;
  TArray<int,TSizedDefaultAllocator<32>_> *local_3c0;
  undefined4 local_3b8;
  int local_3b4;
  int local_3b0 [2];
  longlong *local_3a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3a0;
  int local_380;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_378;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_370;
  undefined8 uStack_350;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_348;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_340;
  undefined8 uStack_320;
  undefined4 local_2fc;
  undefined4 local_2dc;
  undefined1 local_2d8 [32];
  uint *local_2b8;
  ulonglong uStack_2b0;
  undefined8 local_2a8;
  ForElementType<FSetElementId> FStack_2a0;
  ulonglong uStack_290;
  undefined1 local_288 [32];
  uint *local_268;
  ulonglong uStack_260;
  undefined8 local_258;
  ForElementType<FSetElementId> FStack_250;
  undefined8 uStack_240;
  undefined1 local_238 [32];
  ForElementType<unsigned_int> local_218;
  uint local_210;
  int local_20c;
  int local_208;
  int local_204;
  undefined1 local_200 [8];
  ForAnyElementType local_1f8;
  uint local_1f0;
  ForAnyElementType local_1e8;
  undefined8 local_1e0;
  ForAnyElementType local_1d8;
  ulonglong local_1d0;
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  FMutuallyReachableVertexSetContext local_1b8;
  bool local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  uVar24 = 0;
  local_238._0_8_ = (FScriptContainerElement *)0x0;
  local_238._8_8_ = 0;
  local_218 = (ForElementType<unsigned_int>)0x0;
  local_210 = 0;
  local_20c = 0x80;
  local_208 = -1;
  local_204 = 0;
  local_1f8.Data = (FScriptContainerElement *)0x0;
  local_1f0 = 0;
  local_1e8.Data = (FScriptContainerElement *)0x0;
  local_1e0._0_4_ = 0;
  local_1e0._4_4_ = 0;
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_1d0 = 0;
  local_1c8.Data = (FScriptContainerElement *)0x0;
  local_1c0._0_4_ = 0;
  local_1c0._4_4_ = 0;
  local_58 = false;
  local_2d8._0_8_ = (FScriptContainerElement *)0x0;
  local_2d8._8_8_ = 0;
  local_2b8 = (uint *)0x0;
  uStack_2b0 = 0x8000000000;
  local_2a8 = 0xffffffff;
  FStack_2a0.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_290 = uStack_290 & 0xffffffff00000000;
  local_430 = param_3;
  local_3c0 = param_1;
  AlgoImpl::
  KahnTopologicalSort_CreateWorkingGraph<TArray<int,TSizedDefaultAllocator<32>_>,_UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes_::__l2::<lambda_2>_>
            ((FKahnContext *)local_238,param_1,param_2,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_2d8);
  uVar34 = (uint)local_1d0;
  local_288._0_8_ = (FScriptContainerElement *)0x0;
  local_288._8_8_ = 0;
  local_268 = (uint *)0x0;
  uStack_260 = 0x8000000000;
  local_258 = 0xffffffff;
  FStack_250.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_240 = (ulonglong)uStack_240._4_4_ << 0x20;
  local_458.Data = (FScriptContainerElement *)0x0;
  local_450 = 0;
  local_42c = (uint)local_1d0;
  if ((int)(uint)local_1d0 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_1d0 & 0xffffffff);
  }
  if (0 < (int)(uint)local_1d0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(uint)local_1d0,&local_458,0,(int *)((longlong)&local_450 + 4));
  }
  if (uVar34 <= (uint)(local_238._8_4_ - local_204)) goto LAB_146499315;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_238,uVar34);
  uVar23 = 1;
  if (3 < uVar34) {
    uVar23 = (ulonglong)((uVar34 >> 1) + 7) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_3b8 = (undefined4)lVar21;
    uVar23 = (ulonglong)(uint)(1 << ((byte)lVar21 & 0x1f));
  }
  uVar30 = (uint)uVar23;
  if ((local_1f0 != 0) && ((int)uVar30 <= (int)local_1f0)) goto LAB_146499315;
  local_1f0 = uVar30;
  if ((ForElementType<FSetElementId>)local_1f8.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1f8,0,0,4);
  }
  if (uVar30 != 0) {
    uVar28 = uVar30;
    if (uVar30 < 2) {
      if ((ForElementType<FSetElementId>)local_1f8.Data != (ForElementType<FSetElementId>)0x0) {
        uVar28 = 0;
        goto LAB_146499158;
      }
    }
    else {
LAB_146499158:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1f8,0,uVar28,4);
    }
    if (0 < (int)uVar30) {
      uVar31 = uVar24;
      do {
        FVar20.Data = (FScriptContainerElement *)local_200;
        if ((ForElementType<FSetElementId>)local_1f8.Data != (ForElementType<FSetElementId>)0x0) {
          FVar20.Data = local_1f8.Data;
        }
        uVar17 = uVar31 & (longlong)(int)uVar30 - 1U;
        uVar31 = uVar31 + 1;
        *(undefined4 *)((longlong)FVar20.Data + uVar17 * 4) = 0xffffffff;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  if (local_1f0 != 0) {
    pTStack_3f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_238 + 0x10);
    local_3f8 = 0;
    uStack_3f4 = 1;
    uStack_3e4 = 0;
    uStack_3e0 = 0;
    uVar23 = uVar24;
    if (local_210 != 0) {
      FVar35 = (ForElementType<unsigned_int>)((longlong)local_238 + 0x10);
      if (local_218 != (ForElementType<unsigned_int>)0x0) {
        FVar35 = local_218;
      }
      uVar30 = *(uint *)FVar35;
      uVar31 = uVar24;
      while (uVar30 == 0) {
        uStack_3e0 = (int)uVar31 + 0x20;
        uVar31 = (ulonglong)uStack_3e0;
        iVar16 = (int)uVar23;
        local_3f8 = iVar16 + 1;
        uVar23 = (ulonglong)local_3f8;
        if ((int)((local_210 - 1) + ((int)(local_210 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_3f8)
        goto LAB_14649926d;
        uVar30 = ((uint *)((longlong)FVar35 + 4))[iVar16];
      }
      uStack_3f4 = -uVar30 & uVar30;
      uVar23 = (ulonglong)uStack_3f4 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_3b4 = (int)lVar21;
      uStack_3e4 = local_3b4 + -1 + uStack_3e0;
      uVar23 = (ulonglong)uStack_3e4;
      if ((int)local_210 < (int)uStack_3e4) {
LAB_14649926d:
        uVar23 = (ulonglong)local_210;
        uStack_3e4 = local_210;
      }
    }
    local_3e8 = 0xffffffff;
    local_3a8 = (longlong *)local_238;
    local_3a0._padding_ = CONCAT44(uStack_3f4,local_3f8);
    local_3a0.CurrentBitIndex = uStack_3e4;
    local_3a0.UnvisitedBitMask = 0xffffffff;
    local_3a0._28_4_ = uStack_3dc;
    local_3a0.BaseBitIndex = uStack_3e0;
    local_3a0.Array = pTStack_3f0;
    if ((int)uVar23 < (int)local_210) {
      do {
        iVar16 = (int)uVar23;
        uVar30 = local_1f0 - 1 & *(uint *)(*local_3a8 + (longlong)iVar16 * 0xc);
        lVar21 = *local_3a8 + (longlong)iVar16 * 0xc;
        *(uint *)(lVar21 + 8) = uVar30;
        FVar20.Data = (FScriptContainerElement *)local_200;
        if ((ForElementType<FSetElementId>)local_1f8.Data != (ForElementType<FSetElementId>)0x0) {
          FVar20.Data = local_1f8.Data;
        }
        uVar23 = (longlong)(int)local_1f0 - 1U & (longlong)(int)uVar30;
        *(undefined4 *)(lVar21 + 4) = *(undefined4 *)((longlong)FVar20.Data + uVar23 * 4);
        *(int *)((longlong)FVar20.Data + uVar23 * 4) = iVar16;
        local_3a0.UnvisitedBitMask = local_3a0.UnvisitedBitMask & ~local_3a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3a0);
        uVar23 = (ulonglong)(uint)local_3a0.CurrentBitIndex;
      } while (local_3a0.CurrentBitIndex < (local_3a0.Array)->NumBits);
    }
  }
LAB_146499315:
  local_448 = 0;
  if (0 < (int)uVar34) {
    do {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_238,local_3b0,
                 (bool *)&local_448);
      local_448 = (int)uVar24 + 1;
      uVar24 = (ulonglong)local_448;
    } while ((int)local_448 < (int)uVar34);
  }
  iVar16 = local_238._8_4_ - local_204;
  do {
    if (iVar16 < 1) {
      uVar30 = 0;
      local_468.Data = (FScriptContainerElement *)0x0;
      local_460 = 0;
      if (0 < (int)uVar34) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar34,&local_468,0,(int *)((longlong)&local_460 + 4));
      }
      pFVar25 = (param_1->AllocatorInstance).Data;
      iVar16 = param_1->ArrayNum;
      pFVar27 = pFVar25 + (longlong)iVar16 * 4;
      while( true ) {
        if (param_1->ArrayNum != iVar16) {
          local_475 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_475)
          ;
        }
        if (pFVar25 == pFVar27) break;
        if (((local_468.Data <= pFVar25) &&
            (pFVar25 < local_468.Data + (longlong)local_460._4_4_ * 4)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
        if ((int)local_460 == local_460._4_4_) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_468,(int *)((longlong)&local_460 + 4));
          local_460 = CONCAT44(local_460._4_4_,iVar22);
        }
        lVar21 = (longlong)(int)local_460;
        local_460 = CONCAT44(local_460._4_4_,(int)local_460 + 1);
        uVar2 = *(undefined4 *)pFVar25;
        pFVar25 = pFVar25 + 4;
        *(undefined4 *)(local_468.Data + lVar21 * 4) = uVar2;
      }
      pFVar25 = (param_1->AllocatorInstance).Data;
      iVar16 = param_1->ArrayNum;
      lVar21 = 0;
      pFVar27 = pFVar25 + (longlong)iVar16 * 4;
      while( true ) {
        if (param_1->ArrayNum != iVar16) {
          local_474[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_474);
        }
        if (pFVar25 == pFVar27) break;
        uVar34 = 0;
        if ((int)uVar30 < (int)local_450) {
          uVar34 = ~uVar30 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
        uVar34 = *(uint *)(local_458.Data + lVar21);
        uVar28 = 0;
        if ((int)uVar34 < (int)local_460) {
          uVar28 = ~uVar34 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
        uVar30 = uVar30 + 1;
        lVar21 = lVar21 + 4;
        *(undefined4 *)pFVar25 = *(undefined4 *)(local_468.Data + (longlong)(int)uVar34 * 4);
        pFVar25 = pFVar25 + 4;
      }
      bVar14 = true;
      if (local_468.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_468.Data);
      }
LAB_146499db9:
      if (local_458.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_458.Data);
      }
      uStack_240 = uStack_240 & 0xffffffff00000000;
      if (FStack_250.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_250.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_288);
      uStack_290 = uStack_290 & 0xffffffff00000000;
      if (FStack_2a0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_2a0.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_2d8);
      if (local_58 != false) {
        AlgoImpl::FMutuallyReachableVertexSetContext::~FMutuallyReachableVertexSetContext
                  (&local_1b8);
      }
      if (local_1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1d8.Data,(uint)local_1d0);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1d8.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_1d8.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1e8.Data,(int)local_1e0);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1e8.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_1e8.Data);
      }
      local_1f0 = 0;
      if ((ForElementType<FSetElementId>)local_1f8.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_1f8.Data);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_238);
      return bVar14;
    }
    iVar16 = 0;
    uVar34 = 0;
    if (local_2d8._8_4_ == local_2a8._4_4_) {
      if ((param_3 & AllowCycles) == None) {
        bVar14 = false;
        goto LAB_146499db9;
      }
      pTVar18 = AlgoImpl::FindMostIndependentMutuallyReachableVertexSet((FKahnContext *)local_238);
      if ((*(int *)&(pTVar18->Elements).field_0x8 == *(int *)&(pTVar18->Elements).field_0x34) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("!MRVS.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\KahnTopologicalSort.h"
                              ,0x67,L""), bVar14)) {
        pcVar4 = (code *)swi(3);
        uVar15 = (*pcVar4)();
        return (bool)uVar15;
      }
      uVar30 = *(uint *)&(pTVar18->Elements).field_0x28;
      puVar1 = &(pTVar18->Elements).field_0x10;
      uStack_41c = 1;
      uStack_40c = uVar34;
      local_408 = uVar34;
      if (uVar30 != 0) {
        puVar33 = *(uint **)&(pTVar18->Elements).field_0x20;
        puVar29 = (uint *)puVar1;
        if (puVar33 != (uint *)0x0) {
          puVar29 = puVar33;
        }
        uVar28 = *puVar29;
        iVar16 = 0;
        while (uVar28 == 0) {
          lVar21 = (longlong)iVar16;
          local_408 = local_408 + 0x20;
          iVar16 = iVar16 + 1;
          uStack_40c = uVar30;
          if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
          goto LAB_14649944d;
          uVar28 = puVar29[lVar21 + 1];
        }
        uStack_41c = -uVar28 & uVar28;
        uVar24 = (ulonglong)uStack_41c * 2 + 1;
        lVar21 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_380 = (int)lVar21;
        uStack_40c = (local_408 - 1) + local_380;
        if ((int)uVar30 < (int)uStack_40c) {
          uStack_40c = uVar30;
        }
      }
LAB_14649944d:
      uVar28 = *(uint *)&(pTVar18->Elements).field_0x28;
      uStack_404 = local_2fc;
      uVar26 = uVar28 & 0xffffffe0;
      iStack_400 = *(int *)&(pTVar18->Elements).field_0x8 - *(int *)&(pTVar18->Elements).field_0x34;
      TStack_370._padding_ = CONCAT44(uStack_41c,iVar16);
      uStack_410 = 0xffffffff;
      TStack_370.CurrentBitIndex = uStack_40c;
      TStack_370.UnvisitedBitMask = 0xffffffff;
      iVar22 = (int)uVar28 >> 5;
      TStack_370._28_4_ = local_2fc;
      TStack_370.BaseBitIndex = local_408;
      uStack_350 = CONCAT44(uStack_3fc,iStack_400);
      local_428 = pTVar18;
      iStack_420 = iVar16;
      local_418 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      local_378 = pTVar18;
      TStack_370.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar28 < 0) || ((int)uVar30 < (int)uVar28)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar14)) {
        pcVar4 = (code *)swi(3);
        uVar15 = (*pcVar4)();
        return (bool)uVar15;
      }
      uVar30 = *(uint *)&(pTVar18->Elements).field_0x28;
      if (uVar28 != uVar30) {
        puVar3 = *(undefined1 **)&(pTVar18->Elements).field_0x20;
        puVar32 = puVar1;
        if (puVar3 != (undefined1 *)0x0) {
          puVar32 = puVar3;
        }
        uVar28 = -1 << ((byte)uVar28 & 0x1f) & *(uint *)(puVar32 + (longlong)iVar22 * 4);
        while (uVar28 == 0) {
          lVar21 = (longlong)iVar22;
          uVar26 = uVar26 + 0x20;
          iVar22 = iVar22 + 1;
          uVar28 = uVar30;
          if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
          goto LAB_146499550;
          uVar28 = *(uint *)(puVar32 + lVar21 * 4 + 4);
        }
        uVar24 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_3d8 = (int)lVar21;
        uVar28 = (uVar26 - 1) + local_3d8;
        if ((int)uVar30 < (int)uVar28) {
          uVar28 = uVar30;
        }
      }
LAB_146499550:
      while( true ) {
        pTVar5 = local_378;
        if (*(int *)&(local_378->Elements).field_0x8 - *(int *)&(local_378->Elements).field_0x34 !=
            (int)uStack_350) {
          local_478 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_478);
        }
        if (((TStack_370.CurrentBitIndex == uVar28) &&
            (TStack_370.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar5 == pTVar18)) break;
        uVar30 = *(uint *)(*(longlong *)&pTVar5->Elements +
                          (longlong)TStack_370.CurrentBitIndex * 0xc);
        local_444 = uVar30;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_2d8,&local_3d4,
                   (bool *)&local_444);
        uVar26 = uVar34;
        if ((int)uVar30 < (int)local_1c0) {
          uVar26 = ~uVar30 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
        *(undefined4 *)(local_1c8.Data + (longlong)(int)uVar30 * 4) = 0xffffffff;
        TStack_370.UnvisitedBitMask = TStack_370.UnvisitedBitMask & ~TStack_370._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_370);
      }
    }
    if (local_288._8_4_ != local_258._4_4_) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_288);
      bVar14 = (longlong)local_288._8_8_ < 0;
      local_288._8_8_ = local_288._8_8_ & 0xffffffff00000000;
      if (bVar14) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_288,0,(int *)(local_288 + 0xc));
      }
      local_258 = 0xffffffff;
      uStack_260 = uStack_260 & 0xffffffff00000000;
    }
    uVar30 = (uint)uStack_2b0;
    uStack_41c = 1;
    uStack_40c = uVar34;
    iStack_420 = 0;
    if ((uint)uStack_2b0 != 0) {
      puVar33 = (uint *)(local_2d8 + 0x10);
      if (local_2b8 != (uint *)0x0) {
        puVar33 = local_2b8;
      }
      uVar28 = *puVar33;
      while (uVar28 == 0) {
        lVar21 = (longlong)iStack_420;
        uVar34 = uVar34 + 0x20;
        iStack_420 = iStack_420 + 1;
        uStack_40c = (uint)uStack_2b0;
        if ((int)(((uint)uStack_2b0 - 1) + ((int)((uint)uStack_2b0 - 1) >> 0x1f & 0x1fU)) >> 5 <
            iStack_420) goto LAB_146499710;
        uVar28 = (puVar33 + 1)[lVar21];
      }
      uStack_41c = -uVar28 & uVar28;
      uVar24 = (ulonglong)uStack_41c * 2 + 1;
      lVar21 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_3d0 = (int)lVar21;
      uStack_40c = (uVar34 - 1) + local_3d0;
      if ((int)(uint)uStack_2b0 < (int)uStack_40c) {
        uStack_40c = (uint)uStack_2b0;
      }
    }
LAB_146499710:
    local_428 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_2d8;
    uStack_404 = local_2dc;
    local_418 = (TBitArray<FDefaultBitArrayAllocator> *)(local_2d8 + 0x10);
    iStack_400 = local_2d8._8_4_ - local_2a8._4_4_;
    uVar28 = (uint)uStack_2b0 & 0xffffffe0;
    TStack_340._padding_ = CONCAT44(uStack_41c,iStack_420);
    uStack_410 = 0xffffffff;
    TStack_340.CurrentBitIndex = uStack_40c;
    TStack_340.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)(uint)uStack_2b0 >> 5;
    TStack_340._28_4_ = local_2dc;
    TStack_340.BaseBitIndex = uVar34;
    uStack_320 = CONCAT44(uStack_3fc,iStack_400);
    bVar19 = (byte)uStack_2b0;
    local_408 = uVar34;
    local_348 = local_428;
    TStack_340.Array = local_418;
    if ((int)(uint)uStack_2b0 < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar14) {
        pcVar4 = (code *)swi(3);
        uVar15 = (*pcVar4)();
        return (bool)uVar15;
      }
    }
    if (uVar30 != (uint)uStack_2b0) {
      puVar33 = (uint *)(local_2d8 + 0x10);
      if (local_2b8 != (uint *)0x0) {
        puVar33 = local_2b8;
      }
      uVar34 = -1 << (bVar19 & 0x1f) & puVar33[iVar16];
      while (uVar34 == 0) {
        lVar21 = (longlong)iVar16;
        uVar28 = uVar28 + 0x20;
        iVar16 = iVar16 + 1;
        uVar30 = (uint)uStack_2b0;
        if ((int)(((uint)uStack_2b0 - 1) + ((int)((uint)uStack_2b0 - 1) >> 0x1f & 0x1fU)) >> 5 <
            iVar16) goto LAB_146499840;
        uVar34 = (puVar33 + 1)[lVar21];
      }
      uVar24 = (ulonglong)(-uVar34 & uVar34) * 2 + 1;
      lVar21 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_3cc = (int)lVar21;
      uVar30 = local_3cc + -1 + uVar28;
      if ((int)(uint)uStack_2b0 < (int)uVar30) {
        uVar30 = (uint)uStack_2b0;
      }
    }
LAB_146499840:
    while( true ) {
      pTVar18 = local_348;
      if (*(int *)&(local_348->Elements).field_0x8 - *(int *)&(local_348->Elements).field_0x34 !=
          (int)uStack_320) {
        local_477 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_477);
      }
      uVar23 = uStack_240;
      FVar13 = FStack_250.SecondaryData;
      uVar11 = FStack_250._0_8_;
      uVar10 = local_258;
      uVar24 = uStack_260;
      puVar33 = local_268;
      uVar9 = local_288._24_8_;
      uVar8 = local_288._16_8_;
      uVar7 = local_288._8_8_;
      uVar6 = local_288._0_8_;
      if (((TStack_340.CurrentBitIndex == uVar30) &&
          (TStack_340.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_2d8 + 0x10))) &&
         (pTVar18 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_2d8)) break;
      local_470[0] = *(uint *)(*(longlong *)&pTVar18->Elements +
                              (longlong)TStack_340.CurrentBitIndex * 0xc);
      lVar21 = (longlong)(int)local_470[0];
      uVar34 = 0;
      if ((int)local_470[0] < (int)local_1e0) {
        uVar34 = ~local_470[0] >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        uVar15 = (*pcVar4)();
        return (bool)uVar15;
      }
      pFVar27 = local_1e8.Data + lVar21 * 0x10;
      puVar29 = *(uint **)&pFVar27->field_0x0;
      iVar16 = *(int *)(pFVar27 + 8);
      puVar33 = puVar29 + iVar16;
      while( true ) {
        if (*(int *)(pFVar27 + 8) != iVar16) {
          local_476 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_476)
          ;
        }
        if (puVar29 == puVar33) break;
        local_440[0] = *puVar29;
        lVar21 = (longlong)(int)local_440[0];
        uVar34 = 0;
        if ((int)local_440[0] < (int)local_1c0) {
          uVar34 = ~local_440[0] >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
        pFVar25 = local_1c8.Data + lVar21 * 4;
        if (*(int *)pFVar25 != -1) {
          if ((*(int *)pFVar25 < 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ReferencerDependencyCount > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\KahnTopologicalSort.h"
                                  ,0x7d,L""), bVar14)) {
            pcVar4 = (code *)swi(3);
            uVar15 = (*pcVar4)();
            return (bool)uVar15;
          }
          *(int *)pFVar25 = *(int *)pFVar25 + -1;
          if (*(int *)pFVar25 == 0) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_288,&local_3c4
                       ,(bool *)local_440);
          }
        }
        puVar29 = puVar29 + 1;
      }
      local_438[0] = local_470[0];
      iVar16 = local_238._8_4_ - local_204;
      if (iVar16 != 0) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_238,local_470[0],
                   (int *)local_438);
      }
      if ((local_238._8_4_ - local_204 != iVar16 + -1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("RemainingVertices.Num() == RemainingNum - 1",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\KahnTopologicalSort.h"
                              ,0x88,L""), bVar14)) {
        pcVar4 = (code *)swi(3);
        uVar15 = (*pcVar4)();
        return (bool)uVar15;
      }
      if (((local_458.Data <= (FScriptContainerElement *)local_470) &&
          ((FScriptContainerElement *)local_470 < local_458.Data + (longlong)local_450._4_4_ * 4))
         && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar14)) {
        pcVar4 = (code *)swi(3);
        uVar15 = (*pcVar4)();
        return (bool)uVar15;
      }
      iVar16 = (int)local_450;
      if ((int)local_450 == local_450._4_4_) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_458,(int *)((longlong)&local_450 + 4));
      }
      local_450 = CONCAT44(local_450._4_4_,iVar16 + 1);
      *(uint *)(local_458.Data + (longlong)iVar16 * 4) = local_470[0];
      TStack_340.UnvisitedBitMask = TStack_340.UnvisitedBitMask & ~TStack_340._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_340);
    }
    iVar16 = local_238._8_4_ - local_204;
    local_288._0_8_ = local_2d8._0_8_;
    local_288._8_8_ = local_2d8._8_8_;
    local_268 = local_2b8;
    uStack_260 = uStack_2b0;
    local_288._16_8_ = local_2d8._16_8_;
    local_288._24_8_ = local_2d8._24_8_;
    FStack_250.SecondaryData = FStack_2a0.SecondaryData;
    uStack_240 = uStack_290;
    local_258 = local_2a8;
    FStack_250.InlineData[0] = FStack_2a0.InlineData[0];
    FStack_250.InlineData[1] = FStack_2a0.InlineData[1];
    FStack_250.InlineData[2] = FStack_2a0.InlineData[2];
    FStack_250.InlineData[3] = FStack_2a0.InlineData[3];
    FStack_250._padding_ = FStack_2a0._padding_;
    uVar12 = FStack_250._0_8_;
    local_2d8._16_8_ = uVar8;
    local_2d8._24_8_ = uVar9;
    local_2b8 = puVar33;
    uStack_2b0 = uVar24;
    local_2a8 = uVar10;
    FStack_250.InlineData[0] = (uchar)uVar11;
    FStack_250.InlineData[1] = SUB81(uVar11,1);
    FStack_250.InlineData[2] = SUB81(uVar11,2);
    FStack_250.InlineData[3] = SUB81(uVar11,3);
    FStack_250._padding_ = SUB84(uVar11,4);
    FStack_2a0.InlineData[0] = FStack_250.InlineData[0];
    FStack_2a0.InlineData[1] = FStack_250.InlineData[1];
    FStack_2a0.InlineData[2] = FStack_250.InlineData[2];
    FStack_2a0.InlineData[3] = FStack_250.InlineData[3];
    FStack_2a0._padding_ = FStack_250._padding_;
    FStack_2a0.SecondaryData = FVar13;
    uStack_290 = uVar23;
    param_1 = local_3c0;
    param_3 = local_430;
    uVar34 = local_42c;
    local_2d8._0_8_ = uVar6;
    local_2d8._8_8_ = uVar7;
    FStack_250._0_8_ = uVar12;
  } while( true );
}

// KahnTopologicalSort_CreateWorkingGraph<TArray<int,TSizedDefaultAllocator<32>_>,`UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes'::__l2::<lambda_2>_> @ 146499ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
AlgoImpl::
KahnTopologicalSort_CreateWorkingGraph<TArray<int,TSizedDefaultAllocator<32>_>,_UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes_::__l2::<lambda_2>_>
          (FKahnContext *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,<lambda_2> param_3
          ,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4)

{
  TArray<FConstraintNode,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FIdentityFunctor FVar15;
  uint uVar16;
  ulonglong uVar17;
  uint *puVar18;
  ForElementType<unsigned_int> FVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  uint uVar23;
  ForAnyElementType FVar24;
  undefined1 auStackY_1c8 [32];
  FIdentityFunctor local_178 [4];
  uint local_174;
  undefined1 local_170;
  undefined1 local_16f;
  undefined1 local_16e [2];
  undefined4 local_16c;
  int local_168;
  uint local_164;
  uint local_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 local_150;
  uint uStack_14c;
  uint uStack_148;
  undefined4 uStack_144;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_140;
  FScriptContainerElement *local_138;
  TArray<int,TSizedDefaultAllocator<32>_> *local_130;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_128;
  FGraphBuildHelper *local_120;
  FScriptContainerElement *local_118;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_110;
  undefined4 local_100;
  int local_fc;
  int local_f8 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_f0;
  FScriptContainerElement *local_e8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_e0;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d0;
  FScriptContainerElement *local_b0;
  undefined4 *local_a8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  uVar23 = param_2->ArrayNum;
  local_128 = &param_1->Referencers;
  uVar9 = 0;
  local_130 = &param_1->DependencyCount;
  local_140 = &param_1->Dependencies;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_120 = param_3.__this;
  local_f0 = param_4;
  local_e0 = param_2;
  if (uVar23 == 0) goto LAB_14649a184;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar23);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar23);
  uVar13 = 1;
  if (3 < uVar23) {
    uVar11 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_100 = (undefined4)lVar22;
    uVar13 = 1 << ((byte)lVar22 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar13 <= (int)local_50)) goto LAB_14649a184;
  local_50 = uVar13;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar13 != 0) {
    uVar16 = uVar13;
    if (uVar13 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar16 = 0;
        goto LAB_146499ff2;
      }
    }
    else {
LAB_146499ff2:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar16,4);
    }
    if (0 < (int)uVar13) {
      uVar17 = (ulonglong)uVar13;
      uVar11 = uVar9;
      do {
        FVar24.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar24.Data = local_58.Data;
        }
        uVar8 = (longlong)(int)uVar13 - 1U & uVar11;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(FVar24.Data + uVar8 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if (local_50 != 0) {
    pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_160 = 0;
    uStack_15c = 1;
    uStack_14c = 0;
    uStack_148 = 0;
    if (local_70 != 0) {
      FVar19 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_78;
      }
      uVar13 = *(uint *)FVar19;
      uVar11 = uVar9;
      while (uVar13 == 0) {
        uStack_148 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_148;
        iVar7 = (int)uVar9;
        local_160 = iVar7 + 1;
        uVar9 = (ulonglong)local_160;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_160)
        goto LAB_14649a0f1;
        uVar13 = ((uint *)((longlong)FVar19 + 4))[iVar7];
      }
      uStack_15c = -uVar13 & uVar13;
      uVar9 = (ulonglong)uStack_15c * 2 + 1;
      lVar22 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_fc = (int)lVar22;
      uStack_14c = local_fc + -1 + uStack_148;
      uVar9 = (ulonglong)uStack_14c;
      if ((int)local_70 < (int)uStack_14c) {
LAB_14649a0f1:
        uVar9 = (ulonglong)local_70;
        uStack_14c = local_70;
      }
    }
    local_150 = 0xffffffff;
    local_d8 = (longlong *)local_98;
    local_d0._padding_ = CONCAT44(uStack_15c,local_160);
    local_d0.CurrentBitIndex = uStack_14c;
    local_d0.UnvisitedBitMask = 0xffffffff;
    local_d0._28_4_ = uStack_144;
    local_d0.BaseBitIndex = uStack_148;
    local_d0.Array = pTStack_158;
    if ((int)uVar9 < (int)local_70) {
      do {
        puVar18 = (uint *)((longlong)(int)uVar9 * 0x10 + *local_d8);
        uVar13 = local_50 - 1 & *puVar18;
        puVar18[3] = uVar13;
        FVar24.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar24.Data = local_58.Data;
        }
        uVar11 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        puVar18[2] = *(uint *)(FVar24.Data + uVar11 * 4);
        *(int *)(FVar24.Data + uVar11 * 4) = (int)uVar9;
        local_d0.UnvisitedBitMask = local_d0.UnvisitedBitMask & ~local_d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d0);
        uVar9 = (ulonglong)(uint)local_d0.CurrentBitIndex;
      } while (local_d0.CurrentBitIndex < (local_d0.Array)->NumBits);
    }
  }
LAB_14649a184:
  iVar7 = param_2->ArrayNum;
  local_174 = 0;
  pFVar20 = (param_2->AllocatorInstance).Data;
  pFVar21 = pFVar20 + (longlong)iVar7 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar7) {
      local_170 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_170);
    }
    if (pFVar20 == pFVar21) break;
    uVar13 = *(uint *)pFVar20;
    local_16c = 0xffffffff;
    if (local_98._8_4_ != local_64) {
      FVar24.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar24.Data = local_58.Data;
      }
      uVar16 = *(uint *)(FVar24.Data + (ulonglong)(local_50 - 1 & uVar13) * 4);
      while (uVar16 != 0xffffffff) {
        pFVar14 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)(int)uVar16 * 0x10);
        if (*(uint *)pFVar14 == uVar13) {
          if (pFVar14 != (FScriptContainerElement *)0x0) goto LAB_14649a254;
          break;
        }
        uVar16 = *(uint *)(pFVar14 + 8);
      }
    }
    local_a8 = &local_16c;
    local_b0 = pFVar20;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    EmplaceByHash<TPairInitializer<int_const_&,int_&&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               local_98,(uint)&local_168,(TPairInitializer<int_const_&,int_&&> *)(ulonglong)uVar13,
               (bool *)&local_b0);
    pFVar14 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)local_168 * 0x10);
LAB_14649a254:
    if ((*(uint *)(pFVar14 + 4) != 0xffffffff) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExistingHandle == INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\KahnTopologicalSort.h"
                           ,0xb7,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar20 = pFVar20 + 4;
    *(uint *)(pFVar14 + 4) = local_174;
    local_174 = local_174 + 1;
  }
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (local_128,uVar23,Default);
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (local_140,uVar23,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(local_130,uVar23,Default);
  local_164 = param_2->ArrayNum;
  uVar9 = (ulonglong)(int)local_164;
  pFVar21 = (param_2->AllocatorInstance).Data;
  local_174 = 0;
  local_e8 = pFVar21 + uVar9 * 4;
  FVar15 = local_178[0];
  do {
    pFVar20 = local_e8;
    local_118 = pFVar21;
    if (param_2->ArrayNum != (int)uVar9) {
      local_16f = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_16f);
    }
    if (pFVar21 == pFVar20) {
      local_50 = 0;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      return;
    }
    uVar23 = *(uint *)pFVar21;
    pTVar1 = (param_3.__this)->Nodes;
    uVar13 = 0;
    if ((int)uVar23 < pTVar1->ArrayNum) {
      uVar13 = ~uVar23 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Array
              ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
               ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar23 * 200 + 0x20),&local_110);
    pTVar3 = local_140;
    lVar22 = (longlong)(int)local_174;
    uVar23 = 0;
    if ((int)local_174 < local_140->ArrayNum) {
      uVar23 = ~local_174 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar7 = local_110.ArrayNum;
    pFVar20 = (pTVar3->AllocatorInstance).Data + lVar22 * 0x10;
    pFVar21 = local_110.AllocatorInstance.Data + (longlong)local_110.ArrayNum * 4;
    FVar24.Data = local_110.AllocatorInstance.Data;
    local_138 = pFVar21;
    while( true ) {
      if (local_110.ArrayNum != iVar7) {
        local_16e[0] = 0;
        `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_16e);
      }
      if (FVar24.Data == pFVar21) break;
      if (local_98._8_4_ == local_64) {
LAB_14649a506:
        FVar24.Data = FVar24.Data + 4;
      }
      else {
        FVar12.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_58.Data;
        }
        uVar23 = *(uint *)(FVar12.Data + (ulonglong)(local_50 - 1 & *(uint *)FVar24.Data) * 4);
        if (uVar23 == 0xffffffff) goto LAB_14649a506;
        do {
          pFVar14 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)(int)uVar23 * 0x10);
          if (*(uint *)pFVar14 == *(uint *)FVar24.Data) {
            pFVar10 = pFVar14 + 4;
            if (pFVar14 == (FScriptContainerElement *)0x0) {
              pFVar10 = (FScriptContainerElement *)0x0;
            }
            pFVar21 = local_138;
            if (pFVar10 != (FScriptContainerElement *)0x0) {
              if (((*(FScriptContainerElement **)&pFVar20->field_0x0 <= pFVar10) &&
                  (pFVar10 < *(FScriptContainerElement **)&pFVar20->field_0x0 +
                             (longlong)*(int *)(pFVar20 + 0xc) * 4)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar6 = *(int *)&pFVar20[8].field_0x0;
              if (iVar6 == *(int *)(pFVar20 + 0xc)) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,(ForAnyElementType *)pFVar20,(int *)(pFVar20 + 0xc));
              }
              *(int *)&pFVar20[8].field_0x0 = iVar6 + 1;
              *(uint *)(*(FScriptContainerElement **)&pFVar20->field_0x0 + (longlong)iVar6 * 4) =
                   *(uint *)pFVar10;
              pFVar21 = local_138;
            }
            goto LAB_14649a506;
          }
          uVar23 = *(uint *)(pFVar14 + 8);
        } while (uVar23 != 0xffffffff);
        FVar24.Data = FVar24.Data + 4;
      }
    }
    IntroSortInternal<int,int,FIdentityFunctor,TLess<void>_>
              ((int *)*(FScriptContainerElement **)&pFVar20->field_0x0,*(int *)&pFVar20[8].field_0x0
               ,FVar15,(TLess<void>)FVar15);
    uVar23 = *(uint *)&pFVar20[8].field_0x0;
    pFVar21 = *(FScriptContainerElement **)&pFVar20->field_0x0;
    uVar13 = uVar23;
    if ((int)uVar23 < 2) {
LAB_14649a5c1:
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      if ((int)uVar13 < (int)uVar23) {
        uVar23 = uVar23 - uVar13;
        if (((int)(uVar23 | uVar13) < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (uVar23 != 0) {
          iVar7 = (*(int *)&pFVar20[8].field_0x0 - uVar13) - uVar23;
          if (iVar7 != 0) {
            memmove(*(FScriptContainerElement **)&pFVar20->field_0x0 + (longlong)(int)uVar13 * 4,
                    *(FScriptContainerElement **)&pFVar20->field_0x0 + (longlong)(int)uVar13 * 4 +
                    (longlong)(int)uVar23 * 4,(longlong)iVar7 << 2);
          }
          *(uint *)&pFVar20[8].field_0x0 = *(int *)&pFVar20[8].field_0x0 - uVar23;
        }
      }
    }
    else {
      pFVar14 = pFVar21 + 4;
      pFVar10 = pFVar21;
      if (pFVar14 != pFVar21 + (longlong)(int)uVar23 * 4) {
        do {
          if ((*(int *)pFVar10 != *(int *)pFVar14) && (pFVar10 = pFVar10 + 4, pFVar10 != pFVar14)) {
            *(int *)pFVar10 = *(int *)pFVar14;
          }
          pFVar14 = pFVar14 + 4;
        } while (pFVar14 != pFVar21 + (longlong)(int)uVar23 * 4);
        uVar23 = *(uint *)&pFVar20[8].field_0x0;
      }
      uVar13 = (uint)((longlong)(pFVar10 + (4 - (longlong)pFVar21)) >> 2);
      if ((int)uVar13 <= (int)uVar23) goto LAB_14649a5c1;
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar13 - uVar23,(ForAnyElementType *)pFVar20,(int *)(pFVar20 + 8),
                         (int *)(pFVar20 + 0xc));
      memset(*(FScriptContainerElement **)&pFVar20->field_0x0 + (longlong)iVar7 * 4,0,
             (longlong)(int)(uVar13 - uVar23) << 2);
    }
    pTVar4 = local_130;
    lVar22 = (longlong)(int)local_174;
    iVar7 = *(int *)&pFVar20[8].field_0x0;
    uVar23 = 0;
    if ((int)local_174 < local_130->ArrayNum) {
      uVar23 = ~local_174 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(int *)((pTVar4->AllocatorInstance).Data + lVar22 * 4) = iVar7;
    if (iVar7 == 0) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (local_f0,local_f8,(bool *)&local_174);
    }
    pTVar3 = local_128;
    pFVar14 = *(FScriptContainerElement **)&pFVar20->field_0x0;
    iVar7 = *(int *)&pFVar20[8].field_0x0;
    pFVar21 = pFVar14 + (longlong)iVar7 * 4;
    while( true ) {
      if (*(int *)&pFVar20[8].field_0x0 != iVar7) {
        local_178[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_178);
      }
      param_3.__this = local_120;
      FVar15 = local_178[0];
      if (pFVar14 == pFVar21) break;
      uVar23 = *(uint *)pFVar14;
      uVar13 = 0;
      if ((int)uVar23 < pTVar3->ArrayNum) {
        uVar13 = ~uVar23 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar10 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar23 * 0x10;
      if (((*(FScriptContainerElement **)&pFVar10->field_0x0 <=
            (FScriptContainerElement *)&local_174) &&
          ((FScriptContainerElement *)&local_174 <
           *(FScriptContainerElement **)&pFVar10->field_0x0 + (longlong)*(int *)(pFVar10 + 0xc) * 4)
          ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = *(int *)&pFVar10[8].field_0x0;
      if (iVar6 == *(int *)(pFVar10 + 0xc)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar10,(int *)(pFVar10 + 0xc));
      }
      *(int *)&pFVar10[8].field_0x0 = iVar6 + 1;
      pFVar14 = pFVar14 + 4;
      *(uint *)(*(FScriptContainerElement **)&pFVar10->field_0x0 + (longlong)iVar6 * 4) = local_174;
    }
    local_174 = local_174 + 1;
    if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.AllocatorInstance.Data);
    }
    uVar9 = (ulonglong)local_164;
    pFVar21 = local_118 + 4;
    param_2 = local_e0;
  } while( true );
}

// Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,`FConstraintsManagerController::GetConstraintsByPredicate<`FDependencyBuilder::BuildSelfDependencies'::__l2::<lambda_1>_>'::__l2::<lambda_2>_> @ 14649a8a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AlgoImpl::
Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_FDependencyBuilder::BuildSelfDependencies_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
          (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,int param_2,int param_3,
          FIdentityFunctor param_4,<lambda_2> param_5)

{
  FWeakObjectPtr *this;
  FWeakObjectPtr FVar1;
  bool bVar2;
  int iVar3;
  UTickableConstraint *pUVar4;
  UTickableConstraint *pUVar5;
  FConstraintTickFunction *pFVar6;
  FConstraintTickFunction *pFVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  FWeakObjectPtr *pFVar12;
  FWeakObjectPtr *pFVar14;
  FWeakObjectPtr *pFVar15;
  FWeakObjectPtr *pFVar16;
  uint uVar17;
  uint uVar18;
  int local_58;
  FWeakObjectPtr *pFVar13;
  
  local_58 = 0;
  if (0 < param_2) {
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar11 = 0;
      if (0 < param_2 - local_58) {
        uVar17 = param_2 - local_58;
        do {
          iVar3 = (uVar17 >> 1) + iVar11;
          bVar2 = FWeakObjectPtr::IsValid(&param_1[param_2].WeakPtr);
          if ((bVar2) &&
             (bVar2 = FWeakObjectPtr::IsValid
                                (&param_1[(longlong)iVar3 + (longlong)local_58].WeakPtr), bVar2)) {
            pUVar4 = (UTickableConstraint *)
                     FWeakObjectPtr::Get(&param_1[(longlong)iVar3 + (longlong)local_58].WeakPtr);
            pUVar5 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_1[param_2].WeakPtr);
            pFVar6 = UTickableConstraint::GetTickFunction
                               (pUVar4,*(UWorld **)param_5.TicksBefore.__this);
            pFVar7 = UTickableConstraint::GetTickFunction
                               (pUVar5,*(UWorld **)param_5.TicksBefore.__this);
            lVar9 = pFVar6->_padding_;
            lVar10 = (longlong)(int)pFVar6->_padding_ * 0x10 + lVar9;
            for (; lVar9 != lVar10; lVar9 = lVar9 + 0x10) {
              if (*(FConstraintTickFunction **)(lVar9 + 8) == pFVar7) goto LAB_14649a9a7;
            }
            lVar9 = 0;
LAB_14649a9a7:
            bVar2 = lVar9 != 0;
          }
          else {
            bVar2 = false;
          }
          if (!bVar2) {
            iVar11 = (uVar17 & 1) + iVar3;
          }
          uVar18 = uVar17 >> 1;
          uVar17 = uVar17 >> 1;
        } while (uVar18 != 0);
      }
      local_58 = local_58 + iVar11;
      if (param_2 <= local_58) {
        return;
      }
      uVar17 = param_3 - param_2;
      iVar11 = 0;
      this = &param_1[local_58].WeakPtr;
      if (0 < (int)uVar17) {
        do {
          uVar18 = uVar17 >> 1;
          bVar2 = FWeakObjectPtr::IsValid
                            (&param_1[(longlong)(int)(uVar18 + iVar11) + (longlong)param_2].WeakPtr)
          ;
          if ((bVar2) && (bVar2 = FWeakObjectPtr::IsValid(this), bVar2)) {
            pUVar4 = (UTickableConstraint *)FWeakObjectPtr::Get(this);
            pUVar5 = (UTickableConstraint *)
                     FWeakObjectPtr::Get(&param_1[(longlong)(int)(uVar18 + iVar11) +
                                                  (longlong)param_2].WeakPtr);
            pFVar6 = UTickableConstraint::GetTickFunction
                               (pUVar4,*(UWorld **)param_5.TicksBefore.__this);
            pFVar7 = UTickableConstraint::GetTickFunction
                               (pUVar5,*(UWorld **)param_5.TicksBefore.__this);
            lVar9 = pFVar6->_padding_;
            lVar10 = (longlong)(int)pFVar6->_padding_ * 0x10 + lVar9;
            for (; lVar9 != lVar10; lVar9 = lVar9 + 0x10) {
              if (*(FConstraintTickFunction **)(lVar9 + 8) == pFVar7) goto LAB_14649aa97;
            }
            lVar9 = 0;
LAB_14649aa97:
            bVar2 = lVar9 != 0;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            iVar11 = (uVar17 & 1) + uVar18 + iVar11;
          }
          uVar17 = uVar18;
        } while (uVar18 != 0);
      }
      iVar8 = (iVar11 - local_58) + param_2;
      iVar3 = param_2 - local_58;
      if ((iVar3 != 0) && (iVar3 < iVar8)) {
        pFVar12 = this + iVar3;
        pFVar15 = this;
        pFVar13 = this + iVar3;
        do {
          while( true ) {
            pFVar14 = pFVar12 + 1;
            pFVar16 = pFVar15 + 1;
            FVar1 = *pFVar15;
            *pFVar15 = *pFVar12;
            *pFVar12 = FVar1;
            pFVar15 = pFVar16;
            if (pFVar14 == this + iVar8) break;
            pFVar12 = pFVar14;
            if (pFVar16 == pFVar13) {
              pFVar13 = pFVar14;
            }
          }
          pFVar12 = pFVar13;
        } while (pFVar16 != pFVar13);
      }
      local_58 = local_58 + 1 + iVar11;
      param_2 = param_2 + iVar11;
    } while (local_58 < param_2);
  }
  return;
}

// Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,`FConstraintsManagerController::GetConstraintsByPredicate<`FConstraintCycleChecker::CheckAndFixCycles'::__l2::<lambda_1>_>'::__l2::<lambda_2>_> @ 14649ab80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AlgoImpl::
Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_FConstraintCycleChecker::CheckAndFixCycles_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
          (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,int param_2,int param_3,
          FIdentityFunctor param_4,<lambda_2> param_5)

{
  FWeakObjectPtr *this;
  FWeakObjectPtr FVar1;
  bool bVar2;
  int iVar3;
  UTickableConstraint *pUVar4;
  UTickableConstraint *pUVar5;
  FConstraintTickFunction *pFVar6;
  FConstraintTickFunction *pFVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  FWeakObjectPtr *pFVar12;
  FWeakObjectPtr *pFVar14;
  FWeakObjectPtr *pFVar15;
  FWeakObjectPtr *pFVar16;
  uint uVar17;
  uint uVar18;
  int local_58;
  FWeakObjectPtr *pFVar13;
  
  local_58 = 0;
  if (0 < param_2) {
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar11 = 0;
      if (0 < param_2 - local_58) {
        uVar17 = param_2 - local_58;
        do {
          iVar3 = (uVar17 >> 1) + iVar11;
          bVar2 = FWeakObjectPtr::IsValid(&param_1[param_2].WeakPtr);
          if ((bVar2) &&
             (bVar2 = FWeakObjectPtr::IsValid
                                (&param_1[(longlong)iVar3 + (longlong)local_58].WeakPtr), bVar2)) {
            pUVar4 = (UTickableConstraint *)
                     FWeakObjectPtr::Get(&param_1[(longlong)iVar3 + (longlong)local_58].WeakPtr);
            pUVar5 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_1[param_2].WeakPtr);
            pFVar6 = UTickableConstraint::GetTickFunction
                               (pUVar4,*(UWorld **)param_5.TicksBefore.__this);
            pFVar7 = UTickableConstraint::GetTickFunction
                               (pUVar5,*(UWorld **)param_5.TicksBefore.__this);
            lVar9 = pFVar6->_padding_;
            lVar10 = (longlong)(int)pFVar6->_padding_ * 0x10 + lVar9;
            for (; lVar9 != lVar10; lVar9 = lVar9 + 0x10) {
              if (*(FConstraintTickFunction **)(lVar9 + 8) == pFVar7) goto LAB_14649ac87;
            }
            lVar9 = 0;
LAB_14649ac87:
            bVar2 = lVar9 != 0;
          }
          else {
            bVar2 = false;
          }
          if (!bVar2) {
            iVar11 = (uVar17 & 1) + iVar3;
          }
          uVar18 = uVar17 >> 1;
          uVar17 = uVar17 >> 1;
        } while (uVar18 != 0);
      }
      local_58 = local_58 + iVar11;
      if (param_2 <= local_58) {
        return;
      }
      uVar17 = param_3 - param_2;
      iVar11 = 0;
      this = &param_1[local_58].WeakPtr;
      if (0 < (int)uVar17) {
        do {
          uVar18 = uVar17 >> 1;
          bVar2 = FWeakObjectPtr::IsValid
                            (&param_1[(longlong)(int)(uVar18 + iVar11) + (longlong)param_2].WeakPtr)
          ;
          if ((bVar2) && (bVar2 = FWeakObjectPtr::IsValid(this), bVar2)) {
            pUVar4 = (UTickableConstraint *)FWeakObjectPtr::Get(this);
            pUVar5 = (UTickableConstraint *)
                     FWeakObjectPtr::Get(&param_1[(longlong)(int)(uVar18 + iVar11) +
                                                  (longlong)param_2].WeakPtr);
            pFVar6 = UTickableConstraint::GetTickFunction
                               (pUVar4,*(UWorld **)param_5.TicksBefore.__this);
            pFVar7 = UTickableConstraint::GetTickFunction
                               (pUVar5,*(UWorld **)param_5.TicksBefore.__this);
            lVar9 = pFVar6->_padding_;
            lVar10 = (longlong)(int)pFVar6->_padding_ * 0x10 + lVar9;
            for (; lVar9 != lVar10; lVar9 = lVar9 + 0x10) {
              if (*(FConstraintTickFunction **)(lVar9 + 8) == pFVar7) goto LAB_14649ad77;
            }
            lVar9 = 0;
LAB_14649ad77:
            bVar2 = lVar9 != 0;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            iVar11 = (uVar17 & 1) + uVar18 + iVar11;
          }
          uVar17 = uVar18;
        } while (uVar18 != 0);
      }
      iVar8 = (iVar11 - local_58) + param_2;
      iVar3 = param_2 - local_58;
      if ((iVar3 != 0) && (iVar3 < iVar8)) {
        pFVar12 = this + iVar3;
        pFVar15 = this;
        pFVar13 = this + iVar3;
        do {
          while( true ) {
            pFVar14 = pFVar12 + 1;
            pFVar16 = pFVar15 + 1;
            FVar1 = *pFVar15;
            *pFVar15 = *pFVar12;
            *pFVar12 = FVar1;
            pFVar15 = pFVar16;
            if (pFVar14 == this + iVar8) break;
            pFVar12 = pFVar14;
            if (pFVar16 == pFVar13) {
              pFVar13 = pFVar14;
            }
          }
          pFVar12 = pFVar13;
        } while (pFVar16 != pFVar13);
      }
      local_58 = local_58 + 1 + iVar11;
      param_2 = param_2 + iVar11;
    } while (local_58 < param_2);
  }
  return;
}

// Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,`FConstraintsManagerController::GetConstraintsByPredicate<`UE::TransformConstraintUtil::FConstraintsInteractionCache::Get'::__l2::<lambda_1>_>'::__l2::<lambda_2>_> @ 14649ae60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AlgoImpl::
Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_UE::TransformConstraintUtil::FConstraintsInteractionCache::Get_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
          (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,int param_2,int param_3,
          FIdentityFunctor param_4,<lambda_2> param_5)

{
  FWeakObjectPtr *this;
  FWeakObjectPtr FVar1;
  bool bVar2;
  int iVar3;
  UTickableConstraint *pUVar4;
  UTickableConstraint *pUVar5;
  FConstraintTickFunction *pFVar6;
  FConstraintTickFunction *pFVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  FWeakObjectPtr *pFVar12;
  FWeakObjectPtr *pFVar14;
  FWeakObjectPtr *pFVar15;
  FWeakObjectPtr *pFVar16;
  uint uVar17;
  uint uVar18;
  int local_58;
  FWeakObjectPtr *pFVar13;
  
  local_58 = 0;
  if (0 < param_2) {
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar11 = 0;
      if (0 < param_2 - local_58) {
        uVar17 = param_2 - local_58;
        do {
          iVar3 = (uVar17 >> 1) + iVar11;
          bVar2 = FWeakObjectPtr::IsValid(&param_1[param_2].WeakPtr);
          if ((bVar2) &&
             (bVar2 = FWeakObjectPtr::IsValid
                                (&param_1[(longlong)iVar3 + (longlong)local_58].WeakPtr), bVar2)) {
            pUVar4 = (UTickableConstraint *)
                     FWeakObjectPtr::Get(&param_1[(longlong)iVar3 + (longlong)local_58].WeakPtr);
            pUVar5 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_1[param_2].WeakPtr);
            pFVar6 = UTickableConstraint::GetTickFunction(pUVar4,*(UWorld **)param_5);
            pFVar7 = UTickableConstraint::GetTickFunction(pUVar5,*(UWorld **)param_5);
            lVar9 = pFVar6->_padding_;
            lVar10 = (longlong)(int)pFVar6->_padding_ * 0x10 + lVar9;
            for (; lVar9 != lVar10; lVar9 = lVar9 + 0x10) {
              if (*(FConstraintTickFunction **)(lVar9 + 8) == pFVar7) goto LAB_14649af67;
            }
            lVar9 = 0;
LAB_14649af67:
            bVar2 = lVar9 != 0;
          }
          else {
            bVar2 = false;
          }
          if (!bVar2) {
            iVar11 = (uVar17 & 1) + iVar3;
          }
          uVar18 = uVar17 >> 1;
          uVar17 = uVar17 >> 1;
        } while (uVar18 != 0);
      }
      local_58 = local_58 + iVar11;
      if (param_2 <= local_58) {
        return;
      }
      uVar17 = param_3 - param_2;
      iVar11 = 0;
      this = &param_1[local_58].WeakPtr;
      if (0 < (int)uVar17) {
        do {
          uVar18 = uVar17 >> 1;
          bVar2 = FWeakObjectPtr::IsValid
                            (&param_1[(longlong)(int)(uVar18 + iVar11) + (longlong)param_2].WeakPtr)
          ;
          if ((bVar2) && (bVar2 = FWeakObjectPtr::IsValid(this), bVar2)) {
            pUVar4 = (UTickableConstraint *)FWeakObjectPtr::Get(this);
            pUVar5 = (UTickableConstraint *)
                     FWeakObjectPtr::Get(&param_1[(longlong)(int)(uVar18 + iVar11) +
                                                  (longlong)param_2].WeakPtr);
            pFVar6 = UTickableConstraint::GetTickFunction(pUVar4,*(UWorld **)param_5);
            pFVar7 = UTickableConstraint::GetTickFunction(pUVar5,*(UWorld **)param_5);
            lVar9 = pFVar6->_padding_;
            lVar10 = (longlong)(int)pFVar6->_padding_ * 0x10 + lVar9;
            for (; lVar9 != lVar10; lVar9 = lVar9 + 0x10) {
              if (*(FConstraintTickFunction **)(lVar9 + 8) == pFVar7) goto LAB_14649b057;
            }
            lVar9 = 0;
LAB_14649b057:
            bVar2 = lVar9 != 0;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            iVar11 = (uVar17 & 1) + uVar18 + iVar11;
          }
          uVar17 = uVar18;
        } while (uVar18 != 0);
      }
      iVar8 = (iVar11 - local_58) + param_2;
      iVar3 = param_2 - local_58;
      if ((iVar3 != 0) && (iVar3 < iVar8)) {
        pFVar12 = this + iVar3;
        pFVar15 = this;
        pFVar13 = this + iVar3;
        do {
          while( true ) {
            pFVar14 = pFVar12 + 1;
            pFVar16 = pFVar15 + 1;
            FVar1 = *pFVar15;
            *pFVar15 = *pFVar12;
            *pFVar12 = FVar1;
            pFVar15 = pFVar16;
            if (pFVar14 == this + iVar8) break;
            pFVar12 = pFVar14;
            if (pFVar16 == pFVar13) {
              pFVar13 = pFVar14;
            }
          }
          pFVar12 = pFVar13;
        } while (pFVar16 != pFVar13);
      }
      local_58 = local_58 + 1 + iVar11;
      param_2 = param_2 + iVar11;
    } while (local_58 < param_2);
  }
  return;
}

// Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,`FConstraintsManagerController::GetConstraintsByPredicate<`UE::TransformConstraintUtil::GetChildrenConstraints'::__l2::<lambda_1>_>'::__l2::<lambda_2>_> @ 14649b140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AlgoImpl::
Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_UE::TransformConstraintUtil::GetChildrenConstraints_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
          (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,int param_2,int param_3,
          FIdentityFunctor param_4,<lambda_2> param_5)

{
  FWeakObjectPtr *this;
  FWeakObjectPtr FVar1;
  bool bVar2;
  int iVar3;
  UTickableConstraint *pUVar4;
  UTickableConstraint *pUVar5;
  FConstraintTickFunction *pFVar6;
  FConstraintTickFunction *pFVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  FWeakObjectPtr *pFVar12;
  FWeakObjectPtr *pFVar14;
  FWeakObjectPtr *pFVar15;
  FWeakObjectPtr *pFVar16;
  uint uVar17;
  uint uVar18;
  int local_58;
  FWeakObjectPtr *pFVar13;
  
  local_58 = 0;
  if (0 < param_2) {
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar11 = 0;
      if (0 < param_2 - local_58) {
        uVar17 = param_2 - local_58;
        do {
          iVar3 = (uVar17 >> 1) + iVar11;
          bVar2 = FWeakObjectPtr::IsValid(&param_1[param_2].WeakPtr);
          if ((bVar2) &&
             (bVar2 = FWeakObjectPtr::IsValid
                                (&param_1[(longlong)iVar3 + (longlong)local_58].WeakPtr), bVar2)) {
            pUVar4 = (UTickableConstraint *)
                     FWeakObjectPtr::Get(&param_1[(longlong)iVar3 + (longlong)local_58].WeakPtr);
            pUVar5 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_1[param_2].WeakPtr);
            pFVar6 = UTickableConstraint::GetTickFunction
                               (pUVar4,*(UWorld **)param_5.TicksBefore.__this);
            pFVar7 = UTickableConstraint::GetTickFunction
                               (pUVar5,*(UWorld **)param_5.TicksBefore.__this);
            lVar9 = pFVar6->_padding_;
            lVar10 = (longlong)(int)pFVar6->_padding_ * 0x10 + lVar9;
            for (; lVar9 != lVar10; lVar9 = lVar9 + 0x10) {
              if (*(FConstraintTickFunction **)(lVar9 + 8) == pFVar7) goto LAB_14649b247;
            }
            lVar9 = 0;
LAB_14649b247:
            bVar2 = lVar9 != 0;
          }
          else {
            bVar2 = false;
          }
          if (!bVar2) {
            iVar11 = (uVar17 & 1) + iVar3;
          }
          uVar18 = uVar17 >> 1;
          uVar17 = uVar17 >> 1;
        } while (uVar18 != 0);
      }
      local_58 = local_58 + iVar11;
      if (param_2 <= local_58) {
        return;
      }
      uVar17 = param_3 - param_2;
      iVar11 = 0;
      this = &param_1[local_58].WeakPtr;
      if (0 < (int)uVar17) {
        do {
          uVar18 = uVar17 >> 1;
          bVar2 = FWeakObjectPtr::IsValid
                            (&param_1[(longlong)(int)(uVar18 + iVar11) + (longlong)param_2].WeakPtr)
          ;
          if ((bVar2) && (bVar2 = FWeakObjectPtr::IsValid(this), bVar2)) {
            pUVar4 = (UTickableConstraint *)FWeakObjectPtr::Get(this);
            pUVar5 = (UTickableConstraint *)
                     FWeakObjectPtr::Get(&param_1[(longlong)(int)(uVar18 + iVar11) +
                                                  (longlong)param_2].WeakPtr);
            pFVar6 = UTickableConstraint::GetTickFunction
                               (pUVar4,*(UWorld **)param_5.TicksBefore.__this);
            pFVar7 = UTickableConstraint::GetTickFunction
                               (pUVar5,*(UWorld **)param_5.TicksBefore.__this);
            lVar9 = pFVar6->_padding_;
            lVar10 = (longlong)(int)pFVar6->_padding_ * 0x10 + lVar9;
            for (; lVar9 != lVar10; lVar9 = lVar9 + 0x10) {
              if (*(FConstraintTickFunction **)(lVar9 + 8) == pFVar7) goto LAB_14649b337;
            }
            lVar9 = 0;
LAB_14649b337:
            bVar2 = lVar9 != 0;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            iVar11 = (uVar17 & 1) + uVar18 + iVar11;
          }
          uVar17 = uVar18;
        } while (uVar18 != 0);
      }
      iVar8 = (iVar11 - local_58) + param_2;
      iVar3 = param_2 - local_58;
      if ((iVar3 != 0) && (iVar3 < iVar8)) {
        pFVar12 = this + iVar3;
        pFVar15 = this;
        pFVar13 = this + iVar3;
        do {
          while( true ) {
            pFVar14 = pFVar12 + 1;
            pFVar16 = pFVar15 + 1;
            FVar1 = *pFVar15;
            *pFVar15 = *pFVar12;
            *pFVar12 = FVar1;
            pFVar15 = pFVar16;
            if (pFVar14 == this + iVar8) break;
            pFVar12 = pFVar14;
            if (pFVar16 == pFVar13) {
              pFVar13 = pFVar14;
            }
          }
          pFVar12 = pFVar13;
        } while (pFVar16 != pFVar13);
      }
      local_58 = local_58 + 1 + iVar11;
      param_2 = param_2 + iVar11;
    } while (local_58 < param_2);
  }
  return;
}

// Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,`FConstraintsManagerController::GetConstraintsByPredicate<`FConstraintCycleChecker::UpdateCyclingDependency'::__l2::<lambda_1>_>'::__l2::<lambda_2>_> @ 14649b420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AlgoImpl::
Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_FConstraintCycleChecker::UpdateCyclingDependency_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
          (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,int param_2,int param_3,
          FIdentityFunctor param_4,<lambda_2> param_5)

{
  FWeakObjectPtr *this;
  FWeakObjectPtr FVar1;
  bool bVar2;
  int iVar3;
  UTickableConstraint *pUVar4;
  UTickableConstraint *pUVar5;
  FConstraintTickFunction *pFVar6;
  FConstraintTickFunction *pFVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  FWeakObjectPtr *pFVar12;
  FWeakObjectPtr *pFVar14;
  FWeakObjectPtr *pFVar15;
  FWeakObjectPtr *pFVar16;
  uint uVar17;
  uint uVar18;
  int local_58;
  FWeakObjectPtr *pFVar13;
  
  local_58 = 0;
  if (0 < param_2) {
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar11 = 0;
      if (0 < param_2 - local_58) {
        uVar17 = param_2 - local_58;
        do {
          iVar3 = (uVar17 >> 1) + iVar11;
          bVar2 = FWeakObjectPtr::IsValid(&param_1[param_2].WeakPtr);
          if ((bVar2) &&
             (bVar2 = FWeakObjectPtr::IsValid
                                (&param_1[(longlong)iVar3 + (longlong)local_58].WeakPtr), bVar2)) {
            pUVar4 = (UTickableConstraint *)
                     FWeakObjectPtr::Get(&param_1[(longlong)iVar3 + (longlong)local_58].WeakPtr);
            pUVar5 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_1[param_2].WeakPtr);
            pFVar6 = UTickableConstraint::GetTickFunction
                               (pUVar4,*(UWorld **)param_5.TicksBefore.__this);
            pFVar7 = UTickableConstraint::GetTickFunction
                               (pUVar5,*(UWorld **)param_5.TicksBefore.__this);
            lVar9 = pFVar6->_padding_;
            lVar10 = (longlong)(int)pFVar6->_padding_ * 0x10 + lVar9;
            for (; lVar9 != lVar10; lVar9 = lVar9 + 0x10) {
              if (*(FConstraintTickFunction **)(lVar9 + 8) == pFVar7) goto LAB_14649b527;
            }
            lVar9 = 0;
LAB_14649b527:
            bVar2 = lVar9 != 0;
          }
          else {
            bVar2 = false;
          }
          if (!bVar2) {
            iVar11 = (uVar17 & 1) + iVar3;
          }
          uVar18 = uVar17 >> 1;
          uVar17 = uVar17 >> 1;
        } while (uVar18 != 0);
      }
      local_58 = local_58 + iVar11;
      if (param_2 <= local_58) {
        return;
      }
      uVar17 = param_3 - param_2;
      iVar11 = 0;
      this = &param_1[local_58].WeakPtr;
      if (0 < (int)uVar17) {
        do {
          uVar18 = uVar17 >> 1;
          bVar2 = FWeakObjectPtr::IsValid
                            (&param_1[(longlong)(int)(uVar18 + iVar11) + (longlong)param_2].WeakPtr)
          ;
          if ((bVar2) && (bVar2 = FWeakObjectPtr::IsValid(this), bVar2)) {
            pUVar4 = (UTickableConstraint *)FWeakObjectPtr::Get(this);
            pUVar5 = (UTickableConstraint *)
                     FWeakObjectPtr::Get(&param_1[(longlong)(int)(uVar18 + iVar11) +
                                                  (longlong)param_2].WeakPtr);
            pFVar6 = UTickableConstraint::GetTickFunction
                               (pUVar4,*(UWorld **)param_5.TicksBefore.__this);
            pFVar7 = UTickableConstraint::GetTickFunction
                               (pUVar5,*(UWorld **)param_5.TicksBefore.__this);
            lVar9 = pFVar6->_padding_;
            lVar10 = (longlong)(int)pFVar6->_padding_ * 0x10 + lVar9;
            for (; lVar9 != lVar10; lVar9 = lVar9 + 0x10) {
              if (*(FConstraintTickFunction **)(lVar9 + 8) == pFVar7) goto LAB_14649b617;
            }
            lVar9 = 0;
LAB_14649b617:
            bVar2 = lVar9 != 0;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            iVar11 = (uVar17 & 1) + uVar18 + iVar11;
          }
          uVar17 = uVar18;
        } while (uVar18 != 0);
      }
      iVar8 = (iVar11 - local_58) + param_2;
      iVar3 = param_2 - local_58;
      if ((iVar3 != 0) && (iVar3 < iVar8)) {
        pFVar12 = this + iVar3;
        pFVar15 = this;
        pFVar13 = this + iVar3;
        do {
          while( true ) {
            pFVar14 = pFVar12 + 1;
            pFVar16 = pFVar15 + 1;
            FVar1 = *pFVar15;
            *pFVar15 = *pFVar12;
            *pFVar12 = FVar1;
            pFVar15 = pFVar16;
            if (pFVar14 == this + iVar8) break;
            pFVar12 = pFVar14;
            if (pFVar16 == pFVar13) {
              pFVar13 = pFVar14;
            }
          }
          pFVar12 = pFVar13;
        } while (pFVar16 != pFVar13);
      }
      local_58 = local_58 + 1 + iVar11;
      param_2 = param_2 + iVar11;
    } while (local_58 < param_2);
  }
  return;
}

// Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,`FConstraintsManagerController::GetConstraintsByPredicate<`FDependencyBuilder::BuildAttachmentsDependencies'::__l18::<lambda_1>_>'::__l2::<lambda_2>_> @ 14649b700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AlgoImpl::
Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_FDependencyBuilder::BuildAttachmentsDependencies_::__l18::<lambda_1>_>_::__l2::<lambda_2>_>
          (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,int param_2,int param_3,
          FIdentityFunctor param_4,<lambda_2> param_5)

{
  FWeakObjectPtr *this;
  FWeakObjectPtr FVar1;
  bool bVar2;
  int iVar3;
  UTickableConstraint *pUVar4;
  UTickableConstraint *pUVar5;
  FConstraintTickFunction *pFVar6;
  FConstraintTickFunction *pFVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  FWeakObjectPtr *pFVar12;
  FWeakObjectPtr *pFVar14;
  FWeakObjectPtr *pFVar15;
  FWeakObjectPtr *pFVar16;
  uint uVar17;
  uint uVar18;
  int local_58;
  FWeakObjectPtr *pFVar13;
  
  local_58 = 0;
  if (0 < param_2) {
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar11 = 0;
      if (0 < param_2 - local_58) {
        uVar17 = param_2 - local_58;
        do {
          iVar3 = (uVar17 >> 1) + iVar11;
          bVar2 = FWeakObjectPtr::IsValid(&param_1[param_2].WeakPtr);
          if ((bVar2) &&
             (bVar2 = FWeakObjectPtr::IsValid
                                (&param_1[(longlong)iVar3 + (longlong)local_58].WeakPtr), bVar2)) {
            pUVar4 = (UTickableConstraint *)
                     FWeakObjectPtr::Get(&param_1[(longlong)iVar3 + (longlong)local_58].WeakPtr);
            pUVar5 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_1[param_2].WeakPtr);
            pFVar6 = UTickableConstraint::GetTickFunction
                               (pUVar4,*(UWorld **)param_5.TicksBefore.__this);
            pFVar7 = UTickableConstraint::GetTickFunction
                               (pUVar5,*(UWorld **)param_5.TicksBefore.__this);
            lVar9 = pFVar6->_padding_;
            lVar10 = (longlong)(int)pFVar6->_padding_ * 0x10 + lVar9;
            for (; lVar9 != lVar10; lVar9 = lVar9 + 0x10) {
              if (*(FConstraintTickFunction **)(lVar9 + 8) == pFVar7) goto LAB_14649b807;
            }
            lVar9 = 0;
LAB_14649b807:
            bVar2 = lVar9 != 0;
          }
          else {
            bVar2 = false;
          }
          if (!bVar2) {
            iVar11 = (uVar17 & 1) + iVar3;
          }
          uVar18 = uVar17 >> 1;
          uVar17 = uVar17 >> 1;
        } while (uVar18 != 0);
      }
      local_58 = local_58 + iVar11;
      if (param_2 <= local_58) {
        return;
      }
      uVar17 = param_3 - param_2;
      iVar11 = 0;
      this = &param_1[local_58].WeakPtr;
      if (0 < (int)uVar17) {
        do {
          uVar18 = uVar17 >> 1;
          bVar2 = FWeakObjectPtr::IsValid
                            (&param_1[(longlong)(int)(uVar18 + iVar11) + (longlong)param_2].WeakPtr)
          ;
          if ((bVar2) && (bVar2 = FWeakObjectPtr::IsValid(this), bVar2)) {
            pUVar4 = (UTickableConstraint *)FWeakObjectPtr::Get(this);
            pUVar5 = (UTickableConstraint *)
                     FWeakObjectPtr::Get(&param_1[(longlong)(int)(uVar18 + iVar11) +
                                                  (longlong)param_2].WeakPtr);
            pFVar6 = UTickableConstraint::GetTickFunction
                               (pUVar4,*(UWorld **)param_5.TicksBefore.__this);
            pFVar7 = UTickableConstraint::GetTickFunction
                               (pUVar5,*(UWorld **)param_5.TicksBefore.__this);
            lVar9 = pFVar6->_padding_;
            lVar10 = (longlong)(int)pFVar6->_padding_ * 0x10 + lVar9;
            for (; lVar9 != lVar10; lVar9 = lVar9 + 0x10) {
              if (*(FConstraintTickFunction **)(lVar9 + 8) == pFVar7) goto LAB_14649b8f7;
            }
            lVar9 = 0;
LAB_14649b8f7:
            bVar2 = lVar9 != 0;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            iVar11 = (uVar17 & 1) + uVar18 + iVar11;
          }
          uVar17 = uVar18;
        } while (uVar18 != 0);
      }
      iVar8 = (iVar11 - local_58) + param_2;
      iVar3 = param_2 - local_58;
      if ((iVar3 != 0) && (iVar3 < iVar8)) {
        pFVar12 = this + iVar3;
        pFVar15 = this;
        pFVar13 = this + iVar3;
        do {
          while( true ) {
            pFVar14 = pFVar12 + 1;
            pFVar16 = pFVar15 + 1;
            FVar1 = *pFVar15;
            *pFVar15 = *pFVar12;
            *pFVar12 = FVar1;
            pFVar15 = pFVar16;
            if (pFVar14 == this + iVar8) break;
            pFVar12 = pFVar14;
            if (pFVar16 == pFVar13) {
              pFVar13 = pFVar14;
            }
          }
          pFVar12 = pFVar13;
        } while (pFVar16 != pFVar13);
      }
      local_58 = local_58 + 1 + iVar11;
      param_2 = param_2 + iVar11;
    } while (local_58 < param_2);
  }
  return;
}

// Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,`FConstraintsManagerController::GetConstraintsByPredicate<`FDependencyBuilder::BuildExternalDependencies'::__l108::<lambda_3>_>'::__l2::<lambda_2>_> @ 14649b9e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AlgoImpl::
Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_FDependencyBuilder::BuildExternalDependencies_::__l108::<lambda_3>_>_::__l2::<lambda_2>_>
          (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,int param_2,int param_3,
          FIdentityFunctor param_4,<lambda_2> param_5)

{
  FWeakObjectPtr *this;
  FWeakObjectPtr FVar1;
  bool bVar2;
  int iVar3;
  UTickableConstraint *pUVar4;
  UTickableConstraint *pUVar5;
  FConstraintTickFunction *pFVar6;
  FConstraintTickFunction *pFVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  FWeakObjectPtr *pFVar12;
  FWeakObjectPtr *pFVar14;
  FWeakObjectPtr *pFVar15;
  FWeakObjectPtr *pFVar16;
  uint uVar17;
  uint uVar18;
  int local_58;
  FWeakObjectPtr *pFVar13;
  
  local_58 = 0;
  if (0 < param_2) {
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar11 = 0;
      if (0 < param_2 - local_58) {
        uVar17 = param_2 - local_58;
        do {
          iVar3 = (uVar17 >> 1) + iVar11;
          bVar2 = FWeakObjectPtr::IsValid(&param_1[param_2].WeakPtr);
          if ((bVar2) &&
             (bVar2 = FWeakObjectPtr::IsValid
                                (&param_1[(longlong)iVar3 + (longlong)local_58].WeakPtr), bVar2)) {
            pUVar4 = (UTickableConstraint *)
                     FWeakObjectPtr::Get(&param_1[(longlong)iVar3 + (longlong)local_58].WeakPtr);
            pUVar5 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_1[param_2].WeakPtr);
            pFVar6 = UTickableConstraint::GetTickFunction
                               (pUVar4,*(UWorld **)param_5.TicksBefore.__this);
            pFVar7 = UTickableConstraint::GetTickFunction
                               (pUVar5,*(UWorld **)param_5.TicksBefore.__this);
            lVar9 = pFVar6->_padding_;
            lVar10 = (longlong)(int)pFVar6->_padding_ * 0x10 + lVar9;
            for (; lVar9 != lVar10; lVar9 = lVar9 + 0x10) {
              if (*(FConstraintTickFunction **)(lVar9 + 8) == pFVar7) goto LAB_14649bae7;
            }
            lVar9 = 0;
LAB_14649bae7:
            bVar2 = lVar9 != 0;
          }
          else {
            bVar2 = false;
          }
          if (!bVar2) {
            iVar11 = (uVar17 & 1) + iVar3;
          }
          uVar18 = uVar17 >> 1;
          uVar17 = uVar17 >> 1;
        } while (uVar18 != 0);
      }
      local_58 = local_58 + iVar11;
      if (param_2 <= local_58) {
        return;
      }
      uVar17 = param_3 - param_2;
      iVar11 = 0;
      this = &param_1[local_58].WeakPtr;
      if (0 < (int)uVar17) {
        do {
          uVar18 = uVar17 >> 1;
          bVar2 = FWeakObjectPtr::IsValid
                            (&param_1[(longlong)(int)(uVar18 + iVar11) + (longlong)param_2].WeakPtr)
          ;
          if ((bVar2) && (bVar2 = FWeakObjectPtr::IsValid(this), bVar2)) {
            pUVar4 = (UTickableConstraint *)FWeakObjectPtr::Get(this);
            pUVar5 = (UTickableConstraint *)
                     FWeakObjectPtr::Get(&param_1[(longlong)(int)(uVar18 + iVar11) +
                                                  (longlong)param_2].WeakPtr);
            pFVar6 = UTickableConstraint::GetTickFunction
                               (pUVar4,*(UWorld **)param_5.TicksBefore.__this);
            pFVar7 = UTickableConstraint::GetTickFunction
                               (pUVar5,*(UWorld **)param_5.TicksBefore.__this);
            lVar9 = pFVar6->_padding_;
            lVar10 = (longlong)(int)pFVar6->_padding_ * 0x10 + lVar9;
            for (; lVar9 != lVar10; lVar9 = lVar9 + 0x10) {
              if (*(FConstraintTickFunction **)(lVar9 + 8) == pFVar7) goto LAB_14649bbd7;
            }
            lVar9 = 0;
LAB_14649bbd7:
            bVar2 = lVar9 != 0;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            iVar11 = (uVar17 & 1) + uVar18 + iVar11;
          }
          uVar17 = uVar18;
        } while (uVar18 != 0);
      }
      iVar8 = (iVar11 - local_58) + param_2;
      iVar3 = param_2 - local_58;
      if ((iVar3 != 0) && (iVar3 < iVar8)) {
        pFVar12 = this + iVar3;
        pFVar15 = this;
        pFVar13 = this + iVar3;
        do {
          while( true ) {
            pFVar14 = pFVar12 + 1;
            pFVar16 = pFVar15 + 1;
            FVar1 = *pFVar15;
            *pFVar15 = *pFVar12;
            *pFVar12 = FVar1;
            pFVar15 = pFVar16;
            if (pFVar14 == this + iVar8) break;
            pFVar12 = pFVar14;
            if (pFVar16 == pFVar13) {
              pFVar13 = pFVar14;
            }
          }
          pFVar12 = pFVar13;
        } while (pFVar16 != pFVar13);
      }
      local_58 = local_58 + 1 + iVar11;
      param_2 = param_2 + iVar11;
    } while (local_58 < param_2);
  }
  return;
}

// Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,`FConstraintsManagerController::GetParentConstraints'::__l11::<lambda_3>_> @ 14649bcc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AlgoImpl::
Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetParentConstraints_::__l11::<lambda_3>_>
          (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,int param_2,int param_3,
          FIdentityFunctor param_4,<lambda_3> param_5)

{
  FWeakObjectPtr *this;
  FWeakObjectPtr FVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  UTickableConstraint *pUVar5;
  UTickableConstraint *pUVar6;
  UWorld *pUVar7;
  FConstraintTickFunction *pFVar8;
  FConstraintTickFunction *pFVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  FWeakObjectPtr *pFVar14;
  FWeakObjectPtr *pFVar15;
  FWeakObjectPtr *pFVar16;
  FWeakObjectPtr *pFVar18;
  uint uVar19;
  int local_58;
  FWeakObjectPtr *pFVar17;
  
  local_58 = 0;
  if (0 < param_2) {
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar13 = 0;
      if (0 < param_2 - local_58) {
        uVar19 = param_2 - local_58;
        do {
          iVar4 = (uVar19 >> 1) + iVar13;
          pUVar5 = (UTickableConstraint *)
                   FWeakObjectPtr::Get(&param_1[(longlong)iVar4 + (longlong)local_58].WeakPtr);
          pUVar6 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_1[param_2].WeakPtr);
          bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_5.TicksBefore.Context);
          if ((bVar3) &&
             (pUVar7 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_5.TicksBefore.Context),
             pUVar7 != (UWorld *)0x0)) {
            pFVar8 = UTickableConstraint::GetTickFunction(pUVar5,pUVar7);
            pFVar9 = UTickableConstraint::GetTickFunction(pUVar6,pUVar7);
            lVar11 = pFVar8->_padding_;
            lVar12 = (longlong)(int)pFVar8->_padding_ * 0x10 + lVar11;
            for (; lVar11 != lVar12; lVar11 = lVar11 + 0x10) {
              if (*(FConstraintTickFunction **)(lVar11 + 8) == pFVar9) goto LAB_14649bdc9;
            }
            lVar11 = 0;
LAB_14649bdc9:
            bVar3 = lVar11 != 0;
          }
          else {
            bVar3 = false;
          }
          if (!bVar3) {
            iVar13 = (uVar19 & 1) + iVar4;
          }
          uVar2 = uVar19 >> 1;
          uVar19 = uVar19 >> 1;
        } while (uVar2 != 0);
      }
      local_58 = local_58 + iVar13;
      if (param_2 <= local_58) {
        return;
      }
      iVar13 = 0;
      this = &param_1[local_58].WeakPtr;
      uVar19 = param_3 - param_2;
      if (0 < param_3 - param_2) {
        do {
          iVar4 = (uVar19 >> 1) + iVar13;
          pUVar5 = (UTickableConstraint *)FWeakObjectPtr::Get(this);
          pUVar6 = (UTickableConstraint *)
                   FWeakObjectPtr::Get(&param_1[(longlong)iVar4 + (longlong)param_2].WeakPtr);
          bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_5.TicksBefore.Context);
          if ((bVar3) &&
             (pUVar7 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_5.TicksBefore.Context),
             pUVar7 != (UWorld *)0x0)) {
            pFVar8 = UTickableConstraint::GetTickFunction(pUVar5,pUVar7);
            pFVar9 = UTickableConstraint::GetTickFunction(pUVar6,pUVar7);
            lVar11 = pFVar8->_padding_;
            lVar12 = (longlong)(int)pFVar8->_padding_ * 0x10 + lVar11;
            for (; lVar11 != lVar12; lVar11 = lVar11 + 0x10) {
              if (*(FConstraintTickFunction **)(lVar11 + 8) == pFVar9) goto LAB_14649bec4;
            }
            lVar11 = 0;
LAB_14649bec4:
            bVar3 = lVar11 != 0;
          }
          else {
            bVar3 = false;
          }
          if (bVar3) {
            iVar13 = (uVar19 & 1) + iVar4;
          }
          uVar2 = uVar19 >> 1;
          uVar19 = uVar19 >> 1;
        } while (uVar2 != 0);
      }
      iVar10 = (iVar13 - local_58) + param_2;
      iVar4 = param_2 - local_58;
      if ((iVar4 != 0) && (iVar4 < iVar10)) {
        pFVar14 = this;
        pFVar16 = this + iVar4;
        pFVar17 = this + iVar4;
        do {
          while( true ) {
            pFVar18 = pFVar16 + 1;
            pFVar15 = pFVar14 + 1;
            FVar1 = *pFVar14;
            *pFVar14 = *pFVar16;
            *pFVar16 = FVar1;
            pFVar14 = pFVar15;
            if (pFVar18 == this + iVar10) break;
            pFVar16 = pFVar18;
            if (pFVar15 == pFVar17) {
              pFVar17 = pFVar18;
            }
          }
          pFVar16 = pFVar17;
        } while (pFVar15 != pFVar17);
      }
      local_58 = local_58 + 1 + iVar13;
      param_2 = param_2 + iVar13;
    } while (local_58 < param_2);
  }
  return;
}

// NewObject<UConstraintsManager> @ 14649c0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UConstraintsManager * __cdecl
NewObject<UConstraintsManager>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UConstraintsManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UConstraintsManager::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UConstraintsManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UTickableLookAtConstraint> @ 14649c190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTickableLookAtConstraint * __cdecl
NewObject<UTickableLookAtConstraint>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UTickableLookAtConstraint *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UTickableLookAtConstraint::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UTickableLookAtConstraint *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UTickableParentConstraint> @ 14649c280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTickableParentConstraint * __cdecl
NewObject<UTickableParentConstraint>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UTickableParentConstraint *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UTickableParentConstraint::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UTickableParentConstraint *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UTickableRotationConstraint> @ 14649c370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTickableRotationConstraint * __cdecl
NewObject<UTickableRotationConstraint>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UTickableRotationConstraint *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UTickableRotationConstraint::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UTickableRotationConstraint *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UTickableScaleConstraint> @ 14649c460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTickableScaleConstraint * __cdecl
NewObject<UTickableScaleConstraint>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UTickableScaleConstraint *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UTickableScaleConstraint::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UTickableScaleConstraint *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UTickableTranslationConstraint> @ 14649c550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTickableTranslationConstraint * __cdecl
NewObject<UTickableTranslationConstraint>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UTickableTranslationConstraint *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UTickableTranslationConstraint::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UTickableTranslationConstraint *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UTransformableComponentHandle> @ 14649c640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTransformableComponentHandle * __cdecl
NewObject<UTransformableComponentHandle>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UTransformableComponentHandle *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UTransformableComponentHandle::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UTransformableComponentHandle *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// RotateInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>_> @ 14649ca30

int __cdecl
AlgoImpl::RotateInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>_>
          (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,int param_2,int param_3)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr *pFVar2;
  FWeakObjectPtr *pFVar4;
  FWeakObjectPtr *pFVar5;
  FWeakObjectPtr *pFVar6;
  FWeakObjectPtr *pFVar3;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pFVar2 = &param_1[param_3].WeakPtr;
    pFVar5 = &param_1->WeakPtr;
    pFVar3 = &param_1[param_3].WeakPtr;
    do {
      while( true ) {
        pFVar4 = pFVar2 + 1;
        pFVar6 = pFVar5 + 1;
        FVar1 = *pFVar5;
        *pFVar5 = *pFVar2;
        *pFVar2 = FVar1;
        pFVar5 = pFVar6;
        if (pFVar4 == &param_1[param_2].WeakPtr) break;
        pFVar2 = pFVar4;
        if (pFVar6 == pFVar3) {
          pFVar3 = pFVar4;
        }
      }
      pFVar2 = pFVar3;
    } while (pFVar6 != pFVar3);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,`FConstraintsManagerController::GetConstraintsByPredicate<`FDependencyBuilder::BuildSelfDependencies'::__l2::<lambda_1>_>'::__l2::<lambda_2>_> @ 14649cb70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AlgoImpl::
StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_FDependencyBuilder::BuildSelfDependencies_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
          (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,int param_2,
          FIdentityFunctor param_3,<lambda_2> param_4)

{
  FWeakObjectPtr FVar1;
  int iVar2;
  <lambda_2> <Var3;
  bool bVar4;
  FWeakObjectPtr *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *pTVar10;
  <lambda_2> local_res20;
  
  iVar6 = 0;
  local_res20.TicksBefore.__this = param_4.TicksBefore.__this;
  if (0 < param_2) {
    pTVar10 = param_1 + 1;
    pFVar5 = &param_1->WeakPtr;
    do {
      if ((iVar6 + 1 < param_2) &&
         (bVar4 = `FConstraintsManagerController::
                  GetConstraintsByPredicate<`FDependencyBuilder::BuildSelfDependencies'::__l2::<lambda_1>_>'
                  ::__l2::<lambda_2>::operator()
                            (&local_res20,pTVar10,
                             (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)pFVar5), bVar4))
      {
        FVar1 = *pFVar5;
        *pFVar5 = pFVar5[1];
        pFVar5[1] = FVar1;
      }
      iVar6 = iVar6 + 2;
      pTVar10 = pTVar10 + 2;
      pFVar5 = pFVar5 + 2;
    } while (iVar6 < param_2);
  }
  <Var3.TicksBefore.__this = local_res20.TicksBefore.__this;
  iVar6 = 2;
  if (2 < param_2) {
    do {
      iVar2 = iVar6 * 2;
      iVar7 = 0;
      iVar9 = param_2;
      do {
        iVar8 = iVar9;
        if (iVar2 <= iVar9) {
          iVar8 = iVar2;
        }
        Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_FDependencyBuilder::BuildSelfDependencies_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
                  (param_1 + iVar7,iVar6,iVar8,param_3,<Var3);
        iVar7 = iVar7 + iVar2;
        iVar9 = iVar9 + iVar6 * -2;
      } while (iVar7 < param_2);
      iVar6 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

// StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,`FConstraintsManagerController::GetConstraintsByPredicate<`FConstraintCycleChecker::CheckAndFixCycles'::__l2::<lambda_1>_>'::__l2::<lambda_2>_> @ 14649cc70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AlgoImpl::
StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_FConstraintCycleChecker::CheckAndFixCycles_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
          (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,int param_2,
          FIdentityFunctor param_3,<lambda_2> param_4)

{
  FWeakObjectPtr FVar1;
  int iVar2;
  <lambda_2> <Var3;
  bool bVar4;
  FWeakObjectPtr *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *pTVar10;
  <lambda_2> local_res20;
  
  iVar6 = 0;
  local_res20.TicksBefore.__this = param_4.TicksBefore.__this;
  if (0 < param_2) {
    pTVar10 = param_1 + 1;
    pFVar5 = &param_1->WeakPtr;
    do {
      if ((iVar6 + 1 < param_2) &&
         (bVar4 = `FConstraintsManagerController::
                  GetConstraintsByPredicate<`FConstraintCycleChecker::CheckAndFixCycles'::__l2::<lambda_1>_>'
                  ::__l2::<lambda_2>::operator()
                            (&local_res20,pTVar10,
                             (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)pFVar5), bVar4))
      {
        FVar1 = *pFVar5;
        *pFVar5 = pFVar5[1];
        pFVar5[1] = FVar1;
      }
      iVar6 = iVar6 + 2;
      pTVar10 = pTVar10 + 2;
      pFVar5 = pFVar5 + 2;
    } while (iVar6 < param_2);
  }
  <Var3.TicksBefore.__this = local_res20.TicksBefore.__this;
  iVar6 = 2;
  if (2 < param_2) {
    do {
      iVar2 = iVar6 * 2;
      iVar7 = 0;
      iVar9 = param_2;
      do {
        iVar8 = iVar9;
        if (iVar2 <= iVar9) {
          iVar8 = iVar2;
        }
        Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_FConstraintCycleChecker::CheckAndFixCycles_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
                  (param_1 + iVar7,iVar6,iVar8,param_3,<Var3);
        iVar7 = iVar7 + iVar2;
        iVar9 = iVar9 + iVar6 * -2;
      } while (iVar7 < param_2);
      iVar6 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

// StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,`FConstraintsManagerController::GetConstraintsByPredicate<`UE::TransformConstraintUtil::FConstraintsInteractionCache::Get'::__l2::<lambda_1>_>'::__l2::<lambda_2>_> @ 14649cd70

void __cdecl
AlgoImpl::
StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_UE::TransformConstraintUtil::FConstraintsInteractionCache::Get_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
          (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,int param_2,
          FIdentityFunctor param_3,<lambda_2> param_4)

{
  FWeakObjectPtr FVar1;
  int iVar2;
  <lambda_2> <Var3;
  bool bVar4;
  FWeakObjectPtr *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *pTVar10;
  <lambda_2> local_res20;
  
  iVar6 = 0;
  local_res20 = param_4;
  if (0 < param_2) {
    pTVar10 = param_1 + 1;
    pFVar5 = &param_1->WeakPtr;
    do {
      if ((iVar6 + 1 < param_2) &&
         (bVar4 = `FConstraintsManagerController::
                  GetConstraintsByPredicate<`UE::TransformConstraintUtil::FConstraintsInteractionCache::Get'::__l2::<lambda_1>_>'
                  ::__l2::<lambda_2>::operator()
                            (&local_res20,pTVar10,
                             (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)pFVar5), bVar4))
      {
        FVar1 = *pFVar5;
        *pFVar5 = pFVar5[1];
        pFVar5[1] = FVar1;
      }
      iVar6 = iVar6 + 2;
      pTVar10 = pTVar10 + 2;
      pFVar5 = pFVar5 + 2;
    } while (iVar6 < param_2);
  }
  <Var3 = local_res20;
  iVar6 = 2;
  if (2 < param_2) {
    do {
      iVar2 = iVar6 * 2;
      iVar7 = 0;
      iVar9 = param_2;
      do {
        iVar8 = iVar9;
        if (iVar2 <= iVar9) {
          iVar8 = iVar2;
        }
        Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_UE::TransformConstraintUtil::FConstraintsInteractionCache::Get_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
                  (param_1 + iVar7,iVar6,iVar8,param_3,<Var3);
        iVar7 = iVar7 + iVar2;
        iVar9 = iVar9 + iVar6 * -2;
      } while (iVar7 < param_2);
      iVar6 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

// StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,`FConstraintsManagerController::GetConstraintsByPredicate<`UE::TransformConstraintUtil::GetChildrenConstraints'::__l2::<lambda_1>_>'::__l2::<lambda_2>_> @ 14649ce70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AlgoImpl::
StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_UE::TransformConstraintUtil::GetChildrenConstraints_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
          (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,int param_2,
          FIdentityFunctor param_3,<lambda_2> param_4)

{
  FWeakObjectPtr FVar1;
  int iVar2;
  <lambda_2> <Var3;
  bool bVar4;
  FWeakObjectPtr *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *pTVar10;
  <lambda_2> local_res20;
  
  iVar6 = 0;
  local_res20.TicksBefore.__this = param_4.TicksBefore.__this;
  if (0 < param_2) {
    pTVar10 = param_1 + 1;
    pFVar5 = &param_1->WeakPtr;
    do {
      if ((iVar6 + 1 < param_2) &&
         (bVar4 = `FConstraintsManagerController::
                  GetConstraintsByPredicate<`UE::TransformConstraintUtil::GetChildrenConstraints'::__l2::<lambda_1>_>'
                  ::__l2::<lambda_2>::operator()
                            (&local_res20,pTVar10,
                             (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)pFVar5), bVar4))
      {
        FVar1 = *pFVar5;
        *pFVar5 = pFVar5[1];
        pFVar5[1] = FVar1;
      }
      iVar6 = iVar6 + 2;
      pTVar10 = pTVar10 + 2;
      pFVar5 = pFVar5 + 2;
    } while (iVar6 < param_2);
  }
  <Var3.TicksBefore.__this = local_res20.TicksBefore.__this;
  iVar6 = 2;
  if (2 < param_2) {
    do {
      iVar2 = iVar6 * 2;
      iVar7 = 0;
      iVar9 = param_2;
      do {
        iVar8 = iVar9;
        if (iVar2 <= iVar9) {
          iVar8 = iVar2;
        }
        Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_UE::TransformConstraintUtil::GetChildrenConstraints_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
                  (param_1 + iVar7,iVar6,iVar8,param_3,<Var3);
        iVar7 = iVar7 + iVar2;
        iVar9 = iVar9 + iVar6 * -2;
      } while (iVar7 < param_2);
      iVar6 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

// StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,`FConstraintsManagerController::GetConstraintsByPredicate<`FConstraintCycleChecker::UpdateCyclingDependency'::__l2::<lambda_1>_>'::__l2::<lambda_2>_> @ 14649cf70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AlgoImpl::
StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_FConstraintCycleChecker::UpdateCyclingDependency_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
          (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,int param_2,
          FIdentityFunctor param_3,<lambda_2> param_4)

{
  FWeakObjectPtr FVar1;
  int iVar2;
  <lambda_2> <Var3;
  bool bVar4;
  FWeakObjectPtr *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *pTVar10;
  <lambda_2> local_res20;
  
  iVar6 = 0;
  local_res20.TicksBefore.__this = param_4.TicksBefore.__this;
  if (0 < param_2) {
    pTVar10 = param_1 + 1;
    pFVar5 = &param_1->WeakPtr;
    do {
      if ((iVar6 + 1 < param_2) &&
         (bVar4 = `FConstraintsManagerController::
                  GetConstraintsByPredicate<`FConstraintCycleChecker::UpdateCyclingDependency'::__l2::<lambda_1>_>'
                  ::__l2::<lambda_2>::operator()
                            (&local_res20,pTVar10,
                             (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)pFVar5), bVar4))
      {
        FVar1 = *pFVar5;
        *pFVar5 = pFVar5[1];
        pFVar5[1] = FVar1;
      }
      iVar6 = iVar6 + 2;
      pTVar10 = pTVar10 + 2;
      pFVar5 = pFVar5 + 2;
    } while (iVar6 < param_2);
  }
  <Var3.TicksBefore.__this = local_res20.TicksBefore.__this;
  iVar6 = 2;
  if (2 < param_2) {
    do {
      iVar2 = iVar6 * 2;
      iVar7 = 0;
      iVar9 = param_2;
      do {
        iVar8 = iVar9;
        if (iVar2 <= iVar9) {
          iVar8 = iVar2;
        }
        Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_FConstraintCycleChecker::UpdateCyclingDependency_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
                  (param_1 + iVar7,iVar6,iVar8,param_3,<Var3);
        iVar7 = iVar7 + iVar2;
        iVar9 = iVar9 + iVar6 * -2;
      } while (iVar7 < param_2);
      iVar6 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

// StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,`FConstraintsManagerController::GetConstraintsByPredicate<`FDependencyBuilder::BuildAttachmentsDependencies'::__l18::<lambda_1>_>'::__l2::<lambda_2>_> @ 14649d070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AlgoImpl::
StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_FDependencyBuilder::BuildAttachmentsDependencies_::__l18::<lambda_1>_>_::__l2::<lambda_2>_>
          (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,int param_2,
          FIdentityFunctor param_3,<lambda_2> param_4)

{
  FWeakObjectPtr FVar1;
  int iVar2;
  <lambda_2> <Var3;
  bool bVar4;
  FWeakObjectPtr *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *pTVar10;
  <lambda_2> local_res20;
  
  iVar6 = 0;
  local_res20.TicksBefore.__this = param_4.TicksBefore.__this;
  if (0 < param_2) {
    pTVar10 = param_1 + 1;
    pFVar5 = &param_1->WeakPtr;
    do {
      if ((iVar6 + 1 < param_2) &&
         (bVar4 = `FConstraintsManagerController::
                  GetConstraintsByPredicate<`FDependencyBuilder::BuildAttachmentsDependencies'::__l18::<lambda_1>_>'
                  ::__l2::<lambda_2>::operator()
                            (&local_res20,pTVar10,
                             (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)pFVar5), bVar4))
      {
        FVar1 = *pFVar5;
        *pFVar5 = pFVar5[1];
        pFVar5[1] = FVar1;
      }
      iVar6 = iVar6 + 2;
      pTVar10 = pTVar10 + 2;
      pFVar5 = pFVar5 + 2;
    } while (iVar6 < param_2);
  }
  <Var3.TicksBefore.__this = local_res20.TicksBefore.__this;
  iVar6 = 2;
  if (2 < param_2) {
    do {
      iVar2 = iVar6 * 2;
      iVar7 = 0;
      iVar9 = param_2;
      do {
        iVar8 = iVar9;
        if (iVar2 <= iVar9) {
          iVar8 = iVar2;
        }
        Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_FDependencyBuilder::BuildAttachmentsDependencies_::__l18::<lambda_1>_>_::__l2::<lambda_2>_>
                  (param_1 + iVar7,iVar6,iVar8,param_3,<Var3);
        iVar7 = iVar7 + iVar2;
        iVar9 = iVar9 + iVar6 * -2;
      } while (iVar7 < param_2);
      iVar6 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

// StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,`FConstraintsManagerController::GetConstraintsByPredicate<`FDependencyBuilder::BuildExternalDependencies'::__l108::<lambda_3>_>'::__l2::<lambda_2>_> @ 14649d170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
AlgoImpl::
StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_FDependencyBuilder::BuildExternalDependencies_::__l108::<lambda_3>_>_::__l2::<lambda_2>_>
          (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,int param_2,
          FIdentityFunctor param_3,<lambda_2> param_4)

{
  FWeakObjectPtr FVar1;
  int iVar2;
  <lambda_2> <Var3;
  bool bVar4;
  FWeakObjectPtr *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *pTVar10;
  <lambda_2> local_res20;
  
  iVar6 = 0;
  local_res20.TicksBefore.__this = param_4.TicksBefore.__this;
  if (0 < param_2) {
    pTVar10 = param_1 + 1;
    pFVar5 = &param_1->WeakPtr;
    do {
      if ((iVar6 + 1 < param_2) &&
         (bVar4 = `FConstraintsManagerController::
                  GetConstraintsByPredicate<`FDependencyBuilder::BuildExternalDependencies'::__l108::<lambda_3>_>'
                  ::__l2::<lambda_2>::operator()
                            (&local_res20,pTVar10,
                             (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)pFVar5), bVar4))
      {
        FVar1 = *pFVar5;
        *pFVar5 = pFVar5[1];
        pFVar5[1] = FVar1;
      }
      iVar6 = iVar6 + 2;
      pTVar10 = pTVar10 + 2;
      pFVar5 = pFVar5 + 2;
    } while (iVar6 < param_2);
  }
  <Var3.TicksBefore.__this = local_res20.TicksBefore.__this;
  iVar6 = 2;
  if (2 < param_2) {
    do {
      iVar2 = iVar6 * 2;
      iVar7 = 0;
      iVar9 = param_2;
      do {
        iVar8 = iVar9;
        if (iVar2 <= iVar9) {
          iVar8 = iVar2;
        }
        Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_FDependencyBuilder::BuildExternalDependencies_::__l108::<lambda_3>_>_::__l2::<lambda_2>_>
                  (param_1 + iVar7,iVar6,iVar8,param_3,<Var3);
        iVar7 = iVar7 + iVar2;
        iVar9 = iVar9 + iVar6 * -2;
      } while (iVar7 < param_2);
      iVar6 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

// StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,`FConstraintsManagerController::GetParentConstraints'::__l11::<lambda_3>_> @ 14649d270

void __cdecl
AlgoImpl::
StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetParentConstraints_::__l11::<lambda_3>_>
          (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,int param_2,
          FIdentityFunctor param_3,<lambda_3> param_4)

{
  FWeakObjectPtr FVar1;
  int iVar2;
  <lambda_2> <Var3;
  bool bVar4;
  FWeakObjectPtr *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *pTVar10;
  <lambda_2> local_res20;
  
  iVar6 = 0;
  local_res20.Context = (FScopedControllerContext *)param_4.TicksBefore.Context;
  if (0 < param_2) {
    pTVar10 = param_1 + 1;
    pFVar5 = &param_1->WeakPtr;
    do {
      if ((iVar6 + 1 < param_2) &&
         (bVar4 = `FConstraintsManagerController::GetParentConstraints'::__l11::<lambda_3>::
                  operator()(&local_res20,pTVar10,
                             (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)pFVar5), bVar4))
      {
        FVar1 = *pFVar5;
        *pFVar5 = pFVar5[1];
        pFVar5[1] = FVar1;
      }
      iVar6 = iVar6 + 2;
      pTVar10 = pTVar10 + 2;
      pFVar5 = pFVar5 + 2;
    } while (iVar6 < param_2);
  }
  <Var3.Context = local_res20.Context;
  iVar6 = 2;
  if (2 < param_2) {
    do {
      iVar2 = iVar6 * 2;
      iVar7 = 0;
      iVar9 = param_2;
      do {
        iVar8 = iVar9;
        if (iVar2 <= iVar9) {
          iVar8 = iVar2;
        }
        Merge<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetParentConstraints_::__l11::<lambda_3>_>
                  (param_1 + iVar7,iVar6,iVar8,param_3,(<lambda_3>)<Var3.Context);
        iVar7 = iVar7 + iVar2;
        iVar9 = iVar9 + iVar6 * -2;
      } while (iVar7 < param_2);
      iVar6 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

// StaticEnum<enum_EHandleEvent> @ 14649d370

UEnum * __cdecl StaticEnum<enum_EHandleEvent>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EHandleEvent.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Constraints();
    Z_Registration_Info_UEnum_EHandleEvent.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Constraints_EHandleEvent,(UObject *)pUVar1,L"EHandleEvent")
    ;
  }
  return Z_Registration_Info_UEnum_EHandleEvent.OuterSingleton;
}

// Transform<TArray<FConstraintNode,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_&,`UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes'::__l2::<lambda_1>_> @ 14649d3b0

void __cdecl
Algo::
Transform<TArray<FConstraintNode,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_&,_UE::Constraints::Graph::Private::FGraphBuildHelper::SortNodes_::__l2::<lambda_1>_>
          (TArray<FConstraintNode,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  undefined4 local_28 [4];
  
  iVar1 = param_1->ArrayNum;
  pFVar6 = (param_1->AllocatorInstance).Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 200;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FConstraintNode_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    local_28[0] = *(undefined4 *)(pFVar6 + 0x18);
    pFVar2 = (param_2->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)param_2->ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar5;
    }
    pFVar6 = pFVar6 + 200;
    param_2->ArrayNum = iVar5 + 1;
    *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_28[0];
  }
  return;
}

// ~TFunction_OwnedObject<`UTickableLookAtConstraint::GetFunction'::__l2::<lambda_1>,0,0> @ 14649f030

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableLookAtConstraint::GetFunction'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UTickableLookAtConstraint::GetFunction_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTickableLookAtConstraint::GetFunction'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UTickableParentConstraint::GetFunction'::__l2::<lambda_1>,0,0> @ 14649f050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableParentConstraint::GetFunction'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UTickableParentConstraint::GetFunction_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTickableParentConstraint::GetFunction'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UTickableRotationConstraint::GetFunction'::__l2::<lambda_1>,0,0> @ 14649f070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableRotationConstraint::GetFunction'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UTickableRotationConstraint::GetFunction_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTickableRotationConstraint::GetFunction'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UTickableScaleConstraint::GetFunction'::__l2::<lambda_1>,0,0> @ 14649f090

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableScaleConstraint::GetFunction'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UTickableScaleConstraint::GetFunction_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTickableScaleConstraint::GetFunction'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UTickableTranslationConstraint::GetFunction'::__l2::<lambda_1>,0,0> @ 14649f0b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableTranslationConstraint::GetFunction'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UTickableTranslationConstraint::GetFunction_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTickableTranslationConstraint::GetFunction'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Anim::FAnimationEvaluator::RefreshBoneTransforms'::__l2::<lambda_1>,0,0> @ 14649f0d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Anim::FAnimationEvaluator::RefreshBoneTransforms'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Anim::FAnimationEvaluator::RefreshBoneTransforms_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Anim::FAnimationEvaluator::RefreshBoneTransforms'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_3>,0,0> @ 14649f0f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_3>,0,0>::
~TFunction_OwnedObject<_FTransformableRegistry::RegisterBaseObjects_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTransformableRegistry::RegisterBaseObjects'::`2'::<lambda_3>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_4>,0,0> @ 14649f110

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_4>,0,0>::
~TFunction_OwnedObject<_FTransformableRegistry::RegisterBaseObjects_::__l2::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTransformableRegistry::RegisterBaseObjects'::`2'::<lambda_4>,0,0>::
        _vftable_;
  return;
}

// operator() @ 1464a00c0

bool __thiscall
``UE::TransformConstraintUtil::GetConstraintsRelativeTransform'::__l2::<lambda_1>::operator()'::__l2
::<lambda_1>::operator()(void *this,TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1)

{
  int iVar1;
  EMovieSceneTransformChannel EVar2;
  char cVar3;
  EMovieSceneTransformChannel EVar4;
  UTickableTransformConstraint *this_00;
  UClass *pUVar5;
  UObject *pUVar6;
  
  this_00 = (UTickableTransformConstraint *)FWeakObjectPtr::Get(&param_1->WeakPtr);
  if (this_00 != (UTickableTransformConstraint *)0x0) {
    pUVar5 = UTickableTransformConstraint::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      EVar2 = *(EMovieSceneTransformChannel *)this;
      EVar4 = UTickableTransformConstraint::GetChannelsToKey(this_00);
      pUVar6 = FWeakObjectPtr::Get(&param_1->WeakPtr);
      cVar3 = (**(code **)(*(longlong *)pUVar6 + 0x2d0))(pUVar6);
      if (((cVar3 != '\0') && (this_00->bDynamicOffset != false)) && ((EVar4 & EVar2) == EVar2)) {
        return true;
      }
      return false;
    }
  }
  return false;
}

// operator() @ 1464a0190

void __thiscall
``UTickableParentConstraint::GetFunction'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
operator()(void *this,TTransform<double> *param_1,TTransform<double> *param_2,
          FTransformFilter *param_3)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TQuat<double> *pTVar12;
  TRotator<double> *pTVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 in_XMM4 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar22;
  uint uVar23;
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  TRotator<double> local_128;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  TQuat<double> local_e8;
  TQuat<double> local_c8 [6];
  
  local_e8.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_e8.W = (param_1->Rotation).ZW.m128d_f64[1];
  local_e8.X = (param_1->Rotation).XY.m128d_f64[0];
  local_e8.Y = (param_1->Rotation).XY.m128d_f64[1];
  dVar2 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar3 = (param_1->Translation).XY.m128d_f64[0];
  dVar4 = (param_1->Translation).XY.m128d_f64[1];
  dVar17 = (param_2->Translation).XY.m128d_f64[0];
  local_158 = *(undefined1 (*) [16])(param_2->Translation).XY.m128d_f64;
  local_f8 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  local_148 = (param_2->Translation).ZW.m128d_f64[0];
  dVar5 = (param_1->Scale3D).XY.m128d_f64[0];
  dVar6 = (param_1->Scale3D).XY.m128d_f64[1];
  local_140 = (param_2->Scale3D).XY.m128d_f64[0];
  dStack_138 = (param_2->Scale3D).XY.m128d_f64[1];
  local_108 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  dVar7 = (param_1->Translation).ZW.m128d_f64[0];
  local_130 = (param_2->Scale3D).ZW.m128d_f64[0];
  local_128.Roll = dVar2;
  if (*(float *)this < __real_3f7ff972) {
    dVar19 = (double)*(float *)this;
    local_148 = (local_148 - dVar7) * dVar19 + dVar7;
    dVar16 = ((param_2->Translation).XY.m128d_f64[1] - dVar4) * dVar19 + dVar4;
    pTVar12 = UE::Math::TQuat<double>::Slerp_NotNormalized
                        (local_c8,&local_e8,(TQuat<double> *)local_108,dVar19);
    dVar8 = pTVar12->X;
    dVar9 = pTVar12->Y;
    dVar10 = pTVar12->Z;
    dVar11 = pTVar12->W;
    local_158._8_4_ = SUB84(dVar16,0);
    local_158._0_8_ = (dVar17 - dVar3) * dVar19 + dVar3;
    local_158._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    dVar16 = dVar8 * dVar8 + dVar10 * dVar10;
    dVar19 = dVar9 * dVar9 + dVar11 * dVar11;
    dVar17 = dVar19 + dVar16;
    dVar16 = dVar16 + dVar19;
    auVar20._8_4_ = SUB84(dVar16,0);
    auVar20._0_8_ = dVar17;
    auVar20._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    auVar20 = sqrtpd(in_XMM4,auVar20);
    uVar14 = -(ulonglong)(__real_3e45798ee0000000 <= dVar17);
    uVar15 = -(ulonglong)(__real_3e45798ee0000000 <= dVar16);
    uVar22 = (uint)(uVar14 >> 0x20);
    uVar23 = (uint)(uVar15 >> 0x20);
    auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar20);
    local_108._0_8_ = uVar14 & (ulonglong)(auVar21._0_8_ * dVar8);
    uVar1 = uVar15 & (ulonglong)(auVar21._8_8_ * dVar9);
    local_108._8_4_ = (undefined4)uVar1;
    local_108._12_4_ = (undefined4)(uVar1 >> 0x20);
    auVar21._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar21._4_4_ =
         ~uVar22 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar21._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar21._12_4_ =
         ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_108 = local_108 | auVar21;
    auVar20 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar20);
    local_f8._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    local_f8._4_4_ =
         ~uVar22 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    local_f8._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_f8._12_4_ =
         ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar18._0_8_ = (ulonglong)(auVar20._0_8_ * dVar10) & uVar14;
    uVar15 = (ulonglong)(auVar20._8_8_ * dVar11) & uVar15;
    auVar18._8_4_ = (undefined4)uVar15;
    auVar18._12_4_ = (undefined4)(uVar15 >> 0x20);
    local_f8 = local_f8 | auVar18;
    dVar17 = (double)*(float *)this;
    local_140 = (local_140 - dVar5) * dVar17 + dVar5;
    dStack_138 = (dStack_138 - dVar6) * dVar17 + dVar6;
    local_130 = (local_130 - dVar2) * dVar17 + dVar2;
  }
  if ((param_3->TranslationFilter).bX == false) {
    local_158._0_8_ = dVar3;
  }
  if ((param_3->TranslationFilter).bY == false) {
    local_158._8_8_ = dVar4;
  }
  if ((param_3->TranslationFilter).bZ == false) {
    local_148 = dVar7;
  }
  UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_108,&local_128);
  pTVar13 = UE::Math::TQuat<double>::Rotator(&local_e8,(TRotator<double> *)local_c8);
  if ((param_3->RotationFilter).bX == false) {
    local_128.Roll = pTVar13->Roll;
  }
  if ((param_3->RotationFilter).bY == false) {
    local_128.Pitch = pTVar13->Pitch;
  }
  if ((param_3->RotationFilter).bZ == false) {
    local_128.Yaw = pTVar13->Yaw;
  }
  pTVar12 = UE::Math::TRotator<double>::Quaternion(&local_128,local_c8);
  dVar3 = pTVar12->X;
  dVar4 = pTVar12->Y;
  dVar7 = pTVar12->Z;
  dVar17 = pTVar12->W;
  if ((param_3->ScaleFilter).bX == false) {
    local_140 = dVar5;
  }
  if ((param_3->ScaleFilter).bY == false) {
    dStack_138 = dVar6;
  }
  if ((param_3->ScaleFilter).bZ == false) {
    local_130 = dVar2;
  }
  (param_2->Translation).XY.m128d_f64[0] = (double)local_158._0_8_;
  (param_2->Translation).XY.m128d_f64[1] = (double)local_158._8_8_;
  (param_2->Translation).ZW.m128d_f64[0] = local_148;
  (param_2->Translation).ZW.m128d_f64[1] = 0.0;
  (param_2->Rotation).XY.m128d_f64[0] = dVar3;
  (param_2->Rotation).XY.m128d_f64[1] = dVar4;
  (param_2->Rotation).ZW.m128d_f64[0] = dVar7;
  (param_2->Rotation).ZW.m128d_f64[1] = dVar17;
  (param_2->Scale3D).XY.m128d_f64[0] = local_140;
  (param_2->Scale3D).XY.m128d_f64[1] = dStack_138;
  (param_2->Scale3D).ZW.m128d_f64[0] = local_130;
  (param_2->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// `vcall'{800,{flat}}'_}' @ 1464a2498

/* [thunk]: __cdecl UTickableTransformConstraint::`vcall'{800,{flat}}' }' */

void __thiscall
UTickableTransformConstraint::_vcall__800__flat______(UTickableTransformConstraint *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464a249b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 800))();
  return;
}

// `scalar_deleting_destructor' @ 1464a24b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UTransformableHandle_*,enum_EHandleEvent),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a24e0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2510

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::Anim::FAnimationEvaluationCache::RegisterNotifications'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2540

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy,`UE::TransformConstraintUtil::FConstraintsInteractionCache::RegisterNotifications'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2570

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Anim::FAnimationEvaluator,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Anim::FAnimationEvaluator,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a25a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a25d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UConstraintSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UConstraintSubsystem,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2600

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UConstraintsManager,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UConstraintsManager,void___cdecl(AActor_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2630

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UTickableTransformConstraint,void___cdecl(UTransformableHandle_*,enum_EHandleEvent),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2660

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UTransformableHandle_*,enum_EHandleEvent),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2690

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a26c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<unsigned_int_(__cdecl*)(UObject_const_*,FName_const_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<unsigned_int_(__cdecl*)(UObject_const_*,FName_const_&),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AIPEBVUObject__AEBVFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UTransformableHandle_*_(__cdecl*)(UObject_*,FName_const_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<UTransformableHandle_*_(__cdecl*)(UObject_*,FName_const_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAVUTransformableHandle__PEAVUObject__AEBVFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2740

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableLookAtConstraint::GetFunction'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTickableLookAtConstraint::GetFunction'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableParentConstraint::GetFunction'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTickableParentConstraint::GetFunction'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a27c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableRotationConstraint::GetFunction'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTickableRotationConstraint::GetFunction'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableScaleConstraint::GetFunction'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTickableScaleConstraint::GetFunction'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableTranslationConstraint::GetFunction'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTickableTranslationConstraint::GetFunction'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Anim::FAnimationEvaluator::RefreshBoneTransforms'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Anim::FAnimationEvaluator::RefreshBoneTransforms'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a28c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTransformableRegistry::RegisterBaseObjects'::`2'::<lambda_3>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTransformableRegistry::RegisterBaseObjects'::`2'::<lambda_4>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2940

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FConstraintsEvaluationGraph,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FConstraintsEvaluationGraph,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
AConstraintsActor::_scalar_deleting_destructor_(AConstraintsActor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7AConstraintsActor__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a29e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FConstraintTickFunction::_scalar_deleting_destructor_(FConstraintTickFunction *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FConstraintTickFunction__6B_;
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)(this->ConstraintFunctions).AllocatorInstance.Data,
             (this->ConstraintFunctions).ArrayNum);
  pFVar1 = (this->ConstraintFunctions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTickFunction::~FTickFunction((FTickFunction *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2a50

void * __thiscall
UConstraintSubsystem::_scalar_deleting_destructor_(UConstraintSubsystem *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UConstraintSubsystem__6B_;
  *(undefined4 *)&(this->ConstraintsConfig).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ConstraintsConfig).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConstraintsConfig);
  DestructItems<FConstraintsInWorld,int>
            ((FConstraintsInWorld *)(this->ConstraintsInWorld).AllocatorInstance.Data,
             (this->ConstraintsInWorld).ArrayNum);
  pFVar2 = (this->ConstraintsInWorld).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2b00

void * __thiscall
UConstraintsManager::_scalar_deleting_destructor_(UConstraintsManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UConstraintsManager__6B_;
  pFVar1 = (this->Constraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2b70

void * __thiscall
UConstraintsScriptingLibrary::_scalar_deleting_destructor_
          (UConstraintsScriptingLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UConstraintsScriptingLibrary__6B_;
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

// `scalar_deleting_destructor' @ 1464a2bd0

void * __thiscall
UTickableConstraint::_scalar_deleting_destructor_(UTickableConstraint *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UTickableConstraint__6B_;
  *(undefined4 *)&(this->ConstraintTicks).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ConstraintTicks).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConstraintTicks);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2c70

void * __thiscall
UTickableLookAtConstraint::_scalar_deleting_destructor_
          (UTickableLookAtConstraint *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UTickableConstraint__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2d10

void * __thiscall
UTickableParentConstraint::_scalar_deleting_destructor_
          (UTickableParentConstraint *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UTickableConstraint__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2db0

void * __thiscall
UTickableRotationConstraint::_scalar_deleting_destructor_
          (UTickableRotationConstraint *this,uint param_1)

{
  *(undefined ***)this = &___7UTickableConstraint__6B_;
  *(undefined4 *)&this->field_0x88 = 0;
  if (*(void **)&this->field_0x80 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x80);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x40);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2e50

void * __thiscall
UTickableScaleConstraint::_scalar_deleting_destructor_(UTickableScaleConstraint *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UTickableConstraint__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2ef0

void * __thiscall
UTickableTransformConstraint::_scalar_deleting_destructor_
          (UTickableTransformConstraint *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UTickableConstraint__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a2f90

void * __thiscall
UTickableTranslationConstraint::_scalar_deleting_destructor_
          (UTickableTranslationConstraint *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UTickableConstraint__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a3030

void * __thiscall
UTransformableComponentHandle::_scalar_deleting_destructor_
          (UTransformableComponentHandle *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UTransformableComponentHandle__6B_;
  UTransformableHandle::~UTransformableHandle((UTransformableHandle *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1464a3090

void * __thiscall
UTransformableHandle::_scalar_deleting_destructor_(UTransformableHandle *this,uint param_1)

{
  ~UTransformableHandle(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeConstraintChannel @ 1464adff0

void __cdecl EmptyLinkFunctionForGeneratedCodeConstraintChannel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeConstraintSubsystem @ 1464ae000

void __cdecl EmptyLinkFunctionForGeneratedCodeConstraintSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeConstraintsActor @ 1464ae010

void __cdecl EmptyLinkFunctionForGeneratedCodeConstraintsActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeConstraintsManager @ 1464ae020

void __cdecl EmptyLinkFunctionForGeneratedCodeConstraintsManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeConstraintsScripting @ 1464ae030

void __cdecl EmptyLinkFunctionForGeneratedCodeConstraintsScripting(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeConstraints_init @ 1464ae040

void __cdecl EmptyLinkFunctionForGeneratedCodeConstraints_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTransformConstraint @ 1464ae050

void __cdecl EmptyLinkFunctionForGeneratedCodeTransformConstraint(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTransformableHandle @ 1464ae060

void __cdecl EmptyLinkFunctionForGeneratedCodeTransformableHandle(void)

{
  return;
}

// EvaluateComponent @ 1464af0d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAnimationEvaluator * __cdecl TransformableHandleUtils::EvaluateComponent(USceneComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FAnimationEvaluationCache *this;
  FAnimationEvaluator *pFVar3;
  
  if (param_1 != (USceneComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      this = UE::Anim::FAnimationEvaluationCache::Get();
      pFVar3 = UE::Anim::FAnimationEvaluationCache::GetEvaluator
                         (this,(USkeletalMeshComponent *)param_1);
      return pFVar3;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      UE::Anim::FAnimationEvaluator::FAnimationEvaluator(&::Invalid,(USkeletalMeshComponent *)0x0);
      atexit(`TransformableHandleUtils::EvaluateComponent'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Invalid;
}

// EvaluateComponent @ 1464af190

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAnimationEvaluator * __cdecl
TransformableHandleUtils::EvaluateComponent
          (USceneComponent *param_1,FAnimationEvaluationTask *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FAnimationEvaluationCache *this;
  FAnimationEvaluator *pFVar3;
  
  if (param_1 != (USceneComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      this = UE::Anim::FAnimationEvaluationCache::Get();
      pFVar3 = UE::Anim::FAnimationEvaluationCache::GetEvaluator
                         (this,(USkeletalMeshComponent *)param_1,param_2);
      return pFVar3;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      UE::Anim::FAnimationEvaluator::FAnimationEvaluator(&::Invalid,(USkeletalMeshComponent *)0x0);
      atexit(`TransformableHandleUtils::EvaluateComponent'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Invalid;
}

// GetConstrainableHash @ 1464b1b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl DependencyLocals::GetConstrainableHash(UObject *param_1)

{
  UClass *pUVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
  *this;
  FTransformableInfo *pFVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  UObject *local_50;
  code *local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  this = (TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
          *)FTransformableRegistry::Get();
  pUVar1 = *(UClass **)&param_1->field_0x10;
  if ((pUVar1 != (UClass *)0x0) &&
     ((pFVar5 = TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
                ::Find(this,pUVar1), pFVar5 != (FTransformableInfo *)0x0 ||
      (pFVar5 = FTransformableRegistry::FindInfo
                          ((FTransformableRegistry *)this,(UClass *)pUVar1->_padding_),
      pFVar5 != (FTransformableInfo *)0x0)))) {
    local_48 = *(code **)&pFVar5->GetHashFunc;
    local_20 = (longlong *)0x0;
    if (local_48 != (code *)0x0) {
      puVar2 = *(undefined8 **)&(pFVar5->GetHashFunc).field_0x28;
      puVar7 = (undefined8 *)&(pFVar5->GetHashFunc).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar7 = puVar2;
      }
      (**(code **)*puVar7)(puVar7,local_38);
      if (local_48 != (code *)0x0) {
        local_58 = 0;
        local_50 = param_1;
        UE::Core::Private::Function::CheckCallable(local_48);
        pcVar3 = local_48;
        plVar8 = local_38;
        if (local_20 != (longlong *)0x0) {
          plVar8 = local_20;
        }
        uVar6 = (**(code **)(*plVar8 + 8))();
        uVar4 = (*pcVar3)(uVar6,&local_50,&local_58);
        if (local_48 == (code *)0x0) {
          return uVar4;
        }
        plVar8 = local_38;
        if (local_20 != (longlong *)0x0) {
          plVar8 = local_20;
        }
        (**(code **)(*plVar8 + 0x10))();
        return uVar4;
      }
    }
  }
  return 0;
}

// GetConstraintLabel @ 1464b2220

FString * __cdecl
DependencyLocals::GetConstraintLabel(FString *__return_storage_ptr__,UTickableConstraint *param_1)

{
  FName local_res8 [4];
  
  local_res8[0] = (FName)param_1->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetGlobalTransform @ 1464b37c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __cdecl
TransformableHandleUtils::GetGlobalTransform
          (TTransform<double> *__return_storage_ptr__,USceneComponent *param_1,FName param_2)

{
  int iVar1;
  USceneComponent *pUVar2;
  bool bVar3;
  FAnimationEvaluator *pFVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  TTransform<double> *pTVar7;
  TTransform<double> *pTVar8;
  FName FVar9;
  USceneComponent *pUVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  undefined1 local_f8 [96];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  if (param_1 == (USceneComponent *)0x0) {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    return __return_storage_ptr__;
  }
  pFVar4 = EvaluateComponent(param_1);
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pFVar4);
  if (((bVar3) && ((pFVar4->Context).ComponentSpaceTransforms.ArrayNum != 0)) &&
     (pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar4),
     (pFVar4->Context).ComponentSpaceTransforms.ArrayNum ==
     *(int *)(&pUVar5[0x27].field_0x8 + (longlong)*(int *)&pUVar5[0x28].field_0x20 * 0x10))) {
    UE::Anim::FAnimationEvaluator::GetGlobalTransform(pFVar4,__return_storage_ptr__,param_2);
    return __return_storage_ptr__;
  }
  pUVar2 = param_1;
  pUVar10 = (param_1->AttachParent).field0_0x0.DebugPtr;
  while( true ) {
    if (pUVar10 == (USceneComponent *)0x0) {
      (**(code **)(param_1->_padding_ + 0x520))(param_1,__return_storage_ptr__,param_2,0);
      return __return_storage_ptr__;
    }
    pUVar6 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) break;
    pUVar2 = (pUVar2->AttachParent).field0_0x0.DebugPtr;
    pUVar10 = pUVar2;
  }
  pTVar7 = (TTransform<double> *)
           (**(code **)(param_1->_padding_ + 0x520))(param_1,&local_1b8,param_2,2);
  pTVar8 = USceneComponent::GetRelativeTransform(param_1,&local_218);
  local_278.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_278.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_278.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_278.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_278.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_278.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_278.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_278.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_278.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_278.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_278.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_278.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_278.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_278.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_278.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_278.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_278.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_278.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_278,pTVar7,pTVar8);
  pUVar10 = (param_1->AttachParent).field0_0x0.DebugPtr;
  FVar9 = param_1->AttachSocketName;
  if (pUVar10 == (USceneComponent *)0x0) {
    uVar11 = local_278.Rotation.XY.m128d_f64[0]._0_4_;
    uVar12 = local_278.Rotation.XY.m128d_f64[0]._4_4_;
    uVar13 = local_278.Rotation.XY.m128d_f64[1]._0_4_;
    uVar14 = local_278.Rotation.XY.m128d_f64[1]._4_4_;
    uVar15 = local_278.Rotation.ZW.m128d_f64[0]._0_4_;
    uVar16 = local_278.Rotation.ZW.m128d_f64[0]._4_4_;
    uVar17 = local_278.Rotation.ZW.m128d_f64[1]._0_4_;
    uVar18 = local_278.Rotation.ZW.m128d_f64[1]._4_4_;
    uVar19 = local_278.Translation.XY.m128d_f64[0]._0_4_;
    uVar20 = local_278.Translation.XY.m128d_f64[0]._4_4_;
    uVar21 = local_278.Translation.XY.m128d_f64[1]._0_4_;
    uVar22 = local_278.Translation.XY.m128d_f64[1]._4_4_;
    uVar23 = local_278.Translation.ZW.m128d_f64[0]._0_4_;
    uVar24 = local_278.Translation.ZW.m128d_f64[0]._4_4_;
    uVar25 = local_278.Translation.ZW.m128d_f64[1]._0_4_;
    uVar26 = local_278.Translation.ZW.m128d_f64[1]._4_4_;
    uVar27 = local_278.Scale3D.XY.m128d_f64[0]._0_4_;
    uVar28 = local_278.Scale3D.XY.m128d_f64[0]._4_4_;
    uVar29 = local_278.Scale3D.XY.m128d_f64[1]._0_4_;
    uVar30 = local_278.Scale3D.XY.m128d_f64[1]._4_4_;
    uVar31 = local_278.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar32 = local_278.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar33 = local_278.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar34 = local_278.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  else {
    do {
      pUVar6 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if (((*(int *)(pUVar10->_padding_ + 0x38) < iVar1) ||
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
           &pUVar6->_padding_)) || (local_288 = 0, FVar9 == (FName)0x0)) {
LAB_1464b3a34:
        pTVar7 = (TTransform<double> *)
                 (**(code **)(pUVar10->_padding_ + 0x520))(pUVar10,local_f8,FVar9,2);
        pTVar8 = USceneComponent::GetRelativeTransform(pUVar10,&local_98);
        local_1b8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_1b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1b8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_1b8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_1b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1b8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_1b8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_1b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_1b8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_1b8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_1b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_1b8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_1b8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_1b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1b8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_1b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_1b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_1b8,pTVar7,pTVar8);
        pTVar7 = &local_1b8;
      }
      else {
        pFVar4 = EvaluateComponent(pUVar10);
        bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pFVar4);
        if (((!bVar3) || ((pFVar4->Context).ComponentSpaceTransforms.ArrayNum == 0)) ||
           (pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar4),
           (pFVar4->Context).ComponentSpaceTransforms.ArrayNum !=
           *(int *)(&pUVar5[0x27].field_0x8 + (longlong)*(int *)&pUVar5[0x28].field_0x20 * 0x10)))
        goto LAB_1464b3a34;
        pTVar7 = UE::Anim::FAnimationEvaluator::GetRelativeTransform(pFVar4,&local_158,FVar9);
      }
      local_218.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_218.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_218.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_218.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_218.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_218.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_218.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_218.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_218.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_218.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_218.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_218.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_218.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_218.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_218.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_218.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_218.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_218.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_218,&local_278,pTVar7);
      uVar31 = local_218.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar32 = local_218.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar33 = local_218.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar34 = local_218.Scale3D.ZW.m128d_f64[1]._4_4_;
      uVar27 = local_218.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar28 = local_218.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar29 = local_218.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar30 = local_218.Scale3D.XY.m128d_f64[1]._4_4_;
      uVar23 = local_218.Translation.ZW.m128d_f64[0]._0_4_;
      uVar24 = local_218.Translation.ZW.m128d_f64[0]._4_4_;
      uVar25 = local_218.Translation.ZW.m128d_f64[1]._0_4_;
      uVar26 = local_218.Translation.ZW.m128d_f64[1]._4_4_;
      uVar19 = local_218.Translation.XY.m128d_f64[0]._0_4_;
      uVar20 = local_218.Translation.XY.m128d_f64[0]._4_4_;
      uVar21 = local_218.Translation.XY.m128d_f64[1]._0_4_;
      uVar22 = local_218.Translation.XY.m128d_f64[1]._4_4_;
      uVar15 = local_218.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar16 = local_218.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar17 = local_218.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar18 = local_218.Rotation.ZW.m128d_f64[1]._4_4_;
      uVar11 = local_218.Rotation.XY.m128d_f64[0]._0_4_;
      uVar12 = local_218.Rotation.XY.m128d_f64[0]._4_4_;
      uVar13 = local_218.Rotation.XY.m128d_f64[1]._0_4_;
      uVar14 = local_218.Rotation.XY.m128d_f64[1]._4_4_;
      local_278.Scale3D.ZW.m128d_f64[0] = local_218.Scale3D.ZW.m128d_f64[0];
      local_278.Scale3D.ZW.m128d_f64[1] = local_218.Scale3D.ZW.m128d_f64[1];
      local_278.Scale3D.XY.m128d_f64[0] = local_218.Scale3D.XY.m128d_f64[0];
      local_278.Scale3D.XY.m128d_f64[1] = local_218.Scale3D.XY.m128d_f64[1];
      local_278.Translation.ZW.m128d_f64[0] = local_218.Translation.ZW.m128d_f64[0];
      local_278.Translation.ZW.m128d_f64[1] = local_218.Translation.ZW.m128d_f64[1];
      local_278.Translation.XY.m128d_f64[0] = local_218.Translation.XY.m128d_f64[0];
      local_278.Translation.XY.m128d_f64[1] = local_218.Translation.XY.m128d_f64[1];
      local_278.Rotation.ZW.m128d_f64[0] = local_218.Rotation.ZW.m128d_f64[0];
      local_278.Rotation.ZW.m128d_f64[1] = local_218.Rotation.ZW.m128d_f64[1];
      local_278.Rotation.XY.m128d_f64[0] = local_218.Rotation.XY.m128d_f64[0];
      local_278.Rotation.XY.m128d_f64[1] = local_218.Rotation.XY.m128d_f64[1];
      FVar9 = pUVar10->AttachSocketName;
      pUVar10 = (pUVar10->AttachParent).field0_0x0.DebugPtr;
    } while (pUVar10 != (USceneComponent *)0x0);
  }
  *(undefined4 *)(__return_storage_ptr__->Rotation).XY.m128d_f64 = uVar11;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 4) = uVar12;
  *(undefined4 *)((__return_storage_ptr__->Rotation).XY.m128d_f64 + 1) = uVar13;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 0xc) = uVar14;
  *(undefined4 *)(__return_storage_ptr__->Rotation).ZW.m128d_f64 = uVar15;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).ZW.m128d_f64 + 4) = uVar16;
  *(undefined4 *)((__return_storage_ptr__->Rotation).ZW.m128d_f64 + 1) = uVar17;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).ZW.m128d_f64 + 0xc) = uVar18;
  *(undefined4 *)(__return_storage_ptr__->Translation).XY.m128d_f64 = uVar19;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 4) = uVar20;
  *(undefined4 *)((__return_storage_ptr__->Translation).XY.m128d_f64 + 1) = uVar21;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 0xc) = uVar22;
  *(undefined4 *)(__return_storage_ptr__->Translation).ZW.m128d_f64 = uVar23;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).ZW.m128d_f64 + 4) = uVar24;
  *(undefined4 *)((__return_storage_ptr__->Translation).ZW.m128d_f64 + 1) = uVar25;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).ZW.m128d_f64 + 0xc) = uVar26;
  *(undefined4 *)(__return_storage_ptr__->Scale3D).XY.m128d_f64 = uVar27;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 4) = uVar28;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).XY.m128d_f64 + 1) = uVar29;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 0xc) = uVar30;
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = uVar31;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) = uVar32;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) = uVar33;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) = uVar34;
  return __return_storage_ptr__;
}

// GetHandleLabel @ 1464b41a0

FString * __cdecl
DependencyLocals::GetHandleLabel(FString *__return_storage_ptr__,UTransformableHandle *param_1)

{
  FName local_res8 [4];
  
  local_res8[0] = (FName)param_1->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetHandleTarget @ 1464b41d0

UObject * __cdecl DependencyLocals::GetHandleTarget(TObjectPtr<UTransformableHandle> *param_1)

{
  FWeakObjectPtr *this;
  UObject *pUVar1;
  undefined1 local_res8 [32];
  
  if (((param_1->field0_0x0).DebugPtr != (UTransformableHandle *)0x0) &&
     (((uint)((param_1->field0_0x0).DebugPtr)->_padding_ >> 0x1e & 1) == 0)) {
    this = (FWeakObjectPtr *)
           (**(code **)(((param_1->field0_0x0).DebugPtr)->_padding_ + 0x330))
                     ((param_1->field0_0x0).DebugPtr,local_res8);
    pUVar1 = FWeakObjectPtr::Get(this);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// HasConstraintDependencyWith @ 1464b7a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
DependencyLocals::HasConstraintDependencyWith
          (UWorld *param_1,UTransformableHandle *param_2,UTransformableHandle *param_3)

{
  FWeakObjectPtr *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  ForAnyElementType FVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  ForAnyElementType local_48;
  undefined8 local_40;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_38;
  
  ::Singleton.World = param_1;
  uVar6 = (**(code **)(param_2->_padding_ + 0x328))(param_2);
  FConstraintsManagerController::GetParentConstraints(&::Singleton,&local_38,uVar6,false);
  iVar8 = local_38.ArrayNum;
  uVar11 = (ulonglong)local_38.ArrayNum;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  pFVar1 = (FWeakObjectPtr *)(local_38.AllocatorInstance.Data + uVar11 * 8);
  FVar13.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((uint)uVar11 != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)FVar13.Data == pFVar1) break;
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar13.Data);
    if (pUVar9 != (UObject *)0x0) {
      pUVar10 = UTickableTransformConstraint::StaticClass();
      iVar7 = (int)pUVar10->_padding_;
      if ((iVar7 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar7 * 8) ==
          &pUVar10->_padding_)) {
        puVar12 = &pUVar9[3].field_0x18;
        if ((*(longlong *)puVar12 != 0) && ((*(uint *)(*(longlong *)puVar12 + 8) >> 0x1e & 1) == 0))
        {
          if (((local_48.Data <= puVar12) &&
              (puVar12 < local_48.Data + (longlong)local_40._4_4_ * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar7 = (int)local_40;
          if ((int)local_40 == local_40._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_48,(int *)((longlong)&local_40 + 4));
          }
          local_40 = CONCAT44(local_40._4_4_,iVar7 + 1);
          pUVar9 = *(UObject **)puVar12;
          *(UObject **)(local_48.Data + (longlong)iVar7 * 8) = pUVar9;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar9);
          }
        }
      }
    }
    uVar11 = (ulonglong)(uint)local_38.ArrayNum;
    FVar13.Data = FVar13.Data + 8;
  }
  iVar8 = (**(code **)(param_3->_padding_ + 0x328))(param_3);
  uVar11 = (ulonglong)(int)local_40;
  pFVar2 = local_48.Data + uVar11 * 8;
  FVar13.Data = local_48.Data;
  if (local_48.Data != pFVar2) {
    do {
      iVar7 = (**(code **)(**(longlong **)FVar13.Data + 0x328))();
      if (iVar7 == iVar8) goto LAB_1464b7c44;
      FVar13.Data = FVar13.Data + 8;
    } while (FVar13.Data != pFVar2);
    uVar11 = local_40 & 0xffffffff;
  }
  iVar8 = (int)uVar11;
  pFVar2 = local_48.Data + (longlong)iVar8 * 8;
  FVar13.Data = local_48.Data;
  while( true ) {
    if ((int)uVar11 != iVar8) {
      `TCheckedPointerIterator<TObjectPtr<UTransformableHandle>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar13.Data == pFVar2) break;
    bVar4 = HasConstraintDependencyWith(param_1,*(UTransformableHandle **)FVar13.Data,param_3);
    if (bVar4) {
LAB_1464b7c44:
      bVar4 = true;
LAB_1464b7c4a:
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      if ((FWeakObjectPtr *)local_38.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return bVar4;
    }
    uVar11 = local_40 & 0xffffffff;
    FVar13.Data = FVar13.Data + 8;
  }
  bVar4 = false;
  goto LAB_1464b7c4a;
}

// LogAttachmentDependency @ 1464b9680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DependencyLocals::LogAttachmentDependency
          (FString *param_1,UTransformableHandle *param_2,UTransformableHandle *param_3,
          UTickableConstraint *param_4,UTickableConstraint *param_5)

{
  FName local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  
  if ((((bDebugDependencies) && (param_2 != (UTransformableHandle *)0x0)) &&
      (param_3 != (UTransformableHandle *)0x0)) &&
     (((param_4 != (UTickableConstraint *)0x0 && (param_5 != (UTickableConstraint *)0x0)) &&
      (2 < (byte)LogTemp._0_1_)))) {
    local_68 = (FName)param_5->_padding_;
    ::FName::ToString(&local_68,&local_30);
    local_68 = (FName)param_4->_padding_;
    ::FName::ToString(&local_68,&local_40);
    local_68 = (FName)param_3->_padding_;
    ::FName::ToString(&local_68,&local_50);
    local_68 = (FName)param_2->_padding_;
    ::FName::ToString(&local_68,&local_60);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// LogDependency @ 1464b9830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DependencyLocals::LogDependency
          (FString *param_1,UTransformableHandle *param_2,UTransformableHandle *param_3,
          UTickableConstraint *param_4,UTickableConstraint *param_5)

{
  FName local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  
  if ((((bDebugDependencies) && (param_2 != (UTransformableHandle *)0x0)) &&
      (param_3 != (UTransformableHandle *)0x0)) &&
     (((param_4 != (UTickableConstraint *)0x0 && (param_5 != (UTickableConstraint *)0x0)) &&
      (2 < (byte)LogTemp._0_1_)))) {
    local_68 = (FName)param_5->_padding_;
    ::FName::ToString(&local_68,&local_30);
    local_68 = (FName)param_4->_padding_;
    ::FName::ToString(&local_68,&local_40);
    local_68 = (FName)param_3->_padding_;
    ::FName::ToString(&local_68,&local_50);
    local_68 = (FName)param_2->_padding_;
    ::FName::ToString(&local_68,&local_60);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// LookForPrimaryPrerequisite @ 1464b99d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTickPrerequisite * __cdecl
`anonymous_namespace'::LookForPrimaryPrerequisite
          (FTickPrerequisite *__return_storage_ptr__,USceneComponent *param_1,bool param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UWorld *pUVar5;
  FTickPrerequisite *pFVar6;
  UTickableConstraint *this;
  FConstraintTickFunction *pFVar7;
  uint uVar8;
  USceneComponent *local_res10 [2];
  UObject *local_res20;
  USceneComponent *local_48;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_40;
  
  if (param_1 != (USceneComponent *)0x0) {
    if ((&param_1->_padding_ != (longlong *)0x0) &&
       ((((param_1->_padding_ & 0x20000) != 0 ||
         (((byte *)param_1->_padding_ != (byte *)0x0 && ((*(byte *)param_1->_padding_ & 1) != 0))))
        && (param_2)))) {
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (__return_storage_ptr__->PrerequisiteObject).WeakPtr = (FWeakObjectPtr)0x0;
      local_res10[0] = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)local_res10);
      __return_storage_ptr__->PrerequisiteTickFunction = (FTickFunction *)&param_1->_padding_;
      return __return_storage_ptr__;
    }
    pUVar5 = (UWorld *)param_1->_padding_;
    if ((pUVar5 != (UWorld *)0x0) ||
       (pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
       pUVar5 != (UWorld *)0x0)) {
      uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      ::Singleton.World = pUVar5;
      FConstraintsManagerController::GetParentConstraints
                (&::Singleton,&local_40,uVar8 >> 0x10 ^ uVar8,true);
      uVar8 = local_40.ArrayNum;
      while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
        uVar4 = 0;
        if ((int)uVar8 < local_40.ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FTickPrerequisite *)(*pcVar2)();
          return pFVar6;
        }
        this = (UTickableConstraint *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   (local_40.AllocatorInstance.Data + (longlong)(int)uVar8 * 8));
        if (((this != (UTickableConstraint *)0x0) &&
            (pFVar7 = UTickableConstraint::GetTickFunction(this,pUVar5),
            pFVar7 != (FConstraintTickFunction *)0x0)) &&
           (((pFVar7->_padding_ & 0x20000) != 0 ||
            (((byte *)pFVar7->_padding_ != (byte *)0x0 && ((*(byte *)pFVar7->_padding_ & 1) != 0))))
           )) {
          pFVar7 = UTickableConstraint::GetTickFunction(this,pUVar5);
          local_res20 = (UObject *)this->_padding_;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_res20 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(local_res20);
          }
          (__return_storage_ptr__->PrerequisiteObject).WeakPtr = (FWeakObjectPtr)0x0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_res20 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(local_res20);
          }
          FWeakObjectPtr::operator=
                    ((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_res20);
          __return_storage_ptr__->PrerequisiteTickFunction = (FTickFunction *)pFVar7;
          if ((pFVar7 == (FConstraintTickFunction *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("PrerequisiteTickFunction",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\EngineBaseTypes.h"
                                 ,0x8c,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar6 = (FTickPrerequisite *)(*pcVar2)();
            return pFVar6;
          }
          if (local_40.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return __return_storage_ptr__;
          }
          FMemory::Free(local_40.AllocatorInstance.Data);
          return __return_storage_ptr__;
        }
      }
      if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.AllocatorInstance.Data);
      }
    }
    local_48 = (param_1->AttachParent).field0_0x0.DebugPtr;
    if (local_48 != (USceneComponent *)0x0) {
      plVar1 = &local_48->_padding_;
      if ((plVar1 != (longlong *)0x0) &&
         (((local_48->_padding_ & 0x20000) != 0 ||
          (((byte *)local_48->_padding_ != (byte *)0x0 && ((*(byte *)local_48->_padding_ & 1) != 0))
          )))) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_48);
        }
        (__return_storage_ptr__->PrerequisiteObject).WeakPtr = (FWeakObjectPtr)0x0;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_48);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_48);
        __return_storage_ptr__->PrerequisiteTickFunction = (FTickFunction *)plVar1;
        return __return_storage_ptr__;
      }
      LookForPrimaryPrerequisite(__return_storage_ptr__,local_48,true);
      return __return_storage_ptr__;
    }
  }
  *__return_storage_ptr__ = `LookForPrimaryPrerequisite'::`2'::DummyPrerex;
  return __return_storage_ptr__;
}

// MarkComponentForEvaluation @ 1464b9d10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
TransformableHandleUtils::MarkComponentForEvaluation(USceneComponent *param_1,bool param_2)

{
  int iVar1;
  USceneComponent *pUVar2;
  UClass *pUVar3;
  FAnimationEvaluationCache *this;
  
  if (param_1 != (USceneComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      this = UE::Anim::FAnimationEvaluationCache::Get();
      UE::Anim::FAnimationEvaluationCache::MarkForEvaluation(this,(USkeletalMeshComponent *)param_1)
      ;
    }
    if (param_2) {
      for (pUVar2 = (param_1->AttachParent).field0_0x0.DebugPtr; pUVar2 != (USceneComponent *)0x0;
          pUVar2 = (pUVar2->AttachParent).field0_0x0.DebugPtr) {
        MarkComponentForEvaluation(pUVar2,false);
      }
    }
  }
  return;
}

// SkipTicking @ 1464c1030

bool __cdecl TransformableHandleUtils::SkipTicking(void)

{
  return bNewEvaluation;
}

// TickDependantComponents @ 1464c22f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl TransformableHandleUtils::TickDependantComponents(USceneComponent *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  AActor *this;
  UClass *local_res10;
  
  if (((0 < SkeletalMeshTickingMode) && (!bNewEvaluation)) && (param_1 != (USceneComponent *)0x0)) {
    if (SkeletalMeshTickingMode == 1) {
      pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        param_1 = (USceneComponent *)0x0;
      }
      TickSkeletalMeshComponent((USkeletalMeshComponent *)param_1);
      return;
    }
    this = (AActor *)param_1->_padding_;
    if (this != (AActor *)0x0) {
      do {
        pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar3 != (UClass *)0x0) goto LAB_1464c239a;
LAB_1464c23cb:
          pUVar4 = (UClass *)0x0;
        }
        else {
          if (pUVar3 == (UClass *)0x0) goto LAB_1464c23cb;
          UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_1464c239a:
          pUVar4 = Z_Construct_UClass_UActorComponent_NoRegister();
          if (pUVar4 == (UClass *)0x0) goto LAB_1464c23cb;
          iVar1 = (int)pUVar4->_padding_;
          if (((int)pUVar3->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar4->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          pUVar4 = pUVar3;
          if (!bVar2) goto LAB_1464c23cb;
        }
        pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
        local_res10 = pUVar3;
        if (pUVar4 == pUVar5) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar3);
          }
          AActor::
          ForEachComponent_Internal<USkeletalMeshComponent,1,1,void_(__cdecl*)(USkeletalMeshComponent_*)>
                    (this,(TSubclassOf<UActorComponent>)&local_res10,TickSkeletalMeshComponent);
        }
        else {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar3);
          }
          AActor::
          ForEachComponent_Internal<USkeletalMeshComponent,0,1,void_(__cdecl*)(USkeletalMeshComponent_*)>
                    (this,(TSubclassOf<UActorComponent>)&local_res10,TickSkeletalMeshComponent);
        }
        this = AActor::GetAttachParentActor(this);
      } while (this != (AActor *)0x0);
    }
  }
  return;
}

// TickSkeletalMeshComponent @ 1464c2470

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl TransformableHandleUtils::TickSkeletalMeshComponent(USkeletalMeshComponent *param_1)

{
  TQuat<double> *pTVar1;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  if (((param_1 != (USkeletalMeshComponent *)0x0) && (!bNewEvaluation)) &&
     (param_1->bPostEvaluatingAnimation == '\0')) {
    USkeletalMeshComponent::TickAnimation(param_1,__real_3cf5c28f,false);
    (**(code **)(param_1->_padding_ + 0xb88))(param_1,0);
    USkinnedMeshComponent::RefreshFollowerComponents((USkinnedMeshComponent *)param_1);
    local_48.Pitch = (double)param_1->_padding_;
    local_48.Yaw = (double)param_1->_padding_;
    local_48.Roll = (double)param_1->_padding_;
    pTVar1 = FRotationConversionCache::RotatorToQuat
                       ((FRotationConversionCache *)&param_1->_padding_,&local_28,&local_48);
    USceneComponent::UpdateComponentToWorldWithParent
              ((USceneComponent *)param_1,(USceneComponent *)param_1->_padding_,
               (FName)param_1->_padding_,None,pTVar1,None);
    (**(code **)(param_1->_padding_ + 0xbc8))(param_1);
    UActorComponent::MarkRenderTransformDirty((UActorComponent *)param_1);
    UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)param_1);
  }
  return;
}

// Z_Construct_UClass_AConstraintsActor_NoRegister @ 1464c41c0

UClass * __cdecl Z_Construct_UClass_AConstraintsActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AConstraintsActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"ConstraintsActor",
               &Z_Registration_Info_UClass_AConstraintsActor.InnerSingleton,
               AConstraintsActor::StaticRegisterNativesAConstraintsActor,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AConstraintsActor>,
               InternalVTableHelperCtorCaller<AConstraintsActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AConstraintsActor.InnerSingleton;
}

// Z_Construct_UClass_UConstraintsScriptingLibrary_NoRegister @ 1464c4280

UClass * __cdecl Z_Construct_UClass_UConstraintsScriptingLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstraintsScriptingLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"ConstraintsScriptingLibrary",
               &Z_Registration_Info_UClass_UConstraintsScriptingLibrary.InnerSingleton,
               UConstraintsScriptingLibrary::StaticRegisterNativesUConstraintsScriptingLibrary,0x28,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UConstraintsScriptingLibrary>,
               InternalVTableHelperCtorCaller<UConstraintsScriptingLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstraintsScriptingLibrary.InnerSingleton;
}

// Z_Construct_UClass_UTickableLookAtConstraint_NoRegister @ 1464c4340

UClass * __cdecl Z_Construct_UClass_UTickableLookAtConstraint_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTickableLookAtConstraint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TickableLookAtConstraint",
               &Z_Registration_Info_UClass_UTickableLookAtConstraint.InnerSingleton,
               UTickableLookAtConstraint::StaticRegisterNativesUTickableLookAtConstraint,200,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTickableLookAtConstraint>,
               InternalVTableHelperCtorCaller<UTickableLookAtConstraint>,local_res8,
               UTickableTransformConstraint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTickableLookAtConstraint.InnerSingleton;
}

// Z_Construct_UClass_UTickableParentConstraint_NoRegister @ 1464c4400

UClass * __cdecl Z_Construct_UClass_UTickableParentConstraint_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTickableParentConstraint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TickableParentConstraint",
               &Z_Registration_Info_UClass_UTickableParentConstraint.InnerSingleton,
               UTickableParentConstraint::StaticRegisterNativesUTickableParentConstraint,0x130,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTickableParentConstraint>,
               InternalVTableHelperCtorCaller<UTickableParentConstraint>,local_res8,
               UTickableTransformConstraint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTickableParentConstraint.InnerSingleton;
}

// Z_Construct_UClass_UTickableRotationConstraint_NoRegister @ 1464c44c0

UClass * __cdecl Z_Construct_UClass_UTickableRotationConstraint_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTickableRotationConstraint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TickableRotationConstraint",
               &Z_Registration_Info_UClass_UTickableRotationConstraint.InnerSingleton,
               UTickableRotationConstraint::StaticRegisterNativesUTickableRotationConstraint,0xf0,
               0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTickableRotationConstraint>,
               InternalVTableHelperCtorCaller<UTickableRotationConstraint>,local_res8,
               UTickableTransformConstraint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTickableRotationConstraint.InnerSingleton;
}

// Z_Construct_UClass_UTickableScaleConstraint_NoRegister @ 1464c4580

UClass * __cdecl Z_Construct_UClass_UTickableScaleConstraint_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTickableScaleConstraint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TickableScaleConstraint",
               &Z_Registration_Info_UClass_UTickableScaleConstraint.InnerSingleton,
               UTickableScaleConstraint::StaticRegisterNativesUTickableScaleConstraint,0xd8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTickableScaleConstraint>,
               InternalVTableHelperCtorCaller<UTickableScaleConstraint>,local_res8,
               UTickableTransformConstraint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTickableScaleConstraint.InnerSingleton;
}

// Z_Construct_UClass_UTickableTranslationConstraint_NoRegister @ 1464c4640

UClass * __cdecl Z_Construct_UClass_UTickableTranslationConstraint_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTickableTranslationConstraint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TickableTranslationConstraint",
               &Z_Registration_Info_UClass_UTickableTranslationConstraint.InnerSingleton,
               UTickableTranslationConstraint::StaticRegisterNativesUTickableTranslationConstraint,
               0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTickableTranslationConstraint>,
               InternalVTableHelperCtorCaller<UTickableTranslationConstraint>,local_res8,
               UTickableTransformConstraint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTickableTranslationConstraint.InnerSingleton;
}

// Z_Construct_UEnum_Constraints_EHandleEvent @ 1464c4700

UEnum * __cdecl Z_Construct_UEnum_Constraints_EHandleEvent(void)

{
  if (Z_Registration_Info_UEnum_EHandleEvent.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EHandleEvent.InnerSingleton,
               &Z_Construct_UEnum_Constraints_EHandleEvent_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EHandleEvent.InnerSingleton;
}

// Z_Construct_UScriptStruct_FConstraintAndActiveChannel @ 1464c4740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConstraintAndActiveChannel(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConstraintAndActiveChannel.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConstraintAndActiveChannel.InnerSingleton,
               &Z_Construct_UScriptStruct_FConstraintAndActiveChannel_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConstraintAndActiveChannel.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConstraintAndActiveChannel.InnerSingleton;
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

// Z_Construct_UScriptStruct_FConstraintTickFunction @ 1464c47c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FConstraintTickFunction(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FConstraintTickFunction.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FConstraintTickFunction.InnerSingleton,
               &Z_Construct_UScriptStruct_FConstraintTickFunction_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FConstraintTickFunction.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FConstraintTickFunction.InnerSingleton;
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

// IMPLEMENT_MODULE_Constraints @ 1464c6ad0

void __cdecl IMPLEMENT_MODULE_Constraints(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'AnimationEvaluationCache'' @ 1503dbb50

void __cdecl
`UE::Anim::FAnimationEvaluationCache::Get'::__l2::
_dynamic_atexit_destructor_for__AnimationEvaluationCache__(void)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  
  if (AnimationEvaluationCache.ConstraintsNotificationHandle.ID != 0) {
    this = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           FConstraintsManagerController::GetNotifyDelegate();
    if (AnimationEvaluationCache.ConstraintsNotificationHandle.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                (this,AnimationEvaluationCache.ConstraintsNotificationHandle);
    }
    AnimationEvaluationCache.ConstraintsNotificationHandle.ID = 0;
  }
  TSet<TTuple<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator>,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator>,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,0>,FDefaultSetAllocator>
           *)&AnimationEvaluationCache);
  AnimationEvaluationCache.PerSkeletalMeshEvaluator._72_4_ = 0;
  if (AnimationEvaluationCache.PerSkeletalMeshEvaluator._64_8_ != 0) {
    FMemory::Free((void *)AnimationEvaluationCache.PerSkeletalMeshEvaluator._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&AnimationEvaluationCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDebugDependencies'' @ 1503dbbc0

void __cdecl DependencyLocals::_dynamic_atexit_destructor_for__CVarDebugDependencies__(void)

{
  CVarDebugDependencies._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDebugDependencies);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDebugEvaluationGraph'' @ 1503dbbe0

void __cdecl
ConstraintsEvaluationGraph::_dynamic_atexit_destructor_for__CVarDebugEvaluationGraph__(void)

{
  CVarDebugEvaluationGraph._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDebugEvaluationGraph);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogNewEvaluation'' @ 1503dbc00

void __cdecl UE::Anim::_dynamic_atexit_destructor_for__CVarLogNewEvaluation__(void)

{
  CVarLogNewEvaluation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogNewEvaluation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNewEvaluation'' @ 1503dbc20

void __cdecl TransformableHandleUtils::_dynamic_atexit_destructor_for__CVarNewEvaluation__(void)

{
  CVarNewEvaluation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNewEvaluation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkeletalMeshTickingMode'' @ 1503dbc40

void __cdecl
TransformableHandleUtils::_dynamic_atexit_destructor_for__CVarSkeletalMeshTickingMode__(void)

{
  CVarSkeletalMeshTickingMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkeletalMeshTickingMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseEvaluationGraph'' @ 1503dbc60

void __cdecl
ConstraintsEvaluationGraph::_dynamic_atexit_destructor_for__CVarUseEvaluationGraph__(void)

{
  CVarUseEvaluationGraph._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseEvaluationGraph);
  return;
}

// `dynamic_atexit_destructor_for_'ConstraintToChannels'' @ 1503dbc80

void __cdecl
`UTickableTransformConstraint::GetChannelsToKey'::__l2::
_dynamic_atexit_destructor_for__ConstraintToChannels__(void)

{
  ConstraintToChannels._72_4_ = 0;
  if (ConstraintToChannels._64_8_ != 0) {
    FMemory::Free((void *)ConstraintToChannels._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ETransformConstraintType,enum_EMovieSceneTransformChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ETransformConstraintType,enum_EMovieSceneTransformChannel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&ConstraintToChannels);
  return;
}

// `dynamic_atexit_destructor_for_'DummyArray'' @ 1503dbcc0

void __cdecl
`UConstraintSubsystem::GetConstraints'::__l2::_dynamic_atexit_destructor_for__DummyArray__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DummyArray.AllocatorInstance.Data;
  if (DummyArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DummyArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'DummyArray'' @ 1503dbce0

void __cdecl
`UConstraintSubsystem::GetConstraintsArray'::__l2::_dynamic_atexit_destructor_for__DummyArray__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DummyArray.AllocatorInstance.Data;
  if (DummyArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DummyArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'DummyArray'' @ 1503dbd00

void __cdecl
`FConstraintsManagerController::GetParentConstraints'::__l2::
_dynamic_atexit_destructor_for__DummyArray__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DummyArray.AllocatorInstance.Data;
  if (DummyArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DummyArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 1503dbd20

void __cdecl
`UE::TransformConstraintUtil::FConstraintsInteractionCache::Get'::__l2::
_dynamic_atexit_destructor_for__Empty__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Empty.AllocatorInstance.Data;
  if (::Empty.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Empty.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 1503dbd40

void __cdecl
`UE::TransformConstraintUtil::FConstraintsInteractionCache::Get'::__l2::
_dynamic_atexit_destructor_for__Empty__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Empty.AllocatorInstance.Data;
  if (::Empty.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Empty.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 1503dbd60

void __cdecl
`FConstraintsManagerController::
GetConstraintsByPredicate<`FDependencyBuilder::BuildSelfDependencies'::__l2::<lambda_1>_>'::__l5::
_dynamic_atexit_destructor_for__Empty__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Empty.AllocatorInstance.Data;
  if (::Empty.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Empty.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 1503dbd80

void __cdecl
`FConstraintsManagerController::
GetConstraintsByPredicate<`FConstraintCycleChecker::CheckAndFixCycles'::__l2::<lambda_1>_>'::__l5::
_dynamic_atexit_destructor_for__Empty__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Empty.AllocatorInstance.Data;
  if (::Empty.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Empty.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 1503dbda0

void __cdecl
`FConstraintsManagerController::
GetConstraintsByPredicate<`UE::TransformConstraintUtil::FConstraintsInteractionCache::Get'::__l2::<lambda_1>_>'
::__l5::_dynamic_atexit_destructor_for__Empty__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Empty.AllocatorInstance.Data;
  if (::Empty.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Empty.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 1503dbdc0

void __cdecl
`FConstraintsManagerController::
GetConstraintsByPredicate<`UE::TransformConstraintUtil::GetChildrenConstraints'::__l2::<lambda_1>_>'
::__l5::_dynamic_atexit_destructor_for__Empty__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Empty.AllocatorInstance.Data;
  if (::Empty.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Empty.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 1503dbde0

void __cdecl
`FConstraintsManagerController::
GetConstraintsByPredicate<`FConstraintCycleChecker::UpdateCyclingDependency'::__l2::<lambda_1>_>'::
__l5::_dynamic_atexit_destructor_for__Empty__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Empty.AllocatorInstance.Data;
  if (::Empty.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Empty.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 1503dbe00

void __cdecl
`FConstraintsManagerController::
GetConstraintsByPredicate<`FDependencyBuilder::BuildExternalDependencies'::__l9::<lambda_1>_>'::__l5
::_dynamic_atexit_destructor_for__Empty__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Empty.AllocatorInstance.Data;
  if (::Empty.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Empty.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 1503dbe20

void __cdecl
`FConstraintsManagerController::
GetConstraintsByPredicate<`FDependencyBuilder::BuildAttachmentsDependencies'::__l18::<lambda_1>_>'::
__l5::_dynamic_atexit_destructor_for__Empty__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Empty.AllocatorInstance.Data;
  if (::Empty.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Empty.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 1503dbe40

void __cdecl
`FConstraintsManagerController::
GetConstraintsByPredicate<`FDependencyBuilder::BuildExternalDependencies'::__l64::<lambda_2>_>'::
__l5::_dynamic_atexit_destructor_for__Empty__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Empty.AllocatorInstance.Data;
  if (::Empty.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Empty.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 1503dbe60

void __cdecl
`FConstraintsManagerController::
GetConstraintsByPredicate<`FDependencyBuilder::BuildExternalDependencies'::__l108::<lambda_3>_>'::
__l5::_dynamic_atexit_destructor_for__Empty__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Empty.AllocatorInstance.Data;
  if (::Empty.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Empty.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 1503dbe80

void __cdecl
`UE::TransformConstraintUtil::FConstraintsInteractionCache::Get'::__l5::
_dynamic_atexit_destructor_for__Empty__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Empty.AllocatorInstance.Data;
  if (::Empty.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Empty.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 1503dbea0

void __cdecl
`FConstraintsManagerController::GetAllConstraints'::__l5::_dynamic_atexit_destructor_for__Empty__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Empty.AllocatorInstance.Data;
  if (::Empty.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Empty.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 1503dbec0

void __cdecl
`FConstraintsManagerController::GetConstraintsArray'::__l5::_dynamic_atexit_destructor_for__Empty__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Empty.AllocatorInstance.Data;
  if (::Empty.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Empty.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 1503dbee0

void __cdecl
`FConstraintsManagerController::GetStaticConstraints'::__l5::_dynamic_atexit_destructor_for__Empty__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Empty.AllocatorInstance.Data;
  if (::Empty.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Empty.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Invalid'' @ 1503dbf00

void __cdecl `UE::Anim::EvaluateComponent'::__l2::_dynamic_atexit_destructor_for__Invalid__(void)

{
  UE::Anim::FAnimationEvaluator::~FAnimationEvaluator(&::Invalid);
  return;
}

// `dynamic_atexit_destructor_for_'Invalid'' @ 1503dbf20

void __cdecl
`TransformableHandleUtils::EvaluateComponent'::__l2::_dynamic_atexit_destructor_for__Invalid__(void)

{
  UE::Anim::FAnimationEvaluator::~FAnimationEvaluator(&::Invalid);
  return;
}

// `dynamic_atexit_destructor_for_'Invalid'' @ 1503dbf40

void __cdecl
`TransformableHandleUtils::EvaluateComponent'::__l2::_dynamic_atexit_destructor_for__Invalid__(void)

{
  UE::Anim::FAnimationEvaluator::~FAnimationEvaluator(&::Invalid);
  return;
}

// `dynamic_atexit_destructor_for_'Invalid'' @ 1503dbf60

void __cdecl
`UE::Anim::FAnimationEvaluationCache::GetEvaluator'::__l5::_dynamic_atexit_destructor_for__Invalid__
          (void)

{
  UE::Anim::FAnimationEvaluator::~FAnimationEvaluator(&::Invalid);
  return;
}

// `dynamic_atexit_destructor_for_'Invalid'' @ 1503dbf80

void __cdecl
`UE::Anim::FAnimationEvaluationCache::GetEvaluator'::__l5::_dynamic_atexit_destructor_for__Invalid__
          (void)

{
  UE::Anim::FAnimationEvaluator::~FAnimationEvaluator(&::Invalid);
  return;
}

// `dynamic_atexit_destructor_for_'LogConstraints'' @ 1503dbfa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogConstraints__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogConstraints);
  return;
}

// `dynamic_atexit_destructor_for_'NotifyDelegate'' @ 1503dbfc0

void __cdecl
`FConstraintsManagerController::GetNotifyDelegate'::__l2::
_dynamic_atexit_destructor_for__NotifyDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)NotifyDelegate._8_8_,
             NotifyDelegate._16_4_);
  if (NotifyDelegate._8_8_ != 0) {
    FMemory::Free((void *)NotifyDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&NotifyDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'SceneComponentConstrained'' @ 1503dc000

void __cdecl
`FConstraintsManagerController::OnSceneComponentConstrained'::__l2::
_dynamic_atexit_destructor_for__SceneComponentConstrained__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)SceneComponentConstrained._8_8_,
             SceneComponentConstrained._16_4_);
  if (SceneComponentConstrained._8_8_ != 0) {
    FMemory::Free((void *)SceneComponentConstrained._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&SceneComponentConstrained);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 1503dc040

void __cdecl `FTransformableRegistry::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  ::Singleton.Transformables._72_4_ = 0;
  if (::Singleton.Transformables._64_8_ != 0) {
    FMemory::Free((void *)::Singleton.Transformables._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,FTransformableRegistry::FTransformableInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_*,FTransformableRegistry::FTransformableInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_*,FTransformableRegistry::FTransformableInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Singleton);
  return;
}

