// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FType @ 147fa5650

FType * __thiscall UE::Shader::FType::FType(FType *this,EValueType param_1)

{
  code *pcVar1;
  bool bVar2;
  FType *pFVar3;
  
  this->ValueType = param_1;
  this->StructType = (FStructType *)0x0;
  (this->ObjectType).ComparisonIndex = 0;
  (this->ObjectType).Number = 0;
  if ((byte)(param_1 - Struct) < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InValueType != EValueType::Struct && InValueType != EValueType::Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Shader\\ShaderTypes.h"
                       ,0xb7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FType *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// GetComponentType @ 1485c41f0

EValueComponentType __thiscall UE::Shader::FType::GetComponentType(FType *this,int param_1)

{
  EValueType EVar1;
  bool bVar2;
  EValueComponentType *pEVar3;
  FValueTypeDescription *pFVar4;
  
  if (-1 < param_1) {
    EVar1 = this->ValueType;
    if (EVar1 == Struct) {
      if (param_1 < (this->StructType->ComponentTypes).ArrayNum) {
        pEVar3 = TArrayView<enum_UE::Shader::EValueComponentType_const_,int>::operator[]
                           (&this->StructType->ComponentTypes,param_1);
        return *pEVar3;
      }
    }
    else if (EVar1 != Object) {
      bVar2 = IsNumericType(EVar1);
      if (bVar2) {
        pFVar4 = GetValueTypeDescription(this->ValueType);
        if (((pFVar4->NumComponents == '\x01') && (param_1 < 4)) ||
           (param_1 < pFVar4->NumComponents)) {
          return pFVar4->ComponentType;
        }
      }
    }
  }
  return Void;
}

// GetDerivativeType @ 1485c4aa0

FType * __thiscall UE::Shader::FType::GetDerivativeType(FType *this,FType *__return_storage_ptr__)

{
  FStructType *pFVar1;
  code *pcVar2;
  FName FVar3;
  undefined7 uVar4;
  bool bVar5;
  EValueType EVar6;
  FType *pFVar7;
  ulonglong uVar8;
  
  EVar6 = this->ValueType;
  if (EVar6 == Struct) {
    pFVar1 = this->StructType->DerivativeType;
    __return_storage_ptr__->StructType = pFVar1;
    (__return_storage_ptr__->ObjectType).ComparisonIndex = 0;
    (__return_storage_ptr__->ObjectType).Number = 0;
    __return_storage_ptr__->ValueType = -(pFVar1 != (FStructType *)0x0) & Struct;
    return __return_storage_ptr__;
  }
  if (EVar6 == Object) {
    FVar3 = this->ObjectType;
    __return_storage_ptr__->StructType = this->StructType;
    __return_storage_ptr__->ObjectType = FVar3;
    uVar4 = *(undefined7 *)&this->field_0x11;
    __return_storage_ptr__->ValueType = this->ValueType;
    *(undefined7 *)&__return_storage_ptr__->field_0x11 = uVar4;
    return __return_storage_ptr__;
  }
  if (Any < EVar6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(uint32)Type < NumValueTypes",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                       ,0x45,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FType *)(*pcVar2)();
      return pFVar7;
    }
  }
  uVar8 = 0x1c;
  if (EVar6 < Num) {
    uVar8 = (ulonglong)EVar6;
  }
  if (GValueTypeDescriptions[uVar8].ComponentType == Void) {
    __return_storage_ptr__->StructType = (FStructType *)0x0;
    (__return_storage_ptr__->ObjectType).ComparisonIndex = 0;
    (__return_storage_ptr__->ObjectType).Number = 0;
    __return_storage_ptr__->ValueType = Void;
  }
  else {
    EVar6 = MakeValueType(Float,(int)GValueTypeDescriptions[uVar8].NumComponents);
    __return_storage_ptr__->StructType = (FStructType *)0x0;
    (__return_storage_ptr__->ObjectType).ComparisonIndex = 0;
    (__return_storage_ptr__->ObjectType).Number = 0;
    __return_storage_ptr__->ValueType = EVar6;
    if ((EVar6 == Struct) || (EVar6 == Object)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InValueType != EValueType::Struct && InValueType != EValueType::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Shader\\ShaderTypes.h"
                         ,0xb7,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FType *)(*pcVar2)();
        return pFVar7;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetFlatFieldType @ 1485c50f0

EValueType __thiscall UE::Shader::FType::GetFlatFieldType(FType *this,int param_1)

{
  FStructType *pFVar1;
  code *pcVar2;
  bool bVar3;
  EValueType EVar4;
  uint uVar5;
  
  if (this->ValueType != Struct) {
    EVar4 = this->ValueType;
    if (param_1 != 0) {
      EVar4 = Void;
    }
    return EVar4;
  }
  if ((-1 < param_1) && (pFVar1 = this->StructType, param_1 < (pFVar1->FlatFieldTypes).ArrayNum)) {
    uVar5 = 0;
    if (param_1 < (pFVar1->FlatFieldTypes).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
    }
    return (pFVar1->FlatFieldTypes).DataPtr[param_1];
  }
  return Void;
}

// GetName @ 1485c64e0

wchar_t * __thiscall UE::Shader::FType::GetName(FType *this)

{
  EValueType EVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  
  EVar1 = this->ValueType;
  if (EVar1 == Struct) {
    return this->StructType->Name;
  }
  if (Any < EVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(uint32)Type < NumValueTypes",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                       ,0x45,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pwVar4 = (wchar_t *)(*pcVar2)();
      return pwVar4;
    }
  }
  uVar5 = 0x1c;
  if (EVar1 < Num) {
    uVar5 = (ulonglong)EVar1;
  }
  return GValueTypeDescriptions[uVar5].Name;
}

// GetNumComponents @ 1485c67d0

int __thiscall UE::Shader::FType::GetNumComponents(FType *this)

{
  EValueType EVar1;
  FValueTypeDescription *pFVar2;
  
  EVar1 = this->ValueType;
  if (EVar1 == Struct) {
    return (this->StructType->ComponentTypes).ArrayNum;
  }
  if (EVar1 == Object) {
    return 1;
  }
  pFVar2 = GetValueTypeDescription(EVar1);
  return (int)pFVar2->NumComponents;
}

// GetNumFlatFields @ 1485c6810

int __thiscall UE::Shader::FType::GetNumFlatFields(FType *this)

{
  if (this->ValueType == Struct) {
    return (this->StructType->FlatFieldTypes).ArrayNum;
  }
  return 1;
}

// IsNumericMatrix @ 1485ce190

bool __thiscall UE::Shader::FType::IsNumericMatrix(FType *this)

{
  EValueType EVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  
  EVar1 = this->ValueType;
  if ((EVar1 != Struct) && (EVar1 != Object)) {
    if (Any < EVar1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint32)Type < NumValueTypes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                         ,0x45,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    uVar7 = 0x1c;
    if (EVar1 < Num) {
      uVar7 = (ulonglong)EVar1;
    }
    uVar2 = GValueTypeDescriptions[uVar7].ComponentType;
    uVar3 = GValueTypeDescriptions[uVar7].NumComponents;
    if ((uVar2 != '\0') && (uVar3 == '\x10')) {
      return true;
    }
  }
  return false;
}

// IsNumericVector @ 1485ce280

bool __thiscall UE::Shader::FType::IsNumericVector(FType *this)

{
  EValueType EVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  
  EVar1 = this->ValueType;
  if ((EVar1 != Struct) && (EVar1 != Object)) {
    if (Any < EVar1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint32)Type < NumValueTypes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                         ,0x45,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    uVar7 = 0x1c;
    if (EVar1 < Num) {
      uVar7 = (ulonglong)EVar1;
    }
    uVar2 = GValueTypeDescriptions[uVar7].ComponentType;
    uVar3 = GValueTypeDescriptions[uVar7].NumComponents;
    if ((uVar2 != '\0') && ((char)uVar3 < '\x05')) {
      return true;
    }
  }
  return false;
}

