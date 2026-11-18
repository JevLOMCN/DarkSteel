// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147297990

UClass * __cdecl UMaterialExpressionComposite::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionComposite.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionComposite",
               &Z_Registration_Info_UClass_UMaterialExpressionComposite.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionComposite,0xd0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionComposite>,
               InternalVTableHelperCtorCaller<UMaterialExpressionComposite>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionComposite.InnerSingleton;
}

// UMaterialExpressionComposite @ 14729c7e0

UMaterialExpressionComposite * __thiscall
UMaterialExpressionComposite::UMaterialExpressionComposite
          (UMaterialExpressionComposite *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionComposite__6B_;
  (this->SubgraphName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubgraphName).Data.ArrayNum = 0;
  (this->SubgraphName).Data.ArrayMax = 0;
  (this->InputExpressions).field0_0x0.DebugPtr = (UMaterialExpressionPinBase *)0x0;
  (this->OutputExpressions).field0_0x0.DebugPtr = (UMaterialExpressionPinBase *)0x0;
  return this;
}

// ~UMaterialExpressionComposite @ 14729d8d0

void __thiscall
UMaterialExpressionComposite::~UMaterialExpressionComposite(UMaterialExpressionComposite *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionComposite__6B_;
  pFVar1 = (this->SubgraphName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a0350

UClass * __cdecl UMaterialExpressionComposite::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionComposite.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionComposite",
               &Z_Registration_Info_UClass_UMaterialExpressionComposite.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionComposite,0xd0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionComposite>,
               InternalVTableHelperCtorCaller<UMaterialExpressionComposite>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionComposite.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionComposite @ 1472a1d00

void __cdecl UMaterialExpressionComposite::StaticRegisterNativesUMaterialExpressionComposite(void)

{
  return;
}

// UMaterialExpressionComposite @ 148afafc0

UMaterialExpressionComposite * __thiscall
UMaterialExpressionComposite::UMaterialExpressionComposite
          (UMaterialExpressionComposite *this,FObjectInitializer *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString local_18;
  
  UObject::UObject((UObject *)this,param_1);
  pFVar1 = &this->SubgraphName;
  this->_padding_ = (longlong)&___7UMaterialExpressionComposite__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubgraphName).Data.ArrayNum = 0;
  (this->SubgraphName).Data.ArrayMax = 0;
  (this->InputExpressions).field0_0x0.DebugPtr = (UMaterialExpressionPinBase *)0x0;
  (this->OutputExpressions).field0_0x0.DebugPtr = (UMaterialExpressionPinBase *)0x0;
  ::FString::FString(&local_18,"Collapsed Nodes");
  if (pFVar1 != &local_18) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (this->SubgraphName).Data.ArrayNum = local_18.Data.ArrayNum;
    (this->SubgraphName).Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

