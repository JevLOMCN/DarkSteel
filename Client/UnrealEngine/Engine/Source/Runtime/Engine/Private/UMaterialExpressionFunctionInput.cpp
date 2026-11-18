// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 1472a7390

UClass * __cdecl UMaterialExpressionFunctionInput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionFunctionInput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionFunctionInput",
               &Z_Registration_Info_UClass_UMaterialExpressionFunctionInput.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionFunctionInput,0x130,0x10,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionFunctionInput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionFunctionInput>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionFunctionInput.InnerSingleton;
}

// UMaterialExpressionFunctionInput @ 1472ad690

UMaterialExpressionFunctionInput * __thiscall
UMaterialExpressionFunctionInput::UMaterialExpressionFunctionInput
          (UMaterialExpressionFunctionInput *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionFunctionInput__6B_;
  (this->Preview).OutputIndex = 0;
  (this->Preview).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Preview).InputName.Number = 0;
  (this->Preview).MaskR = 0;
  (this->Preview).MaskG = 0;
  (this->Preview).MaskB = 0;
  (this->Preview).MaskA = 0;
  (this->Preview).Expression = (UMaterialExpression *)0x0;
  (this->InputName).ComparisonIndex = 0;
  (this->InputName).Number = 0;
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  (this->Id).A = 0;
  (this->Id).B = 0;
  (this->Id).C = 0;
  (this->Id).D = 0;
  *(undefined8 *)&(this->PreviewValue).field0_0x0 = 0;
  (this->PreviewValue).field0_0x0._s_0.Z = 0.0;
  (this->BlendInputRelevance).Value = '\0';
  (this->PreviewValue).field0_0x0._s_0.W = 1.0;
  return this;
}

// ~UMaterialExpressionFunctionInput @ 1472af890

void __thiscall
UMaterialExpressionFunctionInput::~UMaterialExpressionFunctionInput
          (UMaterialExpressionFunctionInput *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionFunctionInput__6B_;
  pFVar1 = (this->Description).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b2ae0

UClass * __cdecl UMaterialExpressionFunctionInput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionFunctionInput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionFunctionInput",
               &Z_Registration_Info_UClass_UMaterialExpressionFunctionInput.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionFunctionInput,0x130,0x10,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionFunctionInput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionFunctionInput>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionFunctionInput.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionFunctionInput @ 1472b45d0

void __cdecl
UMaterialExpressionFunctionInput::StaticRegisterNativesUMaterialExpressionFunctionInput(void)

{
  return;
}

// UMaterialExpressionFunctionInput @ 148afc480

UMaterialExpressionFunctionInput * __thiscall
UMaterialExpressionFunctionInput::UMaterialExpressionFunctionInput
          (UMaterialExpressionFunctionInput *this,FObjectInitializer *param_1)

{
  FName local_res8 [4];
  
  UObject::UObject((UObject *)this,param_1);
  (this->PreviewValue).field0_0x0._s_0.W = 1.0;
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
  (this->Preview).OutputIndex = 0;
  (this->Preview).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Preview).InputName.Number = 0;
  (this->Preview).MaskR = 0;
  (this->Preview).MaskG = 0;
  (this->Preview).MaskB = 0;
  (this->Preview).MaskA = 0;
  (this->Preview).Expression = (UMaterialExpression *)0x0;
  (this->InputName).ComparisonIndex = 0;
  (this->InputName).Number = 0;
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  (this->Id).A = 0;
  (this->Id).B = 0;
  (this->Id).C = 0;
  (this->Id).D = 0;
  *(undefined8 *)&(this->PreviewValue).field0_0x0 = 0;
  (this->PreviewValue).field0_0x0._s_0.Z = 0.0;
  (this->BlendInputRelevance).Value = '\0';
  this->_padding_ = (longlong)&___7UMaterialExpressionFunctionInput__6B_;
  (this->InputType).Value = '\x02';
  ::FName::FName(local_res8,L"In");
  this->InputName = local_res8[0];
  return this;
}

// ConditionallyGenerateId @ 148afff20

void __thiscall
UMaterialExpressionFunctionInput::ConditionallyGenerateId
          (UMaterialExpressionFunctionInput *this,bool param_1)

{
  FGuid *pFVar1;
  FGuid local_28;
  FString local_18;
  
  pFVar1 = &this->Id;
  if ((param_1) ||
     ((((this->Id).D == 0 && (this->Id).C == 0) && (this->Id).B == 0) && pFVar1->A == 0)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    FGuid::NewGuid(&local_28);
    pFVar1->A = local_28.A;
    pFVar1->B = local_28.B;
    (this->Id).C = local_28.C;
    (this->Id).D = local_28.D;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetInputTypeDisplayName @ 148b00d20

FString * __cdecl
UMaterialExpressionFunctionInput::GetInputTypeDisplayName
          (FString *__return_storage_ptr__,EFunctionInputType param_1)

{
  FText *this;
  FString *pFVar1;
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FunctionInputEnum = StaticEnum<enum_EFunctionInputType>();
      _Init_thread_footer(&::_TSS0);
    }
  }
  this = UEnum::GetDisplayNameTextByValue(FunctionInputEnum,&local_18,(longlong)(int)param_1);
  pFVar1 = FText::ToString(this);
  ::FString::FString(__return_storage_ptr__,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetInputTypeFromMaterialType @ 148b00dd0

EFunctionInputType __cdecl
UMaterialExpressionFunctionInput::GetInputTypeFromMaterialType(EMaterialValueType param_1)

{
  EFunctionInputType EVar1;
  
  if ((ulonglong)param_1 < 0x41) {
    if (param_1 != MCT_Texture2DArray) {
      switch(param_1) {
      case MCT_Float1:
      case MCT_Float:
        return FunctionInput_Scalar;
      case MCT_Float2:
        return FunctionInput_Vector2;
      default:
        return FunctionInput_MAX;
      case MCT_Float3:
        return FunctionInput_Vector3;
      case MCT_Float4:
        return FunctionInput_Vector4;
      case MCT_Texture2D:
        return FunctionInput_Texture2D;
      case MCT_TextureCube:
        return FunctionInput_TextureCube;
      }
    }
    return FunctionInput_Texture2DArray;
  }
  if (0x1000 < (ulonglong)param_1) {
    if (param_1 == MCT_Substrate) {
      return FunctionInput_Substrate;
    }
    if (param_1 != MCT_Bool) {
      EVar1 = FunctionInput_Texture2D;
      if (param_1 != MCT_Texture) {
        EVar1 = FunctionInput_MAX;
      }
      return EVar1;
    }
    return FunctionInput_Bool;
  }
  if (param_1 == MCT_TextureExternal) {
    return FunctionInput_TextureExternal;
  }
  if (param_1 != MCT_VolumeTexture) {
    if (param_1 != MCT_StaticBool) {
      EVar1 = FunctionInput_MAX;
      if (param_1 == MCT_MaterialAttributes) {
        EVar1 = FunctionInput_MaterialAttributes;
      }
      return EVar1;
    }
    return FunctionInput_StaticBool;
  }
  return FunctionInput_VolumeTexture;
}

// GetMaterialTypeFromInputType @ 148b00f30

EMaterialValueType __cdecl
UMaterialExpressionFunctionInput::GetMaterialTypeFromInputType(EFunctionInputType param_1)

{
  switch(param_1) {
  case FunctionInput_Scalar:
    return MCT_Float;
  case FunctionInput_Vector2:
    return MCT_Float2;
  case FunctionInput_Vector3:
    return MCT_Float3;
  case FunctionInput_Vector4:
    return MCT_Float4;
  case FunctionInput_Texture2D:
    return MCT_Texture2D;
  case FunctionInput_TextureCube:
    return MCT_TextureCube;
  case FunctionInput_Texture2DArray:
    return MCT_Texture2DArray;
  case FunctionInput_VolumeTexture:
    return MCT_VolumeTexture;
  case FunctionInput_StaticBool:
    return MCT_StaticBool;
  case FunctionInput_MaterialAttributes:
    return MCT_MaterialAttributes;
  case FunctionInput_TextureExternal:
    return MCT_TextureExternal;
  case FunctionInput_Bool:
    return MCT_Bool;
  case FunctionInput_Substrate:
    return MCT_Substrate;
  default:
    return MCT_Unknown;
  }
}

// IsAllowedIn @ 148b02690

bool __thiscall
UMaterialExpressionFunctionInput::IsAllowedIn
          (UMaterialExpressionFunctionInput *this,UObject *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialFunction_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      bVar2 = IsExpressionClassPermitted((UClass *)this->_padding_);
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// PostDuplicate @ 148b02910

void __thiscall
UMaterialExpressionFunctionInput::PostDuplicate(UMaterialExpressionFunctionInput *this,bool param_1)

{
  FGuid local_28;
  FString local_18;
  
  if ((((this->Id).D == 0 && (this->Id).C == 0) && (this->Id).B == 0) && (this->Id).A == 0) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    FGuid::NewGuid(&local_28);
    (this->Id).A = local_28.A;
    (this->Id).B = local_28.B;
    (this->Id).C = local_28.C;
    (this->Id).D = local_28.D;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PostLoad @ 148b02f30

void __thiscall UMaterialExpressionFunctionInput::PostLoad(UMaterialExpressionFunctionInput *this)

{
  FGuid local_28;
  FString local_18;
  
  UMaterialExpression::PostLoad((UMaterialExpression *)this);
  if ((((this->Id).D == 0 && (this->Id).C == 0) && (this->Id).B == 0) && (this->Id).A == 0) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    FGuid::NewGuid(&local_28);
    (this->Id).A = local_28.A;
    (this->Id).B = local_28.B;
    (this->Id).C = local_28.C;
    (this->Id).D = local_28.D;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

