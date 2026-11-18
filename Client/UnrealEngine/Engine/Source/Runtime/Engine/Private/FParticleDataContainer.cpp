// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Alloc @ 1480fd0f0

void __thiscall FParticleDataContainer::Alloc(FParticleDataContainer *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uchar *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  LARGE_INTEGER local_res8;
  
  if ((((param_1 < 1) || (this->ParticleIndicesNumShorts < 0)) || ((param_1 & 1U) != 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InParticleDataNumBytes > 0 && ParticleIndicesNumShorts >= 0 && InParticleDataNumBytes % sizeof(uint16) == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                         ,0x137,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->ParticleDataNumBytes = param_1;
  uVar6 = param_1 + param_2 * 2;
  this->ParticleIndicesNumShorts = param_2;
  this->MemBlockSize = uVar6;
  if (GEnableFastPools != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&GFastPoolsCriticalSection);
    if (GFastPoolFreedAllocations._8_4_ != GFastPoolFreedAllocations._52_4_) {
      lVar5 = 0x154c5ea88;
      if (GFastPoolFreedAllocations._64_8_ != 0) {
        lVar5 = GFastPoolFreedAllocations._64_8_;
      }
      iVar3 = *(int *)(lVar5 + (ulonglong)(GFastPoolFreedAllocations._72_4_ - 1 & uVar6) * 4);
      while (iVar3 != -1) {
        lVar5 = GFastPoolFreedAllocations._0_8_ + (longlong)iVar3 * 0x28;
        if (*(uint *)(GFastPoolFreedAllocations._0_8_ + (longlong)iVar3 * 0x28) == uVar6) {
          puVar7 = (undefined8 *)(lVar5 + 8);
          if (lVar5 == 0) {
            puVar7 = (undefined8 *)0x0;
          }
          if ((puVar7 != (undefined8 *)0x0) && (*(int *)(puVar7 + 1) != 0)) {
            if ((*(int *)(puVar7 + 1) < 1) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            puVar4 = *(uchar **)*puVar7;
            if ((*(int *)(puVar7 + 1) < 1) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar3 = *(int *)(puVar7 + 1) + -1;
            if (1 < iVar3) {
              iVar3 = 1;
            }
            if (iVar3 != 0) {
              memmove((void *)*puVar7,
                      (void *)((longlong)*puVar7 + (longlong)(*(int *)(puVar7 + 1) - iVar3) * 8),
                      (longlong)iVar3 << 3);
            }
            *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + -1;
            QueryPerformanceCounter(&local_res8);
            puVar7[2] = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                        __real_4170000000000000;
            GFreePoolSizeBytes = GFreePoolSizeBytes - uVar6;
            LeaveCriticalSection((LPCRITICAL_SECTION)&GFastPoolsCriticalSection);
            goto LAB_1480fd1e1;
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x20);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&GFastPoolsCriticalSection);
  }
  puVar4 = FMemory::Malloc((longlong)(int)uVar6,0);
LAB_1480fd1e1:
  this->ParticleIndices = (ushort *)(puVar4 + this->ParticleDataNumBytes);
  this->ParticleData = puVar4;
  return;
}

// Free @ 14810c1f0

void __thiscall FParticleDataContainer::Free(FParticleDataContainer *this)

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  byte bVar5;
  TMap<int,FFastPoolFreePool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastPoolFreePool,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  int local_res20 [2];
  uchar *local_e8;
  int local_e0;
  int local_dc;
  uint *local_d8;
  TMap<int,FFastPoolFreePool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastPoolFreePool,0>_>
  *local_d0;
  uint uStack_c8;
  uint uStack_c4;
  undefined8 local_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMap<int,FFastPoolFreePool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastPoolFreePool,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  undefined8 *puVar14;
  
  puVar12 = (undefined8 *)0x0;
  if (this->ParticleData != (uchar *)0x0) {
    uVar13 = 0;
    if ((this->MemBlockSize < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("MemBlockSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                           ,0x145,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_e8 = this->ParticleData;
    uVar9 = this->MemBlockSize;
    if (GEnableFastPools == 0) {
      FMemory::Free(local_e8);
    }
    else {
      EnterCriticalSection((LPCRITICAL_SECTION)&GFastPoolsCriticalSection);
      local_res18[0] = uVar9;
      if (GFastPoolFreedAllocations._8_4_ != GFastPoolFreedAllocations._52_4_) {
        lVar10 = 0x154c5ea88;
        if (GFastPoolFreedAllocations._64_8_ != 0) {
          lVar10 = GFastPoolFreedAllocations._64_8_;
        }
        iVar8 = *(int *)(lVar10 + (ulonglong)(GFastPoolFreedAllocations._72_4_ - 1 & uVar9) * 4);
        while (iVar8 != -1) {
          lVar10 = GFastPoolFreedAllocations._0_8_ + (longlong)iVar8 * 0x28;
          if (*(uint *)(GFastPoolFreedAllocations._0_8_ + (longlong)iVar8 * 0x28) == uVar9) {
            if (lVar10 != 0) goto LAB_14810c323;
            break;
          }
          iVar8 = *(int *)(lVar10 + 0x20);
        }
      }
      local_d8 = local_res18;
      TSet<TTuple<int,FFastPoolFreePool>,TDefaultMapHashableKeyFuncs<int,FFastPoolFreePool,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<int_&&>_>
                ((TSet<TTuple<int,FFastPoolFreePool>,TDefaultMapHashableKeyFuncs<int,FFastPoolFreePool,0>,FDefaultSetAllocator>
                  *)&GFastPoolFreedAllocations,(uint)local_res20,
                 (TKeyInitializer<int_&&> *)(ulonglong)uVar9,(bool *)&local_d8);
      lVar10 = GFastPoolFreedAllocations._0_8_ + (longlong)local_res20[0] * 0x28;
LAB_14810c323:
      if (((*(uchar ***)(lVar10 + 8) <= &local_e8) &&
          (&local_e8 < *(uchar ***)(lVar10 + 8) + *(int *)(lVar10 + 0x14))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = *(int *)(lVar10 + 0x10);
      if (iVar8 == *(int *)(lVar10 + 0x14)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(lVar10 + 8),(int *)(lVar10 + 0x14));
      }
      *(int *)(lVar10 + 0x10) = iVar8 + 1;
      *(uchar **)(((ForAnyElementType *)(lVar10 + 8))->Data + (longlong)iVar8 * 8) = local_e8;
      GFreePoolSizeBytes = GFreePoolSizeBytes + uVar9;
      if (GMaxFreePoolSizeBytes < GFreePoolSizeBytes) {
        local_b0 = 0;
        uStack_c4 = 1;
        uVar9 = GFastPoolFreedAllocations._40_4_;
        uStack_b4 = local_b0;
        if (uVar9 != 0) {
          puVar17 = (uint *)&GFastPoolFreedAllocations.field_0x10;
          if (GFastPoolFreedAllocations._32_8_ != 0) {
            puVar17 = (uint *)GFastPoolFreedAllocations._32_8_;
          }
          uVar18 = *puVar17;
          puVar14 = puVar12;
          puVar15 = puVar12;
          local_b0 = 0;
          uVar13 = 0;
          while (uVar18 == 0) {
            iVar8 = (int)puVar14;
            local_b0 = (int)puVar15 + 0x20;
            puVar15 = (undefined8 *)(ulonglong)local_b0;
            uVar13 = iVar8 + 1;
            puVar14 = (undefined8 *)(ulonglong)uVar13;
            uStack_b4 = uVar9;
            if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
            goto LAB_14810c47f;
            uVar18 = puVar17[(longlong)iVar8 + 1];
          }
          uStack_c4 = -uVar18 & uVar18;
          uVar1 = (ulonglong)uStack_c4 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          local_e0 = (int)lVar10;
          uStack_b4 = (local_b0 - 1) + local_e0;
          if ((int)uVar9 < (int)uStack_b4) {
            uStack_b4 = uVar9;
          }
        }
LAB_14810c47f:
        bVar5 = GFastPoolFreedAllocations._40_1_;
        uStack_ac = local_54;
        iStack_a8 = GFastPoolFreedAllocations._8_4_ - GFastPoolFreedAllocations._52_4_;
        local_c0 = 0x154c5ea60;
        uVar18 = uVar9 & 0xffffffe0;
        local_d0 = &GFastPoolFreedAllocations;
        uStack_b8 = 0xffffffff;
        TStack_98.CurrentBitIndex = uStack_b4;
        TStack_98.UnvisitedBitMask = 0xffffffff;
        TStack_98._padding_ = CONCAT44(uStack_c4,uVar13);
        local_a0 = &GFastPoolFreedAllocations;
        iVar8 = (int)uVar9 >> 5;
        TStack_98._28_4_ = local_54;
        TStack_98.BaseBitIndex = local_b0;
        uStack_78 = CONCAT44(uStack_a4,iStack_a8);
        TStack_98.Array =
             (TBitArray<FDefaultBitArrayAllocator> *)&GFastPoolFreedAllocations.field_0x10;
        uVar16 = uVar9;
        uStack_c8 = uVar13;
        if ((int)uVar9 < 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar16 = GFastPoolFreedAllocations._40_4_;
        }
        puVar14 = puVar12;
        if (uVar9 != uVar16) {
          lVar10 = 0x154c5ea60;
          if (GFastPoolFreedAllocations._32_8_ != 0) {
            lVar10 = GFastPoolFreedAllocations._32_8_;
          }
          uVar13 = -1 << (bVar5 & 0x1f) & *(uint *)(lVar10 + (longlong)iVar8 * 4);
          while (uVar13 == 0) {
            lVar11 = (longlong)iVar8;
            uVar18 = uVar18 + 0x20;
            iVar8 = iVar8 + 1;
            uVar9 = uVar16;
            if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
            goto LAB_14810c5a0;
            uVar13 = *(uint *)(lVar10 + 4 + lVar11 * 4);
          }
          uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
          lVar10 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          local_dc = (int)lVar10;
          uVar9 = local_dc + -1 + uVar18;
          if ((int)uVar16 < (int)uVar9) {
            uVar9 = uVar16;
          }
        }
LAB_14810c5a0:
        while( true ) {
          pTVar6 = local_a0;
          if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
            local_res10[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<int,FFastPoolFreePool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          lVar10 = (longlong)TStack_98.CurrentBitIndex;
          if (((TStack_98.CurrentBitIndex == uVar9) &&
              (TStack_98.Array ==
               (TBitArray<FDefaultBitArrayAllocator> *)&GFastPoolFreedAllocations.field_0x10)) &&
             (pTVar6 == &GFastPoolFreedAllocations)) break;
          lVar2 = *(longlong *)pTVar6;
          lVar11 = lVar2 + lVar10 * 0x28;
          if ((*(int *)(lVar2 + 0x10 + lVar10 * 0x28) != 0) &&
             ((puVar12 == (undefined8 *)0x0 || (*(double *)(lVar11 + 0x18) < (double)puVar12[2]))))
          {
            puVar14 = (undefined8 *)(ulonglong)*(uint *)(lVar2 + lVar10 * 0x28);
            puVar12 = (undefined8 *)(lVar11 + 8);
          }
          TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
        }
        if ((puVar12 == (undefined8 *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("OldestPool",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                               ,0x118,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((int)puVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("OldestPoolAllocSize != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                               ,0x119,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(int *)(puVar12 + 1) < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar3 = *(void **)*puVar12;
        if ((*(int *)(puVar12 + 1) < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = *(int *)(puVar12 + 1) + -1;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove((void *)*puVar12,
                  (void *)((longlong)*puVar12 + (longlong)(*(int *)(puVar12 + 1) - iVar8) * 8),
                  (longlong)iVar8 << 3);
        }
        *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + -1;
        GFreePoolSizeBytes = GFreePoolSizeBytes - (int)puVar14;
        FMemory::Free(pvVar3);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&GFastPoolsCriticalSection);
    }
  }
  this->MemBlockSize = 0;
  this->ParticleDataNumBytes = 0;
  this->ParticleIndicesNumShorts = 0;
  this->ParticleData = (uchar *)0x0;
  this->ParticleIndices = (ushort *)0x0;
  return;
}

