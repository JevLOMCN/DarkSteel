// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 1

// FindAndRemoveChecked @ 14d98cdb0

ISoundHandleOwner * __thiscall
TMap<unsigned_int,ISoundHandleOwner_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,ISoundHandleOwner_*,0>_>
::FindAndRemoveChecked
          (TMap<unsigned_int,ISoundHandleOwner_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,ISoundHandleOwner_*,0>_>
           *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ISoundHandleOwner *pIVar4;
  undefined1 *puVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar5 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar5 = &this->field_0x38;
    }
    uVar6 = *(uint *)(puVar5 + (ulonglong)(*(int *)&this->field_0x48 - 1U & param_1) * 4);
    if (uVar6 != 0xffffffff) {
      do {
        if (*(uint *)(*(longlong *)this + (longlong)(int)uVar6 * 0x18) == param_1) {
          if (uVar6 == 0xffffffff) goto LAB_14d98ce20;
          goto LAB_14d98ce46;
        }
        uVar6 = *(uint *)(*(longlong *)this + 0x10 + (longlong)(int)uVar6 * 0x18);
      } while (uVar6 != 0xffffffff);
    }
  }
  uVar6 = 0xffffffff;
LAB_14d98ce20:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("PairId.IsValidId()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x556,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pIVar4 = (ISoundHandleOwner *)(*pcVar2)();
    return pIVar4;
  }
LAB_14d98ce46:
  pIVar4 = *(ISoundHandleOwner **)((longlong)(int)uVar6 * 0x18 + 8 + *(longlong *)this);
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&this->field_0x28)) {
    puVar5 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar5 = &this->field_0x10;
    }
    if ((*(uint *)(puVar5 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14d98ceb7;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pIVar4 = (ISoundHandleOwner *)(*pcVar2)();
    return pIVar4;
  }
LAB_14d98ceb7:
  lVar7 = *(longlong *)this + (longlong)(int)uVar6 * 0x18;
  puVar5 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar5 = &this->field_0x38;
  }
  puVar8 = (uint *)(puVar5 + (longlong)*(int *)(lVar7 + 0x14) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar8 = *(uint *)(lVar7 + 0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return pIVar4;
    }
    puVar8 = (uint *)(*(longlong *)this + (longlong)(int)uVar1 * 0x18 + 0x10);
  }
  pcVar2 = (code *)swi(3);
  pIVar4 = (ISoundHandleOwner *)(*pcVar2)();
  return pIVar4;
}

