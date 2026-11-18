// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// operator= @ 14ad9f200

FDataTypeRegistryInfo * __thiscall
Metasound::Frontend::FDataTypeRegistryInfo::operator=
          (FDataTypeRegistryInfo *this,FDataTypeRegistryInfo *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  this->DataTypeName = param_1->DataTypeName;
  pIVar1 = (param_1->DataTypeDisplayText).TextData.Reference;
  pIVar2 = (this->DataTypeDisplayText).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->DataTypeDisplayText).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->DataTypeDisplayText).Flags = (param_1->DataTypeDisplayText).Flags;
  this->PreferredLiteralType = param_1->PreferredLiteralType;
  this->bIsParsable = param_1->bIsParsable;
  this->bIsDefaultParsable = param_1->bIsDefaultParsable;
  this->bIsBoolParsable = param_1->bIsBoolParsable;
  this->bIsIntParsable = param_1->bIsIntParsable;
  this->bIsFloatParsable = param_1->bIsFloatParsable;
  this->bIsStringParsable = param_1->bIsStringParsable;
  this->bIsProxyParsable = param_1->bIsProxyParsable;
  this->bIsUniquePtrProxyParsable_DEPRECATED = param_1->bIsUniquePtrProxyParsable_DEPRECATED;
  this->bIsDefaultArrayParsable = param_1->bIsDefaultArrayParsable;
  this->bIsBoolArrayParsable = param_1->bIsBoolArrayParsable;
  this->bIsIntArrayParsable = param_1->bIsIntArrayParsable;
  this->bIsFloatArrayParsable = param_1->bIsFloatArrayParsable;
  this->bIsStringArrayParsable = param_1->bIsStringArrayParsable;
  this->bIsProxyArrayParsable = param_1->bIsProxyArrayParsable;
  this->bIsUniquePtrProxyArrayParsable_DEPRECATED =
       param_1->bIsUniquePtrProxyArrayParsable_DEPRECATED;
  this->bIsEnum = param_1->bIsEnum;
  this->bIsExplicit = param_1->bIsExplicit;
  this->bIsTransmittable = param_1->bIsTransmittable;
  this->bIsVariable = param_1->bIsVariable;
  this->bIsConstructorType = param_1->bIsConstructorType;
  this->bIsArrayType = param_1->bIsArrayType;
  this->bIsArrayParseable = param_1->bIsArrayParseable;
  this->ProxyGeneratorClass = param_1->ProxyGeneratorClass;
  this->bIsPolymorphic = param_1->bIsPolymorphic;
  this->bIsAbstract = param_1->bIsAbstract;
  this->ParentDataTypeName = param_1->ParentDataTypeName;
  return this;
}

