// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1472a7f50

UClass * __cdecl UMaterialExpressionMaterialCache::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMaterialCache",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialCache.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialCache,0x120,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialCache>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialCache>,local_res8,
               UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialCache.InnerSingleton;
}

// UMaterialExpressionMaterialCache @ 1472aeff0

UMaterialExpressionMaterialCache * __thiscall
UMaterialExpressionMaterialCache::UMaterialExpressionMaterialCache
          (UMaterialExpressionMaterialCache *this,FVTableHelper *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->bIsSample = false;
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialCache__6B_;
  (this->Tag).field0_0x0.DebugPtr = (UMaterialCacheVirtualTextureTag *)0x0;
  (this->Attributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attributes).ArrayNum = 0;
  (this->Attributes).ArrayMax = 0;
  (this->Primitive).OutputIndex = 0;
  (this->Primitive).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Primitive).InputName.Number = 0;
  (this->Primitive).MaskR = 0;
  (this->Primitive).MaskG = 0;
  (this->Primitive).MaskB = 0;
  (this->Primitive).MaskA = 0;
  (this->Primitive).Expression = (UMaterialExpression *)0x0;
  (this->UV).OutputIndex = 0;
  (this->UV).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->UV).InputName.Number = 0;
  (this->UV).MaskR = 0;
  (this->UV).MaskG = 0;
  (this->UV).MaskB = 0;
  (this->UV).MaskA = 0;
  (this->UV).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionMaterialCache @ 1472afcd0

void __thiscall
UMaterialExpressionMaterialCache::~UMaterialExpressionMaterialCache
          (UMaterialExpressionMaterialCache *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialCache__6B_;
  DestructItems<FMaterialExpressionMaterialCacheAttribute,int>
            ((FMaterialExpressionMaterialCacheAttribute *)(this->Attributes).AllocatorInstance.Data,
             (this->Attributes).ArrayNum);
  pFVar1 = (this->Attributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpressionCustomOutput::~UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this);
  return;
}

// GetDisplayName @ 1472b19f0

FString * __thiscall
UMaterialExpressionMaterialCache::GetDisplayName
          (UMaterialExpressionMaterialCache *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"MaterialCache");
  return __return_storage_ptr__;
}

// GetFunctionName @ 1472b1a20

FString * __thiscall
UMaterialExpressionMaterialCache::GetFunctionName
          (UMaterialExpressionMaterialCache *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"GetMaterialCache");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1472b3da0

UClass * __cdecl UMaterialExpressionMaterialCache::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMaterialCache",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialCache.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialCache,0x120,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialCache>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialCache>,local_res8,
               UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialCache.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMaterialCache @ 1472b4760

void __cdecl
UMaterialExpressionMaterialCache::StaticRegisterNativesUMaterialExpressionMaterialCache(void)

{
  return;
}

// UMaterialExpressionMaterialCache @ 148afcce0

UMaterialExpressionMaterialCache * __thiscall
UMaterialExpressionMaterialCache::UMaterialExpressionMaterialCache
          (UMaterialExpressionMaterialCache *this,FObjectInitializer *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->bIsSample = false;
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialCache__6B_;
  (this->Tag).field0_0x0.DebugPtr = (UMaterialCacheVirtualTextureTag *)0x0;
  (this->Attributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attributes).ArrayNum = 0;
  (this->Attributes).ArrayMax = 0;
  (this->Primitive).OutputIndex = 0;
  (this->Primitive).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Primitive).InputName.Number = 0;
  (this->Primitive).MaskR = 0;
  (this->Primitive).MaskG = 0;
  (this->Primitive).MaskB = 0;
  (this->Primitive).MaskA = 0;
  (this->Primitive).Expression = (UMaterialExpression *)0x0;
  (this->UV).OutputIndex = 0;
  (this->UV).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->UV).InputName.Number = 0;
  (this->UV).MaskR = 0;
  (this->UV).MaskG = 0;
  (this->UV).MaskB = 0;
  (this->UV).MaskA = 0;
  (this->UV).Expression = (UMaterialExpression *)0x0;
  return this;
}

