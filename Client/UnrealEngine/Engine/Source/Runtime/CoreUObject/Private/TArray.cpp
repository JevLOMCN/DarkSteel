// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 103

// AddUniqueImpl<FTopLevelAssetPath_const_&> @ 141e4f330

int __thiscall
TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTopLevelAssetPath_const_&>
          (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *this,FTopLevelAssetPath *param_1)

{
  FName *pFVar1;
  FTopLevelAssetPath *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  FTopLevelAssetPath *pFVar7;
  
  pFVar2 = (FTopLevelAssetPath *)(this->AllocatorInstance).Data;
  if (pFVar2 != pFVar2 + this->ArrayNum) {
    pFVar7 = pFVar2;
    do {
      if ((pFVar7->PackageName == param_1->PackageName) && (pFVar7->AssetName == param_1->AssetName)
         ) {
        iVar6 = (int)((longlong)pFVar7 - (longlong)pFVar2 >> 4);
        if (iVar6 != -1) {
          return iVar6;
        }
        break;
      }
      pFVar7 = pFVar7 + 1;
    } while (pFVar7 != pFVar2 + this->ArrayNum);
  }
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar6 = this->ArrayNum;
  if (iVar6 == this->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar6;
  }
  this->ArrayNum = iVar6 + 1;
  FVar4 = param_1->AssetName;
  pFVar1 = (FName *)((this->AllocatorInstance).Data + (longlong)iVar6 * 0x10);
  *pFVar1 = param_1->PackageName;
  pFVar1[1] = FVar4;
  return iVar6;
}

// AddUniqueImpl<FTopLevelAssetPath> @ 141e4f450

int __thiscall
TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTopLevelAssetPath>
          (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *this,FTopLevelAssetPath *param_1)

{
  FName *pFVar1;
  FTopLevelAssetPath *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  FTopLevelAssetPath *pFVar7;
  
  pFVar2 = (FTopLevelAssetPath *)(this->AllocatorInstance).Data;
  if (pFVar2 != pFVar2 + this->ArrayNum) {
    pFVar7 = pFVar2;
    do {
      if ((pFVar7->PackageName == param_1->PackageName) && (pFVar7->AssetName == param_1->AssetName)
         ) {
        iVar6 = (int)((longlong)pFVar7 - (longlong)pFVar2 >> 4);
        if (iVar6 != -1) {
          return iVar6;
        }
        break;
      }
      pFVar7 = pFVar7 + 1;
    } while (pFVar7 != pFVar2 + this->ArrayNum);
  }
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar6 = this->ArrayNum;
  if (iVar6 == this->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar6;
  }
  this->ArrayNum = iVar6 + 1;
  FVar4 = param_1->AssetName;
  pFVar1 = (FName *)((this->AllocatorInstance).Data + (longlong)iVar6 * 0x10);
  *pFVar1 = param_1->PackageName;
  pFVar1[1] = FVar4;
  return iVar6;
}

// operator= @ 141e57db0

TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *this,
          TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
    }
  }
  return this;
}

// operator= @ 141e57e50

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FName,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FName,TSizedDefaultAllocator<32>_> *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// Reset @ 141e5f750

void __thiscall
TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>::Reset
          (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_><int_const_,int> @ 141e6b000

TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_><int_const_,int>
          (TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this,
          TArrayView<int_const_,int> *param_1)

{
  int iVar1;
  int *_Src;
  ForElementType<int> FVar2;
  ForElementType<int> _Dst;
  
  (this->AllocatorInstance).SecondaryData = (ForElementType<int>)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 2;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
            (4,4,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  FVar2 = (this->AllocatorInstance).SecondaryData;
  _Dst = (ForElementType<int>)this;
  if (FVar2 != (ForElementType<int>)0x0) {
    _Dst = FVar2;
  }
  memcpy((void *)_Dst,_Src,(longlong)iVar1 << 2);
  return this;
}

// TArray<UE::AssetRegistry::FPackageCustomVersion,TSizedDefaultAllocator<32>_><UE::AssetRegistry::FPackageCustomVersion_const_,int> @ 141e6b0a0

TArray<UE::AssetRegistry::FPackageCustomVersion,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::AssetRegistry::FPackageCustomVersion,TSizedDefaultAllocator<32>_>::
TArray<UE::AssetRegistry::FPackageCustomVersion,TSizedDefaultAllocator<32>_><UE::AssetRegistry::FPackageCustomVersion_const_,int>
          (TArray<UE::AssetRegistry::FPackageCustomVersion,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UE::AssetRegistry::FPackageCustomVersion_const_,int> *param_1)

{
  int iVar1;
  FPackageCustomVersion *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x14);
  return this;
}

// operator=<int_const_,int> @ 141e6b130

TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::operator=<int_const_,int>
          (TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this,
          TArrayView<int_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  int *_Src;
  ForElementType<int> FVar3;
  ForElementType<int> _Dst;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 2;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
            (4,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  FVar3 = (this->AllocatorInstance).SecondaryData;
  _Dst = (ForElementType<int>)this;
  if (FVar3 != (ForElementType<int>)0x0) {
    _Dst = FVar3;
  }
  if (iVar2 != 0) {
    memcpy((void *)_Dst,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// AddUniqueImpl<FName> @ 141e6c700

int __thiscall
TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>
          (TArray<FName,TSizedDefaultAllocator<32>_> *this,FName *param_1)

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  
  pFVar1 = (FName *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar6 = pFVar1;
    do {
      if (*pFVar6 == *param_1) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar1 + this->ArrayNum);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  *(FName *)(pFVar2 + (longlong)iVar5 * 8) = *param_1;
  return iVar5;
}

// operator= @ 141e88510

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 2);
    }
  }
  return this;
}

// operator= @ 141e885b0

TArray<wchar_t,TSizedDefaultAllocator<32>_> * __thiscall
TArray<wchar_t,TSizedDefaultAllocator<32>_>::operator=
          (TArray<wchar_t,TSizedDefaultAllocator<32>_> *this,
          TArray<wchar_t,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->ArrayNum = param_1->ArrayNum;
    this->ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  return this;
}

// Empty @ 141e97bf0

void __thiscall
TArray<FName,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FName,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAt @ 141eb45b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (param_1 < this->ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x18;
  pvVar2 = *(void **)(pFVar1 + (longlong)param_1 * 0x18 + 8);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar6 = this->ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,_Dst + 0x18,(longlong)iVar6 * 0x18);
  }
  iVar6 = this->ArrayNum + -1;
  this->ArrayNum = iVar6;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&this->AllocatorInstance,iVar6,&this->ArrayMax);
  }
  return;
}

// SetNum @ 141ebc280

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<int> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (4,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<int>)0x0) {
      this = (TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 4),0,(longlong)(param_1 - iVar6) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<int>)this;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 4);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<FAsyncPackage_*_const_&> @ 141ec5dd0

int __thiscall
TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FAsyncPackage_*_const_&>
          (TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_> *this,FAsyncPackage **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(FAsyncPackage **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(FAsyncPackage **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<UObject_*_const_&> @ 141ec5ed0

int __thiscall
TArray<UObject_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_*_const_&>
          (TArray<UObject_*,TSizedDefaultAllocator<32>_> *this,UObject **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UObject **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(UObject **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<UObject_*> @ 141ec5fd0

int __thiscall
TArray<UObject_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_*>
          (TArray<UObject_*,TSizedDefaultAllocator<32>_> *this,UObject **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UObject **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(UObject **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<FProperty_const_*> @ 141ec60d0

int __thiscall
TArray<FProperty_const_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FProperty_const_*>
          (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *this,FProperty **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(FProperty **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(FProperty **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// Append<UObject_*,TSizedDefaultAllocator<32>_> @ 141ec61d0

void __thiscall
TArray<UObject_*,TSizedDefaultAllocator<32>_>::Append<UObject_*,TSizedDefaultAllocator<32>_>
          (TArray<UObject_*,TSizedDefaultAllocator<32>_> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 8,(param_1->AllocatorInstance).Data,
           (longlong)iVar1 << 3);
  }
  return;
}

// Append<UObject_*,TSizedDefaultAllocator<32>_> @ 141ec6270

void __thiscall
TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::
Append<UObject_*,TSizedDefaultAllocator<32>_>
          (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    ConstructItems<TObjectPtr<UObject>,UObject_*,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 8,
               (UObject **)(param_1->AllocatorInstance).Data,iVar1);
  }
  return;
}

// HeapPop<TLess<int>_> @ 141ecd7c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::HeapPop<TLess<int>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *this,int *param_1,TLess<int> *param_2,
          EAllowShrinking param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((this->ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *param_1 = *(int *)(this->AllocatorInstance).Data;
  if ((this->ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar7 = this->ArrayNum + -1;
  if (1 < iVar7) {
    iVar7 = 1;
  }
  if (iVar7 != 0) {
    memmove(pFVar2,pFVar2 + (longlong)(this->ArrayNum - iVar7) * 4,(longlong)iVar7 << 2);
  }
  iVar7 = this->ArrayNum + -1;
  this->ArrayNum = iVar7;
  if (param_3 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&this->AllocatorInstance,iVar7,&this->ArrayMax);
  }
  iVar7 = this->ArrayNum;
  pFVar2 = (this->AllocatorInstance).Data;
  iVar6 = 0;
  if (1 < iVar7) {
    do {
      iVar1 = iVar6 * 2;
      iVar5 = iVar1 + 1;
      if (iVar1 + 2 < iVar7) {
        if (*(int *)(pFVar2 + (longlong)iVar5 * 4) < *(int *)(pFVar2 + (longlong)iVar1 * 4 + 8)) {
          iVar5 = iVar1;
        }
        iVar5 = iVar5 + 1;
      }
      iVar1 = *(int *)(pFVar2 + (longlong)iVar6 * 4);
      if (iVar1 <= *(int *)(pFVar2 + (longlong)iVar5 * 4)) {
        return;
      }
      *(int *)(pFVar2 + (longlong)iVar6 * 4) = *(int *)(pFVar2 + (longlong)iVar5 * 4);
      *(int *)(pFVar2 + (longlong)iVar5 * 4) = iVar1;
      iVar6 = iVar5;
    } while (iVar5 * 2 + 1 < iVar7);
  }
  return;
}

// HeapPush<TLess<FAsyncLoadEvent>_> @ 141ecd930

int __thiscall
TArray<FAsyncLoadEvent,TSizedDefaultAllocator<32>_>::HeapPush<TLess<FAsyncLoadEvent>_>
          (TArray<FAsyncLoadEvent,TSizedDefaultAllocator<32>_> *this,FAsyncLoadEvent *param_1,
          TLess<FAsyncLoadEvent> *param_2)

{
  FAsyncLoadEvent *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  
  pFVar1 = (FAsyncLoadEvent *)(this->AllocatorInstance).Data;
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar2 = (code *)swi(3);
    iVar13 = (*pcVar2)();
    return iVar13;
  }
  iVar13 = this->ArrayNum;
  if (iVar13 == this->ArrayMax) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1040,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar13 + 1;
  pFVar16 = (this->AllocatorInstance).Data + (longlong)iVar13 * 0x40;
  *(int *)pFVar16 = param_1->UserPriority;
  *(int *)(pFVar16 + 4) = param_1->PackageSerialNumber;
  *(int *)(pFVar16 + 8) = param_1->EventSystemPriority;
  *(int *)(pFVar16 + 0xc) = param_1->SerialNumber;
  *(undefined8 *)(pFVar16 + 0x10) = *(undefined8 *)&param_1->Payload;
  *(undefined8 *)(pFVar16 + 0x38) = *(undefined8 *)&(param_1->Payload).field_0x28;
  *(undefined8 *)&(param_1->Payload).field_0x28 = 0;
  uVar3 = *(undefined8 *)&(param_1->Payload).field_0x18;
  *(undefined8 *)(pFVar16 + 0x20) = *(undefined8 *)&(param_1->Payload).field_0x10;
  *(undefined8 *)(pFVar16 + 0x28) = uVar3;
  *(undefined8 *)(pFVar16 + 0x30) = *(undefined8 *)&(param_1->Payload).field_0x20;
  if (*(longlong *)(pFVar16 + 0x10) != 0) {
    *(undefined8 *)&param_1->Payload = 0;
  }
  pFVar16 = (this->AllocatorInstance).Data;
  iVar13 = this->ArrayNum + -1;
  while( true ) {
    if (iVar13 < 1) {
      return iVar13;
    }
    lVar15 = (longlong)iVar13 * 0x40;
    iVar14 = (iVar13 + -1) / 2;
    pFVar17 = pFVar16 + (longlong)iVar14 * 0x40;
    if (*(int *)(pFVar16 + lVar15) == *(int *)pFVar17) {
      if (*(int *)(pFVar16 + lVar15 + 8) == *(int *)(pFVar17 + 8)) {
        if (*(int *)(pFVar16 + lVar15 + 4) == *(int *)(pFVar17 + 4)) {
          bVar12 = *(int *)(pFVar16 + lVar15 + 0xc) < *(int *)(pFVar17 + 0xc);
        }
        else {
          bVar12 = *(int *)(pFVar17 + 4) <= *(int *)(pFVar16 + lVar15 + 4);
        }
      }
      else {
        bVar12 = *(int *)(pFVar17 + 8) <= *(int *)(pFVar16 + lVar15 + 8);
      }
    }
    else {
      bVar12 = *(int *)pFVar17 <= *(int *)(pFVar16 + lVar15);
    }
    if (!bVar12) break;
    uVar3 = *(undefined8 *)(pFVar17 + 8);
    uVar4 = *(undefined8 *)(pFVar16 + lVar15);
    uVar5 = *(undefined8 *)(pFVar16 + lVar15 + 8);
    uVar6 = *(undefined8 *)(pFVar16 + lVar15 + 0x10);
    uVar7 = *(undefined8 *)(pFVar16 + lVar15 + 0x10 + 8);
    uVar8 = *(undefined8 *)(pFVar16 + lVar15 + 0x20);
    uVar9 = *(undefined8 *)(pFVar16 + lVar15 + 0x20 + 8);
    uVar10 = *(undefined8 *)(pFVar16 + lVar15 + 0x30);
    uVar11 = *(undefined8 *)(pFVar16 + lVar15 + 0x30 + 8);
    *(undefined8 *)(pFVar16 + lVar15) = *(undefined8 *)pFVar17;
    *(undefined8 *)(pFVar16 + lVar15 + 8) = uVar3;
    uVar3 = *(undefined8 *)(pFVar17 + 0x18);
    *(undefined8 *)(pFVar16 + lVar15 + 0x10) = *(undefined8 *)(pFVar17 + 0x10);
    *(undefined8 *)(pFVar16 + lVar15 + 0x10 + 8) = uVar3;
    uVar3 = *(undefined8 *)(pFVar17 + 0x28);
    *(undefined8 *)(pFVar16 + lVar15 + 0x20) = *(undefined8 *)(pFVar17 + 0x20);
    *(undefined8 *)(pFVar16 + lVar15 + 0x20 + 8) = uVar3;
    uVar3 = *(undefined8 *)(pFVar17 + 0x38);
    *(undefined8 *)(pFVar16 + lVar15 + 0x30) = *(undefined8 *)(pFVar17 + 0x30);
    *(undefined8 *)(pFVar16 + lVar15 + 0x30 + 8) = uVar3;
    *(undefined8 *)pFVar17 = uVar4;
    *(undefined8 *)(pFVar17 + 8) = uVar5;
    *(undefined8 *)(pFVar17 + 0x10) = uVar6;
    *(undefined8 *)(pFVar17 + 0x18) = uVar7;
    *(undefined8 *)(pFVar17 + 0x20) = uVar8;
    *(undefined8 *)(pFVar17 + 0x28) = uVar9;
    *(undefined8 *)(pFVar17 + 0x30) = uVar10;
    *(undefined8 *)(pFVar17 + 0x38) = uVar11;
    iVar13 = iVar14;
  }
  return iVar13;
}

// Empty @ 141eebae0

void __thiscall
TArray<FWorldTileLODInfo,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FWorldTileLODInfo,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// HeapPush @ 141efad50

int __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::HeapPush
          (TArray<int,TSizedDefaultAllocator<32>_> *this,int *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  
  pFVar2 = (this->AllocatorInstance).Data;
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)this->ArrayMax * 4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  *(int *)((this->AllocatorInstance).Data + (longlong)iVar5 * 4) = *param_1;
  pFVar2 = (this->AllocatorInstance).Data;
  iVar5 = this->ArrayNum + -1;
  if (0 < iVar5) {
    while( true ) {
      iVar6 = (iVar5 + -1) / 2;
      iVar1 = *(int *)(pFVar2 + (longlong)iVar5 * 4);
      if (*(int *)(pFVar2 + (longlong)iVar6 * 4) <= iVar1) break;
      *(int *)(pFVar2 + (longlong)iVar5 * 4) = *(int *)(pFVar2 + (longlong)iVar6 * 4);
      *(int *)(pFVar2 + (longlong)iVar6 * 4) = iVar1;
      iVar5 = iVar6;
      if (iVar6 < 1) {
        return iVar6;
      }
    }
  }
  return iVar5;
}

// Pop @ 141f01170

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

UClass * __thiscall
TArray<UClass_*,TSizedDefaultAllocator<32>_>::Pop
          (TArray<UClass_*,TSizedDefaultAllocator<32>_> *this,EAllowShrinking param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  int iVar4;
  
  if (this->ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UClass *)(*pcVar1)();
      return pUVar3;
    }
  }
  iVar4 = this->ArrayNum + -1;
  pUVar3 = *(UClass **)((this->AllocatorInstance).Data + (longlong)this->ArrayNum * 8 + -8);
  this->ArrayNum = iVar4;
  if (param_1 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return pUVar3;
}

// Remove @ 141f0c9a0

int __thiscall
TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_>::Remove
          (TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_> *this,FAsyncPackage **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(FAsyncPackage **)pFVar1 != *param_1;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(FAsyncPackage **)(pFVar1 + lVar6 * 8) != *param_1)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// RemoveAt @ 141f0cef0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtSwapImpl @ 141f0cfc0

void __thiscall
TArray<FAsyncLoadEvent,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FAsyncLoadEvent,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FAsyncLoadEvent *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = (FAsyncLoadEvent *)(pFVar1 + (longlong)param_1 * 0x40);
  DestructItems<FAsyncLoadEvent,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (param_2 < iVar2) {
    iVar2 = param_2;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x40,(longlong)iVar2 << 6);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// InsertUninitializedImpl @ 141f39d60

void __thiscall
TArray<TTuple<FName,TBulkData<unsigned_char>_*>,TSizedDefaultAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<FName,TBulkData<unsigned_char>_*>,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  memmove(_Src + (longlong)param_2 * 0x10,_Src,(longlong)(iVar1 - param_1) << 4);
  return;
}

// operator=<FPropertyBagPropertyDesc_const_,int> @ 141f54ac0

TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_>::
operator=<FPropertyBagPropertyDesc_const_,int>
          (TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FPropertyBagPropertyDesc_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FPropertyBagPropertyDesc *pFVar3;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pFVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x40,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<FPropertyBagPropertyDesc,FPropertyBagPropertyDesc,int>
            ((this->AllocatorInstance).Data,pFVar3,iVar2);
  return this;
}

// AddDefaulted @ 141f6d0f0

int __thiscall
TArray<FUnversionedHeader::FFragment,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
AddDefaulted(TArray<FUnversionedHeader::FFragment,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
             *this)

{
  ForElementType<FUnversionedHeader::FFragment> FVar1;
  int iVar2;
  
  iVar2 = this->ArrayNum;
  if (iVar2 == this->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FUnversionedHeader::FFragment>_>
                      (0x104,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar2 + 1;
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<FUnversionedHeader::FFragment>)0x0) {
    this = (TArray<FUnversionedHeader::FFragment,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  DefaultConstructItems<FUnversionedHeader::FFragment,int>
            ((void *)((longlong)this + (longlong)iVar2 * 4),1);
  return iVar2;
}

// Empty @ 141f79970

void __thiscall
TArray<UField_*,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UField_*,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 141f799c0

void __thiscall
TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 141f79a10

void __thiscall
TArray<FImplementedInterface,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FImplementedInterface,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 141f79a60

void __thiscall
TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 141f79ab0

void __thiscall
TArray<FPropertyBagPropertyDescMetaData,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FPropertyBagPropertyDescMetaData,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FPropertyBagPropertyDescMetaData,int>
              ((FPropertyBagPropertyDescMetaData *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAt @ 141f97d20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *_Dst;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x40;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x40,(longlong)iVar4 << 6);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// AddUniqueImpl<FCoreRedirectObjectName_const_&> @ 141fb5680

int __thiscall
TArray<FCoreRedirectObjectName,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FCoreRedirectObjectName_const_&>
          (TArray<FCoreRedirectObjectName,TSizedDefaultAllocator<32>_> *this,
          FCoreRedirectObjectName *param_1)

{
  FName *pFVar1;
  FCoreRedirectObjectName *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  
  iVar7 = Find(this,param_1);
  if (iVar7 == -1) {
    pFVar2 = (FCoreRedirectObjectName *)(this->AllocatorInstance).Data;
    if ((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
    }
    iVar7 = this->ArrayNum;
    if (iVar7 == this->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x418,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar7 + 1;
    FVar5 = param_1->OuterName;
    pFVar3 = (this->AllocatorInstance).Data;
    pFVar1 = (FName *)(pFVar3 + (longlong)iVar7 * 0x18);
    *pFVar1 = param_1->ObjectName;
    pFVar1[1] = FVar5;
    *(FName *)(pFVar3 + (longlong)iVar7 * 0x18 + 0x10) = param_1->PackageName;
  }
  return iVar7;
}

// Append<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TSizedDefaultAllocator<32>_> @ 141fb5750

void __thiscall
TArray<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TSizedDefaultAllocator<32>_>
::
Append<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TSizedDefaultAllocator<32>_>
          (void *this,
          TArray<TTuple<ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,iVar1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    ConstructItems<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,int>
              ((void *)((longlong)iVar4 * 0x68 + *(longlong *)this),
               (TTuple<ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap> *)
               (param_1->AllocatorInstance).Data,iVar1);
  }
  return;
}

// operator= @ 141fc0240

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *this,
          TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FCoreRedirect *pFVar3;
  
  if (this != param_1) {
    DestructItems<FCoreRedirect,int>((FCoreRedirect *)(this->AllocatorInstance).Data,this->ArrayNum)
    ;
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FCoreRedirect *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FCoreRedirect,FCoreRedirect,int>((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// Empty @ 141fc9d30

void __thiscall
TArray<TTuple<FName,unsigned_char>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TTuple<FName,unsigned_char>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Find @ 141fcb620

int __thiscall
TArray<FCoreRedirectObjectName,TSizedDefaultAllocator<32>_>::Find
          (TArray<FCoreRedirectObjectName,TSizedDefaultAllocator<32>_> *this,
          FCoreRedirectObjectName *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar1 = (FName *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 3) {
    pFVar2 = pFVar1;
    do {
      if (((*pFVar2 == param_1->ObjectName) && (pFVar2[1] == param_1->OuterName)) &&
         (pFVar2[2] == param_1->PackageName)) {
        return (int)(((longlong)pFVar2 - (longlong)pFVar1) / 0x18);
      }
      pFVar2 = pFVar2 + 3;
    } while (pFVar2 != pFVar1 + (longlong)this->ArrayNum * 3);
  }
  return -1;
}

// RemoveAt @ 141fe1cc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0xa0;
  *(undefined4 *)(_Dst + 0x98) = 0;
  if (*(void **)(_Dst + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x90));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(_Dst + 0x50));
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0xa0,(longlong)iVar4 * 0xa0);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// Contains<int> @ 141fee4c0

bool __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::Contains<int>
          (TArray<int,TSizedDefaultAllocator<32>_> *this,int *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar1 = pFVar2 + (longlong)this->ArrayNum * 4;
  if (pFVar2 != pFVar1) {
    do {
      if (*(int *)pFVar2 == *param_1) {
        return true;
      }
      pFVar2 = pFVar2 + 4;
    } while (pFVar2 != pFVar1);
  }
  return false;
}

// operator+= @ 142016c10

TArray<FUObjectItem_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FUObjectItem_*,TSizedDefaultAllocator<32>_>::operator+=
          (TArray<FUObjectItem_*,TSizedDefaultAllocator<32>_> *this,
          TArray<FUObjectItem_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FUObjectItem_*,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FUObjectItem_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 8,(param_1->AllocatorInstance).Data,
           (longlong)iVar1 << 3);
  }
  return this;
}

// RemoveAtImpl @ 14208df30

void __thiscall
TArray<UE::GC::FAROQueue,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::GC::FAROQueue,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FAROQueue *_Dst;
  
  _Dst = (FAROQueue *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x80);
  DestructItems<UE::GC::FAROQueue,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 7);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveSingleSwap @ 14208dfb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
          (TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *this,
          FStructProperty **param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar7 = pFVar1;
    do {
      if (*(FStructProperty **)pFVar7 == *param_1) {
        uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar1 >> 3);
        if (uVar6 == 0xffffffff) {
          return 0;
        }
        uVar5 = 0;
        if ((int)(uVar6 + 1) <= this->ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar4 = this->ArrayNum + ~uVar6;
        if (1 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar6 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar4) * 8,
                  (longlong)iVar4 << 3);
        }
        iVar4 = this->ArrayNum + -1;
        this->ArrayNum = iVar4;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
        }
        return 1;
      }
      pFVar7 = pFVar7 + 8;
    } while (pFVar7 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  return 0;
}

// TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> @ 1420a1370

TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_>::
TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_>
          (TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FFormatArgumentValue> *param_1)

{
  FFormatArgumentValue *pFVar1;
  FFormatArgumentValue *pFVar2;
  int iVar3;
  
  pFVar1 = param_1->_First;
  pFVar2 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (int)((longlong)pFVar2 - (longlong)pFVar1 >> 5);
  this->ArrayNum = iVar3;
  if (iVar3 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,iVar3,0,&this->AllocatorInstance,iVar3,&this->ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            ((this->AllocatorInstance).Data,pFVar1,iVar3);
  return this;
}

// Empty @ 1420b3cc0

void __thiscall
TArray<FGatherableTextData,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FGatherableTextData,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FGatherableTextData,int>
              ((FGatherableTextData *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1420b3d30

void __thiscall
TArray<FNameEntryId,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FNameEntryId,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1420b3d80

void __thiscall
TArray<FObjectExport,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FObjectExport,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1420b3dd0

void __thiscall
TArray<FObjectImport,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FObjectImport,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1420b3e20

void __thiscall
TArray<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,int>
              ((TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1420b3e90

void __thiscall
TArray<FPackageIndex,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// CopyToEmpty<FOverriddenPropertyNode,int> @ 1420e2ff0

void __thiscall
TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::
CopyToEmpty<FOverriddenPropertyNode,int>
          (TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_> *this,
          FOverriddenPropertyNode *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x38,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<FOverriddenPropertyNode,FOverriddenPropertyNode,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// CopyToEmpty<FName,int> @ 1420e3070

void __thiscall
TArray<FName,TSizedDefaultAllocator<32>_>::CopyToEmpty<FName,int>
          (TArray<FName,TSizedDefaultAllocator<32>_> *this,FName *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 3);
  }
  return;
}

// FindByKey<FOverriddenPropertyNodeID> @ 1420e3fd0

FOverriddenPropertyNode * __thiscall
TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::FindByKey<FOverriddenPropertyNodeID>
          (TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_> *this,
          FOverriddenPropertyNodeID *param_1)

{
  bool bVar1;
  FOverriddenPropertyNode *this_00;
  FOverriddenPropertyNode *pFVar2;
  FOverriddenPropertyNodeID local_48;
  undefined1 local_28;
  FOverriddenPropertyNode *local_20;
  undefined8 local_18;
  
  this_00 = (FOverriddenPropertyNode *)(this->AllocatorInstance).Data;
  pFVar2 = this_00 + this->ArrayNum;
  while( true ) {
    if (this_00 == pFVar2) {
      return (FOverriddenPropertyNode *)0x0;
    }
    FOverriddenPropertyPath::FOverriddenPropertyPath(&local_48.Path,&param_1->Path);
    local_48.Object.WeakPtr = (param_1->Object).WeakPtr;
    local_28 = 0;
    local_20 = (FOverriddenPropertyNode *)0x0;
    local_18 = 0;
    bVar1 = FOverriddenPropertyNodeID::operator==(&this_00->NodeID,&local_48);
    DestructItems<FOverriddenPropertyNode,int>(local_20,(int)local_18);
    if (local_20 != (FOverriddenPropertyNode *)0x0) {
      FMemory::Free(local_20);
    }
    if (local_48.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Path.Path.AllocatorInstance.Data);
    }
    if (bVar1) break;
    this_00 = this_00 + 1;
  }
  return this_00;
}

// ~TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_> @ 1420eaf60

void __thiscall
TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::
~TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>
          (TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FOverriddenPropertyNode,int>
            ((FOverriddenPropertyNode *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<FName,TSizedDefaultAllocator<32>_> @ 1420eafa0

void __thiscall
TArray<FName,TSizedDefaultAllocator<32>_>::~TArray<FName,TSizedDefaultAllocator<32>_>
          (TArray<FName,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// AddDefaulted @ 1420f1410

int __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 0x10,0,(longlong)param_1 << 4);
  return iVar1;
}

// Empty @ 1420f66e0

void __thiscall
TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FOverriddenPropertyNode,int>
              ((FOverriddenPropertyNode *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Pop @ 142105c20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

UObject * __thiscall
TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
          (TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this,
          EAllowShrinking param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  ForElementType<UObject_const_*> FVar6;
  int iVar7;
  
  if (this->ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UObject *)(*pcVar3)();
      return pUVar5;
    }
  }
  FVar6 = (this->AllocatorInstance).SecondaryData;
  uVar1 = this->ArrayNum - 1;
  lVar2 = (longlong)(int)uVar1 * 8;
  if (FVar6 == (ForElementType<UObject_const_*>)0x0) {
    pUVar5 = *(UObject **)((this->AllocatorInstance).InlineData + lVar2);
    FVar6 = (ForElementType<UObject_const_*>)this;
  }
  else {
    pUVar5 = *(UObject **)((longlong)FVar6 + lVar2);
  }
  iVar7 = ~uVar1 + this->ArrayNum;
  if (iVar7 != 0) {
    memmove((void *)((longlong)FVar6 + lVar2),(void *)((longlong)FVar6 + lVar2 + 8),
            (longlong)iVar7 << 3);
  }
  iVar7 = this->ArrayNum + -1;
  this->ArrayNum = iVar7;
  if (param_1 == Default) {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
              (8,8,&this->AllocatorInstance,iVar7,&this->ArrayMax);
  }
  return pUVar5;
}

// RemoveAt @ 142109030

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FClassTree_*,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FClassTree_*,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// AddUniqueImpl<void_*_const_&> @ 142125120

int __thiscall
TArray<void_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<void_*_const_&>
          (TArray<void_*,TSizedDefaultAllocator<32>_> *this,void **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(void **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(void **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_> @ 142125220

int __thiscall
TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_>
          (TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this,
          TWeakObjectPtr<UObject,FWeakObjectPtr> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&this->AllocatorInstance,&this->ArrayMax);
    }
    pFVar1 = (this->AllocatorInstance).Data;
    this->ArrayNum = iVar4 + 1;
    *(FWeakObjectPtr *)(pFVar1 + (longlong)iVar4 * 8) = param_1->WeakPtr;
  }
  return iVar4;
}

// Find @ 1421395d0

int __thiscall
TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this,
          TWeakObjectPtr<UObject,FWeakObjectPtr> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FScriptContainerElement *this_00;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + (longlong)iVar1 * 8) {
      return -1;
    }
    bVar3 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                      ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 8;
  }
  return (int)((longlong)this_00 - (longlong)pFVar2 >> 3);
}

// AddUniqueImpl<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_> @ 142155a30

int __thiscall
TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>
          (TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
           *this,TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pTVar1 = (TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *)(this->AllocatorInstance).Data
    ;
    if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    iVar5 = this->ArrayNum;
    if (iVar5 == this->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&this->AllocatorInstance,&this->ArrayMax);
    }
    lVar6 = (longlong)iVar5;
    this->ArrayNum = iVar5 + 1;
    pFVar2 = (this->AllocatorInstance).Data;
    *(undefined8 *)(pFVar2 + lVar6 * 0x10) = 0;
    *(undefined8 *)(pFVar2 + lVar6 * 0x10 + 8) = 0;
    *(FWeakObjectPtr *)(pFVar2 + lVar6 * 0x10) = param_1->Object;
    *(FName *)(pFVar2 + lVar6 * 0x10 + 8) = param_1->FunctionName;
  }
  return iVar5;
}

// Empty @ 142175900

void __thiscall
TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 142175950

void __thiscall
TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
::Empty(TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>_>
                (0x10,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Find @ 142177750

int __thiscall
TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
           *this,TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  int iVar1;
  FWeakObjectPtr *pFVar2;
  FName FVar3;
  bool bVar4;
  FWeakObjectPtr *this_00;
  FWeakObjectPtr local_res8;
  
  pFVar2 = (FWeakObjectPtr *)(this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + (longlong)iVar1 * 2) {
      return -1;
    }
    local_res8 = param_1->Object;
    FVar3 = param_1->FunctionName;
    if ((((this_00->ObjectIndex == local_res8.ObjectIndex) &&
         (this_00->ObjectSerialNumber == local_res8.ObjectSerialNumber)) ||
        ((bVar4 = FWeakObjectPtr::IsValid(this_00), !bVar4 &&
         (bVar4 = FWeakObjectPtr::IsValid(&local_res8), !bVar4)))) &&
       (*(FName *)(this_00 + 1) == FVar3)) break;
    this_00 = this_00 + 2;
  }
  return (int)((longlong)this_00 - (longlong)pFVar2 >> 4);
}

// SetNum @ 142191e60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<int,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<int> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (4,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<int>)0x0) {
      this = (TArray<int,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 4),0,(longlong)(param_1 - iVar6) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<int>)this;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 4);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 142191fb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::FPropertyTypeNameNode,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<UE::FPropertyTypeNameNode,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<UE::FPropertyTypeNameNode> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<UE::FPropertyTypeNameNode> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::FPropertyTypeNameNode>_>
                      (0xc,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
      this = (TArray<UE::FPropertyTypeNameNode,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
              *)FVar2;
    }
    DefaultConstructItems<UE::FPropertyTypeNameNode,int>
              ((void *)((longlong)this + (longlong)iVar5 * 0xc),param_1 - iVar6);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<UE::FPropertyTypeNameNode>)this;
        if (FVar2 != (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 0xc);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 0xc),(longlong)iVar6 * 0xc);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::FPropertyTypeNameNode>_>
                    (0xc,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// TArray<unsigned___int64,TSizedDefaultAllocator<32>_><unsigned___int64_const_,int> @ 14219b830

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::
TArray<unsigned___int64,TSizedDefaultAllocator<32>_><unsigned___int64_const_,int>
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *this,
          TArrayView<unsigned___int64_const_,int> *param_1)

{
  int iVar1;
  ulong64 *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return this;
}

// Append<int,TSizedDefaultAllocator<32>_> @ 14219bc90

void __thiscall
TArray<int,TSizedDefaultAllocator<64>_>::Append<int,TSizedDefaultAllocator<32>_>
          (TArray<int,TSizedDefaultAllocator<64>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  longlong lVar4;
  
  if (this == (TArray<int,TSizedDefaultAllocator<64>_> *)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar4 = (longlong)param_1->ArrayNum;
  if (lVar4 != 0) {
    lVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (4,4,lVar4,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + lVar3 * 4,(param_1->AllocatorInstance).Data,lVar4 * 4);
  }
  return;
}

// Append<UObject_*,TSizedDefaultAllocator<32>_> @ 14219bd30

void __thiscall
TArray<UObject_*,TSizedDefaultAllocator<32>_>::Append<UObject_*,TSizedDefaultAllocator<32>_>
          (TArray<UObject_*,TSizedDefaultAllocator<32>_> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memmove((this->AllocatorInstance).Data + (longlong)iVar4 * 8,(param_1->AllocatorInstance).Data,
            (longlong)iVar1 << 3);
    param_1->ArrayNum = 0;
  }
  return;
}

// AddDefaulted @ 1421bc770

int __thiscall
TArray<FRemoteObjectBytes,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<FRemoteObjectBytes,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  DefaultConstructItems<FRemoteObjectBytes,int>
            ((this->AllocatorInstance).Data + (longlong)iVar1 * 0x10,param_1);
  return iVar1;
}

// AddDefaulted_GetRef @ 1421bc7e0

FGraphPath * __thiscall
TArray<UE::ReferenceChainSearch::FGraphPath,TSizedDefaultAllocator<32>_>::AddDefaulted_GetRef
          (TArray<UE::ReferenceChainSearch::FGraphPath,TSizedDefaultAllocator<32>_> *this)

{
  FGraphPath *pFVar1;
  int iVar2;
  
  iVar2 = this->ArrayNum;
  if (iVar2 == this->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar2 + 1;
  pFVar1 = (FGraphPath *)((this->AllocatorInstance).Data + (longlong)iVar2 * 0x18);
  DefaultConstructItems<UE::ReferenceChainSearch::FGraphPath,int>(pFVar1,1);
  return pFVar1;
}

// Empty @ 1421c7640

void __thiscall
TArray<FPackedRemoteObjectPathName,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FPackedRemoteObjectPathName,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FPackedRemoteObjectPathName,int>
              ((FPackedRemoteObjectPathName *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1421c76b0

void __thiscall
TArray<FRemoteObjectBytes,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FRemoteObjectBytes,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FRemoteObjectBytes,int>
              ((FRemoteObjectBytes *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1421c7720

void __thiscall
TArray<UE::RemoteObject::Serialization::FRemoteObjectHeader,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::RemoteObject::Serialization::FRemoteObjectHeader,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 1421c7770

void __thiscall
TArray<FRemoteObjectId,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FRemoteObjectId,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAt @ 1421e01f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::RemoteObject::Transfer::FPendingObjectRequest,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<UE::RemoteObject::Transfer::FPendingObjectRequest,TSizedDefaultAllocator<32>_>
           *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *_Dst;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// SetNumUninitialized @ 1421e8240

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TArrayView<int_const_,int>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<TArrayView<int_const_,int>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0x10,(longlong)iVar4 << 4);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 1421e8370

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TArrayView<int,int>,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<TArrayView<int,int>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,0,
           (longlong)(param_1 - iVar5) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x10,(longlong)iVar5 << 4);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// operator= @ 142201270

TArray<ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::operator=
          (void *this,
          TArray<ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int iVar1;
  ForElementType<ESaveRealm> FVar2;
  int *piVar3;
  void *_Dst;
  
  if (this != param_1) {
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    piVar3 = (int *)((longlong)this + 0x14);
    iVar1 = param_1->ArrayNum;
    if (FVar2 != (ForElementType<ESaveRealm>)0x0) {
      param_1 = (TArray<ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)FVar2
      ;
    }
    *(int *)((longlong)this + 0x10) = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 2;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
              (4,4,iVar1,*piVar3,this,iVar1,piVar3);
    _Dst = this;
    if (*(void **)((longlong)this + 8) != (void *)0x0) {
      _Dst = *(void **)((longlong)this + 8);
    }
    if (iVar1 != 0) {
      memcpy(_Dst,param_1,(longlong)iVar1 << 2);
    }
  }
  return this;
}

// Pop @ 142215930

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __thiscall
TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Pop
          (TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,
          EAllowShrinking param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<unsigned_int> FVar5;
  uint uVar6;
  int iVar7;
  
  if (this->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  FVar5 = (this->AllocatorInstance).SecondaryData;
  uVar4 = this->ArrayNum - 1;
  lVar1 = (longlong)(int)uVar4 * 4;
  if (FVar5 == (ForElementType<unsigned_int>)0x0) {
    uVar6 = *(uint *)((this->AllocatorInstance).InlineData + lVar1);
    FVar5 = (ForElementType<unsigned_int>)this;
  }
  else {
    uVar6 = *(uint *)((longlong)FVar5 + lVar1);
  }
  iVar7 = ~uVar4 + this->ArrayNum;
  if (iVar7 != 0) {
    memmove((void *)((longlong)FVar5 + lVar1),(void *)((longlong)FVar5 + lVar1 + 4),
            (longlong)iVar7 << 2);
  }
  iVar7 = this->ArrayNum + -1;
  this->ArrayNum = iVar7;
  if (param_1 == Default) {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,&this->AllocatorInstance,iVar7,&this->ArrayMax);
  }
  return uVar6;
}

// RemoveSwap @ 14221b160

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<enum_ESaveRealm,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::RemoveSwap
          (void *this,ESaveRealm *param_1,EAllowShrinking param_2)

{
  ESaveRealm *pEVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ESaveRealm *pEVar7;
  void *pvVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  pEVar1 = *(ESaveRealm **)((longlong)this + 8);
  pEVar7 = this;
  if (pEVar1 != (ESaveRealm *)0x0) {
    pEVar7 = pEVar1;
  }
  if (pEVar7 <= param_1) {
    pEVar7 = this;
    if (pEVar1 != (ESaveRealm *)0x0) {
      pEVar7 = pEVar1;
    }
    if ((param_1 < pEVar7 + *(int *)((longlong)this + 0x14)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = *(int *)((longlong)this + 0x10);
  uVar11 = 0;
  if (0 < iVar5) {
    lVar9 = 0;
    bVar3 = false;
    iVar12 = iVar5;
    do {
      uVar10 = 0;
      if ((int)uVar11 < iVar12) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pvVar8 = this;
      if (*(void **)((longlong)this + 8) != (void *)0x0) {
        pvVar8 = *(void **)((longlong)this + 8);
      }
      uVar10 = uVar11;
      if (*(ESaveRealm *)((longlong)pvVar8 + lVar9) == *param_1) {
        uVar10 = uVar11 - 1;
        lVar9 = lVar9 + -4;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar11 < *(int *)((longlong)this + 0x10)) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        pvVar8 = this;
        if (*(void **)((longlong)this + 8) != (void *)0x0) {
          pvVar8 = *(void **)((longlong)this + 8);
        }
        iVar12 = ~uVar11 + *(int *)((longlong)this + 0x10);
        if (1 < iVar12) {
          iVar12 = 1;
        }
        if (iVar12 != 0) {
          memmove((void *)((longlong)pvVar8 + (longlong)(int)uVar11 * 4),
                  (void *)((longlong)pvVar8 +
                          (longlong)(*(int *)((longlong)this + 0x10) - iVar12) * 4),
                  (longlong)iVar12 << 2);
        }
        *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + -1;
      }
      iVar12 = *(int *)((longlong)this + 0x10);
      uVar11 = uVar10 + 1;
      lVar9 = lVar9 + 4;
    } while ((int)uVar11 < iVar12);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ESaveRealm>_>
                (4,4,this,iVar12,(int *)((longlong)this + 0x14));
    }
  }
  return iVar5 - *(int *)((longlong)this + 0x10);
}

// AddUniqueImpl<FLinkerLoad_*_const_&> @ 14223e540

int __thiscall
TArray<FLinkerLoad_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FLinkerLoad_*_const_&>
          (TArray<FLinkerLoad_*,TSizedDefaultAllocator<32>_> *this,FLinkerLoad **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(FLinkerLoad **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(FLinkerLoad **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<FProperty_const_*_const_&> @ 14223e640

int __thiscall
TArray<FProperty_const_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FProperty_const_*_const_&>
          (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *this,FProperty **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(FProperty **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(FProperty **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<int> @ 14223e740

int __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
          (TArray<int,TSizedDefaultAllocator<32>_> *this,int *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 4) {
    pFVar5 = pFVar1;
    do {
      if (*(int *)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 2);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 4;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 4);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(int *)(pFVar1 + (longlong)iVar4 * 4) = *param_1;
  return iVar4;
}

// CopyToEmpty<FObjectInitializer::FOverrides::FOverride,int> @ 142249920

void __thiscall
TArray<FObjectInitializer::FOverrides::FOverride,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::CopyToEmpty<FObjectInitializer::FOverrides::FOverride,int>
          (TArray<FObjectInitializer::FOverrides::FOverride,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
           *this,FOverride *param_1,int param_2,int param_3)

{
  ForElementType<FObjectInitializer::FOverrides::FOverride> FVar1;
  
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 8;
    return;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FObjectInitializer::FOverrides::FOverride>_>
            (0x20,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
    this = (TArray<FObjectInitializer::FOverrides::FOverride,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  ConstructItems<FObjectInitializer::FOverrides::FOverride,FObjectInitializer::FOverrides::FOverride,int>
            (this,param_1,param_2);
  return;
}

// Pop @ 14227a540

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::Pop
          (TArray<int,TSizedDefaultAllocator<32>_> *this,EAllowShrinking param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  if (this->ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar4 = this->ArrayNum + -1;
  iVar3 = *(int *)((this->AllocatorInstance).Data + (longlong)this->ArrayNum * 4 + -4);
  this->ArrayNum = iVar4;
  if (param_1 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return iVar3;
}

// Pop @ 14227a5e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPropertyValueStackEntry * __thiscall
TArray<FPropertyValueIterator::FPropertyValueStackEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::Pop(TArray<FPropertyValueIterator::FPropertyValueStackEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
      *this,FPropertyValueStackEntry *__return_storage_ptr__,EAllowShrinking param_1)

{
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPropertyValueStackEntry *pFVar5;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar6;
  void *_Src;
  
  if (this->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPropertyValueStackEntry *)(*pcVar2)();
      return pFVar5;
    }
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)this;
  if (FVar1 != (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FVar6 = FVar1;
  }
  FPropertyValueIterator::FPropertyValueStackEntry::FPropertyValueStackEntry
            (__return_storage_ptr__,
             (FPropertyValueStackEntry *)((longlong)(this->ArrayNum + -1) * 0xe0 + (longlong)FVar6))
  ;
  FVar1 = (this->AllocatorInstance).SecondaryData;
  iVar4 = this->ArrayNum;
  FVar6 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)this;
  if (FVar1 != (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FVar6 = FVar1;
  }
  _Src = (void *)((longlong)iVar4 * 0xe0 + (longlong)FVar6);
  if (*(void **)((longlong)_Src + -0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)_Src + -0x18));
  }
  iVar4 = this->ArrayNum - iVar4;
  if (iVar4 != 0) {
    memmove((void *)((longlong)_Src + -0xe0),_Src,(longlong)iVar4 * 0xe0);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_1 == Default) {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>_>
              (0xe0,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return __return_storage_ptr__;
}

// RemoveAtSwapImpl @ 142282540

void __thiscall
TArray<FObjectInitializer::FSubobjectsToInit::FSubobjectInit,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtSwapImpl(TArray<FObjectInitializer::FSubobjectsToInit::FSubobjectInit,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                   *this,int param_1)

{
  ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit> FVar1;
  int iVar2;
  ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)this;
  if (FVar1 != (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)0x0) {
    FVar3 = FVar1;
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove((void *)((longlong)param_1 * 0x10 + (longlong)FVar3),
            (void *)((longlong)(this->ArrayNum - iVar2) * 0x10 + (longlong)FVar3),
            (longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// CopyToEmpty<UE::FPropertyPathName::FSegment,int> @ 1422c9270

void __thiscall
TArray<UE::FPropertyPathName::FSegment,TSizedDefaultAllocator<32>_>::
CopyToEmpty<UE::FPropertyPathName::FSegment,int>
          (TArray<UE::FPropertyPathName::FSegment,TSizedDefaultAllocator<32>_> *this,
          FSegment *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 * 0xc);
  }
  return;
}

// TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_><int_const_,int> @ 142301130

TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_><int_const_,int>
          (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          TArrayView<int_const_,int> *param_1)

{
  int iVar1;
  int *_Src;
  ForElementType<int> FVar2;
  ForElementType<int> _Dst;
  
  (this->AllocatorInstance).SecondaryData = (ForElementType<int>)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 4;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
            (4,4,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  FVar2 = (this->AllocatorInstance).SecondaryData;
  _Dst = (ForElementType<int>)this;
  if (FVar2 != (ForElementType<int>)0x0) {
    _Dst = FVar2;
  }
  memcpy((void *)_Dst,_Src,(longlong)iVar1 << 2);
  return this;
}

// AddUniqueImpl<UClass_*_const_&> @ 142301ff0

int __thiscall
TArray<UClass_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<UClass_*_const_&>
          (TArray<UClass_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,
          UClass **param_1)

{
  ForElementType<UClass_*> FVar1;
  ForElementType<UClass_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<UClass_*> FVar6;
  ForElementType<UClass_*> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<UClass_*>)this;
  if (FVar2 != (ForElementType<UClass_*>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<UClass_*>)((longlong)FVar7 + (longlong)this->ArrayNum * 8);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(UClass **)FVar6 == *param_1) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<UClass_*>)((longlong)FVar6 + 8);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<UClass_*>)this;
  if (FVar2 != (ForElementType<UClass_*>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<UClass_*>)this;
    if (FVar2 != (ForElementType<UClass_*>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (UClass **)((longlong)FVar7 + (longlong)this->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UClass_*>_>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<UClass_*>)0x0) {
    this = (TArray<UClass_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
  }
  *(UClass **)((longlong)this + (longlong)iVar5 * 8) = *param_1;
  return iVar5;
}

// AddUniqueImpl<FPackageId_const_&> @ 142302100

int __thiscall
TArray<FPackageId,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<FPackageId_const_&>
          (TArray<FPackageId,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *this,
          FPackageId *param_1)

{
  ForElementType<FPackageId> FVar1;
  ForElementType<FPackageId> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FPackageId> FVar6;
  ForElementType<FPackageId> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<FPackageId>)this;
  if (FVar2 != (ForElementType<FPackageId>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<FPackageId>)((longlong)FVar7 + (longlong)this->ArrayNum * 8);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(ulong64 *)FVar6 == param_1->Id) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<FPackageId>)((longlong)FVar6 + 8);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<FPackageId>)this;
  if (FVar2 != (ForElementType<FPackageId>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<FPackageId>)this;
    if (FVar2 != (ForElementType<FPackageId>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (FPackageId *)((longlong)FVar7 + (longlong)this->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FPackageId>_>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<FPackageId>)0x0) {
    this = (TArray<FPackageId,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
  }
  *(ulong64 *)((longlong)this + (longlong)iVar5 * 8) = param_1->Id;
  return iVar5;
}

// TArray<FExportMapEntry,TSizedDefaultAllocator<32>_> @ 142307110

TArray<FExportMapEntry,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FExportMapEntry,TSizedDefaultAllocator<32>_>::
TArray<FExportMapEntry,TSizedDefaultAllocator<32>_>
          (TArray<FExportMapEntry,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FExportMapEntry> *param_1)

{
  FExportMapEntry *_Src;
  longlong lVar1;
  int iVar2;
  
  _Src = param_1->_First;
  lVar1 = (longlong)param_1->_Last - (longlong)_Src;
  lVar1 = lVar1 / 0x12 + (lVar1 >> 0x3f);
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)(lVar1 >> 2) - (int)(lVar1 >> 0x3f);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x48,8,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x48);
  return this;
}

// Pop @ 14232ea00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAsyncPackage2 * __thiscall
TArray<FAsyncPackage2_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::Pop
          (TArray<FAsyncPackage2_*,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *this
          ,EAllowShrinking param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAsyncPackage2 *pFVar5;
  ForElementType<FAsyncPackage2_*> FVar6;
  int iVar7;
  
  if (this->ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FAsyncPackage2 *)(*pcVar3)();
      return pFVar5;
    }
  }
  FVar6 = (this->AllocatorInstance).SecondaryData;
  uVar1 = this->ArrayNum - 1;
  lVar2 = (longlong)(int)uVar1 * 8;
  if (FVar6 == (ForElementType<FAsyncPackage2_*>)0x0) {
    pFVar5 = *(FAsyncPackage2 **)((this->AllocatorInstance).InlineData + lVar2);
    FVar6 = (ForElementType<FAsyncPackage2_*>)this;
  }
  else {
    pFVar5 = *(FAsyncPackage2 **)((longlong)FVar6 + lVar2);
  }
  iVar7 = ~uVar1 + this->ArrayNum;
  if (iVar7 != 0) {
    memmove((void *)((longlong)FVar6 + lVar2),(void *)((longlong)FVar6 + lVar2 + 8),
            (longlong)iVar7 << 3);
  }
  iVar7 = this->ArrayNum + -1;
  this->ArrayNum = iVar7;
  if (param_1 == Default) {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<FAsyncPackage2_*>_>
              (8,8,&this->AllocatorInstance,iVar7,&this->ArrayMax);
  }
  return pFVar5;
}

// Pop @ 14232eaf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAsyncLoadingSyncLoadContext * __thiscall
TArray<FAsyncLoadingSyncLoadContext_*,TSizedDefaultAllocator<32>_>::Pop
          (TArray<FAsyncLoadingSyncLoadContext_*,TSizedDefaultAllocator<32>_> *this,
          EAllowShrinking param_1)

{
  code *pcVar1;
  bool bVar2;
  FAsyncLoadingSyncLoadContext *pFVar3;
  int iVar4;
  
  if (this->ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAsyncLoadingSyncLoadContext *)(*pcVar1)();
      return pFVar3;
    }
  }
  iVar4 = this->ArrayNum + -1;
  pFVar3 = *(FAsyncLoadingSyncLoadContext **)
            ((this->AllocatorInstance).Data + (longlong)this->ArrayNum * 8 + -8);
  this->ArrayNum = iVar4;
  if (param_1 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return pFVar3;
}

// RemoveAt @ 142339530

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FAsyncPackage2_*,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FAsyncPackage2_*,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 142339600

void __thiscall
TArray<FPackageObjectIndex,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FPackageObjectIndex,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

