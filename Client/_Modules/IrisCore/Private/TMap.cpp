// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// FindAndRemoveChecked @ 144278090

uint __thiscall
TMap<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>_>
::FindAndRemoveChecked
          (TMap<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>_>
           *this,FNetRefHandle *param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint *puVar9;
  
  uVar8 = (param_1->field0_0x0).Value & 0x3fffffffffffff;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar6 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar6 = &this->field_0x38;
    }
    uVar5 = *(uint *)(puVar6 + ((uVar8 >> 0x20) * 0x17 + uVar8 &
                               (ulonglong)(*(int *)&this->field_0x48 - 1)) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        if ((*(ulonglong *)(*(longlong *)this + (longlong)(int)uVar5 * 0x18) & 0x3fffffffffffff) ==
            uVar8) {
          if (uVar5 == 0xffffffff) goto LAB_144278125;
          goto LAB_14427814b;
        }
        uVar5 = *(uint *)(*(longlong *)this + 0x10 + (longlong)(int)uVar5 * 0x18);
      } while (uVar5 != 0xffffffff);
    }
  }
  uVar5 = 0xffffffff;
LAB_144278125:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("PairId.IsValidId()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x556,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
LAB_14427814b:
  uVar1 = *(uint *)((longlong)(int)uVar5 * 0x18 + 8 + *(longlong *)this);
  if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)&this->field_0x28)) {
    puVar6 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar6 = &this->field_0x10;
    }
    if ((*(uint *)(puVar6 + (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar5 & 0x1f) & 1) != 0) goto LAB_1442781bc;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
LAB_1442781bc:
  lVar7 = *(longlong *)this + (longlong)(int)uVar5 * 0x18;
  puVar6 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar6 = &this->field_0x38;
  }
  puVar9 = (uint *)(puVar6 + (longlong)*(int *)(lVar7 + 0x14) * 4);
  while( true ) {
    uVar2 = *puVar9;
    if ((uVar2 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar2 == uVar5) {
      *puVar9 = *(uint *)(lVar7 + 0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar5,1);
      return uVar1;
    }
    puVar9 = (uint *)(*(longlong *)this + (longlong)(int)uVar2 * 0x18 + 0x10);
  }
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return uVar5;
}

// RemoveAndCopyValue @ 1442ddc90

bool __thiscall
TMap<UE::Net::FReplicationProtocol_const_*,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FReplicationProtocol_const_*,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo,0>_>
::RemoveAndCopyValue
          (TMap<UE::Net::FReplicationProtocol_const_*,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FReplicationProtocol_const_*,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo,0>_>
           *this,FReplicationProtocol *param_1,FRegisteredProtocolInfo *param_2)

{
  longlong lVar1;
  uint uVar2;
  code *pcVar3;
  FObjectKey FVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar10 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
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
      do {
        lVar9 = (longlong)(int)uVar10 * 0x20;
        lVar1 = lVar9 + *(longlong *)this;
        if (*(FReplicationProtocol **)(lVar9 + *(longlong *)this) == param_1) {
          FVar4 = *(FObjectKey *)(lVar1 + 0x10);
          param_2->Protocol = *(FReplicationProtocol **)(lVar1 + 8);
          param_2->TemplateKey = FVar4;
          if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)&this->field_0x28)) {
            puVar7 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar7 = &this->field_0x10;
            }
            if ((*(uint *)(puVar7 + (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) *
                                    4) >> (uVar10 & 0x1f) & 1) != 0) goto LAB_1442ddda8;
          }
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
LAB_1442ddda8:
          lVar1 = *(longlong *)this;
          puVar7 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar7 = &this->field_0x38;
          }
          puVar8 = (uint *)(puVar7 + (longlong)*(int *)(lVar1 + lVar9 + 0x1c) * 4);
          do {
            uVar2 = *puVar8;
            if (uVar2 == 0xffffffff) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
            }
            else if (uVar2 == uVar10) {
              *puVar8 = *(uint *)(lVar1 + lVar9 + 0x18);
              TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar10,1);
              return true;
            }
            puVar8 = (uint *)(*(longlong *)this + 0x18 + (longlong)(int)uVar2 * 0x20);
          } while( true );
        }
        uVar10 = *(uint *)(lVar1 + 0x18);
      } while (uVar10 != 0xffffffff);
    }
  }
  return false;
}

// RemoveAndCopyValue @ 1442dde30

bool __thiscall
TMap<FObjectKey,UE::Net::FNetObjectGroupHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetObjectGroupHandle,0>_>
::RemoveAndCopyValue
          (TMap<FObjectKey,UE::Net::FNetObjectGroupHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetObjectGroupHandle,0>_>
           *this,FObjectKey *param_1,FNetObjectGroupHandle *param_2)

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
          param_2->field0_0x0 = *(FNetObjectGroupHandle_u_0 *)(lVar1 + 8 + lVar3);
          if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)&this->field_0x28)) {
            puVar7 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar7 = &this->field_0x10;
            }
            if ((*(uint *)(puVar7 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar8 & 0x1f) & 1) != 0) goto LAB_1442ddfb7;
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
LAB_1442ddfb7:
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
              TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

