// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472a6580

UClass * __cdecl UMaterialExpressionMaterialFunctionCall::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialFunctionCall.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMaterialFunctionCall",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialFunctionCall.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialFunctionCall,0xe8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialFunctionCall>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialFunctionCall>,aFStackX_8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialFunctionCall.InnerSingleton;
}

// UMaterialExpressionMaterialFunctionCall @ 1472af080

UMaterialExpressionMaterialFunctionCall * __thiscall
UMaterialExpressionMaterialFunctionCall::UMaterialExpressionMaterialFunctionCall
          (UMaterialExpressionMaterialFunctionCall *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialFunctionCall__6B_;
  (this->MaterialFunction).field0_0x0.DebugPtr = (UMaterialFunctionInterface *)0x0;
  (this->FunctionInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FunctionInputs).ArrayNum = 0;
  (this->FunctionInputs).ArrayMax = 0;
  (this->FunctionOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FunctionOutputs).ArrayNum = 0;
  (this->FunctionOutputs).ArrayMax = 0;
  (this->FunctionParameterInfo).Name.ComparisonIndex = 0;
  (this->FunctionParameterInfo).Name.Number = 0;
  (this->FunctionParameterInfo).Association.Value = '\x02';
  (this->FunctionParameterInfo).Index = -1;
  return this;
}

// ~UMaterialExpressionMaterialFunctionCall @ 1472afd20

void __thiscall
UMaterialExpressionMaterialFunctionCall::~UMaterialExpressionMaterialFunctionCall
          (UMaterialExpressionMaterialFunctionCall *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialFunctionCall__6B_;
  pFVar1 = (this->FunctionOutputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FunctionInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b3e60

UClass * __cdecl UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialFunctionCall.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMaterialFunctionCall",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialFunctionCall.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialFunctionCall,0xe8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialFunctionCall>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialFunctionCall>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialFunctionCall.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMaterialFunctionCall @ 1472b4770

void __cdecl
UMaterialExpressionMaterialFunctionCall::
StaticRegisterNativesUMaterialExpressionMaterialFunctionCall(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UMaterialExpressionMaterialFunctionCall @ 148afcd70

UMaterialExpressionMaterialFunctionCall * __thiscall
UMaterialExpressionMaterialFunctionCall::UMaterialExpressionMaterialFunctionCall
          (UMaterialExpressionMaterialFunctionCall *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialFunctionCall__6B_;
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
  (this->MaterialFunction).field0_0x0.DebugPtr = (UMaterialFunctionInterface *)0x0;
  (this->FunctionInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FunctionInputs).ArrayNum = 0;
  (this->FunctionInputs).ArrayMax = 0;
  (this->FunctionOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FunctionOutputs).ArrayNum = 0;
  (this->FunctionOutputs).ArrayMax = 0;
  (this->FunctionParameterInfo).Name.ComparisonIndex = 0;
  (this->FunctionParameterInfo).Name.Number = 0;
  (this->FunctionParameterInfo).Association.Value = '\x02';
  (this->FunctionParameterInfo).Index = -1;
  return this;
}

// PostLoad @ 148b030d0

void __thiscall
UMaterialExpressionMaterialFunctionCall::PostLoad(UMaterialExpressionMaterialFunctionCall *this)

{
  UMaterialFunctionInterface *this_00;
  
  this_00 = (this->MaterialFunction).field0_0x0.DebugPtr;
  if (this_00 != (UMaterialFunctionInterface *)0x0) {
    UObject::ConditionalPreload((UObject *)this_00);
    UObject::ConditionalPostLoad((UObject *)(this->MaterialFunction).field0_0x0.DebugPtr);
  }
  UMaterialExpression::PostLoad((UMaterialExpression *)this);
  return;
}

