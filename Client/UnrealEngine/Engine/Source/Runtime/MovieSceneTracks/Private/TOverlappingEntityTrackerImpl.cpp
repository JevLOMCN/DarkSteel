// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 40

// ProcessInvalidatedOutputs<UMovieSceneInterrogatedPropertyInstantiatorSystem_&> @ 1465f3ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
::ProcessInvalidatedOutputs<UMovieSceneInterrogatedPropertyInstantiatorSystem_&>
          (TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
           *this,UMovieSceneEntitySystemLinker *param_1,
          UMovieSceneInterrogatedPropertyInstantiatorSystem *param_2)

{
  ForElementType<UE::MovieScene::FMovieSceneEntityID> FVar1;
  FMovieSceneEntityID *pFVar2;
  ushort uVar3;
  undefined2 uVar4;
  code *pcVar5;
  byte bVar6;
  UMovieSceneEntitySystemLinker *pUVar7;
  bool bVar8;
  undefined1 uVar9;
  FMovieSceneBlenderSystemID FVar10;
  undefined4 uVar11;
  FBuiltInComponentTypes *pFVar12;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *pTVar13;
  UMovieSceneBlenderSystem *this_00;
  undefined7 extraout_var;
  longlong lVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined1 *puVar17;
  int iVar18;
  TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
  *pTVar19;
  ForElementType<UE::MovieScene::FMovieSceneEntityID> FVar20;
  ForElementType<unsigned_int> FVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  FComponentTypeID FVar24;
  ForElementType<unsigned_int> FVar25;
  TOverlappingEntityInput<UE::MovieScene::FInterrogationKey> *pTVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  FInterrogationKey *pFVar30;
  undefined1 auStackY_158 [32];
  undefined1 local_108 [4];
  uint local_104;
  uint local_100;
  ushort local_fa;
  uint local_f8;
  uint local_f4;
  FMovieSceneBlendChannelID local_f0;
  TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_e8;
  short sStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  UMovieSceneInterrogatedPropertyInstantiatorSystem *local_d0;
  ulonglong local_c8;
  TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_c0;
  short sStack_b8;
  undefined2 uStack_b6;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  UMovieSceneEntitySystemLinker *local_a8;
  int local_a0;
  int local_9c;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_98;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_88;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_78;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_68;
  undefined1 local_58 [16];
  ForElementType<UE::MovieScene::FMovieSceneEntityID> local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar27 = 0;
  local_d0 = param_2;
  local_a8 = param_1;
  if ((this->InvalidatedOutputs).NumBits != 0) {
    local_48 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0;
    local_40 = 0;
    local_3c = 8;
    pFVar12 = FBuiltInComponentTypes::Get();
    FVar24.Value = (pFVar12->Tags).RestoreState.Value;
    local_fa = FVar24.Value;
    if ((0xfffe < (this->InvalidatedOutputs).NumBits) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InvalidatedOutputs.Num() < NO_OUTPUT",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                           ,0xf2,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_f8 = 0;
    uVar29 = (this->InvalidatedOutputs).NumBits;
    local_c8 = CONCAT44(local_c8._4_4_,1);
    local_104 = 0;
    local_100 = 0;
    uVar22 = uVar27;
    if (uVar29 != 0) {
      FVar25 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
      uVar22 = (ulonglong)uVar29;
      if (FVar25 == (ForElementType<unsigned_int>)0x0) {
        FVar25 = (ForElementType<unsigned_int>)&this->InvalidatedOutputs;
      }
      uVar16 = *(uint *)FVar25;
      uVar28 = uVar27;
      while (uVar16 == 0) {
        local_100 = (int)uVar28 + 0x20;
        uVar28 = (ulonglong)local_100;
        iVar18 = (int)uVar27;
        local_f8 = iVar18 + 1;
        uVar27 = (ulonglong)local_f8;
        local_104 = uVar29;
        if ((int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_f8)
        goto LAB_1465f4141;
        uVar16 = *(uint *)((uchar *)((longlong)FVar25 + 4) + (longlong)iVar18 * 4);
      }
      local_c8 = (ulonglong)(-uVar16 & uVar16);
      uVar27 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_a0 = (int)lVar14;
      local_104 = (local_100 - 1) + local_a0;
      if ((int)uVar29 < (int)local_104) {
        local_104 = uVar29;
      }
      uVar22 = (ulonglong)local_104;
    }
LAB_1465f4141:
    if ((int)uVar22 < (int)uVar29) {
      local_f4 = 0xffffffff;
      do {
        pTVar19 = &this->OutputToEntity;
        local_40 = 0;
        if (local_3c < 0) {
          Core::Private::
          ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_>
                    (2,2,0,(ForElementType<UE::MovieScene::FMovieSceneEntityID> *)local_58,0,
                     &local_3c);
        }
        pUVar7 = local_a8;
        iVar18 = *(int *)&(this->OutputToEntity).field_0x48;
        sStack_b8 = (short)uVar22;
        iStack_b4 = -1;
        if (iVar18 == 0) {
          local_b0 = -1;
        }
        else {
          puVar23 = *(undefined1 **)&(this->OutputToEntity).field_0x40;
          puVar17 = &(this->OutputToEntity).field_0x38;
          if (puVar23 != (undefined1 *)0x0) {
            puVar17 = puVar23;
          }
          local_b0 = *(int *)(puVar17 + ((longlong)iVar18 - 1U & uVar22 & 0xffff) * 4);
          iStack_b4 = local_b0;
          if (local_b0 != -1) {
            do {
              local_b0 = *(int *)(*(longlong *)pTVar19 + 4 + (longlong)iStack_b4 * 0xc);
              if (*(short *)(*(longlong *)pTVar19 + (longlong)iStack_b4 * 0xc) == (short)uVar22)
              break;
              iStack_b4 = local_b0;
            } while (local_b0 != -1);
          }
        }
        uStack_d4 = uStack_ac;
        local_d8 = local_b0;
        _sStack_e0 = _sStack_b8;
        iStack_dc = iStack_b4;
        iVar18 = iStack_b4;
        local_c0 = pTVar19;
        if (iStack_b4 != -1) {
          do {
            uVar3 = *(ushort *)(*(longlong *)pTVar19 + 2 + (longlong)iVar18 * 0xc);
            iStack_dc = iVar18;
            if ((uVar3 == 0xffff) ||
               (uVar29 = (uint)uVar3,
               *(int *)&(pUVar7->EntityManager).EntityLocations.field_0x28 <= (int)uVar29)) {
LAB_1465f43a0:
              local_e8 = pTVar19;
              bVar8 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_1936009250870394630>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                                 ,0xfa,"Linker->EntityManager.IsAllocated(Inputs.Value())");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar2 = (FMovieSceneEntityID *)(*(longlong *)local_e8 + 2 + (longlong)iVar18 * 0xc);
              if (*(int *)&(this->EntityToOutput).field_0x8 !=
                  *(int *)&(this->EntityToOutput).field_0x34) {
                TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                ::RemoveImpl<UE::MovieScene::FMovieSceneEntityID>
                          ((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                            *)this,(uint)pFVar2->Value,pFVar2);
              }
              TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
              ::TKeyIterator::RemoveCurrent((TKeyIterator *)&local_e8);
              pTVar19 = local_e8;
            }
            else {
              if (*(int *)&(pUVar7->EntityManager).EntityLocations.field_0x28 <= (int)uVar29) {
                local_e8 = pTVar19;
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5c6,L"");
                pTVar19 = local_e8;
                if (bVar8) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              puVar23 = *(undefined1 **)&(pUVar7->EntityManager).EntityLocations.field_0x20;
              puVar17 = &(pUVar7->EntityManager).EntityLocations.field_0x10;
              if (puVar23 != (undefined1 *)0x0) {
                puVar17 = puVar23;
              }
              if ((*(uint *)(puVar17 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar29 & 0x1f) & 1) == 0)
              goto LAB_1465f43a0;
              FVar20 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)local_58;
              if (local_48 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
                FVar20 = local_48;
              }
              FVar1 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)
                      (*(longlong *)pTVar19 + 2 + (longlong)iVar18 * 0xc);
              local_e8 = pTVar19;
              if ((ulonglong)FVar20 <= (ulonglong)FVar1) {
                FVar20 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)local_58;
                if (local_48 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
                  FVar20 = local_48;
                }
                if ((ulonglong)FVar1 < (ulonglong)((longlong)FVar20 + (longlong)local_3c * 2)) {
                  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    );
                  if (bVar8) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                }
              }
              if (local_40 == local_3c) {
                local_40 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_>
                                     (0x202,(ForElementType<UE::MovieScene::FMovieSceneEntityID> *)
                                            local_58,&local_3c);
              }
              lVar14 = (longlong)local_40;
              FVar20 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)local_58;
              if (local_48 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
                FVar20 = local_48;
              }
              local_40 = local_40 + 1;
              *(undefined2 *)((longlong)FVar20 + lVar14 * 2) = *(undefined2 *)FVar1;
              pTVar19 = local_e8;
            }
            iStack_dc = local_d8;
            if (local_d8 == -1) break;
            do {
              iVar18 = *(int *)(*(longlong *)pTVar19 + 4 + (longlong)iStack_dc * 0xc);
              local_d8 = iVar18;
              if (*(short *)(*(longlong *)pTVar19 + (longlong)iStack_dc * 0xc) == sStack_e0) break;
              iStack_dc = iVar18;
            } while (iVar18 != -1);
            iVar18 = iStack_dc;
          } while (iStack_dc != -1);
          uVar22 = (ulonglong)local_104;
          FVar24.Value = local_fa;
        }
        iVar18 = local_40;
        pFVar30 = (FInterrogationKey *)((uVar22 & 0xffff) * 0x1c + *(longlong *)&this->Outputs);
        local_e8 = pTVar19;
        if (local_40 < 1) {
          if (*(short *)((longlong)&pFVar30[2].InterrogationIndex + 2) != -1) {
            this_00 = (UMovieSceneBlenderSystem *)
                      FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar30 + 1));
            if (this_00 != (UMovieSceneBlenderSystem *)0x0) {
              uVar4 = *(undefined2 *)((longlong)&pFVar30[2].InterrogationIndex + 2);
              FVar10 = UMovieSceneBlenderSystem::GetBlenderSystemID(this_00);
              local_f0.ChannelID = uVar4;
              local_f0.SystemID.Value = *(uchar *)CONCAT71(extraout_var,FVar10.Value);
              UMovieSceneBlenderSystem::ReleaseBlendChannel(this_00,local_f0);
            }
            FEntityManager::AddComponents
                      ((FEntityManager *)(local_d0->_padding_ + 0x28),
                       (FMovieSceneEntityID)(ushort)pFVar30[2].InterrogationIndex,
                       &local_d0->BuiltInComponents->FinishedMask);
          }
        }
        else {
          FVar20 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)local_58;
          if (local_48 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
            FVar20 = local_48;
          }
          FVar1 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)
                  ((longlong)FVar20 + (longlong)local_40 * 2);
          while( true ) {
            if (local_40 != iVar18) {
              local_108[0] = 0;
              `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_108);
            }
            if (FVar20 == FVar1) {
              uVar9 = 0;
              goto LAB_1465f44ce;
            }
            bVar8 = FEntityManager::HasComponent
                              (&local_a8->EntityManager,(FMovieSceneEntityID)*(ushort *)FVar20,
                               FVar24);
            if (bVar8) break;
            FVar20 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)((longlong)FVar20 + 2);
          }
          uVar9 = 1;
LAB_1465f44ce:
          *(undefined1 *)&pFVar30[3].Channel.Value = uVar9;
          uVar29 = (uint)(uVar22 & 0xffff);
          if ((int)uVar29 < (this->NewOutputs).NumBits) {
            if ((this->NewOutputs).NumBits <= (int)uVar29) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            FVar25 = (this->NewOutputs).AllocatorInstance.SecondaryData;
            FVar21 = (ForElementType<unsigned_int>)&this->NewOutputs;
            if (FVar25 != (ForElementType<unsigned_int>)0x0) {
              FVar21 = FVar25;
            }
            if ((*(uint *)((longlong)FVar21 + ((uVar22 & 0xffff) >> 5) * 4) >> (uVar29 & 0x1f) & 1)
                != 0) {
              iVar18 = pFVar30[3].Channel.Value;
              pTVar13 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::
                        TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int><TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                                  (&local_78,
                                   (TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                                    *)local_58);
              local_98.DataPtr = pTVar13->DataPtr;
              local_98.ArrayNum = pTVar13->ArrayNum;
              local_98._12_4_ = *(undefined4 *)&pTVar13->field_0xc;
              UMovieSceneInterrogatedPropertyInstantiatorSystem::UpdateOutput
                        (local_d0,*pFVar30,&local_98,(FPropertyInfo *)(pFVar30 + 1),
                         (FEntityOutputAggregate)SUB41(iVar18,0));
              goto LAB_1465f4608;
            }
          }
          iVar18 = pFVar30[3].Channel.Value;
          pTVar13 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::
                    TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int><TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                              (&local_68,
                               (TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                                *)local_58);
          local_88.DataPtr = pTVar13->DataPtr;
          local_88.ArrayNum = pTVar13->ArrayNum;
          local_88._12_4_ = *(undefined4 *)&pTVar13->field_0xc;
          UMovieSceneInterrogatedPropertyInstantiatorSystem::UpdateOutput
                    (local_d0,*pFVar30,&local_88,(FPropertyInfo *)(pFVar30 + 1),
                     (FEntityOutputAggregate)SUB41(iVar18,0));
        }
LAB_1465f4608:
        if (local_40 == 0) {
          pTVar26 = (TOverlappingEntityInput<UE::MovieScene::FInterrogationKey> *)
                    ((uVar22 & 0xffff) * 0x1c + *(longlong *)&this->Outputs);
          if (*(int *)&(this->KeyToOutput).field_0x8 != *(int *)&(this->KeyToOutput).field_0x34) {
            TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short,0>,FDefaultSetAllocator>
            ::
            RemoveImpl<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>_>
                      ((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short,0>,FDefaultSetAllocator>
                        *)&this->KeyToOutput,
                       *(uint *)&(pTVar26->Key).field_0x4 ^ *(uint *)&pTVar26->Key,pTVar26);
          }
          lVar14 = *(longlong *)&this->Outputs;
          puVar23 = &(this->Outputs).field_0x10;
          uVar22 = uVar22 & 0xffff;
          iVar18 = (int)uVar22;
          bVar6 = (byte)uVar22 & 0x1f;
          uVar29 = 1 << bVar6 | 1U >> 0x20 - bVar6;
          if (*(int *)&(this->Outputs).field_0x28 <= iVar18) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L"");
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          puVar17 = *(undefined1 **)&(this->Outputs).field_0x20;
          puVar15 = puVar23;
          if (puVar17 != (undefined1 *)0x0) {
            puVar15 = puVar17;
          }
          if ((*(uint *)(puVar15 + (uVar22 >> 5) * 4) & uVar29) == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0xc5,L"");
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (*(int *)&(this->Outputs).field_0x34 != 0) {
            *(int *)((longlong)*(int *)&(this->Outputs).field_0x30 * 0x1c + lVar14) = iVar18;
          }
          *(undefined4 *)((longlong)iVar18 * 0x1c + lVar14) = 0xffffffff;
          if (*(int *)&(this->Outputs).field_0x34 < 1) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = *(undefined4 *)&(this->Outputs).field_0x30;
          }
          *(undefined4 *)((longlong)iVar18 * 0x1c + 4 + lVar14) = uVar11;
          puVar17 = &(this->Outputs).field_0x34;
          *(int *)puVar17 = *(int *)puVar17 + 1;
          *(int *)&(this->Outputs).field_0x30 = iVar18;
          if (*(int *)&(this->Outputs).field_0x28 <= iVar18) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L"");
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          puVar17 = *(undefined1 **)&(this->Outputs).field_0x20;
          if (puVar17 != (undefined1 *)0x0) {
            puVar23 = puVar17;
          }
          *(uint *)(puVar23 + (uVar22 >> 5) * 4) = *(uint *)(puVar23 + (uVar22 >> 5) * 4) & ~uVar29;
        }
        FVar25 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
        uVar29 = (this->InvalidatedOutputs).NumBits;
        uVar27 = (ulonglong)(int)local_f8;
        local_f4 = ~(uint)local_c8 & local_f4;
        FVar21 = (ForElementType<unsigned_int>)&this->InvalidatedOutputs;
        if (FVar25 != (ForElementType<unsigned_int>)0x0) {
          FVar21 = FVar25;
        }
        uVar16 = local_f4 & *(uint *)((longlong)FVar21 + uVar27 * 4);
        while (uVar16 == 0) {
          local_100 = local_100 + 0x20;
          iVar18 = (int)uVar27;
          local_f8 = iVar18 + 1;
          uVar27 = (ulonglong)local_f8;
          local_104 = uVar29;
          if ((int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_f8)
          goto LAB_1465f4816;
          uVar16 = *(uint *)((longlong)FVar21 + 4 + (longlong)iVar18 * 4);
          local_f4 = 0xffffffff;
        }
        local_c8 = CONCAT44(local_c8._4_4_,-uVar16 & uVar16);
        uVar27 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_9c = (int)lVar14;
        local_104 = (local_100 - 1) + local_9c;
        if ((int)uVar29 < (int)local_104) {
          local_104 = uVar29;
        }
LAB_1465f4816:
        uVar22 = (ulonglong)local_104;
      } while ((int)local_104 < (this->InvalidatedOutputs).NumBits);
    }
    if (local_48 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
      FMemory::Free((void *)local_48);
    }
  }
  iVar18 = (this->InvalidatedOutputs).MaxBits;
  (this->InvalidatedOutputs).NumBits = 0;
  if ((iVar18 < 0) || (0x80 < iVar18)) {
    (this->InvalidatedOutputs).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->InvalidatedOutputs,0);
  }
  iVar18 = (this->NewOutputs).MaxBits;
  (this->NewOutputs).NumBits = 0;
  if ((iVar18 < 0) || (0x80 < iVar18)) {
    (this->NewOutputs).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->NewOutputs,0);
  }
  return;
}

// VisitActiveAllocationImpl<UE::MovieScene::FInterrogationKey> @ 14660b510

void __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
::VisitActiveAllocationImpl<UE::MovieScene::FInterrogationKey>
          (TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
           *this,FEntityAllocation *param_1,
          TComponentPtr<UE::MovieScene::FInterrogationKey_const_> param_2)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBuiltInComponentTypes *pFVar4;
  FComponentHeader *pFVar5;
  FComponentHeader *pFVar6;
  FComponentHeader *pFVar7;
  FMovieSceneEntityID *pFVar8;
  FComponentHeader *pFVar9;
  ulonglong uVar10;
  FInterrogationKey local_res8;
  FInterrogationKey local_res10;
  
  if ((this->bIsInitialized == false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                         ,0x182,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar10 = (ulonglong)param_1->Size;
  pFVar8 = param_1->EntityIDs;
  pFVar4 = FBuiltInComponentTypes::Get();
  pFVar5 = param_1->ComponentHeaders;
  pFVar9 = (FComponentHeader *)0x0;
  pFVar7 = pFVar5 + param_1->NumComponents;
  for (; (pFVar6 = pFVar9, pFVar5 != pFVar7 &&
         (pFVar6 = pFVar5, (pFVar5->ComponentType).Value != (pFVar4->Tags).NeedsLink.Value));
      pFVar5 = pFVar5 + 1) {
  }
  pFVar4 = FBuiltInComponentTypes::Get();
  pFVar5 = param_1->ComponentHeaders;
  pFVar7 = pFVar5 + param_1->NumComponents;
  do {
    if (pFVar5 == pFVar7) {
LAB_14660b5e3:
      if (uVar10 != 0) {
        do {
          local_res10 = param_2.ComponentPtr[(longlong)pFVar9];
          MakeOutput(this,(FMovieSceneEntityID)pFVar8->Value,
                     (TOverlappingEntityInput<UE::MovieScene::FInterrogationKey> *)&local_res10,
                     pFVar6 != (FComponentHeader *)0x0);
          pFVar9 = (FComponentHeader *)((longlong)&pFVar9->_padding_ + 1);
          pFVar8 = pFVar8 + 1;
        } while ((longlong)pFVar9 < (longlong)uVar10);
      }
      return;
    }
    if ((pFVar5->ComponentType).Value == (pFVar4->Tags).RestoreState.Value) {
      if (pFVar5 != (FComponentHeader *)0x0) {
        if (uVar10 == 0) {
          return;
        }
        do {
          local_res8 = param_2.ComponentPtr[(longlong)pFVar9];
          uVar3 = MakeOutput(this,(FMovieSceneEntityID)pFVar8->Value,
                             (TOverlappingEntityInput<UE::MovieScene::FInterrogationKey> *)
                             &local_res8,pFVar6 != (FComponentHeader *)0x0);
          pFVar8 = pFVar8 + 1;
          pFVar9 = (FComponentHeader *)((longlong)&pFVar9->_padding_ + 1);
          *(undefined1 *)((ulonglong)uVar3 * 0x1c + 0x18 + *(longlong *)&this->Outputs) = 1;
        } while ((longlong)pFVar9 < (longlong)uVar10);
        return;
      }
      goto LAB_14660b5e3;
    }
    pFVar5 = pFVar5 + 1;
  } while( true );
}

// ~TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey> @ 14661c060

void __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
::
~TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
          (TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
           *this)

{
  ForElementType<unsigned_int> FVar1;
  void *pvVar2;
  
  FVar1 = (this->NewOutputs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>::FOutput,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>::FOutput,FDefaultSparseArrayAllocator>
            (&this->Outputs);
  *(undefined4 *)&(this->KeyToOutput).field_0x48 = 0;
  pvVar2 = *(void **)&(this->KeyToOutput).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyToOutput);
  *(undefined4 *)&(this->OutputToEntity).field_0x48 = 0;
  pvVar2 = *(void **)&(this->OutputToEntity).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OutputToEntity);
  *(undefined4 *)&(this->EntityToOutput).field_0x48 = 0;
  pvVar2 = *(void **)&(this->EntityToOutput).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// CreateOutputByKey @ 1466552e0

ushort __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
::CreateOutputByKey(TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
                    *this,TOverlappingEntityInput<UE::MovieScene::FInterrogationKey> *param_1)

{
  TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>::FOutput,FDefaultSparseArrayAllocator>
  *this_00;
  TBitArray<FDefaultBitArrayAllocator> *this_01;
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  ForElementType<unsigned_int> FVar10;
  ushort local_res8 [4];
  FSparseArrayAllocationInfo local_68;
  TOverlappingEntityInput<UE::MovieScene::FInterrogationKey> *local_58;
  ushort *local_50;
  TTuple<UE::MovieScene::FInterrogationKey> local_48;
  TTuple<UE::MovieScene::FInterrogationKey> TStack_40;
  TTuple<UE::MovieScene::FInterrogationKey> local_38;
  uint local_30;
  
  puVar8 = TMapBase<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short,0>_>
           ::Find((TMapBase<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short,0>_>
                   *)&this->KeyToOutput,param_1);
  if ((puVar8 == (ushort *)0x0) || (local_res8[0] = *puVar8, local_res8[0] == 0xffff)) {
    local_48 = param_1->Key;
    this_00 = &this->Outputs;
    iVar6 = *(int *)&(this->Outputs).field_0x34;
    TStack_40 = (TTuple<UE::MovieScene::FInterrogationKey>)0x0;
    local_38 = (TTuple<UE::MovieScene::FInterrogationKey>)0xffffffffffffffff;
    local_30 = local_30 & 0xffffff00;
    if (iVar6 == 0) {
      iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1c,4,1,(ForAnyElementType *)this_00,(int *)&(this->Outputs).field_0x8,
                         (int *)&(this->Outputs).field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Outputs).field_0x10,false);
    }
    else {
      iVar7 = *(int *)&(this->Outputs).field_0x30;
      iVar6 = iVar6 + -1;
      iVar2 = *(int *)((longlong)iVar7 * 0x1c + 4 + *(longlong *)&this_00->field_0x0);
      *(int *)&(this->Outputs).field_0x30 = iVar2;
      *(int *)&(this->Outputs).field_0x34 = iVar6;
      if (iVar6 != 0) {
        *(undefined4 *)((longlong)iVar2 * 0x1c + *(longlong *)&this_00->field_0x0) = 0xffffffff;
      }
    }
    TSparseArrayBase<28,4,FDefaultSparseArrayAllocator>::AllocateIndex
              ((TSparseArrayBase<28,4,FDefaultSparseArrayAllocator> *)this_00,&local_68,iVar7);
    if (local_68.Pointer != (TTuple<UE::MovieScene::FInterrogationKey> *)0x0) {
      *(TTuple<UE::MovieScene::FInterrogationKey> *)local_68.Pointer = local_48;
      *(TTuple<UE::MovieScene::FInterrogationKey> *)((longlong)local_68.Pointer + 8) = TStack_40;
      *(TTuple<UE::MovieScene::FInterrogationKey> *)((longlong)local_68.Pointer + 0x10) = local_38;
      *(uint *)((longlong)local_68.Pointer + 0x18) = local_30;
    }
    if (0xfffe < local_68.Index) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < NO_OUTPUT",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                         ,0x1d6,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    uVar9 = local_68.Index & 0xffff;
    this_01 = &this->NewOutputs;
    local_res8[0] = (ushort)local_68.Index;
    iVar6 = (uVar9 - (this->NewOutputs).NumBits) + 1;
    if (0 < iVar6) {
      iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_01,iVar6);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(this_01,iVar7,iVar6,false);
      uVar9 = (uint)local_res8[0];
    }
    if ((this->NewOutputs).NumBits <= (int)uVar9) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    FVar10 = (this->NewOutputs).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<unsigned_int>)0x0) {
      FVar10 = (ForElementType<unsigned_int>)this_01;
    }
    puVar1 = (uint *)((longlong)FVar10 + (ulonglong)(uVar9 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
    local_50 = local_res8;
    local_58 = param_1;
    TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>_const_&,unsigned_short_const_&>_>
              ((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>,unsigned_short,0>,FDefaultSetAllocator>
                *)&this->KeyToOutput,
               (TPairInitializer<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FInterrogationKey>_const_&,unsigned_short_const_&>
                *)&stack0x00000018,(bool *)&local_58);
  }
  return local_res8[0];
}

// FindOutput @ 146672410

FPropertyInfo * __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
::FindOutput(TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
             *this,FMovieSceneEntityID param_1)

{
  longlong lVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPropertyInfo *pFVar6;
  undefined1 *puVar7;
  ushort *puVar8;
  
  if (*(int *)&(this->EntityToOutput).field_0x8 != *(int *)&(this->EntityToOutput).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EntityToOutput).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EntityToOutput).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + ((ulonglong)(*(int *)&(this->EntityToOutput).field_0x48 - 1) &
                              (ulonglong)param_1.Value) * 4);
    if (iVar5 != -1) {
      while (lVar1 = *(longlong *)&this->EntityToOutput + (longlong)iVar5 * 0xc,
            *(ushort *)(*(longlong *)&this->EntityToOutput + (longlong)iVar5 * 0xc) != param_1.Value
            ) {
        iVar5 = *(int *)(lVar1 + 4);
        if (iVar5 == -1) {
          return (FPropertyInfo *)0x0;
        }
      }
      puVar8 = (ushort *)(lVar1 + 2);
      if (lVar1 == 0) {
        puVar8 = (ushort *)0x0;
      }
      if (puVar8 != (ushort *)0x0) {
        uVar2 = *puVar8;
        if ((int)(uint)uVar2 < *(int *)&(this->Outputs).field_0x28) {
          if (*(int *)&(this->Outputs).field_0x28 <= (int)(uint)uVar2) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar6 = (FPropertyInfo *)(*pcVar3)();
              return pFVar6;
            }
          }
          puVar7 = *(undefined1 **)&(this->Outputs).field_0x20;
          if (puVar7 == (undefined1 *)0x0) {
            puVar7 = &(this->Outputs).field_0x10;
          }
          if ((*(uint *)(puVar7 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
            return (FPropertyInfo *)(*(longlong *)&this->Outputs + 8 + (ulonglong)*puVar8 * 0x1c);
          }
        }
        bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1936009250870394542>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                           ,0x152,"Outputs.IsValidIndex(*OutputIndex)");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FPropertyInfo *)(*pcVar3)();
          return pFVar6;
        }
      }
    }
  }
  return (FPropertyInfo *)0x0;
}

// MakeOutput @ 1466a7ee0

ushort __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
::MakeOutput(TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
             *this,FMovieSceneEntityID param_1,
            TOverlappingEntityInput<UE::MovieScene::FInterrogationKey> *param_2,bool param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong lVar2;
  uint *puVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  ForElementType<unsigned_int> FVar9;
  int iVar10;
  undefined1 *puVar11;
  ushort local_res8 [4];
  FMovieSceneEntityID local_res10 [4];
  undefined1 local_58 [8];
  FMovieSceneEntityID *local_50;
  ushort *local_48;
  ushort *local_40;
  FMovieSceneEntityID *local_38;
  
  if (*(int *)&(this->EntityToOutput).field_0x8 != *(int *)&(this->EntityToOutput).field_0x34) {
    puVar11 = *(undefined1 **)&(this->EntityToOutput).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->EntityToOutput).field_0x38;
    }
    iVar10 = *(int *)(puVar11 +
                     ((ulonglong)(*(int *)&(this->EntityToOutput).field_0x48 - 1) &
                     (ulonglong)param_1.Value) * 4);
    if (iVar10 != -1) {
      do {
        lVar2 = *(longlong *)&this->EntityToOutput + (longlong)iVar10 * 0xc;
        if (*(ushort *)(*(longlong *)&this->EntityToOutput + (longlong)iVar10 * 0xc) ==
            param_1.Value) {
          puVar8 = (ushort *)(lVar2 + 2);
          if (lVar2 == 0) {
            puVar8 = (ushort *)0x0;
          }
          if (puVar8 != (ushort *)0x0) {
            uVar6 = *puVar8;
            goto LAB_1466a7f4f;
          }
          break;
        }
        iVar10 = *(int *)(lVar2 + 4);
      } while (iVar10 != -1);
    }
  }
  uVar6 = 0xffff;
LAB_1466a7f4f:
  local_res10[0].Value = param_1.Value;
  local_res8[0] = CreateOutputByKey(this,param_2);
  if (uVar6 == local_res8[0]) {
    if (param_3) {
      pTVar1 = &this->InvalidatedOutputs;
      iVar10 = ((uint)local_res8[0] - (this->InvalidatedOutputs).NumBits) + 1;
      if (0 < iVar10) {
        iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar1,iVar10);
        TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar1,iVar7,iVar10,false);
      }
      uVar6 = local_res8[0];
      if ((this->InvalidatedOutputs).NumBits <= (int)(uint)local_res8[0]) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return uVar6;
        }
      }
      FVar9 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)pTVar1;
      }
      puVar3 = (uint *)((longlong)FVar9 + (ulonglong)(uVar6 >> 5) * 4);
      *puVar3 = *puVar3 | 1 << ((byte)uVar6 & 0x1f);
      return local_res8[0];
    }
  }
  else {
    if (uVar6 != 0xffff) {
      pTVar1 = &this->InvalidatedOutputs;
      iVar10 = ((uint)uVar6 - (this->InvalidatedOutputs).NumBits) + 1;
      if (0 < iVar10) {
        iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar1,iVar10);
        TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar1,iVar7,iVar10,false);
      }
      if ((this->InvalidatedOutputs).NumBits <= (int)(uint)uVar6) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return uVar6;
        }
      }
      FVar9 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)pTVar1;
      }
      puVar3 = (uint *)((longlong)FVar9 + (ulonglong)(uVar6 >> 5) * 4);
      *puVar3 = *puVar3 | 1 << ((byte)uVar6 & 0x1f);
      TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
      ::Remove(&this->OutputToEntity,uVar6,local_res10);
      if (*(int *)&(this->EntityToOutput).field_0x8 != *(int *)&(this->EntityToOutput).field_0x34) {
        TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
        ::RemoveImpl<UE::MovieScene::FMovieSceneEntityID>
                  ((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                    *)this,(uint)local_res10[0].Value,local_res10);
      }
    }
    pTVar1 = &this->InvalidatedOutputs;
    iVar10 = ((uint)local_res8[0] - (this->InvalidatedOutputs).NumBits) + 1;
    if (0 < iVar10) {
      iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar1,iVar10);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar1,iVar7,iVar10,false);
    }
    uVar6 = local_res8[0];
    if ((this->InvalidatedOutputs).NumBits <= (int)(uint)local_res8[0]) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    FVar9 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)pTVar1;
    }
    puVar3 = (uint *)((longlong)FVar9 + (ulonglong)(uVar6 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar6 & 0x1f);
    local_50 = local_res10;
    local_48 = local_res8;
    TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UE::MovieScene::FMovieSceneEntityID_const_&,unsigned_short_const_&>_>
              ((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<UE::MovieScene::FMovieSceneEntityID_const_&,unsigned_short_const_&>
                        *)local_58,(bool *)&local_50);
    local_40 = local_res8;
    local_38 = local_res10;
    TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_short_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>_>
              ((TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                *)&this->OutputToEntity,
               (TPairInitializer<unsigned_short_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>
                *)(local_58 + 4),(bool *)&local_40);
  }
  return local_res8[0];
}

// VisitUnlinkedAllocationImpl @ 14671ea00

void __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
::VisitUnlinkedAllocationImpl
          (TOverlappingEntityTrackerImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo,UE::MovieScene::FInterrogationKey>
           *this,FEntityAllocation *param_1)

{
  longlong lVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  FMovieSceneEntityID *pFVar6;
  undefined1 *puVar7;
  ForElementType<unsigned_int> FVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  ushort *puVar12;
  undefined1 *puVar13;
  ForElementType<unsigned_int> this_00;
  int iVar14;
  ushort *puVar15;
  FMovieSceneEntityID local_res8 [4];
  
  if ((this->bIsInitialized == false) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsInitialized",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                          ,0x19c,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar3 = param_1->Size;
  pFVar6 = param_1->EntityIDs;
  if ((ulonglong)uVar3 != 0) {
    puVar15 = (ushort *)0x0;
    do {
      uVar4 = pFVar6[(longlong)puVar15].Value;
      if (*(int *)&(this->EntityToOutput).field_0x8 != *(int *)&(this->EntityToOutput).field_0x34) {
        puVar7 = *(undefined1 **)&(this->EntityToOutput).field_0x40;
        puVar13 = &(this->EntityToOutput).field_0x38;
        if (puVar7 != (undefined1 *)0x0) {
          puVar13 = puVar7;
        }
        iVar14 = *(int *)(puVar13 +
                         ((ulonglong)(*(int *)&(this->EntityToOutput).field_0x48 - 1) &
                         (ulonglong)uVar4) * 4);
        if (iVar14 != -1) {
          do {
            lVar1 = *(longlong *)&this->EntityToOutput + (longlong)iVar14 * 0xc;
            if (*(ushort *)(*(longlong *)&this->EntityToOutput + (longlong)iVar14 * 0xc) == uVar4) {
              puVar12 = (ushort *)(lVar1 + 2);
              if (lVar1 == 0) {
                puVar12 = (ushort *)0x0;
              }
              if ((puVar12 != (ushort *)0x0) && (uVar5 = *puVar12, uVar5 != 0xffff)) {
                local_res8[0].Value = uVar4;
                TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
                ::Remove(&this->OutputToEntity,uVar5,local_res8);
                if (*(int *)&(this->EntityToOutput).field_0x8 !=
                    *(int *)&(this->EntityToOutput).field_0x34) {
                  TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                  ::RemoveImpl<UE::MovieScene::FMovieSceneEntityID>
                            ((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                              *)this,(uint)uVar4,local_res8);
                }
                this_00 = (ForElementType<unsigned_int>)&this->InvalidatedOutputs;
                iVar14 = ((uint)uVar5 - (this->InvalidatedOutputs).NumBits) + 1;
                if (0 < iVar14) {
                  iVar11 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                     ((TBitArray<FDefaultBitArrayAllocator> *)this_00,iVar14);
                  TBitArray<FDefaultBitArrayAllocator>::SetRange
                            ((TBitArray<FDefaultBitArrayAllocator> *)this_00,iVar11,iVar14,false);
                }
                if (((this->InvalidatedOutputs).NumBits <= (int)(uint)uVar5) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar10)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                FVar8 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
                if (FVar8 != (ForElementType<unsigned_int>)0x0) {
                  this_00 = FVar8;
                }
                puVar2 = (uint *)((longlong)this_00 + (ulonglong)(uVar5 >> 5) * 4);
                *puVar2 = *puVar2 | 1 << ((byte)uVar5 & 0x1f);
              }
              break;
            }
            iVar14 = *(int *)(lVar1 + 4);
          } while (iVar14 != -1);
        }
      }
      puVar15 = (ushort *)((longlong)puVar15 + 1);
    } while ((longlong)puVar15 < (longlong)(ulonglong)uVar3);
  }
  return;
}

// Destroy<UE::MovieScene::TOverlappingCustomPrimitiveDataHandler<UE::MovieScene::FCustomPrimitiveDataMixin>_> @ 146739100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::
Destroy<UE::MovieScene::TOverlappingCustomPrimitiveDataHandler<UE::MovieScene::FCustomPrimitiveDataMixin>_>
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
           *this,TOverlappingCustomPrimitiveDataHandler<UE::MovieScene::FCustomPrimitiveDataMixin>
                 *param_1)

{
  undefined1 *this_00;
  TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::FOutput,FDefaultSparseArrayAllocator>
  *this_01;
  TMap<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short,0>_>
  *this_02;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  TOverlappingCustomPrimitiveDataHandler<UE::MovieScene::FCustomPrimitiveDataMixin> *this_03;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  FObjectKey *pFVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  TOverlappingCustomPrimitiveDataHandler<UE::MovieScene::FCustomPrimitiveDataMixin> *local_res10;
  uint local_res18;
  int local_res20;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  int local_50;
  
  uStack_94 = 1;
  this_01 = &this->Outputs;
  local_98 = 0;
  iVar2 = *(int *)&(this->Outputs).field_0x28;
  this_00 = &(this->Outputs).field_0x10;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar2 != 0) {
    puVar12 = *(uint **)&(this->Outputs).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)this_00;
    }
    uVar13 = *puVar12;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar13 == 0) {
      iStack_80 = iStack_80 + 0x20;
      lVar7 = (longlong)local_98;
      local_98 = local_98 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_1467391ca;
      uVar13 = puVar12[lVar7 + 1];
    }
    uStack_94 = -uVar13 & uVar13;
    uVar1 = (ulonglong)uStack_94 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iStack_84 = local_res20 + -1 + iStack_80;
    if (iVar2 < iStack_84) {
LAB_1467391ca:
      iStack_84 = iVar2;
    }
  }
  local_res18 = *(uint *)&(this->Outputs).field_0x28;
  local_50 = *(int *)&(this->Outputs).field_0x8 - *(int *)&(this->Outputs).field_0x34;
  local_70._padding_ = CONCAT44(uStack_94,local_98);
  iVar9 = (int)local_res18 >> 5;
  local_70.CurrentBitIndex = iStack_84;
  local_70.UnvisitedBitMask = 0xffffffff;
  local_70._28_4_ = uStack_7c;
  local_70.BaseBitIndex = iStack_80;
  bVar6 = (byte)local_res18;
  uVar13 = local_res18 & 0xffffffe0;
  local_res10 = param_1;
  local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
  if ((((int)local_res18 < 0) || (iVar2 < (int)local_res18)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_03 = local_res10;
  uVar3 = *(uint *)&(this->Outputs).field_0x28;
  uVar10 = local_res18;
  if (local_res18 != uVar3) {
    puVar11 = *(undefined1 **)&(this->Outputs).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = this_00;
    }
    uVar10 = -1 << (bVar6 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar9 * 4);
    while (uVar10 == 0) {
      lVar7 = (longlong)iVar9;
      uVar13 = uVar13 + 0x20;
      iVar9 = iVar9 + 1;
      local_res18 = uVar3;
      uVar10 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1467392b4;
      uVar10 = *(uint *)(puVar11 + lVar7 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res18 = (int)lVar7 + -1 + uVar13;
    uVar10 = local_res18;
    if ((int)uVar3 < (int)local_res18) {
      local_res18 = uVar3;
      uVar10 = uVar3;
    }
  }
LAB_1467392b4:
  while( true ) {
    if (*(int *)&(this->Outputs).field_0x8 - *(int *)&(this->Outputs).field_0x34 != local_50) {
      `TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::FOutput,FDefaultSparseArrayAllocator>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_70.CurrentBitIndex == uVar10) &&
       (local_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)this_00)) break;
    pFVar8 = (FObjectKey *)((longlong)local_70.CurrentBitIndex * 0x30 + *(longlong *)this_01);
    TOverlappingCustomPrimitiveDataHandler<UE::MovieScene::FCustomPrimitiveDataMixin>::DestroyOutput
              (this_03,*pFVar8,*(FName *)(pFVar8 + 1),
               (FAnimatedCustomPrimitiveDataInfo *)(pFVar8 + 2),
               (FEntityOutputAggregate)SUB41(pFVar8[5].ObjectSerialNumber,0));
    local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
  }
  bVar5 = 1 < *(int *)&(this->EntityToOutput).field_0x48;
  if (!bVar5) {
    TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                      *)this);
  }
  puVar11 = &(this->EntityToOutput).field_0xc;
  *(undefined4 *)&(this->EntityToOutput).field_0x8 = 0;
  if (*(int *)puVar11 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,(int *)puVar11);
  }
  *(undefined4 *)&(this->EntityToOutput).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntityToOutput).field_0x34 = 0;
  iVar2 = *(int *)&(this->EntityToOutput).field_0x2c;
  *(undefined4 *)&(this->EntityToOutput).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->EntityToOutput).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EntityToOutput).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->EntityToOutput).field_0x48 = 1;
    TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
              *)this);
  }
  bVar5 = 1 < *(int *)&(this->OutputToEntity).field_0x48;
  if (!bVar5) {
    TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                      *)&this->OutputToEntity);
  }
  puVar11 = &(this->OutputToEntity).field_0xc;
  *(undefined4 *)&(this->OutputToEntity).field_0x8 = 0;
  if (*(int *)puVar11 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&this->OutputToEntity,0,(int *)puVar11);
  }
  *(undefined4 *)&(this->OutputToEntity).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutputToEntity).field_0x34 = 0;
  iVar2 = *(int *)&(this->OutputToEntity).field_0x2c;
  *(undefined4 *)&(this->OutputToEntity).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->OutputToEntity).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->OutputToEntity).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->OutputToEntity).field_0x48 = 1;
    TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
              *)&this->OutputToEntity);
  }
  this_02 = &this->KeyToOutput;
  bVar5 = 1 < *(int *)&(this->KeyToOutput).field_0x48;
  if (!bVar5) {
    TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short,0>,FDefaultSetAllocator>
                      *)this_02);
  }
  puVar11 = &(this->KeyToOutput).field_0xc;
  *(undefined4 *)&(this->KeyToOutput).field_0x8 = 0;
  if (*(int *)puVar11 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)this_02,0,(int *)puVar11);
  }
  *(undefined4 *)&(this->KeyToOutput).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyToOutput).field_0x34 = 0;
  iVar2 = *(int *)&(this->KeyToOutput).field_0x2c;
  *(undefined4 *)&(this->KeyToOutput).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->KeyToOutput).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->KeyToOutput).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->KeyToOutput).field_0x48 = 1;
    TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short,0>,FDefaultSetAllocator>
              *)this_02);
  }
  TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::FOutput,FDefaultSparseArrayAllocator>
  ::DestroyElements(this_01,0,*(int *)&(this->Outputs).field_0x8);
  puVar11 = &(this->Outputs).field_0xc;
  *(undefined4 *)&(this->Outputs).field_0x8 = 0;
  if (*(int *)puVar11 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,4,0,(ForAnyElementType *)this_01,0,(int *)puVar11);
  }
  *(undefined4 *)&(this->Outputs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Outputs).field_0x34 = 0;
  iVar2 = *(int *)&(this->Outputs).field_0x2c;
  *(undefined4 *)&(this->Outputs).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->Outputs).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)this_00,0)
    ;
  }
  iVar2 = (this->InvalidatedOutputs).MaxBits;
  (this->InvalidatedOutputs).NumBits = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    (this->InvalidatedOutputs).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->InvalidatedOutputs,0);
  }
  iVar2 = (this->NewOutputs).MaxBits;
  (this->NewOutputs).NumBits = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    (this->NewOutputs).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->NewOutputs,0);
  }
  return;
}

// Destroy<UE::MovieScene::FAttachmentHandler> @ 146739590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey>::
Destroy<UE::MovieScene::FAttachmentHandler>
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey> *this,
          FAttachmentHandler *param_1)

{
  undefined1 *this_00;
  TMap<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>_>
  *this_01;
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  FAttachmentHandler *this_02;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  FAttachmentHandler *local_res10;
  int local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  uStack_84 = 1;
  this_00 = &(this->Outputs).field_0x10;
  local_88 = 0;
  iVar7 = *(int *)&(this->Outputs).field_0x28;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar7 != 0) {
    puVar10 = *(uint **)&(this->Outputs).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)this_00;
    }
    uVar8 = *puVar10;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar8 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar5 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_146739649;
      uVar8 = puVar10[lVar5 + 1];
    }
    uStack_84 = -uVar8 & uVar8;
    uVar1 = (ulonglong)uStack_84 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_res18 = (int)lVar5;
    iStack_74 = local_res18 + -1 + iStack_70;
    if (iVar7 < iStack_74) {
LAB_146739649:
      iStack_74 = iVar7;
    }
  }
  uVar8 = *(uint *)&(this->Outputs).field_0x28;
  local_40 = *(int *)&(this->Outputs).field_0x8 - *(int *)&(this->Outputs).field_0x34;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  iVar7 = (int)uVar8 >> 5;
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  uVar11 = uVar8 & 0xffffffe0;
  local_res10 = param_1;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
  if ((((int)uVar8 < 0) || (*(int *)&(this->Outputs).field_0x28 < (int)uVar8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_02 = local_res10;
  uVar2 = *(uint *)&(this->Outputs).field_0x28;
  if (uVar8 != uVar2) {
    puVar9 = *(undefined1 **)&(this->Outputs).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = this_00;
    }
    uVar8 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar9 + (longlong)iVar7 * 4);
    while (uVar8 == 0) {
      lVar5 = (longlong)iVar7;
      uVar11 = uVar11 + 0x20;
      iVar7 = iVar7 + 1;
      uVar8 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7) goto LAB_14673973b;
      uVar8 = *(uint *)(puVar9 + lVar5 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar8 = (int)lVar5 + -1 + uVar11;
    if ((int)uVar2 < (int)uVar8) {
      uVar8 = uVar2;
    }
  }
LAB_14673973b:
  while( true ) {
    if (*(int *)&(this->Outputs).field_0x8 - *(int *)&(this->Outputs).field_0x34 != local_40) {
      `TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey>::FOutput,FDefaultSparseArrayAllocator>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar8) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)this_00)) break;
    lVar5 = *(longlong *)&this->Outputs;
    lVar6 = (longlong)local_60.CurrentBitIndex * 0x20;
    FAttachmentHandler::DestroyOutput
              (this_02,*(FObjectKey *)(lVar6 + lVar5),(FPreAnimAttachment *)(lVar6 + 8 + lVar5),
               (FEntityOutputAggregate)*(bool *)(lVar6 + 0x1c + lVar5));
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  bVar4 = 1 < *(int *)&(this->EntityToOutput).field_0x48;
  if (!bVar4) {
    TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                      *)this);
  }
  puVar9 = &(this->EntityToOutput).field_0xc;
  *(undefined4 *)&(this->EntityToOutput).field_0x8 = 0;
  if (*(int *)puVar9 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,(int *)puVar9);
  }
  *(undefined4 *)&(this->EntityToOutput).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntityToOutput).field_0x34 = 0;
  iVar7 = *(int *)&(this->EntityToOutput).field_0x2c;
  *(undefined4 *)&(this->EntityToOutput).field_0x28 = 0;
  if ((iVar7 < 0) || (0x80 < iVar7)) {
    *(undefined4 *)&(this->EntityToOutput).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EntityToOutput).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->EntityToOutput).field_0x48 = 1;
    TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
              *)this);
  }
  bVar4 = 1 < *(int *)&(this->OutputToEntity).field_0x48;
  if (!bVar4) {
    TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                      *)&this->OutputToEntity);
  }
  puVar9 = &(this->OutputToEntity).field_0xc;
  *(undefined4 *)&(this->OutputToEntity).field_0x8 = 0;
  if (*(int *)puVar9 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&this->OutputToEntity,0,(int *)puVar9);
  }
  *(undefined4 *)&(this->OutputToEntity).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutputToEntity).field_0x34 = 0;
  iVar7 = *(int *)&(this->OutputToEntity).field_0x2c;
  *(undefined4 *)&(this->OutputToEntity).field_0x28 = 0;
  if ((iVar7 < 0) || (0x80 < iVar7)) {
    *(undefined4 *)&(this->OutputToEntity).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->OutputToEntity).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->OutputToEntity).field_0x48 = 1;
    TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
              *)&this->OutputToEntity);
  }
  this_01 = &this->KeyToOutput;
  bVar4 = 1 < *(int *)&(this->KeyToOutput).field_0x48;
  if (!bVar4) {
    TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  puVar9 = &(this->KeyToOutput).field_0xc;
  *(undefined4 *)&(this->KeyToOutput).field_0x8 = 0;
  if (*(int *)puVar9 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this_01,0,(int *)puVar9);
  }
  *(undefined4 *)&(this->KeyToOutput).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyToOutput).field_0x34 = 0;
  iVar7 = *(int *)&(this->KeyToOutput).field_0x2c;
  *(undefined4 *)&(this->KeyToOutput).field_0x28 = 0;
  if ((iVar7 < 0) || (0x80 < iVar7)) {
    *(undefined4 *)&(this->KeyToOutput).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->KeyToOutput).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->KeyToOutput).field_0x48 = 1;
    TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>,FDefaultSetAllocator>
              *)this_01);
  }
  puVar9 = &(this->Outputs).field_0xc;
  *(undefined4 *)&(this->Outputs).field_0x8 = 0;
  if (*(int *)puVar9 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)&this->Outputs,0,(int *)puVar9);
  }
  *(undefined4 *)&(this->Outputs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Outputs).field_0x34 = 0;
  iVar7 = *(int *)&(this->Outputs).field_0x2c;
  *(undefined4 *)&(this->Outputs).field_0x28 = 0;
  if ((iVar7 < 0) || (0x80 < iVar7)) {
    *(undefined4 *)&(this->Outputs).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)this_00,0)
    ;
  }
  iVar7 = (this->InvalidatedOutputs).MaxBits;
  (this->InvalidatedOutputs).NumBits = 0;
  if ((iVar7 < 0) || (0x80 < iVar7)) {
    (this->InvalidatedOutputs).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->InvalidatedOutputs,0);
  }
  iVar7 = (this->NewOutputs).MaxBits;
  (this->NewOutputs).NumBits = 0;
  if ((iVar7 < 0) || (0x80 < iVar7)) {
    (this->NewOutputs).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->NewOutputs,0);
  }
  return;
}

// Destroy<UE::MovieScene::FMobilityCacheHandler> @ 146739a30

void __thiscall
UE::MovieScene::TOverlappingEntityTrackerImpl<enum_EComponentMobility::Type,FObjectKey>::
Destroy<UE::MovieScene::FMobilityCacheHandler>(void *this,FMobilityCacheHandler *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>,FDefaultSetAllocator>
  *this_01;
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  uStack_84 = 1;
  this_00 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x100);
  local_88 = 0;
  iVar6 = *(int *)((longlong)this + 0x118);
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar6 != 0) {
    pTVar8 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x110);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x110) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar8 = this_00;
    }
    uVar7 = *(uint *)(pTVar8->AllocatorInstance).InlineData;
    iStack_70 = 0;
    while (uVar7 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar5 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_146739ae9;
      uVar7 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar5 * 4 + 4);
    }
    uStack_84 = -uVar7 & uVar7;
    uVar1 = (ulonglong)uStack_84 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_74 = (int)lVar5 + -1 + iStack_70;
    if (iVar6 < iStack_74) {
LAB_146739ae9:
      iStack_74 = iVar6;
    }
  }
  uVar7 = *(uint *)((longlong)this + 0x118);
  local_40 = *(int *)((longlong)this + 0xf8) - *(int *)((longlong)this + 0x124);
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  iVar6 = (int)uVar7 >> 5;
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  uVar9 = uVar7 & 0xffffffe0;
  local_60.Array = this_00;
  if ((((int)uVar7 < 0) || (*(int *)((longlong)this + 0x118) < (int)uVar7)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = *(uint *)((longlong)this + 0x118);
  if (uVar7 != uVar2) {
    pTVar8 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x110);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x110) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar8 = this_00;
    }
    uVar7 = -1 << ((byte)uVar7 & 0x1f) &
            *(uint *)((pTVar8->AllocatorInstance).InlineData + (longlong)iVar6 * 4);
    while (uVar7 == 0) {
      lVar5 = (longlong)iVar6;
      uVar9 = uVar9 + 0x20;
      iVar6 = iVar6 + 1;
      uVar7 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6) goto LAB_146739bdb;
      uVar7 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar5 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar7 = (int)lVar5 + -1 + uVar9;
    if ((int)uVar2 < (int)uVar7) {
      uVar7 = uVar2;
    }
  }
LAB_146739bdb:
  while( true ) {
    if (*(int *)((longlong)this + 0xf8) - *(int *)((longlong)this + 0x124) != local_40) {
      `TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<enum_EComponentMobility::Type,FObjectKey>::FOutput,FDefaultSparseArrayAllocator>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar7) && (local_60.Array == this_00)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  bVar4 = 1 < *(int *)((longlong)this + 0x48);
  if (!bVar4) {
    TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
    ::UnhashElements(this);
  }
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (bVar4) {
    *(undefined4 *)((longlong)this + 0x48) = 1;
    TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
    ::Rehash(this);
  }
  bVar4 = 1 < *(int *)((longlong)this + 0x98);
  if (!bVar4) {
    TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                      *)((longlong)this + 0x50));
  }
  *(undefined4 *)((longlong)this + 0x58) = 0;
  if (*(int *)((longlong)this + 0x5c) != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)((longlong)this + 0x50),0,(int *)((longlong)this + 0x5c)
              );
  }
  *(undefined4 *)((longlong)this + 0x80) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x84) = 0;
  *(undefined4 *)((longlong)this + 0x78) = 0;
  if ((*(int *)((longlong)this + 0x7c) < 0) || (0x80 < *(int *)((longlong)this + 0x7c))) {
    *(undefined4 *)((longlong)this + 0x7c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x60),0);
  }
  if (bVar4) {
    *(undefined4 *)((longlong)this + 0x98) = 1;
    TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
              *)((longlong)this + 0x50));
  }
  this_01 = (TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>,FDefaultSetAllocator>
             *)((longlong)this + 0xa0);
  bVar4 = 1 < *(int *)((longlong)this + 0xe8);
  if (!bVar4) {
    TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>,FDefaultSetAllocator>
    ::UnhashElements(this_01);
  }
  *(undefined4 *)((longlong)this + 0xa8) = 0;
  if (*(int *)((longlong)this + 0xac) != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this_01,0,(int *)((longlong)this + 0xac));
  }
  *(undefined4 *)((longlong)this + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0xd4) = 0;
  *(undefined4 *)((longlong)this + 200) = 0;
  if ((*(int *)((longlong)this + 0xcc) < 0) || (0x80 < *(int *)((longlong)this + 0xcc))) {
    *(undefined4 *)((longlong)this + 0xcc) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0xb0),0);
  }
  if (bVar4) {
    *(undefined4 *)((longlong)this + 0xe8) = 1;
    TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>,FDefaultSetAllocator>
    ::Rehash(this_01);
  }
  *(undefined4 *)((longlong)this + 0xf8) = 0;
  if (*(int *)((longlong)this + 0xfc) != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)((longlong)this + 0xf0),0,
               (int *)((longlong)this + 0xfc));
  }
  *(undefined4 *)((longlong)this + 0x120) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x124) = 0;
  *(undefined4 *)((longlong)this + 0x118) = 0;
  if ((*(int *)((longlong)this + 0x11c) < 0) || (0x80 < *(int *)((longlong)this + 0x11c))) {
    *(undefined4 *)((longlong)this + 0x11c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(this_00,0);
  }
  *(undefined4 *)((longlong)this + 0x140) = 0;
  if ((*(int *)((longlong)this + 0x144) < 0) || (0x80 < *(int *)((longlong)this + 0x144))) {
    *(undefined4 *)((longlong)this + 0x144) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x128),0);
  }
  *(undefined4 *)((longlong)this + 0x160) = 0;
  if ((*(int *)((longlong)this + 0x164) < 0) || (0x80 < *(int *)((longlong)this + 0x164))) {
    *(undefined4 *)((longlong)this + 0x164) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x148),0);
  }
  return;
}

// ProcessInvalidatedOutputs<UE::MovieScene::TOverlappingCustomPrimitiveDataHandler<UE::MovieScene::FCustomPrimitiveDataMixin>_&> @ 146754bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::
ProcessInvalidatedOutputs<UE::MovieScene::TOverlappingCustomPrimitiveDataHandler<UE::MovieScene::FCustomPrimitiveDataMixin>_&>
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
           *this,UMovieSceneEntitySystemLinker *param_1,
          TOverlappingCustomPrimitiveDataHandler<UE::MovieScene::FCustomPrimitiveDataMixin> *param_2
          )

{
  ForElementType<UE::MovieScene::FMovieSceneEntityID> FVar1;
  ushort uVar2;
  code *pcVar3;
  byte bVar4;
  UMovieSceneEntitySystemLinker *pUVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined4 uVar9;
  FBuiltInComponentTypes *pFVar10;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *pTVar11;
  longlong lVar12;
  undefined1 *puVar13;
  longlong lVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  FEntityOutputAggregate FVar18;
  int iVar19;
  TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
  *pTVar20;
  ForElementType<UE::MovieScene::FMovieSceneEntityID> FVar21;
  ForElementType<unsigned_int> FVar22;
  TOverlappingEntityInput<FObjectKey,FName> *pTVar23;
  ulonglong uVar24;
  FComponentTypeID FVar25;
  FName FVar26;
  undefined1 *puVar27;
  ForElementType<unsigned_int> FVar28;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *pTVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  FObjectKey *pFVar32;
  TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::FOutput,FDefaultSparseArrayAllocator>
  *this_00;
  undefined1 auStackY_158 [32];
  undefined1 local_108 [4];
  uint local_104;
  uint local_100;
  ushort local_fc;
  uint local_f8;
  uint local_f4;
  TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_f0;
  short sStack_e8;
  int iStack_e4;
  int local_e0;
  undefined4 uStack_dc;
  TOverlappingCustomPrimitiveDataHandler<UE::MovieScene::FCustomPrimitiveDataMixin> *local_d8;
  ulonglong local_d0;
  TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_c8;
  short sStack_c0;
  undefined2 uStack_be;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  UMovieSceneEntitySystemLinker *local_b0;
  int local_a8;
  int local_a4;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_98;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_88;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_78;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_68;
  undefined1 local_58 [16];
  ForElementType<UE::MovieScene::FMovieSceneEntityID> local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar30 = 0;
  local_d8 = param_2;
  local_b0 = param_1;
  if ((this->InvalidatedOutputs).NumBits != 0) {
    local_48 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0;
    local_40 = 0;
    local_3c = 8;
    pFVar10 = FBuiltInComponentTypes::Get();
    FVar25.Value = (pFVar10->Tags).RestoreState.Value;
    local_fc = FVar25.Value;
    if ((0xfffe < (this->InvalidatedOutputs).NumBits) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InvalidatedOutputs.Num() < NO_OUTPUT",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                           ,0xf2,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_f8 = 0;
    uVar8 = (this->InvalidatedOutputs).NumBits;
    local_d0 = CONCAT44(local_d0._4_4_,1);
    local_104 = 0;
    local_100 = 0;
    uVar24 = uVar30;
    if (uVar8 != 0) {
      FVar28 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
      uVar24 = (ulonglong)uVar8;
      if (FVar28 == (ForElementType<unsigned_int>)0x0) {
        FVar28 = (ForElementType<unsigned_int>)&this->InvalidatedOutputs;
      }
      uVar17 = *(uint *)FVar28;
      uVar31 = uVar30;
      while (uVar17 == 0) {
        local_100 = (int)uVar31 + 0x20;
        uVar31 = (ulonglong)local_100;
        iVar19 = (int)uVar30;
        local_f8 = iVar19 + 1;
        uVar30 = (ulonglong)local_f8;
        local_104 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_f8)
        goto LAB_146754d11;
        uVar17 = *(uint *)((uchar *)((longlong)FVar28 + 4) + (longlong)iVar19 * 4);
      }
      local_d0 = (ulonglong)(-uVar17 & uVar17);
      uVar30 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_a8 = (int)lVar12;
      local_104 = (local_100 - 1) + local_a8;
      if ((int)uVar8 < (int)local_104) {
        local_104 = uVar8;
      }
      uVar24 = (ulonglong)local_104;
    }
LAB_146754d11:
    if ((int)uVar24 < (int)uVar8) {
      local_f4 = 0xffffffff;
      do {
        pTVar20 = &this->OutputToEntity;
        local_40 = 0;
        if (local_3c < 0) {
          Core::Private::
          ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_>
                    (2,2,0,(ForElementType<UE::MovieScene::FMovieSceneEntityID> *)local_58,0,
                     &local_3c);
        }
        pUVar5 = local_b0;
        iVar19 = *(int *)&(this->OutputToEntity).field_0x48;
        sStack_c0 = (short)uVar24;
        iStack_bc = -1;
        if (iVar19 == 0) {
          local_b8 = -1;
        }
        else {
          puVar27 = *(undefined1 **)&(this->OutputToEntity).field_0x40;
          puVar13 = &(this->OutputToEntity).field_0x38;
          if (puVar27 != (undefined1 *)0x0) {
            puVar13 = puVar27;
          }
          local_b8 = *(int *)(puVar13 + ((longlong)iVar19 - 1U & uVar24 & 0xffff) * 4);
          iStack_bc = local_b8;
          if (local_b8 != -1) {
            do {
              local_b8 = *(int *)(*(longlong *)pTVar20 + 4 + (longlong)iStack_bc * 0xc);
              if (*(short *)(*(longlong *)pTVar20 + (longlong)iStack_bc * 0xc) == (short)uVar24)
              break;
              iStack_bc = local_b8;
            } while (local_b8 != -1);
          }
        }
        uStack_dc = uStack_b4;
        local_e0 = local_b8;
        _sStack_e8 = _sStack_c0;
        iStack_e4 = iStack_bc;
        iVar19 = iStack_bc;
        local_c8 = pTVar20;
        if (iStack_bc != -1) {
          do {
            uVar2 = *(ushort *)(*(longlong *)pTVar20 + 2 + (longlong)iVar19 * 0xc);
            iStack_e4 = iVar19;
            if ((uVar2 == 0xffff) ||
               (uVar8 = (uint)uVar2,
               *(int *)&(pUVar5->EntityManager).EntityLocations.field_0x28 <= (int)uVar8)) {
LAB_146754f73:
              local_f0 = pTVar20;
              bVar6 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_1936009250870394630>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                                 ,0xfa,"Linker->EntityManager.IsAllocated(Inputs.Value())");
              if (bVar6) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (*(int *)&(this->EntityToOutput).field_0x8 !=
                  *(int *)&(this->EntityToOutput).field_0x34) {
                puVar27 = *(undefined1 **)&(this->EntityToOutput).field_0x40;
                uVar2 = *(ushort *)(*(longlong *)local_f0 + 2 + (longlong)iVar19 * 0xc);
                puVar13 = &(this->EntityToOutput).field_0x38;
                if (puVar27 != (undefined1 *)0x0) {
                  puVar13 = puVar27;
                }
                iVar19 = *(int *)(puVar13 +
                                 ((longlong)*(int *)&(this->EntityToOutput).field_0x48 - 1U &
                                 (ulonglong)uVar2) * 4);
                if (iVar19 != -1) {
                  do {
                    if (*(ushort *)(*(longlong *)&this->EntityToOutput + (longlong)iVar19 * 0xc) ==
                        uVar2) {
                      TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                      ::RemoveByIndex((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                                       *)this,iVar19);
                      break;
                    }
                    iVar19 = *(int *)(*(longlong *)&this->EntityToOutput + 4 +
                                     (longlong)iVar19 * 0xc);
                  } while (iVar19 != -1);
                }
              }
              TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
              ::TKeyIterator::RemoveCurrent((TKeyIterator *)&local_f0);
              pTVar20 = local_f0;
            }
            else {
              if (*(int *)&(pUVar5->EntityManager).EntityLocations.field_0x28 <= (int)uVar8) {
                local_f0 = pTVar20;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5c6,L"");
                pTVar20 = local_f0;
                if (bVar6) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              puVar27 = *(undefined1 **)&(pUVar5->EntityManager).EntityLocations.field_0x20;
              puVar13 = &(pUVar5->EntityManager).EntityLocations.field_0x10;
              if (puVar27 != (undefined1 *)0x0) {
                puVar13 = puVar27;
              }
              if ((*(uint *)(puVar13 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0)
              goto LAB_146754f73;
              FVar21 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)local_58;
              if (local_48 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
                FVar21 = local_48;
              }
              FVar1 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)
                      (*(longlong *)pTVar20 + 2 + (longlong)iVar19 * 0xc);
              local_f0 = pTVar20;
              if ((ulonglong)FVar21 <= (ulonglong)FVar1) {
                FVar21 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)local_58;
                if (local_48 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
                  FVar21 = local_48;
                }
                if ((ulonglong)FVar1 < (ulonglong)((longlong)FVar21 + (longlong)local_3c * 2)) {
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    );
                  if (bVar6) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
              }
              if (local_40 == local_3c) {
                local_40 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_>
                                     (0x202,(ForElementType<UE::MovieScene::FMovieSceneEntityID> *)
                                            local_58,&local_3c);
              }
              lVar12 = (longlong)local_40;
              FVar21 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)local_58;
              if (local_48 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
                FVar21 = local_48;
              }
              local_40 = local_40 + 1;
              *(undefined2 *)((longlong)FVar21 + lVar12 * 2) = *(undefined2 *)FVar1;
              pTVar20 = local_f0;
            }
            iStack_e4 = local_e0;
            if (local_e0 == -1) break;
            do {
              iVar19 = *(int *)(*(longlong *)pTVar20 + 4 + (longlong)iStack_e4 * 0xc);
              local_e0 = iVar19;
              if (*(short *)(*(longlong *)pTVar20 + (longlong)iStack_e4 * 0xc) == sStack_e8) break;
              iStack_e4 = iVar19;
            } while (iVar19 != -1);
            iVar19 = iStack_e4;
          } while (iStack_e4 != -1);
          uVar24 = (ulonglong)local_104;
          FVar25.Value = local_fc;
        }
        iVar19 = local_40;
        pFVar32 = (FObjectKey *)((uVar24 & 0xffff) * 0x30 + *(longlong *)&this->Outputs);
        local_f0 = pTVar20;
        if (local_40 < 1) {
          TOverlappingCustomPrimitiveDataHandler<UE::MovieScene::FCustomPrimitiveDataMixin>::
          DestroyOutput(local_d8,*pFVar32,*(FName *)(pFVar32 + 1),
                        (FAnimatedCustomPrimitiveDataInfo *)(pFVar32 + 2),
                        (FEntityOutputAggregate)SUB41(pFVar32[5].ObjectSerialNumber,0));
        }
        else {
          FVar21 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)local_58;
          if (local_48 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
            FVar21 = local_48;
          }
          FVar1 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)
                  ((longlong)FVar21 + (longlong)local_40 * 2);
          while( true ) {
            if (local_40 != iVar19) {
              local_108[0] = 0;
              `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_108);
            }
            if (FVar21 == FVar1) {
              uVar7 = 0;
              goto LAB_1467550fd;
            }
            bVar6 = FEntityManager::HasComponent
                              (&local_b0->EntityManager,(FMovieSceneEntityID)*(ushort *)FVar21,
                               FVar25);
            if (bVar6) break;
            FVar21 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)((longlong)FVar21 + 2);
          }
          uVar7 = 1;
LAB_1467550fd:
          *(undefined1 *)&pFVar32[5].ObjectSerialNumber = uVar7;
          uVar8 = (uint)(uVar24 & 0xffff);
          if ((int)uVar8 < (this->NewOutputs).NumBits) {
            if ((this->NewOutputs).NumBits <= (int)uVar8) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L"");
              if (bVar6) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            FVar28 = (this->NewOutputs).AllocatorInstance.SecondaryData;
            FVar22 = (ForElementType<unsigned_int>)&this->NewOutputs;
            if (FVar28 != (ForElementType<unsigned_int>)0x0) {
              FVar22 = FVar28;
            }
            if ((*(uint *)((longlong)FVar22 + ((uVar24 & 0xffff) >> 5) * 4) >> (uVar8 & 0x1f) & 1)
                == 0) goto LAB_146755182;
            FVar26 = *(FName *)(pFVar32 + 1);
            FVar18.bNeedsRestoration = SUB41(pFVar32[5].ObjectSerialNumber,0);
            pTVar11 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::
                      TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int><TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                                (&local_78,
                                 (TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                                  *)local_58);
            pTVar29 = &local_98;
            local_98.DataPtr = pTVar11->DataPtr;
            local_98.ArrayNum = pTVar11->ArrayNum;
            local_98._12_4_ = *(undefined4 *)&pTVar11->field_0xc;
          }
          else {
LAB_146755182:
            FVar26 = *(FName *)(pFVar32 + 1);
            FVar18.bNeedsRestoration = SUB41(pFVar32[5].ObjectSerialNumber,0);
            pTVar11 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::
                      TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int><TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                                (&local_68,
                                 (TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                                  *)local_58);
            pTVar29 = &local_88;
            local_88.DataPtr = pTVar11->DataPtr;
            local_88.ArrayNum = pTVar11->ArrayNum;
            local_88._12_4_ = *(undefined4 *)&pTVar11->field_0xc;
          }
          TOverlappingCustomPrimitiveDataHandler<UE::MovieScene::FCustomPrimitiveDataMixin>::
          UpdateOutput(local_d8,*pFVar32,FVar26,pTVar29,
                       (FAnimatedCustomPrimitiveDataInfo *)(pFVar32 + 2),FVar18);
        }
        this_00 = &this->Outputs;
        if (local_40 == 0) {
          pTVar23 = (TOverlappingEntityInput<FObjectKey,FName> *)
                    ((uVar24 & 0xffff) * 0x30 + *(longlong *)this_00);
          if (*(int *)&(this->KeyToOutput).field_0x8 != *(int *)&(this->KeyToOutput).field_0x34) {
            uVar8 = MovieScene::GetTypeHash(pTVar23);
            puVar27 = *(undefined1 **)&(this->KeyToOutput).field_0x40;
            puVar13 = &(this->KeyToOutput).field_0x38;
            if (puVar27 != (undefined1 *)0x0) {
              puVar13 = puVar27;
            }
            iVar19 = *(int *)(puVar13 +
                             ((longlong)*(int *)&(this->KeyToOutput).field_0x48 - 1U &
                             (longlong)(int)uVar8) * 4);
            if (iVar19 != -1) {
              lVar12 = *(longlong *)&this->KeyToOutput;
              do {
                lVar14 = (longlong)iVar19 * 0x1c;
                if (((*(int *)(lVar14 + lVar12) == *(int *)&pTVar23->Key) &&
                    (*(int *)(lVar14 + 4 + lVar12) == *(int *)&(pTVar23->Key).field_0x4)) &&
                   (*(longlong *)(lVar14 + 8 + lVar12) == *(longlong *)&(pTVar23->Key).field_0x8)) {
                  TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short,0>,FDefaultSetAllocator>
                  ::RemoveByIndex((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short,0>,FDefaultSetAllocator>
                                   *)&this->KeyToOutput,iVar19);
                  break;
                }
                iVar19 = *(int *)(lVar14 + 0x14 + lVar12);
              } while (iVar19 != -1);
            }
          }
          uVar24 = uVar24 & 0xffff;
          iVar19 = (int)uVar24;
          TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::FOutput,FDefaultSparseArrayAllocator>
          ::DestroyElements(this_00,iVar19,1);
          lVar12 = *(longlong *)this_00;
          puVar27 = &(this->Outputs).field_0x10;
          bVar4 = (byte)uVar24 & 0x1f;
          uVar8 = 1 << bVar4 | 1U >> 0x20 - bVar4;
          if (*(int *)&(this->Outputs).field_0x28 <= iVar19) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L"");
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          puVar13 = *(undefined1 **)&(this->Outputs).field_0x20;
          puVar15 = puVar27;
          if (puVar13 != (undefined1 *)0x0) {
            puVar15 = puVar13;
          }
          if ((*(uint *)(puVar15 + (uVar24 >> 5) * 4) & uVar8) == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0xc5,L"");
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (*(int *)&(this->Outputs).field_0x34 != 0) {
            *(int *)(lVar12 + (longlong)*(int *)&(this->Outputs).field_0x30 * 0x30) = iVar19;
          }
          puVar16 = (undefined4 *)((longlong)iVar19 * 0x30 + lVar12);
          *puVar16 = 0xffffffff;
          if (*(int *)&(this->Outputs).field_0x34 < 1) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = *(undefined4 *)&(this->Outputs).field_0x30;
          }
          puVar16[1] = uVar9;
          puVar13 = &(this->Outputs).field_0x34;
          *(int *)puVar13 = *(int *)puVar13 + 1;
          *(int *)&(this->Outputs).field_0x30 = iVar19;
          if (*(int *)&(this->Outputs).field_0x28 <= iVar19) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L"");
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          puVar13 = *(undefined1 **)&(this->Outputs).field_0x20;
          if (puVar13 != (undefined1 *)0x0) {
            puVar27 = puVar13;
          }
          *(uint *)(puVar27 + (uVar24 >> 5) * 4) = *(uint *)(puVar27 + (uVar24 >> 5) * 4) & ~uVar8;
        }
        FVar28 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
        uVar8 = (this->InvalidatedOutputs).NumBits;
        uVar30 = (ulonglong)(int)local_f8;
        local_f4 = ~(uint)local_d0 & local_f4;
        FVar22 = (ForElementType<unsigned_int>)&this->InvalidatedOutputs;
        if (FVar28 != (ForElementType<unsigned_int>)0x0) {
          FVar22 = FVar28;
        }
        uVar17 = local_f4 & *(uint *)((longlong)FVar22 + uVar30 * 4);
        while (uVar17 == 0) {
          local_100 = local_100 + 0x20;
          iVar19 = (int)uVar30;
          local_f8 = iVar19 + 1;
          uVar30 = (ulonglong)local_f8;
          local_104 = uVar8;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_f8)
          goto LAB_146755466;
          uVar17 = *(uint *)((longlong)FVar22 + 4 + (longlong)iVar19 * 4);
          local_f4 = 0xffffffff;
        }
        local_d0 = CONCAT44(local_d0._4_4_,-uVar17 & uVar17);
        uVar30 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar30 != 0) {
          for (; uVar30 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_a4 = (int)lVar12;
        local_104 = (local_100 - 1) + local_a4;
        if ((int)uVar8 < (int)local_104) {
          local_104 = uVar8;
        }
LAB_146755466:
        uVar24 = (ulonglong)local_104;
      } while ((int)local_104 < (this->InvalidatedOutputs).NumBits);
    }
    if (local_48 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
      FMemory::Free((void *)local_48);
    }
  }
  iVar19 = (this->InvalidatedOutputs).MaxBits;
  (this->InvalidatedOutputs).NumBits = 0;
  if ((iVar19 < 0) || (0x80 < iVar19)) {
    (this->InvalidatedOutputs).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->InvalidatedOutputs,0);
  }
  iVar19 = (this->NewOutputs).MaxBits;
  (this->NewOutputs).NumBits = 0;
  if ((iVar19 < 0) || (0x80 < iVar19)) {
    (this->NewOutputs).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->NewOutputs,0);
  }
  return;
}

// ProcessInvalidatedOutputs<UE::MovieScene::FAttachmentHandler> @ 146755530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey>::
ProcessInvalidatedOutputs<UE::MovieScene::FAttachmentHandler>
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey> *this,
          UMovieSceneEntitySystemLinker *param_1,FAttachmentHandler *param_2)

{
  ForElementType<UE::MovieScene::FMovieSceneEntityID> FVar1;
  undefined1 *puVar2;
  FObjectKey FVar3;
  code *pcVar4;
  FMovieSceneEntityID *pFVar5;
  undefined8 uVar6;
  UMovieSceneEntitySystemLinker *pUVar7;
  bool bVar8;
  undefined1 uVar9;
  FBuiltInComponentTypes *pFVar10;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *pTVar11;
  UObject *pUVar12;
  USceneComponent *pUVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 *puVar17;
  uint uVar18;
  int iVar19;
  ushort uVar20;
  uint uVar21;
  ulonglong uVar22;
  ForElementType<UE::MovieScene::FMovieSceneEntityID> FVar23;
  ForElementType<unsigned_int> FVar24;
  FComponentTypeID FVar25;
  TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
  *pTVar26;
  uint uVar27;
  ForElementType<unsigned_int> FVar28;
  ulonglong uVar29;
  int *piVar30;
  int iVar31;
  ulonglong uVar32;
  FObjectKey *pFVar33;
  undefined1 auStackY_178 [32];
  uint local_128;
  undefined1 local_124 [4];
  uint local_120;
  ushort local_11c;
  uint local_118;
  uint local_114;
  TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_110;
  short sStack_108;
  int iStack_104;
  int local_100;
  undefined4 uStack_fc;
  FAttachmentHandler *local_f8;
  ulonglong local_f0;
  TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_e8;
  short sStack_e0;
  undefined2 uStack_de;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  UMovieSceneEntitySystemLinker *local_d0;
  FWeakObjectPtr local_c8;
  int local_c0;
  int local_bc;
  USceneComponent *local_b8 [2];
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_a8;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_98;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_88;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_78;
  TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  uVar32 = 0;
  local_f8 = param_2;
  local_d0 = param_1;
  if ((this->InvalidatedOutputs).NumBits != 0) {
    local_68.AllocatorInstance.SecondaryData =
         (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 8;
    pFVar10 = FBuiltInComponentTypes::Get();
    FVar25.Value = (pFVar10->Tags).RestoreState.Value;
    local_11c = FVar25.Value;
    if ((0xfffe < (this->InvalidatedOutputs).NumBits) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InvalidatedOutputs.Num() < NO_OUTPUT",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                           ,0xf2,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_118 = 0;
    uVar21 = (this->InvalidatedOutputs).NumBits;
    local_f0 = CONCAT44(local_f0._4_4_,1);
    local_128 = 0;
    local_120 = 0;
    uVar22 = uVar32;
    if (uVar21 != 0) {
      FVar28 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
      uVar22 = (ulonglong)uVar21;
      if (FVar28 == (ForElementType<unsigned_int>)0x0) {
        FVar28 = (ForElementType<unsigned_int>)&this->InvalidatedOutputs;
      }
      uVar15 = *(uint *)FVar28;
      uVar29 = uVar32;
      while (uVar15 == 0) {
        local_120 = (int)uVar29 + 0x20;
        uVar29 = (ulonglong)local_120;
        iVar31 = (int)uVar32;
        local_118 = iVar31 + 1;
        uVar32 = (ulonglong)local_118;
        local_128 = uVar21;
        if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_118)
        goto LAB_14675567f;
        uVar15 = *(uint *)((uchar *)((longlong)FVar28 + 4) + (longlong)iVar31 * 4);
      }
      local_f0 = (ulonglong)(-uVar15 & uVar15);
      uVar22 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_c0 = (int)lVar16;
      local_128 = (local_120 - 1) + local_c0;
      if ((int)uVar21 < (int)local_128) {
        local_128 = uVar21;
      }
      uVar22 = (ulonglong)local_128;
    }
LAB_14675567f:
    if ((int)uVar22 < (int)uVar21) {
      local_114 = 0xffffffff;
      do {
        pTVar26 = &this->OutputToEntity;
        local_68.ArrayNum = 0;
        if (local_68.ArrayMax < 0) {
          Core::Private::
          ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_>
                    (2,2,0,&local_68.AllocatorInstance,0,&local_68.ArrayMax);
        }
        pUVar7 = local_d0;
        iVar31 = *(int *)&(this->OutputToEntity).field_0x48;
        sStack_e0 = (short)uVar22;
        iStack_dc = -1;
        if (iVar31 == 0) {
          local_d8 = -1;
        }
        else {
          puVar2 = *(undefined1 **)&(this->OutputToEntity).field_0x40;
          puVar17 = &(this->OutputToEntity).field_0x38;
          if (puVar2 != (undefined1 *)0x0) {
            puVar17 = puVar2;
          }
          local_d8 = *(int *)(puVar17 + ((longlong)iVar31 - 1U & uVar22 & 0xffff) * 4);
          iStack_dc = local_d8;
          if (local_d8 != -1) {
            do {
              local_d8 = *(int *)(*(longlong *)pTVar26 + 4 + (longlong)iStack_dc * 0xc);
              if (*(short *)(*(longlong *)pTVar26 + (longlong)iStack_dc * 0xc) == (short)uVar22)
              break;
              iStack_dc = local_d8;
            } while (local_d8 != -1);
          }
        }
        uStack_fc = uStack_d4;
        local_100 = local_d8;
        _sStack_108 = _sStack_e0;
        iStack_104 = iStack_dc;
        iVar31 = iStack_dc;
        local_e8 = pTVar26;
        if (iStack_dc != -1) {
          do {
            uVar20 = *(ushort *)(*(longlong *)pTVar26 + 2 + (longlong)iVar31 * 0xc);
            iStack_104 = iVar31;
            if ((uVar20 == 0xffff) ||
               (uVar21 = (uint)uVar20,
               *(int *)&(pUVar7->EntityManager).EntityLocations.field_0x28 <= (int)uVar21)) {
LAB_1467558e3:
              local_110 = pTVar26;
              bVar8 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_1936009250870394630>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                                 ,0xfa,"Linker->EntityManager.IsAllocated(Inputs.Value())");
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (*(int *)&(this->EntityToOutput).field_0x8 !=
                  *(int *)&(this->EntityToOutput).field_0x34) {
                puVar2 = *(undefined1 **)&(this->EntityToOutput).field_0x40;
                uVar20 = *(ushort *)(*(longlong *)local_110 + 2 + (longlong)iVar31 * 0xc);
                puVar17 = &(this->EntityToOutput).field_0x38;
                if (puVar2 != (undefined1 *)0x0) {
                  puVar17 = puVar2;
                }
                iVar31 = *(int *)(puVar17 +
                                 ((longlong)*(int *)&(this->EntityToOutput).field_0x48 - 1U &
                                 (ulonglong)uVar20) * 4);
                if (iVar31 != -1) {
                  do {
                    if (*(ushort *)(*(longlong *)&this->EntityToOutput + (longlong)iVar31 * 0xc) ==
                        uVar20) {
                      TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                      ::RemoveByIndex((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                                       *)this,iVar31);
                      break;
                    }
                    iVar31 = *(int *)(*(longlong *)&this->EntityToOutput + 4 +
                                     (longlong)iVar31 * 0xc);
                  } while (iVar31 != -1);
                }
              }
              TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
              ::TKeyIterator::RemoveCurrent((TKeyIterator *)&local_110);
              pTVar26 = local_110;
            }
            else {
              if (*(int *)&(pUVar7->EntityManager).EntityLocations.field_0x28 <= (int)uVar21) {
                local_110 = pTVar26;
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5c6,L"");
                pTVar26 = local_110;
                if (bVar8) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              puVar2 = *(undefined1 **)&(pUVar7->EntityManager).EntityLocations.field_0x20;
              puVar17 = &(pUVar7->EntityManager).EntityLocations.field_0x10;
              if (puVar2 != (undefined1 *)0x0) {
                puVar17 = puVar2;
              }
              if ((*(uint *)(puVar17 + (ulonglong)(uVar20 >> 5) * 4) >> (uVar21 & 0x1f) & 1) == 0)
              goto LAB_1467558e3;
              FVar23 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)&local_68;
              if (local_68.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
                FVar23 = local_68.AllocatorInstance.SecondaryData;
              }
              FVar1 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)
                      (*(longlong *)pTVar26 + 2 + (longlong)iVar31 * 0xc);
              local_110 = pTVar26;
              if ((ulonglong)FVar23 <= (ulonglong)FVar1) {
                FVar23 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)&local_68;
                if (local_68.AllocatorInstance.SecondaryData !=
                    (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
                  FVar23 = local_68.AllocatorInstance.SecondaryData;
                }
                if ((ulonglong)FVar1 <
                    (ulonglong)((longlong)FVar23 + (longlong)local_68.ArrayMax * 2)) {
                  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    );
                  if (bVar8) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
              }
              if (local_68.ArrayNum == local_68.ArrayMax) {
                local_68.ArrayNum =
                     Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_>
                               (0x202,&local_68.AllocatorInstance,&local_68.ArrayMax);
              }
              lVar16 = (longlong)local_68.ArrayNum;
              FVar23 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)&local_68;
              if (local_68.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
                FVar23 = local_68.AllocatorInstance.SecondaryData;
              }
              local_68.ArrayNum = local_68.ArrayNum + 1;
              *(ushort *)((longlong)FVar23 + lVar16 * 2) = *(ushort *)FVar1;
              pTVar26 = local_110;
            }
            iStack_104 = local_100;
            if (local_100 == -1) break;
            do {
              iVar31 = *(int *)(*(longlong *)pTVar26 + 4 + (longlong)iStack_104 * 0xc);
              local_100 = iVar31;
              if (*(short *)(*(longlong *)pTVar26 + (longlong)iStack_104 * 0xc) == sStack_108)
              break;
              iStack_104 = iVar31;
            } while (iVar31 != -1);
            iVar31 = iStack_104;
          } while (iStack_104 != -1);
          uVar32 = (ulonglong)local_118;
          uVar22 = (ulonglong)local_128;
          FVar25.Value = local_11c;
        }
        iVar31 = local_68.ArrayNum;
        uVar20 = (ushort)uVar22;
        pFVar33 = (FObjectKey *)((uVar22 & 0xffff) * 0x20 + *(longlong *)&this->Outputs);
        local_110 = pTVar26;
        if (local_68.ArrayNum < 1) {
          FAttachmentHandler::DestroyOutput
                    (local_f8,*pFVar33,(FPreAnimAttachment *)(pFVar33 + 1),
                     (FEntityOutputAggregate)SUB41(pFVar33[3].ObjectSerialNumber,0));
        }
        else {
          FVar23 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)&local_68;
          if (local_68.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
            FVar23 = local_68.AllocatorInstance.SecondaryData;
          }
          FVar1 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)
                  ((longlong)FVar23 + (longlong)local_68.ArrayNum * 2);
          while( true ) {
            if (local_68.ArrayNum != iVar31) {
              local_124[0] = 0;
              `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_124);
            }
            if (FVar23 == FVar1) {
              uVar9 = 0;
              goto LAB_146755a6d;
            }
            bVar8 = FEntityManager::HasComponent
                              (&local_d0->EntityManager,(FMovieSceneEntityID)*(ushort *)FVar23,
                               FVar25);
            if (bVar8) break;
            FVar23 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)((longlong)FVar23 + 2);
          }
          uVar9 = 1;
LAB_146755a6d:
          *(undefined1 *)&pFVar33[3].ObjectSerialNumber = uVar9;
          uVar20 = (ushort)local_128;
          if ((int)(local_128 & 0xffff) < (this->NewOutputs).NumBits) {
            if ((this->NewOutputs).NumBits <= (int)(local_128 & 0xffff)) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L"");
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            FVar28 = (this->NewOutputs).AllocatorInstance.SecondaryData;
            FVar24 = (ForElementType<unsigned_int>)&this->NewOutputs;
            if (FVar28 != (ForElementType<unsigned_int>)0x0) {
              FVar24 = FVar28;
            }
            if ((*(uint *)((longlong)FVar24 + (ulonglong)((ushort)local_128 >> 5) * 4) >>
                 (local_128 & 0x1f) & 1) != 0) {
              iVar31 = pFVar33[3].ObjectSerialNumber;
              pTVar11 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::
                        TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int><TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                                  (&local_88,&local_68);
              FVar3 = *pFVar33;
              local_c8.ObjectIndex = FVar3.ObjectIndex;
              pFVar5 = pTVar11->DataPtr;
              uVar6._0_4_ = pTVar11->ArrayNum;
              uVar6._4_4_ = *(undefined4 *)&pTVar11->field_0xc;
              local_c8.ObjectSerialNumber = FVar3.ObjectSerialNumber;
              pUVar12 = FWeakObjectPtr::Get(&local_c8);
              pUVar13 = CastChecked<USceneComponent,UObject>(pUVar12);
              local_b8[0] = (pUVar13->AttachParent).field0_0x0.DebugPtr;
              if ((GC::GIsIncrementalReachabilityPending != false) &&
                 (local_b8[0] != (USceneComponent *)0x0)) {
                GC::MarkAsReachable((UObject *)local_b8[0]);
              }
              FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar33 + 1),(FObjectPtr)local_b8);
              *(FName *)(pFVar33 + 2) = pUVar13->AttachSocketName;
              local_a8.DataPtr = pFVar5;
              local_a8._8_8_ = uVar6;
              FAttachmentHandler::UpdateOutput
                        (local_f8,FVar3,&local_a8,(FPreAnimAttachment *)(pFVar33 + 1),
                         (FEntityOutputAggregate)SUB41(iVar31,0));
              goto LAB_146755bcb;
            }
          }
          iVar31 = pFVar33[3].ObjectSerialNumber;
          pTVar11 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::
                    TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int><TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                              (&local_78,&local_68);
          local_98.DataPtr = pTVar11->DataPtr;
          local_98.ArrayNum = pTVar11->ArrayNum;
          local_98._12_4_ = *(undefined4 *)&pTVar11->field_0xc;
          FAttachmentHandler::UpdateOutput
                    (local_f8,*pFVar33,&local_98,(FPreAnimAttachment *)(pFVar33 + 1),
                     (FEntityOutputAggregate)SUB41(iVar31,0));
        }
LAB_146755bcb:
        if (local_68.ArrayNum == 0) {
          piVar30 = (int *)((ulonglong)uVar20 * 0x20 + *(longlong *)&(this->Outputs).field_0x0);
          if (*(int *)&(this->KeyToOutput).field_0x8 != *(int *)&(this->KeyToOutput).field_0x34) {
            uVar21 = piVar30[1];
            iVar31 = *piVar30;
            uVar18 = iVar31 - uVar21 ^ uVar21 >> 0xd;
            uVar15 = (-0x61c88647 - uVar21) - uVar18 ^ uVar18 << 8;
            uVar27 = (uVar21 - uVar15) - uVar18 ^ uVar15 >> 0xd;
            uVar18 = (uVar18 - uVar27) - uVar15 ^ uVar27 >> 0xc;
            uVar15 = (uVar15 - uVar18) - uVar27 ^ uVar18 << 0x10;
            uVar27 = (uVar27 - uVar15) - uVar18 ^ uVar15 >> 5;
            uVar18 = (uVar18 - uVar27) - uVar15 ^ uVar27 >> 3;
            uVar15 = (uVar15 - uVar18) - uVar27 ^ uVar18 << 10;
            puVar2 = *(undefined1 **)&(this->KeyToOutput).field_0x40;
            puVar17 = &(this->KeyToOutput).field_0x38;
            if (puVar2 != (undefined1 *)0x0) {
              puVar17 = puVar2;
            }
            iVar19 = *(int *)(puVar17 +
                             ((longlong)*(int *)&(this->KeyToOutput).field_0x48 - 1U &
                             (longlong)(int)((uVar27 - uVar15) - uVar18 ^ uVar15 >> 0xf)) * 4);
            if (iVar19 != -1) {
              lVar16 = *(longlong *)&this->KeyToOutput;
              do {
                lVar14 = (longlong)iVar19;
                if ((*(int *)(lVar16 + lVar14 * 0x14) == iVar31) &&
                   (*(uint *)(lVar16 + 4 + lVar14 * 0x14) == uVar21)) {
                  TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>,FDefaultSetAllocator>
                  ::RemoveByIndex((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>,FDefaultSetAllocator>
                                   *)&this->KeyToOutput,iVar19);
                  break;
                }
                iVar19 = *(int *)(lVar16 + 0xc + lVar14 * 0x14);
              } while (iVar19 != -1);
            }
          }
          TSparseArrayBase<32,4,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                    ((TSparseArrayBase<32,4,FDefaultSparseArrayAllocator> *)&this->Outputs,
                     (uint)uVar20,1);
        }
        FVar28 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
        uVar21 = (this->InvalidatedOutputs).NumBits;
        local_114 = ~(uint)local_f0 & local_114;
        FVar24 = (ForElementType<unsigned_int>)&this->InvalidatedOutputs;
        if (FVar28 != (ForElementType<unsigned_int>)0x0) {
          FVar24 = FVar28;
        }
        uVar15 = local_114 & *(uint *)((longlong)FVar24 + (longlong)(int)uVar32 * 4);
        while (uVar15 == 0) {
          local_120 = local_120 + 0x20;
          iVar31 = (int)uVar32;
          local_118 = iVar31 + 1;
          uVar32 = (ulonglong)local_118;
          local_128 = uVar21;
          if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_118)
          goto LAB_146755d93;
          uVar15 = *(uint *)((longlong)FVar24 + 4 + (longlong)iVar31 * 4);
          local_114 = 0xffffffff;
        }
        local_f0 = CONCAT44(local_f0._4_4_,-uVar15 & uVar15);
        uVar22 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_bc = (int)lVar16;
        local_128 = (local_120 - 1) + local_bc;
        if ((int)uVar21 < (int)local_128) {
          local_128 = uVar21;
        }
LAB_146755d93:
        uVar22 = (ulonglong)local_128;
      } while ((int)local_128 < (this->InvalidatedOutputs).NumBits);
    }
    if (local_68.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
      FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
    }
  }
  iVar31 = (this->InvalidatedOutputs).MaxBits;
  (this->InvalidatedOutputs).NumBits = 0;
  if ((iVar31 < 0) || (0x80 < iVar31)) {
    (this->InvalidatedOutputs).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->InvalidatedOutputs,0);
  }
  iVar31 = (this->NewOutputs).MaxBits;
  (this->NewOutputs).NumBits = 0;
  if ((iVar31 < 0) || (0x80 < iVar31)) {
    (this->NewOutputs).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->NewOutputs,0);
  }
  return;
}

// ProcessInvalidatedOutputs<UE::MovieScene::FMobilityCacheHandler> @ 146755e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TOverlappingEntityTrackerImpl<enum_EComponentMobility::Type,FObjectKey>::
ProcessInvalidatedOutputs<UE::MovieScene::FMobilityCacheHandler>
          (void *this,UMovieSceneEntitySystemLinker *param_1,FMobilityCacheHandler *param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  longlong *plVar4;
  UMovieSceneEntitySystemLinker *pUVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  FBuiltInComponentTypes *pFVar10;
  ForElementType<UE::MovieScene::FMovieSceneEntityID> FVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  longlong lVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  undefined1 *puVar18;
  FComponentTypeID FVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  int iVar22;
  longlong *plVar23;
  ForElementType<UE::MovieScene::FMovieSceneEntityID> FVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  ulonglong uVar28;
  undefined1 auStackY_138 [32];
  undefined1 local_e8 [4];
  uint local_e4;
  uint local_e0;
  uint local_dc;
  ushort local_d8;
  uint local_d4;
  longlong *local_d0;
  short sStack_c8;
  int iStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  ulonglong local_b8;
  longlong *local_b0;
  short sStack_a8;
  undefined2 uStack_a6;
  int iStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  UMovieSceneEntitySystemLinker *local_98;
  FWeakObjectPtr local_90;
  FWeakObjectPtr local_88;
  int local_80;
  int local_7c;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_78;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_68;
  TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar20 = 0;
  local_98 = param_1;
  if (*(int *)((longlong)this + 0x140) == 0) goto LAB_1467566c2;
  local_58.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 8;
  pFVar10 = FBuiltInComponentTypes::Get();
  FVar19.Value = (pFVar10->Tags).RestoreState.Value;
  local_d8 = FVar19.Value;
  if ((0xfffe < *(int *)((longlong)this + 0x140)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InvalidatedOutputs.Num() < NO_OUTPUT",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                         ,0xf2,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_d4 = 0;
  uVar25 = *(uint *)((longlong)this + 0x140);
  local_b8 = CONCAT44(local_b8._4_4_,1);
  local_e4 = 0;
  local_dc = 0;
  uVar28 = uVar20;
  if (uVar25 == 0) {
LAB_146755fd7:
    uVar8 = (uint)uVar20;
    iVar22 = uVar8 - uVar25;
  }
  else {
    puVar27 = *(uint **)((longlong)this + 0x138);
    if (*(uint **)((longlong)this + 0x138) == (uint *)0x0) {
      puVar27 = (uint *)((longlong)this + 0x128);
    }
    uVar8 = *puVar27;
    while (uVar8 == 0) {
      local_d4 = (int)uVar28 + 1;
      uVar28 = (ulonglong)local_d4;
      local_dc = (int)uVar20 + 0x20;
      uVar20 = (ulonglong)local_dc;
      if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_d4)
      goto LAB_146755fcb;
      uVar8 = puVar27[(int)local_d4];
    }
    uVar8 = ~(uVar8 - 1) & uVar8;
    local_b8 = (ulonglong)uVar8;
    uVar20 = (ulonglong)uVar8 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_80 = (int)lVar15;
    uVar8 = local_80 + -1 + local_dc;
    uVar20 = (ulonglong)uVar8;
    iVar22 = uVar8 - uVar25;
    local_e4 = uVar8;
    if ((int)uVar25 < (int)uVar8) {
LAB_146755fcb:
      uVar20 = (ulonglong)uVar25;
      local_e4 = uVar25;
      goto LAB_146755fd7;
    }
  }
  local_e0 = 0xffffffff;
  if (SBORROW4(uVar8,uVar25) != iVar22 < 0) {
    do {
      plVar23 = (longlong *)((longlong)this + 0x50);
      local_58.ArrayNum = 0;
      if (local_58.ArrayMax < 0) {
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_>
                  (2,2,0,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
      }
      pUVar5 = local_98;
      sStack_a8 = (short)uVar20;
      iStack_a4 = -1;
      if (*(int *)((longlong)this + 0x98) == 0) {
        local_a0 = -1;
      }
      else {
        lVar15 = (longlong)this + 0x88;
        if (*(longlong *)((longlong)this + 0x90) != 0) {
          lVar15 = *(longlong *)((longlong)this + 0x90);
        }
        local_a0 = *(int *)(lVar15 + ((longlong)*(int *)((longlong)this + 0x98) - 1U &
                                     uVar20 & 0xffff) * 4);
        iStack_a4 = local_a0;
        if (local_a0 != -1) {
          do {
            local_a0 = *(int *)(*plVar23 + 4 + (longlong)iStack_a4 * 0xc);
            if (*(short *)(*plVar23 + (longlong)iStack_a4 * 0xc) == (short)uVar20) break;
            iStack_a4 = local_a0;
          } while (local_a0 != -1);
        }
      }
      uStack_bc = uStack_9c;
      local_c0 = local_a0;
      _sStack_c8 = _sStack_a8;
      iStack_c4 = iStack_a4;
      iVar22 = local_a0;
      local_b0 = plVar23;
      plVar4 = plVar23;
      local_d0 = plVar23;
      if (iStack_a4 != -1) {
        do {
          iVar9 = iStack_c4;
          uVar1 = *(ushort *)(*plVar23 + 2 + (longlong)iStack_c4 * 0xc);
          if (uVar1 == 0xffff) {
LAB_146756230:
            bVar6 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1936009250870394630>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                               ,0xfa,"Linker->EntityManager.IsAllocated(Inputs.Value())");
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
              uVar1 = *(ushort *)(*plVar23 + (longlong)iVar9 * 0xc + 2);
              lVar15 = (longlong)this + 0x38;
              if (*(longlong *)((longlong)this + 0x40) != 0) {
                lVar15 = *(longlong *)((longlong)this + 0x40);
              }
              iVar22 = *(int *)(lVar15 + ((longlong)*(int *)((longlong)this + 0x48) - 1U &
                                         (ulonglong)uVar1) * 4);
              if (iVar22 != -1) {
                do {
                  if (*(ushort *)(*(longlong *)this + (longlong)iVar22 * 0xc) == uVar1) {
                    TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                    ::RemoveByIndex(this,iVar22);
                    break;
                  }
                  iVar22 = *(int *)(*(longlong *)this + 4 + (longlong)iVar22 * 0xc);
                } while (iVar22 != -1);
              }
            }
            TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
            ::TKeyIterator::RemoveCurrent((TKeyIterator *)&local_d0);
            iVar22 = local_c0;
            plVar4 = local_d0;
          }
          else {
            if (*(int *)&(pUVar5->EntityManager).EntityLocations.field_0x28 <= (int)(uint)uVar1)
            goto LAB_146756230;
            puVar2 = *(undefined1 **)&(pUVar5->EntityManager).EntityLocations.field_0x20;
            puVar18 = &(pUVar5->EntityManager).EntityLocations.field_0x10;
            if (puVar2 != (undefined1 *)0x0) {
              puVar18 = puVar2;
            }
            if ((*(uint *)(puVar18 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0)
            goto LAB_146756230;
            FVar24 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)
                     (*plVar23 + 2 + (longlong)iStack_c4 * 0xc);
            FVar11 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)&local_58;
            if (local_58.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
              FVar11 = local_58.AllocatorInstance.SecondaryData;
            }
            if ((ulonglong)FVar11 <= (ulonglong)FVar24) {
              FVar11 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)&local_58;
              if (local_58.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
                FVar11 = local_58.AllocatorInstance.SecondaryData;
              }
              if ((ulonglong)FVar24 <
                  (ulonglong)((longlong)FVar11 + (longlong)local_58.ArrayMax * 2)) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar6) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
            }
            iVar9 = local_58.ArrayNum;
            plVar4 = local_d0;
            if (local_58.ArrayNum == local_58.ArrayMax) {
              iVar9 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_>
                                (0x202,&local_58.AllocatorInstance,&local_58.ArrayMax);
              plVar4 = local_d0;
            }
            local_58.ArrayNum = iVar9 + 1;
            FVar11 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)&local_58;
            if (local_58.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
              FVar11 = local_58.AllocatorInstance.SecondaryData;
            }
            *(ushort *)((longlong)FVar11 + (longlong)iVar9 * 2) = *(ushort *)FVar24;
            local_d0 = plVar23;
          }
          iStack_c4 = iVar22;
          if (iVar22 != -1) {
            do {
              iVar22 = *(int *)(*local_d0 + 4 + (longlong)iStack_c4 * 0xc);
              if (*(short *)(*local_d0 + (longlong)iStack_c4 * 0xc) == sStack_c8) break;
              iStack_c4 = iVar22;
            } while (iVar22 != -1);
            local_c0 = iVar22;
          }
          plVar23 = local_d0;
          local_d0 = plVar4;
        } while (iStack_c4 != -1);
        uVar28 = (ulonglong)local_d4;
        uVar20 = (ulonglong)local_e4;
        FVar19.Value = local_d8;
      }
      iVar22 = local_58.ArrayNum;
      puVar21 = (undefined8 *)((uVar20 & 0xffff) * 0x10 + *(longlong *)((longlong)this + 0xf0));
      local_d0 = plVar4;
      if (local_58.ArrayNum < 1) goto LAB_1467564b6;
      FVar24 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)&local_58;
      if (local_58.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
        FVar24 = local_58.AllocatorInstance.SecondaryData;
      }
      FVar11 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)
               ((longlong)FVar24 + (longlong)local_58.ArrayNum * 2);
      while( true ) {
        if (local_58.ArrayNum != iVar22) {
          local_e8[0] = 0;
          `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_e8);
        }
        if (FVar24 == FVar11) {
          uVar7 = 0;
          goto LAB_1467563b2;
        }
        bVar6 = FEntityManager::HasComponent
                          (&local_98->EntityManager,(FMovieSceneEntityID)*(ushort *)FVar24,FVar19);
        if (bVar6) break;
        FVar24 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)((longlong)FVar24 + 2);
      }
      uVar7 = 1;
LAB_1467563b2:
      uVar20 = (ulonglong)local_e4;
      *(undefined1 *)((longlong)puVar21 + 0xc) = uVar7;
      uVar25 = (uint)(uVar20 & 0xffff);
      if ((int)uVar25 < *(int *)((longlong)this + 0x160)) {
        lVar15 = (longlong)this + 0x148;
        if (*(longlong *)((longlong)this + 0x158) != 0) {
          lVar15 = *(longlong *)((longlong)this + 0x158);
        }
        if ((*(uint *)(lVar15 + ((uVar20 & 0xffff) >> 5) * 4) >> (uVar25 & 0x1f) & 1) == 0)
        goto LAB_146756449;
        TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::
        TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int><TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                  (&local_78,&local_58);
        local_90.ObjectIndex = (int)*puVar21;
        local_90.ObjectSerialNumber = (int)((ulonglong)*puVar21 >> 0x20);
        pUVar12 = FWeakObjectPtr::Get(&local_90);
        if (pUVar12 != (UObject *)0x0) {
          pUVar13 = Z_Construct_UClass_USceneComponent_NoRegister();
          iVar22 = (int)pUVar13->_padding_;
          if ((*(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38) < iVar22) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar22 * 8) !=
              &pUVar13->_padding_)) goto LAB_1467564b6;
          *(uint *)(puVar21 + 1) = (uint)(byte)pUVar12[10].field_0x1b;
LAB_146756497:
          (**(code **)(*(longlong *)pUVar12 + 0x5f8))(pUVar12,2);
        }
      }
      else {
LAB_146756449:
        TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::
        TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int><TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                  (&local_68,&local_58);
        local_88.ObjectIndex = (int)*puVar21;
        local_88.ObjectSerialNumber = (int)((ulonglong)*puVar21 >> 0x20);
        pUVar12 = FWeakObjectPtr::Get(&local_88);
        if (pUVar12 != (UObject *)0x0) {
          pUVar13 = Z_Construct_UClass_USceneComponent_NoRegister();
          iVar22 = (int)pUVar13->_padding_;
          if ((iVar22 <= *(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar22 * 8) ==
              &pUVar13->_padding_)) goto LAB_146756497;
        }
      }
LAB_1467564b6:
      if (local_58.ArrayNum == 0) {
        pFVar16 = (((TSparseArrayBase<16,4,FDefaultSparseArrayAllocator> *)((longlong)this + 0xf0))
                  ->Data).AllocatorInstance.Data + (uVar20 & 0xffff) * 0x10;
        if (*(int *)((longlong)this + 0xa8) != *(int *)((longlong)this + 0xd4)) {
          uVar25 = *(uint *)(pFVar16 + 4);
          iVar22 = *(int *)pFVar16;
          uVar17 = iVar22 - uVar25 ^ uVar25 >> 0xd;
          uVar8 = (-0x61c88647 - uVar17) - uVar25 ^ uVar17 << 8;
          uVar26 = (uVar25 - uVar8) - uVar17 ^ uVar8 >> 0xd;
          uVar17 = (uVar17 - uVar26) - uVar8 ^ uVar26 >> 0xc;
          uVar8 = (uVar8 - uVar17) - uVar26 ^ uVar17 << 0x10;
          uVar26 = (uVar26 - uVar8) - uVar17 ^ uVar8 >> 5;
          uVar17 = (uVar17 - uVar26) - uVar8 ^ uVar26 >> 3;
          uVar8 = (uVar8 - uVar17) - uVar26 ^ uVar17 << 10;
          lVar15 = (longlong)this + 0xd8;
          if (*(longlong *)((longlong)this + 0xe0) != 0) {
            lVar15 = *(longlong *)((longlong)this + 0xe0);
          }
          iVar9 = *(int *)(lVar15 + ((longlong)*(int *)((longlong)this + 0xe8) - 1U &
                                    (longlong)(int)((uVar26 - uVar8) - uVar17 ^ uVar8 >> 0xf)) * 4);
          if (iVar9 != -1) {
            lVar15 = *(longlong *)
                      &((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>,FDefaultSetAllocator>
                         *)((longlong)this + 0xa0))->Elements;
            do {
              lVar14 = (longlong)iVar9;
              if ((*(int *)(lVar15 + lVar14 * 0x14) == iVar22) &&
                 (*(uint *)(lVar15 + 4 + lVar14 * 0x14) == uVar25)) {
                TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>,FDefaultSetAllocator>
                ::RemoveByIndex((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>,FDefaultSetAllocator>
                                 *)((longlong)this + 0xa0),iVar9);
                break;
              }
              iVar9 = *(int *)(lVar15 + 0xc + lVar14 * 0x14);
            } while (iVar9 != -1);
          }
        }
        TSparseArrayBase<16,4,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                  ((TSparseArrayBase<16,4,FDefaultSparseArrayAllocator> *)((longlong)this + 0xf0),
                   (uint)uVar20 & 0xffff,1);
      }
      uVar25 = *(uint *)((longlong)this + 0x140);
      local_e0 = local_e0 & ~(uint)local_b8;
      lVar15 = (longlong)this + 0x128;
      if (*(longlong *)((longlong)this + 0x138) != 0) {
        lVar15 = *(longlong *)((longlong)this + 0x138);
      }
      uVar8 = local_e0 & *(uint *)(lVar15 + (longlong)(int)uVar28 * 4);
      while (uVar8 == 0) {
        local_d4 = (int)uVar28 + 1;
        uVar28 = (ulonglong)local_d4;
        local_dc = local_dc + 0x20;
        local_e4 = uVar25;
        if ((int)(((int)(uVar25 - 1) >> 0x1f & 0x1fU) + (uVar25 - 1)) >> 5 < (int)local_d4)
        goto LAB_146756676;
        uVar8 = *(uint *)(lVar15 + (longlong)(int)local_d4 * 4);
        local_e0 = 0xffffffff;
      }
      local_b8 = CONCAT44(local_b8._4_4_,-uVar8 & uVar8);
      uVar20 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_7c = (int)lVar15;
      local_e4 = local_7c + -1 + local_dc;
      if ((int)uVar25 < (int)local_e4) {
        local_e4 = uVar25;
      }
LAB_146756676:
      uVar20 = (ulonglong)local_e4;
    } while ((int)local_e4 < *(int *)((longlong)this + 0x140));
  }
  if (local_58.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
LAB_1467566c2:
  *(undefined4 *)((longlong)this + 0x140) = 0;
  if ((*(int *)((longlong)this + 0x144) < 0) || (0x80 < *(int *)((longlong)this + 0x144))) {
    *(undefined4 *)((longlong)this + 0x144) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x128),0);
  }
  *(undefined4 *)((longlong)this + 0x160) = 0;
  if ((*(int *)((longlong)this + 0x164) < 0) || (0x80 < *(int *)((longlong)this + 0x164))) {
    *(undefined4 *)((longlong)this + 0x164) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x148),0);
  }
  return;
}

// UpdateFromComponents<UObject_*> @ 14675cce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey>::
UpdateFromComponents<UObject_*>
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey> *this,
          UMovieSceneEntitySystemLinker *param_1,FEntityComponentFilter *param_2,
          TComponentTypeID<UObject_*> param_3)

{
  FEntityManager *this_00;
  code *pcVar1;
  bool bVar2;
  EEntityThreadingModel EVar3;
  FBuiltInComponentTypes *pFVar4;
  TFilteredEntityTask<> *pTVar5;
  FEntityAllocation *pFVar6;
  FEntityAllocation *pFVar7;
  undefined1 auStack_3b8 [32];
  FComponentTypeID local_398;
  FComponentTypeID local_396;
  FComponentTypeID local_394;
  TComponentTypeID<UObject_*> local_392;
  <lambda_2> local_390;
  FEntityAllocationIteratorProxy local_388;
  FEntityAllocationProxy local_378;
  FEntityAllocationIterator local_368;
  undefined1 local_350 [24];
  byte bStack_338;
  undefined7 uStack_337;
  undefined4 local_330;
  uint uStack_32c;
  undefined8 local_320;
  TStatIdData *pTStack_318;
  byte local_310;
  undefined7 uStack_30f;
  undefined4 uStack_308;
  uint uStack_304;
  initializer_list<UE::MovieScene::FComponentTypeID> local_2f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_2e8;
  FEntityAllocationIterator local_2d8;
  FEntityAllocationWriteContext local_2c0;
  TComponentTypeID<UObject_*> local_2b8;
  undefined6 uStack_2b6;
  undefined8 uStack_2b0;
  TStatIdData *pTStack_2a8;
  ulonglong uStack_2a0;
  undefined8 uStack_298;
  undefined1 local_288 [24];
  ulonglong uStack_270;
  undefined8 local_268;
  int local_230;
  int local_22c;
  int local_1f8;
  int local_1f4;
  ForAnyElementType local_1f0;
  undefined8 local_1e8;
  int local_1b0;
  int local_1ac;
  int local_178;
  int local_174;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UObject_*>_>
  local_168;
  FEntityComponentFilter local_140;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  if (this->bIsInitialized == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                       ,0x9c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = FBuiltInComponentTypes::Get();
  local_350._16_8_ = &TStatId::TStatId_NAME_None;
  uStack_270 = CONCAT71(uStack_337,bStack_338) & 0xffffffffffffffe0;
  local_330 = 0x6ff;
  local_350._8_8_ = 0;
  uStack_32c = uStack_32c & 0xffffff00;
  local_288._16_8_ = &TStatId::TStatId_NAME_None;
  local_288._0_8_ = local_350._0_8_;
  local_288._8_8_ = 0;
  local_268._4_4_ = uStack_32c;
  local_268._0_4_ = 0x6ff;
  local_230 = 0;
  local_22c = 0x180;
  local_1f8 = 0;
  local_1f4 = 0x180;
  local_1f0.Data = (FScriptContainerElement *)0x0;
  local_1e8._0_4_ = 0;
  local_1e8._4_4_ = 0;
  local_1b0 = 0;
  local_1ac = 0x180;
  local_178 = 0;
  local_174 = 0x180;
  bStack_338 = bStack_338 & 0xe0;
  pTVar5 = TFilteredEntityTask<>::CombineFilter((TFilteredEntityTask<> *)local_288,param_2);
  local_394.Value = (pFVar4->Tags).NeedsUnlink.Value;
  local_2f8._First = &local_394;
  local_2f8._Last = (FComponentTypeID *)&local_390;
  local_392 = param_3;
  FComponentMask::SetAll(&(pTVar5->Filter).AllMask,&local_2f8);
  this_00 = &param_1->EntityManager;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_2c0,this_00);
  EVar3 = FEntityManager::GetThreadingModel(this_00);
  FEntityManager::Iterate(this_00,&local_388,&pTVar5->Filter);
  FEntityAllocationIterator::FEntityAllocationIterator
            (&local_368,local_388.Manager,local_388.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_2d8,local_388.Manager);
  bVar2 = FEntityAllocationIterator::operator!=(&local_368,&local_2d8);
  if (bVar2) {
    do {
      FEntityAllocationIterator::operator*(&local_368,&local_378);
      pFVar6 = FEntityAllocationProxy::GetAllocation(&local_378);
      if (EVar3 == NoThreading) {
        pFVar6->LockMode = LockFree;
        pFVar7 = FEntityAllocationProxy::GetAllocation(&local_378);
        VisitUnlinkedAllocationImpl(this,pFVar7);
        if (pFVar6 != (FEntityAllocation *)0x0) {
          pFVar6->LockMode = Mutex;
        }
      }
      else {
        pFVar6 = FEntityAllocationProxy::GetAllocation(&local_378);
        VisitUnlinkedAllocationImpl(this,pFVar6);
      }
      FEntityAllocationIterator::operator++(&local_368);
      bVar2 = FEntityAllocationIterator::operator!=(&local_368,&local_2d8);
    } while (bVar2);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_2d8);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_368);
  if (local_1f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data);
  }
  pTStack_318 = &TStatId::TStatId_NAME_None;
  local_320 = 0;
  uStack_304 = uStack_304 & 0xffffff00;
  uStack_308 = 0x6ff;
  uStack_2a0 = CONCAT71(uStack_30f,local_310) & 0xffffffffffffffe0;
  uStack_298._4_4_ = uStack_304;
  uStack_298._0_4_ = AnyHiPriThreadHiPriTask;
  uStack_2b0 = 0;
  pTStack_2a8 = &TStatId::TStatId_NAME_None;
  local_168._2_6_ = uStack_2b6;
  local_168.Accessors = (TTuple<UE::MovieScene::TReadAccess<UObject_*>_>)param_3;
  local_168.CommonParams.TaskParams.DebugName = (wchar_t *)0x0;
  local_168.CommonParams.TaskParams.StatId.StatIdPtr = &TStatId::TStatId_NAME_None;
  local_310 = local_310 & 0xe0;
  local_2b8 = param_3;
  local_168.CommonParams.TaskParams._16_8_ = uStack_2a0;
  local_168.CommonParams._24_8_ = uStack_298;
  FEntityComponentFilter::FEntityComponentFilter(&local_140,param_2);
  local_90 = 0;
  local_8c = 0x180;
  local_58 = 0;
  local_54 = 0x180;
  AddAccessorToFilter((FComponentAccess *)&local_168,&local_140);
  local_398.Value = (pFVar4->Tags).NeedsLink.Value;
  local_2e8._First = &local_398;
  local_2e8._Last = &local_396;
  FComponentMask::SetAll(&local_140.AllMask,&local_2e8);
  local_390.__this = this;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UObject_*>_>::
  Iterate_PerAllocationImpl<_UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey>::UpdateFromComponents<UObject_*>_::__l2::<lambda_2>_>
            (&local_168,this_00,&local_140,&local_390);
  if (local_140.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// UpdateFromComponents<UObject_*> @ 14675d050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TOverlappingEntityTrackerImpl<enum_EComponentMobility::Type,FObjectKey>::
UpdateFromComponents<UObject_*>
          (void *this,UMovieSceneEntitySystemLinker *param_1,FEntityComponentFilter *param_2,
          TComponentTypeID<UObject_*> param_3)

{
  FEntityManager *this_00;
  code *pcVar1;
  bool bVar2;
  EEntityThreadingModel EVar3;
  FBuiltInComponentTypes *pFVar4;
  TFilteredEntityTask<> *pTVar5;
  FEntityAllocation *pFVar6;
  FEntityAllocation *pFVar7;
  undefined1 auStack_3b8 [32];
  FComponentTypeID local_398;
  FComponentTypeID local_396;
  FComponentTypeID local_394;
  TComponentTypeID<UObject_*> local_392;
  <lambda_2> local_390;
  FEntityAllocationIteratorProxy local_388;
  FEntityAllocationProxy local_378;
  FEntityAllocationIterator local_368;
  undefined1 local_350 [24];
  byte bStack_338;
  undefined7 uStack_337;
  undefined4 local_330;
  uint uStack_32c;
  undefined8 local_320;
  TStatIdData *pTStack_318;
  byte local_310;
  undefined7 uStack_30f;
  undefined4 uStack_308;
  uint uStack_304;
  initializer_list<UE::MovieScene::FComponentTypeID> local_2f8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_2e8;
  FEntityAllocationIterator local_2d8;
  FEntityAllocationWriteContext local_2c0;
  TComponentTypeID<UObject_*> local_2b8;
  undefined6 uStack_2b6;
  undefined8 uStack_2b0;
  TStatIdData *pTStack_2a8;
  ulonglong uStack_2a0;
  undefined8 uStack_298;
  undefined1 local_288 [24];
  ulonglong uStack_270;
  undefined8 local_268;
  int local_230;
  int local_22c;
  int local_1f8;
  int local_1f4;
  ForAnyElementType local_1f0;
  undefined8 local_1e8;
  int local_1b0;
  int local_1ac;
  int local_178;
  int local_174;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UObject_*>_>
  local_168;
  FEntityComponentFilter local_140;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  if (*(char *)((longlong)this + 0x168) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                       ,0x9c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = FBuiltInComponentTypes::Get();
  local_350._16_8_ = &TStatId::TStatId_NAME_None;
  uStack_270 = CONCAT71(uStack_337,bStack_338) & 0xffffffffffffffe0;
  local_330 = 0x6ff;
  local_350._8_8_ = 0;
  uStack_32c = uStack_32c & 0xffffff00;
  local_288._16_8_ = &TStatId::TStatId_NAME_None;
  local_288._0_8_ = local_350._0_8_;
  local_288._8_8_ = 0;
  local_268._4_4_ = uStack_32c;
  local_268._0_4_ = 0x6ff;
  local_230 = 0;
  local_22c = 0x180;
  local_1f8 = 0;
  local_1f4 = 0x180;
  local_1f0.Data = (FScriptContainerElement *)0x0;
  local_1e8._0_4_ = 0;
  local_1e8._4_4_ = 0;
  local_1b0 = 0;
  local_1ac = 0x180;
  local_178 = 0;
  local_174 = 0x180;
  bStack_338 = bStack_338 & 0xe0;
  pTVar5 = TFilteredEntityTask<>::CombineFilter((TFilteredEntityTask<> *)local_288,param_2);
  local_394.Value = (pFVar4->Tags).NeedsUnlink.Value;
  local_2f8._First = &local_394;
  local_2f8._Last = (FComponentTypeID *)&local_390;
  local_392 = param_3;
  FComponentMask::SetAll(&(pTVar5->Filter).AllMask,&local_2f8);
  this_00 = &param_1->EntityManager;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_2c0,this_00);
  EVar3 = FEntityManager::GetThreadingModel(this_00);
  FEntityManager::Iterate(this_00,&local_388,&pTVar5->Filter);
  FEntityAllocationIterator::FEntityAllocationIterator
            (&local_368,local_388.Manager,local_388.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_2d8,local_388.Manager);
  bVar2 = FEntityAllocationIterator::operator!=(&local_368,&local_2d8);
  if (bVar2) {
    do {
      FEntityAllocationIterator::operator*(&local_368,&local_378);
      pFVar6 = FEntityAllocationProxy::GetAllocation(&local_378);
      if (EVar3 == NoThreading) {
        pFVar6->LockMode = LockFree;
        pFVar7 = FEntityAllocationProxy::GetAllocation(&local_378);
        VisitUnlinkedAllocationImpl(this,pFVar7);
        if (pFVar6 != (FEntityAllocation *)0x0) {
          pFVar6->LockMode = Mutex;
        }
      }
      else {
        pFVar6 = FEntityAllocationProxy::GetAllocation(&local_378);
        VisitUnlinkedAllocationImpl(this,pFVar6);
      }
      FEntityAllocationIterator::operator++(&local_368);
      bVar2 = FEntityAllocationIterator::operator!=(&local_368,&local_2d8);
    } while (bVar2);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_2d8);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_368);
  if (local_1f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data);
  }
  pTStack_318 = &TStatId::TStatId_NAME_None;
  local_320 = 0;
  uStack_304 = uStack_304 & 0xffffff00;
  uStack_308 = 0x6ff;
  uStack_2a0 = CONCAT71(uStack_30f,local_310) & 0xffffffffffffffe0;
  uStack_298._4_4_ = uStack_304;
  uStack_298._0_4_ = AnyHiPriThreadHiPriTask;
  uStack_2b0 = 0;
  pTStack_2a8 = &TStatId::TStatId_NAME_None;
  local_168._2_6_ = uStack_2b6;
  local_168.Accessors = (TTuple<UE::MovieScene::TReadAccess<UObject_*>_>)param_3;
  local_168.CommonParams.TaskParams.DebugName = (wchar_t *)0x0;
  local_168.CommonParams.TaskParams.StatId.StatIdPtr = &TStatId::TStatId_NAME_None;
  local_310 = local_310 & 0xe0;
  local_2b8 = param_3;
  local_168.CommonParams.TaskParams._16_8_ = uStack_2a0;
  local_168.CommonParams._24_8_ = uStack_298;
  FEntityComponentFilter::FEntityComponentFilter(&local_140,param_2);
  local_90 = 0;
  local_8c = 0x180;
  local_58 = 0;
  local_54 = 0x180;
  AddAccessorToFilter((FComponentAccess *)&local_168,&local_140);
  local_398.Value = (pFVar4->Tags).NeedsLink.Value;
  local_2e8._First = &local_398;
  local_2e8._Last = &local_396;
  FComponentMask::SetAll(&local_140.AllMask,&local_2e8);
  local_390.__this = this;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UObject_*>_>::
  Iterate_PerAllocationImpl<_UE::MovieScene::TOverlappingEntityTrackerImpl<enum_EComponentMobility::Type,FObjectKey>::UpdateFromComponents<UObject_*>_::__l2::<lambda_2>_>
            (&local_168,this_00,&local_140,&local_390);
  if (local_140.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// VisitActiveAllocationImpl<UObject_*> @ 14675d3c0

void __thiscall
UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey>::
VisitActiveAllocationImpl<UObject_*>
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey> *this,
          FEntityAllocation *param_1,TComponentPtr<UObject_*_const> param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  FBuiltInComponentTypes *pFVar5;
  FComponentHeader *pFVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  ulonglong uVar9;
  FComponentHeader *pFVar10;
  FMovieSceneEntityID *pFVar11;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_58;
  UObject *local_50;
  UObject *local_48 [2];
  
  if ((this->bIsInitialized == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                         ,0x182,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar9 = (ulonglong)param_1->Size;
  pFVar11 = param_1->EntityIDs;
  pFVar5 = FBuiltInComponentTypes::Get();
  pFVar6 = param_1->ComponentHeaders;
  pFVar10 = (FComponentHeader *)0x0;
  pFVar8 = pFVar6 + param_1->NumComponents;
  for (; (pFVar7 = pFVar10, pFVar6 != pFVar8 &&
         (pFVar7 = pFVar6, (pFVar6->ComponentType).Value != (pFVar5->Tags).NeedsLink.Value));
      pFVar6 = pFVar6 + 1) {
  }
  pFVar5 = FBuiltInComponentTypes::Get();
  pFVar6 = param_1->ComponentHeaders;
  pFVar8 = pFVar6 + param_1->NumComponents;
  do {
    if (pFVar6 == pFVar8) {
LAB_14675d497:
      if (uVar9 != 0) {
        do {
          pUVar1 = param_2.ComponentPtr[(longlong)pFVar10];
          local_58.ObjectIndex = 0;
          local_58.ObjectSerialNumber = 0;
          if (pUVar1 != (UObject *)0x0) {
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar1);
            }
            local_res20.ObjectIndex = 0;
            local_res20.ObjectSerialNumber = 0;
            local_48[0] = pUVar1;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar1);
            }
            FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_48);
            local_58 = local_res20;
          }
          MakeOutput(this,(FMovieSceneEntityID)pFVar11->Value,
                     (TOverlappingEntityInput<FObjectKey> *)&local_58,
                     pFVar7 != (FComponentHeader *)0x0);
          pFVar10 = (FComponentHeader *)((longlong)&pFVar10->_padding_ + 1);
          pFVar11 = pFVar11 + 1;
        } while ((longlong)pFVar10 < (longlong)uVar9);
      }
      return;
    }
    if ((pFVar6->ComponentType).Value == (pFVar5->Tags).RestoreState.Value) {
      if (pFVar6 != (FComponentHeader *)0x0) {
        if (uVar9 == 0) {
          return;
        }
        do {
          pUVar1 = param_2.ComponentPtr[(longlong)pFVar10];
          local_res10.ObjectIndex = 0;
          local_res10.ObjectSerialNumber = 0;
          if (pUVar1 != (UObject *)0x0) {
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar1);
            }
            local_res8.ObjectIndex = 0;
            local_res8.ObjectSerialNumber = 0;
            local_50 = pUVar1;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar1);
            }
            FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_50);
            local_res10 = local_res8;
          }
          uVar4 = MakeOutput(this,(FMovieSceneEntityID)pFVar11->Value,
                             (TOverlappingEntityInput<FObjectKey> *)&local_res10,
                             pFVar7 != (FComponentHeader *)0x0);
          pFVar10 = (FComponentHeader *)((longlong)&pFVar10->_padding_ + 1);
          pFVar11 = pFVar11 + 1;
          *(undefined1 *)((ulonglong)uVar4 * 0x20 + 0x1c + *(longlong *)&this->Outputs) = 1;
        } while ((longlong)pFVar10 < (longlong)uVar9);
        return;
      }
      goto LAB_14675d497;
    }
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// VisitActiveAllocationImpl<UObject_*> @ 14675d610

void __thiscall
UE::MovieScene::TOverlappingEntityTrackerImpl<enum_EComponentMobility::Type,FObjectKey>::
VisitActiveAllocationImpl<UObject_*>
          (void *this,FEntityAllocation *param_1,TComponentPtr<UObject_*_const> param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  FBuiltInComponentTypes *pFVar5;
  FComponentHeader *pFVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  ulonglong uVar9;
  FComponentHeader *pFVar10;
  FMovieSceneEntityID *pFVar11;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_58;
  UObject *local_50;
  UObject *local_48 [2];
  
  if ((*(char *)((longlong)this + 0x168) == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                         ,0x182,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar9 = (ulonglong)param_1->Size;
  pFVar11 = param_1->EntityIDs;
  pFVar5 = FBuiltInComponentTypes::Get();
  pFVar6 = param_1->ComponentHeaders;
  pFVar10 = (FComponentHeader *)0x0;
  pFVar8 = pFVar6 + param_1->NumComponents;
  for (; (pFVar7 = pFVar10, pFVar6 != pFVar8 &&
         (pFVar7 = pFVar6, (pFVar6->ComponentType).Value != (pFVar5->Tags).NeedsLink.Value));
      pFVar6 = pFVar6 + 1) {
  }
  pFVar5 = FBuiltInComponentTypes::Get();
  pFVar6 = param_1->ComponentHeaders;
  pFVar8 = pFVar6 + param_1->NumComponents;
  do {
    if (pFVar6 == pFVar8) {
LAB_14675d6e7:
      if (uVar9 != 0) {
        do {
          pUVar1 = param_2.ComponentPtr[(longlong)pFVar10];
          local_58.ObjectIndex = 0;
          local_58.ObjectSerialNumber = 0;
          if (pUVar1 != (UObject *)0x0) {
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar1);
            }
            local_res20.ObjectIndex = 0;
            local_res20.ObjectSerialNumber = 0;
            local_48[0] = pUVar1;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar1);
            }
            FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_48);
            local_58 = local_res20;
          }
          MakeOutput(this,(FMovieSceneEntityID)pFVar11->Value,
                     (TOverlappingEntityInput<FObjectKey> *)&local_58,
                     pFVar7 != (FComponentHeader *)0x0);
          pFVar10 = (FComponentHeader *)((longlong)&pFVar10->_padding_ + 1);
          pFVar11 = pFVar11 + 1;
        } while ((longlong)pFVar10 < (longlong)uVar9);
      }
      return;
    }
    if ((pFVar6->ComponentType).Value == (pFVar5->Tags).RestoreState.Value) {
      if (pFVar6 != (FComponentHeader *)0x0) {
        if (uVar9 == 0) {
          return;
        }
        do {
          pUVar1 = param_2.ComponentPtr[(longlong)pFVar10];
          local_res10.ObjectIndex = 0;
          local_res10.ObjectSerialNumber = 0;
          if (pUVar1 != (UObject *)0x0) {
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar1);
            }
            local_res8.ObjectIndex = 0;
            local_res8.ObjectSerialNumber = 0;
            local_50 = pUVar1;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar1);
            }
            FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_50);
            local_res10 = local_res8;
          }
          uVar4 = MakeOutput(this,(FMovieSceneEntityID)pFVar11->Value,
                             (TOverlappingEntityInput<FObjectKey> *)&local_res10,
                             pFVar7 != (FComponentHeader *)0x0);
          pFVar10 = (FComponentHeader *)((longlong)&pFVar10->_padding_ + 1);
          pFVar11 = pFVar11 + 1;
          *(undefined1 *)(*(longlong *)((longlong)this + 0xf0) + 0xc + (ulonglong)uVar4 * 0x10) = 1;
        } while ((longlong)pFVar10 < (longlong)uVar9);
        return;
      }
      goto LAB_14675d6e7;
    }
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// VisitActiveAllocationImpl<UObject_*,FName> @ 14675d860

void __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::
VisitActiveAllocationImpl<UObject_*,FName>
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
           *this,FEntityAllocation *param_1,TComponentPtr<UObject_*_const> param_2,
          TComponentPtr<FName_const_> param_3)

{
  FMovieSceneEntityID *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  FBuiltInComponentTypes *pFVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  FComponentHeader *pFVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  UObject *local_70;
  UObject *local_68;
  FWeakObjectPtr local_60;
  undefined8 local_58;
  FWeakObjectPtr local_50;
  undefined8 local_48;
  
  if ((this->bIsInitialized == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                         ,0x182,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = param_1->EntityIDs;
  uVar11 = (ulonglong)param_1->Size;
  pFVar6 = FBuiltInComponentTypes::Get();
  pFVar7 = param_1->ComponentHeaders;
  pFVar8 = pFVar7 + param_1->NumComponents;
  for (; pFVar7 != pFVar8; pFVar7 = pFVar7 + 1) {
    if ((pFVar7->ComponentType).Value == (pFVar6->Tags).NeedsLink.Value) goto LAB_14675d8f2;
  }
  pFVar7 = (FComponentHeader *)0x0;
LAB_14675d8f2:
  pFVar6 = FBuiltInComponentTypes::Get();
  pFVar8 = param_1->ComponentHeaders;
  pFVar9 = pFVar8 + param_1->NumComponents;
  do {
    if (pFVar8 == pFVar9) {
LAB_14675d939:
      if (uVar11 != 0) {
        lVar12 = 0;
        lVar10 = (longlong)param_3.ComponentPtr - (longlong)param_2.ComponentPtr;
        do {
          pUVar2 = *param_2.ComponentPtr;
          local_50.ObjectIndex = 0;
          local_50.ObjectSerialNumber = 0;
          if (pUVar2 != (UObject *)0x0) {
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar2);
            }
            local_res10.ObjectIndex = 0;
            local_res10.ObjectSerialNumber = 0;
            local_68 = pUVar2;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar2);
            }
            FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_68);
            local_50 = local_res10;
          }
          local_48 = *(undefined8 *)((longlong)param_2.ComponentPtr + lVar10);
          MakeOutput(this,(FMovieSceneEntityID)pFVar1[lVar12].Value,
                     (TOverlappingEntityInput<FObjectKey,FName> *)&local_50,
                     pFVar7 != (FComponentHeader *)0x0);
          lVar12 = lVar12 + 1;
          param_2.ComponentPtr = param_2.ComponentPtr + 1;
        } while (lVar12 < (longlong)uVar11);
      }
      return;
    }
    if ((pFVar8->ComponentType).Value == (pFVar6->Tags).RestoreState.Value) {
      if (pFVar8 != (FComponentHeader *)0x0) {
        if (uVar11 == 0) {
          return;
        }
        lVar12 = 0;
        lVar10 = (longlong)param_3.ComponentPtr - (longlong)param_2.ComponentPtr;
        do {
          pUVar2 = *param_2.ComponentPtr;
          local_60.ObjectIndex = 0;
          local_60.ObjectSerialNumber = 0;
          if (pUVar2 != (UObject *)0x0) {
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar2);
            }
            local_res8.ObjectIndex = 0;
            local_res8.ObjectSerialNumber = 0;
            local_70 = pUVar2;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar2);
            }
            FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_70);
            local_60 = local_res8;
          }
          local_58 = *(undefined8 *)(lVar10 + (longlong)param_2.ComponentPtr);
          uVar5 = MakeOutput(this,(FMovieSceneEntityID)pFVar1[lVar12].Value,
                             (TOverlappingEntityInput<FObjectKey,FName> *)&local_60,
                             pFVar7 != (FComponentHeader *)0x0);
          lVar12 = lVar12 + 1;
          param_2.ComponentPtr = param_2.ComponentPtr + 1;
          *(undefined1 *)(*(longlong *)&this->Outputs + 0x2c + (ulonglong)uVar5 * 0x30) = 1;
        } while (lVar12 < (longlong)uVar11);
        return;
      }
      goto LAB_14675d939;
    }
    pFVar8 = pFVar8 + 1;
  } while( true );
}

// ~TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName> @ 146767830

void __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::
~TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
           *this)

{
  ForElementType<unsigned_int> FVar1;
  void *pvVar2;
  
  FVar1 = (this->NewOutputs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::FOutput,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::FOutput,FDefaultSparseArrayAllocator>
            (&this->Outputs);
  *(undefined4 *)&(this->KeyToOutput).field_0x48 = 0;
  pvVar2 = *(void **)&(this->KeyToOutput).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyToOutput);
  *(undefined4 *)&(this->OutputToEntity).field_0x48 = 0;
  pvVar2 = *(void **)&(this->OutputToEntity).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OutputToEntity);
  *(undefined4 *)&(this->EntityToOutput).field_0x48 = 0;
  pvVar2 = *(void **)&(this->EntityToOutput).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey> @ 1467678f0

void __thiscall
UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey>::
~TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey>
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey> *this)

{
  ForElementType<unsigned_int> FVar1;
  void *pvVar2;
  
  FVar1 = (this->NewOutputs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey>::FOutput,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey>::FOutput,FDefaultSparseArrayAllocator>
            (&this->Outputs);
  *(undefined4 *)&(this->KeyToOutput).field_0x48 = 0;
  pvVar2 = *(void **)&(this->KeyToOutput).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyToOutput);
  *(undefined4 *)&(this->OutputToEntity).field_0x48 = 0;
  pvVar2 = *(void **)&(this->OutputToEntity).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OutputToEntity);
  *(undefined4 *)&(this->EntityToOutput).field_0x48 = 0;
  pvVar2 = *(void **)&(this->EntityToOutput).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TOverlappingEntityTrackerImpl<enum_EComponentMobility::Type,FObjectKey> @ 1467679b0

void __thiscall
UE::MovieScene::TOverlappingEntityTrackerImpl<enum_EComponentMobility::Type,FObjectKey>::
~TOverlappingEntityTrackerImpl<enum_EComponentMobility::Type,FObjectKey>(void *this)

{
  if (*(void **)((longlong)this + 0x158) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x158));
  }
  if (*(void **)((longlong)this + 0x138) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x138));
  }
  TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<enum_EComponentMobility::Type,FObjectKey>::FOutput,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<enum_EComponentMobility::Type,FObjectKey>::FOutput,FDefaultSparseArrayAllocator>
            ((void *)((longlong)this + 0xf0));
  *(undefined4 *)((longlong)this + 0xe8) = 0;
  if (*(void **)((longlong)this + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe0));
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0xa0));
  *(undefined4 *)((longlong)this + 0x98) = 0;
  if (*(void **)((longlong)this + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x90));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x50));
  *(undefined4 *)((longlong)this + 0x48) = 0;
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (this);
  return;
}

// CreateOutputByKey @ 146786eb0

ushort __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::
CreateOutputByKey(TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
                  *this,TOverlappingEntityInput<FObjectKey,FName> *param_1)

{
  TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::FOutput,FDefaultSparseArrayAllocator>
  *this_00;
  TBitArray<FDefaultBitArrayAllocator> *this_01;
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ushort *puVar12;
  ForElementType<unsigned_int> FVar13;
  ushort local_res8 [4];
  FSparseArrayAllocationInfo local_88;
  TOverlappingEntityInput<FObjectKey,FName> *local_78;
  ushort *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  uint uStack_3c;
  
  uVar8 = MovieScene::GetTypeHash(param_1);
  iVar9 = TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>_>
                    ((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short,0>,FDefaultSetAllocator>
                      *)&this->KeyToOutput,uVar8,param_1);
  if (iVar9 != -1) {
    lVar11 = (longlong)iVar9 * 0x1c + *(longlong *)&this->KeyToOutput;
    puVar12 = (ushort *)(lVar11 + 0x10);
    if (lVar11 == 0) {
      puVar12 = (ushort *)0x0;
    }
    if ((puVar12 != (ushort *)0x0) && (*puVar12 != 0xffff)) {
      return *puVar12;
    }
  }
  this_00 = &this->Outputs;
  iVar9 = *(int *)&(this->Outputs).field_0x34;
  local_48 = 0;
  uStack_44 = 0xffff;
  uStack_42 = 0xff;
  uStack_40 = 0xffff;
  uStack_3c = uStack_3c & 0xffffff00;
  uVar4 = *(undefined8 *)&param_1->Key;
  uVar5 = *(undefined8 *)&(param_1->Key).field_0x8;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = uVar4;
  uStack_60 = uVar5;
  if (iVar9 == 0) {
    iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x30,4,1,(ForAnyElementType *)this_00,(int *)&(this->Outputs).field_0x8,
                        (int *)&(this->Outputs).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Outputs).field_0x10,false);
  }
  else {
    iVar10 = *(int *)&(this->Outputs).field_0x30;
    iVar9 = iVar9 + -1;
    iVar2 = *(int *)(*(longlong *)&this_00->field_0x0 + 4 + (longlong)iVar10 * 0x30);
    *(int *)&(this->Outputs).field_0x30 = iVar2;
    *(int *)&(this->Outputs).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,4,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<48,4,FDefaultSparseArrayAllocator> *)this_00,&local_88,iVar10);
  if (local_88.Pointer != (undefined8 *)0x0) {
    *(undefined8 *)local_88.Pointer = uVar4;
    *(undefined8 *)((longlong)local_88.Pointer + 8) = uVar5;
    *(undefined8 *)((longlong)local_88.Pointer + 0x10) = local_58;
    *(undefined8 *)((longlong)local_88.Pointer + 0x18) = uStack_50;
    *(ulonglong *)((longlong)local_88.Pointer + 0x20) =
         CONCAT17(uStack_41,CONCAT16(uStack_42,CONCAT24(uStack_44,local_48)));
    *(ulonglong *)((longlong)local_88.Pointer + 0x28) =
         CONCAT44(uStack_3c,CONCAT22(uStack_3e,uStack_40));
  }
  if ((0xfffe < local_88.Index) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < NO_OUTPUT",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                         ,0x1d6,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  uVar8 = local_88.Index & 0xffff;
  this_01 = &this->NewOutputs;
  local_res8[0] = (ushort)local_88.Index;
  iVar9 = (uVar8 - (this->NewOutputs).NumBits) + 1;
  if (0 < iVar9) {
    iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_01,iVar9);
    TBitArray<FDefaultBitArrayAllocator>::SetRange(this_01,iVar10,iVar9,false);
    uVar8 = (uint)local_res8[0];
  }
  if (((this->NewOutputs).NumBits <= (int)uVar8) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  FVar13 = (this->NewOutputs).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<unsigned_int>)0x0) {
    FVar13 = (ForElementType<unsigned_int>)this_01;
  }
  puVar1 = (uint *)((longlong)FVar13 + (ulonglong)(uVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar8 & 0x1f);
  local_70 = local_res8;
  local_78 = param_1;
  TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>_const_&,unsigned_short_const_&>_>
            ((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>,unsigned_short,0>,FDefaultSetAllocator>
              *)&this->KeyToOutput,
             (TPairInitializer<UE::MovieScene::TOverlappingEntityInput<FObjectKey,FName>_const_&,unsigned_short_const_&>
              *)&stack0x00000018,(bool *)&local_78);
  return local_res8[0];
}

// CreateOutputByKey @ 146787140

ushort __thiscall
UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey>::
CreateOutputByKey(TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey> *this
                 ,TOverlappingEntityInput<FObjectKey> *param_1)

{
  TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey>::FOutput,FDefaultSparseArrayAllocator>
  *this_00;
  TBitArray<FDefaultBitArrayAllocator> *this_01;
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  TTuple<FObjectKey> TVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  ForElementType<unsigned_int> FVar10;
  int iVar11;
  ushort local_res8 [4];
  FSparseArrayAllocationInfo local_68;
  TOverlappingEntityInput<FObjectKey> *local_58;
  ushort *local_50;
  TTuple<FObjectKey> local_48;
  TTuple<FObjectKey> TStack_40;
  TTuple<FObjectKey> local_38;
  undefined2 uStack_30;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  uint uStack_2c;
  
  puVar8 = TMapBase<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>_>
           ::Find((TMapBase<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>_>
                   *)&this->KeyToOutput,param_1);
  if ((puVar8 == (ushort *)0x0) || (local_res8[0] = *puVar8, local_res8[0] == 0xffff)) {
    local_48 = param_1->Key;
    this_00 = &this->Outputs;
    iVar11 = *(int *)&(this->Outputs).field_0x34;
    TStack_40 = (TTuple<FObjectKey>)0x0;
    local_38 = (TTuple<FObjectKey>)0x0;
    uStack_30 = 0;
    uStack_2e = 0;
    uStack_2c = uStack_2c & 0xffffff00;
    if (iVar11 == 0) {
      iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,4,1,(ForAnyElementType *)this_00,(int *)&(this->Outputs).field_0x8,
                         (int *)&(this->Outputs).field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Outputs).field_0x10,false);
    }
    else {
      iVar7 = *(int *)&(this->Outputs).field_0x30;
      iVar2 = *(int *)((longlong)iVar7 * 0x20 + 4 + *(longlong *)&this_00->field_0x0);
      iVar11 = iVar11 + -1;
      *(int *)&(this->Outputs).field_0x30 = iVar2;
      *(int *)&(this->Outputs).field_0x34 = iVar11;
      if (iVar11 != 0) {
        *(undefined4 *)((longlong)iVar2 * 0x20 + *(longlong *)&this_00->field_0x0) = 0xffffffff;
      }
    }
    TSparseArrayBase<32,4,FDefaultSparseArrayAllocator>::AllocateIndex
              ((TSparseArrayBase<32,4,FDefaultSparseArrayAllocator> *)this_00,&local_68,iVar7);
    if (local_68.Pointer != (TTuple<FObjectKey> *)0x0) {
      TVar4._2_1_ = uStack_2e;
      TVar4._0_2_ = uStack_30;
      TVar4._3_1_ = uStack_2d;
      TVar4._4_4_ = uStack_2c;
      *(TTuple<FObjectKey> *)local_68.Pointer = local_48;
      *(TTuple<FObjectKey> *)((longlong)local_68.Pointer + 8) = TStack_40;
      *(TTuple<FObjectKey> *)((longlong)local_68.Pointer + 0x10) = local_38;
      *(TTuple<FObjectKey> *)((longlong)local_68.Pointer + 0x18) = TVar4;
    }
    if (0xfffe < local_68.Index) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < NO_OUTPUT",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                         ,0x1d6,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
    }
    uVar9 = local_68.Index & 0xffff;
    this_01 = &this->NewOutputs;
    local_res8[0] = (ushort)local_68.Index;
    iVar11 = (uVar9 - (this->NewOutputs).NumBits) + 1;
    if (0 < iVar11) {
      iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_01,iVar11);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(this_01,iVar7,iVar11,false);
      uVar9 = (uint)local_res8[0];
    }
    if ((this->NewOutputs).NumBits <= (int)uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
    }
    FVar10 = (this->NewOutputs).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<unsigned_int>)0x0) {
      FVar10 = (ForElementType<unsigned_int>)this_01;
    }
    puVar1 = (uint *)((longlong)FVar10 + (ulonglong)(uVar9 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
    local_50 = local_res8;
    local_58 = param_1;
    TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UE::MovieScene::TOverlappingEntityInput<FObjectKey>_const_&,unsigned_short_const_&>_>
              ((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>,FDefaultSetAllocator>
                *)&this->KeyToOutput,
               (TPairInitializer<UE::MovieScene::TOverlappingEntityInput<FObjectKey>_const_&,unsigned_short_const_&>
                *)&stack0x00000018,(bool *)&local_58);
  }
  return local_res8[0];
}

// CreateOutputByKey @ 146787370

ushort __thiscall
UE::MovieScene::TOverlappingEntityTrackerImpl<enum_EComponentMobility::Type,FObjectKey>::
CreateOutputByKey(void *this,TOverlappingEntityInput<FObjectKey> *param_1)

{
  TSparseArrayBase<16,4,FDefaultSparseArrayAllocator> *this_00;
  TBitArray<FDefaultBitArrayAllocator> *this_01;
  uchar *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  int iVar11;
  ushort local_res8 [4];
  TTuple<FObjectKey> local_48;
  TTuple<FObjectKey> TStack_40;
  FSparseArrayAllocationInfo local_38;
  
  puVar8 = TMapBase<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>_>
           ::Find((TMapBase<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>_>
                   *)((longlong)this + 0xa0),param_1);
  if ((puVar8 == (ushort *)0x0) || (local_res8[0] = *puVar8, local_res8[0] == 0xffff)) {
    local_48 = param_1->Key;
    this_00 = (TSparseArrayBase<16,4,FDefaultSparseArrayAllocator> *)((longlong)this + 0xf0);
    TStack_40 = (TTuple<FObjectKey>)((ulonglong)(uint3)TStack_40._5_3_ << 0x28);
    if (*(int *)((longlong)this + 0x124) == 0) {
      iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,4,1,(ForAnyElementType *)this_00,(int *)((longlong)this + 0xf8),
                          (int *)((longlong)this + 0xfc));
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x100),false);
    }
    else {
      iVar11 = *(int *)((longlong)this + 0x120);
      pFVar3 = (this_00->Data).AllocatorInstance.Data;
      iVar2 = *(int *)(pFVar3 + (longlong)iVar11 * 0x10 + 4);
      iVar7 = *(int *)((longlong)this + 0x124) + -1;
      *(int *)((longlong)this + 0x120) = iVar2;
      *(int *)((longlong)this + 0x124) = iVar7;
      if (iVar7 != 0) {
        *(undefined4 *)(pFVar3 + (longlong)iVar2 * 0x10) = 0xffffffff;
      }
    }
    TSparseArrayBase<16,4,FDefaultSparseArrayAllocator>::AllocateIndex(this_00,&local_38,iVar11);
    if (local_38.Pointer != (TTuple<FObjectKey> *)0x0) {
      *(TTuple<FObjectKey> *)local_38.Pointer = local_48;
      *(TTuple<FObjectKey> *)((longlong)local_38.Pointer + 8) = TStack_40;
    }
    if (0xfffe < local_38.Index) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < NO_OUTPUT",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                         ,0x1d6,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    uVar9 = local_38.Index & 0xffff;
    this_01 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x148);
    local_res8[0] = (ushort)local_38.Index;
    iVar11 = (uVar9 - *(int *)((longlong)this + 0x160)) + 1;
    if (0 < iVar11) {
      iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_01,iVar11);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(this_01,iVar7,iVar11,false);
      uVar9 = (uint)local_res8[0];
    }
    if (*(int *)((longlong)this + 0x160) <= (int)uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    pTVar10 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x158);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x158) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar10 = this_01;
    }
    puVar1 = (pTVar10->AllocatorInstance).InlineData + (ulonglong)(uVar9 >> 5) * 4;
    *(uint *)puVar1 = *(uint *)puVar1 | 1 << ((byte)uVar9 & 0x1f);
    TStack_40 = (TTuple<FObjectKey>)local_res8;
    local_48 = (TTuple<FObjectKey>)param_1;
    TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UE::MovieScene::TOverlappingEntityInput<FObjectKey>_const_&,unsigned_short_const_&>_>
              ((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<FObjectKey>,unsigned_short,0>,FDefaultSetAllocator>
                *)((longlong)this + 0xa0),
               (TPairInitializer<UE::MovieScene::TOverlappingEntityInput<FObjectKey>_const_&,unsigned_short_const_&>
                *)&stack0x00000018,(bool *)&local_48);
  }
  return local_res8[0];
}

// MakeOutput @ 1467a6970

ushort __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::
MakeOutput(TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
           *this,FMovieSceneEntityID param_1,TOverlappingEntityInput<FObjectKey,FName> *param_2,
          bool param_3)

{
  int *piVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  longlong lVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  ushort *puVar9;
  ForElementType<unsigned_int> FVar10;
  int iVar11;
  undefined1 *puVar12;
  ushort local_res8 [4];
  FMovieSceneEntityID local_res10 [4];
  undefined1 local_58 [8];
  FMovieSceneEntityID *local_50;
  ushort *local_48;
  ushort *local_40;
  FMovieSceneEntityID *local_38;
  
  if (*(int *)&(this->EntityToOutput).field_0x8 != *(int *)&(this->EntityToOutput).field_0x34) {
    puVar12 = *(undefined1 **)&(this->EntityToOutput).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->EntityToOutput).field_0x38;
    }
    iVar11 = *(int *)(puVar12 +
                     ((ulonglong)(*(int *)&(this->EntityToOutput).field_0x48 - 1) &
                     (ulonglong)param_1.Value) * 4);
    if (iVar11 != -1) {
      do {
        lVar3 = *(longlong *)&this->EntityToOutput + (longlong)iVar11 * 0xc;
        if (*(ushort *)(*(longlong *)&this->EntityToOutput + (longlong)iVar11 * 0xc) ==
            param_1.Value) {
          puVar9 = (ushort *)(lVar3 + 2);
          if (lVar3 == 0) {
            puVar9 = (ushort *)0x0;
          }
          if (puVar9 != (ushort *)0x0) {
            uVar7 = *puVar9;
            goto LAB_1467a69e0;
          }
          break;
        }
        iVar11 = *(int *)(lVar3 + 4);
      } while (iVar11 != -1);
    }
  }
  uVar7 = 0xffff;
LAB_1467a69e0:
  local_res10[0].Value = param_1.Value;
  local_res8[0] = CreateOutputByKey(this,param_2);
  if (uVar7 == local_res8[0]) {
    if (param_3) {
      pTVar2 = &this->InvalidatedOutputs;
      iVar11 = ((uint)local_res8[0] - (this->InvalidatedOutputs).NumBits) + 1;
      if (0 < iVar11) {
        iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar2,iVar11);
        TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar2,iVar8,iVar11,false);
      }
      uVar7 = local_res8[0];
      if (((this->InvalidatedOutputs).NumBits <= (int)(uint)local_res8[0]) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return uVar7;
      }
      FVar10 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<unsigned_int>)0x0) {
        FVar10 = (ForElementType<unsigned_int>)pTVar2;
      }
      puVar4 = (uint *)((longlong)FVar10 + (ulonglong)(uVar7 >> 5) * 4);
      *puVar4 = *puVar4 | 1 << ((byte)uVar7 & 0x1f);
    }
  }
  else {
    pTVar2 = &this->InvalidatedOutputs;
    if (uVar7 != 0xffff) {
      iVar11 = ((uint)uVar7 - (this->InvalidatedOutputs).NumBits) + 1;
      if (0 < iVar11) {
        iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar2,iVar11);
        TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar2,iVar8,iVar11,false);
      }
      if (((this->InvalidatedOutputs).NumBits <= (int)(uint)uVar7) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return uVar7;
      }
      FVar10 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<unsigned_int>)0x0) {
        FVar10 = (ForElementType<unsigned_int>)pTVar2;
      }
      puVar4 = (uint *)((longlong)FVar10 + (ulonglong)(uVar7 >> 5) * 4);
      *puVar4 = *puVar4 | 1 << ((byte)uVar7 & 0x1f);
      TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
      ::Remove(&this->OutputToEntity,uVar7,local_res10);
      TMapBase<UE::MovieScene::FMovieSceneEntityID,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>_>
      ::Remove((TMapBase<UE::MovieScene::FMovieSceneEntityID,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>_>
                *)this,local_res10);
    }
    piVar1 = &(this->InvalidatedOutputs).NumBits;
    iVar11 = ((uint)local_res8[0] - *piVar1) + 1;
    if (0 < iVar11) {
      iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar2,iVar11);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar2,iVar8,iVar11,false);
    }
    uVar7 = local_res8[0];
    if ((*piVar1 <= (int)(uint)local_res8[0]) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return uVar7;
    }
    FVar10 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<unsigned_int>)0x0) {
      FVar10 = (ForElementType<unsigned_int>)pTVar2;
    }
    puVar4 = (uint *)((longlong)FVar10 + (ulonglong)(uVar7 >> 5) * 4);
    *puVar4 = *puVar4 | 1 << ((byte)uVar7 & 0x1f);
    local_50 = local_res10;
    local_48 = local_res8;
    TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UE::MovieScene::FMovieSceneEntityID_const_&,unsigned_short_const_&>_>
              ((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<UE::MovieScene::FMovieSceneEntityID_const_&,unsigned_short_const_&>
                        *)local_58,(bool *)&local_50);
    local_40 = local_res8;
    local_38 = local_res10;
    TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_short_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>_>
              ((TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                *)&this->OutputToEntity,
               (TPairInitializer<unsigned_short_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>
                *)(local_58 + 4),(bool *)&local_40);
  }
  return local_res8[0];
}

// MakeOutput @ 1467a6cc0

ushort __thiscall
UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey>::
MakeOutput(TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey> *this,
          FMovieSceneEntityID param_1,TOverlappingEntityInput<FObjectKey> *param_2,bool param_3)

{
  int *piVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  longlong lVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  ushort *puVar9;
  ForElementType<unsigned_int> FVar10;
  int iVar11;
  undefined1 *puVar12;
  ushort local_res8 [4];
  FMovieSceneEntityID local_res10 [4];
  undefined1 local_58 [8];
  FMovieSceneEntityID *local_50;
  ushort *local_48;
  ushort *local_40;
  FMovieSceneEntityID *local_38;
  
  if (*(int *)&(this->EntityToOutput).field_0x8 != *(int *)&(this->EntityToOutput).field_0x34) {
    puVar12 = *(undefined1 **)&(this->EntityToOutput).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->EntityToOutput).field_0x38;
    }
    iVar11 = *(int *)(puVar12 +
                     ((ulonglong)(*(int *)&(this->EntityToOutput).field_0x48 - 1) &
                     (ulonglong)param_1.Value) * 4);
    if (iVar11 != -1) {
      do {
        lVar3 = *(longlong *)&this->EntityToOutput + (longlong)iVar11 * 0xc;
        if (*(ushort *)(*(longlong *)&this->EntityToOutput + (longlong)iVar11 * 0xc) ==
            param_1.Value) {
          puVar9 = (ushort *)(lVar3 + 2);
          if (lVar3 == 0) {
            puVar9 = (ushort *)0x0;
          }
          if (puVar9 != (ushort *)0x0) {
            uVar7 = *puVar9;
            goto LAB_1467a6d30;
          }
          break;
        }
        iVar11 = *(int *)(lVar3 + 4);
      } while (iVar11 != -1);
    }
  }
  uVar7 = 0xffff;
LAB_1467a6d30:
  local_res10[0].Value = param_1.Value;
  local_res8[0] = CreateOutputByKey(this,param_2);
  if (uVar7 == local_res8[0]) {
    if (param_3) {
      pTVar2 = &this->InvalidatedOutputs;
      iVar11 = ((uint)local_res8[0] - (this->InvalidatedOutputs).NumBits) + 1;
      if (0 < iVar11) {
        iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar2,iVar11);
        TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar2,iVar8,iVar11,false);
      }
      uVar7 = local_res8[0];
      if (((this->InvalidatedOutputs).NumBits <= (int)(uint)local_res8[0]) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return uVar7;
      }
      FVar10 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<unsigned_int>)0x0) {
        FVar10 = (ForElementType<unsigned_int>)pTVar2;
      }
      puVar4 = (uint *)((longlong)FVar10 + (ulonglong)(uVar7 >> 5) * 4);
      *puVar4 = *puVar4 | 1 << ((byte)uVar7 & 0x1f);
    }
  }
  else {
    pTVar2 = &this->InvalidatedOutputs;
    if (uVar7 != 0xffff) {
      iVar11 = ((uint)uVar7 - (this->InvalidatedOutputs).NumBits) + 1;
      if (0 < iVar11) {
        iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar2,iVar11);
        TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar2,iVar8,iVar11,false);
      }
      if (((this->InvalidatedOutputs).NumBits <= (int)(uint)uVar7) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return uVar7;
      }
      FVar10 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<unsigned_int>)0x0) {
        FVar10 = (ForElementType<unsigned_int>)pTVar2;
      }
      puVar4 = (uint *)((longlong)FVar10 + (ulonglong)(uVar7 >> 5) * 4);
      *puVar4 = *puVar4 | 1 << ((byte)uVar7 & 0x1f);
      TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
      ::Remove(&this->OutputToEntity,uVar7,local_res10);
      TMapBase<UE::MovieScene::FMovieSceneEntityID,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>_>
      ::Remove((TMapBase<UE::MovieScene::FMovieSceneEntityID,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>_>
                *)this,local_res10);
    }
    piVar1 = &(this->InvalidatedOutputs).NumBits;
    iVar11 = ((uint)local_res8[0] - *piVar1) + 1;
    if (0 < iVar11) {
      iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar2,iVar11);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar2,iVar8,iVar11,false);
    }
    uVar7 = local_res8[0];
    if ((*piVar1 <= (int)(uint)local_res8[0]) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return uVar7;
    }
    FVar10 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<unsigned_int>)0x0) {
      FVar10 = (ForElementType<unsigned_int>)pTVar2;
    }
    puVar4 = (uint *)((longlong)FVar10 + (ulonglong)(uVar7 >> 5) * 4);
    *puVar4 = *puVar4 | 1 << ((byte)uVar7 & 0x1f);
    local_50 = local_res10;
    local_48 = local_res8;
    TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UE::MovieScene::FMovieSceneEntityID_const_&,unsigned_short_const_&>_>
              ((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<UE::MovieScene::FMovieSceneEntityID_const_&,unsigned_short_const_&>
                        *)local_58,(bool *)&local_50);
    local_40 = local_res8;
    local_38 = local_res10;
    TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_short_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>_>
              ((TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                *)&this->OutputToEntity,
               (TPairInitializer<unsigned_short_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>
                *)(local_58 + 4),(bool *)&local_40);
  }
  return local_res8[0];
}

// MakeOutput @ 1467a7010

ushort __thiscall
UE::MovieScene::TOverlappingEntityTrackerImpl<enum_EComponentMobility::Type,FObjectKey>::MakeOutput
          (void *this,FMovieSceneEntityID param_1,TOverlappingEntityInput<FObjectKey> *param_2,
          bool param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  int iVar9;
  longlong lVar10;
  ushort local_res8 [4];
  FMovieSceneEntityID local_res10 [4];
  undefined1 local_58 [8];
  FMovieSceneEntityID *local_50;
  ushort *local_48;
  ushort *local_40;
  FMovieSceneEntityID *local_38;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar10 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar10 = (longlong)this + 0x38;
    }
    iVar9 = *(int *)(lVar10 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) &
                              (ulonglong)param_1.Value) * 4);
    if (iVar9 != -1) {
      do {
        lVar10 = *(longlong *)this + (longlong)iVar9 * 0xc;
        if (*(ushort *)(*(longlong *)this + (longlong)iVar9 * 0xc) == param_1.Value) {
          puVar7 = (ushort *)(lVar10 + 2);
          if (lVar10 == 0) {
            puVar7 = (ushort *)0x0;
          }
          if (puVar7 != (ushort *)0x0) {
            uVar5 = *puVar7;
            goto LAB_1467a7080;
          }
          break;
        }
        iVar9 = *(int *)(lVar10 + 4);
      } while (iVar9 != -1);
    }
  }
  uVar5 = 0xffff;
LAB_1467a7080:
  local_res10[0].Value = param_1.Value;
  local_res8[0] = CreateOutputByKey(this,param_2);
  if (uVar5 == local_res8[0]) {
    if (param_3) {
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x128);
      iVar9 = ((uint)local_res8[0] - *(int *)((longlong)this + 0x140)) + 1;
      if (0 < iVar9) {
        iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar1,iVar9);
        TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar1,iVar6,iVar9,false);
      }
      uVar5 = local_res8[0];
      if ((*(int *)((longlong)this + 0x140) <= (int)(uint)local_res8[0]) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
      pTVar8 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x138);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x138) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar8 = pTVar1;
      }
      puVar2 = (pTVar8->AllocatorInstance).InlineData + (ulonglong)(uVar5 >> 5) * 4;
      *(uint *)puVar2 = *(uint *)puVar2 | 1 << ((byte)uVar5 & 0x1f);
    }
  }
  else {
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x128);
    if (uVar5 != 0xffff) {
      iVar9 = ((uint)uVar5 - *(int *)((longlong)this + 0x140)) + 1;
      if (0 < iVar9) {
        iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar1,iVar9);
        TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar1,iVar6,iVar9,false);
      }
      if ((*(int *)((longlong)this + 0x140) <= (int)(uint)uVar5) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
      pTVar8 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x138);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x138) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar8 = pTVar1;
      }
      puVar2 = (pTVar8->AllocatorInstance).InlineData + (ulonglong)(uVar5 >> 5) * 4;
      *(uint *)puVar2 = *(uint *)puVar2 | 1 << ((byte)uVar5 & 0x1f);
      TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
      ::Remove((TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
                *)((longlong)this + 0x50),uVar5,local_res10);
      TMapBase<UE::MovieScene::FMovieSceneEntityID,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>_>
      ::Remove(this,local_res10);
    }
    iVar9 = ((uint)local_res8[0] - *(int *)((longlong)this + 0x140)) + 1;
    if (0 < iVar9) {
      iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar1,iVar9);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar1,iVar6,iVar9,false);
    }
    uVar5 = local_res8[0];
    if ((*(int *)((longlong)this + 0x140) <= (int)(uint)local_res8[0]) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    pTVar8 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x138);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x138) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar8 = pTVar1;
    }
    puVar2 = (pTVar8->AllocatorInstance).InlineData + (ulonglong)(uVar5 >> 5) * 4;
    *(uint *)puVar2 = *(uint *)puVar2 | 1 << ((byte)uVar5 & 0x1f);
    local_50 = local_res10;
    local_48 = local_res8;
    TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UE::MovieScene::FMovieSceneEntityID_const_&,unsigned_short_const_&>_>
              (this,(TPairInitializer<UE::MovieScene::FMovieSceneEntityID_const_&,unsigned_short_const_&>
                     *)local_58,(bool *)&local_50);
    local_40 = local_res8;
    local_38 = local_res10;
    TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_short_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>_>
              ((TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                *)((longlong)this + 0x50),
               (TPairInitializer<unsigned_short_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>
                *)(local_58 + 4),(bool *)&local_40);
  }
  return local_res8[0];
}

// VisitUnlinkedAllocationImpl @ 1467c6fe0

void __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>::
VisitUnlinkedAllocationImpl
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
           *this,FEntityAllocation *param_1)

{
  longlong lVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  FMovieSceneEntityID *pFVar6;
  undefined1 *puVar7;
  ForElementType<unsigned_int> FVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  undefined1 *puVar12;
  ForElementType<unsigned_int> this_00;
  int iVar13;
  ushort *puVar14;
  undefined1 *puVar15;
  longlong lVar16;
  FMovieSceneEntityID local_res8 [4];
  
  if ((this->bIsInitialized == false) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsInitialized",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                          ,0x19c,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar3 = param_1->Size;
  pFVar6 = param_1->EntityIDs;
  if ((ulonglong)uVar3 == 0) {
    return;
  }
  lVar16 = 0;
LAB_1467c7052:
  uVar4 = pFVar6[lVar16].Value;
  if (*(int *)&(this->EntityToOutput).field_0x8 != *(int *)&(this->EntityToOutput).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EntityToOutput).field_0x40;
    puVar15 = &(this->EntityToOutput).field_0x38;
    puVar12 = puVar15;
    if (puVar7 != (undefined1 *)0x0) {
      puVar12 = puVar7;
    }
    iVar13 = *(int *)(puVar12 +
                     ((ulonglong)(*(int *)&(this->EntityToOutput).field_0x48 - 1) & (ulonglong)uVar4
                     ) * 4);
    if (iVar13 != -1) {
      do {
        lVar1 = *(longlong *)&this->EntityToOutput + (longlong)iVar13 * 0xc;
        if (*(ushort *)(*(longlong *)&this->EntityToOutput + (longlong)iVar13 * 0xc) == uVar4) {
          puVar14 = (ushort *)(lVar1 + 2);
          if (lVar1 == 0) {
            puVar14 = (ushort *)0x0;
          }
          if ((puVar14 != (ushort *)0x0) && (uVar5 = *puVar14, uVar5 != 0xffff)) {
            local_res8[0].Value = uVar4;
            TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
            ::Remove(&this->OutputToEntity,uVar5,local_res8);
            if (*(int *)&(this->EntityToOutput).field_0x8 ==
                *(int *)&(this->EntityToOutput).field_0x34) goto LAB_1467c7144;
            puVar7 = *(undefined1 **)&(this->EntityToOutput).field_0x40;
            if (puVar7 != (undefined1 *)0x0) {
              puVar15 = puVar7;
            }
            iVar13 = *(int *)(puVar15 +
                             ((ulonglong)(*(int *)&(this->EntityToOutput).field_0x48 - 1) &
                             (ulonglong)uVar4) * 4);
            if (iVar13 == -1) goto LAB_1467c7144;
            goto LAB_1467c7120;
          }
          break;
        }
        iVar13 = *(int *)(lVar1 + 4);
      } while (iVar13 != -1);
    }
  }
  goto LAB_1467c71cd;
  while (iVar13 = *(int *)(*(longlong *)&this->EntityToOutput + 4 + (longlong)iVar13 * 0xc),
        iVar13 != -1) {
LAB_1467c7120:
    if (*(ushort *)(*(longlong *)&this->EntityToOutput + (longlong)iVar13 * 0xc) == uVar4) {
      TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                       *)this,iVar13);
      break;
    }
  }
LAB_1467c7144:
  this_00 = (ForElementType<unsigned_int>)&this->InvalidatedOutputs;
  iVar13 = ((uint)uVar5 - (this->InvalidatedOutputs).NumBits) + 1;
  if (0 < iVar13) {
    iVar11 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                       ((TBitArray<FDefaultBitArrayAllocator> *)this_00,iVar13);
    TBitArray<FDefaultBitArrayAllocator>::SetRange
              ((TBitArray<FDefaultBitArrayAllocator> *)this_00,iVar11,iVar13,false);
  }
  if (((this->InvalidatedOutputs).NumBits <= (int)(uint)uVar5) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar8 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
  if (FVar8 != (ForElementType<unsigned_int>)0x0) {
    this_00 = FVar8;
  }
  puVar2 = (uint *)((longlong)this_00 + (ulonglong)(uVar5 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)uVar5 & 0x1f);
LAB_1467c71cd:
  lVar16 = lVar16 + 1;
  if ((longlong)(ulonglong)uVar3 <= lVar16) {
    return;
  }
  goto LAB_1467c7052;
}

// VisitUnlinkedAllocationImpl @ 1467c7200

void __thiscall
UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey>::
VisitUnlinkedAllocationImpl
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FPreAnimAttachment,FObjectKey> *this,
          FEntityAllocation *param_1)

{
  longlong lVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  FMovieSceneEntityID *pFVar6;
  undefined1 *puVar7;
  ForElementType<unsigned_int> FVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  undefined1 *puVar12;
  ForElementType<unsigned_int> this_00;
  int iVar13;
  ushort *puVar14;
  undefined1 *puVar15;
  longlong lVar16;
  FMovieSceneEntityID local_res8 [4];
  
  if ((this->bIsInitialized == false) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsInitialized",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                          ,0x19c,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar3 = param_1->Size;
  pFVar6 = param_1->EntityIDs;
  if ((ulonglong)uVar3 == 0) {
    return;
  }
  lVar16 = 0;
LAB_1467c7272:
  uVar4 = pFVar6[lVar16].Value;
  if (*(int *)&(this->EntityToOutput).field_0x8 != *(int *)&(this->EntityToOutput).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EntityToOutput).field_0x40;
    puVar15 = &(this->EntityToOutput).field_0x38;
    puVar12 = puVar15;
    if (puVar7 != (undefined1 *)0x0) {
      puVar12 = puVar7;
    }
    iVar13 = *(int *)(puVar12 +
                     ((ulonglong)(*(int *)&(this->EntityToOutput).field_0x48 - 1) & (ulonglong)uVar4
                     ) * 4);
    if (iVar13 != -1) {
      do {
        lVar1 = *(longlong *)&this->EntityToOutput + (longlong)iVar13 * 0xc;
        if (*(ushort *)(*(longlong *)&this->EntityToOutput + (longlong)iVar13 * 0xc) == uVar4) {
          puVar14 = (ushort *)(lVar1 + 2);
          if (lVar1 == 0) {
            puVar14 = (ushort *)0x0;
          }
          if ((puVar14 != (ushort *)0x0) && (uVar5 = *puVar14, uVar5 != 0xffff)) {
            local_res8[0].Value = uVar4;
            TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
            ::Remove(&this->OutputToEntity,uVar5,local_res8);
            if (*(int *)&(this->EntityToOutput).field_0x8 ==
                *(int *)&(this->EntityToOutput).field_0x34) goto LAB_1467c7364;
            puVar7 = *(undefined1 **)&(this->EntityToOutput).field_0x40;
            if (puVar7 != (undefined1 *)0x0) {
              puVar15 = puVar7;
            }
            iVar13 = *(int *)(puVar15 +
                             ((ulonglong)(*(int *)&(this->EntityToOutput).field_0x48 - 1) &
                             (ulonglong)uVar4) * 4);
            if (iVar13 == -1) goto LAB_1467c7364;
            goto LAB_1467c7340;
          }
          break;
        }
        iVar13 = *(int *)(lVar1 + 4);
      } while (iVar13 != -1);
    }
  }
  goto LAB_1467c73ed;
  while (iVar13 = *(int *)(*(longlong *)&this->EntityToOutput + 4 + (longlong)iVar13 * 0xc),
        iVar13 != -1) {
LAB_1467c7340:
    if (*(ushort *)(*(longlong *)&this->EntityToOutput + (longlong)iVar13 * 0xc) == uVar4) {
      TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                       *)this,iVar13);
      break;
    }
  }
LAB_1467c7364:
  this_00 = (ForElementType<unsigned_int>)&this->InvalidatedOutputs;
  iVar13 = ((uint)uVar5 - (this->InvalidatedOutputs).NumBits) + 1;
  if (0 < iVar13) {
    iVar11 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                       ((TBitArray<FDefaultBitArrayAllocator> *)this_00,iVar13);
    TBitArray<FDefaultBitArrayAllocator>::SetRange
              ((TBitArray<FDefaultBitArrayAllocator> *)this_00,iVar11,iVar13,false);
  }
  if (((this->InvalidatedOutputs).NumBits <= (int)(uint)uVar5) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar8 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
  if (FVar8 != (ForElementType<unsigned_int>)0x0) {
    this_00 = FVar8;
  }
  puVar2 = (uint *)((longlong)this_00 + (ulonglong)(uVar5 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)uVar5 & 0x1f);
LAB_1467c73ed:
  lVar16 = lVar16 + 1;
  if ((longlong)(ulonglong)uVar3 <= lVar16) {
    return;
  }
  goto LAB_1467c7272;
}

// VisitUnlinkedAllocationImpl @ 1467c7420

void __thiscall
UE::MovieScene::TOverlappingEntityTrackerImpl<enum_EComponentMobility::Type,FObjectKey>::
VisitUnlinkedAllocationImpl(void *this,FEntityAllocation *param_1)

{
  uchar *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  FMovieSceneEntityID *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  int iVar10;
  ushort *puVar11;
  longlong lVar12;
  FMovieSceneEntityID local_res8 [4];
  
  if ((*(char *)((longlong)this + 0x168) == '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                         ,0x19c,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar2 = param_1->Size;
  pFVar5 = param_1->EntityIDs;
  if ((ulonglong)uVar2 == 0) {
    return;
  }
  lVar12 = 0;
LAB_1467c7492:
  uVar3 = pFVar5[lVar12].Value;
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar9 = (longlong)this + 0x38;
    if (*(longlong *)((longlong)this + 0x40) != 0) {
      lVar9 = *(longlong *)((longlong)this + 0x40);
    }
    iVar10 = *(int *)(lVar9 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)uVar3)
                              * 4);
    if (iVar10 != -1) {
      do {
        lVar9 = *(longlong *)this + (longlong)iVar10 * 0xc;
        if (*(ushort *)(*(longlong *)this + (longlong)iVar10 * 0xc) == uVar3) {
          puVar11 = (ushort *)(lVar9 + 2);
          if (lVar9 == 0) {
            puVar11 = (ushort *)0x0;
          }
          if ((puVar11 != (ushort *)0x0) && (uVar4 = *puVar11, uVar4 != 0xffff)) {
            local_res8[0].Value = uVar3;
            TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
            ::Remove((TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
                      *)((longlong)this + 0x50),uVar4,local_res8);
            if (*(int *)((longlong)this + 8) == *(int *)((longlong)this + 0x34)) goto LAB_1467c7584;
            lVar9 = (longlong)this + 0x38;
            if (*(longlong *)((longlong)this + 0x40) != 0) {
              lVar9 = *(longlong *)((longlong)this + 0x40);
            }
            iVar10 = *(int *)(lVar9 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) &
                                      (ulonglong)uVar3) * 4);
            if (iVar10 == -1) goto LAB_1467c7584;
            goto LAB_1467c7560;
          }
          break;
        }
        iVar10 = *(int *)(lVar9 + 4);
      } while (iVar10 != -1);
    }
  }
  goto LAB_1467c760d;
  while (iVar10 = *(int *)(*(longlong *)this + 4 + (longlong)iVar10 * 0xc), iVar10 != -1) {
LAB_1467c7560:
    if (*(ushort *)(*(longlong *)this + (longlong)iVar10 * 0xc) == uVar3) {
      TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
      ::RemoveByIndex(this,iVar10);
      break;
    }
  }
LAB_1467c7584:
  this_00 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x128);
  iVar10 = ((uint)uVar4 - *(int *)((longlong)this + 0x140)) + 1;
  if (0 < iVar10) {
    iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,iVar10);
    TBitArray<FDefaultBitArrayAllocator>::SetRange(this_00,iVar8,iVar10,false);
  }
  if ((*(int *)((longlong)this + 0x140) <= (int)(uint)uVar4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x138) !=
      (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
    this_00 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x138);
  }
  puVar1 = (this_00->AllocatorInstance).InlineData + (ulonglong)(uVar4 >> 5) * 4;
  *(uint *)puVar1 = *(uint *)puVar1 | 1 << ((byte)uVar4 & 0x1f);
LAB_1467c760d:
  lVar12 = lVar12 + 1;
  if ((longlong)(ulonglong)uVar2 <= lVar12) {
    return;
  }
  goto LAB_1467c7492;
}

// Destroy<UE::MovieScene::TOverlappingMaterialParameterHandler<UE::MovieScene::FScalarMixin>_> @ 1467d6a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
::Destroy<UE::MovieScene::TOverlappingMaterialParameterHandler<UE::MovieScene::FScalarMixin>_>
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
           *this,TOverlappingMaterialParameterHandler<UE::MovieScene::FScalarMixin> *param_1)

{
  undefined1 *this_00;
  TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>::FOutput,FDefaultSparseArrayAllocator>
  *this_01;
  TMap<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,0>_>
  *this_02;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  TOverlappingMaterialParameterHandler<UE::MovieScene::FScalarMixin> *this_03;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  FObjectComponent *pFVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  TOverlappingMaterialParameterHandler<UE::MovieScene::FScalarMixin> *local_res10;
  uint local_res18;
  int local_res20;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  int local_50;
  
  uStack_94 = 1;
  this_01 = &this->Outputs;
  local_98 = 0;
  iVar2 = *(int *)&(this->Outputs).field_0x28;
  this_00 = &(this->Outputs).field_0x10;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar2 != 0) {
    puVar12 = *(uint **)&(this->Outputs).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)this_00;
    }
    uVar13 = *puVar12;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar13 == 0) {
      iStack_80 = iStack_80 + 0x20;
      lVar7 = (longlong)local_98;
      local_98 = local_98 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_1467d6b5a;
      uVar13 = puVar12[lVar7 + 1];
    }
    uStack_94 = -uVar13 & uVar13;
    uVar1 = (ulonglong)uStack_94 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iStack_84 = local_res20 + -1 + iStack_80;
    if (iVar2 < iStack_84) {
LAB_1467d6b5a:
      iStack_84 = iVar2;
    }
  }
  local_res18 = *(uint *)&(this->Outputs).field_0x28;
  local_50 = *(int *)&(this->Outputs).field_0x8 - *(int *)&(this->Outputs).field_0x34;
  local_70._padding_ = CONCAT44(uStack_94,local_98);
  iVar9 = (int)local_res18 >> 5;
  local_70.CurrentBitIndex = iStack_84;
  local_70.UnvisitedBitMask = 0xffffffff;
  local_70._28_4_ = uStack_7c;
  local_70.BaseBitIndex = iStack_80;
  bVar6 = (byte)local_res18;
  uVar13 = local_res18 & 0xffffffe0;
  local_res10 = param_1;
  local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
  if ((((int)local_res18 < 0) || (iVar2 < (int)local_res18)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_03 = local_res10;
  uVar3 = *(uint *)&(this->Outputs).field_0x28;
  uVar10 = local_res18;
  if (local_res18 != uVar3) {
    puVar11 = *(undefined1 **)&(this->Outputs).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = this_00;
    }
    uVar10 = -1 << (bVar6 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar9 * 4);
    while (uVar10 == 0) {
      lVar7 = (longlong)iVar9;
      uVar13 = uVar13 + 0x20;
      iVar9 = iVar9 + 1;
      local_res18 = uVar3;
      uVar10 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1467d6c42;
      uVar10 = *(uint *)(puVar11 + lVar7 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res18 = (int)lVar7 + -1 + uVar13;
    uVar10 = local_res18;
    if ((int)uVar3 < (int)local_res18) {
      local_res18 = uVar3;
      uVar10 = uVar3;
    }
  }
LAB_1467d6c42:
  while( true ) {
    if (*(int *)&(this->Outputs).field_0x8 - *(int *)&(this->Outputs).field_0x34 != local_50) {
      `TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>::FOutput,FDefaultSparseArrayAllocator>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_70.CurrentBitIndex == uVar10) &&
       (local_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)this_00)) break;
    pFVar8 = (FObjectComponent *)((longlong)local_70.CurrentBitIndex * 0x40 + *(longlong *)this_01);
    TOverlappingMaterialParameterHandler<UE::MovieScene::FScalarMixin>::DestroyOutput
              (this_03,pFVar8,(FMaterialParameterInfo *)(pFVar8 + 1),
               (FAnimatedMaterialParameterInfo *)(pFVar8 + 2),
               (FEntityOutputAggregate)SUB41(pFVar8[3].ObjectKey.ObjectSerialNumber,0));
    local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
  }
  bVar5 = 1 < *(int *)&(this->EntityToOutput).field_0x48;
  if (!bVar5) {
    TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                      *)this);
  }
  puVar11 = &(this->EntityToOutput).field_0xc;
  *(undefined4 *)&(this->EntityToOutput).field_0x8 = 0;
  if (*(int *)puVar11 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,(int *)puVar11);
  }
  *(undefined4 *)&(this->EntityToOutput).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntityToOutput).field_0x34 = 0;
  iVar2 = *(int *)&(this->EntityToOutput).field_0x2c;
  *(undefined4 *)&(this->EntityToOutput).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->EntityToOutput).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EntityToOutput).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->EntityToOutput).field_0x48 = 1;
    TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
              *)this);
  }
  bVar5 = 1 < *(int *)&(this->OutputToEntity).field_0x48;
  if (!bVar5) {
    TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                      *)&this->OutputToEntity);
  }
  puVar11 = &(this->OutputToEntity).field_0xc;
  *(undefined4 *)&(this->OutputToEntity).field_0x8 = 0;
  if (*(int *)puVar11 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&this->OutputToEntity,0,(int *)puVar11);
  }
  *(undefined4 *)&(this->OutputToEntity).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutputToEntity).field_0x34 = 0;
  iVar2 = *(int *)&(this->OutputToEntity).field_0x2c;
  *(undefined4 *)&(this->OutputToEntity).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->OutputToEntity).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->OutputToEntity).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->OutputToEntity).field_0x48 = 1;
    TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
              *)&this->OutputToEntity);
  }
  this_02 = &this->KeyToOutput;
  bVar5 = 1 < *(int *)&(this->KeyToOutput).field_0x48;
  if (!bVar5) {
    TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,0>,FDefaultSetAllocator>
                      *)this_02);
  }
  puVar11 = &(this->KeyToOutput).field_0xc;
  *(undefined4 *)&(this->KeyToOutput).field_0x8 = 0;
  if (*(int *)puVar11 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this_02,0,(int *)puVar11);
  }
  *(undefined4 *)&(this->KeyToOutput).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyToOutput).field_0x34 = 0;
  iVar2 = *(int *)&(this->KeyToOutput).field_0x2c;
  *(undefined4 *)&(this->KeyToOutput).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->KeyToOutput).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->KeyToOutput).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->KeyToOutput).field_0x48 = 1;
    TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,0>,FDefaultSetAllocator>
              *)this_02);
  }
  TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>::FOutput,FDefaultSparseArrayAllocator>
  ::DestroyElements(this_01,0,*(int *)&(this->Outputs).field_0x8);
  puVar11 = &(this->Outputs).field_0xc;
  *(undefined4 *)&(this->Outputs).field_0x8 = 0;
  if (*(int *)puVar11 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this_01,0,(int *)puVar11);
  }
  *(undefined4 *)&(this->Outputs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Outputs).field_0x34 = 0;
  iVar2 = *(int *)&(this->Outputs).field_0x2c;
  *(undefined4 *)&(this->Outputs).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->Outputs).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)this_00,0)
    ;
  }
  iVar2 = (this->InvalidatedOutputs).MaxBits;
  (this->InvalidatedOutputs).NumBits = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    (this->InvalidatedOutputs).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->InvalidatedOutputs,0);
  }
  iVar2 = (this->NewOutputs).MaxBits;
  (this->NewOutputs).NumBits = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    (this->NewOutputs).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->NewOutputs,0);
  }
  return;
}

// Destroy<UE::MovieScene::TOverlappingMaterialParameterHandler<UE::MovieScene::FVectorMixin>_> @ 1467d6f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
::Destroy<UE::MovieScene::TOverlappingMaterialParameterHandler<UE::MovieScene::FVectorMixin>_>
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
           *this,TOverlappingMaterialParameterHandler<UE::MovieScene::FVectorMixin> *param_1)

{
  undefined1 *this_00;
  TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>::FOutput,FDefaultSparseArrayAllocator>
  *this_01;
  TMap<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,0>_>
  *this_02;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  TOverlappingMaterialParameterHandler<UE::MovieScene::FVectorMixin> *this_03;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  FObjectComponent *pFVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  TOverlappingMaterialParameterHandler<UE::MovieScene::FVectorMixin> *local_res10;
  uint local_res18;
  int local_res20;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  int local_50;
  
  uStack_94 = 1;
  this_01 = &this->Outputs;
  local_98 = 0;
  iVar2 = *(int *)&(this->Outputs).field_0x28;
  this_00 = &(this->Outputs).field_0x10;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar2 != 0) {
    puVar12 = *(uint **)&(this->Outputs).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)this_00;
    }
    uVar13 = *puVar12;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar13 == 0) {
      iStack_80 = iStack_80 + 0x20;
      lVar7 = (longlong)local_98;
      local_98 = local_98 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_1467d6fda;
      uVar13 = puVar12[lVar7 + 1];
    }
    uStack_94 = -uVar13 & uVar13;
    uVar1 = (ulonglong)uStack_94 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iStack_84 = local_res20 + -1 + iStack_80;
    if (iVar2 < iStack_84) {
LAB_1467d6fda:
      iStack_84 = iVar2;
    }
  }
  local_res18 = *(uint *)&(this->Outputs).field_0x28;
  local_50 = *(int *)&(this->Outputs).field_0x8 - *(int *)&(this->Outputs).field_0x34;
  local_70._padding_ = CONCAT44(uStack_94,local_98);
  iVar9 = (int)local_res18 >> 5;
  local_70.CurrentBitIndex = iStack_84;
  local_70.UnvisitedBitMask = 0xffffffff;
  local_70._28_4_ = uStack_7c;
  local_70.BaseBitIndex = iStack_80;
  bVar6 = (byte)local_res18;
  uVar13 = local_res18 & 0xffffffe0;
  local_res10 = param_1;
  local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
  if ((((int)local_res18 < 0) || (iVar2 < (int)local_res18)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_03 = local_res10;
  uVar3 = *(uint *)&(this->Outputs).field_0x28;
  uVar10 = local_res18;
  if (local_res18 != uVar3) {
    puVar11 = *(undefined1 **)&(this->Outputs).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = this_00;
    }
    uVar10 = -1 << (bVar6 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar9 * 4);
    while (uVar10 == 0) {
      lVar7 = (longlong)iVar9;
      uVar13 = uVar13 + 0x20;
      iVar9 = iVar9 + 1;
      local_res18 = uVar3;
      uVar10 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1467d70c2;
      uVar10 = *(uint *)(puVar11 + lVar7 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res18 = (int)lVar7 + -1 + uVar13;
    uVar10 = local_res18;
    if ((int)uVar3 < (int)local_res18) {
      local_res18 = uVar3;
      uVar10 = uVar3;
    }
  }
LAB_1467d70c2:
  while( true ) {
    if (*(int *)&(this->Outputs).field_0x8 - *(int *)&(this->Outputs).field_0x34 != local_50) {
      `TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>::FOutput,FDefaultSparseArrayAllocator>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_70.CurrentBitIndex == uVar10) &&
       (local_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)this_00)) break;
    pFVar8 = (FObjectComponent *)((longlong)local_70.CurrentBitIndex * 0x40 + *(longlong *)this_01);
    TOverlappingMaterialParameterHandler<UE::MovieScene::FVectorMixin>::DestroyOutput
              (this_03,pFVar8,(FMaterialParameterInfo *)(pFVar8 + 1),
               (FAnimatedMaterialParameterInfo *)(pFVar8 + 2),
               (FEntityOutputAggregate)SUB41(pFVar8[3].ObjectKey.ObjectSerialNumber,0));
    local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
  }
  bVar5 = 1 < *(int *)&(this->EntityToOutput).field_0x48;
  if (!bVar5) {
    TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                      *)this);
  }
  puVar11 = &(this->EntityToOutput).field_0xc;
  *(undefined4 *)&(this->EntityToOutput).field_0x8 = 0;
  if (*(int *)puVar11 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,(int *)puVar11);
  }
  *(undefined4 *)&(this->EntityToOutput).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntityToOutput).field_0x34 = 0;
  iVar2 = *(int *)&(this->EntityToOutput).field_0x2c;
  *(undefined4 *)&(this->EntityToOutput).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->EntityToOutput).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EntityToOutput).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->EntityToOutput).field_0x48 = 1;
    TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
              *)this);
  }
  bVar5 = 1 < *(int *)&(this->OutputToEntity).field_0x48;
  if (!bVar5) {
    TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                      *)&this->OutputToEntity);
  }
  puVar11 = &(this->OutputToEntity).field_0xc;
  *(undefined4 *)&(this->OutputToEntity).field_0x8 = 0;
  if (*(int *)puVar11 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&this->OutputToEntity,0,(int *)puVar11);
  }
  *(undefined4 *)&(this->OutputToEntity).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutputToEntity).field_0x34 = 0;
  iVar2 = *(int *)&(this->OutputToEntity).field_0x2c;
  *(undefined4 *)&(this->OutputToEntity).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->OutputToEntity).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->OutputToEntity).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->OutputToEntity).field_0x48 = 1;
    TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
              *)&this->OutputToEntity);
  }
  this_02 = &this->KeyToOutput;
  bVar5 = 1 < *(int *)&(this->KeyToOutput).field_0x48;
  if (!bVar5) {
    TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,0>,FDefaultSetAllocator>
                      *)this_02);
  }
  puVar11 = &(this->KeyToOutput).field_0xc;
  *(undefined4 *)&(this->KeyToOutput).field_0x8 = 0;
  if (*(int *)puVar11 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this_02,0,(int *)puVar11);
  }
  *(undefined4 *)&(this->KeyToOutput).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyToOutput).field_0x34 = 0;
  iVar2 = *(int *)&(this->KeyToOutput).field_0x2c;
  *(undefined4 *)&(this->KeyToOutput).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->KeyToOutput).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->KeyToOutput).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->KeyToOutput).field_0x48 = 1;
    TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,0>,FDefaultSetAllocator>
              *)this_02);
  }
  TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>::FOutput,FDefaultSparseArrayAllocator>
  ::DestroyElements(this_01,0,*(int *)&(this->Outputs).field_0x8);
  puVar11 = &(this->Outputs).field_0xc;
  *(undefined4 *)&(this->Outputs).field_0x8 = 0;
  if (*(int *)puVar11 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this_01,0,(int *)puVar11);
  }
  *(undefined4 *)&(this->Outputs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Outputs).field_0x34 = 0;
  iVar2 = *(int *)&(this->Outputs).field_0x2c;
  *(undefined4 *)&(this->Outputs).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->Outputs).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)this_00,0)
    ;
  }
  iVar2 = (this->InvalidatedOutputs).MaxBits;
  (this->InvalidatedOutputs).NumBits = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    (this->InvalidatedOutputs).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->InvalidatedOutputs,0);
  }
  iVar2 = (this->NewOutputs).MaxBits;
  (this->NewOutputs).NumBits = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    (this->NewOutputs).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->NewOutputs,0);
  }
  return;
}

// ProcessInvalidatedOutputs<UE::MovieScene::TOverlappingMaterialParameterHandler<UE::MovieScene::FScalarMixin>_&> @ 1467fb200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
::
ProcessInvalidatedOutputs<UE::MovieScene::TOverlappingMaterialParameterHandler<UE::MovieScene::FScalarMixin>_&>
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
           *this,UMovieSceneEntitySystemLinker *param_1,
          TOverlappingMaterialParameterHandler<UE::MovieScene::FScalarMixin> *param_2)

{
  ForElementType<UE::MovieScene::FMovieSceneEntityID> FVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  UMovieSceneEntitySystemLinker *pUVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined4 uVar10;
  FBuiltInComponentTypes *pFVar11;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *pTVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  FEntityOutputAggregate FVar17;
  uint uVar18;
  ForElementType<UE::MovieScene::FMovieSceneEntityID> FVar19;
  ForElementType<unsigned_int> FVar20;
  TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
  *pTVar21;
  FObjectComponent *pFVar22;
  undefined1 *puVar23;
  FComponentTypeID FVar24;
  ForElementType<unsigned_int> FVar25;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *pTVar26;
  int iVar27;
  ulonglong uVar28;
  uint uVar29;
  undefined1 auStackY_158 [32];
  undefined1 local_108 [4];
  uint local_104;
  int local_100;
  ushort local_fc;
  uint local_f8;
  uint local_f4;
  TOverlappingMaterialParameterHandler<UE::MovieScene::FScalarMixin> *local_f0;
  TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_e8;
  short sStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  ulonglong local_d0;
  TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_c8;
  short sStack_c0;
  undefined2 uStack_be;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  UMovieSceneEntitySystemLinker *local_b0;
  int local_a8;
  int local_a4;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_98;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_88;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_78;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_68;
  undefined1 local_58 [16];
  ForElementType<UE::MovieScene::FMovieSceneEntityID> local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_f0 = param_2;
  local_b0 = param_1;
  if ((this->InvalidatedOutputs).NumBits != 0) {
    local_48 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0;
    local_40 = 0;
    local_3c = 8;
    pFVar11 = FBuiltInComponentTypes::Get();
    FVar24.Value = (pFVar11->Tags).RestoreState.Value;
    local_fc = FVar24.Value;
    if ((0xfffe < (this->InvalidatedOutputs).NumBits) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InvalidatedOutputs.Num() < NO_OUTPUT",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                           ,0xf2,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_d0 = CONCAT44(local_d0._4_4_,1);
    local_f8 = 0;
    uVar18 = (this->InvalidatedOutputs).NumBits;
    local_104 = 0;
    local_100 = 0;
    if (uVar18 != 0) {
      FVar25 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
      if (FVar25 == (ForElementType<unsigned_int>)0x0) {
        FVar25 = (ForElementType<unsigned_int>)&this->InvalidatedOutputs;
      }
      uVar29 = *(uint *)FVar25;
      local_100 = 0;
      local_f8 = 0;
      while (uVar29 == 0) {
        local_100 = local_100 + 0x20;
        lVar13 = (longlong)(int)local_f8;
        local_f8 = local_f8 + 1;
        local_104 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_f8)
        goto LAB_1467fb353;
        uVar29 = *(uint *)((uchar *)((longlong)FVar25 + 4) + lVar13 * 4);
      }
      local_d0 = (ulonglong)(-uVar29 & uVar29);
      uVar28 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_a8 = (int)lVar13;
      local_104 = local_a8 + -1 + local_100;
      if ((int)uVar18 < (int)local_104) {
        local_104 = uVar18;
      }
    }
LAB_1467fb353:
    if ((int)local_104 < (int)uVar18) {
      local_f4 = 0xffffffff;
      do {
        uVar18 = local_104;
        pTVar21 = &this->OutputToEntity;
        local_40 = 0;
        if (local_3c < 0) {
          Core::Private::
          ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_>
                    (2,2,0,(ForElementType<UE::MovieScene::FMovieSceneEntityID> *)local_58,0,
                     &local_3c);
        }
        pUVar6 = local_b0;
        iVar27 = *(int *)&(this->OutputToEntity).field_0x48;
        sStack_c0 = (short)uVar18;
        iStack_bc = -1;
        if (iVar27 == 0) {
          local_b8 = -1;
        }
        else {
          puVar23 = *(undefined1 **)&(this->OutputToEntity).field_0x40;
          puVar14 = &(this->OutputToEntity).field_0x38;
          if (puVar23 != (undefined1 *)0x0) {
            puVar14 = puVar23;
          }
          local_b8 = *(int *)(puVar14 + ((longlong)iVar27 - 1U & (ulonglong)(uVar18 & 0xffff)) * 4);
          iStack_bc = local_b8;
          if (local_b8 != -1) {
            do {
              local_b8 = *(int *)(*(longlong *)pTVar21 + 4 + (longlong)iStack_bc * 0xc);
              if (*(short *)(*(longlong *)pTVar21 + (longlong)iStack_bc * 0xc) == (short)uVar18)
              break;
              iStack_bc = local_b8;
            } while (local_b8 != -1);
          }
        }
        uStack_d4 = uStack_b4;
        local_d8 = local_b8;
        local_c8 = pTVar21;
        local_e8 = pTVar21;
        _sStack_e0 = _sStack_c0;
        iVar27 = iStack_bc;
joined_r0x0001467fb439:
        iStack_dc = iVar27;
        if (iVar27 != -1) {
          uVar2 = *(ushort *)(*(longlong *)local_e8 + 2 + (longlong)iVar27 * 0xc);
          if ((uVar2 == 0xffff) ||
             (uVar18 = (uint)uVar2,
             *(int *)&(pUVar6->EntityManager).EntityLocations.field_0x28 <= (int)uVar18)) {
LAB_1467fb5b3:
            bVar7 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1936009250870394630>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                               ,0xfa,"Linker->EntityManager.IsAllocated(Inputs.Value())");
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (*(int *)&(this->EntityToOutput).field_0x8 !=
                *(int *)&(this->EntityToOutput).field_0x34) {
              puVar23 = *(undefined1 **)&(this->EntityToOutput).field_0x40;
              uVar2 = *(ushort *)(*(longlong *)local_e8 + 2 + (longlong)iVar27 * 0xc);
              puVar14 = &(this->EntityToOutput).field_0x38;
              if (puVar23 != (undefined1 *)0x0) {
                puVar14 = puVar23;
              }
              iVar27 = *(int *)(puVar14 +
                               ((longlong)*(int *)&(this->EntityToOutput).field_0x48 - 1U &
                               (ulonglong)uVar2) * 4);
              if (iVar27 != -1) {
                do {
                  if (*(ushort *)(*(longlong *)&this->EntityToOutput + (longlong)iVar27 * 0xc) ==
                      uVar2) {
                    TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                    ::RemoveByIndex((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                                     *)this,iVar27);
                    break;
                  }
                  iVar27 = *(int *)(*(longlong *)&this->EntityToOutput + 4 + (longlong)iVar27 * 0xc)
                  ;
                } while (iVar27 != -1);
              }
            }
            TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
            ::TKeyIterator::RemoveCurrent((TKeyIterator *)&local_e8);
          }
          else {
            if (*(int *)&(pUVar6->EntityManager).EntityLocations.field_0x28 <= (int)uVar18) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L"");
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            puVar23 = *(undefined1 **)&(pUVar6->EntityManager).EntityLocations.field_0x20;
            puVar14 = &(pUVar6->EntityManager).EntityLocations.field_0x10;
            if (puVar23 != (undefined1 *)0x0) {
              puVar14 = puVar23;
            }
            if ((*(uint *)(puVar14 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar18 & 0x1f) & 1) == 0)
            goto LAB_1467fb5b3;
            FVar19 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)local_58;
            if (local_48 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
              FVar19 = local_48;
            }
            FVar1 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)
                    (*(longlong *)local_e8 + 2 + (longlong)iVar27 * 0xc);
            if ((ulonglong)FVar19 <= (ulonglong)FVar1) {
              FVar19 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)local_58;
              if (local_48 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
                FVar19 = local_48;
              }
              if ((ulonglong)FVar1 < (ulonglong)((longlong)FVar19 + (longlong)local_3c * 2)) {
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar7) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
            }
            if (local_40 == local_3c) {
              local_40 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_>
                                   (0x202,(ForElementType<UE::MovieScene::FMovieSceneEntityID> *)
                                          local_58,&local_3c);
            }
            lVar13 = (longlong)local_40;
            FVar19 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)local_58;
            if (local_48 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
              FVar19 = local_48;
            }
            local_40 = local_40 + 1;
            *(undefined2 *)((longlong)FVar19 + lVar13 * 2) = *(undefined2 *)FVar1;
          }
          iStack_dc = local_d8;
          param_2 = local_f0;
          FVar24.Value = local_fc;
          uVar18 = local_104;
          if (local_d8 == -1) goto LAB_1467fb6b7;
          iVar27 = local_d8;
          do {
            iVar3 = *(int *)(*(longlong *)local_e8 + 4 + (longlong)iVar27 * 0xc);
            local_d8 = iVar3;
            if (*(short *)(*(longlong *)local_e8 + (longlong)iVar27 * 0xc) == sStack_e0) break;
            iVar27 = iVar3;
          } while (iVar3 != -1);
          goto joined_r0x0001467fb439;
        }
LAB_1467fb6b7:
        iVar27 = local_40;
        pFVar22 = (FObjectComponent *)
                  ((ulonglong)(uVar18 & 0xffff) * 0x40 + *(longlong *)&this->Outputs);
        if (local_40 < 1) {
          TOverlappingMaterialParameterHandler<UE::MovieScene::FScalarMixin>::DestroyOutput
                    (param_2,pFVar22,(FMaterialParameterInfo *)(pFVar22 + 1),
                     (FAnimatedMaterialParameterInfo *)(pFVar22 + 2),
                     (FEntityOutputAggregate)SUB41(pFVar22[3].ObjectKey.ObjectSerialNumber,0));
        }
        else {
          FVar19 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)local_58;
          if (local_48 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
            FVar19 = local_48;
          }
          FVar1 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)
                  ((longlong)FVar19 + (longlong)local_40 * 2);
          while( true ) {
            if (local_40 != iVar27) {
              local_108[0] = 0;
              `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_108);
            }
            if (FVar19 == FVar1) {
              uVar8 = 0;
              goto LAB_1467fb72e;
            }
            bVar7 = FEntityManager::HasComponent
                              (&local_b0->EntityManager,(FMovieSceneEntityID)*(ushort *)FVar19,
                               FVar24);
            if (bVar7) break;
            FVar19 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)((longlong)FVar19 + 2);
          }
          uVar8 = 1;
LAB_1467fb72e:
          uVar29 = uVar18 & 0xffff;
          *(undefined1 *)&pFVar22[3].ObjectKey.ObjectSerialNumber = uVar8;
          if ((int)uVar29 < (this->NewOutputs).NumBits) {
            if ((this->NewOutputs).NumBits <= (int)uVar29) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L"");
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            FVar25 = (this->NewOutputs).AllocatorInstance.SecondaryData;
            FVar20 = (ForElementType<unsigned_int>)&this->NewOutputs;
            if (FVar25 != (ForElementType<unsigned_int>)0x0) {
              FVar20 = FVar25;
            }
            if ((*(uint *)((longlong)FVar20 + (ulonglong)(uVar29 >> 5) * 4) >> (uVar18 & 0x1f) & 1)
                == 0) goto LAB_1467fb7af;
            FVar17.bNeedsRestoration = SUB41(pFVar22[3].ObjectKey.ObjectSerialNumber,0);
            pTVar12 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::
                      TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int><TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                                (&local_78,
                                 (TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                                  *)local_58);
            pTVar26 = &local_98;
            local_98.DataPtr = pTVar12->DataPtr;
            local_98.ArrayNum = pTVar12->ArrayNum;
            local_98._12_4_ = *(undefined4 *)&pTVar12->field_0xc;
          }
          else {
LAB_1467fb7af:
            FVar17.bNeedsRestoration = SUB41(pFVar22[3].ObjectKey.ObjectSerialNumber,0);
            pTVar12 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::
                      TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int><TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                                (&local_68,
                                 (TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                                  *)local_58);
            pTVar26 = &local_88;
            local_88.DataPtr = pTVar12->DataPtr;
            local_88.ArrayNum = pTVar12->ArrayNum;
            local_88._12_4_ = *(undefined4 *)&pTVar12->field_0xc;
          }
          TOverlappingMaterialParameterHandler<UE::MovieScene::FScalarMixin>::UpdateOutput
                    (local_f0,pFVar22,(FMaterialParameterInfo *)(pFVar22 + 1),pTVar26,
                     (FAnimatedMaterialParameterInfo *)(pFVar22 + 2),FVar17);
        }
        if (local_40 == 0) {
          pFVar22 = (FObjectComponent *)
                    ((ulonglong)(uVar18 & 0xffff) * 0x40 + *(longlong *)&this->Outputs);
          if (*(int *)&(this->KeyToOutput).field_0x8 != *(int *)&(this->KeyToOutput).field_0x34) {
            uVar29 = MovieScene::GetTypeHash(pFVar22);
            uVar9 = ::GetTypeHash((FMaterialParameterInfo *)(pFVar22 + 1));
            puVar23 = *(undefined1 **)&(this->KeyToOutput).field_0x40;
            puVar14 = &(this->KeyToOutput).field_0x38;
            if (puVar23 != (undefined1 *)0x0) {
              puVar14 = puVar23;
            }
            iVar27 = *(int *)(puVar14 +
                             ((longlong)*(int *)&(this->KeyToOutput).field_0x48 - 1U &
                             (longlong)
                             (int)(uVar29 * 0x40 + (uVar29 >> 2) + 0x9e3779b9 + uVar9 ^ uVar29)) * 4
                             );
            if (iVar27 != -1) {
              do {
                plVar16 = (longlong *)((longlong)iVar27 * 0x30 + *(longlong *)&this->KeyToOutput);
                if (((((int)plVar16[1] == 0) && (*(int *)((longlong)plVar16 + 0xc) == 0)) &&
                    ((pFVar22->ObjectKey).ObjectIndex == 0)) &&
                   ((pFVar22->ObjectKey).ObjectSerialNumber == 0)) {
                  bVar7 = (UObject *)*plVar16 == (pFVar22->ObjectPtr).field0_0x0.DebugPtr;
                }
                else if (((int)plVar16[1] == (pFVar22->ObjectKey).ObjectIndex) &&
                        (*(int *)((longlong)plVar16 + 0xc) ==
                         (pFVar22->ObjectKey).ObjectSerialNumber)) {
                  bVar7 = true;
                }
                else {
                  bVar7 = false;
                }
                if (((bVar7) && ((int)plVar16[2] == *(int *)&pFVar22[1].ObjectPtr.field0_0x0)) &&
                   ((*(int *)((longlong)plVar16 + 0x14) ==
                     *(int *)((longlong)&pFVar22[1].ObjectPtr.field0_0x0 + 4) &&
                    (((char)plVar16[3] == (char)pFVar22[1].ObjectKey.ObjectIndex &&
                     (*(int *)((longlong)plVar16 + 0x1c) == pFVar22[1].ObjectKey.ObjectSerialNumber)
                     ))))) {
                  TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,0>,FDefaultSetAllocator>
                  ::RemoveByIndex((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,0>,FDefaultSetAllocator>
                                   *)&this->KeyToOutput,iVar27);
                  break;
                }
                iVar27 = (int)plVar16[5];
              } while (iVar27 != -1);
            }
          }
          uVar18 = uVar18 & 0xffff;
          TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>::FOutput,FDefaultSparseArrayAllocator>
          ::DestroyElements(&this->Outputs,uVar18,1);
          lVar13 = *(longlong *)&this->Outputs;
          puVar23 = &(this->Outputs).field_0x10;
          bVar5 = (byte)uVar18 & 0x1f;
          uVar29 = 1 << bVar5 | 1U >> 0x20 - bVar5;
          if (*(int *)&(this->Outputs).field_0x28 <= (int)uVar18) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L"");
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          puVar14 = *(undefined1 **)&(this->Outputs).field_0x20;
          puVar15 = puVar23;
          if (puVar14 != (undefined1 *)0x0) {
            puVar15 = puVar14;
          }
          if ((*(uint *)(puVar15 + (ulonglong)(uVar18 >> 5) * 4) & uVar29) == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0xc5,L"");
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (*(int *)&(this->Outputs).field_0x34 != 0) {
            *(uint *)((longlong)*(int *)&(this->Outputs).field_0x30 * 0x40 + lVar13) = uVar18;
          }
          *(undefined4 *)((longlong)(int)uVar18 * 0x40 + lVar13) = 0xffffffff;
          if (*(int *)&(this->Outputs).field_0x34 < 1) {
            uVar10 = 0xffffffff;
          }
          else {
            uVar10 = *(undefined4 *)&(this->Outputs).field_0x30;
          }
          *(undefined4 *)((longlong)(int)uVar18 * 0x40 + 4 + lVar13) = uVar10;
          puVar14 = &(this->Outputs).field_0x34;
          *(int *)puVar14 = *(int *)puVar14 + 1;
          *(uint *)&(this->Outputs).field_0x30 = uVar18;
          if (*(int *)&(this->Outputs).field_0x28 <= (int)uVar18) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L"");
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          puVar14 = *(undefined1 **)&(this->Outputs).field_0x20;
          if (puVar14 != (undefined1 *)0x0) {
            puVar23 = puVar14;
          }
          *(uint *)(puVar23 + (ulonglong)(uVar18 >> 5) * 4) =
               *(uint *)(puVar23 + (ulonglong)(uVar18 >> 5) * 4) & ~uVar29;
        }
        FVar25 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
        uVar18 = (this->InvalidatedOutputs).NumBits;
        uVar28 = (ulonglong)(int)local_f8;
        local_f4 = ~(uint)local_d0 & local_f4;
        FVar20 = (ForElementType<unsigned_int>)&this->InvalidatedOutputs;
        if (FVar25 != (ForElementType<unsigned_int>)0x0) {
          FVar20 = FVar25;
        }
        uVar29 = local_f4 & *(uint *)((longlong)FVar20 + uVar28 * 4);
        while (uVar29 == 0) {
          local_100 = local_100 + 0x20;
          iVar27 = (int)uVar28;
          local_f8 = iVar27 + 1;
          uVar28 = (ulonglong)local_f8;
          local_104 = uVar18;
          if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_f8)
          goto LAB_1467fbae6;
          uVar29 = *(uint *)((longlong)FVar20 + 4 + (longlong)iVar27 * 4);
          local_f4 = 0xffffffff;
        }
        local_d0 = CONCAT44(local_d0._4_4_,-uVar29 & uVar29);
        uVar28 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_a4 = (int)lVar13;
        local_104 = local_100 + -1 + local_a4;
        if ((int)uVar18 < (int)local_104) {
          local_104 = uVar18;
        }
LAB_1467fbae6:
        param_2 = local_f0;
      } while ((int)local_104 < (this->InvalidatedOutputs).NumBits);
    }
    if (local_48 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
      FMemory::Free((void *)local_48);
    }
  }
  iVar27 = (this->InvalidatedOutputs).MaxBits;
  (this->InvalidatedOutputs).NumBits = 0;
  if ((iVar27 < 0) || (0x80 < iVar27)) {
    (this->InvalidatedOutputs).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->InvalidatedOutputs,0);
  }
  iVar27 = (this->NewOutputs).MaxBits;
  (this->NewOutputs).NumBits = 0;
  if ((iVar27 < 0) || (0x80 < iVar27)) {
    (this->NewOutputs).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->NewOutputs,0);
  }
  return;
}

// ProcessInvalidatedOutputs<UE::MovieScene::TOverlappingMaterialParameterHandler<UE::MovieScene::FVectorMixin>_&> @ 1467fbbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
::
ProcessInvalidatedOutputs<UE::MovieScene::TOverlappingMaterialParameterHandler<UE::MovieScene::FVectorMixin>_&>
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
           *this,UMovieSceneEntitySystemLinker *param_1,
          TOverlappingMaterialParameterHandler<UE::MovieScene::FVectorMixin> *param_2)

{
  ForElementType<UE::MovieScene::FMovieSceneEntityID> FVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  UMovieSceneEntitySystemLinker *pUVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined4 uVar10;
  FBuiltInComponentTypes *pFVar11;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *pTVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  FEntityOutputAggregate FVar17;
  uint uVar18;
  ForElementType<UE::MovieScene::FMovieSceneEntityID> FVar19;
  ForElementType<unsigned_int> FVar20;
  TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
  *pTVar21;
  FObjectComponent *pFVar22;
  undefined1 *puVar23;
  FComponentTypeID FVar24;
  ForElementType<unsigned_int> FVar25;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> *pTVar26;
  int iVar27;
  ulonglong uVar28;
  uint uVar29;
  undefined1 auStackY_158 [32];
  undefined1 local_108 [4];
  uint local_104;
  int local_100;
  ushort local_fc;
  uint local_f8;
  uint local_f4;
  TOverlappingMaterialParameterHandler<UE::MovieScene::FVectorMixin> *local_f0;
  TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_e8;
  short sStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  ulonglong local_d0;
  TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_c8;
  short sStack_c0;
  undefined2 uStack_be;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  UMovieSceneEntitySystemLinker *local_b0;
  int local_a8;
  int local_a4;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_98;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_88;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_78;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_68;
  undefined1 local_58 [16];
  ForElementType<UE::MovieScene::FMovieSceneEntityID> local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_f0 = param_2;
  local_b0 = param_1;
  if ((this->InvalidatedOutputs).NumBits != 0) {
    local_48 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0;
    local_40 = 0;
    local_3c = 8;
    pFVar11 = FBuiltInComponentTypes::Get();
    FVar24.Value = (pFVar11->Tags).RestoreState.Value;
    local_fc = FVar24.Value;
    if ((0xfffe < (this->InvalidatedOutputs).NumBits) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InvalidatedOutputs.Num() < NO_OUTPUT",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                           ,0xf2,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_d0 = CONCAT44(local_d0._4_4_,1);
    local_f8 = 0;
    uVar18 = (this->InvalidatedOutputs).NumBits;
    local_104 = 0;
    local_100 = 0;
    if (uVar18 != 0) {
      FVar25 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
      if (FVar25 == (ForElementType<unsigned_int>)0x0) {
        FVar25 = (ForElementType<unsigned_int>)&this->InvalidatedOutputs;
      }
      uVar29 = *(uint *)FVar25;
      local_100 = 0;
      local_f8 = 0;
      while (uVar29 == 0) {
        local_100 = local_100 + 0x20;
        lVar13 = (longlong)(int)local_f8;
        local_f8 = local_f8 + 1;
        local_104 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_f8)
        goto LAB_1467fbd13;
        uVar29 = *(uint *)((uchar *)((longlong)FVar25 + 4) + lVar13 * 4);
      }
      local_d0 = (ulonglong)(-uVar29 & uVar29);
      uVar28 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_a8 = (int)lVar13;
      local_104 = local_a8 + -1 + local_100;
      if ((int)uVar18 < (int)local_104) {
        local_104 = uVar18;
      }
    }
LAB_1467fbd13:
    if ((int)local_104 < (int)uVar18) {
      local_f4 = 0xffffffff;
      do {
        uVar18 = local_104;
        pTVar21 = &this->OutputToEntity;
        local_40 = 0;
        if (local_3c < 0) {
          Core::Private::
          ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_>
                    (2,2,0,(ForElementType<UE::MovieScene::FMovieSceneEntityID> *)local_58,0,
                     &local_3c);
        }
        pUVar6 = local_b0;
        iVar27 = *(int *)&(this->OutputToEntity).field_0x48;
        sStack_c0 = (short)uVar18;
        iStack_bc = -1;
        if (iVar27 == 0) {
          local_b8 = -1;
        }
        else {
          puVar23 = *(undefined1 **)&(this->OutputToEntity).field_0x40;
          puVar14 = &(this->OutputToEntity).field_0x38;
          if (puVar23 != (undefined1 *)0x0) {
            puVar14 = puVar23;
          }
          local_b8 = *(int *)(puVar14 + ((longlong)iVar27 - 1U & (ulonglong)(uVar18 & 0xffff)) * 4);
          iStack_bc = local_b8;
          if (local_b8 != -1) {
            do {
              local_b8 = *(int *)(*(longlong *)pTVar21 + 4 + (longlong)iStack_bc * 0xc);
              if (*(short *)(*(longlong *)pTVar21 + (longlong)iStack_bc * 0xc) == (short)uVar18)
              break;
              iStack_bc = local_b8;
            } while (local_b8 != -1);
          }
        }
        uStack_d4 = uStack_b4;
        local_d8 = local_b8;
        local_c8 = pTVar21;
        local_e8 = pTVar21;
        _sStack_e0 = _sStack_c0;
        iVar27 = iStack_bc;
joined_r0x0001467fbdf9:
        iStack_dc = iVar27;
        if (iVar27 != -1) {
          uVar2 = *(ushort *)(*(longlong *)local_e8 + 2 + (longlong)iVar27 * 0xc);
          if ((uVar2 == 0xffff) ||
             (uVar18 = (uint)uVar2,
             *(int *)&(pUVar6->EntityManager).EntityLocations.field_0x28 <= (int)uVar18)) {
LAB_1467fbf73:
            bVar7 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1936009250870394630>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                               ,0xfa,"Linker->EntityManager.IsAllocated(Inputs.Value())");
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (*(int *)&(this->EntityToOutput).field_0x8 !=
                *(int *)&(this->EntityToOutput).field_0x34) {
              puVar23 = *(undefined1 **)&(this->EntityToOutput).field_0x40;
              uVar2 = *(ushort *)(*(longlong *)local_e8 + 2 + (longlong)iVar27 * 0xc);
              puVar14 = &(this->EntityToOutput).field_0x38;
              if (puVar23 != (undefined1 *)0x0) {
                puVar14 = puVar23;
              }
              iVar27 = *(int *)(puVar14 +
                               ((longlong)*(int *)&(this->EntityToOutput).field_0x48 - 1U &
                               (ulonglong)uVar2) * 4);
              if (iVar27 != -1) {
                do {
                  if (*(ushort *)(*(longlong *)&this->EntityToOutput + (longlong)iVar27 * 0xc) ==
                      uVar2) {
                    TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                    ::RemoveByIndex((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                                     *)this,iVar27);
                    break;
                  }
                  iVar27 = *(int *)(*(longlong *)&this->EntityToOutput + 4 + (longlong)iVar27 * 0xc)
                  ;
                } while (iVar27 != -1);
              }
            }
            TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
            ::TKeyIterator::RemoveCurrent((TKeyIterator *)&local_e8);
          }
          else {
            if (*(int *)&(pUVar6->EntityManager).EntityLocations.field_0x28 <= (int)uVar18) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L"");
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            puVar23 = *(undefined1 **)&(pUVar6->EntityManager).EntityLocations.field_0x20;
            puVar14 = &(pUVar6->EntityManager).EntityLocations.field_0x10;
            if (puVar23 != (undefined1 *)0x0) {
              puVar14 = puVar23;
            }
            if ((*(uint *)(puVar14 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar18 & 0x1f) & 1) == 0)
            goto LAB_1467fbf73;
            FVar19 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)local_58;
            if (local_48 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
              FVar19 = local_48;
            }
            FVar1 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)
                    (*(longlong *)local_e8 + 2 + (longlong)iVar27 * 0xc);
            if ((ulonglong)FVar19 <= (ulonglong)FVar1) {
              FVar19 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)local_58;
              if (local_48 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
                FVar19 = local_48;
              }
              if ((ulonglong)FVar1 < (ulonglong)((longlong)FVar19 + (longlong)local_3c * 2)) {
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar7) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
            }
            if (local_40 == local_3c) {
              local_40 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_>
                                   (0x202,(ForElementType<UE::MovieScene::FMovieSceneEntityID> *)
                                          local_58,&local_3c);
            }
            lVar13 = (longlong)local_40;
            FVar19 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)local_58;
            if (local_48 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
              FVar19 = local_48;
            }
            local_40 = local_40 + 1;
            *(undefined2 *)((longlong)FVar19 + lVar13 * 2) = *(undefined2 *)FVar1;
          }
          iStack_dc = local_d8;
          param_2 = local_f0;
          FVar24.Value = local_fc;
          uVar18 = local_104;
          if (local_d8 == -1) goto LAB_1467fc077;
          iVar27 = local_d8;
          do {
            iVar3 = *(int *)(*(longlong *)local_e8 + 4 + (longlong)iVar27 * 0xc);
            local_d8 = iVar3;
            if (*(short *)(*(longlong *)local_e8 + (longlong)iVar27 * 0xc) == sStack_e0) break;
            iVar27 = iVar3;
          } while (iVar3 != -1);
          goto joined_r0x0001467fbdf9;
        }
LAB_1467fc077:
        iVar27 = local_40;
        pFVar22 = (FObjectComponent *)
                  ((ulonglong)(uVar18 & 0xffff) * 0x40 + *(longlong *)&this->Outputs);
        if (local_40 < 1) {
          TOverlappingMaterialParameterHandler<UE::MovieScene::FVectorMixin>::DestroyOutput
                    (param_2,pFVar22,(FMaterialParameterInfo *)(pFVar22 + 1),
                     (FAnimatedMaterialParameterInfo *)(pFVar22 + 2),
                     (FEntityOutputAggregate)SUB41(pFVar22[3].ObjectKey.ObjectSerialNumber,0));
        }
        else {
          FVar19 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)local_58;
          if (local_48 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
            FVar19 = local_48;
          }
          FVar1 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)
                  ((longlong)FVar19 + (longlong)local_40 * 2);
          while( true ) {
            if (local_40 != iVar27) {
              local_108[0] = 0;
              `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_108);
            }
            if (FVar19 == FVar1) {
              uVar8 = 0;
              goto LAB_1467fc0ee;
            }
            bVar7 = FEntityManager::HasComponent
                              (&local_b0->EntityManager,(FMovieSceneEntityID)*(ushort *)FVar19,
                               FVar24);
            if (bVar7) break;
            FVar19 = (ForElementType<UE::MovieScene::FMovieSceneEntityID>)((longlong)FVar19 + 2);
          }
          uVar8 = 1;
LAB_1467fc0ee:
          uVar29 = uVar18 & 0xffff;
          *(undefined1 *)&pFVar22[3].ObjectKey.ObjectSerialNumber = uVar8;
          if ((int)uVar29 < (this->NewOutputs).NumBits) {
            if ((this->NewOutputs).NumBits <= (int)uVar29) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L"");
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            FVar25 = (this->NewOutputs).AllocatorInstance.SecondaryData;
            FVar20 = (ForElementType<unsigned_int>)&this->NewOutputs;
            if (FVar25 != (ForElementType<unsigned_int>)0x0) {
              FVar20 = FVar25;
            }
            if ((*(uint *)((longlong)FVar20 + (ulonglong)(uVar29 >> 5) * 4) >> (uVar18 & 0x1f) & 1)
                == 0) goto LAB_1467fc16f;
            FVar17.bNeedsRestoration = SUB41(pFVar22[3].ObjectKey.ObjectSerialNumber,0);
            pTVar12 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::
                      TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int><TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                                (&local_78,
                                 (TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                                  *)local_58);
            pTVar26 = &local_98;
            local_98.DataPtr = pTVar12->DataPtr;
            local_98.ArrayNum = pTVar12->ArrayNum;
            local_98._12_4_ = *(undefined4 *)&pTVar12->field_0xc;
          }
          else {
LAB_1467fc16f:
            FVar17.bNeedsRestoration = SUB41(pFVar22[3].ObjectKey.ObjectSerialNumber,0);
            pTVar12 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::
                      TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int><TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                                (&local_68,
                                 (TArray<UE::MovieScene::FMovieSceneEntityID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                                  *)local_58);
            pTVar26 = &local_88;
            local_88.DataPtr = pTVar12->DataPtr;
            local_88.ArrayNum = pTVar12->ArrayNum;
            local_88._12_4_ = *(undefined4 *)&pTVar12->field_0xc;
          }
          TOverlappingMaterialParameterHandler<UE::MovieScene::FVectorMixin>::UpdateOutput
                    (local_f0,pFVar22,(FMaterialParameterInfo *)(pFVar22 + 1),pTVar26,
                     (FAnimatedMaterialParameterInfo *)(pFVar22 + 2),FVar17);
        }
        if (local_40 == 0) {
          pFVar22 = (FObjectComponent *)
                    ((ulonglong)(uVar18 & 0xffff) * 0x40 + *(longlong *)&this->Outputs);
          if (*(int *)&(this->KeyToOutput).field_0x8 != *(int *)&(this->KeyToOutput).field_0x34) {
            uVar29 = MovieScene::GetTypeHash(pFVar22);
            uVar9 = ::GetTypeHash((FMaterialParameterInfo *)(pFVar22 + 1));
            puVar23 = *(undefined1 **)&(this->KeyToOutput).field_0x40;
            puVar14 = &(this->KeyToOutput).field_0x38;
            if (puVar23 != (undefined1 *)0x0) {
              puVar14 = puVar23;
            }
            iVar27 = *(int *)(puVar14 +
                             ((longlong)*(int *)&(this->KeyToOutput).field_0x48 - 1U &
                             (longlong)
                             (int)(uVar29 * 0x40 + (uVar29 >> 2) + 0x9e3779b9 + uVar9 ^ uVar29)) * 4
                             );
            if (iVar27 != -1) {
              do {
                plVar16 = (longlong *)((longlong)iVar27 * 0x30 + *(longlong *)&this->KeyToOutput);
                if (((((int)plVar16[1] == 0) && (*(int *)((longlong)plVar16 + 0xc) == 0)) &&
                    ((pFVar22->ObjectKey).ObjectIndex == 0)) &&
                   ((pFVar22->ObjectKey).ObjectSerialNumber == 0)) {
                  bVar7 = (UObject *)*plVar16 == (pFVar22->ObjectPtr).field0_0x0.DebugPtr;
                }
                else if (((int)plVar16[1] == (pFVar22->ObjectKey).ObjectIndex) &&
                        (*(int *)((longlong)plVar16 + 0xc) ==
                         (pFVar22->ObjectKey).ObjectSerialNumber)) {
                  bVar7 = true;
                }
                else {
                  bVar7 = false;
                }
                if (((bVar7) && ((int)plVar16[2] == *(int *)&pFVar22[1].ObjectPtr.field0_0x0)) &&
                   ((*(int *)((longlong)plVar16 + 0x14) ==
                     *(int *)((longlong)&pFVar22[1].ObjectPtr.field0_0x0 + 4) &&
                    (((char)plVar16[3] == (char)pFVar22[1].ObjectKey.ObjectIndex &&
                     (*(int *)((longlong)plVar16 + 0x1c) == pFVar22[1].ObjectKey.ObjectSerialNumber)
                     ))))) {
                  TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,0>,FDefaultSetAllocator>
                  ::RemoveByIndex((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,0>,FDefaultSetAllocator>
                                   *)&this->KeyToOutput,iVar27);
                  break;
                }
                iVar27 = (int)plVar16[5];
              } while (iVar27 != -1);
            }
          }
          uVar18 = uVar18 & 0xffff;
          TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>::FOutput,FDefaultSparseArrayAllocator>
          ::DestroyElements(&this->Outputs,uVar18,1);
          lVar13 = *(longlong *)&this->Outputs;
          puVar23 = &(this->Outputs).field_0x10;
          bVar5 = (byte)uVar18 & 0x1f;
          uVar29 = 1 << bVar5 | 1U >> 0x20 - bVar5;
          if (*(int *)&(this->Outputs).field_0x28 <= (int)uVar18) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L"");
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          puVar14 = *(undefined1 **)&(this->Outputs).field_0x20;
          puVar15 = puVar23;
          if (puVar14 != (undefined1 *)0x0) {
            puVar15 = puVar14;
          }
          if ((*(uint *)(puVar15 + (ulonglong)(uVar18 >> 5) * 4) & uVar29) == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0xc5,L"");
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (*(int *)&(this->Outputs).field_0x34 != 0) {
            *(uint *)((longlong)*(int *)&(this->Outputs).field_0x30 * 0x40 + lVar13) = uVar18;
          }
          *(undefined4 *)((longlong)(int)uVar18 * 0x40 + lVar13) = 0xffffffff;
          if (*(int *)&(this->Outputs).field_0x34 < 1) {
            uVar10 = 0xffffffff;
          }
          else {
            uVar10 = *(undefined4 *)&(this->Outputs).field_0x30;
          }
          *(undefined4 *)((longlong)(int)uVar18 * 0x40 + 4 + lVar13) = uVar10;
          puVar14 = &(this->Outputs).field_0x34;
          *(int *)puVar14 = *(int *)puVar14 + 1;
          *(uint *)&(this->Outputs).field_0x30 = uVar18;
          if (*(int *)&(this->Outputs).field_0x28 <= (int)uVar18) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L"");
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          puVar14 = *(undefined1 **)&(this->Outputs).field_0x20;
          if (puVar14 != (undefined1 *)0x0) {
            puVar23 = puVar14;
          }
          *(uint *)(puVar23 + (ulonglong)(uVar18 >> 5) * 4) =
               *(uint *)(puVar23 + (ulonglong)(uVar18 >> 5) * 4) & ~uVar29;
        }
        FVar25 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
        uVar18 = (this->InvalidatedOutputs).NumBits;
        uVar28 = (ulonglong)(int)local_f8;
        local_f4 = ~(uint)local_d0 & local_f4;
        FVar20 = (ForElementType<unsigned_int>)&this->InvalidatedOutputs;
        if (FVar25 != (ForElementType<unsigned_int>)0x0) {
          FVar20 = FVar25;
        }
        uVar29 = local_f4 & *(uint *)((longlong)FVar20 + uVar28 * 4);
        while (uVar29 == 0) {
          local_100 = local_100 + 0x20;
          iVar27 = (int)uVar28;
          local_f8 = iVar27 + 1;
          uVar28 = (ulonglong)local_f8;
          local_104 = uVar18;
          if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_f8)
          goto LAB_1467fc4a6;
          uVar29 = *(uint *)((longlong)FVar20 + 4 + (longlong)iVar27 * 4);
          local_f4 = 0xffffffff;
        }
        local_d0 = CONCAT44(local_d0._4_4_,-uVar29 & uVar29);
        uVar28 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_a4 = (int)lVar13;
        local_104 = local_100 + -1 + local_a4;
        if ((int)uVar18 < (int)local_104) {
          local_104 = uVar18;
        }
LAB_1467fc4a6:
        param_2 = local_f0;
      } while ((int)local_104 < (this->InvalidatedOutputs).NumBits);
    }
    if (local_48 != (ForElementType<UE::MovieScene::FMovieSceneEntityID>)0x0) {
      FMemory::Free((void *)local_48);
    }
  }
  iVar27 = (this->InvalidatedOutputs).MaxBits;
  (this->InvalidatedOutputs).NumBits = 0;
  if ((iVar27 < 0) || (0x80 < iVar27)) {
    (this->InvalidatedOutputs).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->InvalidatedOutputs,0);
  }
  iVar27 = (this->NewOutputs).MaxBits;
  (this->NewOutputs).NumBits = 0;
  if ((iVar27 < 0) || (0x80 < iVar27)) {
    (this->NewOutputs).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->NewOutputs,0);
  }
  return;
}

// VisitActiveAllocationImpl<UE::MovieScene::FObjectComponent,FMaterialParameterInfo> @ 146805820

void __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
::VisitActiveAllocationImpl<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
           *this,FEntityAllocation *param_1,
          TComponentPtr<UE::MovieScene::FObjectComponent_const_> param_2,
          TComponentPtr<FMaterialParameterInfo_const_> param_3)

{
  FMovieSceneEntityID *pFVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  FBuiltInComponentTypes *pFVar5;
  FComponentHeader *pFVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  FComponentHeader *pFVar9;
  longlong lVar10;
  ulonglong uVar11;
  UObject *local_68 [2];
  FName local_58;
  undefined8 uStack_50;
  UObject *local_48 [2];
  FName local_38;
  undefined8 uStack_30;
  
  if ((this->bIsInitialized == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                         ,0x182,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar11 = (ulonglong)param_1->Size;
  pFVar1 = param_1->EntityIDs;
  pFVar5 = FBuiltInComponentTypes::Get();
  pFVar6 = param_1->ComponentHeaders;
  pFVar9 = (FComponentHeader *)0x0;
  pFVar8 = pFVar6 + param_1->NumComponents;
  for (; (pFVar7 = pFVar9, pFVar6 != pFVar8 &&
         (pFVar7 = pFVar6, (pFVar6->ComponentType).Value != (pFVar5->Tags).NeedsLink.Value));
      pFVar6 = pFVar6 + 1) {
  }
  pFVar5 = FBuiltInComponentTypes::Get();
  pFVar6 = param_1->ComponentHeaders;
  pFVar8 = pFVar6 + param_1->NumComponents;
  do {
    if (pFVar6 == pFVar8) {
LAB_1468058f7:
      if (uVar11 != 0) {
        lVar10 = (longlong)param_2.ComponentPtr - (longlong)param_3.ComponentPtr;
        do {
          local_48[0] = *(UObject **)((longlong)param_3.ComponentPtr + lVar10);
          if ((GC::GIsIncrementalReachabilityPending != false) && (local_48[0] != (UObject *)0x0)) {
            GC::MarkAsReachable(local_48[0]);
          }
          local_38 = (param_3.ComponentPtr)->Name;
          uStack_30._0_1_ = (param_3.ComponentPtr)->Association;
          uStack_30._1_3_ = *(undefined3 *)&(param_3.ComponentPtr)->field_0x9;
          uStack_30._4_4_ = (param_3.ComponentPtr)->Index;
          local_48[1] = *(UObject **)((longlong)param_3.ComponentPtr + lVar10 + 8);
          MakeOutput(this,(FMovieSceneEntityID)pFVar1[(longlong)pFVar9].Value,
                     (TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
                      *)local_48,pFVar7 != (FComponentHeader *)0x0);
          pFVar9 = (FComponentHeader *)((longlong)&pFVar9->_padding_ + 1);
          param_3.ComponentPtr = param_3.ComponentPtr + 1;
        } while ((longlong)pFVar9 < (longlong)uVar11);
      }
      return;
    }
    if ((pFVar6->ComponentType).Value == (pFVar5->Tags).RestoreState.Value) {
      if (pFVar6 != (FComponentHeader *)0x0) {
        if (uVar11 == 0) {
          return;
        }
        lVar10 = (longlong)param_2.ComponentPtr - (longlong)param_3.ComponentPtr;
        do {
          local_68[0] = *(UObject **)(lVar10 + (longlong)param_3.ComponentPtr);
          if ((GC::GIsIncrementalReachabilityPending != false) && (local_68[0] != (UObject *)0x0)) {
            GC::MarkAsReachable(local_68[0]);
          }
          local_58 = (param_3.ComponentPtr)->Name;
          uStack_50._0_1_ = (param_3.ComponentPtr)->Association;
          uStack_50._1_3_ = *(undefined3 *)&(param_3.ComponentPtr)->field_0x9;
          uStack_50._4_4_ = (param_3.ComponentPtr)->Index;
          local_68[1] = *(UObject **)(lVar10 + 8 + (longlong)param_3.ComponentPtr);
          uVar4 = MakeOutput(this,(FMovieSceneEntityID)pFVar1[(longlong)pFVar9].Value,
                             (TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
                              *)local_68,pFVar7 != (FComponentHeader *)0x0);
          pFVar9 = (FComponentHeader *)((longlong)&pFVar9->_padding_ + 1);
          param_3.ComponentPtr = param_3.ComponentPtr + 1;
          *(undefined1 *)((ulonglong)uVar4 * 0x40 + 0x3c + *(longlong *)&this->Outputs) = 1;
        } while ((longlong)pFVar9 < (longlong)uVar11);
        return;
      }
      goto LAB_1468058f7;
    }
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// VisitActiveAllocationImpl<UE::MovieScene::FObjectComponent,FName> @ 1468059f0

void __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
::VisitActiveAllocationImpl<UE::MovieScene::FObjectComponent,FName>
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
           *this,FEntityAllocation *param_1,
          TComponentPtr<UE::MovieScene::FObjectComponent_const_> param_2,
          TComponentPtr<FName_const_> param_3)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBuiltInComponentTypes *pFVar4;
  FComponentHeader *pFVar5;
  FComponentHeader *pFVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  ulonglong uVar9;
  FMovieSceneEntityID *pFVar10;
  TObjectPtr<UObject>_u_0 local_68;
  FObjectKey local_60;
  FName local_58;
  undefined1 local_50;
  undefined4 local_4c;
  TObjectPtr<UObject>_u_0 local_48;
  FObjectKey local_40;
  FName local_38;
  undefined1 local_30;
  undefined4 local_2c;
  
  if ((this->bIsInitialized == false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                         ,0x182,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar9 = (ulonglong)param_1->Size;
  pFVar10 = param_1->EntityIDs;
  pFVar4 = FBuiltInComponentTypes::Get();
  pFVar5 = param_1->ComponentHeaders;
  pFVar8 = (FComponentHeader *)0x0;
  pFVar7 = pFVar5 + param_1->NumComponents;
  for (; (pFVar6 = pFVar8, pFVar5 != pFVar7 &&
         (pFVar6 = pFVar5, (pFVar5->ComponentType).Value != (pFVar4->Tags).NeedsLink.Value));
      pFVar5 = pFVar5 + 1) {
  }
  pFVar4 = FBuiltInComponentTypes::Get();
  pFVar5 = param_1->ComponentHeaders;
  pFVar7 = pFVar5 + param_1->NumComponents;
  do {
    if (pFVar5 == pFVar7) {
LAB_146805ac7:
      if (uVar9 != 0) {
        do {
          local_48 = (TObjectPtr<UObject>_u_0)
                     ((param_2.ComponentPtr)->ObjectPtr).field0_0x0.DebugPtr;
          if ((GC::GIsIncrementalReachabilityPending != false) &&
             (local_48.DebugPtr != (UObject *)0x0)) {
            GC::MarkAsReachable(local_48.DebugPtr);
          }
          local_40 = (param_2.ComponentPtr)->ObjectKey;
          local_38 = param_3.ComponentPtr[(longlong)pFVar8];
          local_30 = 2;
          local_2c = 0xffffffff;
          MakeOutput(this,(FMovieSceneEntityID)pFVar10->Value,
                     (TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
                      *)&local_48.ObjectPtr,pFVar6 != (FComponentHeader *)0x0);
          pFVar8 = (FComponentHeader *)((longlong)&pFVar8->_padding_ + 1);
          param_2.ComponentPtr = param_2.ComponentPtr + 1;
          pFVar10 = pFVar10 + 1;
        } while ((longlong)pFVar8 < (longlong)uVar9);
      }
      return;
    }
    if ((pFVar5->ComponentType).Value == (pFVar4->Tags).RestoreState.Value) {
      if (pFVar5 != (FComponentHeader *)0x0) {
        if (uVar9 == 0) {
          return;
        }
        do {
          local_68 = (TObjectPtr<UObject>_u_0)
                     ((param_2.ComponentPtr)->ObjectPtr).field0_0x0.DebugPtr;
          if ((GC::GIsIncrementalReachabilityPending != false) &&
             (local_68.DebugPtr != (UObject *)0x0)) {
            GC::MarkAsReachable(local_68.DebugPtr);
          }
          local_60 = (param_2.ComponentPtr)->ObjectKey;
          local_58 = param_3.ComponentPtr[(longlong)pFVar8];
          local_50 = 2;
          local_4c = 0xffffffff;
          uVar3 = MakeOutput(this,(FMovieSceneEntityID)pFVar10->Value,
                             (TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
                              *)&local_68.ObjectPtr,pFVar6 != (FComponentHeader *)0x0);
          pFVar8 = (FComponentHeader *)((longlong)&pFVar8->_padding_ + 1);
          param_2.ComponentPtr = param_2.ComponentPtr + 1;
          pFVar10 = pFVar10 + 1;
          *(undefined1 *)((ulonglong)uVar3 * 0x40 + 0x3c + *(longlong *)&this->Outputs) = 1;
        } while ((longlong)pFVar8 < (longlong)uVar9);
        return;
      }
      goto LAB_146805ac7;
    }
    pFVar5 = pFVar5 + 1;
  } while( true );
}

// ~TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo> @ 14680cb20

void __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
::
~TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
           *this)

{
  ForElementType<unsigned_int> FVar1;
  void *pvVar2;
  
  FVar1 = (this->NewOutputs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>::FOutput,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>::FOutput,FDefaultSparseArrayAllocator>
            (&this->Outputs);
  *(undefined4 *)&(this->KeyToOutput).field_0x48 = 0;
  pvVar2 = *(void **)&(this->KeyToOutput).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyToOutput);
  *(undefined4 *)&(this->OutputToEntity).field_0x48 = 0;
  pvVar2 = *(void **)&(this->OutputToEntity).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OutputToEntity);
  *(undefined4 *)&(this->EntityToOutput).field_0x48 = 0;
  pvVar2 = *(void **)&(this->EntityToOutput).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// CreateOutputByKey @ 146824710

ushort __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
::CreateOutputByKey(TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
                    *this,TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
                          *param_1)

{
  TSparseArray<UE::MovieScene::TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>::FOutput,FDefaultSparseArrayAllocator>
  *this_00;
  TBitArray<FDefaultBitArrayAllocator> *this_01;
  uint *puVar1;
  int iVar2;
  UObject *pUVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  ushort uVar9;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  ForElementType<unsigned_int> FVar13;
  int iVar14;
  ushort local_res8 [4];
  TPairInitializer<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>_const_&,unsigned_short_const_&>
  local_res18;
  FSparseArrayAllocationInfo local_a8;
  TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo> *local_98;
  ushort *local_90;
  UObject *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined2 uStack_54;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined4 local_50;
  undefined1 local_4c;
  
  puVar11 = TMapBase<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,0>_>
            ::Find((TMapBase<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,0>_>
                    *)&this->KeyToOutput,param_1);
  if ((puVar11 == (ushort *)0x0) || (local_res8[0] = *puVar11, local_res8[0] == 0xffff)) {
    pUVar3 = *(UObject **)&param_1->Key;
    this_00 = &this->Outputs;
    local_88 = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar3);
    }
    uVar6 = *(undefined8 *)&(param_1->Key).field_0x10;
    uVar7 = *(undefined8 *)&(param_1->Key).field_0x18;
    uVar4 = *(undefined8 *)&(param_1->Key).field_0x8;
    iVar14 = *(int *)&(this->Outputs).field_0x34;
    local_58 = 0;
    uStack_54 = 0xffff;
    uStack_52 = 0xff;
    local_50 = CONCAT22(local_50._2_2_,0xffff);
    local_4c = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_80 = uVar4;
    local_78 = uVar6;
    uStack_70 = uVar7;
    if (iVar14 == 0) {
      iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40,8,1,(ForAnyElementType *)this_00,(int *)&(this->Outputs).field_0x8,
                          (int *)&(this->Outputs).field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Outputs).field_0x10,false);
    }
    else {
      iVar10 = *(int *)&(this->Outputs).field_0x30;
      iVar2 = *(int *)((longlong)iVar10 * 0x40 + 4 + *(longlong *)&this_00->field_0x0);
      iVar14 = iVar14 + -1;
      *(int *)&(this->Outputs).field_0x30 = iVar2;
      *(int *)&(this->Outputs).field_0x34 = iVar14;
      if (iVar14 != 0) {
        *(undefined4 *)((longlong)iVar2 * 0x40 + *(longlong *)&this_00->field_0x0) = 0xffffffff;
      }
    }
    TSparseArrayBase<64,8,FDefaultSparseArrayAllocator>::AllocateIndex
              ((TSparseArrayBase<64,8,FDefaultSparseArrayAllocator> *)this_00,&local_a8,iVar10);
    if (local_a8.Pointer != (undefined8 *)0x0) {
      *(UObject **)local_a8.Pointer = pUVar3;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar3);
      }
      *(undefined8 *)((longlong)local_a8.Pointer + 8) = uVar4;
      *(undefined8 *)((longlong)local_a8.Pointer + 0x10) = uVar6;
      *(undefined8 *)((longlong)local_a8.Pointer + 0x18) = uVar7;
      *(undefined1 *)((longlong)local_a8.Pointer + 0x3c) = 0;
      *(undefined8 *)((longlong)local_a8.Pointer + 0x20) = local_68;
      *(undefined8 *)((longlong)local_a8.Pointer + 0x28) = uStack_60;
      *(ulonglong *)((longlong)local_a8.Pointer + 0x30) =
           CONCAT17(uStack_51,CONCAT16(uStack_52,CONCAT24(uStack_54,local_58)));
      *(undefined4 *)((longlong)local_a8.Pointer + 0x38) = local_50;
    }
    if (0xfffe < local_a8.Index) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < NO_OUTPUT",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                         ,0x1d6,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return uVar9;
      }
    }
    uVar12 = local_a8.Index & 0xffff;
    this_01 = &this->NewOutputs;
    local_res8[0] = (ushort)local_a8.Index;
    iVar14 = (uVar12 - (this->NewOutputs).NumBits) + 1;
    if (0 < iVar14) {
      iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_01,iVar14);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(this_01,iVar10,iVar14,false);
      uVar12 = (uint)local_res8[0];
    }
    if ((this->NewOutputs).NumBits <= (int)uVar12) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return uVar9;
      }
    }
    FVar13 = (this->NewOutputs).AllocatorInstance.SecondaryData;
    if (FVar13 == (ForElementType<unsigned_int>)0x0) {
      FVar13 = (ForElementType<unsigned_int>)this_01;
    }
    puVar1 = (uint *)((longlong)FVar13 + (ulonglong)(uVar12 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar12 & 0x1f);
    local_90 = local_res8;
    local_98 = param_1;
    TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>_const_&,unsigned_short_const_&>_>
              ((TSet<TTuple<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,unsigned_short,0>,FDefaultSetAllocator>
                *)&this->KeyToOutput,&local_res18,(bool *)&local_98);
  }
  return local_res8[0];
}

// MakeOutput @ 1468407d0

ushort __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
::MakeOutput(TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
             *this,FMovieSceneEntityID param_1,
            TOverlappingEntityInput<UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
            *param_2,bool param_3)

{
  int *piVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  longlong lVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  ushort *puVar9;
  ForElementType<unsigned_int> FVar10;
  int iVar11;
  undefined1 *puVar12;
  ushort local_res8 [4];
  FMovieSceneEntityID local_res10 [4];
  undefined1 local_58 [8];
  FMovieSceneEntityID *local_50;
  ushort *local_48;
  ushort *local_40;
  FMovieSceneEntityID *local_38;
  
  if (*(int *)&(this->EntityToOutput).field_0x8 != *(int *)&(this->EntityToOutput).field_0x34) {
    puVar12 = *(undefined1 **)&(this->EntityToOutput).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->EntityToOutput).field_0x38;
    }
    iVar11 = *(int *)(puVar12 +
                     ((ulonglong)(*(int *)&(this->EntityToOutput).field_0x48 - 1) &
                     (ulonglong)param_1.Value) * 4);
    if (iVar11 != -1) {
      do {
        lVar3 = *(longlong *)&this->EntityToOutput + (longlong)iVar11 * 0xc;
        if (*(ushort *)(*(longlong *)&this->EntityToOutput + (longlong)iVar11 * 0xc) ==
            param_1.Value) {
          puVar9 = (ushort *)(lVar3 + 2);
          if (lVar3 == 0) {
            puVar9 = (ushort *)0x0;
          }
          if (puVar9 != (ushort *)0x0) {
            uVar7 = *puVar9;
            goto LAB_146840840;
          }
          break;
        }
        iVar11 = *(int *)(lVar3 + 4);
      } while (iVar11 != -1);
    }
  }
  uVar7 = 0xffff;
LAB_146840840:
  local_res10[0].Value = param_1.Value;
  local_res8[0] = CreateOutputByKey(this,param_2);
  if (uVar7 == local_res8[0]) {
    if (param_3) {
      pTVar2 = &this->InvalidatedOutputs;
      iVar11 = ((uint)local_res8[0] - (this->InvalidatedOutputs).NumBits) + 1;
      if (0 < iVar11) {
        iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar2,iVar11);
        TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar2,iVar8,iVar11,false);
      }
      uVar7 = local_res8[0];
      if (((this->InvalidatedOutputs).NumBits <= (int)(uint)local_res8[0]) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return uVar7;
      }
      FVar10 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<unsigned_int>)0x0) {
        FVar10 = (ForElementType<unsigned_int>)pTVar2;
      }
      puVar4 = (uint *)((longlong)FVar10 + (ulonglong)(uVar7 >> 5) * 4);
      *puVar4 = *puVar4 | 1 << ((byte)uVar7 & 0x1f);
    }
  }
  else {
    pTVar2 = &this->InvalidatedOutputs;
    if (uVar7 != 0xffff) {
      iVar11 = ((uint)uVar7 - (this->InvalidatedOutputs).NumBits) + 1;
      if (0 < iVar11) {
        iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar2,iVar11);
        TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar2,iVar8,iVar11,false);
      }
      if (((this->InvalidatedOutputs).NumBits <= (int)(uint)uVar7) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return uVar7;
      }
      FVar10 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<unsigned_int>)0x0) {
        FVar10 = (ForElementType<unsigned_int>)pTVar2;
      }
      puVar4 = (uint *)((longlong)FVar10 + (ulonglong)(uVar7 >> 5) * 4);
      *puVar4 = *puVar4 | 1 << ((byte)uVar7 & 0x1f);
      TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
      ::Remove(&this->OutputToEntity,uVar7,local_res10);
      TMapBase<UE::MovieScene::FMovieSceneEntityID,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>_>
      ::Remove((TMapBase<UE::MovieScene::FMovieSceneEntityID,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>_>
                *)this,local_res10);
    }
    piVar1 = &(this->InvalidatedOutputs).NumBits;
    iVar11 = ((uint)local_res8[0] - *piVar1) + 1;
    if (0 < iVar11) {
      iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar2,iVar11);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar2,iVar8,iVar11,false);
    }
    uVar7 = local_res8[0];
    if ((*piVar1 <= (int)(uint)local_res8[0]) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return uVar7;
    }
    FVar10 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<unsigned_int>)0x0) {
      FVar10 = (ForElementType<unsigned_int>)pTVar2;
    }
    puVar4 = (uint *)((longlong)FVar10 + (ulonglong)(uVar7 >> 5) * 4);
    *puVar4 = *puVar4 | 1 << ((byte)uVar7 & 0x1f);
    local_50 = local_res10;
    local_48 = local_res8;
    TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UE::MovieScene::FMovieSceneEntityID_const_&,unsigned_short_const_&>_>
              ((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<UE::MovieScene::FMovieSceneEntityID_const_&,unsigned_short_const_&>
                        *)local_58,(bool *)&local_50);
    local_40 = local_res8;
    local_38 = local_res10;
    TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_short_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>_>
              ((TSet<TTuple<unsigned_short,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                *)&this->OutputToEntity,
               (TPairInitializer<unsigned_short_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>
                *)(local_58 + 4),(bool *)&local_40);
  }
  return local_res8[0];
}

// VisitUnlinkedAllocationImpl @ 146873420

void __thiscall
UE::MovieScene::
TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
::VisitUnlinkedAllocationImpl
          (TOverlappingEntityTrackerImpl<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
           *this,FEntityAllocation *param_1)

{
  longlong lVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  FMovieSceneEntityID *pFVar6;
  undefined1 *puVar7;
  ForElementType<unsigned_int> FVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  undefined1 *puVar12;
  ForElementType<unsigned_int> this_00;
  int iVar13;
  ushort *puVar14;
  undefined1 *puVar15;
  longlong lVar16;
  FMovieSceneEntityID local_res8 [4];
  
  if ((this->bIsInitialized == false) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsInitialized",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneOverlappingEntityTracker.h"
                          ,0x19c,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar3 = param_1->Size;
  pFVar6 = param_1->EntityIDs;
  if ((ulonglong)uVar3 == 0) {
    return;
  }
  lVar16 = 0;
LAB_146873492:
  uVar4 = pFVar6[lVar16].Value;
  if (*(int *)&(this->EntityToOutput).field_0x8 != *(int *)&(this->EntityToOutput).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EntityToOutput).field_0x40;
    puVar15 = &(this->EntityToOutput).field_0x38;
    puVar12 = puVar15;
    if (puVar7 != (undefined1 *)0x0) {
      puVar12 = puVar7;
    }
    iVar13 = *(int *)(puVar12 +
                     ((ulonglong)(*(int *)&(this->EntityToOutput).field_0x48 - 1) & (ulonglong)uVar4
                     ) * 4);
    if (iVar13 != -1) {
      do {
        lVar1 = *(longlong *)&this->EntityToOutput + (longlong)iVar13 * 0xc;
        if (*(ushort *)(*(longlong *)&this->EntityToOutput + (longlong)iVar13 * 0xc) == uVar4) {
          puVar14 = (ushort *)(lVar1 + 2);
          if (lVar1 == 0) {
            puVar14 = (ushort *)0x0;
          }
          if ((puVar14 != (ushort *)0x0) && (uVar5 = *puVar14, uVar5 != 0xffff)) {
            local_res8[0].Value = uVar4;
            TMultiMap<unsigned_short,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,UE::MovieScene::FMovieSceneEntityID,1>_>
            ::Remove(&this->OutputToEntity,uVar5,local_res8);
            if (*(int *)&(this->EntityToOutput).field_0x8 ==
                *(int *)&(this->EntityToOutput).field_0x34) goto LAB_146873584;
            puVar7 = *(undefined1 **)&(this->EntityToOutput).field_0x40;
            if (puVar7 != (undefined1 *)0x0) {
              puVar15 = puVar7;
            }
            iVar13 = *(int *)(puVar15 +
                             ((ulonglong)(*(int *)&(this->EntityToOutput).field_0x48 - 1) &
                             (ulonglong)uVar4) * 4);
            if (iVar13 == -1) goto LAB_146873584;
            goto LAB_146873560;
          }
          break;
        }
        iVar13 = *(int *)(lVar1 + 4);
      } while (iVar13 != -1);
    }
  }
  goto LAB_14687360d;
  while (iVar13 = *(int *)(*(longlong *)&this->EntityToOutput + 4 + (longlong)iVar13 * 0xc),
        iVar13 != -1) {
LAB_146873560:
    if (*(ushort *)(*(longlong *)&this->EntityToOutput + (longlong)iVar13 * 0xc) == uVar4) {
      TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_short,0>,FDefaultSetAllocator>
                       *)this,iVar13);
      break;
    }
  }
LAB_146873584:
  this_00 = (ForElementType<unsigned_int>)&this->InvalidatedOutputs;
  iVar13 = ((uint)uVar5 - (this->InvalidatedOutputs).NumBits) + 1;
  if (0 < iVar13) {
    iVar11 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                       ((TBitArray<FDefaultBitArrayAllocator> *)this_00,iVar13);
    TBitArray<FDefaultBitArrayAllocator>::SetRange
              ((TBitArray<FDefaultBitArrayAllocator> *)this_00,iVar11,iVar13,false);
  }
  if (((this->InvalidatedOutputs).NumBits <= (int)(uint)uVar5) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar8 = (this->InvalidatedOutputs).AllocatorInstance.SecondaryData;
  if (FVar8 != (ForElementType<unsigned_int>)0x0) {
    this_00 = FVar8;
  }
  puVar2 = (uint *)((longlong)this_00 + (ulonglong)(uVar5 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)uVar5 & 0x1f);
LAB_14687360d:
  lVar16 = lVar16 + 1;
  if ((longlong)(ulonglong)uVar3 <= lVar16) {
    return;
  }
  goto LAB_146873492;
}

