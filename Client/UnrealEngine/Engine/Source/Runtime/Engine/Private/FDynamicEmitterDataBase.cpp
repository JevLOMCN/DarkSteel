// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FDynamicEmitterDataBase @ 1480f2ec0

FDynamicEmitterDataBase * __thiscall
FDynamicEmitterDataBase::FDynamicEmitterDataBase
          (FDynamicEmitterDataBase *this,UParticleModuleRequired *param_1)

{
  this->bSelected = 0;
  this->_padding_ = (longlong)&___7FDynamicEmitterDataBase__6B_;
  (this->StatID).StatIdPtr = &TStatId::TStatId_NAME_None;
  this->EmitterIndex = -1;
  return this;
}

// ~FDynamicEmitterDataBase @ 1480f6580

void __thiscall FDynamicEmitterDataBase::~FDynamicEmitterDataBase(FDynamicEmitterDataBase *this)

{
  this->_padding_ = (longlong)&___7FDynamicEmitterDataBase__6B_;
  return;
}

// operator_new @ 1480f7630

void * __cdecl FDynamicEmitterDataBase::operator_new(ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  LARGE_INTEGER local_res10;
  
  if (GEnableFastPools != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&GFastPoolsCriticalSection);
    if (GFastPoolFreedAllocations._8_4_ != GFastPoolFreedAllocations._52_4_) {
      lVar5 = 0x154c5ea88;
      if (GFastPoolFreedAllocations._64_8_ != 0) {
        lVar5 = GFastPoolFreedAllocations._64_8_;
      }
      iVar3 = *(int *)(lVar5 + ((ulonglong)(GFastPoolFreedAllocations._72_4_ - 1) &
                               param_1 & 0xffffffff) * 4);
      while (iVar3 != -1) {
        lVar5 = GFastPoolFreedAllocations._0_8_ + (longlong)iVar3 * 0x28;
        if (*(int *)(GFastPoolFreedAllocations._0_8_ + (longlong)iVar3 * 0x28) == (int)param_1) {
          puVar6 = (undefined8 *)(lVar5 + 8);
          if (lVar5 == 0) {
            puVar6 = (undefined8 *)0x0;
          }
          if ((puVar6 != (undefined8 *)0x0) && (*(int *)(puVar6 + 1) != 0)) {
            if ((*(int *)(puVar6 + 1) < 1) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              pvVar4 = (void *)(*pcVar1)();
              return pvVar4;
            }
            pvVar4 = *(void **)*puVar6;
            if ((*(int *)(puVar6 + 1) < 1) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              pvVar4 = (void *)(*pcVar1)();
              return pvVar4;
            }
            iVar3 = *(int *)(puVar6 + 1) + -1;
            if (1 < iVar3) {
              iVar3 = 1;
            }
            if (iVar3 != 0) {
              memmove((void *)*puVar6,
                      (void *)((longlong)*puVar6 + (longlong)(*(int *)(puVar6 + 1) - iVar3) * 8),
                      (longlong)iVar3 << 3);
            }
            *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + -1;
            QueryPerformanceCounter(&local_res10);
            puVar6[2] = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                        __real_4170000000000000;
            GFreePoolSizeBytes = GFreePoolSizeBytes - (int)param_1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&GFastPoolsCriticalSection);
            return pvVar4;
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x20);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&GFastPoolsCriticalSection);
  }
  pvVar4 = FMemory::Malloc(param_1,0);
  return pvVar4;
}

// operator_delete @ 1480f7810

void __cdecl FDynamicEmitterDataBase::operator_delete(void *param_1,ulong64 param_2)

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
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res18 [2];
  int local_res20 [2];
  void *local_d8;
  int local_d0;
  int local_cc;
  int *local_c8;
  TMap<int,FFastPoolFreePool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastPoolFreePool,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined8 local_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TMap<int,FFastPoolFreePool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastPoolFreePool,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  local_d8 = param_1;
  if (GEnableFastPools == 0) {
    FMemory::Free(param_1);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GFastPoolsCriticalSection);
  iVar13 = (int)param_2;
  local_res18[0] = iVar13;
  if (GFastPoolFreedAllocations._8_4_ != GFastPoolFreedAllocations._52_4_) {
    lVar9 = 0x154c5ea88;
    if (GFastPoolFreedAllocations._64_8_ != 0) {
      lVar9 = GFastPoolFreedAllocations._64_8_;
    }
    iVar8 = *(int *)(lVar9 + ((ulonglong)(GFastPoolFreedAllocations._72_4_ - 1) &
                             param_2 & 0xffffffff) * 4);
    while (iVar8 != -1) {
      lVar9 = GFastPoolFreedAllocations._0_8_ + (longlong)iVar8 * 0x28;
      if (*(int *)(GFastPoolFreedAllocations._0_8_ + (longlong)iVar8 * 0x28) == iVar13) {
        if (lVar9 != 0) goto LAB_1480f78f7;
        break;
      }
      iVar8 = *(int *)(lVar9 + 0x20);
    }
  }
  local_c8 = local_res18;
  TSet<TTuple<int,FFastPoolFreePool>,TDefaultMapHashableKeyFuncs<int,FFastPoolFreePool,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_&&>_>
            ((TSet<TTuple<int,FFastPoolFreePool>,TDefaultMapHashableKeyFuncs<int,FFastPoolFreePool,0>,FDefaultSetAllocator>
              *)&GFastPoolFreedAllocations,(uint)local_res20,
             (TKeyInitializer<int_&&> *)(param_2 & 0xffffffff),(bool *)&local_c8);
  lVar9 = GFastPoolFreedAllocations._0_8_ + (longlong)local_res20[0] * 0x28;
LAB_1480f78f7:
  if (((*(void ***)(lVar9 + 8) <= &local_d8) &&
      (&local_d8 < *(void ***)(lVar9 + 8) + *(int *)(lVar9 + 0x14))) &&
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
  iVar8 = *(int *)(lVar9 + 0x10);
  if (iVar8 == *(int *)(lVar9 + 0x14)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar9 + 8),(int *)(lVar9 + 0x14));
  }
  *(int *)(lVar9 + 0x10) = iVar8 + 1;
  *(void **)(((ForAnyElementType *)(lVar9 + 8))->Data + (longlong)iVar8 * 8) = local_d8;
  GFreePoolSizeBytes = GFreePoolSizeBytes + iVar13;
  if (GMaxFreePoolSizeBytes < GFreePoolSizeBytes) {
    puVar11 = (undefined8 *)0x0;
    iStack_b8 = 0;
    local_a0 = 0;
    iVar13 = 0;
    uStack_b4 = 1;
    uVar12 = GFastPoolFreedAllocations._40_4_;
    uStack_a4 = 0;
    if (uVar12 != 0) {
      puVar15 = (uint *)&GFastPoolFreedAllocations.field_0x10;
      if (GFastPoolFreedAllocations._32_8_ != 0) {
        puVar15 = (uint *)GFastPoolFreedAllocations._32_8_;
      }
      uVar16 = *puVar15;
      while (uVar16 == 0) {
        lVar9 = (longlong)iStack_b8;
        local_a0 = local_a0 + 0x20;
        iStack_b8 = iStack_b8 + 1;
        uStack_a4 = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_b8)
        goto LAB_1480f7a5f;
        uVar16 = puVar15[lVar9 + 1];
      }
      uStack_b4 = -uVar16 & uVar16;
      uVar1 = (ulonglong)uStack_b4 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_d0 = (int)lVar9;
      uStack_a4 = local_a0 + -1 + local_d0;
      if ((int)uVar12 < (int)uStack_a4) {
        uStack_a4 = uVar12;
      }
    }
LAB_1480f7a5f:
    bVar5 = GFastPoolFreedAllocations._40_1_;
    uStack_9c = local_44;
    iStack_98 = GFastPoolFreedAllocations._8_4_ - GFastPoolFreedAllocations._52_4_;
    local_c0 = &GFastPoolFreedAllocations;
    uVar16 = uVar12 & 0xffffffe0;
    uStack_a8 = 0xffffffff;
    TStack_88._padding_ = CONCAT44(uStack_b4,iStack_b8);
    local_b0 = 0x154c5ea60;
    TStack_88.CurrentBitIndex = uStack_a4;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    local_90 = &GFastPoolFreedAllocations;
    iVar8 = (int)uVar12 >> 5;
    TStack_88._28_4_ = local_44;
    TStack_88.BaseBitIndex = local_a0;
    uStack_68 = CONCAT44(uStack_94,iStack_98);
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)&GFastPoolFreedAllocations.field_0x10;
    uVar14 = uVar12;
    if ((int)uVar12 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar14 = GFastPoolFreedAllocations._40_4_;
    }
    if (uVar12 != uVar14) {
      lVar9 = 0x154c5ea60;
      if (GFastPoolFreedAllocations._32_8_ != 0) {
        lVar9 = GFastPoolFreedAllocations._32_8_;
      }
      uVar12 = -1 << (bVar5 & 0x1f) & *(uint *)(lVar9 + (longlong)iVar8 * 4);
      while (uVar12 == 0) {
        lVar10 = (longlong)iVar8;
        uVar16 = uVar16 + 0x20;
        iVar8 = iVar8 + 1;
        uVar12 = uVar14;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
        goto LAB_1480f7b80;
        uVar12 = *(uint *)(lVar9 + 4 + lVar10 * 4);
      }
      uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_cc = (int)lVar9;
      uVar12 = local_cc + -1 + uVar16;
      if ((int)uVar14 < (int)uVar12) {
        uVar12 = uVar14;
      }
    }
LAB_1480f7b80:
    while( true ) {
      pTVar6 = local_90;
      if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,FFastPoolFreePool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      lVar9 = (longlong)TStack_88.CurrentBitIndex;
      if (((TStack_88.CurrentBitIndex == uVar12) &&
          (TStack_88.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&GFastPoolFreedAllocations.field_0x10)) &&
         (pTVar6 == &GFastPoolFreedAllocations)) break;
      lVar2 = *(longlong *)pTVar6;
      lVar10 = lVar2 + lVar9 * 0x28;
      if ((*(int *)(lVar2 + 0x10 + lVar9 * 0x28) != 0) &&
         ((puVar11 == (undefined8 *)0x0 || (*(double *)(lVar10 + 0x18) < (double)puVar11[2])))) {
        iVar13 = *(int *)(lVar2 + lVar9 * 0x28);
        puVar11 = (undefined8 *)(lVar10 + 8);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
    if ((puVar11 == (undefined8 *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("OldestPool",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                           ,0x118,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((iVar13 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("OldestPoolAllocSize != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                           ,0x119,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(int *)(puVar11 + 1) < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pvVar3 = *(void **)*puVar11;
    if ((*(int *)(puVar11 + 1) < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = *(int *)(puVar11 + 1) + -1;
    if (1 < iVar8) {
      iVar8 = 1;
    }
    if (iVar8 != 0) {
      memmove((void *)*puVar11,
              (void *)((longlong)*puVar11 + (longlong)(*(int *)(puVar11 + 1) - iVar8) * 8),
              (longlong)iVar8 << 3);
    }
    *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + -1;
    GFreePoolSizeBytes = GFreePoolSizeBytes - iVar13;
    FMemory::Free(pvVar3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GFastPoolsCriticalSection);
  return;
}

// GatherSimpleLights @ 14810d3a0

void __thiscall
FDynamicEmitterDataBase::GatherSimpleLights
          (FDynamicEmitterDataBase *this,FParticleSystemSceneProxy *param_1,
          FSceneViewFamily *param_2,FSimpleLightArray *param_3)

{
  return;
}

// GetDynamicMeshElementsEmitter @ 148114e20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicEmitterDataBase::GetDynamicMeshElementsEmitter
          (FDynamicEmitterDataBase *this,FParticleSystemSceneProxy *param_1,FSceneView *param_2,
          FSceneViewFamily *param_3,int param_4,FMeshElementCollector *param_5)

{
  return;
}

// GetMacroUVOverride @ 1481162a0

FMacroUVOverride * __thiscall
FDynamicEmitterDataBase::GetMacroUVOverride(FDynamicEmitterDataBase *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x30))();
  return (FMacroUVOverride *)(lVar1 + 0x48);
}

// ReleaseRenderThreadResources @ 1481290b0

void __thiscall
FDynamicEmitterDataBase::ReleaseRenderThreadResources
          (FDynamicEmitterDataBase *this,FParticleSystemSceneProxy *param_1)

{
  return;
}

// UpdateRenderThreadResourcesEmitter @ 148142070

void __thiscall
FDynamicEmitterDataBase::UpdateRenderThreadResourcesEmitter
          (FDynamicEmitterDataBase *this,FParticleSystemSceneProxy *param_1)

{
  return;
}

