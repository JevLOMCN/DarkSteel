// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 18

// AddTagSceneInvalidationCallback @ 144e7bc00

void __thiscall
FMaterialCacheTagProvider::AddTagSceneInvalidationCallback
          (FMaterialCacheTagProvider *this,FGuid *param_1,_func___cdecl_void_void_ptr *param_2,
          void *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TArray<FMaterialCacheTagProvider::FTagSceneListener,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint local_res8 [2];
  void *local_res20;
  undefined8 local_c8;
  undefined8 uStack_c0;
  TSet<TTuple<void_*,FMaterialCacheTagProvider::FTagBatonEntry>,TDefaultMapHashableKeyFuncs<void_*,FMaterialCacheTagProvider::FTagBatonEntry,1>,FDefaultSetAllocator>
  *local_b8;
  void *pvStack_b0;
  int local_a8;
  int iStack_a4;
  undefined1 local_a0 [8];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  FGuid *local_88;
  uint *local_80;
  void **local_78;
  uint *local_70;
  TBaseKeyIterator<0> local_68;
  uint local_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  
  lpCriticalSection = &this->Mutex;
  local_res20 = param_3;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TSet<TTuple<void_*,FMaterialCacheTagProvider::FTagBatonEntry>,TDefaultMapHashableKeyFuncs<void_*,FMaterialCacheTagProvider::FTagBatonEntry,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_68,
             (TSet<TTuple<void_*,FMaterialCacheTagProvider::FTagBatonEntry>,TDefaultMapHashableKeyFuncs<void_*,FMaterialCacheTagProvider::FTagBatonEntry,1>,FDefaultSetAllocator>
              *)&this->BatonCallbackIndices,local_res20);
  local_a8 = local_68.Index;
  iStack_a4 = local_68.NextIndex;
  local_b8 = local_68.Set;
  pvStack_b0 = local_68.Key;
  if (local_68.Index != -1) {
    lVar3 = *(longlong *)&(local_68.Set)->Elements;
    do {
      lVar7 = (longlong)local_68.Index;
      local_a8 = local_68.Index;
      iStack_a4 = local_68.NextIndex;
      if (((param_1->D == *(uint *)(lVar3 + 0x18 + lVar7 * 0x28) &&
           param_1->C == *(uint *)(lVar3 + 0x14 + lVar7 * 0x28)) &&
          param_1->B == *(uint *)(lVar3 + 0x10 + lVar7 * 0x28)) &&
          param_1->A == *(uint *)(lVar3 + 0xc + lVar7 * 0x28)) goto LAB_144e7bf07;
      local_a8 = local_68.NextIndex;
      if (local_68.NextIndex == -1) break;
      local_68.Index = local_68.NextIndex;
      do {
        local_68.NextIndex =
             *(int *)(*(longlong *)&(local_68.Set)->Elements + 0x20 +
                     (longlong)local_68.Index * 0x28);
        if (*(void **)(*(longlong *)&(local_68.Set)->Elements + (longlong)local_68.Index * 0x28) ==
            local_68.Key) break;
        local_68.Index = local_68.NextIndex;
      } while (local_68.NextIndex != -1);
      local_a8 = local_68.Index;
      iStack_a4 = local_68.NextIndex;
    } while (local_68.Index != -1);
  }
  uStack_c0 = local_res20;
  iVar9 = (this->FreeTagSceneInvalidationCallbackIndices).ArrayNum;
  local_c8 = param_2;
  if (iVar9 == 0) {
    local_res8[0] = (this->TagSceneInvalidationListeners).ArrayNum;
    pTVar2 = &this->TagSceneInvalidationListeners;
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar8 <= (FScriptContainerElement *)&local_c8) &&
        ((FScriptContainerElement *)&local_c8 <
         pFVar8 + (longlong)(this->TagSceneInvalidationListeners).ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = (this->TagSceneInvalidationListeners).ArrayNum;
    piVar1 = &(this->TagSceneInvalidationListeners).ArrayMax;
    if (uVar6 == *piVar1) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->TagSceneInvalidationListeners).ArrayNum = uVar6 + 1;
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    uVar11 = (undefined4)local_c8;
    uVar12 = local_c8._4_4_;
    uVar13 = (undefined4)uStack_c0;
    uVar14 = uStack_c0._4_4_;
  }
  else {
    if ((iVar9 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = (this->FreeTagSceneInvalidationCallbackIndices).ArrayNum;
    uVar6 = *(uint *)((this->FreeTagSceneInvalidationCallbackIndices).AllocatorInstance.Data +
                     (longlong)iVar9 * 4 + -4);
    iVar9 = iVar9 + -1;
    (this->FreeTagSceneInvalidationCallbackIndices).ArrayNum = iVar9;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->FreeTagSceneInvalidationCallbackIndices).AllocatorInstance,iVar9,
               &(this->FreeTagSceneInvalidationCallbackIndices).ArrayMax);
    local_98 = (undefined4)local_c8;
    uStack_94 = local_c8._4_4_;
    uStack_90 = (undefined4)uStack_c0;
    uStack_8c = uStack_c0._4_4_;
    uVar10 = 0;
    if ((int)uVar6 < (this->TagSceneInvalidationListeners).ArrayNum) {
      uVar10 = ~uVar6 >> 0x1f;
    }
    local_res8[0] = uVar6;
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar8 = (this->TagSceneInvalidationListeners).AllocatorInstance.Data;
    uVar11 = local_98;
    uVar12 = uStack_94;
    uVar13 = uStack_90;
    uVar14 = uStack_8c;
  }
  pFVar8 = pFVar8 + (longlong)(int)uVar6 * 0x10;
  *(undefined4 *)pFVar8 = uVar11;
  *(undefined4 *)(pFVar8 + 4) = uVar12;
  *(undefined4 *)(pFVar8 + 8) = uVar13;
  *(undefined4 *)(pFVar8 + 0xc) = uVar14;
  local_80 = local_res8;
  local_88 = param_1;
  TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FGuid_const_&,int_const_&>_>
            ((TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>
              *)&this->TagCallbackIndices,(TPairInitializer<FGuid_const_&,int_const_&> *)local_a0,
             (bool *)&local_88);
  local_4c._0_4_ = param_1->A;
  local_4c._4_4_ = param_1->B;
  uStack_44._0_4_ = param_1->C;
  uStack_44._4_4_ = param_1->D;
  local_50 = local_res8[0];
  local_78 = &local_res20;
  local_70 = &local_50;
  TSet<TTuple<void_*,FMaterialCacheTagProvider::FTagBatonEntry>,TDefaultMapHashableKeyFuncs<void_*,FMaterialCacheTagProvider::FTagBatonEntry,1>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<void_*_const_&,FMaterialCacheTagProvider::FTagBatonEntry_&&>_>
            ((TSet<TTuple<void_*,FMaterialCacheTagProvider::FTagBatonEntry>,TDefaultMapHashableKeyFuncs<void_*,FMaterialCacheTagProvider::FTagBatonEntry,1>,FDefaultSetAllocator>
              *)&this->BatonCallbackIndices,
             (TPairInitializer<void_*_const_&,FMaterialCacheTagProvider::FTagBatonEntry_&&> *)
             (local_a0 + 4),(bool *)&local_78);
LAB_144e7bf07:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// AllocatePrimitiveTagOffset @ 144e7d730

uint __thiscall
FMaterialCacheTagProvider::AllocatePrimitiveTagOffset(FMaterialCacheTagProvider *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  lpCriticalSection = &this->Mutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->FreeTagIndices).ArrayNum;
  if (iVar1 == 0) {
    uVar4 = this->TagOffsetAllocator;
    this->TagOffsetAllocator = uVar4 + 1;
  }
  else {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    iVar1 = (this->FreeTagIndices).ArrayNum;
    iVar5 = iVar1 + -1;
    uVar4 = *(uint *)((this->FreeTagIndices).AllocatorInstance.Data + (longlong)iVar1 * 4 + -4);
    (this->FreeTagIndices).ArrayNum = iVar5;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->FreeTagIndices).AllocatorInstance,iVar5,&(this->FreeTagIndices).ArrayMax)
    ;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return uVar4;
}

// CallPendingCallbacks @ 144e7d820

void __thiscall FMaterialCacheTagProvider::CallPendingCallbacks(FMaterialCacheTagProvider *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  void *pvVar6;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *this_00;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  byte bVar11;
  ForElementType<unsigned_int> FVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  ForElementType<FMaterialCacheTagProvider::FTagSceneListener> FVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  FTagSceneListener *pFVar18;
  uint uVar19;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  ForElementType<FMaterialCacheTagProvider::FTagSceneListener> local_108;
  undefined8 local_100;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_f8;
  ForElementType<unsigned_int> local_f0;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  LPCRITICAL_SECTION local_b0;
  TBaseKeyIterator<0> local_a8;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  TBaseKeyIterator<0> local_60;
  
  lpCriticalSection = (LPCRITICAL_SECTION)&this->Mutex;
  local_b0 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  iVar15 = *(int *)&(this->PendingTagSceneInvalidations).Elements.field_0x8 -
           *(int *)&(this->PendingTagSceneInvalidations).Elements.field_0x34;
  if (iVar15 != 0) {
    local_f8 = &this->PendingTagSceneInvalidations;
    local_f0 = (ForElementType<unsigned_int>)
               &(this->PendingTagSceneInvalidations).Elements.field_0x10;
    FVar13.Data = (FTagSceneListener *)0x0;
    iVar3 = *(int *)&(this->PendingTagSceneInvalidations).Elements.field_0x28;
    iVar9 = 0;
    local_c8 = 0;
    iStack_e0 = 0;
    local_108.Data = (FTagSceneListener *)0x0;
    uStack_dc = 1;
    local_100 = 0;
    iStack_cc = 0;
    if (iVar3 != 0) {
      puVar14 = *(uint **)&(this->PendingTagSceneInvalidations).Elements.field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)&(this->PendingTagSceneInvalidations).Elements.field_0x10;
      }
      uVar16 = *puVar14;
      while (uVar16 == 0) {
        lVar10 = (longlong)iStack_e0;
        local_c8 = local_c8 + 0x20;
        iStack_e0 = iStack_e0 + 1;
        iStack_cc = iVar3;
        if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iStack_e0) goto LAB_144e7d948;
        uVar16 = puVar14[lVar10 + 1];
      }
      uStack_dc = -uVar16 & uVar16;
      uVar2 = (ulonglong)uStack_dc * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res20 = (int)lVar10;
      iStack_cc = local_c8 + -1 + local_res20;
      if (iVar3 < iStack_cc) {
        iStack_cc = iVar3;
      }
    }
LAB_144e7d948:
    local_d8 = &(this->PendingTagSceneInvalidations).Elements.field_0x10;
    local_e8 = &this->PendingTagSceneInvalidations;
    local_res18 = *(uint *)&(this->PendingTagSceneInvalidations).Elements.field_0x28;
    uStack_d0 = 0xffffffff;
    TStack_88._padding_ = CONCAT44(uStack_dc,iStack_e0);
    uVar16 = local_res18 & 0xffffffe0;
    TStack_88.CurrentBitIndex = iStack_cc;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    TStack_88._28_4_ = iStack_cc;
    TStack_88.BaseBitIndex = local_c8;
    uStack_68 = CONCAT44(uStack_bc,iVar15);
    iVar17 = (int)local_res18 >> 5;
    bVar11 = (byte)local_res18;
    iStack_c4 = iStack_cc;
    iStack_c0 = iVar15;
    local_90 = local_e8;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_d8;
    if ((((int)local_res18 < 0) || (iVar3 < (int)local_res18)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = local_f8;
    uVar4 = *(int *)((longlong)local_f0 + 0x18);
    if (local_res18 != uVar4) {
      FVar12 = *(ForElementType<unsigned_int> *)((longlong)local_f0 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_f0 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_f0;
      }
      uVar19 = -1 << (bVar11 & 0x1f) & *(uint *)((longlong)FVar12 + (longlong)iVar17 * 4);
      while (uVar19 == 0) {
        lVar10 = (longlong)iVar17;
        uVar16 = uVar16 + 0x20;
        iVar17 = iVar17 + 1;
        local_res18 = uVar4;
        if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar17)
        goto LAB_144e7da74;
        uVar19 = *(uint *)((undefined1 *)((longlong)FVar12 + 4) + lVar10 * 4);
      }
      uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_b8 = (int)lVar10;
      local_res18 = local_b8 + -1 + uVar16;
      if ((int)uVar4 < (int)local_res18) {
        local_res18 = uVar4;
      }
    }
LAB_144e7da74:
    uVar16 = local_res18;
    FVar12 = local_f0;
    while( true ) {
      pTVar7 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        FVar12 = (ForElementType<unsigned_int>)
                 &(this->PendingTagSceneInvalidations).Elements.field_0x10;
      }
      if (((TStack_88.CurrentBitIndex == uVar16) &&
          ((ForElementType<unsigned_int>)TStack_88.Array == FVar12)) && (pTVar7 == this_00)) break;
      TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>::
      TBaseKeyIterator<0>::TBaseKeyIterator<0>
                (&local_60,
                 (TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>
                  *)&this->TagCallbackIndices,
                 (FGuid *)(*(longlong *)&pTVar7->Elements +
                          (longlong)TStack_88.CurrentBitIndex * 0x18));
      local_a8._16_8_ = ZEXT48((uint)local_60.Index);
      local_a8.Set = local_60.Set;
      uVar4 = local_60.Index;
      while (uVar4 != 0xffffffff) {
        uVar4 = *(uint *)((longlong)(int)uVar4 * 0x1c + 0x10 +
                         *(longlong *)&(local_a8.Set)->Elements);
        uVar19 = 0;
        if ((int)uVar4 < (this->TagSceneInvalidationListeners).ArrayNum) {
          uVar19 = ~uVar4 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar18 = (FTagSceneListener *)
                  ((this->TagSceneInvalidationListeners).AllocatorInstance.Data +
                  (longlong)(int)uVar4 * 0x10);
        if (((FVar13.Data <= pFVar18) && (pFVar18 < FVar13.Data + local_100._4_4_)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (iVar9 == local_100._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCacheTagProvider::FTagSceneListener>_>
                            (0x810,&local_108,(int *)((longlong)&local_100 + 4));
          FVar13.Data = local_108.Data;
        }
        pvVar6 = pFVar18->Baton;
        lVar10 = (longlong)iVar9;
        iVar9 = iVar9 + 1;
        local_100 = CONCAT44(local_100._4_4_,iVar9);
        FVar13.Data[lVar10].Delegate = pFVar18->Delegate;
        FVar13.Data[lVar10].Baton = pvVar6;
        TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>::
        TBaseKeyIterator<0>::operator++(&local_a8);
        uVar4 = local_a8.Index;
      }
      TStack_88._padding_._4_4_ = (uint)((ulonglong)TStack_88._padding_ >> 0x20);
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
      FVar12 = (ForElementType<unsigned_int>)
               &(this->PendingTagSceneInvalidations).Elements.field_0x10;
    }
    bVar8 = 1 < this_00->HashSize;
    if (!bVar8) {
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::UnhashElements(this_00);
    }
    lpCriticalSection = local_b0;
    puVar1 = &(this_00->Elements).field_0xc;
    *(undefined4 *)&(this_00->Elements).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,(ForAnyElementType *)local_f8,0,(int *)puVar1);
    }
    *(undefined4 *)&(local_f8->Elements).field_0x28 = 0;
    *(undefined4 *)&(local_f8->Elements).field_0x34 = 0;
    *(undefined4 *)&(local_f8->Elements).field_0x30 = 0xffffffff;
    iVar15 = *(int *)&(local_f8->Elements).field_0x2c;
    if ((iVar15 < 0) || (0x80 < iVar15)) {
      *(undefined4 *)&(local_f8->Elements).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(local_f8->Elements).field_0x10,0);
    }
    if (bVar8) {
      local_f8->HashSize = 1;
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Rehash(local_f8);
    }
    for (pFVar18 = FVar13.Data; pFVar18 != FVar13.Data + iVar9; pFVar18 = pFVar18 + 1) {
      (*pFVar18->Delegate)(pFVar18->Baton);
    }
    if (FVar13.Data != (FTagSceneListener *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(FVar13.Data);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144e7dd4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// CreateDeviceBuffersOrResize @ 144e825d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMaterialCacheTagProvider::CreateDeviceBuffersOrResize
          (FMaterialCacheTagProvider *this,FMaterialCacheTagBucket *param_1)

{
  TRefCountPtr<FRHIBuffer> *pTVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  int iVar3;
  EBufferUsageFlags EVar4;
  FRHIBuffer *pFVar5;
  FRHIShaderResourceView *this_00;
  code *pcVar6;
  bool bVar7;
  byte bVar8;
  TRefCountPtr<FRHIBuffer> TVar9;
  uint uVar10;
  FLLMScope local_res10 [2];
  undefined1 local_res18 [16];
  TRefCountPtr<FRHIShaderResourceView> local_88;
  FMemScope local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  ERHIAccess local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  
  iVar3 = (param_1->TagEntries).ArrayNum;
  pTVar1 = &param_1->EntryBuffer;
  if ((pTVar1->Reference != (FRHIBuffer *)0x0) &&
     ((ulonglong)(pTVar1->Reference->Desc).Size < (ulonglong)((longlong)iVar3 << 3))) {
    return;
  }
  uVar10 = (uint)(longlong)((float)iVar3 * __real_3fc00000);
  if (uVar10 < 0x200) {
    uVar10 = 0x200;
  }
  bVar7 = IsInRenderingThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_68 = uVar10 * 8;
  local_64 = 8;
  local_5c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_50 = 0;
  local_44 = 0;
  local_58 = L"MaterialCache.EntryBuffer";
  local_3c = 0;
  local_34 = 0;
  local_60 = 0x10108;
  local_48 = RHIGetDefaultResourceState(StructuredBuffer|ShaderResource|UnorderedAccess,false);
  TVar9 = FRHICommandListBase::CreateBuffer
                    ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                     (FRHIBufferCreateDesc *)(local_res18 + 8));
  if ((FRHIBuffer *)pTVar1 != TVar9.Reference) {
    pFVar5 = pTVar1->Reference;
    pTVar1->Reference = (FRHIBuffer *)(TVar9.Reference)->_padding_;
    (TVar9.Reference)->_padding_ = 0;
    if (pFVar5 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5);
    }
  }
  if ((FRHIResource *)local_res18._8_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_res18._8_8_);
  }
  bVar7 = IsInRenderingThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar5 = pTVar1->Reference;
  local_78 = 0;
  uStack_70 = 0;
  if ((pFVar5 == (FRHIBuffer *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xb15,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  EVar4 = (pFVar5->Desc).Usage;
  if ((EVar4 >> 0x14 & 1) != 0) {
    if (((((pFVar5->Desc).Size != 0) || ((pFVar5->Desc).Stride != 0)) || (EVar4 != NullResource)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Size == 0 && Stride == 0 && Usage == EBufferUsageFlags::NullResource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x54f,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!TargetBuffer->GetDesc().IsNull()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xb16,
                       L"Null buffer resources are placeholders for the streaming system. They do not contain a valid descriptor for this function to use. Call SetType() instead."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  EVar4 = (pFVar5->Desc).Usage;
  if ((EVar4 & ByteAddressBuffer) == None) {
    if ((EVar4 >> 0x10 & 1) == 0) {
      bVar8 = (byte)(EVar4 >> 0xc) & 2 | 1;
    }
    else {
      bVar8 = 2;
    }
  }
  else {
    bVar8 = 4;
  }
  pFVar5 = pTVar1->Reference;
  local_78._0_3_ = CONCAT12(bVar8,(undefined2)local_78);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name977,L"RHIMisc/CreateShaderResourceView");
    _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res10,
             `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name977,false,None,Default,true);
  FMemScope::FMemScope
            (&local_80,
             &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name977,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_88,0x154be5ed0,pFVar5,&local_78);
  FMemScope::~FMemScope(&local_80);
  FLLMScope::~FLLMScope(local_res10);
  pTVar2 = &param_1->EntryBufferSRV;
  if (pTVar2 != &local_88) {
    this_00 = pTVar2->Reference;
    pTVar2->Reference = local_88.Reference;
    local_88.Reference = (FRHIShaderResourceView *)0x0;
    if (this_00 == (FRHIShaderResourceView *)0x0) goto LAB_144e828d2;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if (local_88.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_88.Reference);
  }
LAB_144e828d2:
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
            (&this->PendingTagSceneInvalidations,(FGuid *)local_res18,(bool *)param_1);
  return;
}

// CreateProducer @ 144e82d00

IVirtualTexture * __thiscall
FMaterialCacheTagProvider::CreateProducer
          (FMaterialCacheTagProvider *this,FSceneInterface *param_1,FPrimitiveComponentId param_2,
          FMaterialCacheTagLayout *param_3,FVTProducerDescription *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  undefined8 uVar2;
  IVirtualTexture IVar3;
  IVirtualTexture *pIVar4;
  IVirtualTexture IVar5;
  ForElementType<FMaterialCacheLayer> FVar6;
  
  lpCriticalSection = &this->Mutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  IVar3 = (IVirtualTexture)(**(code **)(param_1->_padding_ + 0x420))(param_1);
  pIVar4 = (IVirtualTexture *)0x0;
  if (IVar3 != (IVirtualTexture)0x0) {
    pIVar4 = ::operator_new(0x2b8);
    if (pIVar4 == (IVirtualTexture *)0x0) {
      pIVar4 = (IVirtualTexture *)0x0;
    }
    else {
      pIVar4[2] = IVar3;
      *pIVar4 = (IVirtualTexture)&___7FMaterialCacheVirtualProducer__6B_;
      *(uint *)(pIVar4 + 3) = param_2.PrimIDValue;
      pIVar4[1] = (IVirtualTexture)&___7FMaterialCacheVirtualFinalizer__6B_;
      IVar5 = *(IVirtualTexture *)&(param_3->Guid).C;
      pIVar4[4] = *(IVirtualTexture *)&param_3->Guid;
      pIVar4[5] = IVar5;
      pIVar4[0x1e] = (IVirtualTexture)0x0;
      FVar6 = (param_3->Layers).AllocatorInstance.SecondaryData;
      iVar1 = (param_3->Layers).ArrayNum;
      if (FVar6 == (ForElementType<FMaterialCacheLayer>)0x0) {
        FVar6 = (ForElementType<FMaterialCacheLayer>)&param_3->Layers;
      }
      *(int *)(pIVar4 + 0x1f) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)&pIVar4[0x1f].field_0x4 = 8;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialCacheLayer>_>
                  (0x18,8,iVar1,0,(ForElementType<FMaterialCacheLayer> *)(pIVar4 + 6),iVar1,
                   (int *)&pIVar4[0x1f].field_0x4);
        IVar5 = pIVar4[0x1e];
        if (pIVar4[0x1e] == (IVirtualTexture)0x0) {
          IVar5 = (IVirtualTexture)(pIVar4 + 6);
        }
        ConstructItems<FMaterialCacheLayer,FMaterialCacheLayer,int>
                  ((void *)IVar5,(FMaterialCacheLayer *)FVar6,iVar1);
      }
      IVar5 = *(IVirtualTexture *)&param_4->FullNameHash;
      *(FName *)(pIVar4 + 0x20) = param_4->Name;
      pIVar4[0x21] = IVar5;
      IVar5 = *(IVirtualTexture *)&param_4->BlockWidthInTiles;
      pIVar4[0x22] = *(IVirtualTexture *)&param_4->TileSize;
      pIVar4[0x23] = IVar5;
      IVar5 = *(IVirtualTexture *)&param_4->Dimensions;
      pIVar4[0x24] = *(IVirtualTexture *)&param_4->DepthInTiles;
      pIVar4[0x25] = IVar5;
      IVar5 = *(IVirtualTexture *)((longlong)&param_4->LayerFallbackColor[0].field0_0x0 + 4);
      pIVar4[0x26] = *(IVirtualTexture *)(param_4->LayerFormat + 5);
      pIVar4[0x27] = IVar5;
      IVar5 = *(IVirtualTexture *)((longlong)&param_4->LayerFallbackColor[1].field0_0x0 + 4);
      pIVar4[0x28] = *(IVirtualTexture *)
                      ((longlong)&param_4->LayerFallbackColor[0].field0_0x0 + 0xc);
      pIVar4[0x29] = IVar5;
      IVar5 = *(IVirtualTexture *)((longlong)&param_4->LayerFallbackColor[2].field0_0x0 + 4);
      pIVar4[0x2a] = *(IVirtualTexture *)
                      ((longlong)&param_4->LayerFallbackColor[1].field0_0x0 + 0xc);
      pIVar4[0x2b] = IVar5;
      IVar5 = *(IVirtualTexture *)((longlong)&param_4->LayerFallbackColor[3].field0_0x0 + 4);
      pIVar4[0x2c] = *(IVirtualTexture *)
                      ((longlong)&param_4->LayerFallbackColor[2].field0_0x0 + 0xc);
      pIVar4[0x2d] = IVar5;
      IVar5 = *(IVirtualTexture *)((longlong)&param_4->LayerFallbackColor[4].field0_0x0 + 4);
      pIVar4[0x2e] = *(IVirtualTexture *)
                      ((longlong)&param_4->LayerFallbackColor[3].field0_0x0 + 0xc);
      pIVar4[0x2f] = IVar5;
      IVar5 = *(IVirtualTexture *)((longlong)&param_4->LayerFallbackColor[5].field0_0x0 + 4);
      pIVar4[0x30] = *(IVirtualTexture *)
                      ((longlong)&param_4->LayerFallbackColor[4].field0_0x0 + 0xc);
      pIVar4[0x31] = IVar5;
      IVar5 = *(IVirtualTexture *)((longlong)&param_4->LayerFallbackColor[6].field0_0x0 + 4);
      pIVar4[0x32] = *(IVirtualTexture *)
                      ((longlong)&param_4->LayerFallbackColor[5].field0_0x0 + 0xc);
      pIVar4[0x33] = IVar5;
      IVar5 = *(IVirtualTexture *)((longlong)&param_4->LayerFallbackColor[7].field0_0x0 + 4);
      pIVar4[0x34] = *(IVirtualTexture *)
                      ((longlong)&param_4->LayerFallbackColor[6].field0_0x0 + 0xc);
      pIVar4[0x35] = IVar5;
      IVar5 = *(IVirtualTexture *)(param_4->bIsLayerSRGB + 4);
      pIVar4[0x36] = *(IVirtualTexture *)
                      ((longlong)&param_4->LayerFallbackColor[7].field0_0x0 + 0xc);
      pIVar4[0x37] = IVar5;
      pIVar4[0x38] = *(IVirtualTexture *)(param_4->PhysicalGroupIndex + 3);
      pIVar4[0x39].field_0x1 = pIVar4[0x25].field_0x3;
      pIVar4[0x3a] = (IVirtualTexture)0x0;
      pIVar4[0x3b] = (IVirtualTexture)0x0;
      *(undefined1 *)(pIVar4 + 0x39) = 2;
      pIVar4[0x39].field_0x2 = 2;
      pIVar4[0x3c] = IVar3;
      *(uint *)(pIVar4 + 0x3d) = param_2.PrimIDValue;
      uVar2 = *(undefined8 *)&param_4->FullNameHash;
      *(FName *)&pIVar4[0x3d].field_0x4 = param_4->Name;
      *(undefined8 *)&pIVar4[0x3e].field_0x4 = uVar2;
      uVar2 = *(undefined8 *)&param_4->BlockWidthInTiles;
      *(undefined8 *)&pIVar4[0x3f].field_0x4 = *(undefined8 *)&param_4->TileSize;
      *(undefined8 *)&pIVar4[0x40].field_0x4 = uVar2;
      uVar2 = *(undefined8 *)&param_4->Dimensions;
      *(undefined8 *)&pIVar4[0x41].field_0x4 = *(undefined8 *)&param_4->DepthInTiles;
      *(undefined8 *)&pIVar4[0x42].field_0x4 = uVar2;
      uVar2 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[0].field0_0x0 + 4);
      *(undefined8 *)&pIVar4[0x43].field_0x4 = *(undefined8 *)(param_4->LayerFormat + 5);
      *(undefined8 *)&pIVar4[0x44].field_0x4 = uVar2;
      uVar2 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[1].field0_0x0 + 4);
      *(undefined8 *)&pIVar4[0x45].field_0x4 =
           *(undefined8 *)((longlong)&param_4->LayerFallbackColor[0].field0_0x0 + 0xc);
      *(undefined8 *)&pIVar4[0x46].field_0x4 = uVar2;
      uVar2 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[2].field0_0x0 + 4);
      *(undefined8 *)&pIVar4[0x47].field_0x4 =
           *(undefined8 *)((longlong)&param_4->LayerFallbackColor[1].field0_0x0 + 0xc);
      *(undefined8 *)&pIVar4[0x48].field_0x4 = uVar2;
      uVar2 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[3].field0_0x0 + 4);
      *(undefined8 *)&pIVar4[0x49].field_0x4 =
           *(undefined8 *)((longlong)&param_4->LayerFallbackColor[2].field0_0x0 + 0xc);
      *(undefined8 *)&pIVar4[0x4a].field_0x4 = uVar2;
      uVar2 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[4].field0_0x0 + 4);
      *(undefined8 *)&pIVar4[0x4b].field_0x4 =
           *(undefined8 *)((longlong)&param_4->LayerFallbackColor[3].field0_0x0 + 0xc);
      *(undefined8 *)&pIVar4[0x4c].field_0x4 = uVar2;
      uVar2 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[5].field0_0x0 + 4);
      *(undefined8 *)&pIVar4[0x4d].field_0x4 =
           *(undefined8 *)((longlong)&param_4->LayerFallbackColor[4].field0_0x0 + 0xc);
      *(undefined8 *)&pIVar4[0x4e].field_0x4 = uVar2;
      uVar2 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[6].field0_0x0 + 4);
      *(undefined8 *)&pIVar4[0x4f].field_0x4 =
           *(undefined8 *)((longlong)&param_4->LayerFallbackColor[5].field0_0x0 + 0xc);
      *(undefined8 *)&pIVar4[0x50].field_0x4 = uVar2;
      uVar2 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[7].field0_0x0 + 4);
      *(undefined8 *)&pIVar4[0x51].field_0x4 =
           *(undefined8 *)((longlong)&param_4->LayerFallbackColor[6].field0_0x0 + 0xc);
      *(undefined8 *)&pIVar4[0x52].field_0x4 = uVar2;
      uVar2 = *(undefined8 *)(param_4->bIsLayerSRGB + 4);
      *(undefined8 *)&pIVar4[0x53].field_0x4 =
           *(undefined8 *)((longlong)&param_4->LayerFallbackColor[7].field0_0x0 + 0xc);
      *(undefined8 *)&pIVar4[0x54].field_0x4 = uVar2;
      *(undefined8 *)&pIVar4[0x55].field_0x4 = *(undefined8 *)(param_4->PhysicalGroupIndex + 3);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pIVar4;
}

// Flush @ 144e8ddc0

void __thiscall
FMaterialCacheTagProvider::Flush
          (FMaterialCacheTagProvider *this,FSceneInterface *param_1,FPrimitiveComponentId param_2,
          FGuid *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  ulong64 uVar2;
  IRendererModule *pIVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_28;
  uint local_20;
  undefined8 local_1c;
  undefined8 uStack_14;
  
  lpCriticalSection = &this->Mutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_1c._0_4_ = param_3->A;
  local_1c._4_4_ = param_3->B;
  uStack_14._0_4_ = param_3->C;
  uStack_14._4_4_ = param_3->D;
  local_20 = param_2.PrimIDValue;
  uVar2 = CityHash64((char *)&local_1c,0x10);
  if (*(int *)&(this->VirtualTextures).field_0x8 != *(int *)&(this->VirtualTextures).field_0x34) {
    puVar4 = *(undefined1 **)&(this->VirtualTextures).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->VirtualTextures).field_0x38;
    }
    iVar6 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->VirtualTextures).field_0x48 - 1U &
                              (param_2.PrimIDValue * 0x40 + (param_2.PrimIDValue >> 2) +
                               (int)uVar2 + -0x61c88647 ^ param_2.PrimIDValue)) * 4);
    if (iVar6 != -1) {
      do {
        lVar1 = *(longlong *)&this->VirtualTextures + (longlong)iVar6 * 0x28;
        if ((*(uint *)(*(longlong *)&this->VirtualTextures + (longlong)iVar6 * 0x28) == local_20) &&
           (((uStack_14._4_4_ == *(int *)(lVar1 + 0x10) && (int)uStack_14 == *(int *)(lVar1 + 0xc))
            && local_1c._4_4_ == *(int *)(lVar1 + 8)) && (int)local_1c == *(int *)(lVar1 + 4))) {
          if (iVar6 != -1) {
            puVar5 = (undefined8 *)(lVar1 + 0x18);
            if (lVar1 == 0) {
              puVar5 = (undefined8 *)0x0;
            }
            if (puVar5 != (undefined8 *)0x0) {
              pIVar3 = GetRendererModule();
              local_res8 = 0x3f800000;
              local_resc = 0x3f800000;
              local_28 = 0;
              (**(code **)((longlong)*pIVar3 + 0x1d0))(pIVar3,*puVar5,&local_28,&local_res8);
            }
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x20);
      } while (iVar6 != -1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144e8df38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// FreePrimitiveTagOffset @ 144e8df50

void __thiscall
FMaterialCacheTagProvider::FreePrimitiveTagOffset(FMaterialCacheTagProvider *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar6;
  uint local_res10 [6];
  
  lpCriticalSection = &this->Mutex;
  local_res10[0] = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (local_res10[0] == 0xffffffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TagOffset != 0xffffffffui32",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MaterialCache\\MaterialCacheTagProvider.cpp"
                       ,0xd3,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar6 = &this->FreeTagIndices;
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2 + (longlong)(this->FreeTagIndices).ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->FreeTagIndices).ArrayNum;
  piVar1 = &(this->FreeTagIndices).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar6->AllocatorInstance,piVar1);
  }
  (this->FreeTagIndices).ArrayNum = iVar5 + 1;
  *(uint *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_res10[0];
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Get @ 144e8ece0

FMaterialCacheTagProvider * __cdecl FMaterialCacheTagProvider::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FMaterialCacheTagProvider *pFVar3;
  
  if ((GMaterialCacheTagProvider == (FMaterialCacheTagProvider *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GMaterialCacheTagProvider",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MaterialCache\\MaterialCacheTagProvider.cpp"
                         ,0x3a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMaterialCacheTagProvider *)(*pcVar1)();
    return pFVar3;
  }
  return GMaterialCacheTagProvider;
}

// GetBindingData @ 144e8ed40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMaterialCacheTagBindingData * __thiscall
FMaterialCacheTagProvider::GetBindingData
          (FMaterialCacheTagProvider *this,FMaterialCacheTagBindingData *__return_storage_ptr__,
          FGuid *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FRHIShaderResourceView_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong64 uVar6;
  FMaterialCacheTagBindingData *pFVar7;
  FRHITexture *pFVar8;
  ForElementType<FRHIShaderResourceView_*> FVar9;
  ForElementType<FRHIShaderResourceView_*> FVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auStack_98 [32];
  FRHIShaderResourceView **local_78;
  ForElementType<FRHIShaderResourceView_*> local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  FRHIShaderResourceView *local_48;
  FRHIShaderResourceView *local_40 [2];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_98;
  plVar14 = (longlong *)0x0;
  lpCriticalSection = &this->Mutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  __return_storage_ptr__->TagBufferSRV = (FRHIShaderResourceView *)0x0;
  pTVar1 = &__return_storage_ptr__->PhysicalTextureSRVs;
  __return_storage_ptr__->PageTableSRV = (FRHITexture *)0x0;
  (__return_storage_ptr__->PhysicalTextureSRVs).AllocatorInstance.SecondaryData =
       (ForElementType<FRHIShaderResourceView_*>)0x0;
  (__return_storage_ptr__->PhysicalTextureSRVs).ArrayNum = 0;
  (__return_storage_ptr__->PhysicalTextureSRVs).ArrayMax = 8;
  uVar6 = CityHash64((char *)param_1,0x10);
  iVar4 = TSet<TTuple<FGuid,FMaterialCacheTagBucket_*>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCacheTagBucket_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FMaterialCacheTagBucket_*>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCacheTagBucket_*,0>,FDefaultSetAllocator>
                      *)&this->TagBuckets,(uint)uVar6,param_1);
  if (iVar4 != -1) {
    lVar11 = (longlong)iVar4 * 0x20 + *(longlong *)&this->TagBuckets;
    plVar12 = (longlong *)(lVar11 + 0x10);
    if (lVar11 == 0) {
      plVar12 = plVar14;
    }
    if ((plVar12 != (longlong *)0x0) && (lVar11 = *plVar12, *(int *)(lVar11 + 0xe8) != 0)) {
      __return_storage_ptr__->TagBufferSRV = *(FRHIShaderResourceView **)(lVar11 + 0x108);
      if (*(int *)(lVar11 + 0xe8) < 1) {
        local_78 = (FRHIShaderResourceView **)0x0;
        local_70 = (ForElementType<FRHIShaderResourceView_*>)(longlong)*(int *)(lVar11 + 0xe8);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FMaterialCacheTagBindingData *)(*pcVar2)();
          return pFVar7;
        }
      }
      plVar12 = (longlong *)**(longlong **)(lVar11 + 0xe0);
      pFVar8 = (FRHITexture *)(**(code **)(*plVar12 + 0x10))(plVar12,0);
      __return_storage_ptr__->PageTableSRV = pFVar8;
      if (*(char *)((longlong)plVar12 + 0x21) != '\0') {
        do {
          uVar13 = (uint)plVar14;
          pcVar2 = *(code **)(*plVar12 + 0x30);
          uVar5 = 0;
          if ((int)uVar13 < *(int *)(lVar11 + 0xd8)) {
            uVar5 = ~uVar13 >> 0x1f;
          }
          if (uVar5 == 0) {
            local_78 = (FRHIShaderResourceView **)(longlong)(int)uVar13;
            local_70 = (ForElementType<FRHIShaderResourceView_*>)(longlong)*(int *)(lVar11 + 0xd8);
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pFVar7 = (FMaterialCacheTagBindingData *)(*pcVar2)();
              return pFVar7;
            }
          }
          lVar15 = lVar11 + 0x10;
          if (*(longlong *)(lVar11 + 0xd0) != 0) {
            lVar15 = *(longlong *)(lVar11 + 0xd0);
          }
          local_48 = (FRHIShaderResourceView *)
                     (*pcVar2)(plVar12,plVar14,
                               *(undefined1 *)(lVar15 + 3 + (longlong)(int)uVar13 * 0x18));
          FVar10 = (__return_storage_ptr__->PhysicalTextureSRVs).AllocatorInstance.SecondaryData;
          FVar9 = (ForElementType<FRHIShaderResourceView_*>)pTVar1;
          if (FVar10 != (ForElementType<FRHIShaderResourceView_*>)0x0) {
            FVar9 = FVar10;
          }
          if ((ulonglong)FVar9 <= &local_48) {
            lVar15 = (longlong)(__return_storage_ptr__->PhysicalTextureSRVs).ArrayMax;
            FVar9 = (ForElementType<FRHIShaderResourceView_*>)pTVar1;
            if (FVar10 != (ForElementType<FRHIShaderResourceView_*>)0x0) {
              FVar9 = FVar10;
            }
            if (&local_48 < (FRHIShaderResourceView **)((longlong)FVar9 + lVar15 * 8)) {
              local_60 = (longlong)(__return_storage_ptr__->PhysicalTextureSRVs).ArrayNum;
              local_58 = 8;
              local_70 = (ForElementType<FRHIShaderResourceView_*>)pTVar1;
              if (FVar10 != (ForElementType<FRHIShaderResourceView_*>)0x0) {
                local_70 = FVar10;
              }
              local_78 = &local_48;
              local_68 = lVar15;
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                pFVar7 = (FMaterialCacheTagBindingData *)(*pcVar2)();
                return pFVar7;
              }
            }
          }
          iVar4 = (__return_storage_ptr__->PhysicalTextureSRVs).ArrayNum;
          if (iVar4 == (__return_storage_ptr__->PhysicalTextureSRVs).ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIShaderResourceView_*>_>
                              (0x808,&pTVar1->AllocatorInstance,
                               &(__return_storage_ptr__->PhysicalTextureSRVs).ArrayMax);
          }
          (__return_storage_ptr__->PhysicalTextureSRVs).ArrayNum = iVar4 + 1;
          FVar10 = (__return_storage_ptr__->PhysicalTextureSRVs).AllocatorInstance.SecondaryData;
          FVar9 = (ForElementType<FRHIShaderResourceView_*>)pTVar1;
          if (FVar10 != (ForElementType<FRHIShaderResourceView_*>)0x0) {
            FVar9 = FVar10;
          }
          plVar14 = (longlong *)(ulonglong)(uVar13 + 1);
          *(FRHIShaderResourceView **)((longlong)FVar9 + (longlong)iVar4 * 8) = local_48;
        } while (uVar13 + 1 < (uint)*(byte *)((longlong)plVar12 + 0x21));
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->TagBufferSRV =
       (GEmptyStructuredBufferWithUAV->ShaderResourceViewRHI).Reference;
  __return_storage_ptr__->PageTableSRV = (GBlackUintTexture->TextureRHI).Reference;
  local_40[0] = (GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
  FVar10 = (__return_storage_ptr__->PhysicalTextureSRVs).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<FRHIShaderResourceView_*>)0x0) {
    FVar10 = (ForElementType<FRHIShaderResourceView_*>)pTVar1;
  }
  if (((ulonglong)FVar10 <= local_40) &&
     (lVar11 = (longlong)(__return_storage_ptr__->PhysicalTextureSRVs).ArrayMax,
     local_40 < (FRHIShaderResourceView **)((longlong)FVar10 + lVar11 * 8))) {
    local_60 = (longlong)(__return_storage_ptr__->PhysicalTextureSRVs).ArrayNum;
    local_58 = 8;
    local_78 = local_40;
    local_70 = FVar10;
    local_68 = lVar11;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FMaterialCacheTagBindingData *)(*pcVar2)();
      return pFVar7;
    }
  }
  iVar4 = (__return_storage_ptr__->PhysicalTextureSRVs).ArrayNum;
  if (iVar4 == (__return_storage_ptr__->PhysicalTextureSRVs).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIShaderResourceView_*>_>
                      (0x808,&pTVar1->AllocatorInstance,
                       &(__return_storage_ptr__->PhysicalTextureSRVs).ArrayMax);
  }
  (__return_storage_ptr__->PhysicalTextureSRVs).ArrayNum = iVar4 + 1;
  FVar10 = (__return_storage_ptr__->PhysicalTextureSRVs).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<FRHIShaderResourceView_*>)0x0) {
    FVar10 = (ForElementType<FRHIShaderResourceView_*>)pTVar1;
  }
  *(FRHIShaderResourceView **)((longlong)FVar10 + (longlong)iVar4 * 8) = local_40[0];
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// GetUniformData @ 144e9b010

FMaterialCacheTagUniformData * __thiscall
FMaterialCacheTagProvider::GetUniformData
          (FMaterialCacheTagProvider *this,FMaterialCacheTagUniformData *__return_storage_ptr__,
          FGuid *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong64 uVar7;
  FMaterialCacheTagUniformData *pFVar8;
  longlong lVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  
  lpCriticalSection = &this->Mutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar7 = CityHash64((char *)param_1,0x10);
  iVar5 = TSet<TTuple<FGuid,FMaterialCacheTagBucket_*>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCacheTagBucket_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FMaterialCacheTagBucket_*>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCacheTagBucket_*,0>,FDefaultSetAllocator>
                      *)&this->TagBuckets,(uint)uVar7,param_1);
  if (iVar5 != -1) {
    lVar9 = (longlong)iVar5 * 0x20 + *(longlong *)&this->TagBuckets;
    plVar10 = (longlong *)(lVar9 + 0x10);
    if (lVar9 == 0) {
      plVar10 = (longlong *)0x0;
    }
    if (plVar10 != (longlong *)0x0) {
      lVar9 = *plVar10;
      iVar5 = *(int *)(lVar9 + 0xe8);
      if (iVar5 != 0) {
        if (iVar5 < 1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FMaterialCacheTagUniformData *)(*pcVar3)();
            return pFVar8;
          }
        }
        plVar10 = (longlong *)**(longlong **)(lVar9 + 0xe0);
        uVar1 = *(uint *)(plVar10 + 2);
        uVar2 = *(uint *)((longlong)plVar10 + 0x14);
        uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,0);
        fVar12 = __real_3f800000 / (float)uVar6;
        fVar11 = fVar12;
        if (*(char *)((longlong)plVar10 + 0x6d) != '\x01') {
          fVar11 = (float)((uint)fVar12 ^ __xmm_80000000800000008000000080000000);
        }
        (__return_storage_ptr__->PackedTableUniform).field0_0x0._s_0.X = 0xffffffff;
        *(float *)((longlong)&(__return_storage_ptr__->PackedTableUniform).field0_0x0 + 4) =
             (float)uVar1 * fVar12;
        *(float *)((longlong)&(__return_storage_ptr__->PackedTableUniform).field0_0x0 + 8) =
             (float)uVar2 * fVar12;
        *(float *)((longlong)&(__return_storage_ptr__->PackedTableUniform).field0_0x0 + 0xc) =
             (float)(uVar1 + uVar2 * 2) * fVar11;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return __return_storage_ptr__;
      }
    }
  }
  (__return_storage_ptr__->PackedTableUniform).field0_0x0._s_0 =
       (TIntVector4<unsigned_int>_u_0_s_0)UE::Math::TIntVector4<unsigned_int>::ZeroValue.field0_0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// Initialize @ 144e9be50

void __cdecl FMaterialCacheTagProvider::Initialize(void)

{
  FMaterialCacheTagProvider *pFVar1;
  
  if (GMaterialCacheTagProvider == (FMaterialCacheTagProvider *)0x0) {
    pFVar1 = ::operator_new(0x1f8);
    if (pFVar1 != (FMaterialCacheTagProvider *)0x0) {
      memset(&pFVar1->Mutex,0,0x1f0);
      pFVar1->_padding_ = (longlong)&___7FMaterialCacheTagProvider__6B_;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar1->Mutex,4000);
      GMaterialCacheTagProvider = pFVar1;
      *(undefined8 *)&pFVar1->TagBuckets = 0;
      *(undefined8 *)&(pFVar1->TagBuckets).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->TagBuckets).field_0x20 = 0;
      *(undefined4 *)&(pFVar1->TagBuckets).field_0x28 = 0;
      *(undefined4 *)&(pFVar1->TagBuckets).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->TagBuckets).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar1->TagBuckets).field_0x34 = 0;
      *(undefined8 *)&(pFVar1->TagBuckets).field_0x40 = 0;
      *(undefined4 *)&(pFVar1->TagBuckets).field_0x48 = 0;
      *(undefined8 *)&(pFVar1->PendingTagSceneInvalidations).Elements = 0;
      *(undefined8 *)&(pFVar1->PendingTagSceneInvalidations).Elements.field_0x8 = 0;
      *(undefined8 *)&(pFVar1->PendingTagSceneInvalidations).Elements.field_0x20 = 0;
      *(undefined4 *)&(pFVar1->PendingTagSceneInvalidations).Elements.field_0x28 = 0;
      *(undefined4 *)&(pFVar1->PendingTagSceneInvalidations).Elements.field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->PendingTagSceneInvalidations).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar1->PendingTagSceneInvalidations).Elements.field_0x34 = 0;
      (pFVar1->PendingTagSceneInvalidations).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0
      ;
      (pFVar1->PendingTagSceneInvalidations).HashSize = 0;
      *(undefined8 *)&pFVar1->VirtualTextures = 0;
      *(undefined8 *)&(pFVar1->VirtualTextures).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->VirtualTextures).field_0x20 = 0;
      *(undefined4 *)&(pFVar1->VirtualTextures).field_0x28 = 0;
      *(undefined4 *)&(pFVar1->VirtualTextures).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->VirtualTextures).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar1->VirtualTextures).field_0x34 = 0;
      *(undefined8 *)&(pFVar1->VirtualTextures).field_0x40 = 0;
      *(undefined4 *)&(pFVar1->VirtualTextures).field_0x48 = 0;
      (pFVar1->FreeTagIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar1->FreeTagIndices).ArrayNum = 0;
      (pFVar1->FreeTagIndices).ArrayMax = 0;
      pFVar1->TagOffsetAllocator = 0;
      (pFVar1->TagSceneInvalidationListeners).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar1->TagSceneInvalidationListeners).ArrayNum = 0;
      (pFVar1->TagSceneInvalidationListeners).ArrayMax = 0;
      (pFVar1->FreeTagSceneInvalidationCallbackIndices).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar1->FreeTagSceneInvalidationCallbackIndices).ArrayNum = 0;
      (pFVar1->FreeTagSceneInvalidationCallbackIndices).ArrayMax = 0;
      *(undefined8 *)&pFVar1->TagCallbackIndices = 0;
      *(undefined8 *)&(pFVar1->TagCallbackIndices).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->TagCallbackIndices).field_0x20 = 0;
      *(undefined4 *)&(pFVar1->TagCallbackIndices).field_0x28 = 0;
      *(undefined4 *)&(pFVar1->TagCallbackIndices).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->TagCallbackIndices).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar1->TagCallbackIndices).field_0x34 = 0;
      *(undefined8 *)&(pFVar1->TagCallbackIndices).field_0x40 = 0;
      *(undefined4 *)&(pFVar1->TagCallbackIndices).field_0x48 = 0;
      *(undefined8 *)&pFVar1->BatonCallbackIndices = 0;
      *(undefined8 *)&(pFVar1->BatonCallbackIndices).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->BatonCallbackIndices).field_0x20 = 0;
      *(undefined4 *)&(pFVar1->BatonCallbackIndices).field_0x28 = 0;
      *(undefined4 *)&(pFVar1->BatonCallbackIndices).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->BatonCallbackIndices).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar1->BatonCallbackIndices).field_0x34 = 0;
      *(undefined8 *)&(pFVar1->BatonCallbackIndices).field_0x40 = 0;
      *(undefined4 *)&(pFVar1->BatonCallbackIndices).field_0x48 = 0;
      return;
    }
    GMaterialCacheTagProvider = (FMaterialCacheTagProvider *)0x0;
  }
  return;
}

// NotifyTagSceneInvalidation @ 144ea4f10

void __thiscall
FMaterialCacheTagProvider::NotifyTagSceneInvalidation
          (FMaterialCacheTagProvider *this,FGuid *param_1)

{
  FGuid local_res8 [2];
  
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
            (&this->PendingTagSceneInvalidations,local_res8,(bool *)param_1);
  return;
}

// Register @ 144ea6400

void __thiscall
FMaterialCacheTagProvider::Register
          (FMaterialCacheTagProvider *this,FSceneInterface *param_1,FPrimitiveComponentId param_2,
          FMaterialCacheTagLayout *param_3,IAllocatedVirtualTexture *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  ulong64 uVar2;
  IAllocatedVirtualTexture *pIVar3;
  longlong lVar4;
  IAllocatedVirtualTexture *pIVar5;
  FMaterialCacheTagBucket *this_00;
  int local_res8;
  IAllocatedVirtualTexture *local_48;
  undefined1 local_40 [12];
  int iStack_34;
  FPrimitiveComponentId local_30;
  undefined8 local_2c;
  undefined8 uStack_24;
  
  lpCriticalSection = &this->Mutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_2c._0_4_ = (param_3->Guid).A;
  local_2c._4_4_ = (param_3->Guid).B;
  uStack_24 = *(undefined8 *)&(param_3->Guid).C;
  local_40._0_8_ = &stack0xffffffffffffffd0;
  unique0x0000a500 = &param_4;
  local_30.PrimIDValue = param_2.PrimIDValue;
  TSet<TTuple<TTuple<FPrimitiveComponentId,FGuid>,IAllocatedVirtualTexture_*>,TDefaultMapHashableKeyFuncs<TTuple<FPrimitiveComponentId,FGuid>,IAllocatedVirtualTexture_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TTuple<FPrimitiveComponentId,FGuid>_&&,IAllocatedVirtualTexture_*_const_&>_>
            ((TSet<TTuple<TTuple<FPrimitiveComponentId,FGuid>,IAllocatedVirtualTexture_*>,TDefaultMapHashableKeyFuncs<TTuple<FPrimitiveComponentId,FGuid>,IAllocatedVirtualTexture_*,0>,FDefaultSetAllocator>
              *)&this->VirtualTextures,
             (TPairInitializer<TTuple<FPrimitiveComponentId,FGuid>_&&,IAllocatedVirtualTexture_*_const_&>
              *)&stack0x00000008,(bool *)local_40);
  uVar2 = CityHash64((char *)param_3,0x10);
  iVar1 = TSet<TTuple<FGuid,FMaterialCacheTagBucket_*>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCacheTagBucket_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FMaterialCacheTagBucket_*>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCacheTagBucket_*,0>,FDefaultSetAllocator>
                      *)&this->TagBuckets,(uint)uVar2,&param_3->Guid);
  pIVar5 = (IAllocatedVirtualTexture *)0x0;
  if (iVar1 != -1) {
    lVar4 = (longlong)iVar1 * 0x20 + *(longlong *)&this->TagBuckets;
    pIVar3 = (IAllocatedVirtualTexture *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      pIVar3 = pIVar5;
    }
    if (pIVar3 != (IAllocatedVirtualTexture *)0x0) {
      this_00 = (FMaterialCacheTagBucket *)pIVar3->_padding_;
      goto LAB_144ea6618;
    }
  }
  pIVar3 = ::operator_new(0x118);
  if (pIVar3 != (IAllocatedVirtualTexture *)0x0) {
    memset(&(pIVar3->Description).TileSize,0,0xc0);
    *(undefined4 *)((longlong)&pIVar3[2]._padding_ + 1) = 0;
    *(undefined2 *)((longlong)&pIVar3[2]._padding_ + 5) = 0;
    *(undefined1 *)((longlong)&pIVar3[2]._padding_ + 7) = 0;
    pIVar3->_padding_ = 0;
    (pIVar3->Description).Name.ComparisonIndex = 0;
    (pIVar3->Description).Name.Number = 0;
    *(undefined8 *)(pIVar3[1].Description.ProducerLayerIndex + 4) = 0;
    pIVar3[1].BlockWidthInTiles = 0;
    pIVar3[1].BlockHeightInTiles = 8;
    pIVar3[1].WidthInBlocks = 0;
    pIVar3[1].HeightInBlocks = 0;
    pIVar3[1].DepthInTiles = 0;
    pIVar3[1].FrameDeleted = 0;
    pIVar3[1].NumRefs = 0;
    pIVar3[1].bIsWaitingToMap = false;
    pIVar3[1].PageTableFormat = UInt16;
    *(undefined2 *)&pIVar3[1].field_0x6e = 0;
    pIVar3[1].SpaceID = 0;
    pIVar3[1].MaxLevel = 0;
    pIVar3[1].VirtualAddress = 0;
    pIVar3[1].VirtualPageX = 0;
    *(undefined8 *)&pIVar3[1].VirtualPageY = 0;
    *(undefined1 *)&pIVar3[2]._padding_ = 0;
    pIVar5 = pIVar3;
  }
  unique0x00009c00 = &local_48;
  local_48 = pIVar5;
  local_40._0_8_ = param_3;
  TSet<TTuple<FGuid,FMaterialCacheTagBucket_*>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCacheTagBucket_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FMaterialCacheTagBucket_*_&&>_>
            ((TSet<TTuple<FGuid,FMaterialCacheTagBucket_*>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCacheTagBucket_*,0>,FDefaultSetAllocator>
              *)&this->TagBuckets,
             (TPairInitializer<FGuid_const_&,FMaterialCacheTagBucket_*_&&> *)&stack0x00000008,
             (bool *)local_40);
  this_00 = *(FMaterialCacheTagBucket **)
             ((longlong)local_res8 * 0x20 + 0x10 + *(longlong *)&this->TagBuckets);
  FMaterialCacheTagLayout::operator=(&this_00->Layout,param_3);
  if ((this_00->Layout).Layers.ArrayNum == 0) {
    local_40._0_8_ = (FMaterialCacheTagLayout *)0x0;
    stack0xffffffffffffffc8 = (IAllocatedVirtualTexture **)CONCAT44(iStack_34,6);
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,6,0,(ForAnyElementType *)local_40,6,&iStack_34);
    *(undefined4 *)local_40._0_8_ = DefaultMaterialCacheAttributes._0_4_;
    *(undefined2 *)(local_40._0_8_ + 4) = DefaultMaterialCacheAttributes._4_2_;
    PackMaterialCacheAttributeLayers<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              ((TArray<EMaterialCacheAttribute,TSizedDefaultAllocator<32>_> *)local_40,
               &(this_00->Layout).Layers);
    if ((FMaterialCacheTagLayout *)local_40._0_8_ != (FMaterialCacheTagLayout *)0x0) {
      FMemory::Free((void *)local_40._0_8_);
    }
  }
  CreateDeviceBuffersOrResize(this,this_00);
LAB_144ea6618:
  TArray<IAllocatedVirtualTexture_*,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<IAllocatedVirtualTexture_*_const_&>(&this_00->VirtualTextures,&param_4);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RemoveTagSceneInvalidationCallbacks @ 144ea75d0

void __thiscall
FMaterialCacheTagProvider::RemoveTagSceneInvalidationCallbacks
          (FMaterialCacheTagProvider *this,void *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  FScriptContainerElement *pFVar9;
  int iVar10;
  TBaseKeyIterator<0> local_90;
  longlong local_78;
  LPCRITICAL_SECTION local_70;
  void *local_68;
  TBaseKeyIterator<0> local_60;
  
  lpCriticalSection = (LPCRITICAL_SECTION)&this->Mutex;
  local_70 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  TSet<TTuple<void_*,FMaterialCacheTagProvider::FTagBatonEntry>,TDefaultMapHashableKeyFuncs<void_*,FMaterialCacheTagProvider::FTagBatonEntry,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_60,
             (TSet<TTuple<void_*,FMaterialCacheTagProvider::FTagBatonEntry>,TDefaultMapHashableKeyFuncs<void_*,FMaterialCacheTagProvider::FTagBatonEntry,1>,FDefaultSetAllocator>
              *)&this->BatonCallbackIndices,param_1);
  if (local_60.Index != -1) {
    pTVar2 = &this->FreeTagSceneInvalidationCallbackIndices;
    piVar1 = &(this->FreeTagSceneInvalidationCallbackIndices).ArrayMax;
    iVar10 = local_60.NextIndex;
    do {
      local_78 = (longlong)local_60.Index * 0x28;
      iVar6 = *(int *)(local_78 + 8 + *(longlong *)&(local_60.Set)->Elements);
      TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>::
      TBaseKeyIterator<0>::TBaseKeyIterator<0>
                (&local_90,
                 (TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>
                  *)&this->TagCallbackIndices,
                 (FGuid *)(*(longlong *)&(local_60.Set)->Elements + 0xc + local_78));
      if (local_90.Index != 0xffffffff) {
        do {
          if (*(int *)((longlong)local_90.Index * 0x1c + 0x10 +
                      *(longlong *)&(local_90.Set)->Elements) == iVar6) {
            TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>::
            RemoveByIndex(local_90.Set,local_90.Index);
            local_90.Index = 0xffffffff;
            break;
          }
          local_90.Index = local_90.NextIndex;
          if (local_90.NextIndex == 0xffffffff) break;
          do {
            puVar8 = (uint *)((longlong)local_90.Index * 0x1c +
                             *(longlong *)&(local_90.Set)->Elements);
            local_90.NextIndex = puVar8[5];
            if ((((local_90.Key)->B == puVar8[1] && (local_90.Key)->C == puVar8[2]) &&
                (local_90.Key)->D == puVar8[3]) && (local_90.Key)->A == *puVar8) break;
            local_90.Index = local_90.NextIndex;
          } while (local_90.NextIndex != 0xffffffff);
        } while (local_90.Index != 0xffffffff);
      }
      pFVar9 = (FScriptContainerElement *)(*(longlong *)&(local_60.Set)->Elements + local_78 + 8);
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar3 <= pFVar9) && (pFVar9 < pFVar3 + (longlong)*piVar1 * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->FreeTagSceneInvalidationCallbackIndices).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->FreeTagSceneInvalidationCallbackIndices).ArrayNum = iVar6 + 1;
      *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4) =
           *(undefined4 *)pFVar9;
      lpCriticalSection = local_70;
      if (iVar10 == -1) break;
      local_60.Index = iVar10;
      do {
        iVar10 = *(int *)(*(longlong *)&(local_60.Set)->Elements + 0x20 +
                         (longlong)local_60.Index * 0x28);
        if (*(void **)(*(longlong *)&(local_60.Set)->Elements + (longlong)local_60.Index * 0x28) ==
            local_60.Key) break;
        local_60.Index = iVar10;
      } while (iVar10 != -1);
    } while (local_60.Index != -1);
  }
  local_68 = param_1;
  if (*(int *)&(this->BatonCallbackIndices).field_0x8 !=
      *(int *)&(this->BatonCallbackIndices).field_0x34) {
    uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    TSet<TTuple<void_*,FMaterialCacheTagProvider::FTagBatonEntry>,TDefaultMapHashableKeyFuncs<void_*,FMaterialCacheTagProvider::FTagBatonEntry,1>,FDefaultSetAllocator>
    ::RemoveImpl<void_const_*>
              ((TSet<TTuple<void_*,FMaterialCacheTagProvider::FTagBatonEntry>,TDefaultMapHashableKeyFuncs<void_*,FMaterialCacheTagProvider::FTagBatonEntry,1>,FDefaultSetAllocator>
                *)&this->BatonCallbackIndices,uVar7 >> 0x10 ^ uVar7,&local_68);
  }
                    /* WARNING: Could not recover jumptable at 0x000144ea78ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// SetTagEntry @ 144eab030

void __thiscall
FMaterialCacheTagProvider::SetTagEntry
          (FMaterialCacheTagProvider *this,uint param_1,FGuid *param_2,
          FMaterialCacheTagEntry *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TArray<UE::HLSL::FMaterialCacheTagEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  FMaterialCacheTagBucket *pFVar3;
  TIntVector2<unsigned_int>_u_0 TVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulong64 uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  
  lpCriticalSection = &this->Mutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar8 = CityHash64((char *)param_2,0x10);
  iVar7 = TSet<TTuple<FGuid,FMaterialCacheTagBucket_*>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCacheTagBucket_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FMaterialCacheTagBucket_*>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCacheTagBucket_*,0>,FDefaultSetAllocator>
                      *)&this->TagBuckets,(uint)uVar8,param_2);
  if (iVar7 != -1) {
    lVar10 = (longlong)iVar7 * 0x20 + *(longlong *)&this->TagBuckets;
    puVar11 = (undefined8 *)(lVar10 + 0x10);
    if (lVar10 == 0) {
      puVar11 = (undefined8 *)0x0;
    }
    if (puVar11 != (undefined8 *)0x0) {
      pFVar3 = (FMaterialCacheTagBucket *)*puVar11;
      piVar1 = &(pFVar3->TagEntries).ArrayNum;
      iVar7 = *piVar1;
      if (iVar7 <= (int)param_1) {
        uVar9 = param_1 + 1;
        pTVar2 = &pFVar3->TagEntries;
        if (iVar7 < (int)uVar9) {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,uVar9 - iVar7,&pTVar2->AllocatorInstance,piVar1,
                     &(pFVar3->TagEntries).ArrayMax);
        }
        else {
          if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
          }
          if ((int)uVar9 < iVar7) {
            uVar12 = iVar7 - uVar9;
            if ((int)(uVar12 | uVar9) < 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                );
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (uVar12 != 0) {
              _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8;
              iVar7 = ((pFVar3->TagEntries).ArrayNum - uVar12) - uVar9;
              if (iVar7 != 0) {
                memmove(_Dst,_Dst + (longlong)(int)uVar12 * 8,(longlong)iVar7 << 3);
              }
              piVar1 = &(pFVar3->TagEntries).ArrayNum;
              *piVar1 = *piVar1 - uVar12;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,&pTVar2->AllocatorInstance,(pFVar3->TagEntries).ArrayNum,
                         &(pFVar3->TagEntries).ArrayMax);
            }
          }
        }
      }
      TVar4 = (param_3->PackedUniform).field0_0x0;
      uVar9 = 0;
      if ((int)param_1 < (pFVar3->TagEntries).ArrayNum) {
        uVar9 = ~param_1 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(TIntVector2<unsigned_int>_u_0 *)
       &(pFVar3->TagEntries).AllocatorInstance.Data[(longlong)(int)param_1 * 8].field_0x0 = TVar4;
      pFVar3->bIsDirty = true;
      CreateDeviceBuffersOrResize(this,pFVar3);
      goto LAB_144eab243;
    }
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MaterialCache\\MaterialCacheTagProvider.cpp"
                     ,0xbb,L"Registering tag entries without a bucket");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_144eab243:
                    /* WARNING: Could not recover jumptable at 0x000144eab267. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Shutdown @ 144eb1110

void __cdecl FMaterialCacheTagProvider::Shutdown(void)

{
  if (GMaterialCacheTagProvider != (FMaterialCacheTagProvider *)0x0) {
    (**(code **)GMaterialCacheTagProvider->_padding_)(GMaterialCacheTagProvider,1);
    GMaterialCacheTagProvider = (FMaterialCacheTagProvider *)0x0;
  }
  return;
}

// Unregister @ 144eb5590

void __thiscall
FMaterialCacheTagProvider::Unregister
          (FMaterialCacheTagProvider *this,FSceneInterface *param_1,FPrimitiveComponentId param_2,
          FGuid *param_3,IAllocatedVirtualTexture *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  void *pvVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  FMaterialCacheLayer *pFVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  TTuple<FPrimitiveComponentId,FGuid> local_38;
  
  lpCriticalSection = &this->Mutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_38._4_4_ = param_3->A;
  local_38._8_4_ = param_3->B;
  local_38._12_4_ = param_3->C;
  local_38._16_4_ = param_3->D;
  local_38._0_4_ = param_2.PrimIDValue;
  if (*(int *)&(this->VirtualTextures).field_0x8 != *(int *)&(this->VirtualTextures).field_0x34) {
    uVar6 = CityHash64(&local_38.field_0x4,0x10);
    TSet<TTuple<TTuple<FPrimitiveComponentId,FGuid>,IAllocatedVirtualTexture_*>,TDefaultMapHashableKeyFuncs<TTuple<FPrimitiveComponentId,FGuid>,IAllocatedVirtualTexture_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<TTuple<FPrimitiveComponentId,FGuid>_>
              ((TSet<TTuple<TTuple<FPrimitiveComponentId,FGuid>,IAllocatedVirtualTexture_*>,TDefaultMapHashableKeyFuncs<TTuple<FPrimitiveComponentId,FGuid>,IAllocatedVirtualTexture_*,0>,FDefaultSetAllocator>
                *)&this->VirtualTextures,
               (param_2.PrimIDValue >> 2) + param_2.PrimIDValue * 0x40 + -0x61c88647 + (int)uVar6 ^
               param_2.PrimIDValue,&local_38);
  }
  uVar6 = CityHash64((char *)param_3,0x10);
  iVar5 = TSet<TTuple<FGuid,FMaterialCacheTagBucket_*>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCacheTagBucket_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FMaterialCacheTagBucket_*>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCacheTagBucket_*,0>,FDefaultSetAllocator>
                      *)&this->TagBuckets,(uint)uVar6,param_3);
  if (iVar5 != -1) {
    lVar9 = (longlong)iVar5 * 0x20 + *(longlong *)&this->TagBuckets;
    puVar10 = (undefined8 *)(lVar9 + 0x10);
    if (lVar9 == 0) {
      puVar10 = (undefined8 *)0x0;
    }
    if (puVar10 != (undefined8 *)0x0) {
      pvVar1 = (void *)*puVar10;
      plVar2 = *(longlong **)((longlong)pvVar1 + 0xe0);
      for (plVar8 = plVar2; plVar8 != plVar2 + *(int *)((longlong)pvVar1 + 0xe8);
          plVar8 = plVar8 + 1) {
        if ((IAllocatedVirtualTexture *)*plVar8 == param_4) {
          iVar5 = (int)((longlong)plVar8 - (longlong)plVar2 >> 3);
          if (iVar5 != -1) {
            memmove(plVar2 + iVar5,plVar2 + iVar5 + 1,
                    (longlong)((*(int *)((longlong)pvVar1 + 0xe8) - iVar5) + -1) << 3);
            *(int *)((longlong)pvVar1 + 0xe8) = *(int *)((longlong)pvVar1 + 0xe8) + -1;
          }
          break;
        }
      }
      if (*(int *)((longlong)pvVar1 + 0xe8) == 0) {
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                  (&this->PendingTagSceneInvalidations,(FGuid *)&stack0x00000008,(bool *)param_3);
        if (*(int *)&(this->TagBuckets).field_0x8 != *(int *)&(this->TagBuckets).field_0x34) {
          uVar6 = CityHash64((char *)param_3,0x10);
          TSet<TTuple<FGuid,FMaterialCacheTagBucket_*>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCacheTagBucket_*,0>,FDefaultSetAllocator>
          ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,FMaterialCacheTagBucket_*>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCacheTagBucket_*,0>,FDefaultSetAllocator>
                               *)&this->TagBuckets,(uint)uVar6,param_3);
        }
        if (pvVar1 != (void *)0x0) {
          if ((*(int *)((longlong)pvVar1 + 0xe8) != 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("VirtualTextures.IsEmpty()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MaterialCache\\MaterialCacheTagProvider.cpp"
                                 ,0x13,L"Released scene extension data with dangling references"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(FRHIResource **)((longlong)pvVar1 + 0x108) != (FRHIResource *)0x0) {
            FRHIResource::Release(*(FRHIResource **)((longlong)pvVar1 + 0x108));
          }
          if (*(FRHIResource **)((longlong)pvVar1 + 0x100) != (FRHIResource *)0x0) {
            FRHIResource::Release(*(FRHIResource **)((longlong)pvVar1 + 0x100));
          }
          if (*(void **)((longlong)pvVar1 + 0xf0) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)pvVar1 + 0xf0));
          }
          if (*(void **)((longlong)pvVar1 + 0xe0) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)pvVar1 + 0xe0));
          }
          pFVar7 = *(FMaterialCacheLayer **)((longlong)pvVar1 + 0xd0);
          if (*(FMaterialCacheLayer **)((longlong)pvVar1 + 0xd0) == (FMaterialCacheLayer *)0x0) {
            pFVar7 = (FMaterialCacheLayer *)((longlong)pvVar1 + 0x10);
          }
          DestructItems<FMaterialCacheLayer,int>(pFVar7,*(int *)((longlong)pvVar1 + 0xd8));
          if (*(void **)((longlong)pvVar1 + 0xd0) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)pvVar1 + 0xd0));
          }
          ::operator_delete(pvVar1,0x118);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144eb57d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Update @ 144eb57f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMaterialCacheTagProvider::Update(FMaterialCacheTagProvider *this,FRDGBuilder *param_1)

{
  undefined1 *puVar1;
  TMap<FGuid,FMaterialCacheTagBucket_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCacheTagBucket_*,0>_>
  *pTVar2;
  ERHIPipeline EVar3;
  int iVar4;
  uint uVar5;
  FRHICommandListBase *this_00;
  void *_Src;
  code *pcVar6;
  FRDGBuilder *pFVar7;
  TMap<FGuid,FMaterialCacheTagBucket_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCacheTagBucket_*,0>_>
  *pTVar8;
  bool bVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 auStackY_208 [32];
  undefined1 local_1d8 [8];
  FRHIBuffer *local_1d0;
  int local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  int iStack_1bc;
  wchar_t *local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 local_198;
  TMap<FGuid,FMaterialCacheTagBucket_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCacheTagBucket_*,0>_>
  *local_190;
  int iStack_188;
  uint uStack_184;
  undefined1 *local_180;
  undefined4 uStack_178;
  int iStack_174;
  int local_170;
  int iStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  int local_160;
  int local_15c;
  FRDGBuilder *local_158;
  LPCRITICAL_SECTION local_150;
  TMap<FGuid,FMaterialCacheTagBucket_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCacheTagBucket_*,0>_>
  *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  wchar_t *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_d8 [48];
  FRHICommandListBase *local_a8;
  FRHIBuffer *local_a0;
  void *local_98;
  ulonglong local_90;
  undefined1 local_88 [48];
  FRHICommandListBase *local_58;
  FRHIBuffer *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_150 = (LPCRITICAL_SECTION)&this->Mutex;
  local_158 = param_1;
  if (local_150 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_150);
  iVar4 = *(int *)&(this->TagBuckets).field_0x28;
  puVar1 = &(this->TagBuckets).field_0x10;
  iStack_188 = 0;
  pTVar2 = &this->TagBuckets;
  local_170 = 0;
  uStack_184 = 1;
  iStack_174 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->TagBuckets).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iStack_188;
      local_170 = local_170 + 0x20;
      iStack_188 = iStack_188 + 1;
      iStack_174 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_188) goto LAB_144eb58cf;
      uVar12 = puVar16[lVar10 + 1];
    }
    uStack_184 = -uVar12 & uVar12;
    uVar14 = (ulonglong)uStack_184 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_160 = (int)lVar10;
    iStack_174 = local_170 + -1 + local_160;
    if (iVar4 < iStack_174) {
      iStack_174 = iVar4;
    }
  }
LAB_144eb58cf:
  uVar12 = *(uint *)&(this->TagBuckets).field_0x28;
  uVar17 = uVar12 & 0xffffffe0;
  iStack_168 = *(int *)&(this->TagBuckets).field_0x8 - *(int *)&(this->TagBuckets).field_0x34;
  uStack_178 = 0xffffffff;
  TStack_140._padding_ = CONCAT44(uStack_184,iStack_188);
  TStack_140.CurrentBitIndex = iStack_174;
  TStack_140.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_140._28_4_ = iStack_174;
  TStack_140.BaseBitIndex = local_170;
  uStack_120 = CONCAT44(uStack_164,iStack_168);
  local_190 = pTVar2;
  local_180 = puVar1;
  iStack_16c = iStack_174;
  local_148 = pTVar2;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar7 = local_158;
  uVar5 = *(uint *)&(this->TagBuckets).field_0x28;
  if (uVar12 != uVar5) {
    puVar15 = *(undefined1 **)&(this->TagBuckets).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar17 = uVar17 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_144eb59d3;
      uVar12 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_15c = (int)lVar10;
    uVar12 = local_15c + -1 + uVar17;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_144eb59d3:
  do {
    pTVar8 = local_148;
    if (*(int *)&local_148->field_0x8 - *(int *)&local_148->field_0x34 != (int)uStack_120) {
      local_1d8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FGuid,FMaterialCacheTagBucket_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1d8);
    }
    if (((TStack_140.CurrentBitIndex == uVar12) &&
        (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    {
      LeaveCriticalSection(local_150);
      return;
    }
    lVar10 = (longlong)TStack_140.CurrentBitIndex * 0x20 + *(longlong *)pTVar8;
    iVar4 = *(int *)(*(longlong *)(lVar10 + 0x10) + 0xf8);
    if ((iVar4 != 0) && (*(char *)(*(longlong *)(lVar10 + 0x10) + 0x110) != '\0')) {
      this_00 = (FRHICommandListBase *)pFVar7->_padding_;
      local_1c8 = iVar4 * 8;
      iStack_1bc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      uStack_1c4 = 8;
      uStack_1b0 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_1c0 = 0x10001;
      local_118 = CONCAT44(8,local_1c8);
      uStack_110 = CONCAT44(iStack_1bc,0x10001);
      local_1b8 = L"MaterialCache::HostTagBuffer";
      local_1a8 = 0x80;
      uStack_1a4 = 3;
      local_f8 = 0x300000080;
      local_108 = L"MaterialCache::HostTagBuffer";
      uStack_100 = 0;
      local_e8 = 0;
      uStack_f0 = 0;
      EVar3 = this_00->ActivePipelines;
      if ((EVar3 != None) &&
         (((EVar3 & EVar3 - Graphics) != None &&
          (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                              ,0x2a5,L""), bVar9)))) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (this_00->ActivePipelines == None) {
        FRHICommandListBase::SwitchPipeline(this_00,Graphics);
        (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_88,this_00,&local_118);
        FRHICommandListBase::SwitchPipeline(this_00,None);
      }
      else {
        (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_88,this_00,&local_118);
      }
      FRHIBufferInitializer::FRHIBufferInitializer
                ((FRHIBufferInitializer *)local_d8,(FRHIBufferInitializer *)local_88);
      if ((local_58 != (FRHICommandListBase *)0x0) && (local_50 != (FRHIBuffer *)0x0)) {
        FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_88);
      }
      if (local_88._0_8_ != 0) {
        plVar11 = (longlong *)(local_88 + 0x10);
        if ((longlong *)local_88._40_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_88._40_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      iVar4 = *(int *)(*(longlong *)(lVar10 + 0x10) + 0xf8);
      _Src = *(void **)(*(longlong *)(lVar10 + 0x10) + 0xf0);
      if ((iVar4 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar14 = (longlong)iVar4 * 8;
      if ((local_90 < uVar14) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Size <= GetWritableDataSize()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBufferInitializer.h"
                             ,0x27,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      memcpy(local_98,_Src,uVar14);
      FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_d8);
      FRHICommandList::CopyBufferRegion
                ((FRHICommandList *)pFVar7->_padding_,
                 *(FRHIBuffer **)(*(longlong *)(lVar10 + 0x10) + 0x100),0,local_1d0,0,
                 (longlong)*(int *)(*(longlong *)(lVar10 + 0x10) + 0xf8) << 3);
      *(undefined1 *)(*(longlong *)(lVar10 + 0x10) + 0x110) = 0;
      if (local_1d0 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_1d0);
      }
      if ((local_a8 != (FRHICommandListBase *)0x0) && (local_a0 != (FRHIBuffer *)0x0)) {
        FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_d8);
      }
      if (local_d8._0_8_ != 0) {
        plVar11 = (longlong *)(local_d8 + 0x10);
        if ((longlong *)local_d8._40_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_d8._40_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
    }
    TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
  } while( true );
}

