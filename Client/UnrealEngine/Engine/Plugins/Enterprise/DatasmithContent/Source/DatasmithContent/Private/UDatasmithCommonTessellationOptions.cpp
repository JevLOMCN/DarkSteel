// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 6

// StaticClass @ 14e2eafb0

UClass * __cdecl UDatasmithCommonTessellationOptions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithCommonTessellationOptions.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithCommonTessellationOptions",
               &Z_Registration_Info_UClass_UDatasmithCommonTessellationOptions.InnerSingleton,
               StaticRegisterNativesUDatasmithCommonTessellationOptions,0x48,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UDatasmithCommonTessellationOptions>,
               InternalVTableHelperCtorCaller<UDatasmithCommonTessellationOptions>,local_res8,
               UDatasmithOptionsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithCommonTessellationOptions.InnerSingleton;
}

// UDatasmithCommonTessellationOptions @ 14e2f47f0

UDatasmithCommonTessellationOptions * __thiscall
UDatasmithCommonTessellationOptions::UDatasmithCommonTessellationOptions
          (UDatasmithCommonTessellationOptions *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDatasmithCommonTessellationOptions__6B_;
  (this->Options).GeometricTolerance = 0.001;
  (this->Options).StitchingTolerance = 0.001;
  (this->Options).ChordTolerance = 0.2;
  (this->Options).MaxEdgeLength = 0.0;
  (this->Options).NormalTolerance = 20.0;
  (this->Options).StitchingTechnique = StitchingSew;
  (this->Options).bUseCADKernel = false;
  return this;
}

// UDatasmithCommonTessellationOptions @ 14e2f4840

UDatasmithCommonTessellationOptions * __thiscall
UDatasmithCommonTessellationOptions::UDatasmithCommonTessellationOptions
          (UDatasmithCommonTessellationOptions *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDatasmithCommonTessellationOptions__6B_;
  (this->Options).GeometricTolerance = 0.001;
  (this->Options).StitchingTolerance = 0.001;
  (this->Options).ChordTolerance = 0.2;
  (this->Options).MaxEdgeLength = 0.0;
  (this->Options).NormalTolerance = 20.0;
  (this->Options).StitchingTechnique = StitchingSew;
  (this->Options).bUseCADKernel = false;
  return this;
}

// ~UDatasmithCommonTessellationOptions @ 14e2f5f00

void __thiscall
UDatasmithCommonTessellationOptions::~UDatasmithCommonTessellationOptions
          (UDatasmithCommonTessellationOptions *this)

{
  this->_padding_ = (longlong)&___7UDatasmithOptionsBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e2fc240

UClass * __cdecl UDatasmithCommonTessellationOptions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithCommonTessellationOptions.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithCommonTessellationOptions",
               &Z_Registration_Info_UClass_UDatasmithCommonTessellationOptions.InnerSingleton,
               StaticRegisterNativesUDatasmithCommonTessellationOptions,0x48,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UDatasmithCommonTessellationOptions>,
               InternalVTableHelperCtorCaller<UDatasmithCommonTessellationOptions>,local_res8,
               UDatasmithOptionsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithCommonTessellationOptions.InnerSingleton;
}

// StaticRegisterNativesUDatasmithCommonTessellationOptions @ 14e2fecb0

void __cdecl
UDatasmithCommonTessellationOptions::StaticRegisterNativesUDatasmithCommonTessellationOptions(void)

{
  return;
}

