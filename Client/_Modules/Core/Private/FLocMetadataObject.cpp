// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 25

// FLocMetadataObject @ 1416d5a70

FLocMetadataObject * __thiscall
FLocMetadataObject::FLocMetadataObject(FLocMetadataObject *this,FLocMetadataObject *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint *puVar9;
  undefined8 local_98;
  TReferenceControllerBase<1> *local_90;
  longlong local_88;
  undefined8 *local_80;
  FLocMetadataObject *local_78;
  int iStack_70;
  uint uStack_6c;
  undefined1 *local_68;
  undefined4 uStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  FLocMetadataObject *local_48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  local_68 = &(param_1->Values).field_0x10;
  *(undefined8 *)&this->Values = 0;
  *(undefined8 *)&(this->Values).field_0x8 = 0;
  *(undefined8 *)&(this->Values).field_0x20 = 0;
  uStack_6c = 1;
  iStack_70 = 0;
  *(undefined4 *)&(this->Values).field_0x28 = 0;
  *(undefined4 *)&(this->Values).field_0x2c = 0x80;
  *(undefined4 *)&(this->Values).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Values).field_0x34 = 0;
  *(undefined8 *)&(this->Values).field_0x40 = 0;
  *(undefined4 *)&(this->Values).field_0x48 = 0;
  iVar2 = *(int *)&(param_1->Values).field_0x28;
  local_58 = iStack_70;
  iStack_5c = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)&(param_1->Values).field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)local_68;
    }
    uVar3 = *puVar9;
    local_58 = 0;
    iStack_70 = 0;
    while (uVar3 == 0) {
      lVar8 = (longlong)iStack_70;
      local_58 = local_58 + 0x20;
      iStack_70 = iStack_70 + 1;
      iStack_5c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_70) goto LAB_1416d5b3b;
      uVar3 = puVar9[lVar8 + 1];
    }
    uStack_6c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_6c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_5c = local_58 + -1 + (int)lVar8;
    if (iVar2 < iStack_5c) {
      iStack_5c = iVar2;
    }
  }
LAB_1416d5b3b:
  uStack_60 = 0xffffffff;
  TStack_40._padding_ = CONCAT44(uStack_6c,iStack_70);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = iStack_5c;
  TStack_40.BaseBitIndex = local_58;
  local_78 = param_1;
  iStack_54 = iStack_5c;
  local_48 = param_1;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_68;
  TStack_40.CurrentBitIndex = iStack_5c;
  if (iStack_5c < iVar2) {
    do {
      lVar8 = *(longlong *)&local_48->Values;
      lVar6 = (longlong)TStack_40.CurrentBitIndex;
      plVar4 = *(longlong **)(lVar8 + 0x10 + lVar6 * 0x28);
      pTVar5 = *(TReferenceControllerBase<1> **)
                (lVar8 + 0x18 + (longlong)TStack_40.CurrentBitIndex * 0x28);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (plVar4 != (longlong *)0x0) {
        puVar7 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,&local_78);
        local_98 = *puVar7;
        local_90 = (TReferenceControllerBase<1> *)puVar7[1];
        if (local_90 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_90->SharedReferenceCount = (atomic<int>)((int)local_90->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_80 = &local_98;
        local_88 = lVar8 + lVar6 * 0x28;
        TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<FLocMetadataValue,1>_&&>_>
                  ((TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                    *)this,(TPairInitializer<FString_const_&,TSharedPtr<FLocMetadataValue,1>_&&> *)
                           &stack0x00000008,(bool *)&local_88);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_90);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)CONCAT44(uStack_6c,iStack_70));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return this;
}

// operator= @ 1416d9c10

FLocMetadataObject * __thiscall
FLocMetadataObject::operator=(FLocMetadataObject *this,FLocMetadataObject *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint *puVar9;
  undefined8 local_98;
  TReferenceControllerBase<1> *local_90;
  longlong local_88;
  undefined8 *local_80;
  FLocMetadataObject *local_78;
  int iStack_70;
  uint uStack_6c;
  undefined1 *local_68;
  undefined4 uStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  FLocMetadataObject *local_48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  if (this == param_1) {
    return this;
  }
  TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
           *)this,*(int *)&(param_1->Values).field_0x8 - *(int *)&(param_1->Values).field_0x34);
  iVar2 = *(int *)&(param_1->Values).field_0x28;
  local_68 = &(param_1->Values).field_0x10;
  iStack_70 = 0;
  uStack_6c = 1;
  local_58 = 0;
  iStack_5c = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)&(param_1->Values).field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)local_68;
    }
    uVar3 = *puVar9;
    while (uVar3 == 0) {
      lVar8 = (longlong)iStack_70;
      local_58 = local_58 + 0x20;
      iStack_70 = iStack_70 + 1;
      iStack_5c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_70) goto LAB_1416d9ccd;
      uVar3 = puVar9[lVar8 + 1];
    }
    uStack_6c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_6c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_5c = local_58 + -1 + (int)lVar8;
    if (iVar2 < iStack_5c) {
      iStack_5c = iVar2;
    }
  }
LAB_1416d9ccd:
  TStack_40._padding_ = CONCAT44(uStack_6c,iStack_70);
  uStack_60 = 0xffffffff;
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = iStack_5c;
  TStack_40.BaseBitIndex = local_58;
  local_78 = param_1;
  iStack_54 = iStack_5c;
  local_48 = param_1;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_68;
  TStack_40.CurrentBitIndex = iStack_5c;
  if (iStack_5c < *(int *)&(param_1->Values).field_0x28) {
    do {
      lVar8 = *(longlong *)&local_48->Values;
      lVar6 = (longlong)TStack_40.CurrentBitIndex;
      plVar4 = *(longlong **)(lVar8 + 0x10 + lVar6 * 0x28);
      pTVar5 = *(TReferenceControllerBase<1> **)
                (lVar8 + 0x18 + (longlong)TStack_40.CurrentBitIndex * 0x28);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (plVar4 != (longlong *)0x0) {
        puVar7 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,&local_78);
        local_98 = *puVar7;
        local_90 = (TReferenceControllerBase<1> *)puVar7[1];
        if (local_90 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_90->SharedReferenceCount = (atomic<int>)((int)local_90->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_80 = &local_98;
        local_88 = lVar8 + lVar6 * 0x28;
        TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<FLocMetadataValue,1>_&&>_>
                  ((TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                    *)this,(TPairInitializer<FString_const_&,TSharedPtr<FLocMetadataValue,1>_&&> *)
                           &stack0x00000008,(bool *)&local_88);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_90);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)CONCAT44(uStack_6c,iStack_70));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return this;
}

// operator== @ 1416da470

bool __thiscall FLocMetadataObject::operator==(FLocMetadataObject *this,FLocMetadataObject *param_1)

{
  FString *this_00;
  ulonglong uVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  wchar_t *pwVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  TTuple<FString,TSharedPtr<FLocMetadataValue,1>_> *pTVar13;
  size_t sVar14;
  uint *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  uint uVar19;
  uint uVar21;
  bool bVar23;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  longlong *plVar20;
  longlong *plVar22;
  
  if (*(int *)&(this->Values).field_0x8 - *(int *)&(this->Values).field_0x34 !=
      *(int *)&(param_1->Values).field_0x8 - *(int *)&(param_1->Values).field_0x34) {
    return false;
  }
  uVar8 = 1;
  uVar10 = *(uint *)&(this->Values).field_0x28;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Values).field_0x10;
  plVar22 = (longlong *)0x0;
  uVar21 = 0;
  uVar18 = 0;
  plVar17 = plVar22;
  uVar19 = uVar18;
  if (uVar10 != 0) {
    puVar15 = *(uint **)&(this->Values).field_0x20;
    plVar17 = (longlong *)(ulonglong)uVar10;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)TStack_50.Array;
    }
    uVar9 = *puVar15;
    plVar16 = plVar22;
    plVar20 = plVar22;
    uVar19 = uVar21;
    uVar18 = uVar21;
    while (uVar9 == 0) {
      iVar11 = (int)plVar16;
      uVar19 = (int)plVar20 + 0x20;
      plVar20 = (longlong *)(ulonglong)uVar19;
      uVar18 = iVar11 + 1;
      plVar16 = (longlong *)(ulonglong)uVar18;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_1416da550;
      uVar9 = puVar15[(longlong)iVar11 + 1];
    }
    uVar8 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar9 = (uVar19 - 1) + (int)lVar3;
    if ((int)uVar10 < (int)uVar9) {
      uVar9 = uVar10;
    }
    plVar17 = (longlong *)(ulonglong)uVar9;
  }
LAB_1416da550:
  TStack_50.CurrentBitIndex = (int)plVar17;
  bVar23 = SBORROW4(TStack_50.CurrentBitIndex,uVar10);
  iVar11 = TStack_50.CurrentBitIndex - uVar10;
  TStack_50._padding_ = CONCAT44(uVar8,uVar18);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = TStack_50.CurrentBitIndex;
  TStack_50.BaseBitIndex = uVar19;
  do {
    if (bVar23 == iVar11 < 0) {
      return true;
    }
    lVar3 = *(longlong *)&this->Values;
    iVar11 = (int)plVar17;
    this_00 = (FString *)(lVar3 + (longlong)iVar11 * 0x28);
    pTVar2 = *(TReferenceControllerBase<1> **)(lVar3 + 0x18 + (longlong)iVar11 * 0x28);
    plVar17 = *(longlong **)(lVar3 + 0x10 + (longlong)iVar11 * 0x28);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar13 = TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                      *)param_1,this_00);
    pwVar5 = COMPARISON_MODIFIER_PREFIX;
    plVar16 = (longlong *)&pTVar13->field_0x10;
    if (pTVar13 == (TTuple<FString,TSharedPtr<FLocMetadataValue,1>_> *)0x0) {
      plVar16 = plVar22;
    }
    if ((plVar16 != (longlong *)0x0) && (*plVar16 != 0)) {
      uVar10 = uVar21;
      if (COMPARISON_MODIFIER_PREFIX != (wchar_t *)0x0) {
        sVar14 = wcslen(COMPARISON_MODIFIER_PREFIX);
        uVar10 = (uint)sVar14;
      }
      bVar23 = ::FString::StartsWith(this_00,pwVar5,uVar10,IgnoreCase);
      if (!bVar23) {
        if ((plVar17 == (longlong *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar23)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        if ((*plVar16 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar23)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar11 = (**(code **)(*(longlong *)*plVar16 + 0x38))();
        iVar12 = (**(code **)(*plVar17 + 0x38))(plVar17);
        if (iVar12 != iVar11) {
LAB_1416da761:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          return false;
        }
        if ((plVar17 == (longlong *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar23)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        if ((*plVar16 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar23)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        plVar16 = (longlong *)*plVar16;
        iVar11 = (**(code **)(*plVar17 + 0x38))(plVar17);
        iVar12 = (**(code **)(*plVar16 + 0x38))(plVar16);
        if ((iVar11 != iVar12) ||
           (cVar7 = (**(code **)(*plVar17 + 0x40))(plVar17,plVar16), cVar7 == '\0'))
        goto LAB_1416da761;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    plVar17 = (longlong *)(ulonglong)(uint)TStack_50.CurrentBitIndex;
    bVar23 = SBORROW4(TStack_50.CurrentBitIndex,(TStack_50.Array)->NumBits);
    iVar11 = TStack_50.CurrentBitIndex - (TStack_50.Array)->NumBits;
  } while( true );
}

// operator< @ 1416da9c0

bool __thiscall FLocMetadataObject::operator<(FLocMetadataObject *this,FLocMetadataObject *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  wchar_t *pwVar11;
  TTuple<FString,TSharedPtr<FLocMetadataValue,1>_> *pTVar12;
  wchar_t *pwVar13;
  uint uVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  longlong *plVar20;
  uint uVar21;
  FIdentityFunctor local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  
  plVar20 = (longlong *)0x0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  TMapBase<FString,TSharedPtr<FLocMetadataValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,TSharedPtr<FLocMetadataValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>_>
              *)this,&local_68);
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  TMapBase<FString,TSharedPtr<FLocMetadataValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,TSharedPtr<FLocMetadataValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>_>
              *)param_1,&local_58);
  local_res8 = SUB81(this,0);
  AlgoImpl::
  IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
            ((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum,local_res8,
             (TLess<FString> *)local_res18);
  AlgoImpl::
  IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
            ((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum,local_res8,
             (TLess<FString> *)local_res20);
  uVar19 = 0;
  plVar15 = plVar20;
  plVar16 = plVar20;
  iVar9 = local_68.ArrayNum;
  if (0 < local_68.ArrayNum) {
    do {
      uVar14 = (uint)plVar15;
      if (local_58.ArrayNum <= (int)uVar14) goto LAB_1416dae95;
      uVar17 = ~uVar14 >> 0x1f;
      uVar21 = 0;
      if ((int)uVar14 < local_58.ArrayNum) {
        uVar21 = uVar17;
      }
      if (uVar21 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar9 = local_68.ArrayNum;
      }
      FVar5.Data = local_58.AllocatorInstance.Data;
      uVar21 = 0;
      if ((int)uVar14 < iVar9) {
        uVar21 = uVar17;
      }
      if (uVar21 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar9 = local_68.ArrayNum;
      }
      iVar10 = *(int *)(FVar5.Data + 8 + (longlong)plVar16);
      iVar1 = *(int *)(local_68.AllocatorInstance.Data + 8 + (longlong)plVar16);
      if (iVar1 == iVar10) {
        if (1 < iVar1) {
          iVar9 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(local_68.AllocatorInstance.Data + (longlong)plVar16),
                             *(wchar_t **)(FVar5.Data + (longlong)plVar16));
          bVar6 = iVar9 == 0;
          iVar9 = local_68.ArrayNum;
          goto LAB_1416dab2b;
        }
      }
      else {
        bVar6 = iVar1 + iVar10 == 1;
LAB_1416dab2b:
        if (!bVar6) {
          uVar21 = uVar19;
          if ((int)uVar14 < local_58.ArrayNum) {
            uVar21 = uVar17;
          }
          if (uVar21 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            iVar9 = local_68.ArrayNum;
          }
          FVar5.Data = local_58.AllocatorInstance.Data;
          lVar18 = (longlong)(int)uVar14;
          if ((int)uVar14 < iVar9) {
            uVar19 = uVar17;
          }
          if ((uVar19 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          pwVar13 = L"";
          if (*(int *)(FVar5.Data + lVar18 * 0x10 + 8) == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = *(wchar_t **)(FVar5.Data + lVar18 * 0x10);
          }
          if (*(int *)(local_68.AllocatorInstance.Data + lVar18 * 0x10 + 8) != 0) {
            pwVar13 = *(wchar_t **)(local_68.AllocatorInstance.Data + lVar18 * 0x10);
          }
          iVar9 = FGenericPlatformStricmp::Stricmp(pwVar13,pwVar11);
          bVar6 = SUB41((uint)iVar9 >> 0x1f,0);
          goto LAB_1416dae97;
        }
      }
      plVar15 = (longlong *)(ulonglong)(uVar14 + 1);
      plVar16 = plVar16 + 2;
    } while ((int)(uVar14 + 1) < iVar9);
  }
  if (iVar9 < local_58.ArrayNum) {
LAB_1416dab50:
    bVar6 = true;
  }
  else {
    plVar15 = plVar20;
    if (0 < iVar9) {
      do {
        uVar21 = (uint)plVar15;
        uVar14 = uVar19;
        if ((int)uVar21 < iVar9) {
          uVar14 = ~uVar21 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pTVar12 = TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                          *)this,(FString *)
                                 (local_68.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10));
        plVar15 = (longlong *)&pTVar12->field_0x10;
        if (pTVar12 == (TTuple<FString,TSharedPtr<FLocMetadataValue,1>_> *)0x0) {
          plVar15 = plVar20;
        }
        uVar14 = uVar19;
        if ((int)uVar21 < local_68.ArrayNum) {
          uVar14 = ~uVar21 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pTVar12 = TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                          *)param_1,
                         (FString *)(local_68.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10)
                        );
        plVar16 = (longlong *)&pTVar12->field_0x10;
        if (pTVar12 == (TTuple<FString,TSharedPtr<FLocMetadataValue,1>_> *)0x0) {
          plVar16 = plVar20;
        }
        if ((plVar15 != (longlong *)0x0) || (plVar16 != (longlong *)0x0)) {
          if ((plVar15 == (longlong *)0x0) != (plVar16 == (longlong *)0x0)) {
            bVar6 = plVar16 == (longlong *)0x0;
            goto LAB_1416dae97;
          }
          lVar18 = *plVar15;
          if ((lVar18 != 0) || (*plVar16 != 0)) {
            bVar6 = *plVar16 != 0;
            if ((lVar18 != 0) != bVar6) goto LAB_1416dae97;
            if ((lVar18 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x44d,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            plVar2 = (longlong *)*plVar15;
            if ((*plVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x44d,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            plVar3 = (longlong *)*plVar16;
            iVar9 = (**(code **)(*plVar3 + 0x38))(plVar3);
            iVar10 = (**(code **)(*plVar2 + 0x38))(plVar2);
            if (iVar10 == iVar9) {
              cVar8 = (**(code **)(*plVar2 + 0x48))(plVar2,plVar3);
            }
            else {
              iVar9 = (**(code **)(*plVar2 + 0x38))(plVar2);
              iVar10 = (**(code **)(*plVar3 + 0x38))(plVar3);
              cVar8 = iVar9 < iVar10;
            }
            if (cVar8 != '\0') goto LAB_1416dab50;
            if ((*plVar15 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x44d,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            plVar15 = (longlong *)*plVar15;
            if ((*plVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x44d,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            plVar16 = (longlong *)*plVar16;
            pcVar4 = *(code **)(*plVar16 + 0x38);
            iVar9 = (**(code **)(*plVar15 + 0x38))(plVar15);
            iVar10 = (*pcVar4)(plVar16);
            if ((iVar9 != iVar10) ||
               (cVar8 = (**(code **)(*plVar15 + 0x40))(plVar15,plVar16), cVar8 == '\0')) break;
          }
        }
        plVar15 = (longlong *)(ulonglong)(uVar21 + 1);
        iVar9 = local_68.ArrayNum;
      } while ((int)(uVar21 + 1) < local_68.ArrayNum);
    }
LAB_1416dae95:
    bVar6 = false;
  }
LAB_1416dae97:
  DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return bVar6;
}

// GetArrayField @ 1416f2110

TArray<TSharedPtr<FLocMetadataValue,1>,TSizedDefaultAllocator<32>_> * __thiscall
FLocMetadataObject::GetArrayField
          (FLocMetadataObject *this,
          TArray<TSharedPtr<FLocMetadataValue,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TTuple<FString,TSharedPtr<FLocMetadataValue,1>_> *pTVar4;
  TArray<TSharedPtr<FLocMetadataValue,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong *plVar8;
  FString *local_res8;
  FString *local_res10;
  
  pTVar4 = TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                   *)this,param_1);
  plVar6 = (longlong *)&pTVar4->field_0x10;
  if (pTVar4 == (TTuple<FString,TSharedPtr<FLocMetadataValue,1>_> *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  if (((plVar6 != (longlong *)0x0) && (*plVar6 != 0)) ||
     (local_res8 = param_1,
     bVar2 = `FLocMetadataObject::GetField<3>'::__l3::<lambda_1>::operator()(&local_res8), bVar2)) {
    if ((*plVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<TSharedPtr<FLocMetadataValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar5;
    }
    iVar3 = (**(code **)(*(longlong *)*plVar6 + 0x38))();
    if ((iVar3 != 3) &&
       (local_res10 = param_1,
       bVar2 = `FLocMetadataObject::GetField<3>'::__l6::<lambda_2>::operator()(&local_res10), !bVar2
       )) goto LAB_1416f21bb;
    plVar8 = (longlong *)*plVar6;
    pTVar7 = (TReferenceControllerBase<1> *)plVar6[1];
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar8 != (longlong *)0x0) goto LAB_1416f21f6;
  }
  else {
LAB_1416f21bb:
    plVar8 = (longlong *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<TSharedPtr<FLocMetadataValue,1>,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
LAB_1416f21f6:
  (**(code **)(*plVar8 + 0x20))(plVar8,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// GetBoolField @ 1416f2780

bool __thiscall FLocMetadataObject::GetBoolField(FLocMetadataObject *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TTuple<FString,TSharedPtr<FLocMetadataValue,1>_> *pTVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  FString *local_res8;
  FString *local_res18;
  
  pTVar5 = TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                   *)this,param_1);
  plVar6 = (longlong *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<FString,TSharedPtr<FLocMetadataValue,1>_> *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  if (((plVar6 != (longlong *)0x0) && (*plVar6 != 0)) ||
     (local_res8 = param_1,
     bVar2 = `FLocMetadataObject::GetField<1>'::__l3::<lambda_1>::operator()(&local_res8), bVar2)) {
    if ((*plVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    iVar4 = (**(code **)(*(longlong *)*plVar6 + 0x38))();
    if ((iVar4 != 1) &&
       (local_res18 = param_1,
       bVar2 = `FLocMetadataObject::GetField<1>'::__l6::<lambda_2>::operator()(&local_res18), !bVar2
       )) goto LAB_1416f2825;
    pTVar7 = (TReferenceControllerBase<1> *)plVar6[1];
    plVar6 = (longlong *)*plVar6;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar6 != (longlong *)0x0) goto LAB_1416f2860;
  }
  else {
LAB_1416f2825:
    plVar6 = (longlong *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_1416f2860:
  uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return (bool)uVar3;
}

// GetObjectField @ 1416f96a0

TSharedPtr<FLocMetadataObject,1> * __thiscall
FLocMetadataObject::GetObjectField
          (FLocMetadataObject *this,TSharedPtr<FLocMetadataObject,1> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TTuple<FString,TSharedPtr<FLocMetadataValue,1>_> *pTVar4;
  TSharedPtr<FLocMetadataObject,1> *pTVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong *plVar8;
  FString *local_res8;
  FString *local_res10;
  
  pTVar4 = TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                   *)this,param_1);
  plVar6 = (longlong *)&pTVar4->field_0x10;
  if (pTVar4 == (TTuple<FString,TSharedPtr<FLocMetadataValue,1>_> *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  if (((plVar6 != (longlong *)0x0) && (*plVar6 != 0)) ||
     (local_res8 = param_1,
     bVar2 = `FLocMetadataObject::GetField<4>'::__l3::<lambda_1>::operator()(&local_res8), bVar2)) {
    if ((*plVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FLocMetadataObject,1> *)(*pcVar1)();
      return pTVar5;
    }
    iVar3 = (**(code **)(*(longlong *)*plVar6 + 0x38))();
    if ((iVar3 != 4) &&
       (local_res10 = param_1,
       bVar2 = `FLocMetadataObject::GetField<4>'::__l6::<lambda_2>::operator()(&local_res10), !bVar2
       )) goto LAB_1416f974b;
    plVar8 = (longlong *)*plVar6;
    pTVar7 = (TReferenceControllerBase<1> *)plVar6[1];
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar8 != (longlong *)0x0) goto LAB_1416f9786;
  }
  else {
LAB_1416f974b:
    plVar8 = (longlong *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FLocMetadataObject,1> *)(*pcVar1)();
    return pTVar5;
  }
LAB_1416f9786:
  (**(code **)(*plVar8 + 0x28))(plVar8,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// GetStringField @ 1416fba50

FString * __thiscall
FLocMetadataObject::GetStringField
          (FLocMetadataObject *this,FString *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TTuple<FString,TSharedPtr<FLocMetadataValue,1>_> *pTVar4;
  FString *pFVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong *plVar8;
  FString *local_res8;
  FString *local_res10;
  
  pTVar4 = TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                   *)this,param_1);
  plVar6 = (longlong *)&pTVar4->field_0x10;
  if (pTVar4 == (TTuple<FString,TSharedPtr<FLocMetadataValue,1>_> *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  if (((plVar6 != (longlong *)0x0) && (*plVar6 != 0)) ||
     (local_res8 = param_1,
     bVar2 = `FLocMetadataObject::GetField<2>'::__l3::<lambda_1>::operator()(&local_res8), bVar2)) {
    if ((*plVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
    iVar3 = (**(code **)(*(longlong *)*plVar6 + 0x38))();
    if ((iVar3 != 2) &&
       (local_res10 = param_1,
       bVar2 = `FLocMetadataObject::GetField<2>'::__l6::<lambda_2>::operator()(&local_res10), !bVar2
       )) goto LAB_1416fbafb;
    plVar8 = (longlong *)*plVar6;
    pTVar7 = (TReferenceControllerBase<1> *)plVar6[1];
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar8 != (longlong *)0x0) goto LAB_1416fbb36;
  }
  else {
LAB_1416fbafb:
    plVar8 = (longlong *)0x0;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
LAB_1416fbb36:
  (**(code **)(*plVar8 + 0x10))(plVar8,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// IsExactMatch @ 141701c90

bool __thiscall
FLocMetadataObject::IsExactMatch(FLocMetadataObject *this,FLocMetadataObject *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  TTuple<FString,TSharedPtr<FLocMetadataValue,1>_> *pTVar12;
  uint *puVar13;
  longlong *plVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  longlong *plVar19;
  bool bVar20;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  longlong *plVar18;
  
  if (*(int *)&(this->Values).field_0x8 - *(int *)&(this->Values).field_0x34 !=
      *(int *)&(param_1->Values).field_0x8 - *(int *)&(param_1->Values).field_0x34) {
    return false;
  }
  uVar8 = 1;
  uVar2 = *(uint *)&(this->Values).field_0x28;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Values).field_0x10;
  plVar19 = (longlong *)0x0;
  uVar15 = 0;
  plVar16 = plVar19;
  uVar17 = uVar15;
  if (uVar2 != 0) {
    puVar13 = *(uint **)&(this->Values).field_0x20;
    plVar16 = (longlong *)(ulonglong)uVar2;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_50.Array;
    }
    uVar9 = *puVar13;
    plVar14 = plVar19;
    plVar18 = plVar19;
    uVar17 = 0;
    uVar15 = 0;
    while (uVar9 == 0) {
      iVar10 = (int)plVar14;
      uVar17 = (int)plVar18 + 0x20;
      plVar18 = (longlong *)(ulonglong)uVar17;
      uVar15 = iVar10 + 1;
      plVar14 = (longlong *)(ulonglong)uVar15;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
      goto LAB_141701d70;
      uVar9 = puVar13[(longlong)iVar10 + 1];
    }
    uVar8 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar9 = (uVar17 - 1) + (int)lVar4;
    if ((int)uVar2 < (int)uVar9) {
      uVar9 = uVar2;
    }
    plVar16 = (longlong *)(ulonglong)uVar9;
  }
LAB_141701d70:
  TStack_50.CurrentBitIndex = (int)plVar16;
  bVar20 = SBORROW4(TStack_50.CurrentBitIndex,uVar2);
  iVar10 = TStack_50.CurrentBitIndex - uVar2;
  TStack_50._padding_ = CONCAT44(uVar8,uVar15);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = TStack_50.CurrentBitIndex;
  TStack_50.BaseBitIndex = uVar17;
  do {
    if (bVar20 == iVar10 < 0) {
      return true;
    }
    lVar4 = *(longlong *)&this->Values;
    iVar10 = (int)plVar16;
    plVar16 = *(longlong **)(lVar4 + 0x10 + (longlong)iVar10 * 0x28);
    pTVar3 = *(TReferenceControllerBase<1> **)(lVar4 + 0x18 + (longlong)iVar10 * 0x28);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar12 = TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                      *)param_1,(FString *)(lVar4 + (longlong)iVar10 * 0x28));
    plVar14 = (longlong *)&pTVar12->field_0x10;
    if (pTVar12 == (TTuple<FString,TSharedPtr<FLocMetadataValue,1>_> *)0x0) {
      plVar14 = plVar19;
    }
    if ((plVar14 != (longlong *)0x0) && (*plVar14 != 0)) {
      if ((plVar16 == (longlong *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar20)) {
        pcVar5 = (code *)swi(3);
        uVar6 = (*pcVar5)();
        return (bool)uVar6;
      }
      if ((*plVar14 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar20)) {
        pcVar5 = (code *)swi(3);
        uVar6 = (*pcVar5)();
        return (bool)uVar6;
      }
      plVar18 = (longlong *)*plVar14;
      iVar10 = (**(code **)(*plVar16 + 0x38))(plVar16);
      iVar11 = (**(code **)(*plVar18 + 0x38))(plVar18);
      if (iVar10 != iVar11) {
LAB_141701f4b:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        return false;
      }
      if ((plVar16 == (longlong *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar20)) {
        pcVar5 = (code *)swi(3);
        uVar6 = (*pcVar5)();
        return (bool)uVar6;
      }
      if ((*plVar14 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar20)) {
        pcVar5 = (code *)swi(3);
        uVar6 = (*pcVar5)();
        return (bool)uVar6;
      }
      plVar14 = (longlong *)*plVar14;
      pcVar5 = *(code **)(*plVar14 + 0x38);
      iVar10 = (**(code **)(*plVar16 + 0x38))(plVar16);
      iVar11 = (*pcVar5)(plVar14);
      if ((iVar10 != iVar11) ||
         (cVar7 = (**(code **)(*plVar16 + 0x40))(plVar16,plVar14), cVar7 == '\0'))
      goto LAB_141701f4b;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    plVar16 = (longlong *)(ulonglong)(uint)TStack_50.CurrentBitIndex;
    bVar20 = SBORROW4(TStack_50.CurrentBitIndex,(TStack_50.Array)->NumBits);
    iVar10 = TStack_50.CurrentBitIndex - (TStack_50.Array)->NumBits;
  } while( true );
}

// IsMetadataExactMatch @ 1417025b0

bool __cdecl
FLocMetadataObject::IsMetadataExactMatch(FLocMetadataObject *param_1,FLocMetadataObject *param_2)

{
  bool bVar1;
  
  if ((param_1 != (FLocMetadataObject *)0x0) || (param_2 != (FLocMetadataObject *)0x0)) {
    if ((param_1 != (FLocMetadataObject *)0x0) == (param_2 != (FLocMetadataObject *)0x0)) {
      bVar1 = IsExactMatch(param_1,param_2);
      return bVar1;
    }
    if ((param_1 == (FLocMetadataObject *)0x0) ||
       (*(int *)&(param_1->Values).field_0x8 != *(int *)&(param_1->Values).field_0x34)) {
      if (param_2 != (FLocMetadataObject *)0x0) {
        return *(int *)&(param_2->Values).field_0x8 == *(int *)&(param_2->Values).field_0x34;
      }
      return false;
    }
  }
  return true;
}

// RemoveField @ 14170c360

void __thiscall FLocMetadataObject::RemoveField(FLocMetadataObject *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  if (*(int *)&(this->Values).field_0x8 != *(int *)&(this->Values).field_0x34) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar4 = L"";
      iVar3 = 0;
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
    TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>
              ((TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                *)this,uVar2,param_1);
  }
  return;
}

// SetArrayField @ 141710a80

void __thiscall
FLocMetadataObject::SetArrayField
          (FLocMetadataObject *this,FString *param_1,
          TArray<TSharedPtr<FLocMetadataValue,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  FLocMetadataValueArray *this_00;
  TRawPtrProxy<FLocMetadataValueArray> local_res8;
  FString *local_28;
  TSharedPtr<FLocMetadataValue,1> *local_20;
  TSharedPtr<FLocMetadataValue,1> local_18;
  
  this_00 = ::operator_new(0x18);
  local_res8.Object = (FLocMetadataValueArray *)0x0;
  if (this_00 != (FLocMetadataValueArray *)0x0) {
    local_res8.Object = FLocMetadataValueArray::FLocMetadataValueArray(this_00,param_2);
  }
  TSharedPtr<FLocMetadataValue,1>::TSharedPtr<FLocMetadataValue,1><FLocMetadataValueArray>
            (&local_18,&local_res8);
  local_20 = &local_18;
  local_28 = param_1;
  TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<FLocMetadataValue,1>_&&>_>
            ((TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_const_&,TSharedPtr<FLocMetadataValue,1>_&&> *)
                     &local_res8,(bool *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// SetBoolField @ 141710b50

void __thiscall
FLocMetadataObject::SetBoolField(FLocMetadataObject *this,FString *param_1,bool param_2)

{
  TRawPtrProxy<FLocMetadataValueBoolean> local_res8;
  FString *local_28;
  TSharedPtr<FLocMetadataValue,1> *local_20;
  TSharedPtr<FLocMetadataValue,1> local_18;
  
  local_res8.Object = ::operator_new(0x10);
  if (local_res8.Object != (FLocMetadataValueBoolean *)0x0) {
    (local_res8.Object)->Value = param_2;
    (local_res8.Object)->_padding_ = (longlong)&___7FLocMetadataValueBoolean__6B_;
  }
  TSharedPtr<FLocMetadataValue,1>::TSharedPtr<FLocMetadataValue,1><FLocMetadataValueBoolean>
            (&local_18,&local_res8);
  local_20 = &local_18;
  local_28 = param_1;
  TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<FLocMetadataValue,1>_&&>_>
            ((TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_const_&,TSharedPtr<FLocMetadataValue,1>_&&> *)
                     &local_res8,(bool *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// SetField @ 141711410

void __thiscall
FLocMetadataObject::SetField
          (FLocMetadataObject *this,FString *param_1,TSharedPtr<FLocMetadataValue,1> *param_2)

{
  TPairInitializer<FString_const_&,TSharedPtr<FLocMetadataValue,1>_const_&> local_res8 [2];
  FString *local_18;
  TSharedPtr<FLocMetadataValue,1> *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<FLocMetadataValue,1>_const_&>_>
            ((TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
              *)this,local_res8,(bool *)&local_18);
  return;
}

// SetObjectField @ 141711640

void __thiscall
FLocMetadataObject::SetObjectField
          (FLocMetadataObject *this,FString *param_1,TSharedPtr<FLocMetadataObject,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FLocMetadataValue,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TPairInitializer<FString_const_&,TSharedPtr<FLocMetadataValue,1>_&&> local_res18;
  FString *local_38;
  TSharedPtr<FLocMetadataValue,1> *local_30;
  TSharedPtr<FLocMetadataValue,1> local_28;
  
  bVar3 = false;
  local_res18.Key._0_4_ = 0;
  if (param_2->Object != (FLocMetadataObject *)0x0) {
    pTVar4 = ::operator_new(0x18);
    if (pTVar4 == (TSharedPtr<FLocMetadataValue,1> *)0x0) {
      pTVar5 = (TReferenceControllerBase<1> *)CONCAT44(local_res18.Key._4_4_,local_res18.Key._0_4_);
      pTVar4 = (TSharedPtr<FLocMetadataValue,1> *)0x0;
    }
    else {
      if (param_2->Object == (FLocMetadataObject *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pTVar1 = (TReferenceControllerBase<1> *)param_2->Object;
      pTVar5 = (param_2->SharedReferenceCount).ReferenceController;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
        pTVar4->Object = (FLocMetadataValue *)&___7FLocMetadataValueObject__6B_;
        (pTVar4->SharedReferenceCount).ReferenceController = pTVar1;
        pTVar4[1].Object = (FLocMetadataValue *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        bVar3 = true;
      }
      else {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
        pTVar4->Object = (FLocMetadataValue *)&___7FLocMetadataValueObject__6B_;
        (pTVar4->SharedReferenceCount).ReferenceController = pTVar1;
        pTVar4[1].Object = (FLocMetadataValue *)pTVar5;
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        bVar3 = true;
      }
    }
    local_res18.Value = pTVar4;
    TSharedPtr<FLocMetadataValue,1>::TSharedPtr<FLocMetadataValue,1><FLocMetadataValueObject>
              (&local_28,(TRawPtrProxy<FLocMetadataValueObject> *)&local_res18.Value);
    local_30 = &local_28;
    local_38 = param_1;
    TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<FLocMetadataValue,1>_&&>_>
              ((TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                *)this,&local_res18,(bool *)&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if (bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    }
  }
  return;
}

// SetStringField @ 141711d40

void __thiscall
FLocMetadataObject::SetStringField(FLocMetadataObject *this,FString *param_1,FString *param_2)

{
  TRawPtrProxy<FLocMetadataValueString> local_res8;
  FString *local_28;
  TSharedPtr<FLocMetadataValue,1> *local_20;
  TSharedPtr<FLocMetadataValue,1> local_18;
  
  local_res8.Object = ::operator_new(0x18);
  if (local_res8.Object == (FLocMetadataValueString *)0x0) {
    local_res8.Object = (FLocMetadataValueString *)0x0;
  }
  else {
    (local_res8.Object)->_padding_ = (longlong)&___7FLocMetadataValueString__6B_;
    ::FString::FString(&(local_res8.Object)->Value,param_2);
  }
  TSharedPtr<FLocMetadataValue,1>::TSharedPtr<FLocMetadataValue,1><FLocMetadataValueString>
            (&local_18,&local_res8);
  local_20 = &local_18;
  local_28 = param_1;
  TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<FLocMetadataValue,1>_&&>_>
            ((TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_const_&,TSharedPtr<FLocMetadataValue,1>_&&> *)
                     &local_res8,(bool *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// ToString @ 141715910

FString * __thiscall
FLocMetadataObject::ToString(FLocMetadataObject *this,FString *__return_storage_ptr__)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  void *_Src;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  code *pcVar7;
  FLocMetadataObject *pFVar8;
  bool bVar9;
  FString *pFVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 local_res8 [8];
  FString *local_res10;
  int local_res18;
  int local_res20;
  FString local_e8;
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  FLocMetadataObject *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  FString local_98;
  FLocMetadataObject *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  void *local_58 [3];
  
  puVar1 = &(this->Values).field_0x10;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  iStack_c0 = 0;
  iVar17 = *(int *)&(this->Values).field_0x28;
  uStack_bc = 1;
  local_a8 = 0;
  iStack_ac = iStack_c0;
  if (iVar17 != 0) {
    puVar19 = *(uint **)&(this->Values).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar16 = *puVar19;
    local_a8 = 0;
    iStack_c0 = 0;
    while (uVar16 == 0) {
      lVar11 = (longlong)iStack_c0;
      local_a8 = local_a8 + 0x20;
      iStack_c0 = iStack_c0 + 1;
      iStack_ac = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_1417159bd;
      uVar16 = puVar19[lVar11 + 1];
    }
    uStack_bc = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_bc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iStack_ac = local_a8 + -1 + local_res18;
    if (iVar17 < iStack_ac) {
      iStack_ac = iVar17;
    }
  }
LAB_1417159bd:
  uVar16 = *(uint *)&(this->Values).field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  iStack_a0 = *(int *)&(this->Values).field_0x8 - *(int *)&(this->Values).field_0x34;
  uStack_b0 = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_bc,iStack_c0);
  TStack_80.CurrentBitIndex = iStack_ac;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar16 >> 5;
  TStack_80._28_4_ = iStack_ac;
  TStack_80.BaseBitIndex = local_a8;
  uStack_60 = CONCAT44(uStack_9c,iStack_a0);
  local_res10 = __return_storage_ptr__;
  local_c8 = this;
  local_b8 = puVar1;
  iStack_a4 = iStack_ac;
  local_88 = this;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar17 < (int)uVar16)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FString *)(*pcVar7)();
    return pFVar10;
  }
  uVar4 = *(uint *)&(this->Values).field_0x28;
  if (uVar16 != uVar4) {
    puVar18 = *(undefined1 **)&(this->Values).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_141715ac0;
      uVar16 = *(uint *)(puVar18 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    uVar16 = local_res20 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_141715ac0:
  while( true ) {
    pFVar8 = local_88;
    if (*(int *)&(local_88->Values).field_0x8 - *(int *)&(local_88->Values).field_0x34 !=
        (int)uStack_60) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    pFVar10 = local_res10;
    if (((TStack_80.CurrentBitIndex == uVar16) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar8 == this)) {
      ::FString::PrintfImpl(local_res10,L"{%s}");
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      return pFVar10;
    }
    lVar11 = *(longlong *)&pFVar8->Values;
    local_d0 = *(int *)(lVar11 + 8 + (longlong)TStack_80.CurrentBitIndex * 0x28);
    lVar14 = (longlong)local_d0;
    puVar2 = (undefined8 *)(lVar11 + (longlong)TStack_80.CurrentBitIndex * 0x28);
    _Src = (void *)*puVar2;
    local_d8.Data = (FScriptContainerElement *)0x0;
    if (local_d0 == 0) {
      local_cc = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_d0,0,&local_d8,local_d0,&local_cc);
      memcpy(local_d8.Data,_Src,lVar14 * 2);
    }
    pTVar5 = (TReferenceControllerBase<1> *)puVar2[3];
    plVar6 = (longlong *)puVar2[2];
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((plVar6 == (longlong *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) break;
    pFVar10 = (FString *)(**(code **)(*plVar6 + 8))(plVar6,local_58);
    pwVar12 = L",";
    if (local_e8.Data.ArrayNum < 2) {
      pwVar12 = L"";
    }
    ::FString::ConcatCF(&local_98,pwVar12,pFVar10);
    iVar17 = local_98.Data.ArrayNum + -1;
    if (local_98.Data.ArrayNum == 0) {
      iVar17 = 0;
    }
    ::FString::AppendChars(&local_e8,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar17);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  pcVar7 = (code *)swi(3);
  pFVar10 = (FString *)(*pcVar7)();
  return pFVar10;
}

// operator() @ 15047a340

bool __thiscall `FLocMetadataObject::GetField<1>'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7012142415528067164>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7012142415528067164>,
                         &`public:___cdecl_`public:_class_TSharedPtr<FLocMetadataValue,1>___cdecl_FLocMetadataObject::GetField<1>(FString_const&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                          ::__l2::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15047a3a0

bool __thiscall `FLocMetadataObject::GetField<2>'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7012142415528067164>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7012142415528067164>,
                         &`public:___cdecl_`public:_class_TSharedPtr<FLocMetadataValue,1>___cdecl_FLocMetadataObject::GetField<2>(FString_const&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                          ::__l2::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15047a400

bool __thiscall `FLocMetadataObject::GetField<3>'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7012142415528067164>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7012142415528067164>,
                         &`public:___cdecl_`public:_class_TSharedPtr<FLocMetadataValue,1>___cdecl_FLocMetadataObject::GetField<3>(FString_const&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                          ::__l2::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15047a460

bool __thiscall `FLocMetadataObject::GetField<4>'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7012142415528067164>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7012142415528067164>,
                         &`public:___cdecl_`public:_class_TSharedPtr<FLocMetadataValue,1>___cdecl_FLocMetadataObject::GetField<4>(FString_const&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                          ::__l2::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15047b490

bool __thiscall `FLocMetadataObject::GetField<1>'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7012142415528067166>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7012142415528067166>,
                         &`public:___cdecl_`public:_class_TSharedPtr<FLocMetadataValue,1>___cdecl_FLocMetadataObject::GetField<1>(FString_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(void)const___ptr64'
                          ::__l2::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15047b4f0

bool __thiscall `FLocMetadataObject::GetField<2>'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7012142415528067166>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7012142415528067166>,
                         &`public:___cdecl_`public:_class_TSharedPtr<FLocMetadataValue,1>___cdecl_FLocMetadataObject::GetField<2>(FString_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(void)const___ptr64'
                          ::__l2::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15047b550

bool __thiscall `FLocMetadataObject::GetField<3>'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7012142415528067166>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7012142415528067166>,
                         &`public:___cdecl_`public:_class_TSharedPtr<FLocMetadataValue,1>___cdecl_FLocMetadataObject::GetField<3>(FString_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(void)const___ptr64'
                          ::__l2::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15047b5b0

bool __thiscall `FLocMetadataObject::GetField<4>'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7012142415528067166>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7012142415528067166>,
                         &`public:___cdecl_`public:_class_TSharedPtr<FLocMetadataValue,1>___cdecl_FLocMetadataObject::GetField<4>(FString_const&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(void)const___ptr64'
                          ::__l2::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

