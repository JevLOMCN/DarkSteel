// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticClass @ 1472dd4e0

UClass * __cdecl UMaterialFunction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialFunction.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialFunction",
               &Z_Registration_Info_UClass_UMaterialFunction.InnerSingleton,
               StaticRegisterNativesUMaterialFunction,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMaterialFunction>,
               InternalVTableHelperCtorCaller<UMaterialFunction>,aFStackX_8,
               UMaterialFunctionInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialFunction.InnerSingleton;
}

// UMaterialFunction @ 1472e3070

UMaterialFunction * __thiscall
UMaterialFunction::UMaterialFunction(UMaterialFunction *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialFunction__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  (this->UserExposedCaption).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserExposedCaption).Data.ArrayNum = 0;
  (this->UserExposedCaption).Data.ArrayMax = 0;
  return this;
}

// ~UMaterialFunction @ 1472e3950

void __thiscall UMaterialFunction::~UMaterialFunction(UMaterialFunction *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialFunction__6B_;
  pFVar1 = (this->UserExposedCaption).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Description).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMaterialFunctionInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetBaseFunction @ 1472e5180

UMaterialFunction * __thiscall
UMaterialFunction::GetBaseFunction
          (UMaterialFunction *this,TMaterialRecursionGuard<UMaterialFunctionInterface> *param_1)

{
  return this;
}

// GetBaseFunction @ 1472e5190

UMaterialFunction * __thiscall
UMaterialFunction::GetBaseFunction
          (UMaterialFunction *this,TMaterialRecursionGuard<UMaterialFunctionInterface> *param_1)

{
  return this;
}

// GetMaterialFunctionUsage @ 1472e5290

EMaterialFunctionUsage __thiscall
UMaterialFunction::GetMaterialFunctionUsage(UMaterialFunction *this)

{
  return (EMaterialFunctionUsage)this->_padding_;
}

// GetPrivateStaticClass @ 1472e7320

UClass * __cdecl UMaterialFunction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialFunction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialFunction",
               &Z_Registration_Info_UClass_UMaterialFunction.InnerSingleton,
               StaticRegisterNativesUMaterialFunction,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMaterialFunction>,
               InternalVTableHelperCtorCaller<UMaterialFunction>,local_res8,
               UMaterialFunctionInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialFunction.InnerSingleton;
}

// Serialize @ 1472e7740

void __thiscall
UMaterialFunction::Serialize(UMaterialFunction *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUMaterialFunction @ 1472e7a50

void __cdecl UMaterialFunction::StaticRegisterNativesUMaterialFunction(void)

{
  return;
}

// UMaterialFunction @ 148affc10

UMaterialFunction * __thiscall
UMaterialFunction::UMaterialFunction(UMaterialFunction *this,FObjectInitializer *param_1)

{
  UMaterialFunctionInterface::UMaterialFunctionInterface((UMaterialFunctionInterface *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UMaterialFunction__6B_;
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  (this->UserExposedCaption).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserExposedCaption).Data.ArrayNum = 0;
  (this->UserExposedCaption).Data.ArrayMax = 0;
  return this;
}

// PostLoad @ 148b03200

void __thiscall UMaterialFunction::PostLoad(UMaterialFunction *this)

{
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  FGuid local_28;
  FString local_18;
  
  FLLMScope::FLLMScope(local_res8,Materials,false,None,Default,true);
  FMemScope::FMemScope(local_res10,Materials,true);
  UObject::PostLoad((UObject *)this);
  if (((*(int *)((longlong)&this->_padding_ + 4) == 0 && (int)this->_padding_ == 0) &&
      *(int *)((longlong)&this->_padding_ + 4) == 0) && (int)this->_padding_ == 0) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    FGuid::NewGuid(&local_28);
    this->_padding_ = local_28._0_8_;
    this->_padding_ = local_28._8_8_;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// PreSave @ 148b03590

void __thiscall UMaterialFunction::PreSave(UMaterialFunction *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// Serialize @ 148b046c0

void __thiscall UMaterialFunction::Serialize(UMaterialFunction *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000148b046e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  return;
}

// ValidateFunctionUsage @ 148b04890

bool __thiscall
UMaterialFunction::ValidateFunctionUsage
          (UMaterialFunction *this,FMaterialCompiler *param_1,FFunctionExpressionOutput *param_2)

{
  return true;
}

