// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1475134c0

UClass * __cdecl UBoneMaskFilter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoneMaskFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BoneMaskFilter",
               &Z_Registration_Info_UClass_UBoneMaskFilter.InnerSingleton,
               StaticRegisterNativesUBoneMaskFilter,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBoneMaskFilter>,InternalVTableHelperCtorCaller<UBoneMaskFilter>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoneMaskFilter.InnerSingleton;
}

// UBoneMaskFilter @ 147532a30

UBoneMaskFilter * __thiscall
UBoneMaskFilter::UBoneMaskFilter(UBoneMaskFilter *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBoneMaskFilter__6B_;
  (this->BlendPoses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendPoses).ArrayNum = 0;
  (this->BlendPoses).ArrayMax = 0;
  return this;
}

// UBoneMaskFilter @ 147532a70

UBoneMaskFilter * __thiscall
UBoneMaskFilter::UBoneMaskFilter(UBoneMaskFilter *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBoneMaskFilter__6B_;
  (this->BlendPoses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendPoses).ArrayNum = 0;
  (this->BlendPoses).ArrayMax = 0;
  return this;
}

// ~UBoneMaskFilter @ 147533d90

void __thiscall UBoneMaskFilter::~UBoneMaskFilter(UBoneMaskFilter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UBoneMaskFilter__6B_;
  DestructItems<FInputBlendPose,int>
            ((FInputBlendPose *)(this->BlendPoses).AllocatorInstance.Data,
             (this->BlendPoses).ArrayNum);
  pFVar1 = (this->BlendPoses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14755f1d0

UClass * __cdecl UBoneMaskFilter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoneMaskFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BoneMaskFilter",
               &Z_Registration_Info_UClass_UBoneMaskFilter.InnerSingleton,
               StaticRegisterNativesUBoneMaskFilter,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBoneMaskFilter>,InternalVTableHelperCtorCaller<UBoneMaskFilter>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoneMaskFilter.InnerSingleton;
}

// StaticRegisterNativesUBoneMaskFilter @ 14757ad30

void __cdecl UBoneMaskFilter::StaticRegisterNativesUBoneMaskFilter(void)

{
  return;
}

