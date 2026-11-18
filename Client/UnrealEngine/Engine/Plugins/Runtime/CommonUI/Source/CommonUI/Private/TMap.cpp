// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 1

// RemoveAndCopyValue @ 14a812e50

bool __thiscall
TMap<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,0>_>
::RemoveAndCopyValue
          (TMap<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,UCommonActivatableWidget *param_1,
          TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  uint *puVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar11 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar8 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar8 = &this->field_0x38;
    }
    uVar11 = *(uint *)(puVar8 + (ulonglong)
                                (*(int *)&this->field_0x48 - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
    if (uVar11 != 0xffffffff) {
      do {
        lVar10 = (longlong)(int)uVar11 * 0x20;
        lVar2 = lVar10 + *(longlong *)this;
        if (*(UCommonActivatableWidget **)(lVar10 + *(longlong *)this) == param_1) {
          pTVar1 = (TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_> *)(lVar2 + 8);
          if (param_2 != pTVar1) {
            pFVar4 = (param_2->AllocatorInstance).Data;
            if (pFVar4 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar4);
            }
            (param_2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
            (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            param_2->ArrayNum = *(int *)(lVar2 + 0x10);
            param_2->ArrayMax = *(int *)(lVar2 + 0x14);
            *(undefined8 *)(lVar2 + 0x10) = 0;
          }
          if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)&this->field_0x28)) {
            puVar8 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar8 = &this->field_0x10;
            }
            if ((*(uint *)(puVar8 + (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) *
                                    4) >> (uVar11 & 0x1f) & 1) != 0) goto LAB_14a812f9d;
          }
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
LAB_14a812f9d:
          lVar2 = *(longlong *)this;
          puVar8 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar8 = &this->field_0x38;
          }
          puVar9 = (uint *)(puVar8 + (longlong)*(int *)(lVar2 + lVar10 + 0x1c) * 4);
          do {
            uVar3 = *puVar9;
            if (uVar3 == 0xffffffff) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
            }
            else if (uVar3 == uVar11) {
              *puVar9 = *(uint *)(lVar2 + lVar10 + 0x18);
              TSparseArray<TSparseSetElement<TTuple<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UCommonActivatableWidget_*,TArray<UCommonActivatableWidget_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)this,uVar11,1);
              TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar11,1);
              return true;
            }
            puVar9 = (uint *)(*(longlong *)this + 0x18 + (longlong)(int)uVar3 * 0x20);
          } while( true );
        }
        uVar11 = *(uint *)(lVar2 + 0x18);
      } while (uVar11 != 0xffffffff);
    }
  }
  return false;
}

