// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147740150

UClass * __cdecl UInitialActiveSoundParams::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInitialActiveSoundParams.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InitialActiveSoundParams",
               &Z_Registration_Info_UClass_UInitialActiveSoundParams.InnerSingleton,
               StaticRegisterNativesUInitialActiveSoundParams,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInitialActiveSoundParams>,
               InternalVTableHelperCtorCaller<UInitialActiveSoundParams>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInitialActiveSoundParams.InnerSingleton;
}

// UInitialActiveSoundParams @ 1477f0b60

UInitialActiveSoundParams * __thiscall
UInitialActiveSoundParams::UInitialActiveSoundParams
          (UInitialActiveSoundParams *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInitialActiveSoundParams__6B_;
  (this->AudioParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioParams).ArrayNum = 0;
  (this->AudioParams).ArrayMax = 0;
  return this;
}

// UInitialActiveSoundParams @ 1477f0ba0

UInitialActiveSoundParams * __thiscall
UInitialActiveSoundParams::UInitialActiveSoundParams
          (UInitialActiveSoundParams *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInitialActiveSoundParams__6B_;
  (this->AudioParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioParams).ArrayNum = 0;
  (this->AudioParams).ArrayMax = 0;
  return this;
}

// ~UInitialActiveSoundParams @ 1477f4940

void __thiscall
UInitialActiveSoundParams::~UInitialActiveSoundParams(UInitialActiveSoundParams *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInitialActiveSoundParams__6B_;
  DestructItems<FAudioParameter,int>
            ((FAudioParameter *)(this->AudioParams).AllocatorInstance.Data,
             (this->AudioParams).ArrayNum);
  pFVar1 = (this->AudioParams).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14783c6d0

UClass * __cdecl UInitialActiveSoundParams::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInitialActiveSoundParams.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InitialActiveSoundParams",
               &Z_Registration_Info_UClass_UInitialActiveSoundParams.InnerSingleton,
               StaticRegisterNativesUInitialActiveSoundParams,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInitialActiveSoundParams>,
               InternalVTableHelperCtorCaller<UInitialActiveSoundParams>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInitialActiveSoundParams.InnerSingleton;
}

// StaticRegisterNativesUInitialActiveSoundParams @ 147875ad0

void __cdecl UInitialActiveSoundParams::StaticRegisterNativesUInitialActiveSoundParams(void)

{
  return;
}

