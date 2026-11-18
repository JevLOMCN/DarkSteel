// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 1

// FindAndRemoveChecked @ 148d0a590

uint __thiscall
TMap<void_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,unsigned_int,0>_>::
FindAndRemoveChecked
          (TMap<void_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,unsigned_int,0>_>
           *this,void *param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 *puVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar5 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar5 = &this->field_0x38;
    }
    uVar7 = *(uint *)(puVar5 + (ulonglong)(*(int *)&this->field_0x48 - 1U & (uVar7 >> 0x10 ^ uVar7))
                               * 4);
    if (uVar7 != 0xffffffff) {
      do {
        if (*(void **)(*(longlong *)this + (longlong)(int)uVar7 * 0x18) == param_1) {
          if (uVar7 == 0xffffffff) goto LAB_148d0a62f;
          goto LAB_148d0a655;
        }
        uVar7 = *(uint *)(*(longlong *)this + 0x10 + (longlong)(int)uVar7 * 0x18);
      } while (uVar7 != 0xffffffff);
    }
  }
  uVar7 = 0xffffffff;
LAB_148d0a62f:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("PairId.IsValidId()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x556,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
LAB_148d0a655:
  uVar1 = *(uint *)((longlong)(int)uVar7 * 0x18 + 8 + *(longlong *)this);
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&this->field_0x28)) {
    puVar5 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar5 = &this->field_0x10;
    }
    if ((*(uint *)(puVar5 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_148d0a6c6;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
LAB_148d0a6c6:
  lVar6 = *(longlong *)this + (longlong)(int)uVar7 * 0x18;
  puVar5 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar5 = &this->field_0x38;
  }
  puVar8 = (uint *)(puVar5 + (longlong)*(int *)(lVar6 + 0x14) * 4);
  while( true ) {
    uVar2 = *puVar8;
    if ((uVar2 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar2 == uVar7) {
      *puVar8 = *(uint *)(lVar6 + 0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return uVar1;
    }
    puVar8 = (uint *)(*(longlong *)this + (longlong)(int)uVar2 * 0x18 + 0x10);
  }
  pcVar3 = (code *)swi(3);
  uVar7 = (*pcVar3)();
  return uVar7;
}

