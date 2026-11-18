// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeMessages
// Functions: 6

// StaticClass @ 14e65d560

UClass * __cdecl UInterchangeResultTextureWarning::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultTextureWarning.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeMessages",L"InterchangeResultTextureWarning",
               &Z_Registration_Info_UClass_UInterchangeResultTextureWarning.InnerSingleton,
               StaticRegisterNativesUInterchangeResultTextureWarning,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeResultTextureWarning>,
               InternalVTableHelperCtorCaller<UInterchangeResultTextureWarning>,local_res8,
               UInterchangeResultWarning::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultTextureWarning.InnerSingleton;
}

// UInterchangeResultTextureWarning @ 14e65e9f0

UInterchangeResultTextureWarning * __thiscall
UInterchangeResultTextureWarning::UInterchangeResultTextureWarning
          (UInterchangeResultTextureWarning *this,FVTableHelper *param_1)

{
  UInterchangeResultWarning::UInterchangeResultWarning((UInterchangeResultWarning *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeResultTextureWarning__6B_;
  (this->TextureName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureName).Data.ArrayNum = 0;
  (this->TextureName).Data.ArrayMax = 0;
  return this;
}

// UInterchangeResultTextureWarning @ 14e65ea30

UInterchangeResultTextureWarning * __thiscall
UInterchangeResultTextureWarning::UInterchangeResultTextureWarning
          (UInterchangeResultTextureWarning *this,FObjectInitializer *param_1)

{
  UInterchangeResultWarning::UInterchangeResultWarning((UInterchangeResultWarning *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeResultTextureWarning__6B_;
  (this->TextureName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureName).Data.ArrayNum = 0;
  (this->TextureName).Data.ArrayMax = 0;
  return this;
}

// ~UInterchangeResultTextureWarning @ 14e65ec70

void __thiscall
UInterchangeResultTextureWarning::~UInterchangeResultTextureWarning
          (UInterchangeResultTextureWarning *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeResultTextureWarning__6B_;
  pFVar1 = (this->TextureName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeResultWarning::~UInterchangeResultWarning((UInterchangeResultWarning *)this);
  return;
}

// GetPrivateStaticClass @ 14e65f600

UClass * __cdecl UInterchangeResultTextureWarning::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultTextureWarning.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeMessages",L"InterchangeResultTextureWarning",
               &Z_Registration_Info_UClass_UInterchangeResultTextureWarning.InnerSingleton,
               StaticRegisterNativesUInterchangeResultTextureWarning,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeResultTextureWarning>,
               InternalVTableHelperCtorCaller<UInterchangeResultTextureWarning>,local_res8,
               UInterchangeResultWarning::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultTextureWarning.InnerSingleton;
}

// StaticRegisterNativesUInterchangeResultTextureWarning @ 14e65fec0

void __cdecl
UInterchangeResultTextureWarning::StaticRegisterNativesUInterchangeResultTextureWarning(void)

{
  return;
}

