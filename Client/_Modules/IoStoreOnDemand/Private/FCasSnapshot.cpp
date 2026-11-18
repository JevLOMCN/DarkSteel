// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 5

// operator() @ 1445ab470

void __thiscall
`UE::IoStore::FCasSnapshot::FromJournal'::__l2::<lambda_1>::operator()(void *this,FEntry *param_1)

{
  EType EVar1;
  TSet<UE::IoStore::FCasBlockId,DefaultKeyFuncs<UE::IoStore::FCasBlockId,0>,FDefaultSetAllocator>
  *this_00;
  FCasLocation *pFVar2;
  TPairInitializer<UE::IoStore::FCasBlockId_const_&,__int64_const_&> local_res10;
  undefined1 *local_18;
  undefined1 *local_10;
  
  EVar1 = (param_1->field0_0x0).ChunkLocation.Type;
  if (EVar1 == ChunkLocation) {
    if (((param_1->field0_0x0).CriticalError.ErrorCode != None) &&
       ((param_1->field0_0x0).ChunkLocation.CasLocation.BlockOffset != 0xffffffff)) {
      pFVar2 = TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
               ::FindOrAddImpl<UE::THash<96>_const_&>
                         (*(TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
                            **)this,*(uint *)((longlong)&param_1->field0_0x0 + 0xc),
                          &(param_1->field0_0x0).ChunkLocation.CasAddr);
      *pFVar2 = (param_1->field0_0x0).ChunkLocation.CasLocation;
      return;
    }
    TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
    ::Remove(*(TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
               **)this,&(param_1->field0_0x0).ChunkLocation.CasAddr);
  }
  else {
    if (EVar1 == BlockCreated) {
      pFVar2 = &(param_1->field0_0x0).ChunkLocation.CasLocation;
      **(uint **)((longlong)this + 0x18) = (pFVar2->BlockId).Id;
      TSet<UE::IoStore::FCasBlockId,DefaultKeyFuncs<UE::IoStore::FCasBlockId,0>,FDefaultSetAllocator>
      ::Emplace<UE::IoStore::FCasBlockId_const_&>
                (*(TSet<UE::IoStore::FCasBlockId,DefaultKeyFuncs<UE::IoStore::FCasBlockId,0>,FDefaultSetAllocator>
                   **)((longlong)this + 0x10),(FCasBlockId *)&local_res10,(bool *)pFVar2);
      return;
    }
    if (EVar1 == BlockDeleted) {
      this_00 = *(TSet<UE::IoStore::FCasBlockId,DefaultKeyFuncs<UE::IoStore::FCasBlockId,0>,FDefaultSetAllocator>
                  **)((longlong)this + 0x10);
      if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
        TSet<UE::IoStore::FCasBlockId,DefaultKeyFuncs<UE::IoStore::FCasBlockId,0>,FDefaultSetAllocator>
        ::RemoveImpl<UE::IoStore::FCasBlockId>
                  (this_00,(param_1->field0_0x0).CriticalError.ErrorCode,
                   &(param_1->field0_0x0).BlockOperation.BlockId);
      }
      if (**(EErrorCode **)((longlong)this + 0x18) == (param_1->field0_0x0).CriticalError.ErrorCode)
      {
        **(EErrorCode **)((longlong)this + 0x18) = None;
        return;
      }
    }
    else if (EVar1 == BlockAccess) {
      local_18 = (undefined1 *)((longlong)&param_1->field0_0x0 + 4);
      local_10 = (undefined1 *)((longlong)&param_1->field0_0x0 + 8);
      TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::IoStore::FCasBlockId_const_&,__int64_const_&>_>
                (*(TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
                   **)((longlong)this + 8),&local_res10,(bool *)&local_18);
      return;
    }
  }
  return;
}

// FromJournal @ 1445cfa20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError> * __cdecl
UE::IoStore::FCasSnapshot::FromJournal
          (TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError> *__return_storage_ptr__
          ,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar4;
  longlong *plVar5;
  bool bVar6;
  TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError> *pTVar7;
  byte bVar8;
  code **ppcVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 *puVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 auStackY_2d8 [32];
  undefined1 local_288 [4];
  undefined4 local_284;
  ForAnyElementType local_280;
  int local_278;
  int iStack_274;
  FScriptContainerElement *local_270;
  undefined8 local_268;
  undefined4 local_260;
  FError local_258;
  uint local_248;
  undefined4 uStack_244;
  longlong lStack_240;
  TValueOrError<void,UE::UnifiedError::FError> local_238;
  undefined1 local_220 [4];
  int local_21c;
  int local_218;
  longlong local_210;
  TValueOrError_ValueProxy<UE::IoStore::FCasSnapshot_&> local_208;
  TArray<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TSizedDefaultAllocator<32>_> local_200;
  longlong *local_1f0;
  uint uStack_1e8;
  uint uStack_1e4;
  TBitArray<FDefaultBitArrayAllocator> *local_1e0;
  undefined4 uStack_1d8;
  uint uStack_1d4;
  uint local_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  longlong *local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b8;
  undefined8 uStack_198;
  undefined4 local_174;
  undefined1 local_168 [32];
  uint *local_148;
  uint local_140;
  uint local_13c;
  undefined4 local_138;
  int local_134;
  void *local_128;
  undefined4 local_120;
  undefined1 local_118 [32];
  void *local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined4 local_e8;
  int local_e4;
  undefined1 local_e0 [8];
  undefined1 *local_d8;
  int local_d0;
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  ForElementType<FSetElementId> local_88;
  int local_80;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_9c = 0x80;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  uVar15 = 0;
  local_a0 = 0;
  local_94 = 0;
  local_88 = (ForElementType<FSetElementId>)0x0;
  local_80 = 0;
  local_118._0_8_ = (FScriptContainerElement *)0x0;
  local_118._8_8_ = 0;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  local_e4 = 0;
  local_d8 = (undefined1 *)0x0;
  local_d0 = 0;
  local_168._0_8_ = (FScriptContainerElement *)0x0;
  local_168._8_8_ = 0;
  local_148 = (uint *)0x0;
  local_140 = 0;
  local_134 = 0;
  local_128 = (void *)0x0;
  local_120 = 0;
  local_284 = 0;
  local_78[0] = (code *)0x0;
  local_98 = 0xffffffff;
  local_ec = 0x80;
  local_e8 = 0xffffffff;
  local_13c = 0x80;
  local_138 = 0xffffffff;
  local_50 = FMemory::Malloc(0x28,8);
  *local_50 = (code *)&Core::Private::Function::
                       TFunction_OwnedObject<`UE::IoStore::FCasSnapshot::FromJournal'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  local_50[1] = (code *)local_c8;
  local_50[2] = (code *)local_118;
  local_50[3] = (code *)local_168;
  local_50[4] = (code *)&local_284;
  if (local_50 + 1 != (code **)0x0) {
    local_78[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::IoStore::FCasSnapshot::FromJournal'::__l2::<lambda_1>,void,UE::IoStore::FCasJournal::FEntry_const_&>
                  ::Call;
  }
  FCasJournal::Replay(&local_238,param_1,
                      (TFunction<void___cdecl(UE::IoStore::FCasJournal::FEntry_const_&)> *)local_78)
  ;
  if (local_78[0] != (code *)0x0) {
    ppcVar9 = local_78 + 2;
    if (local_50 != (code **)0x0) {
      ppcVar9 = local_50;
    }
    (**(code **)(*ppcVar9 + 0x10))();
  }
  if (local_238.Error.bIsSet == false) {
    FDateTime::UtcNow();
    auVar19._8_8_ = 0;
    auVar19._0_8_ = __real_42b600a391000080;
    auVar19 = roundpd(auVar19,auVar19,1);
    local_280.Data = (FScriptContainerElement *)0x0;
    local_278 = 0;
    iStack_274 = 0;
    local_270 = (void *)0x0;
    local_268 = 0;
    local_260 = 0;
    lVar18 = local_210 - (longlong)auVar19._0_8_;
    uVar14 = local_168._8_4_ - local_134;
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    if (0 < (int)uVar14) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar14,&local_280,0,&iStack_274);
    }
    uVar14 = local_140;
    local_1d0 = 0;
    uStack_1e4 = 1;
    uStack_1d4 = local_1d0;
    if (local_140 != 0) {
      puVar16 = (uint *)(local_168 + 0x10);
      if (local_148 != (uint *)0x0) {
        puVar16 = local_148;
      }
      uVar13 = *puVar16;
      local_1d0 = 0;
      uVar15 = 0;
      while (uVar13 == 0) {
        lVar10 = (longlong)(int)uVar15;
        local_1d0 = local_1d0 + 0x20;
        uVar15 = uVar15 + 1;
        uStack_1d4 = local_140;
        if ((int)((local_140 - 1) + ((int)(local_140 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
        goto LAB_1445cff70;
        uVar13 = (puVar16 + 1)[lVar10];
      }
      uStack_1e4 = -uVar13 & uVar13;
      uVar2 = (ulonglong)uStack_1e4 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_21c = (int)lVar10;
      uStack_1d4 = (local_1d0 - 1) + local_21c;
      if ((int)local_140 < (int)uStack_1d4) {
        uStack_1d4 = local_140;
      }
    }
LAB_1445cff70:
    iStack_1c8 = local_168._8_4_ - local_134;
    local_1f0 = (longlong *)local_168;
    local_1e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10);
    uStack_1d8 = 0xffffffff;
    TStack_1b8.CurrentBitIndex = uStack_1d4;
    TStack_1b8.UnvisitedBitMask = 0xffffffff;
    uVar13 = local_140 & 0xffffffe0;
    TStack_1b8._padding_ = CONCAT44(uStack_1e4,uVar15);
    uStack_1cc = local_174;
    iVar12 = (int)local_140 >> 5;
    TStack_1b8._28_4_ = local_174;
    TStack_1b8.BaseBitIndex = local_1d0;
    uStack_198 = CONCAT44(uStack_1c4,iStack_1c8);
    bVar8 = (byte)local_140;
    uStack_1e8 = uVar15;
    local_1c0 = local_1f0;
    TStack_1b8.Array = local_1e0;
    if (((int)local_140 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError> *)(*pcVar3)();
      return pTVar7;
    }
    if (uVar14 != local_140) {
      puVar16 = (uint *)(local_168 + 0x10);
      if (local_148 != (uint *)0x0) {
        puVar16 = local_148;
      }
      uVar15 = -1 << (bVar8 & 0x1f) & puVar16[iVar12];
      while (uVar15 == 0) {
        lVar10 = (longlong)iVar12;
        uVar13 = uVar13 + 0x20;
        iVar12 = iVar12 + 1;
        uVar14 = local_140;
        if ((int)((local_140 - 1) + ((int)(local_140 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_1445d0072;
        uVar15 = (puVar16 + 1)[lVar10];
      }
      uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_218 = (int)lVar10;
      uVar14 = local_218 + -1 + uVar13;
      if ((int)local_140 < (int)uVar14) {
        uVar14 = local_140;
      }
    }
LAB_1445d0072:
    while( true ) {
      plVar5 = local_1c0;
      if ((int)local_1c0[1] - *(int *)((longlong)local_1c0 + 0x34) != (int)uStack_198) {
        local_288[0] = 0;
        `TSparseArray<TSparseSetElement<UE::IoStore::FCasBlockId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_288);
      }
      if (((TStack_1b8.CurrentBitIndex == uVar14) &&
          (TStack_1b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10))) &&
         (plVar5 == (longlong *)local_168)) break;
      local_248 = *(uint *)(*plVar5 + (longlong)TStack_1b8.CurrentBitIndex * 0xc);
      lStack_240 = lVar18;
      if (local_118._8_4_ != local_e4) {
        puVar17 = local_e0;
        if (local_d8 != (undefined1 *)0x0) {
          puVar17 = local_d8;
        }
        iVar12 = *(int *)(puVar17 + (ulonglong)(local_d0 - 1U & local_248) * 4);
        while (iVar12 != -1) {
          pFVar1 = (FScriptContainerElement *)(local_118._0_8_ + (longlong)iVar12 * 0x18);
          if (*(uint *)(local_118._0_8_ + (longlong)iVar12 * 0x18) == local_248) {
            pFVar11 = pFVar1 + 8;
            if (pFVar1 == (FScriptContainerElement *)0x0) {
              pFVar11 = (FScriptContainerElement *)0x0;
            }
            if (pFVar11 != (FScriptContainerElement *)0x0) {
              lStack_240 = *(longlong *)pFVar11;
            }
            break;
          }
          iVar12 = *(int *)(pFVar1 + 0x10);
        }
      }
      if (((local_280.Data <= (FScriptContainerElement *)&local_248) &&
          ((FScriptContainerElement *)&local_248 < local_280.Data + (longlong)iStack_274 * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError> *)(*pcVar3)();
        return pTVar7;
      }
      if (local_278 == iStack_274) {
        local_278 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_280,&iStack_274);
      }
      lVar10 = (longlong)local_278;
      local_278 = local_278 + 1;
      *(ulonglong *)(local_280.Data + lVar10 * 0x10) = CONCAT44(uStack_244,local_248);
      *(longlong *)(local_280.Data + lVar10 * 0x10 + 8) = lStack_240;
      TStack_1b8.UnvisitedBitMask = TStack_1b8.UnvisitedBitMask & ~TStack_1b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b8);
    }
    TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
    ::Array((TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
             *)local_c8,&local_200);
    if (local_270 != (void *)0x0) {
      FMemory::Free(local_270);
    }
    local_270 = local_200.AllocatorInstance.Data;
    local_260 = local_284;
    local_208.Args = (TTuple<UE::IoStore::FCasSnapshot_&>)&local_280;
    TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError>::
    TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError><UE::IoStore::FCasSnapshot_&>
              (__return_storage_ptr__,&local_208);
    if (local_270 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270);
    }
    if (local_280.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data);
    }
    if ((local_238.Error.bIsSet != false) &&
       (local_238.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      (**(code **)((longlong)*local_238.Error.TypedValue.ErrorDetails.Reference + 0x10))();
    }
    local_120 = 0;
    if (local_128 != (void *)0x0) {
      FMemory::Free(local_128);
    }
    TSparseArray<TSparseSetElement<UE::IoStore::FCasBlockId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UE::IoStore::FCasBlockId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<UE::IoStore::FCasBlockId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_168);
    local_d0 = 0;
    if (local_d8 != (undefined1 *)0x0) {
      FMemory::Free(local_d8);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_118);
    local_80 = 0;
    if (local_88 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_c8);
  }
  else {
    local_258.ErrorDetails.Reference = (IErrorDetails *)0x0;
    if (local_238.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      local_258.ErrorDetails.Reference = local_238.Error.TypedValue.ErrorDetails.Reference;
      (**(code **)((longlong)*local_238.Error.TypedValue.ErrorDetails.Reference + 8))
                (local_238.Error.TypedValue.ErrorDetails.Reference,local_220);
      (**(code **)((longlong)*local_238.Error.TypedValue.ErrorDetails.Reference + 0x10))
                (local_238.Error.TypedValue.ErrorDetails.Reference);
    }
    UnifiedError::FError::FError((FError *)__return_storage_ptr__,&local_258);
    TVar4.Reference = local_258.ErrorDetails.Reference;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    local_258.ErrorCode = 0;
    local_258.ModuleId = 0;
    if (local_258.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      local_258.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar4.Reference + 0x10))();
      if (local_258.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_258.ErrorDetails.Reference + 0x10))();
      }
    }
    local_120 = 0;
    if (local_128 != (void *)0x0) {
      FMemory::Free(local_128);
    }
    iVar12 = SUB84(local_168._8_8_,4);
    local_168._8_8_ = local_168._8_8_ & 0xffffffff00000000;
    if (iVar12 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_168,0,(int *)(local_168 + 0xc));
    }
    local_138 = 0xffffffff;
    local_134 = 0;
    local_140 = 0;
    if (0x80 < local_13c) {
      local_13c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10),0);
    }
    if (local_148 != (uint *)0x0) {
      FMemory::Free(local_148);
    }
    if ((FScriptContainerElement *)local_168._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_168._0_8_);
    }
    local_d0 = 0;
    if (local_d8 != (undefined1 *)0x0) {
      FMemory::Free(local_d8);
    }
    iVar12 = SUB84(local_118._8_8_,4);
    local_118._8_8_ = local_118._8_8_ & 0xffffffff00000000;
    if (iVar12 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_118,0,(int *)(local_118 + 0xc));
    }
    local_e8 = 0xffffffff;
    local_e4 = 0;
    local_f0 = 0;
    if (0x80 < local_ec) {
      local_ec = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10),0);
    }
    if (local_f8 != (void *)0x0) {
      FMemory::Free(local_f8);
    }
    if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_118._0_8_);
    }
    local_80 = 0;
    if (local_88 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88);
    }
    iVar12 = SUB84(local_c8._8_8_,4);
    local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
    if (iVar12 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
    }
    local_98 = 0xffffffff;
    local_94 = 0;
    local_a0 = 0;
    if (0x80 < local_9c) {
      local_9c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
    }
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
  }
  return __return_storage_ptr__;
}

// Load @ 1445df7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError> * __cdecl
UE::IoStore::FCasSnapshot::Load
          (TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError> *__return_storage_ptr__
          ,FString *param_1,long64 *param_2)

{
  uint *puVar1;
  DWORD DVar2;
  int iVar3;
  IFileManager *pIVar4;
  FArchive *this;
  long64 lVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  undefined1 auStackY_d8 [32];
  FString local_a8;
  TArray<UE::IoStore::FCasSnapshot::FBlock,TSizedDefaultAllocator<32>_> local_98;
  TArray<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TSizedDefaultAllocator<32>_> local_88;
  uint local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pIVar4 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  this = (FArchive *)(**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,pwVar7,0);
  if (this == (FArchive *)0x0) {
    DVar2 = FWindowsPlatformMisc::GetLastError();
    ::FString::PrintfImpl(&local_a8,L"Failed open snapshot \'%s\'");
    UnifiedError::IoStoreOnDemand::MakeSnapshotError<UE::IoStore::FCasSnapshot>
              (__return_storage_ptr__,LoadSnapshotFailed,FileOpenFailed,&local_a8,DVar2);
    if ((TArray<UE::IoStore::FCasSnapshot::FBlock,TSizedDefaultAllocator<32>_> *)
        local_a8.Data.AllocatorInstance.Data !=
        (TArray<UE::IoStore::FCasSnapshot::FBlock,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_5c = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_54 = 0;
    local_60 = 0;
    (**(code **)(*(longlong *)this + 0x188))(this,&local_70,0x20);
    if ((((this->field_0x29 & 2) == 0) &&
        (iVar3 = memcmp(&local_70,"+SNAPSHOTHEADER+",0x10), iVar3 == 0)) && (local_60 < 2)) {
      local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.ArrayNum = 0;
      local_98.ArrayMax = 0;
      local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.ArrayNum = 0;
      local_88.ArrayMax = 0;
      local_78[0] = 0;
      TArrayPrivateFriend::Serialize<UE::IoStore::FCasSnapshot::FBlock,TSizedDefaultAllocator<32>_>
                (this,&local_98);
      TArrayPrivateFriend::
      Serialize<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TSizedDefaultAllocator<32>_>
                (this,&local_88);
      puVar1 = (uint *)**(undefined8 **)&this->field_0x8;
      if ((uint *)(*(undefined8 **)&this->field_0x8)[1] < puVar1 + 1) {
        if ((this->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)this + 0x188))(this,local_78,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(this,local_78);
        }
      }
      else {
        local_78[0] = *puVar1;
        **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
      }
      local_50 = 0;
      uStack_48 = 0;
      (**(code **)(*(longlong *)this + 0x188))(this,&local_50,0x10);
      if (((this->field_0x29 & 2) == 0) &&
         (iVar3 = memcmp(&local_50,"+SNAPSHOTFOOTER+",0x10), iVar3 == 0)) {
        if (param_2 != (long64 *)0x0) {
          lVar5 = (**(code **)(*(longlong *)this + 0x28))(this);
          *param_2 = lVar5;
        }
        local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)&local_98;
        TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError>::
        TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError><UE::IoStore::FCasSnapshot_&>
                  (__return_storage_ptr__,
                   (TValueOrError_ValueProxy<UE::IoStore::FCasSnapshot_&> *)&local_a8);
      }
      else {
        DVar2 = FWindowsPlatformMisc::GetLastError();
        ::FString::PrintfImpl(&local_a8,L"Failed to validate snapshot footer in \'%s\'");
        UnifiedError::IoStoreOnDemand::MakeSnapshotError<UE::IoStore::FCasSnapshot>
                  (__return_storage_ptr__,LoadSnapshotFailed,ReadError,&local_a8,DVar2);
        if ((TArray<UE::IoStore::FCasSnapshot::FBlock,TSizedDefaultAllocator<32>_> *)
            local_a8.Data.AllocatorInstance.Data !=
            (TArray<UE::IoStore::FCasSnapshot::FBlock,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      FVar6.Data = local_98.AllocatorInstance.Data;
      if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
        FVar6.Data = local_98.AllocatorInstance.Data;
      }
    }
    else {
      DVar2 = FWindowsPlatformMisc::GetLastError();
      ::FString::PrintfImpl(&local_a8,L"Failed to validate snapshot header in \'%s\'");
      UnifiedError::IoStoreOnDemand::MakeSnapshotError<UE::IoStore::FCasSnapshot>
                (__return_storage_ptr__,LoadSnapshotFailed,ReadError,&local_a8,DVar2);
      FVar6.Data = local_a8.Data.AllocatorInstance.Data;
    }
    if ((TArray<UE::IoStore::FCasSnapshot::FBlock,TSizedDefaultAllocator<32>_> *)FVar6.Data !=
        (TArray<UE::IoStore::FCasSnapshot::FBlock,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(FVar6.Data);
    }
    (*(code *)**(undefined8 **)this)(this,1);
  }
  return __return_storage_ptr__;
}

// Save @ 1445fdea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<__int64,UE::UnifiedError::FError> * __cdecl
UE::IoStore::FCasSnapshot::Save
          (TValueOrError<__int64,UE::UnifiedError::FError> *__return_storage_ptr__,
          FCasSnapshot *param_1,FString *param_2)

{
  char cVar1;
  DWORD DVar2;
  IFileManager *pIVar3;
  FArchive *pFVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  undefined1 auStackY_d8 [32];
  FString local_98;
  FString local_88;
  uchar local_70 [4];
  uchar auStack_6c [4];
  uchar auStack_68 [4];
  uchar auStack_64 [4];
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  uchar local_50 [4];
  uchar auStack_4c [4];
  uchar auStack_48 [4];
  uchar auStack_44 [4];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pIVar3 = IFileManager::Get();
  ::FString::FString(&local_88,L".snptmp");
  FPaths::ChangeExtension(&local_98,param_2,&local_88);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_98.Data.ArrayNum != 0) {
    FVar7.Data = local_98.Data.AllocatorInstance.Data;
  }
  pFVar4 = (FArchive *)(**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,FVar7.Data,0);
  if (pFVar4 == (FArchive *)0x0) {
    DVar2 = FWindowsPlatformMisc::GetLastError();
    ::FString::PrintfImpl(&local_88,L"Failed to open file \'%s\' for writing");
    UnifiedError::IoStoreOnDemand::MakeSnapshotError<__int64>
              (__return_storage_ptr__,SaveSnapshotFailed,FileOpenFailed,&local_88,DVar2);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
  local_60 = 1;
  local_5c = 0;
  local_70[0] = FHeader::MagicSequence[0];
  local_70[1] = FHeader::MagicSequence[1];
  local_70[2] = FHeader::MagicSequence[2];
  local_70[3] = FHeader::MagicSequence[3];
  auStack_6c[0] = FHeader::MagicSequence[4];
  auStack_6c[1] = FHeader::MagicSequence[5];
  auStack_6c[2] = FHeader::MagicSequence[6];
  auStack_6c[3] = FHeader::MagicSequence[7];
  auStack_68[0] = FHeader::MagicSequence[8];
  auStack_68[1] = FHeader::MagicSequence[9];
  auStack_68[2] = FHeader::MagicSequence[10];
  auStack_68[3] = FHeader::MagicSequence[0xb];
  auStack_64[0] = FHeader::MagicSequence[0xc];
  auStack_64[1] = FHeader::MagicSequence[0xd];
  auStack_64[2] = FHeader::MagicSequence[0xe];
  auStack_64[3] = FHeader::MagicSequence[0xf];
  local_54 = 0;
  (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_70,0x20);
  if ((pFVar4->field_0x29 & 2) == 0) {
    TArrayPrivateFriend::Serialize<UE::IoStore::FCasSnapshot::FBlock,TSizedDefaultAllocator<32>_>
              (pFVar4,&param_1->Blocks);
    TArrayPrivateFriend::
    Serialize<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TSizedDefaultAllocator<32>_>
              (pFVar4,&param_1->ChunkLocations);
    IoStore::operator<<(pFVar4,&param_1->CurrentBlockId);
    if ((pFVar4->field_0x29 & 2) == 0) {
      local_50[0] = FFooter::MagicSequence[0];
      local_50[1] = FFooter::MagicSequence[1];
      local_50[2] = FFooter::MagicSequence[2];
      local_50[3] = FFooter::MagicSequence[3];
      auStack_4c[0] = FFooter::MagicSequence[4];
      auStack_4c[1] = FFooter::MagicSequence[5];
      auStack_4c[2] = FFooter::MagicSequence[6];
      auStack_4c[3] = FFooter::MagicSequence[7];
      auStack_48[0] = FFooter::MagicSequence[8];
      auStack_48[1] = FFooter::MagicSequence[9];
      auStack_48[2] = FFooter::MagicSequence[10];
      auStack_48[3] = FFooter::MagicSequence[0xb];
      auStack_44[0] = FFooter::MagicSequence[0xc];
      auStack_44[1] = FFooter::MagicSequence[0xd];
      auStack_44[2] = FFooter::MagicSequence[0xe];
      auStack_44[3] = FFooter::MagicSequence[0xf];
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_50,0x10);
      if ((pFVar4->field_0x29 & 2) == 0) {
        lVar5 = (**(code **)(*(longlong *)pFVar4 + 0x30))(pFVar4);
        cVar1 = (**(code **)(*(longlong *)pFVar4 + 0x210))(pFVar4);
        if (cVar1 != '\0') {
          FVar7.Data = (FScriptContainerElement *)L"";
          if (local_98.Data.ArrayNum != 0) {
            FVar7.Data = local_98.Data.AllocatorInstance.Data;
          }
          if ((param_2->Data).ArrayNum == 0) {
            pwVar6 = L"";
          }
          else {
            pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
          }
          cVar1 = (**(code **)((longlong)*pIVar3 + 0x48))(pIVar3,pwVar6,FVar7.Data,1);
          if (cVar1 == '\0') {
            DVar2 = FWindowsPlatformMisc::GetLastError();
            FVar7.Data = (FScriptContainerElement *)L"";
            if (local_98.Data.ArrayNum != 0) {
              FVar7.Data = local_98.Data.AllocatorInstance.Data;
            }
            (**(code **)((longlong)*pIVar3 + 0x38))(pIVar3,FVar7.Data,0,0);
            ::FString::PrintfImpl(&local_88,L"Failed to move snapshot \'%s\' -> \'%s\'");
            UnifiedError::IoStoreOnDemand::MakeSnapshotError<__int64>
                      (__return_storage_ptr__,SaveSnapshotFailed,FileMoveFailed,&local_88,DVar2);
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
          }
          else {
            (__return_storage_ptr__->Variant)._padding_ = lVar5;
            (__return_storage_ptr__->Variant).TypeIndex = '\0';
            (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
          }
          goto LAB_1445fe280;
        }
        DVar2 = FWindowsPlatformMisc::GetLastError();
        (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_98.Data.ArrayNum != 0) {
          FVar7.Data = local_98.Data.AllocatorInstance.Data;
        }
        (**(code **)((longlong)*pIVar3 + 0x38))(pIVar3,FVar7.Data,0,0);
        pwVar6 = L"Failed to close snapshot footer to \'%s\'";
      }
      else {
        DVar2 = FWindowsPlatformMisc::GetLastError();
        (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_98.Data.ArrayNum != 0) {
          FVar7.Data = local_98.Data.AllocatorInstance.Data;
        }
        (**(code **)((longlong)*pIVar3 + 0x38))(pIVar3,FVar7.Data,0,0);
        pwVar6 = L"Failed to write snapshot footer to \'%s\'";
      }
    }
    else {
      DVar2 = FWindowsPlatformMisc::GetLastError();
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar7.Data = local_98.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar3 + 0x38))(pIVar3,FVar7.Data,0,0);
      pwVar6 = L"Failed to write snapshot to \'%s\'";
    }
  }
  else {
    DVar2 = FWindowsPlatformMisc::GetLastError();
    (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar7.Data = local_98.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar3 + 0x38))(pIVar3,FVar7.Data,0,0);
    pwVar6 = L"Failed to write snapshot header to \'%s\'";
  }
  ::FString::PrintfImpl(&local_88,pwVar6);
  UnifiedError::IoStoreOnDemand::MakeSnapshotError<__int64>
            (__return_storage_ptr__,SaveSnapshotFailed,WriteError,&local_88,DVar2);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
LAB_1445fe280:
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// TryCreateAndResetJournal @ 144605c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TValueOrError<__int64,UE::UnifiedError::FError> * __cdecl
UE::IoStore::FCasSnapshot::TryCreateAndResetJournal
          (TValueOrError<__int64,UE::UnifiedError::FError> *__return_storage_ptr__,FString *param_1,
          FString *param_2)

{
  IErrorDetails IVar1;
  int iVar2;
  int iVar3;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  uchar uVar8;
  bool bVar9;
  char cVar10;
  DWORD DVar11;
  IFileManager *pIVar12;
  longlong lVar13;
  TValueOrError<__int64,UE::UnifiedError::FError> *pTVar14;
  wchar_t *pwVar15;
  code *pcVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  longlong *plVar19;
  undefined1 auStackY_168 [32];
  FString local_128;
  TValueOrError<void,UE::UnifiedError::FError> local_118;
  FCasSnapshot local_100;
  ulonglong local_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  FString local_c0;
  FString local_b0;
  FString local_a0;
  TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError> local_88;
  TValueOrError<__int64,UE::UnifiedError::FError> local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pIVar12 = IFileManager::Get();
  if ((param_2->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  lVar13 = (**(code **)((longlong)*pIVar12 + 0x110))(pIVar12,pwVar15);
  if (lVar13 < 0) {
    DVar11 = FWindowsPlatformMisc::GetLastError();
    ::FString::PrintfImpl(&local_c0,L"Failed to find snapshot \'%s\'");
    UnifiedError::IoStoreOnDemand::MakeSnapshotError<__int64>
              (__return_storage_ptr__,CreateSnapshotFailed,NotFound,&local_c0,DVar11);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  else {
    FromJournal(&local_88,param_2);
    uVar17 = (ulonglong)local_88.Variant.TypeIndex;
    if ((2 < uVar17) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar9)) {
      pcVar16 = (code *)swi(3);
      pTVar14 = (TValueOrError<__int64,UE::UnifiedError::FError> *)(*pcVar16)();
      return pTVar14;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError>::FWrapErrorType,UE::IoStore::FCasSnapshot,TValueOrError<struct_UE::IoStore::FCasSnapshot,class_UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<struct_UE::IoStore::FCasSnapshot,class_UE::UnifiedError::FError>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar17) == '\0') {
      if ((local_88.Variant.TypeIndex != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar9)) {
        pcVar16 = (code *)swi(3);
        pTVar14 = (TValueOrError<__int64,UE::UnifiedError::FError> *)(*pcVar16)();
        return pTVar14;
      }
      local_100.Blocks.AllocatorInstance.Data =
           (FScriptContainerElement *)local_88.Variant._padding_;
      local_100.Blocks.ArrayNum = (int)local_88.Variant._padding_;
      local_100.Blocks.ArrayMax = local_88.Variant._padding_._4_4_;
      local_100.ChunkLocations.AllocatorInstance.Data =
           (FScriptContainerElement *)local_88.Variant._padding_;
      local_100.ChunkLocations.ArrayNum = (int)local_88.Variant._padding_;
      local_100.ChunkLocations.ArrayMax = local_88.Variant._padding_._4_4_;
      local_100.CurrentBlockId.Id = (uint)local_88.Variant._padding_;
      local_88.Variant._padding_ = 0;
      local_88.Variant._padding_ = 0;
      local_88.Variant._padding_ = 0;
      local_88.Variant._padding_ = 0;
      if ((2 < local_88.Variant.TypeIndex) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar9)) {
        pcVar16 = (code *)swi(3);
        pTVar14 = (TValueOrError<__int64,UE::UnifiedError::FError> *)(*pcVar16)();
        return pTVar14;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::IoStore::FCasSnapshot,TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<struct_UE::IoStore::FCasSnapshot,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_88.Variant.TypeIndex] !=
          Core::Private::
          TDestructorCaller<TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError>::FEmptyType>
          ::Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::IoStore::FCasSnapshot,TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<struct_UE::IoStore::FCasSnapshot,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_88.Variant.TypeIndex])(&local_88);
      }
      local_88.Variant.TypeIndex = 2;
      Save(&local_58,&local_100,param_1);
      local_d8 = (ulonglong)local_58.Variant.TypeIndex;
      if ((2 < local_d8) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar9)) {
        pcVar16 = (code *)swi(3);
        pTVar14 = (TValueOrError<__int64,UE::UnifiedError::FError> *)(*pcVar16)();
        return pTVar14;
      }
      uVar8 = local_58.Variant.TypeIndex;
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<__int64,__int64,TValueOrError<__int64,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<__int64,class_UE::UnifiedError::FError>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + local_d8) == '\0') {
        (__return_storage_ptr__->Variant).TypeIndex = local_58.Variant.TypeIndex;
        if ((2 < local_58.Variant.TypeIndex) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x105,L""), bVar9)) {
          pcVar16 = (code *)swi(3);
          pTVar14 = (TValueOrError<__int64,UE::UnifiedError::FError> *)(*pcVar16)();
          return pTVar14;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<__int64,TValueOrError<__int64,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<__int64,class_UE::UnifiedError::FError>::FEmptyType>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                      ::__l2::MoveConstructors)[uVar8] ==
            Core::Private::
            TMoveConstructorCaller<TValueOrError<__int64,UE::UnifiedError::FError>::FWrapErrorType>
            ::Construct) {
          UnifiedError::FError::FError((FError *)__return_storage_ptr__,(FError *)&local_58);
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<__int64,TValueOrError<__int64,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<__int64,class_UE::UnifiedError::FError>::FEmptyType>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                      ::__l2::MoveConstructors)[uVar8])();
        }
        uVar17 = (ulonglong)local_58.Variant.TypeIndex;
        if ((2 < local_58.Variant.TypeIndex) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar9)) {
          pcVar16 = (code *)swi(3);
          pTVar14 = (TValueOrError<__int64,UE::UnifiedError::FError> *)(*pcVar16)();
          return pTVar14;
        }
      }
      else {
        if ((local_58.Variant.TypeIndex != 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar9)) {
          pcVar16 = (code *)swi(3);
          pTVar14 = (TValueOrError<__int64,UE::UnifiedError::FError> *)(*pcVar16)();
          return pTVar14;
        }
        ::FString::FString(&local_b0,L".jrntmp");
        FPaths::ChangeExtension(&local_128,param_2,&local_b0);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        FCasJournal::Create(&local_118,&local_128);
        if (local_118.Error.bIsSet == false) {
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_128.Data.ArrayNum != 0) {
            FVar18.Data = local_128.Data.AllocatorInstance.Data;
          }
          if ((param_2->Data).ArrayNum == 0) {
            pwVar15 = L"";
          }
          else {
            pwVar15 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
          }
          cVar10 = (**(code **)((longlong)*pIVar12 + 0x48))(pIVar12,pwVar15,FVar18.Data,1);
          if (cVar10 == '\0') {
            FWindowsPlatformMisc::GetLastError();
            if ((param_1->Data).ArrayNum == 0) {
              pwVar15 = L"";
            }
            else {
              pwVar15 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
            }
            cVar10 = (**(code **)((longlong)*pIVar12 + 0x38))(pIVar12,pwVar15,0,0);
            if ((cVar10 == '\0') && (1 < (byte)LogIoStoreOnDemand._0_1_)) {
              Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
            }
            DVar11 = FWindowsPlatformMisc::GetLastError();
            ::FString::PrintfImpl(&local_a0,L"Failed to move tmp journal file \'%s\' -> \'%s\'");
            UnifiedError::IoStoreOnDemand::MakeSnapshotError<__int64>
                      (__return_storage_ptr__,CreateSnapshotFailed,FileMoveFailed,&local_a0,DVar11);
            if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            }
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
            uVar17 = (ulonglong)local_58.Variant.TypeIndex;
            if ((2 < local_58.Variant.TypeIndex) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar9)) {
              pcVar16 = (code *)swi(3);
              pTVar14 = (TValueOrError<__int64,UE::UnifiedError::FError> *)(*pcVar16)();
              return pTVar14;
            }
          }
          else {
            (__return_storage_ptr__->Variant)._padding_ = local_58.Variant._padding_;
            (__return_storage_ptr__->Variant).TypeIndex = '\0';
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
            uVar17 = (ulonglong)local_58.Variant.TypeIndex;
            if ((2 < local_58.Variant.TypeIndex) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar9)) {
              pcVar16 = (code *)swi(3);
              pTVar14 = (TValueOrError<__int64,UE::UnifiedError::FError> *)(*pcVar16)();
              return pTVar14;
            }
          }
        }
        else {
          if ((param_1->Data).ArrayNum == 0) {
            pwVar15 = L"";
          }
          else {
            pwVar15 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
          }
          cVar10 = (**(code **)((longlong)*pIVar12 + 0x38))(pIVar12,pwVar15,0,0);
          if ((cVar10 == '\0') && (1 < (byte)LogIoStoreOnDemand._0_1_)) {
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
          }
          TVar4.Reference = local_118.Error.TypedValue.ErrorDetails.Reference;
          iVar2 = local_118.Error.TypedValue.ErrorCode;
          iVar3 = local_118.Error.TypedValue.ModuleId;
          if (local_118.Error.TypedValue.ErrorDetails.Reference == (IErrorDetails *)0x0) {
            local_118.Error.TypedValue.ErrorCode = 0;
            local_118.Error.TypedValue.ModuleId = 0;
            local_118.Error.bIsSet = false;
            (__return_storage_ptr__->Variant)._padding_ = 0;
            *(int *)&(__return_storage_ptr__->Variant)._padding_ = iVar2;
            *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = iVar3;
          }
          else {
            (**(code **)((longlong)*local_118.Error.TypedValue.ErrorDetails.Reference + 8))
                      (local_118.Error.TypedValue.ErrorDetails.Reference,local_c8);
            IVar1 = *local_118.Error.TypedValue.ErrorDetails.Reference;
            local_118.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)IVar1 + 0x10))(TVar4.Reference);
            *(int *)&(__return_storage_ptr__->Variant)._padding_ =
                 local_118.Error.TypedValue.ErrorCode;
            *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) =
                 local_118.Error.TypedValue.ModuleId;
            (__return_storage_ptr__->Variant)._padding_ = (longlong)TVar4.Reference;
            local_118.Error.TypedValue.ErrorCode = 0;
            local_118.Error.TypedValue.ModuleId = 0;
            local_118.Error.bIsSet = false;
            (**(code **)((longlong)*TVar4.Reference + 8))(TVar4.Reference,local_c4);
            (**(code **)((longlong)*TVar4.Reference + 0x10))(TVar4.Reference);
          }
          (__return_storage_ptr__->Variant).TypeIndex = '\x01';
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          uVar17 = (ulonglong)local_58.Variant.TypeIndex;
          if ((2 < local_58.Variant.TypeIndex) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar9)) {
            pcVar16 = (code *)swi(3);
            pTVar14 = (TValueOrError<__int64,UE::UnifiedError::FError> *)(*pcVar16)();
            return pTVar14;
          }
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<__int64,TValueOrError<__int64,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<__int64,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar17])(&local_58);
      if (local_100.ChunkLocations.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.ChunkLocations.AllocatorInstance.Data);
      }
      if (local_100.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Blocks.AllocatorInstance.Data);
      }
      uVar17 = (ulonglong)local_88.Variant.TypeIndex;
      if ((2 < local_88.Variant.TypeIndex) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar9)) {
        pcVar16 = (code *)swi(3);
        pTVar14 = (TValueOrError<__int64,UE::UnifiedError::FError> *)(*pcVar16)();
        return pTVar14;
      }
      pcVar16 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::IoStore::FCasSnapshot,TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<struct_UE::IoStore::FCasSnapshot,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar17];
    }
    else {
      if ((local_88.Variant.TypeIndex != 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar9)) {
        pcVar16 = (code *)swi(3);
        pTVar14 = (TValueOrError<__int64,UE::UnifiedError::FError> *)(*pcVar16)();
        return pTVar14;
      }
      lVar13 = local_88.Variant._padding_;
      uVar5 = (undefined4)local_88.Variant._padding_;
      uVar6 = local_88.Variant._padding_._4_4_;
      local_88.Variant._padding_ = 0;
      plVar19 = (longlong *)0x0;
      if (((longlong *)local_88.Variant._padding_ != (longlong *)0x0) &&
         ((**(code **)(*(longlong *)local_88.Variant._padding_ + 8))
                    (local_88.Variant._padding_,local_d0), lVar7 = local_88.Variant._padding_,
         plVar19 = (longlong *)lVar13, (longlong *)local_88.Variant._padding_ != (longlong *)0x0)) {
        local_88.Variant._padding_ = 0;
        (**(code **)(*(longlong *)lVar7 + 0x10))();
      }
      if ((2 < local_88.Variant.TypeIndex) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar9)) {
        pcVar16 = (code *)swi(3);
        pTVar14 = (TValueOrError<__int64,UE::UnifiedError::FError> *)(*pcVar16)();
        return pTVar14;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::IoStore::FCasSnapshot,TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<struct_UE::IoStore::FCasSnapshot,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_88.Variant.TypeIndex])(&local_88);
      local_88.Variant.TypeIndex = 2;
      (__return_storage_ptr__->Variant)._padding_ = 0;
      *(undefined4 *)&(__return_storage_ptr__->Variant)._padding_ = uVar5;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = uVar6;
      if (plVar19 != (longlong *)0x0) {
        (__return_storage_ptr__->Variant)._padding_ = (longlong)plVar19;
        (**(code **)(*plVar19 + 8))(plVar19,local_cc);
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      uVar17 = (ulonglong)local_88.Variant.TypeIndex;
      if ((2 < local_88.Variant.TypeIndex) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar9)) {
        pcVar16 = (code *)swi(3);
        pTVar14 = (TValueOrError<__int64,UE::UnifiedError::FError> *)(*pcVar16)();
        return pTVar14;
      }
      pcVar16 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::IoStore::FCasSnapshot,TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<struct_UE::IoStore::FCasSnapshot,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar17];
    }
    if (pcVar16 !=
        Core::Private::
        TDestructorCaller<TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError>::FEmptyType>
        ::Destruct) {
      (*pcVar16)(&local_88);
    }
  }
  return __return_storage_ptr__;
}

