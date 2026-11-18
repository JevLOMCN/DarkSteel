// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 7

// StaticClass @ 14e321ca0

UClass * __cdecl UInterchangeWriterBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeWriterBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeWriterBase",
               &Z_Registration_Info_UClass_UInterchangeWriterBase.InnerSingleton,
               StaticRegisterNativesUInterchangeWriterBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeWriterBase>,
               InternalVTableHelperCtorCaller<UInterchangeWriterBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeWriterBase.InnerSingleton;
}

// UInterchangeWriterBase @ 14e4023f0

UInterchangeWriterBase * __thiscall
UInterchangeWriterBase::UInterchangeWriterBase(UInterchangeWriterBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInterchangeWriterBase__6B_;
  return this;
}

// UInterchangeWriterBase @ 14e402420

UInterchangeWriterBase * __thiscall
UInterchangeWriterBase::UInterchangeWriterBase
          (UInterchangeWriterBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInterchangeWriterBase__6B_;
  return this;
}

// ~UInterchangeWriterBase @ 14e4051e0

void __thiscall UInterchangeWriterBase::~UInterchangeWriterBase(UInterchangeWriterBase *this)

{
  *(undefined ***)this = &___7UInterchangeWriterBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Export @ 14e435330

bool __thiscall
UInterchangeWriterBase::Export(UInterchangeWriterBase *this,UInterchangeBaseNodeContainer *param_1)

{
  return false;
}

// GetPrivateStaticClass @ 14e4424d0

UClass * __cdecl UInterchangeWriterBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeWriterBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeWriterBase",
               &Z_Registration_Info_UClass_UInterchangeWriterBase.InnerSingleton,
               StaticRegisterNativesUInterchangeWriterBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeWriterBase>,
               InternalVTableHelperCtorCaller<UInterchangeWriterBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeWriterBase.InnerSingleton;
}

// StaticRegisterNativesUInterchangeWriterBase @ 14e460180

void __cdecl UInterchangeWriterBase::StaticRegisterNativesUInterchangeWriterBase(void)

{
  return;
}

