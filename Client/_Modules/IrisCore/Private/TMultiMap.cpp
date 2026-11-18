// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// RemoveSingle @ 1442185b0

int __thiscall
TMultiMap<unsigned_int,void_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,void_const_*,1>_>
::RemoveSingle(TMultiMap<unsigned_int,void_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,void_const_*,1>_>
               *this,uint param_1,void *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  if (*(int *)&this->field_0x48 != 0) {
    puVar4 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar4 = &this->field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)param_1) *
                              4);
    iVar3 = iVar2;
    if (iVar2 != -1) {
      do {
        iVar2 = *(int *)(*(longlong *)this + 0x10 + (longlong)iVar3 * 0x18);
        if (*(uint *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) break;
        iVar3 = iVar2;
      } while (iVar2 != -1);
    }
    if (iVar3 != -1) {
      lVar1 = *(longlong *)this;
      do {
        if (*(void **)(lVar1 + 8 + (longlong)iVar3 * 0x18) == param_2) {
          TSet<TTuple<unsigned_int,void_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,void_const_*,1>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<unsigned_int,void_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,void_const_*,1>,FDefaultSetAllocator>
                           *)this,iVar3);
          return 1;
        }
        do {
          iVar3 = iVar2;
          if (iVar3 == -1) {
            return 0;
          }
          iVar2 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
        } while (*(uint *)(lVar1 + (longlong)iVar3 * 0x18) != param_1);
      } while( true );
    }
  }
  return 0;
}

// EmplaceUnique<unsigned_int_const_&,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo_const_&> @ 1442a44b0

FRegisteredProtocolInfo * __thiscall
TMultiMap<unsigned_int,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo,1>_>
::
EmplaceUnique<unsigned_int_const_&,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo_const_&>
          (TMultiMap<unsigned_int,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo,1>_>
           *this,uint *param_1,FRegisteredProtocolInfo *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  FRegisteredProtocolInfo *pFVar6;
  undefined1 *puVar7;
  int local_res8;
  uint *local_18;
  FRegisteredProtocolInfo *local_10;
  
  uVar1 = *param_1;
  if (*(int *)&this->field_0x48 != 0) {
    puVar7 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x38;
    }
    iVar3 = *(int *)(puVar7 + ((longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar1) * 4)
    ;
    iVar4 = iVar3;
    if (iVar3 != -1) {
      do {
        iVar3 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)this);
        if (*(uint *)((longlong)iVar4 * 0x20 + *(longlong *)this) == uVar1) break;
        iVar4 = iVar3;
      } while (iVar3 != -1);
    }
    if (iVar4 != -1) {
      lVar2 = *(longlong *)this;
      while( true ) {
        lVar5 = (longlong)iVar4 * 0x20;
        pFVar6 = (FRegisteredProtocolInfo *)(lVar2 + 8 + lVar5);
        if (((pFVar6->Protocol == param_2->Protocol) &&
            (*(int *)(lVar5 + 0x10 + lVar2) == (param_2->TemplateKey).ObjectIndex)) &&
           (*(int *)(lVar5 + 0x14 + lVar2) == (param_2->TemplateKey).ObjectSerialNumber)) break;
        do {
          iVar4 = iVar3;
          if (iVar4 == -1) goto LAB_1442a4579;
          iVar3 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar2);
        } while (*(uint *)((longlong)iVar4 * 0x20 + lVar2) != uVar1);
      }
      if (pFVar6 != (FRegisteredProtocolInfo *)0x0) {
        return pFVar6;
      }
    }
  }
LAB_1442a4579:
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo,1>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo_const_&>_>
            ((TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo,1>,FDefaultSetAllocator>
              *)this,(TPairInitializer<unsigned_int_const_&,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo_const_&>
                      *)&local_res8,(bool *)&local_18);
  return (FRegisteredProtocolInfo *)(*(longlong *)this + (longlong)local_res8 * 0x20 + 8);
}

// FindPair @ 1442c14a0

FNetRefHandle * __thiscall
TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
::FindPair(TMultiMap<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
           *this,uint param_1,FNetRefHandle *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  if (*(int *)&this->field_0x48 != 0) {
    puVar4 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar4 = &this->field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)param_1) *
                              4);
    iVar3 = iVar2;
    if (iVar2 != -1) {
      do {
        iVar2 = *(int *)(*(longlong *)this + 0x10 + (longlong)iVar3 * 0x18);
        if (*(uint *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) break;
        iVar3 = iVar2;
      } while (iVar2 != -1);
    }
    if (iVar3 != -1) {
      lVar1 = *(longlong *)this;
      do {
        if ((*(ulonglong *)(lVar1 + 8 + (longlong)iVar3 * 0x18) & 0x3fffffffffffff) ==
            ((param_2->field0_0x0).Value & 0x3fffffffffffff)) {
          return (FNetRefHandle *)(lVar1 + (longlong)iVar3 * 0x18 + 8);
        }
        do {
          iVar3 = iVar2;
          if (iVar3 == -1) {
            return (FNetRefHandle *)0x0;
          }
          iVar2 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
        } while (*(uint *)(lVar1 + (longlong)iVar3 * 0x18) != param_1);
      } while( true );
    }
  }
  return (FNetRefHandle *)0x0;
}

// RemoveSingle @ 1442df3b0

int __thiscall
TMultiMap<unsigned_int,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo,1>_>
::RemoveSingle(TMultiMap<unsigned_int,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo,1>_>
               *this,uint param_1,FRegisteredProtocolInfo *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  
  if (*(int *)&this->field_0x48 == 0) {
    return 0;
  }
  puVar8 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar8 = &this->field_0x38;
  }
  uVar10 = *(uint *)(puVar8 + ((longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)param_1) *
                              4);
  uVar9 = uVar10;
  if (uVar10 != 0xffffffff) {
    do {
      uVar10 = *(uint *)((longlong)(int)uVar9 * 0x20 + 0x18 + *(longlong *)this);
      if (*(uint *)((longlong)(int)uVar9 * 0x20 + *(longlong *)this) == param_1) break;
      uVar9 = uVar10;
    } while (uVar10 != 0xffffffff);
  }
  if (uVar9 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)this;
  while (((lVar11 = (longlong)(int)uVar9 * 0x20,
          *(FReplicationProtocol **)(lVar11 + 8 + lVar2) != param_2->Protocol ||
          (*(int *)(lVar11 + 0x10 + lVar2) != (param_2->TemplateKey).ObjectIndex)) ||
         (*(int *)(lVar11 + 0x14 + lVar2) != (param_2->TemplateKey).ObjectSerialNumber))) {
    do {
      uVar9 = uVar10;
      if (uVar9 == 0xffffffff) {
        return 0;
      }
      uVar10 = *(uint *)((longlong)(int)uVar9 * 0x20 + 0x18 + lVar2);
    } while (*(uint *)((longlong)(int)uVar9 * 0x20 + lVar2) != param_1);
  }
  if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&this->field_0x28)) {
    if ((*(int *)&this->field_0x28 <= (int)uVar9) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    puVar8 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar8 = &this->field_0x10;
    }
    if ((*(uint *)(puVar8 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar9 & 0x1f) & 1) != 0) goto LAB_1442df527;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
LAB_1442df527:
  lVar2 = *(longlong *)this;
  puVar8 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar8 = &this->field_0x38;
  }
  puVar12 = (uint *)(puVar8 + (longlong)*(int *)(lVar2 + 0x1c + lVar11) * 4);
  while( true ) {
    uVar10 = *puVar12;
    if ((uVar10 == 0xffffffff) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar5)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    if (uVar10 == uVar9) break;
    puVar12 = (uint *)(*(longlong *)this + 0x18 + (longlong)(int)uVar10 * 0x20);
  }
  *puVar12 = *(uint *)(lVar2 + 0x18 + lVar11);
  lVar2 = *(longlong *)this;
  bVar4 = (byte)uVar9 & 0x1f;
  uVar10 = 1 << bVar4 | 1U >> 0x20 - bVar4;
  if ((((int)uVar9 < 0) || (*(int *)&this->field_0x28 <= (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  lVar1 = (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4;
  puVar8 = *(undefined1 **)&this->field_0x20;
  if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
    puVar8 = &this->field_0x10;
  }
  if (((*(uint *)(puVar8 + lVar1) & uVar10) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationFlags[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,0xc5,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  if (*(int *)&this->field_0x34 != 0) {
    *(uint *)((longlong)*(int *)&this->field_0x30 * 0x20 + lVar2) = uVar9;
  }
  uVar7 = 0xffffffff;
  *(undefined4 *)(lVar11 + lVar2) = 0xffffffff;
  if (0 < *(int *)&this->field_0x34) {
    uVar7 = *(undefined4 *)&this->field_0x30;
  }
  *(undefined4 *)(lVar11 + 4 + lVar2) = uVar7;
  *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
  *(uint *)&this->field_0x30 = uVar9;
  if ((((int)uVar9 < 0) || (*(int *)&this->field_0x28 <= (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  puVar8 = *(undefined1 **)&this->field_0x20;
  if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
    puVar8 = &this->field_0x10;
  }
  *(uint *)(puVar8 + lVar1) = *(uint *)(puVar8 + lVar1) & ~uVar10;
  return 1;
}

