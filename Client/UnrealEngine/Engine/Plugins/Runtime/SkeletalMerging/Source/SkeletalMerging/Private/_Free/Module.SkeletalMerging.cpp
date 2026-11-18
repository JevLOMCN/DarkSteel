// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMerging
// Functions: 32

// `dynamic_initializer_for_'LogSkeletalMeshMerge'' @ 1411d6550

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSkeletalMeshMerge__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogSkeletalMeshMerge,L"LogSkeletalMeshMerge",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSkeletalMeshMerge__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantSkeletalMerging'' @ 1411d6590

void __cdecl _dynamic_initializer_for__ModuleRegistrantSkeletalMerging__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "SkeletalMerging";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"SkeletalMerging",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<IModuleInterface>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h__Script_SkeletalMerging_3058214603'' @ 1411d65e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h__Script_SkeletalMerging_3058214603__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SkeletalMerging",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h__Script_SkeletalMerging_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h__Script_SkeletalMerging_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_SkeletalMerging'' @ 1411d6630

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_SkeletalMerging__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xb6ef4320;
  local_res8[0].DeclarationsHash = 0x2f212abd;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_SkeletalMerging,L"/Script/SkeletalMerging",
             &Z_Registration_Info_UPackage__Script_SkeletalMerging,local_res8);
  return;
}

// Z_Construct_UPackage__Script_SkeletalMerging @ 14ab8e6c0

UPackage * __cdecl Z_Construct_UPackage__Script_SkeletalMerging(void)

{
  if (Z_Registration_Info_UPackage__Script_SkeletalMerging.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_SkeletalMerging.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_SkeletalMerging.OuterSingleton;
}

// Z_Construct_UClass_USkeletalMergingLibrary @ 14ab8ebd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USkeletalMergingLibrary(void)

{
  if (Z_Registration_Info_UClass_USkeletalMergingLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USkeletalMergingLibrary.OuterSingleton,
               &Z_Construct_UClass_USkeletalMergingLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USkeletalMergingLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FSkeletalMeshMergeParams @ 14ab8ec10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSkeletalMeshMergeParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshMergeParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSkeletalMeshMergeParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshMergeParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSkeletalMeshMergeParams.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSkeletonMergeParams @ 14ab8ec90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSkeletonMergeParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSkeletonMergeParams.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSkeletonMergeParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSkeletonMergeParams.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FSkeletonMergeParams.InnerSingleton;
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

// NewProp_bNeedsCpuAccess_SetBit @ 14ab8ed10

void __cdecl
Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bNeedsCpuAccess_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) | 1;
  return;
}

// NewProp_bSkeletonBefore_SetBit @ 14ab8ed20

void __cdecl
Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bSkeletonBefore_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) | 2;
  return;
}

// NewStructOps @ 14ab8ed30

void * __cdecl Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSkeletalMeshMergeParams,&UE::CoreUObject::Private::Construct<FSkeletalMeshMergeParams>,&UE::CoreUObject::Private::ConstructForTests<FSkeletalMeshMergeParams>,&UE::CoreUObject::Private::Destruct<FSkeletalMeshMergeParams>,&UE::CoreUObject::Private::Copy<FSkeletalMeshMergeParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bMergeSockets_SetBit @ 14ab8ed70

void __cdecl
Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeSockets_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bMergeVirtualBones_SetBit @ 14ab8ed80

void __cdecl
Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeVirtualBones_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bMergeCurveNames_SetBit @ 14ab8ed90

void __cdecl
Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeCurveNames_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewProp_bMergeBlendProfiles_SetBit @ 14ab8eda0

void __cdecl
Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeBlendProfiles_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13) = 1;
  return;
}

// NewProp_bMergeAnimSlotGroups_SetBit @ 14ab8edb0

void __cdecl
Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeAnimSlotGroups_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bCheckSkeletonsCompatibility_SetBit @ 14ab8edc0

void __cdecl
Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bCheckSkeletonsCompatibility_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// NewStructOps @ 14ab8edd0

void * __cdecl Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSkeletonMergeParams,&UE::CoreUObject::Private::Construct<FSkeletonMergeParams>,&UE::CoreUObject::Private::ConstructForTests<FSkeletonMergeParams>,&UE::CoreUObject::Private::Destruct<FSkeletonMergeParams>,&UE::CoreUObject::Private::Copy<FSkeletonMergeParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_USkeletalMergingLibrary_MergeMeshes @ 14ab8ee10

UFunction * __cdecl Z_Construct_UFunction_USkeletalMergingLibrary_MergeMeshes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USkeletalMergingLibrary_MergeMeshes_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USkeletalMergingLibrary_MergeSkeletons @ 14ab8ee50

UFunction * __cdecl Z_Construct_UFunction_USkeletalMergingLibrary_MergeSkeletons(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USkeletalMergingLibrary_MergeSkeletons_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ConstructItems<TObjectPtr<USkeletalMesh>,TObjectPtr<USkeletalMesh>,int> @ 14ab8f0d0

void __cdecl
ConstructItems<TObjectPtr<USkeletalMesh>,TObjectPtr<USkeletalMesh>,int>
          (void *param_1,TObjectPtr<USkeletalMesh> *param_2,int param_3)

{
  TObjectPtr<USkeletalMesh> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<USkeletalMesh>_u_0)param_2->field0_0x0;
      ((TObjectPtr<USkeletalMesh>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (USkeletalMesh *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (USkeletalMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<USkeleton>,TObjectPtr<USkeleton>,int> @ 14ab8f130

void __cdecl
ConstructItems<TObjectPtr<USkeleton>,TObjectPtr<USkeleton>,int>
          (void *param_1,TObjectPtr<USkeleton> *param_2,int param_3)

{
  TObjectPtr<USkeleton> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<USkeleton>_u_0)param_2->field0_0x0;
      ((TObjectPtr<USkeleton>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (USkeleton *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (USkeleton *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FSkelMeshMergeSectionMapping,FSkelMeshMergeSectionMapping,int> @ 14ab8f190

void __cdecl
ConstructItems<FSkelMeshMergeSectionMapping,FSkelMeshMergeSectionMapping,int>
          (void *param_1,FSkelMeshMergeSectionMapping *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      ((ForAnyElementType *)param_1)->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 8))->Data + 4);
      iVar2 = *(int *)(lVar3 + 8 + (longlong)param_1);
      _Src = *(void **)(lVar3 + (longlong)param_1);
      *(int *)&((ForAnyElementType *)((longlong)param_1 + 8))->Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,param_1,iVar2,piVar1);
        memcpy(((ForAnyElementType *)param_1)->Data,_Src,(longlong)iVar2 << 2);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// InternalConstructor<USkeletalMergingLibrary> @ 14ab90860

void __cdecl InternalConstructor<USkeletalMergingLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7USkeletalMergingLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<USkeletalMergingLibrary> @ 14ab90890

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USkeletalMergingLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USkeletalMergingLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USkeletalMergingLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// NewObject<USkeletalMeshSocket> @ 14ab90940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USkeletalMeshSocket * __cdecl NewObject<USkeletalMeshSocket>(UObject *param_1)

{
  UClass *pUVar1;
  USkeletalMeshSocket *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_USkeletalMeshSocket_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (USkeletalMeshSocket *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// `scalar_deleting_destructor' @ 14ab91740

void * __thiscall
USkeletalMergingLibrary::_scalar_deleting_destructor_(USkeletalMergingLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7USkeletalMergingLibrary__6B_;
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

// EmptyLinkFunctionForGeneratedCodeSkeletalMergingLibrary @ 14ab92790

void __cdecl EmptyLinkFunctionForGeneratedCodeSkeletalMergingLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSkeletalMerging_init @ 14ab927a0

void __cdecl EmptyLinkFunctionForGeneratedCodeSkeletalMerging_init(void)

{
  return;
}

// Z_Construct_UClass_USkeletalMergingLibrary_NoRegister @ 14ab965b0

UClass * __cdecl Z_Construct_UClass_USkeletalMergingLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMergingLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SkeletalMerging",L"SkeletalMergingLibrary",
               &Z_Registration_Info_UClass_USkeletalMergingLibrary.InnerSingleton,
               USkeletalMergingLibrary::StaticRegisterNativesUSkeletalMergingLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<USkeletalMergingLibrary>
               ,InternalVTableHelperCtorCaller<USkeletalMergingLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMergingLibrary.InnerSingleton;
}

// IMPLEMENT_MODULE_SkeletalMerging @ 14ab96820

void __cdecl IMPLEMENT_MODULE_SkeletalMerging(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogSkeletalMeshMerge'' @ 150421f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSkeletalMeshMerge__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSkeletalMeshMerge);
  return;
}

