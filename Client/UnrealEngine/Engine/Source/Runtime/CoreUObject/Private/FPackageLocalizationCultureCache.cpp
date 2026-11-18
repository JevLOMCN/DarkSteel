// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// FPackageLocalizationCultureCache @ 141e85d20

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FPackageLocalizationCultureCache * __thiscall
FPackageLocalizationCultureCache::FPackageLocalizationCultureCache
          (FPackageLocalizationCultureCache *this,FPackageLocalizationCache *param_1,
          FString *param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  FInternationalization *this_00;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FPackageLocalizationCultureCache *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  FString local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  this->OwnerCache = param_1;
  (this->PrioritizedCultureNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &this->PrioritizedCultureNames;
  (this->PrioritizedCultureNames).ArrayNum = 0;
  (this->PrioritizedCultureNames).ArrayMax = 0;
  (this->PrioritizedCultureNamesAndVerseIdentifiers).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrioritizedCultureNamesAndVerseIdentifiers).ArrayNum = 0;
  (this->PrioritizedCultureNamesAndVerseIdentifiers).ArrayMax = 0;
  (this->PendingSourceRootPathsToSearch).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingSourceRootPathsToSearch).ArrayNum = 0;
  (this->PendingSourceRootPathsToSearch).ArrayMax = 0;
  *(undefined8 *)&this->SourcePathsToLocalizedPaths = 0;
  *(undefined8 *)&(this->SourcePathsToLocalizedPaths).field_0x8 = 0;
  *(undefined8 *)&(this->SourcePathsToLocalizedPaths).field_0x20 = 0;
  *(undefined4 *)&(this->SourcePathsToLocalizedPaths).field_0x28 = 0;
  *(undefined4 *)&(this->SourcePathsToLocalizedPaths).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourcePathsToLocalizedPaths).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourcePathsToLocalizedPaths).field_0x34 = 0;
  *(undefined8 *)&(this->SourcePathsToLocalizedPaths).field_0x40 = 0;
  *(undefined4 *)&(this->SourcePathsToLocalizedPaths).field_0x48 = 0;
  *(undefined8 *)&this->SourcePackagesToLocalizedPackages = 0;
  *(undefined8 *)&(this->SourcePackagesToLocalizedPackages).field_0x8 = 0;
  *(undefined8 *)&(this->SourcePackagesToLocalizedPackages).field_0x20 = 0;
  *(undefined4 *)&(this->SourcePackagesToLocalizedPackages).field_0x28 = 0;
  *(undefined4 *)&(this->SourcePackagesToLocalizedPackages).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourcePackagesToLocalizedPackages).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourcePackagesToLocalizedPackages).field_0x34 = 0;
  *(undefined8 *)&(this->SourcePackagesToLocalizedPackages).field_0x40 = 0;
  *(undefined4 *)&(this->SourcePackagesToLocalizedPackages).field_0x48 = 0;
  this_00 = FInternationalization::Get();
  pTVar5 = FInternationalization::GetPrioritizedCultureNames(this_00,&local_38,param_2);
  if (pTVar1 != pTVar5) {
    DestructItems<FString,int>
              ((FString *)(pTVar1->AllocatorInstance).Data,(this->PrioritizedCultureNames).ArrayNum)
    ;
    pFVar9 = (pTVar1->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PrioritizedCultureNames).ArrayNum = pTVar5->ArrayNum;
    (this->PrioritizedCultureNames).ArrayMax = pTVar5->ArrayMax;
    pTVar5->ArrayNum = 0;
    pTVar5->ArrayMax = 0;
  }
  DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  iVar2 = (this->PrioritizedCultureNames).ArrayNum;
  pFVar9 = (pTVar1->AllocatorInstance).Data;
  pFVar8 = pFVar9 + (longlong)iVar2 * 0x10;
  do {
    if ((this->PrioritizedCultureNames).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (pFVar9 == pFVar8) {
      return this;
    }
    FCulture::CultureNameToVerseIdentifier(&local_48,(FString *)pFVar9);
    iVar4 = *(int *)(pFVar9 + 8);
    if (iVar4 == local_48.Data.ArrayNum) {
      if (1 < iVar4) {
        iVar4 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)&pFVar9->field_0x0,
                           (wchar_t *)local_48.Data.AllocatorInstance.Data);
        bVar10 = iVar4 == 0;
        goto LAB_141e85edb;
      }
    }
    else {
      bVar10 = iVar4 + local_48.Data.ArrayNum == 1;
LAB_141e85edb:
      if (!bVar10) {
        pFVar7 = (this->PrioritizedCultureNamesAndVerseIdentifiers).AllocatorInstance.Data;
        if ((pFVar7 <= (FScriptContainerElement *)&local_48) &&
           ((FScriptContainerElement *)&local_48 <
            pFVar7 + (longlong)(this->PrioritizedCultureNamesAndVerseIdentifiers).ArrayMax * 0x10))
        {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar10) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FPackageLocalizationCultureCache *)(*pcVar3)();
            return pFVar6;
          }
        }
        iVar4 = (this->PrioritizedCultureNamesAndVerseIdentifiers).ArrayNum;
        if (iVar4 == (this->PrioritizedCultureNamesAndVerseIdentifiers).ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->PrioritizedCultureNamesAndVerseIdentifiers).
                                    AllocatorInstance,
                             &(this->PrioritizedCultureNamesAndVerseIdentifiers).ArrayMax);
        }
        (this->PrioritizedCultureNamesAndVerseIdentifiers).ArrayNum = iVar4 + 1;
        pFVar7 = (this->PrioritizedCultureNamesAndVerseIdentifiers).AllocatorInstance.Data +
                 (longlong)iVar4 * 0x10;
        *(undefined8 *)pFVar7 = 0;
        *(FScriptContainerElement **)pFVar7 = local_48.Data.AllocatorInstance.Data;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar7 + 8) = local_48.Data.ArrayNum;
        *(int *)(pFVar7 + 0xc) = local_48.Data.ArrayMax;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
      }
    }
    pFVar7 = (this->PrioritizedCultureNamesAndVerseIdentifiers).AllocatorInstance.Data;
    if ((pFVar7 <= pFVar9) &&
       (pFVar9 < pFVar7 + (longlong)(this->PrioritizedCultureNamesAndVerseIdentifiers).ArrayMax *
                          0x10)) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FPackageLocalizationCultureCache *)(*pcVar3)();
        return pFVar6;
      }
    }
    iVar4 = (this->PrioritizedCultureNamesAndVerseIdentifiers).ArrayNum;
    if (iVar4 == (this->PrioritizedCultureNamesAndVerseIdentifiers).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->PrioritizedCultureNamesAndVerseIdentifiers).AllocatorInstance
                         ,&(this->PrioritizedCultureNamesAndVerseIdentifiers).ArrayMax);
    }
    (this->PrioritizedCultureNamesAndVerseIdentifiers).ArrayNum = iVar4 + 1;
    ::FString::FString((FString *)
                       ((this->PrioritizedCultureNamesAndVerseIdentifiers).AllocatorInstance.Data +
                       (longlong)iVar4 * 0x10),(FString *)pFVar9);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

// ~FPackageLocalizationCultureCache @ 141e87d70

void __thiscall
FPackageLocalizationCultureCache::~FPackageLocalizationCultureCache
          (FPackageLocalizationCultureCache *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->SourcePackagesToLocalizedPackages).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SourcePackagesToLocalizedPackages).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SourcePackagesToLocalizedPackages);
  *(undefined4 *)&(this->SourcePathsToLocalizedPaths).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SourcePathsToLocalizedPaths).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SourcePathsToLocalizedPaths);
  DestructItems<FString,int>
            ((FString *)(this->PendingSourceRootPathsToSearch).AllocatorInstance.Data,
             (this->PendingSourceRootPathsToSearch).ArrayNum);
  pFVar2 = (this->PendingSourceRootPathsToSearch).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->PrioritizedCultureNamesAndVerseIdentifiers).AllocatorInstance.Data,
             (this->PrioritizedCultureNamesAndVerseIdentifiers).ArrayNum);
  pFVar2 = (this->PrioritizedCultureNamesAndVerseIdentifiers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->PrioritizedCultureNames).AllocatorInstance.Data,
             (this->PrioritizedCultureNames).ArrayNum);
  pFVar2 = (this->PrioritizedCultureNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000141e87e23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// AddPackage @ 141e8ebc0

bool __thiscall
FPackageLocalizationCultureCache::AddPackage
          (FPackageLocalizationCultureCache *this,FString *param_1)

{
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  FName FVar5;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  ForAnyElementType FVar12;
  undefined1 *puVar13;
  FName *pFVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  void *_Src;
  uint uVar18;
  undefined8 *puVar19;
  int iVar20;
  uint *puVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  wchar_t *pwVar23;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  FString local_118;
  FName local_108;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_c8;
  TBitArray<FDefaultBitArrayAllocator> *local_c0;
  FName *local_b8;
  FName local_b0;
  FString local_a8;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  
  local_68 = (param_1->Data).AllocatorInstance.Data;
  iVar20 = (param_1->Data).ArrayNum;
  iStack_60 = iVar20 + -1;
  if (iVar20 == 0) {
    iStack_60 = 0;
  }
  local_58._12_4_ = uStack_5c;
  local_58.Size = iStack_60;
  local_58.DataPtr = (wchar_t *)local_68;
  bVar7 = FPackageName::IsLocalizedPackage(&local_58);
  if (!bVar7) {
    return false;
  }
  if (this == (FPackageLocalizationCultureCache *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->SourcePathsToLocalizedPaths).field_0x10;
  iStack_f8 = 0;
  iVar20 = *(int *)&(this->SourcePathsToLocalizedPaths).field_0x28;
  local_100 = &this->SourcePathsToLocalizedPaths;
  uStack_f4 = 1;
  local_e0 = 0;
  iStack_e4 = 0;
  if (iVar20 != 0) {
    puVar21 = *(uint **)&(this->SourcePathsToLocalizedPaths).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)pTVar22;
    }
    uVar18 = *puVar21;
    while (uVar18 == 0) {
      lVar10 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar20;
      if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_141e8ecdd;
      uVar18 = puVar21[lVar10 + 1];
    }
    uStack_f4 = -uVar18 & uVar18;
    uVar2 = (ulonglong)uStack_f4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_d0 = (int)lVar10;
    iStack_e4 = local_e0 + -1 + local_d0;
    if (iVar20 < iStack_e4) {
      iStack_e4 = iVar20;
    }
  }
LAB_141e8ecdd:
  uVar18 = *(uint *)&(this->SourcePathsToLocalizedPaths).field_0x28;
  iStack_d8 = *(int *)&(this->SourcePathsToLocalizedPaths).field_0x8 -
              *(int *)&(this->SourcePathsToLocalizedPaths).field_0x34;
  uVar17 = uVar18 & 0xffffffe0;
  uStack_e8 = 0xffffffff;
  pwVar23 = L"";
  TStack_90._padding_ = CONCAT44(uStack_f4,iStack_f8);
  TStack_90.CurrentBitIndex = iStack_e4;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar18 >> 5;
  TStack_90._28_4_ = iStack_e4;
  TStack_90.BaseBitIndex = local_e0;
  uStack_70 = CONCAT44(uStack_d4,iStack_d8);
  local_f0 = (undefined1 *)pTVar22;
  iStack_dc = iStack_e4;
  local_c8 = local_100;
  local_c0 = pTVar22;
  local_98 = local_100;
  TStack_90.Array = pTVar22;
  if ((((int)uVar18 < 0) || (iVar20 < (int)uVar18)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  uVar3 = *(uint *)&(this->SourcePathsToLocalizedPaths).field_0x28;
  if (uVar18 != uVar3) {
    puVar13 = *(undefined1 **)&(this->SourcePathsToLocalizedPaths).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = (undefined1 *)pTVar22;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      lVar10 = (longlong)iVar15;
      uVar17 = uVar17 + 0x20;
      iVar15 = iVar15 + 1;
      uVar18 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_141e8edf0;
      uVar18 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar18 = (int)lVar10 + -1 + uVar17;
    if ((int)uVar3 < (int)uVar18) {
      uVar18 = uVar3;
    }
  }
LAB_141e8edf0:
  while( true ) {
    pTVar6 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_90.CurrentBitIndex == uVar18) && (TStack_90.Array == pTVar22)) &&
       (pTVar6 == local_c8)) break;
    lVar10 = *(longlong *)pTVar6;
    iVar20 = *(int *)(lVar10 + 0x18 + (longlong)TStack_90.CurrentBitIndex * 0x28);
    puVar1 = (undefined8 *)(lVar10 + (longlong)TStack_90.CurrentBitIndex * 0x28);
    puVar16 = (undefined8 *)puVar1[2];
    puVar19 = puVar16 + (longlong)iVar20 * 2;
    while( true ) {
      if (*(int *)(puVar1 + 3) != iVar20) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (puVar16 == puVar19) break;
      iVar15 = *(int *)(puVar16 + 1) + -1;
      if (*(int *)(puVar16 + 1) == 0) {
        iVar15 = 0;
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)*puVar16;
      }
      bVar7 = ::FString::StartsWith(param_1,pwVar11,iVar15,IgnoreCase);
      if (bVar7) {
        iVar20 = *(int *)(puVar16 + 1);
        if (iVar20 == 0) {
          iVar20 = 1;
        }
        ::FString::RightChop(param_1,&local_a8,iVar20);
        iVar20 = *(int *)(puVar1 + 1);
        iVar15 = local_a8.Data.ArrayNum + -1;
        if (local_a8.Data.ArrayNum == 0) {
          iVar15 = 0;
        }
        local_118.Data.ArrayNum = iVar20;
        if ((iVar20 == 0) && (iVar15 != -1)) {
          _Src = (void *)*puVar1;
          iVar9 = iVar15 + 2;
LAB_141e8ef0f:
          local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (iVar9 != 0) goto LAB_141e8ef1a;
          local_118.Data.ArrayMax = 0;
        }
        else {
          _Src = (void *)*puVar1;
          iVar9 = iVar15 + 1;
          if (iVar20 == 0) goto LAB_141e8ef0f;
LAB_141e8ef1a:
          local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          uVar18 = iVar20 + iVar9;
          if ((int)uVar18 < iVar20) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
          }
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar18,0,(ForAnyElementType *)&local_118,iVar20,&local_118.Data.ArrayMax);
          if (iVar20 != 0) {
            memcpy(local_118.Data.AllocatorInstance.Data,_Src,(longlong)iVar20 * 2);
          }
        }
        ::FString::PathAppend(&local_118,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar15);
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_118.Data.ArrayNum != 0) {
          FVar12.Data = local_118.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_108,(wchar_t *)FVar12.Data);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        FVar5 = local_108;
        this_00 = &this->SourcePackagesToLocalizedPackages;
        uVar18 = ::GetTypeHash(local_108.ComparisonIndex.Value);
        uVar18 = uVar18 + FVar5.Number;
        if (*(int *)&(this->SourcePackagesToLocalizedPackages).field_0x8 ==
            *(int *)&(this->SourcePackagesToLocalizedPackages).field_0x34) goto LAB_141e8f020;
        puVar13 = *(undefined1 **)&(this->SourcePackagesToLocalizedPackages).field_0x40;
        if (puVar13 == (undefined1 *)0x0) {
          puVar13 = &(this->SourcePackagesToLocalizedPackages).field_0x38;
        }
        uVar17 = *(uint *)(puVar13 +
                          (ulonglong)
                          (*(int *)&(this->SourcePackagesToLocalizedPackages).field_0x48 - 1U &
                          uVar18) * 4);
        if (uVar17 == 0xffffffff) goto LAB_141e8f020;
        goto LAB_141e8f000;
      }
      puVar16 = puVar16 + 2;
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    pTVar22 = local_c0;
  }
  bVar7 = false;
  goto LAB_141e8f075;
  while (uVar17 = pFVar14[3].ComparisonIndex.Value, uVar17 != 0xffffffff) {
LAB_141e8f000:
    pFVar14 = (FName *)((longlong)(int)uVar17 * 0x20 + *(longlong *)&this_00->field_0x0);
    if (*pFVar14 == local_108) {
      if (pFVar14 != (FName *)0x0) goto LAB_141e8f04c;
      break;
    }
  }
LAB_141e8f020:
  local_b8 = &local_108;
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res20,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar18,
             (bool *)&local_b8);
  pFVar14 = (FName *)((longlong)local_res20[0] * 0x20 + *(longlong *)&this_00->field_0x0);
LAB_141e8f04c:
  if ((param_1->Data).ArrayNum != 0) {
    pwVar23 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_b0,pwVar23);
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar14 + 1),&local_b0);
  bVar7 = true;
LAB_141e8f075:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return bVar7;
}

// AddRootSourcePath @ 141e8f280

void __thiscall
FPackageLocalizationCultureCache::AddRootSourcePath
          (FPackageLocalizationCultureCache *this,FString *param_1)

{
  if (this != (FPackageLocalizationCultureCache *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
              (&this->PendingSourceRootPathsToSearch,param_1);
                    /* WARNING: Could not recover jumptable at 0x000141e8f2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConditionalUpdateCache @ 141e92560

void __thiscall
FPackageLocalizationCultureCache::ConditionalUpdateCache(FPackageLocalizationCultureCache *this)

{
  if (this != (FPackageLocalizationCultureCache *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    ConditionalUpdateCache_NoLock(this);
                    /* WARNING: Could not recover jumptable at 0x000141e92584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ConditionalUpdateCache_NoLock @ 141e925c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPackageLocalizationCultureCache::ConditionalUpdateCache_NoLock
          (FPackageLocalizationCultureCache *this)

{
  int *piVar1;
  void *_Src;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined8 uVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStackY_168 [32];
  undefined1 local_118;
  undefined1 local_117 [7];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_110;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_100;
  int local_f0;
  uint local_ec;
  uint local_e8;
  LARGE_INTEGER local_e0;
  FScriptContainerElement *local_d8;
  FPackageLocalizationCultureCache *local_d0;
  FScriptContainerElement *local_c8;
  FScriptContainerElement *local_c0;
  LARGE_INTEGER local_b8;
  FScopedBootTiming local_b0;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if ((this->PendingSourceRootPathsToSearch).ArrayNum != 0) {
    bVar18 = -1 < CpuChannel->Enabled;
    local_d0 = this;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId42,
                 "FPackageLocalizationCultureCache::ConditionalUpdateCache_NoLock",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Internationalization\\PackageLocalizationCache.cpp"
                 ,0x2a);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId42);
    }
    FScopedBootTiming::FScopedBootTiming
              (&local_b0,"FPackageLocalizationCultureCache::ConditionalUpdateCache_NoLock");
    QueryPerformanceCounter(&local_e0);
    local_e8 = (this->PendingSourceRootPathsToSearch).ArrayNum;
    uVar8 = (ulonglong)(int)local_e8;
    pTVar9 = &this->PendingSourceRootPathsToSearch;
    pFVar16 = (pTVar9->AllocatorInstance).Data;
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    local_c0 = pFVar16 + uVar8 * 0x10;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    while( true ) {
      pFVar17 = local_c0;
      if (pTVar9->ArrayNum != (int)uVar8) {
        local_118 = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_118);
      }
      if (pFVar16 == pFVar17) break;
      if (*(int *)(pFVar16 + 8) == 0) {
        pwVar11 = L"";
        iVar7 = 0;
      }
      else {
        pwVar11 = *(wchar_t **)&pFVar16->field_0x0;
        iVar7 = *(int *)(pFVar16 + 8) + -1;
      }
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar11);
      pTVar9 = TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
               ::FindOrAddImpl<FString_const_&>
                         ((TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                           *)&this->SourcePathsToLocalizedPaths,uVar5,(FString *)pFVar16);
      pFVar17 = (this->PrioritizedCultureNamesAndVerseIdentifiers).AllocatorInstance.Data;
      local_ec = (this->PrioritizedCultureNamesAndVerseIdentifiers).ArrayNum;
      uVar8 = (ulonglong)(int)local_ec;
      local_c8 = pFVar17 + uVar8 * 0x10;
      while( true ) {
        pFVar14 = local_c8;
        if ((this->PrioritizedCultureNamesAndVerseIdentifiers).ArrayNum != (int)uVar8) {
          local_117[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_117);
        }
        if (pFVar17 == pFVar14) break;
        local_100.ArrayNum = *(int *)(pFVar16 + 8);
        lVar13 = (longlong)local_100.ArrayNum;
        local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_100.ArrayNum == 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,6,0,&local_100.AllocatorInstance,0,&local_100.ArrayMax);
        }
        else {
          _Src = *(void **)&pFVar16->field_0x0;
          uVar5 = local_100.ArrayNum + 5;
          if ((int)uVar5 < local_100.ArrayNum) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
          }
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar5,0,&local_100.AllocatorInstance,local_100.ArrayNum,&local_100.ArrayMax
                    );
          memcpy(local_100.AllocatorInstance.Data,_Src,lVar13 * 2);
        }
        ::FString::PathAppend((FString *)&local_100,L"L10N",4);
        iVar7 = *(int *)(pFVar17 + 8) + -1;
        if (*(int *)(pFVar17 + 8) == 0) {
          iVar7 = 0;
        }
        if ((local_100.ArrayNum != 0) || (iVar6 = 1, iVar7 + 1 == 0)) {
          iVar6 = 0;
        }
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::
        TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                  (&local_110,&local_100,iVar6 + iVar7 + 1);
        ::FString::PathAppend((FString *)&local_110,*(wchar_t **)pFVar17,iVar7);
        if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.AllocatorInstance.Data);
        }
        pFVar14 = (pTVar9->AllocatorInstance).Data;
        pFVar12 = pFVar14 + (longlong)pTVar9->ArrayNum * 0x10;
        uVar10 = local_110._8_8_;
        for (; pFVar14 != pFVar12; pFVar14 = pFVar14 + 0x10) {
          iVar7 = *(int *)(pFVar14 + 8);
          if (iVar7 == (int)uVar10) {
            if (iVar7 < 2) goto LAB_141e92b04;
            iVar7 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)pFVar14,(wchar_t *)local_110.AllocatorInstance.Data);
            bVar19 = iVar7 == 0;
            uVar10 = local_110._8_8_;
          }
          else {
            bVar19 = iVar7 + (int)uVar10 == 1;
          }
          if (bVar19) goto LAB_141e92b04;
        }
        pTVar2 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pTVar9->AllocatorInstance).Data;
        if (((pTVar2 <= &local_110) && (&local_110 < pTVar2 + pTVar9->ArrayMax)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = pTVar9->ArrayNum;
        if (iVar7 == pTVar9->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
        }
        FVar4.Data = local_110.AllocatorInstance.Data;
        pFVar14 = (pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
        pTVar9->ArrayNum = iVar7 + 1;
        *(undefined8 *)&pFVar14->field_0x0 = 0;
        iVar7 = local_110.ArrayNum;
        *(int *)&pFVar14[8].field_0x0 = iVar7;
        if (iVar7 == 0) {
          *(int *)(pFVar14 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar7,0,(ForAnyElementType *)pFVar14,iVar7,(int *)(pFVar14 + 0xc));
          memcpy(*(void **)&pFVar14->field_0x0,FVar4.Data,(longlong)iVar7 * 2);
        }
        if (*(int *)(pFVar16 + 8) == 0) {
          pwVar11 = L"";
          iVar7 = 0;
        }
        else {
          pwVar11 = *(wchar_t **)&pFVar16->field_0x0;
          iVar7 = *(int *)(pFVar16 + 8) + -1;
        }
        uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar11);
        iVar7 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>(&local_98,uVar5,(FString *)pFVar16);
        if ((iVar7 == -1) ||
           (lVar13 = local_98.Elements._0_8_ + (longlong)iVar7 * 0x28, lVar13 == 0)) {
          local_d8 = pFVar16;
          TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                    (&local_98,(uint)&local_f0,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar5,
                     (bool *)&local_d8);
          lVar13 = local_98.Elements._0_8_ + (longlong)local_f0 * 0x28;
        }
        if (((*(TArray<wchar_t,TSizedDefaultAllocator<32>_> **)(lVar13 + 0x10) <= &local_110) &&
            (&local_110 <
             *(TArray<wchar_t,TSizedDefaultAllocator<32>_> **)(lVar13 + 0x10) +
             *(int *)(lVar13 + 0x1c))) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = *(int *)(lVar13 + 0x18);
        if (iVar7 == *(int *)(lVar13 + 0x1c)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)(lVar13 + 0x10),(int *)(lVar13 + 0x1c));
        }
        FVar4.Data = local_110.AllocatorInstance.Data;
        *(int *)(lVar13 + 0x18) = iVar7 + 1;
        pFVar15 = (ForAnyElementType *)(*(longlong *)(lVar13 + 0x10) + (longlong)iVar7 * 0x10);
        pFVar15->Data = (FScriptContainerElement *)0x0;
        piVar1 = (int *)((longlong)&pFVar15[1].Data + 4);
        iVar7 = local_110.ArrayNum;
        *(int *)&pFVar15[1].Data = iVar7;
        if (iVar7 == 0) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar7,0,pFVar15,iVar7,piVar1);
          memcpy(pFVar15->Data,FVar4.Data,(longlong)iVar7 * 2);
        }
LAB_141e92b04:
        if (5 < (byte)LogPackageLocalizationCache._0_1_) {
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogPackageLocalizationCache);
        }
        if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.AllocatorInstance.Data);
        }
        pFVar17 = pFVar17 + 0x10;
        uVar8 = (ulonglong)local_ec;
        this = local_d0;
      }
      pTVar9 = &this->PendingSourceRootPathsToSearch;
      uVar8 = (ulonglong)local_e8;
      pFVar16 = pFVar16 + 0x10;
    }
    (**(code **)(this->OwnerCache->_padding_ + 0x28))(this->OwnerCache,&local_98);
    if (4 < (byte)LogPackageLocalizationCache._0_1_) {
      QueryPerformanceCounter(&local_b8);
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&LogPackageLocalizationCache);
    }
    DestructItems<FString,int>((FString *)(pTVar9->AllocatorInstance).Data,pTVar9->ArrayNum);
    pTVar9->ArrayNum = 0;
    if (pTVar9->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar9->AllocatorInstance,0,&pTVar9->ArrayMax);
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
    FScopedBootTiming::~FScopedBootTiming(&local_b0);
    if (bVar18) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// Empty @ 141e97d70

void __thiscall FPackageLocalizationCultureCache::Empty(FPackageLocalizationCultureCache *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  int iVar3;
  bool bVar4;
  
  if (this == (FPackageLocalizationCultureCache *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  DestructItems<FString,int>
            ((FString *)(this->PendingSourceRootPathsToSearch).AllocatorInstance.Data,
             (this->PendingSourceRootPathsToSearch).ArrayNum);
  piVar1 = &(this->PendingSourceRootPathsToSearch).ArrayMax;
  (this->PendingSourceRootPathsToSearch).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->PendingSourceRootPathsToSearch).AllocatorInstance,0,piVar1);
  }
  bVar4 = 1 < *(int *)&(this->SourcePathsToLocalizedPaths).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->SourcePathsToLocalizedPaths);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->SourcePathsToLocalizedPaths,0,
                    *(int *)&(this->SourcePathsToLocalizedPaths).field_0x8);
  puVar2 = &(this->SourcePathsToLocalizedPaths).field_0xc;
  *(undefined4 *)&(this->SourcePathsToLocalizedPaths).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)&this->SourcePathsToLocalizedPaths,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->SourcePathsToLocalizedPaths).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourcePathsToLocalizedPaths).field_0x34 = 0;
  iVar3 = *(int *)&(this->SourcePathsToLocalizedPaths).field_0x2c;
  *(undefined4 *)&(this->SourcePathsToLocalizedPaths).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->SourcePathsToLocalizedPaths).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->SourcePathsToLocalizedPaths).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->SourcePathsToLocalizedPaths).field_0x48 = 1;
    TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->SourcePathsToLocalizedPaths);
  }
  this_00 = &this->SourcePackagesToLocalizedPackages;
  bVar4 = 1 < *(int *)&(this->SourcePackagesToLocalizedPackages).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->SourcePackagesToLocalizedPackages).field_0x8);
  puVar2 = &(this->SourcePackagesToLocalizedPackages).field_0xc;
  *(undefined4 *)&(this->SourcePackagesToLocalizedPackages).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->SourcePackagesToLocalizedPackages).field_0x34 = 0;
  *(undefined4 *)&(this->SourcePackagesToLocalizedPackages).field_0x30 = 0xffffffff;
  iVar3 = *(int *)&(this->SourcePackagesToLocalizedPackages).field_0x2c;
  *(undefined4 *)&(this->SourcePackagesToLocalizedPackages).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->SourcePackagesToLocalizedPackages).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->SourcePackagesToLocalizedPackages).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->SourcePackagesToLocalizedPackages).field_0x48 = 1;
    TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this_00);
  }
                    /* WARNING: Could not recover jumptable at 0x000141e97f19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// FindLocalizedPackageName @ 141e9b360

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
FPackageLocalizationCultureCache::FindLocalizedPackageName
          (FPackageLocalizationCultureCache *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  FName *pFVar5;
  undefined1 *puVar6;
  FName *pFVar7;
  FName in_R8;
  FName *pFVar8;
  FName local_res18;
  FString local_28;
  FString local_18;
  
  if (this == (FPackageLocalizationCultureCache *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  local_res18 = in_R8;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  ConditionalUpdateCache_NoLock(this);
  uVar3 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
  pFVar8 = (FName *)0x0;
  if (*(int *)&(this->SourcePackagesToLocalizedPackages).field_0x8 !=
      *(int *)&(this->SourcePackagesToLocalizedPackages).field_0x34) {
    puVar6 = *(undefined1 **)&(this->SourcePackagesToLocalizedPackages).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->SourcePackagesToLocalizedPackages).field_0x38;
    }
    uVar3 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(this->SourcePackagesToLocalizedPackages).field_0x48 - 1U &
                               local_res18.Number + uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pFVar5 = (FName *)((longlong)(int)uVar3 * 0x20 +
                          *(longlong *)&this->SourcePackagesToLocalizedPackages);
        if (*pFVar5 == local_res18) {
          pFVar7 = pFVar5 + 1;
          if (pFVar5 == (FName *)0x0) {
            pFVar7 = pFVar8;
          }
          pFVar8 = (FName *)0x0;
          if (pFVar7 != (FName *)0x0) {
            if (((int)pFVar7[1].ComparisonIndex.Value < 1) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              FVar4 = (FName)(*pcVar1)();
              return FVar4;
            }
            pFVar8 = *(FName **)*pFVar7;
          }
          break;
        }
        uVar3 = pFVar5[3].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  *(FName **)param_1 = pFVar8;
  if ((5 < (byte)LogPackageLocalizationCache._0_1_) && (pFVar8 != (FName *)0x0)) {
    ::FName::ToString(&local_res18,&local_18);
    ::FName::ToString((FName *)param_1,&local_28);
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&LogPackageLocalizationCache);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return param_1;
}

// RemovePackage @ 141eb55f0

bool __thiscall
FPackageLocalizationCultureCache::RemovePackage
          (FPackageLocalizationCultureCache *this,FString *param_1)

{
  FName FVar1;
  code *pcVar2;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FName FVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  int iVar10;
  FName *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  ulonglong uVar21;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  undefined1 local_res18 [8];
  uint local_res20;
  FName local_f8 [2];
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_e8;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  int local_ac;
  FName *local_a8;
  TBitArray<FDefaultBitArrayAllocator> *local_a0;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FName local_58 [2];
  TStringView<wchar_t> local_48;
  ulonglong uVar16;
  
  if (this == (FPackageLocalizationCultureCache *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  local_68 = (param_1->Data).AllocatorInstance.Data;
  iVar6 = (param_1->Data).ArrayNum;
  iVar18 = 0;
  iStack_60 = iVar6 + -1;
  if (iVar6 == 0) {
    iStack_60 = iVar18;
  }
  local_48._12_4_ = uStack_5c;
  local_48.Size = iStack_60;
  local_48.DataPtr = (wchar_t *)local_68;
  bVar4 = FPackageName::IsLocalizedPackage(&local_48);
  iVar6 = (param_1->Data).ArrayNum;
  if (bVar4) {
    if (iVar6 == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    ::FName::FName(local_f8,pwVar9);
    pTVar22 = &this->SourcePackagesToLocalizedPackages;
    iVar6 = *(int *)&(this->SourcePackagesToLocalizedPackages).field_0x28;
    local_d0 = &(this->SourcePackagesToLocalizedPackages).field_0x10;
    uStack_d4 = 1;
    iStack_c4 = iVar18;
    iStack_d8 = 0;
    if (iVar6 != 0) {
      puVar19 = *(uint **)&(this->SourcePackagesToLocalizedPackages).field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)local_d0;
      }
      uVar14 = *puVar19;
      iVar18 = 0;
      while (uVar14 == 0) {
        lVar8 = (longlong)iStack_d8;
        iVar18 = iVar18 + 0x20;
        iStack_d8 = iStack_d8 + 1;
        iStack_c4 = iVar6;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_141eb570e;
        uVar14 = puVar19[lVar8 + 1];
      }
      uStack_d4 = -uVar14 & uVar14;
      uVar12 = (ulonglong)uStack_d4 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_b0 = (int)lVar8;
      iStack_c4 = iVar18 + -1 + local_b0;
      if (iVar6 < iStack_c4) {
        iStack_c4 = iVar6;
      }
    }
LAB_141eb570e:
    uVar14 = *(uint *)&(this->SourcePackagesToLocalizedPackages).field_0x28;
    uVar13 = uVar14 & 0xffffffe0;
    pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)
              &(this->SourcePackagesToLocalizedPackages).field_0x10;
    iStack_b8 = *(int *)&(this->SourcePackagesToLocalizedPackages).field_0x8 -
                *(int *)&(this->SourcePackagesToLocalizedPackages).field_0x34;
    uStack_c8 = 0xffffffff;
    TStack_90.CurrentBitIndex = iStack_c4;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    TStack_90._padding_ = CONCAT44(uStack_d4,iStack_d8);
    iVar10 = (int)uVar14 >> 5;
    TStack_90._28_4_ = iStack_c4;
    TStack_90.BaseBitIndex = iVar18;
    uStack_70 = CONCAT44(uStack_b4,iStack_b8);
    local_res20 = uVar14;
    local_e8 = pTVar22;
    local_e0 = pTVar22;
    local_c0 = iVar18;
    iStack_bc = iStack_c4;
    local_a0 = pTVar23;
    local_98 = pTVar22;
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_d0;
    if ((((int)uVar14 < 0) || (iVar6 < (int)uVar14)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    uVar15 = *(uint *)&(this->SourcePackagesToLocalizedPackages).field_0x28;
    if (uVar14 != uVar15) {
      puVar17 = *(undefined1 **)&(this->SourcePackagesToLocalizedPackages).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = (undefined1 *)pTVar23;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar10 * 4);
      while (uVar14 == 0) {
        lVar8 = (longlong)iVar10;
        uVar13 = uVar13 + 0x20;
        iVar10 = iVar10 + 1;
        uVar14 = uVar15;
        local_res20 = uVar15;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_141eb5821;
        uVar14 = *(uint *)(puVar17 + lVar8 * 4 + 4);
      }
      uVar12 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_ac = (int)lVar8;
      uVar14 = local_ac + -1 + uVar13;
      local_res20 = uVar14;
      if ((int)uVar15 < (int)uVar14) {
        uVar14 = uVar15;
        local_res20 = uVar15;
      }
    }
LAB_141eb5821:
    do {
      pTVar3 = local_98;
      if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_90.CurrentBitIndex == uVar14) && (TStack_90.Array == pTVar23)) &&
         (pTVar3 == pTVar22)) {
        bVar4 = false;
        goto LAB_141eb59e2;
      }
      pFVar11 = (FName *)(*(longlong *)pTVar3 + (longlong)TStack_90.CurrentBitIndex * 0x20);
      local_a8 = pFVar11;
      if ((((ulonglong)pFVar11[1] <= local_f8) &&
          (local_f8 < (FName *)((longlong)pFVar11[1] + (longlong)(int)pFVar11[2].Number * 8))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      uVar13 = pFVar11[2].ComparisonIndex.Value;
      if (uVar13 != 0) {
        FVar1 = pFVar11[1];
        uVar12 = 0;
        bVar4 = *(FName *)FVar1 != local_f8[0];
        FVar7 = local_f8[0];
        uVar16 = uVar12;
        uVar21 = uVar12;
        do {
          uVar15 = (uint)uVar16;
          uVar14 = uVar15;
          do {
            uVar12 = uVar12 + 1;
            uVar14 = uVar14 + 1;
            uVar16 = (ulonglong)uVar14;
            if ((longlong)(int)uVar13 <= (longlong)uVar12) break;
          } while (bVar4 == (*(FName *)((longlong)FVar1 + uVar12 * 8) != FVar7));
          if (bVar4 != false) {
            uVar20 = (uint)uVar21;
            if (uVar20 != uVar15) {
              memmove((longlong *)((longlong)FVar1 + (longlong)(int)uVar20 * 8),
                      (longlong *)((longlong)FVar1 + (longlong)(int)uVar15 * 8),
                      (longlong)(int)(uVar14 - uVar15) << 3);
              FVar7 = local_f8[0];
            }
            uVar21 = (ulonglong)(uVar20 + (uVar14 - uVar15));
          }
          bVar4 = (bool)(bVar4 ^ 1);
        } while ((longlong)uVar12 < (longlong)(int)uVar13);
        uVar15 = (uint)uVar21;
        local_a8[2].ComparisonIndex.Value = uVar15;
        pTVar22 = local_e8;
        pTVar23 = local_a0;
        uVar14 = local_res20;
        if (0 < (int)(uVar13 - uVar15)) goto LAB_141eb599c;
      }
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    } while( true );
  }
  if (iVar6 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar11 = ::FName::FName(local_58,pwVar9);
  iVar6 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
          ::Remove((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                    *)&this->SourcePackagesToLocalizedPackages,*pFVar11);
  bVar4 = 0 < iVar6;
LAB_141eb59e2:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return bVar4;
LAB_141eb599c:
  if (uVar15 == 0) {
    TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
    ::Remove((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
              *)local_e8,*local_a8);
  }
  bVar4 = true;
  goto LAB_141eb59e2;
}

// RemoveRootSourcePath @ 141eb5a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPackageLocalizationCultureCache::RemoveRootSourcePath
          (FPackageLocalizationCultureCache *this,FString *param_1)

{
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar1;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_9c8 [32];
  FString *local_9a8;
  FScriptContainerElement *local_9a0;
  longlong local_998;
  longlong local_990;
  undefined8 local_988;
  longlong *local_978;
  undefined1 auStack_970 [16];
  uint uStack_960;
  uint uStack_95c;
  longlong local_958;
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_950;
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_948;
  char local_940;
  char cStack_93f;
  longlong *local_938;
  undefined1 auStack_930 [16];
  uint uStack_920;
  uint uStack_91c;
  longlong local_918;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_910;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_908;
  char local_900;
  char cStack_8ff;
  <lambda_1> local_8f8;
  undefined1 local_8f0 [32];
  longlong local_8d0;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_8c8;
  undefined1 local_8c0 [32];
  longlong local_8a0;
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_898;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_9c8;
  if (this == (FPackageLocalizationCultureCache *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pFVar3 = (this->PendingSourceRootPathsToSearch).AllocatorInstance.Data;
  if ((pFVar3 <= param_1) &&
     (lVar8 = (longlong)(this->PendingSourceRootPathsToSearch).ArrayMax,
     param_1 < pFVar3 + lVar8 * 0x10)) {
    local_990 = (longlong)(this->PendingSourceRootPathsToSearch).ArrayNum;
    local_988 = 0x10;
    local_9a8 = param_1;
    local_9a0 = pFVar3;
    local_998 = lVar8;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_8f8.Item = param_1;
  TArray<FString,TSizedDefaultAllocator<32>_>::
  RemoveAll<_TArray<FString,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
            (&this->PendingSourceRootPathsToSearch,&local_8f8);
  pTVar1 = &this->SourcePathsToLocalizedPaths;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_8f0,
             (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_900 = '\0';
  cStack_8ff = '\0';
  iVar13 = 1;
  stack0xfffffffffffff6d8 = local_8f0._16_16_;
  local_938 = (longlong *)local_8f0._0_8_;
  auStack_930._0_8_ = local_8f0._8_8_;
  local_918 = local_8d0;
  pTStack_910 = pTStack_8c8;
  uVar10 = local_8f0._24_8_ >> 0x20;
  local_908 = (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)pTVar1;
  if (local_8f0._28_4_ < *(int *)(local_8f0._16_8_ + 0x18)) {
    do {
      iVar6 = (param_1->Data).ArrayNum;
      if (iVar6 == 0) {
        pwVar9 = L"";
        iVar6 = 0;
      }
      else {
        pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        iVar6 = iVar6 + -1;
      }
      bVar5 = ::FString::StartsWith
                        ((FString *)(*local_938 + (longlong)(int)uVar10 * 0x28),pwVar9,iVar6,
                         IgnoreCase);
      if (bVar5) {
        TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_910,(int)uVar10);
        local_900 = '\x01';
      }
      uStack_920 = uStack_920 & ~auStack_930._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_930);
      uVar10 = (ulonglong)uStack_91c;
    } while ((int)uStack_91c < *(int *)(auStack_930._8_8_ + 0x18));
    if ((local_900 != '\0') && (cStack_8ff != '\0')) {
      uVar12 = *(int *)&(local_908->Elements).field_0x8 - *(int *)&(local_908->Elements).field_0x34;
      if (uVar12 < 4) {
        iVar6 = 1;
      }
      else {
        uVar10 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar8 & 0x1f);
      }
      if (((0 < (int)uVar12) && (local_908->HashSize < iVar6)) || (iVar6 < local_908->HashSize)) {
        local_908->HashSize = iVar6;
        TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_908);
      }
    }
  }
  local_888.Base = local_868;
  local_888.bIsDynamic = false;
  local_888.bIsExternal = false;
  pTVar2 = &this->SourcePackagesToLocalizedPackages;
  local_888.CurPos = local_868;
  local_888.End = local_52;
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_8c0,
             (TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)pTVar2);
  local_940 = '\0';
  cStack_93f = '\0';
  stack0xfffffffffffff698 = local_8c0._16_16_;
  local_978 = (longlong *)local_8c0._0_8_;
  auStack_970._0_8_ = local_8c0._8_8_;
  local_958 = local_8a0;
  pTStack_950 = pTStack_898;
  uVar10 = local_8c0._24_8_ >> 0x20;
  uVar12 = local_8c0._28_4_;
  local_948 = (TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)pTVar2;
  if ((int)uVar12 < *(int *)(local_8c0._16_8_ + 0x18)) {
    do {
      local_888.CurPos = local_888.Base;
      ::FName::AppendString((FName *)((longlong)(int)uVar10 * 0x20 + *local_978),&local_888);
      iVar7 = (param_1->Data).ArrayNum;
      iVar6 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      iVar7 = (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1);
      if (iVar6 < iVar7) {
        iVar7 = iVar6;
      }
      iVar11 = 0;
      if (0 < iVar7) {
        iVar11 = iVar7;
      }
      if ((iVar6 == iVar11) &&
         ((((iVar6 == 0 || (iVar11 == 0)) ||
           (iVar7 = FGenericPlatformStricmp::Strnicmp
                              ((wchar_t *)(param_1->Data).AllocatorInstance.Data,local_888.Base,
                               (longlong)iVar11), iVar7 == 0)) && (iVar6 == iVar11)))) {
        TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_950,uVar12);
        local_940 = '\x01';
      }
      uStack_960 = uStack_960 & ~auStack_970._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_970);
      uVar10 = (ulonglong)uStack_95c;
      uVar12 = uStack_95c;
    } while ((int)uStack_95c < *(int *)(auStack_970._8_8_ + 0x18));
    if ((local_940 != '\0') && (cStack_93f != '\0')) {
      uVar12 = *(int *)&(local_948->Elements).field_0x8 - *(int *)&(local_948->Elements).field_0x34;
      if (3 < uVar12) {
        uVar10 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar13 = 1 << ((byte)lVar8 & 0x1f);
      }
      if (((0 < (int)uVar12) && (local_948->HashSize < iVar13)) || (iVar13 < local_948->HashSize)) {
        local_948->HashSize = iVar13;
        TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_948);
      }
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

