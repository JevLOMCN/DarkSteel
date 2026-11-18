// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1476742c0

UClass * __cdecl UBookMark::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBookMark.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BookMark",&Z_Registration_Info_UClass_UBookMark.InnerSingleton,
               StaticRegisterNativesUBookMark,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBookMark>,InternalVTableHelperCtorCaller<UBookMark>,local_res8,
               UBookmarkBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBookMark.InnerSingleton;
}

// UBookMark @ 147688960

UBookMark * __thiscall UBookMark::UBookMark(UBookMark *this,FVTableHelper *param_1)

{
  UBookmarkBase::UBookmarkBase((UBookmarkBase *)this,param_1);
  this->_padding_ = (longlong)&___7UBookMark__6B_;
  (this->HiddenLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HiddenLevels).ArrayNum = 0;
  (this->HiddenLevels).ArrayMax = 0;
  return this;
}

// UBookMark @ 1476889a0

UBookMark * __thiscall UBookMark::UBookMark(UBookMark *this,FObjectInitializer *param_1)

{
  UBookmarkBase::UBookmarkBase((UBookmarkBase *)this,param_1);
  this->_padding_ = (longlong)&___7UBookMark__6B_;
  (this->HiddenLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HiddenLevels).ArrayNum = 0;
  (this->HiddenLevels).ArrayMax = 0;
  return this;
}

// ~UBookMark @ 14768a960

void __thiscall UBookMark::~UBookMark(UBookMark *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UBookMark__6B_;
  DestructItems<FString,int>
            ((FString *)(this->HiddenLevels).AllocatorInstance.Data,(this->HiddenLevels).ArrayNum);
  pFVar1 = (this->HiddenLevels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UBookmarkBase::~UBookmarkBase((UBookmarkBase *)this);
  return;
}

// GetPrivateStaticClass @ 1476b4240

UClass * __cdecl UBookMark::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBookMark.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BookMark",&Z_Registration_Info_UClass_UBookMark.InnerSingleton,
               StaticRegisterNativesUBookMark,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBookMark>,InternalVTableHelperCtorCaller<UBookMark>,local_res8,
               UBookmarkBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBookMark.InnerSingleton;
}

// StaticRegisterNativesUBookMark @ 1476ca320

void __cdecl UBookMark::StaticRegisterNativesUBookMark(void)

{
  return;
}

