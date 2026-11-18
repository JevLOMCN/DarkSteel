// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 12

// GetNeighborEdgeFixup @ 145f2e620

/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

ULandscapeHeightmapTextureEdgeFixup * __thiscall
FLandscapeGroup::GetNeighborEdgeFixup
          (FLandscapeGroup *this,TIntPoint<int> param_1,EDirectionIndex param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  TIntPoint<int>_u_0 TVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  iVar8 = 0;
  TVar3 = (TIntPoint<int>_u_0)0x0;
  if (param_2 < Count) {
    iVar8 = (*(TIntPoint<int>_u_0 *)&RelativePositions[param_2].field0_0x0._s_0).Y;
    TVar3._s_0 = *(TIntPoint<int>_u_0 *)&RelativePositions[param_2].field0_0x0._s_0;
  }
  iVar6 = TVar3._s_0.X + param_1.field0_0x0._0_4_;
  uVar9 = param_1.field0_0x0._4_4_ + iVar8;
  uVar7 = iVar6 - uVar9 ^ uVar9 >> 0xd;
  uVar4 = (-0x61c88647 - uVar7) - uVar9 ^ uVar7 << 8;
  uVar10 = (uVar9 - uVar7) - uVar4 ^ uVar4 >> 0xd;
  uVar7 = (uVar7 - uVar10) - uVar4 ^ uVar10 >> 0xc;
  uVar4 = (uVar4 - uVar7) - uVar10 ^ uVar7 << 0x10;
  uVar10 = (uVar10 - uVar4) - uVar7 ^ uVar4 >> 5;
  uVar7 = (uVar7 - uVar10) - uVar4 ^ uVar10 >> 3;
  uVar4 = (uVar4 - uVar7) - uVar10 ^ uVar7 << 10;
  if (*(int *)&(this->XYToEdgeFixupMap).field_0x8 != *(int *)&(this->XYToEdgeFixupMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->XYToEdgeFixupMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->XYToEdgeFixupMap).field_0x38;
    }
    iVar8 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->XYToEdgeFixupMap).field_0x48 - 1U &
                              ((uVar10 - uVar4) - uVar7 ^ uVar4 >> 0xf)) * 4);
    if (iVar8 != -1) {
      do {
        uVar2 = *(undefined8 *)(*(longlong *)&this->XYToEdgeFixupMap + (longlong)iVar8 * 0x18);
        lVar1 = *(longlong *)&this->XYToEdgeFixupMap + (longlong)iVar8 * 0x18;
        if (((int)uVar2 == iVar6) && ((uint)((ulonglong)uVar2 >> 0x20) == uVar9)) {
          if (iVar8 == -1) {
            return (ULandscapeHeightmapTextureEdgeFixup *)0x0;
          }
          TVar3 = (TIntPoint<int>_u_0)(lVar1 + 8);
          if (lVar1 == 0) {
            TVar3 = (TIntPoint<int>_u_0)0x0;
          }
          if (TVar3 == (TIntPoint<int>_u_0)0x0) {
            return (ULandscapeHeightmapTextureEdgeFixup *)0x0;
          }
          return *(ULandscapeHeightmapTextureEdgeFixup **)TVar3;
        }
        iVar8 = *(int *)(lVar1 + 0x10);
      } while (iVar8 != -1);
    }
  }
  return (ULandscapeHeightmapTextureEdgeFixup *)0x0;
}

// ~FLandscapeGroup @ 145f7d350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLandscapeGroup::~FLandscapeGroup(FLandscapeGroup *this)

{
  FWeakObjectPtr *pFVar1;
  ulonglong uVar2;
  ForElementType<FSetElementId> FVar3;
  void *pvVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  BOOLEAN BVar8;
  ULandscapeComponent *pUVar9;
  byte bVar10;
  longlong lVar11;
  int iVar12;
  FWeakObjectPtr *pFVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined1 local_107 [7];
  longlong *local_100;
  uint uStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  int local_cc;
  FWeakObjectPtr local_c8;
  longlong *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  uVar14 = 0;
  if (0 < *(int *)&(this->AllRegisteredFixups).Elements.field_0x8 -
          *(int *)&(this->AllRegisteredFixups).Elements.field_0x34) {
    if (2 < (byte)LogLandscape._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
    }
    local_88._0_8_ = 0;
    local_88._8_8_ = 0;
    local_68 = (uint *)0x0;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
                 *)local_88,&this->AllRegisteredFixups);
    uVar16 = local_60;
    uStack_f4 = 1;
    local_e0 = 0;
    uStack_e4 = local_e0;
    if (local_60 != 0) {
      puVar15 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar15 = local_68;
      }
      uVar17 = *puVar15;
      local_e0 = 0;
      uVar14 = 0;
      while (uVar17 == 0) {
        lVar11 = (longlong)(int)uVar14;
        local_e0 = local_e0 + 0x20;
        uVar14 = uVar14 + 1;
        uStack_e4 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
        goto LAB_145f7d471;
        uVar17 = puVar15[lVar11 + 1];
      }
      uStack_f4 = -uVar17 & uVar17;
      uVar2 = (ulonglong)uStack_f4 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_d0 = (int)lVar11;
      uStack_e4 = (local_e0 - 1) + local_d0;
      if ((int)local_60 < (int)uStack_e4) {
        uStack_e4 = local_60;
      }
    }
LAB_145f7d471:
    local_100 = (longlong *)local_88;
    local_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    uVar17 = local_60 & 0xffffffe0;
    iStack_d8 = local_88._8_4_ - local_54;
    uStack_e8 = 0xffffffff;
    TStack_b8.CurrentBitIndex = uStack_e4;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    TStack_b8._padding_ = CONCAT44(uStack_f4,uVar14);
    iVar12 = (int)local_60 >> 5;
    TStack_b8._28_4_ = uStack_e4;
    TStack_b8.BaseBitIndex = local_e0;
    uStack_98 = CONCAT44(uStack_d4,iStack_d8);
    bVar10 = (byte)local_60;
    uStack_f8 = uVar14;
    uStack_dc = uStack_e4;
    local_c0 = local_100;
    TStack_b8.Array = local_f0;
    if (((int)local_60 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar16 != local_60) {
      puVar15 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar15 = local_68;
      }
      uVar14 = -1 << (bVar10 & 0x1f) & puVar15[iVar12];
      while (uVar14 == 0) {
        lVar11 = (longlong)iVar12;
        uVar17 = uVar17 + 0x20;
        iVar12 = iVar12 + 1;
        uVar16 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_145f7d582;
        uVar14 = puVar15[lVar11 + 1];
      }
      uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_cc = (int)lVar11;
      uVar16 = local_cc + -1 + uVar17;
      if ((int)local_60 < (int)uVar16) {
        uVar16 = local_60;
      }
    }
LAB_145f7d582:
    while( true ) {
      plVar6 = local_c0;
      if ((int)local_c0[1] - *(int *)((longlong)local_c0 + 0x34) != (int)uStack_98) {
        local_108 = 0;
        `TSparseArray<TSparseSetElement<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_108);
      }
      if (((TStack_b8.CurrentBitIndex == uVar16) &&
          (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
         (plVar6 == (longlong *)local_88)) break;
      lVar11 = *(longlong *)(*plVar6 + (longlong)TStack_b8.CurrentBitIndex * 0x10);
      if (*(FLandscapeGroup **)(lVar11 + 0x48) == this) {
        pUVar9 = *(ULandscapeComponent **)(lVar11 + 0x40);
      }
      else {
        pFVar13 = *(FWeakObjectPtr **)(lVar11 + 0x80);
        iVar12 = *(int *)(lVar11 + 0x88);
        pFVar1 = pFVar13 + iVar12;
        while( true ) {
          if (*(int *)(lVar11 + 0x88) != iVar12) {
            local_107[0] = 0;
            `TCheckedPointerIterator<TWeakObjectPtr<ULandscapeComponent,FWeakObjectPtr>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_107);
          }
          if (pFVar13 == pFVar1) goto LAB_145f7d652;
          local_c8 = *pFVar13;
          pUVar9 = (ULandscapeComponent *)FWeakObjectPtr::Get(&local_c8);
          if ((pUVar9 != (ULandscapeComponent *)0x0) && (pUVar9->RegisteredLandscapeGroup == this))
          break;
          pFVar13 = pFVar13 + 1;
        }
      }
      UnregisterComponent(this,pUVar9);
LAB_145f7d652:
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
    if ((*(int *)&(this->AllRegisteredFixups).Elements.field_0x8 !=
         *(int *)&(this->AllRegisteredFixups).Elements.field_0x34) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllRegisteredFixups.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                           ,899,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    TSparseArray<TSparseSetElement<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
  }
  if ((*(int *)&(this->HeightmapsNeedingEdgeTexturePatching).Elements.field_0x8 !=
       *(int *)&(this->HeightmapsNeedingEdgeTexturePatching).Elements.field_0x34) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("HeightmapsNeedingEdgeTexturePatching.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                         ,0x389,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (this->HeightmapsNeedingEdgeTexturePatching).HashSize = 0;
  FVar3 = (this->HeightmapsNeedingEdgeTexturePatching).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->HeightmapsNeedingEdgeTexturePatching).Elements);
  (this->HeightmapsMoved).HashSize = 0;
  FVar3 = (this->HeightmapsMoved).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->HeightmapsMoved).Elements);
  (this->AllRegisteredFixups).HashSize = 0;
  FVar3 = (this->AllRegisteredFixups).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AllRegisteredFixups).Elements);
  *(undefined4 *)&(this->XYToEdgeFixupMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->XYToEdgeFixupMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->XYToEdgeFixupMap);
  BVar8 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar8 == '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)this);
  }
  return;
}

// AddReferencedObjects @ 145f81290

void __cdecl
FLandscapeGroup::AddReferencedObjects(FLandscapeGroup *param_1,FReferenceCollector *param_2)

{
  FReferenceCollector::AddReferencedObjects<ULandscapeHeightmapTextureEdgeFixup>
            (param_2,&param_1->AllRegisteredFixups,(UObject *)0x0,(FProperty *)0x0);
  FReferenceCollector::
  AddReferencedObjects<UE::Math::TIntPoint<int>,ULandscapeHeightmapTextureEdgeFixup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>_>
            (param_2,(TMapBase<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>_>
                      *)&param_1->XYToEdgeFixupMap,(UObject *)0x0,(FProperty *)0x0);
  return;
}

// DisableAndUnmap @ 145f8a7a0

void __thiscall
FLandscapeGroup::DisableAndUnmap(FLandscapeGroup *this,ULandscapeHeightmapTextureEdgeFixup *param_1)

{
  int *piVar1;
  TArray<TWeakObjectPtr<ULandscapeComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  ULandscapeComponent *pUVar3;
  FWeakObjectPtr *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ULandscapeComponent *pUVar8;
  uint uVar9;
  FWeakObjectPtr *this_00;
  TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_>_u_0 local_res8;
  ULandscapeComponent *local_res10;
  FWeakObjectPtr local_28 [2];
  
  local_res8.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (param_1 != (ULandscapeHeightmapTextureEdgeFixup *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (ULandscapeHeightmapTextureEdgeFixup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  uVar9 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  iVar7 = TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_>_>
                    (&this->AllRegisteredFixups,uVar9 >> 0x10 ^ uVar9,
                     (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_> *)&local_res8.ObjectPtr
                    );
  if ((iVar7 == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllRegisteredFixups.Contains(Fixup)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                         ,0x137,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar2 = &param_1->DisabledComponents;
  this_00 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
  pFVar4 = this_00 + (param_1->DisabledComponents).ArrayNum;
  do {
    if (this_00 == pFVar4) {
LAB_145f8a8c1:
      pUVar3 = (param_1->ActiveComponent).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar3 != (ULandscapeComponent *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar3 != (ULandscapeComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
      }
      local_28[0].ObjectIndex = 0;
      local_28[0].ObjectSerialNumber = 0;
      local_res10 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (ULandscapeComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      FWeakObjectPtr::operator=(local_28,(FObjectPtr)&local_res10);
      pFVar4 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
      if (((pFVar4 <= local_28) && (local_28 < pFVar4 + (param_1->DisabledComponents).ArrayMax)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (param_1->DisabledComponents).ArrayNum;
      piVar1 = &(param_1->DisabledComponents).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,piVar1);
      }
      (param_1->DisabledComponents).ArrayNum = iVar7 + 1;
      *(FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_28[0];
      Unmap(this,param_1,true);
      return;
    }
    pUVar8 = (ULandscapeComponent *)FWeakObjectPtr::Get(this_00);
    pUVar3 = (param_1->ActiveComponent).field0_0x0.DebugPtr;
    if (pUVar3 == (ULandscapeComponent *)0x0) {
      bVar6 = pUVar8 == (ULandscapeComponent *)0x0;
    }
    else {
      bVar6 = pUVar3 == pUVar8;
    }
    if (bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Fixup->DisabledComponents.Contains(Fixup->ActiveComponent)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                         ,0x13a,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_145f8a8c1;
    }
    this_00 = this_00 + 1;
  } while( true );
}

// Map @ 145f98cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TIntPoint<int> __thiscall
FLandscapeGroup::Map
          (FLandscapeGroup *this,ULandscapeHeightmapTextureEdgeFixup *param_1,
          ULandscapeComponent *param_2)

{
  TMap<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_>_u_0 TVar4;
  ULandscapeHeightmapTextureEdgeFixup *pUVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  ULandscapeComponent *pUVar8;
  bool bVar9;
  code *pcVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [12];
  double dVar20;
  double dVar21;
  TMap<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>_>
  *pTVar22;
  bool bVar23;
  int iVar24;
  TIntPoint<int> TVar25;
  ALandscapeProxy *pAVar26;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar27;
  longlong *plVar28;
  uint uVar29;
  undefined1 *puVar30;
  int iVar31;
  ULandscapeComponent *in_R9;
  ForAnyElementType FVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar49;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  uint uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  double dVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  double dVar92;
  undefined1 auVar91 [16];
  undefined4 uVar93;
  uint uVar94;
  uint uVar95;
  undefined1 auVar96 [16];
  undefined4 uVar97;
  undefined4 uVar98;
  undefined1 local_res8 [8];
  TIntPoint<int>_u_0 local_res10;
  ULandscapeComponent *local_res18;
  ULandscapeComponent *local_res20;
  undefined1 local_2c8 [4];
  undefined1 local_2c4 [4];
  TArray<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,TSizedDefaultAllocator<32>_> local_2c0;
  TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_u_0 local_2b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2a8;
  TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_>_u_0 local_288;
  TIntPoint<int>_u_0 local_280;
  FString local_278;
  FString local_268;
  undefined1 local_258 [16];
  double local_248;
  undefined1 local_240 [16];
  double local_230;
  undefined1 local_228 [16];
  double local_218;
  TMap<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>_>
  *local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_208;
  undefined8 uStack_1e8;
  undefined1 local_1e0 [40];
  int local_1b8;
  undefined4 uStack_1b4;
  double local_1b0;
  double dStack_1a8;
  FString local_1a0;
  FString local_190;
  FString local_180 [2];
  double local_160;
  longlong local_150;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  double local_128;
  double dStack_120;
  double local_118;
  
  local_res10 = (TIntPoint<int>_u_0)param_1;
  local_res18 = param_2;
  local_res20 = in_R9;
  if ((*(char *)((longlong)&param_2->_padding_ + 1) != '\0') &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Fixup->bMapped == false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                          ,0x175,L""), bVar23)) {
    pcVar10 = (code *)swi(3);
    TVar25.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar10)();
    return (TIntPoint<int>)TVar25.field0_0x0;
  }
  pAVar26 = ULandscapeComponent::GetLandscapeProxy(in_R9);
  auVar73._0_8_ = in_R9->_padding_;
  auVar73._8_8_ = in_R9->_padding_;
  auVar2._0_8_ = in_R9->_padding_;
  auVar2._8_8_ = in_R9->_padding_;
  dVar16 = (double)in_R9->_padding_;
  dVar18 = (double)in_R9->_padding_;
  dVar86 = (double)in_R9->_padding_;
  dVar34 = (double)in_R9->_padding_;
  dVar14 = (double)in_R9->_padding_;
  dVar11 = (double)in_R9->_padding_;
  dVar20 = (double)in_R9->_padding_;
  (**(code **)(in_R9->_padding_ + 0x598))();
  uVar95 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar94 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_128 = dVar34 * local_128;
  dStack_120 = dVar14 * dStack_120;
  uVar76 = (undefined4)((ulonglong)dStack_120 >> 0x20);
  auVar87._0_8_ = local_118 * dVar11;
  auVar87._8_8_ = dVar20 * 0.0;
  auVar78._8_4_ = SUB84(dStack_120,0);
  auVar78._0_8_ = local_128;
  auVar78._12_4_ = uVar76;
  auVar51._8_4_ = SUB84(dStack_120,0);
  auVar51._0_8_ = local_128;
  auVar51._12_4_ = uVar76;
  auVar52 = blendpd(auVar51,auVar87,2);
  auVar96 = blendpd(auVar73,auVar2,2);
  auVar70._8_4_ = (int)auVar2._0_8_;
  auVar70._0_8_ = auVar73._8_8_;
  auVar70._12_4_ = (int)((ulonglong)auVar2._0_8_ >> 0x20);
  auVar79._0_8_ = auVar78._8_8_ * (double)auVar73._0_8_ - (double)auVar73._8_8_ * local_128;
  auVar79._8_8_ = auVar87._0_8_ * (double)auVar73._8_8_ - auVar70._8_8_ * dStack_120;
  dVar33 = auVar96._0_8_;
  dVar49 = auVar96._8_8_;
  auVar53._0_8_ = auVar52._0_8_ * (double)auVar2._0_8_ - dVar33 * auVar87._0_8_;
  auVar53._8_8_ = auVar52._8_8_ * (double)auVar2._8_8_ - dVar49 * auVar87._8_8_;
  auVar52 = blendpd(auVar79,auVar53,2);
  auVar80._0_8_ = auVar52._0_8_ + auVar52._0_8_;
  auVar80._8_8_ = auVar52._8_8_ + auVar52._8_8_;
  dVar65 = auVar79._8_8_ + auVar79._8_8_;
  dVar17 = auVar53._0_8_ + auVar53._0_8_;
  uVar76 = SUB84(dVar17,0);
  uVar77 = (undefined4)((ulonglong)dVar17 >> 0x20);
  auVar66._8_4_ = uVar76;
  auVar66._0_8_ = dVar65;
  auVar66._12_4_ = uVar77;
  auVar96._8_4_ = uVar76;
  auVar96._0_8_ = dVar65;
  auVar96._12_4_ = uVar77;
  auVar54._8_4_ = uVar76;
  auVar54._0_8_ = dVar65;
  auVar54._12_4_ = uVar77;
  auVar52 = blendpd(auVar54,auVar80,2);
  auVar67._0_8_ = auVar66._8_8_ * (double)auVar73._0_8_ - dVar65 * (double)auVar73._8_8_;
  auVar67._8_8_ = auVar80._0_8_ * (double)auVar73._8_8_ - auVar96._8_8_ * (double)auVar2._0_8_;
  auVar36._8_4_ = SUB84(auVar80._8_8_,0);
  auVar36._0_8_ = auVar80._0_8_;
  auVar36._12_4_ = (int)((ulonglong)auVar80._8_8_ >> 0x20);
  auVar55._0_8_ = auVar52._0_8_ * (double)auVar2._0_8_ - auVar80._0_8_ * dVar33;
  auVar55._8_8_ = auVar52._8_8_ * (double)auVar2._8_8_ - auVar36._8_8_ * dVar49;
  auVar37._8_4_ = SUB84(auVar67._8_8_,0);
  auVar37._0_8_ = auVar67._0_8_;
  auVar37._12_4_ = (int)((ulonglong)auVar67._8_8_ >> 0x20);
  auVar52 = blendpd(auVar67,auVar55,2);
  dVar35 = dVar34 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  dVar50 = dVar14 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  uVar76 = SUB84(dVar50,0);
  uVar77 = (undefined4)((ulonglong)dVar50 >> 0x20);
  auVar88._8_4_ = uVar76;
  auVar88._0_8_ = dVar35;
  auVar88._12_4_ = uVar77;
  auVar38._8_4_ = uVar76;
  auVar38._0_8_ = dVar35;
  auVar38._12_4_ = uVar77;
  local_218 = auVar80._0_8_ * (double)auVar2._8_8_ + auVar87._0_8_ + auVar52._0_8_ + dVar86;
  auVar56._8_4_ = uVar76;
  auVar56._0_8_ = dVar35;
  auVar56._12_4_ = uVar77;
  auVar81._0_8_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z * dVar11;
  auVar81._8_8_ = dVar20 * 0.0;
  dVar16 = dVar65 * (double)auVar2._8_8_ + local_128 + auVar37._8_8_ + dVar16;
  dVar18 = dVar17 * (double)auVar2._8_8_ + dStack_120 + auVar55._0_8_ + dVar18;
  local_228._8_4_ = SUB84(dVar18,0);
  local_228._0_8_ = dVar16;
  local_228._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  auVar89._0_8_ = auVar88._8_8_ * (double)auVar73._0_8_ - dVar35 * (double)auVar73._8_8_;
  auVar89._8_8_ = auVar81._0_8_ * (double)auVar73._8_8_ - auVar38._8_8_ * (double)auVar2._0_8_;
  auVar52 = blendpd(auVar56,auVar81,2);
  lVar3 = pAVar26->_padding_;
  auVar39._8_4_ = SUB84(auVar81._8_8_,0);
  auVar39._0_8_ = auVar81._0_8_;
  auVar39._12_4_ = (int)((ulonglong)auVar81._8_8_ >> 0x20);
  auVar57._0_8_ = auVar52._0_8_ * (double)auVar2._0_8_ - auVar81._0_8_ * dVar33;
  auVar57._8_8_ = auVar52._8_8_ * (double)auVar2._8_8_ - auVar39._8_8_ * dVar49;
  auVar52 = blendpd(auVar89,auVar57,2);
  dVar65 = auVar89._8_8_ + auVar89._8_8_;
  dVar17 = auVar57._0_8_ + auVar57._0_8_;
  uVar76 = SUB84(dVar17,0);
  uVar77 = (undefined4)((ulonglong)dVar17 >> 0x20);
  auVar90._0_8_ = auVar52._0_8_ + auVar52._0_8_;
  auVar90._8_8_ = auVar52._8_8_ + auVar52._8_8_;
  auVar68._8_4_ = uVar76;
  auVar68._0_8_ = dVar65;
  auVar68._12_4_ = uVar77;
  auVar40._8_4_ = uVar76;
  auVar40._0_8_ = dVar65;
  auVar40._12_4_ = uVar77;
  auVar58._8_4_ = uVar76;
  auVar58._0_8_ = dVar65;
  auVar58._12_4_ = uVar77;
  auVar52 = blendpd(auVar58,auVar90,2);
  auVar69._0_8_ = auVar68._8_8_ * (double)auVar73._0_8_ - dVar65 * (double)auVar73._8_8_;
  auVar69._8_8_ = auVar90._0_8_ * (double)auVar73._8_8_ - auVar40._8_8_ * (double)auVar2._0_8_;
  auVar41._8_4_ = SUB84(auVar90._8_8_,0);
  auVar41._0_8_ = auVar90._0_8_;
  auVar41._12_4_ = (int)((ulonglong)auVar90._8_8_ >> 0x20);
  auVar59._0_8_ = auVar52._0_8_ * (double)auVar2._0_8_ - auVar90._0_8_ * dVar33;
  auVar59._8_8_ = auVar52._8_8_ * (double)auVar2._8_8_ - auVar41._8_8_ * dVar49;
  auVar42._8_4_ = SUB84(auVar69._8_8_,0);
  auVar42._0_8_ = auVar69._0_8_;
  auVar42._12_4_ = (int)((ulonglong)auVar69._8_8_ >> 0x20);
  auVar70 = blendpd(auVar69,auVar59,2);
  dVar65 = dVar65 * (double)auVar2._8_8_ + dVar35 + auVar42._8_8_;
  dVar50 = dVar17 * (double)auVar2._8_8_ + dVar50 + auVar59._0_8_;
  uVar93 = (undefined4)((ulonglong)dVar50 >> 0x20);
  dVar11 = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z * dVar11;
  uVar76 = SUB84(dVar20 * 0.0,0);
  uVar77 = (undefined4)((ulonglong)(dVar20 * 0.0) >> 0x20);
  dVar20 = *(double *)(lVar3 + 0x178);
  dVar21 = *(double *)(lVar3 + 0x180);
  dVar34 = dVar34 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
  dVar14 = dVar14 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
  uVar97 = SUB84(dVar14,0);
  uVar98 = (undefined4)((ulonglong)dVar14 >> 0x20);
  auVar43._8_4_ = uVar97;
  auVar43._0_8_ = dVar34;
  auVar43._12_4_ = uVar98;
  auVar60._8_4_ = uVar97;
  auVar60._0_8_ = dVar34;
  auVar60._12_4_ = uVar98;
  auVar52._8_4_ = uVar76;
  auVar52._0_8_ = dVar11;
  auVar52._12_4_ = uVar77;
  auVar52 = blendpd(auVar60,auVar52,2);
  local_248 = auVar90._0_8_ * (double)auVar2._8_8_ + auVar81._0_8_ + auVar70._0_8_;
  dVar92 = auVar90._8_8_ * (double)auVar2._8_8_ + auVar81._8_8_ + auVar70._8_8_;
  auVar82._8_4_ = uVar97;
  auVar82._0_8_ = dVar34;
  auVar82._12_4_ = uVar98;
  local_258._8_4_ = SUB84(dVar50,0);
  local_258._0_8_ = dVar65;
  local_258._12_4_ = uVar93;
  auVar83._0_8_ = auVar82._8_8_ * (double)auVar73._0_8_ - dVar34 * (double)auVar73._8_8_;
  auVar83._8_8_ = dVar11 * (double)auVar73._8_8_ - auVar43._8_8_ * (double)auVar2._0_8_;
  auVar44._8_4_ = uVar76;
  auVar44._0_8_ = dVar11;
  auVar44._12_4_ = uVar77;
  auVar61._0_8_ = auVar52._0_8_ * (double)auVar2._0_8_ - dVar11 * dVar33;
  auVar61._8_8_ = auVar52._8_8_ * (double)auVar2._8_8_ - auVar44._8_8_ * dVar49;
  auVar52 = blendpd(auVar83,auVar61,2);
  dVar17 = auVar83._8_8_ + auVar83._8_8_;
  dVar86 = auVar61._0_8_ + auVar61._0_8_;
  uVar76 = SUB84(dVar86,0);
  uVar77 = (undefined4)((ulonglong)dVar86 >> 0x20);
  auVar84._0_8_ = auVar52._0_8_ + auVar52._0_8_;
  auVar84._8_8_ = auVar52._8_8_ + auVar52._8_8_;
  auVar71._8_4_ = uVar76;
  auVar71._0_8_ = dVar17;
  auVar71._12_4_ = uVar77;
  auVar45._8_4_ = uVar76;
  auVar45._0_8_ = dVar17;
  auVar45._12_4_ = uVar77;
  auVar62._8_4_ = uVar76;
  auVar62._0_8_ = dVar17;
  auVar62._12_4_ = uVar77;
  dVar35 = *(double *)(lVar3 + 0x188);
  auVar52 = blendpd(auVar62,auVar84,2);
  auVar72._0_8_ = auVar71._8_8_ * (double)auVar73._0_8_ - dVar17 * (double)auVar73._8_8_;
  auVar72._8_8_ = auVar84._0_8_ * (double)auVar73._8_8_ - auVar45._8_8_ * (double)auVar2._0_8_;
  auVar46._8_4_ = SUB84(auVar84._8_8_,0);
  auVar46._0_8_ = auVar84._0_8_;
  auVar46._12_4_ = (int)((ulonglong)auVar84._8_8_ >> 0x20);
  auVar63._0_8_ = auVar52._0_8_ * (double)auVar2._0_8_ - auVar84._0_8_ * dVar33;
  auVar63._8_8_ = auVar52._8_8_ * (double)auVar2._8_8_ - auVar46._8_8_ * dVar49;
  auVar47._8_4_ = SUB84(auVar72._8_8_,0);
  auVar47._0_8_ = auVar72._0_8_;
  auVar47._12_4_ = (int)((ulonglong)auVar72._8_8_ >> 0x20);
  auVar73 = blendpd(auVar72,auVar63,2);
  dVar17 = dVar17 * (double)auVar2._8_8_ + dVar34 + auVar47._8_8_;
  dVar86 = dVar86 * (double)auVar2._8_8_ + dVar14 + auVar63._0_8_;
  local_230 = auVar84._0_8_ * (double)auVar2._8_8_ + dVar11 + auVar73._0_8_;
  local_240._8_4_ = SUB84(dVar86,0);
  local_240._0_8_ = dVar17;
  local_240._12_4_ = (int)((ulonglong)dVar86 >> 0x20);
  this_00 = &this->XYToEdgeFixupMap;
  local_1b0 = dVar20;
  dStack_1a8 = dVar21;
  local_160 = dVar35;
  if (*(int *)&(this->XYToEdgeFixupMap).field_0x8 - *(int *)&(this->XYToEdgeFixupMap).field_0x34 <=
      *(int *)&(this->HeightmapsMoved).Elements.field_0x8 -
      *(int *)&(this->HeightmapsMoved).Elements.field_0x34) {
    puVar6 = &(this->XYToEdgeFixupMap).field_0x10;
    local_2a8._padding_._0_4_ = 0;
    local_2a8._padding_._4_4_ = 1;
    local_2a8.UnvisitedBitMask = 0xffffffff;
    local_2a8.CurrentBitIndex = 0;
    local_2a8.BaseBitIndex = 0;
    local_2a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar6;
    if (*(int *)&(this->XYToEdgeFixupMap).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2a8);
    }
    TStack_208._padding_ = CONCAT44(local_2a8._padding_._4_4_,(undefined4)local_2a8._padding_);
    TStack_208.CurrentBitIndex = local_2a8.CurrentBitIndex;
    TStack_208.UnvisitedBitMask = local_2a8.UnvisitedBitMask;
    TStack_208._28_4_ = local_2a8._28_4_;
    TStack_208.BaseBitIndex = local_2a8.BaseBitIndex;
    local_1b8 = *(int *)&(this->XYToEdgeFixupMap).field_0x8 -
                *(int *)&(this->XYToEdgeFixupMap).field_0x34;
    local_1e0._16_8_ = local_2a8.Array;
    uStack_1e8 = CONCAT44(uStack_1b4,local_1b8);
    TStack_208.Array = local_2a8.Array;
    local_210 = this_00;
    local_1e0._0_8_ = this_00;
    local_1e0._8_8_ = TStack_208._padding_;
    local_1e0._24_8_ = TStack_208._16_8_;
    local_1e0._32_8_ = TStack_208._24_8_;
    pTVar27 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_1e0,
                         (TBitArray<FDefaultBitArrayAllocator> *)puVar6,
                         *(int *)&(this->XYToEdgeFixupMap).field_0x28);
    local_150 = pTVar27->_padding_;
    pTStack_148 = pTVar27->Array;
    local_140._0_4_ = pTVar27->UnvisitedBitMask;
    local_140._4_4_ = pTVar27->CurrentBitIndex;
    uStack_138 = *(undefined8 *)&pTVar27->BaseBitIndex;
LAB_145f99140:
    pTVar22 = local_210;
    if (*(int *)(&local_210->field_0x0 + 8) - *(int *)(&local_210->field_0x0 + 0x34) !=
        (int)uStack_1e8) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_208.CurrentBitIndex == local_140._4_4_) && (TStack_208.Array == pTStack_148)) &&
       (pTVar22 == this_00)) {
      if (0 < *(int *)&(this->XYToEdgeFixupMap).field_0x8 -
              *(int *)&(this->XYToEdgeFixupMap).field_0x34) {
        local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2c0.ArrayNum = 0;
        local_2c0.ArrayMax = 0;
        TMapBase<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>_>
        ::GenerateValueArray<TSizedDefaultAllocator<32>_>
                  ((TMapBase<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>_>
                    *)this_00,&local_2c0);
        iVar24 = local_2c0.ArrayNum;
        pFVar1 = local_2c0.AllocatorInstance.Data + (longlong)local_2c0.ArrayNum * 8;
        FVar32.Data = local_2c0.AllocatorInstance.Data;
        while( true ) {
          if (local_2c0.ArrayNum != iVar24) {
            local_2c8[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_2c8);
          }
          param_2 = local_res18;
          param_1 = (ULandscapeHeightmapTextureEdgeFixup *)local_res10;
          if (FVar32.Data == pFVar1) break;
          pUVar5 = *(ULandscapeHeightmapTextureEdgeFixup **)FVar32.Data;
          if (pUVar5->bMapped != false) {
            if ((pUVar5->ActiveGroup != this) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Fixup->ActiveGroup == this",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                                    ,0x20b,L""), bVar23)) {
              pcVar10 = (code *)swi(3);
              TVar25.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar10)();
              return (TIntPoint<int>)TVar25.field0_0x0;
            }
            local_2b0.DebugPtr = (ULandscapeHeightmapTextureEdgeFixup *)0x0;
            TMap<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>_>
            ::RemoveAndCopyValue
                      (this_00,(TIntPoint<int>)(pUVar5->GroupCoord).field0_0x0._s_0,
                       (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup> *)&local_2b0.ObjectPtr);
            if (local_2b0.DebugPtr == (ULandscapeHeightmapTextureEdgeFixup *)0x0) {
              bVar23 = pUVar5 == (ULandscapeHeightmapTextureEdgeFixup *)0x0;
            }
            else {
              bVar23 = local_2b0.DebugPtr == pUVar5;
            }
            if ((!bVar23) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Fixup == RemovedEdgeFixup",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                                    ,0x210,L""), bVar23)) {
              pcVar10 = (code *)swi(3);
              TVar25.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar10)();
              return (TIntPoint<int>)TVar25.field0_0x0;
            }
            pUVar5->bMapped = false;
          }
          FVar32.Data = FVar32.Data + 8;
        }
        if (local_2c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c0.AllocatorInstance.Data);
        }
        in_R9 = local_res20;
        dVar16 = (double)local_228._0_8_;
        dVar18 = (double)local_228._8_8_;
        dVar65 = (double)local_258._0_8_;
        dVar50 = (double)local_258._8_8_;
        dVar17 = (double)local_240._0_8_;
        dVar86 = (double)local_240._8_8_;
      }
      this->ComponentResolution = in_R9->ComponentSizeQuads;
      auVar15._8_4_ = SUB84(dVar18,0);
      auVar15._0_8_ = dVar16;
      auVar15._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      *(undefined1 (*) [16])&(this->GroupCoordOrigin).field0_0x0 = auVar15;
      (this->GroupCoordOrigin).field0_0x0._s_0.Z = local_218;
      auVar12._8_4_ = SUB84(dVar50,0);
      auVar12._0_8_ = dVar65;
      auVar12._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
      *(undefined1 (*) [16])&(this->GroupCoordXVector).field0_0x0 = auVar12;
      (this->GroupCoordXVector).field0_0x0._s_0.Z = local_248;
      auVar13._8_4_ = SUB84(dVar86,0);
      auVar13._0_8_ = dVar17;
      auVar13._12_4_ = (int)((ulonglong)dVar86 >> 0x20);
      *(undefined1 (*) [16])&(this->GroupCoordYVector).field0_0x0 = auVar13;
      (this->LandscapeGridScale).field0_0x0._s_0.X = dVar20;
      (this->LandscapeGridScale).field0_0x0._s_0.Y = dVar21;
      (this->GroupCoordYVector).field0_0x0._s_0.Z = local_230;
      (this->LandscapeGridScale).field0_0x0._s_0.Z = dVar35;
      goto LAB_145f99679;
    }
    TVar4 = (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_>_u_0)
            ((TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_>_u_0 *)
            (*(longlong *)&pTVar22->field_0x0 + 8 + (longlong)TStack_208.CurrentBitIndex * 0x18))->
            DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar4.DebugPtr != (ULandscapeHeightmapTextureEdgeFixup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
    }
    local_288 = TVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar4.DebugPtr != (ULandscapeHeightmapTextureEdgeFixup *)0x0) {
        UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar4.DebugPtr != (ULandscapeHeightmapTextureEdgeFixup *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
      }
    }
    uVar29 = ((uint)((ulonglong)TVar4.DebugPtr >> 0x14) & 0xffff ^
             (uint)((ulonglong)TVar4.DebugPtr >> 4)) * -0x7a143595;
    uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
    iVar24 = TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_>_>
                       (&this->HeightmapsMoved,uVar29 >> 0x10 ^ uVar29,
                        (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_> *)
                        &local_288.ObjectPtr);
    if (iVar24 != -1) goto code_r0x000145f9921d;
  }
  dVar11 = __real_3f1a36e2e0000000;
  dVar34 = dVar65 - (this->GroupCoordXVector).field0_0x0._s_0.X;
  dVar35 = (this->GroupCoordXVector).field0_0x0._s_0.Y;
  auVar19._4_8_ = dVar92;
  auVar19._0_4_ = (int)((ulonglong)dVar65 >> 0x20);
  auVar91._0_8_ = auVar19._0_8_ << 0x20;
  auVar91._8_4_ = SUB84(dVar50,0);
  auVar91._12_4_ = uVar93;
  dVar65 = local_248 - (this->GroupCoordXVector).field0_0x0._s_0.Z;
  dVar50 = auVar91._8_8_ - dVar35;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar95,SUB84(dVar34,0) & uVar94)) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) & uVar95,SUB84(dVar50,0) & uVar94))) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar65 >> 0x20) & uVar95,SUB84(dVar65,0) & uVar94))) {
    bVar23 = false;
  }
  else {
    bVar23 = true;
  }
  dVar50 = (this->GroupCoordYVector).field0_0x0._s_0.X;
  dVar65 = (this->GroupCoordYVector).field0_0x0._s_0.Y;
  dVar34 = (this->GroupCoordYVector).field0_0x0._s_0.Z;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)(dVar17 - dVar50) >> 0x20) & uVar95,
                         SUB84(dVar17 - dVar50,0) & uVar94)) ||
      (uVar29 = SUB84(dVar86 - dVar65,0) & uVar94,
      uVar75 = (uint)((ulonglong)(dVar86 - dVar65) >> 0x20) & uVar95,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar75,uVar29) &&
      (double)CONCAT44(uVar75,uVar29) != __real_3f1a36e2e0000000)) ||
     (uVar29 = SUB84(local_230 - dVar34,0) & uVar94,
     uVar75 = (uint)((ulonglong)(local_230 - dVar34) >> 0x20) & uVar95,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar75,uVar29) &&
     (double)CONCAT44(uVar75,uVar29) != __real_3f1a36e2e0000000)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if ((((this->ComponentResolution != in_R9->ComponentSizeQuads) || (!bVar23)) || (!bVar9)) &&
     (2 < (byte)LogLandscape._0_1_)) {
    dVar17 = (this->GroupCoordXVector).field0_0x0._s_0.X;
    auVar74._0_8_ = dVar86 * dVar86;
    auVar74._8_8_ = dVar86;
    dVar86 = (this->GroupCoordXVector).field0_0x0._s_0.Z;
    auVar48._0_8_ = dVar86 * dVar86;
    auVar48._8_8_ = 0;
    auVar85._0_8_ = dVar35 * dVar35 + dVar17 * dVar17 + auVar48._0_8_;
    auVar85._8_8_ = 0;
    sqrtpd(auVar48,auVar85);
    auVar64._0_8_ = dVar65 * dVar65 + dVar50 * dVar50 + dVar34 * dVar34;
    auVar64._8_8_ = 0;
    sqrtpd(auVar74,auVar64);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
  }
  dVar35 = (this->LandscapeGridScale).field0_0x0._s_0.X - local_1b0;
  dVar65 = (this->LandscapeGridScale).field0_0x0._s_0.Z - local_160;
  dVar50 = (this->LandscapeGridScale).field0_0x0._s_0.Y - dStack_1a8;
  in_R9 = local_res20;
  if ((((dVar11 < (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar95,
                                   SUB84(dVar35,0) & uVar94)) ||
       (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) & uVar95,
                                  SUB84(dVar50,0) & uVar94))) ||
      (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar65 >> 0x20) & uVar95,SUB84(dVar65,0) & uVar94
                                ))) && (2 < (byte)LogLandscape._0_1_)) {
    ::FString::PrintfImpl(&local_268,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_278,L"X=%3.3f Y=%3.3f Z=%3.3f");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    in_R9 = local_res20;
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
      in_R9 = local_res20;
    }
  }
LAB_145f99679:
  dVar35 = (this->GroupCoordXVector).field0_0x0._s_0.X;
  dVar11 = (this->GroupCoordXVector).field0_0x0._s_0.Y;
  dVar50 = (this->GroupCoordXVector).field0_0x0._s_0.Z;
  dVar16 = dVar16 - (this->GroupCoordOrigin).field0_0x0._s_0.X;
  dVar86 = local_218 - (this->GroupCoordOrigin).field0_0x0._s_0.Z;
  dVar18 = dVar18 - (this->GroupCoordOrigin).field0_0x0._s_0.Y;
  dVar65 = (this->GroupCoordYVector).field0_0x0._s_0.X;
  dVar17 = (this->GroupCoordYVector).field0_0x0._s_0.Z;
  dVar11 = (dVar11 * dVar18 + dVar35 * dVar16 + dVar50 * dVar86) /
           ((dVar11 * dVar11 + dVar35 * dVar35 + dVar50 * dVar50) *
           (double)this->ComponentResolution);
  dVar35 = (this->GroupCoordYVector).field0_0x0._s_0.Y;
  dVar35 = (dVar35 * dVar18 + dVar65 * dVar16 + dVar17 * dVar86) /
           ((dVar35 * dVar35 + dVar65 * dVar65 + dVar17 * dVar17) *
           (double)this->ComponentResolution);
  iVar24 = (int)ROUND(dVar11 + dVar11 + __real_3fe0000000000000) >> 1;
  *(int *)param_1 = iVar24;
  dVar50 = __real_3f847ae147ae147b;
  dVar11 = dVar11 - (double)iVar24;
  uVar29 = SUB84(dVar11,0) & uVar94;
  uVar75 = (uint)((ulonglong)dVar11 >> 0x20) & uVar95;
  iVar24 = (int)ROUND(dVar35 + dVar35 + __real_3fe0000000000000) >> 1;
  bVar23 = (double)CONCAT44(uVar75,uVar29) != __real_3f847ae147ae147b;
  bVar9 = __real_3f847ae147ae147b <= (double)CONCAT44(uVar75,uVar29);
  *(int *)((longlong)param_1 + 4) = iVar24;
  if (((bVar9 && bVar23) ||
      (dVar35 = dVar35 - (double)iVar24, uVar94 = SUB84(dVar35,0) & uVar94,
      uVar95 = (uint)((ulonglong)dVar35 >> 0x20) & uVar95,
      dVar50 <= (double)CONCAT44(uVar95,uVar94) && (double)CONCAT44(uVar95,uVar94) != dVar50)) &&
     (2 < (byte)LogLandscape._0_1_)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)in_R9,&local_1a0,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
  }
  while( true ) {
    iVar24 = (int)param_1->_padding_;
    uVar75 = (uint)((ulonglong)param_1->_padding_ >> 0x20);
    uVar95 = iVar24 - uVar75 ^ uVar75 >> 0xd;
    uVar94 = (-0x61c88647 - uVar75) - uVar95 ^ uVar95 << 8;
    uVar29 = (uVar75 - uVar95) - uVar94 ^ uVar94 >> 0xd;
    uVar95 = (uVar95 - uVar29) - uVar94 ^ uVar29 >> 0xc;
    uVar94 = (uVar94 - uVar95) - uVar29 ^ uVar95 << 0x10;
    uVar29 = (uVar29 - uVar94) - uVar95 ^ uVar94 >> 5;
    uVar95 = (uVar95 - uVar29) - uVar94 ^ uVar29 >> 3;
    uVar94 = (uVar94 - uVar95) - uVar29 ^ uVar95 << 10;
    if (*(int *)&(this->XYToEdgeFixupMap).field_0x8 == *(int *)&(this->XYToEdgeFixupMap).field_0x34)
    break;
    puVar6 = *(undefined1 **)&(this->XYToEdgeFixupMap).field_0x40;
    puVar30 = &(this->XYToEdgeFixupMap).field_0x38;
    if (puVar6 != (undefined1 *)0x0) {
      puVar30 = puVar6;
    }
    iVar31 = *(int *)(puVar30 +
                     (ulonglong)
                     (*(int *)&(this->XYToEdgeFixupMap).field_0x48 - 1U &
                     ((uVar29 - uVar94) - uVar95 ^ uVar94 >> 0xf)) * 4);
    if (iVar31 == -1) break;
    while( true ) {
      uVar7 = *(undefined8 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar31 * 0x18);
      lVar3 = *(longlong *)&this_00->field_0x0 + (longlong)iVar31 * 0x18;
      if (((int)uVar7 == iVar24) && ((uint)((ulonglong)uVar7 >> 0x20) == uVar75)) break;
      iVar31 = *(int *)(lVar3 + 0x10);
      if (iVar31 == -1) goto LAB_145f998eb;
    }
    if (iVar31 == -1) break;
    plVar28 = (longlong *)(lVar3 + 8);
    if (lVar3 == 0) {
      plVar28 = (longlong *)0x0;
    }
    if (plVar28 == (longlong *)0x0) break;
    pUVar8 = (ULandscapeComponent *)*plVar28;
    if (pUVar8 == (ULandscapeComponent *)0x0) {
      bVar23 = param_2 == (ULandscapeComponent *)0x0;
    }
    else {
      bVar23 = pUVar8 == param_2;
    }
    if (bVar23) goto LAB_145f99925;
    if (2 < (byte)LogLandscape._0_1_) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)pUVar8->_padding_,local_180,(UObject *)0x0);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)in_R9,&local_190,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      if (local_180[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180[0].Data.AllocatorInstance.Data);
      }
    }
    *(int *)param_1 = *(int *)param_1 + 100000;
  }
LAB_145f998eb:
  local_280 = (TIntPoint<int>_u_0)param_1;
  TSet<TTuple<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<UE::Math::TIntPoint<int>_const_&>_>
            ((TSet<TTuple<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
              *)this_00,(TKeyInitializer<UE::Math::TIntPoint<int>_const_&> *)local_2c4,
             (bool *)&local_280);
  lVar3 = *(longlong *)&this_00->field_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  *(ULandscapeComponent **)(lVar3 + 8 + (longlong)(int)local_2c4 * 0x18) = param_2;
LAB_145f99925:
  *(undefined1 *)((longlong)&param_2->_padding_ + 1) = 1;
  *(undefined8 *)((longlong)&param_2->_padding_ + 4) = param_1->_padding_;
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
code_r0x000145f9921d:
  TStack_208.UnvisitedBitMask = TStack_208.UnvisitedBitMask & ~TStack_208._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_208);
  goto LAB_145f99140;
}

// OnTransformUpdated @ 145f9aa50

void __thiscall
FLandscapeGroup::OnTransformUpdated(FLandscapeGroup *this,ULandscapeComponent *param_1)

{
  TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_u_0 TVar1;
  ULandscapeComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  TObjectPtr<ULandscapeHeightmapTextureEdgeFixup> local_res8;
  TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_u_0 local_res10;
  
  TVar1 = (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_u_0)
          (param_1->RegisteredEdgeFixup).field0_0x0.DebugPtr;
  if (TVar1.DebugPtr == (ULandscapeHeightmapTextureEdgeFixup *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EdgeFixup != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                       ,0x125,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->RegisteredLandscapeGroup != this) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component->RegisteredLandscapeGroup == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                       ,0x126,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar2 = ((TVar1.DebugPtr)->ActiveComponent).field0_0x0.DebugPtr;
  if (pUVar2 == (ULandscapeComponent *)0x0) {
    bVar4 = param_1 == (ULandscapeComponent *)0x0;
  }
  else {
    bVar4 = pUVar2 == param_1;
  }
  if (bVar4) {
    local_res10 = TVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
    ::Emplace<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>
              (&this->HeightmapsMoved,&local_res8,(bool *)&local_res10);
  }
  return;
}

// RegisterAllComponentsOnStreamingProxy @ 145f9cf20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FLandscapeGroup::RegisterAllComponentsOnStreamingProxy(ALandscapeStreamingProxy *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ENetMode EVar5;
  UWorld *this;
  ULandscapeSubsystem *this_00;
  FLandscapeGroup *this_01;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  if (((param_1->_padding_ & 0x100000000) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StreamingProxy->bIsLandscapeActorRegisteredWithLandscapeInfo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                         ,0x220,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this = AActor::GetWorld((AActor *)param_1);
  if ((this == (UWorld *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                         ,0x223,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((((this->Scene != (FSceneInterface *)0x0) &&
       (EVar5 = UWorld::InternalGetNetMode(this), EVar5 != NM_DedicatedServer)) &&
      (this_00 = UWorld::GetSubsystem<ULandscapeSubsystem>(this),
      this_00 != (ULandscapeSubsystem *)0x0)) &&
     (this_01 = ULandscapeSubsystem::GetLandscapeGroupForProxy(this_00,(ALandscapeProxy *)param_1),
     this_01 != (FLandscapeGroup *)0x0)) {
    puVar6 = (undefined8 *)param_1->_padding_;
    iVar2 = (int)param_1->_padding_;
    puVar1 = puVar6 + iVar2;
    while( true ) {
      if ((int)param_1->_padding_ != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<ULandscapeComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (puVar6 == puVar1) break;
      if ((ULandscapeComponent *)*puVar6 != (ULandscapeComponent *)0x0) {
        RegisterComponent(this_01,(ULandscapeComponent *)*puVar6);
      }
      puVar6 = puVar6 + 1;
    }
  }
  return;
}

// RegisterComponent @ 145f9d300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

void __thiscall
FLandscapeGroup::RegisterComponent(FLandscapeGroup *this,ULandscapeComponent *param_1)

{
  ULandscapeComponent *this_00;
  UTexture2D *pUVar1;
  ULandscapeComponent *pUVar2;
  TIntPoint<int>_u_0_s_0 TVar3;
  code *pcVar4;
  TObjectPtr<ULandscapeComponent>_u_0 TVar5;
  bool bVar6;
  bool bVar7;
  ALandscapeProxy *this_01;
  UWorld *pUVar8;
  UClass *pUVar9;
  TObjectPtr<UTexture2D>_u_0 TVar10;
  TTuple<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>_> *pTVar11;
  UWorld *pUVar12;
  ULandscapeHeightmapTextureEdgeFixup *this_02;
  TObjectPtr<ULandscapeComponent>_u_0 *pTVar13;
  TIntPoint<int> TVar14;
  TObjectPtr<ULandscapeHeightmapTextureEdgeFixup> *pTVar15;
  char *pcVar16;
  uint uVar17;
  char cVar18;
  int iVar19;
  TObjectPtr<ULandscapeComponent>_u_0 local_res10;
  TObjectPtr<ULandscapeHeightmapTextureEdgeFixup> local_res18;
  TObjectPtr<ULandscapeHeightmapTextureEdgeFixup> local_res20;
  TIntPoint<int> local_88;
  TObjectPtr<UTexture2D>_u_0 local_80;
  TObjectPtr<ULandscapeHeightmapTextureEdgeFixup> local_78;
  TObjectPtr<UTexture2D>_u_0 local_70;
  ULandscapeHeightmapTextureEdgeFixup *local_68;
  ULandscapeHeightmapTextureEdgeFixup *local_60;
  TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_u_0 local_58;
  undefined1 local_50 [8];
  FString local_48;
  
  if ((param_1->RegisteredEdgeFixup).field0_0x0.DebugPtr !=
      (ULandscapeHeightmapTextureEdgeFixup *)0x0) {
    return;
  }
  local_res10.DebugPtr = param_1;
  this_01 = ULandscapeComponent::GetLandscapeProxy(param_1);
  if ((this_01 == (ALandscapeProxy *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("LandscapeProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                         ,0x59,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar8 = (UWorld *)(local_res10.DebugPtr)->_padding_;
  if (((pUVar8 == (UWorld *)0x0) &&
      (pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)local_res10.DebugPtr),
      pUVar8 == (UWorld *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComponentWorld != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                         ,0x5c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar9 = Z_Construct_UClass_ALandscapeStreamingProxy_NoRegister();
  iVar19 = (int)pUVar9->_padding_;
  if (*(int *)(this_01->_padding_ + 0x38) < iVar19) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar19 * 8)
      != &pUVar9->_padding_) {
    return;
  }
  if ((pUVar8->WorldComposition).field0_0x0.DebugPtr != (UWorldComposition *)0x0) {
    return;
  }
  if (!this_01->bIsLandscapeActorRegisteredWithLandscapeInfo) {
    return;
  }
  if ((this_01->_padding_ == 0) || ((*(byte *)(this_01->_padding_ + 0x98) & 1) == 0)) {
    if ((byte)LogLandscape._0_1_ < 5) {
      return;
    }
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_01,&local_48,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
    if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
    return;
  }
  TVar10.DebugPtr = ULandscapeComponent::GetHeightmap(local_res10.DebugPtr,false);
  if ((TVar10.DebugPtr == (UTexture2D *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Heightmap",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                         ,0x76,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar10.DebugPtr != (UTexture2D *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)TVar10.DebugPtr);
  }
  local_70.DebugPtr = TVar10.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar10.DebugPtr != (UTexture2D *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)TVar10.DebugPtr);
  }
  pTVar11 = TSet<TTuple<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>,0>,FDefaultSetAllocator>
                    *)&HeightmapTextureToActiveComponent,(TObjectPtr<UTexture2D_const_>)&local_70);
  if ((pTVar11 == (TTuple<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>_> *)0x0) ||
     (&pTVar11->field_0x8 == (undefined1 *)0x0)) {
    this_02 = ULandscapeComponent::InstallOrUpdateTextureUserDatas
                        (local_res10.DebugPtr,true,false,false,0x20);
    if (this_02 == (ULandscapeHeightmapTextureEdgeFixup *)0x0) goto LAB_145f9d8d9;
    if (((this_02->DisabledComponents).ArrayNum != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("EdgeFixup->DisabledComponents.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                           ,0xa7,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar6 = false;
    if ((this_02->ActiveGroup != (FLandscapeGroup *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("EdgeFixup->ActiveGroup == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                           ,0xab,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((this_02->ActiveComponent).field0_0x0.DebugPtr != (ULandscapeComponent *)0x0) {
      iVar19 = 0xac;
      pcVar16 = "EdgeFixup->ActiveComponent == nullptr";
      bVar6 = false;
      goto LAB_145f9d6d7;
    }
  }
  else {
    this_00 = *(ULandscapeComponent **)&pTVar11->field_0x8;
    if ((this_00 == local_res10.DebugPtr) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActiveComponent != Component",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                           ,0x82,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((this_00->RegisteredLandscapeGroup == (FLandscapeGroup *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActiveComponent->RegisteredLandscapeGroup != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                           ,0x83,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar12 = (UWorld *)this_00->_padding_;
    if (pUVar12 == (UWorld *)0x0) {
      pUVar12 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00);
    }
    if ((pUVar8 == pUVar12) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ComponentWorld != ActiveComponentWorld",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                           ,0x86,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_02 = (this_00->RegisteredEdgeFixup).field0_0x0.DebugPtr;
    if ((this_02 == (ULandscapeHeightmapTextureEdgeFixup *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("EdgeFixup != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                           ,0x8a,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar1 = (this_02->HeightmapTexture).field0_0x0.DebugPtr;
    if (pUVar1 == (UTexture2D *)0x0) {
      bVar6 = TVar10.DebugPtr == (UTexture2D *)0x0;
    }
    else {
      bVar6 = pUVar1 == TVar10.DebugPtr;
    }
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("EdgeFixup->HeightmapTexture == Heightmap",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                           ,0x8b,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar2 = (this_02->ActiveComponent).field0_0x0.DebugPtr;
    if (pUVar2 == (ULandscapeComponent *)0x0) {
      bVar6 = this_00 == (ULandscapeComponent *)0x0;
    }
    else {
      bVar6 = pUVar2 == this_00;
    }
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("EdgeFixup->ActiveComponent == ActiveComponent",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                           ,0x8c,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((this_02->ActiveGroup != this_00->RegisteredLandscapeGroup) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("EdgeFixup->ActiveGroup == ActiveComponent->RegisteredLandscapeGroup",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                           ,0x8d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar6 = TArray<TWeakObjectPtr<ULandscapeComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
            Contains<ULandscapeComponent_*>(&this_02->DisabledComponents,&local_res10.DebugPtr);
    if (this_02->ActiveGroup == (FLandscapeGroup *)0x0) {
      iVar19 = 0x92;
      pcVar16 = "ActiveGroup != nullptr";
LAB_145f9d6d7:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar16,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                         ,iVar19,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  local_68 = this_02;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_02);
  }
  TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
  ::Emplace<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>
            (&this->AllRegisteredFixups,&local_res18,(bool *)&local_68);
  TVar5 = local_res10;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_02);
  }
  *(ULandscapeHeightmapTextureEdgeFixup **)((longlong)TVar5 + 0x6e0) = this_02;
  (local_res10.DebugPtr)->RegisteredLandscapeGroup = this;
  if (bVar6 == false) {
    ULandscapeHeightmapTextureEdgeFixup::SetActiveComponent(this_02,local_res10.DebugPtr,this,true);
    local_80.DebugPtr = TVar10.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar10.DebugPtr != (UTexture2D *)0x0) {
        UE::GC::MarkAsReachable((UObject *)TVar10.DebugPtr);
      }
      TVar10 = local_80;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_80.DebugPtr != (UTexture2D *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_80.DebugPtr);
      }
    }
    uVar17 = ((uint)((ulonglong)TVar10.DebugPtr >> 0x14) & 0xffff ^
             (uint)((ulonglong)TVar10.DebugPtr >> 4)) * -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    pTVar13 = &TMapBase<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>,0>_>
               ::FindOrAddImpl<TObjectPtr<UTexture2D>_>
                         ((TMapBase<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>,0>_>
                           *)&HeightmapTextureToActiveComponent,uVar17 >> 0x10 ^ uVar17,
                          (TObjectPtr<UTexture2D> *)&local_80.ObjectPtr)->field0_0x0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
    }
    *pTVar13 = local_res10;
    local_60 = this_02;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_02);
    }
    TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
    ::Emplace<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>
              (&this->HeightmapsNeedingEdgeTexturePatching,&local_res20,(bool *)&local_60);
    cVar18 = '\0';
    do {
      TVar14 = UE::Landscape::GetNeighborRelativePosition((EDirectionIndex)local_50);
      TVar3 = (this_02->GroupCoord).field0_0x0._s_0;
      local_88.field0_0x0._4_4_ = TVar3.Y;
      local_88.field0_0x0._s_0.Y =
           local_88.field0_0x0._4_4_ + *(int *)((longlong)TVar14.field0_0x0 + 4);
      local_88.field0_0x0._s_0.X = TVar3.X + *(int *)TVar14.field0_0x0;
      pTVar15 = TMapBase<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>_>
                ::Find((TMapBase<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>_>
                        *)&this->XYToEdgeFixupMap,local_88);
      if (pTVar15 != (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup> *)0x0) {
        local_58.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar15->field0_0x0).DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_58.DebugPtr != (ULandscapeHeightmapTextureEdgeFixup *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_58.DebugPtr);
        }
        TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
        ::Emplace<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>
                  (&this->HeightmapsNeedingEdgeTexturePatching,&local_78,(bool *)&local_58);
      }
      cVar18 = cVar18 + '\x01';
    } while (cVar18 != '\b');
  }
  else {
    pUVar1 = (this_02->HeightmapTexture).field0_0x0.DebugPtr;
    if (pUVar1 == (UTexture2D *)0x0) {
      bVar6 = TVar10.DebugPtr == (UTexture2D *)0x0;
    }
    else {
      bVar6 = pUVar1 == TVar10.DebugPtr;
    }
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("EdgeFixup->HeightmapTexture == Heightmap",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                           ,0xb9,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
LAB_145f9d8d9:
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return;
}

// TickEdgeFixup @ 145fa4b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EDirectionIndex": Some values do not have unique names */

void __thiscall
FLandscapeGroup::TickEdgeFixup(FLandscapeGroup *this,ULandscapeSubsystem *param_1,bool param_2)

{
  TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
  *pTVar1;
  ulonglong uVar2;
  ULandscapeHeightmapTextureEdgeFixup *pUVar3;
  ULandscapeComponent *pUVar4;
  undefined8 uVar5;
  ULandscapeHeightmapTextureEdgeFixup *pUVar6;
  UObject *pUVar7;
  TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_>_u_0 this_00;
  code *pcVar8;
  double dVar9;
  double dVar10;
  ForElementType<unsigned_int> FVar11;
  TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  TIntPoint<int> TVar16;
  undefined8 *puVar17;
  ALandscapeProxy *pAVar18;
  FLandscapeGroup *this_01;
  longlong lVar19;
  FSetElementId FVar20;
  undefined1 *puVar21;
  char cVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  ForElementType<unsigned_int> FVar26;
  undefined1 *puVar27;
  undefined8 *puVar28;
  uint uVar29;
  uint *puVar30;
  undefined8 *puVar31;
  uint uVar32;
  uint uVar33;
  bool bVar34;
  double dVar35;
  undefined1 local_res20 [8];
  undefined1 local_248;
  undefined1 local_247 [7];
  ForElementType<unsigned_int> local_240;
  ulonglong local_238;
  ulonglong local_230;
  TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
  *local_228;
  uint uStack_220;
  uint uStack_21c;
  undefined1 *local_218;
  undefined4 uStack_210;
  uint uStack_20c;
  uint local_208;
  undefined4 uStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_u_0 local_1f8;
  TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
  *local_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e8;
  undefined8 local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c0;
  undefined1 local_1a0 [12];
  uint local_194;
  longlong local_190;
  uint local_188;
  int local_184;
  TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
  *local_178;
  int local_170;
  int local_16c;
  int local_168;
  undefined1 local_164 [8];
  int local_15c;
  int local_158;
  undefined1 local_154 [12];
  FName local_148;
  FName local_140;
  UObject *local_138;
  TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_>_u_0 local_130;
  FString local_128;
  FString local_118;
  undefined8 local_108;
  UObject *local_100;
  TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined1 local_90 [36];
  undefined4 local_6c;
  undefined4 local_4c;
  
  bVar34 = -1 < CpuChannel->Enabled;
  if (bVar34) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId638,"FLandscapeGroup::TickEdgeFixup",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
               ,0x27e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId638);
  }
  if (*(int *)&(this->XYToEdgeFixupMap).field_0x8 != *(int *)&(this->XYToEdgeFixupMap).field_0x34) {
    local_238 = 0;
    local_230 = 1;
    if (0 < *(int *)&(this->HeightmapsMoved).Elements.field_0x8 -
            *(int *)&(this->HeightmapsMoved).Elements.field_0x34) {
      pTVar1 = &this->HeightmapsMoved;
      local_1c0._padding_._0_4_ = 0;
      local_240 = (ForElementType<unsigned_int>)&(this->HeightmapsMoved).Elements.field_0x10;
      local_1c0._padding_._4_4_ = 1;
      local_1c0.UnvisitedBitMask = 0xffffffff;
      local_1c0.CurrentBitIndex = 0;
      local_1c0.BaseBitIndex = 0;
      local_1c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_240;
      if (*(int *)&(this->HeightmapsMoved).Elements.field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c0);
      }
      uVar24 = *(uint *)&(this->HeightmapsMoved).Elements.field_0x28;
      uVar32 = uVar24 & 0xffffffe0;
      TStack_1e8._padding_ = CONCAT44(local_1c0._padding_._4_4_,(undefined4)local_1c0._padding_);
      TStack_1e8.CurrentBitIndex = local_1c0.CurrentBitIndex;
      TStack_1e8.UnvisitedBitMask = local_1c0.UnvisitedBitMask;
      TStack_1e8._28_4_ = local_1c0._28_4_;
      TStack_1e8.BaseBitIndex = local_1c0.BaseBitIndex;
      local_1c8 = CONCAT44(local_1c8._4_4_,
                           *(int *)&(this->HeightmapsMoved).Elements.field_0x8 -
                           *(int *)&(this->HeightmapsMoved).Elements.field_0x34);
      TStack_1e8.Array = local_1c0.Array;
      iVar23 = (int)uVar24 >> 5;
      TStack_f0.Array = local_1c0.Array;
      uStack_d0 = local_1c8;
      local_1f0 = pTVar1;
      local_f8 = pTVar1;
      TStack_f0._padding_ = TStack_1e8._padding_;
      TStack_f0._16_8_ = TStack_1e8._16_8_;
      TStack_f0._24_8_ = TStack_1e8._24_8_;
      if (((int)uVar24 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar11 = local_240;
      uVar33 = *(int *)((longlong)local_240 + 0x18);
      if (uVar24 != uVar33) {
        FVar26 = *(ForElementType<unsigned_int> *)((longlong)local_240 + 0x10);
        if (*(ForElementType<unsigned_int> *)((longlong)local_240 + 0x10) ==
            (ForElementType<unsigned_int>)0x0) {
          FVar26 = local_240;
        }
        uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)((longlong)FVar26 + (longlong)iVar23 * 4);
        while (uVar24 == 0) {
          lVar19 = (longlong)iVar23;
          uVar32 = uVar32 + 0x20;
          iVar23 = iVar23 + 1;
          uVar24 = uVar33;
          if ((int)((uVar33 - 1) + ((int)(uVar33 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
          goto LAB_145fa4d4f;
          uVar24 = *(uint *)((undefined1 *)((longlong)FVar26 + 4) + lVar19 * 4);
        }
        uVar2 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_170 = (int)lVar19;
        uVar24 = local_170 + -1 + uVar32;
        if ((int)uVar33 < (int)uVar24) {
          uVar24 = uVar33;
        }
      }
LAB_145fa4d4f:
      pTVar1 = &this->HeightmapsMoved;
      while( true ) {
        pTVar12 = local_f8;
        if (*(int *)&(local_f8->Elements).field_0x8 - *(int *)&(local_f8->Elements).field_0x34 !=
            (int)uStack_d0) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_f0.CurrentBitIndex == uVar24) &&
            ((ForElementType<unsigned_int>)TStack_f0.Array == FVar11)) && (pTVar12 == pTVar1))
        break;
        pUVar3 = *(ULandscapeHeightmapTextureEdgeFixup **)
                  (*(longlong *)&pTVar12->Elements + (longlong)TStack_f0.CurrentBitIndex * 0x10);
        if ((pUVar3 == (ULandscapeHeightmapTextureEdgeFixup *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("EdgeFixup",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                                ,0x28c,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (pUVar3->bMapped != false) {
          if ((pUVar3->ActiveGroup != this) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Fixup->ActiveGroup == this",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                                  ,0x20b,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_1f8.DebugPtr = (ULandscapeHeightmapTextureEdgeFixup *)0x0;
          TMap<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>_>
          ::RemoveAndCopyValue
                    (&this->XYToEdgeFixupMap,(TIntPoint<int>)(pUVar3->GroupCoord).field0_0x0._s_0,
                     (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup> *)&local_1f8.ObjectPtr);
          if (local_1f8.DebugPtr == (ULandscapeHeightmapTextureEdgeFixup *)0x0) {
            bVar13 = pUVar3 == (ULandscapeHeightmapTextureEdgeFixup *)0x0;
          }
          else {
            bVar13 = local_1f8.DebugPtr == pUVar3;
          }
          if ((!bVar13) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Fixup == RemovedEdgeFixup",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                                  ,0x210,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pUVar3->bMapped = false;
        }
        TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
      }
      uVar24 = *(uint *)&(this->HeightmapsMoved).Elements.field_0x28;
      local_208 = 0;
      puVar31 = (undefined8 *)0x0;
      uStack_220 = 0;
      uStack_21c = (uint)local_230;
      uStack_20c = local_208;
      if (uVar24 != 0) {
        puVar30 = *(uint **)&(this->HeightmapsMoved).Elements.field_0x20;
        if (puVar30 == (uint *)0x0) {
          puVar30 = (uint *)&(this->HeightmapsMoved).Elements.field_0x10;
        }
        uVar32 = *puVar30;
        puVar17 = puVar31;
        puVar28 = puVar31;
        local_208 = 0;
        uStack_220 = 0;
        while (uVar32 == 0) {
          iVar23 = (int)puVar17;
          local_208 = (int)puVar28 + 0x20;
          puVar28 = (undefined8 *)(ulonglong)local_208;
          uStack_220 = iVar23 + 1;
          puVar17 = (undefined8 *)(ulonglong)uStack_220;
          uStack_20c = uVar24;
          if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_220)
          goto LAB_145fa4f14;
          uVar32 = puVar30[(longlong)iVar23 + 1];
        }
        uStack_21c = -uVar32 & uVar32;
        uVar2 = (ulonglong)uStack_21c * 2 + 1;
        lVar19 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_16c = (int)lVar19;
        uStack_20c = local_16c + -1 + local_208;
        if ((int)uVar24 < (int)uStack_20c) {
          uStack_20c = uVar24;
        }
      }
LAB_145fa4f14:
      local_218 = &(this->HeightmapsMoved).Elements.field_0x10;
      uVar32 = *(uint *)&(this->HeightmapsMoved).Elements.field_0x28;
      uStack_204 = local_6c;
      iStack_200 = *(int *)&(this->HeightmapsMoved).Elements.field_0x8 -
                   *(int *)&(this->HeightmapsMoved).Elements.field_0x34;
      uVar33 = uVar32 & 0xffffffe0;
      uStack_210 = 0xffffffff;
      TStack_c0.CurrentBitIndex = uStack_20c;
      TStack_c0.UnvisitedBitMask = 0xffffffff;
      TStack_c0._padding_ = CONCAT44(uStack_21c,uStack_220);
      iVar23 = (int)uVar32 >> 5;
      TStack_c0._28_4_ = local_6c;
      TStack_c0.BaseBitIndex = local_208;
      uStack_a0 = CONCAT44(uStack_1fc,iStack_200);
      local_240._0_4_ = uVar32;
      local_228 = pTVar1;
      local_c8 = pTVar1;
      TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_218;
      if (((int)uVar32 < 0) || (uVar29 = uVar32, (int)uVar24 < (int)uVar32)) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L"");
        if (bVar13) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar29 = local_240._0_4_;
      }
      uVar24 = *(uint *)&(this->HeightmapsMoved).Elements.field_0x28;
      if (uVar29 != uVar24) {
        puVar27 = *(undefined1 **)&(this->HeightmapsMoved).Elements.field_0x20;
        local_240._0_4_ = uVar24;
        if (puVar27 == (undefined1 *)0x0) {
          puVar27 = &(this->HeightmapsMoved).Elements.field_0x10;
        }
        uVar32 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar23 * 4);
        while (uVar32 == 0) {
          lVar19 = (longlong)iVar23;
          uVar33 = uVar33 + 0x20;
          iVar23 = iVar23 + 1;
          if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
          goto LAB_145fa5042;
          uVar32 = *(uint *)(puVar27 + lVar19 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_168 = (int)lVar19;
        local_240._0_4_ = local_168 + -1 + uVar33;
        if ((int)uVar24 < (int)local_240._0_4_) {
          local_240._0_4_ = uVar24;
        }
      }
LAB_145fa5042:
      while( true ) {
        pTVar1 = local_c8;
        if (*(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34 !=
            (int)uStack_a0) {
          local_248 = 0;
          `TSparseArray<TSparseSetElement<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_248);
        }
        if (((TStack_c0.CurrentBitIndex == local_240._0_4_) &&
            (TStack_c0.Array ==
             (TBitArray<FDefaultBitArrayAllocator> *)&(this->HeightmapsMoved).Elements.field_0x10))
           && (pTVar1 == &this->HeightmapsMoved)) break;
        pUVar4 = *(ULandscapeComponent **)
                  (*(longlong *)&pTVar1->Elements + (longlong)TStack_c0.CurrentBitIndex * 0x10);
        if ((pUVar4 == (ULandscapeComponent *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("EdgeFixup",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                                ,0x294,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        Map(this,(ULandscapeHeightmapTextureEdgeFixup *)&stack0xffffffffffffff68,pUVar4);
        local_154._4_8_ = pUVar4;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
        ::Emplace<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>
                  (&this->HeightmapsNeedingEdgeTexturePatching,
                   (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup> *)local_164,
                   (bool *)(local_154 + 4));
        cVar22 = '\0';
        do {
          TVar16 = UE::Landscape::GetNeighborRelativePosition((EDirectionIndex)local_90);
          uVar5 = *(undefined8 *)((longlong)&pUVar4->_padding_ + 4);
          local_108._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
          uVar24 = local_108._4_4_ + *(int *)((longlong)TVar16.field0_0x0 + 4);
          iVar23 = *(int *)TVar16.field0_0x0 + (int)uVar5;
          uVar33 = iVar23 - uVar24 ^ uVar24 >> 0xd;
          uVar32 = (-0x61c88647 - uVar24) - uVar33 ^ uVar33 << 8;
          uVar29 = (uVar24 - uVar32) - uVar33 ^ uVar32 >> 0xd;
          uVar33 = (uVar33 - uVar29) - uVar32 ^ uVar29 >> 0xc;
          uVar32 = (uVar32 - uVar33) - uVar29 ^ uVar33 << 0x10;
          uVar29 = (uVar29 - uVar32) - uVar33 ^ uVar32 >> 5;
          uVar33 = (uVar33 - uVar29) - uVar32 ^ uVar29 >> 3;
          uVar32 = (uVar32 - uVar33) - uVar29 ^ uVar33 << 10;
          local_108 = uVar5;
          if (*(int *)&(this->XYToEdgeFixupMap).field_0x8 !=
              *(int *)&(this->XYToEdgeFixupMap).field_0x34) {
            puVar27 = *(undefined1 **)&(this->XYToEdgeFixupMap).field_0x40;
            puVar21 = &(this->XYToEdgeFixupMap).field_0x38;
            if (puVar27 != (undefined1 *)0x0) {
              puVar21 = puVar27;
            }
            iVar25 = *(int *)(puVar21 +
                             (ulonglong)
                             (*(int *)&(this->XYToEdgeFixupMap).field_0x48 - 1U &
                             ((uVar29 - uVar32) - uVar33 ^ uVar32 >> 0xf)) * 4);
            if (iVar25 != -1) {
              do {
                lVar19 = *(longlong *)&this->XYToEdgeFixupMap + (longlong)iVar25 * 0x18;
                uVar5 = *(undefined8 *)
                         (*(longlong *)&this->XYToEdgeFixupMap + (longlong)iVar25 * 0x18);
                if (((int)uVar5 == iVar23) && ((uint)((ulonglong)uVar5 >> 0x20) == uVar24)) {
                  if (iVar25 != -1) {
                    puVar17 = (undefined8 *)(lVar19 + 8);
                    if (lVar19 == 0) {
                      puVar17 = puVar31;
                    }
                    if (puVar17 != (undefined8 *)0x0) {
                      local_100 = (UObject *)*puVar17;
                      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                         (local_100 != (UObject *)0x0)) {
                        UE::GC::MarkAsReachable(local_100);
                      }
                      TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
                      ::Emplace<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>
                                (&this->HeightmapsNeedingEdgeTexturePatching,
                                 (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup> *)(local_164 + 4),
                                 (bool *)&local_100);
                    }
                  }
                  break;
                }
                iVar25 = *(int *)(lVar19 + 0x10);
              } while (iVar25 != -1);
            }
          }
          cVar22 = cVar22 + '\x01';
        } while (cVar22 != '\b');
        TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
      }
      bVar13 = 1 < (this->HeightmapsMoved).HashSize;
      if (!bVar13) {
        TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
        ::UnhashElements(&this->HeightmapsMoved);
      }
      puVar27 = &(this->HeightmapsMoved).Elements.field_0xc;
      *(undefined4 *)&(this->HeightmapsMoved).Elements.field_0x8 = 0;
      if (*(int *)puVar27 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)&this->HeightmapsMoved,0,(int *)puVar27);
      }
      *(undefined4 *)&(this->HeightmapsMoved).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->HeightmapsMoved).Elements.field_0x34 = 0;
      iVar23 = *(int *)&(this->HeightmapsMoved).Elements.field_0x2c;
      *(undefined4 *)&(this->HeightmapsMoved).Elements.field_0x28 = 0;
      if ((iVar23 < 0) || (0x80 < iVar23)) {
        *(undefined4 *)&(this->HeightmapsMoved).Elements.field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->HeightmapsMoved).Elements.field_0x10,0);
      }
      if (bVar13) {
        (this->HeightmapsMoved).HashSize = (int)local_230;
        TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
        ::Rehash(&this->HeightmapsMoved);
      }
    }
    if (UE::Landscape::GAmortizedGroupValidation != 0) {
      bVar13 = -1 < CpuChannel->Enabled;
      if (bVar13) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId681,"AmortizedGroupValidation",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                   ,0x2a9);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId681);
      }
      FVar20.Index = (this->AmortizeIndex).Index + 1;
      (this->AmortizeIndex).Index = FVar20.Index;
      if (*(int *)&(this->XYToEdgeFixupMap).field_0x8 < FVar20.Index) {
        (this->AmortizeIndex).Index = 0;
        FVar20.Index = 0;
      }
      bVar14 = TSet<TTuple<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
               ::IsValidId((TSet<TTuple<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
                            *)&this->XYToEdgeFixupMap,FVar20);
      if (bVar14) {
        pUVar3 = *(ULandscapeHeightmapTextureEdgeFixup **)
                  (*(longlong *)&this->XYToEdgeFixupMap + 8 +
                  (longlong)(this->AmortizeIndex).Index * 0x18);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar3 != (ULandscapeHeightmapTextureEdgeFixup *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        if ((pUVar3->bMapped == false) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Fixup->bMapped",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                                ,699,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((pUVar3->ActiveGroup != this) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Fixup->ActiveGroup == this",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                                ,700,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pUVar4 = (pUVar3->ActiveComponent).field0_0x0.DebugPtr;
        if ((pUVar4 == (ULandscapeComponent *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Component",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                                ,0x2be,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((pUVar4->RegisteredLandscapeGroup != this) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Component->RegisteredLandscapeGroup == this",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                                ,0x2bf,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pUVar6 = (pUVar4->RegisteredEdgeFixup).field0_0x0.DebugPtr;
        if (pUVar6 == (ULandscapeHeightmapTextureEdgeFixup *)0x0) {
          bVar14 = pUVar3 == (ULandscapeHeightmapTextureEdgeFixup *)0x0;
        }
        else {
          bVar14 = pUVar6 == pUVar3;
        }
        if ((!bVar14) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Component->RegisteredEdgeFixup == Fixup",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                                ,0x2c0,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pAVar18 = ULandscapeComponent::GetLandscapeProxy(pUVar4);
        lVar19 = pAVar18->_padding_;
        local_218 = *(undefined1 **)(lVar19 + 0x188);
        dVar35 = (double)local_218 - (this->LandscapeGridScale).field0_0x0._s_0.Z;
        dVar9 = *(double *)(lVar19 + 0x178) - (this->LandscapeGridScale).field0_0x0._s_0.X;
        dVar10 = *(double *)(lVar19 + 0x180) - (this->LandscapeGridScale).field0_0x0._s_0.Y;
        uVar24 = SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar32 = (uint)((ulonglong)dVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar32,uVar24) &&
              (double)CONCAT44(uVar32,uVar24) != __real_3f1a36e2e0000000) ||
            (uVar24 = SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
            uVar32 = (uint)((ulonglong)dVar10 >> 0x20) &
                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
            __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar32,uVar24) &&
            (double)CONCAT44(uVar32,uVar24) != __real_3f1a36e2e0000000)) ||
           (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar35,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
          bVar14 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<5696190721233519299>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                              ,0x2c3,
                              "(CurrentLandscapeGridScale - LandscapeGridScale).IsNearlyZero()");
          if (bVar14) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (2 < (byte)LogLandscape._0_1_) {
            local_148 = (FName)pUVar4->_padding_;
            ::FName::ToString(&local_148,&local_128);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
          }
        }
        this_01 = ULandscapeSubsystem::GetLandscapeGroupForComponent(param_1,pUVar4);
        if (this_01 != this) {
          bVar14 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<5696190721233519305>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                              ,0x2c9,"NewGroup == this");
          if (bVar14) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (2 < (byte)LogLandscape._0_1_) {
            local_140 = (FName)pUVar4->_padding_;
            ::FName::ToString(&local_140,&local_118);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
            if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_118.Data.AllocatorInstance.Data);
            }
          }
          UnregisterComponent(this,pUVar4);
          RegisterComponent(this_01,pUVar4);
        }
      }
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    if (param_2) {
      puVar27 = &(this->AllRegisteredFixups).Elements.field_0x10;
      uVar24 = *(uint *)&(this->AllRegisteredFixups).Elements.field_0x28;
      pTVar1 = &this->AllRegisteredFixups;
      uStack_220 = 0;
      local_208 = 0;
      uStack_20c = 0;
      if (uVar24 != 0) {
        puVar30 = *(uint **)&(this->AllRegisteredFixups).Elements.field_0x20;
        if (puVar30 == (uint *)0x0) {
          puVar30 = (uint *)puVar27;
        }
        uVar32 = *puVar30;
        local_208 = 0;
        while (uVar32 == 0) {
          lVar19 = (longlong)(int)uStack_220;
          local_208 = local_208 + 0x20;
          uStack_220 = uStack_220 + 1;
          uStack_20c = uVar24;
          if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_220)
          goto LAB_145fa5750;
          uVar32 = puVar30[lVar19 + 1];
        }
        local_230 = (ulonglong)(-uVar32 & uVar32);
        uVar2 = local_230 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_15c = (int)lVar19;
        uStack_20c = (local_208 - 1) + local_15c;
        if ((int)uVar24 < (int)uStack_20c) {
          uStack_20c = uVar24;
        }
      }
LAB_145fa5750:
      uVar32 = *(uint *)&(this->AllRegisteredFixups).Elements.field_0x28;
      uStack_21c = (uint)local_230;
      uVar33 = uVar32 & 0xffffffe0;
      uStack_204 = local_4c;
      iStack_200 = *(int *)&(this->AllRegisteredFixups).Elements.field_0x8 -
                   *(int *)&(this->AllRegisteredFixups).Elements.field_0x34;
      uStack_210 = 0xffffffff;
      TStack_1e8._padding_ = CONCAT44(uStack_21c,uStack_220);
      TStack_1e8.CurrentBitIndex = uStack_20c;
      TStack_1e8.UnvisitedBitMask = 0xffffffff;
      iVar23 = (int)uVar32 >> 5;
      TStack_1e8._28_4_ = local_4c;
      TStack_1e8.BaseBitIndex = local_208;
      local_1c8 = CONCAT44(uStack_1fc,iStack_200);
      local_228 = pTVar1;
      local_218 = puVar27;
      local_1f0 = pTVar1;
      TStack_1e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar27;
      if ((((int)uVar32 < 0) || ((int)uVar24 < (int)uVar32)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar24 = *(uint *)&(this->AllRegisteredFixups).Elements.field_0x28;
      if (uVar32 != uVar24) {
        puVar21 = *(undefined1 **)&(this->AllRegisteredFixups).Elements.field_0x20;
        if (puVar21 == (undefined1 *)0x0) {
          puVar21 = puVar27;
        }
        uVar32 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar23 * 4);
        while (uVar32 == 0) {
          lVar19 = (longlong)iVar23;
          uVar33 = uVar33 + 0x20;
          iVar23 = iVar23 + 1;
          uVar32 = uVar24;
          if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
          goto LAB_145fa5881;
          uVar32 = *(uint *)(puVar21 + lVar19 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_158 = (int)lVar19;
        uVar32 = (uVar33 - 1) + local_158;
        if ((int)uVar24 < (int)uVar32) {
          uVar32 = uVar24;
        }
      }
LAB_145fa5881:
      while( true ) {
        pTVar12 = local_1f0;
        if (*(int *)&(local_1f0->Elements).field_0x8 - *(int *)&(local_1f0->Elements).field_0x34 !=
            (int)local_1c8) {
          local_247[0] = 0;
          `TSparseArray<TSparseSetElement<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_247);
        }
        if (((TStack_1e8.CurrentBitIndex == uVar32) &&
            (TStack_1e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar27)) &&
           (pTVar12 == pTVar1)) break;
        pUVar7 = *(UObject **)
                  (*(longlong *)&pTVar12->Elements + (longlong)TStack_1e8.CurrentBitIndex * 0x10);
        if (*(FLandscapeGroup **)&pUVar7[1].field_0x20 == this) {
          if ((pUVar7[2].field_0x21 == '\0') &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Fixup->bMapped",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                                  ,0x2da,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pUVar7[2].field_0x20 = 0xff;
          *(undefined8 *)(pUVar7 + 2) = 0;
          *(undefined8 *)&pUVar7[2].field_0x8 = 0;
          *(undefined8 *)&pUVar7[2].field_0x10 = 0;
          *(undefined8 *)&pUVar7[2].field_0x18 = 0;
          local_138 = pUVar7;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar7);
          }
          TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
          ::Emplace<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_>
                    (&this->HeightmapsNeedingEdgeTexturePatching,
                     (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup> *)local_154,(bool *)&local_138
                    );
        }
        TStack_1e8.UnvisitedBitMask = TStack_1e8.UnvisitedBitMask & ~TStack_1e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e8);
      }
    }
    uVar24 = 0;
    AcquireSRWLockExclusive((PSRWLOCK)this);
    if (((param_2) || (UE::Landscape::GPatchEdges != 0)) &&
       (0 < *(int *)&(this->HeightmapsNeedingEdgeTexturePatching).Elements.field_0x8 -
            *(int *)&(this->HeightmapsNeedingEdgeTexturePatching).Elements.field_0x34)) {
      bVar13 = -1 < CpuChannel->Enabled;
      if (bVar13) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&DAT_15519acdc,"HeightmapsNeedingEdgeTexturePatching",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                   ,0x31b);
        FCpuProfilerTrace::OutputBeginEvent(DAT_15519acdc);
      }
      TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
      ::TIterator::TIterator((TIterator *)local_1a0,&this->HeightmapsNeedingEdgeTexturePatching);
      if (local_184 < *(int *)(local_190 + 0x18)) {
        do {
          bVar14 = -1 < CpuChannel->Enabled;
          if (bVar14) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId808,"CheckHeightmap",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                       ,0x328);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId808);
          }
          this_00 = (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_>_u_0)
                    ((TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_>_u_0 *)
                    (*(longlong *)local_1a0._0_8_ + (longlong)local_184 * 0x10))->DebugPtr;
          if (((this_00.DebugPtr)->ActiveGroup != this) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("EdgeFixup->ActiveGroup == this",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                                  ,0x32b,L""), bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_130 = this_00;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr),
             UE::GC::GIsIncrementalReachabilityPending != false)) {
            UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
          }
          uVar24 = ((uint)((ulonglong)this_00.DebugPtr >> 0x14) & 0xffff ^
                   (uint)((ulonglong)this_00.DebugPtr >> 4)) * -0x7a143595;
          uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
          iVar23 = TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_>_>
                             (&this->AllRegisteredFixups,uVar24 >> 0x10 ^ uVar24,
                              (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_> *)
                              &local_130.ObjectPtr);
          if ((iVar23 == -1) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AllRegisteredFixups.Contains(EdgeFixup)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                                  ,0x32c,L""), bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (((this_00.DebugPtr)->bMapped == false) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("EdgeFixup->bMapped",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                                  ,0x32d,L""), bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          bVar15 = UStreamableRenderAsset::HasPendingInitOrStreaming
                             ((UStreamableRenderAsset *)
                              ((this_00.DebugPtr)->HeightmapTexture).field0_0x0.DebugPtr,false);
          if (bVar15) {
            if (bVar14) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            uVar24 = (uint)local_238;
          }
          else {
            if (((this_00.DebugPtr)->ActiveGroup != this) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("EdgeFixup->ActiveGroup == this",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                                    ,0x34d,L""), bVar15)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar23 = ULandscapeHeightmapTextureEdgeFixup::CheckAndPatchTextureEdgesFromEdgeSnapshots
                               (this_00.DebugPtr);
            uVar24 = (int)local_238 + iVar23;
            local_238 = (ulonglong)uVar24;
            TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
            ::RemoveByIndex(local_178,local_184);
            if (bVar14) {
              FCpuProfilerTrace::OutputEndEvent();
            }
          }
          local_188 = local_188 & ~local_194;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_1a0 + 8));
        } while (local_184 < *(int *)(local_190 + 0x18));
      }
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((0 < (int)uVar24) && (5 < (byte)LogLandscape._0_1_)) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)this);
  }
  if (bVar34) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Unmap @ 145fa71b0

void __thiscall
FLandscapeGroup::Unmap
          (FLandscapeGroup *this,ULandscapeHeightmapTextureEdgeFixup *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>_u_0 local_res10;
  ULandscapeHeightmapTextureEdgeFixup *local_res20;
  ULandscapeHeightmapTextureEdgeFixup *local_18 [2];
  
  if (param_1->bMapped != false) {
    if (param_1->ActiveGroup != this) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Fixup->ActiveGroup == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                         ,0x20b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_res10.DebugPtr = (ULandscapeHeightmapTextureEdgeFixup *)0x0;
    TMap<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>_>
    ::RemoveAndCopyValue
              (&this->XYToEdgeFixupMap,(TIntPoint<int>)(param_1->GroupCoord).field0_0x0._s_0,
               (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup> *)&local_res10.ObjectPtr);
    if (local_res10.DebugPtr == (ULandscapeHeightmapTextureEdgeFixup *)0x0) {
      bVar2 = param_1 == (ULandscapeHeightmapTextureEdgeFixup *)0x0;
    }
    else {
      bVar2 = local_res10.DebugPtr == param_1;
    }
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Fixup == RemovedEdgeFixup",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                         ,0x210,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (param_2) {
      local_res20 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
      ::Remove(&this->HeightmapsNeedingEdgeTexturePatching,
               (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_>)&local_res20);
      local_18[0] = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
      ::Remove(&this->HeightmapsMoved,
               (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_>)local_18);
    }
    param_1->bMapped = false;
  }
  return;
}

// UnregisterAllComponentsOnStreamingProxy @ 145fa72d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FLandscapeGroup::UnregisterAllComponentsOnStreamingProxy(ALandscapeStreamingProxy *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ULandscapeComponent *pUVar3;
  code *pcVar4;
  bool bVar5;
  UWorld *this;
  ULandscapeSubsystem *pUVar6;
  undefined8 *puVar7;
  undefined1 local_res10 [8];
  
  this = AActor::GetWorld((AActor *)param_1);
  if ((this == (UWorld *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                         ,0x245,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar6 = UWorld::GetSubsystem<ULandscapeSubsystem>(this);
  if (pUVar6 != (ULandscapeSubsystem *)0x0) {
    puVar7 = (undefined8 *)param_1->_padding_;
    iVar2 = (int)param_1->_padding_;
    puVar1 = puVar7 + iVar2;
    while( true ) {
      if ((int)param_1->_padding_ != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<ULandscapeComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (puVar7 == puVar1) break;
      pUVar3 = (ULandscapeComponent *)*puVar7;
      if ((pUVar3 != (ULandscapeComponent *)0x0) &&
         (pUVar3->RegisteredLandscapeGroup != (FLandscapeGroup *)0x0)) {
        UnregisterComponent(pUVar3->RegisteredLandscapeGroup,pUVar3);
      }
      puVar7 = puVar7 + 1;
    }
  }
  return;
}

// UnregisterComponent @ 145fa74d0

void __thiscall
FLandscapeGroup::UnregisterComponent(FLandscapeGroup *this,ULandscapeComponent *param_1)

{
  TArray<TWeakObjectPtr<ULandscapeComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  ULandscapeHeightmapTextureEdgeFixup *this_00;
  ULandscapeHeightmapTextureEdgeFixup *pUVar3;
  TObjectPtr<UTexture2D>_u_0 TVar4;
  FLandscapeGroup *pFVar5;
  UTexture2D *pUVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ULandscapeComponent *pUVar10;
  TTuple<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>_> *pTVar11;
  uint uVar12;
  FScriptContainerElement *this_01;
  ULandscapeHeightmapTextureEdgeFixup *local_res10;
  FWeakObjectPtr local_res18;
  UTexture2D *local_res20;
  TObjectPtr<UTexture2D>_u_0 local_48 [2];
  
  this_00 = (param_1->RegisteredEdgeFixup).field0_0x0.DebugPtr;
  if (this_00 != (ULandscapeHeightmapTextureEdgeFixup *)0x0) {
    if ((param_1->RegisteredLandscapeGroup != this) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Component->RegisteredLandscapeGroup == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                           ,0xe2,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)this);
    (param_1->RegisteredEdgeFixup).field0_0x0.DebugPtr = (ULandscapeHeightmapTextureEdgeFixup *)0x0;
    param_1->RegisteredLandscapeGroup = (FLandscapeGroup *)0x0;
    local_res10 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    iVar9 = TSet<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,DefaultKeyFuncs<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>,FDefaultSetAllocator>
            ::Remove(&this->AllRegisteredFixups,
                     (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup_const_>)&local_res10);
    if ((iVar9 != 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RemovedFixups == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                           ,0xeb,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar1 = &this_00->DisabledComponents;
    this_01 = (pTVar1->AllocatorInstance).Data;
    pFVar2 = this_01 + (longlong)(this_00->DisabledComponents).ArrayNum * 8;
    for (; this_01 != pFVar2; this_01 = this_01 + 8) {
      bVar8 = TWeakObjectPtr<ULandscapeComponent,FWeakObjectPtr>::
              UEOpEquals<ULandscapeComponent,bool>
                        ((TWeakObjectPtr<ULandscapeComponent,FWeakObjectPtr> *)this_01,param_1);
      if (bVar8) {
        pUVar10 = (this_00->ActiveComponent).field0_0x0.DebugPtr;
        if (pUVar10 == (ULandscapeComponent *)0x0) {
          bVar8 = param_1 == (ULandscapeComponent *)0x0;
        }
        else {
          bVar8 = pUVar10 == param_1;
        }
        if ((bVar8) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("EdgeFixup->ActiveComponent != Component",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                               ,0xf6,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        goto LAB_145fa77b3;
      }
    }
    pUVar10 = (this_00->ActiveComponent).field0_0x0.DebugPtr;
    if (pUVar10 == (ULandscapeComponent *)0x0) {
      bVar8 = param_1 == (ULandscapeComponent *)0x0;
    }
    else {
      bVar8 = pUVar10 == param_1;
    }
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("EdgeFixup->ActiveComponent == Component",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                           ,0xfa,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (0 < (this_00->DisabledComponents).ArrayNum) {
      do {
        if (((this_00->DisabledComponents).ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar9 = (this_00->DisabledComponents).ArrayNum;
        local_res18 = *(FWeakObjectPtr *)
                       ((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8 + -8);
        iVar9 = iVar9 + -1;
        (this_00->DisabledComponents).ArrayNum = iVar9;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&pTVar1->AllocatorInstance,iVar9,&(this_00->DisabledComponents).ArrayMax);
        pUVar10 = (ULandscapeComponent *)FWeakObjectPtr::Get(&local_res18);
        if ((pUVar10 != (ULandscapeComponent *)0x0) &&
           (pUVar3 = (pUVar10->RegisteredEdgeFixup).field0_0x0.DebugPtr,
           pUVar3 != (ULandscapeHeightmapTextureEdgeFixup *)0x0)) {
          if ((pUVar3 != this_00) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("DisabledComponent->RegisteredEdgeFixup == EdgeFixup",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                                 ,0x106,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar5 = pUVar10->RegisteredLandscapeGroup;
          if ((pFVar5 == (FLandscapeGroup *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("DisabledGroup != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGroup.cpp"
                                 ,0x108,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          ULandscapeHeightmapTextureEdgeFixup::SetActiveComponent(this_00,pUVar10,pFVar5,false);
          pUVar6 = (this_00->HeightmapTexture).field0_0x0.DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar6 != (UTexture2D *)0x0) {
              UE::GC::MarkAsReachable((UObject *)pUVar6);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar6 != (UTexture2D *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar6);
            }
          }
          local_res20 = pUVar6;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UTexture2D *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)pUVar6);
          }
          pTVar11 = TSet<TTuple<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>,0>,FDefaultSetAllocator>
                            *)&HeightmapTextureToActiveComponent,
                           (TObjectPtr<UTexture2D_const_>)&local_res20);
          if ((pTVar11 == (TTuple<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>_> *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          *(ULandscapeComponent **)&pTVar11->field_0x8 = pUVar10;
          goto LAB_145fa77b3;
        }
      } while (0 < (this_00->DisabledComponents).ArrayNum);
    }
    ULandscapeHeightmapTextureEdgeFixup::SetActiveComponent
              (this_00,(ULandscapeComponent *)0x0,(FLandscapeGroup *)0x0,false);
    TVar4 = (TObjectPtr<UTexture2D>_u_0)(this_00->HeightmapTexture).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar4.DebugPtr != (UTexture2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
    }
    local_48[0] = TVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar4.DebugPtr != (UTexture2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
    }
    if (HeightmapTextureToActiveComponent._8_4_ != HeightmapTextureToActiveComponent._52_4_) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar4.DebugPtr != (UTexture2D *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
      }
      uVar12 = ((uint)((ulonglong)TVar4.DebugPtr >> 0x14) & 0xffff ^
               (uint)((ulonglong)TVar4.DebugPtr >> 4)) * -0x7a143595;
      uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
      TSet<TTuple<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TObjectPtr<UTexture2D_const_>_>
                ((TSet<TTuple<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>,0>,FDefaultSetAllocator>
                  *)&HeightmapTextureToActiveComponent,uVar12 >> 0x10 ^ uVar12,
                 (TObjectPtr<UTexture2D_const_> *)&local_48[0].ObjectPtr);
    }
LAB_145fa77b3:
    ReleaseSRWLockExclusive((PSRWLOCK)this);
  }
  return;
}

