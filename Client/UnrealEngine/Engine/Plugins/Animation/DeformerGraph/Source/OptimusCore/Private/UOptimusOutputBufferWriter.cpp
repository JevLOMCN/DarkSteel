// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e11e1e0

UClass * __cdecl UOptimusOutputBufferWriter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusOutputBufferWriter.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusOutputBufferWriter",
               &Z_Registration_Info_UClass_UOptimusOutputBufferWriter.InnerSingleton,
               StaticRegisterNativesUOptimusOutputBufferWriter,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusOutputBufferWriter>,
               InternalVTableHelperCtorCaller<UOptimusOutputBufferWriter>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusOutputBufferWriter.InnerSingleton;
}

// UOptimusOutputBufferWriter @ 14e15c370

UOptimusOutputBufferWriter * __thiscall
UOptimusOutputBufferWriter::UOptimusOutputBufferWriter
          (UOptimusOutputBufferWriter *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusOutputBufferWriter__6B_;
  return this;
}

// UOptimusOutputBufferWriter @ 14e15c3a0

UOptimusOutputBufferWriter * __thiscall
UOptimusOutputBufferWriter::UOptimusOutputBufferWriter
          (UOptimusOutputBufferWriter *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusOutputBufferWriter__6B_;
  return this;
}

// ~UOptimusOutputBufferWriter @ 14e163bd0

void __thiscall
UOptimusOutputBufferWriter::~UOptimusOutputBufferWriter(UOptimusOutputBufferWriter *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d81e0

UClass * __cdecl UOptimusOutputBufferWriter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusOutputBufferWriter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusOutputBufferWriter",
               &Z_Registration_Info_UClass_UOptimusOutputBufferWriter.InnerSingleton,
               StaticRegisterNativesUOptimusOutputBufferWriter,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusOutputBufferWriter>,
               InternalVTableHelperCtorCaller<UOptimusOutputBufferWriter>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusOutputBufferWriter.InnerSingleton;
}

// StaticRegisterNativesUOptimusOutputBufferWriter @ 14e225d70

void __cdecl UOptimusOutputBufferWriter::StaticRegisterNativesUOptimusOutputBufferWriter(void)

{
  return;
}

