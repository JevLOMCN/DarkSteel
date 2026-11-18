// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 3

// FindAndRemoveChecked @ 14a9a39a0

int __thiscall
TMap<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
::FindAndRemoveChecked
          (TMap<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
           *this,TSharedPtr<UE::Mutable::Private::FResource_const_,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TSharedPtr<UE::Mutable::Private::FResource_const_,1> local_18;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar6 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  local_18.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  iVar5 = TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
          ::FindIndexByHash<TSharedPtr<UE::Mutable::Private::FResource_const_,1>_>
                    ((TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
                      *)this,uVar6 >> 0x10 ^ uVar6,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (iVar5 == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PairId.IsValidId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x556,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar1 = *(int *)((longlong)iVar5 * 0x20 + 0x10 + *(longlong *)this);
  TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
  ::RemoveByIndex((TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
                   *)this,iVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return iVar1;
}

// RemoveAndCopyValue @ 14aae73d0

bool __thiscall
TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>_>
::RemoveAndCopyValue
          (TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>_>
           *this,uint param_1,TSharedPtr<UE::Mutable::Private::FImage_const_,1> *param_2)

{
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  longlong lVar10;
  
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar7 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x38;
    }
    uVar9 = *(uint *)(puVar7 + (ulonglong)(*(int *)&this->field_0x48 - 1U & param_1) * 4);
    if (uVar9 != 0xffffffff) {
      do {
        lVar10 = (longlong)(int)uVar9 * 0x20;
        lVar2 = lVar10 + *(longlong *)this;
        if (*(uint *)(lVar10 + *(longlong *)this) == param_1) {
          pTVar1 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(lVar2 + 8);
          if (param_2 != pTVar1) {
            param_2->Object = pTVar1->Object;
            pTVar1->Object = (FImage *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&param_2->SharedReferenceCount,(FSharedReferencer<1> *)(lVar2 + 0x10));
          }
          if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&this->field_0x28)) {
            puVar7 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar7 = &this->field_0x10;
            }
            if ((*(uint *)(puVar7 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar9 & 0x1f) & 1) != 0) goto LAB_14aae74d1;
          }
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
LAB_14aae74d1:
          lVar2 = *(longlong *)this;
          puVar7 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar7 = &this->field_0x38;
          }
          puVar8 = (uint *)(puVar7 + (longlong)*(int *)(lVar2 + lVar10 + 0x1c) * 4);
          do {
            uVar3 = *puVar8;
            if (uVar3 == 0xffffffff) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
            }
            else if (uVar3 == uVar9) {
              *puVar8 = *(uint *)(lVar2 + lVar10 + 0x18);
              TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)this,uVar9,1);
              TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar9,1);
              return true;
            }
            puVar8 = (uint *)(*(longlong *)this + 0x18 + (longlong)(int)uVar3 * 0x20);
          } while( true );
        }
        uVar9 = *(uint *)(lVar2 + 0x18);
      } while (uVar9 != 0xffffffff);
    }
  }
  return false;
}

// RemoveAndCopyValue @ 14aae7570

bool __thiscall
TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>_>
::RemoveAndCopyValue
          (TMap<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>_>
           *this,uint param_1,TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *param_2)

{
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *pTVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  longlong lVar10;
  
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar7 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x38;
    }
    uVar9 = *(uint *)(puVar7 + (ulonglong)(*(int *)&this->field_0x48 - 1U & param_1) * 4);
    if (uVar9 != 0xffffffff) {
      do {
        lVar10 = (longlong)(int)uVar9 * 0x20;
        lVar2 = lVar10 + *(longlong *)this;
        if (*(uint *)(lVar10 + *(longlong *)this) == param_1) {
          pTVar1 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(lVar2 + 8);
          if (param_2 != pTVar1) {
            param_2->Object = pTVar1->Object;
            pTVar1->Object = (FMesh *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&param_2->SharedReferenceCount,(FSharedReferencer<1> *)(lVar2 + 0x10));
          }
          if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&this->field_0x28)) {
            puVar7 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar7 = &this->field_0x10;
            }
            if ((*(uint *)(puVar7 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar9 & 0x1f) & 1) != 0) goto LAB_14aae7671;
          }
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
LAB_14aae7671:
          lVar2 = *(longlong *)this;
          puVar7 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar7 = &this->field_0x38;
          }
          puVar8 = (uint *)(puVar7 + (longlong)*(int *)(lVar2 + lVar10 + 0x1c) * 4);
          do {
            uVar3 = *puVar8;
            if (uVar3 == 0xffffffff) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
            }
            else if (uVar3 == uVar9) {
              *puVar8 = *(uint *)(lVar2 + lVar10 + 0x18);
              TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)this,uVar9,1);
              TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar9,1);
              return true;
            }
            puVar8 = (uint *)(*(longlong *)this + 0x18 + (longlong)(int)uVar3 * 0x20);
          } while( true );
        }
        uVar9 = *(uint *)(lVar2 + 0x18);
      } while (uVar9 != 0xffffffff);
    }
  }
  return false;
}

