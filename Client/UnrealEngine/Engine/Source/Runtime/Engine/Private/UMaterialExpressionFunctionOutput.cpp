// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 1472a7670

UClass * __cdecl UMaterialExpressionFunctionOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionFunctionOutput.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionFunctionOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionFunctionOutput.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionFunctionOutput,0x110,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionFunctionOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionFunctionOutput>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionFunctionOutput.InnerSingleton;
}

// UMaterialExpressionFunctionOutput @ 1472ad720

UMaterialExpressionFunctionOutput * __thiscall
UMaterialExpressionFunctionOutput::UMaterialExpressionFunctionOutput
          (UMaterialExpressionFunctionOutput *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionFunctionOutput__6B_;
  (this->OutputName).ComparisonIndex = 0;
  (this->OutputName).Number = 0;
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  (this->A).OutputIndex = 0;
  (this->A).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->A).InputName.Number = 0;
  (this->A).MaskR = 0;
  (this->A).MaskG = 0;
  (this->A).MaskB = 0;
  (this->A).MaskA = 0;
  (this->A).Expression = (UMaterialExpression *)0x0;
  (this->Id).A = 0;
  (this->Id).B = 0;
  (this->Id).C = 0;
  (this->Id).D = 0;
  return this;
}

// ~UMaterialExpressionFunctionOutput @ 1472af8d0

void __thiscall
UMaterialExpressionFunctionOutput::~UMaterialExpressionFunctionOutput
          (UMaterialExpressionFunctionOutput *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionFunctionOutput__6B_;
  pFVar1 = (this->Description).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b2ba0

UClass * __cdecl UMaterialExpressionFunctionOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionFunctionOutput.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionFunctionOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionFunctionOutput.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionFunctionOutput,0x110,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionFunctionOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionFunctionOutput>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionFunctionOutput.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionFunctionOutput @ 1472b45e0

void __cdecl
UMaterialExpressionFunctionOutput::StaticRegisterNativesUMaterialExpressionFunctionOutput(void)

{
  return;
}

// UMaterialExpressionFunctionOutput @ 148afc580

UMaterialExpressionFunctionOutput * __thiscall
UMaterialExpressionFunctionOutput::UMaterialExpressionFunctionOutput
          (UMaterialExpressionFunctionOutput *this,FObjectInitializer *param_1)

{
  FName local_res8 [4];
  
  UObject::UObject((UObject *)this,param_1);
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
  (this->OutputName).ComparisonIndex = 0;
  (this->OutputName).Number = 0;
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  (this->A).OutputIndex = 0;
  (this->A).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->A).InputName.Number = 0;
  (this->A).MaskR = 0;
  (this->A).MaskG = 0;
  (this->A).MaskB = 0;
  (this->A).MaskA = 0;
  (this->A).Expression = (UMaterialExpression *)0x0;
  (this->Id).A = 0;
  (this->Id).B = 0;
  (this->Id).C = 0;
  (this->Id).D = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionFunctionOutput__6B_;
  ::FName::FName(local_res8,L"Result");
  this->OutputName = local_res8[0];
  return this;
}

// ConditionallyGenerateId @ 148afff80

void __thiscall
UMaterialExpressionFunctionOutput::ConditionallyGenerateId
          (UMaterialExpressionFunctionOutput *this,bool param_1)

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

// IsAllowedIn @ 148b02700

bool __thiscall
UMaterialExpressionFunctionOutput::IsAllowedIn
          (UMaterialExpressionFunctionOutput *this,UObject *param_1)

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

// PostDuplicate @ 148b02980

void __thiscall
UMaterialExpressionFunctionOutput::PostDuplicate
          (UMaterialExpressionFunctionOutput *this,bool param_1)

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

// PostLoad @ 148b02fa0

void __thiscall UMaterialExpressionFunctionOutput::PostLoad(UMaterialExpressionFunctionOutput *this)

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

