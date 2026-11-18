// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// Load @ 141f91da0

void __thiscall FUnversionedHeader::Load(FUnversionedHeader *this,FStructuredArchiveStream param_1)

{
  TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this_00;
  ushort uVar1;
  FArchive *pFVar2;
  undefined2 *puVar3;
  ForElementType<FUnversionedHeader::FFragment> FVar4;
  longlong *plVar5;
  byte *pbVar6;
  ushort *puVar7;
  undefined4 *puVar8;
  int iVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  ForElementType<FUnversionedHeader::FFragment> FVar13;
  ulong64 uVar14;
  ForElementType<unsigned_int> FVar15;
  byte bVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  ForElementType<unsigned_int> FVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  byte local_res8 [8];
  uint local_res10 [2];
  ushort local_res18 [4];
  uint local_res20;
  undefined4 local_58;
  uint local_54;
  uint local_50 [4];
  
  uVar23 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_54 = 0;
  do {
    pFVar2 = *(FArchive **)(*(longlong *)param_1 + 8);
    puVar3 = (undefined2 *)**(undefined8 **)&pFVar2->field_0x8;
    if ((undefined2 *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
      if ((pFVar2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res10,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar2,(ushort *)local_res10);
      }
    }
    else {
      local_res10[0] = CONCAT22(local_res10[0]._2_2_,*puVar3);
      **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 2;
    }
    FVar4 = (this->Fragments).AllocatorInstance.SecondaryData;
    bVar16 = (byte)(local_res10[0] >> 8);
    local_res20 = CONCAT13(bVar16,CONCAT12(bVar16 >> 1,
                                           CONCAT11((byte)local_res10[0] >> 7,(byte)local_res10[0]))
                          ) & 0x1ffff7f;
    local_58 = local_res20;
    FVar13 = (ForElementType<FUnversionedHeader::FFragment>)this;
    if (FVar4 != (ForElementType<FUnversionedHeader::FFragment>)0x0) {
      FVar13 = FVar4;
    }
    if ((ulonglong)FVar13 <= &local_58) {
      FVar13 = (ForElementType<FUnversionedHeader::FFragment>)this;
      if (FVar4 != (ForElementType<FUnversionedHeader::FFragment>)0x0) {
        FVar13 = FVar4;
      }
      if ((&local_58 < (undefined4 *)((longlong)FVar13 + (longlong)(this->Fragments).ArrayMax * 4))
         && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    iVar12 = (this->Fragments).ArrayNum;
    if (iVar12 == (this->Fragments).ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FUnversionedHeader::FFragment>_>
                         (0x104,(ForElementType<FUnversionedHeader::FFragment> *)this,
                          &(this->Fragments).ArrayMax);
    }
    (this->Fragments).ArrayNum = iVar12 + 1;
    FVar4 = (this->Fragments).AllocatorInstance.SecondaryData;
    FVar13 = (ForElementType<FUnversionedHeader::FFragment>)this;
    if (FVar4 != (ForElementType<FUnversionedHeader::FFragment>)0x0) {
      FVar13 = FVar4;
    }
    *(uint *)((longlong)FVar13 + (longlong)iVar12 * 4) = local_58;
    puVar18 = local_50;
    if (local_58._1_1_ == '\0') {
      puVar18 = &local_54;
    }
    *puVar18 = *puVar18 + (local_58 >> 0x10 & 0xff);
    uVar17 = local_50[0];
  } while (local_58._3_1_ == '\0');
  if (local_50[0] == 0) {
    this->bHasNonZeroValues = local_54 != 0;
    return;
  }
  this_00 = &this->ZeroMask;
  iVar12 = (this->ZeroMask).NumBits;
  (this->ZeroMask).NumBits = local_50[0];
  if ((this->ZeroMask).MaxBits < (int)local_50[0]) {
    local_res10[0] = iVar12 + 0x1fU >> 5;
    uVar21 = local_50[0] + 0x1f >> 5;
    if (uVar21 < 9) {
      iVar12 = 8;
    }
    else {
      uVar14 = FMemory::QuantizeSize((ulonglong)uVar21 << 2,0);
      iVar12 = (int)(uVar14 >> 2);
      if (iVar12 < (int)uVar21) {
        iVar12 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(&this_00->AllocatorInstance,local_res10[0],iVar12,4);
    (this->ZeroMask).MaxBits = iVar12 << 5;
  }
  iVar12 = (this->ZeroMask).NumBits;
  uVar19 = iVar12 >> 0x1f & 0x1f;
  uVar21 = iVar12 + uVar19;
  iVar12 = (uVar21 & 0x1f) - uVar19;
  if (iVar12 != 0) {
    FVar20 = (this->ZeroMask).AllocatorInstance.SecondaryData;
    if (FVar20 == (ForElementType<unsigned_int>)0x0) {
      FVar20 = (ForElementType<unsigned_int>)this_00;
    }
    puVar18 = (uint *)((longlong)FVar20 + (longlong)((int)uVar21 >> 5) * 4);
    *puVar18 = *puVar18 & 0xffffffffU >> (-(char)iVar12 & 0x1fU);
  }
  FVar20 = (this->ZeroMask).AllocatorInstance.SecondaryData;
  if (FVar20 == (ForElementType<unsigned_int>)0x0) {
    FVar20 = (ForElementType<unsigned_int>)this_00;
  }
  if (uVar17 < 9) {
    plVar5 = *(longlong **)(*(longlong *)param_1 + 8);
    pbVar6 = *(byte **)plVar5[1];
    if ((byte *)((undefined8 *)plVar5[1])[1] < pbVar6 + 1) {
      (**(code **)(*plVar5 + 0x188))(plVar5,local_res8,1);
      *(uint *)FVar20 = (uint)local_res8[0];
    }
    else {
      bVar16 = *pbVar6;
      *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 1;
      *(uint *)FVar20 = (uint)bVar16;
    }
  }
  else if (uVar17 < 0x11) {
    pFVar2 = *(FArchive **)(*(longlong *)param_1 + 8);
    puVar7 = (ushort *)**(undefined8 **)&pFVar2->field_0x8;
    if ((ushort *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar7 + 1) {
      if ((pFVar2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res18,2);
        *(uint *)FVar20 = (uint)local_res18[0];
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar2,local_res18);
        *(uint *)FVar20 = (uint)local_res18[0];
      }
    }
    else {
      uVar1 = *puVar7;
      **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 2;
      *(uint *)FVar20 = (uint)uVar1;
    }
  }
  else if (uVar17 + 0x1f >> 5 != 0) {
    uVar24 = (ulonglong)(uVar17 + 0x1f >> 5);
    do {
      pFVar2 = *(FArchive **)(*(longlong *)param_1 + 8);
      puVar8 = (undefined4 *)**(undefined8 **)&pFVar2->field_0x8;
      if ((undefined4 *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar8 + 1) {
        if ((pFVar2->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,FVar20,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar2,(uint *)FVar20);
        }
      }
      else {
        *(undefined4 *)FVar20 = *puVar8;
        **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
      }
      FVar20 = (ForElementType<unsigned_int>)((longlong)FVar20 + 4);
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  if (local_54 == 0) {
    FVar20 = (this->ZeroMask).AllocatorInstance.SecondaryData;
    iVar12 = (this->ZeroMask).NumBits;
    if (FVar20 == (ForElementType<unsigned_int>)0x0) {
      FVar20 = (ForElementType<unsigned_int>)&this->ZeroMask;
    }
    uVar17 = iVar12 + 0x1f;
    FVar15 = FVar20;
    if (uVar17 >> 5 == 0) {
LAB_141f92197:
      bVar11 = false;
    }
    else {
      do {
        if (*(int *)FVar15 != -1) {
          uVar17 = ~*(uint *)((longlong)FVar20 + uVar23 * 4);
          iVar9 = 0;
          if (uVar17 != 0) {
            for (; (uVar17 >> iVar9 & 1) == 0; iVar9 = iVar9 + 1) {
            }
          }
          iVar22 = 0x20;
          if (uVar17 != 0) {
            iVar22 = iVar9;
          }
          iVar22 = iVar22 + (int)uVar23 * 0x20;
          if ((iVar22 < iVar12) && (iVar22 != -1)) goto LAB_141f9219b;
          goto LAB_141f92197;
        }
        uVar21 = (int)uVar23 + 1;
        uVar23 = (ulonglong)uVar21;
        FVar15 = (ForElementType<unsigned_int>)((longlong)FVar15 + 4);
      } while ((int)uVar21 < (int)(uVar17 >> 5));
      bVar11 = false;
    }
  }
  else {
LAB_141f9219b:
    bVar11 = true;
  }
  this->bHasNonZeroValues = bVar11;
  return;
}

// SaveZeroMaskData @ 141f9aac0

void __thiscall
FUnversionedHeader::SaveZeroMaskData
          (FUnversionedHeader *this,FStructuredArchiveStream param_1,uint param_2,uint *param_3)

{
  longlong *plVar1;
  FArchive *pFVar2;
  uint *puVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  byte local_res18 [8];
  ushort local_28 [2];
  uint local_24;
  uint local_20 [2];
  
  if ((param_2 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\UnversionedPropertySerialization.cpp"
                         ,0x2c2,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = 0xffffffff >> (-(char)param_2 & 0x1fU);
  if (param_2 < 9) {
    local_res18[0] = (byte)uVar8 & (byte)*param_3;
    if ((local_res18[0] == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Word != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\UnversionedPropertySerialization.cpp"
                           ,0x2c8,L"Zero mask shouldn\'t be saved when no bits are set"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar1 = *(longlong **)(*(longlong *)param_1 + 8);
    if ((ulonglong)((longlong *)plVar1[1])[1] < *(longlong *)plVar1[1] + 1U) {
      (**(code **)(*plVar1 + 0x188))(plVar1,local_res18,1);
      return;
    }
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 1;
    return;
  }
  if (0x10 < param_2) {
    uVar9 = (param_2 + 0x1f >> 5) - 1;
    if (uVar9 != 0) {
      uVar6 = (ulonglong)uVar9;
      puVar7 = param_3;
      do {
        local_24 = *puVar7;
        pFVar2 = *(FArchive **)(*(longlong *)param_1 + 8);
        puVar3 = (uint *)**(undefined8 **)&pFVar2->field_0x8;
        if ((uint *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
          if ((pFVar2->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,&local_24,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar2,&local_24);
          }
        }
        else {
          local_24 = *puVar3;
          **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
        }
        puVar7 = puVar7 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    local_20[0] = param_3[uVar9] & uVar8;
    pFVar2 = *(FArchive **)(*(longlong *)param_1 + 8);
    if ((ulonglong)(*(longlong **)&pFVar2->field_0x8)[1] < **(longlong **)&pFVar2->field_0x8 + 4U) {
      if ((pFVar2->field_0x2a & 1) != 0) {
        FArchive::SerializeByteOrderSwapped(pFVar2,local_20);
        return;
      }
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_20,4);
      return;
    }
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
    return;
  }
  local_28[0] = (ushort)uVar8 & (ushort)*param_3;
  if ((local_28[0] == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Word != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\UnversionedPropertySerialization.cpp"
                         ,0x2ce,L"Zero mask shouldn\'t be saved when no bits are set"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = *(FArchive **)(*(longlong *)param_1 + 8);
  if (**(longlong **)&pFVar2->field_0x8 + 2U <= (ulonglong)(*(longlong **)&pFVar2->field_0x8)[1]) {
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 2;
    return;
  }
  if ((pFVar2->field_0x2a & 1) != 0) {
    FArchive::SerializeByteOrderSwapped(pFVar2,local_28);
    return;
  }
  (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_28,2);
  return;
}

