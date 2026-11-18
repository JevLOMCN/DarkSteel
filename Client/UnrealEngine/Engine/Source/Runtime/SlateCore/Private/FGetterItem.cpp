// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// operator< @ 1425c3500

bool __thiscall
FSlateAttributeMetaData::FGetterItem::operator<(FGetterItem *this,FGetterItem *param_1)

{
  uint uVar1;
  uint uVar2;
  FSlateAttributeBase *pFVar3;
  FSlateAttributeBase *pFVar4;
  
  if ((this->AttributeContainerOffset != 0) && (param_1->AttributeContainerOffset != 0)) {
    pFVar4 = this->Attribute + -(longlong)this->AttributeContainerOffset;
    pFVar3 = param_1->Attribute + -(longlong)param_1->AttributeContainerOffset;
    if (pFVar4 == pFVar3) {
      return this->SortOrder < param_1->SortOrder;
    }
    uVar1 = (**(code **)(*(longlong *)pFVar4 + 0x10))(pFVar4);
    uVar2 = (**(code **)(*(longlong *)pFVar3 + 0x10))(pFVar3);
    return uVar1 < uVar2;
  }
  return this->SortOrder < param_1->SortOrder;
}

// GetAttributeContainer @ 1425ddee0

ISlateAttributeContainer * __thiscall
FSlateAttributeMetaData::FGetterItem::GetAttributeContainer(FGetterItem *this)

{
  if (this->AttributeContainerOffset != 0) {
    return (ISlateAttributeContainer *)(this->Attribute + -(longlong)this->AttributeContainerOffset)
    ;
  }
  return (ISlateAttributeContainer *)0x0;
}

// GetAttributeName @ 1425de100

FName __thiscall
FSlateAttributeMetaData::FGetterItem::GetAttributeName(FGetterItem *this,SWidget *param_1)

{
  if (this->CachedAttributeDescriptor != (FAttribute *)0x0) {
    param_1->_padding_ = (longlong)this->CachedAttributeDescriptor->Name;
    return (FName)param_1;
  }
  param_1->_padding_ = 0;
  return (FName)param_1;
}

