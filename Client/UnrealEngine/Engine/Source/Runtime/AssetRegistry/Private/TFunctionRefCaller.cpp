// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 140

// Call @ 142aebed0

FDependsNode * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::LoadDependenciesImpl<1>'::__l2::<lambda_1>,FDependsNode_*,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((-1 < iVar1) && (iVar1 < *(int *)((longlong)param_1 + 8))) {
    return (FDependsNode *)((longlong)iVar1 * 0xa8 + **(longlong **)param_1);
  }
  return (FDependsNode *)0x0;
}

// Call @ 142aebf00

FDependsNode * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::LoadDependenciesImpl<0>'::__l2::<lambda_1>,FDependsNode_*,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((-1 < iVar1) && (iVar1 < *(int *)((longlong)param_1 + 8))) {
    return (FDependsNode *)((longlong)iVar1 * 0xa8 + **(longlong **)param_1);
  }
  return (FDependsNode *)0x0;
}

// Call @ 142aebf30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FAssetRegistryState::EnumerateTagToAssetDatas'::__l6::<lambda_1>::operator()'::__l2::<lambda_1>,bool,FAssetData_const_*>
::Call(void *param_1,FAssetData **param_2)

{
  char cVar1;
  FAssetData *local_res8 [4];
  
  local_res8[0] = *param_2;
  cVar1 = (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1],local_res8);
  return cVar1 != '\0';
}

// Call @ 142aebf60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FAssetRegistryState::RemoveDependsNodes'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``FAssetRegistryState::RemoveDependsNodes'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 142aebf70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::EnumerateAllAssets'::__l2::<lambda_1>,void,FAssetData_&>::
Call(void *param_1,FAssetData *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000142aebf7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1]);
  return;
}

// Call @ 142aebf90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::EnumerateAllAssets'::__l2::<lambda_1>,void,FAssetData_&>::
Call(void *param_1,FAssetData *param_2)

{
  FName FVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  
  FVar1 = param_2->PackageName;
  plVar2 = *(longlong **)param_1;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar5 = (longlong *)plVar2[8];
    if ((longlong *)plVar2[8] == (longlong *)0x0) {
      plVar5 = plVar2 + 7;
    }
    iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar2[9] - 1U & FVar1.Number + uVar3) * 4)
    ;
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*plVar2 + (longlong)iVar4 * 0x10) == FVar1) {
          return;
        }
        iVar4 = *(int *)(*plVar2 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  (*(code *)**(undefined8 **)((longlong)param_1 + 8))
            ((*(undefined8 **)((longlong)param_1 + 8))[1],param_2);
  return;
}

// Call @ 142aebfa0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::EnumerateAssetsByPackageName'::__l2::<lambda_1>,bool,FAssetData_*>
::Call(void *param_1,FAssetData **param_2)

{
  undefined1 uVar1;
  FAssetData *local_res8 [4];
  
  local_res8[0] = *param_2;
  uVar1 = (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1],local_res8);
  return (bool)uVar1;
}

// Call @ 142aebfd0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::EnumerateAssetsByPackagePath'::__l2::<lambda_1>,bool,FAssetData_*>
::Call(void *param_1,FAssetData **param_2)

{
  undefined1 uVar1;
  FAssetData *local_res8 [4];
  
  local_res8[0] = *param_2;
  uVar1 = (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1],local_res8);
  return (bool)uVar1;
}

// Call @ 142aec000

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::GetAllAssets'::__l2::<lambda_1>,bool,FAssetData_const_&>::
Call(void *param_1,FAssetData *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  
  pFVar2 = *(ForAnyElementType **)param_1;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  iVar3 = *(int *)&pFVar2[1].Data;
  if (iVar3 == *piVar1) {
    iVar3 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar3 + 1;
  FAssetData::FAssetData((FAssetData *)(pFVar2->Data + (longlong)iVar3 * 0x68),param_2);
  return true;
}

// Call @ 142aec060

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::GetAssets'::__l2::<lambda_1>,bool,FAssetData_const_&>::Call
          (void *param_1,FAssetData *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  
  pFVar2 = *(ForAnyElementType **)param_1;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  iVar3 = *(int *)&pFVar2[1].Data;
  if (iVar3 == *piVar1) {
    iVar3 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar3 + 1;
  FAssetData::FAssetData((FAssetData *)(pFVar2->Data + (longlong)iVar3 * 0x68),param_2);
  return true;
}

// Call @ 142aec0c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAssetRegistryHelpers::GetBlueprintAssets'::__l2::<lambda_1>,bool,FAssetData_const_&>
::Call(void *param_1,FAssetData *param_2)

{
  int *piVar1;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *pTVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  
  pTVar2 = *(TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> **)
            ((longlong)param_1 + 8);
  if ((*(int *)&(pTVar2->Elements).field_0x8 != *(int *)&(pTVar2->Elements).field_0x34) &&
     (bVar5 = UAssetRegistryHelpers::IsAssetDataBlueprintOfClassSet(param_2,pTVar2), !bVar5)) {
    return true;
  }
  pFVar3 = *(ForAnyElementType **)param_1;
  if ((((FAssetData *)pFVar3->Data <= param_2) &&
      (param_2 < (FAssetData *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar7 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar7 + 1;
  FAssetData::FAssetData((FAssetData *)(pFVar3->Data + (longlong)iVar7 * 0x68),param_2);
  return true;
}

// Call @ 142aec0d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_1>,void,FAssetData_&>
::Call(void *param_1,FAssetData *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  longlong lVar5;
  
  pFVar2 = *(ForAnyElementType **)param_1;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  iVar4 = *(int *)&pFVar2[1].Data;
  if (iVar4 == *piVar1) {
    iVar4 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar4 + 1;
  pFVar3 = pFVar2->Data;
  lVar5 = (longlong)iVar4 * 0x20;
  *(undefined8 *)(pFVar3 + lVar5 + 8) = 0;
  *(undefined8 *)(pFVar3 + lVar5 + 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar5 + 0x10) = 0;
  *(FAssetData **)(pFVar3 + lVar5) = param_2;
  return;
}

// Call @ 142aec130

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::GetPrimaryAssetsIds'::__l2::<lambda_1>,void,FAssetData_const_&>
::Call(void *param_1,FAssetData *param_2)

{
  FPrimaryAssetId local_res18;
  FPrimaryAssetId local_18;
  
  FAssetData::GetPrimaryAssetId(param_2,&local_18);
  local_res18.PrimaryAssetType.Name.ComparisonIndex.Value = 0;
  local_res18.PrimaryAssetType.Name.Number = 0;
  if ((local_18.PrimaryAssetType.Name != (FName)0x0) && (local_18.PrimaryAssetName != (FName)0x0)) {
    TSet<FPrimaryAssetId,DefaultKeyFuncs<FPrimaryAssetId,0>,FDefaultSetAllocator>::
    Emplace<FPrimaryAssetId_const_&>
              (*(TSet<FPrimaryAssetId,DefaultKeyFuncs<FPrimaryAssetId,0>,FDefaultSetAllocator> **)
                param_1,&local_res18,(bool *)&local_18);
  }
  return;
}

// Call @ 142aec180

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::HasAssets'::__l2::<lambda_1>,bool,FAssetData_const_*>::Call
          (void *param_1,FAssetData **param_2)

{
  FAssetData *pFVar1;
  bool bVar2;
  
  pFVar1 = *param_2;
  if (pFVar1 == (FAssetData *)0x0) {
    return true;
  }
  if ((*(char *)((longlong)param_1 + 8) != '\0') &&
     (bVar2 = AssetRegistry::FFiltering::ShouldSkipAsset
                        (&pFVar1->AssetClassPath,pFVar1->PackageFlags), bVar2)) {
    return true;
  }
  **(undefined1 **)((longlong)param_1 + 0x10) = 1;
  return false;
}

// Call @ 142aec1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::InitializeFromExistingAndPrune'::__l2::<lambda_1>,void,FAssetData_&>
::Call(void *param_1,FAssetData *param_2)

{
  undefined8 *puVar1;
  FName FVar2;
  longlong *plVar3;
  FAssetDataTagMap *pFVar4;
  undefined8 *puVar5;
  FAssetRegistrySerializationOptions *pFVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  TArrayView<int_const_,int> *pTVar16;
  int *piVar17;
  undefined8 *puVar18;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar19;
  FAssetData *pFVar20;
  FString *pFVar21;
  FString *pFVar22;
  TSharedPtr<FAssetBundleData,1> *pTVar23;
  longlong *plVar24;
  FAssetData *pFVar25;
  undefined1 auStackY_388 [32];
  undefined1 auStack_338 [16];
  FAssetDataTagMap FStack_328;
  undefined1 auStack_308 [16];
  FAssetDataTagMap FStack_2f8;
  FAssetDataTagMap FStack_2e0;
  TArrayView<int_const_,int> TStack_2c8;
  FString FStack_2b8;
  TArrayView<int_const_,int> TStack_2a8;
  TArrayView<int_const_,int> TStack_298;
  TStringBuilderBase<wchar_t> TStack_288;
  wchar_t awStack_268 [256];
  ulonglong auStack_68 [6];
  
  auStack_68[0] = __security_cookie.value ^ (ulonglong)auStackY_388;
  pFVar20 = (FAssetData *)0x0;
  if (*(char *)((longlong)param_1 + 0x20) != '\0') {
    pTVar16 = FAssetData::GetChunkIDs(param_2,&TStack_2c8);
    piVar17 = TArrayView<int_const_,int>::
              FindByPredicate<__FAssetRegistryState::InitializeFromExistingAndPrune_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                        (pTVar16,*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)
                                  ((longlong)param_1 + 0x10));
    if (piVar17 == (int *)0x0) {
      return;
    }
  }
  if (*(char *)((longlong)param_1 + 0x21) != '\0') {
    FVar2 = param_2->PackageName;
    plVar3 = *(longlong **)param_1;
    uVar14 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    if ((int)plVar3[1] == *(int *)((longlong)plVar3 + 0x34)) {
      return;
    }
    plVar24 = (longlong *)plVar3[8];
    if ((longlong *)plVar3[8] == (longlong *)0x0) {
      plVar24 = plVar3 + 7;
    }
    iVar15 = *(int *)((longlong)plVar24 +
                     (ulonglong)((int)plVar3[9] - 1U & FVar2.Number + uVar14) * 4);
    if (iVar15 == -1) {
      return;
    }
    while (*(FName *)(*plVar3 + (longlong)iVar15 * 0x10) != FVar2) {
      iVar15 = *(int *)(*plVar3 + 8 + (longlong)iVar15 * 0x10);
      if (iVar15 == -1) {
        return;
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0x22) != '\0') {
    FVar2 = param_2->PackageName;
    plVar3 = *(longlong **)((longlong)param_1 + 8);
    uVar14 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      plVar24 = (longlong *)plVar3[8];
      if ((longlong *)plVar3[8] == (longlong *)0x0) {
        plVar24 = plVar3 + 7;
      }
      iVar15 = *(int *)((longlong)plVar24 +
                       (ulonglong)((int)plVar3[9] - 1U & FVar2.Number + uVar14) * 4);
      if (iVar15 != -1) {
        do {
          if (*(FName *)(*plVar3 + (longlong)iVar15 * 0x10) == FVar2) {
            return;
          }
          iVar15 = *(int *)(*plVar3 + 8 + (longlong)iVar15 * 0x10);
        } while (iVar15 != -1);
      }
    }
  }
  pFVar25 = pFVar20;
  if (*(char *)(*(longlong *)((longlong)param_1 + 0x18) + 6) != '\0') {
    if ((*(byte *)&(param_2->TagsAndValues).field0_0x0 & 1) == 0) {
      pFVar4 = (param_2->TagsAndValues).field0_0x0.Loose;
      if (pFVar4 != (FAssetDataTagMap *)0x0) {
        uVar14 = (uint)pFVar4->_padding_;
        goto LAB_142adf362;
      }
    }
    else {
      uVar14 = (uint)(param_2->TagsAndValues).field0_0x0.Fixed.Num;
LAB_142adf362:
      pFVar25 = (FAssetData *)0x0;
      if (uVar14 != 0) goto LAB_142adf3cc;
    }
    TStack_288.Base = awStack_268;
    TStack_288.bIsDynamic = false;
    TStack_288.bIsExternal = false;
    TStack_288.CurPos = awStack_268;
    TStack_288.End = (wchar_t *)auStack_68;
    ::FName::AppendString(&param_2->PackageName,&TStack_288);
    pFVar25 = (FAssetData *)&DAT_00000001;
    auStack_338._8_4_ = (uint)((longlong)TStack_288.CurPos - (longlong)TStack_288.Base >> 1);
    auStack_338._0_8_ = TStack_288.Base;
    bVar13 = FPackageName::IsLocalizedPackage((TStringView<wchar_t> *)auStack_338);
    if (!bVar13) {
      bVar13 = true;
      goto LAB_142adf3d2;
    }
  }
LAB_142adf3cc:
  bVar13 = false;
LAB_142adf3d2:
  if (pFVar25 != (FAssetData *)0x0) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_288);
  }
  bVar11 = false;
  bVar10 = false;
  if (bVar13) {
    if (*(char *)(*(longlong *)((longlong)param_1 + 0x18) + 7) == '\0') {
      puVar5 = *(undefined8 **)((longlong)param_1 + 0x28);
      puVar18 = FMemory::Malloc(0x10,8);
      *puVar18 = 0;
      *(FName *)(puVar18 + 1) = param_2->PackageName;
      LOCK();
      puVar1 = (undefined8 *)*puVar5;
      *puVar5 = puVar18;
      UNLOCK();
      *puVar1 = puVar18;
    }
  }
  else {
    pFVar6 = *(FAssetRegistrySerializationOptions **)((longlong)param_1 + 0x18);
    FStack_328._padding_ = 0;
    FStack_328._padding_ = 0;
    FStack_328.RefCount.Counter = 0;
    pTVar19 = TMapBase<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
              ::Find((TMapBase<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                      *)&pFVar6->CookFilterlistTagsByClass,&param_2->AssetClassPath);
    FAssetRegistryState::FilterTags(&param_2->TagsAndValues,&FStack_328,pTVar19,pFVar6);
    bVar13 = FAssetData::IsTopLevelAsset(param_2);
    if (bVar13) {
      pFVar25 = ::operator_new(0x68);
      if (pFVar25 != (FAssetData *)0x0) {
        uVar14 = param_2->PackageFlags;
        pTVar16 = FAssetData::GetChunkIDs(param_2,&TStack_2a8);
        lVar12 = FStack_328._padding_;
        iVar15 = (int)FStack_328._padding_;
        FVar2 = (FName)pTVar16->DataPtr;
        FVar8.ComparisonIndex.Value = pTVar16->ArrayNum;
        FVar8.Number = *(uint *)&pTVar16->field_0xc;
        FStack_2f8._padding_._0_4_ = (int)FStack_328._padding_;
        FStack_2f8._padding_ = 0;
        if ((int)FStack_328._padding_ == 0) {
          FStack_2f8._padding_._4_4_ = 0;
        }
        else {
          ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,(int)FStack_328._padding_,0,(ForAnyElementType *)&FStack_2f8,
                     (int)FStack_328._padding_,(int *)((longlong)&FStack_2f8._padding_ + 4));
          ConstructItems<TTuple<FName,FString>,TTuple<FName,FString>,int>
                    ((void *)FStack_2f8._padding_,(TTuple<FName,FString> *)lVar12,iVar15);
        }
        auStack_308._0_8_ = (param_2->AssetClassPath).PackageName;
        auStack_308._8_8_ = (param_2->AssetClassPath).AssetName;
        FStack_2f8.RefCount.Counter = 0;
        auStack_338._0_8_ = FVar2;
        auStack_338._8_8_ = FVar8;
        pFVar20 = FAssetData::FAssetData
                            (pFVar25,param_2->PackageName,param_2->PackagePath,param_2->AssetName,
                             (FTopLevelAssetPath *)auStack_308,&FStack_2f8,
                             (TArrayView<int_const_,int> *)auStack_338,uVar14);
      }
    }
    else {
      pFVar25 = ::operator_new(0x68);
      if (pFVar25 != (FAssetData *)0x0) {
        uVar14 = param_2->PackageFlags;
        pTVar16 = FAssetData::GetChunkIDs(param_2,&TStack_298);
        lVar12 = FStack_328._padding_;
        iVar15 = (int)FStack_328._padding_;
        FVar2 = (FName)pTVar16->DataPtr;
        FVar7.ComparisonIndex.Value = pTVar16->ArrayNum;
        FVar7.Number = *(uint *)&pTVar16->field_0xc;
        FStack_2e0._padding_ = 0;
        FStack_2e0._padding_._0_4_ = (int)FStack_328._padding_;
        if ((int)FStack_328._padding_ == 0) {
          FStack_2e0._padding_._4_4_ = 0;
        }
        else {
          ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,(int)FStack_328._padding_,0,(ForAnyElementType *)&FStack_2e0,
                     (int)FStack_328._padding_,(int *)((longlong)&FStack_2e0._padding_ + 4));
          ConstructItems<TTuple<FName,FString>,TTuple<FName,FString>,int>
                    ((void *)FStack_2e0._padding_,(TTuple<FName,FString> *)lVar12,iVar15);
        }
        FVar8 = (param_2->AssetClassPath).PackageName;
        FVar9 = (param_2->AssetClassPath).AssetName;
        FStack_2e0.RefCount.Counter = 0;
        pFVar21 = FAssetData::GetObjectPathString(param_2,(FString *)&TStack_2c8);
        bVar11 = true;
        bVar10 = true;
        pFVar22 = ::FName::ToString(&param_2->PackageName,&FStack_2b8);
        auStack_338._0_8_ = FVar8;
        auStack_338._8_8_ = FVar9;
        auStack_308._0_8_ = FVar2;
        auStack_308._8_8_ = FVar7;
        pFVar20 = FAssetData::FAssetData
                            (pFVar25,pFVar22,pFVar21,(FTopLevelAssetPath *)auStack_338,&FStack_2e0,
                             (TArrayView<int_const_,int> *)auStack_308,uVar14);
      }
      if ((bVar10) && (FStack_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(FStack_2b8.Data.AllocatorInstance.Data);
      }
      if ((bVar11) && (TStack_2c8.DataPtr != (int *)0x0)) {
        FMemory::Free(TStack_2c8.DataPtr);
      }
    }
    pTVar23 = FAssetRegistryState::FilterBundles
                        ((TSharedPtr<FAssetBundleData,1> *)auStack_308,&param_2->TaggedAssetBundles,
                         *(FAssetRegistrySerializationOptions **)((longlong)param_1 + 0x18));
    if (&pFVar20->TaggedAssetBundles != pTVar23) {
      (pFVar20->TaggedAssetBundles).Object = pTVar23->Object;
      pTVar23->Object = (FAssetBundleData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar20->TaggedAssetBundles).SharedReferenceCount,&pTVar23->SharedReferenceCount)
      ;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)auStack_308._8_8_);
    puVar5 = *(undefined8 **)((longlong)param_1 + 0x30);
    puVar18 = FMemory::Malloc(0x10,8);
    *puVar18 = 0;
    puVar18[1] = pFVar20;
    LOCK();
    puVar1 = (undefined8 *)*puVar5;
    *puVar5 = puVar18;
    UNLOCK();
    *puVar1 = puVar18;
    DestructItems<TTuple<FName,FString>,int>
              ((TTuple<FName,FString> *)FStack_328._padding_,(int)FStack_328._padding_);
    if ((TTuple<FName,FString> *)FStack_328._padding_ != (TTuple<FName,FString> *)0x0) {
      FMemory::Free((void *)FStack_328._padding_);
    }
  }
  return;
}

// Call @ 142aec1e0

FDependsNode * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::LegacyLoadDependencies_BeforeFlags'::__l2::<lambda_1>,FDependsNode_*,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((-1 < iVar1) && (iVar1 < *(int *)((longlong)param_1 + 8))) {
    return (FDependsNode *)((longlong)iVar1 * 0xa8 + **(longlong **)param_1);
  }
  return (FDependsNode *)0x0;
}

// Call @ 142aec210

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::Prune'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FAssetRegistryState::Prune'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 142aec220

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetDataGatherer::SaveCacheFile'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FAssetDataGatherer::SaveCacheFile'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 142aec230

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::UpdateAssetDataPackageFlags'::__l2::<lambda_1>,bool,FAssetData_*>
::Call(void *param_1,FAssetData **param_2)

{
  (*param_2)->PackageFlags = *(uint *)((longlong)param_1 + 8);
  **(undefined1 **)param_1 = 1;
  return true;
}

// Call @ 142aec250

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetDataGatherer::UpdateCacheForSaving'::__l3::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FAssetDataGatherer::UpdateCacheForSaving'::__l3::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 142aec260

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FAssetRegistryState::SetAssetDatas'::__l29::<lambda_5>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 142aec280

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FAssetRegistryState::SetAssetDatas'::__l29::<lambda_6>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 142aec2a0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FAssetRegistryState::ResolveRedirector'::__l14::<lambda_1>::operator()'::__l5::<lambda_1>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  ``FAssetRegistryState::ResolveRedirector'::__l14::<lambda_1>::operator()'::__l5::<lambda_1>::
  operator()(param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 142aec2d0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FAssetRegistryState::InitializeFromExistingAndPrune'::__l2::<lambda_3>::operator()'::__l5::<lambda_1>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  ``FAssetRegistryState::InitializeFromExistingAndPrune'::__l2::<lambda_3>::operator()'::__l5::
  <lambda_1>::operator()(param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 142aec300

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FAssetRegistryState::Dump'::__l2::<lambda_6>::operator()'::__l5::<lambda_1>,void,FAssetData_const_&>
::Call(void *param_1,FAssetData *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAssetData *apFStack_18 [2];
  
  pFVar2 = *(ForAnyElementType **)param_1;
  apFStack_18[0] = param_2;
  if ((pFVar2->Data <= (FScriptContainerElement *)apFStack_18) &&
     ((FScriptContainerElement *)apFStack_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(FAssetData **)(pFVar2->Data + (longlong)iVar5 * 8) = apFStack_18[0];
  return;
}

// Call @ 142aec310

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::EnumerateTagToAssetDatas'::__l6::<lambda_1>,bool,TFunctionRef<bool___cdecl(FAssetData_const_*)>_>
::Call(void *param_1,TFunctionRef<bool___cdecl(FAssetData_const_*)> *param_2)

{
  undefined8 *local_res8 [4];
  undefined8 local_28;
  undefined8 local_20;
  code *local_18;
  undefined8 **local_10;
  
  local_28 = *(undefined8 *)param_2;
  local_20 = *(undefined8 *)&param_2->field_0x8;
  local_res8[0] = &local_28;
  local_10 = local_res8;
  local_18 = TFunctionRefCaller<``FAssetRegistryState::EnumerateTagToAssetDatas'::__l6::<lambda_1>::operator()'::__l2::<lambda_1>,bool,FAssetData_const_*>
             ::Call;
  FAssetRegistryState::EnumerateAssetsByTagName
            (*(FAssetRegistryState **)((longlong)param_1 + 8),**(FName **)param_1,
             (TFunctionRef<bool___cdecl(FAssetData_const_*)> *)&local_18);
  return true;
}

// Call @ 142aec370

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FAssetRegistryState::Prune'::__l2::<lambda_3>::operator()'::__l8::<lambda_1>,bool,FDependsNode_const_*>
::Call(void *param_1,FDependsNode **param_2)

{
  schar *psVar1;
  
  psVar1 = TMapBase<FDependsNode_*,signed_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,signed_char,0>_>
           ::FindChecked(*(TMapBase<FDependsNode_*,signed_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDependsNode_*,signed_char,0>_>
                           **)param_1,*param_2);
  return *psVar1 == '\0';
}

// Call @ 142aec390

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::EnumerateAllMutableAssets'::__l8::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  FSetElementId FVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  FVar1.Index = *param_2;
  bVar4 = TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>::
          IsValidId(*(TSet<FAssetData_*,UE::AssetRegistry::Private::FCachedAssetKeyFuncs,FDefaultSetAllocator>
                      **)param_1,FVar1);
  if (bVar4) {
    lVar2 = *(longlong *)(**(longlong **)param_1 + (longlong)FVar1.Index * 0x10);
    if (lVar2 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AssetData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistryState.cpp"
                         ,0x6ec,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (*(code *)**(undefined8 **)((longlong)param_1 + 8))
              ((*(undefined8 **)((longlong)param_1 + 8))[1],lVar2);
  }
  return;
}

// Call @ 142aec410

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::ResolveRedirector'::__l14::<lambda_1>,bool,FAssetData_const_*>
::Call(void *param_1,FAssetData **param_2)

{
  bool bVar1;
  
  bVar1 = `FAssetRegistryState::ResolveRedirector'::__l14::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 142aec420

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`FAssetRegistryState::Dump'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FString FStack_18;
  
  if (*(int *)((longlong)param_1 + 8) == 1) {
    pFVar2 = *(ForAnyElementType **)((longlong)param_1 + 0x20);
    pwVar3 = (wchar_t *)**(undefined8 **)param_1;
    pFVar7 = (FScriptContainerElement *)
             ::FString::ConstructFromPtrSize
                       (&FStack_18,pwVar3,
                        (int)((*(undefined8 **)param_1)[1] - (longlong)pwVar3 >> 1));
    if ((pFVar2->Data <= pFVar7) &&
       (pFVar7 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
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
    iVar6 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar6 + 1;
    pFVar8 = pFVar2->Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar8 = 0;
    *(undefined8 *)pFVar8 = *(undefined8 *)pFVar7;
    *(undefined8 *)pFVar7 = 0;
    *(undefined4 *)(pFVar8 + 8) = *(undefined4 *)(pFVar7 + 8);
    *(undefined4 *)(pFVar8 + 0xc) = *(undefined4 *)(pFVar7 + 0xc);
    *(undefined8 *)(pFVar7 + 8) = 0;
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
    (*(undefined8 **)param_1)[1] = **(undefined8 **)param_1;
    return;
  }
  **(int **)((longlong)param_1 + 0x10) = **(int **)((longlong)param_1 + 0x10) + 1;
  if ((*(int *)((longlong)param_1 + 8) != 0) &&
     (*(int *)((longlong)param_1 + 8) <= **(int **)((longlong)param_1 + 0x10))) {
    `FAssetRegistryState::Dump'::__l2::<lambda_1>::operator()
              (*(void **)((longlong)param_1 + 0x18),false);
    return;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(*(TStringBuilderBase<wchar_t> **)param_1,L"\r\n",2)
  ;
  return;
}

// Call @ 142aec430

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::GetAllocatedSize'::__l2::<lambda_2>,void,FAssetData_const_&>
::Call(void *param_1,FAssetData *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FAssetBundleData *pFVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackX_8 [8];
  
  **(longlong **)param_1 = **(longlong **)param_1 + 0x68;
  FAssetDataTagMapSharedView::FMemoryCounter::Include
            (*(FMemoryCounter **)((longlong)param_1 + 8),&param_2->TagsAndValues);
  if ((param_2->TaggedAssetBundles).Object != (FAssetBundleData *)0x0) {
    **(longlong **)((longlong)param_1 + 0x20) = **(longlong **)((longlong)param_1 + 0x20) + 0x10;
    if (((param_2->TaggedAssetBundles).Object == (FAssetBundleData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    **(longlong **)((longlong)param_1 + 0x20) =
         **(longlong **)((longlong)param_1 + 0x20) +
         (longlong)(((param_2->TaggedAssetBundles).Object)->Bundles).ArrayMax * 0x18;
    if (((param_2->TaggedAssetBundles).Object == (FAssetBundleData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    **(longlong **)((longlong)param_1 + 0x10) =
         **(longlong **)((longlong)param_1 + 0x10) +
         (longlong)(((param_2->TaggedAssetBundles).Object)->Bundles).ArrayNum;
    if (((param_2->TaggedAssetBundles).Object == (FAssetBundleData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (param_2->TaggedAssetBundles).Object;
    iVar2 = (pFVar3->Bundles).ArrayNum;
    pFVar6 = (pFVar3->Bundles).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)iVar2 * 0x18;
    while( true ) {
      if ((pFVar3->Bundles).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FAssetBundleEntry,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStackX_8);
      }
      if (pFVar6 == pFVar1) break;
      **(longlong **)((longlong)param_1 + 0x20) =
           **(longlong **)((longlong)param_1 + 0x20) + (longlong)*(int *)(pFVar6 + 0x14) * 0x10;
      **(longlong **)((longlong)param_1 + 0x28) =
           **(longlong **)((longlong)param_1 + 0x28) + (longlong)*(int *)(pFVar6 + 0x10);
      pFVar6 = pFVar6 + 0x18;
    }
  }
  return;
}

// Call @ 142aec440

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::InitializeFromExistingAndPrune'::__l2::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `FAssetRegistryState::InitializeFromExistingAndPrune'::__l2::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 142aec450

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::Prune'::__l2::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FAssetRegistryState::Prune'::__l2::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 142aec460

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetDataGatherer::UpdateCacheForSaving'::__l3::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FAssetDataGatherer::UpdateCacheForSaving'::__l3::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 142aec470

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetDataGather::Private::LoadCacheFiles'::__l5::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UE::AssetDataGather::Private::LoadCacheFiles'::__l5::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 142aec480

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::EnumerateAllMutableAssets'::__l26::<lambda_2>,void,int>::
Call(void *param_1,int *param_2)

{
  `FAssetRegistryState::EnumerateAllMutableAssets'::__l26::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 142aec490

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::Save'::__l26::<lambda_2>,int,FDependsNode_*,bool>::Call
          (void *param_1,FDependsNode **param_2,bool *param_3)

{
  int iVar1;
  
  iVar1 = `FAssetRegistryState::Save'::__l26::<lambda_2>::operator()(param_1,*param_2,*param_3);
  return iVar1;
}

// Call @ 142aec4b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>::operator()'::__l15::<lambda_2>,bool,wchar_t_const_*,FFileJournalData_const_&>
::Call(void *param_1,wchar_t **param_2,FFileJournalData *param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  FFileJournalFileHandle local_28 [2];
  
  local_28[0].Bytes._16_4_ = *(undefined4 *)((param_3->JournalHandle).Bytes + 0x10);
  local_28[0].Bytes._0_8_ = *(undefined8 *)(param_3->JournalHandle).Bytes;
  local_28[0].Bytes._8_8_ = *(undefined8 *)((param_3->JournalHandle).Bytes + 8);
  bVar2 = ``UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>::
          operator()'::__l2::<lambda_1>::operator()
                    (*(void **)param_1,*param_2,param_3->bIsDirectory,&param_3->ModificationTime,
                     param_3->bIsReadOnly,local_28,param_3->bIsReparsePoint);
  return bVar2;
}

// Call @ 142aec520

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::InitializeFromExisting'::__l2::<lambda_3>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FAssetRegistryState::InitializeFromExisting'::__l2::<lambda_2>::operator()
            (*(void **)((longlong)param_1 + 8),*param_2);
  return;
}

// Call @ 142aec540

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::InitializeFromExistingAndPrune'::__l2::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `FAssetRegistryState::InitializeFromExistingAndPrune'::__l2::<lambda_3>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 142aec550

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::Prune'::__l2::<lambda_3>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FAssetRegistryState::Prune'::__l2::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 142aec560

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>::operator()'::__l22::<lambda_3>,bool,wchar_t_const_*,FFileJournalData_const_&>
::Call(void *param_1,wchar_t **param_2,FFileJournalData *param_3)

{
  return true;
}

// Call @ 142aec570

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Algo::MergeSort::ParallelMergeSortPointerAndNum<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::FSortData,int,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_4>_>'::__l2::<lambda_4>,void,int,int,Algo::MergeSort::TMergeBuffer<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::FSortData>_&>
::Call(void *param_1,int *param_2,int *param_3,
      TMergeBuffer<_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::FSortData>
      *param_4)

{
  `Algo::MergeSort::
  ParallelMergeSortPointerAndNum<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::FSortData,int,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_4>_>'
  ::__l2::<lambda_4>::operator()(param_1,*param_2,*param_3,param_4);
  return;
}

// Call @ 142aec580

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::InitializeFromExistingAndPrune'::__l2::<lambda_4>,void,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *param_2;
  if (((iVar1 != -1) && (-1 < iVar1)) &&
     (iVar1 < ((*(TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  **)param_1)->Data).ArrayNum)) {
    bVar2 = TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::IsAllocated(*(TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            **)param_1,iVar1);
    if (bVar2) {
      FDependsNode::SetIsReferencersSorted
                (*(FDependsNode **)(**(longlong **)param_1 + 8 + (longlong)iVar1 * 0x18),true);
    }
  }
  return;
}

// Call @ 142aec5e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::Dump'::__l8::<lambda_4>,void,FAssetData_const_&>::Call
          (void *param_1,FAssetData *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FName local_18;
  FName FStack_10;
  
  pFVar2 = *(ForAnyElementType **)param_1;
  local_18.ComparisonIndex.Value = 0;
  local_18.Number = 0;
  FStack_10.ComparisonIndex.Value = 0;
  FStack_10.Number = 0;
  if (param_2 != (FAssetData *)0x0) {
    local_18 = param_2->PackageName;
    FStack_10 = param_2->AssetName;
  }
  iVar4 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar4 == *piVar1) {
    iVar4 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar4 + 1;
  pFVar3 = pFVar2->Data;
  *(FName *)(pFVar3 + (longlong)iVar4 * 0x10) = local_18;
  ((FName *)(pFVar3 + (longlong)iVar4 * 0x10))[1] = FStack_10;
  return;
}

// Call @ 142aec650

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetDataGather::Private::LoadCacheFiles'::__l18::<lambda_4>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UE::AssetDataGather::Private::LoadCacheFiles'::__l18::<lambda_4>::operator()(param_1,*param_2);
  return;
}

// Call @ 142aec660

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>::operator()'::__l37::<lambda_4>,bool,wchar_t_const_*,FFileStatData_const_&>
::Call(void *param_1,wchar_t **param_2,FFileStatData *param_3)

{
  bool bVar1;
  FFileJournalFileHandle local_28 [2];
  
  local_28[0].Bytes[0x10] = '\0';
  local_28[0].Bytes[0x11] = '\0';
  local_28[0].Bytes[0x12] = '\0';
  local_28[0].Bytes[0x13] = '\0';
  local_28[0].Bytes[0] = '\0';
  local_28[0].Bytes[1] = '\0';
  local_28[0].Bytes[2] = '\0';
  local_28[0].Bytes[3] = '\0';
  local_28[0].Bytes[4] = '\0';
  local_28[0].Bytes[5] = '\0';
  local_28[0].Bytes[6] = '\0';
  local_28[0].Bytes[7] = '\0';
  local_28[0].Bytes[8] = '\0';
  local_28[0].Bytes[9] = '\0';
  local_28[0].Bytes[10] = '\0';
  local_28[0].Bytes[0xb] = '\0';
  local_28[0].Bytes[0xc] = '\0';
  local_28[0].Bytes[0xd] = '\0';
  local_28[0].Bytes[0xe] = '\0';
  local_28[0].Bytes[0xf] = '\0';
  bVar1 = ``UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>::
          operator()'::__l2::<lambda_1>::operator()
                    (*(void **)param_1,*param_2,param_3->bIsDirectory,&param_3->ModificationTime,
                     param_3->bIsReadOnly,local_28,false);
  return bVar1;
}

// Call @ 142aec6c0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::InitializeFromExisting'::__l62::<lambda_4>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  `FAssetRegistryState::InitializeFromExisting'::__l62::<lambda_4>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 142aec6f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::SetAssetDatas'::__l29::<lambda_5>,void>::Call
          (void *param_1)

{
  `FAssetRegistryState::SetAssetDatas'::__l2::<lambda_1>::operator()(*(void **)param_1);
  return;
}

// Call @ 142aec700

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAssetRegistryState::SetAssetDatas'::__l29::<lambda_6>,void>::Call
          (void *param_1)

{
  `FAssetRegistryState::SetAssetDatas'::__l2::<lambda_2>::operator()(*(void **)param_1);
  return;
}

// Call @ 142b55a10

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l76::<lambda_10>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  `FDependsNodeTest::RunTest'::__l76::<lambda_10>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 142b55a40

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l79::<lambda_12>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  `FDependsNodeTest::RunTest'::__l79::<lambda_12>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 142b55a70

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l82::<lambda_15>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  `FDependsNodeTest::RunTest'::__l82::<lambda_15>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 142b55aa0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l89::<lambda_18>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  `FDependsNodeTest::RunTest'::__l89::<lambda_18>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 142b55ad0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l106::<lambda_19>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  **(int **)param_1 = **(int **)param_1 + 1;
  return;
}

// Call @ 142b55ae0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPathTree::CachePath'::__l2::<lambda_1>,bool,TStringView<wchar_t>_>::Call
          (void *param_1,TStringView<wchar_t> *param_2)

{
  bool bVar1;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar1 = `FPathTree::CachePath'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return bVar1;
}

// Call @ 142b55b10

FSoftObjectPath * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPackageReader::ConvertLinkerTableToPaths'::__l2::<lambda_1>,FSoftObjectPath_&,FPackageIndex>
::Call(void *param_1,FPackageIndex *param_2)

{
  FSoftObjectPath *pFVar1;
  
  pFVar1 = `FPackageReader::ConvertLinkerTableToPaths'::__l2::<lambda_1>::operator()
                     (param_1,(FPackageIndex)param_2->Index);
  return pFVar1;
}

// Call @ 142b55b20

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPathTree::GetAllPaths'::__l2::<lambda_1>,bool,FName>::Call
          (void *param_1,FName *param_2)

{
  FName local_res8;
  FName local_res10 [3];
  
  local_res10[0] = *param_2;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_&>
            (*(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> **)param_1,&local_res8,
             (bool *)local_res10);
  return true;
}

// Call @ 142b55b50

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNode::GetDependencies'::__l2::<lambda_1>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  `FDependsNode::GetDependencies'::__l2::<lambda_1>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 142b55b80

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNode::GetDependencies'::__l2::<lambda_1>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  `FDependsNode::GetDependencies'::__l2::<lambda_1>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 142b55bb0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNode::GetDependencies'::__l2::<lambda_1>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  `FDependsNode::GetDependencies'::__l2::<lambda_1>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 142b55be0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPathTree::GetSubPaths'::__l2::<lambda_1>,bool,FName>::Call
          (void *param_1,FName *param_2)

{
  FName local_res8;
  FName local_res10 [3];
  
  local_res10[0] = *param_2;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_&>
            (*(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> **)param_1,&local_res8,
             (bool *)local_res10);
  return true;
}

// Call @ 142b55c10

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNode::GetReferencers'::__l6::<lambda_1>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  `FDependsNode::GetReferencers'::__l6::<lambda_1>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 142b55c40

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FEnumerateAssetsPerformance::RunTest'::__l6::<lambda_1>,bool,FAssetData_const_&>
::Call(void *param_1,FAssetData *param_2)

{
  **(int **)param_1 = **(int **)param_1 + 1;
  return true;
}

// Call @ 142b55c50

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNode::GetReferencers'::__l9::<lambda_1>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  **(undefined1 **)param_1 = 1;
  return;
}

// Call @ 142b55c60

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNode::PrintDependenciesRecursive'::__l47::<lambda_1>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  FDependsNode *this;
  TSet<FDependsNode_const_*,DefaultKeyFuncs<FDependsNode_const_*,0>,FDefaultSetAllocator> *pTVar1;
  FString local_18;
  
  this = *param_2;
  if (*param_5 == false) {
    pTVar1 = *(TSet<FDependsNode_const_*,DefaultKeyFuncs<FDependsNode_const_*,0>,FDefaultSetAllocator>
               **)((longlong)param_1 + 8);
    ::FString::ConcatFC(&local_18,*(FString **)param_1,L"  ");
    FDependsNode::PrintDependenciesRecursive(this,&local_18,pTVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Call @ 142b55cc0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l107::<lambda_20>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  bool bVar1;
  
  bVar1 = *param_5;
  **(int **)param_1 = **(int **)param_1 + 1;
  **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + (uint)(bVar1 != false);
  return;
}

// Call @ 142b55cf0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l109::<lambda_21>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  `FDependsNodeTest::RunTest'::__l109::<lambda_21>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 142b55d20

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l109::<lambda_22>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  `FDependsNodeTest::RunTest'::__l109::<lambda_22>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 142b55d50

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l110::<lambda_23>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  `FDependsNodeTest::RunTest'::__l110::<lambda_23>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 142b55d80

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l111::<lambda_24>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  `FDependsNodeTest::RunTest'::__l111::<lambda_24>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 142b55db0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l112::<lambda_25>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  **(int **)param_1 = **(int **)param_1 + 1;
  return;
}

// Call @ 142b55dc0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l112::<lambda_26>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  **(int **)param_1 = **(int **)param_1 + 1;
  return;
}

// Call @ 142b55dd0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l112::<lambda_27>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)param_1,L"ClearDependencies partial, removed Package",
             *param_3 != Package);
  **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + 1;
  return;
}

// Call @ 142b55e10

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l112::<lambda_28>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  bool bVar1;
  
  if ((*param_3 == Package) || (*param_3 == Manage)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)param_1,L"ClearDependencies partial, removed Package+Manage",
             bVar1);
  **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + 1;
  return;
}

// Call @ 142b55e50

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l112::<lambda_29>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + 1;
  return;
}

// Call @ 142b55e60

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l59::<lambda_2>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  `FDependsNodeTest::RunTest'::__l59::<lambda_2>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 142b55e90

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l116::<lambda_30>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)param_1,
             L"RemoveManageReferencesToNode removed the manage dependency",*param_3 != Manage);
  **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + 1;
  return;
}

// Call @ 142b55ed0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l116::<lambda_31>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + 1;
  return;
}

// Call @ 142b55ee0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'[::M]::<lambda_34>,bool,FDependsNode_const_*>::Call
          (void *param_1,FDependsNode **param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (longlong)*param_2 - **(longlong **)((longlong)param_1 + 0x10);
  lVar2 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar2),8) + lVar2;
  iVar1 = (int)(lVar2 >> 7) - (int)(lVar2 >> 0x3f);
  if ((iVar1 != *(int *)param_1) && (iVar1 != *(int *)((longlong)param_1 + 4))) {
    return false;
  }
  return true;
}

// Call @ 142b55f20

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l176::<lambda_36>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  `FDependsNodeTest::RunTest'::__l176::<lambda_36>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 142b55f50

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l189::<lambda_37>,int,FDependsNode_*,bool>::Call
          (void *param_1,FDependsNode **param_2,bool *param_3)

{
  int iVar1;
  
  if (*param_2 == *(FDependsNode **)param_1) {
    return 0;
  }
  if (((*(int *)((longlong)param_1 + 0x10) != 0) && (*(int *)((longlong)param_1 + 0x10) != 2)) ||
     (iVar1 = 1, *param_2 != *(FDependsNode **)((longlong)param_1 + 8))) {
    iVar1 = -1;
  }
  return iVar1;
}

// Call @ 142b55f80

FDependsNode * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l189::<lambda_38>,FDependsNode_*,int>::Call
          (void *param_1,int *param_2)

{
  if (*param_2 == 0) {
    return *(FDependsNode **)param_1;
  }
  if ((*(int *)((longlong)param_1 + 0x10) == 0) && (*param_2 == 1)) {
    return *(FDependsNode **)((longlong)param_1 + 8);
  }
  return (FDependsNode *)0x0;
}

// Call @ 142b55fb0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l189::<lambda_39>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  `FDependsNodeTest::RunTest'::__l189::<lambda_39>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 142b55fe0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l189::<lambda_40>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  **(int **)param_1 = **(int **)param_1 + 1;
  return;
}

// Call @ 142b55ff0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l67::<lambda_5>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  `FDependsNodeTest::RunTest'::__l67::<lambda_5>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 142b56020

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l75::<lambda_8>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  `FDependsNodeTest::RunTest'::__l75::<lambda_8>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 142b879c0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

Type __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<enum_EAssetSetManagerResult::Type_(__cdecl*)(FAssetIdentifier_const_&,FAssetIdentifier_const_&,FAssetIdentifier_const_&,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,enum_EAssetSetManagerFlags::Type),enum_EAssetSetManagerResult::Type,FAssetIdentifier_const_&,FAssetIdentifier_const_&,FAssetIdentifier_const_&,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,enum_EAssetSetManagerFlags::Type>
::Call(void *param_1,FAssetIdentifier *param_2,FAssetIdentifier *param_3,FAssetIdentifier *param_4,
      EDependencyCategory *param_5,EDependencyProperty *param_6,Type *param_7)

{
  Type TVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142b87a01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TVar1 = (**(code **)param_1)(param_2,param_3,param_4,*param_5);
  return TVar1;
}

// Call @ 142b87a10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_2>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  local_res8[0] = *(undefined1 *)param_1;
  CheckCallable(*(void **)((longlong)param_1 + 0x280));
  pcVar1 = *(code **)((longlong)param_1 + 0x280);
  plVar3 = (longlong *)((longlong)param_1 + 0x290);
  if (*(longlong **)((longlong)param_1 + 0x2a8) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x2a8);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,local_res8,(longlong)param_1 + 8);
  return;
}

// Call @ 142b87a70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::AddAssetPath'::__l2::<lambda_1>,void,FName>
::Call(void *param_1,FName *param_2)

{
  `UE::AssetRegistry::FAssetRegistryImpl::AddAssetPath'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 142b87a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::CachePathsFromState'::__l2::<lambda_1>,void,FAssetData_const_&>
::Call(void *param_1,FAssetData *param_2)

{
  FAssetDataTagMap *pFVar1;
  FName FVar2;
  longlong lVar3;
  FName FVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  int iVar11;
  undefined1 auStack_318 [32];
  undefined1 auStack_2f8 [8];
  FName FStack_2f0;
  FTopLevelAssetPath FStack_2e8;
  undefined4 uStack_2d8;
  FTopLevelAssetPath FStack_2c8;
  FAssetRegistryExportPath FStack_2b8;
  FAssetRegistryExportPath FStack_290;
  TStringBuilderBase<wchar_t> TStack_268;
  wchar_t awStack_248 [256];
  ulonglong auStack_48 [2];
  
  auStack_48[0] = __security_cookie.value ^ (ulonglong)auStack_318;
  uStack_2d8 = 0;
  bVar5 = false;
  if (*(char *)(*(longlong *)((longlong)param_1 + 8) + 6) != '\0') {
    if ((*(byte *)&(param_2->TagsAndValues).field0_0x0 & 1) == 0) {
      pFVar1 = (param_2->TagsAndValues).field0_0x0.Loose;
      if (pFVar1 != (FAssetDataTagMap *)0x0) {
        uVar7 = (uint)pFVar1->_padding_;
        goto LAB_142b7f263;
      }
    }
    else {
      uVar7 = (uint)(param_2->TagsAndValues).field0_0x0.Fixed.Num;
LAB_142b7f263:
      bVar5 = false;
      if (uVar7 != 0) goto LAB_142b7f2ca;
    }
    TStack_268.Base = awStack_248;
    TStack_268.bIsDynamic = false;
    TStack_268.bIsExternal = false;
    TStack_268.CurPos = awStack_248;
    TStack_268.End = (wchar_t *)auStack_48;
    ::FName::AppendString(&param_2->PackageName,&TStack_268);
    bVar10 = true;
    FStack_2f0.ComparisonIndex.Value =
         (uint)((longlong)TStack_268.CurPos - (longlong)TStack_268.Base >> 1);
    auStack_2f8 = (undefined1  [8])TStack_268.Base;
    bVar6 = FPackageName::IsLocalizedPackage((TStringView<wchar_t> *)auStack_2f8);
    bVar5 = true;
    if (!bVar6) {
      bVar5 = true;
      goto LAB_142b7f2cd;
    }
  }
LAB_142b7f2ca:
  bVar10 = bVar5;
  bVar5 = false;
LAB_142b7f2cd:
  if (bVar10) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_268);
  }
  if (!bVar5) {
    FStack_2f0 = *(FName *)((longlong)param_1 + 0x10);
    auStack_2f8 = *(undefined1 (*) [8])param_1;
    FStack_2e8.AssetName = (FName)auStack_2f8;
    FStack_2e8.PackageName =
         (FName)TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::AddAssetPath'::__l2::<lambda_1>,void,FName>
                ::Call;
    FPathTree::CachePath
              ((FPathTree *)((longlong)auStack_2f8 + 0x7b8),param_2->PackagePath,
               (TFunctionRef<void___cdecl(FName)> *)&FStack_2e8);
    FVar2 = (param_2->AssetClassPath).AssetName;
    lVar3 = *(longlong *)param_1;
    uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    FVar4 = (param_2->AssetClassPath).PackageName;
    uVar8 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
    uVar8 = uVar8 + FVar4.Number;
    if (*(int *)(lVar3 + 0xc90) != *(int *)(lVar3 + 0xcbc)) {
      lVar9 = *(longlong *)(lVar3 + 0xcc8);
      if (*(longlong *)(lVar3 + 0xcc8) == 0) {
        lVar9 = lVar3 + 0xcc0;
      }
      iVar11 = *(int *)(lVar9 + (ulonglong)
                                (*(int *)(lVar3 + 0xcd0) - 1U &
                                (uVar8 * 0x40 + -0x61c88647 + uVar7 + FVar2.Number + (uVar8 >> 2) ^
                                uVar8)) * 4);
      if (iVar11 != -1) {
        lVar3 = *(longlong *)(lVar3 + 0xc88);
        do {
          lVar9 = (longlong)iVar11;
          if ((*(FName *)(lVar3 + lVar9 * 0x18) == (param_2->AssetClassPath).PackageName) &&
             (*(FName *)(lVar3 + 8 + lVar9 * 0x18) == (param_2->AssetClassPath).AssetName)) {
            if (iVar11 == -1) {
              return;
            }
            FAssetData::GetTagValueRef<FAssetRegistryExportPath>
                      (param_2,&FStack_2b8,FBlueprintTags::GeneratedClassPath);
            FAssetData::GetTagValueRef<FAssetRegistryExportPath>
                      (param_2,&FStack_290,FBlueprintTags::ParentClassPath);
            if (FStack_2b8.Package == (FName)0x0 &&
                (FStack_2b8.ClassPath.PackageName == (FName)0x0 && FStack_2b8.Object == (FName)0x0))
            {
              return;
            }
            if (FStack_290.Package == (FName)0x0 &&
                (FStack_290.ClassPath.PackageName == (FName)0x0 && FStack_290.Object == (FName)0x0))
            {
              return;
            }
            lVar3 = *(longlong *)param_1;
            FStack_2e8.PackageName.ComparisonIndex.Value = 0;
            FStack_2e8.PackageName.Number = 0;
            FStack_2e8.AssetName.ComparisonIndex.Value = 0;
            FStack_2e8.AssetName.Number = 0;
            FTopLevelAssetPath::TrySetPath(&FStack_2e8,FStack_290.Package,FStack_290.Object);
            auStack_2f8._0_4_ = 0;
            auStack_2f8._4_4_ = 0;
            FStack_2f0.ComparisonIndex.Value = 0;
            FStack_2f0.Number = 0;
            FTopLevelAssetPath::TrySetPath
                      ((FTopLevelAssetPath *)auStack_2f8,FStack_2b8.Package,FStack_2b8.Object);
            FStack_2c8.PackageName = FStack_2e8.PackageName;
            FStack_2c8.AssetName = FStack_2e8.AssetName;
            TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
            ::Emplace<FTopLevelAssetPath_const_&,FTopLevelAssetPath_const_&>
                      ((TMapBase<FTopLevelAssetPath,FTopLevelAssetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>_>
                        *)(lVar3 + 0x640),(FTopLevelAssetPath *)auStack_2f8,&FStack_2c8);
            *(undefined1 *)(*(longlong *)param_1 + 0x7a0) = 1;
            return;
          }
          iVar11 = *(int *)(lVar3 + 0x10 + lVar9 * 0x18);
        } while (iVar11 != -1);
      }
    }
  }
  return;
}

// Call @ 142b87a90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAssetRegistryImpl::EnumerateAllCachedPaths'::__l2::<lambda_1>,bool,FName>::Call
          (void *param_1,FName *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FName local_res8;
  FString local_18;
  
  local_res8 = *param_2;
  puVar1 = *(undefined8 **)param_1;
  pFVar4 = ::FName::ToString(&local_res8,&local_18);
  uVar3 = (*(code *)*puVar1)(puVar1[1],pFVar4);
  pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return (bool)uVar3;
}

// Call @ 142b87af0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::Utils::EnumerateMemoryAssets'::__l2::<lambda_1>,bool,UObject_const_*,FAssetData_&&>
::Call(void *param_1,UObject **param_2,FAssetData *param_3)

{
  bool bVar1;
  
  bVar1 = `UE::AssetRegistry::Utils::EnumerateMemoryAssets'::__l2::<lambda_1>::operator()
                    (param_1,*param_2,param_3);
  return bVar1;
}

// Call @ 142b87b00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAssetRegistryImpl::GetAllCachedPaths'::__l2::<lambda_1>,bool,FName>::Call
          (void *param_1,FName *param_2)

{
  bool bVar1;
  
  bVar1 = `UAssetRegistryImpl::GetAllCachedPaths'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 142b87b10

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAssetRegistryImpl::GetInMemoryAssets'::__l2::<lambda_1>,bool,FAssetData_&&>::
Call(void *param_1,FAssetData *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  pFVar2 = *(ForAnyElementType **)param_1;
  if (((FAssetData *)pFVar2->Data <= param_2) &&
     (param_2 < (FAssetData *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  FAssetData::FAssetData((FAssetData *)(pFVar2->Data + (longlong)iVar6 * 0x68),param_2);
  return true;
}

// Call @ 142b87b20

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAssetRegistryImpl::GetSubPaths'::__l2::<lambda_1>,bool,FName>::Call
          (void *param_1,FName *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FName FVar3;
  int iVar4;
  
  pFVar2 = *(ForAnyElementType **)param_1;
  FVar3 = *param_2;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  iVar4 = *(int *)&pFVar2[1].Data;
  if (iVar4 == *piVar1) {
    iVar4 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar4 + 1;
  *(FName *)(pFVar2->Data + (longlong)iVar4 * 8) = FVar3;
  return true;
}

// Call @ 142b87b70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAssetRegistryImpl::GetSubPaths'::__l2::<lambda_1>,bool,FName>::Call
          (void *param_1,FName *param_2)

{
  bool bVar1;
  
  bVar1 = `UAssetRegistryImpl::GetSubPaths'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 142b87b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::Premade::FPreloader::KickPreload'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FPreloader *this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  ELoadResult EVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  ELoadResult aEStack_58 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong *plStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  this = *(FPreloader **)param_1;
  EVar7 = AssetRegistry::Premade::FPreloader::TryLoad(this);
  (**(code **)(this->PreloadReady->_padding_ + 0x10))();
  lpCriticalSection = &this->StateLock;
  uStack_48 = (code *)0x0;
  plStack_20 = (longlong *)0x0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->LoadState == Loading) &&
       (this->LoadState = Loaded, *(longlong *)&this->ConsumeCallback != 0)) {
      pcVar5 = *(code **)&this->ConsumeCallback;
      uVar8 = *(undefined8 *)&(this->ConsumeCallback).field_0x8;
      uVar1 = *(undefined4 *)&(this->ConsumeCallback).field_0x10;
      uVar2 = *(undefined4 *)&(this->ConsumeCallback).field_0x14;
      uVar3 = *(undefined4 *)&(this->ConsumeCallback).field_0x18;
      uVar4 = *(undefined4 *)&(this->ConsumeCallback).field_0x1c;
      uVar6 = CONCAT44(uStack_24,uStack_28);
      uStack_28 = *(undefined4 *)&(this->ConsumeCallback).field_0x20;
      uStack_24 = *(undefined4 *)&(this->ConsumeCallback).field_0x24;
      plVar10 = *(longlong **)&(this->ConsumeCallback).field_0x28;
      *(undefined4 *)&this->ConsumeCallback = (undefined4)uStack_48;
      *(undefined4 *)&(this->ConsumeCallback).field_0x4 = uStack_48._4_4_;
      *(undefined4 *)&(this->ConsumeCallback).field_0x8 = (undefined4)uStack_40;
      *(undefined4 *)&(this->ConsumeCallback).field_0xc = uStack_40._4_4_;
      *(undefined4 *)&(this->ConsumeCallback).field_0x10 = uStack_38;
      *(undefined4 *)&(this->ConsumeCallback).field_0x14 = uStack_34;
      *(undefined4 *)&(this->ConsumeCallback).field_0x18 = uStack_30;
      *(undefined4 *)&(this->ConsumeCallback).field_0x1c = uStack_2c;
      *(undefined8 *)&(this->ConsumeCallback).field_0x20 = uVar6;
      *(longlong **)&(this->ConsumeCallback).field_0x28 = plStack_20;
      uStack_48 = pcVar5;
      uStack_40 = uVar8;
      uStack_38 = uVar1;
      uStack_34 = uVar2;
      uStack_30 = uVar3;
      uStack_2c = uVar4;
      plStack_20 = plVar10;
      if (*(longlong *)&this->ConsumeCallback != 0) {
        plVar10 = *(longlong **)&(this->ConsumeCallback).field_0x28;
        plVar9 = (longlong *)&(this->ConsumeCallback).field_0x10;
        if (plVar10 != (longlong *)0x0) {
          plVar9 = plVar10;
        }
        (**(code **)(*plVar9 + 0x10))();
        *(undefined8 *)&this->ConsumeCallback = 0;
      }
      this->LoadState = Consumed;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (uStack_48 != (code *)0x0) {
      aEStack_58[0] = EVar7;
      CheckCallable(uStack_48);
      pcVar5 = uStack_48;
      plVar10 = (longlong *)&uStack_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar10 = plStack_20;
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      (*pcVar5)(uVar8,aEStack_58,&this->Payload);
      if ((this->OnTaskGraphReady).bIsSet != false) {
        (this->OnTaskGraphReady).bIsSet = false;
      }
      if (this->PreloadReady != (FEvent *)0x0) {
        FGenericPlatformProcess::ReturnSynchEventToPool(this->PreloadReady);
        this->PreloadReady = (FEvent *)0x0;
      }
      ::FString::Reset(&this->ARPath,0);
      FAssetRegistryState::Reset(&this->Payload);
      if (uStack_48 != (code *)0x0) {
        plVar10 = (longlong *)&uStack_38;
        if (plStack_20 != (longlong *)0x0) {
          plVar10 = plStack_20;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  ReportNotNullPtr();
}

// Call @ 142b87b90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::RemovePackageData'::__l2::<lambda_1>,bool,FAssetData_*>
::Call(void *param_1,FAssetData **param_2)

{
  bool bVar1;
  
  bVar1 = `UE::AssetRegistry::FAssetRegistryImpl::RemovePackageData'::__l2::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 142b87ba0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::UpdatePersistentMountPoints'::__l2::<lambda_1>,void,FName>
::Call(void *param_1,FName *param_2)

{
  `UE::AssetRegistry::FAssetRegistryImpl::UpdatePersistentMountPoints'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 142b87bb0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAssetRegistryImpl::EnumerateAllCachedPaths'::__l3::<lambda_1>,bool,FName>::Call
          (void *param_1,FName *param_2)

{
  bool bVar1;
  
  bVar1 = `UAssetRegistryImpl::EnumerateAllCachedPaths'::__l3::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 142b87bc0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAssetRegistryImpl::EnumerateSubPaths'::__l3::<lambda_1>,bool,FName>::Call
          (void *param_1,FName *param_2)

{
  bool bVar1;
  
  bVar1 = `UAssetRegistryImpl::EnumerateSubPaths'::__l3::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 142b87bd0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAssetRegistryImpl::EnumerateSubPaths'::__l3::<lambda_1>,bool,FName>::Call
          (void *param_1,FName *param_2)

{
  bool bVar1;
  
  bVar1 = `UAssetRegistryImpl::EnumerateSubPaths'::__l3::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 142b87be0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<``UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_2>::operator()'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 142b87c00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UE::AssetRegistry::Premade::FPreloader::KickPreload'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 142b87c20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::Premade::FPreloader::FPreloader'::__l5::<lambda_1>,void>::
Call(void *param_1)

{
  FPreloader *this;
  bool bVar1;
  FEvent *pFVar2;
  TMulticastDelegate<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy> *this_00;
  FDelegateHandle FVar3;
  bool bVar4;
  <lambda_1> a<StackX_18 [16];
  
  *(undefined1 *)(*(longlong *)param_1 + 0x2f0) = 2;
  this = *(FPreloader **)param_1;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_UE::AssetRegistry::Premade::FPreloader::DelayedInitialize(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId505,
               "FCookedAssetRegistryPreloader::DelayedInitialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x1f9);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_UE::AssetRegistry::Premade::FPreloader::DelayedInitialize(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId505);
  }
  bVar1 = FGenericPlatformProcess::SupportsMultithreading();
  if ((bVar1) && (bVar1 = FTaskGraphInterface::IsRunning(), bVar1)) {
    pFVar2 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    this->PreloadReady = pFVar2;
    (**(code **)(pFVar2->_padding_ + 0x10))(pFVar2);
    bVar1 = AssetRegistry::Premade::FPreloader::TrySetPath(this);
    if (bVar1) {
      AssetRegistry::Premade::FPreloader::KickPreload(this);
    }
    else {
      this->LoadState = NotFound;
      this_00 = FCoreDelegates::GetOnPakFileMounted2();
      FVar3 = TMulticastDelegateRegistration<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
              ::
              AddLambda<_UE::AssetRegistry::Premade::FPreloader::DelayedInitialize_::__l10::<lambda_1>_>
                        ((TMulticastDelegateRegistration<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
                          *)this_00,a<StackX_18);
                    /* WARNING: Load size is inaccurate */
      (this->PakMountedDelegate).ID = *FVar3.ID;
    }
  }
  else {
    this->LoadState = LoadSynchronous;
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 142b87c30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAssetRegistryImpl::EnumerateAllAssets'::__l5::<lambda_1>,bool,FAssetData_&&>::
Call(void *param_1,FAssetData *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142b87c3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1]);
  return (bool)uVar1;
}

// Call @ 142b87c50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAssetRegistryImpl::EnumerateAllPackages'::__l5::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 local_res8;
  
  iVar1 = *param_2;
  if (((iVar1 != -1) && (-1 < iVar1)) &&
     (iVar1 < ((*(TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  **)param_1)->Data).ArrayNum)) {
    bVar2 = TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::IsAllocated(*(TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            **)param_1,iVar1);
    if (bVar2) {
      local_res8 = *(undefined8 *)(**(longlong **)param_1 + (longlong)iVar1 * 0x18);
      (*(code *)**(undefined8 **)((longlong)param_1 + 8))
                ((*(undefined8 **)((longlong)param_1 + 8))[1],&local_res8,
                 *(undefined8 *)(**(longlong **)param_1 + 8 + (longlong)iVar1 * 0x18));
    }
  }
  return;
}

// Call @ 142b87cc0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAssetRegistryImpl::GetAllAssets'::__l5::<lambda_1>,bool,FAssetData_&&>::Call
          (void *param_1,FAssetData *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  pFVar2 = *(ForAnyElementType **)param_1;
  if (((FAssetData *)pFVar2->Data <= param_2) &&
     (param_2 < (FAssetData *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  FAssetData::FAssetData((FAssetData *)(pFVar2->Data + (longlong)iVar6 * 0x68),param_2);
  return true;
}

// Call @ 142b87cd0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAssetRegistryImpl::GetAssets'::__l5::<lambda_1>,bool,FAssetData_&&>::Call
          (void *param_1,FAssetData *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  pFVar2 = *(ForAnyElementType **)param_1;
  if (((FAssetData *)pFVar2->Data <= param_2) &&
     (param_2 < (FAssetData *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  FAssetData::FAssetData((FAssetData *)(pFVar2->Data + (longlong)iVar6 * 0x68),param_2);
  return true;
}

// Call @ 142b87ce0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::HasAssets'::__l5::<lambda_1>,bool,FName>
::Call(void *param_1,FName *param_2)

{
  bool bVar1;
  
  bVar1 = FAssetRegistryState::HasAssets
                    ((FAssetRegistryState *)(*(longlong *)param_1 + 0x40),*param_2,true);
  *(bool *)*(undefined8 *)((longlong)param_1 + 8) = bVar1;
  return **(char **)((longlong)param_1 + 8) == '\0';
}

// Call @ 142b87d20

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::RemoveAssetPath'::__l5::<lambda_1>,bool,FAssetData_const_&>
::Call(void *param_1,FAssetData *param_2)

{
  **(undefined1 **)param_1 = 1;
  return false;
}

// Call @ 142b87d30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_1>,void,enum_UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState_&&>
::Call(void *param_1,ELoadResult *param_2,FAssetRegistryState *param_3)

{
  `UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_1>::
  operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 142b87d40

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAssetRegistryImpl::EnumerateAssets'::__l8::<lambda_1>,bool,FAssetData_&&>::Call
          (void *param_1,FAssetData *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142b87d4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1]);
  return (bool)uVar1;
}

// Call @ 142b87d60

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::EnumerateAssetsByPathNoTags'::__l8::<lambda_1>,bool,UObject_const_*,FAssetData_&&>
::Call(void *param_1,UObject **param_2,FAssetData *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142b87d6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1],param_3);
  return (bool)uVar1;
}

// Call @ 142b87d80

/* WARNING: Removing unreachable block (ram,0x000142b80dde) */
/* WARNING: Removing unreachable block (ram,0x000142b80dec) */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::InitRedirectors'::__l9::<lambda_1>,bool,FAssetData_const_&>
::Call(void *param_1,FAssetData *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  ForAnyElementType *pFVar8;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  ForAnyElementType FStack_28;
  undefined8 uStack_20;
  ForAnyElementType FStack_18;
  undefined8 uStack_10;
  
  ::FName::ToString(&param_2->PackageName,&FStack_58);
  (**(code **)(*(longlong *)**(undefined8 **)param_1 + 8))();
  ::FString::PrintfImpl(&FStack_38,L"/%s/");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (FStack_38.Data.ArrayNum != 0) {
    FVar7.Data = FStack_38.Data.AllocatorInstance.Data;
  }
  ::FString::Replace(&FStack_58,&FStack_48,(wchar_t *)FVar7.Data,L"/Game/",IgnoreCase);
  FVar7.Data = FStack_48.Data.AllocatorInstance.Data;
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  pFVar8 = (ForAnyElementType *)(lVar1 + 0xcd8);
  FStack_28.Data = (FScriptContainerElement *)0x0;
  iVar5 = FStack_48.Data.ArrayNum;
  uStack_20 = CONCAT44(uStack_20._4_4_,iVar5);
  if (iVar5 == 0) {
    uStack_20 = FStack_48.Data._8_8_ & 0xffffffff;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,&FStack_28,iVar5,(int *)((longlong)&uStack_20 + 4));
    memcpy(FStack_28.Data,FVar7.Data,(longlong)iVar5 * 2);
  }
  FVar7.Data = FStack_58.Data.AllocatorInstance.Data;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  iVar5 = FStack_58.Data.ArrayNum;
  uStack_10 = CONCAT44(uStack_10._4_4_,iVar5);
  if (iVar5 == 0) {
    uStack_10 = FStack_58.Data._8_8_ & 0xffffffff;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,&FStack_18,iVar5,(int *)((longlong)&uStack_10 + 4));
    memcpy(FStack_18.Data,FVar7.Data,(longlong)iVar5 * 2);
  }
  if (((pFVar8->Data <= (FScriptContainerElement *)&FStack_28) &&
      ((FScriptContainerElement *)&FStack_28 <
       pFVar8->Data + (longlong)*(int *)(lVar1 + 0xce4) * 0x20)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar5 = *(int *)(lVar1 + 0xce0);
  if (iVar5 == *(int *)(lVar1 + 0xce4)) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,pFVar8,(int *)(lVar1 + 0xce4));
  }
  *(int *)(lVar1 + 0xce0) = iVar5 + 1;
  pFVar6 = pFVar8->Data + (longlong)iVar5 * 0x20;
  *(undefined8 *)pFVar6 = 0;
  *(FScriptContainerElement **)pFVar6 = FStack_28.Data;
  *(undefined4 *)(pFVar6 + 8) = (undefined4)uStack_20;
  *(undefined4 *)(pFVar6 + 0xc) = uStack_20._4_4_;
  *(undefined8 *)(pFVar6 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar6 + 0x10) = FStack_18.Data;
  *(undefined4 *)(pFVar6 + 0x18) = (undefined4)uStack_10;
  *(undefined4 *)(pFVar6 + 0x1c) = uStack_10._4_4_;
  uStack_10 = 0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  uStack_20 = 0;
  FStack_28.Data = (FScriptContainerElement *)0x0;
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
  }
  return true;
}

// Call @ 142b87d90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::CollectCodeGeneratorClasses'::__l13::<lambda_1>,bool,FAssetData_const_*>
::Call(void *param_1,FAssetData **param_2)

{
  bool bVar1;
  
  bVar1 = `UE::AssetRegistry::FAssetRegistryImpl::CollectCodeGeneratorClasses'::__l13::<lambda_1>::
          operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 142b87da0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::OnContentPathDismounted'::__l13::<lambda_1>,bool,FAssetData_*>
::Call(void *param_1,FAssetData **param_2)

{
  bool bVar1;
  
  bVar1 = `UE::AssetRegistry::FAssetRegistryImpl::OnContentPathDismounted'::__l13::<lambda_1>::
          operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 142b87db0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::ScanModifiedAssetFiles'::__l13::<lambda_1>,bool,FAssetData_const_*>
::Call(void *param_1,FAssetData **param_2)

{
  bool bVar1;
  
  bVar1 = `UE::AssetRegistry::FAssetRegistryImpl::ScanModifiedAssetFiles'::__l13::<lambda_1>::
          operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 142b87dc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::LoadPremadeAssetRegistry'::__l14::<lambda_1>,void,FAssetData_const_&>
::Call(void *param_1,FAssetData *param_2)

{
  longlong lVar1;
  int iVar2;
  FAssetData *this;
  
  lVar1 = *(longlong *)param_1;
  iVar2 = *(int *)(lVar1 + 0x30);
  if (iVar2 == *(int *)(lVar1 + 0x34)) {
    iVar2 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,(ForAnyElementType *)(lVar1 + 0x28),(int *)(lVar1 + 0x34));
  }
  *(int *)(lVar1 + 0x30) = iVar2 + 1;
  this = (FAssetData *)(*(longlong *)(lVar1 + 0x28) + (longlong)iVar2 * 0x70);
  FAssetData::FAssetData(this,param_2);
  this[1].PackageName.ComparisonIndex.Value = 0;
  return;
}

// Call @ 142b87e20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::RemoveAssetPath'::__l2::<lambda_2>,void,FName>
::Call(void *param_1,FName *param_2)

{
  `UE::AssetRegistry::FAssetRegistryImpl::RemoveAssetPath'::__l2::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 142b87e30

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

Type __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAssetRegistryImpl::SetManageReferences'::__l2::<lambda_2>,enum_EAssetSetManagerResult::Type,UE::AssetRegistry::FShouldSetManagerContext_&>
::Call(void *param_1,FShouldSetManagerContext *param_2)

{
  undefined8 *puVar1;
  FAssetIdentifier *pFVar2;
  FAssetIdentifier *pFVar3;
  FAssetIdentifier *pFVar4;
  code *pcVar5;
  Type TVar6;
  undefined8 uVar7;
  longlong *plVar8;
  EDependencyProperty aEStackX_8 [8];
  EDependencyCategory aEStackX_10 [8];
  Type aTStackX_18 [4];
  
  aTStackX_18[0] = param_2->EdgeFlags;
  puVar1 = *(undefined8 **)param_1;
  pFVar2 = param_2->Target;
  pFVar3 = param_2->Source;
  pFVar4 = param_2->Manager;
  aEStackX_8[0] = param_2->EdgeARProperties;
  aEStackX_10[0] = param_2->EdgeARCategory;
  CheckCallable((void *)*puVar1);
  pcVar5 = (code *)*puVar1;
  plVar8 = puVar1 + 2;
  if ((longlong *)puVar1[5] != (longlong *)0x0) {
    plVar8 = (longlong *)puVar1[5];
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  TVar6 = (*pcVar5)(uVar7,pFVar4,pFVar3,pFVar2,aEStackX_10,aEStackX_8,aTStackX_18);
  return TVar6;
}

// Call @ 142b87e40

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAssetRegistryImpl::GetAllAssets'::__l6::<lambda_2>,bool,FAssetData_const_&>::
Call(void *param_1,FAssetData *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  pFVar2 = *(ForAnyElementType **)param_1;
  if (((FAssetData *)pFVar2->Data <= param_2) &&
     (param_2 < (FAssetData *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  FAssetData::FAssetData((FAssetData *)(pFVar2->Data + (longlong)iVar6 * 0x68),param_2);
  return true;
}

// Call @ 142b87e50

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAssetRegistryImpl::GetAssets'::__l6::<lambda_2>,bool,FAssetData_const_&>::Call
          (void *param_1,FAssetData *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  
  pFVar2 = *(ForAnyElementType **)param_1;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  iVar3 = *(int *)&pFVar2[1].Data;
  if (iVar3 == *piVar1) {
    iVar3 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar3 + 1;
  FAssetData::FAssetData((FAssetData *)(pFVar2->Data + (longlong)iVar3 * 0x68),param_2);
  return true;
}

// Call @ 142b87eb0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAssetRegistryImpl::TickOnBackgroundThread'::__l7::<lambda_2>,bool>::Call
          (void *param_1)

{
  return true;
}

// Call @ 142b87ed0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_2>,void,enum_UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState_&&>
::Call(void *param_1,ELoadResult *param_2,FAssetRegistryState *param_3)

{
  `UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l8::<lambda_2>::
  operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 142b87ee0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAssetRegistryImpl::EnumerateAllAssets'::__l9::<lambda_2>,bool,FAssetData_const_&>
::Call(void *param_1,FAssetData *param_2)

{
  ForElementType<FAssetData> FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ForElementType<FAssetData> FVar6;
  
  FVar1 = *(ForElementType<FAssetData> *)param_1;
  FVar6 = *(ForElementType<FAssetData> *)((longlong)FVar1 + 0x3400);
  if (*(ForElementType<FAssetData> *)((longlong)FVar1 + 0x3400) == (ForElementType<FAssetData>)0x0)
  {
    FVar6 = FVar1;
  }
  if (((ulonglong)FVar6 <= param_2) &&
     (param_2 < (FAssetData *)
                ((longlong)*(int *)((longlong)FVar1 + 0x340c) * 0x68 + (longlong)FVar6))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = *(int *)((longlong)FVar1 + 0x3408);
  if (iVar5 == *(int *)((longlong)FVar1 + 0x340c)) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData>_>
                      (0x868,(ForElementType<FAssetData> *)FVar1,(int *)((longlong)FVar1 + 0x340c));
  }
  *(int *)((longlong)FVar1 + 0x3408) = iVar5 + 1;
  FVar6 = *(ForElementType<FAssetData> *)((longlong)FVar1 + 0x3400);
  if (*(ForElementType<FAssetData> *)((longlong)FVar1 + 0x3400) == (ForElementType<FAssetData>)0x0)
  {
    FVar6 = FVar1;
  }
  FAssetData::FAssetData((FAssetData *)((longlong)FVar6 + (longlong)iVar5 * 0x68),param_2);
  return true;
}

// Call @ 142b87ef0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::LoadPremadeAssetRegistry'::__l21::<lambda_2>,void,FAssetData_const_&>
::Call(void *param_1,FAssetData *param_2)

{
  longlong lVar1;
  int iVar2;
  FAssetData *this;
  
  lVar1 = *(longlong *)param_1;
  iVar2 = *(int *)(lVar1 + 0x30);
  if (iVar2 == *(int *)(lVar1 + 0x34)) {
    iVar2 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,(ForAnyElementType *)(lVar1 + 0x28),(int *)(lVar1 + 0x34));
  }
  *(int *)(lVar1 + 0x30) = iVar2 + 1;
  this = (FAssetData *)(*(longlong *)(lVar1 + 0x28) + (longlong)iVar2 * 0x70);
  FAssetData::FAssetData(this,param_2);
  this[1].PackageName.ComparisonIndex.Value = 0;
  return;
}

// Call @ 142b87f50

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences'::__l58::<lambda_2>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  FDependsNode *local_res18;
  FDependsNode *local_res20;
  
  local_res18 = *param_2;
  local_res20 = (FDependsNode *)param_4;
  TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>::
  Emplace<FDependsNode_*_const_&>
            (*(TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator> **)
              param_1,&local_res20,(bool *)&local_res18);
  return;
}

// Call @ 142b87f90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAssetRegistryImpl::EnumerateAssets'::__l12::<lambda_2>,bool,FAssetData_const_&>
::Call(void *param_1,FAssetData *param_2)

{
  ForElementType<FAssetData> FVar1;
  int iVar2;
  ForElementType<FAssetData> FVar3;
  
  FVar1 = *(ForElementType<FAssetData> *)param_1;
  iVar2 = *(int *)((ForElementType<FAssetData> *)((longlong)FVar1 + 0x3408))->InlineData;
  if (iVar2 == *(int *)((longlong)FVar1 + 0x340c)) {
    iVar2 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FAssetData>_>
                      (0x868,(ForElementType<FAssetData> *)FVar1,(int *)((longlong)FVar1 + 0x340c));
  }
  *(int *)((ForElementType<FAssetData> *)((longlong)FVar1 + 0x3408))->InlineData = iVar2 + 1;
  FVar3 = *(ForElementType<FAssetData> *)((longlong)FVar1 + 0x3400);
  if (*(ForElementType<FAssetData> *)((longlong)FVar1 + 0x3400) == (ForElementType<FAssetData>)0x0)
  {
    FVar3 = FVar1;
  }
  FAssetData::FAssetData((FAssetData *)((longlong)FVar3 + (longlong)iVar2 * 0x68),param_2);
  return true;
}

// Call @ 142b88000

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::ConsumeOrDeferPreloadedPremade'::__l10::<lambda_3>,void,enum_UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState_&&>
::Call(void *param_1,ELoadResult *param_2,FAssetRegistryState *param_3)

{
  AssetRegistry::FAssetRegistryImpl::LoadPremadeAssetRegistry
            (*(FAssetRegistryImpl **)param_1,*(FEventContext **)((longlong)param_1 + 8),*param_2,
             param_3);
  return;
}

// Call @ 142b88020

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::Utils::EnumerateMemoryAssetsHelper'::__l24::<lambda_3>,void,UObject_*>
::Call(void *param_1,UObject **param_2)

{
  `UE::AssetRegistry::Utils::EnumerateMemoryAssetsHelper'::__l24::<lambda_3>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 142b88030

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::DependencyDataGathered'::__l109::<lambda_3>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  `UE::AssetRegistry::FAssetRegistryImpl::DependencyDataGathered'::__l109::<lambda_3>::operator()
            (param_1,*param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 142b88060

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAssetRegistryImpl::EnumerateAllAssets'::__l12::<lambda_3>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UAssetRegistryImpl::EnumerateAllAssets'::__l12::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 142b88070

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::DependencyDataGathered'::__l2::<lambda_4>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::AssetRegistry::FAssetRegistryImpl::DependencyDataGathered'::__l2::<lambda_4>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 142b88080

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l30::<lambda_4>,bool,FAssetData_const_&>
::Call(void *param_1,FAssetData *param_2)

{
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *this;
  FSoftObjectPath local_res8;
  FSoftObjectPath local_28;
  
  this = *(TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> **)param_1;
  FAssetData::GetSoftObjectPath(param_2,&local_28);
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::
  Emplace<FSoftObjectPath>(this,&local_res8,(bool *)&local_28);
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return true;
}

// Call @ 142b880d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::Utils::EnumerateMemoryAssetsHelper'::__l33::<lambda_4>,bool,UObject_*>
::Call(void *param_1,UObject **param_2)

{
  bool bVar1;
  
  bVar1 = `UE::AssetRegistry::Utils::EnumerateMemoryAssetsHelper'::__l33::<lambda_4>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 142b880e0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences'::__l114::<lambda_4>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
::Call(void *param_1,FDependsNode **param_2,EDependencyCategory *param_3,
      EDependencyProperty *param_4,bool *param_5)

{
  EDependencyProperty EVar1;
  
  EVar1 = *param_4;
  if ((EVar1 & (Build|Game)) != None) {
    `UE::AssetRegistry::FAssetRegistryImpl::SetManageReferences'::__l91::<lambda_3>::operator()
              (*(void **)param_1,*(FDependsNode **)((longlong)param_1 + 8),*param_2,*param_3,EVar1,
               (EVar1 & 2 | 4) >> 1 & *(EManageSearchColorBit *)((longlong)param_1 + 0x10));
  }
  return;
}

// Call @ 142b88130

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::DependencyDataGathered'::__l2::<lambda_5>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::AssetRegistry::FAssetRegistryImpl::DependencyDataGathered'::__l2::<lambda_5>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 142b88140

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetRegistry::FAssetRegistryImpl::ScanPathsSynchronous'::__l45::<lambda_5>,bool,FAssetData_const_*>
::Call(void *param_1,FAssetData **param_2)

{
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *this;
  FSoftObjectPath local_res8;
  FSoftObjectPath local_28;
  
  this = *(TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> **)param_1;
  FAssetData::GetSoftObjectPath(*param_2,&local_28);
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::
  Emplace<FSoftObjectPath>(this,&local_res8,(bool *)&local_28);
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return true;
}

