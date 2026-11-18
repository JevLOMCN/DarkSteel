// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// RemoveContainerWidget @ 1425f8450

void __thiscall
SlateAttributePrivate::ISlateAttributeContainer::RemoveContainerWidget
          (ISlateAttributeContainer *this,SWidget *param_1)

{
  FSlateAttributeMetaData::RemoveContainerWidget(param_1,this);
  return;
}

// UpdateContainerSortOrder @ 142604780

void __thiscall
SlateAttributePrivate::ISlateAttributeContainer::UpdateContainerSortOrder
          (ISlateAttributeContainer *this,SWidget *param_1)

{
  FSlateAttributeMetaData *pFVar1;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar2;
  FIdentityFunctor local_res18 [16];
  
  pFVar1 = FSlateAttributeMetaData::FindMetaData(param_1);
  if (pFVar1 != (FSlateAttributeMetaData *)0x0) {
    FVar2 = (pFVar1->Attributes).AllocatorInstance.SecondaryData;
    if (FVar2 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
      FVar2 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar1->Attributes;
    }
    AlgoImpl::
    IntroSortInternal<FSlateAttributeMetaData::FGetterItem,int,FIdentityFunctor,TDereferenceWrapper<FSlateAttributeMetaData::FGetterItem,TLess<void>_>_>
              ((FGetterItem *)FVar2,(pFVar1->Attributes).ArrayNum,local_res18[0],
               (TLess<void> *)local_res18);
  }
  return;
}

