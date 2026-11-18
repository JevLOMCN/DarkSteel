// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 1

// RemoveAndCopyValue @ 14ec0fcb0

bool __thiscall
TMap<FName,TSharedPtr<IOnlineSubsystem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>_>
::RemoveAndCopyValue
          (TMap<FName,TSharedPtr<IOnlineSubsystem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>_>
           *this,FName param_1,TSharedPtr<IOnlineSubsystem,1> *param_2)

{
  TSharedPtr<IOnlineSubsystem,1> *pTVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint *puVar9;
  longlong lVar10;
  
  uVar7 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar8 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar8 = &this->field_0x38;
    }
    uVar7 = *(uint *)(puVar8 + (ulonglong)(*(int *)&this->field_0x48 - 1U & param_1.Number + uVar7)
                               * 4);
    if (uVar7 != 0xffffffff) {
      do {
        lVar10 = (longlong)(int)uVar7 * 0x20;
        lVar2 = lVar10 + *(longlong *)this;
        if (*(FName *)(lVar10 + *(longlong *)this) == param_1) {
          pTVar1 = (TSharedPtr<IOnlineSubsystem,1> *)(lVar2 + 8);
          if (param_2 != pTVar1) {
            param_2->Object = pTVar1->Object;
            pTVar1->Object = (IOnlineSubsystem *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&param_2->SharedReferenceCount,(FSharedReferencer<1> *)(lVar2 + 0x10));
          }
          if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&this->field_0x28)) {
            puVar8 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar8 = &this->field_0x10;
            }
            if ((*(uint *)(puVar8 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar7 & 0x1f) & 1) != 0) goto LAB_14ec0fdd2;
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
LAB_14ec0fdd2:
          lVar2 = *(longlong *)this;
          puVar8 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar8 = &this->field_0x38;
          }
          puVar9 = (uint *)(puVar8 + (longlong)*(int *)(lVar10 + lVar2 + 0x1c) * 4);
          do {
            uVar3 = *puVar9;
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
            else if (uVar3 == uVar7) {
              *puVar9 = *(uint *)(lVar10 + lVar2 + 0x18);
              TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)this,uVar7,1);
              TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar7,1);
              return true;
            }
            puVar9 = (uint *)(*(longlong *)this + 0x18 + (longlong)(int)uVar3 * 0x20);
          } while( true );
        }
        uVar7 = *(uint *)(lVar2 + 0x18);
      } while (uVar7 != 0xffffffff);
    }
  }
  return false;
}

