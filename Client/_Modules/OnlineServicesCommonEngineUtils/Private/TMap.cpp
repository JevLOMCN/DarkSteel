// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommonEngineUtils
// Functions: 1

// FindAndRemoveChecked @ 14f0068c0

TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> * __thiscall
TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>,0>_>
::FindAndRemoveChecked
          (TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>,0>_>
           *this,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>
                 *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *pTVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  
  uVar1 = param_1->Value;
  uVar9 = uVar1 & 0xffffff;
  uVar8 = (uVar1 >> 0x18) - uVar9 ^ uVar9 >> 0xd;
  uVar5 = (-0x61c88647 - uVar8) - uVar9 ^ uVar8 << 8;
  uVar9 = (uVar9 - uVar5) - uVar8 ^ uVar5 >> 0xd;
  uVar8 = (uVar8 - uVar9) - uVar5 ^ uVar9 >> 0xc;
  uVar5 = (uVar5 - uVar8) - uVar9 ^ uVar8 << 0x10;
  uVar9 = (uVar9 - uVar5) - uVar8 ^ uVar5 >> 5;
  uVar8 = (uVar8 - uVar9) - uVar5 ^ uVar9 >> 3;
  uVar5 = (uVar5 - uVar8) - uVar9 ^ uVar8 << 10;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar7 = *(undefined1 **)&this->field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x38;
    }
    uVar5 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&this->field_0x48 - 1U &
                               ((uVar9 - uVar5) - uVar8 ^ uVar5 >> 0xf)) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        if (*(uint *)(*(longlong *)this + (longlong)(int)uVar5 * 0x28) == uVar1) {
          if (uVar5 == 0xffffffff) goto LAB_14f0069cf;
          goto LAB_14f0069fb;
        }
        uVar5 = *(uint *)(*(longlong *)this + 0x20 + (longlong)(int)uVar5 * 0x28);
      } while (uVar5 != 0xffffffff);
    }
  }
  uVar5 = 0xffffffff;
LAB_14f0069cf:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("PairId.IsValidId()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x556,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *)(*pcVar2)();
    return pTVar4;
  }
LAB_14f0069fb:
  lVar6 = *(longlong *)this + (longlong)(int)uVar5 * 0x28;
  (__return_storage_ptr__->State).Object =
       *(TFutureState<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> **)(lVar6 + 8);
  (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(lVar6 + 0x10);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  *(undefined8 *)(lVar6 + 8) = 0;
  __return_storage_ptr__->bFutureRetrieved = *(bool *)(lVar6 + 0x18);
  if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)&this->field_0x28)) {
    puVar7 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x10;
    }
    if ((*(uint *)(puVar7 + (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar5 & 0x1f) & 1) != 0) goto LAB_14f006a8e;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *)(*pcVar2)();
    return pTVar4;
  }
LAB_14f006a8e:
  puVar7 = *(undefined1 **)&this->field_0x40;
  lVar6 = *(longlong *)this + (longlong)(int)uVar5 * 0x28;
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = &this->field_0x38;
  }
  puVar10 = (uint *)(puVar7 + (longlong)*(int *)(lVar6 + 0x24) * 4);
  while( true ) {
    uVar1 = *puVar10;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar5) {
      *puVar10 = *(uint *)(lVar6 + 0x20);
      TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this,uVar5,1);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar5,1);
      return __return_storage_ptr__;
    }
    puVar10 = (uint *)(*(longlong *)this + (longlong)(int)uVar1 * 0x28 + 0x20);
  }
  pcVar2 = (code *)swi(3);
  pTVar4 = (TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_> *)(*pcVar2)();
  return pTVar4;
}

