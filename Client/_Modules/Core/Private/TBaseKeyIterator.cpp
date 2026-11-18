// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 26

// TBaseKeyIterator<1> @ 14157d960

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
          *param_1,FName param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  this->Set = param_1;
  this->Key = param_2;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar1 = ::GetTypeHash(param_2.ComparisonIndex.Value);
    FVar4 = (param_1->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    ((longlong)param_1->HashSize - 1U & (longlong)(int)(uVar1 + param_2.Number)) * 4
                    );
    this->NextIndex = iVar3;
    this->Index = iVar3;
    if (iVar3 != -1) {
      while( true ) {
        lVar2 = (longlong)iVar3;
        iVar3 = *(int *)(*(longlong *)&this->Set->Elements + 0x10 + lVar2 * 0x18);
        this->NextIndex = iVar3;
        if (*(FName *)(*(longlong *)&this->Set->Elements + lVar2 * 0x18) == this->Key) break;
        this->Index = iVar3;
        if (iVar3 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<1> @ 14157da30

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FName,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<FName,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FName,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<FName,_anonymous_namespace_::FContainerTestValueType,0>,FDefaultSetAllocator>
          *param_1,FName param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  this->Set = param_1;
  this->Key = param_2;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar1 = ::GetTypeHash(param_2.ComparisonIndex.Value);
    FVar4 = (param_1->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    ((longlong)param_1->HashSize - 1U & (longlong)(int)(uVar1 + param_2.Number)) * 4
                    );
    this->NextIndex = iVar3;
    this->Index = iVar3;
    if (iVar3 != -1) {
      while( true ) {
        lVar2 = (longlong)iVar3;
        iVar3 = *(int *)(*(longlong *)&this->Set->Elements + 0x18 + lVar2 * 0x20);
        this->NextIndex = iVar3;
        if (*(FName *)(lVar2 * 0x20 + *(longlong *)&this->Set->Elements) == this->Key) break;
        this->Index = iVar3;
        if (iVar3 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<1> @ 14157db00

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FString,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<FString,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<FString,_anonymous_namespace_::FContainerTestValueType,0>,FDefaultSetAllocator>
          *param_1,TRetainedRef<FString_const_> param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  ForElementType<FSetElementId> FVar7;
  bool bVar8;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    iVar2 = ((param_2.Ref)->Data).ArrayNum;
    iVar5 = iVar2 + -1;
    if (iVar2 == 0) {
      pwVar6 = L"";
      iVar5 = 0;
    }
    else {
      pwVar6 = (wchar_t *)((param_2.Ref)->Data).AllocatorInstance.Data;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
    FVar7 = (param_1->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + ((longlong)param_1->HashSize - 1U & (longlong)(int)uVar4) * 4
                    );
    this->NextIndex = iVar5;
    this->Index = iVar5;
    if (iVar5 != -1) {
      while( true ) {
        lVar1 = (longlong)iVar5 * 0x28;
        this->NextIndex =
             *(int *)(*(longlong *)&this->Set->Elements + 0x20 + (longlong)iVar5 * 0x28);
        lVar3 = *(longlong *)&this->Set->Elements;
        iVar5 = (this->Key->Data).ArrayNum;
        iVar2 = *(int *)(lVar3 + 8 + lVar1);
        if (iVar2 == iVar5) {
          if (iVar2 < 2) {
            return this;
          }
          iVar5 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar3 + lVar1),
                             (wchar_t *)(this->Key->Data).AllocatorInstance.Data);
          bVar8 = iVar5 == 0;
        }
        else {
          bVar8 = iVar2 + iVar5 == 1;
        }
        if (bVar8) break;
        iVar5 = this->NextIndex;
        this->Index = iVar5;
        if (iVar5 == -1) {
          return this;
        }
      }
      return this;
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 14157dc10

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
          *param_1,FName param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  this->Set = param_1;
  this->Key = param_2;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar1 = ::GetTypeHash(param_2.ComparisonIndex.Value);
    FVar4 = (param_1->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    ((longlong)param_1->HashSize - 1U & (longlong)(int)(uVar1 + param_2.Number)) * 4
                    );
    this->NextIndex = iVar3;
    this->Index = iVar3;
    if (iVar3 != -1) {
      while( true ) {
        lVar2 = (longlong)iVar3;
        iVar3 = *(int *)(*(longlong *)&this->Set->Elements + 0x10 + lVar2 * 0x18);
        this->NextIndex = iVar3;
        if (*(FName *)(*(longlong *)&this->Set->Elements + lVar2 * 0x18) == this->Key) break;
        this->Index = iVar3;
        if (iVar3 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 14157dce0

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<FName,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<FName,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<FName,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<FName,_anonymous_namespace_::FContainerTestValueType,0>,FDefaultSetAllocator>
          *param_1,FName param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  this->Set = param_1;
  this->Key = param_2;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar1 = ::GetTypeHash(param_2.ComparisonIndex.Value);
    FVar4 = (param_1->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    ((longlong)param_1->HashSize - 1U & (longlong)(int)(uVar1 + param_2.Number)) * 4
                    );
    this->NextIndex = iVar3;
    this->Index = iVar3;
    if (iVar3 != -1) {
      while( true ) {
        lVar2 = (longlong)iVar3;
        iVar3 = *(int *)(*(longlong *)&this->Set->Elements + 0x18 + lVar2 * 0x20);
        this->NextIndex = iVar3;
        if (*(FName *)(lVar2 * 0x20 + *(longlong *)&this->Set->Elements) == this->Key) break;
        this->Index = iVar3;
        if (iVar3 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 14157ddb0

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<FString,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<FString,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<FString,_anonymous_namespace_::FContainerTestValueType,0>,FDefaultSetAllocator>
          *param_1,TRetainedRef<FString_const_> param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  ForElementType<FSetElementId> FVar7;
  bool bVar8;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    iVar2 = ((param_2.Ref)->Data).ArrayNum;
    iVar5 = iVar2 + -1;
    if (iVar2 == 0) {
      pwVar6 = L"";
      iVar5 = 0;
    }
    else {
      pwVar6 = (wchar_t *)((param_2.Ref)->Data).AllocatorInstance.Data;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
    FVar7 = (param_1->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + ((longlong)param_1->HashSize - 1U & (longlong)(int)uVar4) * 4
                    );
    this->NextIndex = iVar5;
    this->Index = iVar5;
    if (iVar5 != -1) {
      while( true ) {
        lVar1 = (longlong)iVar5 * 0x28;
        this->NextIndex =
             *(int *)(*(longlong *)&this->Set->Elements + 0x20 + (longlong)iVar5 * 0x28);
        lVar3 = *(longlong *)&this->Set->Elements;
        iVar5 = (this->Key->Data).ArrayNum;
        iVar2 = *(int *)(lVar3 + 8 + lVar1);
        if (iVar2 == iVar5) {
          if (iVar2 < 2) {
            return this;
          }
          iVar5 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar3 + lVar1),
                             (wchar_t *)(this->Key->Data).AllocatorInstance.Data);
          bVar8 = iVar5 == 0;
        }
        else {
          bVar8 = iVar2 + iVar5 == 1;
        }
        if (bVar8) break;
        iVar5 = this->NextIndex;
        this->Index = iVar5;
        if (iVar5 == -1) {
          return this;
        }
      }
      return this;
    }
  }
  return this;
}

// operator++ @ 14158d040

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::TBaseKeyIterator<1>::operator++(TBaseKeyIterator<1> *this)

{
  TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar1;
  TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar2;
  TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = this->NextIndex;
  this->Index = iVar5;
  if (iVar5 != -1) {
    pTVar1 = this->Set;
    do {
      pTVar2 = *(TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 **)&(pTVar1->Elements).field_0x400;
      lVar4 = (longlong)iVar5;
      pTVar3 = pTVar1;
      if (pTVar2 != (TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                     *)0x0) {
        pTVar3 = pTVar2;
      }
      iVar5 = *(int *)(&(pTVar3->Elements).field_0x18 + lVar4 * 0x20);
      this->NextIndex = iVar5;
      pTVar2 = *(TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 **)&(pTVar1->Elements).field_0x400;
      pTVar3 = pTVar1;
      if (pTVar2 != (TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                     *)0x0) {
        pTVar3 = pTVar2;
      }
    } while ((*(int *)(&(pTVar3->Elements).field_0x0 + lVar4 * 0x20) != this->Key) &&
            (this->Index = iVar5, iVar5 != -1));
  }
  return this;
}

// operator++ @ 14158d0b0

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::TBaseKeyIterator<1>::operator++(TBaseKeyIterator<1> *this)

{
  TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar1;
  TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar2;
  TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = this->NextIndex;
  this->Index = iVar5;
  if (iVar5 != -1) {
    pTVar1 = this->Set;
    do {
      pTVar2 = *(TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 **)&(pTVar1->Elements).field_0x800;
      lVar4 = (longlong)iVar5;
      pTVar3 = pTVar1;
      if (pTVar2 != (TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                     *)0x0) {
        pTVar3 = pTVar2;
      }
      iVar5 = *(int *)(&(pTVar3->Elements).field_0x18 + lVar4 * 0x20);
      this->NextIndex = iVar5;
      pTVar2 = *(TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 **)&(pTVar1->Elements).field_0x800;
      pTVar3 = pTVar1;
      if (pTVar2 != (TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                     *)0x0) {
        pTVar3 = pTVar2;
      }
    } while ((*(int *)(&(pTVar3->Elements).field_0x0 + lVar4 * 0x20) != this->Key) &&
            (this->Index = iVar5, iVar5 != -1));
  }
  return this;
}

// operator++ @ 14158d120

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FString,`anonymous_namespace'::FContainerTestValueType>,`anonymous_namespace'::FCaseSensitiveLookupKeyFuncs<`anonymous_namespace'::FContainerTestValueType>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::operator++(TBaseKeyIterator<1> *this)

{
  undefined8 *puVar1;
  int iVar2;
  FString *pFVar3;
  TSet<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>,_anonymous_namespace_::FCaseSensitiveLookupKeyFuncs<_anonymous_namespace_::FContainerTestValueType>,FDefaultSetAllocator>
  *pTVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = this->NextIndex;
  this->Index = iVar7;
  if (iVar7 == -1) {
    return this;
  }
  pFVar3 = this->Key;
  pTVar4 = this->Set;
  while( true ) {
    lVar6 = (longlong)iVar7;
    iVar7 = *(int *)(*(longlong *)&pTVar4->Elements + 0x20 + lVar6 * 0x28);
    this->NextIndex = iVar7;
    puVar1 = (undefined8 *)(*(longlong *)&pTVar4->Elements + lVar6 * 0x28);
    iVar5 = (pFVar3->Data).ArrayNum;
    iVar2 = *(int *)(puVar1 + 1);
    if (iVar2 == iVar5) {
      if (iVar2 < 2) {
        return this;
      }
      iVar5 = wcscmp((wchar_t *)*puVar1,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data);
      bVar8 = iVar5 == 0;
    }
    else {
      bVar8 = iVar2 + iVar5 == 1;
    }
    if (bVar8) break;
    this->Index = iVar7;
    if (iVar7 == -1) {
      return this;
    }
  }
  return this;
}

// operator++ @ 14158d1d0

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FString,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<FString,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::operator++(TBaseKeyIterator<1> *this)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = this->NextIndex;
  this->Index = iVar4;
  while( true ) {
    if (iVar4 == -1) {
      return this;
    }
    lVar1 = (longlong)iVar4 * 0x28;
    this->NextIndex = *(int *)(lVar1 + 0x20 + *(longlong *)&this->Set->Elements);
    lVar3 = *(longlong *)&this->Set->Elements;
    iVar4 = (this->Key->Data).ArrayNum;
    iVar2 = *(int *)(lVar3 + 8 + lVar1);
    if (iVar2 == iVar4) {
      if (iVar2 < 2) {
        return this;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)(lVar3 + lVar1),
                         (wchar_t *)(this->Key->Data).AllocatorInstance.Data);
      bVar5 = iVar4 == 0;
    }
    else {
      bVar5 = iVar2 + iVar4 == 1;
    }
    if (bVar5) break;
    iVar4 = this->NextIndex;
    this->Index = iVar4;
  }
  return this;
}

// operator++ @ 14158d260

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::TBaseKeyIterator<0>::operator++(TBaseKeyIterator<0> *this)

{
  TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar1;
  TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar2;
  TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = this->NextIndex;
  this->Index = iVar5;
  if (iVar5 != -1) {
    pTVar1 = this->Set;
    do {
      pTVar2 = *(TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 **)&(pTVar1->Elements).field_0x400;
      lVar4 = (longlong)iVar5;
      pTVar3 = pTVar1;
      if (pTVar2 != (TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                     *)0x0) {
        pTVar3 = pTVar2;
      }
      iVar5 = *(int *)(&(pTVar3->Elements).field_0x18 + lVar4 * 0x20);
      this->NextIndex = iVar5;
      pTVar2 = *(TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 **)&(pTVar1->Elements).field_0x400;
      pTVar3 = pTVar1;
      if (pTVar2 != (TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                     *)0x0) {
        pTVar3 = pTVar2;
      }
    } while ((*(int *)(&(pTVar3->Elements).field_0x0 + lVar4 * 0x20) != this->Key) &&
            (this->Index = iVar5, iVar5 != -1));
  }
  return this;
}

// operator++ @ 14158d2d0

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
::TBaseKeyIterator<0>::operator++(TBaseKeyIterator<0> *this)

{
  TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar1;
  TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar2;
  TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = this->NextIndex;
  this->Index = iVar5;
  if (iVar5 != -1) {
    pTVar1 = this->Set;
    do {
      pTVar2 = *(TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 **)&(pTVar1->Elements).field_0x800;
      lVar4 = (longlong)iVar5;
      pTVar3 = pTVar1;
      if (pTVar2 != (TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                     *)0x0) {
        pTVar3 = pTVar2;
      }
      iVar5 = *(int *)(&(pTVar3->Elements).field_0x18 + lVar4 * 0x20);
      this->NextIndex = iVar5;
      pTVar2 = *(TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 **)&(pTVar1->Elements).field_0x800;
      pTVar3 = pTVar1;
      if (pTVar2 != (TSet<TTuple<int,_anonymous_namespace_::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                     *)0x0) {
        pTVar3 = pTVar2;
      }
    } while ((*(int *)(&(pTVar3->Elements).field_0x0 + lVar4 * 0x20) != this->Key) &&
            (this->Index = iVar5, iVar5 != -1));
  }
  return this;
}

// operator++ @ 14158d340

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<FString,`anonymous_namespace'::FContainerTestValueType>,`anonymous_namespace'::FCaseSensitiveLookupKeyFuncs<`anonymous_namespace'::FContainerTestValueType>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::operator++(TBaseKeyIterator<0> *this)

{
  undefined8 *puVar1;
  int iVar2;
  FString *pFVar3;
  TSet<TTuple<FString,_anonymous_namespace_::FContainerTestValueType>,_anonymous_namespace_::FCaseSensitiveLookupKeyFuncs<_anonymous_namespace_::FContainerTestValueType>,FDefaultSetAllocator>
  *pTVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = this->NextIndex;
  this->Index = iVar7;
  if (iVar7 == -1) {
    return this;
  }
  pFVar3 = this->Key;
  pTVar4 = this->Set;
  while( true ) {
    lVar6 = (longlong)iVar7;
    iVar7 = *(int *)(*(longlong *)&pTVar4->Elements + 0x20 + lVar6 * 0x28);
    this->NextIndex = iVar7;
    puVar1 = (undefined8 *)(*(longlong *)&pTVar4->Elements + lVar6 * 0x28);
    iVar5 = (pFVar3->Data).ArrayNum;
    iVar2 = *(int *)(puVar1 + 1);
    if (iVar2 == iVar5) {
      if (iVar2 < 2) {
        return this;
      }
      iVar5 = wcscmp((wchar_t *)*puVar1,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data);
      bVar8 = iVar5 == 0;
    }
    else {
      bVar8 = iVar2 + iVar5 == 1;
    }
    if (bVar8) break;
    this->Index = iVar7;
    if (iVar7 == -1) {
      return this;
    }
  }
  return this;
}

// operator++ @ 14158d3f0

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<FString,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<FString,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::operator++(TBaseKeyIterator<0> *this)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = this->NextIndex;
  this->Index = iVar4;
  while( true ) {
    if (iVar4 == -1) {
      return this;
    }
    lVar1 = (longlong)iVar4 * 0x28;
    this->NextIndex = *(int *)(lVar1 + 0x20 + *(longlong *)&this->Set->Elements);
    lVar3 = *(longlong *)&this->Set->Elements;
    iVar4 = (this->Key->Data).ArrayNum;
    iVar2 = *(int *)(lVar3 + 8 + lVar1);
    if (iVar2 == iVar4) {
      if (iVar2 < 2) {
        return this;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)(lVar3 + lVar1),
                         (wchar_t *)(this->Key->Data).AllocatorInstance.Data);
      bVar5 = iVar4 == 0;
    }
    else {
      bVar5 = iVar2 + iVar4 == 1;
    }
    if (bVar5) break;
    iVar4 = this->NextIndex;
    this->Index = iVar4;
  }
  return this;
}

// TBaseKeyIterator<0> @ 14179b6c0

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
          *param_1,FName param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  this->Set = param_1;
  this->Key = param_2;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar1 = ::GetTypeHash(param_2.ComparisonIndex.Value);
    FVar4 = (param_1->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    ((longlong)param_1->HashSize - 1U & (longlong)(int)(uVar1 + param_2.Number)) * 4
                    );
    this->NextIndex = iVar3;
    this->Index = iVar3;
    if (iVar3 != -1) {
      while( true ) {
        lVar2 = (longlong)iVar3;
        iVar3 = *(int *)(*(longlong *)&this->Set->Elements + 0x10 + lVar2 * 0x18);
        this->NextIndex = iVar3;
        if (*(FName *)(*(longlong *)&this->Set->Elements + lVar2 * 0x18) == this->Key) break;
        this->Index = iVar3;
        if (iVar3 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<1> @ 141852f80

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
          *param_1,FName param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  this->Set = param_1;
  this->Key = param_2;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar1 = ::GetTypeHash(param_2.ComparisonIndex.Value);
    FVar4 = (param_1->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    ((longlong)param_1->HashSize - 1U & (longlong)(int)(uVar1 + param_2.Number)) * 4
                    );
    this->NextIndex = iVar3;
    this->Index = iVar3;
    if (iVar3 != -1) {
      while( true ) {
        lVar2 = (longlong)iVar3;
        iVar3 = *(int *)(*(longlong *)&this->Set->Elements + 0x20 + lVar2 * 0x28);
        this->NextIndex = iVar3;
        if (*(FName *)(*(longlong *)&this->Set->Elements + lVar2 * 0x28) == this->Key) break;
        this->Index = iVar3;
        if (iVar3 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 141853050

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
          *param_1,FName param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  this->Set = param_1;
  this->Key = param_2;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar1 = ::GetTypeHash(param_2.ComparisonIndex.Value);
    FVar4 = (param_1->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    ((longlong)param_1->HashSize - 1U & (longlong)(int)(uVar1 + param_2.Number)) * 4
                    );
    this->NextIndex = iVar3;
    this->Index = iVar3;
    if (iVar3 != -1) {
      while( true ) {
        lVar2 = (longlong)iVar3;
        iVar3 = *(int *)(*(longlong *)&this->Set->Elements + 0x20 + lVar2 * 0x28);
        this->NextIndex = iVar3;
        if (*(FName *)(*(longlong *)&this->Set->Elements + lVar2 * 0x28) == this->Key) break;
        this->Index = iVar3;
        if (iVar3 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// operator++ @ 141859ed0

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::operator++(TBaseKeyIterator<1> *this)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = this->NextIndex;
  this->Index = iVar2;
  if (iVar2 != -1) {
    do {
      lVar1 = (longlong)iVar2;
      iVar2 = *(int *)(*(longlong *)&this->Set->Elements + 0x20 + lVar1 * 0x28);
      this->NextIndex = iVar2;
      if (*(FName *)(*(longlong *)&this->Set->Elements + lVar1 * 0x28) == this->Key) {
        return this;
      }
      this->Index = iVar2;
    } while (iVar2 != -1);
  }
  return this;
}

// TBaseKeyIterator<1> @ 1419cb8f0

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>::
TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>
          *param_1,FName param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  this->Set = param_1;
  this->Key = param_2;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar1 = ::GetTypeHash(param_2.ComparisonIndex.Value);
    FVar4 = (param_1->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    ((longlong)param_1->HashSize - 1U & (longlong)(int)(uVar1 + param_2.Number)) * 4
                    );
    this->NextIndex = iVar3;
    this->Index = iVar3;
    if (iVar3 != -1) {
      while( true ) {
        lVar2 = (longlong)iVar3;
        iVar3 = *(int *)(*(longlong *)&this->Set->Elements + 0x10 + lVar2 * 0x18);
        this->NextIndex = iVar3;
        if (*(FName *)(*(longlong *)&this->Set->Elements + lVar2 * 0x18) == this->Key) break;
        this->Index = iVar3;
        if (iVar3 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<1> @ 141a6b750

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,1>,FDefaultSetAllocator>::
TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<FGuid_const_> param_2)

{
  uint *puVar1;
  FGuid *pFVar2;
  longlong lVar3;
  ulong64 uVar4;
  longlong lVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    uVar4 = CityHash64((char *)param_2.Ref,0x10);
    FVar6 = (param_1->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar7 = *(int *)((longlong)FVar6 + ((longlong)param_1->HashSize - 1U & (longlong)(int)uVar4) * 4
                    );
    this->NextIndex = iVar7;
    this->Index = iVar7;
    if (iVar7 != -1) {
      pFVar2 = this->Key;
      while( true ) {
        lVar5 = (longlong)iVar7;
        iVar7 = *(int *)(*(longlong *)&this->Set->Elements + 0x20 + lVar5 * 0x28);
        this->NextIndex = iVar7;
        lVar3 = *(longlong *)&this->Set->Elements;
        puVar1 = (uint *)(lVar3 + lVar5 * 0x28);
        if (((*(uint *)(lVar3 + 8 + lVar5 * 0x28) == pFVar2->C && puVar1[1] == pFVar2->B) &&
            puVar1[3] == pFVar2->D) && pFVar2->A == *puVar1) break;
        this->Index = iVar7;
        if (iVar7 == -1) {
          return this;
        }
      }
    }
  }
  return this;
}

// TBaseKeyIterator<1> @ 141b12060

TBaseKeyIterator<1> * __thiscall
TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::TBaseKeyIterator<1>::
TBaseKeyIterator<1>(TBaseKeyIterator<1> *this,
                   TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>
                   *param_1,TRetainedRef<FString_const_> param_2)

{
  int iVar1;
  uint uVar2;
  wchar_t *pwVar3;
  undefined4 *puVar4;
  int iVar5;
  uchar *local_28;
  uchar *puStack_20;
  undefined8 local_18;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  iVar5 = 0;
  if (*(int *)&param_1->field_0x8 == 0) {
    local_18 = 0;
    local_28 = (uchar *)0x0;
    puStack_20 = (uchar *)0x0;
  }
  else {
    uVar2 = *(uint *)&param_1->field_0xc;
    puVar4 = (undefined4 *)((ulonglong)(uVar2 << 4) + *(longlong *)param_1);
    local_28 = (uchar *)(puVar4 + 1);
    puStack_20 = local_28 + ((ulonglong)uVar2 << (0xff < uVar2) + (0xffff < uVar2));
    local_18 = CONCAT44(*puVar4,uVar2);
  }
  (this->HashTable).NextIndexData = local_28;
  (this->HashTable).HashData = puStack_20;
  (this->HashTable).NextIndexCount = (undefined4)local_18;
  (this->HashTable).HashCount = local_18._4_4_;
  if (*(int *)&param_1->field_0x8 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = ((param_2.Ref)->Data).ArrayNum;
    if (iVar1 == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)((param_2.Ref)->Data).AllocatorInstance.Data;
      iVar5 = iVar1 + -1;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar3);
    uVar2 = FConstCompactHashTableView::GetFirst(&this->HashTable,uVar2);
  }
  this->NextIndex = uVar2;
  this->InitialNum = *(int *)&param_1->field_0x8;
  operator++(this);
  return this;
}

// TBaseKeyIterator<1> @ 141b12160

TBaseKeyIterator<1> * __thiscall
TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator>::TBaseKeyIterator<1>::
TBaseKeyIterator<1>(TBaseKeyIterator<1> *this,
                   TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator>
                   *param_1,TRetainedRef<FString_const_> param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  ForElementType<FSetElementId> FVar7;
  bool bVar8;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    iVar2 = ((param_2.Ref)->Data).ArrayNum;
    iVar5 = iVar2 + -1;
    if (iVar2 == 0) {
      pwVar6 = L"";
      iVar5 = 0;
    }
    else {
      pwVar6 = (wchar_t *)((param_2.Ref)->Data).AllocatorInstance.Data;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
    FVar7 = (param_1->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + ((longlong)param_1->HashSize - 1U & (longlong)(int)uVar4) * 4
                    );
    this->NextIndex = iVar5;
    this->Index = iVar5;
    if (iVar5 != -1) {
      while( true ) {
        lVar1 = (longlong)iVar5 * 0x18;
        this->NextIndex =
             *(int *)(*(longlong *)&this->Set->Elements + 0x10 + (longlong)iVar5 * 0x18);
        lVar3 = *(longlong *)&this->Set->Elements;
        iVar5 = (this->Key->Data).ArrayNum;
        iVar2 = *(int *)(lVar3 + 8 + lVar1);
        if (iVar2 == iVar5) {
          if (iVar2 < 2) {
            return this;
          }
          iVar5 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar3 + lVar1),
                             (wchar_t *)(this->Key->Data).AllocatorInstance.Data);
          bVar8 = iVar5 == 0;
        }
        else {
          bVar8 = iVar2 + iVar5 == 1;
        }
        if (bVar8) break;
        iVar5 = this->NextIndex;
        this->Index = iVar5;
        if (iVar5 == -1) {
          return this;
        }
      }
      return this;
    }
  }
  return this;
}

// TBaseKeyIterator<0> @ 141b12270

TBaseKeyIterator<0> * __thiscall
TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator>::TBaseKeyIterator<0>::
TBaseKeyIterator<0>(TBaseKeyIterator<0> *this,
                   TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator>
                   *param_1,TRetainedRef<FString_const_> param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  ForElementType<FSetElementId> FVar7;
  bool bVar8;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    iVar2 = ((param_2.Ref)->Data).ArrayNum;
    iVar5 = iVar2 + -1;
    if (iVar2 == 0) {
      pwVar6 = L"";
      iVar5 = 0;
    }
    else {
      pwVar6 = (wchar_t *)((param_2.Ref)->Data).AllocatorInstance.Data;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
    FVar7 = (param_1->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + ((longlong)param_1->HashSize - 1U & (longlong)(int)uVar4) * 4
                    );
    this->NextIndex = iVar5;
    this->Index = iVar5;
    if (iVar5 != -1) {
      while( true ) {
        lVar1 = (longlong)iVar5 * 0x18;
        this->NextIndex =
             *(int *)(*(longlong *)&this->Set->Elements + 0x10 + (longlong)iVar5 * 0x18);
        lVar3 = *(longlong *)&this->Set->Elements;
        iVar5 = (this->Key->Data).ArrayNum;
        iVar2 = *(int *)(lVar3 + 8 + lVar1);
        if (iVar2 == iVar5) {
          if (iVar2 < 2) {
            return this;
          }
          iVar5 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar3 + lVar1),
                             (wchar_t *)(this->Key->Data).AllocatorInstance.Data);
          bVar8 = iVar5 == 0;
        }
        else {
          bVar8 = iVar2 + iVar5 == 1;
        }
        if (bVar8) break;
        iVar5 = this->NextIndex;
        this->Index = iVar5;
        if (iVar5 == -1) {
          return this;
        }
      }
      return this;
    }
  }
  return this;
}

// operator++ @ 141b2c250

TBaseKeyIterator<1> * __thiscall
TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::TBaseKeyIterator<1>::
operator++(TBaseKeyIterator<1> *this)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  FString *pFVar4;
  TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TBaseKeyIterator<1> *pTVar10;
  char cVar11;
  uint uVar12;
  undefined8 *puVar13;
  
  if ((*(int *)&this->Set->field_0x8 < this->InitialNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SetNum >= InitialNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                         ,0xc1,
                         L"Sets/Maps should never have elements removed during iteration outside of Iterator.RemoveCurrent(). InitialNum %d CurrentNum %d"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TBaseKeyIterator<1> *)(*pcVar6)();
    return pTVar10;
  }
  uVar12 = this->NextIndex;
  this->Index = uVar12;
  if (uVar12 == 0xffffffff) {
    return this;
  }
  do {
    cVar11 = '\0';
    if (0xffff < (this->HashTable).NextIndexCount) {
      cVar11 = '\x02';
    }
    cVar11 = (0xff < (this->HashTable).NextIndexCount) + '\x01' + cVar11;
    if (cVar11 == '\x01') {
      bVar1 = (this->HashTable).NextIndexData[uVar12];
      uVar12 = (uint)bVar1;
      bVar7 = bVar1 == 0xff;
LAB_141b2c363:
      uVar8 = 0xffffffff;
      if (!bVar7) {
        uVar8 = uVar12;
      }
    }
    else {
      if (cVar11 == '\x02') {
        uVar2 = *(ushort *)((this->HashTable).NextIndexData + (ulonglong)uVar12 * 2);
        uVar12 = (uint)uVar2;
        bVar7 = uVar2 == 0xffff;
        goto LAB_141b2c363;
      }
      if (cVar11 == '\x04') {
        uVar8 = *(uint *)((this->HashTable).NextIndexData + (ulonglong)uVar12 * 4);
        if (uVar8 == 0xffffffff) {
          uVar8 = 0xffffffff;
        }
      }
      else {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                           ,0x146,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TBaseKeyIterator<1> *)(*pcVar6)();
          return pTVar10;
        }
        uVar8 = 0xffffffff;
      }
    }
    iVar9 = this->Index;
    pFVar4 = this->Key;
    pTVar5 = this->Set;
    this->NextIndex = uVar8;
    if (((iVar9 < 0) || (*(int *)&pTVar5->field_0x8 <= iVar9)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidId(Id)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                           ,0x265,L"Array index out of bounds: %d into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TBaseKeyIterator<1> *)(*pcVar6)();
      return pTVar10;
    }
    iVar3 = (pFVar4->Data).ArrayNum;
    puVar13 = (undefined8 *)((longlong)iVar9 * 0x10 + *(longlong *)pTVar5);
    iVar9 = *(int *)(puVar13 + 1);
    if (iVar9 == iVar3) {
      if (iVar9 < 2) {
        return this;
      }
      iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)*puVar13,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar7 = iVar9 == 0;
    }
    else {
      bVar7 = iVar9 + iVar3 == 1;
    }
    if (bVar7) {
      return this;
    }
    uVar12 = this->NextIndex;
    this->Index = uVar12;
    if (uVar12 == 0xffffffff) {
      return this;
    }
  } while( true );
}

// operator++ @ 141b2c440

TBaseKeyIterator<1> * __thiscall
TSparseSet<FString,DefaultKeyFuncs<FString,1>,FDefaultSparseSetAllocator>::TBaseKeyIterator<1>::
operator++(TBaseKeyIterator<1> *this)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = this->NextIndex;
  this->Index = iVar4;
  while( true ) {
    if (iVar4 == -1) {
      return this;
    }
    lVar1 = (longlong)iVar4 * 0x18;
    this->NextIndex = *(int *)(lVar1 + 0x10 + *(longlong *)&this->Set->Elements);
    lVar3 = *(longlong *)&this->Set->Elements;
    iVar4 = (this->Key->Data).ArrayNum;
    iVar2 = *(int *)(lVar3 + 8 + lVar1);
    if (iVar2 == iVar4) {
      if (iVar2 < 2) {
        return this;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)(lVar3 + lVar1),
                         (wchar_t *)(this->Key->Data).AllocatorInstance.Data);
      bVar5 = iVar4 == 0;
    }
    else {
      bVar5 = iVar2 + iVar4 == 1;
    }
    if (bVar5) break;
    iVar4 = this->NextIndex;
    this->Index = iVar4;
  }
  return this;
}

// operator++ @ 141b2c4d0

TBaseKeyIterator<0> * __thiscall
TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::TBaseKeyIterator<0>::
operator++(TBaseKeyIterator<0> *this)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  FString *pFVar4;
  TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TBaseKeyIterator<0> *pTVar10;
  char cVar11;
  uint uVar12;
  undefined8 *puVar13;
  
  if ((*(int *)&this->Set->field_0x8 < this->InitialNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SetNum >= InitialNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                         ,0xc1,
                         L"Sets/Maps should never have elements removed during iteration outside of Iterator.RemoveCurrent(). InitialNum %d CurrentNum %d"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TBaseKeyIterator<0> *)(*pcVar6)();
    return pTVar10;
  }
  uVar12 = this->NextIndex;
  this->Index = uVar12;
  if (uVar12 == 0xffffffff) {
    return this;
  }
  do {
    cVar11 = '\0';
    if (0xffff < (this->HashTable).NextIndexCount) {
      cVar11 = '\x02';
    }
    cVar11 = (0xff < (this->HashTable).NextIndexCount) + '\x01' + cVar11;
    if (cVar11 == '\x01') {
      bVar1 = (this->HashTable).NextIndexData[uVar12];
      uVar12 = (uint)bVar1;
      bVar7 = bVar1 == 0xff;
LAB_141b2c5e3:
      uVar8 = 0xffffffff;
      if (!bVar7) {
        uVar8 = uVar12;
      }
    }
    else {
      if (cVar11 == '\x02') {
        uVar2 = *(ushort *)((this->HashTable).NextIndexData + (ulonglong)uVar12 * 2);
        uVar12 = (uint)uVar2;
        bVar7 = uVar2 == 0xffff;
        goto LAB_141b2c5e3;
      }
      if (cVar11 == '\x04') {
        uVar8 = *(uint *)((this->HashTable).NextIndexData + (ulonglong)uVar12 * 4);
        if (uVar8 == 0xffffffff) {
          uVar8 = 0xffffffff;
        }
      }
      else {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                           ,0x146,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pTVar10 = (TBaseKeyIterator<0> *)(*pcVar6)();
          return pTVar10;
        }
        uVar8 = 0xffffffff;
      }
    }
    iVar9 = this->Index;
    pFVar4 = this->Key;
    pTVar5 = this->Set;
    this->NextIndex = uVar8;
    if (((iVar9 < 0) || (*(int *)&pTVar5->field_0x8 <= iVar9)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidId(Id)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                           ,0x265,L"Array index out of bounds: %d into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TBaseKeyIterator<0> *)(*pcVar6)();
      return pTVar10;
    }
    iVar3 = (pFVar4->Data).ArrayNum;
    puVar13 = (undefined8 *)((longlong)iVar9 * 0x10 + *(longlong *)pTVar5);
    iVar9 = *(int *)(puVar13 + 1);
    if (iVar9 == iVar3) {
      if (iVar9 < 2) {
        return this;
      }
      iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)*puVar13,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar7 = iVar9 == 0;
    }
    else {
      bVar7 = iVar9 + iVar3 == 1;
    }
    if (bVar7) {
      return this;
    }
    uVar12 = this->NextIndex;
    this->Index = uVar12;
    if (uVar12 == 0xffffffff) {
      return this;
    }
  } while( true );
}

