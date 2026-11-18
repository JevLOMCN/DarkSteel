// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472e9ed0

UClass * __cdecl UMaterialFunctionMaterialLayerBlend::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlend.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialFunctionMaterialLayerBlend",
               &Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlend.InnerSingleton,
               StaticRegisterNativesUMaterialFunctionMaterialLayerBlend,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialFunctionMaterialLayerBlend>,
               InternalVTableHelperCtorCaller<UMaterialFunctionMaterialLayerBlend>,local_res8,
               UMaterialFunction::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlend.InnerSingleton;
}

// UMaterialFunctionMaterialLayerBlend @ 1472f1a30

UMaterialFunctionMaterialLayerBlend * __thiscall
UMaterialFunctionMaterialLayerBlend::UMaterialFunctionMaterialLayerBlend
          (UMaterialFunctionMaterialLayerBlend *this,FVTableHelper *param_1)

{
  UMaterialFunction::UMaterialFunction((UMaterialFunction *)this,param_1);
  *(undefined ***)this = &___7UMaterialFunctionMaterialLayerBlend__6B_;
  return this;
}

// UMaterialFunctionMaterialLayerBlend @ 1472f1a60

UMaterialFunctionMaterialLayerBlend * __thiscall
UMaterialFunctionMaterialLayerBlend::UMaterialFunctionMaterialLayerBlend
          (UMaterialFunctionMaterialLayerBlend *this,FObjectInitializer *param_1)

{
  UMaterialFunction::UMaterialFunction((UMaterialFunction *)this,param_1);
  *(undefined ***)this = &___7UMaterialFunctionMaterialLayerBlend__6B_;
  return this;
}

// ~UMaterialFunctionMaterialLayerBlend @ 1472f2160

void __thiscall
UMaterialFunctionMaterialLayerBlend::~UMaterialFunctionMaterialLayerBlend
          (UMaterialFunctionMaterialLayerBlend *this)

{
  *(undefined ***)this = &___7UMaterialFunctionMaterialLayerBlend__6B_;
  UMaterialFunction::~UMaterialFunction((UMaterialFunction *)this);
  return;
}

// GetPrivateStaticClass @ 1472f35c0

UClass * __cdecl UMaterialFunctionMaterialLayerBlend::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlend.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialFunctionMaterialLayerBlend",
               &Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlend.InnerSingleton,
               StaticRegisterNativesUMaterialFunctionMaterialLayerBlend,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialFunctionMaterialLayerBlend>,
               InternalVTableHelperCtorCaller<UMaterialFunctionMaterialLayerBlend>,local_res8,
               UMaterialFunction::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlend.InnerSingleton;
}

// StaticRegisterNativesUMaterialFunctionMaterialLayerBlend @ 1472f43e0

void __cdecl
UMaterialFunctionMaterialLayerBlend::StaticRegisterNativesUMaterialFunctionMaterialLayerBlend(void)

{
  return;
}

// PostLoad @ 148b034e0

void __thiscall
UMaterialFunctionMaterialLayerBlend::PostLoad(UMaterialFunctionMaterialLayerBlend *this)

{
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  FGuid local_28;
  FString local_18;
  
  FLLMScope::FLLMScope(local_res8,Materials,false,None,Default,true);
  FMemScope::FMemScope(local_res10,Materials,true);
  UObject::PostLoad((UObject *)this);
  if (((*(int *)&this->field_0x34 == 0 && *(int *)&this->field_0x30 == 0) &&
      *(int *)&this->field_0x2c == 0) && *(int *)&this->field_0x28 == 0) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    FGuid::NewGuid(&local_28);
    *(uint *)&this->field_0x28 = local_28.A;
    *(uint *)&this->field_0x2c = local_28.B;
    *(uint *)&this->field_0x30 = local_28.C;
    *(uint *)&this->field_0x34 = local_28.D;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

