// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 7

// StaticClass @ 146965fc0

UClass * __cdecl URichTextBlockDecorator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URichTextBlockDecorator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"RichTextBlockDecorator",
               &Z_Registration_Info_UClass_URichTextBlockDecorator.InnerSingleton,
               StaticRegisterNativesURichTextBlockDecorator,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<URichTextBlockDecorator>,
               InternalVTableHelperCtorCaller<URichTextBlockDecorator>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URichTextBlockDecorator.InnerSingleton;
}

// URichTextBlockDecorator @ 14698cc40

URichTextBlockDecorator * __thiscall
URichTextBlockDecorator::URichTextBlockDecorator
          (URichTextBlockDecorator *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7URichTextBlockDecorator__6B_;
  return this;
}

// URichTextBlockDecorator @ 14698cc70

URichTextBlockDecorator * __thiscall
URichTextBlockDecorator::URichTextBlockDecorator
          (URichTextBlockDecorator *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7URichTextBlockDecorator__6B_;
  return this;
}

// ~URichTextBlockDecorator @ 146993e10

void __thiscall URichTextBlockDecorator::~URichTextBlockDecorator(URichTextBlockDecorator *this)

{
  *(undefined ***)this = &___7URichTextBlockDecorator__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateDecorator @ 1469bcc40

TSharedPtr<ITextDecorator,1> * __thiscall
URichTextBlockDecorator::CreateDecorator
          (URichTextBlockDecorator *this,TSharedPtr<ITextDecorator,1> *__return_storage_ptr__,
          URichTextBlock *param_1)

{
  __return_storage_ptr__->Object = (ITextDecorator *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1469d53b0

UClass * __cdecl URichTextBlockDecorator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URichTextBlockDecorator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"RichTextBlockDecorator",
               &Z_Registration_Info_UClass_URichTextBlockDecorator.InnerSingleton,
               StaticRegisterNativesURichTextBlockDecorator,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<URichTextBlockDecorator>,
               InternalVTableHelperCtorCaller<URichTextBlockDecorator>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URichTextBlockDecorator.InnerSingleton;
}

// StaticRegisterNativesURichTextBlockDecorator @ 146a1ed80

void __cdecl URichTextBlockDecorator::StaticRegisterNativesURichTextBlockDecorator(void)

{
  return;
}

