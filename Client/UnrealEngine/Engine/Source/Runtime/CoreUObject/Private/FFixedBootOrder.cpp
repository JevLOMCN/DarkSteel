// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FFixedBootOrder @ 141ed3560

FFixedBootOrder * __thiscall
`FEDLBootNotificationManager::ConstructWaitingBootObjects'::__l2::FFixedBootOrder::FFixedBootOrder
          (void *this)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  void *_Src;
  FScriptContainerElement *_Src_00;
  code *pcVar4;
  FConfigSection *pFVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  FName *pFVar9;
  FFixedBootOrder *pFVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  FName local_res10;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  FString local_b8;
  FConfigSection *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  FConfigSection *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  FString local_50;
  
  uVar13 = 0;
  uVar14 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  local_a8 = FConfigCacheIni::GetSection
                       (GConfig,L"/Script/Engine.StreamingSettings",false,&GEngineIni);
  if (local_a8 == (FConfigSection *)0x0) {
    return this;
  }
  local_98 = &local_a8->_padding_;
  local_88 = 0;
  uVar2 = (uint)local_a8->_padding_;
  uStack_9c = 1;
  uStack_8c = uVar13;
  if (uVar2 != 0) {
    plVar15 = (longlong *)local_a8->_padding_;
    if ((longlong *)local_a8->_padding_ == (longlong *)0x0) {
      plVar15 = local_98;
    }
    uVar3 = (uint)*plVar15;
    uVar14 = uVar13;
    local_88 = uVar13;
    while (uVar3 == 0) {
      lVar11 = (longlong)(int)uVar14;
      local_88 = local_88 + 0x20;
      uVar14 = uVar14 + 1;
      uStack_8c = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_141ed3640;
      uVar3 = *(uint *)((longlong)plVar15 + lVar11 * 4 + 4);
    }
    uStack_9c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_9c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uStack_8c = (local_88 - 1) + (int)lVar11;
    if ((int)uVar2 < (int)uStack_8c) {
      uStack_8c = uVar2;
    }
  }
LAB_141ed3640:
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,uVar14);
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = uStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_a0 = uVar14;
  uStack_84 = uStack_8c;
  local_78 = local_a8;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_98;
  TStack_70.CurrentBitIndex = uStack_8c;
  if ((int)uStack_8c < (int)uVar2) {
    do {
      pFVar5 = local_78;
      lVar11 = (longlong)TStack_70.CurrentBitIndex;
      bVar6 = ::FName::Equals(*(FName *)(local_78->_padding_ + lVar11 * 0x28),L"FixedBootOrder");
      if (bVar6) {
        lVar11 = pFVar5->_padding_ + lVar11 * 0x28;
        if (*(char *)(lVar11 + 0x1d) == '\0') {
          iVar7 = *(int *)(lVar11 + 0x10);
          _Src = *(void **)(lVar11 + 8);
          uVar13 = uVar13 | 2;
          local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b8.Data.ArrayNum = iVar7;
          if (iVar7 == 0) {
            local_b8.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar7,0,(ForAnyElementType *)&local_b8,iVar7,&local_b8.Data.ArrayMax);
            memcpy(local_b8.Data.AllocatorInstance.Data,_Src,(longlong)iVar7 * 2);
          }
          pFVar8 = &local_b8;
        }
        else {
          uVar13 = uVar13 | 1;
          pFVar8 = FConfigValue::ExpandValue(&local_50,(FString *)(lVar11 + 8));
        }
        local_c8.Data = (FScriptContainerElement *)0x0;
        local_c0 = (pFVar8->Data).ArrayNum;
        lVar11 = (longlong)local_c0;
        _Src_00 = (pFVar8->Data).AllocatorInstance.Data;
        if (local_c0 == 0) {
          local_bc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_c0,0,&local_c8,local_c0,&local_bc);
          memcpy(local_c8.Data,_Src_00,lVar11 * 2);
        }
        if (((uVar13 & 2) != 0) &&
           (uVar13 = uVar13 & 0xfffffffd,
           local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (((uVar13 & 1) != 0) &&
           (uVar13 = uVar13 & 0xfffffffe,
           local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_c0 != 0) {
          FVar12.Data = local_c8.Data;
        }
        pFVar9 = ::FName::FName(&local_res10,(wchar_t *)FVar12.Data);
        if (((*(FName **)this <= pFVar9) &&
            (pFVar9 < *(FName **)this + *(int *)((longlong)this + 0xc))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FFixedBootOrder *)(*pcVar4)();
          return pFVar10;
        }
        iVar7 = *(int *)((longlong)this + 8);
        if (iVar7 == *(int *)((longlong)this + 0xc)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,this,(int *)((longlong)this + 0xc));
        }
        *(int *)((longlong)this + 8) = iVar7 + 1;
        *(FName *)(*(longlong *)this + (longlong)iVar7 * 8) = *pFVar9;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data);
        }
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (int)*(longlong *)&(TStack_70.Array)->NumBits);
  }
  return this;
}

