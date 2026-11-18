// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FPreshaderType @ 1485a3ff0

FPreshaderType * __thiscall
UE::Shader::FPreshaderType::FPreshaderType(FPreshaderType *this,FType *param_1)

{
  FStructType *pFVar1;
  int iVar2;
  undefined4 uVar3;
  
  this->StructTypeHash = 0;
  (this->StructComponentTypes).DataPtr = (EValueComponentType *)0x0;
  (this->StructComponentTypes).ArrayNum = 0;
  this->ValueType = param_1->ValueType;
  if (param_1->ValueType == Struct) {
    this->StructTypeHash = param_1->StructType->Hash;
    pFVar1 = param_1->StructType;
    iVar2 = (pFVar1->ComponentTypes).ArrayNum;
    uVar3 = *(undefined4 *)&(pFVar1->ComponentTypes).field_0xc;
    (this->StructComponentTypes).DataPtr = (pFVar1->ComponentTypes).DataPtr;
    (this->StructComponentTypes).ArrayNum = iVar2;
    *(undefined4 *)&(this->StructComponentTypes).field_0xc = uVar3;
  }
  return this;
}

// FPreshaderType @ 1485a4030

FPreshaderType * __thiscall
UE::Shader::FPreshaderType::FPreshaderType(FPreshaderType *this,EValueType param_1)

{
  this->ValueType = param_1;
  this->StructTypeHash = 0;
  (this->StructComponentTypes).DataPtr = (EValueComponentType *)0x0;
  (this->StructComponentTypes).ArrayNum = 0;
  return this;
}

// GetComponentType @ 1485c4150

EValueComponentType __thiscall
UE::Shader::FPreshaderType::GetComponentType(FPreshaderType *this,int param_1)

{
  EValueType EVar1;
  code *pcVar2;
  bool bVar3;
  EValueComponentType EVar4;
  EValueComponentType *pEVar5;
  ulonglong uVar6;
  
  if (this->StructTypeHash == 0) {
    EVar1 = this->ValueType;
    if (Any < EVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint32)Type < NumValueTypes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                         ,0x45,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
    }
    uVar6 = 0x1c;
    if (EVar1 < Num) {
      uVar6 = (ulonglong)EVar1;
    }
    if ((-1 < param_1) && (param_1 < GValueTypeDescriptions[uVar6].NumComponents)) {
      return GValueTypeDescriptions[uVar6].ComponentType;
    }
  }
  else if ((-1 < param_1) && (param_1 < (this->StructComponentTypes).ArrayNum)) {
    pEVar5 = TArrayView<enum_UE::Shader::EValueComponentType_const_,int>::operator[]
                       (&this->StructComponentTypes,param_1);
    return *pEVar5;
  }
  return Void;
}

// GetNumComponents @ 1485c6760

int __thiscall UE::Shader::FPreshaderType::GetNumComponents(FPreshaderType *this)

{
  EValueType EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (this->StructTypeHash != 0) {
    return (this->StructComponentTypes).ArrayNum;
  }
  EVar1 = this->ValueType;
  if (Any < EVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(uint32)Type < NumValueTypes",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                       ,0x45,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  uVar5 = 0x1c;
  if (EVar1 < Num) {
    uVar5 = (ulonglong)EVar1;
  }
  return (int)GValueTypeDescriptions[uVar5].NumComponents;
}

