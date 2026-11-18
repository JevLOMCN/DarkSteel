// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 5

// FindAndRemoveChecked @ 14d3de3e0

FList * __thiscall
TMap<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
::FindAndRemoveChecked
          (TMap<unsigned___int64,TraceServices::FHeapAllocs::FList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FHeapAllocs::FList,0>_>
           *this,FList *__return_storage_ptr__,ulong64 param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  code *pcVar3;
  FNode *pFVar4;
  bool bVar5;
  FList *pFVar6;
  undefined1 *puVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar7 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x38;
    }
    uVar8 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&this->field_0x48 - 1U &
                               (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (uVar8 != 0xffffffff) {
      do {
        if (*(ulong64 *)((longlong)(int)uVar8 * 0x20 + *(longlong *)this) == param_1) {
          if (uVar8 == 0xffffffff) goto LAB_14d3de45f;
          goto LAB_14d3de485;
        }
        uVar8 = *(uint *)((longlong)(int)uVar8 * 0x20 + 0x18 + *(longlong *)this);
      } while (uVar8 != 0xffffffff);
    }
  }
  uVar8 = 0xffffffff;
LAB_14d3de45f:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("PairId.IsValidId()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x556,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FList *)(*pcVar3)();
    return pFVar6;
  }
LAB_14d3de485:
  puVar1 = (undefined8 *)((longlong)(int)uVar8 * 0x20 + 8 + *(longlong *)this);
  pFVar4 = (FNode *)puVar1[1];
  __return_storage_ptr__->First = (FNode *)*puVar1;
  __return_storage_ptr__->Last = pFVar4;
  if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)&this->field_0x28)) {
    puVar7 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x10;
    }
    if ((*(uint *)(puVar7 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar8 & 0x1f) & 1) != 0) goto LAB_14d3de4f2;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FList *)(*pcVar3)();
    return pFVar6;
  }
LAB_14d3de4f2:
  lVar9 = *(longlong *)this + (longlong)(int)uVar8 * 0x20;
  puVar7 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar7 = &this->field_0x38;
  }
  puVar10 = (uint *)(puVar7 + (longlong)*(int *)(lVar9 + 0x1c) * 4);
  while( true ) {
    uVar2 = *puVar10;
    if ((uVar2 == 0xffffffff) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar5)) break;
    if (uVar2 == uVar8) {
      *puVar10 = *(uint *)(lVar9 + 0x18);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar8,1);
      return __return_storage_ptr__;
    }
    puVar10 = (uint *)(*(longlong *)this + 0x18 + (longlong)(int)uVar2 * 0x20);
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FList *)(*pcVar3)();
  return pFVar6;
}

// RemoveAndCopyValue @ 14d400d10

bool __thiscall
TMap<unsigned___int64,TraceServices::FAllocationItem_*,FDefaultSetAllocator,TraceServices::FAllocMap::TAddressKeyFuncs<TraceServices::FAllocationItem_*>_>
::RemoveAndCopyValue
          (TMap<unsigned___int64,TraceServices::FAllocationItem_*,FDefaultSetAllocator,TraceServices::FAllocMap::TAddressKeyFuncs<TraceServices::FAllocationItem_*>_>
           *this,ulong64 param_1,FAllocationItem **param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar7 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x38;
    }
    uVar9 = *(uint *)(puVar7 + ((ulonglong)(*(int *)&this->field_0x48 - 1) &
                               param_1 >> 6 & 0xffffffff) * 4);
    if (uVar9 != 0xffffffff) {
      lVar3 = *(longlong *)this;
      do {
        lVar1 = (longlong)(int)uVar9 * 0x18;
        if (*(ulong64 *)(lVar1 + lVar3) == param_1) {
          *param_2 = *(FAllocationItem **)(lVar1 + 8 + lVar3);
          if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&this->field_0x28)) {
            puVar7 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar7 = &this->field_0x10;
            }
            if ((*(uint *)(puVar7 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar9 & 0x1f) & 1) != 0) goto LAB_14d400dfc;
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
LAB_14d400dfc:
          lVar3 = *(longlong *)this;
          puVar7 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar7 = &this->field_0x38;
          }
          puVar8 = (uint *)(puVar7 + (longlong)*(int *)(lVar3 + lVar1 + 0x14) * 4);
          do {
            uVar2 = *puVar8;
            if (uVar2 == 0xffffffff) {
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
            else if (uVar2 == uVar9) {
              *puVar8 = *(uint *)(lVar3 + lVar1 + 0x10);
              TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar9,1);
              return true;
            }
            puVar8 = (uint *)(*(longlong *)this + (longlong)(int)uVar2 * 0x18 + 0x10);
          } while( true );
        }
        uVar9 = *(uint *)(lVar1 + 0x10 + lVar3);
      } while (uVar9 != 0xffffffff);
    }
  }
  return false;
}

// RemoveAndCopyValue @ 14d400ea0

bool __thiscall
TMap<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,FDefaultSetAllocator,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>_>
::RemoveAndCopyValue
          (TMap<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*,FDefaultSetAllocator,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>_>
           *this,ulong64 param_1,FAsyncPackageState **param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  
  uVar9 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar7 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x38;
    }
    uVar9 = *(uint *)(puVar7 + (ulonglong)(*(int *)&this->field_0x48 - 1U & (uVar9 >> 0x10 ^ uVar9))
                               * 4);
    if (uVar9 != 0xffffffff) {
      lVar3 = *(longlong *)this;
      do {
        lVar1 = (longlong)(int)uVar9 * 0x18;
        if (*(ulong64 *)(lVar1 + lVar3) == param_1) {
          *param_2 = *(FAsyncPackageState **)(lVar1 + 8 + lVar3);
          if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&this->field_0x28)) {
            puVar7 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar7 = &this->field_0x10;
            }
            if ((*(uint *)(puVar7 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar9 & 0x1f) & 1) != 0) goto LAB_14d400fbc;
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
LAB_14d400fbc:
          lVar3 = *(longlong *)this;
          puVar7 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar7 = &this->field_0x38;
          }
          puVar8 = (uint *)(puVar7 + (longlong)*(int *)(lVar3 + lVar1 + 0x14) * 4);
          do {
            uVar2 = *puVar8;
            if (uVar2 == 0xffffffff) {
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
            else if (uVar2 == uVar9) {
              *puVar8 = *(uint *)(lVar3 + lVar1 + 0x10);
              TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar9,1);
              return true;
            }
            puVar8 = (uint *)(*(longlong *)this + (longlong)(int)uVar2 * 0x18 + 0x10);
          } while( true );
        }
        uVar9 = *(uint *)(lVar1 + 0x10 + lVar3);
      } while (uVar9 != 0xffffffff);
    }
  }
  return false;
}

// RemoveAndCopyValue @ 14d401060

bool __thiscall
TMap<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*,FDefaultSetAllocator,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>_>
::RemoveAndCopyValue
          (TMap<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*,FDefaultSetAllocator,TraceServices::FAsyncLoadingTraceAnalyzer::FPointerMapKeyFuncs<TraceServices::FAsyncLoadingTraceAnalyzer::FLinkerLoadState_*>_>
           *this,ulong64 param_1,FLinkerLoadState **param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  
  uVar9 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar7 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x38;
    }
    uVar9 = *(uint *)(puVar7 + (ulonglong)(*(int *)&this->field_0x48 - 1U & (uVar9 >> 0x10 ^ uVar9))
                               * 4);
    if (uVar9 != 0xffffffff) {
      lVar3 = *(longlong *)this;
      do {
        lVar1 = (longlong)(int)uVar9 * 0x18;
        if (*(ulong64 *)(lVar1 + lVar3) == param_1) {
          *param_2 = *(FLinkerLoadState **)(lVar1 + 8 + lVar3);
          if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&this->field_0x28)) {
            puVar7 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar7 = &this->field_0x10;
            }
            if ((*(uint *)(puVar7 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar9 & 0x1f) & 1) != 0) goto LAB_14d40117c;
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
LAB_14d40117c:
          lVar3 = *(longlong *)this;
          puVar7 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar7 = &this->field_0x38;
          }
          puVar8 = (uint *)(puVar7 + (longlong)*(int *)(lVar3 + lVar1 + 0x14) * 4);
          do {
            uVar2 = *puVar8;
            if (uVar2 == 0xffffffff) {
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
            else if (uVar2 == uVar9) {
              *puVar8 = *(uint *)(lVar3 + lVar1 + 0x10);
              TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar9,1);
              return true;
            }
            puVar8 = (uint *)(*(longlong *)this + (longlong)(int)uVar2 * 0x18 + 0x10);
          } while( true );
        }
        uVar9 = *(uint *)(lVar1 + 0x10 + lVar3);
      } while (uVar9 != 0xffffffff);
    }
  }
  return false;
}

// RemoveAndCopyValue @ 14d401220

bool __thiscall
TMap<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*,0>_>
::RemoveAndCopyValue
          (TMap<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FAsyncLoadingTraceAnalyzer::FRequestState_*,0>_>
           *this,ulong64 param_1,FRequestState **param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar7 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x38;
    }
    uVar9 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&this->field_0x48 - 1U &
                               (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (uVar9 != 0xffffffff) {
      lVar3 = *(longlong *)this;
      do {
        lVar1 = (longlong)(int)uVar9 * 0x18;
        if (*(ulong64 *)(lVar1 + lVar3) == param_1) {
          *param_2 = *(FRequestState **)(lVar1 + 8 + lVar3);
          if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&this->field_0x28)) {
            puVar7 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar7 = &this->field_0x10;
            }
            if ((*(uint *)(puVar7 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar9 & 0x1f) & 1) != 0) goto LAB_14d40131c;
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
LAB_14d40131c:
          lVar3 = *(longlong *)this;
          puVar7 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar7 = &this->field_0x38;
          }
          puVar8 = (uint *)(puVar7 + (longlong)*(int *)(lVar3 + lVar1 + 0x14) * 4);
          do {
            uVar2 = *puVar8;
            if (uVar2 == 0xffffffff) {
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
            else if (uVar2 == uVar9) {
              *puVar8 = *(uint *)(lVar3 + lVar1 + 0x10);
              TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar9,1);
              return true;
            }
            puVar8 = (uint *)(*(longlong *)this + (longlong)(int)uVar2 * 0x18 + 0x10);
          } while( true );
        }
        uVar9 = *(uint *)(lVar1 + 0x10 + lVar3);
      } while (uVar9 != 0xffffffff);
    }
  }
  return false;
}

