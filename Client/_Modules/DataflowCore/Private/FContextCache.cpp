// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 1

// Serialize @ 14445f8e0

void __thiscall UE::Dataflow::FContextCache::Serialize(FContextCache *this,FArchive *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  uint *puVar4;
  code *pcVar5;
  FName FVar6;
  FContextCache *pFVar7;
  bool bVar8;
  FName *pFVar9;
  FContextCachingFactory *pFVar10;
  FArchive *pFVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  FContextCacheElementBase *pFVar15;
  longlong lVar16;
  undefined1 *puVar17;
  int iVar18;
  int iVar19;
  undefined1 *puVar20;
  uint *puVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  ulong64 local_1d8;
  uint local_1d0;
  uint local_1cc;
  ulong64 local_1c8;
  ulong64 local_1c0;
  FName local_1b8;
  ulong64 local_1b0;
  FGuid local_1a8;
  FName local_198;
  FTimestamp local_190;
  FString local_188;
  FContextCacheElementBase *local_178;
  FContextCache *local_170;
  int iStack_168;
  uint uStack_164;
  undefined1 *local_160;
  undefined4 uStack_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int local_140;
  undefined1 local_13c [20];
  FString local_128;
  FContextCache *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  FString local_e8;
  FGuid local_d8;
  uint *local_c8;
  FContextCacheElementBase **local_c0;
  FContextCacheData local_b8;
  FName local_88;
  FContextCacheData local_80;
  
  if ((param_1->field_0x28 & 4) == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      plVar3 = *(longlong **)&param_1->field_0x8;
      local_1c0 = 0;
      if ((ulong64 *)plVar3[1] < (ulong64 *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1c0,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_1c0);
        }
      }
      else {
        local_1c0 = *(ulong64 *)*plVar3;
        *plVar3 = *plVar3 + 8;
      }
      for (iVar25 = (int)local_1c0; 0 < iVar25; iVar25 = iVar25 + -1) {
        local_1b8.ComparisonIndex.Value = 0;
        local_1b8.Number = 0;
        local_1a8.A = 0;
        local_1a8.B = 0;
        local_1a8.C = 0;
        local_1a8.D = 0;
        local_190.Value = FTimestamp::Invalid;
        pFVar11 = (FArchive *)(**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_1b8);
        puVar21 = (uint *)**(undefined8 **)&pFVar11->field_0x8;
        if ((uint *)(*(undefined8 **)&pFVar11->field_0x8)[1] < puVar21 + 1) {
          if ((pFVar11->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar11 + 0x188))(pFVar11,&local_1cc,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar11,&local_1cc);
          }
        }
        else {
          local_1cc = *puVar21;
          **(longlong **)&pFVar11->field_0x8 = **(longlong **)&pFVar11->field_0x8 + 4;
        }
        pFVar11 = ::operator<<(pFVar11,&local_1a8);
        puVar21 = (uint *)**(undefined8 **)&pFVar11->field_0x8;
        if ((uint *)(*(undefined8 **)&pFVar11->field_0x8)[1] < puVar21 + 1) {
          if ((pFVar11->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar11 + 0x188))(pFVar11,local_res20,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar11,local_res20);
          }
        }
        else {
          local_res20[0] = *puVar21;
          **(longlong **)&pFVar11->field_0x8 = **(longlong **)&pFVar11->field_0x8 + 4;
        }
        ::operator<<(pFVar11,&local_190);
        plVar3 = *(longlong **)&param_1->field_0x8;
        local_1b0 = 0;
        if ((ulong64 *)plVar3[1] < (ulong64 *)*plVar3 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1b0,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_1b0);
          }
        }
        else {
          local_1b0 = *(ulong64 *)*plVar3;
          *plVar3 = *plVar3 + 8;
        }
        if (FContextCachingFactory::Instance == (FContextCachingFactory *)0x0) {
          FContextCachingFactory::Instance = ::operator_new(0x50);
          if (FContextCachingFactory::Instance == (FContextCachingFactory *)0x0) {
            FContextCachingFactory::Instance = (FContextCachingFactory *)0x0;
          }
          else {
            *(undefined8 *)&FContextCachingFactory::Instance->CachingMap = 0;
            *(undefined8 *)&(FContextCachingFactory::Instance->CachingMap).field_0x8 = 0;
            *(undefined8 *)&(FContextCachingFactory::Instance->CachingMap).field_0x20 = 0;
            *(undefined4 *)&(FContextCachingFactory::Instance->CachingMap).field_0x28 = 0;
            *(undefined4 *)&(FContextCachingFactory::Instance->CachingMap).field_0x2c = 0x80;
            *(undefined4 *)&(FContextCachingFactory::Instance->CachingMap).field_0x30 = 0xffffffff;
            *(undefined4 *)&(FContextCachingFactory::Instance->CachingMap).field_0x34 = 0;
            *(undefined8 *)&(FContextCachingFactory::Instance->CachingMap).field_0x40 = 0;
            *(undefined4 *)&(FContextCachingFactory::Instance->CachingMap).field_0x48 = 0;
          }
        }
        FVar6 = local_1b8;
        pFVar10 = FContextCachingFactory::Instance;
        uVar23 = ::GetTypeHash(local_1b8.ComparisonIndex.Value);
        if (*(int *)&(pFVar10->CachingMap).field_0x8 != *(int *)&(pFVar10->CachingMap).field_0x34) {
          puVar20 = *(undefined1 **)&(pFVar10->CachingMap).field_0x40;
          puVar17 = &(pFVar10->CachingMap).field_0x38;
          if (puVar20 != (undefined1 *)0x0) {
            puVar17 = puVar20;
          }
          iVar18 = *(int *)(puVar17 +
                           (ulonglong)
                           (*(int *)&(pFVar10->CachingMap).field_0x48 - 1U & FVar6.Number + uVar23)
                           * 4);
          if (iVar18 != -1) {
            do {
              if (*(FName *)(*(longlong *)&pFVar10->CachingMap + (longlong)iVar18 * 0x50) == FVar6)
              {
                if (iVar18 != -1) {
                  pFVar10 = FContextCachingFactory::GetInstance();
                  local_b8.Type = local_1b8;
                  local_b8.NodeGuid.A = local_1a8.A;
                  local_b8.NodeGuid.B = local_1a8.B;
                  local_b8.NodeGuid.C = local_1a8.C;
                  local_b8.NodeGuid.D = local_1a8.D;
                  local_b8.NodeHash = local_res20[0];
                  local_b8.Data = (FContextCacheElementBase *)0x0;
                  local_b8.Timestamp.Value = local_190.Value;
                  pFVar15 = FContextCachingFactory::Serialize(pFVar10,param_1,&local_b8);
                  if ((pFVar15 == (FContextCacheElementBase *)0x0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("NewElement",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNodeParameters.cpp"
                                         ,0x2f1,L""), bVar8)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  (pFVar15->NodeGuid).A = local_1a8.A;
                  (pFVar15->NodeGuid).B = local_1a8.B;
                  (pFVar15->NodeGuid).C = local_1a8.C;
                  (pFVar15->NodeGuid).D = local_1a8.D;
                  pFVar15->NodeHash = local_res20[0];
                  (pFVar15->Timestamp).Value = local_190.Value;
                  local_c8 = &local_1cc;
                  local_c0 = &local_178;
                  local_178 = pFVar15;
                  TSet<TTuple<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>,FDefaultSetAllocator>
                  ::
                  Emplace<TPairInitializer<unsigned_int_const_&,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_&&>_>
                            ((TSet<TTuple<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>,FDefaultSetAllocator>
                              *)this,(TPairInitializer<unsigned_int_const_&,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_&&>
                                      *)local_13c,(bool *)&local_c8);
                  if (local_178 != (FContextCacheElementBase *)0x0) {
                    (**(code **)local_178->_padding_)(local_178,1);
                  }
                  goto LAB_144460165;
                }
                break;
              }
              iVar18 = *(int *)(*(longlong *)&pFVar10->CachingMap + 0x40 + (longlong)iVar18 * 0x50);
            } while (iVar18 != -1);
          }
        }
        lVar16 = *(longlong *)param_1;
        lVar12 = (**(code **)(lVar16 + 0x28))(param_1);
        (**(code **)(lVar16 + 0x1b8))(param_1,lVar12 + local_1b0);
LAB_144460165:
      }
    }
  }
  else {
    local_13c._12_8_ = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    plVar3 = *(longlong **)&param_1->field_0x8;
    local_1d8 = 0;
    if ((ulong64 *)plVar3[1] < (ulong64 *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1d8,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_1d8);
      }
    }
    else {
      local_1d8 = *(ulong64 *)*plVar3;
      *plVar3 = *plVar3 + 8;
    }
    iVar25 = *(int *)&this->field_0x28;
    pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10;
    iStack_168 = 0;
    uStack_164 = 1;
    iVar18 = 0;
    iStack_154 = iVar18;
    local_150 = iVar18;
    if (iVar25 != 0) {
      puVar21 = *(uint **)&this->field_0x20;
      if (*(uint **)&this->field_0x20 == (uint *)0x0) {
        puVar21 = (uint *)pTVar22;
      }
      uVar23 = *puVar21;
      local_150 = 0;
      iStack_168 = 0;
      while (uVar23 == 0) {
        lVar16 = (longlong)iStack_168;
        local_150 = local_150 + 0x20;
        iStack_168 = iStack_168 + 1;
        iStack_154 = iVar25;
        if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_168)
        goto LAB_14445f9ff;
        uVar23 = puVar21[lVar16 + 1];
      }
      uStack_164 = -uVar23 & uVar23;
      uVar1 = (ulonglong)uStack_164 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_140 = (int)lVar16;
      iStack_154 = local_150 + -1 + local_140;
      if (iVar25 < iStack_154) {
        iStack_154 = iVar25;
      }
    }
LAB_14445f9ff:
    iStack_148 = *(int *)&this->field_0x8 - *(int *)&this->field_0x34;
    uVar23 = *(uint *)&this->field_0x28;
    uStack_158 = 0xffffffff;
    TStack_110._padding_ = CONCAT44(uStack_164,iStack_168);
    uVar24 = uVar23 & 0xffffffe0;
    TStack_110.CurrentBitIndex = iStack_154;
    TStack_110.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar23 >> 5;
    TStack_110._28_4_ = iStack_154;
    TStack_110.BaseBitIndex = local_150;
    uStack_f0 = CONCAT44(uStack_144,iStack_148);
    local_1d0 = uVar23;
    local_170 = this;
    local_160 = (undefined1 *)pTVar22;
    iStack_14c = iStack_154;
    local_13c._4_8_ = pTVar22;
    local_118 = this;
    TStack_110.Array = pTVar22;
    if ((((int)uVar23 < 0) || (iVar25 < (int)uVar23)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(uint *)&this->field_0x28;
    if (uVar23 != uVar2) {
      puVar20 = *(undefined1 **)&this->field_0x20;
      if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
        puVar20 = (undefined1 *)pTVar22;
      }
      uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
      while (uVar23 == 0) {
        lVar16 = (longlong)iVar19;
        uVar24 = uVar24 + 0x20;
        iVar19 = iVar19 + 1;
        uVar23 = uVar2;
        local_1d0 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_14445fb20;
        uVar23 = *(uint *)(puVar20 + lVar16 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar23 = (int)lVar16 + -1 + uVar24;
      local_1d0 = uVar23;
      if ((int)uVar2 < (int)uVar23) {
        uVar23 = uVar2;
        local_1d0 = uVar2;
      }
    }
LAB_14445fb20:
    while( true ) {
      pFVar7 = local_118;
      if (*(int *)&local_118->field_0x8 - *(int *)&local_118->field_0x34 != (int)uStack_f0) {
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_110.CurrentBitIndex == uVar23) && (TStack_110.Array == pTVar22)) &&
         (pFVar7 == this)) break;
      lVar16 = *(longlong *)pFVar7;
      puVar21 = (uint *)(lVar16 + (longlong)TStack_110.CurrentBitIndex * 0x18);
      lVar16 = *(longlong *)(lVar16 + 8 + (longlong)TStack_110.CurrentBitIndex * 0x18);
      if (((lVar16 != 0) && (plVar3 = *(longlong **)(lVar16 + 0x20), plVar3 != (longlong *)0x0)) &&
         (*(int *)(lVar16 + 8) == 0)) {
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_188.Data.ArrayNum = 0;
        local_188.Data.ArrayMax = 0;
        (**(code **)(*plVar3 + 0x68))(plVar3,&local_e8,&local_188,0);
        ::FString::RemoveSpacesInline(&local_188);
        ::FString::ConcatFF(&local_128,&local_e8,&local_188);
        iVar25 = local_128.Data.ArrayNum + -1;
        if (local_128.Data.ArrayNum == 0) {
          iVar25 = iVar18;
        }
        pFVar9 = ::FName::FName(&local_88,iVar25,(wchar_t *)local_128.Data.AllocatorInstance.Data,
                                FNAME_Add);
        local_198 = *pFVar9;
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        lVar16 = *(longlong *)(puVar21 + 2);
        local_d8._0_8_ = *(undefined8 *)(lVar16 + 0xc);
        local_d8._8_8_ = *(undefined8 *)(lVar16 + 0x14);
        local_res18[0] = *(uint *)(lVar16 + 0x28);
        pFVar10 = FContextCachingFactory::GetInstance();
        bVar8 = FContextCachingFactory::Contains(pFVar10,local_198);
        if (bVar8) {
          pFVar11 = (FArchive *)(**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_198);
          puVar4 = (uint *)**(undefined8 **)&pFVar11->field_0x8;
          if ((uint *)(*(undefined8 **)&pFVar11->field_0x8)[1] < puVar4 + 1) {
            if ((pFVar11->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)pFVar11 + 0x188))(pFVar11,puVar21,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(pFVar11,puVar21);
            }
          }
          else {
            *puVar21 = *puVar4;
            **(longlong **)&pFVar11->field_0x8 = **(longlong **)&pFVar11->field_0x8 + 4;
          }
          pFVar11 = ::operator<<(pFVar11,&local_d8);
          puVar4 = (uint *)**(undefined8 **)&pFVar11->field_0x8;
          if ((uint *)(*(undefined8 **)&pFVar11->field_0x8)[1] < puVar4 + 1) {
            if ((pFVar11->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)pFVar11 + 0x188))(pFVar11,local_res18,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(pFVar11,local_res18);
            }
          }
          else {
            local_res18[0] = *puVar4;
            **(longlong **)&pFVar11->field_0x8 = **(longlong **)&pFVar11->field_0x8 + 4;
          }
          ::operator<<(pFVar11,(FTimestamp *)(*(longlong *)(puVar21 + 2) + 0x30));
          lVar16 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
          plVar3 = *(longlong **)&param_1->field_0x8;
          local_1c8 = 0;
          if ((ulong64 *)plVar3[1] < (ulong64 *)*plVar3 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1c8,8);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_1c8);
            }
          }
          else {
            local_1c8 = *(ulong64 *)*plVar3;
            *plVar3 = *plVar3 + 8;
          }
          lVar12 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
          pFVar10 = FContextCachingFactory::GetInstance();
          local_80.Data = *(FContextCacheElementBase **)(puVar21 + 2);
          local_80.Timestamp.Value = ((local_80.Data)->Timestamp).Value;
          local_80.Type = local_198;
          local_80.NodeHash = local_res18[0];
          local_80.NodeGuid.A = local_d8.A;
          local_80.NodeGuid.B = local_d8.B;
          local_80.NodeGuid.C = local_d8.C;
          local_80.NodeGuid.D = local_d8.D;
          FContextCachingFactory::Serialize(pFVar10,param_1,&local_80);
          if (lVar16 != -1) {
            lVar13 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
            local_1c8 = lVar13 - lVar12;
            (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,lVar16);
            plVar3 = *(longlong **)&param_1->field_0x8;
            if ((ulong64 *)plVar3[1] < (ulong64 *)*plVar3 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1c8,8);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,&local_1c8);
              }
            }
            else {
              local_1c8 = *(ulong64 *)*plVar3;
              *plVar3 = *plVar3 + 8;
            }
            (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,lVar13);
          }
          local_1d8 = local_1d8 + 1;
          pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)local_13c._4_8_;
          uVar23 = local_1d0;
        }
      }
      TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
    }
    if (local_1d8 != 0) {
      uVar14 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,local_13c._12_8_);
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((ulong64 *)plVar3[1] < (ulong64 *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1d8,8);
          (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar14);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_1d8);
          (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar14);
        }
      }
      else {
        local_1d8 = *(ulong64 *)*plVar3;
        *plVar3 = *plVar3 + 8;
        (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar14);
      }
    }
  }
  return;
}

