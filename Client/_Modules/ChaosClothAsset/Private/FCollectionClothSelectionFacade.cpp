// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 15

// FCollectionClothSelectionFacade @ 14db3afb0

FCollectionClothSelectionFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::FCollectionClothSelectionFacade
          (FCollectionClothSelectionFacade *this,
          TSharedRef<FManagedArrayCollection_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this = &___7FCollectionClothSelectionConstFacade_ClothAsset_Chaos_UE__6B_;
  *(FManagedArrayCollection **)&this->field_0x8 = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined ***)this = &___7FCollectionClothSelectionFacade_ClothAsset_Chaos_UE__6B_;
  return this;
}

// FCollectionClothSelectionFacade @ 14db3aff0

FCollectionClothSelectionFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::FCollectionClothSelectionFacade
          (FCollectionClothSelectionFacade *this,TSharedRef<FManagedArrayCollection,1> *param_1)

{
  FManagedArrayCollection *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    *(undefined ***)this = &___7FCollectionClothSelectionConstFacade_ClothAsset_Chaos_UE__6B_;
    *(FManagedArrayCollection **)&this->field_0x8 = pFVar1;
    *(undefined8 *)&this->field_0x10 = 0;
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    *(undefined ***)this = &___7FCollectionClothSelectionConstFacade_ClothAsset_Chaos_UE__6B_;
    *(FManagedArrayCollection **)&this->field_0x8 = pFVar1;
    *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar2;
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  *(undefined ***)this = &___7FCollectionClothSelectionFacade_ClothAsset_Chaos_UE__6B_;
  return this;
}

// ~FCollectionClothSelectionFacade @ 14db3bba0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::~FCollectionClothSelectionFacade
          (FCollectionClothSelectionFacade *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  return;
}

// operator() @ 14db3beb0

void __thiscall
`UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::DefineSchema'::__l2::<lambda_1>::operator()
          (void *this,FName *param_1)

{
  FName FVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  FVar1 = *param_1;
  lVar2 = *(longlong *)(*(longlong *)this + 8);
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)(lVar2 + 0x60) != *(int *)(lVar2 + 0x8c)) {
    lVar5 = *(longlong *)(lVar2 + 0x98);
    if (*(longlong *)(lVar2 + 0x98) == 0) {
      lVar5 = lVar2 + 0x90;
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar2 + 0xa0) - 1U & FVar1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)(lVar2 + 0x58) + (longlong)iVar4 * 0x14) == FVar1)
        goto LAB_14db3bf44;
        iVar4 = *(int *)(*(longlong *)(lVar2 + 0x58) + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(*(FManagedArrayCollection **)(*(longlong *)this + 8),*param_1);
LAB_14db3bf44:
  iVar4 = FManagedArrayCollection::NumElements
                    (*(FManagedArrayCollection **)(*(longlong *)this + 8),*param_1);
  if (iVar4 < 2) {
    if (iVar4 == 0) {
      FManagedArrayCollection::AddElements
                (*(FManagedArrayCollection **)(*(longlong *)this + 8),1,*param_1);
    }
  }
  else {
    (**(code **)(**(longlong **)(*(longlong *)this + 8) + 0x20))
              (*(longlong **)(*(longlong *)this + 8),param_1,iVar4 + -1,1);
  }
  return;
}

// AppendWithOffsets @ 14db40c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::AppendWithOffsets
          (FCollectionClothSelectionFacade *this,FCollectionClothSelectionConstFacade *param_1,
          bool param_2,
          TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  int *piVar11;
  ulonglong uVar12;
  FName FVar13;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar14;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar15;
  ForAnyElementType FVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  FName *pFVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  ulonglong uVar25;
  ForElementType<unsigned_int> FVar26;
  uint *puVar27;
  undefined1 auStackY_228 [32];
  undefined1 local_1f8;
  char local_1f7;
  uint local_1f4;
  FName local_1f0;
  FCollectionClothSelectionConstFacade *local_1e8;
  int local_1e0;
  uint uStack_1dc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1d8;
  undefined4 local_1d0;
  int iStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  FCollectionClothSelectionConstFacade *local_1c0;
  longlong local_1b8;
  undefined4 local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  undefined4 local_19c;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *local_198;
  int *local_190;
  FName *local_188;
  longlong local_180;
  FCollectionClothSelectionConstFacade *local_178;
  TArray<FName,TSizedDefaultAllocator<32>_> local_170;
  longlong *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_158;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_138;
  int iStack_130;
  uint uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  FSparseArrayAllocationInfo local_d8;
  FName local_c8 [4];
  undefined4 local_a4;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  uint local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1f7 = param_2;
  local_1e8 = (FCollectionClothSelectionConstFacade *)this;
  local_198 = param_3;
  local_178 = param_1;
  bVar6 = FCollectionClothSelectionConstFacade::IsValid(param_1);
  if (bVar6) {
    iVar7 = FManagedArrayCollection::NumAttributes
                      ((param_1->ManagedArrayCollection).Object,ClothAsset::Private::SelectionGroup)
    ;
    FManagedArrayCollection::AttributeNames
              ((param_1->ManagedArrayCollection).Object,&local_170,
               ClothAsset::Private::SelectionGroup);
    local_1f4 = 0;
    if (0 < iVar7) {
      local_1b8 = 0;
      local_180 = (longlong)iVar7;
      do {
        lVar17 = local_1b8;
        uVar18 = local_1f4;
        uVar21 = 0;
        if ((int)local_1f4 < local_170.ArrayNum) {
          uVar21 = ~local_1f4 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar20 = (FName *)(local_170.AllocatorInstance.Data + lVar17 * 8);
        local_188 = pFVar20;
        FCollectionClothSelectionConstFacade::GetSelectionGroup(param_1,&local_1f0);
        pTVar10 = FCollectionClothSelectionConstFacade::GetSelectionSet(param_1,pFVar20);
        local_98._0_8_ = (FScriptContainerElement *)0x0;
        local_98._8_8_ = 0;
        local_78 = (ForElementType<unsigned_int>)0x0;
        local_70 = 0;
        local_64 = 0;
        local_58.Data = (FScriptContainerElement *)0x0;
        local_50 = 0;
        local_6c = 0x80;
        local_68 = -1;
        piVar11 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                  ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          *)local_198,local_1f0);
        local_190 = piVar11;
        if ((piVar11 == (int *)0x0) || (*piVar11 == 0)) {
          if ((pTVar10 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("OtherSetWithOffset",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                                 ,0xaa,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          uVar18 = *(int *)&(pTVar10->Elements).field_0x8 - *(int *)&(pTVar10->Elements).field_0x34;
          if ((uint)(local_98._8_4_ - local_64) < uVar18) {
            if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
              Core::Private::OnInvalidSetNum((longlong)(int)uVar18);
            }
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_98,uVar18);
            if (uVar18 < 4) {
              uVar18 = 1;
            }
            else {
              uVar23 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
              lVar17 = 0x3f;
              if (uVar23 != 0) {
                for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              local_1b0 = (undefined4)lVar17;
              uVar18 = 1 << ((byte)lVar17 & 0x1f);
            }
            if ((local_50 == 0) || ((int)local_50 < (int)uVar18)) {
              local_50 = uVar18;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_58,0,0,4);
              }
              if (uVar18 != 0) {
                uVar21 = uVar18;
                if (uVar18 < 2) {
                  if (local_58.Data != (FScriptContainerElement *)0x0) {
                    uVar21 = 0;
                    goto LAB_14db40ea3;
                  }
                }
                else {
LAB_14db40ea3:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_58,0,uVar21,4);
                }
                if (0 < (int)uVar18) {
                  uVar25 = (ulonglong)uVar18;
                  uVar23 = 0;
                  do {
                    FVar16.Data = local_60;
                    if (local_58.Data != (FScriptContainerElement *)0x0) {
                      FVar16.Data = local_58.Data;
                    }
                    uVar12 = uVar23 & (longlong)(int)uVar18 - 1U;
                    uVar23 = uVar23 + 1;
                    *(undefined4 *)(FVar16.Data + uVar12 * 4) = 0xffffffff;
                    uVar25 = uVar25 - 1;
                  } while (uVar25 != 0);
                }
              }
              if (local_50 != 0) {
                pTStack_1d8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
                uStack_1dc = 1;
                local_1e0 = 0;
                iStack_1cc = 0;
                iStack_1c8 = 0;
                if (local_70 != 0) {
                  FVar26 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
                  if (local_78 != (ForElementType<unsigned_int>)0x0) {
                    FVar26 = local_78;
                  }
                  uVar18 = *(uint *)FVar26;
                  iStack_1c8 = 0;
                  local_1e0 = 0;
                  while (uVar18 == 0) {
                    iStack_1c8 = iStack_1c8 + 0x20;
                    lVar17 = (longlong)local_1e0;
                    local_1e0 = local_1e0 + 1;
                    if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_1e0)
                    goto LAB_14db40fc3;
                    uVar18 = ((uint *)((longlong)FVar26 + 4))[lVar17];
                  }
                  uStack_1dc = -uVar18 & uVar18;
                  uVar23 = (ulonglong)uStack_1dc * 2 + 1;
                  lVar17 = 0x3f;
                  if (uVar23 != 0) {
                    for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                    }
                  }
                  local_1ac = (int)lVar17;
                  iStack_1cc = iStack_1c8 + -1 + local_1ac;
                  if (local_70 < iStack_1cc) {
LAB_14db40fc3:
                    iStack_1cc = local_70;
                  }
                }
                local_1d0 = 0xffffffff;
                local_160 = (longlong *)local_98;
                local_158._padding_ = CONCAT44(uStack_1dc,local_1e0);
                local_158.CurrentBitIndex = iStack_1cc;
                local_158.UnvisitedBitMask = 0xffffffff;
                local_158._28_4_ = uStack_1c4;
                local_158.BaseBitIndex = iStack_1c8;
                local_158.Array = pTStack_1d8;
                iVar7 = iStack_1cc;
                if (iStack_1cc < local_70) {
                  do {
                    uVar18 = local_50 - 1 & *(uint *)(*local_160 + (longlong)iVar7 * 0xc);
                    lVar17 = *local_160 + (longlong)iVar7 * 0xc;
                    *(uint *)(lVar17 + 8) = uVar18;
                    FVar16.Data = local_60;
                    if (local_58.Data != (FScriptContainerElement *)0x0) {
                      FVar16.Data = local_58.Data;
                    }
                    uVar23 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar18;
                    *(undefined4 *)(lVar17 + 4) = *(undefined4 *)(FVar16.Data + uVar23 * 4);
                    *(int *)(FVar16.Data + uVar23 * 4) = iVar7;
                    local_158.UnvisitedBitMask =
                         local_158.UnvisitedBitMask & ~local_158._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_158);
                    iVar7 = local_158.CurrentBitIndex;
                  } while (local_158.CurrentBitIndex < (local_158.Array)->NumBits);
                }
              }
            }
          }
          iVar7 = *(int *)&(pTVar10->Elements).field_0x28;
          puVar1 = &(pTVar10->Elements).field_0x10;
          iStack_130 = 0;
          local_118 = 0;
          uStack_12c = 1;
          iStack_11c = 0;
          if (iVar7 != 0) {
            puVar3 = *(uint **)&(pTVar10->Elements).field_0x20;
            puVar27 = (uint *)puVar1;
            if (puVar3 != (uint *)0x0) {
              puVar27 = puVar3;
            }
            uVar18 = *puVar27;
            while (uVar18 == 0) {
              lVar17 = (longlong)iStack_130;
              local_118 = local_118 + 0x20;
              iStack_130 = iStack_130 + 1;
              iStack_11c = iVar7;
              if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_130)
              goto LAB_14db410ed;
              uVar18 = puVar27[lVar17 + 1];
            }
            uStack_12c = -uVar18 & uVar18;
            uVar23 = (ulonglong)uStack_12c * 2 + 1;
            lVar17 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            local_1a8 = (int)lVar17;
            iStack_11c = local_118 + -1 + local_1a8;
            if (iVar7 < iStack_11c) {
              iStack_11c = iVar7;
            }
          }
LAB_14db410ed:
          uVar18 = *(uint *)&(pTVar10->Elements).field_0x28;
          uStack_114 = local_a4;
          uVar21 = uVar18 & 0xffffffe0;
          iStack_110 = *(int *)&(pTVar10->Elements).field_0x8 -
                       *(int *)&(pTVar10->Elements).field_0x34;
          TStack_100._padding_ = CONCAT44(uStack_12c,iStack_130);
          uStack_120 = 0xffffffff;
          TStack_100.CurrentBitIndex = iStack_11c;
          TStack_100.UnvisitedBitMask = 0xffffffff;
          iVar19 = (int)uVar18 >> 5;
          TStack_100._28_4_ = local_a4;
          TStack_100.BaseBitIndex = local_118;
          uStack_e0 = CONCAT44(uStack_10c,iStack_110);
          local_138 = pTVar10;
          local_128 = puVar1;
          local_108 = pTVar10;
          TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
          if ((((int)uVar18 < 0) || (iVar7 < (int)uVar18)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar22 = *(uint *)&(pTVar10->Elements).field_0x28;
          if (uVar18 != uVar22) {
            puVar4 = *(undefined1 **)&(pTVar10->Elements).field_0x20;
            puVar24 = puVar1;
            if (puVar4 != (undefined1 *)0x0) {
              puVar24 = puVar4;
            }
            uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar19 * 4);
            while (uVar18 == 0) {
              lVar17 = (longlong)iVar19;
              uVar21 = uVar21 + 0x20;
              iVar19 = iVar19 + 1;
              uVar18 = uVar22;
              if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
              goto LAB_14db411f0;
              uVar18 = *(uint *)(puVar24 + lVar17 * 4 + 4);
            }
            uVar23 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
            lVar17 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            local_1a4 = (int)lVar17;
            uVar18 = (uVar21 - 1) + local_1a4;
            if ((int)uVar22 < (int)uVar18) {
              uVar18 = uVar22;
            }
          }
LAB_14db411f0:
          while( true ) {
            pTVar15 = local_108;
            if (*(int *)&(local_108->Elements).field_0x8 - *(int *)&(local_108->Elements).field_0x34
                != (int)uStack_e0) {
              local_1f8 = 0;
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1f8);
            }
            if (((TStack_100.CurrentBitIndex == uVar18) &&
                (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
               (pTVar15 == pTVar10)) break;
            iVar7 = *(int *)(*(longlong *)&pTVar15->Elements +
                            (longlong)TStack_100.CurrentBitIndex * 0xc);
            iVar19 = *piVar11;
            if (local_64 == 0) {
              iVar8 = Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0xc,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                                 (int *)(local_98 + 0xc));
              TBitArray<FDefaultBitArrayAllocator>::Add
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),false);
              iVar2 = local_68;
            }
            else {
              iVar2 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0xc + 4);
              local_64 = local_64 + -1;
              iVar8 = local_68;
              if (local_64 != 0) {
                *(undefined4 *)(local_98._0_8_ + (longlong)iVar2 * 0xc) = 0xffffffff;
              }
            }
            local_68 = iVar2;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_98,&local_d8,iVar8);
            if (local_d8.Pointer != (uint *)0x0) {
              *(int *)local_d8.Pointer = iVar7 + iVar19;
              *(uint *)((longlong)local_d8.Pointer + 4) = 0xffffffff;
            }
            uVar21 = *(uint *)local_d8.Pointer;
            if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
              FVar16.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar16.Data = local_58.Data;
              }
              for (iVar7 = *(int *)(FVar16.Data + (ulonglong)(local_50 - 1 & uVar21) * 4);
                  iVar7 != -1; iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0xc + 4)) {
                if (*(uint *)(local_98._0_8_ + (longlong)iVar7 * 0xc) == uVar21) {
                  if (iVar7 != -1) {
                    *(uint *)(local_98._0_8_ + (longlong)iVar7 * 0xc) = uVar21;
                    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::RemoveAtUninitialized
                              ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)local_98,local_d8.Index,1);
                    goto LAB_14db4142f;
                  }
                  break;
                }
              }
            }
            uVar22 = local_98._8_4_ - local_64;
            if (uVar22 < 4) {
              uVar9 = 1;
            }
            else {
              uVar23 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
              lVar17 = 0x3f;
              if (uVar23 != 0) {
                for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              local_19c = (undefined4)lVar17;
              uVar9 = 1 << ((byte)lVar17 & 0x1f);
            }
            if (((int)uVar22 < 1) || ((int)uVar9 <= (int)local_50)) {
              uVar21 = local_50 - 1 & uVar21;
              *(uint *)((longlong)local_d8.Pointer + 8) = uVar21;
              FVar16.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar16.Data = local_58.Data;
              }
              uVar23 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar21;
              *(uint *)((longlong)local_d8.Pointer + 4) = *(uint *)(FVar16.Data + uVar23 * 4);
              *(int *)(FVar16.Data + uVar23 * 4) = local_d8.Index;
            }
            else {
              local_50 = uVar9;
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98);
            }
LAB_14db4142f:
            TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
            piVar11 = local_190;
          }
          pTVar10 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98;
          pFVar20 = local_188;
          this = (FCollectionClothSelectionFacade *)local_1e8;
          lVar17 = local_1b8;
          param_2 = (bool)local_1f7;
          uVar18 = local_1f4;
        }
        bVar6 = FCollectionClothSelectionConstFacade::IsValid
                          ((FCollectionClothSelectionConstFacade *)this);
        if ((bVar6) &&
           (bVar6 = FManagedArrayCollection::HasAttribute
                              ((((FCollectionClothSelectionConstFacade *)this)->
                               ManagedArrayCollection).Object,*pFVar20,
                               ClothAsset::Private::SelectionGroup), bVar6)) {
          FVar13 = FCollectionClothSelectionConstFacade::GetSelectionGroup
                             ((FCollectionClothSelectionConstFacade *)this,local_c8);
          if (*(FName *)FVar13 == local_1f0) {
            bVar6 = FCollectionClothSelectionConstFacade::IsValid
                              ((FCollectionClothSelectionConstFacade *)this);
            if ((!bVar6) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                                   ,0xc6,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar14 = FManagedArrayCollection::
                      FindAttributeTyped<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                                ((((FCollectionClothSelectionConstFacade *)this)->
                                 ManagedArrayCollection).Object,*pFVar20,
                                 ClothAsset::Private::SelectionGroup);
            if ((pTVar14 ==
                 (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Selection",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                                   ,200,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                      (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)
                        &pTVar14->field_0x10,pTVar10);
          }
          else if (param_2 != false) goto LAB_14db41621;
          local_50 = 0;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data);
          }
          iVar7 = SUB84(local_98._8_8_,4);
          local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
          if (iVar7 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
          }
          local_70 = 0;
          local_64 = 0;
          local_68 = -1;
          if (0x80 < local_6c) {
            local_6c = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
          }
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_78);
          }
          if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_98._0_8_);
          }
        }
        else {
LAB_14db41621:
          bVar6 = FCollectionClothSelectionConstFacade::IsValid
                            ((FCollectionClothSelectionConstFacade *)this);
          if (!bVar6) {
            local_1c0 = (FCollectionClothSelectionConstFacade *)this;
            `UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::DefineSchema'::__l2::<lambda_1>
            ::operator()(&local_1c0,&ClothAsset::Private::SelectionGroup);
            `UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::DefineSchema'::__l2::<lambda_1>
            ::operator()(&local_1c0,&ClothAsset::Private::SelectionSecondaryGroup);
          }
          pTVar15 = FindOrAddSelectionSetInternal
                              (this,pFVar20,&local_1f0,&ClothAsset::Private::SelectionGroup);
          if (pTVar15 != pTVar10) {
            Core::Private::
            CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                      (&pTVar15->Hash,&pTVar15->HashSize,&pTVar10->Hash,pTVar10->HashSize);
            iVar7 = *(int *)&(pTVar10->Elements).field_0x8;
            TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Empty(&pTVar15->Elements,iVar7);
            Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,iVar7,(ForAnyElementType *)pTVar15,
                       (int *)&(pTVar15->Elements).field_0x8,(int *)&(pTVar15->Elements).field_0xc);
            puVar4 = &(pTVar10->Elements).field_0x10;
            puVar1 = &(pTVar15->Elements).field_0x10;
            *(undefined4 *)&(pTVar15->Elements).field_0x30 =
                 *(undefined4 *)&(pTVar10->Elements).field_0x30;
            *(undefined4 *)&(pTVar15->Elements).field_0x34 =
                 *(undefined4 *)&(pTVar10->Elements).field_0x34;
            if (puVar1 != puVar4) {
              TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                        ((TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                         (TBitArray<FDefaultBitArrayAllocator> *)puVar4);
            }
            this = (FCollectionClothSelectionFacade *)local_1e8;
            if (iVar7 != 0) {
              memcpy(*(void **)&pTVar15->Elements,*(void **)&pTVar10->Elements,(longlong)iVar7 * 0xc
                    );
              this = (FCollectionClothSelectionFacade *)local_1e8;
            }
          }
          local_50 = 0;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_98);
        }
        local_1f4 = uVar18 + 1;
        local_1b8 = lVar17 + 1;
        param_1 = local_178;
      } while (local_1b8 < local_180);
    }
    if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.AllocatorInstance.Data);
    }
  }
  return;
}

// DefineSchema @ 14db54bf0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::DefineSchema
          (FCollectionClothSelectionFacade *this)

{
  FCollectionClothSelectionFacade *local_res8 [4];
  
  local_res8[0] = this;
  `UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::DefineSchema'::__l2::<lambda_1>::
  operator()(local_res8,&ClothAsset::Private::SelectionGroup);
  `UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::DefineSchema'::__l2::<lambda_1>::
  operator()(local_res8,&ClothAsset::Private::SelectionSecondaryGroup);
  return;
}

// FindOrAddSelectionSecondarySet @ 14db55430

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::FindOrAddSelectionSecondarySet
          (FCollectionClothSelectionFacade *this,FName *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar3;
  
  bVar2 = FCollectionClothSelectionConstFacade::IsValid
                    ((FCollectionClothSelectionConstFacade *)this);
  if (bVar2) {
    bVar2 = FManagedArrayCollection::HasAttribute
                      (*(FManagedArrayCollection **)&this->field_0x8,*param_1,
                       ClothAsset::Private::SelectionGroup);
    if (bVar2) goto LAB_14db5548e;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("HasSelection(Name)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                     ,0x11e,
                     L"FCollectionClothSelectionFacade: Can\'t add a Secondary Selection with no matching Primary attribute"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
    return pTVar3;
  }
LAB_14db5548e:
  pTVar3 = FindOrAddSelectionSetInternal
                     (this,param_1,param_2,&ClothAsset::Private::SelectionSecondaryGroup);
  return pTVar3;
}

// FindOrAddSelectionSet @ 14db554c0

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::FindOrAddSelectionSet
          (FCollectionClothSelectionFacade *this,FName *param_1,FName *param_2)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  
  pTVar1 = FindOrAddSelectionSetInternal(this,param_1,param_2,&ClothAsset::Private::SelectionGroup);
  return pTVar1;
}

// FindOrAddSelectionSetInternal @ 14db554e0

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::FindOrAddSelectionSetInternal
          (FCollectionClothSelectionFacade *this,FName *param_1,FName *param_2,FName *param_3)

{
  FManagedArrayCollection *this_00;
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar5;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar6;
  FName FVar7;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar8;
  undefined1 local_res8 [8];
  undefined2 local_40;
  undefined2 uStack_3e;
  FConstructionParameters local_38;
  FName local_28;
  FName local_20;
  
  bVar3 = FCollectionClothSelectionConstFacade::IsValid
                    ((FCollectionClothSelectionConstFacade *)this);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                       ,0xf9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar2)();
      return pTVar5;
    }
  }
  if ((*param_2 == (FName)0x0) || (*param_1 == (FName)0x0)) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1832196433877401850>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                       ,0xfa,"GroupName != NAME_None && Name != NAME_None");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pTVar6 = FManagedArrayCollection::
           FindAttributeTyped<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                     (*(FManagedArrayCollection **)&this->field_0x8,*param_1,*param_3);
  if (pTVar6 == (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) {
    local_38.GroupIndexDependency = *param_2;
    this_00 = *(FManagedArrayCollection **)&this->field_0x8;
    FVar7 = *param_3;
    FVar1 = *param_1;
    local_38.Saved = true;
    local_38.bAllowCircularDependency = false;
    local_38._10_2_ = uStack_3e;
    bVar3 = FManagedArrayCollection::HasAttribute(this_00,FVar1,FVar7);
    if (!bVar3) {
      FManagedArrayCollection::
      AddNewAttributeImpl<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                (this_00,FVar1,FVar7,&local_38);
    }
    bVar3 = FManagedArrayCollection::HasAttribute(this_00,FVar1,FVar7);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("HasAttribute(Name, Group)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x164,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar2)();
        return pTVar5;
      }
    }
    local_28 = FVar1;
    local_20 = FVar7;
    pTVar8 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                     *)&this_00->Map,(TTuple<FName,FName> *)&local_28);
    if (pTVar8 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar2)();
        return pTVar5;
      }
    }
    pTVar6 = FManagedArrayCollection::FValueType::
             ModifyTypedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                       ((FValueType *)&pTVar8->field_0x10);
    iVar4 = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
    if (iVar4 != 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Selection->Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                         ,0x110,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  else {
    iVar4 = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
    if (iVar4 != 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Selection->Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                         ,0x100,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar2)();
        return pTVar5;
      }
    }
    FVar7 = FManagedArrayCollection::GetDependency
                      (*(FManagedArrayCollection **)&this->field_0x8,(FName)local_res8,*param_1);
    if (*(FName *)FVar7 != *param_2) {
      FManagedArrayCollection::SetDependency
                (*(FManagedArrayCollection **)&this->field_0x8,*param_1,*param_3,*param_2,false);
      if (*(int *)&pTVar6->field_0x18 < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar2)();
          return pTVar5;
        }
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
                (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)&pTVar6->field_0x10);
    }
  }
  if (*(int *)&pTVar6->field_0x18 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)&pTVar6->field_0x10;
}

// FindSelectionSecondarySet @ 14db558c0

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::FindSelectionSecondarySet
          (FCollectionClothSelectionFacade *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar3;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar4;
  
  bVar2 = FCollectionClothSelectionConstFacade::IsValid
                    ((FCollectionClothSelectionConstFacade *)this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                       ,0xe6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = FManagedArrayCollection::HasAttribute
                    (*(FManagedArrayCollection **)&this->field_0x8,*param_1,
                     ClothAsset::Private::SelectionGroup);
  pTVar4 = FManagedArrayCollection::
           FindAttributeTyped<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                     (*(FManagedArrayCollection **)&this->field_0x8,*param_1,
                      ClothAsset::Private::SelectionSecondaryGroup);
  if (pTVar4 != (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) {
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bPrimaryAttributeExists || !SecondarySelection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                         ,0xeb,
                         L"FCollectionClothSelectionFacade: Secondary Selection found with no Primary attribute"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
        return pTVar3;
      }
    }
    return *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)&pTVar4->field_0x10;
  }
  return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
}

// FindSelectionSet @ 14db55a10

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::FindSelectionSet
          (FCollectionClothSelectionFacade *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar3;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar4;
  
  bVar2 = FCollectionClothSelectionConstFacade::IsValid
                    ((FCollectionClothSelectionConstFacade *)this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                       ,0xce,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar4 = FManagedArrayCollection::
           FindAttributeTyped<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                     (*(FManagedArrayCollection **)&this->field_0x8,*param_1,
                      ClothAsset::Private::SelectionGroup);
  if (pTVar4 != (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) {
    return *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)&pTVar4->field_0x10;
  }
  return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
}

// GetSelectionSecondarySet @ 14db5cdf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::GetSelectionSecondarySet
          (FCollectionClothSelectionFacade *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar3;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar4;
  
  bVar2 = FCollectionClothSelectionConstFacade::IsValid
                    ((FCollectionClothSelectionConstFacade *)this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                       ,0xdc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar4 = FManagedArrayCollection::
           FindAttributeTyped<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                     (*(FManagedArrayCollection **)&this->field_0x8,*param_1,
                      ClothAsset::Private::SelectionGroup);
  if (pTVar4 == (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ManagedArrayCollection->FindAttributeTyped<TSet<int32>>(Name, Private::SelectionGroup) != nullptr"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                       ,0xdd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar4 = FManagedArrayCollection::
           FindAttributeTyped<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                     (*(FManagedArrayCollection **)&this->field_0x8,*param_1,
                      ClothAsset::Private::SelectionSecondaryGroup);
  if (pTVar4 == (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Selection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                       ,0xe0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
      return pTVar3;
    }
    return _DAT_00000010;
  }
  return *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)&pTVar4->field_0x10;
}

// GetSelectionSet @ 14db5cf90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::GetSelectionSet
          (FCollectionClothSelectionFacade *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar3;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar4;
  
  bVar2 = FCollectionClothSelectionConstFacade::IsValid
                    ((FCollectionClothSelectionConstFacade *)this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                       ,0xc6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar4 = FManagedArrayCollection::
           FindAttributeTyped<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                     (*(FManagedArrayCollection **)&this->field_0x8,*param_1,
                      ClothAsset::Private::SelectionGroup);
  if (pTVar4 == (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Selection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                       ,200,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar1)();
      return pTVar3;
    }
    return _DAT_00000010;
  }
  return *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)&pTVar4->field_0x10;
}

// RemoveSelectionSecondarySet @ 14db68dd0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::RemoveSelectionSecondarySet
          (FCollectionClothSelectionFacade *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = FCollectionClothSelectionConstFacade::IsValid
                    ((FCollectionClothSelectionConstFacade *)this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                       ,0xf2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FManagedArrayCollection::RemoveAttribute
            (*(FManagedArrayCollection **)&this->field_0x8,*param_1,
             ClothAsset::Private::SelectionSecondaryGroup);
  return;
}

// RemoveSelectionSet @ 14db68e40

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::RemoveSelectionSet
          (FCollectionClothSelectionFacade *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = FCollectionClothSelectionConstFacade::IsValid
                    ((FCollectionClothSelectionConstFacade *)this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSelectionFacade.cpp"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FManagedArrayCollection::RemoveAttribute
            (*(FManagedArrayCollection **)&this->field_0x8,*param_1,
             ClothAsset::Private::SelectionGroup);
  return;
}

