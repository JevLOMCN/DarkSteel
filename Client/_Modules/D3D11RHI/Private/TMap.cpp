// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 1

// RemoveAndCopyValue @ 1459972a0

bool __thiscall
TMap<FD3D11LockedKey,FD3D11LockedData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>_>
::RemoveAndCopyValue
          (TMap<FD3D11LockedKey,FD3D11LockedData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>_>
           *this,FD3D11LockedKey *param_1,FD3D11LockedData *param_2)

{
  uint uVar1;
  ID3D11Resource *pIVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  FD3D11LockedData *pFVar9;
  uint uVar10;
  longlong lVar11;
  
  pIVar2 = param_1->SourceObject;
  uVar10 = ((uint)((ulonglong)pIVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pIVar2 >> 4)) *
           -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar7 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x38;
    }
    uVar10 = *(uint *)(puVar7 + (ulonglong)
                                (*(int *)&this->field_0x48 - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
    if (uVar10 != 0xffffffff) {
      lVar3 = *(longlong *)this;
      do {
        lVar11 = (longlong)(int)uVar10 * 0x38;
        if ((*(ID3D11Resource **)(lVar11 + lVar3) == pIVar2) &&
           (*(uint *)(lVar11 + 8 + lVar3) == param_1->Subresource)) {
          if (uVar10 == 0xffffffff) {
            return false;
          }
          pFVar9 = (FD3D11LockedData *)(lVar3 + 0x10 + lVar11);
          if (param_2 != pFVar9) {
            pIVar2 = (param_2->StagingResource).Reference;
            (param_2->StagingResource).Reference = (pFVar9->StagingResource).Reference;
            (pFVar9->StagingResource).Reference = (ID3D11Resource *)0x0;
            if (pIVar2 != (ID3D11Resource *)0x0) {
              (**(code **)((longlong)*pIVar2 + 0x10))();
            }
          }
          param_2->Pitch = pFVar9->Pitch;
          param_2->DepthPitch = pFVar9->DepthPitch;
          param_2->Data = pFVar9->Data;
          param_2->bAllocDataWasUsed = pFVar9->bAllocDataWasUsed;
          param_2->bLockDeferred = pFVar9->bLockDeferred;
          if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)&this->field_0x28)) {
            puVar7 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar7 = &this->field_0x10;
            }
            if ((*(uint *)(puVar7 + (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) *
                                    4) >> (uVar10 & 0x1f) & 1) != 0) goto LAB_14599740f;
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
LAB_14599740f:
          lVar3 = *(longlong *)this;
          puVar7 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar7 = &this->field_0x38;
          }
          puVar8 = (uint *)(puVar7 + (longlong)*(int *)(lVar3 + 0x34 + lVar11) * 4);
          do {
            uVar1 = *puVar8;
            if (uVar1 == 0xffffffff) {
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
            else if (uVar1 == uVar10) {
              *puVar8 = *(uint *)(lVar3 + 0x30 + lVar11);
              TSparseArray<TSparseSetElement<TTuple<FD3D11LockedKey,FD3D11LockedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FD3D11LockedKey,FD3D11LockedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)this,uVar10,1);
              TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar10,1);
              return true;
            }
            puVar8 = (uint *)(*(longlong *)this + 0x30 + (longlong)(int)uVar1 * 0x38);
          } while( true );
        }
        uVar10 = *(uint *)(lVar11 + 0x30 + lVar3);
      } while (uVar10 != 0xffffffff);
    }
  }
  return false;
}

