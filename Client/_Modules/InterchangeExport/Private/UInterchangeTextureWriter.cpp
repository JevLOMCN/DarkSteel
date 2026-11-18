// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeExport
// Functions: 7

// StaticClass @ 14e72c110

UClass * __cdecl UInterchangeTextureWriter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTextureWriter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeExport",L"InterchangeTextureWriter",
               &Z_Registration_Info_UClass_UInterchangeTextureWriter.InnerSingleton,
               StaticRegisterNativesUInterchangeTextureWriter,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeTextureWriter>,
               InternalVTableHelperCtorCaller<UInterchangeTextureWriter>,local_res8,
               UInterchangeWriterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureWriter.InnerSingleton;
}

// UInterchangeTextureWriter @ 14e72c5d0

UInterchangeTextureWriter * __thiscall
UInterchangeTextureWriter::UInterchangeTextureWriter
          (UInterchangeTextureWriter *this,FVTableHelper *param_1)

{
  UInterchangeWriterBase::UInterchangeWriterBase((UInterchangeWriterBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeTextureWriter__6B_;
  return this;
}

// UInterchangeTextureWriter @ 14e72c600

UInterchangeTextureWriter * __thiscall
UInterchangeTextureWriter::UInterchangeTextureWriter
          (UInterchangeTextureWriter *this,FObjectInitializer *param_1)

{
  UInterchangeWriterBase::UInterchangeWriterBase((UInterchangeWriterBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeTextureWriter__6B_;
  return this;
}

// ~UInterchangeTextureWriter @ 14e72c630

void __thiscall
UInterchangeTextureWriter::~UInterchangeTextureWriter(UInterchangeTextureWriter *this)

{
  *(undefined ***)this = &___7UInterchangeTextureWriter__6B_;
  UInterchangeWriterBase::~UInterchangeWriterBase((UInterchangeWriterBase *)this);
  return;
}

// Export @ 14e72c8c0

bool __thiscall
UInterchangeTextureWriter::Export
          (UInterchangeTextureWriter *this,UInterchangeBaseNodeContainer *param_1)

{
  return false;
}

// GetPrivateStaticClass @ 14e72c8f0

UClass * __cdecl UInterchangeTextureWriter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTextureWriter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeExport",L"InterchangeTextureWriter",
               &Z_Registration_Info_UClass_UInterchangeTextureWriter.InnerSingleton,
               StaticRegisterNativesUInterchangeTextureWriter,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeTextureWriter>,
               InternalVTableHelperCtorCaller<UInterchangeTextureWriter>,local_res8,
               UInterchangeWriterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTextureWriter.InnerSingleton;
}

// StaticRegisterNativesUInterchangeTextureWriter @ 14e72ca10

void __cdecl UInterchangeTextureWriter::StaticRegisterNativesUInterchangeTextureWriter(void)

{
  return;
}

