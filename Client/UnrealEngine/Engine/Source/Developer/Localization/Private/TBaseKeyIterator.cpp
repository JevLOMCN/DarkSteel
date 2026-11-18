// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 5

// TBaseKeyIterator<1> @ 146b42390

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<`anonymous_namespace'::FLocKeyPair,A0xc0d83ff9::FLocKeyPair>,TDefaultMapHashableKeyFuncs<`anonymous_namespace'::FLocKeyPair,A0xc0d83ff9::FLocKeyPair,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::TBaseKeyIterator<1>
          (TBaseKeyIterator<1> *this,
          TSet<TTuple<_anonymous_namespace_::FLocKeyPair,A0xc0d83ff9::FLocKeyPair>,TDefaultMapHashableKeyFuncs<_anonymous_namespace_::FLocKeyPair,A0xc0d83ff9::FLocKeyPair,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<_anonymous_namespace_::FLocKeyPair_const_> param_2)

{
  uint uVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  uint uVar5;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize != 0) {
    uVar2 = ((param_2.Ref)->Second).Hash;
    FVar3 = (param_1->Hash).SecondaryData;
    uVar4 = ((param_2.Ref)->First).Hash - uVar2 ^ uVar2 >> 0xd;
    uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
    uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
    uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
    uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
    uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
    uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
    uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    this->NextIndex =
         *(int *)((longlong)FVar3 +
                 (((longlong)(int)((uVar5 - uVar2) - uVar1) ^ (ulonglong)(uVar2 >> 0xf)) &
                 (longlong)param_1->HashSize - 1U) * 4);
    operator++(this);
    return this;
  }
  this->NextIndex = -1;
  return this;
}

// TBaseKeyIterator<0> @ 146b42490

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<`anonymous_namespace'::FLocKeyPair,A0xc0d83ff9::FLocKeyPair>,TDefaultMapHashableKeyFuncs<`anonymous_namespace'::FLocKeyPair,A0xc0d83ff9::FLocKeyPair,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<_anonymous_namespace_::FLocKeyPair,A0xc0d83ff9::FLocKeyPair>,TDefaultMapHashableKeyFuncs<_anonymous_namespace_::FLocKeyPair,A0xc0d83ff9::FLocKeyPair,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<_anonymous_namespace_::FLocKeyPair_const_> param_2)

{
  uint uVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  uint uVar5;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize != 0) {
    uVar2 = ((param_2.Ref)->Second).Hash;
    FVar3 = (param_1->Hash).SecondaryData;
    uVar4 = ((param_2.Ref)->First).Hash - uVar2 ^ uVar2 >> 0xd;
    uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
    uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
    uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
    uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
    uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
    uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
    uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    this->NextIndex =
         *(int *)((longlong)FVar3 +
                 (((longlong)(int)((uVar5 - uVar2) - uVar1) ^ (ulonglong)(uVar2 >> 0xf)) &
                 (longlong)param_1->HashSize - 1U) * 4);
    operator++(this);
    return this;
  }
  this->NextIndex = -1;
  return this;
}

// TBaseKeyIterator<0> @ 146b42590

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<FString,FLocItem>,TDefaultMapHashableKeyFuncs<FString,FLocItem,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::TBaseKeyIterator<0>
          (TBaseKeyIterator<0> *this,
          TSet<TTuple<FString,FLocItem>,TDefaultMapHashableKeyFuncs<FString,FLocItem,1>,FDefaultSetAllocator>
          *param_1,TRetainedRef<FString_const_> param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  ForElementType<FSetElementId> FVar6;
  longlong lVar7;
  bool bVar8;
  
  this->Set = param_1;
  this->Key = param_2.Ref;
  this->Index = -1;
  if (param_1->HashSize == 0) {
    this->NextIndex = -1;
  }
  else {
    iVar1 = ((param_2.Ref)->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar5 = L"";
      iVar4 = 0;
    }
    else {
      pwVar5 = (wchar_t *)((param_2.Ref)->Data).AllocatorInstance.Data;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
    FVar6 = (param_1->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 + ((longlong)param_1->HashSize - 1U & (longlong)(int)uVar3) * 4
                    );
    this->NextIndex = iVar4;
    this->Index = iVar4;
    if (iVar4 != -1) {
      while( true ) {
        lVar7 = (longlong)iVar4 * 0x38;
        this->NextIndex = *(int *)(*(longlong *)&this->Set->Elements + 0x30 + lVar7);
        lVar2 = *(longlong *)&this->Set->Elements;
        iVar4 = (this->Key->Data).ArrayNum;
        iVar1 = *(int *)(lVar2 + 8 + lVar7);
        if (iVar1 == iVar4) {
          if (iVar1 < 2) {
            return this;
          }
          iVar4 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar2 + lVar7),
                             (wchar_t *)(this->Key->Data).AllocatorInstance.Data);
          bVar8 = iVar4 == 0;
        }
        else {
          bVar8 = iVar1 + iVar4 == 1;
        }
        if (bVar8) break;
        iVar4 = this->NextIndex;
        this->Index = iVar4;
        if (iVar4 == -1) {
          return this;
        }
      }
      return this;
    }
  }
  return this;
}

// operator++ @ 146b458d0

TBaseKeyIterator<1> * __thiscall
TSet<TTuple<`anonymous_namespace'::FLocKeyPair,A0xc0d83ff9::FLocKeyPair>,TDefaultMapHashableKeyFuncs<`anonymous_namespace'::FLocKeyPair,A0xc0d83ff9::FLocKeyPair,1>,FDefaultSetAllocator>
::TBaseKeyIterator<1>::operator++(TBaseKeyIterator<1> *this)

{
  FLocKeyPair *pFVar1;
  TSet<TTuple<_anonymous_namespace_::FLocKeyPair,A0xc0d83ff9::FLocKeyPair>,TDefaultMapHashableKeyFuncs<_anonymous_namespace_::FLocKeyPair,A0xc0d83ff9::FLocKeyPair,1>,FDefaultSetAllocator>
  *pTVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined8 *puVar7;
  int iVar8;
  
  iVar8 = this->NextIndex;
  this->Index = iVar8;
  if (iVar8 == -1) {
    return this;
  }
  pFVar1 = this->Key;
  pTVar2 = this->Set;
  do {
    lVar4 = (longlong)iVar8;
    iVar8 = *(int *)(*(longlong *)&pTVar2->Elements + 0x60 + lVar4 * 0x68);
    this->NextIndex = iVar8;
    puVar7 = (undefined8 *)(*(longlong *)&pTVar2->Elements + lVar4 * 0x68);
    if (*(uint *)(puVar7 + 2) == (pFVar1->First).Hash) {
      if ((pFVar1->First).Str.Data.ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar1->First).Str.Data.AllocatorInstance.Data;
      }
      if (*(int *)(puVar7 + 1) == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)*puVar7;
      }
      iVar3 = wcscmp(pwVar5,pwVar6);
      if ((iVar3 == 0) && (*(uint *)(puVar7 + 5) == (pFVar1->Second).Hash)) {
        if ((pFVar1->Second).Str.Data.ArrayNum == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = (wchar_t *)(pFVar1->Second).Str.Data.AllocatorInstance.Data;
        }
        if (*(int *)(puVar7 + 4) == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = (wchar_t *)puVar7[3];
        }
        iVar3 = wcscmp(pwVar5,pwVar6);
        if (iVar3 == 0) {
          return this;
        }
      }
    }
    this->Index = iVar8;
    if (iVar8 == -1) {
      return this;
    }
  } while( true );
}

// operator++ @ 146b459d0

TBaseKeyIterator<0> * __thiscall
TSet<TTuple<`anonymous_namespace'::FLocKeyPair,A0xc0d83ff9::FLocKeyPair>,TDefaultMapHashableKeyFuncs<`anonymous_namespace'::FLocKeyPair,A0xc0d83ff9::FLocKeyPair,1>,FDefaultSetAllocator>
::TBaseKeyIterator<0>::operator++(TBaseKeyIterator<0> *this)

{
  FLocKeyPair *pFVar1;
  TSet<TTuple<_anonymous_namespace_::FLocKeyPair,A0xc0d83ff9::FLocKeyPair>,TDefaultMapHashableKeyFuncs<_anonymous_namespace_::FLocKeyPair,A0xc0d83ff9::FLocKeyPair,1>,FDefaultSetAllocator>
  *pTVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined8 *puVar7;
  int iVar8;
  
  iVar8 = this->NextIndex;
  this->Index = iVar8;
  if (iVar8 == -1) {
    return this;
  }
  pFVar1 = this->Key;
  pTVar2 = this->Set;
  do {
    lVar4 = (longlong)iVar8;
    iVar8 = *(int *)(*(longlong *)&pTVar2->Elements + 0x60 + lVar4 * 0x68);
    this->NextIndex = iVar8;
    puVar7 = (undefined8 *)(*(longlong *)&pTVar2->Elements + lVar4 * 0x68);
    if (*(uint *)(puVar7 + 2) == (pFVar1->First).Hash) {
      if ((pFVar1->First).Str.Data.ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar1->First).Str.Data.AllocatorInstance.Data;
      }
      if (*(int *)(puVar7 + 1) == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)*puVar7;
      }
      iVar3 = wcscmp(pwVar5,pwVar6);
      if ((iVar3 == 0) && (*(uint *)(puVar7 + 5) == (pFVar1->Second).Hash)) {
        if ((pFVar1->Second).Str.Data.ArrayNum == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = (wchar_t *)(pFVar1->Second).Str.Data.AllocatorInstance.Data;
        }
        if (*(int *)(puVar7 + 4) == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = (wchar_t *)puVar7[3];
        }
        iVar3 = wcscmp(pwVar5,pwVar6);
        if (iVar3 == 0) {
          return this;
        }
      }
    }
    this->Index = iVar8;
    if (iVar8 == -1) {
      return this;
    }
  } while( true );
}

