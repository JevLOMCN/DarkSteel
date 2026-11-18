// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsET
// Functions: 1

// UpdateUserAgent @ 1431a6d80

void __thiscall FAnalyticsUserAgentCache::UpdateUserAgent(FAnalyticsUserAgentCache *this)

{
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 *puVar2;
  int iVar3;
  TConsoleVariableData<bool> *pTVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FString *pFVar8;
  ulonglong uVar9;
  byte bVar10;
  int iVar11;
  ulonglong uVar12;
  ForElementType<FSetElementId> FVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  uint uVar18;
  ulong64 uVar19;
  TSparseSetElement<FString> *pTVar20;
  ulonglong uVar21;
  uint *puVar22;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar23;
  FScriptContainerElement *pFVar24;
  uint local_res10 [2];
  uint local_res18;
  int *local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_138;
  FSparseArrayAllocationInfo local_128;
  undefined4 local_118;
  uint uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d8;
  FDefaultUserAgentBuilder local_b8;
  
  uVar12 = 0;
  local_res20 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
  ;
  if ((`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
       _thread_safe_static_guard_0__ <= *local_res20) ||
     (_Init_thread_header(&`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     pTVar4 = AnalyticsProviderETCvars::CVarDefaultUserAgentCommentsEnabled.Ref,
     `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
     _thread_safe_static_guard_0__ != -1)) goto LAB_1431a6ddd;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  bVar5 = IsInParallelGameThread();
  if (bVar5) {
LAB_1431a6f45:
    uVar15 = uVar12;
  }
  else {
    bVar5 = IsInGameThread();
    uVar15 = 1;
    if (bVar5) goto LAB_1431a6f45;
  }
  if (pTVar4->ShadowedValue[uVar15] != false) {
    FConfigCacheIni::GetArray
              (GConfig,L"Analytics",L"AllowedUserAgentProjectComments",&local_138,&GEngineIni);
  }
  iVar11 = local_138.ArrayNum;
  uVar19 = (ulong64)local_138.ArrayNum;
  `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
  AllowedProjectComments.Elements._0_8_ = 0;
  `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
  AllowedProjectComments.Elements._8_8_ = 0;
  `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
  AllowedProjectComments.Elements._32_8_ = 0;
  `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
  AllowedProjectComments.Elements._40_4_ = 0;
  `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
  AllowedProjectComments.Elements._44_4_ = 0x80;
  `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
  AllowedProjectComments.Elements._48_4_ = 0xffffffff;
  `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
  AllowedProjectComments.Elements._52_4_ = 0;
  `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
  AllowedProjectComments.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
  AllowedProjectComments.HashSize = 0;
  uVar6 = 1;
  if (local_138.ArrayNum != 0) {
    if (local_138.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum(uVar19);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::
                  __l2::AllowedProjectComments,local_138.ArrayNum);
    if (3 < (uint)iVar11) {
      uVar15 = (ulonglong)(((uint)iVar11 >> 1) + 7) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar6 = 1 << ((byte)lVar16 & 0x1f);
    }
    if ((`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
         AllowedProjectComments.HashSize == 0) ||
       (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
        AllowedProjectComments.HashSize < (int)uVar6)) {
      `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
      AllowedProjectComments.HashSize = uVar6;
      if (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
          AllowedProjectComments.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)
                   &`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                    ::__l2::AllowedProjectComments.Hash.SecondaryData,0,0,4);
      }
      if (uVar6 != 0) {
        uVar14 = uVar6;
        if (uVar6 < 2) {
          if (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2
              ::AllowedProjectComments.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            uVar14 = 0;
            goto LAB_1431a705a;
          }
        }
        else {
LAB_1431a705a:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)
                     &`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                      ::__l2::AllowedProjectComments.Hash.SecondaryData,0,uVar14,4);
        }
        if (0 < (int)uVar6) {
          uVar21 = (ulonglong)uVar6;
          uVar15 = uVar12;
          do {
            FVar13 = (ForElementType<FSetElementId>)0x155065648;
            if (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::
                __l2::AllowedProjectComments.Hash.SecondaryData !=
                (ForElementType<FSetElementId>)0x0) {
              FVar13 = `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                       ::__l2::AllowedProjectComments.Hash.SecondaryData;
            }
            uVar9 = (longlong)(int)uVar6 - 1U & uVar15;
            uVar15 = uVar15 + 1;
            *(undefined4 *)((longlong)FVar13 + uVar9 * 4) = 0xffffffff;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
      }
      if (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
          AllowedProjectComments.HashSize != 0) {
        local_128.Index = 0;
        local_128._4_4_ = 1;
        local_128.Pointer =
             &`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2
              ::AllowedProjectComments.Elements.field_0x10;
        uStack_114 = 0;
        uStack_110 = 0;
        if (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
            AllowedProjectComments.Elements._40_4_ != 0) {
          puVar22 = (uint *)&`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                             ::__l2::AllowedProjectComments.Elements.field_0x10;
          if (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2
              ::AllowedProjectComments.Elements._32_8_ != 0) {
            puVar22 = (uint *)`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                              ::__l2::AllowedProjectComments.Elements._32_8_;
          }
          uVar6 = *puVar22;
          uVar15 = uVar12;
          while (uVar6 == 0) {
            uStack_110 = (int)uVar15 + 0x20;
            uVar15 = (ulonglong)uStack_110;
            iVar11 = (int)uVar12;
            local_128.Index = iVar11 + 1;
            uVar12 = (ulonglong)(uint)local_128.Index;
            if ((int)(`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                      ::__l2::AllowedProjectComments.Elements._40_4_ + -1 +
                     (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                      ::__l2::AllowedProjectComments.Elements._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 <
                local_128.Index) goto LAB_1431a715e;
            uVar6 = puVar22[(longlong)iVar11 + 1];
          }
          local_128._4_4_ = ~(uVar6 - 1) & uVar6;
          uVar12 = (ulonglong)(uint)local_128._4_4_ * 2 + 1;
          lVar16 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uStack_114 = (uStack_110 - 1) + (int)lVar16;
          uVar12 = (ulonglong)uStack_114;
          if ((int)`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::
                   __l2::AllowedProjectComments.Elements._40_4_ < (int)uStack_114) {
LAB_1431a715e:
            uVar12 = (ulonglong)
                     (uint)`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                           ::__l2::AllowedProjectComments.Elements._40_4_;
            uStack_114 = `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                         ::__l2::AllowedProjectComments.Elements._40_4_;
          }
        }
        local_118 = 0xffffffff;
        local_108 = &`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                     ::__l2::AllowedProjectComments;
        TStack_100._padding_ = CONCAT44(local_128._4_4_,local_128.Index);
        TStack_100._28_4_ = uStack_10c;
        TStack_100.BaseBitIndex = uStack_110;
        TStack_100.Array._0_4_ = 0x55065620;
        TStack_100.Array._4_4_ = 1;
        TStack_100.UnvisitedBitMask = 0xffffffff;
        TStack_100.CurrentBitIndex = uStack_114;
        if ((int)uVar12 <
            (int)`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::
                 __l2::AllowedProjectComments.Elements._40_4_) {
          do {
            iVar7 = (int)uVar12;
            puVar2 = (undefined8 *)(*(longlong *)&local_108->Elements + (longlong)iVar7 * 0x18);
            iVar11 = *(int *)(*(longlong *)&local_108->Elements + 8 + (longlong)iVar7 * 0x18);
            if (iVar11 == 0) {
              pwVar17 = L"";
              iVar11 = 0;
            }
            else {
              pwVar17 = (wchar_t *)*puVar2;
              iVar11 = iVar11 + -1;
            }
            uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar17);
            uVar6 = `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                    ::__l2::AllowedProjectComments.HashSize - 1U & uVar6;
            *(uint *)((longlong)puVar2 + 0x14) = uVar6;
            FVar13 = (ForElementType<FSetElementId>)0x155065648;
            if (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::
                __l2::AllowedProjectComments.Hash.SecondaryData !=
                (ForElementType<FSetElementId>)0x0) {
              FVar13 = `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                       ::__l2::AllowedProjectComments.Hash.SecondaryData;
            }
            uVar12 = (longlong)
                     `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                     ::__l2::AllowedProjectComments.HashSize - 1U & (longlong)(int)uVar6;
            *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)FVar13 + uVar12 * 4);
            *(int *)((longlong)FVar13 + uVar12 * 4) = iVar7;
            TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
            uVar12 = (ulonglong)(uint)TStack_100.CurrentBitIndex;
          } while (TStack_100.CurrentBitIndex <
                   *(int *)(CONCAT44(TStack_100.Array._4_4_,TStack_100.Array._0_4_) + 0x18));
        }
      }
    }
    uVar19 = local_138._8_8_ & 0xffffffff;
  }
  local_res18 = (uint)uVar19;
  uVar12 = (ulonglong)(int)local_res18;
  pFVar24 = local_138.AllocatorInstance.Data + 0xc;
  pTVar23 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
            (local_138.AllocatorInstance.Data + uVar12 * 0x10);
  while( true ) {
    iVar11 = (int)uVar19;
    if ((int)uVar19 != (int)uVar12) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
      iVar11 = local_138.ArrayNum;
    }
    iVar7 = `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
            AllowedProjectComments.Elements._48_4_;
    pTVar1 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pFVar24 + -0xc);
    if (pTVar1 == pTVar23) break;
    if (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
        AllowedProjectComments.Elements._52_4_ == 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,1,(ForAnyElementType *)
                                  &`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                                   ::__l2::AllowedProjectComments,
                         (int *)&`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                                 ::__l2::AllowedProjectComments.Elements.field_0x8,
                         (int *)&`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                                 ::__l2::AllowedProjectComments.Elements.field_0xc);
      iVar11 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                         ((TBitArray<FDefaultBitArrayAllocator> *)
                          &`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                           ::__l2::AllowedProjectComments.Elements.field_0x10,1);
      lVar16 = 0x155065620;
      if (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
          AllowedProjectComments.Elements._32_8_ != 0) {
        lVar16 = `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::
                 __l2::AllowedProjectComments.Elements._32_8_;
      }
      bVar10 = (byte)iVar11 & 0x1f;
      if (iVar11 < 0) {
        iVar11 = iVar11 + 0x1f;
        bVar10 = bVar10 - 0x20;
      }
      puVar22 = (uint *)(lVar16 + (longlong)(iVar11 >> 5) * 4);
      *puVar22 = *puVar22 & ~(1 << (bVar10 & 0x1f));
    }
    else {
      `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
      AllowedProjectComments.Elements._52_4_ =
           `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
           AllowedProjectComments.Elements._52_4_ + -1;
      `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
      AllowedProjectComments.Elements._48_4_ =
           *(int *)(`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                    ::__l2::AllowedProjectComments.Elements._0_8_ + 4 +
                   (longlong)
                   (int)`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                        ::__l2::AllowedProjectComments.Elements._48_4_ * 0x18);
      if (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
          AllowedProjectComments.Elements._52_4_ != 0) {
        *(undefined4 *)
         (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
          AllowedProjectComments.Elements._0_8_ +
         (longlong)
         (int)`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2
              ::AllowedProjectComments.Elements._48_4_ * 0x18) = 0xffffffff;
      }
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                        ::__l2::AllowedProjectComments,&local_128,iVar7);
    pTVar20 = (TSparseSetElement<FString> *)0x0;
    if (local_128.Pointer != (TSparseSetElement<FString> *)0x0) {
      *(undefined8 *)local_128.Pointer = 0;
      *(FScriptContainerElement **)local_128.Pointer = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)((longlong)local_128.Pointer + 8) = *(int *)(pFVar24 + -4);
      *(int *)((longlong)local_128.Pointer + 0xc) = *(int *)pFVar24;
      *(undefined8 *)(pFVar24 + -4) = 0;
      *(undefined4 *)((longlong)local_128.Pointer + 0x10) = 0xffffffff;
      pTVar20 = local_128.Pointer;
    }
    local_res10[0] = local_128.Index;
    iVar11 = *(int *)&pTVar20->field_0x8 + -1;
    if (*(int *)&pTVar20->field_0x8 == 0) {
      pwVar17 = L"";
      iVar11 = 0;
    }
    else {
      pwVar17 = *(wchar_t **)pTVar20;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar17);
    bVar5 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::TryReplaceExisting
                      (&`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                        ::__l2::AllowedProjectComments,uVar6,pTVar20,(int *)local_res10,(bool *)0x0)
    ;
    if (bVar5) {
LAB_1431a7680:
      uVar19 = local_138._8_8_ & 0xffffffff;
      pFVar24 = pFVar24 + 0x10;
    }
    else {
      uVar18 = 1;
      uVar14 = `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2
               ::AllowedProjectComments.Elements._8_4_ -
               `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2
               ::AllowedProjectComments.Elements._52_4_;
      if (3 < uVar14) {
        uVar15 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar18 = 1 << ((byte)lVar16 & 0x1f);
      }
      if (((int)uVar14 < 1) ||
         ((int)uVar18 <=
          `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
          AllowedProjectComments.HashSize)) {
        uVar6 = `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::
                __l2::AllowedProjectComments.HashSize - 1U & uVar6;
        *(uint *)&pTVar20->field_0x14 = uVar6;
        FVar13 = (ForElementType<FSetElementId>)0x155065648;
        if (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
            AllowedProjectComments.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar13 = `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::
                   __l2::AllowedProjectComments.Hash.SecondaryData;
        }
        uVar15 = (longlong)
                 `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::
                 __l2::AllowedProjectComments.HashSize - 1U & (longlong)(int)uVar6;
        *(undefined4 *)&pTVar20->field_0x10 = *(undefined4 *)((longlong)FVar13 + uVar15 * 4);
        *(uint *)((longlong)FVar13 + uVar15 * 4) = local_res10[0];
        goto LAB_1431a7680;
      }
      `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
      AllowedProjectComments.HashSize = uVar18;
      if (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
          AllowedProjectComments.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)
                   &`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                    ::__l2::AllowedProjectComments.Hash.SecondaryData,0,0,4);
      }
      if (uVar18 != 0) {
        uVar6 = uVar18;
        if (uVar18 < 2) {
          if (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2
              ::AllowedProjectComments.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            uVar6 = 0;
            goto LAB_1431a744d;
          }
        }
        else {
LAB_1431a744d:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)
                     &`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                      ::__l2::AllowedProjectComments.Hash.SecondaryData,0,uVar6,4);
        }
        if (0 < (int)uVar18) {
          uVar21 = (ulonglong)uVar18;
          uVar15 = 0;
          do {
            FVar13 = (ForElementType<FSetElementId>)0x155065648;
            if (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::
                __l2::AllowedProjectComments.Hash.SecondaryData !=
                (ForElementType<FSetElementId>)0x0) {
              FVar13 = `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                       ::__l2::AllowedProjectComments.Hash.SecondaryData;
            }
            uVar9 = uVar15 & (longlong)(int)uVar18 - 1U;
            uVar15 = uVar15 + 1;
            *(undefined4 *)((longlong)FVar13 + uVar9 * 4) = 0xffffffff;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
      }
      if (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
          AllowedProjectComments.HashSize == 0) goto LAB_1431a7680;
      iVar11 = 0;
      local_108 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)&DAT_100000000;
      TStack_100._padding_ = 0x155065620;
      TStack_100.Array._4_4_ = 0;
      TStack_100.UnvisitedBitMask = 0;
      if (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
          AllowedProjectComments.Elements._40_4_ != 0) {
        puVar22 = (uint *)&`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                           ::__l2::AllowedProjectComments.Elements.field_0x10;
        if (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
            AllowedProjectComments.Elements._32_8_ != 0) {
          puVar22 = (uint *)`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                            ::__l2::AllowedProjectComments.Elements._32_8_;
        }
        uVar6 = *puVar22;
        TStack_100.UnvisitedBitMask = 0;
        while (uVar6 == 0) {
          TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask + 0x20;
          lVar16 = (longlong)iVar11;
          iVar11 = iVar11 + 1;
          uVar15 = (ulonglong)local_108 >> 0x20;
          local_108 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                      CONCAT44((int)uVar15,iVar11);
          if ((int)(`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                    ::__l2::AllowedProjectComments.Elements._40_4_ + -1 +
                   (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                    ::__l2::AllowedProjectComments.Elements._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 <
              iVar11) goto LAB_1431a756d;
          uVar6 = puVar22[lVar16 + 1];
        }
        local_108 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                    CONCAT44(-uVar6 & uVar6,SUB84(local_108,0));
        uVar15 = (ulonglong)(-uVar6 & uVar6) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        TStack_100.Array._4_4_ = (TStack_100.UnvisitedBitMask - 1) + (int)lVar16;
        if ((int)`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::
                 __l2::AllowedProjectComments.Elements._40_4_ < TStack_100.Array._4_4_) {
LAB_1431a756d:
          TStack_100.Array._4_4_ =
               `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2
               ::AllowedProjectComments.Elements._40_4_;
        }
      }
      TStack_100.Array._0_4_ = 0xffffffff;
      local_e0 = &`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::
                  __l2::AllowedProjectComments;
      local_d8.CurrentBitIndex = TStack_100.Array._4_4_;
      local_d8.UnvisitedBitMask = 0xffffffff;
      local_d8._28_4_ = TStack_100.CurrentBitIndex;
      local_d8.BaseBitIndex = TStack_100.UnvisitedBitMask;
      local_d8._padding_ = (longlong)local_108;
      local_d8.Array =
           (TBitArray<FDefaultBitArrayAllocator> *)
           &`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
            AllowedProjectComments.Elements.field_0x10;
      iVar11 = TStack_100.Array._4_4_;
      if ((int)`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2
               ::AllowedProjectComments.Elements._40_4_ <= TStack_100.Array._4_4_)
      goto LAB_1431a7680;
      do {
        puVar2 = (undefined8 *)(*(longlong *)&local_e0->Elements + (longlong)iVar11 * 0x18);
        iVar3 = *(int *)(*(longlong *)&local_e0->Elements + 8 + (longlong)iVar11 * 0x18);
        iVar7 = iVar3 + -1;
        if (iVar3 == 0) {
          pwVar17 = L"";
          iVar7 = 0;
        }
        else {
          pwVar17 = (wchar_t *)*puVar2;
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar17);
        uVar6 = `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::
                __l2::AllowedProjectComments.HashSize - 1U & uVar6;
        *(uint *)((longlong)puVar2 + 0x14) = uVar6;
        FVar13 = (ForElementType<FSetElementId>)0x155065648;
        if (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
            AllowedProjectComments.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar13 = `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::
                   __l2::AllowedProjectComments.Hash.SecondaryData;
        }
        uVar12 = (longlong)
                 `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::
                 __l2::AllowedProjectComments.HashSize - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)FVar13 + uVar12 * 4);
        *(int *)((longlong)FVar13 + uVar12 * 4) = iVar11;
        local_d8.UnvisitedBitMask = local_d8.UnvisitedBitMask & ~local_d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d8);
        iVar11 = local_d8.CurrentBitIndex;
      } while (local_d8.CurrentBitIndex < (local_d8.Array)->NumBits);
      uVar12 = (ulonglong)local_res18;
      pFVar24 = pFVar24 + 0x10;
      uVar19 = local_138._8_8_ & 0xffffffff;
    }
  }
  if ((longlong)local_138._8_8_ < 0) {
    DestructItems<FString,int>((FString *)local_138.AllocatorInstance.Data,iVar11);
    iVar11 = local_138.ArrayMax;
    local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
    iVar7 = 0;
    if (iVar11 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_138.AllocatorInstance,0,&local_138.ArrayMax);
      iVar7 = local_138.ArrayNum;
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_138.AllocatorInstance.Data,iVar11);
    local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
    iVar7 = 0;
  }
  DestructItems<FString,int>((FString *)local_138.AllocatorInstance.Data,iVar7);
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  atexit(`FAnalyticsUserAgentCache::UpdateUserAgent'::__l2::
         _dynamic_atexit_destructor_for__AllowedProjectComments__);
  _Init_thread_footer(&`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                       ::__l2::_thread_safe_static_guard_0__);
LAB_1431a6ddd:
  if ((*local_res20 <
       `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
       _thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_1__),
     pTVar4 = AnalyticsProviderETCvars::CVarDefaultUserAgentCommentsEnabled.Ref,
     `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
     _thread_safe_static_guard_1__ == -1)) {
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 0;
    local_138.ArrayMax = 0;
    bVar5 = IsInParallelGameThread();
    if ((bVar5) || (bVar5 = IsInGameThread(), lVar16 = 1, bVar5)) {
      lVar16 = 0;
    }
    if (pTVar4->ShadowedValue[lVar16] != false) {
      FConfigCacheIni::GetArray
                (GConfig,L"Analytics",L"AllowedUserAgentPlatformComments",&local_138,&GEngineIni);
    }
    `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
    AllowedPlatformComments.Elements._0_8_ = 0;
    `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
    AllowedPlatformComments.Elements._8_8_ = 0;
    `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
    AllowedPlatformComments.Elements._32_8_ = 0;
    `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
    AllowedPlatformComments.Elements._40_4_ = 0;
    `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
    AllowedPlatformComments.Elements._44_4_ = 0x80;
    `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
    AllowedPlatformComments.Elements._48_4_ = 0xffffffff;
    `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
    AllowedPlatformComments.Elements._52_4_ = 0;
    `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
    AllowedPlatformComments.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
    AllowedPlatformComments.HashSize = 0;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Append<TSizedDefaultAllocator<32>_>
              (&`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::
                __l2::AllowedPlatformComments,&local_138);
    DestructItems<FString,int>((FString *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
    if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
    atexit(`FAnalyticsUserAgentCache::UpdateUserAgent'::__l2::
           _dynamic_atexit_destructor_for__AllowedPlatformComments__);
    _Init_thread_footer(&`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  FGenericPlatformHttp::GetDefaultUserAgentBuilder(&local_b8);
  ::FString::FString((FString *)&local_128,L"PROJECTNAME");
  FDefaultUserAgentBuilder::SetProjectName(&local_b8,(FString *)&local_128);
  if ((void *)CONCAT44(local_128._4_4_,local_128.Index) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_128._4_4_,local_128.Index));
  }
  pFVar8 = FDefaultUserAgentBuilder::BuildUserAgentString
                     (&local_b8,(FString *)&local_128,
                      &`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                       ::__l2::AllowedProjectComments,
                      &`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                       ::__l2::AllowedPlatformComments);
  ::FString::operator=(&this->CachedUserAgent,pFVar8);
  if ((void *)CONCAT44(local_128._4_4_,local_128.Index) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_128._4_4_,local_128.Index));
  }
  uVar6 = FDefaultUserAgentBuilder::GetAgentVersion(&local_b8);
  this->CachedAgentVersion = uVar6;
  DestructItems<FString,int>
            ((FString *)local_b8.PlatformComments.AllocatorInstance.Data,
             local_b8.PlatformComments.ArrayNum);
  if (local_b8.PlatformComments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.PlatformComments.AllocatorInstance.Data);
  }
  if (local_b8.PlatformVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.PlatformVersion.Data.AllocatorInstance.Data);
  }
  if (local_b8.PlatformName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.PlatformName.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_b8.ProjectComments.AllocatorInstance.Data,
             local_b8.ProjectComments.ArrayNum);
  if (local_b8.ProjectComments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ProjectComments.AllocatorInstance.Data);
  }
  if (local_b8.ProjectVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ProjectVersion.Data.AllocatorInstance.Data);
  }
  if (local_b8.ProjectName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ProjectName.Data.AllocatorInstance.Data);
  }
  return;
}

