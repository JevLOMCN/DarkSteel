// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// FMetadataStorage @ 14a2d8d40

FMetadataStorage * __thiscall
URigHierarchy::FMetadataStorage::FMetadataStorage(FMetadataStorage *this,FMetadataStorage *param_1)

{
  undefined1 *_Dst;
  void *pvVar1;
  undefined1 *_Src;
  
  *(undefined8 *)&this->MetadataMap = 0;
  *(undefined8 *)&(this->MetadataMap).field_0x8 = 0;
  *(undefined8 *)&(this->MetadataMap).field_0x20 = 0;
  *(undefined4 *)&(this->MetadataMap).field_0x28 = 0;
  *(undefined4 *)&(this->MetadataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetadataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetadataMap).field_0x34 = 0;
  *(undefined8 *)&(this->MetadataMap).field_0x40 = 0;
  *(undefined4 *)&(this->MetadataMap).field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)&this->MetadataMap = *(undefined8 *)&param_1->MetadataMap;
    *(undefined8 *)&param_1->MetadataMap = 0;
    *(undefined4 *)&(this->MetadataMap).field_0x8 = *(undefined4 *)&(param_1->MetadataMap).field_0x8
    ;
    *(undefined4 *)&(this->MetadataMap).field_0xc = *(undefined4 *)&(param_1->MetadataMap).field_0xc
    ;
    *(undefined8 *)&(param_1->MetadataMap).field_0x8 = 0;
    _Src = &(param_1->MetadataMap).field_0x10;
    _Dst = &(this->MetadataMap).field_0x10;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->MetadataMap).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->MetadataMap).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->MetadataMap).field_0x20 =
           *(undefined8 *)&(param_1->MetadataMap).field_0x20;
      *(undefined8 *)&(param_1->MetadataMap).field_0x20 = 0;
      *(undefined4 *)&(this->MetadataMap).field_0x28 =
           *(undefined4 *)&(param_1->MetadataMap).field_0x28;
      *(undefined4 *)&(this->MetadataMap).field_0x2c =
           *(undefined4 *)&(param_1->MetadataMap).field_0x2c;
      *(undefined8 *)&(param_1->MetadataMap).field_0x28 = 0;
    }
    *(undefined4 *)&(this->MetadataMap).field_0x30 =
         *(undefined4 *)&(param_1->MetadataMap).field_0x30;
    *(undefined4 *)&(this->MetadataMap).field_0x34 =
         *(undefined4 *)&(param_1->MetadataMap).field_0x34;
    *(undefined4 *)&(param_1->MetadataMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->MetadataMap).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->MetadataMap).field_0x40 == 0) {
    *(undefined4 *)&(this->MetadataMap).field_0x38 =
         *(undefined4 *)&(param_1->MetadataMap).field_0x38;
  }
  pvVar1 = *(void **)&(this->MetadataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined8 *)&(this->MetadataMap).field_0x40 = *(undefined8 *)&(param_1->MetadataMap).field_0x40
  ;
  *(undefined8 *)&(param_1->MetadataMap).field_0x40 = 0;
  *(undefined4 *)&(this->MetadataMap).field_0x48 = *(undefined4 *)&(param_1->MetadataMap).field_0x48
  ;
  *(undefined4 *)&(param_1->MetadataMap).field_0x48 = 0;
  this->LastAccessName = param_1->LastAccessName;
  this->LastAccessMetadata = param_1->LastAccessMetadata;
  return this;
}

// Reset @ 14a340660

void __thiscall URigHierarchy::FMetadataStorage::Reset(FMetadataStorage *this)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  void *pvVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UScriptStruct *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  ERigMetadataType local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar4 = *(int *)&(this->MetadataMap).field_0x28;
  puVar1 = &(this->MetadataMap).field_0x10;
  iVar14 = 0;
  iVar16 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->MetadataMap).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14a3406fd;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iVar9 = local_res18 + -1 + iVar16;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14a3406fd:
  uVar13 = *(uint *)&(this->MetadataMap).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar8,iVar14);
  TStack_68.CurrentBitIndex = iVar9;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iVar9;
  TStack_68.BaseBitIndex = iVar16;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->MetadataMap).field_0x8 -
                       *(int *)&(this->MetadataMap).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->MetadataMap).field_0x28;
  if (uVar13 != uVar8) {
    puVar15 = *(undefined1 **)&(this->MetadataMap).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14a340800;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    uVar13 = local_res20 + -1 + uVar12;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_14a340800:
  while( true ) {
    if (*(int *)&(this->MetadataMap).field_0x8 - *(int *)&(this->MetadataMap).field_0x34 !=
        (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FRigBaseMetadata_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar13) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      TSet<TTuple<FName,FRigBaseMetadata_*>,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FName,FRigBaseMetadata_*>,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>,FDefaultSetAllocator>
               *)this);
      (this->LastAccessName).ComparisonIndex = 0;
      (this->LastAccessName).Number = 0;
      this->LastAccessMetadata = (FRigBaseMetadata *)0x0;
      return;
    }
    puVar2 = (undefined8 *)
             (*(longlong *)&this->MetadataMap + 8 + (longlong)TStack_68.CurrentBitIndex * 0x18);
    if ((puVar2 == (undefined8 *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Metadata",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyMetadata.cpp"
                           ,0x7f,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pvVar5 = (void *)*puVar2;
    if ((pvVar5 == (void *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Md",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyMetadata.cpp"
                           ,0x81,L""), bVar7)) break;
    local_res10[0] = *(ERigMetadataType *)((longlong)pvVar5 + 0x10);
    pUVar10 = FRigBaseMetadata::GetMetadataStruct(local_res10);
    if (pUVar10 != (UScriptStruct *)0x0) {
      (**(code **)(pUVar10->_padding_ + 0x300))(pUVar10,pvVar5,1);
    }
    FMemory::Free(pvVar5);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// Serialize @ 14a348c20

void __thiscall URigHierarchy::FMetadataStorage::Serialize(FMetadataStorage *this,FArchive *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  code *pcVar7;
  FMetadataStorage *pFVar8;
  bool bVar9;
  long64 lVar10;
  UPackage *pUVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  FName local_d8;
  FName local_d0;
  FMetadataStorage *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TPairInitializer<FName_const_&,FRigBaseMetadata_*_const_&> local_98;
  undefined8 local_88;
  undefined1 local_80 [8];
  FMetadataStorage *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  FName *local_48;
  FRigBaseMetadata ***local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (Z_Registration_Info_UEnum_ERigMetadataType.OuterSingleton == (UEnum *)0x0) {
      pUVar11 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UEnum_ERigMetadataType.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigMetadataType,(UObject *)pUVar11,
                         L"ERigMetadataType");
    }
    MetadataTypeEnum = Z_Registration_Info_UEnum_ERigMetadataType.OuterSingleton;
    _Init_thread_footer(&::_TSS0);
  }
  if ((param_1->field_0x28 & 1) == 0) {
    local_res20[0] =
         *(int *)&(this->MetadataMap).field_0x8 - *(int *)&(this->MetadataMap).field_0x34;
    plVar6 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    iVar17 = *(int *)&(this->MetadataMap).field_0x28;
    puVar1 = &(this->MetadataMap).field_0x10;
    iStack_c0 = 0;
    uStack_bc = 1;
    local_a8 = 0;
    iStack_ac = 0;
    if (iVar17 != 0) {
      puVar16 = *(uint **)&(this->MetadataMap).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar13 = *puVar16;
      while (uVar13 == 0) {
        lVar12 = (longlong)iStack_c0;
        local_a8 = local_a8 + 0x20;
        iStack_c0 = iStack_c0 + 1;
        iStack_ac = iVar17;
        if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_14a348ea1;
        uVar13 = puVar16[lVar12 + 1];
      }
      uStack_bc = -uVar13 & uVar13;
      uVar3 = (ulonglong)uStack_bc * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_98.Key._4_4_ = (int)lVar12;
      iStack_ac = local_a8 + -1 + local_98.Key._4_4_;
      if (iVar17 < iStack_ac) {
        iStack_ac = iVar17;
      }
    }
LAB_14a348ea1:
    uVar13 = *(uint *)&(this->MetadataMap).field_0x28;
    uVar18 = uVar13 & 0xffffffe0;
    iStack_a0 = *(int *)&(this->MetadataMap).field_0x8 - *(int *)&(this->MetadataMap).field_0x34;
    uStack_b0 = 0xffffffff;
    TStack_70._padding_ = CONCAT44(uStack_bc,iStack_c0);
    TStack_70.CurrentBitIndex = iStack_ac;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar13 >> 5;
    TStack_70._28_4_ = iStack_ac;
    TStack_70.BaseBitIndex = local_a8;
    uStack_50 = CONCAT44(uStack_9c,iStack_a0);
    local_c8 = this;
    local_b8 = puVar1;
    iStack_a4 = iStack_ac;
    local_78 = this;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar17 < (int)uVar13)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar5 = *(uint *)&(this->MetadataMap).field_0x28;
    if (uVar13 != uVar5) {
      puVar15 = *(undefined1 **)&(this->MetadataMap).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14a348fa0;
        uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar13 = (int)lVar12 + -1 + uVar18;
      if ((int)uVar5 < (int)uVar13) {
        uVar13 = uVar5;
      }
    }
LAB_14a348fa0:
    while( true ) {
      pFVar8 = local_78;
      if (*(int *)&(local_78->MetadataMap).field_0x8 - *(int *)&(local_78->MetadataMap).field_0x34
          != (int)uStack_50) {
        `TSparseArray<TSparseSetElement<TTuple<FName,FRigBaseMetadata_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_70.CurrentBitIndex == uVar13) &&
          (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar8 == this))
      break;
      puVar2 = (undefined8 *)
               (*(longlong *)&pFVar8->MetadataMap + (longlong)TStack_70.CurrentBitIndex * 0x18);
      local_88 = *puVar2;
      UEnum::GetNameByValue(MetadataTypeEnum,(long64)local_80);
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_88);
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_80);
      plVar6 = (longlong *)puVar2[1];
      (**(code **)(*plVar6 + 8))(plVar6,param_1);
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    }
  }
  else {
    Reset(this);
    plVar6 = *(longlong **)&param_1->field_0x8;
    iVar17 = 0;
    local_res18[0] = 0;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    uVar13 = local_res18[0];
    if ((uint)(*(int *)&(this->MetadataMap).field_0x8 - *(int *)&(this->MetadataMap).field_0x34) <
        local_res18[0]) {
      if ((int)local_res18[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)local_res18[0]);
      }
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this,local_res18[0]);
      iVar14 = 1;
      if (3 < uVar13) {
        uVar3 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar14 = 1 << ((byte)lVar12 & 0x1f);
      }
      iVar4 = *(int *)&(this->MetadataMap).field_0x48;
      if ((iVar4 == 0) || (iVar4 < iVar14)) {
        *(int *)&(this->MetadataMap).field_0x48 = iVar14;
        TSet<TTuple<FName,FRigBaseMetadata_*>,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FName,FRigBaseMetadata_*>,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>,FDefaultSetAllocator>
                  *)this);
      }
    }
    if (0 < (int)local_res18[0]) {
      local_48 = &local_d8;
      local_40 = &local_98.Value;
      do {
        local_d8.ComparisonIndex.Value = 0;
        local_d8.Number = 0;
        local_d0.ComparisonIndex.Value = 0;
        local_d0.Number = 0;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_d8);
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_d0);
        lVar10 = UEnum::GetValueByName(MetadataTypeEnum,local_d0,None);
        local_98.Value =
             (FRigBaseMetadata **)FRigBaseMetadata::MakeMetadata(&local_d8,(ERigMetadataType)lVar10)
        ;
        (**(code **)(((FRigBaseMetadata *)local_98.Value)->_padding_ + 8))(local_98.Value,param_1);
        TSet<TTuple<FName,FRigBaseMetadata_*>,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FRigBaseMetadata_*_const_&>_>
                  ((TSet<TTuple<FName,FRigBaseMetadata_*>,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>,FDefaultSetAllocator>
                    *)this,&local_98,(bool *)&local_48);
        iVar17 = iVar17 + 1;
      } while (iVar17 < (int)local_res18[0]);
    }
  }
  return;
}

