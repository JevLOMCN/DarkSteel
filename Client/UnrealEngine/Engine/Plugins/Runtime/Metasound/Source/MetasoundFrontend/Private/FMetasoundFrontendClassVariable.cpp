// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// StaticStruct @ 14ad7a360

UScriptStruct * __cdecl FMetasoundFrontendClassVariable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassVariable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassVariable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassVariable,(UObject *)pUVar1
                         ,L"MetasoundFrontendClassVariable");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassVariable.OuterSingleton;
}

// FMetasoundFrontendClassVariable @ 14ad9a640

FMetasoundFrontendClassVariable * __thiscall
FMetasoundFrontendClassVariable::FMetasoundFrontendClassVariable
          (FMetasoundFrontendClassVariable *this,FMetasoundFrontendClassVertex *param_1)

{
  longlong lVar1;
  ELiteralType EVar2;
  EMetasoundFrontendLiteralType EVar3;
  IDataTypeRegistry *pIVar4;
  
  lVar1 = *(longlong *)&param_1->field_0x8;
  this->_padding_ = *(longlong *)param_1;
  this->_padding_ = lVar1;
  lVar1 = *(longlong *)&param_1->field_0x18;
  this->_padding_ = *(longlong *)&param_1->field_0x10;
  this->_padding_ = lVar1;
  lVar1 = *(longlong *)&(param_1->NodeID).C;
  this->_padding_ = *(longlong *)&param_1->NodeID;
  this->_padding_ = lVar1;
  *(EMetasoundFrontendVertexAccessType *)&this->_padding_ = param_1->AccessType;
  (this->DefaultLiteral).AsNumDefault = 0;
  (this->DefaultLiteral).AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultLiteral).AsBoolean.ArrayNum = 0;
  (this->DefaultLiteral).AsBoolean.ArrayMax = 0;
  (this->DefaultLiteral).AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultLiteral).AsInteger.ArrayNum = 0;
  (this->DefaultLiteral).AsInteger.ArrayMax = 0;
  (this->DefaultLiteral).AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultLiteral).AsFloat.ArrayNum = 0;
  (this->DefaultLiteral).AsFloat.ArrayMax = 0;
  (this->DefaultLiteral).AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultLiteral).AsString.ArrayNum = 0;
  (this->DefaultLiteral).AsString.ArrayMax = 0;
  (this->DefaultLiteral).AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultLiteral).AsUObject.ArrayNum = 0;
  (this->DefaultLiteral).AsUObject.ArrayMax = 0;
  (this->DefaultLiteral).Type = None;
  pIVar4 = Metasound::Frontend::IDataTypeRegistry::Get();
  EVar2 = (**(code **)((longlong)*pIVar4 + 0x48))(pIVar4,&param_1->field_0x8);
  EVar3 = Metasound::Frontend::GetMetasoundFrontendLiteralType(EVar2);
  FMetasoundFrontendLiteral::SetType(&this->DefaultLiteral,EVar3);
  return this;
}

