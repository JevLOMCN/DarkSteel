// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 39

// FAssetRegistryTagsContext @ 141f65960

FAssetRegistryTagsContext * __thiscall
FAssetRegistryTagsContext::FAssetRegistryTagsContext
          (FAssetRegistryTagsContext *this,FAssetRegistryTagsContextData *param_1)

{
  this->Data = param_1;
  return this;
}

// FAssetRegistryTagsContext @ 141f65970

FAssetRegistryTagsContext * __thiscall
FAssetRegistryTagsContext::FAssetRegistryTagsContext
          (FAssetRegistryTagsContext *this,FAssetRegistryTagsContext *param_1)

{
  this->Data = param_1->Data;
  return this;
}

// AddCookTag @ 141f6d060

void __thiscall
FAssetRegistryTagsContext::AddCookTag(FAssetRegistryTagsContext *this,FAssetRegistryTag *param_1)

{
  FScriptContainerElement *pFVar1;
  TStringView<wchar_t> local_18;
  
  if (this->Data->bWantsCookTags == false) {
    pFVar1 = (param_1->Value).Data.AllocatorInstance.Data;
  }
  else {
    local_18 = UE::AssetRegistry::CookTagPrefix;
    AddTagInternal(this,param_1,&local_18);
    pFVar1 = (param_1->Value).Data.AllocatorInstance.Data;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddTag @ 141f6e160

void __thiscall
FAssetRegistryTagsContext::AddTag(FAssetRegistryTagsContext *this,FAssetRegistryTag *param_1)

{
  FScriptContainerElement *pFVar1;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)0x0;
  local_18.Size = 0;
  local_18._12_4_ = 0;
  AddTagInternal(this,param_1,&local_18);
  pFVar1 = (param_1->Value).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddTagInternal @ 141f6e1b0

void __thiscall
FAssetRegistryTagsContext::AddTagInternal
          (FAssetRegistryTagsContext *this,FAssetRegistryTag *param_1,TStringView<wchar_t> *param_2)

{
  FString *pFVar1;
  FString *pFVar2;
  FAssetRegistryTagsContextData *this_00;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  uint uVar5;
  FAssetRegistryTag *pFVar6;
  FName local_res10;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  TransformTagName(this,(FName)&local_res10,(TStringView<wchar_t> *)param_1->Name,SUB81(&local_18,0)
                  );
  FVar4 = local_res10;
  if (local_res10 != (FName)0x0) {
    this_00 = this->Data;
    uVar5 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
    pFVar6 = TMapBase<FName,UObject::FAssetRegistryTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,UObject::FAssetRegistryTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>_>
                         *)this_00,uVar5 + FVar4.Number,&local_res10);
    pFVar1 = &param_1->Value;
    pFVar2 = &pFVar6->Value;
    pFVar6->Name = param_1->Name;
    if (pFVar2 != pFVar1) {
      pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar6->Value).Data.ArrayNum = (param_1->Value).Data.ArrayNum;
      (pFVar6->Value).Data.ArrayMax = (param_1->Value).Data.ArrayMax;
      (param_1->Value).Data.ArrayNum = 0;
      (param_1->Value).Data.ArrayMax = 0;
    }
    pFVar6->Type = param_1->Type;
    pFVar6->DisplayFlags = param_1->DisplayFlags;
    pFVar6->Name = local_res10;
  }
  return;
}

// ContainsCookTag @ 141f735e0

bool __thiscall
FAssetRegistryTagsContext::ContainsCookTag(FAssetRegistryTagsContext *this,FName param_1)

{
  bool bVar1;
  TStringView<wchar_t> local_18;
  
  if (this->Data->bWantsCookTags == false) {
    return false;
  }
  local_18 = UE::AssetRegistry::CookTagPrefix;
  bVar1 = ContainsTagInternal(this,param_1,&local_18);
  return bVar1;
}

// ContainsTag @ 141f73650

bool __thiscall
FAssetRegistryTagsContext::ContainsTag(FAssetRegistryTagsContext *this,FName param_1)

{
  bool bVar1;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)0x0;
  local_18.Size = 0;
  local_18._12_4_ = 0;
  bVar1 = ContainsTagInternal(this,param_1,&local_18);
  return bVar1;
}

// ContainsTagInternal @ 141f73680

bool __thiscall
FAssetRegistryTagsContext::ContainsTagInternal
          (FAssetRegistryTagsContext *this,FName param_1,TStringView<wchar_t> *param_2)

{
  longlong lVar1;
  FAssetRegistryTagsContextData *pFVar2;
  uint uVar3;
  int iVar4;
  FName FVar5;
  undefined1 *puVar6;
  undefined1 local_res10 [24];
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  FVar5 = TransformTagName(this,(FName)local_res10,(TStringView<wchar_t> *)param_1,
                           SUB81(&local_18,0));
  lVar1 = *(longlong *)FVar5;
  if (lVar1 == 0) {
    return false;
  }
  pFVar2 = this->Data;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  if (*(int *)&(pFVar2->Tags).field_0x8 != *(int *)&(pFVar2->Tags).field_0x34) {
    puVar6 = *(undefined1 **)&(pFVar2->Tags).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(pFVar2->Tags).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(pFVar2->Tags).field_0x48 - 1U &
                              (int)((ulonglong)lVar1 >> 0x20) + uVar3) * 4);
    if (iVar4 != -1) {
      do {
        if (*(longlong *)(*(longlong *)&pFVar2->Tags + (longlong)iVar4 * 0x30) == lVar1)
        goto LAB_141f7372f;
        iVar4 = *(int *)(*(longlong *)&pFVar2->Tags + 0x28 + (longlong)iVar4 * 0x30);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_141f7372f:
  return iVar4 != -1;
}

// EnumerateTags @ 141f79bc0

void __thiscall
FAssetRegistryTagsContext::EnumerateTags
          (FAssetRegistryTagsContext *this,
          TFunctionRef<void___cdecl(UObject::FAssetRegistryTag_const_&)> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FAssetRegistryTagsContextData *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pFVar4 = this->Data;
  iVar12 = 0;
  iVar3 = *(int *)&(pFVar4->Tags).field_0x28;
  puVar1 = &(pFVar4->Tags).field_0x10;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(pFVar4->Tags).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141f79c5d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_141f79c5d:
  uVar11 = *(uint *)&(pFVar4->Tags).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(pFVar4->Tags).field_0x8 - *(int *)&(pFVar4->Tags).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(pFVar4->Tags).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(pFVar4->Tags).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141f79d60;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_141f79d60:
  while( true ) {
    if (*(int *)&(pFVar4->Tags).field_0x8 - *(int *)&(pFVar4->Tags).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)param_1)
              (*(undefined8 *)&param_1->field_0x8,
               *(longlong *)&pFVar4->Tags + 8 + (longlong)TStack_60.CurrentBitIndex * 0x30);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// FindCookTag @ 141f7bc50

FAssetRegistryTag * __thiscall
FAssetRegistryTagsContext::FindCookTag(FAssetRegistryTagsContext *this,FName param_1)

{
  FAssetRegistryTag *pFVar1;
  TStringView<wchar_t> local_18;
  
  if (this->Data->bWantsCookTags == false) {
    return (FAssetRegistryTag *)0x0;
  }
  local_18 = UE::AssetRegistry::CookTagPrefix;
  pFVar1 = FindTagInternal(this,param_1,&local_18);
  return pFVar1;
}

// FindOrAddCookTag @ 141f7c460

FAssetRegistryTag * __thiscall
FAssetRegistryTagsContext::FindOrAddCookTag
          (FAssetRegistryTagsContext *this,FName param_1,bool *param_2)

{
  FAssetRegistryTagsContextData *this_00;
  uint uVar1;
  FName FVar2;
  FAssetRegistryTag *pFVar3;
  FName local_res8;
  undefined1 local_res20 [8];
  TStringView<wchar_t> local_18;
  
  if (this->Data->bWantsCookTags == false) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FAssetRegistryTagsContext::FindOrAddCookTag'::__l5::
             _dynamic_atexit_destructor_for__PlaceholderTag__);
      _Init_thread_footer(&::_TSS0);
    }
    PlaceholderTag.Name = param_1;
    return &PlaceholderTag;
  }
  local_18 = UE::AssetRegistry::CookTagPrefix;
  local_res8 = param_1;
  FVar2 = TransformTagName(this,(FName)local_res20,(TStringView<wchar_t> *)param_1,
                           SUB81(&local_18,0));
  FVar2 = *(FName *)FVar2;
  local_res8 = FVar2;
  if (FVar2 != (FName)0x0) {
    this_00 = this->Data;
    uVar1 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    pFVar3 = TMapBase<FName,UObject::FAssetRegistryTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,UObject::FAssetRegistryTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>_>
                         *)this_00,FVar2.Number + uVar1,&local_res8);
    if (pFVar3->Name == local_res8) {
      if (param_2 != (bool *)0x0) {
        *param_2 = true;
      }
    }
    else {
      pFVar3->Name = local_res8;
      if (param_2 != (bool *)0x0) {
        *param_2 = false;
        return pFVar3;
      }
    }
    return pFVar3;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), FVar2 = local_res8, ::_TSS0 == -1)) {
    atexit(`FAssetRegistryTagsContext::FindOrAddTagInternal'::__l5::
           _dynamic_atexit_destructor_for__ErrorResult__);
    _Init_thread_footer(&::_TSS0);
    FVar2 = local_res8;
  }
  ErrorResult.Name = FVar2;
  if (param_2 != (bool *)0x0) {
    *param_2 = false;
  }
  return &ErrorResult;
}

// FindOrAddTag @ 141f7c6e0

FAssetRegistryTag * __thiscall
FAssetRegistryTagsContext::FindOrAddTag(FAssetRegistryTagsContext *this,FName param_1,bool *param_2)

{
  FAssetRegistryTagsContextData *this_00;
  uint uVar1;
  FName FVar2;
  FAssetRegistryTag *pFVar3;
  FName local_res10;
  undefined1 local_res20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  local_res10 = param_1;
  FVar2 = TransformTagName(this,(FName)local_res20,(TStringView<wchar_t> *)param_1,
                           SUB81(&local_18,0));
  FVar2 = *(FName *)FVar2;
  local_res10 = FVar2;
  if (FVar2 == (FName)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) &&
       (_Init_thread_header(&::_TSS0), FVar2 = local_res10, ::_TSS0 == -1)) {
      atexit(`FAssetRegistryTagsContext::FindOrAddTagInternal'::__l5::
             _dynamic_atexit_destructor_for__ErrorResult__);
      _Init_thread_footer(&::_TSS0);
      FVar2 = local_res10;
    }
    ErrorResult.Name = FVar2;
    if (param_2 != (bool *)0x0) {
      *param_2 = false;
    }
    return &ErrorResult;
  }
  this_00 = this->Data;
  uVar1 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  pFVar3 = TMapBase<FName,UObject::FAssetRegistryTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,UObject::FAssetRegistryTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>_>
                       *)this_00,FVar2.Number + uVar1,&local_res10);
  if (pFVar3->Name == local_res10) {
    if (param_2 != (bool *)0x0) {
      *param_2 = true;
    }
  }
  else {
    pFVar3->Name = local_res10;
    if (param_2 != (bool *)0x0) {
      *param_2 = false;
      return pFVar3;
    }
  }
  return pFVar3;
}

// FindOrAddTagInternal @ 141f7c830

FAssetRegistryTag * __thiscall
FAssetRegistryTagsContext::FindOrAddTagInternal
          (FAssetRegistryTagsContext *this,FName param_1,TStringView<wchar_t> *param_2,bool *param_3
          )

{
  FAssetRegistryTagsContextData *this_00;
  uint uVar1;
  FName FVar2;
  FAssetRegistryTag *pFVar3;
  FName local_res10;
  undefined1 local_res18 [8];
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  local_res10 = param_1;
  FVar2 = TransformTagName(this,(FName)local_res18,(TStringView<wchar_t> *)param_1,
                           SUB81(&local_18,0));
  FVar2 = *(FName *)FVar2;
  local_res10 = FVar2;
  if (FVar2 == (FName)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) &&
       (_Init_thread_header(&::_TSS0), FVar2 = local_res10, ::_TSS0 == -1)) {
      atexit(`FAssetRegistryTagsContext::FindOrAddTagInternal'::__l5::
             _dynamic_atexit_destructor_for__ErrorResult__);
      _Init_thread_footer(&::_TSS0);
      FVar2 = local_res10;
    }
    ErrorResult.Name = FVar2;
    if (param_3 != (bool *)0x0) {
      *param_3 = false;
    }
    return &ErrorResult;
  }
  this_00 = this->Data;
  uVar1 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  pFVar3 = TMapBase<FName,UObject::FAssetRegistryTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,UObject::FAssetRegistryTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>_>
                       *)this_00,FVar2.Number + uVar1,&local_res10);
  if (pFVar3->Name == local_res10) {
    if (param_3 != (bool *)0x0) {
      *param_3 = true;
    }
  }
  else {
    pFVar3->Name = local_res10;
    if (param_3 != (bool *)0x0) {
      *param_3 = false;
      return pFVar3;
    }
  }
  return pFVar3;
}

// FindTag @ 141f7cfd0

FAssetRegistryTag * __thiscall
FAssetRegistryTagsContext::FindTag(FAssetRegistryTagsContext *this,FName param_1)

{
  FAssetRegistryTag *pFVar1;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)0x0;
  local_18.Size = 0;
  local_18._12_4_ = 0;
  pFVar1 = FindTagInternal(this,param_1,&local_18);
  return pFVar1;
}

// FindTagInternal @ 141f7d000

FAssetRegistryTag * __thiscall
FAssetRegistryTagsContext::FindTagInternal
          (FAssetRegistryTagsContext *this,FName param_1,TStringView<wchar_t> *param_2)

{
  FAssetRegistryTagsContextData *pFVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  FAssetRegistryTag *pFVar5;
  FAssetRegistryTag *pFVar6;
  undefined1 *puVar7;
  FAssetRegistryTag *pFVar8;
  undefined1 local_res10 [24];
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  FVar4 = TransformTagName(this,(FName)local_res10,(TStringView<wchar_t> *)param_1,
                           SUB81(&local_18,0));
  FVar4 = *(FName *)FVar4;
  if (FVar4 == (FName)0x0) {
    return (FAssetRegistryTag *)0x0;
  }
  pFVar1 = this->Data;
  uVar2 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
  pFVar8 = (FAssetRegistryTag *)0x0;
  pFVar5 = pFVar8;
  if (*(int *)&(pFVar1->Tags).field_0x8 != *(int *)&(pFVar1->Tags).field_0x34) {
    puVar7 = *(undefined1 **)&(pFVar1->Tags).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(pFVar1->Tags).field_0x38;
    }
    iVar3 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(pFVar1->Tags).field_0x48 - 1U & FVar4.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        pFVar5 = (FAssetRegistryTag *)((longlong)iVar3 * 0x30 + *(longlong *)&pFVar1->Tags);
        if (pFVar5->Name == FVar4) break;
        iVar3 = *(int *)&pFVar5[1].Value.Data.AllocatorInstance.Data;
        pFVar5 = pFVar8;
      } while (iVar3 != -1);
    }
  }
  pFVar6 = (FAssetRegistryTag *)&pFVar5->Value;
  if (pFVar5 == (FAssetRegistryTag *)0x0) {
    pFVar6 = pFVar8;
  }
  return pFVar6;
}

// GetBundleResult @ 141f80f20

FAssetBundleData * __thiscall
FAssetRegistryTagsContext::GetBundleResult(FAssetRegistryTagsContext *this)

{
  return this->Data->BundleResult;
}

// GetCaller @ 141f812d0

EAssetRegistryTagsCaller __thiscall
FAssetRegistryTagsContext::GetCaller(FAssetRegistryTagsContext *this)

{
  return this->Data->Caller;
}

// GetCookType @ 141f816f0

ECookType __thiscall FAssetRegistryTagsContext::GetCookType(FAssetRegistryTagsContext *this)

{
  return this->Data->CookType;
}

// GetCookingDLC @ 141f81700

ECookingDLC __thiscall FAssetRegistryTagsContext::GetCookingDLC(FAssetRegistryTagsContext *this)

{
  return this->Data->CookingDLC;
}

// GetNumTags @ 141f827c0

int __thiscall FAssetRegistryTagsContext::GetNumTags(FAssetRegistryTagsContext *this)

{
  return *(int *)&(this->Data->Tags).field_0x8 - *(int *)&(this->Data->Tags).field_0x34;
}

// GetObject @ 141f82b80

UObject * __thiscall FAssetRegistryTagsContext::GetObject(FAssetRegistryTagsContext *this)

{
  return this->Data->Object;
}

// GetTargetPlatform @ 141f87730

ITargetPlatform * __thiscall
FAssetRegistryTagsContext::GetTargetPlatform(FAssetRegistryTagsContext *this)

{
  return this->Data->TargetPlatform;
}

// IsCookByTheBook @ 141f8ffb0

bool __thiscall FAssetRegistryTagsContext::IsCookByTheBook(FAssetRegistryTagsContext *this)

{
  return this->Data->CookType == ByTheBook;
}

// IsCookOnTheFly @ 141f8ffd0

bool __thiscall FAssetRegistryTagsContext::IsCookOnTheFly(FAssetRegistryTagsContext *this)

{
  return this->Data->CookType == OnTheFly;
}

// IsCookTypeUnknown @ 141f8fff0

bool __thiscall FAssetRegistryTagsContext::IsCookTypeUnknown(FAssetRegistryTagsContext *this)

{
  return this->Data->CookType == Unknown;
}

// IsCooking @ 141f90010

bool __thiscall FAssetRegistryTagsContext::IsCooking(FAssetRegistryTagsContext *this)

{
  return this->Data->TargetPlatform != (ITargetPlatform *)0x0;
}

// IsFullUpdate @ 141f900a0

bool __thiscall FAssetRegistryTagsContext::IsFullUpdate(FAssetRegistryTagsContext *this)

{
  if ((this->Data->Caller != FullUpdate) && (this->Data->bFullUpdateRequested == false)) {
    return false;
  }
  return true;
}

// IsProceduralSave @ 141f90300

bool __thiscall FAssetRegistryTagsContext::IsProceduralSave(FAssetRegistryTagsContext *this)

{
  return this->Data->bProceduralSave;
}

// IsSaving @ 141f90460

bool __thiscall FAssetRegistryTagsContext::IsSaving(FAssetRegistryTagsContext *this)

{
  return this->Data->Caller == SavePackage;
}

// RemoveCookTag @ 141f98580

void __thiscall
FAssetRegistryTagsContext::RemoveCookTag(FAssetRegistryTagsContext *this,FName param_1)

{
  FAssetRegistryTagsContextData *this_00;
  uint uVar1;
  FName FVar2;
  FName local_res8;
  TStringView<wchar_t> local_18;
  
  if (this->Data->bWantsCookTags != false) {
    local_18 = UE::AssetRegistry::CookTagPrefix;
    FVar2 = TransformTagName(this,(FName)&local_res8,(TStringView<wchar_t> *)param_1,
                             SUB81(&local_18,0));
    FVar2 = *(FName *)FVar2;
    if ((FVar2 != (FName)0x0) &&
       (this_00 = this->Data,
       *(int *)&(this_00->Tags).field_0x8 != *(int *)&(this_00->Tags).field_0x34)) {
      local_res8 = FVar2;
      uVar1 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      TSet<TTuple<FName,UObject::FAssetRegistryTag>,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,UObject::FAssetRegistryTag>,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>,FDefaultSetAllocator>
                           *)this_00,FVar2.Number + uVar1,&local_res8);
    }
  }
  return;
}

// RemoveTag @ 141f98ba0

void __thiscall FAssetRegistryTagsContext::RemoveTag(FAssetRegistryTagsContext *this,FName param_1)

{
  FAssetRegistryTagsContextData *this_00;
  uint uVar1;
  FName FVar2;
  FName local_res10 [3];
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  FVar2 = TransformTagName(this,(FName)local_res10,(TStringView<wchar_t> *)param_1,
                           SUB81(&local_18,0));
  FVar2 = *(FName *)FVar2;
  if ((FVar2 != (FName)0x0) &&
     (this_00 = this->Data,
     *(int *)&(this_00->Tags).field_0x8 != *(int *)&(this_00->Tags).field_0x34)) {
    local_res10[0] = FVar2;
    uVar1 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    TSet<TTuple<FName,UObject::FAssetRegistryTag>,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,UObject::FAssetRegistryTag>,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>,FDefaultSetAllocator>
                         *)this_00,FVar2.Number + uVar1,local_res10);
  }
  return;
}

// RemoveTagInternal @ 141f98c20

void __thiscall
FAssetRegistryTagsContext::RemoveTagInternal
          (FAssetRegistryTagsContext *this,FName param_1,TStringView<wchar_t> *param_2)

{
  FAssetRegistryTagsContextData *this_00;
  uint uVar1;
  FName FVar2;
  FName local_res10 [3];
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_2->DataPtr;
  uStack_10 = *(undefined8 *)&param_2->Size;
  FVar2 = TransformTagName(this,(FName)local_res10,(TStringView<wchar_t> *)param_1,
                           SUB81(&local_18,0));
  FVar2 = *(FName *)FVar2;
  if ((FVar2 != (FName)0x0) &&
     (this_00 = this->Data,
     *(int *)&(this_00->Tags).field_0x8 != *(int *)&(this_00->Tags).field_0x34)) {
    local_res10[0] = FVar2;
    uVar1 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    TSet<TTuple<FName,UObject::FAssetRegistryTag>,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,UObject::FAssetRegistryTag>,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>,FDefaultSetAllocator>
                         *)this_00,FVar2.Number + uVar1,local_res10);
  }
  return;
}

// SetBundleResult @ 141fa96e0

void __thiscall
FAssetRegistryTagsContext::SetBundleResult
          (FAssetRegistryTagsContext *this,FAssetBundleData *param_1)

{
  this->Data->BundleResult = param_1;
  return;
}

// TransformTagName @ 141fae550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __thiscall
FAssetRegistryTagsContext::TransformTagName
          (FAssetRegistryTagsContext *this,FName param_1,TStringView<wchar_t> *param_2,bool param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  FName *pFVar5;
  ulong64 uVar6;
  int iVar7;
  undefined7 in_register_00000089;
  uint *puVar8;
  FName local_res18 [2];
  byte in_stack_00000028;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [8];
  TStringBuilderBase<wchar_t> *local_190;
  FName local_188;
  uint uStack_180;
  uint uStack_17c;
  TStringBuilderBase<wchar_t> local_178;
  TStringBuilderBase<wchar_t> local_158 [4];
  TStringBuilderBase<wchar_t> local_d8;
  wchar_t local_b8 [64];
  ulonglong local_38 [2];
  
  puVar8 = (uint *)CONCAT71(in_register_00000089,param_3);
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_res18[0] = (FName)param_2;
  local_188 = (FName)param_2;
  if ((param_2 != (TStringView<wchar_t> *)0x0) ||
     (bVar2 = `FAssetRegistryTagsContext::TryValidateTagName'::__l3::<lambda_1>::operator()
                        (local_198), bVar2)) {
    local_d8.bIsDynamic = false;
    local_d8.bIsExternal = false;
    local_d8.End = (wchar_t *)local_38;
    local_d8.Base = local_b8;
    local_d8.CurPos = local_b8;
    ::FName::AppendString(&local_188,&local_d8);
    iVar3 = (int)((longlong)local_d8.CurPos - (longlong)local_d8.Base >> 1);
    if (5 < iVar3) {
      iVar3 = 5;
    }
    iVar7 = 0;
    if (0 < iVar3) {
      iVar7 = iVar3;
    }
    if ((iVar7 == 5) &&
       (iVar3 = FGenericPlatformStricmp::Strnicmp
                          (UE::AssetRegistry::CookTagPrefix.DataPtr,local_d8.Base,5), iVar3 == 0)) {
      local_190 = &local_d8;
      bVar2 = `FAssetRegistryTagsContext::TryValidateTagName'::__l6::<lambda_2>::operator()
                        (&local_190);
      if (!bVar2) {
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
        goto LAB_141fae62b;
      }
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
    if (puVar8[2] != 0) {
      uVar1 = *(undefined8 *)(puVar8 + 2);
      local_178.Base = (wchar_t *)local_158;
      local_188.ComparisonIndex.Value = *puVar8;
      local_188.Number = puVar8[1];
      uStack_180 = puVar8[2];
      uStack_17c = puVar8[3];
      local_178.End = (wchar_t *)&local_d8;
      uVar6 = (ulong64)(int)uVar1;
      local_178.CurPos = (wchar_t *)local_158;
      local_178.bIsDynamic = false;
      local_178.bIsExternal = false;
      if (&local_d8 < (TStringBuilderBase<wchar_t> *)((longlong)&local_158[0].Base + uVar6 * 2)) {
        TStringBuilderBase<wchar_t>::Extend(&local_178,uVar6);
      }
      if ((int)uVar1 != 0) {
        pvVar4 = FGenericPlatformString::Memcpy
                           (local_178.CurPos,
                            (void *)CONCAT44(local_188.Number,local_188.ComparisonIndex.Value),
                            uVar6 * 2);
        local_178.CurPos = (wchar_t *)((longlong)pvVar4 + uVar6 * 2);
      }
      ::FName::AppendString(local_res18,&local_178);
      pFVar5 = ::FName::FName(&local_188,
                              (int)((longlong)local_178.CurPos - (longlong)local_178.Base >> 1),
                              local_178.Base,(uint)in_stack_00000028);
      local_res18[0] = *pFVar5;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
    }
    *(FName *)param_1 = local_res18[0];
  }
  else {
LAB_141fae62b:
    *(undefined8 *)param_1 = 0;
  }
  return param_1;
}

// TryValidateTagName @ 141faf3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FAssetRegistryTagsContext::TryValidateTagName(FAssetRegistryTagsContext *this,FName param_1)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  FName local_res10 [3];
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  TStringBuilderBase<wchar_t> *local_c0;
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98 [64];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_res10[0] = param_1;
  if ((param_1 == (FName)0x0) &&
     (bVar1 = `FAssetRegistryTagsContext::TryValidateTagName'::__l3::<lambda_1>::operator()
                        (local_c8), !bVar1)) {
    return false;
  }
  local_b8.Base = local_98;
  local_b8.CurPos = local_98;
  local_b8.End = (wchar_t *)local_18;
  local_b8.bIsDynamic = false;
  local_b8.bIsExternal = false;
  ::FName::AppendString(local_res10,&local_b8);
  iVar2 = (int)((longlong)local_b8.CurPos - (longlong)local_b8.Base >> 1);
  if (5 < iVar2) {
    iVar2 = 5;
  }
  iVar4 = 0;
  if (0 < iVar2) {
    iVar4 = iVar2;
  }
  if ((iVar4 == 5) &&
     (iVar2 = FGenericPlatformStricmp::Strnicmp
                        (UE::AssetRegistry::CookTagPrefix.DataPtr,local_b8.Base,5), iVar2 == 0)) {
    bVar3 = false;
    local_c0 = &local_b8;
    bVar1 = `FAssetRegistryTagsContext::TryValidateTagName'::__l6::<lambda_2>::operator()(&local_c0)
    ;
    if (!bVar1) goto LAB_141faf48e;
  }
  bVar3 = true;
LAB_141faf48e:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
  return bVar3;
}

// WantsBundleResult @ 141fb0920

bool __thiscall FAssetRegistryTagsContext::WantsBundleResult(FAssetRegistryTagsContext *this)

{
  return this->Data->bWantsBundleResult;
}

// WantsCookTags @ 141fb0930

bool __thiscall FAssetRegistryTagsContext::WantsCookTags(FAssetRegistryTagsContext *this)

{
  return this->Data->bWantsCookTags;
}

// operator() @ 150483540

bool __thiscall
`FAssetRegistryTagsContext::TryValidateTagName'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5049079788430425917>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5049079788430425917>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504839b0

bool __thiscall
`FAssetRegistryTagsContext::TryValidateTagName'::__l6::<lambda_2>::operator()(void *this)

{
  TStringBuilderBase<wchar_t> *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5049079788430425909>);
  if (bVar2) {
    this_00 = *(TStringBuilderBase<wchar_t> **)this;
    if (this_00->End < this_00->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(this_00,1);
    }
    *this_00->CurPos = L'\0';
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5049079788430425909>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

