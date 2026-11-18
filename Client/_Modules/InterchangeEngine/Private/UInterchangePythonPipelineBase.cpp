// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 6

// StaticClass @ 14e4cb7b0

UClass * __cdecl UInterchangePythonPipelineBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePythonPipelineBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangePythonPipelineBase",
               &Z_Registration_Info_UClass_UInterchangePythonPipelineBase.InnerSingleton,
               StaticRegisterNativesUInterchangePythonPipelineBase,0x128,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangePythonPipelineBase>,
               InternalVTableHelperCtorCaller<UInterchangePythonPipelineBase>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePythonPipelineBase.InnerSingleton;
}

// UInterchangePythonPipelineBase @ 14e4d9120

UInterchangePythonPipelineBase * __thiscall
UInterchangePythonPipelineBase::UInterchangePythonPipelineBase
          (UInterchangePythonPipelineBase *this,FVTableHelper *param_1)

{
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangePythonPipelineBase__6B_;
  return this;
}

// UInterchangePythonPipelineBase @ 14e4d9150

UInterchangePythonPipelineBase * __thiscall
UInterchangePythonPipelineBase::UInterchangePythonPipelineBase
          (UInterchangePythonPipelineBase *this,FObjectInitializer *param_1)

{
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangePythonPipelineBase__6B_;
  return this;
}

// ~UInterchangePythonPipelineBase @ 14e4db270

void __thiscall
UInterchangePythonPipelineBase::~UInterchangePythonPipelineBase
          (UInterchangePythonPipelineBase *this)

{
  *(undefined ***)this = &___7UInterchangePythonPipelineBase__6B_;
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e4f8400

UClass * __cdecl UInterchangePythonPipelineBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePythonPipelineBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangePythonPipelineBase",
               &Z_Registration_Info_UClass_UInterchangePythonPipelineBase.InnerSingleton,
               StaticRegisterNativesUInterchangePythonPipelineBase,0x128,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangePythonPipelineBase>,
               InternalVTableHelperCtorCaller<UInterchangePythonPipelineBase>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePythonPipelineBase.InnerSingleton;
}

// StaticRegisterNativesUInterchangePythonPipelineBase @ 14e50ac00

void __cdecl
UInterchangePythonPipelineBase::StaticRegisterNativesUInterchangePythonPipelineBase(void)

{
  return;
}

