// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// RemoveAndCopyValue @ 14d560620

bool __thiscall
TMap<TTuple<FName,UObject_*>,FCameraContextDataID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>_>
::RemoveAndCopyValue
          (TMap<TTuple<FName,UObject_*>,FCameraContextDataID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraContextDataID,0>_>
           *this,TTuple<FName,UObject_*> *param_1,FCameraContextDataID *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint *puVar10;
  longlong lVar11;
  
  uVar1 = *(undefined8 *)param_1;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar2 = *(ulonglong *)&param_1->field_0x8;
  uVar7 = uVar7 + (int)((ulonglong)uVar1 >> 0x20);
  uVar8 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar9 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar9 = &this->field_0x38;
    }
    uVar7 = *(uint *)(puVar9 + (ulonglong)
                               (*(int *)&this->field_0x48 - 1U &
                               ((uVar7 >> 2) + 0x9e3779b9 + (uVar8 >> 0x10 ^ uVar8) + uVar7 * 0x40 ^
                               uVar7)) * 4);
    if (uVar7 != 0xffffffff) {
      lVar3 = *(longlong *)this;
      do {
        lVar11 = (longlong)(int)uVar7 * 0x20;
        if ((*(longlong *)(lVar11 + lVar3) == *(longlong *)param_1) &&
           (*(ulonglong *)(lVar11 + 8 + lVar3) == uVar2)) {
          if (uVar7 == 0xffffffff) {
            return false;
          }
          param_2->Value = *(uint *)(lVar11 + 0x10 + lVar3);
          if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&this->field_0x28)) {
            puVar9 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar9 = &this->field_0x10;
            }
            if ((*(uint *)(puVar9 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar7 & 0x1f) & 1) != 0) goto LAB_14d56076e;
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
LAB_14d56076e:
          lVar3 = *(longlong *)this;
          puVar9 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar9 = &this->field_0x38;
          }
          puVar10 = (uint *)(puVar9 + (longlong)*(int *)(lVar3 + lVar11 + 0x1c) * 4);
          do {
            uVar8 = *puVar10;
            if (uVar8 == 0xffffffff) {
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
            else if (uVar8 == uVar7) {
              *puVar10 = *(uint *)(lVar3 + lVar11 + 0x18);
              TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar7,1);
              return true;
            }
            puVar10 = (uint *)(*(longlong *)this + 0x18 + (longlong)(int)uVar8 * 0x20);
          } while( true );
        }
        uVar7 = *(uint *)(lVar11 + 0x18 + lVar3);
      } while (uVar7 != 0xffffffff);
    }
  }
  return false;
}

// RemoveAndCopyValue @ 14d560800

bool __thiscall
TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
::RemoveAndCopyValue
          (TMap<TTuple<FName,UObject_*>,FCameraVariableID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,UObject_*>,FCameraVariableID,0>_>
           *this,TTuple<FName,UObject_*> *param_1,FCameraVariableID *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint *puVar10;
  longlong lVar11;
  
  uVar1 = *(undefined8 *)param_1;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar2 = *(ulonglong *)&param_1->field_0x8;
  uVar7 = uVar7 + (int)((ulonglong)uVar1 >> 0x20);
  uVar8 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar9 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar9 = &this->field_0x38;
    }
    uVar7 = *(uint *)(puVar9 + (ulonglong)
                               (*(int *)&this->field_0x48 - 1U &
                               ((uVar7 >> 2) + 0x9e3779b9 + (uVar8 >> 0x10 ^ uVar8) + uVar7 * 0x40 ^
                               uVar7)) * 4);
    if (uVar7 != 0xffffffff) {
      lVar3 = *(longlong *)this;
      do {
        lVar11 = (longlong)(int)uVar7 * 0x20;
        if ((*(longlong *)(lVar11 + lVar3) == *(longlong *)param_1) &&
           (*(ulonglong *)(lVar11 + 8 + lVar3) == uVar2)) {
          if (uVar7 == 0xffffffff) {
            return false;
          }
          param_2->Value = *(uint *)(lVar11 + 0x10 + lVar3);
          if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&this->field_0x28)) {
            puVar9 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar9 = &this->field_0x10;
            }
            if ((*(uint *)(puVar9 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar7 & 0x1f) & 1) != 0) goto LAB_14d56094e;
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
LAB_14d56094e:
          lVar3 = *(longlong *)this;
          puVar9 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar9 = &this->field_0x38;
          }
          puVar10 = (uint *)(puVar9 + (longlong)*(int *)(lVar3 + lVar11 + 0x1c) * 4);
          do {
            uVar8 = *puVar10;
            if (uVar8 == 0xffffffff) {
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
            else if (uVar8 == uVar7) {
              *puVar10 = *(uint *)(lVar3 + lVar11 + 0x18);
              TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar7,1);
              return true;
            }
            puVar10 = (uint *)(*(longlong *)this + 0x18 + (longlong)(int)uVar8 * 0x20);
          } while( true );
        }
        uVar7 = *(uint *)(lVar11 + 0x18 + lVar3);
      } while (uVar7 != 0xffffffff);
    }
  }
  return false;
}

