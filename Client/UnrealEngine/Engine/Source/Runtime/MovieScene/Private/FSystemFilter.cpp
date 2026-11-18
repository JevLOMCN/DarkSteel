// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 9

// FSystemFilter @ 14611a6c0

FSystemFilter * __thiscall UE::MovieScene::FSystemFilter::FSystemFilter(FSystemFilter *this)

{
  (this->SystemsAllowed).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->SystemsAllowed).NumBits = 0;
  (this->SystemsAllowed).MaxBits = 0x80;
  (this->SystemsDisallowed).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->SystemsDisallowed).NumBits = 0;
  (this->SystemsDisallowed).MaxBits = 0x80;
  this->CategoriesDisallowed = None;
  this->CategoriesAllowed = All;
  return this;
}

// AllowCategory @ 146124f90

void __thiscall
UE::MovieScene::FSystemFilter::AllowCategory(FSystemFilter *this,EEntitySystemCategory param_1)

{
  this->CategoriesAllowed = this->CategoriesAllowed | param_1;
  return;
}

// AllowSystem @ 146124fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSystemFilter::AllowSystem
          (FSystemFilter *this,TSubclassOf<UMovieSceneEntitySystem> param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UMovieSceneEntitySystem *pUVar6;
  ForElementType<unsigned_int> FVar7;
  int iVar8;
  
  pUVar6 = TSubclassOf<UMovieSceneEntitySystem>::GetDefaultObject
                     ((TSubclassOf<UMovieSceneEntitySystem> *)param_1.Class.field0_0x0);
  if (pUVar6 == (UMovieSceneEntitySystem *)0x0) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1595841733583699848>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemLinker.cpp"
                       ,0x78,"SystemCDO");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    uVar2 = pUVar6->GlobalDependencyGraphID;
    iVar8 = ((uint)uVar2 - (this->SystemsAllowed).NumBits) + 1;
    this_00 = &this->SystemsAllowed;
    if (0 < iVar8) {
      iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,iVar8);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(this_00,iVar5,iVar8,false);
    }
    if ((this->SystemsAllowed).NumBits <= (int)(uint)uVar2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FVar7 = (this->SystemsAllowed).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<unsigned_int>)0x0) {
      FVar7 = (ForElementType<unsigned_int>)this_00;
    }
    puVar1 = (uint *)((longlong)FVar7 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  return;
}

// CheckSystem @ 1461260d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FSystemFilter::CheckSystem(FSystemFilter *this,UMovieSceneEntitySystem *param_1)

{
  ushort uVar1;
  ForElementType<unsigned_int> FVar2;
  
  uVar1 = param_1->GlobalDependencyGraphID;
  if ((int)(uint)uVar1 < (this->SystemsDisallowed).NumBits) {
    FVar2 = (this->SystemsDisallowed).AllocatorInstance.SecondaryData;
    if (FVar2 == (ForElementType<unsigned_int>)0x0) {
      FVar2 = (ForElementType<unsigned_int>)&this->SystemsDisallowed;
    }
    if ((*(uint *)((longlong)FVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
      return false;
    }
  }
  if ((int)(uint)uVar1 < (this->SystemsAllowed).NumBits) {
    FVar2 = (this->SystemsAllowed).AllocatorInstance.SecondaryData;
    if (FVar2 == (ForElementType<unsigned_int>)0x0) {
      FVar2 = (ForElementType<unsigned_int>)&this->SystemsAllowed;
    }
    if ((*(uint *)((longlong)FVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
      return true;
    }
  }
  if ((this->CategoriesDisallowed & param_1->SystemCategories) != None) {
    return false;
  }
  return (this->CategoriesAllowed & param_1->SystemCategories) != None;
}

// CheckSystem @ 146126150

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FSystemFilter::CheckSystem
          (FSystemFilter *this,TSubclassOf<UMovieSceneEntitySystem> param_1)

{
  bool bVar1;
  UMovieSceneEntitySystem *pUVar2;
  
  pUVar2 = TSubclassOf<UMovieSceneEntitySystem>::GetDefaultObject
                     ((TSubclassOf<UMovieSceneEntitySystem> *)param_1.Class.field0_0x0);
  if (pUVar2 != (UMovieSceneEntitySystem *)0x0) {
    bVar1 = CheckSystem(this,pUVar2);
    return bVar1;
  }
  return true;
}

// DisallowCategory @ 14612c5d0

void __thiscall
UE::MovieScene::FSystemFilter::DisallowCategory(FSystemFilter *this,EEntitySystemCategory param_1)

{
  this->CategoriesDisallowed = this->CategoriesDisallowed | param_1;
  return;
}

// DisallowSystem @ 14612c5e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSystemFilter::DisallowSystem
          (FSystemFilter *this,TSubclassOf<UMovieSceneEntitySystem> param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UMovieSceneEntitySystem *pUVar6;
  ForElementType<unsigned_int> FVar7;
  int iVar8;
  
  pUVar6 = TSubclassOf<UMovieSceneEntitySystem>::GetDefaultObject
                     ((TSubclassOf<UMovieSceneEntitySystem> *)param_1.Class.field0_0x0);
  if (pUVar6 == (UMovieSceneEntitySystem *)0x0) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1595841733583699837>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemLinker.cpp"
                       ,0x83,"SystemCDO");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    uVar2 = pUVar6->GlobalDependencyGraphID;
    iVar8 = ((uint)uVar2 - (this->SystemsDisallowed).NumBits) + 1;
    this_00 = &this->SystemsDisallowed;
    if (0 < iVar8) {
      iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,iVar8);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(this_00,iVar5,iVar8,false);
    }
    if ((this->SystemsDisallowed).NumBits <= (int)(uint)uVar2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FVar7 = (this->SystemsDisallowed).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<unsigned_int>)0x0) {
      FVar7 = (ForElementType<unsigned_int>)this_00;
    }
    puVar1 = (uint *)((longlong)FVar7 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  return;
}

// SetAllowedCategories @ 146154140

void __thiscall
UE::MovieScene::FSystemFilter::SetAllowedCategories
          (FSystemFilter *this,EEntitySystemCategory param_1)

{
  this->CategoriesAllowed = param_1;
  return;
}

// SetDisallowedCategories @ 146154150

void __thiscall
UE::MovieScene::FSystemFilter::SetDisallowedCategories
          (FSystemFilter *this,EEntitySystemCategory param_1)

{
  this->CategoriesDisallowed = param_1;
  return;
}

