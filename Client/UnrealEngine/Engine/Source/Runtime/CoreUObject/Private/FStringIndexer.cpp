// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FlattenAsAnsi @ 141e9e1b0

TArray<char,TSizedDefaultAllocator<32>_> * __thiscall
FixedTagPrivate::FStoreBuilder::FStringIndexer::FlattenAsAnsi
          (FStringIndexer *this,TArray<char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FlattenAndConcatenateAs<char,TMap<FString,unsigned_int,FDefaultSetAllocator,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>_>_>
            (__return_storage_ptr__,this->NumCharacters,&this->StringIndices,&this->Offsets);
  return __return_storage_ptr__;
}

// FlattenAsWide @ 141e9e1e0

TArray<wchar_t,TSizedDefaultAllocator<32>_> * __thiscall
FixedTagPrivate::FStoreBuilder::FStringIndexer::FlattenAsWide
          (FStringIndexer *this,TArray<wchar_t,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FlattenAndConcatenateAs<wchar_t,TMap<FString,unsigned_int,FDefaultSetAllocator,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>_>_>
            (__return_storage_ptr__,this->NumCharacters,&this->StringIndices,&this->Offsets);
  return __return_storage_ptr__;
}

// Index @ 141ea5130

uint __thiscall
FixedTagPrivate::FStoreBuilder::FStringIndexer::Index(FStringIndexer *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  FStringIndexer *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int local_res8 [2];
  int local_res10 [2];
  FString *local_38;
  int *local_30;
  
  local_res8[0] =
       *(int *)&(this->StringIndices).field_0x8 - *(int *)&(this->StringIndices).field_0x34;
  iVar2 = (param_1->Data).ArrayNum;
  uVar6 = FCaseSensitiveFuncs<unsigned_int>::GetKeyHash(param_1);
  iVar7 = TSet<TTuple<FString,unsigned_int>,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,unsigned_int>,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>,FDefaultSetAllocator>
                      *)&this->StringIndices,uVar6,param_1);
  if ((iVar7 == -1) ||
     (lVar10 = (longlong)iVar7 * 0x20 + *(longlong *)&this->StringIndices, lVar10 == 0)) {
    local_30 = local_res8;
    local_38 = param_1;
    TSet<TTuple<FString,unsigned_int>,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>,FDefaultSetAllocator>
    ::EmplaceByHash<TPairInitializer<FString_&&,unsigned_int_&&>_>
              ((TSet<TTuple<FString,unsigned_int>,FixedTagPrivate::FStoreBuilder::FCaseSensitiveFuncs<unsigned_int>,FDefaultSetAllocator>
                *)&this->StringIndices,(uint)local_res10,
               (TPairInitializer<FString_&&,unsigned_int_&&> *)(ulonglong)uVar6,(bool *)&local_38);
    lVar10 = (longlong)local_res10[0] * 0x20 + *(longlong *)&this->StringIndices;
  }
  uVar6 = *(uint *)(lVar10 + 0x10);
  if (0x1fffffff < uVar6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < MaxValuesPerType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x370,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  if ((this->Offsets).ArrayNum <
      *(int *)&(this->StringIndices).field_0x8 - *(int *)&(this->StringIndices).field_0x34) {
    pFVar3 = (FStringIndexer *)(this->Offsets).AllocatorInstance.Data;
    if ((pFVar3 <= this) &&
       (this < (FStringIndexer *)(&pFVar3->NumCharacters + (this->Offsets).ArrayMax))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    iVar7 = (this->Offsets).ArrayNum;
    piVar1 = &(this->Offsets).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->Offsets).AllocatorInstance,piVar1);
    }
    (this->Offsets).ArrayNum = iVar7 + 1;
    *(uint *)((this->Offsets).AllocatorInstance.Data + (longlong)iVar7 * 4) = this->NumCharacters;
    uVar8 = iVar2 + -1 + this->NumCharacters;
    if (iVar2 == 0) {
      uVar8 = this->NumCharacters;
    }
    this->NumCharacters = uVar8 + 1;
    if ((this->Offsets).ArrayNum !=
        *(int *)&(this->StringIndices).field_0x8 - *(int *)&(this->StringIndices).field_0x34) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offsets.Num() == StringIndices.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x37e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    iVar2 = (this->Offsets).ArrayNum;
    uVar9 = iVar2 - 1;
    uVar8 = 0;
    if ((int)uVar9 < iVar2) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    if (this->NumCharacters <=
        *(uint *)((this->Offsets).AllocatorInstance.Data +
                 (longlong)(this->Offsets).ArrayNum * 4 + -4)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumCharacters > Offsets.Last()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x37f,L"Overflow");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
  }
  return uVar6;
}

