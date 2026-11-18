// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceUtilities
// Functions: 36

// `dynamic_initializer_for_'ModuleRegistrantTraceUtilities'' @ 141453880

void __cdecl _dynamic_initializer_for__ModuleRegistrantTraceUtilities__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "TraceUtilities";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"TraceUtilities",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h__Script_TraceUtilities_981518624'' @ 1414538d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h__Script_TraceUtilities_981518624__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TraceUtilities",
             Z_CompiledInDeferFile_FID_Engine_Plugins_TraceUtilities_Source_TraceUtilities_Public_TraceUtilLibrary_h__Script_TraceUtilities_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_TraceUtilities'' @ 141453910

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_TraceUtilities__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x819b0219;
  local_res8[0].DeclarationsHash = 0xcf7ce979;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_TraceUtilities,L"/Script/TraceUtilities",
             &Z_Registration_Info_UPackage__Script_TraceUtilities,local_res8);
  return;
}

// Z_Construct_UPackage__Script_TraceUtilities @ 14f12e9e0

UPackage * __cdecl Z_Construct_UPackage__Script_TraceUtilities(void)

{
  if (Z_Registration_Info_UPackage__Script_TraceUtilities.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_TraceUtilities.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_TraceUtilities.OuterSingleton;
}

// Z_Construct_UClass_UTraceUtilLibrary @ 14f12eae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTraceUtilLibrary(void)

{
  if (Z_Registration_Info_UClass_UTraceUtilLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTraceUtilLibrary.OuterSingleton,
               &Z_Construct_UClass_UTraceUtilLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTraceUtilLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UTraceUtilLibrary_GetAllChannels @ 14f12eb20

UFunction * __cdecl Z_Construct_UFunction_UTraceUtilLibrary_GetAllChannels(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTraceUtilLibrary_GetAllChannels_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTraceUtilLibrary_GetEnabledChannels @ 14f12eb60

UFunction * __cdecl Z_Construct_UFunction_UTraceUtilLibrary_GetEnabledChannels(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTraceUtilLibrary_GetEnabledChannels_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14f12eba0

void __cdecl
Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled @ 14f12ebb0

UFunction * __cdecl Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTraceUtilLibrary_IsChannelEnabled_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14f12ebf0

void __cdecl
Z_Construct_UFunction_UTraceUtilLibrary_IsTracing_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UTraceUtilLibrary_IsTracing @ 14f12ec00

UFunction * __cdecl Z_Construct_UFunction_UTraceUtilLibrary_IsTracing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTraceUtilLibrary_IsTracing_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14f12ec40

void __cdecl
Z_Construct_UFunction_UTraceUtilLibrary_PauseTracing_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UTraceUtilLibrary_PauseTracing @ 14f12ec50

UFunction * __cdecl Z_Construct_UFunction_UTraceUtilLibrary_PauseTracing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTraceUtilLibrary_PauseTracing_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14f12ec90

void __cdecl
Z_Construct_UFunction_UTraceUtilLibrary_ResumeTracing_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UTraceUtilLibrary_ResumeTracing @ 14f12eca0

UFunction * __cdecl Z_Construct_UFunction_UTraceUtilLibrary_ResumeTracing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTraceUtilLibrary_ResumeTracing_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14f12ece0

void __cdecl
Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo @ 14f12ecf0

UFunction * __cdecl Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTraceUtilLibrary_StartTraceSendTo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14f12ed30

void __cdecl
Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile @ 14f12ed40

UFunction * __cdecl Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTraceUtilLibrary_StartTraceToFile_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14f12ed80

void __cdecl
Z_Construct_UFunction_UTraceUtilLibrary_StopTracing_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UTraceUtilLibrary_StopTracing @ 14f12ed90

UFunction * __cdecl Z_Construct_UFunction_UTraceUtilLibrary_StopTracing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTraceUtilLibrary_StopTracing_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_enabled_SetBit @ 14f12edd0

void __cdecl
Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::NewProp_enabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14f12ede0

void __cdecl
Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel @ 14f12edf0

UFunction * __cdecl Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTraceUtilLibrary_ToggleChannel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTraceUtilLibrary_TraceBookmark @ 14f12ee30

UFunction * __cdecl Z_Construct_UFunction_UTraceUtilLibrary_TraceBookmark(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTraceUtilLibrary_TraceBookmark_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionEnd @ 14f12ee70

UFunction * __cdecl Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionEnd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionEnd_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionStart @ 14f12eeb0

UFunction * __cdecl Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionStart(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTraceUtilLibrary_TraceMarkRegionStart_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShowUI_SetBit @ 14f12eef0

void __cdecl
Z_Construct_UFunction_UTraceUtilLibrary_TraceScreenshot_Statics::NewProp_bShowUI_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UTraceUtilLibrary_TraceScreenshot @ 14f12ef00

UFunction * __cdecl Z_Construct_UFunction_UTraceUtilLibrary_TraceScreenshot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTraceUtilLibrary_TraceScreenshot_Statics::FuncParams);
  }
  return ReturnFunction;
}

// InternalConstructor<UTraceUtilLibrary> @ 14f12f0d0

void __cdecl InternalConstructor<UTraceUtilLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UTraceUtilLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UTraceUtilLibrary> @ 14f12f100

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTraceUtilLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTraceUtilLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UTraceUtilLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// `scalar_deleting_destructor' @ 14f12f230

void * __thiscall
UTraceUtilLibrary::_scalar_deleting_destructor_(UTraceUtilLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UTraceUtilLibrary__6B_;
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

// EmptyLinkFunctionForGeneratedCodeTraceUtilLibrary @ 14f12f290

void __cdecl EmptyLinkFunctionForGeneratedCodeTraceUtilLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTraceUtilities_init @ 14f12f2a0

void __cdecl EmptyLinkFunctionForGeneratedCodeTraceUtilities_init(void)

{
  return;
}

// Z_Construct_UClass_UTraceUtilLibrary_NoRegister @ 14f12fa70

UClass * __cdecl Z_Construct_UClass_UTraceUtilLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTraceUtilLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TraceUtilities",L"TraceUtilLibrary",
               &Z_Registration_Info_UClass_UTraceUtilLibrary.InnerSingleton,
               UTraceUtilLibrary::StaticRegisterNativesUTraceUtilLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTraceUtilLibrary>,
               InternalVTableHelperCtorCaller<UTraceUtilLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTraceUtilLibrary.InnerSingleton;
}

// IMPLEMENT_MODULE_TraceUtilities @ 14f1306f0

void __cdecl IMPLEMENT_MODULE_TraceUtilities(void)

{
  return;
}

