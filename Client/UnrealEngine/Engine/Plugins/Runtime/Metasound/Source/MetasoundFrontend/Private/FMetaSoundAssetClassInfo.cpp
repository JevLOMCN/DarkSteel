// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 7

// FMetaSoundAssetClassInfo @ 14ad998e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

FMetaSoundAssetClassInfo * __thiscall
Metasound::Frontend::FMetaSoundAssetClassInfo::FMetaSoundAssetClassInfo
          (FMetaSoundAssetClassInfo *this,FAssetData *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  bool bVar9;
  UObject *pUVar10;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar11;
  UClass *pUVar12;
  IMetaSoundDocumentInterface *pIVar13;
  FMetaSoundAssetClassInfo *pFVar14;
  FName *pFVar15;
  ForAnyElementType FVar16;
  FString local_188;
  FTopLevelAssetPath local_178;
  undefined1 local_168 [24];
  undefined8 uStack_150;
  void *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  ForElementType<FSetElementId> local_130;
  ulonglong local_120;
  undefined8 local_118;
  FName FStack_110;
  undefined8 local_108;
  FName local_100;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_f8;
  FName local_a8;
  undefined1 local_a0 [16];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_90;
  
  FMetaSoundClassInfo::FMetaSoundClassInfo((FMetaSoundClassInfo *)this,param_1);
  uVar6 = _UNK_150631d98;
  uVar5 = ___xmm_00000000ffffffff0000008000000000;
  this->_padding_ = (longlong)&___7FMetaSoundAssetClassInfo_Frontend_Metasound__6B_;
  (this->AssetPath).PackageName.ComparisonIndex = 0;
  (this->AssetPath).PackageName.Number = 0;
  (this->AssetPath).AssetName.ComparisonIndex = 0;
  (this->AssetPath).AssetName.Number = 0;
  local_f8.Hash.InlineData[0] = '\0';
  local_f8.Hash.InlineData[1] = '\0';
  local_f8.Hash.InlineData[2] = '\0';
  local_f8.Hash.InlineData[3] = '\0';
  local_f8.Hash._padding_ = 0;
  local_f8.HashSize = 0;
  local_f8._76_4_ = 0;
  local_f8.Elements._16_8_ = 0;
  local_f8.Elements._24_8_ = 0;
  local_f8.Elements._0_8_ = 0;
  local_f8.Elements._8_8_ = 0;
  local_f8.Elements._32_8_ = 0;
  local_f8.Elements._40_8_ = uVar5;
  local_f8.Elements._48_8_ = uVar6;
  local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  pUVar10 = FAssetData::FastGetAsset(param_1,false,&local_f8);
  if (pUVar10 == (UObject *)0x0) {
    local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.Data.ArrayNum = 0;
    local_188.Data.ArrayMax = 0;
    FLazyName::Resolve(&AssetTagsPrivate::AssetClassID);
    bVar9 = FAssetData::GetTagValue<FString>(param_1,local_100,&local_188);
    FVar7.Data = local_188.Data.AllocatorInstance.Data;
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_188.Data.ArrayNum != 0) {
      FVar16.Data = local_188.Data.AllocatorInstance.Data;
    }
    pFVar15 = ::FName::FName(&local_a8,(wchar_t *)FVar16.Data);
    local_118 = 0;
    local_108 = 0;
    FStack_110 = *pFVar15;
    local_178.PackageName.ComparisonIndex.Value = 0;
    local_178.PackageName.Number = 0;
    local_178.AssetName.ComparisonIndex.Value = 0;
    local_178.AssetName.Number = 0;
    this->_padding_ = 0;
    this->_padding_ = (longlong)FStack_110;
    this->_padding_ = 0;
    FTopLevelAssetPath::TrySetPath(&local_178,param_1->PackageName,param_1->AssetName);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 & (bVar9 | 0xfeU);
    (this->AssetPath).PackageName = local_178.PackageName;
    (this->AssetPath).AssetName = local_178.AssetName;
    if (FVar7.Data == (FScriptContainerElement *)0x0) {
      return this;
    }
    FMemory::Free(FVar7.Data);
    return this;
  }
  local_130.InlineData[0] = '\0';
  local_130.InlineData[1] = '\0';
  local_130.InlineData[2] = '\0';
  local_130.InlineData[3] = '\0';
  local_130._padding_ = 0;
  local_120 = 0;
  local_168._0_8_ = (FScriptContainerElement *)0x0;
  local_168._16_8_ = 0;
  uStack_150 = 0;
  local_168._8_8_ = 0;
  local_148 = (void *)0x0;
  local_140 = uVar5;
  uStack_138 = uVar6;
  local_130.SecondaryData = (ForElementType<FSetElementId>)0x0;
  pTVar11 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
            TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                      (&local_90,
                       (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_168);
  pUVar10 = FAssetData::FastGetAsset(param_1,true,pTVar11);
  local_120 = local_120 & 0xffffffff00000000;
  if (local_130.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_130.SecondaryData);
  }
  iVar4 = SUB84(local_168._8_8_,4);
  local_168._8_8_ = local_168._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_168,0,(int *)(local_168 + 0xc));
  }
  uVar8 = local_140._4_4_;
  uStack_138 = 0xffffffff;
  local_140 = (ulonglong)local_140._4_4_ << 0x20;
  if (0x80 < uVar8) {
    local_140 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10),0);
  }
  if (local_148 != (void *)0x0) {
    FMemory::Free(local_148);
  }
  if ((FScriptContainerElement *)local_168._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_168._0_8_);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar10 == (UObject *)0x0)) {
    if (pUVar10 == (UObject *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("DocInterface.GetObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetManager.cpp"
                         ,0xb6,L"");
      pIVar13 = (IMetaSoundDocumentInterface *)0x0;
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        pFVar14 = (FMetaSoundAssetClassInfo *)(*pcVar2)();
        return pFVar14;
      }
      goto LAB_14ad99aa0;
    }
  }
  else {
    UE::GC::MarkAsReachable(pUVar10);
  }
  pUVar12 = UMetaSoundDocumentInterface::StaticClass();
  pIVar13 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar10,pUVar12);
LAB_14ad99aa0:
  if (pUVar10 == (UObject *)0x0) {
    pIVar13 = (IMetaSoundDocumentInterface *)0x0;
  }
  FMetaSoundClassInfo::InitFromDocument((FMetaSoundClassInfo *)this,pIVar13);
  pFVar15 = (FName *)(**(code **)((longlong)*pIVar13 + 0x10))(pIVar13,local_a0);
  FVar3 = pFVar15[1];
  (this->AssetPath).PackageName = *pFVar15;
  (this->AssetPath).AssetName = FVar3;
  return this;
}

// FMetaSoundAssetClassInfo @ 14ad99ba0

/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

FMetaSoundAssetClassInfo * __thiscall
Metasound::Frontend::FMetaSoundAssetClassInfo::FMetaSoundAssetClassInfo
          (FMetaSoundAssetClassInfo *this,IMetaSoundDocumentInterface *param_1)

{
  FName FVar1;
  FName *pFVar2;
  undefined1 local_18 [16];
  
  FMetaSoundClassInfo::FMetaSoundClassInfo((FMetaSoundClassInfo *)this);
  this->_padding_ = (longlong)&___7FMetaSoundAssetClassInfo_Frontend_Metasound__6B_;
  (this->AssetPath).PackageName.ComparisonIndex = 0;
  (this->AssetPath).PackageName.Number = 0;
  (this->AssetPath).AssetName.ComparisonIndex = 0;
  (this->AssetPath).AssetName.Number = 0;
  FMetaSoundClassInfo::InitFromDocument((FMetaSoundClassInfo *)this,param_1);
  pFVar2 = (FName *)(**(code **)((longlong)*param_1 + 0x10))(param_1,local_18);
  FVar1 = pFVar2[1];
  (this->AssetPath).PackageName = *pFVar2;
  (this->AssetPath).AssetName = FVar1;
  return this;
}

// ExportToContext @ 14adb86c0

/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::Frontend::FMetaSoundAssetClassInfo::ExportToContext
          (FMetaSoundAssetClassInfo *this,FAssetRegistryTagsContext *param_1)

{
  FString *pFVar1;
  FString local_38;
  FAssetRegistryTag local_28;
  
  FMetaSoundClassInfo::ExportToContext((FMetaSoundClassInfo *)this,param_1);
  pFVar1 = ::FName::ToString((FName *)&this->_padding_,&local_38);
  FLazyName::Resolve(&AssetTagsPrivate::AssetClassID);
  local_28.Value.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Value.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  local_28.Value.Data.ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  local_28.Type = TT_Alphabetical;
  local_28.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag(param_1,&local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// InitFromDocument @ 14adc53b0

/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::Frontend::FMetaSoundAssetClassInfo::InitFromDocument
          (FMetaSoundAssetClassInfo *this,IMetaSoundDocumentInterface *param_1)

{
  FName FVar1;
  FName *pFVar2;
  undefined1 local_18 [16];
  
  FMetaSoundClassInfo::InitFromDocument((FMetaSoundClassInfo *)this,param_1);
  pFVar2 = (FName *)(**(code **)((longlong)*param_1 + 0x10))(param_1,local_18);
  FVar1 = pFVar2[1];
  (this->AssetPath).PackageName = *pFVar2;
  (this->AssetPath).AssetName = FVar1;
  return;
}

// TryGetAssetClassName @ 14add23b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
Metasound::Frontend::FMetaSoundAssetClassInfo::TryGetAssetClassName
          (FAssetData *param_1,FMetasoundFrontendClassName *param_2)

{
  FName FVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [8];
  uint uVar5;
  bool bVar6;
  UObject *pUVar7;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar8;
  UClass *pUVar9;
  longlong *plVar10;
  longlong lVar11;
  FName *pFVar12;
  undefined1 auVar13 [8];
  undefined1 local_e8 [8];
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  undefined8 uStack_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ForElementType<FSetElementId> local_98;
  ulonglong local_88;
  FName local_80;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_78;
  
  uVar3 = _UNK_150631d98;
  lVar11 = ___xmm_00000000ffffffff0000008000000000;
  local_98.InlineData[0] = '\0';
  local_98.InlineData[1] = '\0';
  local_98.InlineData[2] = '\0';
  local_98.InlineData[3] = '\0';
  local_98._padding_ = 0;
  local_88 = 0;
  local_d0._0_8_ = (FScriptContainerElement *)0x0;
  local_a8 = ___xmm_00000000ffffffff0000008000000000;
  uStack_a0 = _UNK_150631d98;
  local_d0._8_8_ = 0;
  local_d0._16_8_ = 0;
  uStack_b8 = 0;
  local_b0 = (void *)0x0;
  local_98.SecondaryData = (ForElementType<FSetElementId>)0x0;
  pUVar7 = FAssetData::FastGetAsset
                     (param_1,false,
                      (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_d0);
  if (pUVar7 != (UObject *)0x0) {
    local_98.InlineData[0] = '\0';
    local_98.InlineData[1] = '\0';
    local_98.InlineData[2] = '\0';
    local_98.InlineData[3] = '\0';
    local_98._padding_ = 0;
    local_88 = 0;
    local_d0._0_8_ = (FScriptContainerElement *)0x0;
    local_d0._16_8_ = 0;
    uStack_b8 = 0;
    local_d0._8_8_ = 0;
    local_b0 = (void *)0x0;
    local_a8 = lVar11;
    uStack_a0 = uVar3;
    local_98.SecondaryData = (ForElementType<FSetElementId>)0x0;
    pTVar8 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
             TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                       (&local_78,
                        (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_d0);
    pUVar7 = FAssetData::FastGetAsset(param_1,true,pTVar8);
    local_88 = local_88 & 0xffffffff00000000;
    if (local_98.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.SecondaryData);
    }
    iVar2 = SUB84(local_d0._8_8_,4);
    local_d0._8_8_ = local_d0._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_d0,0,(int *)(local_d0 + 0xc));
    }
    uVar5 = local_a8._4_4_;
    uStack_a0 = 0xffffffff;
    local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
    if (0x80 < uVar5) {
      local_a8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_d0 + 0x10),0);
    }
    if (local_b0 != (void *)0x0) {
      FMemory::Free(local_b0);
    }
    if ((FScriptContainerElement *)local_d0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_d0._0_8_);
    }
    if (pUVar7 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      pUVar9 = UMetaSoundDocumentInterface::StaticClass();
      plVar10 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar7,pUVar9);
      lVar11 = (**(code **)(*plVar10 + 0x18))(plVar10);
      FVar1 = *(FName *)(lVar11 + 0x90);
      param_2->Namespace = *(FName *)(lVar11 + 0x88);
      param_2->Name = FVar1;
      param_2->Variant = *(FName *)(lVar11 + 0x98);
      return true;
    }
  }
  local_e8 = (undefined1  [8])0x0;
  uStack_e0._0_4_ = 0;
  uStack_e0._4_4_ = 0;
  FLazyName::Resolve(&AssetTagsPrivate::AssetClassID);
  bVar6 = FAssetData::GetTagValue<FString>(param_1,local_80,(FString *)local_e8);
  auVar4 = local_e8;
  auVar13 = (undefined1  [8])L"";
  if ((int)uStack_e0 != 0) {
    auVar13 = local_e8;
  }
  pFVar12 = ::FName::FName(&local_80,(wchar_t *)auVar13);
  local_e8 = (undefined1  [8])0x0;
  local_d8 = 0;
  uStack_e0 = *pFVar12;
  (param_2->Namespace).ComparisonIndex = 0;
  (param_2->Namespace).Number = 0;
  param_2->Name = uStack_e0;
  (param_2->Variant).ComparisonIndex = 0;
  (param_2->Variant).Number = 0;
  if (auVar4 != (undefined1  [8])0x0) {
    FMemory::Free((void *)auVar4);
  }
  return bVar6;
}

// TryGetAssetClassTag @ 14add25e0

bool __cdecl
Metasound::Frontend::FMetaSoundAssetClassInfo::TryGetAssetClassTag
          (FAssetData *param_1,FString *param_2)

{
  bool bVar1;
  FName local_res18;
  
  FLazyName::Resolve(&AssetTagsPrivate::AssetClassID);
  bVar1 = FAssetData::GetTagValue<FString>(param_1,local_res18,param_2);
  return bVar1;
}

// TryGetAssetKey @ 14add2630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
Metasound::Frontend::FMetaSoundAssetClassInfo::TryGetAssetKey
          (FAssetData *param_1,FMetaSoundAssetKey *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  undefined1 uVar6;
  UObject *pUVar7;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar8;
  UClass *pUVar9;
  longlong *plVar10;
  longlong lVar11;
  FName *pFVar12;
  ForAnyElementType FVar13;
  FString local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  FName FStack_160;
  undefined8 local_158;
  FName local_150;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_148;
  FNodeClassRegistryKey local_f8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_d0;
  FName local_80;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_78;
  
  uVar3 = _UNK_150631d98;
  uVar2 = ___xmm_00000000ffffffff0000008000000000;
  local_d0.Hash.InlineData[0] = '\0';
  local_d0.Hash.InlineData[1] = '\0';
  local_d0.Hash.InlineData[2] = '\0';
  local_d0.Hash.InlineData[3] = '\0';
  local_d0.Hash._padding_ = 0;
  local_d0.HashSize = 0;
  local_d0._76_4_ = 0;
  local_d0.Elements._0_8_ = 0;
  local_d0.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_d0.Elements._48_8_ = _UNK_150631d98;
  local_d0.Elements._8_8_ = 0;
  local_d0.Elements._16_8_ = 0;
  local_d0.Elements._24_8_ = 0;
  local_d0.Elements._32_8_ = 0;
  local_d0.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  pUVar7 = FAssetData::FastGetAsset(param_1,false,&local_d0);
  if (pUVar7 != (UObject *)0x0) {
    local_148.Hash.InlineData[0] = '\0';
    local_148.Hash.InlineData[1] = '\0';
    local_148.Hash.InlineData[2] = '\0';
    local_148.Hash.InlineData[3] = '\0';
    local_148.Hash._padding_ = 0;
    local_148._72_8_ = 0;
    local_148.Elements._0_8_ = 0;
    local_148.Elements._16_8_ = 0;
    local_148.Elements._24_8_ = 0;
    local_148.Elements._8_8_ = 0;
    local_148.Elements._32_8_ = 0;
    local_148.Elements._40_8_ = uVar2;
    local_148.Elements._48_8_ = uVar3;
    local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    pTVar8 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
             TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>(&local_78,&local_148);
    pUVar7 = FAssetData::FastGetAsset(param_1,true,pTVar8);
    local_148._72_8_ = local_148._72_8_ & 0xffffffff00000000;
    if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_148.Elements);
    if (pUVar7 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      pUVar9 = UMetaSoundDocumentInterface::StaticClass();
      plVar10 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar7,pUVar9);
      lVar11 = (**(code **)(*plVar10 + 0x18))(plVar10);
      FNodeClassRegistryKey::FNodeClassRegistryKey
                (&local_f8,(FMetasoundFrontendGraphClass *)(lVar11 + 0x70));
      local_188 = 0;
      uStack_180 = 0;
      local_178 = 0;
      uStack_170 = 1;
      if (local_f8.Type != Invalid) {
        if ((local_f8.Type != External) && (local_f8.Type != Graph)) {
          ::LexToString(local_f8.Type);
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidType(RegKey.Type)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundAssetManager.cpp"
                             ,0x142,L"Invalid ClassType \'%s\' for Registry Key");
          if (bVar5) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return (bool)uVar6;
          }
        }
        (param_2->ClassName).Namespace = local_f8.ClassName.Namespace;
        (param_2->ClassName).Name = local_f8.ClassName.Name;
        (param_2->ClassName).Variant = local_f8.ClassName.Variant;
        param_2->Version = local_f8.Version;
        return true;
      }
      (param_2->ClassName).Namespace.ComparisonIndex = 0;
      (param_2->ClassName).Namespace.Number = 0;
      (param_2->ClassName).Name.ComparisonIndex = 0;
      (param_2->ClassName).Name.Number = 0;
      (param_2->ClassName).Variant.ComparisonIndex = 0;
      (param_2->ClassName).Variant.Number = 0;
      (param_2->Version).Major = 1;
      (param_2->Version).Minor = 0;
      return true;
    }
  }
  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Data.ArrayNum = 0;
  local_198.Data.ArrayMax = 0;
  FLazyName::Resolve(&AssetTagsPrivate::AssetClassID);
  FAssetData::GetTagValue<FString>(param_1,local_150,&local_198);
  FVar4.Data = local_198.Data.AllocatorInstance.Data;
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_198.Data.ArrayNum != 0) {
    FVar13.Data = local_198.Data.AllocatorInstance.Data;
  }
  pFVar12 = ::FName::FName(&local_80,(wchar_t *)FVar13.Data);
  local_168 = 0;
  local_158 = 0;
  FStack_160 = *pFVar12;
  (param_2->ClassName).Namespace.ComparisonIndex = 0;
  (param_2->ClassName).Namespace.Number = 0;
  (param_2->ClassName).Name = FStack_160;
  (param_2->ClassName).Variant.ComparisonIndex = 0;
  (param_2->ClassName).Variant.Number = 0;
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  bVar5 = FMetaSoundClassInfo::TryGetClassVersion(param_1,&param_2->Version);
  return bVar5;
}

