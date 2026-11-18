// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// At @ 141e916f0

FNumberedPair * __thiscall
FixedTagPrivate::FMapHandle::At(FMapHandle *this,FNumberedPair *__return_storage_ptr__,uint param_1)

{
  FStore **ppFVar1;
  FStore *pFVar2;
  FNumberlessPair FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FValueId FVar7;
  FNumberedPair *pFVar8;
  uint uVar9;
  FName FVar10;
  
  if (this->Num <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < Num",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x2a0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FNumberedPair *)(*pcVar4)();
      return pFVar8;
    }
  }
  ppFVar1 = GStores.Data + this->StoreIndex;
  if (this->HasNumberlessKeys == 0) {
    if (*ppFVar1 == (FStore *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Capacity && Data[Index] != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x180,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FNumberedPair *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar2 = *ppFVar1;
    uVar9 = this->PairBegin + param_1;
    uVar6 = 0;
    if ((int)uVar9 < (pFVar2->Pairs).ArrayNum) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FNumberedPair *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar8 = (pFVar2->Pairs).DataPtr;
    FVar10 = pFVar8[(int)uVar9].Key;
    FVar7 = pFVar8[(int)uVar9].Value;
  }
  else {
    if (*ppFVar1 == (FStore *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Capacity && Data[Index] != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x180,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FNumberedPair *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar2 = *ppFVar1;
    uVar9 = this->PairBegin + param_1;
    uVar6 = 0;
    if ((int)uVar9 < (pFVar2->NumberlessPairs).ArrayNum) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FNumberedPair *)(*pcVar4)();
        return pFVar8;
      }
    }
    FVar3 = (pFVar2->NumberlessPairs).DataPtr[(int)uVar9];
    FVar10 = (FName)((ulonglong)FVar3 & 0xffffffff);
    FVar7 = FVar3.Value;
  }
  __return_storage_ptr__->Key = FVar10;
  __return_storage_ptr__->Value = FVar7;
  return __return_storage_ptr__;
}

// FindValue @ 141e9dec0

FValueId * __thiscall FixedTagPrivate::FMapHandle::FindValue(FMapHandle *this,FName param_1)

{
  FNumberedPair *pFVar1;
  FName *pFVar2;
  TArrayView<FixedTagPrivate::FNumberedPair_const_,int> local_18;
  
  if (this->HasNumberlessKeys == 0) {
    GetNumberedView(this,&local_18);
    pFVar1 = local_18.DataPtr + local_18.ArrayNum;
    for (; local_18.DataPtr != pFVar1; local_18.DataPtr = local_18.DataPtr + 1) {
      if (param_1 == (local_18.DataPtr)->Key) {
        return &(local_18.DataPtr)->Value;
      }
    }
  }
  else if (param_1.Number == 0) {
    GetNumberlessView(this,(TArrayView<FixedTagPrivate::FNumberlessPair_const_,int> *)&local_18);
    pFVar2 = &(local_18.DataPtr)->Key;
    if (local_18.DataPtr != (FNumberedPair *)(pFVar2 + local_18.ArrayNum)) {
      do {
        if (param_1.ComparisonIndex.Value.Value == ((local_18.DataPtr)->Key).ComparisonIndex.Value)
        {
          return (FValueId *)&((local_18.DataPtr)->Key).Number;
        }
        local_18.DataPtr = (FNumberedPair *)&(local_18.DataPtr)->Value;
      } while (local_18.DataPtr != (FNumberedPair *)(pFVar2 + local_18.ArrayNum));
      return (FValueId *)0x0;
    }
  }
  return (FValueId *)0x0;
}

// GetNumberedView @ 141ea1790

TArrayView<FixedTagPrivate::FNumberedPair_const_,int> * __thiscall
FixedTagPrivate::FMapHandle::GetNumberedView
          (FMapHandle *this,
          TArrayView<FixedTagPrivate::FNumberedPair_const_,int> *__return_storage_ptr__)

{
  ushort uVar1;
  uint uVar2;
  code *pcVar3;
  ushort uVar4;
  FNumberedPair *pFVar5;
  bool bVar6;
  TArrayView<FixedTagPrivate::FNumberedPair_const_,int> *pTVar7;
  
  if (this->HasNumberlessKeys != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasNumberlessKeys == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x26f,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArrayView<FixedTagPrivate::FNumberedPair_const_,int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  uVar1 = this->Num;
  uVar2 = this->PairBegin;
  uVar4 = this->StoreIndex;
  if (GStores.Data[uVar4] == (FStore *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < Capacity && Data[Index] != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x180,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArrayView<FixedTagPrivate::FNumberedPair_const_,int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pFVar5 = (GStores.Data[uVar4]->Pairs).DataPtr;
  if ((int)*(undefined8 *)&(GStores.Data[uVar4]->Pairs).ArrayNum < (int)(uVar1 + uVar2)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SliceIndex + SliceNum <= FullView.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x267,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArrayView<FixedTagPrivate::FNumberedPair_const_,int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->ArrayNum = (uint)uVar1;
  __return_storage_ptr__->DataPtr = pFVar5 + (int)uVar2;
  return __return_storage_ptr__;
}

// GetNumberlessView @ 141ea1890

TArrayView<FixedTagPrivate::FNumberlessPair_const_,int> * __thiscall
FixedTagPrivate::FMapHandle::GetNumberlessView
          (FMapHandle *this,
          TArrayView<FixedTagPrivate::FNumberlessPair_const_,int> *__return_storage_ptr__)

{
  ushort uVar1;
  uint uVar2;
  code *pcVar3;
  ushort uVar4;
  FNumberlessPair *pFVar5;
  bool bVar6;
  TArrayView<FixedTagPrivate::FNumberlessPair_const_,int> *pTVar7;
  
  if (this->HasNumberlessKeys == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasNumberlessKeys == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x275,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArrayView<FixedTagPrivate::FNumberlessPair_const_,int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  uVar1 = this->Num;
  uVar2 = this->PairBegin;
  uVar4 = this->StoreIndex;
  if (GStores.Data[uVar4] == (FStore *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < Capacity && Data[Index] != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x180,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArrayView<FixedTagPrivate::FNumberlessPair_const_,int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pFVar5 = (GStores.Data[uVar4]->NumberlessPairs).DataPtr;
  if ((int)*(undefined8 *)&(GStores.Data[uVar4]->NumberlessPairs).ArrayNum < (int)(uVar1 + uVar2)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SliceIndex + SliceNum <= FullView.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x267,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArrayView<FixedTagPrivate::FNumberlessPair_const_,int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->ArrayNum = (uint)uVar1;
  __return_storage_ptr__->DataPtr = pFVar5 + (int)uVar2;
  return __return_storage_ptr__;
}

