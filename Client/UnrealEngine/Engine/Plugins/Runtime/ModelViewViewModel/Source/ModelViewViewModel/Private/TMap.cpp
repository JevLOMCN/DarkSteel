// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 1

// RemoveAndCopyValue @ 14a75d000

bool __thiscall
TMap<FObjectKey,TWeakObjectPtr<UListViewBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UListViewBase,FWeakObjectPtr>,0>_>
::RemoveAndCopyValue
          (TMap<FObjectKey,TWeakObjectPtr<UListViewBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UListViewBase,FWeakObjectPtr>,0>_>
           *this,FObjectKey *param_1,TWeakObjectPtr<UListViewBase,FWeakObjectPtr> *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  
  uVar2 = param_1->ObjectSerialNumber;
  uVar11 = param_1->ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar8 = (-0x61c88647 - uVar11) - uVar2 ^ uVar11 << 8;
  uVar10 = (uVar2 - uVar11) - uVar8 ^ uVar8 >> 0xd;
  uVar11 = (uVar11 - uVar10) - uVar8 ^ uVar10 >> 0xc;
  uVar8 = (uVar8 - uVar11) - uVar10 ^ uVar11 << 0x10;
  uVar10 = (uVar10 - uVar8) - uVar11 ^ uVar8 >> 5;
  uVar11 = (uVar11 - uVar10) - uVar8 ^ uVar10 >> 3;
  uVar8 = (uVar8 - uVar11) - uVar10 ^ uVar11 << 10;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar7 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x38;
    }
    uVar8 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&this->field_0x48 - 1U &
                               ((uVar10 - uVar8) - uVar11 ^ uVar8 >> 0xf)) * 4);
    if (uVar8 != 0xffffffff) {
      lVar3 = *(longlong *)this;
      do {
        lVar1 = (longlong)(int)uVar8 * 0x18;
        if ((*(int *)(lVar1 + lVar3) == param_1->ObjectIndex) &&
           (*(uint *)(lVar1 + 4 + lVar3) == uVar2)) {
          if (uVar8 == 0xffffffff) {
            return false;
          }
          param_2->WeakPtr = *(FWeakObjectPtr *)(lVar1 + 8 + lVar3);
          if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)&this->field_0x28)) {
            puVar7 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar7 = &this->field_0x10;
            }
            if ((*(uint *)(puVar7 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar8 & 0x1f) & 1) != 0) goto LAB_14a75d187;
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
LAB_14a75d187:
          lVar3 = *(longlong *)this;
          puVar7 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar7 = &this->field_0x38;
          }
          puVar9 = (uint *)(puVar7 + (longlong)*(int *)(lVar3 + lVar1 + 0x14) * 4);
          do {
            uVar2 = *puVar9;
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
            else if (uVar2 == uVar8) {
              *puVar9 = *(uint *)(lVar3 + lVar1 + 0x10);
              TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar8,1);
              return true;
            }
            puVar9 = (uint *)(*(longlong *)this + (longlong)(int)uVar2 * 0x18 + 0x10);
          } while( true );
        }
        uVar8 = *(uint *)(lVar1 + 0x10 + lVar3);
      } while (uVar8 != 0xffffffff);
    }
  }
  return false;
}

