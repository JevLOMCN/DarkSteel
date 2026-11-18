// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 6

// ~FMetaSoundClassInfo @ 14ad9e390

/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::Frontend::FMetaSoundClassInfo::~FMetaSoundClassInfo(FMetaSoundClassInfo *this)

{
  return;
}

// FMetaSoundClassInfo @ 14ae598a0

/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

FMetaSoundClassInfo * __thiscall
Metasound::Frontend::FMetaSoundClassInfo::FMetaSoundClassInfo
          (FMetaSoundClassInfo *this,FAssetData *param_1)

{
  bool bVar1;
  int iVar2;
  ForAnyElementType _Str;
  EMetasoundFrontendClassAccessFlags EVar3;
  byte bVar4;
  FAssetTagValueRef_u_0 local_res8 [2];
  FString local_28;
  
  (this->Version).Major = 1;
  (this->Version).Minor = 0;
  this->_padding_ = (longlong)&___7FMetaSoundClassInfo_Frontend_Metasound__6B_;
  (this->ClassName).Namespace.ComparisonIndex = 0;
  (this->ClassName).Namespace.Number = 0;
  (this->ClassName).Name.ComparisonIndex = 0;
  (this->ClassName).Name.Number = 0;
  (this->ClassName).Variant.ComparisonIndex = 0;
  (this->ClassName).Variant.Number = 0;
  this->bIsValid = '\0';
  FLazyName::Resolve(&ClassTagsPrivate::AccessFlags);
  FAssetDataTagMapSharedView::FindTag(&param_1->TagsAndValues,(FName)local_res8);
  if (local_res8[0].Loose == (FString *)0x0) {
    bVar4 = 0;
    EVar3 = Default;
  }
  else {
    FAssetTagValueRef::AsString((FAssetTagValueRef *)&local_res8[0].Fixed,&local_28);
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      _Str.Data = local_28.Data.AllocatorInstance.Data;
    }
    iVar2 = _wtoi((wchar_t *)_Str.Data);
    EVar3 = (EMetasoundFrontendClassAccessFlags)iVar2;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    bVar4 = 1;
  }
  this->AccessFlags = EVar3;
  bVar1 = TryGetClassVersion(param_1,&this->Version);
  this->bIsValid = '\0';
  this->field_0x2a = this->field_0x2a | bVar1 & bVar4;
  return this;
}

// FMetaSoundClassInfo @ 14ae59990

/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

FMetaSoundClassInfo * __thiscall
Metasound::Frontend::FMetaSoundClassInfo::FMetaSoundClassInfo(FMetaSoundClassInfo *this)

{
  this->bIsValid = '\0';
  this->_padding_ = (longlong)&___7FMetaSoundClassInfo_Frontend_Metasound__6B_;
  (this->ClassName).Namespace.ComparisonIndex = 0;
  (this->ClassName).Namespace.Number = 0;
  (this->ClassName).Name.ComparisonIndex = 0;
  (this->ClassName).Name.Number = 0;
  (this->ClassName).Variant.ComparisonIndex = 0;
  (this->ClassName).Variant.Number = 0;
  (this->Version).Major = 1;
  (this->Version).Minor = 0;
  return this;
}

// ExportToContext @ 14ae70df0

/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::Frontend::FMetaSoundClassInfo::ExportToContext
          (FMetaSoundClassInfo *this,FAssetRegistryTagsContext *param_1)

{
  FString *pFVar1;
  FString local_48;
  FAssetRegistryTag local_38;
  
  pFVar1 = FMetasoundFrontendVersionNumber::ToString(&this->Version,&local_48);
  FLazyName::Resolve(&ClassTagsPrivate::ClassVersion);
  local_38.Value.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Value.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  local_38.Value.Data.ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  local_38.Type = TT_Alphabetical;
  local_38.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag(param_1,&local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_48,L"%i");
  FLazyName::Resolve(&ClassTagsPrivate::AccessFlags);
  local_38.Value.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
  local_38.Value.Data.ArrayNum = local_48.Data.ArrayNum;
  local_38.Value.Data.ArrayMax = local_48.Data.ArrayMax;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Type = TT_Hidden;
  local_38.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag(param_1,&local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// InitFromDocument @ 14ae7a0b0

/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::Frontend::FMetaSoundClassInfo::InitFromDocument
          (FMetaSoundClassInfo *this,IMetaSoundDocumentInterface *param_1)

{
  FMetasoundFrontendClassMetadata *this_00;
  FMetasoundFrontendVersionNumber FVar1;
  FName FVar2;
  EMetasoundFrontendClassAccessFlags EVar3;
  longlong lVar4;
  FMetasoundFrontendVersionNumber *pFVar5;
  
  lVar4 = (**(code **)((longlong)*param_1 + 0x18))(param_1);
  this_00 = (FMetasoundFrontendClassMetadata *)(lVar4 + 0x88);
  EVar3 = FMetasoundFrontendClassMetadata::GetAccessFlags(this_00);
  this->AccessFlags = EVar3;
  FVar2 = *(FName *)(lVar4 + 0x90);
  (this->ClassName).Namespace = (this_00->ClassName).Namespace;
  (this->ClassName).Name = FVar2;
  (this->ClassName).Variant = *(FName *)(lVar4 + 0x98);
  pFVar5 = FMetasoundFrontendClassMetadata::GetVersion(this_00);
  FVar1 = *pFVar5;
  this->bIsValid = '\x01';
  this->Version = FVar1;
  return;
}

// TryGetClassVersion @ 14ae8cea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
Metasound::Frontend::FMetaSoundClassInfo::TryGetClassVersion
          (FAssetData *param_1,FMetasoundFrontendVersionNumber *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  UObject *pUVar5;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar6;
  UClass *pUVar7;
  longlong *plVar8;
  longlong lVar9;
  FString *pFVar10;
  byte bVar11;
  FString local_f8;
  undefined1 local_e8 [24];
  undefined8 uStack_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ForElementType<FSetElementId> local_b0;
  ulonglong local_a0;
  FAssetTagValueRef_u_0 local_98 [2];
  FString local_88;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_78;
  
  uVar2 = _UNK_150631d98;
  lVar9 = ___xmm_00000000ffffffff0000008000000000;
  local_b0.InlineData[0] = '\0';
  local_b0.InlineData[1] = '\0';
  local_b0.InlineData[2] = '\0';
  local_b0.InlineData[3] = '\0';
  local_b0._padding_ = 0;
  local_a0 = 0;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_c0 = ___xmm_00000000ffffffff0000008000000000;
  uStack_b8 = _UNK_150631d98;
  local_e8._8_8_ = 0;
  local_e8._16_8_ = 0;
  uStack_d0 = 0;
  local_c8 = (void *)0x0;
  local_b0.SecondaryData = (ForElementType<FSetElementId>)0x0;
  pUVar5 = FAssetData::FastGetAsset
                     (param_1,false,
                      (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_e8);
  if (pUVar5 != (UObject *)0x0) {
    local_b0.InlineData[0] = '\0';
    local_b0.InlineData[1] = '\0';
    local_b0.InlineData[2] = '\0';
    local_b0.InlineData[3] = '\0';
    local_b0._padding_ = 0;
    local_a0 = 0;
    local_e8._0_8_ = (FScriptContainerElement *)0x0;
    local_e8._16_8_ = 0;
    uStack_d0 = 0;
    local_e8._8_8_ = 0;
    local_c8 = (void *)0x0;
    local_c0 = lVar9;
    uStack_b8 = uVar2;
    local_b0.SecondaryData = (ForElementType<FSetElementId>)0x0;
    pTVar6 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
             TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                       (&local_78,
                        (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_e8);
    pUVar5 = FAssetData::FastGetAsset(param_1,true,pTVar6);
    local_a0 = local_a0 & 0xffffffff00000000;
    if (local_b0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_b0.SecondaryData);
    }
    iVar1 = SUB84(local_e8._8_8_,4);
    local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
    }
    uVar3 = local_c0._4_4_;
    uStack_b8 = 0xffffffff;
    local_c0 = (ulonglong)local_c0._4_4_ << 0x20;
    if (0x80 < uVar3) {
      local_c0 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
    }
    if (local_c8 != (void *)0x0) {
      FMemory::Free(local_c8);
    }
    if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._0_8_);
    }
    if (pUVar5 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      pUVar7 = Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
      plVar8 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar5,pUVar7);
      lVar9 = (**(code **)(*plVar8 + 0x18))(plVar8);
      *param_2 = *(FMetasoundFrontendVersionNumber *)(lVar9 + 0x18);
      return true;
    }
  }
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  FLazyName::Resolve(&ClassTagsPrivate::ClassVersion);
  FAssetDataTagMapSharedView::FindTag(&param_1->TagsAndValues,(FName)local_98);
  if (local_98[0].Loose == (FString *)0x0) {
    bVar11 = 0;
  }
  else {
    pFVar10 = FAssetTagValueRef::AsString((FAssetTagValueRef *)&local_98[0].Fixed,&local_88);
    if (&local_f8 != pFVar10) {
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      local_f8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
      local_f8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    bVar11 = 1;
  }
  bVar4 = FMetasoundFrontendVersionNumber::Parse(&local_f8,param_2);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return (bool)(bVar4 & bVar11);
}

