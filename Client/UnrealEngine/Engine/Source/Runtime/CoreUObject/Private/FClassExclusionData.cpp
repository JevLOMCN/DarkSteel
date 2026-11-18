// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// FClassExclusionData @ 1420e8fd0

FClassExclusionData * __thiscall FClassExclusionData::FClassExclusionData(FClassExclusionData *this)

{
  *(undefined8 *)&(this->ExcludedClassNames).Elements = 0;
  *(undefined8 *)&(this->ExcludedClassNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ExcludedClassNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ExcludedClassNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ExcludedClassNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ExcludedClassNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExcludedClassNames).Elements.field_0x34 = 0;
  (this->ExcludedClassNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ExcludedClassNames).HashSize = 0;
  *(undefined8 *)&(this->ExcludedPackageShortNames).Elements = 0;
  *(undefined8 *)&(this->ExcludedPackageShortNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ExcludedPackageShortNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ExcludedPackageShortNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ExcludedPackageShortNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ExcludedPackageShortNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExcludedPackageShortNames).Elements.field_0x34 = 0;
  (this->ExcludedPackageShortNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ExcludedPackageShortNames).HashSize = 0;
  *(undefined8 *)&(this->CachedExcludeList).Elements = 0;
  *(undefined8 *)&(this->CachedExcludeList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CachedExcludeList).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CachedExcludeList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CachedExcludeList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedExcludeList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedExcludeList).Elements.field_0x34 = 0;
  (this->CachedExcludeList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CachedExcludeList).HashSize = 0;
  *(undefined8 *)&(this->CachedIncludeList).Elements = 0;
  *(undefined8 *)&(this->CachedIncludeList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CachedIncludeList).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CachedIncludeList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CachedIncludeList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedIncludeList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedIncludeList).Elements.field_0x34 = 0;
  (this->CachedIncludeList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CachedIncludeList).HashSize = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ExclusionListCrit,4000);
  return this;
}

// ~FClassExclusionData @ 1420ebf10

void __thiscall FClassExclusionData::~FClassExclusionData(FClassExclusionData *this)

{
  ForElementType<FSetElementId> FVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ExclusionListCrit);
  (this->CachedIncludeList).HashSize = 0;
  FVar1 = (this->CachedIncludeList).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CachedIncludeList).Elements);
  (this->CachedExcludeList).HashSize = 0;
  FVar1 = (this->CachedExcludeList).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CachedExcludeList).Elements);
  (this->ExcludedPackageShortNames).HashSize = 0;
  FVar1 = (this->ExcludedPackageShortNames).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ExcludedPackageShortNames).Elements);
  (this->ExcludedClassNames).HashSize = 0;
  FVar1 = (this->ExcludedClassNames).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// IsExcluded @ 1420ff570

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FClassExclusionData::IsExcluded(FClassExclusionData *this,UClass *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  longlong lVar2;
  FName FVar3;
  FName FVar4;
  uint uVar5;
  int iVar6;
  UPackage *pUVar7;
  FString *pFVar8;
  ForElementType<FSetElementId> FVar9;
  wchar_t *pwVar10;
  ForElementType<FSetElementId> FVar11;
  bool bVar12;
  FName local_res8;
  FName local_res10;
  FString local_38;
  
  local_res10 = (FName)param_1->_padding_;
  lpCriticalSection = &this->ExclusionListCrit;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FVar3 = local_res10;
  uVar5 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  FVar4 = local_res10;
  if (*(int *)&(this->CachedExcludeList).Elements.field_0x8 !=
      *(int *)&(this->CachedExcludeList).Elements.field_0x34) {
    FVar9 = (this->CachedExcludeList).Hash.SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&(this->CachedExcludeList).Hash;
    }
    iVar6 = *(int *)((longlong)FVar9 +
                    (ulonglong)((this->CachedExcludeList).HashSize - 1U & FVar3.Number + uVar5) * 4)
    ;
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&(this->CachedExcludeList).Elements;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar6 * 0x10) == FVar3) goto LAB_1420ff84f;
        iVar6 = *(int *)(lVar1 + 8 + (longlong)iVar6 * 0x10);
      } while (iVar6 != -1);
    }
  }
  uVar5 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  if (*(int *)&(this->CachedIncludeList).Elements.field_0x8 !=
      *(int *)&(this->CachedIncludeList).Elements.field_0x34) {
    FVar9 = (this->CachedIncludeList).Hash.SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&(this->CachedIncludeList).Hash;
    }
    iVar6 = *(int *)((longlong)FVar9 +
                    (ulonglong)((this->CachedIncludeList).HashSize - 1U & FVar4.Number + uVar5) * 4)
    ;
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&(this->CachedIncludeList).Elements;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar6 * 0x10) == FVar4) goto LAB_1420ff7ca;
        iVar6 = *(int *)(lVar1 + 8 + (longlong)iVar6 * 0x10);
      } while (iVar6 != -1);
    }
  }
  do {
    if (*(int *)&(this->ExcludedPackageShortNames).Elements.field_0x8 !=
        *(int *)&(this->ExcludedPackageShortNames).Elements.field_0x34) {
      pUVar7 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
      pFVar8 = FPackageName::GetShortName(&local_38,pUVar7);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_res8,pwVar10);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      FVar3 = local_res8;
      uVar5 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
      if (*(int *)&(this->ExcludedPackageShortNames).Elements.field_0x8 !=
          *(int *)&(this->ExcludedPackageShortNames).Elements.field_0x34) {
        FVar9 = (this->ExcludedPackageShortNames).Hash.SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&(this->ExcludedPackageShortNames).Hash;
        if (FVar9 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar9;
        }
        iVar6 = *(int *)((longlong)FVar11 +
                        (ulonglong)
                        ((this->ExcludedPackageShortNames).HashSize - 1U & FVar3.Number + uVar5) * 4
                        );
        if (iVar6 != -1) {
          lVar1 = *(longlong *)&(this->ExcludedPackageShortNames).Elements;
          do {
            if (*(FName *)(lVar1 + (longlong)iVar6 * 0x10) == FVar3) {
              if (3 < (byte)LogObj._0_1_) {
                ::FName::ToString(&local_res10,&local_38);
                UE::Logging::Private::BasicLog<4>
                          (&`public:_bool___cdecl_FClassExclusionData::IsExcluded(UClass*___ptr64)___ptr64'
                            ::__l14::LOG_Static,(FLogCategoryBase *)&LogObj);
                if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_38.Data.AllocatorInstance.Data);
                }
              }
              goto LAB_1420ff83a;
            }
            iVar6 = *(int *)(lVar1 + 8 + (longlong)iVar6 * 0x10);
          } while (iVar6 != -1);
        }
      }
    }
    lVar1 = param_1->_padding_;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
    if (*(int *)&(this->ExcludedClassNames).Elements.field_0x8 !=
        *(int *)&(this->ExcludedClassNames).Elements.field_0x34) {
      FVar9 = (this->ExcludedClassNames).Hash.SecondaryData;
      FVar11 = (ForElementType<FSetElementId>)&(this->ExcludedClassNames).Hash;
      if (FVar9 != (ForElementType<FSetElementId>)0x0) {
        FVar11 = FVar9;
      }
      iVar6 = *(int *)((longlong)FVar11 +
                      (ulonglong)
                      ((this->ExcludedClassNames).HashSize - 1U &
                      (int)((ulonglong)lVar1 >> 0x20) + uVar5) * 4);
      if (iVar6 != -1) {
        lVar2 = *(longlong *)&(this->ExcludedClassNames).Elements;
        do {
          if (*(longlong *)(lVar2 + (longlong)iVar6 * 0x10) == lVar1) goto LAB_1420ff83a;
          iVar6 = *(int *)(lVar2 + 8 + (longlong)iVar6 * 0x10);
        } while (iVar6 != -1);
      }
    }
    param_1 = (UClass *)param_1->_padding_;
  } while (param_1 != (UClass *)0x0);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&this->CachedIncludeList,&local_res8,(bool *)&local_res10);
LAB_1420ff7ca:
  bVar12 = false;
LAB_1420ff7cc:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar12;
LAB_1420ff83a:
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&this->CachedExcludeList,&local_res8,(bool *)&local_res10);
LAB_1420ff84f:
  bVar12 = true;
  goto LAB_1420ff7cc;
}

// UpdateExclusionList @ 1421182b0

void __thiscall
FClassExclusionData::UpdateExclusionList
          (FClassExclusionData *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar2;
  int iVar3;
  bool bVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FName local_res20;
  FName local_48 [2];
  
  lpCriticalSection = &this->ExclusionListCrit;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Empty
            (&this->ExcludedClassNames,param_1->ArrayNum);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Empty
            (&this->ExcludedPackageShortNames,param_2->ArrayNum);
  pTVar2 = &this->CachedIncludeList;
  bVar4 = 1 < (this->CachedIncludeList).HashSize;
  if (!bVar4) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(pTVar2);
  }
  puVar1 = &(this->CachedIncludeList).Elements.field_0xc;
  *(undefined4 *)&(this->CachedIncludeList).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CachedIncludeList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedIncludeList).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->CachedIncludeList).Elements.field_0x2c;
  *(undefined4 *)&(this->CachedIncludeList).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->CachedIncludeList).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->CachedIncludeList).Elements.field_0x10,0);
  }
  if (bVar4) {
    (this->CachedIncludeList).HashSize = 1;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(pTVar2);
  }
  pTVar2 = &this->CachedExcludeList;
  bVar4 = 1 < (this->CachedExcludeList).HashSize;
  if (!bVar4) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(pTVar2);
  }
  puVar1 = &(this->CachedExcludeList).Elements.field_0xc;
  *(undefined4 *)&(this->CachedExcludeList).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CachedExcludeList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedExcludeList).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->CachedExcludeList).Elements.field_0x2c;
  *(undefined4 *)&(this->CachedExcludeList).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->CachedExcludeList).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->CachedExcludeList).Elements.field_0x10,0);
  }
  if (bVar4) {
    (this->CachedExcludeList).HashSize = 1;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(pTVar2);
  }
  iVar3 = param_1->ArrayNum;
  pFVar8 = (param_1->AllocatorInstance).Data;
  pFVar7 = pFVar8 + (longlong)iVar3 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar7) break;
    if (*(int *)(pFVar8 + 8) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = *(wchar_t **)pFVar8;
    }
    pFVar5 = ::FName::FName(local_48,pwVar6);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (&this->ExcludedClassNames,&local_res20,(bool *)pFVar5);
    pFVar8 = pFVar8 + 0x10;
  }
  iVar3 = param_2->ArrayNum;
  pFVar8 = (param_2->AllocatorInstance).Data;
  pFVar7 = pFVar8 + (longlong)iVar3 * 0x10;
  while( true ) {
    if (param_2->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar7) break;
    if (*(int *)(pFVar8 + 8) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = *(wchar_t **)pFVar8;
    }
    pFVar5 = ::FName::FName(local_48,pwVar6);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (&this->ExcludedPackageShortNames,&local_res20,(bool *)pFVar5);
    pFVar8 = pFVar8 + 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x00014211850a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

