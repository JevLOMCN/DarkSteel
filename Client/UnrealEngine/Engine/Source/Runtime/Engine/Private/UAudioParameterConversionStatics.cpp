// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// StaticClass @ 147672d30

UClass * __cdecl UAudioParameterConversionStatics::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAudioParameterConversionStatics.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AudioParameterConversionStatics",
               &Z_Registration_Info_UClass_UAudioParameterConversionStatics.InnerSingleton,
               StaticRegisterNativesUAudioParameterConversionStatics,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioParameterConversionStatics>,
               InternalVTableHelperCtorCaller<UAudioParameterConversionStatics>,aFStackX_8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioParameterConversionStatics.InnerSingleton;
}

// UAudioParameterConversionStatics @ 147688320

UAudioParameterConversionStatics * __thiscall
UAudioParameterConversionStatics::UAudioParameterConversionStatics
          (UAudioParameterConversionStatics *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAudioParameterConversionStatics__6B_;
  return this;
}

// UAudioParameterConversionStatics @ 147688350

UAudioParameterConversionStatics * __thiscall
UAudioParameterConversionStatics::UAudioParameterConversionStatics
          (UAudioParameterConversionStatics *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAudioParameterConversionStatics__6B_;
  return this;
}

// ~UAudioParameterConversionStatics @ 14768a730

void __thiscall
UAudioParameterConversionStatics::~UAudioParameterConversionStatics
          (UAudioParameterConversionStatics *this)

{
  *(undefined ***)this = &___7UBlueprintFunctionLibrary__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BooleanArrayToAudioParameter @ 1476954c0

FAudioParameter * __cdecl
UAudioParameterConversionStatics::BooleanArrayToAudioParameter
          (FAudioParameter *__return_storage_ptr__,FName param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  
  __return_storage_ptr__->ParamName = param_1;
  (__return_storage_ptr__->ArrayBoolParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ObjectParam).field0_0x0.DebugPtr = (UObject *)0x0;
  (__return_storage_ptr__->StringParam).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->StringParam).Data.ArrayNum = 0;
  (__return_storage_ptr__->StringParam).Data.ArrayMax = 0;
  (__return_storage_ptr__->ArrayFloatParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayFloatParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayFloatParam).ArrayMax = 0;
  __return_storage_ptr__->FloatParam = 0.0;
  __return_storage_ptr__->BoolParam = false;
  __return_storage_ptr__->IntParam = 0;
  (__return_storage_ptr__->ArrayBoolParam).AllocatorInstance.Data =
       (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayBoolParam).ArrayNum = param_2->ArrayNum;
  (__return_storage_ptr__->ArrayBoolParam).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  (__return_storage_ptr__->ArrayIntParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayIntParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayIntParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayObjectParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->ArrayObjectParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayObjectParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayStringParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->ArrayStringParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayStringParam).ArrayMax = 0;
  __return_storage_ptr__->ParamType = BooleanArray;
  (__return_storage_ptr__->TypeName).ComparisonIndex = 0;
  (__return_storage_ptr__->TypeName).Number = 0;
  (__return_storage_ptr__->ObjectProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ObjectProxies).ArrayNum = 0;
  (__return_storage_ptr__->ObjectProxies).ArrayMax = 0;
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// BooleanToAudioParameter @ 147695560

FAudioParameter * __cdecl
UAudioParameterConversionStatics::BooleanToAudioParameter
          (FAudioParameter *__return_storage_ptr__,FName param_1,bool param_2)

{
  __return_storage_ptr__->ParamName = param_1;
  __return_storage_ptr__->FloatParam = 0.0;
  __return_storage_ptr__->IntParam = 0;
  (__return_storage_ptr__->ObjectParam).field0_0x0.DebugPtr = (UObject *)0x0;
  (__return_storage_ptr__->StringParam).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->StringParam).Data.ArrayNum = 0;
  (__return_storage_ptr__->StringParam).Data.ArrayMax = 0;
  (__return_storage_ptr__->ArrayFloatParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayFloatParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayFloatParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayBoolParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayBoolParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayBoolParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayIntParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayIntParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayIntParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayObjectParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->ArrayObjectParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayObjectParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayStringParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->ArrayStringParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayStringParam).ArrayMax = 0;
  (__return_storage_ptr__->TypeName).ComparisonIndex = 0;
  (__return_storage_ptr__->TypeName).Number = 0;
  (__return_storage_ptr__->ObjectProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ObjectProxies).ArrayNum = 0;
  (__return_storage_ptr__->ObjectProxies).ArrayMax = 0;
  __return_storage_ptr__->BoolParam = param_2;
  __return_storage_ptr__->ParamType = Boolean;
  return __return_storage_ptr__;
}

// FloatArrayToAudioParameter @ 1476a9560

FAudioParameter * __cdecl
UAudioParameterConversionStatics::FloatArrayToAudioParameter
          (FAudioParameter *__return_storage_ptr__,FName param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  
  __return_storage_ptr__->ParamName = param_1;
  (__return_storage_ptr__->ArrayFloatParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ObjectParam).field0_0x0.DebugPtr = (UObject *)0x0;
  (__return_storage_ptr__->StringParam).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->StringParam).Data.ArrayNum = 0;
  (__return_storage_ptr__->StringParam).Data.ArrayMax = 0;
  __return_storage_ptr__->FloatParam = 0.0;
  __return_storage_ptr__->BoolParam = false;
  __return_storage_ptr__->IntParam = 0;
  (__return_storage_ptr__->ArrayFloatParam).AllocatorInstance.Data =
       (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayFloatParam).ArrayNum = param_2->ArrayNum;
  (__return_storage_ptr__->ArrayFloatParam).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  (__return_storage_ptr__->ArrayBoolParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayBoolParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayBoolParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayIntParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayIntParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayIntParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayObjectParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->ArrayObjectParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayObjectParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayStringParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->ArrayStringParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayStringParam).ArrayMax = 0;
  __return_storage_ptr__->ParamType = FloatArray;
  (__return_storage_ptr__->TypeName).ComparisonIndex = 0;
  (__return_storage_ptr__->TypeName).Number = 0;
  (__return_storage_ptr__->ObjectProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ObjectProxies).ArrayNum = 0;
  (__return_storage_ptr__->ObjectProxies).ArrayMax = 0;
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// FloatToAudioParameter @ 1476a9600

FAudioParameter * __cdecl
UAudioParameterConversionStatics::FloatToAudioParameter
          (FAudioParameter *__return_storage_ptr__,FName param_1,float param_2)

{
  __return_storage_ptr__->ParamName = param_1;
  __return_storage_ptr__->IntParam = 0;
  (__return_storage_ptr__->ObjectParam).field0_0x0.DebugPtr = (UObject *)0x0;
  (__return_storage_ptr__->StringParam).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->StringParam).Data.ArrayNum = 0;
  (__return_storage_ptr__->StringParam).Data.ArrayMax = 0;
  (__return_storage_ptr__->ArrayFloatParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayFloatParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayFloatParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayBoolParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayBoolParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayBoolParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayIntParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayIntParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayIntParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayObjectParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->ArrayObjectParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayObjectParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayStringParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->ArrayStringParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayStringParam).ArrayMax = 0;
  (__return_storage_ptr__->TypeName).ComparisonIndex = 0;
  (__return_storage_ptr__->TypeName).Number = 0;
  (__return_storage_ptr__->ObjectProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ObjectProxies).ArrayNum = 0;
  (__return_storage_ptr__->ObjectProxies).ArrayMax = 0;
  __return_storage_ptr__->FloatParam = param_2;
  __return_storage_ptr__->BoolParam = false;
  __return_storage_ptr__->ParamType = Float;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1476b3c50

UClass * __cdecl UAudioParameterConversionStatics::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioParameterConversionStatics.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AudioParameterConversionStatics",
               &Z_Registration_Info_UClass_UAudioParameterConversionStatics.InnerSingleton,
               StaticRegisterNativesUAudioParameterConversionStatics,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioParameterConversionStatics>,
               InternalVTableHelperCtorCaller<UAudioParameterConversionStatics>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioParameterConversionStatics.InnerSingleton;
}

// IntegerArrayToAudioParameter @ 1476ba660

FAudioParameter * __cdecl
UAudioParameterConversionStatics::IntegerArrayToAudioParameter
          (FAudioParameter *__return_storage_ptr__,FName param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  
  __return_storage_ptr__->ParamName = param_1;
  (__return_storage_ptr__->ArrayIntParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ObjectParam).field0_0x0.DebugPtr = (UObject *)0x0;
  (__return_storage_ptr__->StringParam).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->StringParam).Data.ArrayNum = 0;
  (__return_storage_ptr__->StringParam).Data.ArrayMax = 0;
  (__return_storage_ptr__->ArrayFloatParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayFloatParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayFloatParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayBoolParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayBoolParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayBoolParam).ArrayMax = 0;
  __return_storage_ptr__->FloatParam = 0.0;
  __return_storage_ptr__->BoolParam = false;
  __return_storage_ptr__->IntParam = 0;
  (__return_storage_ptr__->ArrayIntParam).AllocatorInstance.Data = (param_2->AllocatorInstance).Data
  ;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayIntParam).ArrayNum = param_2->ArrayNum;
  (__return_storage_ptr__->ArrayIntParam).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  (__return_storage_ptr__->ArrayObjectParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->ArrayObjectParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayObjectParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayStringParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->ArrayStringParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayStringParam).ArrayMax = 0;
  __return_storage_ptr__->ParamType = IntegerArray;
  (__return_storage_ptr__->TypeName).ComparisonIndex = 0;
  (__return_storage_ptr__->TypeName).Number = 0;
  (__return_storage_ptr__->ObjectProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ObjectProxies).ArrayNum = 0;
  (__return_storage_ptr__->ObjectProxies).ArrayMax = 0;
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// IntegerToAudioParameter @ 1476ba700

FAudioParameter * __cdecl
UAudioParameterConversionStatics::IntegerToAudioParameter
          (FAudioParameter *__return_storage_ptr__,FName param_1,int param_2)

{
  __return_storage_ptr__->ParamName = param_1;
  __return_storage_ptr__->FloatParam = 0.0;
  __return_storage_ptr__->BoolParam = false;
  (__return_storage_ptr__->ObjectParam).field0_0x0.DebugPtr = (UObject *)0x0;
  (__return_storage_ptr__->StringParam).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->StringParam).Data.ArrayNum = 0;
  (__return_storage_ptr__->StringParam).Data.ArrayMax = 0;
  (__return_storage_ptr__->ArrayFloatParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayFloatParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayFloatParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayBoolParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayBoolParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayBoolParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayIntParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayIntParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayIntParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayObjectParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->ArrayObjectParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayObjectParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayStringParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->ArrayStringParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayStringParam).ArrayMax = 0;
  (__return_storage_ptr__->TypeName).ComparisonIndex = 0;
  (__return_storage_ptr__->TypeName).Number = 0;
  (__return_storage_ptr__->ObjectProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ObjectProxies).ArrayNum = 0;
  (__return_storage_ptr__->ObjectProxies).ArrayMax = 0;
  __return_storage_ptr__->IntParam = param_2;
  __return_storage_ptr__->ParamType = Integer;
  return __return_storage_ptr__;
}

// ObjectArrayToAudioParameter @ 1476bd880

FAudioParameter * __cdecl
UAudioParameterConversionStatics::ObjectArrayToAudioParameter
          (FAudioParameter *__return_storage_ptr__,FName param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  
  FAudioParameter::FAudioParameter(__return_storage_ptr__,param_1,param_2);
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// ObjectToAudioParameter @ 1476bd8c0

FAudioParameter * __cdecl
UAudioParameterConversionStatics::ObjectToAudioParameter
          (FAudioParameter *__return_storage_ptr__,FName param_1,UObject *param_2)

{
  __return_storage_ptr__->ParamName = param_1;
  __return_storage_ptr__->FloatParam = 0.0;
  __return_storage_ptr__->BoolParam = false;
  __return_storage_ptr__->IntParam = 0;
  (__return_storage_ptr__->ObjectParam).field0_0x0.DebugPtr = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  (__return_storage_ptr__->StringParam).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->StringParam).Data.ArrayNum = 0;
  (__return_storage_ptr__->StringParam).Data.ArrayMax = 0;
  (__return_storage_ptr__->ArrayFloatParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayFloatParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayFloatParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayBoolParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayBoolParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayBoolParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayIntParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayIntParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayIntParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayObjectParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->ArrayObjectParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayObjectParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayStringParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->ArrayStringParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayStringParam).ArrayMax = 0;
  __return_storage_ptr__->ParamType = Object;
  (__return_storage_ptr__->TypeName).ComparisonIndex = 0;
  (__return_storage_ptr__->TypeName).Number = 0;
  (__return_storage_ptr__->ObjectProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ObjectProxies).ArrayNum = 0;
  (__return_storage_ptr__->ObjectProxies).ArrayMax = 0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUAudioParameterConversionStatics @ 1476ca1e0

void __cdecl
UAudioParameterConversionStatics::StaticRegisterNativesUAudioParameterConversionStatics(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UAudioParameterConversionStatics_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StringArrayToAudioParameter @ 1476ca650

FAudioParameter * __cdecl
UAudioParameterConversionStatics::StringArrayToAudioParameter
          (FAudioParameter *__return_storage_ptr__,FName param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  
  __return_storage_ptr__->ParamName = param_1;
  (__return_storage_ptr__->ArrayStringParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->ObjectParam).field0_0x0.DebugPtr = (UObject *)0x0;
  (__return_storage_ptr__->StringParam).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->StringParam).Data.ArrayNum = 0;
  (__return_storage_ptr__->StringParam).Data.ArrayMax = 0;
  (__return_storage_ptr__->ArrayFloatParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayFloatParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayFloatParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayBoolParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayBoolParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayBoolParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayIntParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayIntParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayIntParam).ArrayMax = 0;
  (__return_storage_ptr__->ArrayObjectParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->ArrayObjectParam).ArrayNum = 0;
  (__return_storage_ptr__->ArrayObjectParam).ArrayMax = 0;
  __return_storage_ptr__->FloatParam = 0.0;
  __return_storage_ptr__->BoolParam = false;
  __return_storage_ptr__->IntParam = 0;
  (__return_storage_ptr__->ArrayStringParam).AllocatorInstance.Data =
       (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ArrayStringParam).ArrayNum = param_2->ArrayNum;
  (__return_storage_ptr__->ArrayStringParam).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  __return_storage_ptr__->ParamType = StringArray;
  (__return_storage_ptr__->TypeName).ComparisonIndex = 0;
  (__return_storage_ptr__->TypeName).Number = 0;
  (__return_storage_ptr__->ObjectProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ObjectProxies).ArrayNum = 0;
  (__return_storage_ptr__->ObjectProxies).ArrayMax = 0;
  DestructItems<FString,int>((FString *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// StringToAudioParameter @ 1476ca710

FAudioParameter * __cdecl
UAudioParameterConversionStatics::StringToAudioParameter
          (FAudioParameter *__return_storage_ptr__,FName param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  
  FAudioParameter::FAudioParameter(__return_storage_ptr__,param_1,param_2);
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// execBooleanArrayToAudioParameter @ 1476cfc10

void __cdecl
UAudioParameterConversionStatics::execBooleanArrayToAudioParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  ForAnyElementType FVar2;
  size_t _Size;
  FName local_res10;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  FAudioParameter local_b8;
  
  FVar2.Data = (FScriptContainerElement *)0x0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_c8 = (void *)0x0;
  local_c0 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  _Src = local_c8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)(int)local_c0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0._0_4_ = (int)local_c0;
  local_b8.ArrayBoolParam.ArrayMax = 0;
  local_b8.ArrayBoolParam.ArrayNum = (int)local_c0;
  if ((int)local_c0 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_c0,0,&local_d8,(int)local_c0,(int *)((longlong)&local_d0 + 4));
    memcpy(local_d8.Data,_Src,_Size);
    FVar2.Data = local_d8.Data;
    local_b8.ArrayBoolParam.ArrayMax = local_d0._4_4_;
    local_b8.ArrayBoolParam.ArrayNum = (int)local_d0;
  }
  local_b8.ParamName = local_res10;
  local_b8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_b8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.FloatParam = 0.0;
  local_b8.BoolParam = false;
  local_b8.IntParam = 0;
  local_b8.StringParam.Data.ArrayNum = 0;
  local_b8.StringParam.Data.ArrayMax = 0;
  local_b8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayFloatParam.ArrayNum = 0;
  local_b8.ArrayFloatParam.ArrayMax = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_b8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayIntParam.ArrayNum = 0;
  local_b8.ArrayIntParam.ArrayMax = 0;
  local_b8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayObjectParam.ArrayNum = 0;
  local_b8.ArrayObjectParam.ArrayMax = 0;
  local_b8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayStringParam.ArrayNum = 0;
  local_b8.ArrayStringParam.ArrayMax = 0;
  local_b8.ParamType = BooleanArray;
  local_b8.TypeName.ComparisonIndex.Value = 0;
  local_b8.TypeName.Number = 0;
  local_b8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ObjectProxies.ArrayNum = 0;
  local_b8.ObjectProxies.ArrayMax = 0;
  local_b8.ArrayBoolParam.AllocatorInstance.Data = FVar2.Data;
  FAudioParameter::operator=(param_3,&local_b8);
  FVar2.Data = local_b8.ObjectProxies.AllocatorInstance.Data;
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data,
             local_b8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)FVar2.Data != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  FVar2.Data = local_b8.ArrayStringParam.AllocatorInstance.Data;
  DestructItems<FString,int>
            ((FString *)local_b8.ArrayStringParam.AllocatorInstance.Data,
             local_b8.ArrayStringParam.ArrayNum);
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (local_b8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_b8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.StringParam.Data.AllocatorInstance.Data);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  return;
}

// execBooleanToAudioParameter @ 1476cfe40

void __cdecl
UAudioParameterConversionStatics::execBooleanToAudioParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  int local_res10 [4];
  FName local_res20;
  FAudioParameter local_b8;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_b8.FloatParam = 0.0;
  local_b8.IntParam = 0;
  local_b8.StringParam.Data.ArrayNum = 0;
  local_b8.StringParam.Data.ArrayMax = 0;
  local_b8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.BoolParam = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_b8.ParamName = local_res20;
  local_b8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_b8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayFloatParam.ArrayNum = 0;
  local_b8.ArrayFloatParam.ArrayMax = 0;
  local_b8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayBoolParam.ArrayNum = 0;
  local_b8.ArrayBoolParam.ArrayMax = 0;
  local_b8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayIntParam.ArrayNum = 0;
  local_b8.ArrayIntParam.ArrayMax = 0;
  local_b8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayObjectParam.ArrayNum = 0;
  local_b8.ArrayObjectParam.ArrayMax = 0;
  local_b8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayStringParam.ArrayNum = 0;
  local_b8.ArrayStringParam.ArrayMax = 0;
  local_b8.ParamType = Boolean;
  local_b8.TypeName.ComparisonIndex.Value = 0;
  local_b8.TypeName.Number = 0;
  local_b8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ObjectProxies.ArrayNum = 0;
  local_b8.ObjectProxies.ArrayMax = 0;
  FAudioParameter::operator=(param_3,&local_b8);
  FVar2.Data = local_b8.ObjectProxies.AllocatorInstance.Data;
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data,
             local_b8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)FVar2.Data != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  FVar2.Data = local_b8.ArrayStringParam.AllocatorInstance.Data;
  DestructItems<FString,int>
            ((FString *)local_b8.ArrayStringParam.AllocatorInstance.Data,
             local_b8.ArrayStringParam.ArrayNum);
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (local_b8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_b8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// execFloatArrayToAudioParameter @ 1476d01e0

void __cdecl
UAudioParameterConversionStatics::execFloatArrayToAudioParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  ForAnyElementType FVar2;
  longlong lVar3;
  FName local_res10;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  FAudioParameter local_b8;
  
  FVar2.Data = (FScriptContainerElement *)0x0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_c8 = (void *)0x0;
  local_c0 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  _Src = local_c8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (longlong)(int)local_c0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0._0_4_ = (int)local_c0;
  local_b8.ArrayFloatParam.ArrayMax = 0;
  local_b8.ArrayFloatParam.ArrayNum = (int)local_c0;
  if ((int)local_c0 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_c0,0,&local_d8,(int)local_c0,(int *)((longlong)&local_d0 + 4));
    memcpy(local_d8.Data,_Src,lVar3 << 2);
    FVar2.Data = local_d8.Data;
    local_b8.ArrayFloatParam.ArrayMax = local_d0._4_4_;
    local_b8.ArrayFloatParam.ArrayNum = (int)local_d0;
  }
  local_b8.ParamName = local_res10;
  local_b8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_b8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.FloatParam = 0.0;
  local_b8.BoolParam = false;
  local_b8.IntParam = 0;
  local_b8.StringParam.Data.ArrayNum = 0;
  local_b8.StringParam.Data.ArrayMax = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_b8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayBoolParam.ArrayNum = 0;
  local_b8.ArrayBoolParam.ArrayMax = 0;
  local_b8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayIntParam.ArrayNum = 0;
  local_b8.ArrayIntParam.ArrayMax = 0;
  local_b8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayObjectParam.ArrayNum = 0;
  local_b8.ArrayObjectParam.ArrayMax = 0;
  local_b8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayStringParam.ArrayNum = 0;
  local_b8.ArrayStringParam.ArrayMax = 0;
  local_b8.ParamType = FloatArray;
  local_b8.TypeName.ComparisonIndex.Value = 0;
  local_b8.TypeName.Number = 0;
  local_b8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ObjectProxies.ArrayNum = 0;
  local_b8.ObjectProxies.ArrayMax = 0;
  local_b8.ArrayFloatParam.AllocatorInstance.Data = FVar2.Data;
  FAudioParameter::operator=(param_3,&local_b8);
  FVar2.Data = local_b8.ObjectProxies.AllocatorInstance.Data;
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data,
             local_b8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)FVar2.Data != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  FVar2.Data = local_b8.ArrayStringParam.AllocatorInstance.Data;
  DestructItems<FString,int>
            ((FString *)local_b8.ArrayStringParam.AllocatorInstance.Data,
             local_b8.ArrayStringParam.ArrayNum);
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (local_b8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_b8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.StringParam.Data.AllocatorInstance.Data);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  return;
}

// execFloatToAudioParameter @ 1476d0410

void __cdecl
UAudioParameterConversionStatics::execFloatToAudioParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  float local_res10 [4];
  FName local_res20;
  FAudioParameter local_b8;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_b8.FloatParam = local_res10[0];
  local_b8.BoolParam = false;
  local_b8.IntParam = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_b8.ParamName = local_res20;
  local_b8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_b8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.StringParam.Data.ArrayNum = 0;
  local_b8.StringParam.Data.ArrayMax = 0;
  local_b8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayFloatParam.ArrayNum = 0;
  local_b8.ArrayFloatParam.ArrayMax = 0;
  local_b8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayBoolParam.ArrayNum = 0;
  local_b8.ArrayBoolParam.ArrayMax = 0;
  local_b8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayIntParam.ArrayNum = 0;
  local_b8.ArrayIntParam.ArrayMax = 0;
  local_b8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayObjectParam.ArrayNum = 0;
  local_b8.ArrayObjectParam.ArrayMax = 0;
  local_b8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayStringParam.ArrayNum = 0;
  local_b8.ArrayStringParam.ArrayMax = 0;
  local_b8.ParamType = Float;
  local_b8.TypeName.ComparisonIndex.Value = 0;
  local_b8.TypeName.Number = 0;
  local_b8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ObjectProxies.ArrayNum = 0;
  local_b8.ObjectProxies.ArrayMax = 0;
  FAudioParameter::operator=(param_3,&local_b8);
  FVar2.Data = local_b8.ObjectProxies.AllocatorInstance.Data;
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data,
             local_b8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)FVar2.Data != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  FVar2.Data = local_b8.ArrayStringParam.AllocatorInstance.Data;
  DestructItems<FString,int>
            ((FString *)local_b8.ArrayStringParam.AllocatorInstance.Data,
             local_b8.ArrayStringParam.ArrayNum);
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (local_b8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_b8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// execIntegerArrayToAudioParameter @ 1476d0d40

void __cdecl
UAudioParameterConversionStatics::execIntegerArrayToAudioParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  ForAnyElementType FVar2;
  longlong lVar3;
  FName local_res10;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  FAudioParameter local_b8;
  
  FVar2.Data = (FScriptContainerElement *)0x0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_c8 = (void *)0x0;
  local_c0 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  _Src = local_c8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (longlong)(int)local_c0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0._0_4_ = (int)local_c0;
  local_b8.ArrayIntParam.ArrayMax = 0;
  local_b8.ArrayIntParam.ArrayNum = (int)local_c0;
  if ((int)local_c0 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_c0,0,&local_d8,(int)local_c0,(int *)((longlong)&local_d0 + 4));
    memcpy(local_d8.Data,_Src,lVar3 << 2);
    FVar2.Data = local_d8.Data;
    local_b8.ArrayIntParam.ArrayMax = local_d0._4_4_;
    local_b8.ArrayIntParam.ArrayNum = (int)local_d0;
  }
  local_b8.ParamName = local_res10;
  local_b8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_b8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.FloatParam = 0.0;
  local_b8.BoolParam = false;
  local_b8.IntParam = 0;
  local_b8.StringParam.Data.ArrayNum = 0;
  local_b8.StringParam.Data.ArrayMax = 0;
  local_b8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayFloatParam.ArrayNum = 0;
  local_b8.ArrayFloatParam.ArrayMax = 0;
  local_b8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayBoolParam.ArrayNum = 0;
  local_b8.ArrayBoolParam.ArrayMax = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_b8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayObjectParam.ArrayNum = 0;
  local_b8.ArrayObjectParam.ArrayMax = 0;
  local_b8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayStringParam.ArrayNum = 0;
  local_b8.ArrayStringParam.ArrayMax = 0;
  local_b8.ParamType = IntegerArray;
  local_b8.TypeName.ComparisonIndex.Value = 0;
  local_b8.TypeName.Number = 0;
  local_b8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ObjectProxies.ArrayNum = 0;
  local_b8.ObjectProxies.ArrayMax = 0;
  local_b8.ArrayIntParam.AllocatorInstance.Data = FVar2.Data;
  FAudioParameter::operator=(param_3,&local_b8);
  FVar2.Data = local_b8.ObjectProxies.AllocatorInstance.Data;
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data,
             local_b8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)FVar2.Data != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  FVar2.Data = local_b8.ArrayStringParam.AllocatorInstance.Data;
  DestructItems<FString,int>
            ((FString *)local_b8.ArrayStringParam.AllocatorInstance.Data,
             local_b8.ArrayStringParam.ArrayNum);
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (local_b8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_b8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.StringParam.Data.AllocatorInstance.Data);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  return;
}

// execIntegerToAudioParameter @ 1476d0f70

void __cdecl
UAudioParameterConversionStatics::execIntegerToAudioParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  int local_res10 [4];
  FName local_res20;
  FAudioParameter local_b8;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_b8.FloatParam = 0.0;
  local_b8.BoolParam = false;
  local_b8.StringParam.Data.ArrayNum = 0;
  local_b8.StringParam.Data.ArrayMax = 0;
  local_b8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ParamName = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_b8.IntParam = local_res10[0];
  local_b8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_b8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayFloatParam.ArrayNum = 0;
  local_b8.ArrayFloatParam.ArrayMax = 0;
  local_b8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayBoolParam.ArrayNum = 0;
  local_b8.ArrayBoolParam.ArrayMax = 0;
  local_b8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayIntParam.ArrayNum = 0;
  local_b8.ArrayIntParam.ArrayMax = 0;
  local_b8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayObjectParam.ArrayNum = 0;
  local_b8.ArrayObjectParam.ArrayMax = 0;
  local_b8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayStringParam.ArrayNum = 0;
  local_b8.ArrayStringParam.ArrayMax = 0;
  local_b8.ParamType = Integer;
  local_b8.TypeName.ComparisonIndex.Value = 0;
  local_b8.TypeName.Number = 0;
  local_b8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ObjectProxies.ArrayNum = 0;
  local_b8.ObjectProxies.ArrayMax = 0;
  FAudioParameter::operator=(param_3,&local_b8);
  FVar2.Data = local_b8.ObjectProxies.AllocatorInstance.Data;
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data,
             local_b8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)FVar2.Data != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  FVar2.Data = local_b8.ArrayStringParam.AllocatorInstance.Data;
  DestructItems<FString,int>
            ((FString *)local_b8.ArrayStringParam.AllocatorInstance.Data,
             local_b8.ArrayStringParam.ArrayNum);
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (local_b8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_b8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// execObjectArrayToAudioParameter @ 1476d2ca0

void __cdecl
UAudioParameterConversionStatics::execObjectArrayToAudioParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  FName local_res10;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_d8;
  void *local_c8;
  undefined8 local_c0;
  FAudioParameter local_b8;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_c8 = (void *)0x0;
  local_c0 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  _Src = local_c8;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_c0;
  local_d8.ArrayNum = (int)local_c0;
  if ((int)local_c0 == 0) {
    local_d8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_c0,0,&local_d8.AllocatorInstance,(int)local_c0,&local_d8.ArrayMax);
    memcpy(local_d8.AllocatorInstance.Data,_Src,lVar2 << 3);
  }
  FAudioParameter::FAudioParameter(&local_b8,local_res10,&local_d8);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  FAudioParameter::operator=(param_3,&local_b8);
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data,
             local_b8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_b8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_b8.ArrayStringParam.AllocatorInstance.Data,
             local_b8.ArrayStringParam.ArrayNum);
  if (local_b8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_b8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.StringParam.Data.AllocatorInstance.Data);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  return;
}

// execObjectToAudioParameter @ 1476d2e80

void __cdecl
UAudioParameterConversionStatics::execObjectToAudioParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  FName local_res10 [2];
  UObject *local_res20;
  FAudioParameter local_b8;
  
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_b8.FloatParam = 0.0;
  local_b8.BoolParam = false;
  local_b8.IntParam = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_b8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)local_res20;
  local_b8.ParamName = local_res10[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  local_b8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.StringParam.Data.ArrayNum = 0;
  local_b8.StringParam.Data.ArrayMax = 0;
  local_b8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayFloatParam.ArrayNum = 0;
  local_b8.ArrayFloatParam.ArrayMax = 0;
  local_b8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayBoolParam.ArrayNum = 0;
  local_b8.ArrayBoolParam.ArrayMax = 0;
  local_b8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayIntParam.ArrayNum = 0;
  local_b8.ArrayIntParam.ArrayMax = 0;
  local_b8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayObjectParam.ArrayNum = 0;
  local_b8.ArrayObjectParam.ArrayMax = 0;
  local_b8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayStringParam.ArrayNum = 0;
  local_b8.ArrayStringParam.ArrayMax = 0;
  local_b8.ParamType = Object;
  local_b8.TypeName.ComparisonIndex.Value = 0;
  local_b8.TypeName.Number = 0;
  local_b8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ObjectProxies.ArrayNum = 0;
  local_b8.ObjectProxies.ArrayMax = 0;
  FAudioParameter::operator=(param_3,&local_b8);
  FVar2.Data = local_b8.ObjectProxies.AllocatorInstance.Data;
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data,
             local_b8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)FVar2.Data != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  FVar2.Data = local_b8.ArrayStringParam.AllocatorInstance.Data;
  DestructItems<FString,int>
            ((FString *)local_b8.ArrayStringParam.AllocatorInstance.Data,
             local_b8.ArrayStringParam.ArrayNum);
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (local_b8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_b8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// execStringArrayToAudioParameter @ 1476d67f0

void __cdecl
UAudioParameterConversionStatics::execStringArrayToAudioParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  int iVar3;
  ForAnyElementType FVar4;
  FName local_res10;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  FString *local_c8;
  undefined8 local_c0;
  FAudioParameter local_b8;
  
  FVar4.Data = (FScriptContainerElement *)0x0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_c8 = (FString *)0x0;
  local_c0 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  pFVar2 = local_c8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar3 = (int)local_c0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0._0_4_ = (int)local_c0;
  local_b8.ArrayStringParam.ArrayMax = 0;
  local_b8.ArrayStringParam.ArrayNum = (int)local_c0;
  if ((int)local_c0 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_c0,0,&local_d8,(int)local_c0,(int *)((longlong)&local_d0 + 4));
    ConstructItems<FString,FString,int>(local_d8.Data,pFVar2,iVar3);
    FVar4.Data = local_d8.Data;
    local_b8.ArrayStringParam.ArrayNum = (int)local_d0;
    local_b8.ArrayStringParam.ArrayMax = local_d0._4_4_;
  }
  local_b8.ParamName = local_res10;
  local_b8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_b8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.FloatParam = 0.0;
  local_b8.BoolParam = false;
  local_b8.IntParam = 0;
  local_b8.StringParam.Data.ArrayNum = 0;
  local_b8.StringParam.Data.ArrayMax = 0;
  local_b8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayFloatParam.ArrayNum = 0;
  local_b8.ArrayFloatParam.ArrayMax = 0;
  local_b8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayBoolParam.ArrayNum = 0;
  local_b8.ArrayBoolParam.ArrayMax = 0;
  local_b8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayIntParam.ArrayNum = 0;
  local_b8.ArrayIntParam.ArrayMax = 0;
  local_b8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayObjectParam.ArrayNum = 0;
  local_b8.ArrayObjectParam.ArrayMax = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_b8.ParamType = StringArray;
  local_b8.TypeName.ComparisonIndex.Value = 0;
  local_b8.TypeName.Number = 0;
  local_b8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ObjectProxies.ArrayNum = 0;
  local_b8.ObjectProxies.ArrayMax = 0;
  local_b8.ArrayStringParam.AllocatorInstance.Data = FVar4.Data;
  DestructItems<FString,int>((FString *)0x0,0);
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  FAudioParameter::operator=(param_3,&local_b8);
  FVar4.Data = local_b8.ObjectProxies.AllocatorInstance.Data;
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data,
             local_b8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)FVar4.Data != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  FVar4.Data = local_b8.ArrayStringParam.AllocatorInstance.Data;
  DestructItems<FString,int>
            ((FString *)local_b8.ArrayStringParam.AllocatorInstance.Data,
             local_b8.ArrayStringParam.ArrayNum);
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  if (local_b8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_b8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.StringParam.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>(local_c8,(int)local_c0);
  if (local_c8 != (FString *)0x0) {
    FMemory::Free(local_c8);
  }
  return;
}

// execStringToAudioParameter @ 1476d6a40

void __cdecl
UAudioParameterConversionStatics::execStringToAudioParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  FName local_res10;
  FString local_d8;
  void *local_c8;
  undefined8 local_c0;
  FAudioParameter local_b8;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_c8 = (void *)0x0;
  local_c0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  _Src = local_c8;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_c0;
  local_d8.Data.ArrayNum = (int)local_c0;
  if ((int)local_c0 == 0) {
    local_d8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_c0,0,(ForAnyElementType *)&local_d8,(int)local_c0,
               &local_d8.Data.ArrayMax);
    memcpy(local_d8.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  local_b8.ParamName = local_res10;
  local_b8.FloatParam = 0.0;
  local_b8.BoolParam = false;
  local_b8.IntParam = 0;
  local_b8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  ::FString::FString(&local_b8.StringParam,&local_d8);
  local_b8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayFloatParam.ArrayNum = 0;
  local_b8.ArrayFloatParam.ArrayMax = 0;
  local_b8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayBoolParam.ArrayNum = 0;
  local_b8.ArrayBoolParam.ArrayMax = 0;
  local_b8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayIntParam.ArrayNum = 0;
  local_b8.ArrayIntParam.ArrayMax = 0;
  local_b8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayObjectParam.ArrayNum = 0;
  local_b8.ArrayObjectParam.ArrayMax = 0;
  local_b8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayStringParam.ArrayNum = 0;
  local_b8.ArrayStringParam.ArrayMax = 0;
  local_b8.ParamType = String;
  local_b8.TypeName.ComparisonIndex.Value = 0;
  local_b8.TypeName.Number = 0;
  local_b8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ObjectProxies.ArrayNum = 0;
  local_b8.ObjectProxies.ArrayMax = 0;
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  FAudioParameter::operator=(param_3,&local_b8);
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data,
             local_b8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_b8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_b8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_b8.ArrayStringParam.AllocatorInstance.Data,
             local_b8.ArrayStringParam.ArrayNum);
  if (local_b8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_b8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_b8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.StringParam.Data.AllocatorInstance.Data);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  return;
}

