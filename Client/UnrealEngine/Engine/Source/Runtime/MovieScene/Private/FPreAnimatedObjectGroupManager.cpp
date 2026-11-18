// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// GatherStaleStorageGroups @ 1461af3d0

void __thiscall
UE::MovieScene::FPreAnimatedObjectGroupManager::GatherStaleStorageGroups
          (FPreAnimatedObjectGroupManager *this,
          TArray<UE::MovieScene::FPreAnimatedStorageGroupHandle,TSizedDefaultAllocator<32>_>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UObject *pUVar9;
  FUObjectItem *pFVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  FWeakObjectPtr local_res18 [2];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  iVar12 = 0;
  iVar8 = *(int *)&this->field_0x40;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x28;
  uVar7 = 1;
  iVar13 = 0;
  TStack_50.CurrentBitIndex = 0;
  if (iVar8 != 0) {
    puVar14 = *(uint **)&this->field_0x38;
    if (*(uint **)&this->field_0x38 == (uint *)0x0) {
      puVar14 = (uint *)TStack_50.Array;
    }
    uVar3 = *puVar14;
    while (uVar3 == 0) {
      lVar11 = (longlong)iVar12;
      iVar13 = iVar13 + 0x20;
      iVar12 = iVar12 + 1;
      TStack_50.CurrentBitIndex = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1461af46e;
      uVar3 = puVar14[lVar11 + 1];
    }
    uVar7 = -uVar3 & uVar3;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    TStack_50.CurrentBitIndex = (int)lVar11 + -1 + iVar13;
    if (iVar8 < TStack_50.CurrentBitIndex) {
      TStack_50.CurrentBitIndex = iVar8;
    }
  }
LAB_1461af46e:
  TStack_50._padding_ = CONCAT44(uVar7,iVar12);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = TStack_50.CurrentBitIndex;
  TStack_50.BaseBitIndex = iVar13;
  if (TStack_50.CurrentBitIndex < iVar8) {
    do {
      iVar8 = TStack_50.CurrentBitIndex;
      lVar11 = *(longlong *)&this->field_0x18;
      local_res18[0].ObjectIndex = *(int *)(lVar11 + (longlong)TStack_50.CurrentBitIndex * 0x14);
      local_res18[0].ObjectSerialNumber =
           *(int *)(lVar11 + (longlong)TStack_50.CurrentBitIndex * 0x14 + 4);
      pUVar9 = FWeakObjectPtr::Get(local_res18);
      if (((pUVar9 == (UObject *)0x0) || ((*(uint *)&pUVar9->field_0x8 >> 0x1e & 1) != 0)) ||
         (pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar9->field_0xc),
         ((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0)) {
        pFVar1 = (FScriptContainerElement *)
                 (*(longlong *)&this->field_0x18 + ((longlong)iVar8 * 5 + 2) * 4);
        pFVar4 = (param_1->AllocatorInstance).Data;
        if (((pFVar4 <= pFVar1) && (pFVar1 < pFVar4 + (longlong)param_1->ArrayMax * 4)) &&
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
        iVar8 = param_1->ArrayNum;
        if (iVar8 == param_1->ArrayMax) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar8 + 1;
        *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 4) =
             *(undefined4 *)pFVar1;
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return;
}

// GetGroupsByClass @ 1461b0e10

void __thiscall
UE::MovieScene::FPreAnimatedObjectGroupManager::GetGroupsByClass
          (FPreAnimatedObjectGroupManager *this,UClass *param_1,
          TArray<UE::MovieScene::FPreAnimatedStorageGroupHandle,TSizedDefaultAllocator<32>_>
          *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UObject *pUVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  FWeakObjectPtr local_res20;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  iVar9 = *(int *)&this->field_0x40;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x28;
  iVar12 = 0;
  uVar8 = 1;
  iVar13 = 0;
  TStack_50.CurrentBitIndex = 0;
  if (iVar9 != 0) {
    puVar14 = *(uint **)&this->field_0x38;
    if (*(uint **)&this->field_0x38 == (uint *)0x0) {
      puVar14 = (uint *)TStack_50.Array;
    }
    uVar2 = *puVar14;
    while (uVar2 == 0) {
      iVar12 = iVar12 + 1;
      iVar13 = iVar13 + 0x20;
      TStack_50.CurrentBitIndex = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1461b0eac;
      uVar2 = puVar14[iVar12];
    }
    uVar8 = ~(uVar2 - 1) & uVar2;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    TStack_50.CurrentBitIndex = (int)lVar5 + -1 + iVar13;
    if (iVar9 < TStack_50.CurrentBitIndex) {
      TStack_50.CurrentBitIndex = iVar9;
    }
  }
LAB_1461b0eac:
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._padding_ = CONCAT44(uVar8,iVar12);
  TStack_50._28_4_ = TStack_50.CurrentBitIndex;
  TStack_50.BaseBitIndex = iVar13;
  if (TStack_50.CurrentBitIndex < *(int *)&this->field_0x40) {
    do {
      lVar5 = (longlong)TStack_50.CurrentBitIndex * 0x14;
      lVar3 = *(longlong *)&this->field_0x18;
      local_res20.ObjectIndex = *(int *)(lVar3 + lVar5);
      local_res20.ObjectSerialNumber = *(int *)(lVar3 + 4 + lVar5);
      pUVar10 = FWeakObjectPtr::Get(&local_res20,true);
      if (pUVar10 != (UObject *)0x0) {
        iVar9 = (int)param_1->_padding_;
        if ((iVar9 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
            &param_1->_padding_)) {
          pFVar4 = (param_2->AllocatorInstance).Data;
          pFVar11 = (FScriptContainerElement *)(lVar5 + *(longlong *)&this->field_0x18 + 8);
          if ((pFVar4 <= pFVar11) && (pFVar11 < pFVar4 + (longlong)param_2->ArrayMax * 4)) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar9 = param_2->ArrayNum;
          if (iVar9 == param_2->ArrayMax) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar9 + 1;
          *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 4) =
               *(undefined4 *)pFVar11;
        }
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return;
}

// OnObjectsReplaced @ 1461bfd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FPreAnimatedObjectGroupManager::OnObjectsReplaced
          (FPreAnimatedObjectGroupManager *this,
          TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
          *param_1)

{
  undefined1 *this_00;
  uint *puVar1;
  longlong lVar2;
  IPreAnimatedStorage *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  TTuple<UObject_*,UObject_*> *pTVar10;
  TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *pTVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [4];
  int local_194;
  FWeakObjectPtr local_190;
  FPreAnimatedStorageID local_188 [2];
  FWeakObjectPtr local_180;
  FWeakObjectPtr local_178;
  longlong local_170;
  longlong *local_168;
  undefined1 auStack_160 [16];
  uint uStack_150;
  uint uStack_14c;
  longlong local_148;
  TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
  *pTStack_140;
  TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
  *local_138;
  undefined2 local_130;
  undefined1 local_128 [8];
  TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageGroupHandle_const_&>
  local_120;
  longlong local_110;
  FPreAnimatedObjectGroupManager *local_108;
  TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
  *local_100;
  FWeakObjectPtr *local_f8;
  int *local_f0;
  int *local_e8;
  FWeakObjectPtr *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined1 local_c8 [32];
  longlong local_a8;
  TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
  *pTStack_a0;
  TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  this_00 = &this->field_0x18;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  if (&local_98 !=
      (TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
       *)this_00) {
    local_98.Elements._0_8_ = *(undefined8 *)this_00;
    *(undefined8 *)this_00 = 0;
    local_98.Elements._8_8_ = *(undefined8 *)&this->field_0x20;
    *(undefined8 *)&this->field_0x20 = 0;
    if (&local_98.Elements.field_0x10 != &this->field_0x28) {
      local_98.Elements._32_8_ = *(undefined8 *)&this->field_0x38;
      if (local_98.Elements._32_8_ == 0) {
        local_98.Elements._16_8_ = *(undefined8 *)&this->field_0x28;
        local_98.Elements._24_8_ = *(undefined8 *)&this->field_0x30;
      }
      *(undefined8 *)&this->field_0x38 = 0;
      local_98.Elements._40_4_ = *(undefined4 *)&this->field_0x40;
      local_98.Elements._44_4_ = *(undefined4 *)&this->field_0x44;
      *(undefined8 *)&this->field_0x40 = 0;
    }
    local_98.Elements._48_4_ = *(undefined4 *)&this->field_0x48;
    local_98.Elements._52_4_ = *(undefined4 *)&this->field_0x4c;
    *(undefined4 *)&this->field_0x4c = 0;
    *(undefined4 *)&this->field_0x48 = 0xffffffff;
  }
  local_98.Hash.SecondaryData = *(ForElementType<FSetElementId> *)&this->field_0x58;
  if (local_98.Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
    local_98.Hash.InlineData[0] = this->field_0x50;
    local_98.Hash.InlineData[1] = this->field_0x51;
    local_98.Hash.InlineData[2] = this->field_0x52;
    local_98.Hash.InlineData[3] = this->field_0x53;
  }
  *(undefined8 *)&this->field_0x58 = 0;
  local_98.HashSize = *(int *)&this->field_0x60;
  *(undefined4 *)&this->field_0x60 = 0;
  local_108 = this;
  local_100 = (TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
               *)param_1;
  TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
           *)this_00);
  TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
             *)this_00,local_98.Elements._8_4_ - local_98.Elements._52_4_);
  TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_c8,&local_98);
  local_138 = &local_98;
  local_130 = 0;
  stack0xfffffffffffffea8 = local_c8._16_16_;
  local_168 = (longlong *)local_c8._0_8_;
  auStack_160._0_8_ = local_c8._8_8_;
  local_148 = local_a8;
  pTStack_140 = pTStack_a0;
  uVar12 = local_c8._24_8_ >> 0x20;
  uVar15 = local_c8._28_4_;
  if ((int)uVar15 < *(int *)(local_c8._16_8_ + 0x18)) {
    do {
      plVar6 = local_168;
      local_194 = *(int *)(*local_168 + 8 + (longlong)(int)uVar12 * 0x14);
      lVar2 = (longlong)(int)uVar15 * 0x14;
      local_178.ObjectIndex = *(int *)(*local_168 + lVar2);
      local_178.ObjectSerialNumber = *(int *)(*local_168 + 4 + lVar2);
      pUVar9 = FWeakObjectPtr::Get(&local_178,true);
      pTVar10 = TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                        *)param_1,pUVar9);
      if ((pTVar10 == (TTuple<UObject_*,UObject_*> *)0x0) ||
         (pUVar9 = *(UObject **)&pTVar10->field_0x8, pUVar9 == (UObject *)0x0)) {
        local_d8 = *plVar6 + lVar2;
        local_d0 = local_d8 + 8;
        TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageGroupHandle_const_&>_>
                  ((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
                    *)this_00,&local_120,(bool *)&local_d8);
      }
      else {
        local_190.ObjectIndex = 0;
        local_190.ObjectSerialNumber = 0;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar9);
        }
        local_180.ObjectIndex = 0;
        local_180.ObjectSerialNumber = 0;
        local_120.Value = (FPreAnimatedStorageGroupHandle *)pUVar9;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar9);
        }
        FWeakObjectPtr::operator=(&local_180,(FObjectPtr)&local_120.Value);
        local_190 = local_180;
        local_f8 = &local_190;
        local_f0 = &local_194;
        TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageGroupHandle_const_&>_>
                  ((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
                    *)this_00,
                   (TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageGroupHandle_const_&>
                    *)local_128,(bool *)&local_f8);
        local_e8 = &local_194;
        local_e0 = &local_190;
        TSet<TTuple<UE::MovieScene::FPreAnimatedStorageGroupHandle,FObjectKey>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStorageGroupHandle,FObjectKey,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<UE::MovieScene::FPreAnimatedStorageGroupHandle_const_&,FObjectKey_const_&>_>
                  ((TSet<TTuple<UE::MovieScene::FPreAnimatedStorageGroupHandle,FObjectKey>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FPreAnimatedStorageGroupHandle,FObjectKey,0>,FDefaultSetAllocator>
                    *)&this->field_0x68,
                   (TPairInitializer<UE::MovieScene::FPreAnimatedStorageGroupHandle_const_&,FObjectKey_const_&>
                    *)(local_128 + 4),(bool *)&local_e8);
        local_170 = *(longlong *)&this->field_0xb8;
        local_110 = *plVar6 + lVar2;
        lVar13 = (longlong)local_194 * 0x70;
        lVar2 = *(longlong *)(local_170 + 0x60);
        iVar8 = *(int *)(lVar13 + 0x68 + lVar2);
        puVar14 = (uint *)(lVar13 + 0x10 + lVar2);
        if (*(uint **)(puVar14 + 0x14) != (uint *)0x0) {
          puVar14 = *(uint **)(puVar14 + 0x14);
        }
        puVar1 = puVar14 + (longlong)iVar8 * 5;
        while( true ) {
          if (*(int *)(lVar13 + lVar2 + 0x68) != iVar8) {
            local_198[0] = 0;
            `TCheckedPointerIterator<UE::MovieScene::FPreAnimatedStateExtension::FAggregatePreAnimatedStateMetaData,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_198);
          }
          this = local_108;
          if (puVar14 == puVar1) break;
          local_188[0].TypeID = *puVar14;
          pTVar11 = TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
                    ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageID,TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageID_const_&>_>
                            *)(local_170 + 0xe8),local_188);
          if ((pTVar11 == (TSharedPtr<UE::MovieScene::IPreAnimatedStorage,1> *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Value != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                                 ,0x148,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pIVar3 = pTVar11->Object;
          pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pIVar3 == (IPreAnimatedStorage *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (**(code **)(*(longlong *)pIVar3 + 0x18))(pIVar3,puVar14[1],local_110,&local_190);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          puVar14 = puVar14 + 5;
        }
      }
      uStack_150 = uStack_150 & ~auStack_160._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_160);
      uVar12 = (ulonglong)uStack_14c;
      param_1 = (TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
                 *)local_100;
      uVar15 = uStack_14c;
    } while ((int)uStack_14c < *(int *)(auStack_160._8_8_ + 0x18));
    if (((char)local_130 != '\0') && (local_130._1_1_ != '\0')) {
      uVar15 = *(int *)&(local_138->Elements).field_0x8 - *(int *)&(local_138->Elements).field_0x34;
      if (uVar15 < 4) {
        iVar8 = 1;
      }
      else {
        uVar12 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar8 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar15) && (local_138->HashSize < iVar8)) || (iVar8 < local_138->HashSize)) {
        local_138->HashSize = iVar8;
        TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle,0>,FDefaultSetAllocator>
        ::Rehash(local_138);
      }
    }
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageGroupHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

