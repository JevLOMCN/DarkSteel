// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// ~FDefaultPackageLocalizationCache @ 141e879b0

void __thiscall
FDefaultPackageLocalizationCache::~FDefaultPackageLocalizationCache
          (FDefaultPackageLocalizationCache *this)

{
  *(undefined ***)this = &___7FDefaultPackageLocalizationCache__6B_;
  FPackageLocalizationCache::~FPackageLocalizationCache((FPackageLocalizationCache *)this);
  return;
}

// operator() @ 141e8ccd0

bool __thiscall
`FDefaultPackageLocalizationCache::FindLocalizedPackages'::__l10::<lambda_1>::operator()
          (void *this,wchar_t *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  FName FVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  FName *pFVar8;
  ForAnyElementType FVar9;
  ForElementType<FSetElementId> FVar10;
  uint uVar11;
  int iVar12;
  int local_res8 [2];
  FName local_res10;
  FName *local_res18;
  FName local_res20;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  iVar5 = *(int *)(*(longlong *)this + 8) + -1;
  if (*(int *)(*(longlong *)this + 8) == 0) {
    iVar5 = 0;
  }
  ::FString::FString(&local_48,param_1 + iVar5);
  FPaths::ChangeExtension(&local_58,&local_48,&local_68);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  iVar12 = 1;
  puVar2 = *(undefined8 **)((longlong)this + 8);
  iVar5 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  if ((*(int *)(puVar2 + 1) != 0) || (iVar6 = 2, iVar5 == -1)) {
    iVar6 = 1;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)(puVar2 + 1);
  pvVar3 = (void *)*puVar2;
  local_68.Data.ArrayNum = iVar1;
  if ((iVar1 == 0) && (iVar6 + iVar5 == 0)) {
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
  }
  else {
    uVar7 = iVar1 + iVar6 + iVar5;
    if ((int)uVar7 < iVar1) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,0,(ForAnyElementType *)&local_68,iVar1,&local_68.Data.ArrayMax);
    if (iVar1 != 0) {
      memcpy(local_68.Data.AllocatorInstance.Data,pvVar3,(longlong)iVar1 * 2);
    }
  }
  ::FString::PathAppend(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar9.Data = local_68.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res10,(wchar_t *)FVar9.Data);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  puVar2 = *(undefined8 **)((longlong)this + 0x10);
  iVar5 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  if ((*(int *)(puVar2 + 1) == 0) && (iVar5 != -1)) {
    iVar12 = 2;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar6 = *(int *)(puVar2 + 1);
  pvVar3 = (void *)*puVar2;
  local_68.Data.ArrayNum = iVar6;
  if ((iVar6 == 0) && (iVar12 + iVar5 == 0)) {
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
  }
  else {
    uVar7 = iVar6 + iVar12 + iVar5;
    if ((int)uVar7 < iVar6) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar7,0,(ForAnyElementType *)&local_68,iVar6,&local_68.Data.ArrayMax);
    if (iVar6 != 0) {
      memcpy(local_68.Data.AllocatorInstance.Data,pvVar3,(longlong)iVar6 * 2);
    }
  }
  ::FString::PathAppend(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar9.Data = local_68.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res20,(wchar_t *)FVar9.Data);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  FVar4 = local_res10;
  this_00 = *(TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              **)((longlong)this + 0x18);
  uVar7 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  uVar7 = uVar7 + FVar4.Number;
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    FVar10 = (this_00->Hash).SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&this_00->Hash;
    }
    uVar11 = *(uint *)((longlong)FVar10 + (ulonglong)(this_00->HashSize - 1U & uVar7) * 4);
    if (uVar11 != 0xffffffff) {
      do {
        pFVar8 = (FName *)((longlong)(int)uVar11 * 0x20 + *(longlong *)&this_00->Elements);
        if (*pFVar8 == local_res10) {
          if (pFVar8 != (FName *)0x0) goto LAB_141e8cf6b;
          break;
        }
        uVar11 = pFVar8[3].ComparisonIndex.Value;
      } while (uVar11 != 0xffffffff);
    }
  }
  local_res18 = &local_res10;
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (this_00,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar7,
             (bool *)&local_res18);
  pFVar8 = (FName *)((longlong)local_res8[0] * 0x20 + *(longlong *)&this_00->Elements);
LAB_141e8cf6b:
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar8 + 1),&local_res20);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return true;
}

// FindAssetGroupPackages @ 141e9abd0

void __thiscall
FDefaultPackageLocalizationCache::FindAssetGroupPackages
          (FDefaultPackageLocalizationCache *this,FName param_1,FTopLevelAssetPath *param_2)

{
  return;
}

// FindLocalizedPackages @ 141e9bf70

void __thiscall
FDefaultPackageLocalizationCache::FindLocalizedPackages
          (FDefaultPackageLocalizationCache *this,
          TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
          *param_1,TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                   *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  void *_Src;
  code *pcVar4;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint *puVar13;
  undefined1 *puVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  undefined8 *puVar16;
  undefined1 local_res20 [8];
  undefined1 local_158 [4];
  uint local_154;
  FString local_150;
  FString local_140;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_130;
  int iStack_128;
  uint uStack_124;
  undefined1 *local_120;
  undefined4 uStack_118;
  int iStack_114;
  int local_110;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  int local_100;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  FString local_f0;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  code *local_88;
  FString **local_80;
  FString *local_78;
  longlong local_70;
  undefined8 *local_68;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_60;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  
  iVar2 = *(int *)&param_1->field_0x28;
  pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  iStack_128 = 0;
  local_110 = 0;
  uStack_124 = 1;
  iStack_114 = 0;
  if (iVar2 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)pTVar15;
    }
    uVar11 = *puVar13;
    while (uVar11 == 0) {
      lVar7 = (longlong)iStack_128;
      local_110 = local_110 + 0x20;
      iStack_128 = iStack_128 + 1;
      iStack_114 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_128) goto LAB_141e9c01d;
      uVar11 = puVar13[lVar7 + 1];
    }
    uStack_124 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uStack_124 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_100 = (int)lVar7;
    iStack_114 = local_110 + -1 + local_100;
    if (iVar2 < iStack_114) {
      iStack_114 = iVar2;
    }
  }
LAB_141e9c01d:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_108 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_118 = 0xffffffff;
  TStack_d8._padding_ = CONCAT44(uStack_124,iStack_128);
  TStack_d8.CurrentBitIndex = iStack_114;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  iVar8 = (int)uVar11 >> 5;
  TStack_d8._28_4_ = iStack_114;
  TStack_d8.BaseBitIndex = local_110;
  uStack_b8 = CONCAT44(uStack_104,iStack_108);
  local_154 = uVar11;
  local_130 = param_1;
  local_120 = (undefined1 *)pTVar15;
  iStack_10c = iStack_114;
  local_f8 = pTVar15;
  local_e0 = param_1;
  TStack_d8.Array = pTVar15;
  if ((((int)uVar11 < 0) || (iVar2 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar3) {
    puVar14 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar14 = (undefined1 *)pTVar15;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar8 * 4);
    while (uVar11 == 0) {
      lVar7 = (longlong)iVar8;
      uVar10 = uVar10 + 0x20;
      iVar8 = iVar8 + 1;
      uVar11 = uVar3;
      local_154 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_141e9c130;
      uVar11 = *(uint *)(puVar14 + lVar7 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar11 = (int)lVar7 + -1 + uVar10;
    local_154 = uVar11;
    if ((int)uVar3 < (int)uVar11) {
      uVar11 = uVar3;
      local_154 = uVar3;
    }
  }
LAB_141e9c130:
  while( true ) {
    pTVar5 = local_e0;
    if (*(int *)&local_e0->field_0x8 - *(int *)&local_e0->field_0x34 != (int)uStack_b8) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_d8.CurrentBitIndex == uVar11) && (TStack_d8.Array == pTVar15)) &&
       (pTVar5 == param_1)) break;
    lVar7 = *(longlong *)pTVar5;
    iVar2 = *(int *)(lVar7 + 0x18 + (longlong)TStack_d8.CurrentBitIndex * 0x28);
    lVar7 = lVar7 + (longlong)TStack_d8.CurrentBitIndex * 0x28;
    puVar12 = *(undefined8 **)(lVar7 + 0x10);
    puVar16 = puVar12 + (longlong)iVar2 * 2;
    while( true ) {
      if (*(int *)(lVar7 + 0x18) != iVar2) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_158);
      }
      if (puVar12 == puVar16) break;
      local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.Data.ArrayNum = 0;
      local_140.Data.ArrayMax = 0;
      ::FString::FString(&local_f0,L"");
      local_150.Data.ArrayNum = *(int *)(puVar12 + 1);
      lVar9 = (longlong)local_150.Data.ArrayNum;
      local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_150.Data.ArrayNum == 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,2,0,(ForAnyElementType *)&local_150,0,&local_150.Data.ArrayMax);
      }
      else {
        _Src = (void *)*puVar12;
        uVar11 = local_150.Data.ArrayNum + 1;
        if ((int)uVar11 < local_150.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar11,0,(ForAnyElementType *)&local_150,local_150.Data.ArrayNum,
                   &local_150.Data.ArrayMax);
        memcpy(local_150.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
      }
      ::FString::PathAppend(&local_150,L"",0);
      local_a8 = local_f0.Data.AllocatorInstance.Data;
      iStack_a0 = local_f0.Data.ArrayNum + -1;
      if (local_f0.Data.ArrayNum == 0) {
        iStack_a0 = 0;
      }
      local_98 = local_150.Data.AllocatorInstance.Data;
      local_58._12_4_ = uStack_9c;
      local_58.Size = iStack_a0;
      local_58.DataPtr = (wchar_t *)local_f0.Data.AllocatorInstance.Data;
      iStack_90 = local_150.Data.ArrayNum + -1;
      if (local_150.Data.ArrayNum == 0) {
        iStack_90 = 0;
      }
      local_48._12_4_ = uStack_8c;
      local_48.Size = iStack_90;
      local_48.DataPtr = (wchar_t *)local_150.Data.AllocatorInstance.Data;
      bVar6 = FPackageName::TryConvertLongPackageNameToFilename(&local_48,&local_140,&local_58);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        local_78 = &local_140;
        local_80 = &local_78;
        local_88 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FDefaultPackageLocalizationCache::FindLocalizedPackages'::__l10::<lambda_1>,bool,wchar_t_const_*>
                   ::Call;
        local_70 = lVar7;
        local_68 = puVar12;
        local_60 = param_2;
        FPackageName::IteratePackagesInDirectory
                  (&local_140,(TFunctionRef<bool___cdecl(wchar_t_const_*)> *)&local_88);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      puVar12 = puVar12 + 2;
    }
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
    pTVar15 = local_f8;
    uVar11 = local_154;
  }
  return;
}

