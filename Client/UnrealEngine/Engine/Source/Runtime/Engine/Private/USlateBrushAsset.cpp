// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1486785d0

UClass * __cdecl USlateBrushAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateBrushAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SlateBrushAsset",
               &Z_Registration_Info_UClass_USlateBrushAsset.InnerSingleton,
               StaticRegisterNativesUSlateBrushAsset,0xe0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USlateBrushAsset>,
               InternalVTableHelperCtorCaller<USlateBrushAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateBrushAsset.InnerSingleton;
}

// USlateBrushAsset @ 148696720

USlateBrushAsset * __thiscall
USlateBrushAsset::USlateBrushAsset(USlateBrushAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USlateBrushAsset__6B_;
  FSlateBrush::FSlateBrush(&this->Brush);
  return this;
}

// USlateBrushAsset @ 148696750

USlateBrushAsset * __thiscall
USlateBrushAsset::USlateBrushAsset(USlateBrushAsset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USlateBrushAsset__6B_;
  FSlateBrush::FSlateBrush(&this->Brush);
  return this;
}

// ~USlateBrushAsset @ 14869b3a0

void __thiscall USlateBrushAsset::~USlateBrushAsset(USlateBrushAsset *this)

{
  this->_padding_ = (longlong)&___7USlateBrushAsset__6B_;
  (this->Brush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Brush).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1486c3e80

UClass * __cdecl USlateBrushAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateBrushAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SlateBrushAsset",
               &Z_Registration_Info_UClass_USlateBrushAsset.InnerSingleton,
               StaticRegisterNativesUSlateBrushAsset,0xe0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USlateBrushAsset>,
               InternalVTableHelperCtorCaller<USlateBrushAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateBrushAsset.InnerSingleton;
}

// StaticRegisterNativesUSlateBrushAsset @ 1486f17a0

void __cdecl USlateBrushAsset::StaticRegisterNativesUSlateBrushAsset(void)

{
  return;
}

