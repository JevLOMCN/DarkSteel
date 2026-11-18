// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// ~FMaterialUniformExpression @ 147fa8e50

void __thiscall
FMaterialUniformExpression::~FMaterialUniformExpression(FMaterialUniformExpression *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetChildren @ 147fd1340

TArrayView<FMaterialUniformExpression_const_*,int> * __thiscall
FMaterialUniformExpression::GetChildren
          (FMaterialUniformExpression *this,
          TArrayView<FMaterialUniformExpression_const_*,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (FMaterialUniformExpression **)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetExternalTextureUniformExpression @ 147fd2880

FMaterialUniformExpressionExternalTexture * __thiscall
FMaterialUniformExpression::GetExternalTextureUniformExpression(FMaterialUniformExpression *this)

{
  return (FMaterialUniformExpressionExternalTexture *)0x0;
}

// GetNumberValue @ 147fd41d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMaterialUniformExpression::GetNumberValue
          (FMaterialUniformExpression *this,FMaterialRenderContext *param_1,FLinearColor *param_2)

{
  undefined8 uVar1;
  FValue *this_00;
  FLinearColor *pFVar2;
  undefined1 auStackY_498 [32];
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_468;
  undefined8 local_460;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_458;
  undefined8 local_450;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_448;
  undefined8 local_440;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_438;
  undefined8 local_430;
  FLinearColor local_428;
  FPreshaderValue local_418;
  FPreshaderStack local_3e8;
  FValue local_c8;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_498;
  local_468.Packed = 0;
  local_460 = 0;
  local_458.Packed = 0;
  local_450 = 0;
  local_448.Packed = 0;
  local_440 = 0;
  local_438.Packed = 0;
  local_430 = 0;
  (**(code **)(this->_padding_ + 0x38))(this,&local_468);
  local_3e8.Values.AllocatorInstance.Data =
       (FPreshaderType *)local_3e8.Values.AllocatorInstance.InlineData;
  local_3e8.Values.ArrayNum = 0;
  local_3e8.Components.AllocatorInstance.Data =
       (FValueComponent *)local_3e8.Components.AllocatorInstance.InlineData;
  local_3e8.Values.ArrayMax = 8;
  local_3e8.Components.ArrayNum = 0;
  local_3e8.Components.ArrayMax = 0x40;
  UE::Shader::FPreshaderData::Evaluate
            ((FPreshaderData *)&local_468.Frozen,&local_418,(FUniformExpressionSet *)0x0,param_1,
             &local_3e8);
  this_00 = UE::Shader::FPreshaderValue::AsShaderValue
                      (&local_418,&local_c8,(FStructTypeRegistry *)0x0);
  pFVar2 = UE::Shader::FValue::AsLinearColor(this_00,&local_428);
  uVar1 = *(undefined8 *)((longlong)&pFVar2->field0_0x0 + 8);
  *(undefined8 *)&param_2->field0_0x0 = *(undefined8 *)&pFVar2->field0_0x0;
  *(undefined8 *)((longlong)&param_2->field0_0x0 + 8) = uVar1;
  if (local_c8.Component.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FMemory::Free((void *)local_c8.Component.AllocatorInstance.SecondaryData);
  }
  if (local_3e8.Components.AllocatorInstance.Data !=
      (FValueComponent *)local_3e8.Components.AllocatorInstance.InlineData) {
    FMemory::Free(local_3e8.Components.AllocatorInstance.Data);
  }
  if (local_3e8.Values.AllocatorInstance.Data !=
      (FPreshaderType *)local_3e8.Values.AllocatorInstance.InlineData) {
    FMemory::Free(local_3e8.Values.AllocatorInstance.Data);
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_438.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_448.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_458.Frozen);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_468.Frozen);
  return;
}

// GetTextureCollectionUniformExpression @ 147fd8e40

FMaterialUniformExpressionTextureCollection * __thiscall
FMaterialUniformExpression::GetTextureCollectionUniformExpression(FMaterialUniformExpression *this)

{
  return (FMaterialUniformExpressionTextureCollection *)0x0;
}

// GetTextureUniformExpression @ 147fd9520

FMaterialUniformExpressionTexture * __thiscall
FMaterialUniformExpression::GetTextureUniformExpression(FMaterialUniformExpression *this)

{
  return (FMaterialUniformExpressionTexture *)0x0;
}

// IsConstant @ 147fe24b0

bool __thiscall FMaterialUniformExpression::IsConstant(FMaterialUniformExpression *this)

{
  return false;
}

// IsIdentical @ 147fe28a0

bool __thiscall
FMaterialUniformExpression::IsIdentical
          (FMaterialUniformExpression *this,FMaterialUniformExpression *param_1)

{
  return false;
}

// WriteNumberOpcodes @ 148001830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMaterialUniformExpression::WriteNumberOpcodes
          (FMaterialUniformExpression *this,FPreshaderData *param_1)

{
  undefined1 local_res10 [24];
  FType local_28;
  
  if (2 < (byte)LogMaterial._0_1_) {
    (**(code **)(this->_padding_ + 8))();
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  }
  local_res10[0] = 1;
  UE::Shader::FPreshaderData::WriteData(param_1,local_res10,1);
  local_28.ValueType = Float1;
  local_28.StructType = (FStructType *)0x0;
  local_28.ObjectType.ComparisonIndex.Value = 0;
  local_28.ObjectType.Number = 0;
  UE::Shader::FPreshaderData::WriteType(param_1,&local_28);
  return;
}

