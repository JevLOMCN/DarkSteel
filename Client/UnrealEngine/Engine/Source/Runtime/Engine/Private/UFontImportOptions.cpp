// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14727b460

UClass * __cdecl UFontImportOptions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UFontImportOptions.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"FontImportOptions",
               &Z_Registration_Info_UClass_UFontImportOptions.InnerSingleton,
               StaticRegisterNativesUFontImportOptions,0xd8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UFontImportOptions>,
               InternalVTableHelperCtorCaller<UFontImportOptions>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFontImportOptions.InnerSingleton;
}

// UFontImportOptions @ 14727f7a0

UFontImportOptions * __thiscall
UFontImportOptions::UFontImportOptions(UFontImportOptions *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UFontImportOptions__6B_;
  FFontImportOptionsData::FFontImportOptionsData(&this->Data);
  return this;
}

// ~UFontImportOptions @ 14727fcc0

void __thiscall UFontImportOptions::~UFontImportOptions(UFontImportOptions *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UFontImportOptions__6B_;
  pFVar1 = (this->Data).CharsFileWildcard.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Data).CharsFilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Data).UnicodeRange.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Data).Chars.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Data).FontName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147280ad0

UClass * __cdecl UFontImportOptions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFontImportOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"FontImportOptions",
               &Z_Registration_Info_UClass_UFontImportOptions.InnerSingleton,
               StaticRegisterNativesUFontImportOptions,0xd8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UFontImportOptions>,
               InternalVTableHelperCtorCaller<UFontImportOptions>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFontImportOptions.InnerSingleton;
}

// StaticRegisterNativesUFontImportOptions @ 1472814f0

void __cdecl UFontImportOptions::StaticRegisterNativesUFontImportOptions(void)

{
  return;
}

// UFontImportOptions @ 147bbc6d0

UFontImportOptions * __thiscall
UFontImportOptions::UFontImportOptions(UFontImportOptions *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UFontImportOptions__6B_;
  FFontImportOptionsData::FFontImportOptionsData(&this->Data);
  return this;
}

