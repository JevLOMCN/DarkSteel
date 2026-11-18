// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 96

// StaticClass @ 14b2f3630

UClass * __cdecl UMetasoundFrontendLiteralBlueprintAccess::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetasoundFrontendLiteralBlueprintAccess.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetasoundFrontendLiteralBlueprintAccess",
               &Z_Registration_Info_UClass_UMetasoundFrontendLiteralBlueprintAccess.InnerSingleton,
               StaticRegisterNativesUMetasoundFrontendLiteralBlueprintAccess,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMetasoundFrontendLiteralBlueprintAccess>,
               InternalVTableHelperCtorCaller<UMetasoundFrontendLiteralBlueprintAccess>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetasoundFrontendLiteralBlueprintAccess.InnerSingleton;
}

// UMetasoundFrontendLiteralBlueprintAccess @ 14b34d0c0

UMetasoundFrontendLiteralBlueprintAccess * __thiscall
UMetasoundFrontendLiteralBlueprintAccess::UMetasoundFrontendLiteralBlueprintAccess
          (UMetasoundFrontendLiteralBlueprintAccess *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMetasoundFrontendLiteralBlueprintAccess__6B_;
  return this;
}

// UMetasoundFrontendLiteralBlueprintAccess @ 14b34d0f0

UMetasoundFrontendLiteralBlueprintAccess * __thiscall
UMetasoundFrontendLiteralBlueprintAccess::UMetasoundFrontendLiteralBlueprintAccess
          (UMetasoundFrontendLiteralBlueprintAccess *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMetasoundFrontendLiteralBlueprintAccess__6B_;
  return this;
}

// ~UMetasoundFrontendLiteralBlueprintAccess @ 14b3529b0

void __thiscall
UMetasoundFrontendLiteralBlueprintAccess::~UMetasoundFrontendLiteralBlueprintAccess
          (UMetasoundFrontendLiteralBlueprintAccess *this)

{
  *(undefined ***)this = &___7UMetasoundFrontendLiteralBlueprintAccess__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// Conv_MetaSoundLiteralToString @ 14b36a460

FString * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::Conv_MetaSoundLiteralToString
          (FString *__return_storage_ptr__,FMetasoundFrontendLiteral *param_1)

{
  FMetasoundFrontendLiteral::ToString(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// CreateBoolArrayMetaSoundLiteral @ 14b36d050

FMetasoundFrontendLiteral * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::CreateBoolArrayMetaSoundLiteral
          (FMetasoundFrontendLiteral *__return_storage_ptr__,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_1)

{
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateBoolMetaSoundLiteral @ 14b36d120

FMetasoundFrontendLiteral * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::CreateBoolMetaSoundLiteral
          (FMetasoundFrontendLiteral *__return_storage_ptr__,bool param_1)

{
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateFloatArrayMetaSoundLiteral @ 14b373970

FMetasoundFrontendLiteral * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::CreateFloatArrayMetaSoundLiteral
          (FMetasoundFrontendLiteral *__return_storage_ptr__,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateFloatMetaSoundLiteral @ 14b373a40

FMetasoundFrontendLiteral * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::CreateFloatMetaSoundLiteral
          (FMetasoundFrontendLiteral *__return_storage_ptr__,float param_1)

{
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateIntArrayMetaSoundLiteral @ 14b373e30

FMetasoundFrontendLiteral * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::CreateIntArrayMetaSoundLiteral
          (FMetasoundFrontendLiteral *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateIntMetaSoundLiteral @ 14b373f00

FMetasoundFrontendLiteral * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::CreateIntMetaSoundLiteral
          (FMetasoundFrontendLiteral *__return_storage_ptr__,int param_1)

{
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateMetaSoundLiteralFromAudioParameter @ 14b3749c0

FMetasoundFrontendLiteral * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::CreateMetaSoundLiteralFromAudioParameter
          (FMetasoundFrontendLiteral *__return_storage_ptr__,FAudioParameter *param_1)

{
  FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateMetaSoundLiteralFromBoolean @ 14b3749e0

FMetasoundFrontendLiteral * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::CreateMetaSoundLiteralFromBoolean
          (FMetasoundFrontendLiteral *__return_storage_ptr__,bool param_1)

{
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateMetaSoundLiteralFromBooleanArray @ 14b374a30

FMetasoundFrontendLiteral * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::CreateMetaSoundLiteralFromBooleanArray
          (FMetasoundFrontendLiteral *__return_storage_ptr__,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_1)

{
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateMetaSoundLiteralFromFloat @ 14b374a80

FMetasoundFrontendLiteral * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::CreateMetaSoundLiteralFromFloat
          (FMetasoundFrontendLiteral *__return_storage_ptr__,float param_1)

{
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateMetaSoundLiteralFromFloatArray @ 14b374ad0

FMetasoundFrontendLiteral * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::CreateMetaSoundLiteralFromFloatArray
          (FMetasoundFrontendLiteral *__return_storage_ptr__,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateMetaSoundLiteralFromInteger @ 14b374b20

FMetasoundFrontendLiteral * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::CreateMetaSoundLiteralFromInteger
          (FMetasoundFrontendLiteral *__return_storage_ptr__,int param_1)

{
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateMetaSoundLiteralFromIntegerArray @ 14b374b70

FMetasoundFrontendLiteral * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::CreateMetaSoundLiteralFromIntegerArray
          (FMetasoundFrontendLiteral *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateMetaSoundLiteralFromObject @ 14b374bc0

FMetasoundFrontendLiteral * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::CreateMetaSoundLiteralFromObject
          (FMetasoundFrontendLiteral *__return_storage_ptr__,UObject *param_1)

{
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateMetaSoundLiteralFromObjectArray @ 14b374c10

FMetasoundFrontendLiteral * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::CreateMetaSoundLiteralFromObjectArray
          (FMetasoundFrontendLiteral *__return_storage_ptr__,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateMetaSoundLiteralFromParam @ 14b374c90

FMetasoundFrontendLiteral * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::CreateMetaSoundLiteralFromParam
          (FMetasoundFrontendLiteral *__return_storage_ptr__,FAudioParameter *param_1)

{
  FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateMetaSoundLiteralFromString @ 14b374cb0

FMetasoundFrontendLiteral * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::CreateMetaSoundLiteralFromString
          (FMetasoundFrontendLiteral *__return_storage_ptr__,FString *param_1)

{
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateMetaSoundLiteralFromStringArray @ 14b374d00

FMetasoundFrontendLiteral * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::CreateMetaSoundLiteralFromStringArray
          (FMetasoundFrontendLiteral *__return_storage_ptr__,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateObjectArrayMetaSoundLiteral @ 14b37b7e0

FMetasoundFrontendLiteral * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::CreateObjectArrayMetaSoundLiteral
          (FMetasoundFrontendLiteral *__return_storage_ptr__,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateObjectMetaSoundLiteral @ 14b37b890

FMetasoundFrontendLiteral * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::CreateObjectMetaSoundLiteral
          (FMetasoundFrontendLiteral *__return_storage_ptr__,UObject *param_1)

{
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateStringArrayMetaSoundLiteral @ 14b38e940

FMetasoundFrontendLiteral * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::CreateStringArrayMetaSoundLiteral
          (FMetasoundFrontendLiteral *__return_storage_ptr__,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateStringMetaSoundLiteral @ 14b38ea10

FMetasoundFrontendLiteral * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::CreateStringMetaSoundLiteral
          (FMetasoundFrontendLiteral *__return_storage_ptr__,FString *param_1)

{
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// EqualEqual_MetaSoundLiteral @ 14b398bc0

bool __cdecl
UMetasoundFrontendLiteralBlueprintAccess::EqualEqual_MetaSoundLiteral
          (FMetasoundFrontendLiteral *param_1,FMetasoundFrontendLiteral *param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_2->Type != param_1->Type) {
    return false;
  }
  switch(param_1->Type) {
  case None:
  case NoneArray:
    return param_1->AsNumDefault == param_2->AsNumDefault;
  case Boolean:
  case BooleanArray:
    iVar2 = (param_1->AsBoolean).ArrayNum;
    if (iVar2 == (param_2->AsBoolean).ArrayNum) {
      if (iVar2 == 0) {
        return true;
      }
      iVar2 = memcmp((param_1->AsBoolean).AllocatorInstance.Data,
                     (param_2->AsBoolean).AllocatorInstance.Data,(longlong)iVar2);
      if (iVar2 == 0) {
        return true;
      }
    }
    break;
  case Integer:
  case IntegerArray:
    iVar2 = (param_1->AsInteger).ArrayNum;
    if (iVar2 == (param_2->AsInteger).ArrayNum) {
      if (iVar2 == 0) {
        return true;
      }
      iVar2 = memcmp((param_1->AsInteger).AllocatorInstance.Data,
                     (param_2->AsInteger).AllocatorInstance.Data,(longlong)iVar2 << 2);
      if (iVar2 == 0) {
        return true;
      }
    }
    break;
  case Float:
  case FloatArray:
    iVar2 = (param_1->AsFloat).ArrayNum;
    if (iVar2 == (param_2->AsFloat).ArrayNum) {
      if (iVar2 == 0) {
        return true;
      }
      iVar2 = memcmp((param_1->AsFloat).AllocatorInstance.Data,
                     (param_2->AsFloat).AllocatorInstance.Data,(longlong)iVar2 << 2);
      if (iVar2 == 0) {
        return true;
      }
    }
    break;
  case String:
  case StringArray:
    iVar2 = (param_1->AsString).ArrayNum;
    if (iVar2 != (param_2->AsString).ArrayNum) {
      return false;
    }
    bVar1 = CompareItems<FString,int>
                      ((FString *)(param_1->AsString).AllocatorInstance.Data,
                       (FString *)(param_2->AsString).AllocatorInstance.Data,iVar2);
    goto LAB_14ae3f2c4;
  case UObject:
  case UObjectArray:
    iVar2 = (param_1->AsUObject).ArrayNum;
    if (iVar2 != (param_2->AsUObject).ArrayNum) {
      return false;
    }
    bVar1 = CompareItems<TObjectPtr<UObject>,int>
                      ((TObjectPtr<UObject> *)(param_1->AsUObject).AllocatorInstance.Data,
                       (TObjectPtr<UObject> *)(param_2->AsUObject).AllocatorInstance.Data,iVar2);
LAB_14ae3f2c4:
    if (bVar1 != false) {
switchD_14ae3f1ec_caseD_c:
      return true;
    }
    break;
  default:
    goto switchD_14ae3f1ec_caseD_c;
  }
  return false;
}

// GetBoolArrayValueFromLiteral @ 14b3ae1e0

TArray<bool,TSizedDefaultAllocator<32>_> * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::GetBoolArrayValueFromLiteral
          (TArray<bool,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMetasoundFrontendLiteral *param_1,EMetaSoundBuilderResult *param_2)

{
  bool bVar1;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  bVar1 = FMetasoundFrontendLiteral::TryGet(param_1,__return_storage_ptr__);
  *param_2 = !bVar1;
  return __return_storage_ptr__;
}

// GetBoolValueFromLiteral @ 14b3ae220

bool __cdecl
UMetasoundFrontendLiteralBlueprintAccess::GetBoolValueFromLiteral
          (FMetasoundFrontendLiteral *param_1,EMetaSoundBuilderResult *param_2)

{
  bool bVar1;
  bool local_res10 [24];
  
  bVar1 = FMetasoundFrontendLiteral::TryGet(param_1,local_res10);
  *param_2 = !bVar1;
  return local_res10[0];
}

// GetFloatArrayValueFromLiteral @ 14b3b41c0

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::GetFloatArrayValueFromLiteral
          (TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMetasoundFrontendLiteral *param_1,EMetaSoundBuilderResult *param_2)

{
  bool bVar1;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  bVar1 = FMetasoundFrontendLiteral::TryGet(param_1,__return_storage_ptr__);
  *param_2 = !bVar1;
  return __return_storage_ptr__;
}

// GetFloatValueFromLiteral @ 14b3b4200

float __cdecl
UMetasoundFrontendLiteralBlueprintAccess::GetFloatValueFromLiteral
          (FMetasoundFrontendLiteral *param_1,EMetaSoundBuilderResult *param_2)

{
  bool bVar1;
  float local_res10 [6];
  
  bVar1 = FMetasoundFrontendLiteral::TryGet(param_1,local_res10);
  *param_2 = !bVar1;
  return local_res10[0];
}

// GetIntArrayValueFromLiteral @ 14b3b4ea0

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::GetIntArrayValueFromLiteral
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMetasoundFrontendLiteral *param_1,EMetaSoundBuilderResult *param_2)

{
  bool bVar1;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  bVar1 = FMetasoundFrontendLiteral::TryGet(param_1,__return_storage_ptr__);
  *param_2 = !bVar1;
  return __return_storage_ptr__;
}

// GetIntValueFromLiteral @ 14b3b4ee0

int __cdecl
UMetasoundFrontendLiteralBlueprintAccess::GetIntValueFromLiteral
          (FMetasoundFrontendLiteral *param_1,EMetaSoundBuilderResult *param_2)

{
  bool bVar1;
  int local_res10 [6];
  
  bVar1 = FMetasoundFrontendLiteral::TryGet(param_1,local_res10);
  *param_2 = !bVar1;
  return local_res10[0];
}

// GetMetaSoundLiteralAsBool @ 14b3b68f0

bool __cdecl
UMetasoundFrontendLiteralBlueprintAccess::GetMetaSoundLiteralAsBool
          (FMetasoundFrontendLiteral *param_1)

{
  bool bVar1;
  bool local_res10 [24];
  
  local_res10[0] = false;
  bVar1 = MetasoundFrontendLiteralBlueprintAccessPrivate::GetPODValueFromMetaSoundLiteral<bool>
                    (param_1,Boolean,local_res10);
  return bVar1;
}

// GetMetaSoundLiteralAsBoolArray @ 14b3b6910

TArray<bool,TSizedDefaultAllocator<32>_> * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::GetMetaSoundLiteralAsBoolArray
          (TArray<bool,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMetasoundFrontendLiteral *param_1)

{
  TArray<bool,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  MetasoundFrontendLiteralBlueprintAccessPrivate::
  GetPODValueFromMetaSoundLiteral<TArray<bool,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,param_1,BooleanArray,&local_18);
  return __return_storage_ptr__;
}

// GetMetaSoundLiteralAsFloat @ 14b3b6950

float __cdecl
UMetasoundFrontendLiteralBlueprintAccess::GetMetaSoundLiteralAsFloat
          (FMetasoundFrontendLiteral *param_1)

{
  float fVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  fVar1 = MetasoundFrontendLiteralBlueprintAccessPrivate::GetPODValueFromMetaSoundLiteral<float>
                    (param_1,Float,local_res10);
  return fVar1;
}

// GetMetaSoundLiteralAsFloatArray @ 14b3b6980

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::GetMetaSoundLiteralAsFloatArray
          (TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMetasoundFrontendLiteral *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  MetasoundFrontendLiteralBlueprintAccessPrivate::
  GetPODValueFromMetaSoundLiteral<TArray<float,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,param_1,FloatArray,&local_18);
  return __return_storage_ptr__;
}

// GetMetaSoundLiteralAsInteger @ 14b3b69c0

int __cdecl
UMetasoundFrontendLiteralBlueprintAccess::GetMetaSoundLiteralAsInteger
          (FMetasoundFrontendLiteral *param_1)

{
  int iVar1;
  int local_res10 [6];
  
  local_res10[0] = 0;
  iVar1 = MetasoundFrontendLiteralBlueprintAccessPrivate::GetPODValueFromMetaSoundLiteral<int>
                    (param_1,Integer,local_res10);
  return iVar1;
}

// GetMetaSoundLiteralAsIntegerArray @ 14b3b69f0

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::GetMetaSoundLiteralAsIntegerArray
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMetasoundFrontendLiteral *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  MetasoundFrontendLiteralBlueprintAccessPrivate::
  GetPODValueFromMetaSoundLiteral<TArray<int,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,param_1,IntegerArray,&local_18);
  return __return_storage_ptr__;
}

// GetMetaSoundLiteralAsObject @ 14b3b6a30

UObject * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::GetMetaSoundLiteralAsObject
          (FMetasoundFrontendLiteral *param_1)

{
  UObject *pUVar1;
  UObject *local_res10 [3];
  
  local_res10[0] = (UObject *)0x0;
  pUVar1 = MetasoundFrontendLiteralBlueprintAccessPrivate::
           GetPODValueFromMetaSoundLiteral<UObject_*>(param_1,UObject,local_res10);
  return pUVar1;
}

// GetMetaSoundLiteralAsObjectArray @ 14b3b6a60

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::GetMetaSoundLiteralAsObjectArray
          (TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMetasoundFrontendLiteral *param_1)

{
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  MetasoundFrontendLiteralBlueprintAccessPrivate::
  GetPODValueFromMetaSoundLiteral<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,param_1,UObjectArray,&local_18);
  return __return_storage_ptr__;
}

// GetMetaSoundLiteralAsString @ 14b3b6aa0

FString * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::GetMetaSoundLiteralAsString
          (FString *__return_storage_ptr__,FMetasoundFrontendLiteral *param_1)

{
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  MetasoundFrontendLiteralBlueprintAccessPrivate::GetPODValueFromMetaSoundLiteral<FString>
            (__return_storage_ptr__,param_1,String,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetMetaSoundLiteralAsStringArray @ 14b3b6ae0

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::GetMetaSoundLiteralAsStringArray
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMetasoundFrontendLiteral *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  MetasoundFrontendLiteralBlueprintAccessPrivate::
  GetPODValueFromMetaSoundLiteral<TArray<FString,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,param_1,StringArray,&local_18);
  DestructItems<FString,int>((FString *)0x0,0);
  return __return_storage_ptr__;
}

// GetObjectArrayValueFromLiteral @ 14b3be130

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::GetObjectArrayValueFromLiteral
          (TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMetasoundFrontendLiteral *param_1,EMetaSoundBuilderResult *param_2)

{
  bool bVar1;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  bVar1 = FMetasoundFrontendLiteral::TryGet(param_1,__return_storage_ptr__);
  *param_2 = !bVar1;
  return __return_storage_ptr__;
}

// GetObjectValueFromLiteral @ 14b3be460

UObject * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::GetObjectValueFromLiteral
          (FMetasoundFrontendLiteral *param_1,EMetaSoundBuilderResult *param_2)

{
  bool bVar1;
  UObject *local_res10 [3];
  
  bVar1 = FMetasoundFrontendLiteral::TryGet(param_1,local_res10);
  *param_2 = !bVar1;
  return local_res10[0];
}

// GetPrivateStaticClass @ 14b3bf940

UClass * __cdecl UMetasoundFrontendLiteralBlueprintAccess::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetasoundFrontendLiteralBlueprintAccess.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetasoundFrontendLiteralBlueprintAccess",
               &Z_Registration_Info_UClass_UMetasoundFrontendLiteralBlueprintAccess.InnerSingleton,
               StaticRegisterNativesUMetasoundFrontendLiteralBlueprintAccess,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMetasoundFrontendLiteralBlueprintAccess>,
               InternalVTableHelperCtorCaller<UMetasoundFrontendLiteralBlueprintAccess>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetasoundFrontendLiteralBlueprintAccess.InnerSingleton;
}

// GetStringArrayValueFromLiteral @ 14b3c0bf0

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::GetStringArrayValueFromLiteral
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMetasoundFrontendLiteral *param_1,EMetaSoundBuilderResult *param_2)

{
  bool bVar1;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  bVar1 = FMetasoundFrontendLiteral::TryGet(param_1,__return_storage_ptr__);
  *param_2 = !bVar1;
  return __return_storage_ptr__;
}

// GetStringValueFromLiteral @ 14b3c0c30

FString * __cdecl
UMetasoundFrontendLiteralBlueprintAccess::GetStringValueFromLiteral
          (FString *__return_storage_ptr__,FMetasoundFrontendLiteral *param_1,
          EMetaSoundBuilderResult *param_2)

{
  bool bVar1;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  bVar1 = FMetasoundFrontendLiteral::TryGet(param_1,__return_storage_ptr__);
  *param_2 = !bVar1;
  return __return_storage_ptr__;
}

// GetType @ 14b3c0ec0

EMetasoundFrontendLiteralType __cdecl
UMetasoundFrontendLiteralBlueprintAccess::GetType(FMetasoundFrontendLiteral *param_1)

{
  return param_1->Type;
}

// StaticRegisterNativesUMetasoundFrontendLiteralBlueprintAccess @ 14b3e15f0

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::
StaticRegisterNativesUMetasoundFrontendLiteralBlueprintAccess(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x2d;
  local_18.DataPtr = Z_Construct_UClass_UMetasoundFrontendLiteralBlueprintAccess_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConv_MetaSoundLiteralToString @ 14b3ead20

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execConv_MetaSoundLiteralToString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMetasoundFrontendLiteral *this;
  FString local_78;
  FMetasoundFrontendLiteral local_68;
  
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  this = &local_68;
  if ((FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress !=
      (FMetasoundFrontendLiteral *)0x0) {
    this = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FMetasoundFrontendLiteral::ToString(this,&local_78);
  if (param_3 != &local_78) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_78.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_78.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execCreateBoolArrayMetaSoundLiteral @ 14b3eb260

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execCreateBoolArrayMetaSoundLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> local_78;
  FMetasoundFrontendLiteral local_68;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  pTVar2 = &local_78;
  if ((TArray<bool,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<bool,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_68,pTVar2);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// execCreateBoolMetaSoundLiteral @ 14b3eb540

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execCreateBoolMetaSoundLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  FMetasoundFrontendLiteral local_68;
  
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
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_68,local_res10[0] != 0);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execCreateFloatArrayMetaSoundLiteral @ 14b3eb830

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execCreateFloatArrayMetaSoundLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> local_78;
  FMetasoundFrontendLiteral local_68;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  pTVar2 = &local_78;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_68,pTVar2);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// execCreateFloatMetaSoundLiteral @ 14b3ebb20

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execCreateFloatMetaSoundLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  FMetasoundFrontendLiteral local_68;
  
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
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_68,local_res10[0]);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execCreateIntArrayMetaSoundLiteral @ 14b3ebe70

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execCreateIntArrayMetaSoundLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  FMetasoundFrontendLiteral local_68;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  pTVar2 = &local_78;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_68,pTVar2);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// execCreateIntMetaSoundLiteral @ 14b3ec150

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execCreateIntMetaSoundLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  FMetasoundFrontendLiteral local_68;
  
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
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_68,local_res10[0]);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execCreateMetaSoundLiteralFromAudioParameter @ 14b3ec310

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execCreateMetaSoundLiteralFromAudioParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAudioParameter *pFVar2;
  FAudioParameter local_108;
  FMetasoundFrontendLiteral local_68;
  
  local_108.ParamName.ComparisonIndex.Value = 0;
  local_108.ParamName.Number = 0;
  local_108.FloatParam = 0.0;
  local_108.BoolParam = false;
  local_108.IntParam = 0;
  local_108.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_108.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.StringParam.Data.ArrayNum = 0;
  local_108.StringParam.Data.ArrayMax = 0;
  local_108.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayFloatParam.ArrayNum = 0;
  local_108.ArrayFloatParam.ArrayMax = 0;
  local_108.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayBoolParam.ArrayNum = 0;
  local_108.ArrayBoolParam.ArrayMax = 0;
  local_108.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayIntParam.ArrayNum = 0;
  local_108.ArrayIntParam.ArrayMax = 0;
  local_108.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayObjectParam.ArrayNum = 0;
  local_108.ArrayObjectParam.ArrayMax = 0;
  local_108.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayStringParam.ArrayNum = 0;
  local_108.ArrayStringParam.ArrayMax = 0;
  local_108.ParamType = None;
  local_108.TypeName.ComparisonIndex.Value = 0;
  local_108.TypeName.Number = 0;
  local_108.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ObjectProxies.ArrayNum = 0;
  local_108.ObjectProxies.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  pFVar2 = &local_108;
  if ((FAudioParameter *)param_2->MostRecentPropertyAddress != (FAudioParameter *)0x0) {
    pFVar2 = (FAudioParameter *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&local_68,pFVar2);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_108.ObjectProxies.AllocatorInstance.Data,
             local_108.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_108.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_108.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_108.ArrayStringParam.AllocatorInstance.Data,
             local_108.ArrayStringParam.ArrayNum);
  if (local_108.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_108.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_108.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_108.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_108.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_108.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// execCreateMetaSoundLiteralFromBoolean @ 14b3ec500

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execCreateMetaSoundLiteralFromBoolean
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  FMetasoundFrontendLiteral local_68;
  
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
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_68,local_res10[0] != 0);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execCreateMetaSoundLiteralFromBooleanArray @ 14b3ec630

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execCreateMetaSoundLiteralFromBooleanArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> local_78;
  FMetasoundFrontendLiteral local_68;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  pTVar2 = &local_78;
  if ((TArray<bool,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<bool,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_68,pTVar2);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// execCreateMetaSoundLiteralFromFloat @ 14b3ec780

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execCreateMetaSoundLiteralFromFloat
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  FMetasoundFrontendLiteral local_68;
  
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
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_68,local_res10[0]);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execCreateMetaSoundLiteralFromFloatArray @ 14b3ec8b0

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execCreateMetaSoundLiteralFromFloatArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> local_78;
  FMetasoundFrontendLiteral local_68;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  pTVar2 = &local_78;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_68,pTVar2);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// execCreateMetaSoundLiteralFromInteger @ 14b3eca00

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execCreateMetaSoundLiteralFromInteger
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  FMetasoundFrontendLiteral local_68;
  
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
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_68,local_res10[0]);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execCreateMetaSoundLiteralFromIntegerArray @ 14b3ecb30

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execCreateMetaSoundLiteralFromIntegerArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  FMetasoundFrontendLiteral local_68;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  pTVar2 = &local_78;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_68,pTVar2);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// execCreateMetaSoundLiteralFromObject @ 14b3ecc80

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execCreateMetaSoundLiteralFromObject
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10;
  FMetasoundFrontendLiteral local_68;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_68,local_res10);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execCreateMetaSoundLiteralFromObjectArray @ 14b3ecdb0

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execCreateMetaSoundLiteralFromObjectArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_78;
  FMetasoundFrontendLiteral local_68;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  pTVar2 = &local_78;
  if ((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_68,pTVar2);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// execCreateMetaSoundLiteralFromParam @ 14b3ed0f0

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execCreateMetaSoundLiteralFromParam
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAudioParameter *pFVar2;
  FAudioParameter local_108;
  FMetasoundFrontendLiteral local_68;
  
  local_108.ParamName.ComparisonIndex.Value = 0;
  local_108.ParamName.Number = 0;
  local_108.FloatParam = 0.0;
  local_108.BoolParam = false;
  local_108.IntParam = 0;
  local_108.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_108.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.StringParam.Data.ArrayNum = 0;
  local_108.StringParam.Data.ArrayMax = 0;
  local_108.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayFloatParam.ArrayNum = 0;
  local_108.ArrayFloatParam.ArrayMax = 0;
  local_108.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayBoolParam.ArrayNum = 0;
  local_108.ArrayBoolParam.ArrayMax = 0;
  local_108.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayIntParam.ArrayNum = 0;
  local_108.ArrayIntParam.ArrayMax = 0;
  local_108.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayObjectParam.ArrayNum = 0;
  local_108.ArrayObjectParam.ArrayMax = 0;
  local_108.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayStringParam.ArrayNum = 0;
  local_108.ArrayStringParam.ArrayMax = 0;
  local_108.ParamType = None;
  local_108.TypeName.ComparisonIndex.Value = 0;
  local_108.TypeName.Number = 0;
  local_108.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ObjectProxies.ArrayNum = 0;
  local_108.ObjectProxies.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  pFVar2 = &local_108;
  if ((FAudioParameter *)param_2->MostRecentPropertyAddress != (FAudioParameter *)0x0) {
    pFVar2 = (FAudioParameter *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&local_68,pFVar2);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_108.ObjectProxies.AllocatorInstance.Data,
             local_108.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_108.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_108.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_108.ArrayStringParam.AllocatorInstance.Data,
             local_108.ArrayStringParam.ArrayNum);
  if (local_108.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_108.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_108.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_108.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_108.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_108.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// execCreateMetaSoundLiteralFromString @ 14b3ed2e0

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execCreateMetaSoundLiteralFromString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_78;
  FMetasoundFrontendLiteral local_68;
  
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_68,&local_78);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// execCreateMetaSoundLiteralFromStringArray @ 14b3ed420

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execCreateMetaSoundLiteralFromStringArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FMetasoundFrontendLiteral local_68;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  pTVar2 = &local_78;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_68,pTVar2);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// execCreateObjectArrayMetaSoundLiteral @ 14b3ed6d0

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execCreateObjectArrayMetaSoundLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_78;
  FMetasoundFrontendLiteral local_68;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  pTVar2 = &local_78;
  if ((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_68,pTVar2);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// execCreateObjectMetaSoundLiteral @ 14b3ed950

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execCreateObjectMetaSoundLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10;
  FMetasoundFrontendLiteral local_68;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_68,local_res10);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execCreateStringArrayMetaSoundLiteral @ 14b3ee310

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execCreateStringArrayMetaSoundLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FMetasoundFrontendLiteral local_68;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  pTVar2 = &local_78;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_68,pTVar2);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// execCreateStringMetaSoundLiteral @ 14b3ee610

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execCreateStringMetaSoundLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_78;
  FMetasoundFrontendLiteral local_68;
  
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  FMetasoundFrontendLiteral::Set(&local_68,&local_78);
  FMetasoundFrontendLiteral::operator=(param_3,&local_68);
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// execEqualEqual_MetaSoundLiteral @ 14b3eedc0

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execEqualEqual_MetaSoundLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FMetasoundFrontendLiteral *pFVar3;
  FMetasoundFrontendLiteral *this;
  FMetasoundFrontendLiteral local_c8;
  FMetasoundFrontendLiteral local_68;
  
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_c8.Type = None;
  local_c8.AsNumDefault = 0;
  this = &local_68;
  if ((FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress !=
      (FMetasoundFrontendLiteral *)0x0) {
    this = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  }
  local_c8.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AsBoolean.ArrayNum = 0;
  local_c8.AsBoolean.ArrayMax = 0;
  local_c8.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AsInteger.ArrayNum = 0;
  local_c8.AsInteger.ArrayMax = 0;
  local_c8.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AsFloat.ArrayNum = 0;
  local_c8.AsFloat.ArrayMax = 0;
  local_c8.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AsString.ArrayNum = 0;
  local_c8.AsString.ArrayMax = 0;
  local_c8.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AsUObject.ArrayNum = 0;
  local_c8.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  pFVar3 = &local_c8;
  if ((FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress !=
      (FMetasoundFrontendLiteral *)0x0) {
    pFVar3 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FMetasoundFrontendLiteral::IsEqual(this,pFVar3);
  *(bool *)param_3 = bVar2;
  if (local_c8.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_c8.AsString.AllocatorInstance.Data,local_c8.AsString.ArrayNum);
  if (local_c8.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AsString.AllocatorInstance.Data);
  }
  if (local_c8.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AsFloat.AllocatorInstance.Data);
  }
  if (local_c8.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AsInteger.AllocatorInstance.Data);
  }
  if (local_c8.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AsBoolean.AllocatorInstance.Data);
  }
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetBoolArrayValueFromLiteral @ 14b3f0970

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execGetBoolArrayValueFromLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FMetasoundFrontendLiteral *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar *puVar4;
  FMetasoundFrontendLiteral *this;
  uchar local_res10 [8];
  TArray<bool,TSizedDefaultAllocator<32>_> local_88;
  FMetasoundFrontendLiteral local_78;
  
  local_78.Type = None;
  local_78.AsNumDefault = 0;
  local_78.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsBoolean.ArrayNum = 0;
  local_78.AsBoolean.ArrayMax = 0;
  local_78.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsInteger.ArrayNum = 0;
  local_78.AsInteger.ArrayMax = 0;
  local_78.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsFloat.ArrayNum = 0;
  local_78.AsFloat.ArrayMax = 0;
  local_78.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsString.ArrayNum = 0;
  local_78.AsString.ArrayMax = 0;
  local_78.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsUObject.ArrayNum = 0;
  local_78.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pFVar1 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_78;
  if (pFVar1 != (FMetasoundFrontendLiteral *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FMetasoundFrontendLiteral::TryGet(this,&local_88);
  *puVar4 = !bVar3;
  if (param_3 != &local_88) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_88.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_88.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_88.ArrayMax;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_78.AsString.AllocatorInstance.Data,local_78.AsString.ArrayNum);
  if (local_78.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsString.AllocatorInstance.Data);
  }
  if (local_78.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsFloat.AllocatorInstance.Data);
  }
  if (local_78.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsInteger.AllocatorInstance.Data);
  }
  if (local_78.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetBoolValueFromLiteral @ 14b3f0b50

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execGetBoolValueFromLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FMetasoundFrontendLiteral *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar *puVar4;
  FMetasoundFrontendLiteral *this;
  uchar local_res10 [8];
  bool local_res18 [16];
  FMetasoundFrontendLiteral local_88;
  
  local_88.Type = None;
  local_88.AsNumDefault = 0;
  local_88.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsBoolean.ArrayNum = 0;
  local_88.AsBoolean.ArrayMax = 0;
  local_88.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsInteger.ArrayNum = 0;
  local_88.AsInteger.ArrayMax = 0;
  local_88.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsFloat.ArrayNum = 0;
  local_88.AsFloat.ArrayMax = 0;
  local_88.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsString.ArrayNum = 0;
  local_88.AsString.ArrayMax = 0;
  local_88.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsUObject.ArrayNum = 0;
  local_88.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar1 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_88;
  if (pFVar1 != (FMetasoundFrontendLiteral *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FMetasoundFrontendLiteral::TryGet(this,local_res18);
  *puVar4 = !bVar3;
  *(bool *)param_3 = local_res18[0];
  if (local_88.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_88.AsString.AllocatorInstance.Data,local_88.AsString.ArrayNum);
  if (local_88.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsString.AllocatorInstance.Data);
  }
  if (local_88.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsFloat.AllocatorInstance.Data);
  }
  if (local_88.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsInteger.AllocatorInstance.Data);
  }
  if (local_88.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetFloatArrayValueFromLiteral @ 14b3f0ef0

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execGetFloatArrayValueFromLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FMetasoundFrontendLiteral *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar *puVar4;
  FMetasoundFrontendLiteral *this;
  uchar local_res10 [8];
  TArray<float,TSizedDefaultAllocator<32>_> local_88;
  FMetasoundFrontendLiteral local_78;
  
  local_78.Type = None;
  local_78.AsNumDefault = 0;
  local_78.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsBoolean.ArrayNum = 0;
  local_78.AsBoolean.ArrayMax = 0;
  local_78.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsInteger.ArrayNum = 0;
  local_78.AsInteger.ArrayMax = 0;
  local_78.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsFloat.ArrayNum = 0;
  local_78.AsFloat.ArrayMax = 0;
  local_78.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsString.ArrayNum = 0;
  local_78.AsString.ArrayMax = 0;
  local_78.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsUObject.ArrayNum = 0;
  local_78.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pFVar1 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_78;
  if (pFVar1 != (FMetasoundFrontendLiteral *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FMetasoundFrontendLiteral::TryGet(this,&local_88);
  *puVar4 = !bVar3;
  if (param_3 != &local_88) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_88.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_88.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_88.ArrayMax;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_78.AsString.AllocatorInstance.Data,local_78.AsString.ArrayNum);
  if (local_78.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsString.AllocatorInstance.Data);
  }
  if (local_78.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsFloat.AllocatorInstance.Data);
  }
  if (local_78.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsInteger.AllocatorInstance.Data);
  }
  if (local_78.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetFloatValueFromLiteral @ 14b3f10d0

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execGetFloatValueFromLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FMetasoundFrontendLiteral *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar *puVar4;
  FMetasoundFrontendLiteral *this;
  uchar local_res10 [8];
  float local_res18 [4];
  FMetasoundFrontendLiteral local_88;
  
  local_88.Type = None;
  local_88.AsNumDefault = 0;
  local_88.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsBoolean.ArrayNum = 0;
  local_88.AsBoolean.ArrayMax = 0;
  local_88.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsInteger.ArrayNum = 0;
  local_88.AsInteger.ArrayMax = 0;
  local_88.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsFloat.ArrayNum = 0;
  local_88.AsFloat.ArrayMax = 0;
  local_88.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsString.ArrayNum = 0;
  local_88.AsString.ArrayMax = 0;
  local_88.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsUObject.ArrayNum = 0;
  local_88.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar1 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_88;
  if (pFVar1 != (FMetasoundFrontendLiteral *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FMetasoundFrontendLiteral::TryGet(this,local_res18);
  *puVar4 = !bVar3;
  *(float *)param_3 = local_res18[0];
  if (local_88.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_88.AsString.AllocatorInstance.Data,local_88.AsString.ArrayNum);
  if (local_88.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsString.AllocatorInstance.Data);
  }
  if (local_88.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsFloat.AllocatorInstance.Data);
  }
  if (local_88.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsInteger.AllocatorInstance.Data);
  }
  if (local_88.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetIntArrayValueFromLiteral @ 14b3f1980

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execGetIntArrayValueFromLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FMetasoundFrontendLiteral *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar *puVar4;
  FMetasoundFrontendLiteral *this;
  uchar local_res10 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_88;
  FMetasoundFrontendLiteral local_78;
  
  local_78.Type = None;
  local_78.AsNumDefault = 0;
  local_78.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsBoolean.ArrayNum = 0;
  local_78.AsBoolean.ArrayMax = 0;
  local_78.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsInteger.ArrayNum = 0;
  local_78.AsInteger.ArrayMax = 0;
  local_78.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsFloat.ArrayNum = 0;
  local_78.AsFloat.ArrayMax = 0;
  local_78.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsString.ArrayNum = 0;
  local_78.AsString.ArrayMax = 0;
  local_78.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsUObject.ArrayNum = 0;
  local_78.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pFVar1 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_78;
  if (pFVar1 != (FMetasoundFrontendLiteral *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FMetasoundFrontendLiteral::TryGet(this,&local_88);
  *puVar4 = !bVar3;
  if (param_3 != &local_88) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_88.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_88.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_88.ArrayMax;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_78.AsString.AllocatorInstance.Data,local_78.AsString.ArrayNum);
  if (local_78.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsString.AllocatorInstance.Data);
  }
  if (local_78.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsFloat.AllocatorInstance.Data);
  }
  if (local_78.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsInteger.AllocatorInstance.Data);
  }
  if (local_78.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetIntValueFromLiteral @ 14b3f1b60

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execGetIntValueFromLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FMetasoundFrontendLiteral *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar *puVar4;
  FMetasoundFrontendLiteral *this;
  uchar local_res10 [8];
  int local_res18 [4];
  FMetasoundFrontendLiteral local_88;
  
  local_88.Type = None;
  local_88.AsNumDefault = 0;
  local_88.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsBoolean.ArrayNum = 0;
  local_88.AsBoolean.ArrayMax = 0;
  local_88.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsInteger.ArrayNum = 0;
  local_88.AsInteger.ArrayMax = 0;
  local_88.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsFloat.ArrayNum = 0;
  local_88.AsFloat.ArrayMax = 0;
  local_88.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsString.ArrayNum = 0;
  local_88.AsString.ArrayMax = 0;
  local_88.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsUObject.ArrayNum = 0;
  local_88.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar1 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_88;
  if (pFVar1 != (FMetasoundFrontendLiteral *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FMetasoundFrontendLiteral::TryGet(this,local_res18);
  *puVar4 = !bVar3;
  *(int *)param_3 = local_res18[0];
  if (local_88.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_88.AsString.AllocatorInstance.Data,local_88.AsString.ArrayNum);
  if (local_88.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsString.AllocatorInstance.Data);
  }
  if (local_88.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsFloat.AllocatorInstance.Data);
  }
  if (local_88.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsInteger.AllocatorInstance.Data);
  }
  if (local_88.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetMetaSoundLiteralAsBool @ 14b3f1d40

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execGetMetaSoundLiteralAsBool
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FMetasoundFrontendLiteral *pFVar3;
  bool local_res10 [8];
  FMetasoundFrontendLiteral local_68;
  
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = false;
  pFVar3 = &local_68;
  if ((FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress !=
      (FMetasoundFrontendLiteral *)0x0) {
    pFVar3 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = MetasoundFrontendLiteralBlueprintAccessPrivate::GetPODValueFromMetaSoundLiteral<bool>
                    (pFVar3,Boolean,local_res10);
  *(bool *)param_3 = bVar2;
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetMetaSoundLiteralAsBoolArray @ 14b3f1e70

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execGetMetaSoundLiteralAsBoolArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMetasoundFrontendLiteral *pFVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> local_88;
  TArray<bool,TSizedDefaultAllocator<32>_> local_78;
  FMetasoundFrontendLiteral local_68;
  
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  pFVar2 = &local_68;
  if ((FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress !=
      (FMetasoundFrontendLiteral *)0x0) {
    pFVar2 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  MetasoundFrontendLiteralBlueprintAccessPrivate::
  GetPODValueFromMetaSoundLiteral<TArray<bool,TSizedDefaultAllocator<32>_>_>
            (&local_88,pFVar2,BooleanArray,&local_78);
  if (param_3 != &local_88) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_88.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_88.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_88.ArrayMax;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetMetaSoundLiteralAsFloat @ 14b3f1ff0

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execGetMetaSoundLiteralAsFloat
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMetasoundFrontendLiteral *pFVar2;
  float fVar3;
  float local_res10 [2];
  FMetasoundFrontendLiteral local_68;
  
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 0.0;
  pFVar2 = &local_68;
  if ((FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress !=
      (FMetasoundFrontendLiteral *)0x0) {
    pFVar2 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar3 = MetasoundFrontendLiteralBlueprintAccessPrivate::GetPODValueFromMetaSoundLiteral<float>
                    (pFVar2,Float,local_res10);
  *(float *)param_3 = fVar3;
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetMetaSoundLiteralAsFloatArray @ 14b3f2130

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execGetMetaSoundLiteralAsFloatArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMetasoundFrontendLiteral *pFVar2;
  TArray<float,TSizedDefaultAllocator<32>_> local_88;
  TArray<float,TSizedDefaultAllocator<32>_> local_78;
  FMetasoundFrontendLiteral local_68;
  
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  pFVar2 = &local_68;
  if ((FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress !=
      (FMetasoundFrontendLiteral *)0x0) {
    pFVar2 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  MetasoundFrontendLiteralBlueprintAccessPrivate::
  GetPODValueFromMetaSoundLiteral<TArray<float,TSizedDefaultAllocator<32>_>_>
            (&local_88,pFVar2,FloatArray,&local_78);
  if (param_3 != &local_88) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_88.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_88.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_88.ArrayMax;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetMetaSoundLiteralAsInteger @ 14b3f22b0

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execGetMetaSoundLiteralAsInteger
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FMetasoundFrontendLiteral *pFVar3;
  int local_res10 [2];
  FMetasoundFrontendLiteral local_68;
  
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 0;
  pFVar3 = &local_68;
  if ((FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress !=
      (FMetasoundFrontendLiteral *)0x0) {
    pFVar3 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = MetasoundFrontendLiteralBlueprintAccessPrivate::GetPODValueFromMetaSoundLiteral<int>
                    (pFVar3,Integer,local_res10);
  *(int *)param_3 = iVar2;
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetMetaSoundLiteralAsIntegerArray @ 14b3f23e0

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execGetMetaSoundLiteralAsIntegerArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMetasoundFrontendLiteral *pFVar2;
  TArray<int,TSizedDefaultAllocator<32>_> local_88;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  FMetasoundFrontendLiteral local_68;
  
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  pFVar2 = &local_68;
  if ((FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress !=
      (FMetasoundFrontendLiteral *)0x0) {
    pFVar2 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  MetasoundFrontendLiteralBlueprintAccessPrivate::
  GetPODValueFromMetaSoundLiteral<TArray<int,TSizedDefaultAllocator<32>_>_>
            (&local_88,pFVar2,IntegerArray,&local_78);
  if (param_3 != &local_88) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_88.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_88.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_88.ArrayMax;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetMetaSoundLiteralAsObject @ 14b3f2560

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execGetMetaSoundLiteralAsObject
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  FMetasoundFrontendLiteral *pFVar3;
  UObject *local_res10;
  FMetasoundFrontendLiteral local_68;
  
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10 = (UObject *)0x0;
  pFVar3 = &local_68;
  if ((FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress !=
      (FMetasoundFrontendLiteral *)0x0) {
    pFVar3 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = MetasoundFrontendLiteralBlueprintAccessPrivate::
           GetPODValueFromMetaSoundLiteral<UObject_*>(pFVar3,UObject,&local_res10);
  *(UObject **)param_3 = pUVar2;
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetMetaSoundLiteralAsObjectArray @ 14b3f26a0

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execGetMetaSoundLiteralAsObjectArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMetasoundFrontendLiteral *pFVar2;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_88;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_78;
  FMetasoundFrontendLiteral local_68;
  
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  pFVar2 = &local_68;
  if ((FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress !=
      (FMetasoundFrontendLiteral *)0x0) {
    pFVar2 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  MetasoundFrontendLiteralBlueprintAccessPrivate::
  GetPODValueFromMetaSoundLiteral<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>
            (&local_88,pFVar2,UObjectArray,&local_78);
  if (param_3 != &local_88) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_88.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_88.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_88.ArrayMax;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetMetaSoundLiteralAsString @ 14b3f2820

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execGetMetaSoundLiteralAsString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMetasoundFrontendLiteral *pFVar2;
  FString local_88;
  FString local_78;
  FMetasoundFrontendLiteral local_68;
  
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  pFVar2 = &local_68;
  if ((FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress !=
      (FMetasoundFrontendLiteral *)0x0) {
    pFVar2 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  MetasoundFrontendLiteralBlueprintAccessPrivate::GetPODValueFromMetaSoundLiteral<FString>
            (&local_88,pFVar2,String,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (param_3 != &local_88) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_88.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_88.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_88.Data.ArrayMax;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetMetaSoundLiteralAsStringArray @ 14b3f29b0

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execGetMetaSoundLiteralAsStringArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FMetasoundFrontendLiteral *pFVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FMetasoundFrontendLiteral local_68;
  
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  pFVar3 = &local_68;
  if ((FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress !=
      (FMetasoundFrontendLiteral *)0x0) {
    pFVar3 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  MetasoundFrontendLiteralBlueprintAccessPrivate::
  GetPODValueFromMetaSoundLiteral<TArray<FString,TSizedDefaultAllocator<32>_>_>
            (&local_88,pFVar3,StringArray,&local_78);
  DestructItems<FString,int>((FString *)0x0,0);
  if (param_3 == &local_88) {
    iVar2 = local_88.ArrayNum;
  }
  else {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_88.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_88.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_88.ArrayMax;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = 0;
  }
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,iVar2);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetObjectArrayValueFromLiteral @ 14b3f3450

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execGetObjectArrayValueFromLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FMetasoundFrontendLiteral *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar *puVar4;
  FMetasoundFrontendLiteral *this;
  uchar local_res10 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_88;
  FMetasoundFrontendLiteral local_78;
  
  local_78.Type = None;
  local_78.AsNumDefault = 0;
  local_78.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsBoolean.ArrayNum = 0;
  local_78.AsBoolean.ArrayMax = 0;
  local_78.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsInteger.ArrayNum = 0;
  local_78.AsInteger.ArrayMax = 0;
  local_78.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsFloat.ArrayNum = 0;
  local_78.AsFloat.ArrayMax = 0;
  local_78.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsString.ArrayNum = 0;
  local_78.AsString.ArrayMax = 0;
  local_78.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsUObject.ArrayNum = 0;
  local_78.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pFVar1 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_78;
  if (pFVar1 != (FMetasoundFrontendLiteral *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FMetasoundFrontendLiteral::TryGet(this,&local_88);
  *puVar4 = !bVar3;
  if (param_3 != &local_88) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_88.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_88.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_88.ArrayMax;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_78.AsString.AllocatorInstance.Data,local_78.AsString.ArrayNum);
  if (local_78.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsString.AllocatorInstance.Data);
  }
  if (local_78.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsFloat.AllocatorInstance.Data);
  }
  if (local_78.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsInteger.AllocatorInstance.Data);
  }
  if (local_78.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetObjectValueFromLiteral @ 14b3f3630

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execGetObjectValueFromLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FMetasoundFrontendLiteral *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar *puVar4;
  FMetasoundFrontendLiteral *this;
  uchar local_res10 [8];
  UObject *local_res18 [2];
  FMetasoundFrontendLiteral local_88;
  
  local_88.Type = None;
  local_88.AsNumDefault = 0;
  local_88.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsBoolean.ArrayNum = 0;
  local_88.AsBoolean.ArrayMax = 0;
  local_88.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsInteger.ArrayNum = 0;
  local_88.AsInteger.ArrayMax = 0;
  local_88.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsFloat.ArrayNum = 0;
  local_88.AsFloat.ArrayMax = 0;
  local_88.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsString.ArrayNum = 0;
  local_88.AsString.ArrayMax = 0;
  local_88.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.AsUObject.ArrayNum = 0;
  local_88.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar1 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_88;
  if (pFVar1 != (FMetasoundFrontendLiteral *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FMetasoundFrontendLiteral::TryGet(this,local_res18);
  *puVar4 = !bVar3;
  *(UObject **)param_3 = local_res18[0];
  if (local_88.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_88.AsString.AllocatorInstance.Data,local_88.AsString.ArrayNum);
  if (local_88.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsString.AllocatorInstance.Data);
  }
  if (local_88.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsFloat.AllocatorInstance.Data);
  }
  if (local_88.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsInteger.AllocatorInstance.Data);
  }
  if (local_88.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetStringArrayValueFromLiteral @ 14b3f3a90

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execGetStringArrayValueFromLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FMetasoundFrontendLiteral *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  int iVar4;
  uchar *puVar5;
  FMetasoundFrontendLiteral *this;
  uchar local_res10 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  FMetasoundFrontendLiteral local_78;
  
  local_78.Type = None;
  local_78.AsNumDefault = 0;
  local_78.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsBoolean.ArrayNum = 0;
  local_78.AsBoolean.ArrayMax = 0;
  local_78.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsInteger.ArrayNum = 0;
  local_78.AsInteger.ArrayMax = 0;
  local_78.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsFloat.ArrayNum = 0;
  local_78.AsFloat.ArrayMax = 0;
  local_78.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsString.ArrayNum = 0;
  local_78.AsString.ArrayMax = 0;
  local_78.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsUObject.ArrayNum = 0;
  local_78.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pFVar1 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_78;
  if (pFVar1 != (FMetasoundFrontendLiteral *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  puVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FMetasoundFrontendLiteral::TryGet(this,&local_88);
  *puVar5 = !bVar3;
  if (param_3 == &local_88) {
    iVar4 = local_88.ArrayNum;
  }
  else {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_88.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_88.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_88.ArrayMax;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    iVar4 = 0;
  }
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,iVar4);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_78.AsString.AllocatorInstance.Data,local_78.AsString.ArrayNum);
  if (local_78.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsString.AllocatorInstance.Data);
  }
  if (local_78.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsFloat.AllocatorInstance.Data);
  }
  if (local_78.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsInteger.AllocatorInstance.Data);
  }
  if (local_78.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetStringValueFromLiteral @ 14b3f3c90

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execGetStringValueFromLiteral
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FMetasoundFrontendLiteral *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar *puVar4;
  FMetasoundFrontendLiteral *this;
  uchar local_res10 [8];
  FString local_88;
  FMetasoundFrontendLiteral local_78;
  
  local_78.Type = None;
  local_78.AsNumDefault = 0;
  local_78.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsBoolean.ArrayNum = 0;
  local_78.AsBoolean.ArrayMax = 0;
  local_78.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsInteger.ArrayNum = 0;
  local_78.AsInteger.ArrayMax = 0;
  local_78.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsFloat.ArrayNum = 0;
  local_78.AsFloat.ArrayMax = 0;
  local_78.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsString.ArrayNum = 0;
  local_78.AsString.ArrayMax = 0;
  local_78.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.AsUObject.ArrayNum = 0;
  local_78.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pFVar1 = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_78;
  if (pFVar1 != (FMetasoundFrontendLiteral *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FMetasoundFrontendLiteral::TryGet(this,&local_88);
  *puVar4 = !bVar3;
  if (param_3 != &local_88) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_88.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_88.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_88.Data.ArrayMax;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_78.AsString.AllocatorInstance.Data,local_78.AsString.ArrayNum);
  if (local_78.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsString.AllocatorInstance.Data);
  }
  if (local_78.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsFloat.AllocatorInstance.Data);
  }
  if (local_78.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsInteger.AllocatorInstance.Data);
  }
  if (local_78.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

// execGetType @ 14b3f3fa0

void __cdecl
UMetasoundFrontendLiteralBlueprintAccess::execGetType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EMetasoundFrontendLiteralType EVar2;
  FMetasoundFrontendLiteral *this;
  FMetasoundFrontendLiteral local_68;
  
  local_68.Type = None;
  local_68.AsNumDefault = 0;
  local_68.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsBoolean.ArrayNum = 0;
  local_68.AsBoolean.ArrayMax = 0;
  local_68.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsInteger.ArrayNum = 0;
  local_68.AsInteger.ArrayMax = 0;
  local_68.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsFloat.ArrayNum = 0;
  local_68.AsFloat.ArrayMax = 0;
  local_68.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsString.ArrayNum = 0;
  local_68.AsString.ArrayMax = 0;
  local_68.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AsUObject.ArrayNum = 0;
  local_68.AsUObject.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  this = &local_68;
  if ((FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress !=
      (FMetasoundFrontendLiteral *)0x0) {
    this = (FMetasoundFrontendLiteral *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar2 = FMetasoundFrontendLiteral::GetType(this);
  *(EMetasoundFrontendLiteralType *)param_3 = EVar2;
  if (local_68.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_68.AsString.AllocatorInstance.Data,local_68.AsString.ArrayNum);
  if (local_68.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsString.AllocatorInstance.Data);
  }
  if (local_68.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsFloat.AllocatorInstance.Data);
  }
  if (local_68.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsInteger.AllocatorInstance.Data);
  }
  if (local_68.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AsBoolean.AllocatorInstance.Data);
  }
  return;
}

