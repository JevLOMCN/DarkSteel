// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// FInitialValueMutation @ 1461187f0

/* WARNING: Enum "Type": Some values do not have unique names */

FInitialValueMutation * __thiscall
UE::MovieScene::FInitialValueMutation::FInitialValueMutation
          (FInitialValueMutation *this,UMovieSceneEntitySystemLinker *param_1)

{
  TMultiMap<UE::MovieScene::FComponentTypeID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,int,1>_>
  *this_00;
  FEntityComponentFilter *this_01;
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  FEntityManager *this_02;
  ushort uVar2;
  uint *puVar3;
  code *pcVar4;
  TEntitySystemLinkerExtensionID<UE::MovieScene::FInitialValueCache> TVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FBuiltInComponentTypes *pFVar9;
  FInitialValueMutation *pFVar10;
  FComponentMask *pFVar11;
  ulong64 uVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ushort *puVar16;
  int iVar17;
  uint uVar18;
  FInitialValueCache *pFVar19;
  ushort *puVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  FInitialValueCache *pFVar24;
  undefined1 *puVar25;
  int iVar26;
  ulonglong uVar27;
  uint *puVar28;
  FScriptContainerElement *pFVar29;
  int iVar30;
  uint local_res18;
  uint local_e0;
  uint uStack_dc;
  uint uStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b0;
  FSparseArrayAllocationInfo local_90;
  FEntityAllocationIterator local_80;
  FEntityAllocationIterator local_68;
  
  this_00 = &this->InitialValueTypeToProcessor;
  pFVar24 = (FInitialValueCache *)0x0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  this->_padding_ = (longlong)&___7FInitialValueMutation_MovieScene_UE__6B_;
  *(undefined8 *)&(this->InitialValueTypeToProcessor).field_0x8 = 0;
  *(undefined8 *)&(this->InitialValueTypeToProcessor).field_0x20 = 0;
  *(undefined4 *)&(this->InitialValueTypeToProcessor).field_0x28 = 0;
  *(undefined4 *)&(this->InitialValueTypeToProcessor).field_0x2c = 0x80;
  *(undefined4 *)&(this->InitialValueTypeToProcessor).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InitialValueTypeToProcessor).field_0x34 = 0;
  *(undefined8 *)&(this->InitialValueTypeToProcessor).field_0x40 = 0;
  *(undefined4 *)&(this->InitialValueTypeToProcessor).field_0x48 = 0;
  (this->AnyInitialValue).Bits.NumBits = 0;
  (this->AnyInitialValue).Bits.MaxBits = 0x180;
  pFVar9 = FBuiltInComponentTypes::Get();
  uVar27 = (ulonglong)_tls_index;
  this->BuiltInComponents = pFVar9;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar27 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ID = (TEntitySystemLinkerExtensionID<UE::MovieScene::FInitialValueCache>)::StaticID;
    ::StaticID = ::StaticID + 1;
    _Init_thread_footer(&::_TSS0);
  }
  TVar5 = ID;
  lVar22 = (longlong)(int)ID;
  pFVar19 = pFVar24;
  if ((-1 < (int)ID) && ((int)ID < *(int *)&(param_1->ExtensionsByID).field_0x28)) {
    if ((*(int *)&(param_1->ExtensionsByID).field_0x28 <= (int)ID) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FInitialValueMutation *)(*pcVar4)();
      return pFVar10;
    }
    puVar25 = *(undefined1 **)&(param_1->ExtensionsByID).field_0x20;
    if (puVar25 == (undefined1 *)0x0) {
      puVar25 = &(param_1->ExtensionsByID).field_0x10;
    }
    if ((*(uint *)(puVar25 + (longlong)((int)((int)TVar5 + ((int)TVar5 >> 0x1f & 0x1fU)) >> 5) * 4)
         >> ((uint)TVar5 & 0x1f) & 1) != 0) {
      pFVar19 = *(FInitialValueCache **)(*(longlong *)&param_1->ExtensionsByID + lVar22 * 8);
    }
  }
  this->InitialValueCache = pFVar19;
  iVar17 = GInitialValueProcessors.ArrayNum;
  local_res18 = 0;
  if (0 < iVar17) {
    this_02 = &param_1->EntityManager;
    do {
      uVar23 = (uint)pFVar24;
      uVar18 = 0;
      if ((int)uVar23 < GInitialValueProcessors.ArrayNum) {
        uVar18 = ~uVar23 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FInitialValueMutation *)(*pcVar4)();
        return pFVar10;
      }
      pFVar29 = GInitialValueProcessors.AllocatorInstance.Data + (longlong)(int)uVar23 * 0x98;
      uVar2 = *(ushort *)pFVar29;
      pFVar11 = FEntityManager::GetAccumulatedMask(this_02);
      if (((uVar2 != 0xffff) && ((int)(uint)uVar2 < (pFVar11->Bits).NumBits)) &&
         ((*(uint *)(pFVar11->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) &
          1) != 0)) {
        this_01 = (FEntityComponentFilter *)(pFVar29 + 8);
        bVar6 = FEntityComponentFilter::IsValid(this_01);
        if (bVar6) {
          if ((this_01 == (FEntityComponentFilter *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InFilter",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                                 ,0x405,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FInitialValueMutation *)(*pcVar4)();
            return pFVar10;
          }
          FEntityAllocationIterator::FEntityAllocationIterator(&local_68,this_02,this_01);
          FEntityAllocationIterator::FEntityAllocationIterator(&local_80,this_02);
          bVar6 = FEntityAllocationIterator::operator!=(&local_68,&local_80);
          FEntityAllocationIterator::~FEntityAllocationIterator(&local_80);
          FEntityAllocationIterator::~FEntityAllocationIterator(&local_68);
          if (!bVar6) goto LAB_146118f26;
        }
        if ((*(longlong *)(pFVar29 + 0x88) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FInitialValueMutation *)(*pcVar4)();
          return pFVar10;
        }
        (**(code **)(**(longlong **)(pFVar29 + 0x88) + 8))
                  (*(longlong **)(pFVar29 + 0x88),param_1,this->InitialValueCache);
        uVar2 = *(ushort *)pFVar29;
        iVar26 = ((uint)uVar2 - (this->AnyInitialValue).Bits.NumBits) + 1;
        if (0 < iVar26) {
          TBitArray<TFixedAllocator<12>_>::Add(&(this->AnyInitialValue).Bits,false,iVar26);
        }
        if (((this->AnyInitialValue).Bits.NumBits <= (int)(uint)uVar2) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FInitialValueMutation *)(*pcVar4)();
          return pFVar10;
        }
        pTVar1 = (this->AnyInitialValue).Bits.AllocatorInstance.InlineData + (uVar2 >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
        iVar26 = *(int *)&(this->InitialValueTypeToProcessor).field_0x34;
        if (iVar26 == 0) {
          iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,4,1,(ForAnyElementType *)this_00,
                             (int *)&(this->InitialValueTypeToProcessor).field_0x8,
                             (int *)&(this->InitialValueTypeToProcessor).field_0xc);
          iVar26 = *(int *)&(this->InitialValueTypeToProcessor).field_0x28;
          puVar25 = &(this->InitialValueTypeToProcessor).field_0x10;
          iVar30 = (int)((iVar26 >> 0x1f & 0x1fU) + iVar26) >> 5;
          if ((iVar26 == 0) || (iVar30 != (int)(iVar26 + -1 + (iVar26 + -1 >> 0x1f & 0x1fU)) >> 5))
          {
            iVar8 = *(int *)&(this->InitialValueTypeToProcessor).field_0x2c;
            if (iVar8 < iVar26 + 1) {
              uVar18 = iVar8 + 0x1fU >> 5;
              uVar23 = iVar26 + 0x20U >> 5;
              if (uVar23 < 5) {
                iVar8 = 4;
              }
              else {
                uVar27 = (ulonglong)uVar23;
                if (uVar18 < 5) {
                  uVar18 = 0;
                }
                if (uVar18 == 0) {
                  uVar13 = 4;
                  if (4 < uVar27) {
                    uVar13 = uVar27;
                  }
                }
                else {
                  uVar13 = ((ulonglong)uVar23 * 3 >> 3) + 0x10 + uVar27;
                }
                uVar12 = FMemory::QuantizeSize(uVar13 * 4,0);
                iVar8 = (int)(uVar12 >> 2);
                if (iVar8 < (int)uVar23) {
                  iVar8 = 0x7fffffff;
                }
              }
              *(int *)&(this->InitialValueTypeToProcessor).field_0x2c = iVar8 << 5;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)puVar25,
                         *(int *)&(this->InitialValueTypeToProcessor).field_0x28);
              uVar23 = local_res18;
            }
            puVar15 = &(this->InitialValueTypeToProcessor).field_0x28;
            *(int *)puVar15 = *(int *)puVar15 + 1;
            iVar8 = *(int *)&(this->InitialValueTypeToProcessor).field_0x28;
            uVar21 = iVar8 >> 0x1f & 0x1f;
            uVar18 = iVar8 + uVar21;
            iVar8 = (uVar18 & 0x1f) - uVar21;
            if (iVar8 != 0) {
              puVar15 = *(undefined1 **)&(this->InitialValueTypeToProcessor).field_0x20;
              puVar14 = puVar25;
              if (puVar15 != (undefined1 *)0x0) {
                puVar14 = puVar15;
              }
              *(uint *)(puVar14 + (longlong)((int)uVar18 >> 5) * 4) =
                   *(uint *)(puVar14 + (longlong)((int)uVar18 >> 5) * 4) &
                   0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
            }
          }
          else {
            *(int *)&(this->InitialValueTypeToProcessor).field_0x28 = iVar26 + 1;
          }
          puVar15 = *(undefined1 **)&(this->InitialValueTypeToProcessor).field_0x20;
          if (puVar15 != (undefined1 *)0x0) {
            puVar25 = puVar15;
          }
          *(uint *)(puVar25 + (longlong)iVar30 * 4) =
               *(uint *)(puVar25 + (longlong)iVar30 * 4) & ~(1 << ((byte)iVar26 & 0x1f));
        }
        else {
          iVar7 = *(int *)&(this->InitialValueTypeToProcessor).field_0x30;
          iVar30 = *(int *)(*(longlong *)&this_00->field_0x0 + 4 + (longlong)iVar7 * 0x10);
          iVar26 = iVar26 + -1;
          *(int *)&(this->InitialValueTypeToProcessor).field_0x30 = iVar30;
          *(int *)&(this->InitialValueTypeToProcessor).field_0x34 = iVar26;
          if (iVar26 != 0) {
            *(undefined4 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar30 * 0x10) = 0xffffffff
            ;
          }
        }
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00,&local_90,iVar7);
        puVar16 = (ushort *)0x0;
        puVar20 = puVar16;
        if (local_90.Pointer != (ushort *)0x0) {
          *(ushort *)local_90.Pointer = *(ushort *)pFVar29;
          *(uint *)((longlong)local_90.Pointer + 4) = uVar23;
          ((ushort *)((longlong)local_90.Pointer + 8))[0] = 0xffff;
          ((ushort *)((longlong)local_90.Pointer + 8))[1] = 0xffff;
          puVar20 = local_90.Pointer;
        }
        uVar21 = 1;
        uVar18 = *(int *)&(this->InitialValueTypeToProcessor).field_0x8 -
                 *(int *)&(this->InitialValueTypeToProcessor).field_0x34;
        if (3 < uVar18) {
          uVar27 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
          lVar22 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          uVar21 = 1 << ((byte)lVar22 & 0x1f);
        }
        if (((int)uVar18 < 1) ||
           ((int)uVar21 <= *(int *)&(this->InitialValueTypeToProcessor).field_0x48)) {
          uVar18 = (uint)*puVar20 & *(int *)&(this->InitialValueTypeToProcessor).field_0x48 - 1U;
          *(uint *)(puVar20 + 6) = uVar18;
          puVar25 = *(undefined1 **)&(this->InitialValueTypeToProcessor).field_0x40;
          puVar15 = &(this->InitialValueTypeToProcessor).field_0x38;
          if (puVar25 != (undefined1 *)0x0) {
            puVar15 = puVar25;
          }
          uVar27 = (longlong)*(int *)&(this->InitialValueTypeToProcessor).field_0x48 - 1U &
                   (ulonglong)uVar18;
          *(undefined4 *)(puVar20 + 4) = *(undefined4 *)(puVar15 + uVar27 * 4);
          *(int *)(puVar15 + uVar27 * 4) = local_90.Index;
        }
        else {
          *(uint *)&(this->InitialValueTypeToProcessor).field_0x48 = uVar21;
          if (*(longlong *)&(this->InitialValueTypeToProcessor).field_0x40 != 0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(this->InitialValueTypeToProcessor).field_0x40,0,0,4);
          }
          if (uVar21 != 0) {
            uVar18 = uVar21;
            if (uVar21 < 2) {
              if (*(longlong *)&(this->InitialValueTypeToProcessor).field_0x40 != 0) {
                uVar18 = 0;
                goto LAB_146118d50;
              }
            }
            else {
LAB_146118d50:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&(this->InitialValueTypeToProcessor).field_0x40,0,
                         uVar18,4);
            }
            if (0 < (int)uVar21) {
              uVar27 = (ulonglong)uVar21;
              puVar20 = puVar16;
              do {
                puVar25 = *(undefined1 **)&(this->InitialValueTypeToProcessor).field_0x40;
                puVar15 = &(this->InitialValueTypeToProcessor).field_0x38;
                if (puVar25 != (undefined1 *)0x0) {
                  puVar15 = puVar25;
                }
                uVar13 = (ulonglong)puVar20 & (longlong)(int)uVar21 - 1U;
                puVar20 = (ushort *)((longlong)puVar20 + 1);
                *(undefined4 *)(puVar15 + uVar13 * 4) = 0xffffffff;
                uVar27 = uVar27 - 1;
              } while (uVar27 != 0);
            }
          }
          uVar23 = local_res18;
          if (*(int *)&(this->InitialValueTypeToProcessor).field_0x48 != 0) {
            uVar18 = *(uint *)&(this->InitialValueTypeToProcessor).field_0x28;
            local_b0.Array =
                 (TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->InitialValueTypeToProcessor).field_0x10;
            uStack_dc = 1;
            local_e0 = 0;
            uStack_cc = 0;
            uStack_c8 = 0;
            if (uVar18 != 0) {
              puVar3 = *(uint **)&(this->InitialValueTypeToProcessor).field_0x20;
              puVar28 = (uint *)local_b0.Array;
              if (puVar3 != (uint *)0x0) {
                puVar28 = puVar3;
              }
              uVar23 = *puVar28;
              puVar20 = puVar16;
              while (uVar23 == 0) {
                uStack_c8 = (int)puVar20 + 0x20;
                puVar20 = (ushort *)(ulonglong)uStack_c8;
                iVar26 = (int)puVar16;
                local_e0 = iVar26 + 1;
                puVar16 = (ushort *)(ulonglong)local_e0;
                if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_e0)
                goto LAB_146118e4e;
                uVar23 = puVar28[(longlong)iVar26 + 1];
              }
              uStack_dc = -uVar23 & uVar23;
              uVar27 = (ulonglong)uStack_dc * 2 + 1;
              lVar22 = 0x3f;
              if (uVar27 != 0) {
                for (; uVar27 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                }
              }
              uStack_cc = (int)lVar22 + -1 + uStack_c8;
              puVar16 = (ushort *)(ulonglong)uStack_cc;
              if ((int)uVar18 < (int)uStack_cc) {
LAB_146118e4e:
                puVar16 = (ushort *)(ulonglong)uVar18;
                uStack_cc = uVar18;
              }
            }
            local_b0._padding_ = CONCAT44(uStack_dc,local_e0);
            local_b0.CurrentBitIndex = uStack_cc;
            local_b0.UnvisitedBitMask = 0xffffffff;
            local_b0._28_4_ = uStack_c4;
            local_b0.BaseBitIndex = uStack_c8;
            uVar23 = local_res18;
            if ((int)puVar16 < (int)uVar18) {
              do {
                puVar20 = (ushort *)
                          ((longlong)(int)puVar16 * 0x10 + *(longlong *)&this_00->field_0x0);
                uVar18 = *(int *)&(this->InitialValueTypeToProcessor).field_0x48 - 1U &
                         (uint)*puVar20;
                *(uint *)(puVar20 + 6) = uVar18;
                puVar25 = *(undefined1 **)&(this->InitialValueTypeToProcessor).field_0x40;
                puVar15 = &(this->InitialValueTypeToProcessor).field_0x38;
                if (puVar25 != (undefined1 *)0x0) {
                  puVar15 = puVar25;
                }
                uVar27 = (longlong)*(int *)&(this->InitialValueTypeToProcessor).field_0x48 - 1U &
                         (ulonglong)uVar18;
                *(undefined4 *)(puVar20 + 4) = *(undefined4 *)(puVar15 + uVar27 * 4);
                *(int *)(puVar15 + uVar27 * 4) = (int)puVar16;
                local_b0.UnvisitedBitMask = local_b0.UnvisitedBitMask & ~local_b0._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b0);
                puVar16 = (ushort *)(ulonglong)(uint)local_b0.CurrentBitIndex;
              } while (local_b0.CurrentBitIndex < (local_b0.Array)->NumBits);
            }
          }
        }
      }
LAB_146118f26:
      local_res18 = uVar23 + 1;
      pFVar24 = (FInitialValueCache *)(ulonglong)local_res18;
    } while ((int)local_res18 < iVar17);
  }
  return this;
}

// ~FInitialValueMutation @ 14611d7d0

void __thiscall
UE::MovieScene::FInitialValueMutation::~FInitialValueMutation(FInitialValueMutation *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  void *pvVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar13 = 0;
  puVar1 = &(this->InitialValueTypeToProcessor).field_0x10;
  this->_padding_ = (longlong)&___7FInitialValueMutation_MovieScene_UE__6B_;
  iVar3 = *(int *)&(this->InitialValueTypeToProcessor).field_0x28;
  iVar15 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->InitialValueTypeToProcessor).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14611d87d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar9 = local_res10 + -1 + iVar15;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14611d87d:
  uVar12 = *(uint *)&(this->InitialValueTypeToProcessor).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar13);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->InitialValueTypeToProcessor).field_0x8 -
                       *(int *)&(this->InitialValueTypeToProcessor).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&(this->InitialValueTypeToProcessor).field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(this->InitialValueTypeToProcessor).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14611d980;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    uVar12 = local_res18 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_14611d980:
  while( true ) {
    if (*(int *)&(this->InitialValueTypeToProcessor).field_0x8 -
        *(int *)&(this->InitialValueTypeToProcessor).field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      *(undefined4 *)&(this->InitialValueTypeToProcessor).field_0x48 = 0;
      pvVar4 = *(void **)&(this->InitialValueTypeToProcessor).field_0x40;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&this->InitialValueTypeToProcessor);
      this->_padding_ = (longlong)&___7IMovieSceneEntityMutation_MovieScene_UE__6B_;
      return;
    }
    uVar11 = (uint)((ulonglong)
                    *(undefined8 *)
                     (*(longlong *)&this->InitialValueTypeToProcessor +
                     (longlong)TStack_60.CurrentBitIndex * 0x10) >> 0x20);
    uVar8 = 0;
    if ((int)uVar11 < GInitialValueProcessors.ArrayNum) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    FVar6.Data = GInitialValueProcessors.AllocatorInstance.Data;
    if ((*(longlong *)
          (GInitialValueProcessors.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x98 + 0x88) ==
         0) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)(**(longlong **)(FVar6.Data + (longlong)(int)uVar11 * 0x98 + 0x88) + 0x20))();
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// CreateMutation @ 14612aa40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FInitialValueMutation::CreateMutation
          (FInitialValueMutation *this,FEntityManager *param_1,FComponentMask *param_2)

{
  if (this->InitialValueCache != (FInitialValueCache *)0x0) {
    FComponentMask::Set(param_2,(FComponentTypeID)
                                *(ushort *)&this->BuiltInComponents->InitialValueIndex);
  }
  FComponentMask::Set(param_2,(FComponentTypeID)
                              (this->BuiltInComponents->Tags).HasAssignedInitialValue.Value);
  return;
}

// InitializeAllocation @ 14613e9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FInitialValueMutation::InitializeAllocation
          (FInitialValueMutation *this,FEntityAllocation *param_1,FComponentMask *param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  TTypeCompatibleBytes<unsigned_int> *pTVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStackY_e8 [32];
  <lambda_1> local_b8 [4];
  short local_b4;
  int local_b0;
  TBitArray<TFixedAllocator<12>_> local_ac;
  TTypeCompatibleBytes<unsigned_int> local_74 [4];
  TTypeCompatibleBytes<unsigned_int> local_64 [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_5c [2];
  TTypeCompatibleBytes<unsigned_int> local_54 [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_4c [2];
  int local_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_ac.NumBits = 0;
  local_ac.MaxBits = 0x180;
  Core::Private::
  BitwiseBinaryOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::BitwiseAND<TFixedAllocator<12>,TFixedAllocator<12>_>_::__l2::<lambda_1>_>
            (&param_2->Bits,&(this->AnyInitialValue).Bits,&local_ac,MinSize,local_b8);
  iVar8 = local_ac.NumBits;
  uVar10 = 0;
  uVar9 = local_ac.NumBits + 0x1f;
  local_44 = local_ac.NumBits;
  local_74[0].Pad[0] = local_ac.AllocatorInstance.InlineData[0].Pad[0];
  local_74[0].Pad[1] = local_ac.AllocatorInstance.InlineData[0].Pad[1];
  local_74[0].Pad[2] = local_ac.AllocatorInstance.InlineData[0].Pad[2];
  local_74[0].Pad[3] = local_ac.AllocatorInstance.InlineData[0].Pad[3];
  local_74[1].Pad[0] = local_ac.AllocatorInstance.InlineData[1].Pad[0];
  local_74[1].Pad[1] = local_ac.AllocatorInstance.InlineData[1].Pad[1];
  local_74[1].Pad[2] = local_ac.AllocatorInstance.InlineData[1].Pad[2];
  local_74[1].Pad[3] = local_ac.AllocatorInstance.InlineData[1].Pad[3];
  local_74[2].Pad[0] = local_ac.AllocatorInstance.InlineData[2].Pad[0];
  local_74[2].Pad[1] = local_ac.AllocatorInstance.InlineData[2].Pad[1];
  local_74[2].Pad[2] = local_ac.AllocatorInstance.InlineData[2].Pad[2];
  local_74[2].Pad[3] = local_ac.AllocatorInstance.InlineData[2].Pad[3];
  local_74[3].Pad[0] = local_ac.AllocatorInstance.InlineData[3].Pad[0];
  local_74[3].Pad[1] = local_ac.AllocatorInstance.InlineData[3].Pad[1];
  local_74[3].Pad[2] = local_ac.AllocatorInstance.InlineData[3].Pad[2];
  local_74[3].Pad[3] = local_ac.AllocatorInstance.InlineData[3].Pad[3];
  local_40 = local_ac.MaxBits;
  local_ac.NumBits = 0;
  local_ac.MaxBits = 0;
  local_64[0].Pad[0] = local_ac.AllocatorInstance.InlineData[4].Pad[0];
  local_64[0].Pad[1] = local_ac.AllocatorInstance.InlineData[4].Pad[1];
  local_64[0].Pad[2] = local_ac.AllocatorInstance.InlineData[4].Pad[2];
  local_64[0].Pad[3] = local_ac.AllocatorInstance.InlineData[4].Pad[3];
  local_64[1].Pad[0] = local_ac.AllocatorInstance.InlineData[5].Pad[0];
  local_64[1].Pad[1] = local_ac.AllocatorInstance.InlineData[5].Pad[1];
  local_64[1].Pad[2] = local_ac.AllocatorInstance.InlineData[5].Pad[2];
  local_64[1].Pad[3] = local_ac.AllocatorInstance.InlineData[5].Pad[3];
  aTStack_5c[0].Pad[0] = local_ac.AllocatorInstance.InlineData[6].Pad[0];
  aTStack_5c[0].Pad[1] = local_ac.AllocatorInstance.InlineData[6].Pad[1];
  aTStack_5c[0].Pad[2] = local_ac.AllocatorInstance.InlineData[6].Pad[2];
  aTStack_5c[0].Pad[3] = local_ac.AllocatorInstance.InlineData[6].Pad[3];
  aTStack_5c[1].Pad[0] = local_ac.AllocatorInstance.InlineData[7].Pad[0];
  aTStack_5c[1].Pad[1] = local_ac.AllocatorInstance.InlineData[7].Pad[1];
  aTStack_5c[1].Pad[2] = local_ac.AllocatorInstance.InlineData[7].Pad[2];
  aTStack_5c[1].Pad[3] = local_ac.AllocatorInstance.InlineData[7].Pad[3];
  local_54[0].Pad[0] = local_ac.AllocatorInstance.InlineData[8].Pad[0];
  local_54[0].Pad[1] = local_ac.AllocatorInstance.InlineData[8].Pad[1];
  local_54[0].Pad[2] = local_ac.AllocatorInstance.InlineData[8].Pad[2];
  local_54[0].Pad[3] = local_ac.AllocatorInstance.InlineData[8].Pad[3];
  local_54[1].Pad[0] = local_ac.AllocatorInstance.InlineData[9].Pad[0];
  local_54[1].Pad[1] = local_ac.AllocatorInstance.InlineData[9].Pad[1];
  local_54[1].Pad[2] = local_ac.AllocatorInstance.InlineData[9].Pad[2];
  local_54[1].Pad[3] = local_ac.AllocatorInstance.InlineData[9].Pad[3];
  aTStack_4c[0].Pad[0] = local_ac.AllocatorInstance.InlineData[10].Pad[0];
  aTStack_4c[0].Pad[1] = local_ac.AllocatorInstance.InlineData[10].Pad[1];
  aTStack_4c[0].Pad[2] = local_ac.AllocatorInstance.InlineData[10].Pad[2];
  aTStack_4c[0].Pad[3] = local_ac.AllocatorInstance.InlineData[10].Pad[3];
  aTStack_4c[1].Pad[0] = local_ac.AllocatorInstance.InlineData[0xb].Pad[0];
  aTStack_4c[1].Pad[1] = local_ac.AllocatorInstance.InlineData[0xb].Pad[1];
  aTStack_4c[1].Pad[2] = local_ac.AllocatorInstance.InlineData[0xb].Pad[2];
  aTStack_4c[1].Pad[3] = local_ac.AllocatorInstance.InlineData[0xb].Pad[3];
  if (uVar9 >> 5 != 0) {
    pTVar4 = local_74;
LAB_14613ea71:
    if (*(int *)pTVar4->Pad == 0) goto code_r0x00014613ea7a;
    local_b0 = 0;
    bVar3 = *(int *)local_74[uVar10].Pad != 0;
    if (bVar3) {
      for (; (*(uint *)local_74[uVar10].Pad >> local_b0 & 1) == 0; local_b0 = local_b0 + 1) {
      }
    }
    iVar7 = 0x20;
    if (bVar3) {
      iVar7 = local_b0;
    }
    uVar9 = iVar7 + (int)uVar10 * 0x20;
    uVar10 = (ulonglong)uVar9;
    if ((iVar8 <= (int)uVar9) || (uVar9 == 0xffffffff)) goto LAB_14613ea84;
    if (((uVar9 & 0xffff0000) != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(BitIndex & 0xFFFF0000) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                           ,0xba,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    goto LAB_14613ea89;
  }
LAB_14613ea84:
  uVar10 = 0xffff;
LAB_14613ea89:
  local_b4 = (short)uVar10;
  iVar8 = *(int *)&(this->InitialValueTypeToProcessor).field_0x48;
  if (iVar8 != 0) {
    puVar5 = *(undefined1 **)&(this->InitialValueTypeToProcessor).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->InitialValueTypeToProcessor).field_0x38;
    }
    iVar8 = *(int *)(puVar5 + ((longlong)iVar8 - 1U & uVar10 & 0xffff) * 4);
    iVar7 = iVar8;
    if (iVar8 != -1) {
      do {
        iVar8 = *(int *)(*(longlong *)&this->InitialValueTypeToProcessor + 8 +
                        (longlong)iVar7 * 0x10);
        if (*(short *)(*(longlong *)&this->InitialValueTypeToProcessor + (longlong)iVar7 * 0x10) ==
            local_b4) break;
        iVar7 = iVar8;
      } while (iVar8 != -1);
    }
    if (iVar7 != -1) {
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)&this->InitialValueTypeToProcessor + 4 +
                         (longlong)iVar7 * 0x10);
        uVar6 = 0;
        if ((int)uVar9 < GInitialValueProcessors.ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FVar2.Data = GInitialValueProcessors.AllocatorInstance.Data;
        bVar3 = FEntityComponentFilter::IsValid
                          ((FEntityComponentFilter *)
                           (GInitialValueProcessors.AllocatorInstance.Data +
                           (longlong)(int)uVar9 * 0x98 + 8));
        if ((!bVar3) ||
           (bVar3 = FEntityComponentFilter::Match
                              ((FEntityComponentFilter *)
                               (FVar2.Data + (longlong)(int)uVar9 * 0x98 + 8),param_2), bVar3)) {
          if ((*(longlong *)(FVar2.Data + (longlong)(int)uVar9 * 0x98 + 0x88) == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (**(code **)(**(longlong **)(FVar2.Data + (longlong)(int)uVar9 * 0x98 + 0x88) + 0x18))
                    (*(longlong **)(FVar2.Data + (longlong)(int)uVar9 * 0x98 + 0x88),param_1,param_2
                    );
        }
        if (iVar8 == -1) break;
        iVar7 = iVar8;
        while (iVar8 = *(int *)(*(longlong *)&this->InitialValueTypeToProcessor + 8 +
                               (longlong)iVar7 * 0x10),
              *(short *)(*(longlong *)&this->InitialValueTypeToProcessor + (longlong)iVar7 * 0x10)
              != local_b4) {
          iVar7 = iVar8;
          if (iVar8 == -1) {
            return;
          }
        }
      }
    }
  }
  return;
code_r0x00014613ea7a:
  uVar6 = (int)uVar10 + 1;
  uVar10 = (ulonglong)uVar6;
  pTVar4 = pTVar4 + 1;
  if ((int)(uVar9 >> 5) <= (int)uVar6) goto LAB_14613ea84;
  goto LAB_14613ea71;
}

