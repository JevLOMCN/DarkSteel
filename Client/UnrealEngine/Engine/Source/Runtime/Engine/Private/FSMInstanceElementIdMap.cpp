// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// ~FSMInstanceElementIdMap @ 147b3d130

void __thiscall FSMInstanceElementIdMap::~FSMInstanceElementIdMap(FSMInstanceElementIdMap *this)

{
  FDelegateHandle FVar1;
  void *pvVar2;
  
  FVar1.ID = (this->OnInstanceIndexUpdatedHandle).ID;
  this->_padding_ = (longlong)&___7FSMInstanceElementIdMap__6B_;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FInstancedStaticMeshDelegates::OnInstanceIndexUpdated,FVar1);
    (this->OnInstanceIndexUpdatedHandle).ID = 0;
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInstanceRemovedDelegate).field_0x8,
             *(int *)&(this->OnInstanceRemovedDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnInstanceRemovedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInstanceRemovedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInstancePreRemovalDelegate).field_0x8,
             *(int *)&(this->OnInstancePreRemovalDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnInstancePreRemovalDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInstancePreRemovalDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInstanceRemappedDelegate).field_0x8,
             *(int *)&(this->OnInstanceRemappedDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnInstanceRemappedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInstanceRemappedDelegate);
  *(undefined4 *)&(this->ISMComponents).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ISMComponents).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ISMComponents);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ISMComponentsCS);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// AddReferencedObjects @ 147b44300

void __thiscall
FSMInstanceElementIdMap::AddReferencedObjects
          (FSMInstanceElementIdMap *this,FReferenceCollector *param_1)

{
  return;
}

// ClearInstanceData_NoLock @ 147b4b090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FSMInstanceElementIdMap::ClearInstanceData_NoLock
          (FSMInstanceElementIdMap *this,UInstancedStaticMeshComponent *param_1,
          FSMInstanceElementIdMapEntry *param_2)

{
  TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
  *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
  *pTVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  FSMInstanceElementIdMapEntry *pFVar17;
  TMulticastDelegate<void___cdecl(FSMInstanceElementId_const_&,int),FDefaultDelegateUserPolicy>
  *pTVar18;
  uint uVar19;
  uint uVar20;
  ForElementType<unsigned_int> FVar21;
  uint *puVar22;
  FSMInstanceElementIdMap *pFVar23;
  undefined1 auStackY_238 [32];
  undefined1 local_208;
  undefined1 local_207 [3];
  uint local_204;
  ForElementType<unsigned_int> local_200;
  FSMInstanceElementIdMap *local_1f8;
  UInstancedStaticMeshComponent *local_1f0;
  TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
  *local_1e8;
  int iStack_1e0;
  uint uStack_1dc;
  undefined1 *local_1d8;
  undefined4 uStack_1d0;
  int iStack_1cc;
  int local_1c8;
  undefined4 uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  FSMInstanceElementIdMapEntry *local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  uint uStack_190;
  uint uStack_18c;
  TBitArray<FDefaultBitArrayAllocator> *local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  uint local_178;
  int iStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  longlong *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  UInstancedStaticMeshComponent *local_108;
  undefined8 local_100;
  UInstancedStaticMeshComponent *local_f8;
  undefined8 local_f0;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0 [2];
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pTVar18 = &this->OnInstancePreRemovalDelegate;
  pTVar1 = &param_2->InstanceIdToIndexMap;
  local_1f8 = this;
  local_1f0 = param_1;
  local_1a8 = param_2;
  bVar9 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar18);
  local_1a0 = 1;
  pFVar17 = param_2;
  pFVar23 = this;
  if (bVar9) {
    local_200 = (ForElementType<unsigned_int>)&(param_2->InstanceIdToIndexMap).field_0x10;
    iStack_1e0 = 0;
    iVar15 = *(int *)&(param_2->InstanceIdToIndexMap).field_0x28;
    local_1c8 = 0;
    iStack_1cc = 0;
    uStack_1dc = 1;
    if (iVar15 != 0) {
      puVar22 = *(uint **)&(param_2->InstanceIdToIndexMap).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)local_200;
      }
      uStack_1dc = *puVar22;
      while (uStack_1dc == 0) {
        lVar13 = (longlong)iStack_1e0;
        local_1c8 = local_1c8 + 0x20;
        iStack_1e0 = iStack_1e0 + 1;
        iStack_1cc = iVar15;
        uStack_1dc = 1;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1e0)
        goto LAB_147b4b182;
        uStack_1dc = puVar22[lVar13 + 1];
      }
      uStack_1dc = -uStack_1dc & uStack_1dc;
      uVar3 = (ulonglong)uStack_1dc * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_1b8 = (int)lVar13;
      iStack_1cc = local_1c8 + -1 + local_1b8;
      if (iVar15 < iStack_1cc) {
        iStack_1cc = iVar15;
      }
    }
LAB_147b4b182:
    uVar19 = *(uint *)&(param_2->InstanceIdToIndexMap).field_0x28;
    uStack_1c4 = local_9c;
    iStack_1c0 = *(int *)&(param_2->InstanceIdToIndexMap).field_0x8 -
                 *(int *)&(param_2->InstanceIdToIndexMap).field_0x34;
    uVar16 = uVar19 & 0xffffffe0;
    TStack_160._padding_ = CONCAT44(uStack_1dc,iStack_1e0);
    uStack_1d0 = 0xffffffff;
    TStack_160.CurrentBitIndex = iStack_1cc;
    TStack_160.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar19 >> 5;
    TStack_160._28_4_ = local_9c;
    TStack_160.BaseBitIndex = local_1c8;
    uStack_140 = CONCAT44(uStack_1bc,iStack_1c0);
    local_204 = uVar19;
    local_1e8 = pTVar1;
    local_1d8 = (undefined1 *)local_200;
    local_168 = pTVar1;
    TStack_160.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_200;
    if ((((int)uVar19 < 0) || (iVar15 < (int)uVar19)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar20 = *(int *)((longlong)local_200 + 0x18);
    if (uVar19 != uVar20) {
      FVar21 = local_200;
      if (*(ForElementType<unsigned_int> *)((longlong)local_200 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar21 = *(ForElementType<unsigned_int> *)((longlong)local_200 + 0x10);
      }
      uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)((longlong)FVar21 + (longlong)iVar14 * 4);
      while (uVar19 == 0) {
        lVar13 = (longlong)iVar14;
        uVar16 = uVar16 + 0x20;
        iVar14 = iVar14 + 1;
        uVar19 = uVar20;
        local_204 = uVar20;
        if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_147b4b2a1;
        uVar19 = *(uint *)((undefined1 *)((longlong)FVar21 + 4) + lVar13 * 4);
      }
      uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_1b4 = (int)lVar13;
      uVar19 = local_1b4 + -1 + uVar16;
      local_204 = uVar19;
      if ((int)uVar20 < (int)uVar19) {
        uVar19 = uVar20;
        local_204 = uVar20;
      }
    }
LAB_147b4b2a1:
    while( true ) {
      pTVar8 = local_168;
      if (*(int *)&local_168->field_0x8 - *(int *)&local_168->field_0x34 != (int)uStack_140) {
        local_208 = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_208);
      }
      if (((TStack_160.CurrentBitIndex == uVar19) &&
          ((ForElementType<unsigned_int>)TStack_160.Array == local_200)) &&
         (pFVar17 = local_1a8, pFVar23 = local_1f8, pTVar8 == pTVar1)) break;
      local_108 = local_1f0;
      local_100 = *(undefined8 *)(*(longlong *)pTVar8 + (longlong)TStack_160.CurrentBitIndex * 0x18)
      ;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar18,
                 (FWriteAccessScope *)&local_e8);
      puVar2 = &(this->OnInstancePreRemovalDelegate).field_0x1c;
      *(int *)puVar2 = *(int *)puVar2 + 1;
      bVar9 = false;
      uVar19 = *(int *)&(this->OnInstancePreRemovalDelegate).field_0x10 - 1;
      if (-1 < (int)uVar19) {
        lVar13 = (longlong)(int)uVar19 << 4;
        bVar9 = false;
        do {
          uVar16 = 0;
          if ((int)uVar19 < *(int *)&(this->OnInstancePreRemovalDelegate).field_0x10) {
            uVar16 = ~uVar19 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar5 = *(longlong *)&(this->OnInstancePreRemovalDelegate).field_0x8;
          if (((*(int *)(lVar13 + 8 + lVar5) == 0) ||
              (plVar6 = *(longlong **)(lVar13 + lVar5), plVar6 == (longlong *)0x0)) ||
             (cVar11 = (**(code **)(*plVar6 + 0x68))(), cVar11 == '\0')) {
            bVar9 = true;
          }
          lVar13 = lVar13 + -0x10;
          uVar19 = uVar19 - 1;
        } while (-1 < (int)uVar19);
      }
      puVar2 = &(this->OnInstancePreRemovalDelegate).field_0x1c;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      if (bVar9) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar18,false);
      }
      if (local_e8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
      }
      TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
      uVar19 = local_204;
    }
  }
  uVar19 = (uint)local_1a0;
  local_6c = 0x80;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  if ((TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
       *)local_98 != pTVar1) {
    local_98._0_8_ = *(undefined8 *)pTVar1;
    puVar2 = &(param_2->InstanceIdToIndexMap).field_0x10;
    *(undefined8 *)pTVar1 = 0;
    local_98._8_8_ = *(undefined8 *)&(param_2->InstanceIdToIndexMap).field_0x8;
    *(undefined8 *)&(param_2->InstanceIdToIndexMap).field_0x8 = 0;
    if (local_98 + 0x10 != puVar2) {
      local_78 = *(uint **)&(param_2->InstanceIdToIndexMap).field_0x20;
      if (local_78 == (uint *)0x0) {
        local_98._16_8_ = *(undefined8 *)puVar2;
        local_98._24_8_ = *(undefined8 *)&(param_2->InstanceIdToIndexMap).field_0x18;
      }
      *(undefined8 *)&(param_2->InstanceIdToIndexMap).field_0x20 = 0;
      local_70 = *(uint *)&(param_2->InstanceIdToIndexMap).field_0x28;
      local_6c = *(undefined4 *)&(param_2->InstanceIdToIndexMap).field_0x2c;
      *(undefined8 *)&(param_2->InstanceIdToIndexMap).field_0x28 = 0;
    }
    local_68 = *(undefined4 *)&(param_2->InstanceIdToIndexMap).field_0x30;
    local_64 = *(int *)&(param_2->InstanceIdToIndexMap).field_0x34;
    *(undefined4 *)&(param_2->InstanceIdToIndexMap).field_0x34 = 0;
    *(undefined4 *)&(param_2->InstanceIdToIndexMap).field_0x30 = 0xffffffff;
  }
  local_58 = *(void **)&(param_2->InstanceIdToIndexMap).field_0x40;
  if (local_58 == (void *)0x0) {
    local_60 = *(undefined4 *)&(param_2->InstanceIdToIndexMap).field_0x38;
  }
  *(undefined8 *)&(param_2->InstanceIdToIndexMap).field_0x40 = 0;
  local_50 = *(undefined4 *)&(param_2->InstanceIdToIndexMap).field_0x48;
  *(undefined4 *)&(param_2->InstanceIdToIndexMap).field_0x48 = 0;
  TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
           *)&pFVar17->InstanceIndexToIdMap);
  if (*(int *)&(pFVar17->InstanceIdToIndexMap).field_0x8 !=
      *(int *)&(pFVar17->InstanceIdToIndexMap).field_0x34) {
    TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
                      *)&pFVar17->InstanceIdToIndexMap);
    *(undefined4 *)&(pFVar17->InstanceIdToIndexMap).field_0x8 = 0;
    if (*(int *)&(pFVar17->InstanceIdToIndexMap).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&pFVar17->InstanceIdToIndexMap,0,
                 (int *)&(pFVar17->InstanceIdToIndexMap).field_0xc);
    }
    *(undefined4 *)&(pFVar17->InstanceIdToIndexMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar17->InstanceIdToIndexMap).field_0x34 = 0;
    *(undefined4 *)&(pFVar17->InstanceIdToIndexMap).field_0x28 = 0;
  }
  bVar9 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &pFVar23->OnInstanceRemovedDelegate);
  uVar16 = local_70;
  if (bVar9) {
    uStack_190 = 0;
    uStack_17c = uStack_190;
    local_178 = uStack_190;
    if (local_70 != 0) {
      puVar22 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar22 = local_78;
      }
      uVar20 = *puVar22;
      local_178 = 0;
      uStack_190 = 0;
      while (uVar20 == 0) {
        lVar13 = (longlong)(int)uStack_190;
        local_178 = local_178 + 0x20;
        uStack_190 = uStack_190 + 1;
        uStack_17c = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_190)
        goto LAB_147b4b600;
        uVar20 = puVar22[lVar13 + 1];
      }
      uVar19 = -uVar20 & uVar20;
      uVar3 = (ulonglong)uVar19 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_1b0 = (int)lVar13;
      uStack_17c = (local_178 - 1) + local_1b0;
      if ((int)local_70 < (int)uStack_17c) {
        uStack_17c = local_70;
      }
    }
LAB_147b4b600:
    local_198 = (longlong *)local_98;
    iStack_174 = iStack_1cc;
    local_188 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    iStack_170 = local_98._8_4_ - local_64;
    uVar20 = local_70 & 0xffffffe0;
    uStack_180 = 0xffffffff;
    TStack_130.CurrentBitIndex = uStack_17c;
    TStack_130.UnvisitedBitMask = 0xffffffff;
    TStack_130._padding_ = CONCAT44(uVar19,uStack_190);
    iVar15 = (int)local_70 >> 5;
    TStack_130._28_4_ = iStack_1cc;
    TStack_130.BaseBitIndex = local_178;
    uStack_110 = CONCAT44(uStack_16c,iStack_170);
    bVar12 = (byte)local_70;
    uStack_18c = uVar19;
    local_138 = local_198;
    TStack_130.Array = local_188;
    if (((int)local_70 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar23 = local_1f8;
    if (uVar16 != local_70) {
      puVar22 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar22 = local_78;
      }
      uVar19 = -1 << (bVar12 & 0x1f) & puVar22[iVar15];
      while (uVar19 == 0) {
        lVar13 = (longlong)iVar15;
        uVar20 = uVar20 + 0x20;
        iVar15 = iVar15 + 1;
        uVar16 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_147b4b717;
        uVar19 = puVar22[lVar13 + 1];
      }
      uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_1ac = (int)lVar13;
      uVar16 = local_1ac + -1 + uVar20;
      if ((int)local_70 < (int)uVar16) {
        uVar16 = local_70;
      }
    }
LAB_147b4b717:
    pTVar18 = &local_1f8->OnInstanceRemovedDelegate;
    while( true ) {
      plVar6 = local_138;
      if ((int)local_138[1] - *(int *)((longlong)local_138 + 0x34) != (int)uStack_110) {
        local_207[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_207);
      }
      if (((TStack_130.CurrentBitIndex == uVar16) &&
          (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar6 == (longlong *)local_98)) break;
      lVar13 = *plVar6;
      local_f8 = local_1f0;
      uVar4 = *(undefined4 *)(lVar13 + 8 + (longlong)TStack_130.CurrentBitIndex * 0x18);
      local_f0 = *(undefined8 *)(lVar13 + (longlong)TStack_130.CurrentBitIndex * 0x18);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar18,
                 (FWriteAccessScope *)local_d0);
      puVar2 = &(pFVar23->OnInstanceRemovedDelegate).field_0x1c;
      *(int *)puVar2 = *(int *)puVar2 + 1;
      bVar9 = false;
      uVar19 = *(int *)&(pFVar23->OnInstanceRemovedDelegate).field_0x10 - 1;
      if (-1 < (int)uVar19) {
        lVar13 = (longlong)(int)uVar19 << 4;
        bVar9 = false;
        do {
          uVar20 = 0;
          if ((int)uVar19 < *(int *)&(pFVar23->OnInstanceRemovedDelegate).field_0x10) {
            uVar20 = ~uVar19 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar5 = *(longlong *)&(pFVar23->OnInstanceRemovedDelegate).field_0x8;
          if (((*(int *)(lVar13 + 8 + lVar5) == 0) ||
              (plVar6 = *(longlong **)(lVar13 + lVar5), plVar6 == (longlong *)0x0)) ||
             (cVar11 = (**(code **)(*plVar6 + 0x68))(plVar6,&local_f8,uVar4), cVar11 == '\0')) {
            bVar9 = true;
          }
          lVar13 = lVar13 + -0x10;
          uVar19 = uVar19 - 1;
        } while (-1 < (int)uVar19);
      }
      puVar2 = &(pFVar23->OnInstanceRemovedDelegate).field_0x1c;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      if (bVar9) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar18,false);
      }
      if (local_d0[0].bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0[0].Accessor,local_d0);
      }
      TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
    }
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// Get @ 147b63460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSMInstanceElementIdMap * __cdecl FSMInstanceElementIdMap::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FGCObject::RegisterGCObject((FGCObject *)&::Instance);
      ::Instance._padding_ = (longlong)&___7FSMInstanceElementIdMap__6B_;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Instance.ISMComponentsCS,4000);
      ::Instance.ISMComponents._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      ::Instance.ISMComponents._48_8_ = _UNK_150631d98;
      ::Instance.ISMComponents._0_8_ = 0;
      ::Instance.ISMComponents._8_8_ = 0;
      ::Instance.OnInstanceRemappedDelegate._0_8_ = 0;
      ::Instance.OnInstanceRemappedDelegate._8_8_ = 0;
      ::Instance.ISMComponents._32_8_ = 0;
      ::Instance.OnInstancePreRemovalDelegate._0_8_ = 0;
      ::Instance.OnInstancePreRemovalDelegate._8_8_ = 0;
      ::Instance.ISMComponents._64_8_ = 0;
      ::Instance.OnInstanceRemovedDelegate._0_8_ = 0;
      ::Instance.OnInstanceRemovedDelegate._8_8_ = 0;
      ::Instance.ISMComponents._72_4_ = 0;
      ::Instance.OnInstanceRemappedDelegate._16_8_ = ___xmm_00000000000000020000000000000000;
      ::Instance.OnInstanceRemappedDelegate._24_8_ = _UNK_150631d48;
      ::Instance.OnInstanceIndexUpdatedHandle.ID = 0;
      ::Instance.OnInstancePreRemovalDelegate._16_8_ = ___xmm_00000000000000020000000000000000;
      ::Instance.OnInstancePreRemovalDelegate._24_8_ = _UNK_150631d48;
      ::Instance.OnInstanceRemovedDelegate._16_8_ = ___xmm_00000000000000020000000000000000;
      ::Instance.OnInstanceRemovedDelegate._24_8_ = _UNK_150631d48;
      atexit(`FSMInstanceElementIdMap::Get'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
      return &::Instance;
    }
  }
  return &::Instance;
}

// GetReferencerName @ 147b6d1c0

FString * __thiscall
FSMInstanceElementIdMap::GetReferencerName
          (FSMInstanceElementIdMap *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FSMInstanceElementIdMap");
  return __return_storage_ptr__;
}

// GetSMInstanceElementIdFromSMInstanceId @ 147b6db70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSMInstanceElementId * __thiscall
FSMInstanceElementIdMap::GetSMInstanceElementIdFromSMInstanceId
          (FSMInstanceElementIdMap *this,FSMInstanceElementId *__return_storage_ptr__,
          FSMInstanceId *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_> *pTVar3;
  ulong64 *puVar4;
  ulong64 uVar5;
  TReferenceControllerBase<1> *pTVar6;
  FSMInstanceElementId *pFVar7;
  FDelegateHandle FVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong lVar10;
  TReferenceControllerBase<1> *pTVar11;
  TPairInitializer<UInstancedStaticMeshComponent_*_const_&,TSharedPtr<FSMInstanceElementIdMapEntry,1>_&&>
  local_res18;
  ulong64 local_a8;
  TReferenceControllerBase<1> *local_a0;
  TReferenceControllerBase<1> *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  undefined1 local_88 [8];
  FSMInstanceId *local_80;
  TReferenceControllerBase<1> **local_78;
  int *local_70;
  ulong64 *local_68;
  ulong64 *local_60;
  int *local_58;
  undefined1 local_50 [24];
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  if ((param_1->ISMComponent == (UInstancedStaticMeshComponent *)0x0) ||
     (param_1->InstanceIndex == -1)) {
LAB_147b6de61:
    __return_storage_ptr__->ISMComponent = (UInstancedStaticMeshComponent *)0x0;
    __return_storage_ptr__->InstanceId = 0;
  }
  else {
    lpCriticalSection = &this->ISMComponentsCS;
    local_res18.Value._0_1_ = param_2;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar3 = TSet<TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>,TDefaultMapHashableKeyFuncs<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>,TDefaultMapHashableKeyFuncs<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>,0>,FDefaultSetAllocator>
                     *)&this->ISMComponents,param_1->ISMComponent);
    if (pTVar3 == (TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>
                   *)0x0) {
      lVar10 = 0;
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
LAB_147b6dc29:
      if ((char)local_res18.Value == '\0') {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        goto LAB_147b6de61;
      }
      if (lVar10 == 0) {
        pTVar6 = ::operator_new(200);
        if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
          local_98 = ___xmm_00000000000000000000000000000010;
          pTStack_90 = _UNK_150651568;
        }
        else {
          pTVar6->SharedReferenceCount = (atomic<int>)0x1;
          pTVar6->WeakReferenceCount = (atomic<int>)0x1;
          pTVar6->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFSMInstanceElementIdMapEntry___00_SharedPointerInternals__6B_
          ;
          FSMInstanceElementIdMapEntry::FSMInstanceElementIdMapEntry
                    ((FSMInstanceElementIdMapEntry *)(pTVar6 + 1),this,param_1->ISMComponent);
          local_a0 = pTVar6 + 1;
          if ((local_a0 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            pFVar7 = (FSMInstanceElementId *)(*pcVar1)();
            return pFVar7;
          }
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
          pTVar9 = pTVar6;
          local_98 = local_a0;
          pTStack_90 = pTVar6;
        }
        local_78 = &local_98;
        local_80 = param_1;
        TSet<TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>,TDefaultMapHashableKeyFuncs<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<UInstancedStaticMeshComponent_*_const_&,TSharedPtr<FSMInstanceElementIdMapEntry,1>_&&>_>
                  ((TSet<TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>,TDefaultMapHashableKeyFuncs<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>,0>,FDefaultSetAllocator>
                    *)&this->ISMComponents,&local_res18,(bool *)&local_80);
        pTVar6 = *(TReferenceControllerBase<1> **)
                  ((longlong)(int)local_res18.Key * 0x20 + 0x10 + *(longlong *)&this->ISMComponents)
        ;
        lVar10 = *(longlong *)
                  ((longlong)(int)local_res18.Key * 0x20 + 8 + *(longlong *)&this->ISMComponents);
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_90);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        if ((this->OnInstanceIndexUpdatedHandle).ID == 0) {
          FVar8 = TMulticastDelegateRegistration<void___cdecl(UInstancedStaticMeshComponent_*,TArrayView<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData_const_,int>),FDefaultDelegateUserPolicy>
                  ::AddRaw<FSMInstanceElementIdMap>
                            ((TMulticastDelegateRegistration<void___cdecl(UInstancedStaticMeshComponent_*,TArrayView<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData_const_,int>),FDefaultDelegateUserPolicy>
                              *)&FInstancedStaticMeshDelegates::OnInstanceIndexUpdated,
                             (FSMInstanceElementIdMap *)local_50,(pmf_052081c5)this);
                    /* WARNING: Load size is inaccurate */
          (this->OnInstanceIndexUpdatedHandle).ID = *FVar8.ID;
        }
        pTVar11 = pTVar6;
        if ((lVar10 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar7 = (FSMInstanceElementId *)(*pcVar1)();
          return pFVar7;
        }
      }
      if (*(longlong *)(lVar10 + 0xb0) == -1) {
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)param_1->ISMComponent,(FString *)(local_50 + 8),
                   (UObject *)0x0);
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ISMEntry->NextInstanceId < ((uint64) 0xffffffffffffffff)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Elements\\SMInstance\\SMInstanceElementId.cpp"
                           ,0x5b,L"Ran out of instance IDs for ISM component \'%s\'!");
        if ((void *)local_50._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_50._8_8_);
        }
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar7 = (FSMInstanceElementId *)(*pcVar1)();
          return pFVar7;
        }
      }
      local_a8 = *(ulong64 *)(lVar10 + 0xb0);
      *(ulong64 *)(lVar10 + 0xb0) = local_a8 + 1;
      local_68 = &local_a8;
      local_70 = &param_1->InstanceIndex;
      TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,unsigned___int64_const_&>_>
                ((TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
                  *)(lVar10 + 0x10),
                 (TPairInitializer<int_const_&,unsigned___int64_const_&> *)local_88,
                 (bool *)&local_70);
      local_60 = &local_a8;
      local_58 = &param_1->InstanceIndex;
      TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,int_const_&>_>
                ((TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
                  *)(lVar10 + 0x60),
                 (TPairInitializer<unsigned___int64_const_&,int_const_&> *)(local_88 + 4),
                 (bool *)&local_60);
      __return_storage_ptr__->ISMComponent = param_1->ISMComponent;
      uVar5 = local_a8;
    }
    else {
      pTVar11 = *(TReferenceControllerBase<1> **)&pTVar3->field_0x10;
      lVar10 = *(longlong *)&pTVar3->field_0x8;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((lVar10 == 0) ||
         (puVar4 = TMapBase<int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>_>
                   ::Find((TMapBase<int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>_>
                           *)(lVar10 + 0x10),param_1->InstanceIndex), puVar4 == (ulong64 *)0x0))
      goto LAB_147b6dc29;
      uVar5 = *puVar4;
      __return_storage_ptr__->ISMComponent = param_1->ISMComponent;
    }
    __return_storage_ptr__->InstanceId = uVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// GetSMInstanceElementIdsForComponent @ 147b6dea0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<FSMInstanceElementId,TSizedDefaultAllocator<32>_> * __thiscall
FSMInstanceElementIdMap::GetSMInstanceElementIdsForComponent
          (FSMInstanceElementIdMap *this,
          TArray<FSMInstanceElementId,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UInstancedStaticMeshComponent *param_1)

{
  int *piVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  UInstancedStaticMeshComponent *pUVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  int iVar10;
  TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_> *pTVar11;
  TArray<FSMInstanceElementId,TSizedDefaultAllocator<32>_> *pTVar12;
  longlong lVar13;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 local_res8 [8];
  ulonglong local_res10;
  UInstancedStaticMeshComponent *local_res18;
  int local_res20;
  TReferenceControllerBase<1> *local_e0;
  UInstancedStaticMeshComponent *local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  longlong *local_90;
  LPCRITICAL_SECTION local_88;
  longlong *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  uVar16 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->ISMComponentsCS;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  uVar14 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  local_res18 = param_1;
  local_88 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  pTVar11 = TSet<TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>,TDefaultMapHashableKeyFuncs<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>,TDefaultMapHashableKeyFuncs<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>,0>,FDefaultSetAllocator>
                    *)&this->ISMComponents,param_1);
  if (pTVar11 ==
      (TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_> *)0x0) {
    local_e0 = (TReferenceControllerBase<1> *)0x0;
    uVar21 = uVar16;
  }
  else {
    local_e0 = *(TReferenceControllerBase<1> **)&pTVar11->field_0x10;
    uVar21 = *(ulonglong *)&pTVar11->field_0x8;
    if (local_e0 == (TReferenceControllerBase<1> *)0x0) goto LAB_147b6df35;
    LOCK();
    local_e0->SharedReferenceCount = (atomic<int>)((int)local_e0->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_e0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_e0->SharedReferenceCount = (atomic<int>)((int)local_e0->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_147b6df35:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
  if (uVar21 != 0) {
    uVar17 = *(int *)(uVar21 + 0x68) - *(int *)(uVar21 + 0x94);
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    if (*piVar1 < (int)uVar17) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar17,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(uVar21 + 0x70);
    local_res10 = CONCAT44(local_res10._4_4_,1);
    uVar17 = *(uint *)(uVar21 + 0x88);
    local_90 = (longlong *)(uVar21 + 0x60);
    local_a8 = 0;
    uStack_ac = uVar14;
    if (uVar17 != 0) {
      pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(uVar21 + 0x80);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(uVar21 + 0x80) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = pTVar2;
      }
      uVar3 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
      uVar18 = uVar16;
      local_a8 = 0;
      uVar14 = 0;
      while (uVar3 == 0) {
        iVar15 = (int)uVar16;
        local_a8 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)local_a8;
        uVar14 = iVar15 + 1;
        uVar16 = (ulonglong)uVar14;
        uStack_ac = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
        goto LAB_147b6e000;
        uVar3 = *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar15 * 4 + 4);
      }
      local_res10 = (ulonglong)(-uVar3 & uVar3);
      uVar16 = local_res10 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res20 = (int)lVar13;
      uStack_ac = (local_a8 - 1) + local_res20;
      if ((int)uVar17 < (int)uStack_ac) {
        uStack_ac = uVar17;
      }
    }
LAB_147b6e000:
    uVar3 = *(uint *)(uVar21 + 0x88);
    local_c8 = (longlong *)(uVar21 + 0x60);
    iStack_a0 = *(int *)(uVar21 + 0x68) - *(int *)(uVar21 + 0x94);
    uStack_bc = (undefined4)local_res10;
    uVar20 = uVar3 & 0xffffffe0;
    TStack_78._padding_ = CONCAT44(uStack_bc,uVar14);
    uStack_b0 = 0xffffffff;
    TStack_78.CurrentBitIndex = uStack_ac;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    TStack_78._28_4_ = uStack_ac;
    TStack_78.BaseBitIndex = local_a8;
    uStack_58 = CONCAT44(uStack_9c,iStack_a0);
    iVar15 = (int)uVar3 >> 5;
    local_res10 = CONCAT44(local_res10._4_4_,uVar3);
    uStack_c0 = uVar14;
    local_b8 = pTVar2;
    uStack_a4 = uStack_ac;
    local_80 = local_c8;
    TStack_78.Array = pTVar2;
    if (((int)uVar3 < 0) || (uVar14 = uVar3, (int)uVar17 < (int)uVar3)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TArray<FSMInstanceElementId,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar12;
      }
      uVar14 = (uint)local_res10;
    }
    plVar7 = local_90;
    pUVar6 = local_res18;
    uVar17 = *(uint *)(uVar21 + 0x88);
    if (uVar14 != uVar17) {
      local_res10 = CONCAT44(local_res10._4_4_,uVar17);
      pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(uVar21 + 0x80);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(uVar21 + 0x80) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = pTVar2;
      }
      uVar14 = -1 << ((byte)uVar3 & 0x1f) &
               *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar15;
        uVar20 = uVar20 + 0x20;
        iVar15 = iVar15 + 1;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_147b6e122;
        uVar14 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar13 * 4 + 4);
      }
      uVar16 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_98 = (int)lVar13;
      uVar20 = local_98 + -1 + uVar20;
      if ((int)uVar17 < (int)uVar20) {
        uVar20 = uVar17;
      }
      local_res10 = CONCAT44(local_res10._4_4_,uVar20);
    }
LAB_147b6e122:
    iVar15 = (uint)local_res10;
    while( true ) {
      plVar8 = local_80;
      if ((int)local_80[1] - *(int *)((longlong)local_80 + 0x34) != (int)uStack_58) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_78.CurrentBitIndex == iVar15) && (TStack_78.Array == pTVar2)) &&
         (lpCriticalSection = local_88, plVar8 == plVar7)) break;
      local_d8 = pUVar6;
      uStack_d0 = *(undefined8 *)(*plVar8 + (longlong)TStack_78.CurrentBitIndex * 0x18);
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 < pFVar4 + (longlong)*piVar1 * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TArray<FSMInstanceElementId,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar12;
      }
      iVar10 = __return_storage_ptr__->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar10 + 1;
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(UInstancedStaticMeshComponent **)pFVar4 = local_d8;
      *(undefined8 *)(pFVar4 + 8) = uStack_d0;
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
  LeaveCriticalSection(lpCriticalSection);
  return __return_storage_ptr__;
}

// GetSMInstanceIdFromSMInstanceElementId @ 147b6e710

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSMInstanceId * __thiscall
FSMInstanceElementIdMap::GetSMInstanceIdFromSMInstanceElementId
          (FSMInstanceElementIdMap *this,FSMInstanceId *__return_storage_ptr__,
          FSMInstanceElementId *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  longlong lVar2;
  TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_> *pTVar3;
  int *piVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  if ((param_1->ISMComponent != (UInstancedStaticMeshComponent *)0x0) && (param_1->InstanceId != 0))
  {
    lpCriticalSection = &this->ISMComponentsCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar3 = TSet<TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>,TDefaultMapHashableKeyFuncs<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>,TDefaultMapHashableKeyFuncs<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>,0>,FDefaultSetAllocator>
                     *)&this->ISMComponents,param_1->ISMComponent);
    if (pTVar3 == (TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>
                   *)0x0) {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar5 = *(TReferenceControllerBase<1> **)&pTVar3->field_0x10;
      lVar2 = *(longlong *)&pTVar3->field_0x8;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((lVar2 != 0) &&
         (piVar4 = TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
                   ::Find((TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
                           *)(lVar2 + 0x60),param_1->InstanceId), piVar4 != (int *)0x0)) {
        iVar1 = *piVar4;
        __return_storage_ptr__->ISMComponent = param_1->ISMComponent;
        __return_storage_ptr__->InstanceIndex = iVar1;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return __return_storage_ptr__;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  __return_storage_ptr__->ISMComponent = (UInstancedStaticMeshComponent *)0x0;
  __return_storage_ptr__->InstanceIndex = -1;
  return __return_storage_ptr__;
}

// OnComponentReplaced @ 147b7b020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FSMInstanceElementIdMap::OnComponentReplaced
          (FSMInstanceElementIdMap *this,UInstancedStaticMeshComponent *param_1,
          UInstancedStaticMeshComponent *param_2)

{
  TMap<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>,0>_>
  *this_00;
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  ulong64 uVar5;
  code *pcVar6;
  TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
  *this_01;
  TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
  *this_02;
  bool bVar7;
  atomic<int> aVar8;
  TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  longlong lVar11;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar12;
  FSMInstanceElementIdMapEntry *pFVar13;
  atomic<int> aVar14;
  int iVar15;
  TReferenceControllerBase<1> *pTVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  uint uVar19;
  UInstancedStaticMeshComponent *pUVar20;
  undefined1 local_res8 [8];
  UInstancedStaticMeshComponent *local_res18;
  int local_res20;
  TReferenceControllerBase<1> *local_140;
  uint local_138;
  TReferenceControllerBase<1> *local_130;
  TReferenceControllerBase<1> *local_128;
  TReferenceControllerBase<1> *pTStack_120;
  int local_118;
  undefined1 local_114 [12];
  TReferenceControllerBase<1> *local_108;
  TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
  *local_100;
  TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
  *local_f8;
  LPCRITICAL_SECTION local_f0;
  TReferenceControllerBase<1> *local_e8;
  atomic<int> aStack_e0;
  uint uStack_dc;
  TBitArray<FDefaultBitArrayAllocator> *local_d8;
  undefined4 uStack_d0;
  atomic<int> aStack_cc;
  atomic<int> local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TReferenceControllerBase<1> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  UInstancedStaticMeshComponent **local_88;
  TReferenceControllerBase<1> **local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_3c;
  
  lpCriticalSection = (LPCRITICAL_SECTION)&this->ISMComponentsCS;
  local_res18 = param_2;
  local_f0 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  this_00 = &this->ISMComponents;
  pTVar9 = TSet<TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>,TDefaultMapHashableKeyFuncs<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>,TDefaultMapHashableKeyFuncs<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>,0>,FDefaultSetAllocator>
                   *)this_00,param_1);
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  aVar14 = (atomic<int>)0x0;
  if (pTVar9 == (TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>
                 *)0x0) {
    local_130 = (TReferenceControllerBase<1> *)0x0;
    pTVar18 = pTVar16;
LAB_147b7b0a4:
    if (local_130 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_130->SharedReferenceCount = (atomic<int>)((int)local_130->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    local_130 = *(TReferenceControllerBase<1> **)&pTVar9->field_0x10;
    pTVar18 = *(TReferenceControllerBase<1> **)&pTVar9->field_0x8;
    if (local_130 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_130->SharedReferenceCount = (atomic<int>)((int)local_130->SharedReferenceCount + 1);
      UNLOCK();
      goto LAB_147b7b0a4;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_130);
  pUVar20 = local_res18;
  if (pTVar18 == (TReferenceControllerBase<1> *)0x0) goto LAB_147b7b558;
  pTVar9 = TSet<TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>,TDefaultMapHashableKeyFuncs<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>,TDefaultMapHashableKeyFuncs<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>,0>,FDefaultSetAllocator>
                   *)this_00,local_res18);
  local_138 = 1;
  if (pTVar9 == (TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>
                 *)0x0) {
    local_140 = (TReferenceControllerBase<1> *)0x0;
LAB_147b7b121:
    pTVar10 = ::operator_new(200);
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      local_128 = ___xmm_00000000000000000000000000000010;
      pTStack_120 = _UNK_150651568;
      pTVar10 = pTVar16;
    }
    else {
      pTVar10->SharedReferenceCount = (atomic<int>)0x1;
      pTVar10->WeakReferenceCount = (atomic<int>)0x1;
      pTVar10->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFSMInstanceElementIdMapEntry___00_SharedPointerInternals__6B_
      ;
      FSMInstanceElementIdMapEntry::FSMInstanceElementIdMapEntry
                ((FSMInstanceElementIdMapEntry *)(pTVar10 + 1),this,local_res18);
      local_128 = pTVar10 + 1;
      if ((local_128 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      pTStack_120 = pTVar10;
    }
    local_88 = &local_res18;
    local_80 = &local_128;
    TSet<TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>,TDefaultMapHashableKeyFuncs<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UInstancedStaticMeshComponent_*_const_&,TSharedPtr<FSMInstanceElementIdMapEntry,1>_&&>_>
              ((TSet<TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>,TDefaultMapHashableKeyFuncs<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>,0>,FDefaultSetAllocator>
                *)this_00,
               (TPairInitializer<UInstancedStaticMeshComponent_*_const_&,TSharedPtr<FSMInstanceElementIdMapEntry,1>_&&>
                *)&local_res20,(bool *)&local_88);
    pTVar4 = *(TReferenceControllerBase<1> **)
              ((longlong)local_res20 * 0x20 + 0x10 + *(longlong *)&this_00->field_0x0);
    pFVar13 = *(FSMInstanceElementIdMapEntry **)
               ((longlong)local_res20 * 0x20 + 8 + *(longlong *)&this_00->field_0x0);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_140);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_120)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    local_140 = pTVar4;
    if ((pFVar13 == (FSMInstanceElementIdMapEntry *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    pFVar13 = *(FSMInstanceElementIdMapEntry **)&pTVar9->field_0x8;
    local_140 = *(TReferenceControllerBase<1> **)&pTVar9->field_0x10;
    if (local_140 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_140->SharedReferenceCount = (atomic<int>)((int)local_140->SharedReferenceCount + 1);
      UNLOCK();
      pUVar20 = local_res18;
    }
    if (pFVar13 == (FSMInstanceElementIdMapEntry *)0x0) goto LAB_147b7b121;
    ClearInstanceData_NoLock(this,pUVar20,pFVar13);
  }
  local_100 = (TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
               *)&pFVar13->InstanceIndexToIdMap;
  TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
  ::Reserve(local_100,
            (int)pTVar18[1].SharedReferenceCount - *(int *)((longlong)&pTVar18[4]._padding_ + 4));
  if ((pFVar13 == (FSMInstanceElementIdMapEntry *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_f8 = (TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
              *)&pFVar13->InstanceIdToIndexMap;
  TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
  ::Reserve(local_f8,(int)pTVar18[6].SharedReferenceCount -
                     *(int *)((longlong)&pTVar18[9]._padding_ + 4));
  uVar5 = pTVar18[0xb]._padding_;
  if ((pFVar13 == (FSMInstanceElementIdMapEntry *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar13->NextInstanceId = uVar5;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pTVar18 + 7);
  aVar3 = pTVar18[8].SharedReferenceCount;
  local_108 = pTVar18 + 6;
  local_c8 = (atomic<int>)0x0;
  aStack_cc = aVar14;
  if (aVar3 != (atomic<int>)0x0) {
    pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar18[8]._padding_;
    if ((TBitArray<FDefaultBitArrayAllocator> *)pTVar18[8]._padding_ ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = pTVar1;
    }
    uVar19 = (uint)*(longlong *)(pTVar17->AllocatorInstance).InlineData;
    pTVar10 = pTVar16;
    local_c8 = (atomic<int>)0x0;
    aVar14 = (atomic<int>)0x0;
    while (uVar19 == 0) {
      iVar15 = (int)pTVar16;
      local_c8 = (atomic<int>)((int)pTVar10 + 0x20);
      pTVar10 = (TReferenceControllerBase<1> *)(ulonglong)(uint)local_c8;
      aVar14 = (atomic<int>)(iVar15 + 1);
      pTVar16 = (TReferenceControllerBase<1> *)(ulonglong)(uint)aVar14;
      aStack_cc = aVar3;
      if ((int)(((int)aVar3 - 1U) + ((int)((int)aVar3 - 1U) >> 0x1f & 0x1fU)) >> 5 < (int)aVar14)
      goto LAB_147b7b381;
      uVar19 = *(uint *)((longlong)(pTVar17->AllocatorInstance).InlineData +
                        (longlong)iVar15 * 4 + 4);
    }
    local_138 = -uVar19 & uVar19;
    uVar2 = (ulonglong)local_138 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_118 = (int)lVar11;
    aStack_cc = (atomic<int>)(local_118 + -1 + (int)local_c8);
    if ((int)aVar3 < (int)aStack_cc) {
      aStack_cc = aVar3;
    }
  }
LAB_147b7b381:
  aVar8 = pTVar18[8].SharedReferenceCount;
  uStack_dc = local_138;
  uStack_c4 = local_3c;
  iStack_c0 = (int)pTVar18[6].SharedReferenceCount - *(int *)((longlong)&pTVar18[9]._padding_ + 4);
  TStack_b0._padding_ = CONCAT44(local_138,aVar14);
  uStack_d0 = 0xffffffff;
  uVar19 = (uint)aVar8 & 0xffffffe0;
  TStack_b0.CurrentBitIndex = (int)aStack_cc;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)aVar8 >> 5;
  TStack_b0._28_4_ = local_3c;
  TStack_b0.BaseBitIndex = (int)local_c8;
  uStack_90 = CONCAT44(uStack_bc,iStack_c0);
  local_e8 = local_108;
  aStack_e0 = aVar14;
  local_d8 = pTVar1;
  local_b8 = local_108;
  TStack_b0.Array = pTVar1;
  if ((((int)aVar8 < 0) || ((int)aVar3 < (int)aVar8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_02 = local_f8;
  this_01 = local_100;
  pTVar16 = local_108;
  aVar14 = pTVar18[8].SharedReferenceCount;
  if (aVar8 != aVar14) {
    pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar18[8]._padding_;
    if ((TBitArray<FDefaultBitArrayAllocator> *)pTVar18[8]._padding_ ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = pTVar1;
    }
    uVar12 = -1 << (aVar8._0_1_ & 0x1f) &
             *(uint *)((longlong)(pTVar17->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar15;
      uVar19 = uVar19 + 0x20;
      iVar15 = iVar15 + 1;
      aVar8 = aVar14;
      if ((int)(((int)aVar14 - 1U) + ((int)((int)aVar14 - 1U) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_147b7b4a0;
      uVar12 = *(uint *)((longlong)(pTVar17->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    aVar8 = (atomic<int>)((int)lVar11 + -1 + uVar19);
    if ((int)aVar14 < (int)aVar8) {
      aVar8 = aVar14;
    }
  }
LAB_147b7b4a0:
  while( true ) {
    pTVar18 = local_b8;
    if ((int)local_b8->SharedReferenceCount - *(int *)((longlong)&local_b8[3]._padding_ + 4) !=
        (int)uStack_90) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((((atomic<int>)TStack_b0.CurrentBitIndex == aVar8) && (TStack_b0.Array == pTVar1)) &&
       (pTVar18 == pTVar16)) break;
    lVar11 = pTVar18->_padding_ + (longlong)TStack_b0.CurrentBitIndex * 0x18;
    bVar7 = UInstancedStaticMeshComponent::IsValidInstance(local_res18,*(int *)(lVar11 + 8));
    if (bVar7) {
      local_78 = lVar11 + 8;
      local_70 = lVar11;
      TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,unsigned___int64_const_&>_>
                (this_01,(TPairInitializer<int_const_&,unsigned___int64_const_&> *)local_114,
                 (bool *)&local_78);
      local_68 = lVar11;
      local_60 = lVar11 + 8;
      TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,int_const_&>_>
                (this_02,(TPairInitializer<unsigned___int64_const_&,int_const_&> *)(local_114 + 4),
                 (bool *)&local_68);
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_140);
  lpCriticalSection = local_f0;
LAB_147b7b558:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_130);
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// OnInstanceIndexUpdated @ 147b7b810

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FSMInstanceElementIdMap::OnInstanceIndexUpdated
          (FSMInstanceElementIdMap *this,UInstancedStaticMeshComponent *param_1,
          TArrayView<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData_const_,int> *param_2)

{
  int *piVar1;
  TMulticastDelegate<void___cdecl(FSMInstanceElementId_const_&,int),FDefaultDelegateUserPolicy>
  *this_00;
  ulonglong uVar2;
  EInstanceIndexUpdateType EVar3;
  undefined4 uVar4;
  FSMInstanceElementIdMapEntry *pFVar5;
  uint *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  FDelegateHandle FVar10;
  ulong64 uVar11;
  code *pcVar12;
  TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
  *pTVar13;
  FSMInstanceElementIdMapEntry *pFVar14;
  bool bVar15;
  bool bVar16;
  char cVar17;
  TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_> *pTVar18;
  int *piVar19;
  uint uVar20;
  longlong lVar21;
  ulong64 *puVar22;
  TReferenceControllerBase<1> *pTVar23;
  undefined1 *puVar24;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar25;
  int iVar26;
  ulong64 *puVar27;
  uint *puVar28;
  TBitArray<FDefaultBitArrayAllocator> *pTVar29;
  FInstanceIndexUpdateData *pFVar30;
  uint uVar31;
  FSMInstanceElementIdMapEntry *pFVar32;
  undefined1 local_res20 [8];
  uint local_1a0;
  uint local_198 [2];
  uint local_190 [2];
  ulong64 local_188;
  FSMInstanceElementIdMapEntry *local_180;
  FInstanceIndexUpdateData *local_178;
  int local_170;
  int local_16c;
  TPairInitializer<int_const_&,unsigned___int64_const_&> local_168;
  TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
  *local_158;
  TBitArray<FDefaultBitArrayAllocator> *local_150;
  ulong64 local_148;
  FInstanceIndexUpdateData *local_140;
  LPCRITICAL_SECTION local_138;
  TReferenceControllerBase<1> *local_130;
  TReferenceControllerBase<1> *local_128;
  TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
  *local_120;
  uint uStack_118;
  uint uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  uint local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  UInstancedStaticMeshComponent *local_c0;
  undefined8 local_b8;
  int *local_b0;
  ulong64 *local_a8;
  FSMInstanceElementId local_a0;
  FSMInstanceElementId local_90;
  FSMInstanceElementId local_80;
  FDestructionSentinel local_70 [2];
  undefined4 local_3c;
  
  lpCriticalSection = (LPCRITICAL_SECTION)&this->ISMComponentsCS;
  local_138 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  pTVar18 = TSet<TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>,TDefaultMapHashableKeyFuncs<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>,TDefaultMapHashableKeyFuncs<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>,0>,FDefaultSetAllocator>
                    *)&this->ISMComponents,param_1);
  if (pTVar18 ==
      (TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_> *)0x0) {
    pTVar23 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar23 = *(TReferenceControllerBase<1> **)&pTVar18->field_0x10;
    pFVar5 = *(FSMInstanceElementIdMapEntry **)&pTVar18->field_0x8;
    if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_128 = pTVar23;
    if (pFVar5 != (FSMInstanceElementIdMapEntry *)0x0) {
      pFVar30 = param_2->DataPtr;
      local_140 = pFVar30 + param_2->ArrayNum;
      pFVar32 = pFVar5;
      pFVar14 = pFVar5;
      local_178 = pFVar30;
      if (pFVar30 != local_140) {
        do {
          local_130 = pTVar23;
          local_180 = pFVar14;
          puVar27 = (ulong64 *)0x0;
          EVar3 = pFVar30->Type;
          local_178 = pFVar30;
          if (EVar3 == Removed) {
            if ((pFVar32 == (FSMInstanceElementIdMapEntry *)0x0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            uVar20 = pFVar30->Index;
            if (*(int *)&(pFVar32->InstanceIndexToIdMap).field_0x8 !=
                *(int *)&(pFVar32->InstanceIndexToIdMap).field_0x34) {
              puVar7 = *(undefined1 **)&(pFVar32->InstanceIndexToIdMap).field_0x40;
              puVar24 = &(pFVar32->InstanceIndexToIdMap).field_0x38;
              if (puVar7 != (undefined1 *)0x0) {
                puVar24 = puVar7;
              }
              iVar26 = *(int *)(puVar24 +
                               (ulonglong)
                               (*(int *)&(pFVar32->InstanceIndexToIdMap).field_0x48 - 1U & uVar20) *
                               4);
              local_180 = pFVar32;
              if (iVar26 != -1) {
                do {
                  lVar21 = *(longlong *)&pFVar32->InstanceIndexToIdMap + (longlong)iVar26 * 0x18;
                  if (*(uint *)(*(longlong *)&pFVar32->InstanceIndexToIdMap +
                               (longlong)iVar26 * 0x18) == uVar20) {
                    puVar22 = (ulong64 *)(lVar21 + 8);
                    if (lVar21 == 0) {
                      puVar22 = puVar27;
                    }
                    if (puVar22 != (ulong64 *)0x0) {
                      uVar11 = *puVar22;
                      local_90.ISMComponent = param_1;
                      local_90.InstanceId = uVar11;
                      TMulticastDelegate<void___cdecl(FSMInstanceElementId_const_&,int),FDefaultDelegateUserPolicy>
                      ::Broadcast(&this->OnInstancePreRemovalDelegate,&local_90,uVar20);
                      if ((pFVar32 == (FSMInstanceElementIdMapEntry *)0x0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar15)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      local_190[0] = pFVar30->Index;
                      if (*(int *)&(pFVar32->InstanceIndexToIdMap).field_0x8 !=
                          *(int *)&(pFVar32->InstanceIndexToIdMap).field_0x34) {
                        TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
                        ::RemoveImpl<int>((TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
                                           *)&pFVar32->InstanceIndexToIdMap,local_190[0],
                                          (int *)local_190);
                      }
                      if ((pFVar32 == (FSMInstanceElementIdMapEntry *)0x0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar15)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      local_148 = uVar11;
                      if (*(int *)&(pFVar32->InstanceIdToIndexMap).field_0x8 !=
                          *(int *)&(pFVar32->InstanceIdToIndexMap).field_0x34) {
                        TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
                        ::RemoveImpl<unsigned___int64>
                                  ((TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
                                    *)&pFVar32->InstanceIdToIndexMap,
                                   (int)(uVar11 >> 0x20) * 0x17 + (int)uVar11,&local_148);
                      }
                      local_80.ISMComponent = param_1;
                      local_80.InstanceId = uVar11;
                      TMulticastDelegate<void___cdecl(FSMInstanceElementId_const_&,int),FDefaultDelegateUserPolicy>
                      ::Broadcast(&this->OnInstanceRemovedDelegate,&local_80,pFVar30->Index);
                    }
                    break;
                  }
                  iVar26 = *(int *)(lVar21 + 0x10);
                } while (iVar26 != -1);
              }
            }
          }
          else if (EVar3 == Relocated) {
            if ((pFVar32 == (FSMInstanceElementIdMapEntry *)0x0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            if (*(int *)&(pFVar32->InstanceIndexToIdMap).field_0x8 !=
                *(int *)&(pFVar32->InstanceIndexToIdMap).field_0x34) {
              puVar7 = *(undefined1 **)&(pFVar32->InstanceIndexToIdMap).field_0x40;
              puVar24 = &(pFVar32->InstanceIndexToIdMap).field_0x38;
              if (puVar7 != (undefined1 *)0x0) {
                puVar24 = puVar7;
              }
              iVar26 = *(int *)(puVar24 +
                               (ulonglong)
                               (*(int *)&(pFVar32->InstanceIndexToIdMap).field_0x48 - 1U &
                               pFVar30->OldIndex) * 4);
              if (iVar26 != -1) {
                do {
                  lVar21 = *(longlong *)&pFVar32->InstanceIndexToIdMap + (longlong)iVar26 * 0x18;
                  if (*(uint *)(*(longlong *)&pFVar32->InstanceIndexToIdMap +
                               (longlong)iVar26 * 0x18) == pFVar30->OldIndex) {
                    puVar22 = (ulong64 *)(lVar21 + 8);
                    if (lVar21 == 0) {
                      puVar22 = puVar27;
                    }
                    if (puVar22 != (ulong64 *)0x0) {
                      local_188 = *puVar22;
                      if ((pFVar32 == (FSMInstanceElementIdMapEntry *)0x0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar15)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      local_198[0] = pFVar30->OldIndex;
                      if (*(int *)&(pFVar32->InstanceIndexToIdMap).field_0x8 !=
                          *(int *)&(pFVar32->InstanceIndexToIdMap).field_0x34) {
                        TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
                        ::RemoveImpl<int>((TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
                                           *)&pFVar32->InstanceIndexToIdMap,local_198[0],
                                          (int *)local_198);
                      }
                      if ((pFVar32 == (FSMInstanceElementIdMapEntry *)0x0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar15)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      local_a8 = &local_188;
                      piVar1 = &pFVar30->Index;
                      local_b0 = piVar1;
                      TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
                      ::Emplace<TPairInitializer<int_const_&,unsigned___int64_const_&>_>
                                ((TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
                                  *)&pFVar32->InstanceIndexToIdMap,&local_168,(bool *)&local_b0);
                      iVar26 = *piVar1;
                      if ((pFVar32 == (FSMInstanceElementIdMapEntry *)0x0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar15)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      piVar19 = TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
                                ::FindChecked((TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
                                               *)&pFVar32->InstanceIdToIndexMap,local_188);
                      *piVar19 = iVar26;
                      local_a0.InstanceId = local_188;
                      local_a0.ISMComponent = param_1;
                      TMulticastDelegate<void___cdecl(FSMInstanceElementId_const_&,int,int),FDefaultDelegateUserPolicy>
                      ::Broadcast(&this->OnInstanceRemappedDelegate,&local_a0,pFVar30->OldIndex,
                                  *piVar1);
                    }
                    break;
                  }
                  iVar26 = *(int *)(lVar21 + 0x10);
                } while (iVar26 != -1);
              }
            }
          }
          else if (EVar3 == Cleared) {
            if ((pFVar32 == (FSMInstanceElementIdMapEntry *)0x0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x44d,L""), bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            ClearInstanceData_NoLock(this,param_1,pFVar32);
          }
          else if (EVar3 == Destroyed) {
            local_168.Value = (ulong64 *)param_1;
            if (*(int *)&(this->ISMComponents).field_0x8 !=
                *(int *)&(this->ISMComponents).field_0x34) {
              uVar20 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)param_1 >> 4)) * -0x7a143595;
              uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
              TSet<TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>,TDefaultMapHashableKeyFuncs<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>,0>,FDefaultSetAllocator>
              ::RemoveImpl<UInstancedStaticMeshComponent_const_*>
                        ((TSet<TTuple<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>_>,TDefaultMapHashableKeyFuncs<UInstancedStaticMeshComponent_*,TSharedPtr<FSMInstanceElementIdMapEntry,1>,0>,FDefaultSetAllocator>
                          *)&this->ISMComponents,uVar20 >> 0x10 ^ uVar20,
                         (UInstancedStaticMeshComponent **)&local_168.Value);
            }
            this_00 = &this->OnInstanceRemovedDelegate;
            bVar15 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                               ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
            if (bVar15) {
              if ((pFVar32 == (FSMInstanceElementIdMapEntry *)0x0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)
                        &(pFVar5->InstanceIdToIndexMap).field_0x10;
              local_158 = &pFVar32->InstanceIdToIndexMap;
              uVar20 = *(uint *)&(pFVar5->InstanceIdToIndexMap).field_0x28;
              uStack_118 = 0;
              uStack_114 = 1;
              uStack_104 = uStack_118;
              local_100 = uStack_118;
              if (uVar20 != 0) {
                puVar6 = *(uint **)&(pFVar5->InstanceIdToIndexMap).field_0x20;
                puVar28 = (uint *)pTVar29;
                if (puVar6 != (uint *)0x0) {
                  puVar28 = puVar6;
                }
                uVar31 = *puVar28;
                puVar22 = puVar27;
                while( true ) {
                  uStack_118 = (uint)puVar27;
                  local_100 = (uint)puVar22;
                  if (uVar31 != 0) break;
                  lVar21 = (longlong)(int)uStack_118;
                  local_100 = local_100 + 0x20;
                  puVar22 = (ulong64 *)(ulonglong)local_100;
                  uStack_118 = uStack_118 + 1;
                  puVar27 = (ulong64 *)(ulonglong)uStack_118;
                  uStack_104 = uVar20;
                  if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 <
                      (int)uStack_118) goto LAB_147b7ba2f;
                  uVar31 = puVar28[lVar21 + 1];
                }
                uStack_114 = -uVar31 & uVar31;
                uVar2 = (ulonglong)uStack_114 * 2 + 1;
                lVar21 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                  }
                }
                local_170 = (int)lVar21;
                uStack_104 = (local_100 - 1) + local_170;
                if ((int)uVar20 < (int)uStack_104) {
                  uStack_104 = uVar20;
                }
              }
LAB_147b7ba2f:
              uStack_fc = local_3c;
              TStack_e8._padding_ = CONCAT44(uStack_114,uStack_118);
              uStack_108 = 0xffffffff;
              local_1a0 = *(uint *)&(pFVar5->InstanceIdToIndexMap).field_0x28;
              iStack_f8 = *(int *)&(pFVar5->InstanceIdToIndexMap).field_0x8 -
                          *(int *)&(pFVar5->InstanceIdToIndexMap).field_0x34;
              TStack_e8.CurrentBitIndex = uStack_104;
              TStack_e8.UnvisitedBitMask = 0xffffffff;
              uVar31 = local_1a0 & 0xffffffe0;
              iVar26 = (int)local_1a0 >> 5;
              TStack_e8._28_4_ = local_3c;
              TStack_e8.BaseBitIndex = local_100;
              uStack_c8 = CONCAT44(uStack_f4,iStack_f8);
              local_150 = pTVar29;
              local_120 = local_158;
              local_110 = (undefined1 *)pTVar29;
              local_f0 = local_158;
              TStack_e8.Array = pTVar29;
              if ((((int)local_1a0 < 0) || ((int)uVar20 < (int)local_1a0)) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x7af,L""), bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar20 = *(uint *)&(pFVar5->InstanceIdToIndexMap).field_0x28;
              if (local_1a0 != uVar20) {
                puVar7 = *(undefined1 **)&(pFVar5->InstanceIdToIndexMap).field_0x20;
                puVar24 = (undefined1 *)pTVar29;
                if (puVar7 != (undefined1 *)0x0) {
                  puVar24 = puVar7;
                }
                uVar25 = -1 << ((byte)local_1a0 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar26 * 4);
                while (uVar25 == 0) {
                  lVar21 = (longlong)iVar26;
                  uVar31 = uVar31 + 0x20;
                  iVar26 = iVar26 + 1;
                  local_1a0 = uVar20;
                  if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
                  goto LAB_147b7bb60;
                  uVar25 = *(uint *)(puVar24 + lVar21 * 4 + 4);
                }
                uVar2 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
                lVar21 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                  }
                }
                local_16c = (int)lVar21;
                local_1a0 = local_16c + -1 + uVar31;
                if ((int)uVar20 < (int)local_1a0) {
                  local_1a0 = uVar20;
                }
              }
LAB_147b7bb60:
              while( true ) {
                pTVar13 = local_f0;
                if (*(int *)&local_f0->field_0x8 - *(int *)&local_f0->field_0x34 != (int)uStack_c8)
                {
                  local_res20[0] = 0;
                  `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
                }
                if (((TStack_e8.CurrentBitIndex == local_1a0) && (TStack_e8.Array == pTVar29)) &&
                   (pFVar30 = local_178, pFVar32 = local_180, pTVar13 == local_158)) break;
                lVar21 = *(longlong *)pTVar13;
                uVar4 = *(undefined4 *)(lVar21 + 8 + (longlong)TStack_e8.CurrentBitIndex * 0x18);
                local_b8 = *(undefined8 *)(lVar21 + (longlong)TStack_e8.CurrentBitIndex * 0x18);
                local_c0 = param_1;
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                           (FWriteAccessScope *)local_70);
                puVar7 = &(this->OnInstanceRemovedDelegate).field_0x1c;
                *(int *)puVar7 = *(int *)puVar7 + 1;
                bVar15 = false;
                uVar20 = *(int *)&(this->OnInstanceRemovedDelegate).field_0x10 - 1;
                if (-1 < (int)uVar20) {
                  lVar21 = (longlong)(int)uVar20 << 4;
                  bVar15 = false;
                  do {
                    uVar31 = 0;
                    if ((int)uVar20 < *(int *)&(this->OnInstanceRemovedDelegate).field_0x10) {
                      uVar31 = ~uVar20 >> 0x1f;
                    }
                    if ((uVar31 == 0) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar16)) {
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    lVar8 = *(longlong *)&(this->OnInstanceRemovedDelegate).field_0x8;
                    if (((*(int *)(lVar21 + 8 + lVar8) == 0) ||
                        (plVar9 = *(longlong **)(lVar21 + lVar8), plVar9 == (longlong *)0x0)) ||
                       (cVar17 = (**(code **)(*plVar9 + 0x68))(plVar9,&local_c0,uVar4),
                       cVar17 == '\0')) {
                      bVar15 = true;
                    }
                    lVar21 = lVar21 + -0x10;
                    uVar20 = uVar20 - 1;
                  } while (-1 < (int)uVar20);
                }
                puVar7 = &(this->OnInstanceRemovedDelegate).field_0x1c;
                *(int *)puVar7 = *(int *)puVar7 + -1;
                if (bVar15) {
                  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
                }
                if (local_70[0].bDestroyed == false) {
                  FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70[0].Accessor,local_70);
                }
                TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
                pTVar29 = local_150;
              }
            }
          }
          pFVar30 = pFVar30 + 1;
          lpCriticalSection = local_138;
          pTVar23 = local_130;
          pFVar14 = local_180;
          local_178 = pFVar30;
        } while (pFVar30 != local_140);
      }
      if ((*(int *)&(this->ISMComponents).field_0x8 == *(int *)&(this->ISMComponents).field_0x34) &&
         (FVar10.ID = (this->OnInstanceIndexUpdatedHandle).ID, FVar10.ID != 0)) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FInstancedStaticMeshDelegates::OnInstanceIndexUpdated,FVar10);
        (this->OnInstanceIndexUpdatedHandle).ID = 0;
        pTVar23 = local_128;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
                    /* WARNING: Could not recover jumptable at 0x000147b7c0b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// RegisterCallbacks @ 147b81c60

void __thiscall FSMInstanceElementIdMap::RegisterCallbacks(FSMInstanceElementIdMap *this)

{
  FDelegateHandle FVar1;
  
  if ((this->OnInstanceIndexUpdatedHandle).ID == 0) {
    FVar1 = TMulticastDelegateRegistration<void___cdecl(UInstancedStaticMeshComponent_*,TArrayView<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData_const_,int>),FDefaultDelegateUserPolicy>
            ::AddRaw<FSMInstanceElementIdMap>
                      ((TMulticastDelegateRegistration<void___cdecl(UInstancedStaticMeshComponent_*,TArrayView<FInstancedStaticMeshDelegates::FInstanceIndexUpdateData_const_,int>),FDefaultDelegateUserPolicy>
                        *)&FInstancedStaticMeshDelegates::OnInstanceIndexUpdated,
                       (FSMInstanceElementIdMap *)&stack0x00000008,(pmf_052081c5)this);
                    /* WARNING: Load size is inaccurate */
    (this->OnInstanceIndexUpdatedHandle).ID = *FVar1.ID;
  }
  return;
}

// SerializeIdMappings @ 147b89450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FSMInstanceElementIdMap::SerializeIdMappings
          (FSMInstanceElementIdMap *this,FSMInstanceElementIdMapEntry *param_1,FArchive *param_2)

{
  TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
  *pTVar1;
  TMap<int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>_>
  *this_00;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  FSMInstanceElementIdMap *pFVar10;
  TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
  *pTVar11;
  TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  byte bVar16;
  longlong lVar17;
  FMRSWRecursiveAccessDetector *this_01;
  int *piVar18;
  FDestructionSentinel *pFVar19;
  TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
  *pTVar20;
  FSMInstanceElementIdMapEntry *pFVar21;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar22;
  int iVar23;
  int iVar24;
  undefined1 *puVar25;
  uint *puVar26;
  undefined1 *puVar27;
  ForElementType<FSetElementId> FVar28;
  FArchive *pFVar29;
  uint uVar30;
  uint uVar31;
  TMulticastDelegate<void___cdecl(FSMInstanceElementId_const_&,int,int),FDefaultDelegateUserPolicy>
  *this_02;
  undefined1 auStackY_2d8 [32];
  undefined1 local_2a8;
  undefined1 local_2a7;
  undefined1 local_2a6 [2];
  uint local_2a4;
  ulonglong local_2a0;
  TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
  *local_298;
  FSMInstanceElementIdMapEntry *local_290;
  FArchive *local_288;
  FSMInstanceElementIdMap *local_280;
  TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
  *local_278;
  int iStack_270;
  uint uStack_26c;
  TBitArray<FDefaultBitArrayAllocator> *local_268;
  undefined4 uStack_260;
  uint uStack_25c;
  int local_258;
  int iStack_254;
  int iStack_250;
  undefined4 uStack_24c;
  LPCRITICAL_SECTION local_248;
  TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
  *local_240;
  int iStack_238;
  uint uStack_234;
  undefined1 *local_230;
  undefined4 uStack_228;
  int iStack_224;
  int local_220;
  undefined4 uStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  int local_210;
  int local_20c;
  TPairInitializer<int_const_&,unsigned___int64_const_&> local_208;
  int local_1f8;
  TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
  *local_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e8;
  undefined8 uStack_1c8;
  TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
  *local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b8;
  undefined8 uStack_198;
  TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
  *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_188;
  undefined8 uStack_168;
  longlong local_160;
  longlong local_158;
  UInstancedStaticMeshComponent *local_150;
  ulonglong local_148;
  UInstancedStaticMeshComponent *local_140;
  ulonglong local_138;
  UInstancedStaticMeshComponent *local_130;
  ulonglong local_128;
  FDestructionSentinel local_120;
  FDestructionSentinel local_108;
  FDestructionSentinel local_f0 [2];
  undefined4 local_bc;
  int local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_60;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->ISMComponentsCS;
  local_290 = param_1;
  local_288 = param_2;
  local_280 = this;
  local_248 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_60.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_50[0] = 0;
  if (((param_2->field_0x28 & 1) != 0) &&
     (((bVar13 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                           ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                            &this->OnInstanceRemappedDelegate), bVar13 ||
       (bVar13 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                           ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                            &this->OnInstanceRemovedDelegate), bVar13)) &&
      ((TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
        *)local_98 != &param_1->InstanceIdToIndexMap)))) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&local_60,local_50,
               (ForElementType<FSetElementId> *)&(param_1->InstanceIdToIndexMap).field_0x38,
               *(int *)&(param_1->InstanceIdToIndexMap).field_0x48);
    iVar24 = *(int *)&(param_1->InstanceIdToIndexMap).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,iVar24);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar24,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
               (int *)(local_98 + 0xc));
    local_68 = *(undefined4 *)&(param_1->InstanceIdToIndexMap).field_0x30;
    puVar6 = &(param_1->InstanceIdToIndexMap).field_0x10;
    local_64 = *(int *)&(param_1->InstanceIdToIndexMap).field_0x34;
    if (local_98 + 0x10 != puVar6) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar6);
    }
    if (iVar24 != 0) {
      memcpy((void *)local_98._0_8_,*(void **)&param_1->InstanceIdToIndexMap,(longlong)iVar24 * 0x18
            );
    }
  }
  pTVar1 = &param_1->InstanceIdToIndexMap;
  TSetPrivateFriend::
  Serialize<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
            (param_2,(TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
                      *)pTVar1);
  local_2a0 = 1;
  if ((param_2->field_0x28 & 1) != 0) {
    this_00 = &param_1->InstanceIndexToIdMap;
    local_298 = (TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
                 *)this_00;
    TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
             *)this_00);
    TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
               *)this_00,
              *(int *)&(param_1->InstanceIdToIndexMap).field_0x8 -
              *(int *)&(param_1->InstanceIdToIndexMap).field_0x34);
    uStack_234 = (uint)local_2a0;
    puVar6 = &(param_1->InstanceIdToIndexMap).field_0x10;
    iVar24 = *(int *)&(param_1->InstanceIdToIndexMap).field_0x28;
    iStack_238 = 0;
    local_220 = 0;
    iStack_224 = 0;
    if (iVar24 != 0) {
      puVar26 = *(uint **)&(param_1->InstanceIdToIndexMap).field_0x20;
      if (puVar26 == (uint *)0x0) {
        puVar26 = (uint *)puVar6;
      }
      uVar22 = *puVar26;
      local_220 = 0;
      while (uVar22 == 0) {
        lVar17 = (longlong)iStack_238;
        local_220 = local_220 + 0x20;
        iStack_238 = iStack_238 + 1;
        iStack_224 = iVar24;
        if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_238)
        goto LAB_147b896ae;
        uVar22 = puVar26[lVar17 + 1];
      }
      uStack_234 = -uVar22 & uVar22;
      uVar3 = (ulonglong)uStack_234 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_210 = (int)lVar17;
      iStack_224 = local_210 + -1 + local_220;
      if (iVar24 < iStack_224) {
        iStack_224 = iVar24;
      }
    }
LAB_147b896ae:
    uStack_21c = local_bc;
    iStack_218 = *(int *)&(param_1->InstanceIdToIndexMap).field_0x8 -
                 *(int *)&(param_1->InstanceIdToIndexMap).field_0x34;
    uVar22 = *(uint *)&(param_1->InstanceIdToIndexMap).field_0x28;
    uStack_228 = 0xffffffff;
    uVar30 = uVar22 & 0xffffffe0;
    TStack_1e8._padding_ = CONCAT44(uStack_234,iStack_238);
    TStack_1e8.CurrentBitIndex = iStack_224;
    TStack_1e8.UnvisitedBitMask = 0xffffffff;
    iVar23 = (int)uVar22 >> 5;
    TStack_1e8._28_4_ = local_bc;
    TStack_1e8.BaseBitIndex = local_220;
    uStack_1c8 = CONCAT44(uStack_214,iStack_218);
    local_240 = pTVar1;
    local_230 = puVar6;
    local_1f0 = pTVar1;
    TStack_1e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar6;
    if ((((int)uVar22 < 0) || (iVar24 < (int)uVar22)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar20 = local_298;
    uVar31 = *(uint *)&(param_1->InstanceIdToIndexMap).field_0x28;
    if (uVar22 != uVar31) {
      puVar27 = *(undefined1 **)&(param_1->InstanceIdToIndexMap).field_0x20;
      puVar25 = puVar6;
      if (puVar27 != (undefined1 *)0x0) {
        puVar25 = puVar27;
      }
      uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar23 * 4);
      while (uVar22 == 0) {
        lVar17 = (longlong)iVar23;
        uVar30 = uVar30 + 0x20;
        iVar23 = iVar23 + 1;
        uVar22 = uVar31;
        if ((int)((uVar31 - 1) + ((int)(uVar31 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
        goto LAB_147b897d0;
        uVar22 = *(uint *)(puVar25 + lVar17 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_20c = (int)lVar17;
      uVar22 = local_20c + -1 + uVar30;
      if ((int)uVar31 < (int)uVar22) {
        uVar22 = uVar31;
      }
    }
LAB_147b897d0:
    while( true ) {
      pTVar11 = local_1f0;
      if (*(int *)(&local_1f0->field_0x0 + 8) - *(int *)(&local_1f0->field_0x0 + 0x34) !=
          (int)uStack_1c8) {
        local_2a8 = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2a8);
      }
      if (((TStack_1e8.CurrentBitIndex == uVar22) &&
          (TStack_1e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar6)) &&
         (this = local_280, param_2 = local_288, pTVar11 == pTVar1)) break;
      local_158 = *(longlong *)&pTVar11->field_0x0 + (longlong)TStack_1e8.CurrentBitIndex * 0x18;
      local_160 = local_158 + 8;
      TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,unsigned___int64_const_&>_>
                (pTVar20,&local_208,(bool *)&local_160);
      TStack_1e8.UnvisitedBitMask = TStack_1e8.UnvisitedBitMask & ~TStack_1e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e8);
    }
  }
  uVar22 = (uint)local_2a0;
  if (((param_2->field_0x28 & 1) != 0) &&
     ((bVar13 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &this->OnInstanceRemappedDelegate), bVar13 ||
      (bVar13 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &this->OnInstanceRemovedDelegate), bVar13)))) {
    uVar30 = local_70;
    iStack_270 = 0;
    local_258 = 0;
    uStack_25c = 0;
    if (local_70 != 0) {
      puVar26 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar26 = local_78;
      }
      uVar31 = *puVar26;
      local_258 = 0;
      while (uVar31 == 0) {
        lVar17 = (longlong)iStack_270;
        local_258 = local_258 + 0x20;
        iStack_270 = iStack_270 + 1;
        uStack_25c = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_270)
        goto LAB_147b89910;
        uVar31 = (puVar26 + 1)[lVar17];
      }
      uVar22 = -uVar31 & uVar31;
      uVar3 = (ulonglong)uVar22 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_208.Key._4_4_ = (int)lVar17;
      uStack_25c = local_258 + -1 + local_208.Key._4_4_;
      if ((int)local_70 < (int)uStack_25c) {
        uStack_25c = local_70;
      }
    }
LAB_147b89910:
    local_278 = (TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
                 *)local_98;
    uVar31 = local_70 & 0xffffffe0;
    iStack_254 = local_9c;
    local_268 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    iStack_250 = local_98._8_4_ - local_64;
    uStack_260 = 0xffffffff;
    TStack_1b8.CurrentBitIndex = uStack_25c;
    TStack_1b8.UnvisitedBitMask = 0xffffffff;
    TStack_1b8._padding_ = CONCAT44(uVar22,iStack_270);
    iVar24 = (int)local_70 >> 5;
    TStack_1b8._28_4_ = local_9c;
    TStack_1b8.BaseBitIndex = local_258;
    uStack_198 = CONCAT44(uStack_24c,iStack_250);
    bVar16 = (byte)local_70;
    local_2a4 = local_70;
    uStack_26c = uVar22;
    local_1c0 = local_278;
    TStack_1b8.Array = local_268;
    if (((int)local_70 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (uVar30 != local_70) {
      puVar26 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar26 = local_78;
      }
      uVar22 = -1 << (bVar16 & 0x1f) & puVar26[iVar24];
      while (uVar22 == 0) {
        lVar17 = (longlong)iVar24;
        uVar31 = uVar31 + 0x20;
        iVar24 = iVar24 + 1;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24) {
          local_2a4 = local_70;
          uVar30 = local_70;
          goto LAB_147b89a36;
        }
        uVar22 = (puVar26 + 1)[lVar17];
      }
      uVar3 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_208.Value._0_4_ = (int)lVar17;
      local_2a4 = (int)local_208.Value + -1 + uVar31;
      uVar30 = local_2a4;
      if ((int)local_70 < (int)local_2a4) {
        uVar30 = local_70;
        local_2a4 = local_70;
      }
    }
LAB_147b89a36:
    pTVar20 = (TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
               *)&this->OnInstanceRemappedDelegate;
    local_298 = pTVar20;
    while( true ) {
      pTVar1 = local_1c0;
      if (*(int *)(&local_1c0->field_0x0 + 8) - *(int *)(&local_1c0->field_0x0 + 0x34) !=
          (int)uStack_198) {
        local_2a7 = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2a7);
      }
      if (((TStack_1b8.CurrentBitIndex == uVar30) &&
          (TStack_1b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (pTVar1 == (TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
                     *)local_98)) break;
      lVar17 = *(longlong *)&pTVar1->field_0x0;
      uVar3 = *(ulonglong *)(lVar17 + (longlong)TStack_1b8.CurrentBitIndex * 0x18);
      lVar17 = lVar17 + (longlong)TStack_1b8.CurrentBitIndex * 0x18;
      if (*(int *)&(local_290->InstanceIdToIndexMap).field_0x8 !=
          *(int *)&(local_290->InstanceIdToIndexMap).field_0x34) {
        puVar6 = *(undefined1 **)&(local_290->InstanceIdToIndexMap).field_0x40;
        puVar27 = &(local_290->InstanceIdToIndexMap).field_0x38;
        if (puVar6 != (undefined1 *)0x0) {
          puVar27 = puVar6;
        }
        iVar24 = *(int *)(puVar27 +
                         ((uVar3 >> 0x20) * 0x17 + uVar3 &
                         (ulonglong)(*(int *)&(local_290->InstanceIdToIndexMap).field_0x48 - 1)) * 4
                         );
        if (iVar24 != -1) {
LAB_147b89af0:
          lVar2 = *(longlong *)&local_290->InstanceIdToIndexMap + (longlong)iVar24 * 0x18;
          if (*(ulonglong *)
               (*(longlong *)&local_290->InstanceIdToIndexMap + (longlong)iVar24 * 0x18) != uVar3)
          goto code_r0x000147b89b04;
          piVar18 = (int *)(lVar2 + 8);
          if (lVar2 == 0) {
            piVar18 = (int *)0x0;
          }
          if (piVar18 != (int *)0x0) {
            iVar24 = *piVar18;
            iVar23 = *(int *)(lVar17 + 8);
            if (iVar23 != iVar24) {
              local_150 = local_290->Component;
              local_148 = uVar3;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar20,
                         (FWriteAccessScope *)&local_120);
              piVar18 = (int *)&(pTVar20->Elements).field_0x1c;
              *piVar18 = *piVar18 + 1;
              bVar13 = false;
              uVar22 = *(int *)&(pTVar20->Elements).field_0x10 - 1;
              if (-1 < (int)uVar22) {
                lVar17 = (longlong)(int)uVar22 << 4;
                do {
                  uVar30 = 0;
                  if ((int)uVar22 < *(int *)&(pTVar20->Elements).field_0x10) {
                    uVar30 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar30 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar8 = (((TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
                              *)&(pTVar20->Elements).field_0x8)->AllocatorInstance).Data;
                  if (((*(int *)(pFVar8 + lVar17 + 8) == 0) ||
                      (plVar7 = *(longlong **)(pFVar8 + lVar17), plVar7 == (longlong *)0x0)) ||
                     (cVar15 = (**(code **)(*plVar7 + 0x68))(plVar7,&local_150,iVar23,iVar24),
                     cVar15 == '\0')) {
                    bVar13 = true;
                  }
                  lVar17 = lVar17 + -0x10;
                  uVar22 = uVar22 - 1;
                } while (-1 < (int)uVar22);
              }
              piVar18 = (int *)&(pTVar20->Elements).field_0x1c;
              *piVar18 = *piVar18 + -1;
              if (bVar13) {
                TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar20,false);
              }
              if (local_120.bDestroyed == false) {
                pFVar19 = &local_120;
                this_01 = local_120.Accessor;
                goto LAB_147b89c0d;
              }
            }
            goto LAB_147b89c12;
          }
        }
      }
LAB_147b89b0c:
      local_140 = local_290->Component;
      uVar4 = *(undefined4 *)(lVar17 + 8);
      local_138 = uVar3;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnInstanceRemovedDelegate,(FWriteAccessScope *)&local_108);
      puVar6 = &(this->OnInstanceRemovedDelegate).field_0x1c;
      *(int *)puVar6 = *(int *)puVar6 + 1;
      bVar13 = false;
      uVar22 = *(int *)&(this->OnInstanceRemovedDelegate).field_0x10 - 1;
      if (-1 < (int)uVar22) {
        lVar17 = (longlong)(int)uVar22 << 4;
        bVar13 = false;
        do {
          uVar30 = 0;
          if ((int)uVar22 < *(int *)&(this->OnInstanceRemovedDelegate).field_0x10) {
            uVar30 = ~uVar22 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar2 = *(longlong *)&(this->OnInstanceRemovedDelegate).field_0x8;
          if (((*(int *)(lVar17 + 8 + lVar2) == 0) ||
              (plVar7 = *(longlong **)(lVar17 + lVar2), plVar7 == (longlong *)0x0)) ||
             (cVar15 = (**(code **)(*plVar7 + 0x68))(plVar7,&local_140,uVar4), cVar15 == '\0')) {
            bVar13 = true;
          }
          lVar17 = lVar17 + -0x10;
          uVar22 = uVar22 - 1;
          pTVar20 = local_298;
        } while (-1 < (int)uVar22);
      }
      puVar6 = &(this->OnInstanceRemovedDelegate).field_0x1c;
      *(int *)puVar6 = *(int *)puVar6 + -1;
      if (bVar13) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->OnInstanceRemovedDelegate,false);
      }
      if (local_108.bDestroyed == false) {
        pFVar19 = &local_108;
        this_01 = local_108.Accessor;
LAB_147b89c0d:
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(this_01,pFVar19);
      }
LAB_147b89c12:
      TStack_1b8.UnvisitedBitMask = TStack_1b8.UnvisitedBitMask & ~TStack_1b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b8);
      this = local_280;
      uVar30 = local_2a4;
    }
    bVar13 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                       ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                        &this->OnInstanceRemappedDelegate);
    pFVar21 = local_290;
    lpCriticalSection = local_248;
    if (bVar13) {
      iStack_270 = 0;
      local_258 = 0;
      local_268 = (TBitArray<FDefaultBitArrayAllocator> *)
                  &(local_290->InstanceIdToIndexMap).field_0x10;
      uVar22 = *(uint *)&(local_290->InstanceIdToIndexMap).field_0x28;
      pTVar20 = (TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
                 *)&local_290->InstanceIdToIndexMap;
      uStack_25c = 0;
      if (uVar22 != 0) {
        puVar26 = *(uint **)&(local_290->InstanceIdToIndexMap).field_0x20;
        if (puVar26 == (uint *)0x0) {
          puVar26 = (uint *)local_268;
        }
        uVar30 = *puVar26;
        local_258 = 0;
        while (uVar30 == 0) {
          lVar17 = (longlong)iStack_270;
          local_258 = local_258 + 0x20;
          iStack_270 = iStack_270 + 1;
          uStack_25c = uVar22;
          if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_270)
          goto LAB_147b89e11;
          uVar30 = puVar26[lVar17 + 1];
        }
        local_2a0 = (ulonglong)(-uVar30 & uVar30);
        uVar3 = local_2a0 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_208.Value._4_4_ = (int)lVar17;
        uStack_25c = local_258 + -1 + local_208.Value._4_4_;
        if ((int)uVar22 < (int)uStack_25c) {
          uStack_25c = uVar22;
        }
      }
LAB_147b89e11:
      uVar22 = *(uint *)&(local_290->InstanceIdToIndexMap).field_0x28;
      pFVar29 = (FArchive *)&(local_290->InstanceIdToIndexMap).field_0x10;
      uStack_26c = (uint)local_2a0;
      iStack_254 = iStack_224;
      iStack_250 = *(int *)&(local_290->InstanceIdToIndexMap).field_0x8 -
                   *(int *)&(local_290->InstanceIdToIndexMap).field_0x34;
      uStack_260 = 0xffffffff;
      uVar31 = uVar22 & 0xffffffe0;
      TStack_188.CurrentBitIndex = uStack_25c;
      TStack_188.UnvisitedBitMask = 0xffffffff;
      uVar30 = -1 << ((byte)uVar22 & 0x1f);
      TStack_188._padding_ = CONCAT44(uStack_26c,iStack_270);
      iVar24 = (int)uVar22 >> 5;
      local_2a0 = CONCAT44(local_2a0._4_4_,uVar30);
      TStack_188._28_4_ = iStack_224;
      TStack_188.BaseBitIndex = local_258;
      uStack_168 = CONCAT44(uStack_24c,iStack_250);
      local_2a4 = uVar22;
      local_298 = pTVar20;
      local_288 = pFVar29;
      local_278 = (TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
                   *)pTVar20;
      local_190 = pTVar20;
      TStack_188.Array = local_268;
      if ((int)uVar22 < 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L"");
        if (bVar13) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar30 = (uint)local_2a0;
      }
      pFVar10 = local_280;
      uVar5 = *(uint *)&(pFVar21->InstanceIdToIndexMap).field_0x28;
      if (uVar22 != uVar5) {
        puVar6 = *(undefined1 **)&(pFVar21->InstanceIdToIndexMap).field_0x20;
        puVar27 = (undefined1 *)pFVar29;
        if (puVar6 != (undefined1 *)0x0) {
          puVar27 = puVar6;
        }
        uVar30 = uVar30 & *(uint *)(puVar27 + (longlong)iVar24 * 4);
        while (uVar30 == 0) {
          lVar17 = (longlong)iVar24;
          uVar31 = uVar31 + 0x20;
          iVar24 = iVar24 + 1;
          uVar22 = uVar5;
          local_2a4 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
          goto LAB_147b89f44;
          uVar30 = *(uint *)(puVar27 + lVar17 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
        lVar17 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_1f8 = (int)lVar17;
        uVar22 = (uVar31 - 1) + local_1f8;
        local_2a4 = uVar22;
        if ((int)uVar5 < (int)uVar22) {
          uVar22 = uVar5;
          local_2a4 = uVar5;
        }
      }
LAB_147b89f44:
      this_02 = &local_280->OnInstanceRemappedDelegate;
      pFVar21 = local_290;
      while( true ) {
        pTVar12 = local_190;
        if (*(int *)&(((TArray<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,TSizedHeapAllocator<32,FMemory>_>
                        *)&(local_190->Elements).field_0x8)->AllocatorInstance).Data -
            *(int *)&(local_190->Elements).field_0x34 != (int)uStack_168) {
          local_2a6[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2a6);
        }
        if (((TStack_188.CurrentBitIndex == uVar22) && ((FArchive *)TStack_188.Array == pFVar29)) &&
           (lpCriticalSection = local_248, pTVar12 == pTVar20)) break;
        lVar17 = *(longlong *)&pTVar12->Elements;
        uVar3 = *(ulonglong *)(lVar17 + (longlong)TStack_188.CurrentBitIndex * 0x18);
        if (local_98._8_4_ != local_64) {
          FVar28 = (ForElementType<FSetElementId>)&local_60;
          if (local_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar28 = local_60.SecondaryData;
          }
          for (iVar24 = *(int *)((longlong)FVar28 +
                                ((uVar3 >> 0x20) * 0x17 + uVar3 & (ulonglong)(local_50[0] - 1)) * 4)
              ; iVar24 != -1; iVar24 = *(int *)(local_98._0_8_ + (longlong)iVar24 * 0x18 + 0x10)) {
            if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar24 * 0x18) == uVar3)
            goto LAB_147b8a129;
          }
        }
        local_130 = pFVar21->Component;
        uVar4 = *(undefined4 *)(lVar17 + (longlong)TStack_188.CurrentBitIndex * 0x18 + 8);
        local_128 = uVar3;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_02,
                   (FWriteAccessScope *)local_f0);
        puVar6 = &(pFVar10->OnInstanceRemappedDelegate).field_0x1c;
        *(int *)puVar6 = *(int *)puVar6 + 1;
        bVar13 = false;
        uVar30 = *(int *)&(pFVar10->OnInstanceRemappedDelegate).field_0x10 - 1;
        if (-1 < (int)uVar30) {
          lVar17 = (longlong)(int)uVar30 << 4;
          bVar13 = false;
          do {
            uVar22 = 0;
            if ((int)uVar30 < *(int *)&(pFVar10->OnInstanceRemappedDelegate).field_0x10) {
              uVar22 = ~uVar30 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar2 = *(longlong *)&(pFVar10->OnInstanceRemappedDelegate).field_0x8;
            if (((*(int *)(lVar17 + 8 + lVar2) == 0) ||
                (plVar7 = *(longlong **)(lVar17 + lVar2), plVar7 == (longlong *)0x0)) ||
               (cVar15 = (**(code **)(*plVar7 + 0x68))(plVar7,&local_130,0xffffffff,uVar4),
               cVar15 == '\0')) {
              bVar13 = true;
            }
            lVar17 = lVar17 + -0x10;
            uVar30 = uVar30 - 1;
            pFVar21 = local_290;
            uVar22 = local_2a4;
          } while (-1 < (int)uVar30);
        }
        puVar6 = &(pFVar10->OnInstanceRemappedDelegate).field_0x1c;
        *(int *)puVar6 = *(int *)puVar6 + -1;
        if (bVar13) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_02,false);
        }
        pTVar20 = local_298;
        pFVar29 = local_288;
        if (local_f0[0].bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0[0].Accessor,local_f0);
          pTVar20 = local_298;
          pFVar29 = local_288;
        }
LAB_147b8a129:
        TStack_188.UnvisitedBitMask = TStack_188.UnvisitedBitMask & ~TStack_188._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_188);
      }
    }
  }
  local_50[0] = 0;
  if (local_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_60.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  LeaveCriticalSection(lpCriticalSection);
  return;
code_r0x000147b89b04:
  iVar24 = *(int *)(lVar2 + 0x10);
  if (iVar24 == -1) goto LAB_147b89b0c;
  goto LAB_147b89af0;
}

// UnregisterCallbacks @ 147b90040

void __thiscall FSMInstanceElementIdMap::UnregisterCallbacks(FSMInstanceElementIdMap *this)

{
  FDelegateHandle FVar1;
  
  FVar1.ID = (this->OnInstanceIndexUpdatedHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FInstancedStaticMeshDelegates::OnInstanceIndexUpdated,FVar1);
    (this->OnInstanceIndexUpdatedHandle).ID = 0;
  }
  return;
}

