// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 9

// Emplace<TPairInitializer<enum_EWN_CS_CharacterSlotName_const_&,FWN_CS_ColliderContainer_&&>_> @ 14a69f420

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

FSetElementId __thiscall
TSet<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<enum_EWN_CS_CharacterSlotName_const_&,FWN_CS_ColliderContainer_&&>_>
          (void *this,
          TPairInitializer<EWN_CS_CharacterSlotName_const_&,FWN_CS_ColliderContainer_&&> *param_1,
          bool *param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  char *in_R9;
  void *_Dst;
  byte *pbVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar6 = *(int *)((longlong)this + 0x30);
    iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + *(longlong *)this);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    *(int *)((longlong)this + 0x30) = iVar3;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_48,iVar6);
  if (local_48.Pointer == (byte *)0x0) {
    pbVar11 = (byte *)0x0;
  }
  else {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(byte *)local_48.Pointer = **(byte **)param_2;
    pbVar11 = (byte *)((longlong)local_48.Pointer + 8);
    pbVar11[0] = 0;
    pbVar11[1] = 0;
    pbVar11[2] = 0;
    pbVar11[3] = 0;
    pbVar11[4] = 0;
    pbVar11[5] = 0;
    pbVar11[6] = 0;
    pbVar11[7] = 0;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = *puVar4;
    *puVar4 = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = *(undefined4 *)(puVar4 + 1);
    *(undefined4 *)((longlong)local_48.Pointer + 0x14) = *(undefined4 *)((longlong)puVar4 + 0xc);
    puVar4[1] = 0;
    pbVar11 = (byte *)((longlong)local_48.Pointer + 0x18);
    pbVar11[0] = 0xff;
    pbVar11[1] = 0xff;
    pbVar11[2] = 0xff;
    pbVar11[3] = 0xff;
    pbVar11 = local_48.Pointer;
  }
  bVar12 = false;
  bVar2 = *pbVar11;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar9 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar9 = (longlong)this + 0x38;
    }
    iVar6 = *(int *)(lVar9 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)bVar2) *
                             4);
    if (iVar6 != -1) {
      lVar9 = *(longlong *)this;
      do {
        if (*(byte *)((longlong)iVar6 * 0x20 + lVar9) == bVar2) {
          bVar12 = iVar6 != -1;
          if (bVar12) {
            _Dst = (void *)((longlong)iVar6 * 0x20 + lVar9);
            pvVar5 = *(void **)((longlong)_Dst + 8);
            if (pvVar5 != (void *)0x0) {
              FMemory::Free(pvVar5);
            }
            memmove(_Dst,pbVar11,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,local_48.Index,1);
            local_48.Index = iVar6;
          }
          break;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar9);
      } while (iVar6 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar8 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)((longlong)this + 0x48))) {
      uVar8 = (uint)bVar2 & *(int *)((longlong)this + 0x48) - 1U;
      *(uint *)(pbVar11 + 0x1c) = uVar8;
      lVar9 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar9 = (longlong)this + 0x38;
      }
      uVar7 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (ulonglong)uVar8;
      *(undefined4 *)(pbVar11 + 0x18) = *(undefined4 *)(lVar9 + uVar7 * 4);
      *(int *)(lVar9 + uVar7 * 4) = local_48.Index;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<enum_EWN_CS_CharacterSlotName_const_&,FWN_CS_HitSphereContainer_&&>_> @ 14a69f670

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

FSetElementId __thiscall
TSet<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<enum_EWN_CS_CharacterSlotName_const_&,FWN_CS_HitSphereContainer_&&>_>
          (void *this,
          TPairInitializer<EWN_CS_CharacterSlotName_const_&,FWN_CS_HitSphereContainer_&&> *param_1,
          bool *param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  char *in_R9;
  void *_Dst;
  byte *pbVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar6 = *(int *)((longlong)this + 0x30);
    iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + *(longlong *)this);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    *(int *)((longlong)this + 0x30) = iVar3;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_48,iVar6);
  if (local_48.Pointer == (byte *)0x0) {
    pbVar11 = (byte *)0x0;
  }
  else {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(byte *)local_48.Pointer = **(byte **)param_2;
    pbVar11 = (byte *)((longlong)local_48.Pointer + 8);
    pbVar11[0] = 0;
    pbVar11[1] = 0;
    pbVar11[2] = 0;
    pbVar11[3] = 0;
    pbVar11[4] = 0;
    pbVar11[5] = 0;
    pbVar11[6] = 0;
    pbVar11[7] = 0;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = *puVar4;
    *puVar4 = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = *(undefined4 *)(puVar4 + 1);
    *(undefined4 *)((longlong)local_48.Pointer + 0x14) = *(undefined4 *)((longlong)puVar4 + 0xc);
    puVar4[1] = 0;
    pbVar11 = (byte *)((longlong)local_48.Pointer + 0x18);
    pbVar11[0] = 0xff;
    pbVar11[1] = 0xff;
    pbVar11[2] = 0xff;
    pbVar11[3] = 0xff;
    pbVar11 = local_48.Pointer;
  }
  bVar12 = false;
  bVar2 = *pbVar11;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar9 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar9 = (longlong)this + 0x38;
    }
    iVar6 = *(int *)(lVar9 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)bVar2) *
                             4);
    if (iVar6 != -1) {
      lVar9 = *(longlong *)this;
      do {
        if (*(byte *)((longlong)iVar6 * 0x20 + lVar9) == bVar2) {
          bVar12 = iVar6 != -1;
          if (bVar12) {
            _Dst = (void *)((longlong)iVar6 * 0x20 + lVar9);
            pvVar5 = *(void **)((longlong)_Dst + 8);
            if (pvVar5 != (void *)0x0) {
              FMemory::Free(pvVar5);
            }
            memmove(_Dst,pbVar11,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,local_48.Index,1);
            local_48.Index = iVar6;
          }
          break;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar9);
      } while (iVar6 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar8 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)((longlong)this + 0x48))) {
      uVar8 = (uint)bVar2 & *(int *)((longlong)this + 0x48) - 1U;
      *(uint *)(pbVar11 + 0x1c) = uVar8;
      lVar9 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar9 = (longlong)this + 0x38;
      }
      uVar7 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (ulonglong)uVar8;
      *(undefined4 *)(pbVar11 + 0x18) = *(undefined4 *)(lVar9 + uVar7 * 4);
      *(int *)(lVar9 + uVar7 * 4) = local_48.Index;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<enum_EWN_CS_CharacterSlotName_const_&,FWN_CS_ServerHitCapsuleContainer_&&>_> @ 14a69f8c0

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

FSetElementId __thiscall
TSet<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ServerHitCapsuleContainer>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_ServerHitCapsuleContainer,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<enum_EWN_CS_CharacterSlotName_const_&,FWN_CS_ServerHitCapsuleContainer_&&>_>
          (void *this,
          TPairInitializer<EWN_CS_CharacterSlotName_const_&,FWN_CS_ServerHitCapsuleContainer_&&>
          *param_1,bool *param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  char *in_R9;
  void *_Dst;
  byte *pbVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar6 = *(int *)((longlong)this + 0x30);
    iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + *(longlong *)this);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    *(int *)((longlong)this + 0x30) = iVar3;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_48,iVar6);
  if (local_48.Pointer == (byte *)0x0) {
    pbVar11 = (byte *)0x0;
  }
  else {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(byte *)local_48.Pointer = **(byte **)param_2;
    pbVar11 = (byte *)((longlong)local_48.Pointer + 8);
    pbVar11[0] = 0;
    pbVar11[1] = 0;
    pbVar11[2] = 0;
    pbVar11[3] = 0;
    pbVar11[4] = 0;
    pbVar11[5] = 0;
    pbVar11[6] = 0;
    pbVar11[7] = 0;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = *puVar4;
    *puVar4 = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = *(undefined4 *)(puVar4 + 1);
    *(undefined4 *)((longlong)local_48.Pointer + 0x14) = *(undefined4 *)((longlong)puVar4 + 0xc);
    puVar4[1] = 0;
    pbVar11 = (byte *)((longlong)local_48.Pointer + 0x18);
    pbVar11[0] = 0xff;
    pbVar11[1] = 0xff;
    pbVar11[2] = 0xff;
    pbVar11[3] = 0xff;
    pbVar11 = local_48.Pointer;
  }
  bVar12 = false;
  bVar2 = *pbVar11;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar9 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar9 = (longlong)this + 0x38;
    }
    iVar6 = *(int *)(lVar9 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)bVar2) *
                             4);
    if (iVar6 != -1) {
      lVar9 = *(longlong *)this;
      do {
        if (*(byte *)((longlong)iVar6 * 0x20 + lVar9) == bVar2) {
          bVar12 = iVar6 != -1;
          if (bVar12) {
            _Dst = (void *)((longlong)iVar6 * 0x20 + lVar9);
            pvVar5 = *(void **)((longlong)_Dst + 8);
            if (pvVar5 != (void *)0x0) {
              FMemory::Free(pvVar5);
            }
            memmove(_Dst,pbVar11,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,local_48.Index,1);
            local_48.Index = iVar6;
          }
          break;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar9);
      } while (iVar6 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar8 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)((longlong)this + 0x48))) {
      uVar8 = (uint)bVar2 & *(int *)((longlong)this + 0x48) - 1U;
      *(uint *)(pbVar11 + 0x1c) = uVar8;
      lVar9 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar9 = (longlong)this + 0x38;
      }
      uVar7 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (ulonglong)uVar8;
      *(undefined4 *)(pbVar11 + 0x18) = *(undefined4 *)(lVar9 + uVar7 * 4);
      *(int *)(lVar9 + uVar7 * 4) = local_48.Index;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// RemoveImpl<enum_EWN_CS_CharacterSlotName> @ 14a6a1000

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

int __thiscall
TSet<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer,0>,FDefaultSetAllocator>
::RemoveImpl<enum_EWN_CS_CharacterSlotName>
          (void *this,uint param_1,EWN_CS_CharacterSlotName *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar8 = (longlong)this + 0x38;
  }
  uVar6 = *(uint *)(lVar8 + ((longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)param_1
                            ) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar8 = (longlong)(int)uVar6 * 0x20;
    if (*(EWN_CS_CharacterSlotName *)(lVar8 + *(longlong *)this) == *param_2) break;
    uVar6 = *(uint *)(lVar8 + *(longlong *)this + 0x18);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)((longlong)this + 0x28))) {
    lVar9 = *(longlong *)((longlong)this + 0x20);
    if (*(longlong *)((longlong)this + 0x20) == 0) {
      lVar9 = (longlong)this + 0x10;
    }
    if ((*(uint *)(lVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14a6a10e1;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
LAB_14a6a10e1:
  lVar9 = *(longlong *)this;
  lVar5 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar5 = (longlong)this + 0x38;
  }
  puVar7 = (uint *)(lVar5 + (longlong)*(int *)(lVar9 + lVar8 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar9 + lVar8 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(this,uVar6,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)this + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<enum_EWN_CS_CharacterSlotName> @ 14a6a11a0

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

int __thiscall
TSet<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer,0>,FDefaultSetAllocator>
::RemoveImpl<enum_EWN_CS_CharacterSlotName>
          (void *this,uint param_1,EWN_CS_CharacterSlotName *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar8 = (longlong)this + 0x38;
  }
  uVar6 = *(uint *)(lVar8 + ((longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)param_1
                            ) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar8 = (longlong)(int)uVar6 * 0x20;
    if (*(EWN_CS_CharacterSlotName *)(lVar8 + *(longlong *)this) == *param_2) break;
    uVar6 = *(uint *)(lVar8 + *(longlong *)this + 0x18);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)((longlong)this + 0x28))) {
    lVar9 = *(longlong *)((longlong)this + 0x20);
    if (*(longlong *)((longlong)this + 0x20) == 0) {
      lVar9 = (longlong)this + 0x10;
    }
    if ((*(uint *)(lVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14a6a1281;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
LAB_14a6a1281:
  lVar9 = *(longlong *)this;
  lVar5 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar5 = (longlong)this + 0x38;
  }
  puVar7 = (uint *)(lVar5 + (longlong)*(int *)(lVar9 + lVar8 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar9 + lVar8 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(this,uVar6,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)this + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<enum_EWN_CS_CharacterSlotName> @ 14a6a1340

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

int __thiscall
TSet<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ServerHitCapsuleContainer>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_ServerHitCapsuleContainer,0>,FDefaultSetAllocator>
::RemoveImpl<enum_EWN_CS_CharacterSlotName>
          (void *this,uint param_1,EWN_CS_CharacterSlotName *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar8 = (longlong)this + 0x38;
  }
  uVar6 = *(uint *)(lVar8 + ((longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)param_1
                            ) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar8 = (longlong)(int)uVar6 * 0x20;
    if (*(EWN_CS_CharacterSlotName *)(lVar8 + *(longlong *)this) == *param_2) break;
    uVar6 = *(uint *)(lVar8 + *(longlong *)this + 0x18);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)((longlong)this + 0x28))) {
    lVar9 = *(longlong *)((longlong)this + 0x20);
    if (*(longlong *)((longlong)this + 0x20) == 0) {
      lVar9 = (longlong)this + 0x10;
    }
    if ((*(uint *)(lVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14a6a1421;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
LAB_14a6a1421:
  lVar9 = *(longlong *)this;
  lVar5 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar5 = (longlong)this + 0x38;
  }
  puVar7 = (uint *)(lVar5 + (longlong)*(int *)(lVar9 + lVar8 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar9 + lVar8 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ServerHitCapsuleContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(this,uVar6,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)this + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// Rehash @ 14a6a9b10

void __thiscall
TSet<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_ColliderContainer,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> *pFVar5;
  uint uVar6;
  byte *pbVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      pTVar8 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar8 = local_30.Array;
      }
      uVar6 = *(uint *)(pTVar8->AllocatorInstance).InlineData;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar3 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14a6a9bec;
        uVar6 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar3 * 4 + 4);
      }
      uStack_54 = -uVar6 & uVar6;
      uVar4 = (ulonglong)uStack_54 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iStack_44 = (int)lVar3 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14a6a9bec:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        pbVar7 = (byte *)((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)this);
        uVar6 = *piVar1 - 1U & (uint)*pbVar7;
        *(uint *)(pbVar7 + 0x1c) = uVar6;
        pFVar5 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar5 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar4 = (longlong)*piVar1 - 1U & (ulonglong)uVar6;
        *(undefined4 *)(pbVar7 + 0x18) = *(undefined4 *)(pFVar5->InlineData + uVar4 * 4);
        *(int *)(pFVar5->InlineData + uVar4 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14a6a9ca0

void __thiscall
TSet<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_HitSphereContainer,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> *pFVar5;
  uint uVar6;
  byte *pbVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      pTVar8 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar8 = local_30.Array;
      }
      uVar6 = *(uint *)(pTVar8->AllocatorInstance).InlineData;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar3 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14a6a9d7c;
        uVar6 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar3 * 4 + 4);
      }
      uStack_54 = -uVar6 & uVar6;
      uVar4 = (ulonglong)uStack_54 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iStack_44 = (int)lVar3 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14a6a9d7c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        pbVar7 = (byte *)((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)this);
        uVar6 = *piVar1 - 1U & (uint)*pbVar7;
        *(uint *)(pbVar7 + 0x1c) = uVar6;
        pFVar5 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar5 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar4 = (longlong)*piVar1 - 1U & (ulonglong)uVar6;
        *(undefined4 *)(pbVar7 + 0x18) = *(undefined4 *)(pFVar5->InlineData + uVar4 * 4);
        *(int *)(pFVar5->InlineData + uVar4 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14a6a9e30

void __thiscall
TSet<TTuple<enum_EWN_CS_CharacterSlotName,FWN_CS_ServerHitCapsuleContainer>,TDefaultMapHashableKeyFuncs<enum_EWN_CS_CharacterSlotName,FWN_CS_ServerHitCapsuleContainer,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> *pFVar5;
  uint uVar6;
  byte *pbVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      pTVar8 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar8 = local_30.Array;
      }
      uVar6 = *(uint *)(pTVar8->AllocatorInstance).InlineData;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar3 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14a6a9f0c;
        uVar6 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar3 * 4 + 4);
      }
      uStack_54 = -uVar6 & uVar6;
      uVar4 = (ulonglong)uStack_54 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iStack_44 = (int)lVar3 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14a6a9f0c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        pbVar7 = (byte *)((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)this);
        uVar6 = *piVar1 - 1U & (uint)*pbVar7;
        *(uint *)(pbVar7 + 0x1c) = uVar6;
        pFVar5 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar5 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar4 = (longlong)*piVar1 - 1U & (ulonglong)uVar6;
        *(undefined4 *)(pbVar7 + 0x18) = *(undefined4 *)(pFVar5->InlineData + uVar4 * 4);
        *(int *)(pFVar5->InlineData + uVar4 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

