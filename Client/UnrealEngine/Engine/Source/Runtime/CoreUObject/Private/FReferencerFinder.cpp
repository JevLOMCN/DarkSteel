// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// GetAllReferencers @ 1421cddd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __cdecl
FReferencerFinder::GetAllReferencers
          (TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_2,
          EReferencerFinderFlags param_3)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  ulonglong *puVar18;
  FScriptContainerElement *pFVar19;
  EParallelForFlags EVar20;
  undefined1 auStackY_1e8 [32];
  int local_1b0;
  uint uStack_1ac;
  int iStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  int local_190;
  uint uStack_18c;
  int iStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_150;
  longlong *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_128;
  FSparseArrayAllocationInfo local_108;
  code *local_f8;
  undefined8 **local_f0;
  undefined8 *local_e8;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_e0;
  _RTL_CRITICAL_SECTION *local_d8;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  EReferencerFinderFlags local_bc;
  undefined1 local_b8 [32];
  ForElementType<unsigned_int> local_98;
  int local_90;
  uint local_8c;
  int local_88;
  int local_84;
  FScriptContainerElement local_80 [8];
  ForAnyElementType local_78;
  uint local_70;
  _RTL_CRITICAL_SECTION local_68;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  uVar9 = param_1->ArrayNum;
  pFVar19 = (param_1->AllocatorInstance).Data;
  if (((int)uVar9 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar6;
  }
  local_8c = 0x80;
  local_b8._0_8_ = (FScriptContainerElement *)0x0;
  EVar20 = ForceSingleThread;
  local_b8._8_8_ = 0;
  local_98 = (ForElementType<unsigned_int>)0x0;
  local_90 = 0;
  local_88 = -1;
  local_84 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  if (uVar9 == 0) goto LAB_1421ce0b2;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_b8,uVar9);
  uVar15 = 1;
  if (3 < uVar9) {
    uVar12 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = 1 << ((byte)lVar13 & 0x1f);
  }
  if ((local_70 != 0) && ((int)uVar15 <= (int)local_70)) goto LAB_1421ce0b2;
  local_70 = uVar15;
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,4);
  }
  if (uVar15 != 0) {
    uVar11 = uVar15;
    if (uVar15 < 2) {
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        uVar11 = 0;
        goto LAB_1421cdef2;
      }
    }
    else {
LAB_1421cdef2:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar11,4);
    }
    if (0 < (int)uVar15) {
      uVar12 = 0;
      uVar16 = (ulonglong)uVar15;
      do {
        FVar10.Data = local_80;
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_78.Data;
        }
        uVar7 = (longlong)(int)uVar15 - 1U & uVar12;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(FVar10.Data + uVar7 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_70 != 0) {
    local_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
    local_1b0 = 0;
    uStack_1ac = 1;
    iStack_19c = 0;
    iStack_198 = 0;
    if (local_90 != 0) {
      FVar14 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
      if (local_98 != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_98;
      }
      uVar15 = *(uint *)FVar14;
      while (uVar15 == 0) {
        iStack_198 = iStack_198 + 0x20;
        lVar13 = (longlong)local_1b0;
        local_1b0 = local_1b0 + 1;
        if ((int)(local_90 + -1 + (local_90 + -1 >> 0x1f & 0x1fU)) >> 5 < local_1b0)
        goto LAB_1421cdfef;
        uVar15 = ((uint *)((longlong)FVar14 + 4))[lVar13];
      }
      uStack_1ac = -uVar15 & uVar15;
      uVar12 = (ulonglong)uStack_1ac * 2 + 1;
      lVar13 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iStack_19c = iStack_198 + -1 + (int)lVar13;
      if (local_90 < iStack_19c) {
LAB_1421cdfef:
        iStack_19c = local_90;
      }
    }
    local_150._padding_ = CONCAT44(uStack_1ac,local_1b0);
    local_150.CurrentBitIndex = iStack_19c;
    local_150.UnvisitedBitMask = 0xffffffff;
    local_150._28_4_ = uStack_194;
    local_150.BaseBitIndex = iStack_198;
    if (iStack_19c < local_90) {
      do {
        pFVar17 = (FScriptContainerElement *)(local_b8._0_8_ + (longlong)iStack_19c * 0x10);
        uVar15 = ((uint)(*(ulonglong *)pFVar17 >> 0x14) & 0xffff ^
                 (uint)(*(ulonglong *)pFVar17 >> 4)) * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        uVar15 = (uVar15 >> 0x10 ^ uVar15) & local_70 - 1;
        *(uint *)(pFVar17 + 0xc) = uVar15;
        FVar10.Data = local_80;
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_78.Data;
        }
        uVar12 = (longlong)(int)local_70 - 1U & (longlong)(int)uVar15;
        *(undefined4 *)(pFVar17 + 8) = *(undefined4 *)(FVar10.Data + uVar12 * 4);
        *(int *)(FVar10.Data + uVar12 * 4) = iStack_19c;
        local_150.UnvisitedBitMask = local_150.UnvisitedBitMask & ~local_150._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_150);
        iStack_19c = local_150.CurrentBitIndex;
      } while (local_150.CurrentBitIndex < (local_150.Array)->NumBits);
    }
  }
LAB_1421ce0b2:
  pFVar17 = pFVar19 + (longlong)(int)uVar9 * 8;
  iVar4 = local_88;
  do {
    local_88 = iVar4;
    if (pFVar19 == pFVar17) {
      if (local_b8._8_4_ == local_84) {
        (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        __return_storage_ptr__->ArrayNum = 0;
        __return_storage_ptr__->ArrayMax = 0;
      }
      else if (((param_3 & SkipWeakReferences) == None) &&
              (UE::Private::GUseSerializeToFindWeakReferencers != false)) {
        UE::Private::GetAllReferencersIncludingWeak
                  (__return_storage_ptr__,
                   (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)local_b8,
                   param_2,(bool)(param_3 & SkipInnerReferences));
      }
      else {
        (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        __return_storage_ptr__->ArrayNum = 0;
        __return_storage_ptr__->ArrayMax = 0;
        InitializeCriticalSectionAndSpinCount(&local_68,4000);
        EnterCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.ObjObjectsCritical);
        iVar4 = GUObjectArray.ObjObjects.NumElements;
        local_c4 = GetNumCollectReferenceWorkers();
        local_c8 = iVar4 / local_c4 + 1;
        if ((GUObjectRegistrationComplete != false) && (GAllowParallelReferenceCollection != 0)) {
          EVar20 = None;
        }
        local_e8 = (undefined8 *)local_b8;
        local_d8 = &local_68;
        local_c0 = iVar4;
        local_f8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UE::Private::GetAllReferencersExcludingWeak'::__l2::<lambda_1>,void,int>
                   ::Call;
        local_f0 = &local_e8;
        local_e0 = param_2;
        local_d0 = __return_storage_ptr__;
        local_bc = param_3;
        ParallelFor(local_c4,(TFunctionRef<void___cdecl(int)> *)&local_f8,EVar20);
        LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.ObjObjectsCritical);
        DeleteCriticalSection(&local_68);
      }
      local_70 = 0;
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      iVar4 = SUB84(local_b8._8_8_,4);
      local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
      if (iVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
      }
      local_88 = -1;
      local_84 = 0;
      local_90 = 0;
      if (0x80 < local_8c) {
        local_8c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
      }
      if (local_98 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_98);
      }
      if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_b8._0_8_);
      }
      return __return_storage_ptr__;
    }
    if (local_84 == 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1,(ForAnyElementType *)local_b8,(int *)(local_b8 + 8),
                         (int *)(local_b8 + 0xc));
      iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),1);
      FVar14 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
      if (local_98 != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_98;
      }
      bVar8 = (byte)iVar5 & 0x1f;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0x1f;
        bVar8 = bVar8 - 0x20;
      }
      puVar1 = (uint *)((longlong)FVar14 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << (bVar8 & 0x1f));
    }
    else {
      local_88 = *(int *)(local_b8._0_8_ + (longlong)iVar4 * 0x10 + 4);
      local_84 = local_84 + -1;
      if (local_84 != 0) {
        *(undefined4 *)(local_b8._0_8_ + (longlong)local_88 * 0x10) = 0xffffffff;
      }
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_b8,&local_108,iVar4);
    if (local_108.Pointer != (ulonglong *)0x0) {
      *(ulonglong *)local_108.Pointer = *(ulonglong *)pFVar19;
      *(undefined4 *)((longlong)local_108.Pointer + 8) = 0xffffffff;
    }
    uVar12 = *(ulonglong *)local_108.Pointer;
    uVar9 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    uVar9 = uVar9 >> 0x10 ^ uVar9;
    if ((local_b8._8_4_ - local_84 != 1) && (local_b8._8_4_ != local_84)) {
      FVar10.Data = local_80;
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FVar10.Data = local_78.Data;
      }
      for (iVar4 = *(int *)(FVar10.Data + (ulonglong)(local_70 - 1 & uVar9) * 4); iVar4 != -1;
          iVar4 = *(int *)(local_b8._0_8_ + (longlong)iVar4 * 0x10 + 8)) {
        if (*(ulonglong *)(local_b8._0_8_ + (longlong)iVar4 * 0x10) == uVar12) {
          if (iVar4 != -1) {
            *(ulonglong *)(local_b8._0_8_ + (longlong)iVar4 * 0x10) = uVar12;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_b8,local_108.Index,1);
            goto LAB_1421ce496;
          }
          break;
        }
      }
    }
    uVar11 = local_b8._8_4_ - local_84;
    uVar15 = 1;
    if (3 < uVar11) {
      uVar12 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar15 = 1 << ((byte)lVar13 & 0x1f);
    }
    if (((int)uVar11 < 1) || ((int)uVar15 <= (int)local_70)) {
      uVar9 = local_70 - 1 & uVar9;
      *(uint *)((longlong)local_108.Pointer + 0xc) = uVar9;
      FVar10.Data = local_80;
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FVar10.Data = local_78.Data;
      }
      uVar12 = (longlong)(int)local_70 - 1U & (longlong)(int)uVar9;
      *(undefined4 *)((longlong)local_108.Pointer + 8) = *(undefined4 *)(FVar10.Data + uVar12 * 4);
      *(int *)(FVar10.Data + uVar12 * 4) = local_108.Index;
    }
    else {
      local_70 = uVar15;
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,4);
      }
      if (uVar15 != 0) {
        uVar9 = uVar15;
        if (uVar15 < 2) {
          if (local_78.Data != (FScriptContainerElement *)0x0) {
            uVar9 = 0;
            goto LAB_1421ce297;
          }
        }
        else {
LAB_1421ce297:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar9,4);
        }
        if (0 < (int)uVar15) {
          uVar12 = 0;
          uVar16 = (ulonglong)uVar15;
          do {
            FVar10.Data = local_80;
            if (local_78.Data != (FScriptContainerElement *)0x0) {
              FVar10.Data = local_78.Data;
            }
            uVar7 = (longlong)(int)uVar15 - 1U & uVar12;
            uVar12 = uVar12 + 1;
            *(undefined4 *)(FVar10.Data + uVar7 * 4) = 0xffffffff;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
      }
      if (local_70 != 0) {
        local_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
        uStack_18c = 1;
        local_190 = 0;
        iStack_17c = 0;
        iStack_178 = 0;
        if (local_90 != 0) {
          FVar14 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
          if (local_98 != (ForElementType<unsigned_int>)0x0) {
            FVar14 = local_98;
          }
          uVar9 = *(uint *)FVar14;
          while (uVar9 == 0) {
            iStack_178 = iStack_178 + 0x20;
            lVar13 = (longlong)local_190;
            local_190 = local_190 + 1;
            if ((int)(local_90 + -1 + (local_90 + -1 >> 0x1f & 0x1fU)) >> 5 < local_190)
            goto LAB_1421ce39f;
            uVar9 = ((uint *)((longlong)FVar14 + 4))[lVar13];
          }
          uStack_18c = -uVar9 & uVar9;
          uVar12 = (ulonglong)uStack_18c * 2 + 1;
          lVar13 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iStack_17c = iStack_178 + -1 + (int)lVar13;
          if (local_90 < iStack_17c) {
LAB_1421ce39f:
            iStack_17c = local_90;
          }
        }
        local_130 = (longlong *)local_b8;
        local_128._padding_ = CONCAT44(uStack_18c,local_190);
        local_128.CurrentBitIndex = iStack_17c;
        local_128.UnvisitedBitMask = 0xffffffff;
        local_128._28_4_ = uStack_174;
        local_128.BaseBitIndex = iStack_178;
        if (iStack_17c < local_90) {
          do {
            puVar18 = (ulonglong *)((longlong)iStack_17c * 0x10 + *local_130);
            uVar9 = ((uint)(*puVar18 >> 0x14) & 0xffff ^ (uint)(*puVar18 >> 4)) * -0x7a143595;
            uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
            uVar9 = (uVar9 >> 0x10 ^ uVar9) & local_70 - 1;
            *(uint *)((longlong)puVar18 + 0xc) = uVar9;
            FVar10.Data = local_80;
            if (local_78.Data != (FScriptContainerElement *)0x0) {
              FVar10.Data = local_78.Data;
            }
            uVar12 = (longlong)(int)local_70 - 1U & (longlong)(int)uVar9;
            *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(FVar10.Data + uVar12 * 4);
            *(int *)(FVar10.Data + uVar12 * 4) = iStack_17c;
            local_128.UnvisitedBitMask = local_128.UnvisitedBitMask & ~local_128._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_128);
            iStack_17c = local_128.CurrentBitIndex;
          } while (local_128.CurrentBitIndex < (local_128.Array)->NumBits);
        }
      }
    }
LAB_1421ce496:
    pFVar19 = pFVar19 + 8;
    iVar4 = local_88;
  } while( true );
}

// GetAllReferencers @ 1421ce670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __cdecl
FReferencerFinder::GetAllReferencers
          (TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_2,
          EReferencerFinderFlags param_3)

{
  int iVar1;
  EParallelForFlags EVar2;
  undefined1 auStackY_108 [32];
  <lambda_1> local_c8;
  TArrayView<std::nullptr_t,int> local_c0;
  code *local_b0;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> **local_a8;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_a0;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_98;
  _RTL_CRITICAL_SECTION *local_90;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_88;
  int local_80;
  int local_7c;
  int local_78;
  EReferencerFinderFlags local_74;
  _RTL_CRITICAL_SECTION local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if (*(int *)&(param_1->Elements).field_0x8 == *(int *)&(param_1->Elements).field_0x34) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else if (((param_3 & SkipWeakReferences) == None) &&
          (UE::Private::GUseSerializeToFindWeakReferencers)) {
    UE::Private::GetAllReferencersIncludingWeak
              (__return_storage_ptr__,param_1,param_2,(bool)(param_3 & SkipInnerReferences));
  }
  else {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    InitializeCriticalSectionAndSpinCount(&local_70,4000);
    EnterCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.ObjObjectsCritical);
    iVar1 = GUObjectArray.ObjObjects.NumElements;
    local_7c = GetNumCollectReferenceWorkers();
    local_80 = iVar1 / local_7c + 1;
    EVar2 = None;
    if ((GUObjectRegistrationComplete == false) || (GAllowParallelReferenceCollection == 0)) {
      EVar2 = ForceSingleThread;
    }
    local_90 = &local_70;
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::Private::GetAllReferencersExcludingWeak'::__l2::<lambda_1>,void,int>
               ::Call;
    local_a8 = &local_a0;
    local_78 = iVar1;
    local_c0.DataPtr = (void **)0x0;
    local_c0.ArrayNum = 0;
    local_a0 = param_1;
    local_98 = param_2;
    local_88 = __return_storage_ptr__;
    local_74 = param_3;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_7c,1,(TFunctionRef<void___cdecl(int)> *)&local_b0,local_c8,
               EVar2,&local_c0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.ObjObjectsCritical);
    DeleteCriticalSection(&local_70);
  }
  return __return_storage_ptr__;
}

// NotifyRegistrationComplete @ 1421d65e0

void __cdecl FReferencerFinder::NotifyRegistrationComplete(void)

{
  GUObjectRegistrationComplete = true;
  return;
}

