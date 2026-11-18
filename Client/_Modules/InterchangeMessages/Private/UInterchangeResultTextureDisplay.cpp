// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeMessages
// Functions: 6

// StaticClass @ 14e65d4a0

UClass * __cdecl UInterchangeResultTextureDisplay::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultTextureDisplay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeMessages",L"InterchangeResultTextureDisplay",
               &Z_Registration_Info_UClass_UInterchangeResultTextureDisplay.InnerSingleton,
               StaticRegisterNativesUInterchangeResultTextureDisplay,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeResultTextureDisplay>,
               InternalVTableHelperCtorCaller<UInterchangeResultTextureDisplay>,local_res8,
               UInterchangeResultDisplay_Generic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultTextureDisplay.InnerSingleton;
}

// UInterchangeResultTextureDisplay @ 14e65e8d0

UInterchangeResultTextureDisplay * __thiscall
UInterchangeResultTextureDisplay::UInterchangeResultTextureDisplay
          (UInterchangeResultTextureDisplay *this,FVTableHelper *param_1)

{
  UInterchangeResultDisplay_Generic::UInterchangeResultDisplay_Generic
            ((UInterchangeResultDisplay_Generic *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeResultTextureDisplay__6B_;
  (this->TextureName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureName).Data.ArrayNum = 0;
  (this->TextureName).Data.ArrayMax = 0;
  return this;
}

// UInterchangeResultTextureDisplay @ 14e65e910

UInterchangeResultTextureDisplay * __thiscall
UInterchangeResultTextureDisplay::UInterchangeResultTextureDisplay
          (UInterchangeResultTextureDisplay *this,FObjectInitializer *param_1)

{
  UInterchangeResultDisplay_Generic::UInterchangeResultDisplay_Generic
            ((UInterchangeResultDisplay_Generic *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeResultTextureDisplay__6B_;
  (this->TextureName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureName).Data.ArrayNum = 0;
  (this->TextureName).Data.ArrayMax = 0;
  return this;
}

// ~UInterchangeResultTextureDisplay @ 14e65ebd0

void __thiscall
UInterchangeResultTextureDisplay::~UInterchangeResultTextureDisplay
          (UInterchangeResultTextureDisplay *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeResultTextureDisplay__6B_;
  pFVar1 = (this->TextureName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeResultDisplay_Generic::~UInterchangeResultDisplay_Generic
            ((UInterchangeResultDisplay_Generic *)this);
  return;
}

// GetPrivateStaticClass @ 14e65f480

UClass * __cdecl UInterchangeResultTextureDisplay::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultTextureDisplay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeMessages",L"InterchangeResultTextureDisplay",
               &Z_Registration_Info_UClass_UInterchangeResultTextureDisplay.InnerSingleton,
               StaticRegisterNativesUInterchangeResultTextureDisplay,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeResultTextureDisplay>,
               InternalVTableHelperCtorCaller<UInterchangeResultTextureDisplay>,local_res8,
               UInterchangeResultDisplay_Generic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultTextureDisplay.InnerSingleton;
}

// StaticRegisterNativesUInterchangeResultTextureDisplay @ 14e65fea0

void __cdecl
UInterchangeResultTextureDisplay::StaticRegisterNativesUInterchangeResultTextureDisplay(void)

{
  return;
}

