// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// FStoreBuilder @ 141e86200

FStoreBuilder * __thiscall
FixedTagPrivate::FStoreBuilder::FStoreBuilder(FStoreBuilder *this,FOptions *param_1)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  
  *(undefined8 *)&(this->Options).StoreAsName.Elements = 0;
  *(undefined8 *)&(this->Options).StoreAsName.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Options).StoreAsName.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Options).StoreAsName.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Options).StoreAsName.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Options).StoreAsName.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Options).StoreAsName.Elements.field_0x34 = 0;
  (this->Options).StoreAsName.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Options).StoreAsName.HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this,&param_1->StoreAsName
            );
  this_00 = &(this->Options).StoreAsPath;
  *(undefined8 *)&this_00->Elements = 0;
  *(undefined8 *)&(this->Options).StoreAsPath.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Options).StoreAsPath.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Options).StoreAsPath.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Options).StoreAsPath.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Options).StoreAsPath.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Options).StoreAsPath.Elements.field_0x34 = 0;
  (this->Options).StoreAsPath.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Options).StoreAsPath.HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (this_00,&param_1->StoreAsPath);
  (this->AnsiStrings).NumCharacters = 0;
  *(undefined8 *)&(this->AnsiStrings).StringIndices = 0;
  *(undefined8 *)&(this->AnsiStrings).StringIndices.field_0x8 = 0;
  *(undefined8 *)&(this->AnsiStrings).StringIndices.field_0x20 = 0;
  *(undefined4 *)&(this->AnsiStrings).StringIndices.field_0x28 = 0;
  *(undefined4 *)&(this->AnsiStrings).StringIndices.field_0x2c = 0x80;
  *(undefined4 *)&(this->AnsiStrings).StringIndices.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnsiStrings).StringIndices.field_0x34 = 0;
  *(undefined8 *)&(this->AnsiStrings).StringIndices.field_0x40 = 0;
  *(undefined4 *)&(this->AnsiStrings).StringIndices.field_0x48 = 0;
  (this->AnsiStrings).Offsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnsiStrings).Offsets.ArrayNum = 0;
  (this->AnsiStrings).Offsets.ArrayMax = 0;
  (this->WideStrings).NumCharacters = 0;
  *(undefined8 *)&(this->WideStrings).StringIndices = 0;
  *(undefined8 *)&(this->WideStrings).StringIndices.field_0x8 = 0;
  *(undefined8 *)&(this->WideStrings).StringIndices.field_0x20 = 0;
  *(undefined4 *)&(this->WideStrings).StringIndices.field_0x28 = 0;
  *(undefined4 *)&(this->WideStrings).StringIndices.field_0x2c = 0x80;
  *(undefined4 *)&(this->WideStrings).StringIndices.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WideStrings).StringIndices.field_0x34 = 0;
  *(undefined8 *)&(this->WideStrings).StringIndices.field_0x40 = 0;
  *(undefined4 *)&(this->WideStrings).StringIndices.field_0x48 = 0;
  (this->WideStrings).Offsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WideStrings).Offsets.ArrayNum = 0;
  (this->WideStrings).Offsets.ArrayMax = 0;
  *(undefined8 *)&this->NumberlessNameIndices = 0;
  *(undefined8 *)&(this->NumberlessNameIndices).field_0x8 = 0;
  *(undefined8 *)&(this->NumberlessNameIndices).field_0x20 = 0;
  *(undefined4 *)&(this->NumberlessNameIndices).field_0x28 = 0;
  *(undefined4 *)&(this->NumberlessNameIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->NumberlessNameIndices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NumberlessNameIndices).field_0x34 = 0;
  *(undefined8 *)&(this->NumberlessNameIndices).field_0x40 = 0;
  *(undefined4 *)&(this->NumberlessNameIndices).field_0x48 = 0;
  *(undefined8 *)&this->NameIndices = 0;
  *(undefined8 *)&(this->NameIndices).field_0x8 = 0;
  *(undefined8 *)&(this->NameIndices).field_0x20 = 0;
  *(undefined4 *)&(this->NameIndices).field_0x28 = 0;
  *(undefined4 *)&(this->NameIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameIndices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameIndices).field_0x34 = 0;
  *(undefined8 *)&(this->NameIndices).field_0x40 = 0;
  *(undefined4 *)&(this->NameIndices).field_0x48 = 0;
  *(undefined8 *)&this->NumberlessExportPathIndices = 0;
  *(undefined8 *)&(this->NumberlessExportPathIndices).field_0x8 = 0;
  *(undefined8 *)&(this->NumberlessExportPathIndices).field_0x20 = 0;
  *(undefined4 *)&(this->NumberlessExportPathIndices).field_0x28 = 0;
  *(undefined4 *)&(this->NumberlessExportPathIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->NumberlessExportPathIndices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NumberlessExportPathIndices).field_0x34 = 0;
  *(undefined8 *)&(this->NumberlessExportPathIndices).field_0x40 = 0;
  *(undefined4 *)&(this->NumberlessExportPathIndices).field_0x48 = 0;
  *(undefined8 *)&this->ExportPathIndices = 0;
  *(undefined8 *)&(this->ExportPathIndices).field_0x8 = 0;
  *(undefined8 *)&(this->ExportPathIndices).field_0x20 = 0;
  *(undefined4 *)&(this->ExportPathIndices).field_0x28 = 0;
  *(undefined4 *)&(this->ExportPathIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExportPathIndices).field_0x34 = 0;
  *(undefined4 *)&(this->ExportPathIndices).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ExportPathIndices).field_0x40 = 0;
  *(undefined4 *)&(this->ExportPathIndices).field_0x48 = 0;
  *(undefined8 *)&this->TextIndices = 0;
  *(undefined8 *)&(this->TextIndices).field_0x8 = 0;
  *(undefined8 *)&(this->TextIndices).field_0x20 = 0;
  *(undefined4 *)&(this->TextIndices).field_0x28 = 0;
  *(undefined4 *)&(this->TextIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->TextIndices).field_0x34 = 0;
  *(undefined4 *)&(this->TextIndices).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TextIndices).field_0x40 = 0;
  *(undefined4 *)&(this->TextIndices).field_0x48 = 0;
  (this->NumberedPairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NumberedPairs).ArrayNum = 0;
  (this->NumberedPairs).ArrayMax = 0;
  (this->NumberlessPairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NumberlessPairs).ArrayNum = 0;
  (this->NumberlessPairs).ArrayMax = 0;
  this->bFinalized = false;
  return this;
}

// ~FStoreBuilder @ 141e880d0

void __thiscall FixedTagPrivate::FStoreBuilder::~FStoreBuilder(FStoreBuilder *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  
  pFVar1 = (this->NumberlessPairs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NumberedPairs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->TextIndices).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TextIndices).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FixedTagPrivate::FMarshalledText,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FixedTagPrivate::FMarshalledText,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FixedTagPrivate::FMarshalledText,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TextIndices);
  *(undefined4 *)&(this->ExportPathIndices).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ExportPathIndices).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FAssetRegistryExportPath,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FAssetRegistryExportPath,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FAssetRegistryExportPath,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExportPathIndices);
  *(undefined4 *)&(this->NumberlessExportPathIndices).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NumberlessExportPathIndices).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FixedTagPrivate::FNumberlessExportPath,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FixedTagPrivate::FNumberlessExportPath,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FixedTagPrivate::FNumberlessExportPath,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NumberlessExportPathIndices);
  *(undefined4 *)&(this->NameIndices).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NameIndices).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameIndices);
  *(undefined4 *)&(this->NumberlessNameIndices).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NumberlessNameIndices).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FDisplayNameEntryId,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FDisplayNameEntryId,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FDisplayNameEntryId,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NumberlessNameIndices);
  pFVar1 = (this->WideStrings).Offsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->WideStrings).StringIndices.field_0x48 = 0;
  pvVar2 = *(void **)&(this->WideStrings).StringIndices.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->WideStrings).StringIndices);
  pFVar1 = (this->AnsiStrings).Offsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->AnsiStrings).StringIndices.field_0x48 = 0;
  pvVar2 = *(void **)&(this->AnsiStrings).StringIndices.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->AnsiStrings).StringIndices);
  (this->Options).StoreAsPath.HashSize = 0;
  FVar3 = (this->Options).StoreAsPath.Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Options).StoreAsPath.Elements);
  (this->Options).StoreAsName.HashSize = 0;
  FVar3 = (this->Options).StoreAsName.Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// AddTagMap @ 141e8fbf0

/* WARNING: Type propagation algorithm not settling */

FPartialMapHandle __thiscall
FixedTagPrivate::FStoreBuilder::AddTagMap(FStoreBuilder *this,FAssetDataTagMapSharedView *param_1)

{
  undefined2 uVar1;
  code *pcVar2;
  FAssetTagValueRef_u_0 FVar3;
  FAssetDataTagMapSharedView_u_0 FVar4;
  bool bVar5;
  int iVar6;
  FPartialMapHandle FVar7;
  FNumberedPair *pFVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  byte bVar12;
  FMapHandle FVar13;
  uint uVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  int *piVar17;
  uint uVar18;
  FMapHandle *in_R8;
  FName FVar19;
  longlong lVar20;
  uchar *puVar21;
  char cVar22;
  FAssetTagValueRef_u_0 *pFVar23;
  FIdentityFunctor local_res8;
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  ForAnyElementType local_d8;
  uint local_d0;
  uint uStack_cc;
  char local_c8;
  undefined1 uStack_c7;
  ushort uStack_c6;
  undefined4 uStack_c4;
  FAssetTagValueRef_u_0 local_c0;
  undefined4 local_b8;
  uint local_b4;
  FAssetTagValueRef_u_0 local_a8;
  FAssetTagValueRef_u_0 FStack_a0;
  FAssetTagValueRef_u_0 local_98;
  FAssetTagValueRef_u_0 FStack_90;
  FName local_88;
  FValueId local_80;
  FAssetTagValueRef_u_0 local_78;
  FValueId local_70;
  FNumberedPair local_68;
  FNumberedPair local_5c [2];
  
  if ((this->bFinalized != false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bFinalized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x2f4,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    FVar7 = (FPartialMapHandle)(*pcVar2)();
    return FVar7;
  }
  uVar11 = 0;
  bVar12 = in_R8->IsValid;
  uVar18 = 0;
  if (bVar12 == 0) {
    FVar13 = *in_R8;
    uVar10 = FVar13.Num;
    uVar15 = uVar18;
    if (FVar13 != (FMapHandle)0x0) {
      uVar15 = *(uint *)((longlong)FVar13 + 8);
    }
  }
  else {
    uVar10 = in_R8->Num;
    uVar15 = (uint)uVar10;
  }
  if (uVar15 == 0) {
    (param_1->field0_0x0).Loose = (FAssetDataTagMap *)0x0;
    return (FPartialMapHandle)param_1;
  }
  FVar13 = *in_R8;
  local_c8 = '\x01';
  if (bVar12 == 0) {
    if (FVar13 != (FMapHandle)0x0) {
      uVar15 = *(uint *)((longlong)FVar13 + 8);
      goto LAB_141e8fcc8;
    }
  }
  else {
    uVar15 = (uint)uVar10;
LAB_141e8fcc8:
    uVar9 = uVar11;
    cVar22 = local_c8;
    if (uVar15 != 0) {
      do {
        if ((*in_R8 == (FMapHandle)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("View.Bits != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\AssetRegistry\\AssetDataTagMap.h"
                               ,0x1a6,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          FVar7 = (FPartialMapHandle)(*pcVar2)();
          return FVar7;
        }
        if (in_R8->IsValid == 0) {
          FVar13 = *in_R8;
          FVar19 = *(FName *)(*(longlong *)FVar13 + uVar9 * 0x18);
        }
        else {
          pFVar8 = FMapHandle::At(in_R8,&local_68,(uint)uVar9);
          FVar13 = *in_R8;
          FVar19 = pFVar8->Key;
          local_80 = pFVar8->Value;
          local_88 = FVar19;
        }
        local_c8 = '\0';
        if (FVar19.Number == 0) {
          local_c8 = cVar22;
        }
        uVar14 = (uint)uVar9 + 1;
        uVar9 = (ulonglong)uVar14;
        cVar22 = local_c8;
      } while (uVar14 != uVar15);
    }
  }
  lVar20 = 0x310;
  if (local_c8 == '\0') {
    lVar20 = 0x300;
  }
  puVar21 = (this->Options).StoreAsName.Hash.InlineData + lVar20 + -0x38;
  if (in_R8->IsValid == 0) {
    if (FVar13 != (FMapHandle)0x0) {
      uVar15 = *(uint *)((longlong)FVar13 + 8);
      goto LAB_141e8fd8c;
    }
  }
  else {
    uVar15 = (uint)in_R8->Num;
LAB_141e8fd8c:
    if ((0xffff < (int)uVar15) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Map.Num() <= TNumericLimits<decltype(FPartialMapHandle::Num)>::Max()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                           ,0x305,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      FVar7 = (FPartialMapHandle)(*pcVar2)();
      return FVar7;
    }
  }
  if (in_R8->IsValid == 0) {
    if (*in_R8 != (FMapHandle)0x0) {
      uVar18 = *(uint *)((longlong)*in_R8 + 8);
    }
    uStack_c4 = *(undefined4 *)&((ForElementType<FSetElementId> *)(puVar21 + 8))->field_0x0;
    uStack_c6 = (ushort)uVar18;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = 0;
    uStack_cc = 0;
    if (*in_R8 != (FMapHandle)0x0) {
      uVar18 = *(uint *)((longlong)*in_R8 + 8);
      goto LAB_141e8fe1f;
    }
  }
  else {
    uStack_c6 = in_R8->Num;
    uVar18 = (uint)uStack_c6;
    uStack_c4 = *(undefined4 *)&((ForElementType<FSetElementId> *)(puVar21 + 8))->field_0x0;
LAB_141e8fe1f:
    local_d0 = 0;
    uStack_cc = 0;
    local_d8.Data = (FScriptContainerElement *)0x0;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    if (0 < (int)uVar18) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar18,&local_d8,0,(int *)&uStack_cc);
    }
  }
  if (in_R8->IsValid == 0) {
    if (*in_R8 == (FMapHandle)0x0) goto LAB_141e8ffd0;
    uVar18 = *(uint *)((longlong)*in_R8 + 8);
  }
  else {
    uVar18 = (uint)in_R8->Num;
  }
  if (uVar18 != 0) {
    do {
      if ((*in_R8 == (FMapHandle)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("View.Bits != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\AssetRegistry\\AssetDataTagMap.h"
                             ,0x1a6,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        FVar7 = (FPartialMapHandle)(*pcVar2)();
        return FVar7;
      }
      if (in_R8->IsValid == 0) {
        local_a8 = *(FAssetTagValueRef_u_0 *)(*(longlong *)*in_R8 + uVar11 * 0x18);
        FStack_a0.Loose = (FString *)(*(longlong *)*in_R8 + 8 + uVar11 * 0x18);
      }
      else {
        pFVar8 = FMapHandle::At(in_R8,local_5c,(uint)uVar11);
        local_a8.Fixed.Bits = *(FFixedTagValue *)&pFVar8->Key;
        local_70 = pFVar8->Value;
        FStack_a0.Bits = (ulonglong)CONCAT24(in_R8->StoreIndex,local_70) | 0x8000000000000000;
        local_78.Fixed.Bits = local_a8.Fixed.Bits;
      }
      FStack_90.Bits = FStack_a0.Bits;
      local_98 = local_a8;
      if (((local_d8.Data <= &local_98) &&
          (&local_98 < (FAssetTagValueRef_u_0 *)(local_d8.Data + (longlong)(int)uStack_cc * 0x10)))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar2 = (code *)swi(3);
        FVar7 = (FPartialMapHandle)(*pcVar2)();
        return FVar7;
      }
      if (local_d0 == uStack_cc) {
        local_d0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_d8,(int *)&uStack_cc);
      }
      lVar20 = (longlong)(int)local_d0;
      uVar15 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar15;
      local_d0 = local_d0 + 1;
      *(FAssetTagValueRef_u_0 *)&local_d8.Data[lVar20 * 0x10].field_0x0 = (FFixedTagValue)local_98;
      ((FAssetTagValueRef_u_0 *)(local_d8.Data + lVar20 * 0x10 + 8))->Bits = (ulong64)FStack_90;
    } while (uVar15 != uVar18);
  }
LAB_141e8ffd0:
  local_res8 = SUB81(this,0);
  AlgoImpl::
  IntroSortInternal<TTuple<FName,FAssetTagValueRef>,int,FIdentityFunctor,_FixedTagPrivate::FStoreBuilder::AddTagMap_::__l2::<lambda_1>_>
            ((TTuple<FName,FAssetTagValueRef> *)local_d8.Data,local_d0,local_res8,
             (<lambda_1>)local_res8);
  uVar9 = (ulonglong)(int)local_d0;
  pFVar23 = (FAssetTagValueRef_u_0 *)(local_d8.Data + uVar9 * 0x10);
  local_b4 = local_d0;
  uVar11 = uVar9;
  FVar16.Data = local_d8.Data;
  while( true ) {
    if ((int)uVar9 != (int)uVar11) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TTuple<FName,FAssetTagValueRef>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
    }
    piVar17 = (int *)(&((ForElementType<FSetElementId> *)(puVar21 + 8))->field_0x0 + 4);
    if ((FAssetTagValueRef_u_0 *)FVar16.Data == pFVar23) break;
    FVar3.Fixed.Bits = (FFixedTagValue)((FFixedTagValue *)FVar16.Data)->Bits;
    FStack_a0 = *(FAssetTagValueRef_u_0 *)((longlong)FVar16.Data + 8);
    local_a8.Fixed.Bits = FVar3.Fixed.Bits;
    IndexValue(this,(FName)local_res20,(FAssetTagValueRef)FVar3.Fixed.Bits);
    local_b8 = local_res20[0];
    local_c0.Fixed.Bits = FVar3.Fixed.Bits;
    if (((*(FAssetTagValueRef_u_0 **)puVar21 <= &local_c0) &&
        (&local_c0 <
         (FAssetTagValueRef_u_0 *)
         ((longlong)*(FAssetTagValueRef_u_0 **)puVar21 + (longlong)*piVar17 * 0xc))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      FVar7 = (FPartialMapHandle)(*pcVar2)();
      return FVar7;
    }
    iVar6 = *(int *)&((ForElementType<FSetElementId> *)(puVar21 + 8))->field_0x0;
    if (iVar6 == *piVar17) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,(ForAnyElementType *)puVar21,piVar17);
    }
    FVar16.Data = FVar16.Data + 0x10;
    *(int *)&((ForElementType<FSetElementId> *)(puVar21 + 8))->field_0x0 = iVar6 + 1;
    lVar20 = *(longlong *)puVar21;
    *(FAssetTagValueRef_u_0 *)(lVar20 + (longlong)iVar6 * 0xc) = (FFixedTagValue)local_c0;
    uVar11 = (ulonglong)local_b4;
    *(undefined4 *)(lVar20 + (longlong)iVar6 * 0xc + 8) = local_b8;
    uVar9 = (ulonglong)local_d0;
  }
  FVar4.Bits._1_1_ = uStack_c7;
  FVar4.Bits._0_1_ = local_c8;
  FVar4.Fixed.Num = uStack_c6;
  FVar4.Fixed.PairBegin = uStack_c4;
  param_1->field0_0x0 = FVar4;
  if ((FAssetTagValueRef_u_0 *)local_d8.Data != (FAssetTagValueRef_u_0 *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return (FPartialMapHandle)param_1;
}

// Finalize @ 141e99fc0

FStoreData * __thiscall
FixedTagPrivate::FStoreBuilder::Finalize(FStoreBuilder *this,FStoreData *__return_storage_ptr__)

{
  TArray<FixedTagPrivate::FNumberlessPair,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<char,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FixedTagPrivate::FMarshalledText,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FixedTagPrivate::FNumberlessExportPath,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FAssetRegistryExportPath,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  bool bVar12;
  FStoreData *pFVar13;
  TArray<FixedTagPrivate::FNumberlessPair,TSizedDefaultAllocator<32>_> *pTVar14;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *pTVar15;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<FixedTagPrivate::FNumberlessExportPath,TSizedDefaultAllocator<32>_> *pTVar17;
  TArray<FAssetRegistryExportPath,TSizedDefaultAllocator<32>_> *pTVar18;
  TArray<FixedTagPrivate::FMarshalledText,TSizedDefaultAllocator<32>_> *pTVar19;
  TArray<char,TSizedDefaultAllocator<32>_> local_a8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_98;
  TArray<FixedTagPrivate::FMarshalledText,TSizedDefaultAllocator<32>_> local_88;
  TArray<FixedTagPrivate::FNumberlessPair,TSizedDefaultAllocator<32>_> local_78;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  TArray<FixedTagPrivate::FNumberlessExportPath,TSizedDefaultAllocator<32>_> local_48;
  TArray<FAssetRegistryExportPath,TSizedDefaultAllocator<32>_> local_38;
  
  if ((this->bFinalized != false) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bFinalized",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                          ,0x357,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    pFVar13 = (FStoreData *)(*pcVar11)();
    return pFVar13;
  }
  this->bFinalized = true;
  pTVar1 = &__return_storage_ptr__->NumberlessPairs;
  (__return_storage_ptr__->Pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &__return_storage_ptr__->WideStrings;
  (__return_storage_ptr__->Pairs).ArrayNum = 0;
  pTVar6 = &__return_storage_ptr__->Texts;
  (__return_storage_ptr__->Pairs).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->NumberlessPairs).ArrayNum = 0;
  (__return_storage_ptr__->NumberlessPairs).ArrayMax = 0;
  (__return_storage_ptr__->AnsiStringOffsets).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AnsiStringOffsets).ArrayNum = 0;
  (__return_storage_ptr__->AnsiStringOffsets).ArrayMax = 0;
  (__return_storage_ptr__->AnsiStrings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AnsiStrings).ArrayNum = 0;
  (__return_storage_ptr__->AnsiStrings).ArrayMax = 0;
  (__return_storage_ptr__->WideStringOffsets).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->WideStringOffsets).ArrayNum = 0;
  (__return_storage_ptr__->WideStringOffsets).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->WideStrings).ArrayNum = 0;
  (__return_storage_ptr__->WideStrings).ArrayMax = 0;
  (__return_storage_ptr__->NumberlessNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->NumberlessNames).ArrayNum = 0;
  (__return_storage_ptr__->NumberlessNames).ArrayMax = 0;
  (__return_storage_ptr__->Names).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Names).ArrayNum = 0;
  (__return_storage_ptr__->Names).ArrayMax = 0;
  (__return_storage_ptr__->NumberlessExportPaths).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->NumberlessExportPaths).ArrayNum = 0;
  (__return_storage_ptr__->NumberlessExportPaths).ArrayMax = 0;
  (__return_storage_ptr__->ExportPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ExportPaths).ArrayNum = 0;
  (__return_storage_ptr__->ExportPaths).ArrayMax = 0;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Texts).ArrayNum = 0;
  (__return_storage_ptr__->Texts).ArrayMax = 0;
  if (__return_storage_ptr__ != (FStoreData *)&this->NumberedPairs) {
    iVar9 = (this->NumberedPairs).ArrayNum;
    pFVar10 = (this->NumberedPairs).AllocatorInstance.Data;
    (__return_storage_ptr__->Pairs).ArrayNum = iVar9;
    if (iVar9 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar9,0,(ForAnyElementType *)__return_storage_ptr__,iVar9,
                 &(__return_storage_ptr__->Pairs).ArrayMax);
      memcpy((__return_storage_ptr__->Pairs).AllocatorInstance.Data,pFVar10,(longlong)iVar9 * 0xc);
    }
  }
  pTVar14 = MakeNumberlessPairs(&local_78,&this->NumberlessPairs);
  if (pTVar1 != pTVar14) {
    pFVar10 = (pTVar1->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar14->AllocatorInstance).Data;
    (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->NumberlessPairs).ArrayNum = pTVar14->ArrayNum;
    (__return_storage_ptr__->NumberlessPairs).ArrayMax = pTVar14->ArrayMax;
    pTVar14->ArrayNum = 0;
    pTVar14->ArrayMax = 0;
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            (&__return_storage_ptr__->AnsiStringOffsets,&(this->AnsiStrings).Offsets);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            (&__return_storage_ptr__->WideStringOffsets,&(this->WideStrings).Offsets);
  pTVar15 = Flatten<FDisplayNameEntryId,TDefaultMapHashableKeyFuncs<FDisplayNameEntryId,unsigned_int,0>_>
                      (&local_68,&this->NumberlessNameIndices);
  pTVar3 = &__return_storage_ptr__->NumberlessNames;
  if (pTVar3 != pTVar15) {
    pFVar10 = (pTVar3->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar15->AllocatorInstance).Data;
    (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->NumberlessNames).ArrayNum = pTVar15->ArrayNum;
    (__return_storage_ptr__->NumberlessNames).ArrayMax = pTVar15->ArrayMax;
    pTVar15->ArrayNum = 0;
    pTVar15->ArrayMax = 0;
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  pTVar16 = Flatten<FName,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>_>
                      (&local_58,&this->NameIndices);
  pTVar4 = &__return_storage_ptr__->Names;
  if (pTVar4 != pTVar16) {
    pFVar10 = (pTVar4->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar16->AllocatorInstance).Data;
    (pTVar16->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Names).ArrayNum = pTVar16->ArrayNum;
    (__return_storage_ptr__->Names).ArrayMax = pTVar16->ArrayMax;
    pTVar16->ArrayNum = 0;
    pTVar16->ArrayMax = 0;
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  pTVar17 = Flatten<FixedTagPrivate::FNumberlessExportPath,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>_>
                      (&local_48,&this->NumberlessExportPathIndices);
  pTVar7 = &__return_storage_ptr__->NumberlessExportPaths;
  if (pTVar7 != pTVar17) {
    pFVar10 = (pTVar7->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pTVar7->AllocatorInstance).Data = (pTVar17->AllocatorInstance).Data;
    (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->NumberlessExportPaths).ArrayNum = pTVar17->ArrayNum;
    (__return_storage_ptr__->NumberlessExportPaths).ArrayMax = pTVar17->ArrayMax;
    pTVar17->ArrayNum = 0;
    pTVar17->ArrayMax = 0;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  pTVar18 = Flatten<FAssetRegistryExportPath,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>_>
                      (&local_38,&this->ExportPathIndices);
  pTVar8 = &__return_storage_ptr__->ExportPaths;
  if (pTVar8 != pTVar18) {
    pFVar10 = (pTVar8->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar18->AllocatorInstance).Data;
    (pTVar18->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ExportPaths).ArrayNum = pTVar18->ArrayNum;
    (__return_storage_ptr__->ExportPaths).ArrayMax = pTVar18->ArrayMax;
    pTVar18->ArrayNum = 0;
    pTVar18->ArrayMax = 0;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  pTVar19 = Flatten<FixedTagPrivate::FMarshalledText,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>_>
                      (&local_88,&this->TextIndices);
  if (pTVar6 != pTVar19) {
    DestructItems<FixedTagPrivate::FMarshalledText,int>
              ((FMarshalledText *)(pTVar6->AllocatorInstance).Data,
               (__return_storage_ptr__->Texts).ArrayNum);
    pFVar10 = (pTVar6->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar19->AllocatorInstance).Data;
    (pTVar19->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Texts).ArrayNum = pTVar19->ArrayNum;
    (__return_storage_ptr__->Texts).ArrayMax = pTVar19->ArrayMax;
    pTVar19->ArrayNum = 0;
    pTVar19->ArrayMax = 0;
  }
  DestructItems<FixedTagPrivate::FMarshalledText,int>
            ((FMarshalledText *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  FlattenAndConcatenateAs<char,TMap<FString,unsigned_int,FDefaultSetAllocator,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>_>_>
            (&local_a8,(this->AnsiStrings).NumCharacters,&(this->AnsiStrings).StringIndices,
             &(this->AnsiStrings).Offsets);
  pTVar5 = &__return_storage_ptr__->AnsiStrings;
  if (pTVar5 != &local_a8) {
    pFVar10 = (pTVar5->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pTVar5->AllocatorInstance).Data = local_a8.AllocatorInstance.Data;
    (__return_storage_ptr__->AnsiStrings).ArrayNum = local_a8.ArrayNum;
    (__return_storage_ptr__->AnsiStrings).ArrayMax = local_a8.ArrayMax;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  FlattenAndConcatenateAs<wchar_t,TMap<FString,unsigned_int,FDefaultSetAllocator,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>_>_>
            (&local_98,(this->WideStrings).NumCharacters,&(this->WideStrings).StringIndices,
             &(this->WideStrings).Offsets);
  if (pTVar2 != &local_98) {
    pFVar10 = (pTVar2->AllocatorInstance).Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pTVar2->AllocatorInstance).Data = local_98.AllocatorInstance.Data;
    (__return_storage_ptr__->WideStrings).ArrayNum = local_98.ArrayNum;
    (__return_storage_ptr__->WideStrings).ArrayMax = local_98.ArrayMax;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// IndexValue @ 141ea54f0

FValueId __thiscall
FixedTagPrivate::FStoreBuilder::IndexValue
          (FStoreBuilder *this,FName param_1,FAssetTagValueRef param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  FValueId FVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FName FVar8;
  FAssetRegistryExportPath *pFVar9;
  FNumberlessExportPath *pFVar10;
  FNameEntryId FVar11;
  longlong lVar12;
  uint *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  ForElementType<FSetElementId> FVar18;
  undefined8 *in_R9;
  TMap<FixedTagPrivate::FMarshalledText,unsigned_int,FDefaultSetAllocator,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>_>
  *this_00;
  TMap<FDisplayNameEntryId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDisplayNameEntryId,unsigned_int,0>_>
  *this_01;
  TMap<FName,unsigned_int,FDefaultSetAllocator,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>_>
  *this_02;
  TMap<FixedTagPrivate::FNumberlessExportPath,unsigned_int,FDefaultSetAllocator,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>_>
  *this_03;
  TMap<FAssetRegistryExportPath,unsigned_int,FDefaultSetAllocator,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>_>
  *this_04;
  FAssetTagValueRef local_res20;
  FMarshalledText local_1e8;
  uint local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0 [2];
  FString local_1a8;
  FValueHandle local_198;
  undefined8 local_190;
  FValueHandle local_188;
  undefined8 local_180;
  FNumberlessExportPath local_178;
  FMarshalledText *local_168;
  int *local_160;
  uint *local_158;
  int *local_150;
  undefined8 *local_148;
  int *local_140;
  wchar_t *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FNumberlessExportPath *local_128;
  int *local_120;
  FAssetRegistryExportPath *local_118;
  int *local_110;
  FAssetRegistryExportPath local_108;
  FName local_d8 [2];
  TStringView<wchar_t> local_c8;
  FName local_b8;
  FName FStack_b0;
  FName local_a8;
  FName FStack_a0;
  FName local_98;
  FNumberlessExportPath local_88;
  FAssetRegistryExportPath local_78;
  FAssetRegistryExportPath local_50;
  
  uVar15 = 0;
  local_1e8.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.String.Data.ArrayNum = 0;
  local_1e8.String.Data.ArrayMax = 0;
  bVar3 = FAssetTagValueRef::TryGetAsMarshalledText(&local_res20,&local_1e8);
  iVar6 = 0;
  if (bVar3) {
    this_00 = &this->TextIndices;
    local_1d4 = *(int *)&(this->TextIndices).field_0x8 - *(int *)&(this->TextIndices).field_0x34;
    uVar5 = local_1e8.String.Data.ArrayNum - 1;
    if (local_1e8.String.Data.ArrayNum == 0) {
      uVar5 = 0;
    }
    if (((int)uVar5 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FValueId)(*pcVar2)();
      return FVar4;
    }
    uVar5 = CityHash32((char *)local_1e8.String.Data.AllocatorInstance.Data,uVar5);
    iVar6 = TSet<TTuple<FixedTagPrivate::FMarshalledText,unsigned_int>,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>,FDefaultSetAllocator>
            ::FindIndexByHash<FixedTagPrivate::FMarshalledText>
                      ((TSet<TTuple<FixedTagPrivate::FMarshalledText,unsigned_int>,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>,FDefaultSetAllocator>
                        *)this_00,uVar5,&local_1e8);
    if ((iVar6 == -1) ||
       (lVar12 = (longlong)iVar6 * 0x20 + *(longlong *)&this_00->field_0x0, lVar12 == 0)) {
      local_168 = &local_1e8;
      local_160 = &local_1d4;
      TSet<TTuple<FixedTagPrivate::FMarshalledText,unsigned_int>,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>,FDefaultSetAllocator>
      ::EmplaceByHash<TPairInitializer<FixedTagPrivate::FMarshalledText_&&,unsigned_int_&&>_>
                ((TSet<TTuple<FixedTagPrivate::FMarshalledText,unsigned_int>,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>,FDefaultSetAllocator>
                  *)this_00,(uint)&local_1d0,
                 (TPairInitializer<FixedTagPrivate::FMarshalledText_&&,unsigned_int_&&> *)
                 (ulonglong)uVar5,(bool *)&local_168);
      lVar12 = (longlong)local_1d0 * 0x20 + *(longlong *)&this_00->field_0x0;
    }
    uVar5 = *(uint *)(lVar12 + 0x10);
    if ((0x1fffffff < uVar5) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < MaxValuesPerType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                           ,0x370,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FValueId)(*pcVar2)();
      return FVar4;
    }
    *(uint *)param_1 = uVar5 * 8 | 6;
    if (local_1e8.String.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.String.Data.AllocatorInstance.Data);
    }
    goto LAB_141ea57a4;
  }
  uVar5 = ::GetTypeHash((FNameEntryId)param_2.field0_0x0._0_4_);
  uVar17 = (uint)((ulonglong)in_R9 >> 0x20);
  if (*(int *)&(this->Options).StoreAsName.Elements.field_0x8 !=
      *(int *)&(this->Options).StoreAsName.Elements.field_0x34) {
    FVar18 = (this->Options).StoreAsName.Hash.SecondaryData;
    if (FVar18 == (ForElementType<FSetElementId>)0x0) {
      FVar18 = (ForElementType<FSetElementId>)&(this->Options).StoreAsName.Hash;
    }
    iVar7 = *(int *)((longlong)FVar18 +
                    (ulonglong)
                    ((this->Options).StoreAsName.HashSize - 1U & uVar5 + param_2.field0_0x0._4_4_) *
                    4);
    if (iVar7 != -1) {
      lVar12 = *(longlong *)&(this->Options).StoreAsName.Elements;
      do {
        if ((FAssetTagValueRef_u_0)
            ((FAssetTagValueRef_u_0 *)(lVar12 + (longlong)iVar7 * 0x10))->Loose ==
            param_2.field0_0x0) {
          if ((longlong)in_R9 < 0) {
            local_198.StoreIndex = uVar17 & 0x7fffffff;
            local_198.Id = SUB84(in_R9,0);
            FVar8 = FValueHandle::AsName(&local_198);
          }
          else {
            if ((in_R9 == (undefined8 *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                                   ,0x587,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              FVar4 = (FValueId)(*pcVar2)();
              return FVar4;
            }
            iVar7 = *(int *)(in_R9 + 1) + -1;
            if (*(int *)(in_R9 + 1) == 0) {
              iVar7 = iVar6;
            }
            FVar8 = (FName)::FName::FName(local_d8,iVar7,(wchar_t *)*in_R9,FNAME_Add);
          }
          local_190 = *(undefined8 *)FVar8;
          FVar11.Value = (uint)local_190;
          if ((int)((ulonglong)local_190 >> 0x20) != 0) {
            this_02 = &this->NameIndices;
            local_1c4 = *(int *)&(this->NameIndices).field_0x8 -
                        *(int *)&(this->NameIndices).field_0x34;
            local_180 = local_190;
            uVar5 = ::GetTypeHash(FVar11);
            uVar5 = uVar5 * 0x40 + local_180._4_4_ + -0x61c88647 + (uVar5 >> 2) ^ uVar5;
            if (*(int *)&(this->NameIndices).field_0x8 == *(int *)&(this->NameIndices).field_0x34)
            goto LAB_141ea59e7;
            puVar14 = *(undefined1 **)&(this->NameIndices).field_0x40;
            if (puVar14 == (undefined1 *)0x0) {
              puVar14 = &(this->NameIndices).field_0x38;
            }
            iVar6 = *(int *)(puVar14 +
                            (ulonglong)(*(int *)&(this->NameIndices).field_0x48 - 1U & uVar5) * 4);
            if (iVar6 == -1) goto LAB_141ea59e7;
            goto LAB_141ea59b0;
          }
          this_01 = &this->NumberlessNameIndices;
          local_1cc = *(int *)&(this->NumberlessNameIndices).field_0x8 -
                      *(int *)&(this->NumberlessNameIndices).field_0x34;
          local_1d8 = FVar11.Value;
          uVar5 = ::GetTypeHash(FVar11);
          if (*(int *)&(this->NumberlessNameIndices).field_0x8 ==
              *(int *)&(this->NumberlessNameIndices).field_0x34) goto LAB_141ea58bf;
          puVar14 = *(undefined1 **)&(this->NumberlessNameIndices).field_0x40;
          if (puVar14 == (undefined1 *)0x0) {
            puVar14 = &(this->NumberlessNameIndices).field_0x38;
          }
          uVar17 = *(uint *)(puVar14 +
                            (ulonglong)
                            (*(int *)&(this->NumberlessNameIndices).field_0x48 - 1U & uVar5) * 4);
          if (uVar17 == 0xffffffff) goto LAB_141ea58bf;
          goto LAB_141ea58a0;
        }
        iVar7 = *(int *)(lVar12 + 8 + (longlong)iVar7 * 0x10);
      } while (iVar7 != -1);
    }
  }
  uVar5 = ::GetTypeHash((FNameEntryId)param_2.field0_0x0._0_4_);
  if (*(int *)&(this->Options).StoreAsPath.Elements.field_0x8 !=
      *(int *)&(this->Options).StoreAsPath.Elements.field_0x34) {
    FVar18 = (this->Options).StoreAsPath.Hash.SecondaryData;
    if (FVar18 == (ForElementType<FSetElementId>)0x0) {
      FVar18 = (ForElementType<FSetElementId>)&(this->Options).StoreAsPath.Hash;
    }
    iVar7 = *(int *)((longlong)FVar18 +
                    (ulonglong)
                    ((this->Options).StoreAsPath.HashSize - 1U & uVar5 + param_2.field0_0x0._4_4_) *
                    4);
    if (iVar7 != -1) {
      lVar12 = *(longlong *)&(this->Options).StoreAsPath.Elements;
      do {
        if ((FAssetTagValueRef_u_0)
            ((FAssetTagValueRef_u_0 *)(lVar12 + (longlong)iVar7 * 0x10))->Loose ==
            param_2.field0_0x0) {
          if (iVar7 != -1) {
            if ((longlong)in_R9 < 0) {
              local_188.StoreIndex = uVar17 & 0x7fffffff;
              local_188.Id = SUB84(in_R9,0);
              pFVar9 = FValueHandle::AsExportPath(&local_188,&local_50);
            }
            else {
              if ((in_R9 == (undefined8 *)0x0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                                     ,0x587,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                FVar4 = (FValueId)(*pcVar2)();
                return FVar4;
              }
              local_138 = (wchar_t *)*in_R9;
              iStack_130 = *(int *)(in_R9 + 1) + -1;
              if (*(int *)(in_R9 + 1) == 0) {
                iStack_130 = iVar6;
              }
              local_c8._12_4_ = uStack_12c;
              local_c8.Size = iStack_130;
              local_c8.DataPtr = local_138;
              ParseExportPath<TStringView<wchar_t>_>(&local_78,&local_c8);
              pFVar9 = &local_78;
            }
            local_108.ClassPath.PackageName = (pFVar9->ClassPath).PackageName;
            local_108.ClassPath.AssetName = (pFVar9->ClassPath).AssetName;
            local_108.Class = pFVar9->Class;
            local_108.Package = pFVar9->Package;
            local_108.Object = pFVar9->Object;
            local_a8 = pFVar9->Class;
            FStack_a0 = pFVar9->Package;
            local_b8 = (pFVar9->ClassPath).PackageName;
            FStack_b0 = (pFVar9->ClassPath).AssetName;
            local_98 = pFVar9->Object;
            if ((pFVar9->ClassPath).AssetName.Number == 0 &&
                (FStack_a0.Number == 0 && local_98.Number == 0)) {
              pFVar10 = MakeNumberlessPath(&local_88,&local_108);
              this_03 = &this->NumberlessExportPathIndices;
              local_178.ClassPackage.Value = (pFVar10->ClassPackage).Value;
              local_178.ClassObject.Value = (pFVar10->ClassObject).Value;
              local_178.Package.Value = (pFVar10->Package).Value;
              local_178.Object.Value = (pFVar10->Object).Value;
              local_1bc = *(int *)&(this->NumberlessExportPathIndices).field_0x8 -
                          *(int *)&(this->NumberlessExportPathIndices).field_0x34;
              uVar5 = FCaseSensitiveFuncs<unsigned_int>::GetKeyHash(&local_178);
              iVar6 = TSet<TTuple<FixedTagPrivate::FNumberlessExportPath,unsigned_int>,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>,FDefaultSetAllocator>
                      ::FindIndexByHash<FixedTagPrivate::FNumberlessExportPath>
                                ((TSet<TTuple<FixedTagPrivate::FNumberlessExportPath,unsigned_int>,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>,FDefaultSetAllocator>
                                  *)this_03,uVar5,&local_178);
              if ((iVar6 == -1) ||
                 (lVar12 = (longlong)iVar6 * 0x1c + *(longlong *)&this_03->field_0x0, lVar12 == 0))
              {
                local_128 = &local_178;
                local_120 = &local_1bc;
                TSet<TTuple<FixedTagPrivate::FNumberlessExportPath,unsigned_int>,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>,FDefaultSetAllocator>
                ::
                EmplaceByHash<TPairInitializer<FixedTagPrivate::FNumberlessExportPath_&&,unsigned_int_&&>_>
                          ((TSet<TTuple<FixedTagPrivate::FNumberlessExportPath,unsigned_int>,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>,FDefaultSetAllocator>
                            *)this_03,(uint)&local_1b8,
                           (TPairInitializer<FixedTagPrivate::FNumberlessExportPath_&&,unsigned_int_&&>
                            *)(ulonglong)uVar5,(bool *)&local_128);
                lVar12 = (longlong)local_1b8 * 0x1c + *(longlong *)&this_03->field_0x0;
              }
              uVar5 = *(uint *)(lVar12 + 0x10);
              if ((0x1fffffff < uVar5) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index < MaxValuesPerType",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                                     ,0x370,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                FVar4 = (FValueId)(*pcVar2)();
                return FVar4;
              }
              *(uint *)param_1 = uVar5 * 8 | 4;
            }
            else {
              this_04 = &this->ExportPathIndices;
              local_1b4 = *(int *)&(this->ExportPathIndices).field_0x8 -
                          *(int *)&(this->ExportPathIndices).field_0x34;
              uVar5 = FCaseSensitiveFuncs<unsigned_int>::GetKeyHash(&local_108);
              iVar6 = TSet<TTuple<FAssetRegistryExportPath,unsigned_int>,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>,FDefaultSetAllocator>
                      ::FindIndexByHash<FAssetRegistryExportPath>
                                ((TSet<TTuple<FAssetRegistryExportPath,unsigned_int>,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>,FDefaultSetAllocator>
                                  *)this_04,uVar5,&local_108);
              if ((iVar6 == -1) ||
                 (lVar12 = (longlong)iVar6 * 0x34 + *(longlong *)&this_04->field_0x0, lVar12 == 0))
              {
                local_118 = &local_108;
                local_110 = &local_1b4;
                TSet<TTuple<FAssetRegistryExportPath,unsigned_int>,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>,FDefaultSetAllocator>
                ::EmplaceByHash<TPairInitializer<FAssetRegistryExportPath_&&,unsigned_int_&&>_>
                          ((TSet<TTuple<FAssetRegistryExportPath,unsigned_int>,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>,FDefaultSetAllocator>
                            *)this_04,(uint)local_1b0,
                           (TPairInitializer<FAssetRegistryExportPath_&&,unsigned_int_&&> *)
                           (ulonglong)uVar5,(bool *)&local_118);
                lVar12 = (longlong)local_1b0[0] * 0x34 + *(longlong *)&this_04->field_0x0;
              }
              uVar5 = *(uint *)(lVar12 + 0x28);
              if ((0x1fffffff < uVar5) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index < MaxValuesPerType",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                                     ,0x370,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                FVar4 = (FValueId)(*pcVar2)();
                return FVar4;
              }
              *(uint *)param_1 = uVar5 * 8 | 5;
            }
            goto LAB_141ea578d;
          }
          break;
        }
        iVar7 = *(int *)(lVar12 + 8 + (longlong)iVar7 * 0x10);
      } while (iVar7 != -1);
    }
  }
  FAssetTagValueRef::AsString(&local_res20,&local_1a8);
  iVar7 = local_1a8.Data.ArrayNum + -1;
  FVar16.Data = local_1a8.Data.AllocatorInstance.Data;
  if (local_1a8.Data.ArrayNum == 0) {
    iVar7 = iVar6;
    FVar16.Data = (FScriptContainerElement *)L"";
  }
  if (iVar7 != 0) {
    do {
      if (0x7f < (ushort)*(wchar_t *)FVar16.Data) {
        uVar5 = FStringIndexer::Index(&this->WideStrings,&local_1a8);
        uVar5 = uVar5 << 3 | 1;
        goto LAB_141ea577a;
      }
      uVar15 = uVar15 + 1;
      FVar16.Data = FVar16.Data + 2;
    } while (uVar15 < (ulonglong)(longlong)iVar7);
  }
  uVar5 = FStringIndexer::Index(&this->AnsiStrings,&local_1a8);
  uVar5 = uVar5 << 3;
LAB_141ea577a:
  *(uint *)param_1 = uVar5;
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  goto LAB_141ea578d;
  while (uVar17 = puVar13[2], uVar17 != 0xffffffff) {
LAB_141ea58a0:
    puVar13 = (uint *)((longlong)(int)uVar17 * 0x10 + *(longlong *)&this_01->field_0x0);
    if (*puVar13 == local_1d8) {
      if (puVar13 != (uint *)0x0) goto LAB_141ea58f6;
      break;
    }
  }
LAB_141ea58bf:
  local_158 = &local_1d8;
  local_150 = &local_1cc;
  TSet<TTuple<FDisplayNameEntryId,unsigned_int>,TDefaultMapHashableKeyFuncs<FDisplayNameEntryId,unsigned_int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<FDisplayNameEntryId_&&,unsigned_int_&&>_>
            ((TSet<TTuple<FDisplayNameEntryId,unsigned_int>,TDefaultMapHashableKeyFuncs<FDisplayNameEntryId,unsigned_int,0>,FDefaultSetAllocator>
              *)this_01,(uint)&local_1c8,
             (TPairInitializer<FDisplayNameEntryId_&&,unsigned_int_&&> *)(ulonglong)uVar5,
             (bool *)&local_158);
  puVar13 = (uint *)((longlong)local_1c8 * 0x10 + *(longlong *)&this_01->field_0x0);
LAB_141ea58f6:
  uVar5 = puVar13[1];
  if ((0x1fffffff < uVar5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < MaxValuesPerType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x370,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    FVar4 = (FValueId)(*pcVar2)();
    return FVar4;
  }
  *(uint *)param_1 = uVar5 * 8 | 2;
  goto LAB_141ea578d;
  while (iVar6 = *(int *)(lVar12 + 0xc), iVar6 != -1) {
LAB_141ea59b0:
    uVar1 = *(undefined8 *)(*(longlong *)&this_02->field_0x0 + (longlong)iVar6 * 0x14);
    lVar12 = *(longlong *)&this_02->field_0x0 + (longlong)iVar6 * 0x14;
    if ((int)uVar1 == (int)local_190 &&
        (int)((ulonglong)uVar1 >> 0x20) == (int)((ulonglong)local_190 >> 0x20)) {
      if (lVar12 != 0) goto LAB_141ea5a21;
      break;
    }
  }
LAB_141ea59e7:
  local_148 = &local_190;
  local_140 = &local_1c4;
  TSet<TTuple<FName,unsigned_int>,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<FName_&&,unsigned_int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>,FDefaultSetAllocator>
              *)this_02,(uint)&local_1c0,
             (TPairInitializer<FName_&&,unsigned_int_&&> *)(ulonglong)uVar5,(bool *)&local_148);
  lVar12 = *(longlong *)&this_02->field_0x0 + (longlong)local_1c0 * 0x14;
LAB_141ea5a21:
  uVar5 = *(uint *)(lVar12 + 8);
  if ((0x1fffffff < uVar5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < MaxValuesPerType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x370,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    FVar4 = (FValueId)(*pcVar2)();
    return FVar4;
  }
  *(uint *)param_1 = uVar5 * 8 | 3;
LAB_141ea578d:
  if (local_1e8.String.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.String.Data.AllocatorInstance.Data);
  }
LAB_141ea57a4:
  return (FValueId)param_1.ComparisonIndex.Value;
}

