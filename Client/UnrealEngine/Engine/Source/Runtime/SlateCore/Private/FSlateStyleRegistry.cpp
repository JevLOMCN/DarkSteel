// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 7

// FindSlateStyle @ 14257e320

ISlateStyle * __cdecl FSlateStyleRegistry::FindSlateStyle(FName *param_1)

{
  int iVar1;
  FName FVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  FVar2 = *param_1;
  uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (SlateStyleRepository._8_4_ != SlateStyleRepository._52_4_) {
    lVar5 = 0x154ba6ba8;
    if (SlateStyleRepository._64_8_ != 0) {
      lVar5 = SlateStyleRepository._64_8_;
    }
    iVar1 = *(int *)(lVar5 + (ulonglong)(SlateStyleRepository._72_4_ - 1 & FVar2.Number + uVar3) * 4
                    );
    while (iVar1 != -1) {
      lVar5 = SlateStyleRepository._0_8_ + (longlong)iVar1 * 0x18;
      if (*(FName *)(SlateStyleRepository._0_8_ + (longlong)iVar1 * 0x18) == FVar2) {
        puVar4 = (undefined8 *)(lVar5 + 8);
        if (lVar5 == 0) {
          puVar4 = (undefined8 *)0x0;
        }
        if (puVar4 == (undefined8 *)0x0) {
          return (ISlateStyle *)0x0;
        }
        return (ISlateStyle *)*puVar4;
      }
      iVar1 = *(int *)(lVar5 + 0x10);
    }
  }
  return (ISlateStyle *)0x0;
}

// GetAllResources @ 14257e750

void __cdecl
FSlateStyleRegistry::GetAllResources
          (TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TMap<FName,ISlateStyle_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,ISlateStyle_const_*,0>_>
  *local_40;
  int iStack_38;
  uint uStack_34;
  undefined8 local_30;
  undefined4 uStack_28;
  uint uStack_24;
  int local_20;
  int iStack_1c;
  
  iStack_38 = 0;
  uStack_34 = 1;
  uVar5 = 0;
  local_20 = 0;
  uVar4 = SlateStyleRepository._40_4_;
  if (uVar4 != 0) {
    uVar5 = SlateStyleRepository._40_8_ & 0xffffffff;
    puVar6 = (uint *)&SlateStyleRepository.field_0x10;
    if (SlateStyleRepository._32_8_ != 0) {
      puVar6 = (uint *)SlateStyleRepository._32_8_;
    }
    uVar2 = *puVar6;
    while (uVar2 == 0) {
      lVar3 = (longlong)iStack_38;
      local_20 = local_20 + 0x20;
      iStack_38 = iStack_38 + 1;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_38)
      goto LAB_14257e7ea;
      uVar2 = puVar6[lVar3 + 1];
    }
    uStack_34 = -uVar2 & uVar2;
    uVar5 = (ulonglong)uStack_34 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar2 = (int)lVar3 + -1 + local_20;
    if ((int)uVar4 < (int)uVar2) {
      uVar2 = uVar4;
    }
    uVar5 = (ulonglong)uVar2;
  }
LAB_14257e7ea:
  local_40 = &SlateStyleRepository;
  local_30 = 0x154ba6b80;
  uStack_28 = 0xffffffff;
  uStack_24 = (uint)uVar5;
  iStack_1c = TStack_60.CurrentBitIndex;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = local_20;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&SlateStyleRepository.field_0x10;
  TStack_60._padding_._0_4_ = iStack_38;
  TStack_60._padding_._4_4_ = uStack_34;
  TStack_60.CurrentBitIndex = uStack_24;
  if ((int)uStack_24 < (int)uVar4) {
    do {
      plVar1 = *(longlong **)(SlateStyleRepository._0_8_ + 8 + (longlong)(int)uVar5 * 0x18);
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      uVar5 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return;
}

// GetSylesUsingBrush @ 1425898c0

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
FSlateStyleRegistry::GetSylesUsingBrush
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  void *local_98 [2];
  TMap<FName,ISlateStyle_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,ISlateStyle_const_*,0>_>
  *local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  TMap<FName,ISlateStyle_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,ISlateStyle_const_*,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  uVar10 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  uStack_80 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uStack_7c = 1;
  local_68 = 0;
  uVar8 = SlateStyleRepository._40_4_;
  uVar11 = uVar10;
  if (uVar8 != 0) {
    uVar11 = SlateStyleRepository._40_8_ & 0xffffffff;
    puVar13 = (uint *)&SlateStyleRepository.field_0x10;
    if (SlateStyleRepository._32_8_ != 0) {
      puVar13 = (uint *)SlateStyleRepository._32_8_;
    }
    uVar5 = *puVar13;
    uVar12 = uVar10;
    local_68 = 0;
    uStack_80 = 0;
    while (uVar5 == 0) {
      iVar9 = (int)uVar10;
      local_68 = (int)uVar12 + 0x20;
      uVar12 = (ulonglong)local_68;
      uStack_80 = iVar9 + 1;
      uVar10 = (ulonglong)uStack_80;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_80)
      goto LAB_14258998d;
      uVar5 = puVar13[(longlong)iVar9 + 1];
    }
    uStack_7c = -uVar5 & uVar5;
    uVar10 = (ulonglong)uStack_7c * 2 + 1;
    lVar2 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar5 = (local_68 - 1) + (int)lVar2;
    if ((int)uVar8 < (int)uVar5) {
      uVar5 = uVar8;
    }
    uVar11 = (ulonglong)uVar5;
  }
LAB_14258998d:
  uStack_6c = (uint)uVar11;
  local_88 = &SlateStyleRepository;
  local_78 = 0x154ba6b80;
  uStack_70 = 0xffffffff;
  TStack_50._padding_ = CONCAT44(uStack_7c,uStack_80);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  local_58 = &SlateStyleRepository;
  TStack_50._28_4_ = uStack_6c;
  TStack_50.BaseBitIndex = local_68;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&SlateStyleRepository.field_0x10;
  uStack_64 = uStack_6c;
  TStack_50.CurrentBitIndex = uStack_6c;
  if ((int)uStack_6c < (int)uVar8) {
    do {
      plVar1 = *(longlong **)(*(longlong *)local_58 + 8 + (longlong)(int)uVar11 * 0x18);
      pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
               (**(code **)(*plVar1 + 0x20))(plVar1,local_98,param_1);
      if ((__return_storage_ptr__ == pTVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      iVar9 = pTVar7->ArrayNum;
      if (iVar9 != 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,iVar9,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
        memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8,
                (pTVar7->AllocatorInstance).Data,(longlong)iVar9 << 3);
        pTVar7->ArrayNum = 0;
      }
      if (local_98[0] != (void *)0x0) {
        FMemory::Free(local_98[0]);
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
      uVar11 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// IterateAllStyles @ 14258bf60

bool __cdecl
FSlateStyleRegistry::IterateAllStyles(TFunctionRef<bool___cdecl(ISlateStyle_const_&)> *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  uVar6 = 1;
  iVar12 = 0;
  uVar13 = SlateStyleRepository._40_4_;
  uVar7 = 0;
  if (uVar13 != 0) {
    puVar14 = (uint *)&SlateStyleRepository.field_0x10;
    if (SlateStyleRepository._32_8_ != 0) {
      puVar14 = (uint *)SlateStyleRepository._32_8_;
    }
    uVar7 = *puVar14;
    while (uVar7 == 0) {
      lVar8 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar7 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_14258c00d;
      uVar7 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar7 & uVar7;
    uVar15 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    uVar7 = local_res18 + -1 + iVar12;
    if ((int)uVar13 < (int)uVar7) {
      uVar7 = uVar13;
    }
  }
LAB_14258c00d:
  bVar2 = SlateStyleRepository._40_1_;
  uVar10 = uVar13 & 0xffffffe0;
  uVar15 = SlateStyleRepository._40_8_ & 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = uVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_60._28_4_ = uVar7;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,SlateStyleRepository._8_4_ - SlateStyleRepository._52_4_);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&SlateStyleRepository.field_0x10;
  if (((int)uVar13 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  uVar7 = SlateStyleRepository._40_4_;
  if (uVar13 != uVar7) {
    uVar15 = SlateStyleRepository._40_8_ & 0xffffffff;
    lVar8 = 0x154ba6b80;
    if (SlateStyleRepository._32_8_ != 0) {
      lVar8 = SlateStyleRepository._32_8_;
    }
    uVar6 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar8 + (longlong)iVar11 * 4);
    while (uVar6 == 0) {
      lVar9 = (longlong)iVar11;
      uVar10 = uVar10 + 0x20;
      iVar11 = iVar11 + 1;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14258c120;
      uVar6 = *(uint *)(lVar8 + 4 + lVar9 * 4);
    }
    uVar15 = (ulonglong)(-uVar6 & uVar6) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
    uVar15 = (ulonglong)uVar10;
  }
LAB_14258c120:
  while( true ) {
    if (SlateStyleRepository._8_4_ - SlateStyleRepository._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,ISlateStyle_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == (int)uVar15) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&SlateStyleRepository.field_0x10)
       ) break;
    cVar5 = (**(code **)param_1)
                      (*(undefined8 *)&param_1->field_0x8,
                       *(undefined8 *)
                        (SlateStyleRepository._0_8_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18
                        ));
    if (cVar5 == '\0') {
      return false;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return true;
}

// RegisterSlateStyle @ 14258de00

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl FSlateStyleRegistry::RegisterSlateStyle(ISlateStyle *param_1)

{
  FSlateRenderer *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  ISlateStyle *pIVar5;
  TPairInitializer<FName_const_&,ISlateStyle_const_*_&&> local_res8;
  FName *local_18;
  ISlateStyle ***local_10;
  
  pFVar4 = (FName *)(**(code **)((longlong)*param_1 + 8))();
  bVar3 = ::FName::IsWithinBounds((FNameEntryId)(pFVar4->ComparisonIndex).Value);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlateStyleName.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Styling\\SlateStyleRegistry.cpp"
                       ,0x14,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar5 = FindSlateStyle(pFVar4);
  if (pIVar5 != (ISlateStyle *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FindSlateStyle(SlateStyleName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Styling\\SlateStyleRegistry.cpp"
                       ,0x15,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_10 = &local_res8.Value;
  local_res8.Value = (ISlateStyle **)param_1;
  local_18 = pFVar4;
  TSet<TTuple<FName,ISlateStyle_const_*>,TDefaultMapHashableKeyFuncs<FName,ISlateStyle_const_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,ISlateStyle_const_*_&&>_>
            ((TSet<TTuple<FName,ISlateStyle_const_*>,TDefaultMapHashableKeyFuncs<FName,ISlateStyle_const_*,0>,FDefaultSetAllocator>
              *)&SlateStyleRepository,&local_res8,(bool *)&local_18);
  if (FSlateApplicationBase::CurrentBaseApplication.Object != (FSlateApplicationBase *)0x0) {
    if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentBaseApplication.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Application\\SlateApplicationBase.h"
                         ,0x22a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = ((FSlateApplicationBase::CurrentBaseApplication.Object)->Renderer).Object;
    if (pFVar1 != (FSlateRenderer *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0xe8))(pFVar1,param_1);
    }
  }
  return;
}

// UnRegisterSlateStyle @ 1425a9a40

void __cdecl FSlateStyleRegistry::UnRegisterSlateStyle(ISlateStyle *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FName *pFVar5;
  FName local_res8 [4];
  
  pFVar5 = (FName *)(**(code **)((longlong)*param_1 + 8))();
  bVar3 = ::FName::IsWithinBounds((FNameEntryId)(pFVar5->ComparisonIndex).Value);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlateStyleName.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Styling\\SlateStyleRegistry.cpp"
                       ,0x26,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = *pFVar5;
  if (SlateStyleRepository._8_4_ != SlateStyleRepository._52_4_) {
    local_res8[0] = FVar1;
    uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    TSet<TTuple<FName,ISlateStyle_const_*>,TDefaultMapHashableKeyFuncs<FName,ISlateStyle_const_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,ISlateStyle_const_*>,TDefaultMapHashableKeyFuncs<FName,ISlateStyle_const_*,0>,FDefaultSetAllocator>
                         *)&SlateStyleRepository,FVar1.Number + uVar4,local_res8);
  }
  return;
}

// UnRegisterSlateStyle @ 1425a9ad0

void __cdecl FSlateStyleRegistry::UnRegisterSlateStyle(FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uStackX_c;
  FName local_res10 [3];
  
  bVar2 = ::FName::IsWithinBounds(param_1.ComparisonIndex.Value);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StyleSetName.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Styling\\SlateStyleRegistry.cpp"
                       ,0x2e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (SlateStyleRepository._8_4_ != SlateStyleRepository._52_4_) {
    local_res10[0] = param_1;
    uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    uStackX_c = param_1.Number;
    TSet<TTuple<FName,ISlateStyle_const_*>,TDefaultMapHashableKeyFuncs<FName,ISlateStyle_const_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,ISlateStyle_const_*>,TDefaultMapHashableKeyFuncs<FName,ISlateStyle_const_*,0>,FDefaultSetAllocator>
                         *)&SlateStyleRepository,uStackX_c + uVar3,local_res10);
  }
  return;
}

