// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 1

// RemoveAndCopyValue @ 145eea1f0

bool __thiscall
TMap<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
::RemoveAndCopyValue
          (TMap<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
           *this,TObjectPtr<UFoliageType> *param_1,TUniqueObj<FFoliageInfo> *param_2)

{
  longlong lVar1;
  uint uVar2;
  TObjectPtr<UFoliageType>_u_0 TVar3;
  longlong lVar4;
  FFoliageInfo *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint *puVar11;
  TObjectPtr<UFoliageType>_u_0 local_res10;
  
  TVar3.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->field0_0x0).DebugPtr;
  local_res10.ObjectPtr.field0_0x0 = TVar3.ObjectPtr.field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (TVar3.DebugPtr != (UFoliageType *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar3.DebugPtr != (UFoliageType *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
    }
  }
  uVar9 = ((uint)((ulonglong)TVar3.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)TVar3.DebugPtr >> 4)) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  uVar9 = TSet<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UFoliageType_const_>_>
                    ((TSet<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>,FDefaultSetAllocator>
                      *)this,uVar9 >> 0x10 ^ uVar9,
                     (TObjectPtr<UFoliageType_const_> *)&local_res10.ObjectPtr);
  if (uVar9 == 0xffffffff) {
    return false;
  }
  lVar4 = *(longlong *)this;
  lVar1 = (longlong)(int)uVar9 * 0x18;
  pFVar5 = (param_2->Obj).Ptr;
  (param_2->Obj).Ptr = *(FFoliageInfo **)(lVar4 + 8 + lVar1);
  *(FFoliageInfo **)(lVar4 + 8 + lVar1) = pFVar5;
  if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&this->field_0x28)) {
    puVar10 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar10 = &this->field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar9 & 0x1f) & 1) != 0) goto LAB_145eea303;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
LAB_145eea303:
  lVar4 = *(longlong *)this;
  puVar10 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar10 = &this->field_0x38;
  }
  puVar11 = (uint *)(puVar10 + (longlong)*(int *)(lVar4 + lVar1 + 0x14) * 4);
  do {
    uVar2 = *puVar11;
    if (uVar2 == 0xffffffff) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    else if (uVar2 == uVar9) {
      *puVar11 = *(uint *)(lVar4 + lVar1 + 0x10);
      TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this,uVar9,1);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar9,1);
      return true;
    }
    puVar11 = (uint *)(*(longlong *)this + (longlong)(int)uVar2 * 0x18 + 0x10);
  } while( true );
}

