// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMerging
// Functions: 16

// StaticClass @ 14ab8eb10

UClass * __cdecl USkeletalMergingLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMergingLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SkeletalMerging",L"SkeletalMergingLibrary",
               &Z_Registration_Info_UClass_USkeletalMergingLibrary.InnerSingleton,
               StaticRegisterNativesUSkeletalMergingLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USkeletalMergingLibrary>,
               InternalVTableHelperCtorCaller<USkeletalMergingLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMergingLibrary.InnerSingleton;
}

// USkeletalMergingLibrary @ 14ab91190

USkeletalMergingLibrary * __thiscall
USkeletalMergingLibrary::USkeletalMergingLibrary
          (USkeletalMergingLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7USkeletalMergingLibrary__6B_;
  return this;
}

// USkeletalMergingLibrary @ 14ab911c0

USkeletalMergingLibrary * __thiscall
USkeletalMergingLibrary::USkeletalMergingLibrary
          (USkeletalMergingLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7USkeletalMergingLibrary__6B_;
  return this;
}

// ~USkeletalMergingLibrary @ 14ab915b0

void __thiscall USkeletalMergingLibrary::~USkeletalMergingLibrary(USkeletalMergingLibrary *this)

{
  *(undefined ***)this = &___7USkeletalMergingLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14ab91670

void __thiscall
`USkeletalMergingLibrary::MergeSkeletons'::__l84::<lambda_2>::operator()
          (void *this,FName param_1,FCurveMetaData *param_2)

{
  longlong lVar1;
  TSet<TTuple<FName,FCurveMetaData_const_*>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData_const_*,0>,FDefaultSetAllocator>
  *this_00;
  uint uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  undefined1 local_res8 [8];
  FName local_res10;
  FCurveMetaData *local_res18;
  FName *local_18;
  FCurveMetaData **local_10;
  
  this_00 = *(TSet<TTuple<FName,FCurveMetaData_const_*>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData_const_*,0>,FDefaultSetAllocator>
              **)this;
  local_res10 = param_1;
  local_res18 = param_2;
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  uVar2 = uVar2 + param_1.Number;
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    FVar4 = (this_00->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this_00->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this_00->HashSize - 1U & uVar2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&this_00->Elements + (longlong)iVar3 * 0x18;
        if (*(FName *)(*(longlong *)&this_00->Elements + (longlong)iVar3 * 0x18) == local_res10) {
          if (lVar1 != 0) {
            return;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_18 = &local_res10;
  local_10 = &local_res18;
  TSet<TTuple<FName,FCurveMetaData_const_*>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData_const_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<FName_const_&,FCurveMetaData_const_*_&&>_>
            (this_00,(uint)local_res8,
             (TPairInitializer<FName_const_&,FCurveMetaData_const_*_&&> *)(ulonglong)uVar2,
             (bool *)&local_18);
  return;
}

// AddAnimationSlotGroups @ 14ab917a0

void __cdecl
USkeletalMergingLibrary::AddAnimationSlotGroups
          (USkeleton *param_1,
          TMap<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
          *param_2)

{
  undefined1 *puVar1;
  FName FVar2;
  ulonglong uVar3;
  code *pcVar4;
  TMap<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  FName FVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  FName *pFVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_148;
  undefined4 uStack_114;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TMap<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  iVar18 = *(int *)&param_2->field_0x28;
  puVar1 = &param_2->field_0x10;
  iVar14 = 0;
  iVar17 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar18 != 0) {
    puVar19 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar11 = *puVar19;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar14;
      iVar17 = iVar17 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar18;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14ab9184e;
      uVar11 = puVar19[lVar10 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = (int)lVar10 + -1 + iVar17;
    if (iVar18 < iVar8) {
      iVar8 = iVar18;
    }
  }
LAB_14ab9184e:
  local_148 = *(uint *)&param_2->field_0x28;
  uVar11 = local_148 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar7,iVar14);
  TStack_90.CurrentBitIndex = iVar8;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)local_148 >> 5;
  TStack_90._28_4_ = local_4c;
  TStack_90.BaseBitIndex = iVar17;
  uStack_70 = CONCAT44(uStack_114,*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34);
  local_98 = param_2;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)local_148 < 0) || (iVar18 < (int)local_148)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&param_2->field_0x28;
  if (local_148 != uVar7) {
    puVar15 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)local_148 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      uVar11 = uVar11 + 0x20;
      iVar14 = iVar14 + 1;
      local_148 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14ab91980;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_148 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar7 < (int)local_148) {
      local_148 = uVar7;
    }
  }
LAB_14ab91980:
  do {
    pTVar5 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_90.CurrentBitIndex == local_148) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == param_2))
    {
      return;
    }
    pFVar20 = (FName *)((longlong)TStack_90.CurrentBitIndex * 0x60 + *(longlong *)pTVar5);
    USkeleton::AddSlotGroupName(param_1,pFVar20);
    uVar7 = pFVar20[6].ComparisonIndex.Value;
    FVar2 = (FName)(pFVar20 + 3);
    iVar17 = 0;
    iVar18 = 0;
    uVar13 = 1;
    uVar11 = 0;
    if (uVar7 != 0) {
      FVar16 = FVar2;
      if (pFVar20[5] != (FName)0x0) {
        FVar16 = pFVar20[5];
      }
      uVar11 = *(uint *)FVar16;
      while (uVar11 == 0) {
        lVar10 = (longlong)iVar17;
        iVar18 = iVar18 + 0x20;
        iVar17 = iVar17 + 1;
        uVar11 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_14ab91a5e;
        uVar11 = ((uint *)((longlong)FVar16 + 4))[lVar10];
      }
      uVar13 = -uVar11 & uVar11;
      uVar3 = (ulonglong)uVar13 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar11 = iVar18 + -1 + (int)lVar10;
      if ((int)uVar7 < (int)uVar11) {
        uVar11 = uVar7;
      }
    }
LAB_14ab91a5e:
    uVar9 = pFVar20[6].ComparisonIndex.Value;
    uVar12 = uVar9 & 0xffffffe0;
    TStack_c0._padding_ = CONCAT44(uVar13,iVar17);
    TStack_c0.CurrentBitIndex = uVar11;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)uVar9 >> 5;
    TStack_c0._28_4_ = iVar8;
    TStack_c0.BaseBitIndex = iVar18;
    uStack_a0 = CONCAT44(uStack_cc,pFVar20[2].ComparisonIndex.Value - pFVar20[7].Number);
    TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar2;
    if ((((int)uVar9 < 0) || ((int)uVar7 < (int)uVar9)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = pFVar20[6].ComparisonIndex.Value;
    if (uVar9 != uVar7) {
      FVar16 = FVar2;
      if (pFVar20[5] != (FName)0x0) {
        FVar16 = pFVar20[5];
      }
      uVar11 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar17 * 4);
      while (uVar11 == 0) {
        lVar10 = (longlong)iVar17;
        uVar12 = uVar12 + 0x20;
        iVar17 = iVar17 + 1;
        uVar9 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_14ab91b70;
        uVar11 = ((uint *)((longlong)FVar16 + 4))[lVar10];
      }
      uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar9 = (int)lVar10 + -1 + uVar12;
      if ((int)uVar7 < (int)uVar9) {
        uVar9 = uVar7;
      }
    }
LAB_14ab91b70:
    while( true ) {
      if (pFVar20[2].ComparisonIndex.Value - pFVar20[7].Number != (int)uStack_a0) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if ((TStack_c0.CurrentBitIndex == uVar9) && ((FName)TStack_c0.Array == FVar2)) break;
      USkeleton::SetSlotGroupName
                (param_1,(FName *)((longlong)TStack_c0.CurrentBitIndex * 0x10 + (longlong)pFVar20[1]
                                  ),pFVar20);
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  } while( true );
}

// AddBlendProfiles @ 14ab91c10

void __cdecl
USkeletalMergingLibrary::AddBlendProfiles
          (USkeleton *param_1,
          TMap<FName,TArray<UBlendProfile_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<UBlendProfile_const_*,TSizedDefaultAllocator<32>_>,0>_>
          *param_2)

{
  undefined1 *puVar1;
  FName *pFVar2;
  FName *pFVar3;
  ulonglong uVar4;
  EBlendProfileMode EVar5;
  int iVar6;
  UBlendProfile *pUVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UBlendProfile *this;
  UBlendProfile *pUVar12;
  longlong lVar13;
  FName *pFVar14;
  FName *pFVar15;
  FName *pFVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  uint *puVar22;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_f8;
  longlong local_f0;
  undefined4 uStack_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  FName local_68;
  FName FStack_60;
  uint local_58;
  
  iVar6 = *(int *)&param_2->field_0x28;
  puVar1 = &param_2->field_0x10;
  iVar19 = 0;
  iVar21 = 0;
  uVar10 = 1;
  iVar11 = 0;
  if (iVar6 != 0) {
    puVar22 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar22 = (uint *)puVar1;
    }
    uVar18 = *puVar22;
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar19;
      iVar21 = iVar21 + 0x20;
      iVar19 = iVar19 + 1;
      iVar11 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14ab91cbd;
      uVar18 = puVar22[lVar13 + 1];
    }
    uVar10 = -uVar18 & uVar18;
    uVar4 = (ulonglong)uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar11 = iVar21 + -1 + (int)lVar13;
    if (iVar6 < iVar11) {
      iVar11 = iVar6;
    }
  }
LAB_14ab91cbd:
  uVar18 = *(uint *)&param_2->field_0x28;
  uVar17 = uVar18 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uVar10,iVar19);
  TStack_98.CurrentBitIndex = iVar11;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar18 >> 5;
  TStack_98._28_4_ = iVar11;
  TStack_98.BaseBitIndex = iVar21;
  uStack_78 = CONCAT44(uStack_bc,*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34);
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar6 < (int)uVar18)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&param_2->field_0x28;
  local_f8 = uVar18;
  if (uVar18 != uVar10) {
    puVar20 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar19;
      uVar17 = uVar17 + 0x20;
      iVar19 = iVar19 + 1;
      uVar18 = uVar10;
      local_f8 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_14ab91dd0;
      uVar18 = *(uint *)(puVar20 + lVar13 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar18 = (int)lVar13 + -1 + uVar17;
    local_f8 = uVar18;
    if ((int)uVar10 < (int)uVar18) {
      uVar18 = uVar10;
      local_f8 = uVar10;
    }
  }
LAB_14ab91dd0:
  do {
    if (*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34 != (int)uStack_78) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<UBlendProfile_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_98.CurrentBitIndex == uVar18) &&
       (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    pFVar15 = (FName *)(*(longlong *)param_2 + (longlong)TStack_98.CurrentBitIndex * 0x20);
    this = USkeleton::CreateNewBlendProfile(param_1,pFVar15);
    uVar10 = pFVar15[2].ComparisonIndex.Value;
    uVar17 = 0;
    if (0 < (int)uVar10) {
      local_f0 = 0;
      do {
        uVar18 = 0;
        if ((int)uVar17 < (int)uVar10) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pUVar7 = *(UBlendProfile **)((longlong)pFVar15[1] + local_f0);
        pUVar12 = this;
        if (uVar17 == 0) {
          pUVar12 = pUVar7;
        }
        EVar5 = pUVar12->Mode;
        this->Mode = EVar5;
        if ((EVar5 != pUVar7->Mode) &&
           (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1386500320292503193>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SkeletalMerging\\Source\\SkeletalMerging\\Private\\SkeletalMergingLibrary.cpp"
                               ,0x167,"MergedBlendProfile->Mode == Profile->Mode"), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar6 = (pUVar7->ProfileEntries).ArrayNum;
        pFVar16 = (FName *)(pUVar7->ProfileEntries).AllocatorInstance.Data;
        pFVar2 = (FName *)((longlong)pFVar16 + (longlong)iVar6 * 0x14);
        while( true ) {
          if ((pUVar7->ProfileEntries).ArrayNum != iVar6) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FBlendProfileBoneEntry_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res20);
          }
          if (pFVar16 == pFVar2) break;
          local_58 = pFVar16[2].ComparisonIndex.Value;
          pFVar14 = (FName *)(this->ProfileEntries).AllocatorInstance.Data;
          local_68 = *pFVar16;
          FStack_60 = pFVar16[1];
          pFVar3 = (FName *)((longlong)pFVar14 + (longlong)(this->ProfileEntries).ArrayNum * 0x14);
          for (; pFVar14 != pFVar3; pFVar14 = (FName *)&pFVar14[2].Number) {
            if (*pFVar14 == local_68) {
              bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_1386500320292503185>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\SkeletalMerging\\Source\\SkeletalMerging\\Private\\SkeletalMergingLibrary.cpp"
                                 ,0x16f,
                                 "!MergedBlendProfile->ProfileEntries.ContainsByPredicate([Entry](const FBlendProfileBoneEntry& InEntry) { return InEntry.BoneReference.BoneName == Entry.BoneReference.BoneName; })"
                                );
              if (bVar9) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              break;
            }
          }
          UBlendProfile::SetBoneBlendScale
                    (this,pFVar16,(float)pFVar16[2].ComparisonIndex.Value,false,true);
          pFVar16 = (FName *)&pFVar16[2].Number;
        }
        uVar17 = uVar17 + 1;
        local_f0 = local_f0 + 8;
        uVar10 = pFVar15[2].ComparisonIndex.Value;
        uVar18 = local_f8;
      } while ((int)uVar17 < (int)uVar10);
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  } while( true );
}

// AddCurveNames @ 14ab91ff0

void __cdecl
USkeletalMergingLibrary::AddCurveNames
          (USkeleton *param_1,
          TMap<FName,FCurveMetaData_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData_const_*,0>_>
          *param_2)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  int iVar4;
  FName FVar5;
  void *_Src;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FName FVar10;
  int *piVar11;
  longlong lVar12;
  FBoneReference *this;
  uint uVar13;
  FBoneReference *pFVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar4 = *(int *)&param_2->field_0x28;
  puVar1 = &param_2->field_0x10;
  iVar16 = 0;
  iVar18 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar19 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar15 = *puVar19;
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar16;
      iVar18 = iVar18 + 0x20;
      iVar16 = iVar16 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14ab9209d;
      uVar15 = puVar19[lVar12 + 1];
    }
    uVar8 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar9 = iVar18 + -1 + (int)lVar12;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14ab9209d:
  uVar15 = *(uint *)&param_2->field_0x28;
  uVar13 = uVar15 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar8,iVar16);
  TStack_68.CurrentBitIndex = iVar9;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_68._28_4_ = iVar9;
  TStack_68.BaseBitIndex = iVar18;
  uStack_48 = CONCAT44(uStack_74,*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&param_2->field_0x28;
  if (uVar15 != uVar8) {
    puVar17 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar16;
      uVar13 = uVar13 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14ab921a0;
      uVar15 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar8 < (int)uVar15) {
      uVar15 = uVar8;
    }
  }
LAB_14ab921a0:
  while( true ) {
    if (*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FCurveMetaData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_68.CurrentBitIndex == uVar15) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar2 = (FName *)(*(longlong *)param_2 + (longlong)TStack_68.CurrentBitIndex * 0x18);
    if (*(longlong *)(*(longlong *)param_2 + 8 + (longlong)TStack_68.CurrentBitIndex * 0x18) != 0) {
      USkeleton::AddCurveMetaData(param_1,*pFVar2,false);
      FVar10 = (FName)USkeleton::GetCurveMetaData(param_1,*pFVar2);
      FVar5 = pFVar2[1];
      if (FVar10 != FVar5) {
        iVar4 = *(int *)((longlong)FVar5 + 8);
        piVar11 = (int *)((longlong)FVar10 + 0xc);
        _Src = *(void **)FVar5;
        *(int *)((longlong)FVar10 + 8) = iVar4;
        if ((iVar4 == 0) && (*piVar11 == 0)) {
          *piVar11 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar4,*piVar11,(ForAnyElementType *)FVar10,iVar4,piVar11);
          if (iVar4 != 0) {
            memcpy(*(void **)FVar10,_Src,(longlong)iVar4 << 4);
          }
        }
      }
      *(undefined1 *)((longlong)FVar10 + 0x10) = *(undefined1 *)((longlong)FVar5 + 0x10);
      *(undefined2 *)((longlong)FVar10 + 0x11) = *(undefined2 *)((longlong)FVar5 + 0x11);
      iVar4 = *(int *)((longlong)FVar10 + 8);
      this = *(FBoneReference **)FVar10;
      pFVar14 = this + iVar4;
      while( true ) {
        if (*(int *)((longlong)FVar10 + 8) != iVar4) {
          `TCheckedPointerIterator<FBoneReference,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (this == pFVar14) break;
        FBoneReference::Initialize(this,param_1);
        this = this + 1;
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// AddSockets @ 14ab922e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
USkeletalMergingLibrary::AddSockets
          (USkeleton *param_1,
          TArray<TObjectPtr<USkeletalMeshSocket>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<USkeletalMeshSocket>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  UClass *pUVar11;
  UObject *pUVar12;
  longlong *plVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStack_118 [32];
  UObject **local_f8;
  FScriptContainerElement *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined1 local_c8 [8];
  UObject *local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  pFVar15 = (param_2->AllocatorInstance).Data;
  iVar5 = param_2->ArrayNum;
  pFVar3 = pFVar15 + (longlong)iVar5 * 8;
  while( true ) {
    if (param_2->ArrayNum != iVar5) {
      local_c8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<USkeletalMeshSocket>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_c8);
    }
    if (pFVar15 == pFVar3) break;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar11 = Z_Construct_UClass_USkeletalMeshSocket_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar11);
    local_b8._8_8_ = param_1;
    pUVar12 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar13 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (pUVar12 != (UObject *)0x0) {
      pTVar2 = &param_1->Sockets;
      local_c0 = pUVar12;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar12);
      }
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar6 <= (FScriptContainerElement *)&local_c0) &&
         (lVar14 = (longlong)(param_1->Sockets).ArrayMax,
         (FScriptContainerElement *)&local_c0 < pFVar6 + lVar14 * 8)) {
        local_e0 = (longlong)(param_1->Sockets).ArrayNum;
        local_d8 = 8;
        local_f8 = &local_c0;
        local_f0 = pFVar6;
        local_e8 = lVar14;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar10 = (param_1->Sockets).ArrayNum;
      piVar1 = &(param_1->Sockets).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (param_1->Sockets).ArrayNum = iVar10 + 1;
      *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_c0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_c0);
      }
      *(undefined8 *)(pUVar12 + 1) = *(undefined8 *)(*(longlong *)pFVar15 + 0x28);
      *(undefined8 *)&pUVar12[1].field_0x8 = *(undefined8 *)(*(longlong *)pFVar15 + 0x30);
      lVar14 = *(longlong *)pFVar15;
      uVar8 = *(undefined8 *)(lVar14 + 0x40);
      uVar4 = *(undefined8 *)(lVar14 + 0x48);
      *(undefined8 *)&pUVar12[1].field_0x10 = *(undefined8 *)(lVar14 + 0x38);
      *(undefined8 *)&pUVar12[1].field_0x18 = uVar8;
      *(undefined8 *)&pUVar12[1].field_0x20 = uVar4;
      lVar14 = *(longlong *)pFVar15;
      uVar8 = *(undefined8 *)(lVar14 + 0x58);
      uVar4 = *(undefined8 *)(lVar14 + 0x60);
      *(undefined8 *)(pUVar12 + 2) = *(undefined8 *)(lVar14 + 0x50);
      *(undefined8 *)&pUVar12[2].field_0x8 = uVar8;
      *(undefined8 *)&pUVar12[2].field_0x10 = uVar4;
      lVar14 = *(longlong *)pFVar15;
      uVar8 = *(undefined8 *)(lVar14 + 0x70);
      uVar4 = *(undefined8 *)(lVar14 + 0x78);
      *(undefined8 *)&pUVar12[2].field_0x18 = *(undefined8 *)(lVar14 + 0x68);
      *(undefined8 *)&pUVar12[2].field_0x20 = uVar8;
      *(undefined8 *)(pUVar12 + 3) = uVar4;
      pUVar12[3].field_0x8 = *(undefined1 *)(*(longlong *)pFVar15 + 0x80);
    }
    pFVar15 = pFVar15 + 8;
  }
  return;
}

// AddVirtualBones @ 14ab92520

void __cdecl
USkeletalMergingLibrary::AddVirtualBones
          (USkeleton *param_1,TArray<FVirtualBone_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  pFVar4 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FVirtualBone_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar4 == pFVar1) break;
    pFVar3 = *(FName **)pFVar4;
    USkeleton::AddNewNamedVirtualBone(param_1,*pFVar3,pFVar3[1],pFVar3[2]);
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// GetPrivateStaticClass @ 14ab92830

UClass * __cdecl USkeletalMergingLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMergingLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SkeletalMerging",L"SkeletalMergingLibrary",
               &Z_Registration_Info_UClass_USkeletalMergingLibrary.InnerSingleton,
               StaticRegisterNativesUSkeletalMergingLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USkeletalMergingLibrary>,
               InternalVTableHelperCtorCaller<USkeletalMergingLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMergingLibrary.InnerSingleton;
}

// MergeMeshes @ 14ab92920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USkeletalMesh * __cdecl USkeletalMergingLibrary::MergeMeshes(FSkeletalMeshMergeParams *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  USkeletalMesh *pUVar9;
  TArray<TObjectPtr<USkeletalMeshSocket>,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  longlong *plVar12;
  TSparseSetElement<FName> *pTVar13;
  FString *this;
  uint uVar14;
  ForElementType<unsigned_int> FVar15;
  char *pcVar16;
  uint uVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  longlong *plVar20;
  ForAnyElementType FVar21;
  int iVar22;
  uint uVar23;
  undefined8 *puVar24;
  byte bVar25;
  ulonglong uVar26;
  TSparseSetElement<FName> *pTVar27;
  EMeshBufferAccess EVar28;
  TSparseSetElement<FName> *pTVar29;
  int iVar30;
  longlong lVar31;
  ForAnyElementType FVar32;
  bool bVar33;
  undefined1 auStackY_4a8 [32];
  EMeshBufferAccess local_458;
  undefined1 local_457;
  undefined1 local_456;
  undefined1 local_455 [5];
  ForAnyElementType local_450;
  undefined8 local_448;
  ForAnyElementType local_440;
  undefined8 local_438;
  int local_430 [2];
  USkeletalMesh *local_428;
  TArray<USkeletalMesh_*,TSizedDefaultAllocator<32>_> local_420;
  FName local_410;
  undefined8 local_408;
  undefined8 local_400;
  TArray<FSkelMeshMergeMeshUVTransforms,TSizedDefaultAllocator<32>_> local_3f8;
  uint local_3e8;
  uint uStack_3e4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3e0;
  undefined4 local_3d8;
  uint uStack_3d4;
  uint uStack_3d0;
  undefined4 uStack_3cc;
  uint local_3c8;
  uint uStack_3c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3c0;
  undefined4 local_3b8;
  uint uStack_3b4;
  uint uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  longlong *local_3a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_398;
  longlong *local_378;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_370;
  FSparseArrayAllocationInfo local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  undefined1 local_2d8 [128];
  undefined1 local_258 [32];
  ForElementType<unsigned_int> local_238;
  uint local_230;
  uint local_22c;
  int local_228;
  int local_224;
  FScriptContainerElement local_220 [8];
  ForAnyElementType local_218;
  uint local_210;
  undefined1 local_208 [32];
  ForElementType<unsigned_int> local_1e8;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  ForElementType<FSetElementId> local_1c8;
  int local_1c0;
  undefined1 local_1b8 [176];
  void *local_108;
  undefined4 local_100;
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_f8;
  void *local_b8;
  undefined4 local_b0;
  ForAnyElementType local_a8;
  ForAnyElementType local_98;
  ForAnyElementType local_80;
  ForAnyElementType local_60;
  int local_58;
  ForAnyElementType local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  local_430[0] = 0;
  local_420.ArrayNum = (param_1->MeshesToMerge).ArrayNum;
  lVar31 = (longlong)local_420.ArrayNum;
  pFVar2 = (param_1->MeshesToMerge).AllocatorInstance.Data;
  local_420.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_410 = (FName)param_1;
  if (local_420.ArrayNum == 0) {
    local_420.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_420.ArrayNum,0,&local_420.AllocatorInstance,local_420.ArrayNum,
               &local_420.ArrayMax);
    memcpy(local_420.AllocatorInstance.Data,pFVar2,lVar31 << 3);
  }
  FVar21.Data = local_420.AllocatorInstance.Data;
  lVar31 = (longlong)local_420.ArrayNum;
  iVar30 = local_420.ArrayNum;
  if (local_420.ArrayNum != 0) {
    iVar30 = 0;
    bVar33 = *(longlong *)local_420.AllocatorInstance.Data != 0;
    lVar18 = 0;
    iVar6 = 0;
    do {
      iVar22 = iVar6;
      do {
        lVar18 = lVar18 + 1;
        iVar22 = iVar22 + 1;
        if (lVar31 <= lVar18) break;
      } while (bVar33 == (*(longlong *)(FVar21.Data + lVar18 * 8) != 0));
      if (bVar33 != false) {
        if (iVar30 != iVar6) {
          memmove(FVar21.Data + (longlong)iVar30 * 8,FVar21.Data + (longlong)iVar6 * 8,
                  (longlong)(iVar22 - iVar6) << 3);
        }
        iVar30 = iVar30 + (iVar22 - iVar6);
      }
      bVar33 = (bool)(bVar33 ^ 1);
      param_1 = (FSkeletalMeshMergeParams *)local_410;
      iVar6 = iVar22;
    } while (lVar18 < lVar31);
  }
  local_420.ArrayNum = iVar30;
  if (local_420.ArrayNum < 2) {
    if (2 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    pUVar9 = (USkeletalMesh *)0x0;
    goto LAB_14ab93ad5;
  }
  bVar33 = false;
  EVar28 = *(EMeshBufferAccess *)((longlong)param_1 + 0x34) & ForceCPUAndGPU;
  local_458 = EVar28;
  pUVar7 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_USkeletalMesh_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_2d8,pUVar8);
  local_2d8._8_8_ = pUVar7;
  pUVar9 = (USkeletalMesh *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2d8);
  local_428 = pUVar9;
  if (local_2d8._64_8_ != 0) {
    plVar12 = (longlong *)(local_2d8 + 0x50);
    if ((longlong *)local_2d8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_2d8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if ((((TObjectPtr<USkeleton>_u_0 *)((longlong)param_1 + 0x38))->DebugPtr != (USkeleton *)0x0) &&
     ((*(byte *)((longlong)param_1 + 0x34) & 2) != 0)) {
    (**(code **)(pUVar9->_padding_ + 0x410))(pUVar9);
    bVar33 = true;
    pTVar10 = USkeletalMesh::GetMeshOnlySocketList(pUVar9);
    pFVar19 = (pTVar10->AllocatorInstance).Data;
    iVar30 = pTVar10->ArrayNum;
    pFVar2 = pFVar19 + (longlong)iVar30 * 8;
    while( true ) {
      if (pTVar10->ArrayNum != iVar30) {
        local_457 = 0;
        `TCheckedPointerIterator<TObjectPtr<USkeletalMeshSocket>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_457);
      }
      if (pFVar19 == pFVar2) break;
      if ((*(longlong *)pFVar19 != 0) && (2 < (byte)LogTemp._0_1_)) {
        ::FName::ToString((FName *)(*(longlong *)pFVar19 + 0x28),&local_340);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_340.Data.AllocatorInstance.Data);
        }
      }
      pFVar19 = pFVar19 + 8;
    }
    lVar31 = (**(code **)(local_428->_padding_ + 0x408))();
    EVar28 = local_458;
    plVar20 = *(longlong **)(lVar31 + 0x1a8);
    iVar30 = *(int *)(lVar31 + 0x1b0);
    plVar12 = plVar20 + iVar30;
    while( true ) {
      if (*(int *)(lVar31 + 0x1b0) != iVar30) {
        local_458 = Default;
        `TCheckedPointerIterator<TObjectPtr<USkeletalMeshSocket>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_458);
      }
      pUVar9 = local_428;
      param_1 = (FSkeletalMeshMergeParams *)local_410;
      if (plVar20 == plVar12) break;
      if ((*plVar20 != 0) && (2 < (byte)LogTemp._0_1_)) {
        ::FName::ToString((FName *)(*plVar20 + 0x28),&local_330);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_330.Data.AllocatorInstance.Data);
        }
      }
      plVar20 = plVar20 + 1;
    }
  }
  local_3f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3f8.ArrayNum = 0;
  local_3f8.ArrayMax = 0;
  TArray<FSkelMeshMergeMeshUVTransforms,TSizedDefaultAllocator<32>_>::operator=
            (&local_3f8,
             (TArray<FSkelMeshMergeMeshUVTransforms,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0x10));
  FSkeletalMeshMerge::FSkeletalMeshMerge
            ((FSkeletalMeshMerge *)local_1b8,pUVar9,&local_420,&param_1->MeshSectionMappings,
             *(int *)((longlong)param_1 + 0x30),EVar28,
             (FSkelMeshMergeUVTransformMapping *)&local_3f8);
  bVar5 = FSkeletalMeshMerge::DoMerge
                    ((FSkeletalMeshMerge *)local_1b8,
                     (TArray<FRefPoseOverride,TSizedDefaultAllocator<32>_> *)0x0);
  if (bVar5) {
    if ((((TObjectPtr<USkeleton>_u_0 *)((longlong)param_1 + 0x38))->DebugPtr != (USkeleton *)0x0) &&
       ((*(byte *)((longlong)param_1 + 0x34) & 2) == 0)) {
      (**(code **)(pUVar9->_padding_ + 0x410))(pUVar9);
    }
    if (bVar33) {
      pTVar29 = (TSparseSetElement<FName> *)0x0;
      local_440.Data = (FScriptContainerElement *)0x0;
      local_438 = 0;
      local_450.Data = (FScriptContainerElement *)0x0;
      local_448 = 0;
      pTVar10 = USkeletalMesh::GetMeshOnlySocketList(pUVar9);
      pFVar19 = (pTVar10->AllocatorInstance).Data;
      iVar30 = pTVar10->ArrayNum;
      pFVar2 = pFVar19 + (longlong)iVar30 * 8;
      while( true ) {
        if (pTVar10->ArrayNum != iVar30) {
          local_456 = 0;
          `TCheckedPointerIterator<TObjectPtr<USkeletalMeshSocket>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_456);
        }
        if (pFVar19 == pFVar2) break;
        lVar31 = *(longlong *)pFVar19;
        if (lVar31 != 0) {
          local_408 = *(undefined8 *)(lVar31 + 0x18);
          if (((local_440.Data <= (FScriptContainerElement *)&local_408) &&
              ((FScriptContainerElement *)&local_408 <
               local_440.Data + (longlong)local_438._4_4_ * 8)) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar33)) {
            pcVar4 = (code *)swi(3);
            pUVar9 = (USkeletalMesh *)(*pcVar4)();
            return pUVar9;
          }
          iVar6 = (int)local_438;
          if ((int)local_438 == local_438._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_440,(int *)((longlong)&local_438 + 4));
          }
          local_438 = CONCAT44(local_438._4_4_,iVar6 + 1);
          *(undefined8 *)(local_440.Data + (longlong)iVar6 * 8) = local_408;
          if (2 < (byte)LogTemp._0_1_) {
            ::FName::ToString((FName *)(lVar31 + 0x28),&local_320);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
            if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_320.Data.AllocatorInstance.Data);
            }
          }
        }
        pFVar19 = pFVar19 + 8;
      }
      lVar31 = (**(code **)(local_428->_padding_ + 0x408))();
      plVar20 = *(longlong **)(lVar31 + 0x1a8);
      iVar30 = *(int *)(lVar31 + 0x1b0);
      plVar12 = plVar20 + iVar30;
      while( true ) {
        if (*(int *)(lVar31 + 0x1b0) != iVar30) {
          local_455[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<USkeletalMeshSocket>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_455);
        }
        FVar21.Data = local_440.Data;
        if (plVar20 == plVar12) break;
        lVar18 = *plVar20;
        if (lVar18 != 0) {
          local_400 = *(undefined8 *)(lVar18 + 0x18);
          if (((local_450.Data <= (FScriptContainerElement *)&local_400) &&
              ((FScriptContainerElement *)&local_400 <
               local_450.Data + (longlong)local_448._4_4_ * 8)) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar33)) {
            pcVar4 = (code *)swi(3);
            pUVar9 = (USkeletalMesh *)(*pcVar4)();
            return pUVar9;
          }
          iVar6 = (int)local_448;
          if ((int)local_448 == local_448._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_450,(int *)((longlong)&local_448 + 4));
          }
          local_448 = CONCAT44(local_448._4_4_,iVar6 + 1);
          *(undefined8 *)(local_450.Data + (longlong)iVar6 * 8) = local_400;
          if (2 < (byte)LogTemp._0_1_) {
            ::FName::ToString((FName *)(lVar18 + 0x28),&local_310);
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)&PTR_u_SkelSocket___s_15229d500,
                       (FLogCategoryBase *)&LogTemp);
            if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_310.Data.AllocatorInstance.Data);
            }
          }
        }
        plVar20 = plVar20 + 1;
      }
      iVar30 = (int)local_438;
      lVar31 = (longlong)(int)local_438;
      local_208._0_8_ = (FScriptContainerElement *)0x0;
      local_208._8_8_ = 0;
      local_1e8 = (ForElementType<unsigned_int>)0x0;
      local_1e0 = 0;
      local_1dc = 0x80;
      local_1d8 = -1;
      local_1d4 = 0;
      local_1c8 = (ForElementType<FSetElementId>)0x0;
      local_1c0 = 0;
      local_258._0_8_ = (FScriptContainerElement *)0x0;
      local_258._8_8_ = 0;
      local_238 = (ForElementType<unsigned_int>)0x0;
      local_230 = 0;
      local_22c = 0x80;
      local_228 = -1;
      local_224 = 0;
      local_218.Data = (FScriptContainerElement *)0x0;
      local_210 = 0;
      if (((int)local_438 < 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar33)) {
        pcVar4 = (code *)swi(3);
        pUVar9 = (USkeletalMesh *)(*pcVar4)();
        return pUVar9;
      }
      uVar23 = iVar30 + (local_208._8_4_ - local_1d4);
      if ((uint)(local_208._8_4_ - local_1d4) < uVar23) {
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar23);
        }
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_208,uVar23);
        if (uVar23 < 4) {
          iVar30 = 1;
        }
        else {
          uVar26 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
          lVar18 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_3a8 = (undefined4)lVar18;
          iVar30 = 1 << ((byte)lVar18 & 0x1f);
        }
        if ((local_1c0 == 0) || (local_1c0 < iVar30)) {
          local_1c0 = iVar30;
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash
                    ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_208);
        }
      }
      pFVar2 = FVar21.Data + lVar31 * 8;
      FVar32.Data = local_450.Data;
      for (; local_450.Data = FVar32.Data, FVar21.Data != pFVar2; FVar21.Data = FVar21.Data + 8) {
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_208,&local_410
                   ,(bool *)FVar21.Data);
        FVar32.Data = local_450.Data;
      }
      iVar30 = (int)local_448;
      lVar31 = (longlong)(int)local_448;
      if (((int)local_448 < 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar33)) {
        pcVar4 = (code *)swi(3);
        pUVar9 = (USkeletalMesh *)(*pcVar4)();
        return pUVar9;
      }
      uVar23 = iVar30 + (local_258._8_4_ - local_224);
      if ((uint)(local_258._8_4_ - local_224) < uVar23) {
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar23);
        }
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_258,uVar23);
        if (uVar23 < 4) {
          uVar23 = 1;
        }
        else {
          uVar26 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
          lVar18 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar23 = 1 << ((byte)lVar18 & 0x1f);
        }
        if ((local_210 == 0) || ((int)local_210 < (int)uVar23)) {
          local_210 = uVar23;
          if (local_218.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_218,0,0,4);
          }
          if (uVar23 != 0) {
            uVar14 = uVar23;
            if (uVar23 < 2) {
              if (local_218.Data != (FScriptContainerElement *)0x0) {
                uVar14 = 0;
                goto LAB_14ab931e4;
              }
            }
            else {
LAB_14ab931e4:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_218,0,uVar14,4);
            }
            if (0 < (int)uVar23) {
              uVar26 = (ulonglong)uVar23;
              pTVar13 = pTVar29;
              do {
                FVar21.Data = local_220;
                if (local_218.Data != (FScriptContainerElement *)0x0) {
                  FVar21.Data = local_218.Data;
                }
                uVar11 = (ulonglong)pTVar13 & (longlong)(int)uVar23 - 1U;
                pTVar13 = (TSparseSetElement<FName> *)&pTVar13->field_0x1;
                *(undefined4 *)(FVar21.Data + uVar11 * 4) = 0xffffffff;
                uVar26 = uVar26 - 1;
              } while (uVar26 != 0);
            }
          }
          if (local_210 != 0) {
            pTStack_3e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_258 + 0x10);
            local_3e8 = 0;
            uStack_3e4 = 1;
            uStack_3d4 = 0;
            uStack_3d0 = 0;
            pTVar13 = pTVar29;
            if (local_230 != 0) {
              FVar15 = (ForElementType<unsigned_int>)((longlong)local_258 + 0x10);
              if (local_238 != (ForElementType<unsigned_int>)0x0) {
                FVar15 = local_238;
              }
              uVar23 = *(uint *)FVar15;
              pTVar27 = pTVar29;
              while (uVar23 == 0) {
                uStack_3d0 = (int)pTVar27 + 0x20;
                pTVar27 = (TSparseSetElement<FName> *)(ulonglong)uStack_3d0;
                iVar30 = (int)pTVar13;
                local_3e8 = iVar30 + 1;
                pTVar13 = (TSparseSetElement<FName> *)(ulonglong)local_3e8;
                if ((int)((local_230 - 1) + ((int)(local_230 - 1) >> 0x1f & 0x1fU)) >> 5 <
                    (int)local_3e8) goto LAB_14ab932f7;
                uVar23 = ((uint *)((longlong)FVar15 + 4))[iVar30];
              }
              uStack_3e4 = -uVar23 & uVar23;
              uVar26 = (ulonglong)uStack_3e4 * 2 + 1;
              lVar18 = 0x3f;
              if (uVar26 != 0) {
                for (; uVar26 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              uStack_3d4 = (int)lVar18 + -1 + uStack_3d0;
              pTVar13 = (TSparseSetElement<FName> *)(ulonglong)uStack_3d4;
              if ((int)local_230 < (int)uStack_3d4) {
LAB_14ab932f7:
                pTVar13 = (TSparseSetElement<FName> *)(ulonglong)local_230;
                uStack_3d4 = local_230;
              }
            }
            local_3d8 = 0xffffffff;
            local_3a0 = (longlong *)local_258;
            local_398._padding_ = CONCAT44(uStack_3e4,local_3e8);
            local_398.CurrentBitIndex = uStack_3d4;
            local_398.UnvisitedBitMask = 0xffffffff;
            local_398._28_4_ = uStack_3cc;
            local_398.BaseBitIndex = uStack_3d0;
            local_398.Array = pTStack_3e0;
            if ((int)pTVar13 < (int)local_230) {
              do {
                puVar24 = (undefined8 *)((longlong)(int)pTVar13 * 0x10 + *local_3a0);
                uVar3 = *puVar24;
                uVar23 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
                uVar23 = local_210 - 1 & uVar23 + (int)((ulonglong)uVar3 >> 0x20);
                *(uint *)((longlong)puVar24 + 0xc) = uVar23;
                FVar21.Data = local_220;
                if (local_218.Data != (FScriptContainerElement *)0x0) {
                  FVar21.Data = local_218.Data;
                }
                uVar26 = (longlong)(int)local_210 - 1U & (longlong)(int)uVar23;
                *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(FVar21.Data + uVar26 * 4);
                *(int *)(FVar21.Data + uVar26 * 4) = (int)pTVar13;
                local_398.UnvisitedBitMask = local_398.UnvisitedBitMask & ~local_398._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_398);
                pTVar13 = (TSparseSetElement<FName> *)(ulonglong)(uint)local_398.CurrentBitIndex;
              } while (local_398.CurrentBitIndex < (local_398.Array)->NumBits);
            }
          }
        }
      }
      pFVar2 = FVar32.Data + lVar31 * 8;
      iVar30 = local_228;
      for (; local_228 = iVar30, FVar32.Data != pFVar2; FVar32.Data = FVar32.Data + 8) {
        if (local_224 == 0) {
          iVar30 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,4,1,(ForAnyElementType *)local_258,(int *)(local_258 + 8),
                              (int *)(local_258 + 0xc));
          iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                            ((TBitArray<FDefaultBitArrayAllocator> *)(local_258 + 0x10),1);
          FVar15 = (ForElementType<unsigned_int>)((longlong)local_258 + 0x10);
          if (local_238 != (ForElementType<unsigned_int>)0x0) {
            FVar15 = local_238;
          }
          bVar25 = (byte)iVar6 & 0x1f;
          if (iVar6 < 0) {
            iVar6 = iVar6 + 0x1f;
            bVar25 = bVar25 - 0x20;
          }
          puVar1 = (uint *)((longlong)FVar15 + (longlong)(iVar6 >> 5) * 4);
          *puVar1 = *puVar1 & ~(1 << (bVar25 & 0x1f));
        }
        else {
          local_228 = *(int *)(local_258._0_8_ + (longlong)iVar30 * 0x10 + 4);
          local_224 = local_224 + -1;
          if (local_224 != 0) {
            *(undefined4 *)(local_258._0_8_ + (longlong)local_228 * 0x10) = 0xffffffff;
          }
        }
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_258,&local_350,iVar30);
        pTVar13 = pTVar29;
        if (local_350.Pointer != (TSparseSetElement<FName> *)0x0) {
          *(undefined8 *)local_350.Pointer = *(undefined8 *)FVar32.Data;
          *(undefined4 *)((longlong)local_350.Pointer + 8) = 0xffffffff;
          pTVar13 = local_350.Pointer;
        }
        uVar3 = *(undefined8 *)pTVar13;
        local_430[0] = local_350.Index;
        uVar23 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar23 = uVar23 + (int)((ulonglong)uVar3 >> 0x20);
        bVar33 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::TryReplaceExisting
                           ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_258,
                            uVar23,pTVar13,local_430,(bool *)0x0);
        if (!bVar33) {
          uVar17 = 1;
          uVar14 = local_258._8_4_ - local_224;
          if (3 < uVar14) {
            uVar26 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
            lVar31 = 0x3f;
            if (uVar26 != 0) {
              for (; uVar26 >> lVar31 == 0; lVar31 = lVar31 + -1) {
              }
            }
            uVar17 = 1 << ((byte)lVar31 & 0x1f);
          }
          if (((int)uVar14 < 1) || ((int)uVar17 <= (int)local_210)) {
            uVar23 = local_210 - 1 & uVar23;
            *(uint *)&pTVar13->field_0xc = uVar23;
            FVar21.Data = local_220;
            if (local_218.Data != (FScriptContainerElement *)0x0) {
              FVar21.Data = local_218.Data;
            }
            uVar26 = (longlong)(int)local_210 - 1U & (longlong)(int)uVar23;
            *(undefined4 *)&pTVar13->field_0x8 = *(undefined4 *)(FVar21.Data + uVar26 * 4);
            *(int *)(FVar21.Data + uVar26 * 4) = local_430[0];
          }
          else {
            local_210 = uVar17;
            if (local_218.Data != (FScriptContainerElement *)0x0) {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_218,0,0,4)
              ;
            }
            if (uVar17 != 0) {
              uVar23 = uVar17;
              if (uVar17 < 2) {
                if (local_218.Data != (FScriptContainerElement *)0x0) {
                  uVar23 = 0;
                  goto LAB_14ab9356b;
                }
              }
              else {
LAB_14ab9356b:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_218,0,uVar23,4);
              }
              if (0 < (int)uVar17) {
                uVar26 = (ulonglong)uVar17;
                pTVar13 = pTVar29;
                do {
                  FVar21.Data = local_220;
                  if (local_218.Data != (FScriptContainerElement *)0x0) {
                    FVar21.Data = local_218.Data;
                  }
                  uVar11 = (ulonglong)pTVar13 & (longlong)(int)uVar17 - 1U;
                  pTVar13 = (TSparseSetElement<FName> *)&pTVar13->field_0x1;
                  *(undefined4 *)(FVar21.Data + uVar11 * 4) = 0xffffffff;
                  uVar26 = uVar26 - 1;
                } while (uVar26 != 0);
              }
            }
            if (local_210 != 0) {
              pTStack_3c0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_258 + 0x10);
              local_3c8 = 0;
              uStack_3c4 = 1;
              uStack_3b4 = 0;
              uStack_3b0 = 0;
              pTVar13 = pTVar29;
              if (local_230 != 0) {
                FVar15 = (ForElementType<unsigned_int>)((longlong)local_258 + 0x10);
                if (local_238 != (ForElementType<unsigned_int>)0x0) {
                  FVar15 = local_238;
                }
                uVar23 = *(uint *)FVar15;
                pTVar27 = pTVar29;
                while (uVar23 == 0) {
                  uStack_3b0 = (int)pTVar27 + 0x20;
                  pTVar27 = (TSparseSetElement<FName> *)(ulonglong)uStack_3b0;
                  iVar30 = (int)pTVar13;
                  local_3c8 = iVar30 + 1;
                  pTVar13 = (TSparseSetElement<FName> *)(ulonglong)local_3c8;
                  if ((int)((local_230 - 1) + ((int)(local_230 - 1) >> 0x1f & 0x1fU)) >> 5 <
                      (int)local_3c8) goto LAB_14ab93677;
                  uVar23 = ((uint *)((longlong)FVar15 + 4))[iVar30];
                }
                uStack_3c4 = -uVar23 & uVar23;
                uVar26 = (ulonglong)uStack_3c4 * 2 + 1;
                lVar31 = 0x3f;
                if (uVar26 != 0) {
                  for (; uVar26 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                  }
                }
                uStack_3b4 = (int)lVar31 + -1 + uStack_3b0;
                pTVar13 = (TSparseSetElement<FName> *)(ulonglong)uStack_3b4;
                if ((int)local_230 < (int)uStack_3b4) {
LAB_14ab93677:
                  pTVar13 = (TSparseSetElement<FName> *)(ulonglong)local_230;
                  uStack_3b4 = local_230;
                }
              }
              local_3b8 = 0xffffffff;
              local_378 = (longlong *)local_258;
              local_370._padding_ = CONCAT44(uStack_3c4,local_3c8);
              local_370.CurrentBitIndex = uStack_3b4;
              local_370.UnvisitedBitMask = 0xffffffff;
              local_370._28_4_ = uStack_3ac;
              local_370.BaseBitIndex = uStack_3b0;
              local_370.Array = pTStack_3c0;
              if ((int)pTVar13 < (int)local_230) {
                do {
                  puVar24 = (undefined8 *)((longlong)(int)pTVar13 * 0x10 + *local_378);
                  uVar3 = *puVar24;
                  uVar23 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
                  uVar23 = local_210 - 1 & uVar23 + (int)((ulonglong)uVar3 >> 0x20);
                  *(uint *)((longlong)puVar24 + 0xc) = uVar23;
                  FVar21.Data = local_220;
                  if (local_218.Data != (FScriptContainerElement *)0x0) {
                    FVar21.Data = local_218.Data;
                  }
                  uVar26 = (longlong)(int)local_210 - 1U & (longlong)(int)uVar23;
                  *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(FVar21.Data + uVar26 * 4);
                  *(int *)(FVar21.Data + uVar26 * 4) = (int)pTVar13;
                  local_370.UnvisitedBitMask =
                       local_370.UnvisitedBitMask & ~local_370._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_370);
                  pTVar13 = (TSparseSetElement<FName> *)(ulonglong)(uint)local_370.CurrentBitIndex;
                } while (local_370.CurrentBitIndex < (local_370.Array)->NumBits);
              }
            }
          }
        }
        iVar30 = local_228;
      }
      iVar30 = ((local_258._8_4_ - local_224) - local_1d4) + local_208._8_4_;
      iVar6 = (int)local_448 + (int)local_438;
      if (((2 < (byte)LogTemp._0_1_) &&
          (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp),
          2 < (byte)LogTemp._0_1_)) &&
         (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp),
         2 < (byte)LogTemp._0_1_)) {
        pcVar16 = "True";
        this = &local_2f0;
        if (iVar6 == iVar30) {
          pcVar16 = "False";
          this = &local_300;
        }
        ::FString::FString(this,pcVar16);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        if ((((iVar6 == iVar30) + 1U & 2) != 0) &&
           (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_300.Data.AllocatorInstance.Data);
        }
        if ((iVar6 != iVar30) &&
           (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
        }
      }
      local_210 = 0;
      if (local_218.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data);
      }
      iVar30 = SUB84(local_258._8_8_,4);
      local_258._8_8_ = local_258._8_8_ & 0xffffffff00000000;
      if (iVar30 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_258,0,(int *)(local_258 + 0xc));
      }
      local_228 = -1;
      local_224 = 0;
      local_230 = 0;
      if (0x80 < local_22c) {
        local_22c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_258 + 0x10),0);
      }
      if (local_238 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_238);
      }
      if ((FScriptContainerElement *)local_258._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_258._0_8_);
      }
      local_1c0 = 0;
      if (local_1c8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1c8);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_208);
      if (local_450.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_450.Data);
      }
      pUVar9 = local_428;
      if (local_440.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_440.Data);
        pUVar9 = local_428;
      }
    }
  }
  else {
    if (2 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    pUVar9 = (USkeletalMesh *)0x0;
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  DestructItems<FSkelMeshMergeMeshUVTransforms,int>
            ((FSkelMeshMergeMeshUVTransforms *)local_60.Data,local_58);
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  local_b0 = 0;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_f8);
  local_100 = 0;
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_1b8 + 0x70));
  if ((FScriptContainerElement *)local_1b8._96_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1b8._96_8_);
  }
  if ((FScriptContainerElement *)local_1b8._80_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1b8._80_8_);
  }
  if ((FScriptContainerElement *)local_1b8._64_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1b8._64_8_);
  }
  if ((FScriptContainerElement *)local_1b8._48_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1b8._48_8_);
  }
  DestructItems<FSkeletalMeshMerge::FMergeMeshInfo,int>
            ((FMergeMeshInfo *)local_1b8._32_8_,local_1b8._40_4_);
  if ((FScriptContainerElement *)local_1b8._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1b8._32_8_);
  }
  if ((FScriptContainerElement *)local_1b8._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1b8._8_8_);
  }
  DestructItems<FSkelMeshMergeMeshUVTransforms,int>
            ((FSkelMeshMergeMeshUVTransforms *)local_3f8.AllocatorInstance.Data,local_3f8.ArrayNum);
  if (local_3f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.AllocatorInstance.Data);
  }
LAB_14ab93ad5:
  if (local_420.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_420.AllocatorInstance.Data);
  }
  return pUVar9;
}

// MergeSkeletons @ 14ab93b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USkeleton * __cdecl USkeletalMergingLibrary::MergeSkeletons(FSkeletonMergeParams *param_1)

{
  ForAnyElementType *pFVar1;
  TObjectPtr<USkeleton>_u_0 *pTVar2;
  FName FVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  FName *pFVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  USkeleton *pUVar23;
  TTuple<FName,unsigned_int> *pTVar24;
  TTuple<FName,UE::Math::TTransform<double>_> *pTVar25;
  undefined7 extraout_var;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar26;
  TArray<FAnimSlotGroup,TSizedDefaultAllocator<32>_> *pTVar27;
  UObject *pUVar28;
  UClass *pUVar29;
  uint uVar30;
  int iVar31;
  ulonglong uVar32;
  uint *puVar33;
  FScriptContainerElement *pFVar34;
  uint uVar35;
  uint uVar36;
  int *piVar37;
  ForElementType<FSetElementId> FVar38;
  longlong *plVar39;
  uint uVar40;
  TObjectPtr<USkeleton>_u_0 *pTVar41;
  ForAnyElementType FVar42;
  FName FVar43;
  uint uVar44;
  FScriptContainerElement *pFVar45;
  uint uVar46;
  USkeleton *pUVar47;
  bool *pbVar48;
  char cVar49;
  FName *pFVar50;
  ulonglong uVar51;
  longlong lVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  undefined1 auStack_5e8 [32];
  longlong *local_5c8;
  FScriptContainerElement *local_5c0;
  longlong local_5b8;
  longlong local_5b0;
  undefined8 local_5a8;
  char local_598;
  char local_597;
  undefined1 local_596;
  undefined1 local_595;
  undefined1 local_594;
  undefined1 local_593;
  undefined1 local_592;
  undefined1 local_591;
  longlong *local_590;
  undefined1 local_588 [4];
  uint local_584;
  uint local_580 [2];
  bool *local_578;
  uint local_570;
  longlong local_568;
  longlong local_560;
  FSkeletonMergeParams *local_558;
  TArray<TObjectPtr<USkeleton>,TSizedDefaultAllocator<32>_> local_550;
  uint local_540;
  uint local_53c;
  uint local_538;
  int local_534;
  FName *local_530;
  TArray<FVirtualBone_const_*,TSizedDefaultAllocator<32>_> local_528;
  bool *local_518;
  longlong local_510;
  longlong local_508;
  TArray<TObjectPtr<USkeletalMeshSocket>,TSizedDefaultAllocator<32>_> local_500;
  TPairInitializer<unsigned_int_const_&,FVirtualBone_const_*_&&> local_4f0;
  TObjectPtr<USkeleton>_u_0 local_4e0;
  FName local_4d8;
  TPairInitializer<FName_const_&,UE::Math::TTransform<double>_const_&> local_4d0;
  FScriptContainerElement *local_4c0;
  undefined8 *local_4b8;
  longlong *local_4b0;
  ulonglong local_4a8;
  undefined1 local_4a0 [16];
  FString local_490;
  FString local_480;
  FName *local_470;
  FScriptContainerElement *local_468;
  FName *local_460;
  FScriptContainerElement *local_458;
  uint *local_450;
  FScriptContainerElement *local_448;
  uint *local_440;
  FScriptContainerElement **local_438;
  code *local_430;
  undefined8 **local_428;
  FReferenceSkeletonModifier local_420;
  double local_410;
  double local_408;
  double local_400;
  undefined1 local_3f8 [128];
  TSet<TTuple<FName,TArray<UBlendProfile_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UBlendProfile_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_378;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  local_328;
  TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
  local_2d8;
  TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
  local_288;
  undefined1 local_238 [64];
  void *local_1f8;
  undefined4 local_1f0;
  TSet<TTuple<unsigned_int,FVirtualBone_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualBone_const_*,0>,FDefaultSetAllocator>
  local_1e8;
  TSet<TTuple<unsigned_int,TObjectPtr<USkeletalMeshSocket>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<USkeletalMeshSocket>,0>,FDefaultSetAllocator>
  local_198;
  undefined1 local_148 [72];
  int local_100;
  TMapBase<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
  local_f8;
  TMapBase<unsigned_int,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_5e8;
  pTVar41 = (TObjectPtr<USkeleton>_u_0 *)(param_1->SkeletonsToMerge).AllocatorInstance.Data;
  pUVar23 = (USkeleton *)0x0;
  iVar22 = (param_1->SkeletonsToMerge).ArrayNum;
  local_550.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_550.ArrayNum = 0;
  local_550.ArrayMax = 0;
  pTVar2 = pTVar41 + iVar22;
  local_558 = param_1;
  while( true ) {
    if ((param_1->SkeletonsToMerge).ArrayNum != iVar22) {
      local_596 = 0;
      `TCheckedPointerIterator<TObjectPtr<USkeleton>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_596);
    }
    if (pTVar41 == pTVar2) break;
    local_4e0 = (TObjectPtr<USkeleton>_u_0)pTVar41->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_4e0.DebugPtr != (USkeleton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_4e0.DebugPtr);
    }
    TArray<TObjectPtr<USkeleton>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TObjectPtr<USkeleton>_const_&>
              (&local_550,(TObjectPtr<USkeleton> *)&local_4e0.ObjectPtr);
    pTVar41 = pTVar41 + 1;
  }
  iVar22 = local_550.ArrayNum;
  uVar32 = (ulonglong)local_550.ArrayNum;
  if (local_550.ArrayNum == 0) goto LAB_14ab94de3;
  pFVar34 = local_550.AllocatorInstance.Data + uVar32 * 8;
  FVar42.Data = local_550.AllocatorInstance.Data;
  pUVar47 = pUVar23;
  local_4a8 = uVar32;
  while( true ) {
    if ((int)uVar32 != iVar22) {
      local_595 = 0;
      `TCheckedPointerIterator<TObjectPtr<USkeleton>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_595);
      uVar32 = local_550._8_8_ & 0xffffffff;
    }
    uVar46 = (uint)pUVar47;
    if (FVar42.Data == pFVar34) break;
    pUVar47 = (USkeleton *)(ulonglong)(uVar46 + *(int *)(*(longlong *)FVar42.Data + 0x50));
    FVar42.Data = FVar42.Data + 8;
  }
  if (uVar46 == 0) goto LAB_14ab94de3;
  UE::SkeletonMerging::FMergedBoneHierarchy::FMergedBoneHierarchy
            ((FMergedBoneHierarchy *)local_148,uVar46);
  local_328.Elements._0_8_ = 0;
  local_328.Elements._8_8_ = 0;
  local_328.Elements._32_8_ = 0;
  local_328.Elements._40_4_ = 0;
  local_328.Elements._44_4_ = 0x80;
  local_328.Elements._48_4_ = 0xffffffff;
  local_328.Elements._52_4_ = 0;
  local_328.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_328.HashSize = 0;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Reserve(&local_328,uVar46);
  local_2d8.Elements._0_8_ = 0;
  local_2d8.Elements._8_8_ = 0;
  local_2d8.Elements._32_8_ = 0;
  local_2d8.Elements._40_4_ = 0;
  local_2d8.Elements._44_4_ = 0x80;
  local_2d8.Elements._48_4_ = 0xffffffff;
  local_2d8.Elements._52_4_ = 0;
  local_2d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_2d8.HashSize = 0;
  TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
  ::Reserve(&local_2d8,uVar46);
  dVar18 = __real_3f1a36e2e0000000;
  uVar17 = _UNK_15061cc8c;
  uVar16 = _UNK_15061cc88;
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar46 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  cVar49 = '\0';
  local_198.Elements._0_8_ = 0;
  local_198.Elements._8_8_ = 0;
  local_198.Elements._32_8_ = 0;
  local_198.Elements._40_4_ = 0;
  local_198.Elements._44_4_ = 0x80;
  local_198.Elements._48_4_ = 0xffffffff;
  local_198.Elements._52_4_ = 0;
  local_198.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_198.HashSize = 0;
  local_1e8.Elements._0_8_ = 0;
  local_1e8.Elements._8_8_ = 0;
  local_1e8.Elements._32_8_ = 0;
  local_1e8.Elements._40_4_ = 0;
  local_1e8.Elements._44_4_ = 0x80;
  local_1e8.Elements._48_4_ = 0xffffffff;
  local_1e8.Elements._52_4_ = 0;
  local_1e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1e8.HashSize = 0;
  local_238._0_8_ = 0;
  local_238._8_8_ = 0;
  local_238._32_8_ = 0;
  local_238._40_4_ = 0;
  local_238._44_4_ = 0x80;
  local_238._48_4_ = 0xffffffff;
  local_238._52_4_ = 0;
  local_1f8 = (void *)0x0;
  local_1f0 = 0;
  local_288.Pairs.Elements._0_8_ = 0;
  local_288.Pairs.Elements._8_8_ = 0;
  local_288.Pairs.Elements._32_8_ = 0;
  local_288.Pairs.Elements._40_4_ = 0;
  local_288.Pairs.Elements._44_4_ = 0x80;
  local_288.Pairs.Elements._48_4_ = 0xffffffff;
  local_288.Pairs.Elements._52_4_ = 0;
  local_288.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_288.Pairs.HashSize = 0;
  local_378.Elements._0_8_ = 0;
  local_378.Elements._8_8_ = 0;
  local_378.Elements._32_8_ = 0;
  local_378.Elements._40_4_ = 0;
  local_378.Elements._44_4_ = 0x80;
  local_378.Elements._48_4_ = 0xffffffff;
  local_378.Elements._52_4_ = 0;
  local_378.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_378.HashSize = 0;
  local_598 = '\0';
  local_570 = 0;
  if (iVar22 < 1) {
LAB_14ab94af1:
    pUVar28 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar28,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar29 = Z_Construct_UClass_USkeleton_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_3f8,pUVar29);
    local_3f8._8_8_ = pUVar28;
    pUVar23 = (USkeleton *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_3f8);
    if (local_3f8._64_8_ != 0) {
      plVar39 = (longlong *)(local_3f8 + 0x50);
      if ((longlong *)local_3f8._104_8_ != (longlong *)0x0) {
        plVar39 = (longlong *)local_3f8._104_8_;
      }
      (**(code **)(*plVar39 + 0x10))();
    }
    FReferenceSkeletonModifier::FReferenceSkeletonModifier(&local_420,pUVar23);
    UE::SkeletonMerging::FMergedBoneHierarchy::PopulateSkeleton
              ((FMergedBoneHierarchy *)local_148,&local_420);
    FReferenceSkeletonModifier::~FReferenceSkeletonModifier(&local_420);
    if (param_1->bMergeSockets != false) {
      local_500.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_500.ArrayNum = 0;
      local_500.ArrayMax = 0;
      TMapBase<unsigned_int,TObjectPtr<USkeletalMeshSocket>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<USkeletalMeshSocket>,0>_>
      ::GenerateValueArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<unsigned_int,TObjectPtr<USkeletalMeshSocket>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<USkeletalMeshSocket>,0>_>
                  *)&local_198,&local_500);
      AddSockets(pUVar23,&local_500);
      if (local_500.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_500.AllocatorInstance.Data);
      }
    }
    if (param_1->bMergeVirtualBones != false) {
      local_528.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_528.ArrayNum = 0;
      local_528.ArrayMax = 0;
      TMapBase<unsigned_int,FVirtualBone_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualBone_const_*,0>_>
      ::GenerateValueArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<unsigned_int,FVirtualBone_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualBone_const_*,0>_>
                  *)&local_1e8,&local_528);
      iVar22 = local_528.ArrayNum;
      uVar32 = (ulonglong)local_528.ArrayNum;
      pFVar34 = local_528.AllocatorInstance.Data + uVar32 * 8;
      FVar42.Data = local_528.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar32 != iVar22) {
          `TCheckedPointerIterator<FVirtualBone_const_*_const,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_588);
        }
        if (FVar42.Data == pFVar34) break;
        pFVar50 = *(FName **)FVar42.Data;
        USkeleton::AddNewNamedVirtualBone(pUVar23,*pFVar50,pFVar50[1],pFVar50[2]);
        uVar32 = local_528._8_8_ & 0xffffffff;
        FVar42.Data = FVar42.Data + 8;
      }
      if (local_528.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_528.AllocatorInstance.Data);
      }
    }
    if (param_1->bMergeCurveNames != false) {
      AddCurveNames(pUVar23,(TMap<FName,FCurveMetaData_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData_const_*,0>_>
                             *)local_238);
    }
    if (param_1->bMergeBlendProfiles != false) {
      AddBlendProfiles(pUVar23,(TMap<FName,TArray<UBlendProfile_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<UBlendProfile_const_*,TSizedDefaultAllocator<32>_>,0>_>
                                *)&local_378);
    }
    if (param_1->bMergeAnimSlotGroups != false) {
      AddAnimationSlotGroups
                (pUVar23,(TMap<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                          *)&local_288);
    }
  }
  else {
    pbVar48 = &param_1->bCheckSkeletonsCompatibility;
    local_568 = 0;
    local_578 = pbVar48;
    local_518 = pbVar48;
    do {
      lVar52 = local_568;
      uVar32 = 0;
      uVar44 = (uint)pUVar23;
      uVar21 = 0;
      if ((int)uVar44 < local_550.ArrayNum) {
        uVar21 = ~uVar44 >> 0x1f;
      }
      if (uVar21 == 0) {
        local_5c8 = (longlong *)(longlong)(int)uVar44;
        local_5c0 = (FScriptContainerElement *)(longlong)local_550.ArrayNum;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        pbVar48 = local_578;
        cVar49 = local_598;
        if (bVar20) {
          pcVar6 = (code *)swi(3);
          pUVar23 = (USkeleton *)(*pcVar6)();
          return pUVar23;
        }
      }
      local_597 = '\0';
      local_590 = (longlong *)0x0;
      pUVar23 = *(USkeleton **)(local_550.AllocatorInstance.Data + lVar52 * 8);
      iVar22 = (pUVar23->ReferenceSkeleton).RawRefBoneInfo.ArrayNum;
      if (0 < iVar22) {
        local_510 = 0;
        uVar51 = uVar32;
        local_530 = (FName *)(longlong)iVar22;
        do {
          lVar52 = local_510;
          FVar43.ComparisonIndex.Value = 0;
          FVar43.Number = 0;
          iVar22 = (pUVar23->ReferenceSkeleton).RawRefBoneInfo.ArrayNum;
          uVar36 = (uint)uVar32;
          uVar44 = ~uVar36 >> 0x1f;
          uVar21 = 0;
          if ((int)uVar36 < iVar22) {
            uVar21 = uVar44;
          }
          if (uVar21 == 0) {
            local_5c8 = (longlong *)(longlong)(int)uVar36;
            local_5c0 = (FScriptContainerElement *)(longlong)iVar22;
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar6 = (code *)swi(3);
              pUVar23 = (USkeleton *)(*pcVar6)();
              return pUVar23;
            }
          }
          pFVar50 = (FName *)((pUVar23->ReferenceSkeleton).RawRefBoneInfo.AllocatorInstance.Data +
                             lVar52);
          uVar21 = pFVar50[1].ComparisonIndex.Value;
          if (uVar21 != 0xffffffff) {
            iVar22 = (pUVar23->ReferenceSkeleton).RawRefBoneInfo.ArrayNum;
            uVar30 = 0;
            if ((int)uVar21 < iVar22) {
              uVar30 = ~uVar21 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (local_5c8 = (longlong *)(longlong)(int)uVar21,
               local_5c0 = (FScriptContainerElement *)(longlong)iVar22,
               bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar6 = (code *)swi(3);
              pUVar23 = (USkeleton *)(*pcVar6)();
              return pUVar23;
            }
            FVar43 = *(FName *)((pUVar23->ReferenceSkeleton).RawRefBoneInfo.AllocatorInstance.Data +
                               (longlong)(int)uVar21 * 0xc);
          }
          if (pFVar50[1].ComparisonIndex.Value == 0xffffffff) {
            uVar21 = 0;
          }
          else {
            uVar21 = ::GetTypeHash(FVar43.ComparisonIndex.Value);
            uVar21 = FVar43.Number + uVar21;
          }
          pTVar24 = TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
                    ::Find(&local_328,FVar43);
          pbVar48 = local_518;
          piVar37 = (int *)&pTVar24->field_0x8;
          if (pTVar24 == (TTuple<FName,unsigned_int> *)0x0) {
            piVar37 = (int *)0x0;
          }
          if (piVar37 == (int *)0x0) {
            iVar22 = 0;
          }
          else {
            iVar22 = *piVar37;
          }
          uVar35 = iVar22 - uVar21 ^ uVar21 >> 0xd;
          uVar30 = (-0x61c88647 - uVar35) - uVar21 ^ uVar35 << 8;
          uVar40 = (uVar21 - uVar30) - uVar35 ^ uVar30 >> 0xd;
          uVar35 = (uVar35 - uVar40) - uVar30 ^ uVar40 >> 0xc;
          uVar21 = (uVar30 - uVar35) - uVar40 ^ uVar35 << 0x10;
          uVar40 = (uVar40 - uVar21) - uVar35 ^ uVar21 >> 5;
          uVar30 = (uVar35 - uVar40) - uVar21 ^ uVar40 >> 3;
          uVar21 = (uVar21 - uVar30) - uVar40 ^ uVar30 << 10;
          local_584 = (uVar40 - uVar21) - uVar30 ^ uVar21 >> 0xf;
          if (*local_518 != false) {
            pTVar24 = TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
                      ::Find(&local_328,*pFVar50);
            puVar33 = (uint *)&pTVar24->field_0x8;
            if (pTVar24 == (TTuple<FName,unsigned_int> *)0x0) {
              puVar33 = (uint *)0x0;
            }
            plVar39 = local_590;
            if (puVar33 != (uint *)0x0) {
              if (*puVar33 != local_584) {
                if (1 < (byte)LogSkeletalMeshMerge._0_1_) {
                  local_4d0._4_8_ = pUVar23->_padding_;
                  ::FName::ToString((FName *)((longlong)&local_4d0.Key + 4),&local_480);
                  UE::Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMeshMerge);
                  if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_480.Data.AllocatorInstance.Data);
                  }
                }
                local_598 = '\x01';
                lVar52 = local_568;
                param_1 = local_558;
                cVar49 = local_598;
                local_578 = pbVar48;
                break;
              }
              if (local_597 == '\0') {
                pTVar25 = TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                          ::Find(&local_2d8,*pFVar50);
                if ((pTVar25 == (TTuple<FName,UE::Math::TTransform<double>_> *)0x0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Pair != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                        ,0x288,L""), bVar20)) {
                  pcVar6 = (code *)swi(3);
                  pUVar23 = (USkeleton *)(*pcVar6)();
                  return pUVar23;
                }
                plVar39 = local_590;
                iVar22 = (pUVar23->ReferenceSkeleton).RawRefBonePose.ArrayNum;
                pFVar34 = (FScriptContainerElement *)(longlong)iVar22;
                uVar21 = 0;
                if ((int)uVar36 < iVar22) {
                  uVar21 = uVar44;
                }
                if (uVar21 == 0) {
                  iVar22 = 0x506106c8;
                  local_5c8 = local_590;
                  local_5c0 = pFVar34;
                  bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  uVar21 = (uint)CONCAT71(extraout_var,bVar20);
                  if (bVar20) {
                    pcVar6 = (code *)swi(3);
                    pUVar23 = (USkeleton *)(*pcVar6)();
                    return pUVar23;
                  }
                }
                pFVar34 = (pUVar23->ReferenceSkeleton).RawRefBonePose.AllocatorInstance.Data;
                dVar53 = *(double *)&pTVar25->field_0x40 - *(double *)(pFVar34 + uVar51 + 0x30);
                dVar54 = *(double *)&pTVar25->field_0x48 - *(double *)(pFVar34 + uVar51 + 0x30 + 8);
                dVar55 = *(double *)&pTVar25->field_0x30 - *(double *)(pFVar34 + uVar51 + 0x20);
                dVar56 = *(double *)&pTVar25->field_0x38 - *(double *)(pFVar34 + uVar51 + 0x20 + 8);
                local_408 = dVar18;
                lVar52 = -(ulonglong)
                          (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar54 >> 0x20) & uVar17,
                                                     SUB84(dVar54,0) & uVar16));
                auVar7._8_4_ = (int)lVar52;
                auVar7._0_8_ = -(ulonglong)
                                (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar53 >> 0x20) &
                                                           uVar15,SUB84(dVar53,0) & uVar46));
                auVar7._12_4_ = (int)((ulonglong)lVar52 >> 0x20);
                uVar30 = movmskpd(iVar22,auVar7);
                lVar52 = -(ulonglong)
                          (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) & uVar17,
                                                     SUB84(dVar56,0) & uVar16));
                auVar12._8_4_ = (int)lVar52;
                auVar12._0_8_ =
                     -(ulonglong)
                      (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar55 >> 0x20) & uVar15,
                                                 SUB84(dVar55,0) & uVar46));
                auVar12._12_4_ = (int)((ulonglong)lVar52 >> 0x20);
                iVar22 = movmskpd(uVar21,auVar12);
                if ((uVar30 & 0x3fffffff) == 0 && iVar22 == 0) {
                  local_400 = dVar18;
                  dVar53 = *(double *)&pTVar25->field_0x20 - *(double *)(pFVar34 + uVar51 + 0x10);
                  dVar54 = *(double *)&pTVar25->field_0x28 -
                           *(double *)(pFVar34 + uVar51 + 0x10 + 8);
                  dVar59 = *(double *)&pTVar25->field_0x20 + *(double *)(pFVar34 + uVar51 + 0x10);
                  dVar60 = *(double *)&pTVar25->field_0x28 +
                           *(double *)(pFVar34 + uVar51 + 0x10 + 8);
                  dVar55 = *(double *)&pTVar25->field_0x10 - *(double *)(pFVar34 + uVar51);
                  dVar56 = *(double *)&pTVar25->field_0x18 - *(double *)(pFVar34 + uVar51 + 8);
                  dVar57 = *(double *)&pTVar25->field_0x10 + *(double *)(pFVar34 + uVar51);
                  dVar58 = *(double *)&pTVar25->field_0x18 + *(double *)(pFVar34 + uVar51 + 8);
                  lVar52 = -(ulonglong)
                            (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar54 >> 0x20) & uVar17,
                                                       SUB84(dVar54,0) & uVar16));
                  auVar8._8_4_ = (int)lVar52;
                  auVar8._0_8_ = -(ulonglong)
                                  (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar53 >> 0x20) &
                                                             uVar15,SUB84(dVar53,0) & uVar46));
                  auVar8._12_4_ = (int)((ulonglong)lVar52 >> 0x20);
                  iVar31 = movmskpd(0,auVar8);
                  lVar52 = -(ulonglong)
                            (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) & uVar17,
                                                       SUB84(dVar56,0) & uVar16));
                  auVar9._8_4_ = (int)lVar52;
                  auVar9._0_8_ = -(ulonglong)
                                  (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar55 >> 0x20) &
                                                             uVar15,SUB84(dVar55,0) & uVar46));
                  auVar9._12_4_ = (int)((ulonglong)lVar52 >> 0x20);
                  uVar21 = movmskpd(iVar22,auVar9);
                  uVar30 = iVar31 << 2 | uVar21;
                  if (uVar30 != 0) {
                    lVar52 = -(ulonglong)
                              (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar60 >> 0x20) & uVar17,
                                                         SUB84(dVar60,0) & uVar16));
                    auVar10._8_4_ = (int)lVar52;
                    auVar10._0_8_ =
                         -(ulonglong)
                          (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar59 >> 0x20) & uVar15,
                                                     SUB84(dVar59,0) & uVar46));
                    auVar10._12_4_ = (int)((ulonglong)lVar52 >> 0x20);
                    uVar30 = movmskpd(uVar30,auVar10);
                    lVar52 = -(ulonglong)
                              (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar58 >> 0x20) & uVar17,
                                                         SUB84(dVar58,0) & uVar16));
                    auVar13._8_4_ = (int)lVar52;
                    auVar13._0_8_ =
                         -(ulonglong)
                          (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) & uVar15,
                                                     SUB84(dVar57,0) & uVar46));
                    auVar13._12_4_ = (int)((ulonglong)lVar52 >> 0x20);
                    uVar21 = movmskpd(uVar21,auVar13);
                    if ((uVar30 & 0x3fffffff) != 0 || uVar21 != 0) goto LAB_14ab94268;
                  }
                  dVar53 = *(double *)&pTVar25->field_0x60 - *(double *)(pFVar34 + uVar51 + 0x50);
                  dVar54 = *(double *)&pTVar25->field_0x68 -
                           *(double *)(pFVar34 + uVar51 + 0x50 + 8);
                  dVar55 = *(double *)&pTVar25->field_0x50 - *(double *)(pFVar34 + uVar51 + 0x40);
                  dVar56 = *(double *)&pTVar25->field_0x58 -
                           *(double *)(pFVar34 + uVar51 + 0x40 + 8);
                  local_410 = dVar18;
                  lVar52 = -(ulonglong)
                            (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar54 >> 0x20) & uVar17,
                                                       SUB84(dVar54,0) & uVar16));
                  auVar11._8_4_ = (int)lVar52;
                  auVar11._0_8_ =
                       -(ulonglong)
                        (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar53 >> 0x20) & uVar15,
                                                   SUB84(dVar53,0) & uVar46));
                  auVar11._12_4_ = (int)((ulonglong)lVar52 >> 0x20);
                  uVar30 = movmskpd(0,auVar11);
                  lVar52 = -(ulonglong)
                            (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) & uVar17,
                                                       SUB84(dVar56,0) & uVar16));
                  auVar14._8_4_ = (int)lVar52;
                  auVar14._0_8_ =
                       -(ulonglong)
                        (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar55 >> 0x20) & uVar15,
                                                   SUB84(dVar55,0) & uVar46));
                  auVar14._12_4_ = (int)((ulonglong)lVar52 >> 0x20);
                  iVar22 = movmskpd(uVar21,auVar14);
                  if ((uVar30 & 0x3fffffff) == 0 && iVar22 == 0) goto LAB_14ab942be;
                }
LAB_14ab94268:
                if (2 < (byte)LogSkeletalMeshMerge._0_1_) {
                  local_4d8 = (FName)pUVar23->_padding_;
                  ::FName::ToString(&local_4d8,&local_490);
                  UE::Logging::Private::BasicLog<3>
                            (&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMeshMerge);
                  if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_490.Data.AllocatorInstance.Data);
                  }
                }
                local_597 = '\x01';
              }
            }
LAB_14ab942be:
            iVar22 = (pUVar23->ReferenceSkeleton).RawRefBonePose.ArrayNum;
            uVar21 = 0;
            if ((int)uVar36 < iVar22) {
              uVar21 = uVar44;
            }
            if ((uVar21 == 0) &&
               (local_5c8 = plVar39, local_5c0 = (FScriptContainerElement *)(longlong)iVar22,
               bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar6 = (code *)swi(3);
              pUVar23 = (USkeleton *)(*pcVar6)();
              return pUVar23;
            }
            local_468 = (pUVar23->ReferenceSkeleton).RawRefBonePose.AllocatorInstance.Data +
                        (longlong)(int)uVar36 * 0x60;
            local_470 = pFVar50;
            TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,UE::Math::TTransform<double>_const_&>_>
                      (&local_2d8,&local_4d0,(bool *)&local_470);
          }
          pbVar48 = local_518;
          TMapBase<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
          ::Emplace<FName_const_&,unsigned_int_const_&>
                    ((TMapBase<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
                      *)&local_328,pFVar50,&local_584);
          uVar21 = local_584;
          iVar22 = (pUVar23->ReferenceSkeleton).RawRefBonePose.ArrayNum;
          uVar44 = 0;
          if ((int)uVar36 < iVar22) {
            uVar44 = ~uVar36 >> 0x1f;
          }
          if (uVar44 == 0) {
            local_5c8 = (longlong *)(longlong)(int)uVar36;
            local_5c0 = (FScriptContainerElement *)(longlong)iVar22;
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar6 = (code *)swi(3);
              pUVar23 = (USkeleton *)(*pcVar6)();
              return pUVar23;
            }
          }
          local_580[0] = uVar21;
          local_458 = (pUVar23->ReferenceSkeleton).RawRefBonePose.AllocatorInstance.Data +
                      (longlong)(int)uVar36 * 0x60;
          local_460 = pFVar50;
          TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,UE::Math::TTransform<double>_const_&>_>
                    ((TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                      *)local_148,
                     (TPairInitializer<FName_const_&,UE::Math::TTransform<double>_const_&> *)
                     local_4a0,(bool *)&local_460);
          pTVar26 = TMapBase<unsigned_int,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                    ::FindOrAddImpl<unsigned_int_const_&>(&local_a8,local_580[0],local_580);
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                    (pTVar26,(FName *)(local_4a0 + 4),(bool *)pFVar50);
          FVar43 = *pFVar50;
          uVar21 = ::GetTypeHash(FVar43.ComparisonIndex.Value);
          uVar21 = uVar21 + FVar43.Number;
          uVar30 = local_580[0] - uVar21 ^ uVar21 >> 0xd;
          uVar44 = (-0x61c88647 - uVar21) - uVar30 ^ uVar30 << 8;
          uVar35 = (uVar21 - uVar44) - uVar30 ^ uVar44 >> 0xd;
          uVar30 = (uVar30 - uVar35) - uVar44 ^ uVar35 >> 0xc;
          uVar21 = (uVar44 - uVar30) - uVar35 ^ uVar30 << 0x10;
          uVar35 = (uVar35 - uVar21) - uVar30 ^ uVar21 >> 5;
          uVar44 = (uVar30 - uVar35) - uVar21 ^ uVar35 >> 3;
          uVar21 = (uVar21 - uVar44) - uVar35 ^ uVar44 << 10;
          local_540 = (uVar35 - uVar21) - uVar44 ^ uVar21 >> 0xf;
          TMapBase<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
          ::Emplace<FName_const_&,unsigned_int>(&local_f8,pFVar50,&local_540);
          uVar32 = (ulonglong)(uVar36 + 1);
          local_590 = (longlong *)((longlong)local_590 + 1);
          local_510 = local_510 + 0xc;
          uVar51 = uVar51 + 0x60;
          lVar52 = local_568;
          param_1 = local_558;
          cVar49 = local_598;
          local_578 = pbVar48;
        } while ((longlong)local_590 < (longlong)local_530);
      }
      if ((*pbVar48 == false) || (cVar49 == '\0')) {
        if (param_1->bMergeSockets != false) {
          pFVar45 = (pUVar23->Sockets).AllocatorInstance.Data;
          iVar22 = (pUVar23->Sockets).ArrayNum;
          pFVar34 = pFVar45 + (longlong)iVar22 * 8;
          while( true ) {
            if ((pUVar23->Sockets).ArrayNum != iVar22) {
              local_594 = 0;
              `TCheckedPointerIterator<TObjectPtr<USkeletalMeshSocket>_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(&local_594);
            }
            if (pFVar45 == pFVar34) break;
            uVar4 = *(undefined8 *)(*(longlong *)pFVar45 + 0x30);
            uVar21 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
            uVar21 = uVar21 + (int)((ulonglong)uVar4 >> 0x20);
            uVar4 = *(undefined8 *)(*(longlong *)pFVar45 + 0x28);
            uVar44 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
            uVar36 = ((int)((ulonglong)uVar4 >> 0x20) - uVar21) + uVar44 ^ uVar21 >> 0xd;
            uVar44 = (-0x61c88647 - uVar36) - uVar21 ^ uVar36 << 8;
            uVar30 = (uVar21 - uVar36) - uVar44 ^ uVar44 >> 0xd;
            uVar36 = (uVar36 - uVar30) - uVar44 ^ uVar30 >> 0xc;
            uVar21 = (uVar44 - uVar36) - uVar30 ^ uVar36 << 0x10;
            uVar30 = (uVar30 - uVar21) - uVar36 ^ uVar21 >> 5;
            uVar44 = (uVar36 - uVar30) - uVar21 ^ uVar30 >> 3;
            uVar21 = (uVar21 - uVar44) - uVar30 ^ uVar44 << 10;
            local_450 = &local_53c;
            local_53c = (uVar30 - uVar21) - uVar44 ^ uVar21 >> 0xf;
            local_448 = pFVar45;
            TSet<TTuple<unsigned_int,TObjectPtr<USkeletalMeshSocket>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TObjectPtr<USkeletalMeshSocket>,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<unsigned_int_const_&,TObjectPtr<USkeletalMeshSocket>_const_&>_>
                      (&local_198,
                       (TPairInitializer<unsigned_int_const_&,TObjectPtr<USkeletalMeshSocket>_const_&>
                        *)(local_4a0 + 8),(bool *)&local_450);
            pFVar45 = pFVar45 + 8;
          }
        }
        if (param_1->bMergeVirtualBones != false) {
          iVar22 = (pUVar23->VirtualBones).ArrayNum;
          pFVar45 = (pUVar23->VirtualBones).AllocatorInstance.Data;
          pFVar34 = pFVar45 + (longlong)iVar22 * 0x18;
          while( true ) {
            if ((pUVar23->VirtualBones).ArrayNum != iVar22) {
              local_593 = 0;
              `TCheckedPointerIterator<FVirtualBone_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_593);
            }
            if (pFVar45 == pFVar34) break;
            uVar4 = *(undefined8 *)(pFVar45 + 8);
            uVar21 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
            uVar21 = uVar21 + (int)((ulonglong)uVar4 >> 0x20);
            uVar4 = *(undefined8 *)pFVar45;
            uVar44 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
            uVar36 = ((int)((ulonglong)uVar4 >> 0x20) - uVar21) + uVar44 ^ uVar21 >> 0xd;
            uVar44 = (-0x61c88647 - uVar21) - uVar36 ^ uVar36 << 8;
            uVar30 = (uVar21 - uVar44) - uVar36 ^ uVar44 >> 0xd;
            uVar36 = (uVar36 - uVar30) - uVar44 ^ uVar30 >> 0xc;
            uVar21 = (uVar44 - uVar36) - uVar30 ^ uVar36 << 0x10;
            uVar30 = (uVar30 - uVar21) - uVar36 ^ uVar21 >> 5;
            uVar44 = (uVar36 - uVar30) - uVar21 ^ uVar30 >> 3;
            uVar21 = (uVar21 - uVar44) - uVar30 ^ uVar44 << 10;
            local_440 = &local_538;
            local_538 = (uVar30 - uVar21) - uVar44 ^ uVar21 >> 0xf;
            local_438 = &local_4c0;
            local_4c0 = pFVar45;
            TSet<TTuple<unsigned_int,FVirtualBone_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVirtualBone_const_*,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<unsigned_int_const_&,FVirtualBone_const_*_&&>_>
                      (&local_1e8,&local_4f0,(bool *)&local_440);
            pFVar45 = pFVar45 + 0x18;
          }
        }
        if (param_1->bMergeCurveNames != false) {
          local_4b8 = (undefined8 *)local_238;
          local_428 = &local_4b8;
          local_430 = UE::Core::Private::Function::
                      TFunctionRefCaller<`USkeletalMergingLibrary::MergeSkeletons'::__l84::<lambda_2>,void,FName,FCurveMetaData_const_&>
                      ::Call;
          USkeleton::ForEachCurveMetaData
                    (pUVar23,(TFunctionRef<void___cdecl(FName,FCurveMetaData_const_&)> *)&local_430)
          ;
        }
        if (param_1->bMergeAnimSlotGroups != false) {
          pTVar27 = USkeleton::GetSlotGroups(pUVar23);
          pFVar50 = (FName *)(pTVar27->AllocatorInstance).Data;
          uVar32 = (ulonglong)pTVar27->ArrayNum;
          local_590 = (longlong *)CONCAT44(local_590._4_4_,pTVar27->ArrayNum);
          local_530 = pFVar50 + uVar32 * 3;
          while( true ) {
            pFVar19 = local_530;
            if (pTVar27->ArrayNum != (int)uVar32) {
              local_592 = 0;
              `TCheckedPointerIterator<FAnimSlotGroup_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_592);
            }
            param_1 = local_558;
            if (pFVar50 == pFVar19) break;
            FVar43 = *pFVar50;
            uVar21 = ::GetTypeHash(FVar43.ComparisonIndex.Value);
            pTVar26 = TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                      ::FindOrAddImpl<FName_const_&>(&local_288,FVar43.Number + uVar21,pFVar50);
            uVar21 = pFVar50[2].ComparisonIndex.Value;
            FVar43 = pFVar50[1];
            if (((int)uVar21 < 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar20)) {
              pcVar6 = (code *)swi(3);
              pUVar23 = (USkeleton *)(*pcVar6)();
              return pUVar23;
            }
            uVar44 = *(int *)&(pTVar26->Elements).field_0x8 -
                     *(int *)&(pTVar26->Elements).field_0x34;
            uVar36 = uVar44 + uVar21;
            if (uVar44 < uVar36) {
              if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar36);
              }
              TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)pTVar26,uVar36);
              if (uVar36 < 4) {
                iVar22 = 1;
              }
              else {
                uVar32 = (ulonglong)((uVar36 >> 1) + 7) * 2 + 1;
                lVar52 = 0x3f;
                if (uVar32 != 0) {
                  for (; uVar32 >> lVar52 == 0; lVar52 = lVar52 + -1) {
                  }
                }
                local_4f0.Key._4_4_ = (undefined4)lVar52;
                iVar22 = 1 << ((byte)lVar52 & 0x1f);
              }
              if ((pTVar26->HashSize == 0) || (pTVar26->HashSize < iVar22)) {
                pTVar26->HashSize = iVar22;
                TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(pTVar26);
              }
            }
            FVar3 = (FName)((longlong)FVar43 + (longlong)(int)uVar21 * 8);
            for (; FVar43 != FVar3; FVar43 = (FName)((longlong)FVar43 + 8)) {
              TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                        (pTVar26,(FName *)&local_4f0.Value,(bool *)FVar43);
            }
            uVar32 = (ulonglong)local_590 & 0xffffffff;
            pFVar50 = pFVar50 + 3;
          }
        }
        lVar52 = local_568;
        pbVar48 = local_578;
        cVar49 = local_598;
        if (param_1->bMergeBlendProfiles != false) {
          pFVar45 = (pUVar23->BlendProfiles).AllocatorInstance.Data;
          iVar22 = (pUVar23->BlendProfiles).ArrayNum;
          pFVar34 = pFVar45 + (longlong)iVar22 * 8;
          while( true ) {
            if ((pUVar23->BlendProfiles).ArrayNum != iVar22) {
              local_591 = 0;
              `TCheckedPointerIterator<TObjectPtr<UBlendProfile>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_591);
            }
            lVar52 = local_568;
            pbVar48 = local_578;
            param_1 = local_558;
            cVar49 = local_598;
            if (pFVar45 == pFVar34) break;
            lVar52 = *(longlong *)(*(longlong *)pFVar45 + 0x18);
            local_508 = lVar52;
            uVar21 = ::GetTypeHash((FNameEntryId)(uint)lVar52);
            uVar21 = uVar21 + (int)((ulonglong)lVar52 >> 0x20);
            if (local_378.Elements._8_4_ != local_378.Elements._52_4_) {
              FVar38 = (ForElementType<FSetElementId>)&local_378.Hash;
              if (local_378.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar38 = local_378.Hash.SecondaryData;
              }
              iVar31 = *(int *)((longlong)FVar38 + (ulonglong)(local_378.HashSize - 1U & uVar21) * 4
                               );
              while (iVar31 != -1) {
                plVar39 = (longlong *)((longlong)iVar31 * 0x20 + local_378.Elements._0_8_);
                if (*plVar39 == local_508) {
                  if (plVar39 != (longlong *)0x0) goto LAB_14ab949e4;
                  break;
                }
                iVar31 = (int)plVar39[3];
              }
            }
            local_4b0 = &local_508;
            local_5c8 = (longlong *)0x0;
            TSet<TTuple<FName,TArray<UBlendProfile_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UBlendProfile_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<FName_&&>_>
                      (&local_378,(uint)&local_534,(TKeyInitializer<FName_&&> *)(ulonglong)uVar21,
                       (bool *)&local_4b0);
            plVar39 = (longlong *)((longlong)local_534 * 0x20 + local_378.Elements._0_8_);
LAB_14ab949e4:
            local_560 = *(longlong *)pFVar45;
            pFVar1 = (ForAnyElementType *)(plVar39 + 1);
            pFVar5 = pFVar1->Data;
            if ((pFVar5 <= (FScriptContainerElement *)&local_560) &&
               ((FScriptContainerElement *)&local_560 <
                pFVar5 + (longlong)*(int *)((longlong)plVar39 + 0x14) * 8)) {
              local_5b0 = (longlong)(int)plVar39[2];
              local_5a8 = 8;
              local_5c8 = &local_560;
              local_5c0 = pFVar5;
              local_5b8 = (longlong)*(int *)((longlong)plVar39 + 0x14);
              bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar20) {
                pcVar6 = (code *)swi(3);
                pUVar23 = (USkeleton *)(*pcVar6)();
                return pUVar23;
              }
            }
            iVar31 = (int)plVar39[2];
            if (iVar31 == *(int *)((longlong)plVar39 + 0x14)) {
              iVar31 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,pFVar1,(int *)((longlong)plVar39 + 0x14));
            }
            *(int *)(plVar39 + 2) = iVar31 + 1;
            pFVar45 = pFVar45 + 8;
            *(longlong *)(pFVar1->Data + (longlong)iVar31 * 8) = local_560;
          }
        }
      }
      local_568 = lVar52 + 1;
      local_570 = local_570 + 1;
      pUVar23 = (USkeleton *)(ulonglong)local_570;
    } while (local_568 < (longlong)local_4a8);
    if (cVar49 == '\0') goto LAB_14ab94af1;
    if (1 < (byte)LogSkeletalMeshMerge._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMeshMerge);
    }
    pUVar23 = (USkeleton *)0x0;
  }
  local_378.HashSize = 0;
  if (local_378.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_378.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<UBlendProfile_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<UBlendProfile_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_378.Elements);
  local_288.Pairs.HashSize = 0;
  if (local_288.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_288.Pairs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_288);
  local_1f0 = 0;
  if (local_1f8 != (void *)0x0) {
    FMemory::Free(local_1f8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCurveMetaData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCurveMetaData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FCurveMetaData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_238);
  local_1e8.HashSize = 0;
  if (local_1e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVirtualBone_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVirtualBone_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1e8.Elements);
  local_198.HashSize = 0;
  if (local_198.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_198.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TObjectPtr<USkeletalMeshSocket>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TObjectPtr<USkeletalMeshSocket>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_198.Elements);
  local_2d8.HashSize = 0;
  if (local_2d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_2d8.Elements);
  local_328.HashSize = 0;
  if (local_328.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_328.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_328.Elements);
  local_a8.Pairs.HashSize = 0;
  if (local_a8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8.Pairs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_a8);
  local_f8.Pairs.HashSize = 0;
  if (local_f8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f8.Pairs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_f8);
  local_100 = 0;
  if ((ForElementType<FSetElementId>)local_148._64_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_148._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_148);
LAB_14ab94de3:
  if (local_550.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_550.AllocatorInstance.Data);
  }
  return pUVar23;
}

// StaticRegisterNativesUSkeletalMergingLibrary @ 14ab96110

void __cdecl USkeletalMergingLibrary::StaticRegisterNativesUSkeletalMergingLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_USkeletalMergingLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execMergeMeshes @ 14ab96670

void __cdecl
USkeletalMergingLibrary::execMergeMeshes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USkeletalMesh *pUVar2;
  FSkeletalMeshMergeParams *pFVar3;
  FSkeletalMeshMergeParams local_48;
  
  FSkeletalMeshMergeParams::FSkeletalMeshMergeParams(&local_48);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pFVar3 = &local_48;
  if ((FSkeletalMeshMergeParams *)param_2->MostRecentPropertyAddress !=
      (FSkeletalMeshMergeParams *)0x0) {
    pFVar3 = (FSkeletalMeshMergeParams *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = MergeMeshes(pFVar3);
  *(USkeletalMesh **)param_3 = pUVar2;
  if (local_48.MeshesToMerge.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.MeshesToMerge.AllocatorInstance.Data);
  }
  DestructItems<FSkelMeshMergeMeshUVTransforms,int>
            ((FSkelMeshMergeMeshUVTransforms *)local_48.UVTransformsPerMesh.AllocatorInstance.Data,
             local_48.UVTransformsPerMesh.ArrayNum);
  if (local_48.UVTransformsPerMesh.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.UVTransformsPerMesh.AllocatorInstance.Data);
  }
  DestructItems<FSkelMeshMergeSectionMapping,int>
            ((FSkelMeshMergeSectionMapping *)local_48.MeshSectionMappings.AllocatorInstance.Data,
             local_48.MeshSectionMappings.ArrayNum);
  if (local_48.MeshSectionMappings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.MeshSectionMappings.AllocatorInstance.Data);
  }
  return;
}

// execMergeSkeletons @ 14ab96760

void __cdecl
USkeletalMergingLibrary::execMergeSkeletons(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USkeleton *pUVar2;
  FSkeletonMergeParams *pFVar3;
  FSkeletonMergeParams local_28;
  
  local_28.bMergeSockets = true;
  local_28.bMergeVirtualBones = true;
  local_28.bMergeCurveNames = true;
  local_28.bMergeBlendProfiles = true;
  local_28.SkeletonsToMerge.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SkeletonsToMerge.ArrayNum = 0;
  local_28.SkeletonsToMerge.ArrayMax = 0;
  local_28.bMergeAnimSlotGroups = true;
  local_28.bCheckSkeletonsCompatibility = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar3 = &local_28;
  if ((FSkeletonMergeParams *)param_2->MostRecentPropertyAddress != (FSkeletonMergeParams *)0x0) {
    pFVar3 = (FSkeletonMergeParams *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = MergeSkeletons(pFVar3);
  *(USkeleton **)param_3 = pUVar2;
  if (local_28.SkeletonsToMerge.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SkeletonsToMerge.AllocatorInstance.Data);
  }
  return;
}

